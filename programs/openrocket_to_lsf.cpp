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
// Author: Luis Venancio                                                    *
//***************************************************************************
// Converter from openrocket simulation csv to lsf log.                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

int
main(int32_t argc, char** argv)
{
  if (argc != 3)
  {
    std::cerr << "Usage: " << argv[0] << " <path_to_data.csv> <path_to_log.lsf>"
              << std::endl;
    return 1;
  }
  
  std::string line;
  ByteBuffer buffer;
  std::ifstream csv(argv[1]);
  std::ofstream lsf(argv[2], std::ios::binary);

  if (!csv.good())
    return 1;

  if (!csv.is_open())
    return 1;

  if (!lsf.is_open())
    return 1;

  std::cout << "Converting..." << "\n";
  while (getline(csv, line))
  {
    double time;
    double alt;
    double vz;
    double az;
    sscanf(line.c_str(), "%lf, %lf, %lf, %lf", &time, &alt, &vz, &az);
    
    // Debug
    // std::cout << time << " " 
    //           << alt << " "
    //           << vz << " "
    //           << az << '\n';

    IMC::EstimatedState estate;
    estate.setTimeStamp(time);
    estate.height = alt;
    estate.w = vz;
    IMC::Packet::serialize(&estate, buffer);
    lsf.write(buffer.getBufferSigned(), buffer.getSize());


    IMC::Acceleration acc;
    acc.setTimeStamp(time);
    acc.z = alt;
    IMC::Packet::serialize(&acc, buffer);
    lsf.write(buffer.getBufferSigned(), buffer.getSize());
  }
  std::cout << "Done" << "\n";
  
  lsf.close();
  csv.close();

  return 0;
}
