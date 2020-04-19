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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_ESCC_HPP_INCLUDED_
#define DUNE_HARDWARE_ESCC_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/IO/Handle.hpp>

namespace DUNE
{
  namespace Hardware
  {
    class ESCC: public IO::Handle
    {
    public:
      ESCC(const std::string& dev);

      ~ESCC(void) override;

    private:
      //! Device name.
      std::string m_dev;
      //! Low-level handle.
      int m_handle;

      IO::NativeHandle
      doGetNative(void) const override
      {
#if defined(DUNE_OS_POSIX)
        return m_handle;
#else
        return 0;
#endif
      }

      size_t
      doRead(uint8_t* bfr, size_t size) override;

      size_t
      doWrite(const uint8_t* bfr, size_t size) override;

      void
      doFlush(void) override;
    };
  }
}

#endif
