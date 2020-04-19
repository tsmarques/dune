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

#ifndef DUNE_STREAMS_OUTPUT_MULTIPLEXER_BUFFER_HPP_INCLUDED_
#define DUNE_STREAMS_OUTPUT_MULTIPLEXER_BUFFER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <streambuf>
#include <ostream>
#include <vector>
#include <iostream>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Streams
  {
    class OutputMultiplexerBuffer: public std::streambuf
    {
    public:
      OutputMultiplexerBuffer(void);

      OutputMultiplexerBuffer(std::ostream* stream);

      
      ~OutputMultiplexerBuffer(void) override;

      void
      add(std::ostream* stream);

    protected:
      int
      sync(void) override;

      int_type
      overflow(int_type c) override;

      int_type
      underflow(void) override
      {
        std::cerr << "underflow" << std::endl;
        return 1;
      }

      std::streamsize
      xsputn(const char* bfr, std::streamsize length) override;

    private:
      //! Associated output streams.
      std::vector<std::ostream*> m_streams;
    };
  }
}

#endif
