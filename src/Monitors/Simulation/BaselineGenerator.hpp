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
// Author: Tiago Sa Marques                                                 *
//***************************************************************************

#ifndef MONITORS_SIMULATION_BASELINE_GENERATOR_HPP_INCLUDED_
#define MONITORS_SIMULATION_BASELINE_GENERATOR_HPP_INCLUDED_

#include <memory>
#include <optional>

#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Compression.hpp>

// Local headers
// #include "Baseline.hpp"
#include "BaselineReplay.hpp"

using namespace DUNE;

namespace Monitors::Simulation::BaselineGenerator
{
  std::unique_ptr<std::istream>
  getInputStream(const std::string& file)
  {
    if (!FileSystem::Path(file).isFile())
    {
      DUNE_ERR("Baseline", file.c_str() << " is not a regular file");
      return nullptr;
    }

    try
    {
      Compression::Methods method =
          Compression::Factory::detect(file.c_str());
      if (method == Compression::METHOD_UNKNOWN)
        return std::make_unique<std::ifstream>(file.c_str(), std::ios::binary);
      else
        return std::make_unique<Compression::FileInput>(file.c_str(), method);
    }
    catch (std::exception& e)
    {
      DUNE_ERR("Baseline", "could not open file: " << e.what());
      return nullptr;
    }
  }

  bool
  isReplay(const std::string& file)
  {
    std::unique_ptr<std::istream> aux = getInputStream(file);

    IMC::Message* m = nullptr;
    if ((m = DUNE::IMC::Packet::deserialize(*aux)) == nullptr)
      return false;

    return m->getTimeStamp() != 0;
  }

  std::unique_ptr<Baseline>
  generateBaseline(DUNE::Tasks::Task* owner, const std::string& lsf)
  {
    std::unique_ptr<std::istream> is = getInputStream(lsf);
    
    if (is == nullptr)
      return nullptr;

    if (isReplay(lsf))
      return std::make_unique<BaselineReplay>(owner, std::move(is));

    return std::make_unique<Baseline>(owner, std::move(is));
  }
}

#endif
