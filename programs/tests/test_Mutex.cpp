//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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

// ISO C++ 98 headers.
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Test.hpp"

using namespace DUNE::Concurrency;

int
main(void)
{
  Test test("Concurrency::Mutex");

  {
    try
    {
      Mutex mutex;
      test.passed("constructor");
    }
    catch (std::exception& e)
    {
      test.failed(DUNE::Utils::String::str("constructor: %s", e.what()).c_str());
    }
  }

  {
    try
    {
      Mutex mutex;
      mutex.lock();
      test.passed("lock");
    }
    catch (std::exception& e)
    {
      test.failed(DUNE::Utils::String::str("lock: %s", e.what()).c_str());
    }
  }

  {
    try
    {
      Mutex mutex;
      mutex.lock();
      mutex.unlock();
      test.passed("lock/unlock");
    }
    catch (std::exception& e)
    {
      test.failed(DUNE::Utils::String::str("lock/unlock: %s", e.what()).c_str());
    }
  }

  return 0;
}
