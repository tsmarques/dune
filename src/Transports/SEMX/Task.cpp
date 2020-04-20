//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: tsm                                                              *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  //! Driver for the SEMX Board
  //!
  //! SEMX: Serial over Ethernet MultipleXer
  //! @author tsm <samarques.tiago@gmail.com>
  namespace SEMX
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! SEMX's TCP address
      Address tcp_addr;
      // SEMX's main TCP port
      uint16_t tcp_port;
    };

    static const char* c_semx_heartbeat = "\r\nHeartbeat\n\r";

    struct Task: public DUNE::Tasks::Task
    {
      //! TCP Socket to connect to SEMX
      TCPSocket* m_sock;
      //! Working buffer for this task
      uint8_t m_bfr[1024];
      //! SEMX's heartbeat watchdog
      Time::Counter<float> m_semx_heartbeat;
      //! Task arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_sock(NULL),
        m_semx_heartbeat(1.0)
      {
        param("TCP - Address", m_args.tcp_addr)
        .defaultValue("192.168.1.10")
        .description("Address for connection to SEMX");

        param("TCP - Port", m_args.tcp_port)
        .defaultValue("1000")
        .description("SEMX's TCP port");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_sock = new TCPSocket;
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        connect();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_sock);
      }

      bool
      connect()
      {
        try
        {
          inf("Connecting");
          if (!m_sock)
            m_sock = new TCPSocket;
          m_sock->connect(m_args.tcp_addr, m_args.tcp_port);
          m_sock->setNoDelay(true);
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          return true;
        }
        catch (...)
        {
          Memory::clear(m_sock);
          war(DTR("Connection failed, retrying..."));
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);

          return false;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (!m_sock && !connect())
            continue;

          int ret = m_sock->read(m_bfr, sizeof(m_bfr));
          if (ret == 0)
          {
            war("Failed to read from socket\n");
            continue;
          }

          m_bfr[ret] = '\0';
          if (std::strncmp((char*) m_bfr, c_semx_heartbeat, strlen(c_semx_heartbeat)) == 0)
          {
            m_semx_heartbeat.reset();
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            continue;
          }

          if (m_semx_heartbeat.overflow())
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
            throw RestartNeeded("Failed to receive heartbeat", 2.0);
          }
        }
      }
    };
  }
}

DUNE_TASK
