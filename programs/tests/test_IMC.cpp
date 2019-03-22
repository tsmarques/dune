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
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 45c0e65fd4d14d2ba8898bc01a1d8928                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.39317024068850936);
    msg.setSource(21699U);
    msg.setSourceEntity(102U);
    msg.setDestination(18887U);
    msg.setDestinationEntity(22U);
    msg.state = 225U;
    msg.flags = 34U;
    msg.description.assign("QVUPXKCDLQKOZEVQMFYYYPIMNFEURZGJTLTTIAHOEULRWMRTMAKAJYSSOJNWKADQVFVJDRTXZHWNN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.14033697055760708);
    msg.setSource(17353U);
    msg.setSourceEntity(168U);
    msg.setDestination(64710U);
    msg.setDestinationEntity(108U);
    msg.state = 61U;
    msg.flags = 195U;
    msg.description.assign("BWGIAHUKIFKJYOPCRGKUNLEMHDYUR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.7461762287254554);
    msg.setSource(58797U);
    msg.setSourceEntity(228U);
    msg.setDestination(10451U);
    msg.setDestinationEntity(134U);
    msg.state = 59U;
    msg.flags = 20U;
    msg.description.assign("MRCXNDAAZRFRUFKIWHELYBNOCNLAZJHKJOWGEVUGWRAXBVRFYLQHFTMBBKGKEYYICSIRKHBAGSBWTGFGOMLXLFCHSRHNTJTSJKUHRQGGJZLDWQBLJHPEPXOFZSXMUGMXGZWTYKNEUKCSEWCXVLZDBEPAEMZOQZMCDENPWICLPSKRKANOOQAQYQVYPOBFNX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.9460965165905575);
    msg.setSource(38721U);
    msg.setSourceEntity(23U);
    msg.setDestination(32539U);
    msg.setDestinationEntity(72U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.8509259536267773);
    msg.setSource(7069U);
    msg.setSourceEntity(157U);
    msg.setDestination(41032U);
    msg.setDestinationEntity(73U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.10144637280107904);
    msg.setSource(10533U);
    msg.setSourceEntity(240U);
    msg.setDestination(55823U);
    msg.setDestinationEntity(214U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.7071096591649239);
    msg.setSource(13466U);
    msg.setSourceEntity(97U);
    msg.setDestination(31671U);
    msg.setDestinationEntity(19U);
    msg.id = 32U;
    msg.label.assign("SMKDXONVZQOBVBFEDYCMEAIISXYXEVWJHJCNTREEWATGVMLQHAPTRIPYPGZEDHWQRDCTFFGDRUSMUQKRSPFTEULJFOUQLUXIRWAHWY");
    msg.component.assign("WVZGKHOHXWIDGEZZXQYSNQBCK");
    msg.act_time = 25717U;
    msg.deact_time = 21327U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.31394144036149063);
    msg.setSource(30223U);
    msg.setSourceEntity(178U);
    msg.setDestination(14101U);
    msg.setDestinationEntity(60U);
    msg.id = 113U;
    msg.label.assign("HYPDMFJJORWUOOWNWFNLDN");
    msg.component.assign("DBJOSCQNFLXEWDGQNRLYBIRVAMUFYURMBFDDAVXOXPEQKMVQLSPCUJASEH");
    msg.act_time = 29454U;
    msg.deact_time = 42819U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.15898784233115926);
    msg.setSource(31773U);
    msg.setSourceEntity(9U);
    msg.setDestination(37747U);
    msg.setDestinationEntity(122U);
    msg.id = 19U;
    msg.label.assign("RIEDGOCCWTVXHKNBV");
    msg.component.assign("RLZZWAOAOSLCBXJJBUFARCHXOEAOKLDNSKV");
    msg.act_time = 18808U;
    msg.deact_time = 21060U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.34485473777475195);
    msg.setSource(5006U);
    msg.setSourceEntity(19U);
    msg.setDestination(59990U);
    msg.setDestinationEntity(145U);
    msg.id = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.612450054317289);
    msg.setSource(9296U);
    msg.setSourceEntity(101U);
    msg.setDestination(62656U);
    msg.setDestinationEntity(52U);
    msg.id = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.0863890780539378);
    msg.setSource(23440U);
    msg.setSourceEntity(73U);
    msg.setDestination(14906U);
    msg.setDestinationEntity(145U);
    msg.id = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.49777976031873195);
    msg.setSource(35042U);
    msg.setSourceEntity(75U);
    msg.setDestination(45460U);
    msg.setDestinationEntity(11U);
    msg.op = 223U;
    msg.list.assign("RAVYWULCJGJOIHURVVIAFZFAFKEMGZSWLTNLAEZNCULHZPGZTVAWTHZCXNOXAJSO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.612372851034422);
    msg.setSource(37260U);
    msg.setSourceEntity(93U);
    msg.setDestination(8312U);
    msg.setDestinationEntity(2U);
    msg.op = 120U;
    msg.list.assign("YEMUEPJSDETDKZIHVMRAKGFBDQUSOTXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.5717931137842472);
    msg.setSource(55410U);
    msg.setSourceEntity(3U);
    msg.setDestination(5319U);
    msg.setDestinationEntity(212U);
    msg.op = 9U;
    msg.list.assign("VSREMVVKMQRAQRUYPNEZFWFSOCCZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.5050119306582898);
    msg.setSource(32815U);
    msg.setSourceEntity(180U);
    msg.setDestination(38494U);
    msg.setDestinationEntity(179U);
    msg.value = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.9910445417633608);
    msg.setSource(57889U);
    msg.setSourceEntity(232U);
    msg.setDestination(33484U);
    msg.setDestinationEntity(247U);
    msg.value = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.5616797419228631);
    msg.setSource(53459U);
    msg.setSourceEntity(116U);
    msg.setDestination(61910U);
    msg.setDestinationEntity(154U);
    msg.value = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.8562150528708694);
    msg.setSource(31642U);
    msg.setSourceEntity(137U);
    msg.setDestination(59767U);
    msg.setDestinationEntity(252U);
    msg.consumer.assign("AEBSADTWVCKVANVHETTLQLDTFWLCKUZBGBJCJXMFUDYOKPPCYSOFSEWRGESYRINJIHBVOZTNBBTYKZAUWODJQWRKMHFCHISIPCJXYHJGFCPLQOPWUXYXLXFKHGUDRNWNJZITDVFSDMGPRNEOCAEXIEKWFXGARDQQBUFPCHKSUTTBBSENSQVBHUIVYMADGOKGQNMLIYERMMMRQXUZPAVXKCALZRLLPWYOIVZHPZQYQGNMDLTXU");
    msg.message_id = 39052U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.16920307209371688);
    msg.setSource(16931U);
    msg.setSourceEntity(99U);
    msg.setDestination(40415U);
    msg.setDestinationEntity(234U);
    msg.consumer.assign("ZTWDHKPRRJSAHYBXIPFOVKGQUEUGZKFXPSTWNMZBKVLKELOJFXZMTNXXBWWPMIGGAUHVMFGZSFBZKRYFDHFISHUSJAJFSCLQNITJWBLTKRQLOVWVVRDOGLYCSIMPPDCENOZGVRUOJXEUTMEQUIYMDQKQCEHAEHHJCXNTFUVPCLMSCCUCMKNRZDETAOJJXIUBQBGQFWLXAMXBNROPLVOHHRYDYWWSADGEYNZTQDSABJKNQDWV");
    msg.message_id = 61538U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.1624732955173337);
    msg.setSource(52200U);
    msg.setSourceEntity(207U);
    msg.setDestination(54908U);
    msg.setDestinationEntity(111U);
    msg.consumer.assign("MSYVJHKPZTWEXUZ");
    msg.message_id = 10290U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.8923964956708013);
    msg.setSource(12221U);
    msg.setSourceEntity(17U);
    msg.setDestination(16584U);
    msg.setDestinationEntity(115U);
    msg.type = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.8073179030394573);
    msg.setSource(52310U);
    msg.setSourceEntity(106U);
    msg.setDestination(17798U);
    msg.setDestinationEntity(175U);
    msg.type = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.14716274000122542);
    msg.setSource(6646U);
    msg.setSourceEntity(174U);
    msg.setDestination(60363U);
    msg.setDestinationEntity(117U);
    msg.type = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.2128923963392032);
    msg.setSource(56561U);
    msg.setSourceEntity(245U);
    msg.setDestination(53169U);
    msg.setDestinationEntity(177U);
    msg.op = 143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.47450688246659845);
    msg.setSource(22633U);
    msg.setSourceEntity(39U);
    msg.setDestination(2816U);
    msg.setDestinationEntity(153U);
    msg.op = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.576391217623705);
    msg.setSource(50462U);
    msg.setSourceEntity(113U);
    msg.setDestination(64705U);
    msg.setDestinationEntity(122U);
    msg.op = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.4767071077585595);
    msg.setSource(13194U);
    msg.setSourceEntity(69U);
    msg.setDestination(48681U);
    msg.setDestinationEntity(152U);
    msg.total_steps = 230U;
    msg.step_number = 220U;
    msg.step.assign("BSGTUKRXFZLRWYMWAZIRTGCLETXLNHBUELPLTS");
    msg.flags = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.7765570182940944);
    msg.setSource(25803U);
    msg.setSourceEntity(78U);
    msg.setDestination(46798U);
    msg.setDestinationEntity(189U);
    msg.total_steps = 237U;
    msg.step_number = 170U;
    msg.step.assign("EFCTVQODZAXMFFQHCL");
    msg.flags = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.863440847577775);
    msg.setSource(15190U);
    msg.setSourceEntity(204U);
    msg.setDestination(11156U);
    msg.setDestinationEntity(77U);
    msg.total_steps = 157U;
    msg.step_number = 132U;
    msg.step.assign("INCZNYGTRJGVAESOCHPSNXSKCVIVQDXWHBBJWCQRDKZBTVZJGUQDOOMIXRNOQJCHUOMRDUPKPFMJLZSTPBEHLKOKUTLFDXSIGBCAKGFLOQMIO");
    msg.flags = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.41870930207692525);
    msg.setSource(42415U);
    msg.setSourceEntity(57U);
    msg.setDestination(17934U);
    msg.setDestinationEntity(0U);
    msg.state = 228U;
    msg.error.assign("TLXXWQPZEQSJBGUREHUPMEFVQKOIMGQFOIJUYSBKYQHRKDCOBJCGDYTDEFNZXHFYPBTTMFJXZJATTPRVBZPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.8931662782688876);
    msg.setSource(61465U);
    msg.setSourceEntity(100U);
    msg.setDestination(63517U);
    msg.setDestinationEntity(195U);
    msg.state = 197U;
    msg.error.assign("MHIZNTFSPYSLTRVNTYRCKFRTUURDPAWISVJJCXQWBZLCBEMNAQZJBVNZOWJYTUPDHRFQXOCCWPVFZLDHSBC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.08884842537559978);
    msg.setSource(40510U);
    msg.setSourceEntity(247U);
    msg.setDestination(42670U);
    msg.setDestinationEntity(99U);
    msg.state = 167U;
    msg.error.assign("RHBLEWKNFEQAGVAZCPUDGHWKBSMXIKJGMQJGXGDFUUYAUXUVQYQNWCVXWDJZOMHROSGSPMGHVSYDEPYVWHJBQCTTETOMCBXDOKAFLZSJCLLEJQTONKCQFFYBTSJHUKRTLVRNLHOOVRDMTGWWNDAWIDWBNPSXTIRFKPUGZOREPKFCETXIUELCSOAQFNPTZNRMIISXKPDMBZCCYL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.6925902301959712);
    msg.setSource(12451U);
    msg.setSourceEntity(27U);
    msg.setDestination(11214U);
    msg.setDestinationEntity(206U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.3941196423378043);
    msg.setSource(15976U);
    msg.setSourceEntity(68U);
    msg.setDestination(55992U);
    msg.setDestinationEntity(9U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.8353369611515953);
    msg.setSource(15244U);
    msg.setSourceEntity(20U);
    msg.setDestination(27795U);
    msg.setDestinationEntity(180U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.27370991516661647);
    msg.setSource(39928U);
    msg.setSourceEntity(146U);
    msg.setDestination(46519U);
    msg.setDestinationEntity(100U);
    msg.op = 246U;
    msg.speed_min = 0.19796040163806894;
    msg.speed_max = 0.6591835577624068;
    msg.long_accel = 0.8054555448165815;
    msg.alt_max_msl = 0.4984508422429552;
    msg.dive_fraction_max = 0.9949269359977844;
    msg.climb_fraction_max = 0.2792480522351165;
    msg.bank_max = 0.8654428353507716;
    msg.p_max = 0.5096749743511099;
    msg.pitch_min = 0.1010643913808501;
    msg.pitch_max = 0.2220283643819091;
    msg.q_max = 0.19532383254023544;
    msg.g_min = 0.6461796342408017;
    msg.g_max = 0.44956830858229435;
    msg.g_lat_max = 0.7045602954894512;
    msg.rpm_min = 0.9724400460479976;
    msg.rpm_max = 0.9833083261727158;
    msg.rpm_rate_max = 0.29879449601624664;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.2674326569608343);
    msg.setSource(32563U);
    msg.setSourceEntity(160U);
    msg.setDestination(43369U);
    msg.setDestinationEntity(64U);
    msg.op = 89U;
    msg.speed_min = 0.1267136164110414;
    msg.speed_max = 0.7563584351103972;
    msg.long_accel = 0.8879690882150644;
    msg.alt_max_msl = 0.6096853857132496;
    msg.dive_fraction_max = 0.010215832377953649;
    msg.climb_fraction_max = 0.9904634054382564;
    msg.bank_max = 0.40071996222847706;
    msg.p_max = 0.5189639533712815;
    msg.pitch_min = 0.8295750704064023;
    msg.pitch_max = 0.8921208488118382;
    msg.q_max = 0.9064207802210038;
    msg.g_min = 0.14597603894907385;
    msg.g_max = 0.645628662435936;
    msg.g_lat_max = 0.9893347584902337;
    msg.rpm_min = 0.18250123570112442;
    msg.rpm_max = 0.2692629604446234;
    msg.rpm_rate_max = 0.1969500354679672;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.4731589453413526);
    msg.setSource(36200U);
    msg.setSourceEntity(247U);
    msg.setDestination(52653U);
    msg.setDestinationEntity(170U);
    msg.op = 123U;
    msg.speed_min = 0.039776608939546376;
    msg.speed_max = 0.6674632554123092;
    msg.long_accel = 0.5753151330150683;
    msg.alt_max_msl = 0.7199587245451083;
    msg.dive_fraction_max = 0.9030713430981476;
    msg.climb_fraction_max = 0.4954433854343955;
    msg.bank_max = 0.4348249926230172;
    msg.p_max = 0.5561314429552171;
    msg.pitch_min = 0.42695327507677683;
    msg.pitch_max = 0.49757974488819745;
    msg.q_max = 0.9260762878445999;
    msg.g_min = 0.73994428489197;
    msg.g_max = 0.022794667288638215;
    msg.g_lat_max = 0.20162892761079454;
    msg.rpm_min = 0.14793139612352124;
    msg.rpm_max = 0.2076790858041303;
    msg.rpm_rate_max = 0.8534262083220113;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.8642194573515144);
    msg.setSource(51132U);
    msg.setSourceEntity(91U);
    msg.setDestination(28687U);
    msg.setDestinationEntity(35U);
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.45163163319104505;
    tmp_msg_0.y = 0.29063603715861586;
    tmp_msg_0.z = 0.14736080358323578;
    tmp_msg_0.vx = 0.2425215423146383;
    tmp_msg_0.vy = 0.9027438019977864;
    tmp_msg_0.vz = 0.05860554823903241;
    tmp_msg_0.ax = 0.7657035707431282;
    tmp_msg_0.ay = 0.692388424819534;
    tmp_msg_0.az = 0.1992903510828512;
    tmp_msg_0.flags = 51611U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.9598613055703645);
    msg.setSource(7273U);
    msg.setSourceEntity(112U);
    msg.setDestination(2025U);
    msg.setDestinationEntity(67U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.651155980506517);
    msg.setSource(33678U);
    msg.setSourceEntity(48U);
    msg.setDestination(61032U);
    msg.setDestinationEntity(101U);
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 27U;
    tmp_msg_0.op = 150U;
    tmp_msg_0.err_mean = 0.7243254377737457;
    tmp_msg_0.dist_min_abs = 0.4150300334464525;
    tmp_msg_0.dist_min_mean = 0.33950108949339775;
    tmp_msg_0.roll_rate_mean = 0.5841828947612941;
    tmp_msg_0.time = 0.77140197038157;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 99U;
    tmp_tmp_msg_0_0.lon_gain = 0.07697081744609036;
    tmp_tmp_msg_0_0.lat_gain = 0.0791253029656468;
    tmp_tmp_msg_0_0.bond_thick = 0.02443826018866435;
    tmp_tmp_msg_0_0.lead_gain = 0.8975682527675303;
    tmp_tmp_msg_0_0.deconfl_gain = 0.43368487341975537;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.3582753810541166;
    tmp_tmp_msg_0_0.safe_dist = 0.9472832369246357;
    tmp_tmp_msg_0_0.deconflict_offset = 0.4297382169939139;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.4152105100776947;
    tmp_tmp_msg_0_0.accel_lim_x = 0.6211298197298546;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.5323750557622328);
    msg.setSource(9819U);
    msg.setSourceEntity(235U);
    msg.setDestination(8320U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.30177020161707335;
    msg.lon = 0.9611096986703462;
    msg.height = 0.3385313462395706;
    msg.x = 0.5952824667667828;
    msg.y = 0.8964164223252815;
    msg.z = 0.325656620923096;
    msg.phi = 0.21864591877541695;
    msg.theta = 0.39548874137872814;
    msg.psi = 0.18664524177844932;
    msg.u = 0.5460075704462847;
    msg.v = 0.8434587295697957;
    msg.w = 0.439359425547179;
    msg.p = 0.8492208422087892;
    msg.q = 0.12206426290757699;
    msg.r = 0.9028422206096305;
    msg.svx = 0.837307170608133;
    msg.svy = 0.2857989712844069;
    msg.svz = 0.6608992677340395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.6631833224468143);
    msg.setSource(39819U);
    msg.setSourceEntity(228U);
    msg.setDestination(56884U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.9576387114375338;
    msg.lon = 0.22652542966510503;
    msg.height = 0.9341317308972706;
    msg.x = 0.7967989135289067;
    msg.y = 0.5062378905634646;
    msg.z = 0.839102910352869;
    msg.phi = 0.3954141955381302;
    msg.theta = 0.9898979861718411;
    msg.psi = 0.7840556710491455;
    msg.u = 0.4408539389186569;
    msg.v = 0.4660832612782312;
    msg.w = 0.07872521042145886;
    msg.p = 0.40541364195708085;
    msg.q = 0.45455099130340126;
    msg.r = 0.03215505245361361;
    msg.svx = 0.27887222889099983;
    msg.svy = 0.32791437472719376;
    msg.svz = 0.2940579957431473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.724015488571181);
    msg.setSource(11106U);
    msg.setSourceEntity(134U);
    msg.setDestination(51585U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.3770598754274267;
    msg.lon = 0.33293199607651414;
    msg.height = 0.4972215422955878;
    msg.x = 0.5756199295788565;
    msg.y = 0.32971062337391654;
    msg.z = 0.4374280209986682;
    msg.phi = 0.5750511515551922;
    msg.theta = 0.6429966388100482;
    msg.psi = 0.3057693758687242;
    msg.u = 0.9217867684440776;
    msg.v = 0.7808932479822963;
    msg.w = 0.4431229772766735;
    msg.p = 0.9115631584212502;
    msg.q = 0.2082394260330369;
    msg.r = 0.10563545927944429;
    msg.svx = 0.6294821379353287;
    msg.svy = 0.6381368450774135;
    msg.svz = 0.34657835961436023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.17749573422743725);
    msg.setSource(24356U);
    msg.setSourceEntity(201U);
    msg.setDestination(46297U);
    msg.setDestinationEntity(209U);
    msg.op = 150U;
    msg.entities.assign("OVNSJYPXUXHPFYEMBENQXJYTJUWNKISLMCKBZATTGTLVXUVDPMMAJGNMBZYEAZJIPEJHSNWGVDKZPQYBBPSWALDZTJSHCMOFCFNGXKYWAESAYHCMEIHVOYBHBQLUQZRQSQTKWHLRTRIEGMQZHBAWSTRTLPRFFIRXCNOIICVWFKQEBGXCWGKILXVOEPDALUDSRUSNUJDFVNECRWRYULZIHOXIRUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.700470496833082);
    msg.setSource(16546U);
    msg.setSourceEntity(179U);
    msg.setDestination(3433U);
    msg.setDestinationEntity(79U);
    msg.op = 226U;
    msg.entities.assign("KQKCLDYQCKGOASOLDOIGXGESELJURDIBQZQMHTXDHKXDJLRITPVYGZAQDQBMBUMFDZSRNSRSULSEQJJPFTPPHTIZVJJLYIONJDKAMFIFLKWVMXGWTVHUBJPFOCSWZERCQHUXRIESANSCXYJFPTFHFMCAHPYOVNRHUCHTVEZUWWMVOVBZYCQLTKREGARNXKEWAKUIFEXIBCOSRAWCUHNXYYNKTXEUBPJAYLNPWOPZDNWNQAMOGFLMWVVZYZMBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.2989839111044056);
    msg.setSource(45724U);
    msg.setSourceEntity(18U);
    msg.setDestination(5271U);
    msg.setDestinationEntity(189U);
    msg.op = 11U;
    msg.entities.assign("BLUENLSFDNNTNUSSCHCLQLCSAAQAPPICJKVWGWYBRNKIXZLJFDSCAYYEOWOIXXFZQSADAKETDSGDTVHIVLNDRNGYUSVQXKPPXATJSRWHPYTIXEVZKMGTPDLTBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.23755720350854648);
    msg.setSource(9427U);
    msg.setSourceEntity(48U);
    msg.setDestination(22555U);
    msg.setDestinationEntity(54U);
    msg.type = 161U;
    msg.speed = 50368U;
    const char tmp_msg_0[] = {-24, -15, -19, 8, 0, 104, 39, 45, -49, -79, -95, 101, 41, 12, 33, 23, 17, 53, -90, 126, -121, -29, 20, 9, -106, 118, -9, 111, 105, 72, -47, -125, 10, 75, 101, 105, -11, -116, -47, -23, 75, -45, -88, 7, -66, -13, -52, -77, 85, 108, 81, -52, 12, -70, 69, 26, 116, -109, 101, 80, -99, 83, 8, -60, -76, -115, 56, -113, -37, -56, -3, 52, 118, 60, -47, -26, -116, 125, 98, 63, -122, 0, -120, -15, -103, -33, -24, 121, -37, -12, 65, -94, 84, -50, -23, 23, -113, -1, 34, 9, -124, -23, -110, 94, 122, -48, 8, 54, 39, -89, 39, 32, -79, 97, 3};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.6774065765891589);
    msg.setSource(45899U);
    msg.setSourceEntity(49U);
    msg.setDestination(57276U);
    msg.setDestinationEntity(209U);
    msg.type = 127U;
    msg.speed = 13759U;
    const char tmp_msg_0[] = {49, -70, 56, -124, -70, 66, -40, 115, -98, 88, -37, 5, 53, -68};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.18871513659467654);
    msg.setSource(14974U);
    msg.setSourceEntity(199U);
    msg.setDestination(34418U);
    msg.setDestinationEntity(48U);
    msg.type = 45U;
    msg.speed = 22559U;
    const char tmp_msg_0[] = {-91, -47, 56, 49, 69, 66, -42, -72, 25, 41, 115, -26, -10, -124, 48, -64, 95, -33, 45, -48, 20, -46, -15, -5, -7, -123, -29, -121, -20, -47, 83, -15, 107, -28, -123, 71, 8, 82, -19, 75, 7, 78, 3, -70, 66, -52, 0, 79, -39, -99, 28, -81, 85, -63, -126, 46, 35, 106, -59, -74, -7, -72, -23, -107, 67, -29, -72, 121, 13, 122, 44, 120, 120, -51, -83, -43, 90, -59, -70, 33, -82, 73, -29, 23, -89, -29, 15, 116, 48, -84, 67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.24170779759956496);
    msg.setSource(50685U);
    msg.setSourceEntity(160U);
    msg.setDestination(19739U);
    msg.setDestinationEntity(106U);
    msg.op = 115U;
    msg.tas2acc_pgain = 0.6162585063643947;
    msg.bank2p_pgain = 0.2689787334656255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.08298285561688679);
    msg.setSource(62906U);
    msg.setSourceEntity(73U);
    msg.setDestination(30887U);
    msg.setDestinationEntity(134U);
    msg.op = 87U;
    msg.tas2acc_pgain = 0.8671577763392943;
    msg.bank2p_pgain = 0.043364863732747394;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.3277940005964234);
    msg.setSource(55708U);
    msg.setSourceEntity(61U);
    msg.setDestination(23755U);
    msg.setDestinationEntity(154U);
    msg.op = 156U;
    msg.tas2acc_pgain = 0.5600379726821701;
    msg.bank2p_pgain = 0.6726328452017887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.4861666780245665);
    msg.setSource(29484U);
    msg.setSourceEntity(105U);
    msg.setDestination(54695U);
    msg.setDestinationEntity(193U);
    msg.available = 3388764238U;
    msg.value = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.29431513890648675);
    msg.setSource(53432U);
    msg.setSourceEntity(90U);
    msg.setDestination(5390U);
    msg.setDestinationEntity(184U);
    msg.available = 1684151177U;
    msg.value = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.05685637342911776);
    msg.setSource(23840U);
    msg.setSourceEntity(131U);
    msg.setDestination(26278U);
    msg.setDestinationEntity(136U);
    msg.available = 3723085353U;
    msg.value = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.8697628668173014);
    msg.setSource(39717U);
    msg.setSourceEntity(96U);
    msg.setDestination(38486U);
    msg.setDestinationEntity(30U);
    msg.op = 47U;
    msg.snapshot.assign("YJXWHPVYPNZSAVNDIFHLJUYRLEJYQHUTDSQTC");
    IMC::MsgList tmp_msg_0;
    IMC::MagneticField tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.7757676134890517;
    tmp_tmp_msg_0_0.x = 0.6237715471754206;
    tmp_tmp_msg_0_0.y = 0.9316297187101475;
    tmp_tmp_msg_0_0.z = 0.39100528630550246;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.8279813320024105);
    msg.setSource(35478U);
    msg.setSourceEntity(8U);
    msg.setDestination(17248U);
    msg.setDestinationEntity(142U);
    msg.op = 67U;
    msg.snapshot.assign("UDYLCLFJCSFDJURZDWPDLIUSVFIEPTOUEOAONLRGVBGPZIQKSFMHLVKIBZUHHZNOSCUDMDSSXJVKZUTOFSNXPBPXTMHDZYWJYQQXYJZQZQXXVGPVOPQKOHMTNLGLML");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.8265858127653849;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.7410926456254976);
    msg.setSource(24342U);
    msg.setSourceEntity(110U);
    msg.setDestination(62828U);
    msg.setDestinationEntity(210U);
    msg.op = 192U;
    msg.snapshot.assign("AVPMNTALBMRKUXTTYANXZXEPKZAVRVDQYSFFTHQCEWDNJCPNFFYSYTVATIXKRZAJJHJCOAWWGEVLZLKURZHBUFVMOOLDXRFLICDWWOLBQRQIRMKBSWDJFIOVJMYEJZFBVSLIRNPHWHMXMDZHNGCCRBVOOSLWGDKJRMEOSIXJAKGBNCHUGCEGQKHTJXAU");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.966497666404776;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.929487049983847);
    msg.setSource(23042U);
    msg.setSourceEntity(192U);
    msg.setDestination(36654U);
    msg.setDestinationEntity(164U);
    msg.op = 101U;
    msg.name.assign("OCZJWAIAGDQNKFYXLTUBILYIZOSVXCSTYRNXLVFCQHDXQRWEAIHSPIGNLDISCBFPPNBNAFOBEQHMOUUPBMNZPTYBEGDYYJWLIJHULWYWULBFHSZMGDOLSRTQEHKNWVUUBTNDYVWXMQHNMYQEOIFEJRRTWSGPOCFRXRJNOSJKMZKGCTIWPZCORVCVEEHAUAKDXFVEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.11443313502775554);
    msg.setSource(63081U);
    msg.setSourceEntity(215U);
    msg.setDestination(51279U);
    msg.setDestinationEntity(43U);
    msg.op = 30U;
    msg.name.assign("ZJKLBOEBVUPGCYDMEXXQJASNPCFECPVGJSAEFNOXXZKEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.9502699390224469);
    msg.setSource(4955U);
    msg.setSourceEntity(59U);
    msg.setDestination(50313U);
    msg.setDestinationEntity(172U);
    msg.op = 207U;
    msg.name.assign("KVJBDEKYVCJZAVXRGAVEWBAHNWTQFMHULKOIZTWDLIEPXLHUDRAYCOZAMTTQGSPNAJWDKZYWOMKNLNLFIXOPHTMKME");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.9762133096975538);
    msg.setSource(24050U);
    msg.setSourceEntity(153U);
    msg.setDestination(53514U);
    msg.setDestinationEntity(196U);
    msg.type = 190U;
    msg.htime = 0.7903477398369599;
    msg.context.assign("BAYNTKWGIH");
    msg.text.assign("YCCSYCMMHDJFINWGBAOVADYGCYGDEVXYUJAFIURMZVODZFYRLULAADSTOMOCMXJCIRGZROKBWCUWWFFVKLYXUNBGTUZVJRXCTAKTOIQVRLBPRHEIUSJSKMMLGPIFSPQBAPZQFJPSZEHHRHHVOFPWPVBQGEEWXYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.7564099778821185);
    msg.setSource(57732U);
    msg.setSourceEntity(1U);
    msg.setDestination(65173U);
    msg.setDestinationEntity(3U);
    msg.type = 28U;
    msg.htime = 0.6752556668634003;
    msg.context.assign("UDSMPQLXJDSKDAOSSMLBDFXXFSIJVUEKWEVJYIXJPIGBSTPDIUNQCZONNZEZMFGVVZOZYRUIECYUTFFFOHJYHQHOZTKFNHXIFMNQHHWRGLYDABHVIZIUCRVXNWTPRPHHEUIAFTXTOJAKYKP");
    msg.text.assign("MCYNWBLCABGOKUWZBIBMWFHRHDAGOLIXSXLLCAPKOWFZODHCLZJYHIPTBWKYPHFZBDNEDPHPFWTAVJTSCSSOMZDSLIKGCQFKIUVSRZYRNHFFQAHHNXEDDLTJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.5500829109995842);
    msg.setSource(35130U);
    msg.setSourceEntity(144U);
    msg.setDestination(27063U);
    msg.setDestinationEntity(238U);
    msg.type = 72U;
    msg.htime = 0.1367992395131874;
    msg.context.assign("WHCDLEYOAIGIALGTONUMMNJZWGXGRKFSOQJLPEJMTNUEFKSTZTTMYOQULHIKOHURNETFNNJVYKGXXMKBFZPRSHYQVTTBDQSCTYINIZXVKUXWCVYPYLVAAVKCPODAYLXRRCEFCDVBRMWAXBJIMX");
    msg.text.assign("FLHRUKDQTMGFZMYLONOUJMIPHDWVQSFFAJNNTAEIARIILXYOQFXJMOJKTGPGWRKJXYFOKXOHQUMEVWPQMDVVDZSKUOEFZXPZHIQDRTGRABPLHUEDVCDJNBNTQSSLLQBZQNXBIONPLRWYCQMSCEHJTRWMYNZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.18294461932377948);
    msg.setSource(53852U);
    msg.setSourceEntity(233U);
    msg.setDestination(59357U);
    msg.setDestinationEntity(168U);
    msg.command = 75U;
    msg.htime = 0.23730795484881717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.0348867249140532);
    msg.setSource(64371U);
    msg.setSourceEntity(118U);
    msg.setDestination(57031U);
    msg.setDestinationEntity(61U);
    msg.command = 183U;
    msg.htime = 0.4919441156583122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.40307101439585313);
    msg.setSource(27364U);
    msg.setSourceEntity(207U);
    msg.setDestination(38591U);
    msg.setDestinationEntity(146U);
    msg.command = 194U;
    msg.htime = 0.07345088762873431;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 233U;
    tmp_msg_0.htime = 0.7059239352643045;
    tmp_msg_0.context.assign("PCPUDOMVYJOEVHWPJDFUCRLNOJXXBYZWEQURPWGZNVNCUUCAOILDEMQKWMYSSXVQTFTORWGWTLTQIFOEGOJZQGBYNLZAVJGDKOBNNUSDDXKACGMHEXYDPFJGIHHBZVQISYBMRRFMUBEUGVLAOTHINAHYIDPQARVJISPJFFQLPEWFKSCHROWEFHUXBZHXYFYXQKDJJZCISRNKZRMWBGYPKE");
    tmp_msg_0.text.assign("CNPKZATFXNIODJKRXURGSNPNHZMODUOMANBCGMQOLNYVXAYFHCBMNFEHSZRQFBYXSAYBWQWCHMAHDJPHZXGBMHLILBFLVMRQEDNBERPTCJLVUJAUHYETEWIENFJAIGYQTEMYYKBROGKWTOU");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.8410632774950723);
    msg.setSource(25746U);
    msg.setSourceEntity(39U);
    msg.setDestination(8364U);
    msg.setDestinationEntity(8U);
    msg.op = 65U;
    msg.file.assign("QHWJKXDUVVGNTYGMEHATVLWNLONBAPEYPHJYWXAOTUUGRDOTIUZZFCTOKRWFCHCFXMWAQMFBONOJSTGXMCBRYBHSVIUZKJCQVIVWECRRRSLEPJMDDRPDRBOZLOJDTYQASHNIRCDKIYBWYFGHTAXVELINYQLHSJNPMCAZWGPFIJSMQJEUNZFKSDNXUGMKCPFKKEPKIMDWTDEHAGXLQEQLKLQSVZSY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.5738366882765464);
    msg.setSource(6229U);
    msg.setSourceEntity(57U);
    msg.setDestination(51822U);
    msg.setDestinationEntity(245U);
    msg.op = 115U;
    msg.file.assign("CQDOJJELAGEUPFNZTYCOTOZEYJWFVNTCRMSKNMCBPBCHBVGZJXGPGHXSYNZVNELWNOFNANKISVQFRPXKOIPJLIBYJPIXJDUFBW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.9947754137727725);
    msg.setSource(58713U);
    msg.setSourceEntity(231U);
    msg.setDestination(25959U);
    msg.setDestinationEntity(54U);
    msg.op = 19U;
    msg.file.assign("DKOVSEYBZAAPDMMZPJKKIIDRRWUGMKTV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.6157285629045122);
    msg.setSource(24685U);
    msg.setSourceEntity(171U);
    msg.setDestination(4255U);
    msg.setDestinationEntity(153U);
    msg.op = 157U;
    msg.clock = 0.2409319601555846;
    msg.tz = 19;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.3205004115907275);
    msg.setSource(40958U);
    msg.setSourceEntity(122U);
    msg.setDestination(51058U);
    msg.setDestinationEntity(18U);
    msg.op = 181U;
    msg.clock = 0.9264740474620474;
    msg.tz = 104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.4524951659132552);
    msg.setSource(26049U);
    msg.setSourceEntity(95U);
    msg.setDestination(2597U);
    msg.setDestinationEntity(149U);
    msg.op = 180U;
    msg.clock = 0.9134368498415386;
    msg.tz = -39;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.8364796113790589);
    msg.setSource(55815U);
    msg.setSourceEntity(68U);
    msg.setDestination(40146U);
    msg.setDestinationEntity(120U);
    msg.conductivity = 0.9890270060590451;
    msg.temperature = 0.23891608340960802;
    msg.depth = 0.05062440233808074;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.49304587911435727);
    msg.setSource(12962U);
    msg.setSourceEntity(132U);
    msg.setDestination(24275U);
    msg.setDestinationEntity(105U);
    msg.conductivity = 0.9404671300475979;
    msg.temperature = 0.8862976586575286;
    msg.depth = 0.47989561334917497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.41970040465804936);
    msg.setSource(62484U);
    msg.setSourceEntity(197U);
    msg.setDestination(14779U);
    msg.setDestinationEntity(128U);
    msg.conductivity = 0.6075684799295578;
    msg.temperature = 0.08549672327310964;
    msg.depth = 0.5634262807388024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.14108694430058266);
    msg.setSource(8741U);
    msg.setSourceEntity(11U);
    msg.setDestination(55458U);
    msg.setDestinationEntity(232U);
    msg.altitude = 0.022936592602403327;
    msg.roll = 14772U;
    msg.pitch = 24904U;
    msg.yaw = 29544U;
    msg.speed = 30796;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.2741059678431774);
    msg.setSource(44782U);
    msg.setSourceEntity(6U);
    msg.setDestination(11182U);
    msg.setDestinationEntity(227U);
    msg.altitude = 0.6643264233522426;
    msg.roll = 60143U;
    msg.pitch = 30163U;
    msg.yaw = 4956U;
    msg.speed = 25161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.21800012593048235);
    msg.setSource(1129U);
    msg.setSourceEntity(205U);
    msg.setDestination(24238U);
    msg.setDestinationEntity(113U);
    msg.altitude = 0.24818278422731233;
    msg.roll = 47578U;
    msg.pitch = 55948U;
    msg.yaw = 37641U;
    msg.speed = -25309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.07482211355929169);
    msg.setSource(23835U);
    msg.setSourceEntity(248U);
    msg.setDestination(6608U);
    msg.setDestinationEntity(129U);
    msg.altitude = 0.19855233930897676;
    msg.width = 0.7592230188485549;
    msg.length = 0.524800483634771;
    msg.bearing = 0.536229449566346;
    msg.pxl = 1599;
    msg.encoding = 38U;
    const char tmp_msg_0[] = {-59, -66, 32, -81, -88, 19, 100, -73, -72, -48, -55, -39, -83, 26, -47, -98, -92, -77, 89, 100};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.19485617043770875);
    msg.setSource(27268U);
    msg.setSourceEntity(108U);
    msg.setDestination(60401U);
    msg.setDestinationEntity(122U);
    msg.altitude = 0.20295384713970133;
    msg.width = 0.9136463585272563;
    msg.length = 0.7800620101421861;
    msg.bearing = 0.4644359105155409;
    msg.pxl = -9352;
    msg.encoding = 134U;
    const char tmp_msg_0[] = {9, -39, -46, -93, -64, 34, 22, -9, 70, 78, 125, 53, -49, 96, -95, -82, -96, 41, 119, -91, 28, 10, 94, 2, -41, 97, -43, -71, -12, 18, 112, 117, -48, -107, 10, -111, -22, 42, -113, -106, -89, -113, 88, 22, 117, 104, 126, -45, -65, 6, -31, 74, -27, -32, 107, 71, 110, 7, 87, 79, 77, -31, -70, -111, -5, -54, -7, 125, -14, 112, 76, 7, -32, 115, -74, 72};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.5426015424852911);
    msg.setSource(53005U);
    msg.setSourceEntity(200U);
    msg.setDestination(62982U);
    msg.setDestinationEntity(76U);
    msg.altitude = 0.9713163031559946;
    msg.width = 0.82535424298764;
    msg.length = 0.9039444927984728;
    msg.bearing = 0.015231613937607635;
    msg.pxl = 3326;
    msg.encoding = 185U;
    const char tmp_msg_0[] = {-54, 53, -17, -18, -22, 101, 11, 82, 60, 45, -102, 104, 119, -35, 92, 120, -71, -67, 62, 55, -44, 88, -25, 54, -91, 46, -70, -123, 56, 59, 98, 66, -49, 93, 62, -119, -68, -117, 101, 60, -118, 105};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.9392501463189152);
    msg.setSource(20330U);
    msg.setSourceEntity(75U);
    msg.setDestination(7031U);
    msg.setDestinationEntity(243U);
    msg.text.assign("OZRJMZCVWJORKDGETHFNMIRLXMSSULVY");
    msg.type = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.3820030092340939);
    msg.setSource(13813U);
    msg.setSourceEntity(114U);
    msg.setDestination(42677U);
    msg.setDestinationEntity(183U);
    msg.text.assign("CFLLDFWTKPWJIQXIOPETRTKAEWPRBFHXGBMMQCWYPYKCRPNTHFHYYRQXFIQPMCDXSPGXDBDUNYCGLDZUURDELFNPOHGQVVIMIOJWULAGIKLZTOMBSJMBOASHVTOOEJEYVEDCUHRHNJQAWFMSZLRKAXHQVTBQILVITYREJZMGWMHONKVPZSIZXCNDMWFXGNJVCVBAKKUHUZEUWOGAENCLRZKKJEYCYNJUGYBDZGAISAOXTVSQNDXJQFFPT");
    msg.type = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.5441328789595796);
    msg.setSource(50084U);
    msg.setSourceEntity(93U);
    msg.setDestination(40235U);
    msg.setDestinationEntity(98U);
    msg.text.assign("IMHWIBONBQIKR");
    msg.type = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.0851120936030757);
    msg.setSource(51654U);
    msg.setSourceEntity(14U);
    msg.setDestination(37256U);
    msg.setDestinationEntity(117U);
    msg.parameter = 39U;
    msg.numsamples = 128U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 22717U;
    tmp_msg_0.avg = 0.038984595674385836;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9963731756254018;
    msg.lon = 0.8968195366168747;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.7641207011810063);
    msg.setSource(15639U);
    msg.setSourceEntity(55U);
    msg.setDestination(55188U);
    msg.setDestinationEntity(192U);
    msg.parameter = 122U;
    msg.numsamples = 171U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 12851U;
    tmp_msg_0.avg = 0.07954073889442392;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.4191239840644839;
    msg.lon = 0.015679682662554373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.9291844628727454);
    msg.setSource(9592U);
    msg.setSourceEntity(226U);
    msg.setDestination(55639U);
    msg.setDestinationEntity(76U);
    msg.parameter = 164U;
    msg.numsamples = 8U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 55187U;
    tmp_msg_0.avg = 0.891431770736569;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5546039505998078;
    msg.lon = 0.7024273453882502;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.3984894379348938);
    msg.setSource(35215U);
    msg.setSourceEntity(159U);
    msg.setDestination(21084U);
    msg.setDestinationEntity(242U);
    msg.depth = 1702U;
    msg.avg = 0.05266771384986657;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.7118136316085047);
    msg.setSource(45996U);
    msg.setSourceEntity(100U);
    msg.setDestination(34261U);
    msg.setDestinationEntity(68U);
    msg.depth = 12662U;
    msg.avg = 0.4779923459760964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.8100615182254517);
    msg.setSource(4648U);
    msg.setSourceEntity(252U);
    msg.setDestination(52973U);
    msg.setDestinationEntity(179U);
    msg.depth = 65219U;
    msg.avg = 0.4062248551967397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.5684899678771534);
    msg.setSource(6875U);
    msg.setSourceEntity(154U);
    msg.setDestination(64708U);
    msg.setDestinationEntity(146U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.035013487296603696);
    msg.setSource(41398U);
    msg.setSourceEntity(43U);
    msg.setDestination(42409U);
    msg.setDestinationEntity(227U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.8229233831392513);
    msg.setSource(49261U);
    msg.setSourceEntity(119U);
    msg.setDestination(23067U);
    msg.setDestinationEntity(219U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.5463402216429433);
    msg.setSource(20867U);
    msg.setSourceEntity(131U);
    msg.setDestination(5157U);
    msg.setDestinationEntity(64U);
    msg.sys_name.assign("XGORVMXLDNVNBTXDWDSSEEHOBLLJXMVDTIZWULOMCMSUOYFBPWWYPCNIELZKGKNJYHLPSMXMEKFMAUTFTZTCYHXWZERIJIOQVSVZKIACHWFACYUZQOAQSDYHKPFAXBEAIGNJVIBJPSWGZWTGKKXFFBVRCTEJHDIHMSLIGLQMVCLXXQPGUBONLHRRZNCKCDPEQTWRUSPUKUCQFGNRSRZFFEAKGYHVYNBTVAJJOPOONUBQDPUHEW");
    msg.sys_type = 171U;
    msg.owner = 34025U;
    msg.lat = 0.39613886203211157;
    msg.lon = 0.5356163565861018;
    msg.height = 0.263556805907747;
    msg.services.assign("LEYRPFUPETDHUSFBQCTQYGDWJSKPLZBOCVZFTNPKODXOMQCZRTMRMCCZDTUBBFMGZNWSLQPEHQESFIYWKROKKDIUHUQPOHRENJDYOLZROLXAXTXKHDTMWGJGCJWHDDVPGAFYYJBXIRHWALLGQEIIKGSXRSFSKTVUZCENHGUGOPCBEFBIVKVMKQLFJWLAYUXMABJZVCNIJFHQJWPRTIQSNDNTNHNZUUAYGXEPVEVBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.8471080651621474);
    msg.setSource(41734U);
    msg.setSourceEntity(49U);
    msg.setDestination(52723U);
    msg.setDestinationEntity(22U);
    msg.sys_name.assign("EMAIYQDDHCICJHXJKYMMWIQSEYSWQLUZPZBLVYHKDGZNNKCAQBSZUWDOJZRWARFTGXTAEDGUMVPILFBHRZCLSXINVCPTEWJKWJGBHPOAPFNTYOIWEUFVCYRQIGCZZFTVVFYUEYNKBBSAHWMIEJJOBNLPXXRSTDQZ");
    msg.sys_type = 17U;
    msg.owner = 62618U;
    msg.lat = 0.9983158817270245;
    msg.lon = 0.014587753874631959;
    msg.height = 0.08475629994970402;
    msg.services.assign("ECVVPESGAKKZMAOUJUSUPNSUVYLYJRKDPBPBRHGELHAFWMGFNJNQCUWDGFXHQNKEYNXYIUAYZKSSVZXBACQKZRZUDOQTFIJAAISOLWSFBRTTOH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.6536827558968012);
    msg.setSource(42601U);
    msg.setSourceEntity(54U);
    msg.setDestination(15259U);
    msg.setDestinationEntity(227U);
    msg.sys_name.assign("TFGDGXJWTWPBH");
    msg.sys_type = 219U;
    msg.owner = 39952U;
    msg.lat = 0.814797824794916;
    msg.lon = 0.7085788169408552;
    msg.height = 0.6982327065270286;
    msg.services.assign("HVINRYAWWXHWDAXJZHCGAMQUHBTQMKHVLZBSCENSDTMGQZVKCVLQBIFTDLTUINLFYTYWUYJOZXTXCVOJHUGLQBPKFSSYPLGVKJMERFMPLFNGMUMRFXNSXSDRIKKEPNKIJUOASAGQDJAYPRHBSCBHNONCIXVEMZFPICCUTGWJLEJEIPXTDLYIVOYWYROSDOCJPQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.4717012036329268);
    msg.setSource(38602U);
    msg.setSourceEntity(31U);
    msg.setDestination(8299U);
    msg.setDestinationEntity(75U);
    msg.service.assign("IJOFNAQLWSWWSLTOBVQ");
    msg.service_type = 124U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.972730784493156);
    msg.setSource(14726U);
    msg.setSourceEntity(216U);
    msg.setDestination(62429U);
    msg.setDestinationEntity(168U);
    msg.service.assign("VJCKWUHTAXBGLEWJOMDEXMYAHLCRAHRFWPVOXBNWZQQMLVGFOBNFBQYXSDMGKWQKPBIPFMMHJNUFPRLTYVFKIQVNGVYPJLSTEZXZDHDQXGLMRKZCELSHDUAEOU");
    msg.service_type = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.14238703367681182);
    msg.setSource(26930U);
    msg.setSourceEntity(250U);
    msg.setDestination(2386U);
    msg.setDestinationEntity(97U);
    msg.service.assign("SQVRHWCNEGDCYNFUXAGFZAUVOODVEAOBKTQTSPBYYAAEIEIPIHKMSSBVEFLDCQFTGNBHEWGPCNIRZUHNJYDALWMCTAGZBAQOKUSDYQJQOZYPHFOWVXYIKRSXKTRGDEVULZEGABDKMPILSMVCYHJJTKSLXFZCGXMYDHEPQMLJNOTSBEAMKWHCRZGRJSDRUNOKFPPUL");
    msg.service_type = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.8798258521846616);
    msg.setSource(32857U);
    msg.setSourceEntity(114U);
    msg.setDestination(4848U);
    msg.setDestinationEntity(90U);
    msg.value = 0.18027413536994608;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.024584117927677562);
    msg.setSource(5321U);
    msg.setSourceEntity(170U);
    msg.setDestination(40503U);
    msg.setDestinationEntity(143U);
    msg.value = 0.016839839597842965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.03551897928746972);
    msg.setSource(13799U);
    msg.setSourceEntity(121U);
    msg.setDestination(65132U);
    msg.setDestinationEntity(56U);
    msg.value = 0.7753455876190951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.5188852150957235);
    msg.setSource(11247U);
    msg.setSourceEntity(57U);
    msg.setDestination(54819U);
    msg.setDestinationEntity(252U);
    msg.value = 0.04532558309420853;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.2640247858236342);
    msg.setSource(5182U);
    msg.setSourceEntity(228U);
    msg.setDestination(9534U);
    msg.setDestinationEntity(98U);
    msg.value = 0.37968161020492297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.41438000708221423);
    msg.setSource(51995U);
    msg.setSourceEntity(23U);
    msg.setDestination(14851U);
    msg.setDestinationEntity(12U);
    msg.value = 0.5654938867710546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.15174839940873464);
    msg.setSource(61417U);
    msg.setSourceEntity(167U);
    msg.setDestination(20102U);
    msg.setDestinationEntity(168U);
    msg.value = 0.1153024850996659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.9771700200778286);
    msg.setSource(48189U);
    msg.setSourceEntity(112U);
    msg.setDestination(60409U);
    msg.setDestinationEntity(216U);
    msg.value = 0.6971508705266014;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.6586127269073321);
    msg.setSource(26144U);
    msg.setSourceEntity(51U);
    msg.setDestination(59245U);
    msg.setDestinationEntity(24U);
    msg.value = 0.4029523254006393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.6461010250547168);
    msg.setSource(32172U);
    msg.setSourceEntity(57U);
    msg.setDestination(38127U);
    msg.setDestinationEntity(47U);
    msg.number.assign("BWDKEHTNFRXIIOMAOKAPWYSCPPEGDRRAEBAUGKGJGOQUYDRMBAWUTNISKSESVLLPCAVQHMKTCRLFRBGHBFBPOZJWCBQDRKITHQTZSWUPHUJIEXMWIQYEZZCVOBDDJMOHTUPLMYXNUNOFZLEVJRBZONUWHJSDYFAMWLYPGNOKJMQVXDIOITNHTJIHWMEKF");
    msg.timeout = 38255U;
    msg.contents.assign("ROPNSKRYSDTGOAQZMOOZPKBRYEQBJZUBLWXPEXUVQJFZBXGPYQDYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.48539000076053596);
    msg.setSource(65190U);
    msg.setSourceEntity(235U);
    msg.setDestination(55196U);
    msg.setDestinationEntity(16U);
    msg.number.assign("PIPUAWTXAUTIUPFJPFAIRIHQNTTYHXRIBLDJRLKUSXGADYVUMWWSBBUYDSFYSZEMTBPYUMFIGKMZNYAKDDOXWBZR");
    msg.timeout = 24542U;
    msg.contents.assign("QGOSGYMFDAGQFSAAOVMJNKMJBCBFRWSOKZSRYATIXTOKWIJYNJC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.28922798262617455);
    msg.setSource(29663U);
    msg.setSourceEntity(174U);
    msg.setDestination(23871U);
    msg.setDestinationEntity(161U);
    msg.number.assign("ZVAOVXUIJZHCRYDCLABIELTOJQUUIRPMAKSUUZDPNFSXGGXWTAENPLSFTHOPUWNWUBORKDHLTRWLNSCKOTLOTRXDCEVVYKSDQMMMJGAXRIZISRPTYTNZYPZCEGMGZXSLFWTNFTKJJJQOZHABGIYBKFBGDECHPNROFMYIAWXNQNQLMWFISYMGXQEJAMPYBQCEHERZCQRHUWNIUDY");
    msg.timeout = 52733U;
    msg.contents.assign("MAZAPCEDCICXJBXYXOTHHMRXGIQYJTVJQUVRRCXOZWTWNFNJYNMIUITOXBDXPEEIWALULVXBCKGMMSCNSFSUKLFDIILYEFHGIEXHDUBDKDCZMNFQVGNVQTTHKAORZBASLBFWGKGARNMCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.32741632663726006);
    msg.setSource(58241U);
    msg.setSourceEntity(47U);
    msg.setDestination(33904U);
    msg.setDestinationEntity(114U);
    msg.seq = 392207875U;
    msg.destination.assign("WCKTIVERTMIMYBTIQIJGBZMLOKBDWIEHYAJNQPCOHOARRUATWDFLHSYBLTNUOTRUFBQFXIGDQZXBURIICQKQGQNYMPRJMUSGJAVYZCFB");
    msg.timeout = 41928U;
    const char tmp_msg_0[] = {-20, -43, 20, 24, -47, -42, 102, -75, -64, 110, -33, -35, 20, -13, -91, -118, -69, 5, -107, 109, 48, 54, 90, -97, 65, -91, -32, 58, 26, 44, -128, 48, 46, 113, 121, 120, -26, 103, 83, -72, 11, -107, 102, -39, 102, -4, -39, 98, 69, 98, 126, -70, -4, -7, 74, 80, -17, 30, 100, 97, -75, -128};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.5212027127631822);
    msg.setSource(33471U);
    msg.setSourceEntity(4U);
    msg.setDestination(31691U);
    msg.setDestinationEntity(88U);
    msg.seq = 1401104845U;
    msg.destination.assign("SJXJIWQWAPGFDPRXNJNSSPIRTYQSWGVEXXUALJQFTCZRIUOHMZBGQBEPOFMLFPRAEIJACFVGWKYMGCHBKGBSQDCHBVNFYKENLWIHWMDLSYMQJENUTBETTOKEFIAVUDGUAHQRUNAOHOVOOQLVYELVLCHKPZRHK");
    msg.timeout = 14165U;
    const char tmp_msg_0[] = {-3, -34, 31, -106, 102, 12, -79, 64, 61, 8, 124, 6, 86, 86, 24, -52, 75, 9, 96, -92, 101, -121, 77, 72, 55, -80, -2, -127, 48, -124, -128, 82, 105, -41, 124, 126, 17, -102, 28, -79, 17, 84, -30, 90, -126, 78, -121, -62, 96, -82, -96, -29, 50, -30, 28, 35, -94, -44, -126, 118, 82, 102, 18, -79, 43, 43, 83, -50, -74, -114, -17, 35, 36, -13, 20, -109, 26, -34, 17, 48, -115, 12, 94, 22, 5, -30, -74, 45, 38, -98, -67, -126, -116, 0, -77, 117, -54, 34, 99, -67, -121, -45, 20, 15, -89, 40, 16, -121, 71, -107, -109, 116, 59, -126, -43, 121, 12, 97, -121, 29, -91, 95, 39, 88, 70, -10, 41, 100, 101, -9, -85, -23, -16, 77, -108, -127, -92, -14, 13, -19, 78, 47, 105, -57, -37, 89, 122, -96, 49, -61, -64, -104, -67, -21, 61, 89, -87, -2, -100, -1, -1, 119, 103, -49, 66, 119, 116, 47, 111, -109, -126, -81, -22, 110, -45, -57, 78, -68, -49, -60, 41, -51, 96, 9, -20, 14, 4, 72, 125, -19, 2, 82, 51, -18, -116, 108, -3, 42, -59, 22, 77, -70, 117, -56, -3, 76, -13, -126, 31, 9, 98, -97, 86, 73, -119, -41, -128, 54, -49, -77, 126, -18, 33, 49, -52, -30, 9, -121, -19, -119, -94, -16, -4, -63, 94, 12, 31, 13, -123, -99, 65, -7, 76, -3, -102, 57, 34, 87, -77, -76, -5};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.5803768925531604);
    msg.setSource(13420U);
    msg.setSourceEntity(199U);
    msg.setDestination(3371U);
    msg.setDestinationEntity(132U);
    msg.seq = 709045508U;
    msg.destination.assign("VTGEFDOUGVTFSSZHJ");
    msg.timeout = 45807U;
    const char tmp_msg_0[] = {-128, -101, -105, -44, -7, -118, 60, 73, 81, 64, 50, -8, -53, 41, -79, 39, 11, -107, 95, 20, -71, 69, -21, 103, 42, 39, -71, 107, -11, 44, 45, -82, 114, 19, -34};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.5987691071506123);
    msg.setSource(30501U);
    msg.setSourceEntity(205U);
    msg.setDestination(13221U);
    msg.setDestinationEntity(181U);
    msg.source.assign("YZLZDNIOWIVPDSDKBWXHDVHHRDYXKZMJAETNZHILQLZEBTFVILLNAMQUBEQUZLGCTLRNDCLUJHPCKYCGCHGGTPIRKXAKHZXEEKZXYNFEJABKEUYOVONOWYYJMRQSWXDIDGOUNFOAHTJ");
    const char tmp_msg_0[] = {102, 30, -117, 28, -80, -64, -27, -18, -45, 68, 31, -33, -104, 48, 72, 101, 109, -126, -75, 51, -28, -20, 124, -92, 81, 30, 71, 24, 113, -17, -77, -106, 16, -13, -105, -48, -123, 119, 95, -23, 33, 39, -50, -104, 39, -80, -103, -31, -70, 35, -120, 120, -61, 34, -79, 93, 26, 83, 123, 25, 21, -22, 50, -10, -98, -110, -93, -87, -7, 26, -40, 89, 78, 55, 27, -65, -43, -4, -92, 24, -47, 77, -30, 26, 26, -74, -48, 78, -1, 64, 59, -44, 102, -121, -126, -77, 65, -90, -5, -7, 40, -10, 42, -13, -58, -81, 20, -36, -64, -12, -91, 52, 122, -38, 27, 41, -91, -28, -86, -30, 40, -34, -89, -80, -68, -46, -12, 49, -101, 104, 56, 60, 110, -19, 22, -71, 22, 34, 77, 29, -14, 122, 63, 46, 5, 22, 67, 45, 103, -81, -116, 66, 31, 125, 120, 12, -86, 37, -7, 105, -25, -106, 32, -19, -81, -107, 120, 56, 60, -107, -99, 23, -71, -75, 87, -33, 79, 88, -106, -53, -37, 79, 30, -20, -25, 27, 43, 7, -99, 98, -16, 94, -76, 54, -21, 119, 90, 56, 31, 19, -11, -68, 124, -14, -119, -79, 52, -18, -32, -128, 51, -102, 30, 101, -38, -2, -52, 50, -38, 115, 26, -1, -92, 97, -41, 54, -97, -66, 26, -75, 52, -51, 64, -53, -1, -7, 80};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.6563143066754115);
    msg.setSource(34739U);
    msg.setSourceEntity(104U);
    msg.setDestination(35946U);
    msg.setDestinationEntity(100U);
    msg.source.assign("YCDXBTXSGQVLITSRWJKSCGAKAQKJDGPSNEQNQKPUANEVMHUYUAYMTAYFDEPHVNGRWUTBRRSHFNZGJXVIORDKSFPXRIFFTEFOJBXLIOBZGUVECTESWCLTJIMZAWANUCDROVPNNKSRCGDWUAPOXLHXMZVJZWMQBQKJKAOFGLEBFHCHMSCGEWLTIUQYJTSKFOFQYILIJZIPGLZVRZMMDHYPBHMCBKEAUYOYMJIDQXWHDQVBWRXOELYHNWP");
    const char tmp_msg_0[] = {-96, 117, -76, 43, -61, -114, 95, 117, 99, -34, -109, 67, -119, 92, -5, -121, 98, -67, -90, 49, 70, 122, -96, -45, 56, 95, 41, -17, -94, -102, -128, -17, -66, -76, 110, 105, 24, 65, 115, 63, 61, 33, -44, -120, 29, 57, -85, -94, 126, 116, 100, -61, 94, 121, 33, 28, 87, -38, 9, 67, -101, -21, 20, -12, -89, 64, -89, 113, -17, -110, -118, -47, 106, -118, -10, 62, -88, 117, -72, -11, 84, -12, -43, -103, 60, 78, 1, 35, -31, -44, -119, 28, -23, 68, 59, 74, 47, -27, 63, 104, 70, -126, 32, -31, -74, -20, -36, 78, -92, 55, -57, 110, 119, 71, 72, 72, -26, -87, -51, 59, -47, -115, 28, 3, 35, 17, 25, -46, -32, -26, -107, 39, 111, 55, 7, -125, -14, -72, 103, -24, -77, 9, 15, -65, 33, -74, 89, -54, -123, 89, 48, -113, 20, -80, 1, 76, 89, 43, -1, -82, -6, 104, 22, -11, 116, 116, 30, -21, 50, -107, -73, -34, 29, -1, 58, -19, 73, -37, -4, -12, -89, 23, -81, -104, -26, 7, -67, -37, 108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.7699072933356975);
    msg.setSource(34427U);
    msg.setSourceEntity(212U);
    msg.setDestination(396U);
    msg.setDestinationEntity(223U);
    msg.source.assign("QBPJGNOJAQVQAPSXCCOFUKMKEGYSGQEWTUVRAZMENTMVDILCWMPBEJIZRSFGTLZYRCUZCUOSQHOZUJCAJTDDTQEPO");
    const char tmp_msg_0[] = {8, 2, -126, 29, -42, 97, -6, 22, -62, -99, 81, 99, 5, 110, -93, -36, -65, -119, -84, 102, 19, 34, 116, 43, 71, -3, -20, -52, -112, -104, 90, -73, 123, -41, -128, 23, 15, 86, 112, -54, -124, -92, 119, -24, 81, 25, 18, -28, 3, 57, -59};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.2124490966683732);
    msg.setSource(5000U);
    msg.setSourceEntity(241U);
    msg.setDestination(33135U);
    msg.setDestinationEntity(174U);
    msg.seq = 1113891050U;
    msg.state = 99U;
    msg.error.assign("XUIGWNJLMRUYFEBTOYXUGXBPKDARHRBUQUGVSXLXBORWZXTJWENZNDSOQJJENTLVAQKLARCZHREFRYWTVHSUCWDJLPNZILUSHMGTCDAOKYMETCVOYPIQMMCKBNJSWBKHVVGKBWSFFQLTHRZHQPURHJMDCDOMPCXWCFGIHSZJYZDWCUPLMAKPZLMRKEDVFFYOKAXXPYI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.6229772954111471);
    msg.setSource(14464U);
    msg.setSourceEntity(39U);
    msg.setDestination(52823U);
    msg.setDestinationEntity(69U);
    msg.seq = 4145906235U;
    msg.state = 205U;
    msg.error.assign("OFYWXNBPDDMARRLIEAPPCIVYZOTBDUOMBZCAKJFZXFRXLDQYYKQPNEHPUFSYNFDWDNALSNOHYAIHKSHXGSEUGPXMUYGIWRJQHVMVKCKIDZAYWOGLTRHLMEUHHROXCJEZTWLJDRYDQJEKBVZGQWBHNQECKCZFFKTITEWXIVT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.6756894226558734);
    msg.setSource(48225U);
    msg.setSourceEntity(31U);
    msg.setDestination(21241U);
    msg.setDestinationEntity(71U);
    msg.seq = 3674111989U;
    msg.state = 158U;
    msg.error.assign("MPHRANESHSOUSJVGHWFFONEKOBWQBGDPHGUNBGEDVSIKUHXUDMMAAFQPJCBJDSIRYPMTKAGDGQJGFLEBYDLORXSPCSRQENVLAXTKRYTYWYNLBZKXMDIMCPYCWCVDRNJJAYXVCKHHUHWQAFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.8445097284184617);
    msg.setSource(58293U);
    msg.setSourceEntity(227U);
    msg.setDestination(32960U);
    msg.setDestinationEntity(75U);
    msg.origin.assign("SOHJDGGVASKOBVZXOEFPDQGTMBOYEDATRNWULYNLZC");
    msg.text.assign("BSEHVISQDGFIZNUZXWECKWBNLRTTQWRIJBYVHAYVBCODRNQSLKLCNZDQZAYMJJGJEPFOBJZEHYCHKEYNPGQJPUPPEBMZQFMKKSKVYDGIXMBRKDAQHSAOTJWDITHSYMUGIMCGLPRRFLALXQULVWYLUAAAWJJGOVUDFDPKORSXHTXPSPFTWMEOOAVBCFDTWBUXFGSZVDEKHULBEWONL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.8230154989287498);
    msg.setSource(15773U);
    msg.setSourceEntity(143U);
    msg.setDestination(51349U);
    msg.setDestinationEntity(145U);
    msg.origin.assign("CWGCPXOYFPQWGFEXLOVIEQZKVSHKAMEBXUYAKRKNYNALHKFMWYDHILUXTNQYQKUZFATAMCVDMERXIRCIBRUESMDFZWJCGIHLSZCQSROYFX");
    msg.text.assign("FMZWEIBUSUUOACMXBXGOPZHWWHEFVFBGKBBVXIDEMLNKPUMSQTFGSQFPJLYAJHWVHRASIKMLIJQMAPOGMHOWKDUYXRUZNZRPBFDFVDHSZJHGNHUVPAVLSJDHTLWRACQQOTOCYSNTNERSFBAEDBYKWHYBASDEVLLAJTCLJDXKDTOCOEIQKIMQYGWFVGNUIXNCTRPYOUVDZELWGCNKTTWXEPIVZMPYBRCCGIMRQCZPKOEQSQIXGARJJYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.7678655408171824);
    msg.setSource(64254U);
    msg.setSourceEntity(228U);
    msg.setDestination(32159U);
    msg.setDestinationEntity(53U);
    msg.origin.assign("SKJGZKXGXXJBKRHEQSTFNJJRAFBJXUQPNBTVENRDBQUQDAPKUECWCIRCZQUNFYIFYPKA");
    msg.text.assign("XDEGEIOVJRKPBWSPTRUCWRDANQWCECVJHXEICAYKRGJESPSZRLWGTIBGCYPCBGGIAREDYSQOMIXQMUUQKAHSEOIEUJJVNDCJPTEKTPBOIZVQHLJQTNYIZLHVUAUCNDUKUZXSAFXDYRLNCYTFXVPGDHUKZLMAPJUABYNNMCNGIAOLOZDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.14306917256913754);
    msg.setSource(51718U);
    msg.setSourceEntity(200U);
    msg.setDestination(5394U);
    msg.setDestinationEntity(59U);
    msg.origin.assign("ETCUJXMPVZOFVEOTPFRZRIVBHUFLLSMOHXRDWVKNWTRRBEWLMSGNWQQDFAH");
    msg.htime = 0.927491592192942;
    msg.lat = 0.39108340836897637;
    msg.lon = 0.17209462549632504;
    const char tmp_msg_0[] = {2, -119, 97, 94, 73, 106, 23, 63, -105, -58, 118, 33, -13, 102, -20, 1, 26, -112, -64, -36, 65, 20, -41, 17, -42, -79, 0, 25, -14, -38, -52, -124, 13, 35, -109, 40, 30, 41, 18, -27, 95, -111, -7, -79, -124, 89, -99, -51, 100, -100, 45, -127, 81, -116, 77, 46, 87, -50, -39, 60, 36, -37, -1, 121, -17, 67, -80, 97, 22, 106, -21, 62, -80, 81, -111, 47, -75, -113, 10, 79, 8, -2, -54, 36, 64, -61, -36, 34, 4, 92, 43, 37, -123, -79, 92, -81, 45, -76, 85, 117, -124, -119, 77, -119, -49, -116, 29, 68, -105, -13, 32, -40, -78, -80, -63, -73, -49, -117, -93, -45, 125, 78, -83, 105, 28, -85, -12, 52, -113, -115, 19, -6, -32, 121, -29, 3, 22, -54, 115, -124, -18, 24, -79, -118, 48, 67, 78, 91, 5, -6, 19, -123, 105, -57, -118, 85};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.5890268845086599);
    msg.setSource(20771U);
    msg.setSourceEntity(57U);
    msg.setDestination(35025U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("CDOPKKUGHBLYFJCQEDAEBRHXTFHHHHBMUQMIZKNQBIARLIVTFAFKFCWGLZKTTMNQNJZPWXSAOXTYILYAMRXSSCI");
    msg.htime = 0.9747192927188628;
    msg.lat = 0.5649724391212586;
    msg.lon = 0.4419162949514813;
    const char tmp_msg_0[] = {87, -6, -23, -92, 44, 38, 33, -19, -6, -35, 92, -36, 33, 16, 7, 32, -54, 40, 125, -105, 21, -121, -56, 41, -84, 105, 53, 56, -4, 97, 116, -40, 119, -107, -122, 68, 45, 11, 81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.7350346024177798);
    msg.setSource(21425U);
    msg.setSourceEntity(88U);
    msg.setDestination(5958U);
    msg.setDestinationEntity(151U);
    msg.origin.assign("XIDYSTALRVCOQCFGHYNGYANHSZXMGNDML");
    msg.htime = 0.13327995518932123;
    msg.lat = 0.6125091835843081;
    msg.lon = 0.09272770718099377;
    const char tmp_msg_0[] = {-39, -57, -60, -74, 103, -16, 91, -23, -30, 20, 84, -43, 40, 3, -22, -36, -38, 78, -49, 81, -23, 20, 9, 86, -55, 79, 1, 72, 65, -46, 109, 63, -92, 90, 107, 22, -14, -92, -127, 57, -105, -83, 16, 7, -34, 31, 95, 110, 97, 121, -15, -76, 123, -97, -2, -90, 33, 74, -122, 5, 102, -32, -112, 110, -56, -101, -51, 41, 65, 81, 111, 5, -115, 111, -51, 49, 32, 60, -2, 44, 117, 104, 29, 58, 104, -87, -52, 39, -69, -43, 110, -15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.40677361923377653);
    msg.setSource(30252U);
    msg.setSourceEntity(64U);
    msg.setDestination(50210U);
    msg.setDestinationEntity(38U);
    msg.req_id = 19189U;
    msg.ttl = 36398U;
    msg.destination.assign("PRJMPXGOUJDAWUWFZATUADBOBLCOIJMTSTJWTZPINZQRAHRIGFSYEOKEPPDFZLDZEYDNLVYKOXMLPFZOCZKIOIENTDBFYKKEUJNHANERGBWUXCEXQFZBGMVRGHJKUGFHSVCEDYXYJLDUNCLKNKBFWSVJFTMRQKIESLASAVFMCIBWMVAHQRASQHHVYIBQGUHWMYTYLOLTMRCBXXNQCNNZGCGOIRUPYHQGUSPODSXIVQBHWJPSTLQ");
    const char tmp_msg_0[] = {-71, -1, -47, 92, 44, -104, -6, -111, 48, -53, 113, 98, 79, 66, -45, 23, -74, -80, 37, 66, 54, 33, -89, -95, 65, -120, -19, -99, 24, 48, -23, -93, -79, 61, -100, -54, -8, 103, -22, 66, -119, -60, 12, -90, -49, -83, 104, 65, -41, 84, 18, -35, -92, 69, -99, -41, 89, 51, -27, 54, -47, -49, -3, -102, 104, -47, 81, 122, -21, 36, -30, -109, 102, 89, -79, -69, -127, 80, 68, -95, 73, -53, -84, 30, -21, -98, 27, 79, 31, 92, 103, -95, 18, -18, 25, 54, -13, 33, 34, 49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.45378078385835907);
    msg.setSource(20610U);
    msg.setSourceEntity(238U);
    msg.setDestination(4470U);
    msg.setDestinationEntity(89U);
    msg.req_id = 37596U;
    msg.ttl = 25384U;
    msg.destination.assign("OCOWKZKDNWHHEARNQFCT");
    const char tmp_msg_0[] = {47, -120, -30, 82, -19, 49, 24, 111, 86, -15, -87, -66, 108, -94, -119, 103, 24, -66, -47, -76, -87, -40, 13, 56, -117, -64, -31, -110, -110, -38, -112, -70, 86, 113, 119, -96, -91, 56, -115, -13, 86, -77, -43, -1, -53, 112, -59, -52, 126, 77, 121, 59, 5, -30, 2, 56, -126, 9, -4, -44, -77, -51, 76, -105, 29, -123, 61, -30, -44, -39, 16, -25, 85, 124, 108, -51, 48, -56, 7, -12, -57, 49, 96, -126, -45, 34, 50, -22, 74, -73, 81, -3, 120, 90, -10, -12, -27, 5, -5, -103, 122, 63, -85, -35, 89, 35, -98, 63, 17, 71, -29, 93, 94, 27, 117, -63, 81, 15, 83, 64, 12, -90, 53, -110, 118, 107, -119, -55, 65, -27, 115, -50, 126, 2, 61, 66, -102, -47, -7, -127, -67, -39, -91, 73, -101, -116, -23, 42, 102, 92, 109, -107, -85, 111, -120, 120, 92, -38, 84, -82, -19, 112, 76, 28, 7, -78, 65, -72, 63, 83, 120, 33, -3, -3, 105, -10, 5, 1, 103, -33, 32, -58, 10, -22, -55, -118, -122, 37, -37, 38, -13, 92, 121, 124, 126, 117, -19, -11, 44, -109, -100, -64, -8, 121, 30, 2, -43, 121, 95, -63, -120, 6, 34, -115, 9, -35, 88, 20, -61, 35, -6, -92, 30, -116, -83, -28};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.5544401819677562);
    msg.setSource(11569U);
    msg.setSourceEntity(240U);
    msg.setDestination(59707U);
    msg.setDestinationEntity(13U);
    msg.req_id = 38754U;
    msg.ttl = 65141U;
    msg.destination.assign("XNQCYYGNSFWIOFHARTZQGUZBDOLNBLWFVKHRLLVHRUAHQIHBPBWSWJZGFFJPBIGAZXHSSPOXNKNKKLBLTRCUEUMGNMRXEWGJDFLCTPXDPWIZBTGUDYCPUOCIFQYWAQBEJDPDMVQDJALATHRBDTFVSVEMOFIWMAOTYYYRRZVBESXWHQXXMPTVJCVEUSUKCPPTLSZCRYZYXOJHQEMGAAVJEDIIOOKNMWLRSTU");
    const char tmp_msg_0[] = {15, 93, -37, -105, 73, -109, -106, 111, -92, 11, 47, -78, -109, 55, -3, -70, 98, -47, 49, 20, -110, 18, -78, -12, -12, 4, 31, -118, 89, 72, 79, 38, 29, -44, -92, -9, 79, 87, -122, -70, -118, 96, -4, -95, -67, 111, 53, 26, -42, -5, 118, -111, 45, 103, -72, 81, 45, 12, -9, 60, -97, 64, 29, -55, 106, -125, -40, 55, 17, 0, -127, -63, 6, 6, 7, 44, -65, -47, -27, 98, 24, 86, 35, -8, 125, -13, 115, -119, 102, 77, 86, 119, 41, 73, -108, -54, 4, 38, -122, 23, -123, -3, -126, -16, -89, -37, 108, 99, -30, -1, 63, 81, 73, -105, 35, -119, 88, 13, 120, 124, 125, 123, -100, 48, -69, 9, -33, -117, 88, 124, -95, -126, 80, -45, 88, -103, -113, 119, -23, 119, 42, 74, -54, -12, 121, -59, -48, -91, -20, 63, 58, -82, 110, -80, -125, -83, 122, -7, -102, -77, 83, -84, 113, 66, -25, 34, 99, 112, 48, 29, -22, 95, 51, -9, 98, -25, -111, -42, 109, -53, -100, 33, 13, 58, 11, -76, -23, -125, 96, 35, -125, -117, 108, -86, -91, 123, -94, 56, -127, -57, -42, -18, 104, -108, 89, 40, 118, -5, -81, -25, 15, 122, -88, 26, 64, 68, -104, -30, 8, 96};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.7619362745363537);
    msg.setSource(3974U);
    msg.setSourceEntity(88U);
    msg.setDestination(32829U);
    msg.setDestinationEntity(29U);
    msg.req_id = 9731U;
    msg.status = 47U;
    msg.text.assign("CHUWHEHYNNRPOPIBJWOWSRKJUSUHHFICUALRFWBMKMZZUIFUMQLYSOCVBVLMUQCLCYJMENJZGCXXHPDYGMQQSYJPEXKUNKFXRPHCAPFYTWTXWKVZTTSWVDGMZIVZJRNTRFNQGTDXQYAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.7068206610734532);
    msg.setSource(46873U);
    msg.setSourceEntity(130U);
    msg.setDestination(46765U);
    msg.setDestinationEntity(181U);
    msg.req_id = 2032U;
    msg.status = 10U;
    msg.text.assign("MIOQNZZJPVXUPLLJGPBBSUEHYCYPKQWGYLLWFBROKEHFOUWBCFIRQHXKJQIBGOKVGCNYIDDXJFWCLISKSFJYTYCTCWHQRFAALOAAOEDISBCJVZJZINEGMJNVDZHXHWTWBXYERUYKZSKLMMNZYREQPRKBCJAXETWGTVSEYFPLMURODIRWETAMIXQFBHRGXNAUCPADMTDP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.2087692626134513);
    msg.setSource(59778U);
    msg.setSourceEntity(77U);
    msg.setDestination(64523U);
    msg.setDestinationEntity(82U);
    msg.req_id = 13690U;
    msg.status = 74U;
    msg.text.assign("CMDPRPYHVABKFHSSXSZILWMNJACUSMTPUKXEKRQNVHHRONOVTYSWGULXNXZTMENFYUZQUYDELYIUQHIEIKMARV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.3148386550938217);
    msg.setSource(30411U);
    msg.setSourceEntity(92U);
    msg.setDestination(32998U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("DRHTHYHTBTUPGHSVPZMBDWOVARGVOLKFYACDERRTPEJRTNSEXEJAYKAMZNCEXUCPVTSKFFZJJFULBEWSRMEKBLKDGYIUZARZUUIPDEFZQWDOQMGANLLJNNTGVLFXFRVXCHZIBLQIAGDXPKJBOSXBNGTWIJIUZGFYNHZWAQSLHMSMRUNDFBYHOPLYGEWMXPIKQQZNSOOAOVVOYTCUJHJCSWLICBCQWQIBQDDYFESWPNAMPXRKIVXJCWKXVGTHU");
    msg.links = 3122063735U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.7641789973304774);
    msg.setSource(49772U);
    msg.setSourceEntity(165U);
    msg.setDestination(25500U);
    msg.setDestinationEntity(10U);
    msg.group_name.assign("QFCMLBTNLQIXDTXCK");
    msg.links = 1291911197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.7141216967751375);
    msg.setSource(29409U);
    msg.setSourceEntity(130U);
    msg.setDestination(61114U);
    msg.setDestinationEntity(214U);
    msg.group_name.assign("QKKXVICCXDHCBFGQXDBKLMBQXYUPRCEITTFYWHGZEBJFSAILPZDBVURYHAIXLFZYVFEDNLDMQEUSZJYOXQIIRKINSRERCGNOKYSPJRUXMEHFMGVFJTHWOWZBCTHNCOLKOSSZXTQGWPFVXTQEIO");
    msg.links = 4167614008U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.5826792404769783);
    msg.setSource(23104U);
    msg.setSourceEntity(88U);
    msg.setDestination(47012U);
    msg.setDestinationEntity(78U);
    msg.groupname.assign("LXEFDRCYEDQMKNXDLBXOSLVHJRHZGOSQGTVJXUGGBUBHMWNBAXSITNZJLOAWOFWNROHQPGPXIFZENEEOMMCFRKPSMZWZBWYZBSAPG");
    msg.action = 29U;
    msg.grouplist.assign("FTVABQWCLSGPQOOMSMRJTQFCLEKJFMZKIIOUZICLVNEOJEKRBQYRMMRDDGZLKCNMTWAIGDLPPAUUADGILU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.9449701628038422);
    msg.setSource(51958U);
    msg.setSourceEntity(8U);
    msg.setDestination(63688U);
    msg.setDestinationEntity(115U);
    msg.groupname.assign("DQUTZFSTNNIZHUHG");
    msg.action = 142U;
    msg.grouplist.assign("TNYILVCRTWNRBVIQBUAAIAHDKFHDMSQKXKOFKYVNIURPHATKXWOLRNGGCCLOFJTHVTSZOLZJEQKETHAQDMVRMNJVUUWCEEYWXBNHFXTZLGEDSHAJCNQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.11483204965659466);
    msg.setSource(50565U);
    msg.setSourceEntity(242U);
    msg.setDestination(41630U);
    msg.setDestinationEntity(23U);
    msg.groupname.assign("FOBKYRCHFXUCNCCEMJWILGS");
    msg.action = 83U;
    msg.grouplist.assign("HGPKSGSEDDGXMOIGHUAFJWIUKXTVDWFPUSOFZTWCMUMCBOLYKOVONVOADPCJPMVKZRCTAXVJBZHUONLMPOMCFGYUURBNVYZJKONRLRWWHVBIQLHRKVTJAZUFPTZAVITBRCJNA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.34221837580765324);
    msg.setSource(2307U);
    msg.setSourceEntity(206U);
    msg.setDestination(37583U);
    msg.setDestinationEntity(118U);
    msg.value = 0.6417141896237696;
    msg.sys_src = 48696U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.4549651263123733);
    msg.setSource(54116U);
    msg.setSourceEntity(159U);
    msg.setDestination(28201U);
    msg.setDestinationEntity(167U);
    msg.value = 0.8000442331356878;
    msg.sys_src = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.4850880262917806);
    msg.setSource(14447U);
    msg.setSourceEntity(31U);
    msg.setDestination(61107U);
    msg.setDestinationEntity(161U);
    msg.value = 0.9677620242175118;
    msg.sys_src = 27328U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.5807779910617974);
    msg.setSource(5005U);
    msg.setSourceEntity(128U);
    msg.setDestination(48874U);
    msg.setDestinationEntity(219U);
    msg.value = 0.19960222047430176;
    msg.units = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.4684660964181343);
    msg.setSource(4711U);
    msg.setSourceEntity(143U);
    msg.setDestination(44291U);
    msg.setDestinationEntity(219U);
    msg.value = 0.17274419493917226;
    msg.units = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.4316155275276672);
    msg.setSource(50718U);
    msg.setSourceEntity(40U);
    msg.setDestination(12101U);
    msg.setDestinationEntity(89U);
    msg.value = 0.6238440615304308;
    msg.units = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.8317375681367819);
    msg.setSource(31911U);
    msg.setSourceEntity(174U);
    msg.setDestination(3755U);
    msg.setDestinationEntity(37U);
    msg.base_lat = 0.7184604056870458;
    msg.base_lon = 0.5149110150660686;
    msg.base_time = 0.9790829540973736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.5357432397130508);
    msg.setSource(15714U);
    msg.setSourceEntity(108U);
    msg.setDestination(14267U);
    msg.setDestinationEntity(217U);
    msg.base_lat = 0.9430873226694619;
    msg.base_lon = 0.8467943681142128;
    msg.base_time = 0.9729530889180812;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.9894610848422221);
    msg.setSource(18540U);
    msg.setSourceEntity(247U);
    msg.setDestination(40901U);
    msg.setDestinationEntity(84U);
    msg.base_lat = 0.45705183892698054;
    msg.base_lon = 0.620711908727343;
    msg.base_time = 0.298338233305928;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 28755U;
    tmp_msg_0.destination = 38195U;
    tmp_msg_0.timeout = 0.17927062155410511;
    IMC::StationKeeping tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8877281223242919;
    tmp_tmp_msg_0_0.lon = 0.4361103225472802;
    tmp_tmp_msg_0_0.z = 0.03450750714338191;
    tmp_tmp_msg_0_0.z_units = 56U;
    tmp_tmp_msg_0_0.radius = 0.21981812090194175;
    tmp_tmp_msg_0_0.duration = 25954U;
    tmp_tmp_msg_0_0.speed = 0.9480671382121374;
    tmp_tmp_msg_0_0.speed_units = 24U;
    tmp_tmp_msg_0_0.custom.assign("RILBQSTEFBLBDSVJTLKDMSDGWJSYOYMTRAUXHERGHEXCBVGDRXDKEXIYFRTXOULKOTZBYZCMTRZWHNHSFCRNYPSCPZUZWBOOMUIYXPHIQKTUKNNFFQFNTASVIEJKKPWTWBKAJMLFQGA");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.6233819350821458);
    msg.setSource(12923U);
    msg.setSourceEntity(245U);
    msg.setDestination(33633U);
    msg.setDestinationEntity(24U);
    msg.base_lat = 0.01821285739476508;
    msg.base_lon = 0.1486826416878162;
    msg.base_time = 0.16082799151977123;
    const char tmp_msg_0[] = {111, 63, 45, -10, 54, -9, -95, -12, 60, 73, -72, 114, 99, -109, 18, 65, -12, 91, -6, -96, -51, 56, -9, -47, 8, -35, -123, -128, -59, -120, 35, 103, 126, 100, -2, -49, 95, -35, -76, 65, 96, 42, -122, -96, 36, 24, -90, 6, 94, -83, 59, -28, -36, 22, -55, 123, 16, 57, -28, -55, 105, 55, -45, -99, 79, 110, -113};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.1452570385752775);
    msg.setSource(56936U);
    msg.setSourceEntity(20U);
    msg.setDestination(23229U);
    msg.setDestinationEntity(25U);
    msg.base_lat = 0.803339872419975;
    msg.base_lon = 0.7360747137485172;
    msg.base_time = 0.2965424284206879;
    const char tmp_msg_0[] = {-107, -20, -38, -44, -52, -107, 76, 75, -37, 58, -76, -109, -114, 11, -80, -104, 32, 14, 53, 124, 1, 67, -95, 63, -65, 64, 102, 25, -1, -19, -108, -68, 53, -24, -79, 117, 15, -28, -31, 16, 78, 69, -107, 43, 40, -17, 65, 29, -114, -13, 117, 36, -113, -99, -94, 58, 1, -109, -50, -65, 22, 14, -97, 103, -5, -88, 104, 8, -44, -110, -89, 59, 38, 55, 75, -54, -67, 63, -83, 45, 51, 26, 104, 8, -8, 70, 4, -114, -70, -86, 3, 110, -88, -4, 14, -115, 4, -31, 110, -98, 56, -78, -103, -34, 65, -104, 113, -119, -93, 89, -125, -122, 99, -7, 10, -56, 117, 89, 98, 79, 91, 84, -110, 56, -48, 5, -8, 15, 34, -41, 27, 24, -23, -95, -41, -4, -93, 114, -79, 102, 83, 92, 50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.9469266413446946);
    msg.setSource(13900U);
    msg.setSourceEntity(27U);
    msg.setDestination(61171U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.8865856958372983;
    msg.base_lon = 0.4551435506371959;
    msg.base_time = 0.2014214332838552;
    const char tmp_msg_0[] = {65, -65, -63, 109, 3, 116, 100, -61, -17, 41, -115, 85, 34, -98, 74, -105, -14, 92, 39, 29, 89, 107, 48, 60, 113, 1, 10, 23, -85, 5, 5, -57, 36, -90, -94, 28, -77, -126, -79, -74, -44, 117, -76, -116, 9, -19, 57, 117, -92, -55, 88, 42, 62, -30, -67, -23, -66, -128, 113, 36, -32, 28, 64, -110, -89, 107, -113, -67, -31, 50, -63, -55, -45, -25, -103, -10, -120, -34, -72, 20, 5, 56, 54, -82, -107, 59, 80, 88, 84, 53, -112, -35, -66, 67, -38, -48, -5, 84, -85, 33, 28, -70, -10, 22, 99, -46, 23, -70, 4, 29, -95, 92, 70, -95, -70, -66, -9, -9, 50, 17, 44, 83, -70, 87, 45, -26, 14, 83, 64, -124, -123, 119, -86, -118, -120, 88, -44, 89, 28, 60, -127, -34, -7, 8, 38, 54, -82, -123, 33, 109, -123, -119, -37, -10, -85, 105, -2, 54, -113, -117, 10, -10, -41, 48, 119, -43, -49, -70, 32, -16, -57, 23, 83, 73, 50, 35, -57, 111, 115, 59, 52, 115, 99, -6, -59, 65, 51, -25, -54, -51, 126, -21, 2, 44, -113, 95, 73, -45, -9, 73, 4, 25, -87, 32, 3, -83, 76, 25, -125, 116};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.18352604036131714);
    msg.setSource(12129U);
    msg.setSourceEntity(60U);
    msg.setDestination(621U);
    msg.setDestinationEntity(124U);
    msg.sys_id = 36962U;
    msg.priority = -73;
    msg.x = 25336;
    msg.y = 24973;
    msg.z = 17530;
    msg.t = 4669;
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 244U;
    tmp_msg_0.text.assign("CJSSOJKUBIBOEWJBRZWXFFPBEUMNSFQZZDFHTDAJOWNVUVUXIAXDGRUOQCLCCQLQJURHEMHGLVRKHMQOOFMDASPLHZANKLZYKPWMCIBILVPPCWSMEAPYNLFVOBKMSKKMAZVATJGCBIRFDTFSNNPBXD");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.4687614652306552);
    msg.setSource(24655U);
    msg.setSourceEntity(40U);
    msg.setDestination(48999U);
    msg.setDestinationEntity(141U);
    msg.sys_id = 13774U;
    msg.priority = 83;
    msg.x = 1039;
    msg.y = 15192;
    msg.z = -15736;
    msg.t = -22488;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 39U;
    tmp_msg_0.text.assign("SYSJXIPTPWSKPDGZANFZKRSWGVTLGBZXKVJMFSMPNPSROORJRDWGBCWIRTWXFTXULGKIVUNMAULOYXVOTZ");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.7787892075262791);
    msg.setSource(20988U);
    msg.setSourceEntity(43U);
    msg.setDestination(2317U);
    msg.setDestinationEntity(163U);
    msg.sys_id = 53984U;
    msg.priority = -21;
    msg.x = 2394;
    msg.y = 16227;
    msg.z = -28531;
    msg.t = 6710;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.4915815654526111;
    tmp_msg_0.reason = 247U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.1741651758599463);
    msg.setSource(31742U);
    msg.setSourceEntity(194U);
    msg.setDestination(151U);
    msg.setDestinationEntity(4U);
    msg.req_id = 37578U;
    msg.type = 72U;
    msg.max_size = 22930U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.04795484373735326;
    tmp_msg_0.base_lon = 0.4337812021543276;
    tmp_msg_0.base_time = 0.36931080950284934;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.7204259452788758);
    msg.setSource(58552U);
    msg.setSourceEntity(29U);
    msg.setDestination(5143U);
    msg.setDestinationEntity(205U);
    msg.req_id = 17160U;
    msg.type = 182U;
    msg.max_size = 64388U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6477058996008704;
    tmp_msg_0.base_lon = 0.20917917042201906;
    tmp_msg_0.base_time = 0.8603171827090427;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 2600U;
    tmp_tmp_msg_0_0.priority = -64;
    tmp_tmp_msg_0_0.x = -7052;
    tmp_tmp_msg_0_0.y = -25789;
    tmp_tmp_msg_0_0.z = -29333;
    tmp_tmp_msg_0_0.t = 17107;
    IMC::VehicleState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op_mode = 15U;
    tmp_tmp_tmp_msg_0_0_0.error_count = 225U;
    tmp_tmp_tmp_msg_0_0_0.error_ents.assign("FMJAWMKGOQIQHGIXSEXAZKNWSCUOATGUGHXSJCFWNBEHLYZAOWEHOWXGQRIMWFISKIDCDETFTXZVCRUBEQOTITYVDYLYRPEDVSOGADOYNKVQZKJRKCXTDQJHBMUPLGUYNSSKFIGIHWZUMRLJJXHHMFFNUTVSGELUEYLABNFIOPALMKXNOPTONZBQVHLQPJN");
    tmp_tmp_tmp_msg_0_0_0.maneuver_type = 4394U;
    tmp_tmp_tmp_msg_0_0_0.maneuver_stime = 0.8980116622911324;
    tmp_tmp_tmp_msg_0_0_0.maneuver_eta = 22057U;
    tmp_tmp_tmp_msg_0_0_0.control_loops = 3961137446U;
    tmp_tmp_tmp_msg_0_0_0.flags = 156U;
    tmp_tmp_tmp_msg_0_0_0.last_error.assign("QBMYNBTTIFKGBBZVCCAQLRETJKQWSSVIXYWPUFFMGERLZVPWDSHEZYJDPRVSLPLYEGRNQLLLHVRTEUWSDFXKCZFVVIRAQIKAZMRUFPUYOLGYMFVNOBDEBFUXJUEYOOEQTWNERMPCNADGPMKSKRGJDOUHHXPOWAXTHJMNLHKXCKKQLSOTFVIHZOBACZZIZXKAXXIUQFXIACGGH");
    tmp_tmp_tmp_msg_0_0_0.last_error_time = 0.008243747347336794;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.17200764052409412);
    msg.setSource(11228U);
    msg.setSourceEntity(116U);
    msg.setDestination(25891U);
    msg.setDestinationEntity(36U);
    msg.req_id = 40053U;
    msg.type = 247U;
    msg.max_size = 56686U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.09383085866291896;
    tmp_msg_0.base_lon = 0.2677878532696776;
    tmp_msg_0.base_time = 0.6429871074373028;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 20169U;
    tmp_tmp_msg_0_0.priority = -22;
    tmp_tmp_msg_0_0.x = 13714;
    tmp_tmp_msg_0_0.y = 9074;
    tmp_tmp_msg_0_0.z = -18938;
    tmp_tmp_msg_0_0.t = -11130;
    IMC::CompressedImage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.frameid = 28U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {-64, -94, -18, 68, -119, 97, 73, 108, 120, 76, 63, 78, 4, 29, -71, 13, 110, 54, -109, -1, -31, 79, 97, -101, 9, 46, -100, 52, -14, -62, 95, 19, 124, -28, 29, -86, 119, -126, 99, 27, -68, -38, 44, -1, 63, 58, -30, 58, 113, -99, -128, -33, -13, 65, -47, -40, -69, -58, -37, 13, 14, -23, 69, -105, -22, -115, 2, 0, -31, 119, 19, 60, 14, 23, 13, -91, 59, -63, -74, 19, -46, -113, 9, -95, 92, 15, 64, 64, 71, -18, -42, -93, -40, 43, -97, -62, -45, -23, -26, -20, 30, 123, -93, 77, 44, 27, -82, 86, 111, 6, -17, -108, -51, 8, 42, 0, -112, -8, 91, -95, -124, 41, 84, -63, -24, -44, 73, 120, -122, -81, 123, -84, -26, -1, -95, 44, 110, 105, -100, -44, -85, -63, 126, -120, -119, -4, 76, 86, 20, 47, 40, 121, -99, -4, -26, 30, 9, -13, 18, 63, 36, -20, -15, -14, 13, 18, 86, 55, 95, -119, 7, 36, -53, -123, -118, -61, 119, -98, 41, 74, 41, 89, -16, 55, -8, -4, 119, -124, 59, 123, -53, 105, 55, 61, 60, -37, 37, 115, -1, 104, 36, -43, 47, 42, -70, 126, -27, -87, 25, 59, 23, -69, 59, -126, -118, -114, 43, 96, -20, 18, -121, -90, 79, -50, 123, 65, -82, 73, 78, -9, -48, 47, 8, 114, -127, 74, -29, 17, -24, -106, 108, 102, -86, 77, 43, -72, -33, 64, -16, 23, 109, -28, 39};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.15391984087346366);
    msg.setSource(41113U);
    msg.setSourceEntity(67U);
    msg.setDestination(48502U);
    msg.setDestinationEntity(137U);
    msg.original_source = 41989U;
    msg.destination = 32433U;
    msg.timeout = 0.45166947091466725;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("EPMACMCVFUEYMQDJFIVBEHYWPXTEQSWVFDUUVPBCYLMDSLUWL");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 33943U;
    tmp_tmp_msg_0_0.name.assign("QXAXRIPNKFDTOYPDTQDEWQESFSIIJZFQCWLNHMZBKKTTPBOSAUMNBJCYRZDECDOLOXFVLTVZEVVHWMUEHSIPDKFJDJXLSUDNPGOGKOHWPQYABUGQELXBBYGHRTCUMPERMOLJBWRYAKVFZKANWNETZCLIUUWDLNJHBWSCRBDGLJASSSVGORFGGMKJALIXQNAUMGSTYIGVUHZKWYTORQQCXYONCIKHVUNHZWMMAMRECXTV");
    tmp_tmp_msg_0_0.custom.assign("NTECTYYDKOBLSDEQGUQSATFUZDQIUETFHHSBYJOFZHQEIWFJJYVKLMDPEYKSDESN");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CcuEvent tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 89U;
    tmp_tmp_msg_0_1.id.assign("YMRYQHJMBUDKTEGFLYNXPFVSRIPAIUSTSKSDAKUSLNWGUFOEBYMZFZULCUNLNWDVKIGDMHMAEPTSWXEGCMRFBGOEONMSZDBZHNJJEYYASSIRWNNQVPQEWCQVLAJGPXRLRXWHWMTJOKCFIZBRGPDDCKUCAFVPCCIOITLXSVYFHTKWNRVFHBCYUATEOFYPBGHKPLJIXOEOIXA");
    IMC::Collision tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.30131880909618747;
    tmp_tmp_tmp_msg_0_1_0.type = 209U;
    tmp_tmp_msg_0_1.arg.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.5226244979314216);
    msg.setSource(3463U);
    msg.setSourceEntity(81U);
    msg.setDestination(29501U);
    msg.setDestinationEntity(56U);
    msg.original_source = 43175U;
    msg.destination = 40358U;
    msg.timeout = 0.8442828819748421;
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.3972153798878627;
    tmp_msg_0.x = 0.09737966832097933;
    tmp_msg_0.y = 0.9645774766738732;
    tmp_msg_0.z = 0.9987571213124788;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.9123532589241549);
    msg.setSource(12037U);
    msg.setSourceEntity(49U);
    msg.setDestination(61487U);
    msg.setDestinationEntity(160U);
    msg.original_source = 16551U;
    msg.destination = 56123U;
    msg.timeout = 0.3429394204240882;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 4U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.24569103392749014);
    msg.setSource(57717U);
    msg.setSourceEntity(254U);
    msg.setDestination(43531U);
    msg.setDestinationEntity(197U);
    msg.type = 187U;
    msg.comm_interface = 33467U;
    msg.model = 14470U;
    msg.list.assign("XKWONCEMUDKPBDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.49085026710985236);
    msg.setSource(14030U);
    msg.setSourceEntity(152U);
    msg.setDestination(24318U);
    msg.setDestinationEntity(10U);
    msg.type = 55U;
    msg.comm_interface = 38295U;
    msg.model = 52349U;
    msg.list.assign("RYMTQEQTNHLTJVOFUARUFPRSCPICWUBBYFOEUSYLEVYPUXLVLAXRKXBILCWTKFMDTTHQBQEPBGJMQEVINRIOUCATIRNKOMIRGSPQLSGFNBYHCLXWZNZJOIHKXAXPMDNCAHLWCNCMOQKRXZUXVPEOIGEVJVPZDFSKNWGYZPZXNDDIADZNVK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.7918414930373557);
    msg.setSource(34486U);
    msg.setSourceEntity(25U);
    msg.setDestination(24957U);
    msg.setDestinationEntity(59U);
    msg.type = 93U;
    msg.comm_interface = 30039U;
    msg.model = 55666U;
    msg.list.assign("FMRJFDBJQBWXBKCKEBMQKLUXLSMRRZNWFAMNDNIATSOGJTOBZFTLPBKDHPIJAJNIYXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.8168834208118833);
    msg.setSource(39136U);
    msg.setSourceEntity(220U);
    msg.setDestination(21369U);
    msg.setDestinationEntity(168U);
    msg.type = 233U;
    msg.req_id = 1643753474U;
    msg.ttl = 27225U;
    msg.code = 178U;
    msg.destination.assign("XNUEOSWZEFRLBWILYZHVJTMGYFPUNCOSIQMUXWMYVGDFHUEHNCALLZITIXGJXBQOUEWPVCFDCKOZXNLKNCUVAUIDMRWSZUEYTHVPNTIVWQOLRPHD");
    msg.source.assign("LJKVZIARBLZTSDEMYIZDBGUJACITPJPRUXYIOROHYUHLJOLAFEPSHLVFYDIQNSRGBTGGQRPWTHCCMHVOSWPLBCVMIULTUVEALQHFKXENQZPAVKTJDQRFXOAHGRLJQGZMKYGOBQZAKRFYEABWJXSRFZGEFVICJUMGYENXMKZZDMSISPDVNKWWYTHXBPWCNUQDSUDHXGENUOMEFJCFP");
    msg.acknowledge = 136U;
    msg.status = 67U;
    const char tmp_msg_0[] = {20, -72, 15, -36, 56, 47, 86, -101, -65, -92, 100, -39, 83, 63, -54, 49, 83, 45, -92, -82, 30, -88, 124, 10, -51, 47, -124, -2, -5, -40, -120, 78, 67, 75, 72, -108, 107, -98, -82, 51, 94, -109, 58, 125, -27, 119, 90, 43, 106, -59, 113, 100, -78, 95, 79, 50, -103, -82, -51, 106, 25, 93, -44, -58, -112, 70, 72, -47, 54, -1, -2, 75, 19, 60, -38, 74, -119, 9, 112, 112, -103, 77, -86, 71, 109, 70, -119, 94, 58, 22, 56, -13, 11, -117, 115, -104, -103, -75, 39, -45, -33, -70, -87, -92, 6, -89, -29, 64, -42, 45, 18, -23, -76, 114, -32, 41, 12, 67, 89, -33, -78, -58, -81, -82, 72, -119, 122, -105, -84, -60, 115, 58, 104, -84, -55, -52, 99, 18, 91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.05690826428849893);
    msg.setSource(5458U);
    msg.setSourceEntity(106U);
    msg.setDestination(9276U);
    msg.setDestinationEntity(174U);
    msg.type = 128U;
    msg.req_id = 3542702920U;
    msg.ttl = 57791U;
    msg.code = 63U;
    msg.destination.assign("NSRIZZSWTAISQEZXWPCEKRUUEMAGLQODKMOYLFBWPXKHVVELJRKVFV");
    msg.source.assign("TSHEHSIYCDYCPWQUPKYULZXUCGPVCXJBJGWJZHSPNLFGXGROZPBFOLKGQEFRMMPKCYREBPJFWJZZFGNQTLHTDVEXIUKFVRRIXXQMATSREISLDTKVBFCABEOUXNREJTZIYFBLMZNLMKUIMSXAAJDVZHDJEZEIGSRLGCQOUBDSROVJTMUWODBDWAUPSGYPWEYVYHXBVYHYIDWCHKTMCFUSXCTOBWNVWHQOOOHQAIARDFTQWNAIAMKAPKVM");
    msg.acknowledge = 116U;
    msg.status = 220U;
    const char tmp_msg_0[] = {58, 27, -68, -45, -7, 121, -68, 102, -91, -15, 3, 45, -48, 78, 25, -103, 102, 98, 24, 43, -109, -64, 37, 32, -115, -8, -8, -102, 99, 15, -121, -34, 100, -26, -85, -34, -1, -127, 12, 23, 20, 114, 58, 98, 34};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.5924922885689051);
    msg.setSource(25818U);
    msg.setSourceEntity(9U);
    msg.setDestination(36068U);
    msg.setDestinationEntity(230U);
    msg.type = 10U;
    msg.req_id = 1515155112U;
    msg.ttl = 64324U;
    msg.code = 54U;
    msg.destination.assign("IGXEBKOGWGISL");
    msg.source.assign("ITURTVSDCHYWMIGHKKJZZSEOFUINVOGZVARMNCKOODVJSHRJEFHARVSVXKLROQCAPGMHEALZGQLJFRGOPDLXXFOBNDRBSOFQTEDAMHEMNQVGISETUYULYSXUMSWQAHRWBBKQGPPAXJBLJBKBLMDCNZECXVGKPIRTZJFMSYXBQNWPKXUNFZDTDUCXLFYBJPWNPLWCQAKZNIZRECGOQCPAHIDWQYULY");
    msg.acknowledge = 227U;
    msg.status = 188U;
    const char tmp_msg_0[] = {104, -14, -56, 65, 4, 122, -53, 27, -29, -94, -85, -108, 104, -117, -7, -126, 101, 30, 101, -105, 112, -47, -2, 27, 84, 113, 125, -108, -40, -61, -66, 107, -86, 21, -84, 31, 108, -47, 73, -34, 47, 28, -26, 60, 26, 44, 18, 23, -9, 50, 10, -44, -47, 18, 53, 103, 14, -74, 38, -72, -4, 84, 100, -54, 98, 7, -20, -86, 53, 96, 118, 80, 104, -46, -25, 89, -24, -84, 72, -24, -123, -65, -94, 7, -51, -15, -18, 116, -39, 39, 89, 13, 41, -36, 51, -76, -22, 15, -124, 41, 24, 100, -70, 56, 50, -72, 40, 63, -25, 13, -107, 90, -69, -25, 39, -12, 77, 80, -128, 45, -20, -89, 8, 95, 126, 68, -82, -56, -46, -11, 50, -18, -91, -83, -21, 91, 26, -110, -55, 121, -13, -12, -105, -39, -80, -53, -13};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.11146937411913793);
    msg.setSource(30931U);
    msg.setSourceEntity(9U);
    msg.setDestination(25488U);
    msg.setDestinationEntity(70U);
    msg.id = 141U;
    msg.range = 0.7174410661212417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.24591479834596075);
    msg.setSource(24165U);
    msg.setSourceEntity(67U);
    msg.setDestination(29455U);
    msg.setDestinationEntity(26U);
    msg.id = 107U;
    msg.range = 0.1273821689455782;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.8628885935339421);
    msg.setSource(5561U);
    msg.setSourceEntity(124U);
    msg.setDestination(50171U);
    msg.setDestinationEntity(32U);
    msg.id = 246U;
    msg.range = 0.14608169610341926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.1984828009882208);
    msg.setSource(31610U);
    msg.setSourceEntity(132U);
    msg.setDestination(38705U);
    msg.setDestinationEntity(146U);
    msg.beacon.assign("PXRFZPFIRXFMSZNFHSYYBPICZXMNGVMHTHWMZDRBKZEDMUKTGNGLSBHSGJTKTOEASIXCGUKDGIAIODKHIXJJESCVPWFLOQUOUROZXXL");
    msg.lat = 0.09204123259380725;
    msg.lon = 0.7136491168835563;
    msg.depth = 0.8140317333712219;
    msg.query_channel = 11U;
    msg.reply_channel = 164U;
    msg.transponder_delay = 51U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.9295968105612716);
    msg.setSource(36977U);
    msg.setSourceEntity(109U);
    msg.setDestination(64202U);
    msg.setDestinationEntity(239U);
    msg.beacon.assign("AWGHZJKWTITBVRJCNAAHJOMPVVKOJTYNIGIWFIHTSBZCVUAPM");
    msg.lat = 0.8627639870458295;
    msg.lon = 0.7961735787509366;
    msg.depth = 0.9697143283162593;
    msg.query_channel = 126U;
    msg.reply_channel = 80U;
    msg.transponder_delay = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.17482584626639253);
    msg.setSource(24821U);
    msg.setSourceEntity(208U);
    msg.setDestination(55374U);
    msg.setDestinationEntity(19U);
    msg.beacon.assign("OVMSXJCRVELUQKEPNGPNPCGOPWWJMHNWRVJEMTPOZZUGCXANKDUYVCHYNBFFHURKDRRXEVGQDVMBYSAXLONIBSQBSGJCYKFFFHYXHHEZVBGUNLASHJTIKULLXCLUTRZMTYBKGYQGORACDEITLOQIWDPGAZDWAVEMKJOIUDUIPNMXOYYFQHNACFSOFDHKBS");
    msg.lat = 0.8375735473812749;
    msg.lon = 0.693931882714709;
    msg.depth = 0.07825240603895056;
    msg.query_channel = 208U;
    msg.reply_channel = 135U;
    msg.transponder_delay = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.6832239829348694);
    msg.setSource(17639U);
    msg.setSourceEntity(128U);
    msg.setDestination(16319U);
    msg.setDestinationEntity(219U);
    msg.op = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.6491745873598899);
    msg.setSource(348U);
    msg.setSourceEntity(98U);
    msg.setDestination(21584U);
    msg.setDestinationEntity(115U);
    msg.op = 189U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SGWJMROEQXTNSFLWSGTDMJEVKJGUWFIMWZRVAXDHQJYHKJNAAGPUXBIHBAHNVSVVRPEWDGJKJVKFTLYCMXDWEGZRZRUQOMZQOIUALPAXLUQJARRQVGZTTZFIQUPMFSEGVMQJOHYORKTZSTDCSYIALZUCNDFFYFDIBCKPTPOJPOKECEBNQYYOBKLQHFEOSYRY");
    tmp_msg_0.lat = 0.44453331443146094;
    tmp_msg_0.lon = 0.7468799474308386;
    tmp_msg_0.depth = 0.2713252697806038;
    tmp_msg_0.query_channel = 82U;
    tmp_msg_0.reply_channel = 208U;
    tmp_msg_0.transponder_delay = 166U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.042279710812188176);
    msg.setSource(42549U);
    msg.setSourceEntity(249U);
    msg.setDestination(23425U);
    msg.setDestinationEntity(156U);
    msg.op = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.9614713624451716);
    msg.setSource(8062U);
    msg.setSourceEntity(149U);
    msg.setDestination(35333U);
    msg.setDestinationEntity(55U);
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 16U;
    tmp_msg_0.snapshot.assign("WTARYVUCQFFBJMZZS");
    IMC::TrexOperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 24U;
    tmp_tmp_msg_0_0.goal_id.assign("XJRMACICFAKWIXHDDHLCTCSELOYGRDGOQVOVLXDFBMPJRGNXKSKBZLEUAETTGKSVIYBOTDGPNABJLDEUGIYBI");
    IMC::TrexToken tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeline.assign("PIJLGCUGUMQXGTGBZOXACUYWRAMFISERIJUHUMBGGWKMVJFYHLJHLZBDKOTXKAUBWJIFEHMDRWDFUQWYOHPCBBYSTPPVIVEPYXJDQIISYNTUOQABMXNPFIVDKZGTZQLHKZSECRJZVLNENWGCIOVTWYUWMTQEVFWLNTSAJSXPDWAKMHECZNXHOKCOOABCHAVDDTERURPYNSPSDQLBKFJ");
    tmp_tmp_tmp_msg_0_0_0.predicate.assign("ZTIWAPOQKTWBVUZRJABRPHVZKREWBZISUTGPHEANQDSLCNQSOHOQFVPYPTNGNXDTQEXHN");
    tmp_tmp_msg_0_0.token.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.9482776272276169);
    msg.setSource(52899U);
    msg.setSourceEntity(80U);
    msg.setDestination(1330U);
    msg.setDestinationEntity(108U);
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 118U;
    tmp_msg_0.eta = 48397U;
    tmp_msg_0.info.assign("FPKZPTBPWUTQDWILYXVMCDACQOAETDJWTVFYWZEMEECAVPHHUOVILDFLIMBPODRIRQTTUFUEDFPRWMVLXJNQIRYSSKGHAOMYSRCXLJSZGKBJYHIQMBIFRVQZOQHMNSKNV");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.43387538983961205);
    msg.setSource(12597U);
    msg.setSourceEntity(195U);
    msg.setDestination(26479U);
    msg.setDestinationEntity(81U);
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 55U;
    tmp_msg_0.x = 57451U;
    tmp_msg_0.y = 41059U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.6238882010936613);
    msg.setSource(38466U);
    msg.setSourceEntity(165U);
    msg.setDestination(18652U);
    msg.setDestinationEntity(45U);
    msg.op = 74U;
    msg.system.assign("SQNBOGFVZEOASXXYQHWYPYKLXHXUGWWSJPHWWIYOBPTTSVCDVJBYMHFBAALJRMMUNBTZJCNIRZUTIKXPAZGTZAISQMMHNIZDQFKKVJJONKUPWADUFVPQGBCCAYKLBXREWEXRMUHRLRDSGSFIORHIXZJRQZYPUZIEOVVC");
    msg.range = 0.9888020587735556;
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.43692405826926906;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.45887847491799294);
    msg.setSource(32193U);
    msg.setSourceEntity(121U);
    msg.setDestination(3428U);
    msg.setDestinationEntity(194U);
    msg.op = 22U;
    msg.system.assign("KJZNOHPQDHJMMKKRNMVELFNKKXAQDOTGVGUIYLSNASEZVCKNQQSIMBUJAIGBJHVOVQJMRUNYFQKFEVPCWXRGQFMWPUFYREBHBWHEOKRUVXBNZDINTFLXDTVHMPJWDUYCZ");
    msg.range = 0.5460969873127366;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 42786U;
    tmp_msg_0.bearing = 0.7809596862444714;
    tmp_msg_0.elevation = 0.6696035765953425;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.10724349965428104);
    msg.setSource(52464U);
    msg.setSourceEntity(11U);
    msg.setDestination(25092U);
    msg.setDestinationEntity(105U);
    msg.op = 209U;
    msg.system.assign("CTEYBUFVQKJTRWZLIOSDFTEBIJTKWYTRERHCSPJKMUSVRMXUHYLMGJYACPXOCBLVQCIKNAFDVUTRMPMDXCZWPXWTEPSNDLGZZUYPYSQHJNVEUINUAQNKMGDXAOVHPGJHHMLGSRHZFVSNQJLYMPZEWKAARNBKIBCEMXOPIVAOJQRUFRRDBEEXNZGDLIFTCZVFEFQGIJQFNACPSYCBTBDXUDQWAUAQYNOBLITXHGOBGHWIGWKS");
    msg.range = 0.6221916290169379;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.05888239390633809;
    tmp_msg_0.reason = 222U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.47663546512977106);
    msg.setSource(37222U);
    msg.setSourceEntity(14U);
    msg.setDestination(11716U);
    msg.setDestinationEntity(241U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.2542768972501007);
    msg.setSource(9670U);
    msg.setSourceEntity(8U);
    msg.setDestination(52838U);
    msg.setDestinationEntity(31U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.19233715419158393);
    msg.setSource(27525U);
    msg.setSourceEntity(220U);
    msg.setDestination(27055U);
    msg.setDestinationEntity(69U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.19813122069963818);
    msg.setSource(24694U);
    msg.setSourceEntity(209U);
    msg.setDestination(38252U);
    msg.setDestinationEntity(206U);
    msg.list.assign("SVBIIZYGCRVPZCJKRKUUPZKNDXDUBUBIACIWWSBZMLSHXOLPIGSTDGOYJUOKHAJRHKPVAIYGRLAXQPSJJAAVCJYWBETGBFZPCQRJNHHYVQOOEQSNOMYWMHATIJVUPLCEUMFCFWVUYBZLVEXNQDGOOWNIAXXCZPKQTYLSRTMRTQQNEBEFRSDGOWFUKMLWMVFTLHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.01903087329148967);
    msg.setSource(64934U);
    msg.setSourceEntity(107U);
    msg.setDestination(35475U);
    msg.setDestinationEntity(57U);
    msg.list.assign("IDNNNCVSWGVGGSJPZXSOREUXLSRFYNATZUEVMSEZWXOZIHYVGQWATHRIMFOKADQRNSKUXCVIABCWEFCFJVZLFWQUSMDPUIGMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.07328290175037544);
    msg.setSource(7114U);
    msg.setSourceEntity(97U);
    msg.setDestination(29167U);
    msg.setDestinationEntity(5U);
    msg.list.assign("HAQCBZBUSYRXOSUFSXDSFPSIETRXBOWBJTCUJFPRHIMKDOXAAYPHZBCOTBWLXHPYEKQVFAQHYDACALRHPLTUSTZBDZYHVZOYPIAXJCMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.04516903548070794);
    msg.setSource(30818U);
    msg.setSourceEntity(140U);
    msg.setDestination(18556U);
    msg.setDestinationEntity(160U);
    msg.peer.assign("FFSRPUDMAPIGSXJGRAOMVDPFQJTGTBPVWBDKNPYYSUEWMOKVXEMLABYHHOAHWCRJERIHUOOFFTQEZZDXISQCDFUNKJTAKZWNZVVKUPSBQCGWCRXZVNMLRCSYELBPWLQDDIBQXUSKYKYDAYNRWQEHENBCXBWJXTOKKN");
    msg.rssi = 0.0771386612093502;
    msg.integrity = 51043U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.8824474651046992);
    msg.setSource(21127U);
    msg.setSourceEntity(7U);
    msg.setDestination(41192U);
    msg.setDestinationEntity(211U);
    msg.peer.assign("EZVXGOLANPAAHYEQNSIUGHCGNVKYURREACVOPFOBTURHCIZVXBKJDFWMBYHGLDDNPBZYMZBSPTECRGLQYMOILSLKCONSNUXSHFPOIMUJCLTLDEJDRXFWZZUKTUHFUQRIYXZVSQVHTWAJWFIHMVDPWILAFBHDHGEYJEJSPNCMVEBBYEVWFKOXPIEITJQQTBTTNKBKSGOO");
    msg.rssi = 0.9590906274957135;
    msg.integrity = 12346U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.06063768622803145);
    msg.setSource(61391U);
    msg.setSourceEntity(183U);
    msg.setDestination(61581U);
    msg.setDestinationEntity(128U);
    msg.peer.assign("RWYGWPSYQDBHWDQUFPEJHZHESPXWJAGMCIYZPJWLSIBAHPAOJJGBXIAJORPIKTVVZFUGKKKQXYOLWDQCTFKEONL");
    msg.rssi = 0.5300269484972323;
    msg.integrity = 16791U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.43892381274400527);
    msg.setSource(10727U);
    msg.setSourceEntity(219U);
    msg.setDestination(38805U);
    msg.setDestinationEntity(236U);
    msg.value = 8269;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.929443199991085);
    msg.setSource(45749U);
    msg.setSourceEntity(30U);
    msg.setDestination(42455U);
    msg.setDestinationEntity(124U);
    msg.value = 28848;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.52150313542715);
    msg.setSource(49239U);
    msg.setSourceEntity(174U);
    msg.setDestination(37642U);
    msg.setDestinationEntity(66U);
    msg.value = -3046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.10179382871010478);
    msg.setSource(25144U);
    msg.setSourceEntity(173U);
    msg.setDestination(60744U);
    msg.setDestinationEntity(62U);
    msg.value = 0.3003845887646579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.12642979173770574);
    msg.setSource(53113U);
    msg.setSourceEntity(222U);
    msg.setDestination(18468U);
    msg.setDestinationEntity(94U);
    msg.value = 0.7411389206924499;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.15628436629516673);
    msg.setSource(3478U);
    msg.setSourceEntity(74U);
    msg.setDestination(20393U);
    msg.setDestinationEntity(133U);
    msg.value = 0.40233827166201586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.9295642452155168);
    msg.setSource(38703U);
    msg.setSourceEntity(60U);
    msg.setDestination(42994U);
    msg.setDestinationEntity(63U);
    msg.value = 0.22596399735880057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.5064231170130884);
    msg.setSource(35473U);
    msg.setSourceEntity(77U);
    msg.setDestination(57476U);
    msg.setDestinationEntity(212U);
    msg.value = 0.6391691676012763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.30312391393243676);
    msg.setSource(41612U);
    msg.setSourceEntity(221U);
    msg.setDestination(35665U);
    msg.setDestinationEntity(220U);
    msg.value = 0.6337997410974009;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.07454691634411725);
    msg.setSource(40571U);
    msg.setSourceEntity(37U);
    msg.setDestination(40039U);
    msg.setDestinationEntity(230U);
    msg.validity = 12360U;
    msg.type = 72U;
    msg.utc_year = 65096U;
    msg.utc_month = 30U;
    msg.utc_day = 178U;
    msg.utc_time = 0.9008057235358599;
    msg.lat = 0.4226657266883571;
    msg.lon = 0.7681355361381221;
    msg.height = 0.3175022787447084;
    msg.satellites = 87U;
    msg.cog = 0.04997527018657688;
    msg.sog = 0.6459816075056323;
    msg.hdop = 0.001491591466765696;
    msg.vdop = 0.3867669970209854;
    msg.hacc = 0.23205770031562434;
    msg.vacc = 0.6212644031857615;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.413175699613623);
    msg.setSource(62755U);
    msg.setSourceEntity(141U);
    msg.setDestination(63796U);
    msg.setDestinationEntity(202U);
    msg.validity = 35525U;
    msg.type = 8U;
    msg.utc_year = 61815U;
    msg.utc_month = 164U;
    msg.utc_day = 78U;
    msg.utc_time = 0.7008694345851118;
    msg.lat = 0.9215225860452946;
    msg.lon = 0.5913915187069477;
    msg.height = 0.3605096486311167;
    msg.satellites = 209U;
    msg.cog = 0.963125718579123;
    msg.sog = 0.15038602295158832;
    msg.hdop = 0.3761207810194148;
    msg.vdop = 0.8170277405775347;
    msg.hacc = 0.8694112911707754;
    msg.vacc = 0.8128990700550771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.11488914327475253);
    msg.setSource(40182U);
    msg.setSourceEntity(132U);
    msg.setDestination(24503U);
    msg.setDestinationEntity(97U);
    msg.validity = 13191U;
    msg.type = 151U;
    msg.utc_year = 52973U;
    msg.utc_month = 99U;
    msg.utc_day = 116U;
    msg.utc_time = 0.7610907870607853;
    msg.lat = 0.3252294430242202;
    msg.lon = 0.3598656269642405;
    msg.height = 0.25367065386661036;
    msg.satellites = 240U;
    msg.cog = 0.2950368944359464;
    msg.sog = 0.6732699528996693;
    msg.hdop = 0.09189028884913164;
    msg.vdop = 0.43605688351565575;
    msg.hacc = 0.25947797347689394;
    msg.vacc = 0.5649032716762038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.9076092633056613);
    msg.setSource(22898U);
    msg.setSourceEntity(8U);
    msg.setDestination(58107U);
    msg.setDestinationEntity(236U);
    msg.time = 0.5294101857659577;
    msg.phi = 0.7616999611933146;
    msg.theta = 0.4260646050958079;
    msg.psi = 0.35470154164712353;
    msg.psi_magnetic = 0.2846353539937678;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.912044874210486);
    msg.setSource(1741U);
    msg.setSourceEntity(26U);
    msg.setDestination(16610U);
    msg.setDestinationEntity(6U);
    msg.time = 0.15915519329010075;
    msg.phi = 0.5284716148843488;
    msg.theta = 0.4525118744955924;
    msg.psi = 0.12368514531442554;
    msg.psi_magnetic = 0.2785120296940109;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.15244466548272173);
    msg.setSource(30009U);
    msg.setSourceEntity(140U);
    msg.setDestination(33633U);
    msg.setDestinationEntity(92U);
    msg.time = 0.7846208194170826;
    msg.phi = 0.6814840915707691;
    msg.theta = 0.5524970572888517;
    msg.psi = 0.07177983856050962;
    msg.psi_magnetic = 0.31081882067357425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.4028068874479992);
    msg.setSource(14999U);
    msg.setSourceEntity(99U);
    msg.setDestination(10335U);
    msg.setDestinationEntity(30U);
    msg.time = 0.7657483071087446;
    msg.x = 0.010731639077895871;
    msg.y = 0.9836413328854466;
    msg.z = 0.24728054980035008;
    msg.timestep = 0.5566698276600146;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.7600208403632793);
    msg.setSource(26986U);
    msg.setSourceEntity(53U);
    msg.setDestination(56181U);
    msg.setDestinationEntity(55U);
    msg.time = 0.2561156490193637;
    msg.x = 0.349094551554735;
    msg.y = 0.851345764612127;
    msg.z = 0.33186776932803186;
    msg.timestep = 0.788802347812998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.8996833740902994);
    msg.setSource(38519U);
    msg.setSourceEntity(244U);
    msg.setDestination(65091U);
    msg.setDestinationEntity(106U);
    msg.time = 0.8511254385594583;
    msg.x = 0.8416072939805624;
    msg.y = 0.23261750881123944;
    msg.z = 0.9891839221531884;
    msg.timestep = 0.6260772919033272;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.2567323331259812);
    msg.setSource(41962U);
    msg.setSourceEntity(162U);
    msg.setDestination(35930U);
    msg.setDestinationEntity(208U);
    msg.time = 0.2681525446754853;
    msg.x = 0.8949218833118419;
    msg.y = 0.43707654586669653;
    msg.z = 0.08155057290943069;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.17363636978857433);
    msg.setSource(9179U);
    msg.setSourceEntity(19U);
    msg.setDestination(21003U);
    msg.setDestinationEntity(125U);
    msg.time = 0.6795278348671159;
    msg.x = 0.767603925368904;
    msg.y = 0.7884179010649056;
    msg.z = 0.4811600578002029;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.8439788645335162);
    msg.setSource(4375U);
    msg.setSourceEntity(193U);
    msg.setDestination(63814U);
    msg.setDestinationEntity(210U);
    msg.time = 0.22201549358209904;
    msg.x = 0.13884552096505687;
    msg.y = 0.6941984348703958;
    msg.z = 0.48228326272642974;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.5760968800189565);
    msg.setSource(23684U);
    msg.setSourceEntity(219U);
    msg.setDestination(20848U);
    msg.setDestinationEntity(57U);
    msg.time = 0.2349336423283599;
    msg.x = 0.6660229953405028;
    msg.y = 0.35381652768421046;
    msg.z = 0.017454759762855265;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.8088774265811522);
    msg.setSource(46911U);
    msg.setSourceEntity(217U);
    msg.setDestination(51449U);
    msg.setDestinationEntity(180U);
    msg.time = 0.5624356640178886;
    msg.x = 0.14708341106841305;
    msg.y = 0.03074841881619106;
    msg.z = 0.4095998148581027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.8602776376120843);
    msg.setSource(59015U);
    msg.setSourceEntity(165U);
    msg.setDestination(52486U);
    msg.setDestinationEntity(2U);
    msg.time = 0.4858332450808379;
    msg.x = 0.21583993744793661;
    msg.y = 0.6390839345223523;
    msg.z = 0.9603434620714059;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.17465162321412175);
    msg.setSource(32586U);
    msg.setSourceEntity(252U);
    msg.setDestination(48602U);
    msg.setDestinationEntity(8U);
    msg.time = 0.8510014867209588;
    msg.x = 0.17824774353116113;
    msg.y = 0.5251053337742095;
    msg.z = 0.08377769895912612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.2815848655889287);
    msg.setSource(44250U);
    msg.setSourceEntity(98U);
    msg.setDestination(63455U);
    msg.setDestinationEntity(92U);
    msg.time = 0.7124522529050189;
    msg.x = 0.16853259932388787;
    msg.y = 0.30789947582188837;
    msg.z = 0.19306777857113488;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.5325649507478379);
    msg.setSource(56718U);
    msg.setSourceEntity(18U);
    msg.setDestination(20769U);
    msg.setDestinationEntity(23U);
    msg.time = 0.8345512368221304;
    msg.x = 0.6794154476117015;
    msg.y = 0.4734017105359941;
    msg.z = 0.8875349138164811;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.2216153080209854);
    msg.setSource(15087U);
    msg.setSourceEntity(0U);
    msg.setDestination(61092U);
    msg.setDestinationEntity(192U);
    msg.validity = 80U;
    msg.x = 0.3869788971598257;
    msg.y = 0.7684424138216289;
    msg.z = 0.4498335617304392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.28627993820606124);
    msg.setSource(46241U);
    msg.setSourceEntity(244U);
    msg.setDestination(26171U);
    msg.setDestinationEntity(48U);
    msg.validity = 49U;
    msg.x = 0.8621934504489911;
    msg.y = 0.8852698387745063;
    msg.z = 0.7399546145870458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.20008336115262204);
    msg.setSource(30641U);
    msg.setSourceEntity(153U);
    msg.setDestination(44423U);
    msg.setDestinationEntity(184U);
    msg.validity = 142U;
    msg.x = 0.6885269571288557;
    msg.y = 0.19411434318381848;
    msg.z = 0.6703675565726387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.5184282127937465);
    msg.setSource(14544U);
    msg.setSourceEntity(249U);
    msg.setDestination(46456U);
    msg.setDestinationEntity(245U);
    msg.validity = 41U;
    msg.x = 0.8177294737915038;
    msg.y = 0.436083733014368;
    msg.z = 0.04786737766543414;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.34564618270241976);
    msg.setSource(28307U);
    msg.setSourceEntity(111U);
    msg.setDestination(62596U);
    msg.setDestinationEntity(101U);
    msg.validity = 222U;
    msg.x = 0.7341451465012137;
    msg.y = 0.21666788006783821;
    msg.z = 0.8266891999942603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.2851679562321823);
    msg.setSource(3019U);
    msg.setSourceEntity(104U);
    msg.setDestination(57847U);
    msg.setDestinationEntity(10U);
    msg.validity = 170U;
    msg.x = 0.06808461121703147;
    msg.y = 0.655741868778789;
    msg.z = 0.32791594322503403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.05855582481093313);
    msg.setSource(32588U);
    msg.setSourceEntity(234U);
    msg.setDestination(48435U);
    msg.setDestinationEntity(108U);
    msg.time = 0.26789826421694607;
    msg.x = 0.11773010221298474;
    msg.y = 0.8146309455575234;
    msg.z = 0.6240233785381428;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.8673326805234495);
    msg.setSource(33530U);
    msg.setSourceEntity(135U);
    msg.setDestination(50142U);
    msg.setDestinationEntity(211U);
    msg.time = 0.38051940614423807;
    msg.x = 0.09554464369224824;
    msg.y = 0.875281104573921;
    msg.z = 0.14665392543204658;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.5500537918270808);
    msg.setSource(63253U);
    msg.setSourceEntity(104U);
    msg.setDestination(33400U);
    msg.setDestinationEntity(154U);
    msg.time = 0.2037094003282578;
    msg.x = 0.9337829268913802;
    msg.y = 0.9754653259627158;
    msg.z = 0.45409790759846425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.4090503560542844);
    msg.setSource(14608U);
    msg.setSourceEntity(122U);
    msg.setDestination(20623U);
    msg.setDestinationEntity(4U);
    msg.validity = 33U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9057211595305273;
    tmp_msg_0.y = 0.8511533513094964;
    tmp_msg_0.z = 0.0034364002334409394;
    tmp_msg_0.phi = 0.4241783206517351;
    tmp_msg_0.theta = 0.4457521459517849;
    tmp_msg_0.psi = 0.7311440111133646;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.37754725117323185;
    tmp_msg_1.beam_height = 0.8437675371953162;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.4218719322010227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.17139160021361233);
    msg.setSource(23373U);
    msg.setSourceEntity(78U);
    msg.setDestination(18653U);
    msg.setDestinationEntity(124U);
    msg.validity = 35U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7138107074578475;
    tmp_msg_0.y = 0.3887585754638334;
    tmp_msg_0.z = 0.04201231470166833;
    tmp_msg_0.phi = 0.16162934069719093;
    tmp_msg_0.theta = 0.3084755834985151;
    tmp_msg_0.psi = 0.7771945611811234;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.08276503046372663;
    tmp_msg_1.beam_height = 0.7105394439616114;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.26092485672152943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.66693116364866);
    msg.setSource(24402U);
    msg.setSourceEntity(124U);
    msg.setDestination(17542U);
    msg.setDestinationEntity(49U);
    msg.validity = 0U;
    msg.value = 0.003069829357306042;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.19392895423322565);
    msg.setSource(8427U);
    msg.setSourceEntity(90U);
    msg.setDestination(33953U);
    msg.setDestinationEntity(146U);
    msg.value = 0.49504289966828774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.09157071943564055);
    msg.setSource(32879U);
    msg.setSourceEntity(5U);
    msg.setDestination(36760U);
    msg.setDestinationEntity(161U);
    msg.value = 0.5737632934822939;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.006862910478946049);
    msg.setSource(1705U);
    msg.setSourceEntity(92U);
    msg.setDestination(30162U);
    msg.setDestinationEntity(212U);
    msg.value = 0.2056494600538611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.35559229916729895);
    msg.setSource(22788U);
    msg.setSourceEntity(224U);
    msg.setDestination(52853U);
    msg.setDestinationEntity(197U);
    msg.value = 0.9969746408903859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.7724627008750063);
    msg.setSource(63524U);
    msg.setSourceEntity(67U);
    msg.setDestination(16941U);
    msg.setDestinationEntity(196U);
    msg.value = 0.7085565674676955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.5120389622990631);
    msg.setSource(1531U);
    msg.setSourceEntity(70U);
    msg.setDestination(9115U);
    msg.setDestinationEntity(199U);
    msg.value = 0.8140026469307097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.7283447311341381);
    msg.setSource(19114U);
    msg.setSourceEntity(186U);
    msg.setDestination(54052U);
    msg.setDestinationEntity(206U);
    msg.value = 0.8222835295999628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.13320848334488244);
    msg.setSource(19732U);
    msg.setSourceEntity(194U);
    msg.setDestination(38120U);
    msg.setDestinationEntity(43U);
    msg.value = 0.40666034572768095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.745850632497604);
    msg.setSource(11787U);
    msg.setSourceEntity(252U);
    msg.setDestination(47248U);
    msg.setDestinationEntity(187U);
    msg.value = 0.12979717557641357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.6310971955452037);
    msg.setSource(18867U);
    msg.setSourceEntity(152U);
    msg.setDestination(42058U);
    msg.setDestinationEntity(132U);
    msg.value = 0.2601071580068687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.3795671559907565);
    msg.setSource(20715U);
    msg.setSourceEntity(201U);
    msg.setDestination(2697U);
    msg.setDestinationEntity(250U);
    msg.value = 0.9496127340524655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.8822174771883776);
    msg.setSource(33475U);
    msg.setSourceEntity(159U);
    msg.setDestination(12299U);
    msg.setDestinationEntity(130U);
    msg.value = 0.18600444525050153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.26053081650168397);
    msg.setSource(14610U);
    msg.setSourceEntity(253U);
    msg.setDestination(38598U);
    msg.setDestinationEntity(172U);
    msg.value = 0.49928584851919744;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.7066840231760528);
    msg.setSource(48713U);
    msg.setSourceEntity(0U);
    msg.setDestination(14596U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9972980370669773;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.7457523383552439);
    msg.setSource(46020U);
    msg.setSourceEntity(98U);
    msg.setDestination(36887U);
    msg.setDestinationEntity(164U);
    msg.value = 0.04828976939287033;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.2639224522790463);
    msg.setSource(8758U);
    msg.setSourceEntity(98U);
    msg.setDestination(616U);
    msg.setDestinationEntity(17U);
    msg.value = 0.19719041822736894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.8176274317770169);
    msg.setSource(54447U);
    msg.setSourceEntity(208U);
    msg.setDestination(39426U);
    msg.setDestinationEntity(126U);
    msg.value = 0.15447017467148938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.2587595207117852);
    msg.setSource(2853U);
    msg.setSourceEntity(225U);
    msg.setDestination(40049U);
    msg.setDestinationEntity(62U);
    msg.value = 0.12129298736743421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.6429061648220318);
    msg.setSource(18863U);
    msg.setSourceEntity(233U);
    msg.setDestination(30619U);
    msg.setDestinationEntity(213U);
    msg.value = 0.7873726375234844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.5073454939808715);
    msg.setSource(24338U);
    msg.setSourceEntity(132U);
    msg.setDestination(1089U);
    msg.setDestinationEntity(70U);
    msg.value = 0.45779088275481983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.6156994247090676);
    msg.setSource(36936U);
    msg.setSourceEntity(89U);
    msg.setDestination(55919U);
    msg.setDestinationEntity(209U);
    msg.value = 0.1672146528696664;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.625646546075409);
    msg.setSource(16118U);
    msg.setSourceEntity(21U);
    msg.setDestination(44315U);
    msg.setDestinationEntity(201U);
    msg.value = 0.4251474860922614;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.1431313313288417);
    msg.setSource(41577U);
    msg.setSourceEntity(250U);
    msg.setDestination(24126U);
    msg.setDestinationEntity(88U);
    msg.value = 0.38011140923119413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.7296851395479416);
    msg.setSource(3253U);
    msg.setSourceEntity(80U);
    msg.setDestination(52257U);
    msg.setDestinationEntity(218U);
    msg.value = 0.9295960225216737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.4586096900330048);
    msg.setSource(58708U);
    msg.setSourceEntity(211U);
    msg.setDestination(15147U);
    msg.setDestinationEntity(55U);
    msg.direction = 0.6650055766048086;
    msg.speed = 0.8325976346773785;
    msg.turbulence = 0.19219768768509982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.6895610602663098);
    msg.setSource(13822U);
    msg.setSourceEntity(185U);
    msg.setDestination(45006U);
    msg.setDestinationEntity(253U);
    msg.direction = 0.5900431211488316;
    msg.speed = 0.24817379366137682;
    msg.turbulence = 0.3763077228559212;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.19204328134930926);
    msg.setSource(29750U);
    msg.setSourceEntity(217U);
    msg.setDestination(1393U);
    msg.setDestinationEntity(90U);
    msg.direction = 0.056305026745976594;
    msg.speed = 0.5148051962982907;
    msg.turbulence = 0.6576876167367222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.9500317528204791);
    msg.setSource(20891U);
    msg.setSourceEntity(177U);
    msg.setDestination(9328U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5889851578373665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.17200437553373737);
    msg.setSource(45324U);
    msg.setSourceEntity(184U);
    msg.setDestination(52452U);
    msg.setDestinationEntity(34U);
    msg.value = 0.1279765648201041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.02260551476451289);
    msg.setSource(20755U);
    msg.setSourceEntity(176U);
    msg.setDestination(36619U);
    msg.setDestinationEntity(77U);
    msg.value = 0.3018216601546597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.9912855905313174);
    msg.setSource(32004U);
    msg.setSourceEntity(192U);
    msg.setDestination(51500U);
    msg.setDestinationEntity(214U);
    msg.value.assign("PRTIJNZZCXHIQOUBIWTOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.26305281674467196);
    msg.setSource(11406U);
    msg.setSourceEntity(155U);
    msg.setDestination(51619U);
    msg.setDestinationEntity(13U);
    msg.value.assign("RGXTABMFFGTCNOFRONDSJATNMZKCYCEUKUSSXDQOAENTBKSWOWALUDCZJXJSLQPKIXBNUMCELFIAYHDVPHZPMZGRLXGUEEBTVDKMXVVPASWQRAQBXONIVGYCFLECSHVLPCLSLPEYMPOYLJYECYNVKPYWBZNGXKYFTEMVIAZJZDDTRNXWSJHOOQPBAHRRJPKRTILTMIIJOFJUISBBRVGWFQAVXQBOWTHGZUWFQQCHDGWZUHYIDHDMWJERIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.80843443749297);
    msg.setSource(19311U);
    msg.setSourceEntity(69U);
    msg.setDestination(36927U);
    msg.setDestinationEntity(47U);
    msg.value.assign("SGOGYFKSTBCUFDXHWPOIGJYJZZOIUANIKIPEMXEFYYWAVGTBPWRNFLAWCSFINQOWCOFSLHLUSPQWMVMSSTVWPDNCVGAAEBXHRBKENBBEHKEVFHNUNHKPJSAPRCNTUTUXQTEMGJINAYEDTXWFDUBYVVXKCRERMQRIGEDDXOOXGDLGWXPLPLKRZUMCRAMFJOURLYTJYOIJDISTXHQQKJBZFVHKZALZKCWCYJMHLYUZRJQAZMQDVBL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.7513557275737577);
    msg.setSource(56213U);
    msg.setSourceEntity(71U);
    msg.setDestination(41957U);
    msg.setDestinationEntity(160U);
    const char tmp_msg_0[] = {19, 8, 23, 118, -57, -85, -1, 107, -59, -106, 71, 35, 107, 122, 76, 10, -79, 52, -27, -67, -5, -71, -15, -117, -39, -47, -87, -13, 80, -82, 69, -20, 57, 73, 109, 3, -83, -3, 24, 92, -8, 116, 37, -50, 37, -103, -61, 55, 14, -55, 110, 52, 81, 97, 115, 0, 97, -62, -104, 115, -107, 46, 92, 56, -72, 36, -94, -12, 23, 72, -124, -17, 34, -72, -37, -69, -1, 98, 28, -3, 45, 39, 41, 45, 74, 1, 122, -43, -76, 108, -102, -21, 81, 85, 11, -35, 9, -97, 36, -61, 109, -109, -95, -39, 65, -67, -44, -120, -112, 18, -85, 72, -115, -124, 28, -51, 103, -79, -15, -115, 2, 30, -11, 45};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.474588835764826);
    msg.setSource(37131U);
    msg.setSourceEntity(171U);
    msg.setDestination(10571U);
    msg.setDestinationEntity(120U);
    const char tmp_msg_0[] = {45, -53, -53, 106, 122, 24, 83, -28, 35, 51, -53, 30, -120, -114, 31, 48, 16, 55, 71, 28, 80, 64, -12, -1, 18, -33, 95, 105};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.13022009569648663);
    msg.setSource(33167U);
    msg.setSourceEntity(58U);
    msg.setDestination(35867U);
    msg.setDestinationEntity(132U);
    const char tmp_msg_0[] = {39, -42, 82, -30, -119, 44, 31, 122, -76, -4, 69, -67, 122, 16, -86, 47, 63, -30, -9, -85, 107, -12, 87, -78, 3, 5, 48, -40, -54, -32, -51, 36, 12, -61, -90, 76, 7, 56, -115, 2, -29, 41, -34, -65, 44, -58, 56, -13, 90, -86, 86, 29, -113, -6, -86, -78, 37, -83, 114, 124, -48, 62, 72, 113, 37, -76, 37, 51, 49, -45, -109, 0, 109, -113, 59, 103, -87, -1, 49, -112, 30, 8, -56, 114, 72, 3, -71, 98, -15, 29, 110, 111, 114, -85, -76, 34, -44, 65, -15, -125, 115, -43, -52, 5, -22, 65, 92, 100, 28, -114, -102, 16, -27, 20, -20, -88, 86, -4, 52, -42, 93, -2, -56, -89, -127, -89, 68, -98, 48, -116, -106, 120, -10, -91, 106, 114, 122, -39, 103, 69, 72, -26, 39, 115, -32, -80, 35, -77, -128, 8, 110, 0, 113, 81, -38, 51, 20, -90, 20, 56, 60, -58, -121, -51, -127, -128, -56, -78, 123, -102, -88, -30, -111, 68, -99, 86, -77, 7, 114};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.32056708322497507);
    msg.setSource(63162U);
    msg.setSourceEntity(182U);
    msg.setDestination(36256U);
    msg.setDestinationEntity(130U);
    msg.value = 0.2896568969427442;
    msg.label.assign("QCJWSHUKNBPZKGDSHMHTUXGGCRSGMYVPFDMGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.1490906546235674);
    msg.setSource(62048U);
    msg.setSourceEntity(69U);
    msg.setDestination(52042U);
    msg.setDestinationEntity(46U);
    msg.value = 0.905141525166908;
    msg.label.assign("DHXVPYNKOQJFPLSDBOXHJEZCFGJAKBRBMUPQMKCEMTZYAIHUBDLUIKFGOHXZMMSTQJHARVQCDRYLVKGPRIDLJATRXGSGPKDUWBXVWKOMMXRUUDLLXWLKQWFNTTIFVGONXGJCYGFXENSJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.6894492293342478);
    msg.setSource(34330U);
    msg.setSourceEntity(206U);
    msg.setDestination(30966U);
    msg.setDestinationEntity(13U);
    msg.value = 0.13457388933385284;
    msg.label.assign("CQJNLJSWFWDDSRJTFJQXXBGWELKOUTRTSSIHBDPLMRUBENAGSUZFNEFPBYYLCMTJJLAMOOAGRIYYXTIMVVBWTRWKOECZZXYDKWSZAGIMIXOBVPIYKHYCXBDKJQUGLFWOEAHVQCLWZKHJPXKYEWQDNKEXNNFPGDMRBJNFHQZOPKOZCNVXYREBNUCDARRNEBPZPVAMPAAHGQTTLOOWHVHMIESVLXQUPUMIZQCKCGLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.8792550463407793);
    msg.setSource(11204U);
    msg.setSourceEntity(205U);
    msg.setDestination(62987U);
    msg.setDestinationEntity(161U);
    msg.type = 14U;
    msg.frequency = 4227815911U;
    msg.min_range = 19806U;
    msg.max_range = 62139U;
    msg.bits_per_point = 246U;
    msg.scale_factor = 0.5783947278836494;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.37861163148736243;
    tmp_msg_0.beam_height = 0.5276199039515451;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {48, -14, -28, -88, 18, 79, 76, -4, 62, -84, -59, -6, -89, -84, 68, 116, 52, -31, -9, 90, -88, 64, 115, 85, -108, -24, 51, 92, 105, -50, 5, -73, -60, -71, -105, -14, -47, -28, -84, 24, -8, -13, 117, -9, -14, -40, 40, -77, -86, -39, -39, -40, 57, 99, -82, 38, -69, -118, -113, -6, 88, 74, -124, 37, 37, -125, 106, -44, 115, -36, 66, 101, -43, 62, 59, 56, -18, -16, 52, 35, 42, -77, -115, 27, -31, 84, -120, -2, -55, 36, -63, 119, 108, 52, -76, 31, 1, 116, -1, 92, -28, -124, -83, -45, 24, -1, 50, 22, -111, -118, 22, 2, 10, 15, 94, -70, -115, -7, 48, -105, 14, 55, -85, 36, -80, -114, 20, -26, 89, -15, -57, -73, 60, 28, -13, 37, -65, -20, -7, -121, 122, -108, 3, -60, 53, -71, 57, -115, -114, -120, 53, -86, -23, 37, -4, -4, -68, -114, -105, 81, 100, -110, 37, -47, 39, 105, 88, -37, -57, -50, -117, 91, 84, -39, -53, -112, -72, -95, 93, 6, 25, -34, -9, -87, 89, 36, -65, -45, -108, -57, -62, 18, 83, -125, 95, -101, -25, -123, -19, -72, -47, 19, -4, 78, 120, -38, -69, 5, 71, -67, -100, -94, -44, 54, 97, -72, 13, 37, 46, -100, -108, 4};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.49449500375779454);
    msg.setSource(42425U);
    msg.setSourceEntity(193U);
    msg.setDestination(52093U);
    msg.setDestinationEntity(214U);
    msg.type = 67U;
    msg.frequency = 3088244957U;
    msg.min_range = 59679U;
    msg.max_range = 46279U;
    msg.bits_per_point = 130U;
    msg.scale_factor = 0.25608262710113505;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.43911175749683173;
    tmp_msg_0.beam_height = 0.32627892851293727;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {34, 124, -116, -24, 80, -68, -120, -116, -52, -1, -68, 9, 120, 62, -111, -69, -102, -52, -26, 6, 105, 74, -63, 8, 105, -120, -99, 115, 40, 32, -89, 59, 107, -11, -30, -34, -14, -28, -61, 102, -15, 115, 32, -76, -126, 97, -78, -17, -50, -115, 0, -66, 0, -83, 3, 81, -42, 68, 48, 5, 71, -69, 61, 39, -37, -36, 31, -65, 83, -99, -49, -84, -57, -118, 43, -99, -29, 35, -52, -117, 20, -58, -36, -24, 38, -46, 42, -72, 49, -1, -74, 14, 109, -102, 99, -8, 23, -37, -101, 17, -39, 68, 64, 12, -83, -11, -86, 51, 50, 121, -25, -58, 110, 117, -114, 33, -122, -32, 61, -54, 90, -121, -91, 66, -68, -105, -56, 107, 25, -48, -62, -97, 1, -73, -50, 48, 100, 36, 72, -80, -81, -70, 82, -74, 30, -19, -73, -48, 69, 73, 81, 77, 53, -75, -72, -21, -59, 52, 51, -112, -103, -22, -69, 79, 6, -37, -11, -9, -5, 84, 119, 68, 121, -17, 44, 84, -46, 60, 84, 31, 6, -63, 25, -72, -32, 32, -89, -90, -92, -3, 92, -108, -73, -16, 126, 49, 109, -52, 118, 31, 119, 73, -39, 118, 74, 70};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.695586491690061);
    msg.setSource(25593U);
    msg.setSourceEntity(63U);
    msg.setDestination(35815U);
    msg.setDestinationEntity(218U);
    msg.type = 112U;
    msg.frequency = 3123190971U;
    msg.min_range = 794U;
    msg.max_range = 43091U;
    msg.bits_per_point = 161U;
    msg.scale_factor = 0.37520952957536;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9208268741389054;
    tmp_msg_0.beam_height = 0.8736603496849472;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {124, 73, -21, 126, -128, -31, 50, -92, 16, -99, -76, -51, -56, -109, 67, -128, -13, 54, -87, 99, 17, 45, 1, -54, -52};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.7352415882068702);
    msg.setSource(23005U);
    msg.setSourceEntity(226U);
    msg.setDestination(64066U);
    msg.setDestinationEntity(133U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.728689266804192);
    msg.setSource(63364U);
    msg.setSourceEntity(220U);
    msg.setDestination(21593U);
    msg.setDestinationEntity(182U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.9186316977945022);
    msg.setSource(19171U);
    msg.setSourceEntity(204U);
    msg.setDestination(61251U);
    msg.setDestinationEntity(35U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.5012280787698372);
    msg.setSource(7857U);
    msg.setSourceEntity(157U);
    msg.setDestination(33239U);
    msg.setDestinationEntity(112U);
    msg.op = 3U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.49807292183760765);
    msg.setSource(35605U);
    msg.setSourceEntity(132U);
    msg.setDestination(7946U);
    msg.setDestinationEntity(143U);
    msg.op = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.7949922056527788);
    msg.setSource(7640U);
    msg.setSourceEntity(116U);
    msg.setDestination(27286U);
    msg.setDestinationEntity(39U);
    msg.op = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.8325125532541892);
    msg.setSource(56260U);
    msg.setSourceEntity(221U);
    msg.setDestination(38807U);
    msg.setDestinationEntity(23U);
    msg.value = 0.3416870985118057;
    msg.confidence = 0.5965909363233971;
    msg.opmodes.assign("VITBNEGXYHKQXATHMFIGIQDUAMAXCCPYBFMDDWWOSGYJJXLKNZRYZGQZFLRITOKHKPSFZBKRDAXDKWYQBKHBI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.7665586407228032);
    msg.setSource(6078U);
    msg.setSourceEntity(240U);
    msg.setDestination(40749U);
    msg.setDestinationEntity(136U);
    msg.value = 0.4846149672907264;
    msg.confidence = 0.8021914687569148;
    msg.opmodes.assign("TRZDJGZOCRBSCVUHZJSKQPEXIMYEOSERWHZIPHEMXPHQYKJIUNNIKZXRNWNQUGPAWKNRZQBNDZTGTWYHSAIOOKYGMVFVKDAWAGLFSVERJGVAJVTDRPJJVVDQCRIABTAVMYTMD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.35024466702915735);
    msg.setSource(42470U);
    msg.setSourceEntity(57U);
    msg.setDestination(55435U);
    msg.setDestinationEntity(44U);
    msg.value = 0.18897102721268988;
    msg.confidence = 0.32883084114880823;
    msg.opmodes.assign("WJEDCGPPDEKSLTVKKUNGVVHINARVMDHCXRCVONKALBFMKDTGCUEZAFBHTHDINYCTSLQKJMFBQMUSZALIRVOXRUQSCOHGWPFLEMGQUXDTTUIUFUREWSLCZOXYBGXYFFUPDBCUDVCZGASEAIOYVYZDFXKRBORMZQJMVPRWGSBWOOXXJFWXWHBQYKNDQIWZHSPWBAFJHSHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.5689534517466903);
    msg.setSource(59546U);
    msg.setSourceEntity(74U);
    msg.setDestination(46308U);
    msg.setDestinationEntity(24U);
    msg.itow = 2654048606U;
    msg.lat = 0.5723101818669778;
    msg.lon = 0.5562081220379987;
    msg.height_ell = 0.06321240279505702;
    msg.height_sea = 0.2845015865754378;
    msg.hacc = 0.8462268455038955;
    msg.vacc = 0.09393829609321014;
    msg.vel_n = 0.0684712605635992;
    msg.vel_e = 0.8650616400601706;
    msg.vel_d = 0.21230507987228864;
    msg.speed = 0.1940654212784645;
    msg.gspeed = 0.35823887086122164;
    msg.heading = 0.7250774277993471;
    msg.sacc = 0.8884090899070419;
    msg.cacc = 0.8038447124773219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.09044725318502267);
    msg.setSource(40316U);
    msg.setSourceEntity(221U);
    msg.setDestination(37260U);
    msg.setDestinationEntity(237U);
    msg.itow = 3213334090U;
    msg.lat = 0.9562363115599692;
    msg.lon = 0.1434046128090578;
    msg.height_ell = 0.7451560021126582;
    msg.height_sea = 0.5858607053010191;
    msg.hacc = 0.007297261898738916;
    msg.vacc = 0.8015167044064162;
    msg.vel_n = 0.05734523318502194;
    msg.vel_e = 0.6573038780255125;
    msg.vel_d = 0.6543771867329324;
    msg.speed = 0.34681763364795426;
    msg.gspeed = 0.6750138562802793;
    msg.heading = 0.13775420878528766;
    msg.sacc = 0.06850250385479673;
    msg.cacc = 0.5811119572766953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.13787770137515187);
    msg.setSource(34444U);
    msg.setSourceEntity(169U);
    msg.setDestination(3649U);
    msg.setDestinationEntity(11U);
    msg.itow = 3885548555U;
    msg.lat = 0.043074726917810335;
    msg.lon = 0.8323760030908779;
    msg.height_ell = 0.4591186117174335;
    msg.height_sea = 0.15628310743089624;
    msg.hacc = 0.12195744046415691;
    msg.vacc = 0.2448371650519061;
    msg.vel_n = 0.038359704504458136;
    msg.vel_e = 0.4885716768121837;
    msg.vel_d = 0.9670222865082764;
    msg.speed = 0.9199303535960413;
    msg.gspeed = 0.5014575619480922;
    msg.heading = 0.9764133875202119;
    msg.sacc = 0.5316762749513492;
    msg.cacc = 0.5273147822624591;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.8363222772861747);
    msg.setSource(38633U);
    msg.setSourceEntity(75U);
    msg.setDestination(36869U);
    msg.setDestinationEntity(145U);
    msg.id = 43U;
    msg.value = 0.40598165509669537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.6900736004951336);
    msg.setSource(22517U);
    msg.setSourceEntity(253U);
    msg.setDestination(54717U);
    msg.setDestinationEntity(1U);
    msg.id = 51U;
    msg.value = 0.9987467108428235;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.48020371421590335);
    msg.setSource(54081U);
    msg.setSourceEntity(226U);
    msg.setDestination(28242U);
    msg.setDestinationEntity(103U);
    msg.id = 119U;
    msg.value = 0.29406215479172926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.26106446162376296);
    msg.setSource(60555U);
    msg.setSourceEntity(100U);
    msg.setDestination(4905U);
    msg.setDestinationEntity(14U);
    msg.x = 0.8871539411481608;
    msg.y = 0.8645417192513396;
    msg.z = 0.05681413077805675;
    msg.phi = 0.5649148916311695;
    msg.theta = 0.314255510278468;
    msg.psi = 0.8131279035482851;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.21261471109239927);
    msg.setSource(64043U);
    msg.setSourceEntity(4U);
    msg.setDestination(19229U);
    msg.setDestinationEntity(231U);
    msg.x = 0.8095057127265504;
    msg.y = 0.9951322394073349;
    msg.z = 0.6002656034186356;
    msg.phi = 0.7592176435182474;
    msg.theta = 0.45966616268917804;
    msg.psi = 0.15644795172220904;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.1508003857703335);
    msg.setSource(18935U);
    msg.setSourceEntity(134U);
    msg.setDestination(40053U);
    msg.setDestinationEntity(29U);
    msg.x = 0.3168665960266882;
    msg.y = 0.42991973425400243;
    msg.z = 0.4616865327759875;
    msg.phi = 0.46046745218153984;
    msg.theta = 0.47399975661359917;
    msg.psi = 0.02832449710854712;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.472089632627522);
    msg.setSource(1299U);
    msg.setSourceEntity(198U);
    msg.setDestination(6187U);
    msg.setDestinationEntity(18U);
    msg.beam_width = 0.13443318503438895;
    msg.beam_height = 0.8247739707644322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.9520510204725702);
    msg.setSource(58191U);
    msg.setSourceEntity(149U);
    msg.setDestination(40272U);
    msg.setDestinationEntity(51U);
    msg.beam_width = 0.13156119956040424;
    msg.beam_height = 0.5559266939186472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.4118558073291142);
    msg.setSource(36703U);
    msg.setSourceEntity(92U);
    msg.setDestination(23905U);
    msg.setDestinationEntity(221U);
    msg.beam_width = 0.01942047931914126;
    msg.beam_height = 0.37768023176029797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.41570051768241656);
    msg.setSource(6431U);
    msg.setSourceEntity(209U);
    msg.setDestination(35782U);
    msg.setDestinationEntity(161U);
    msg.sane = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.7356786955091406);
    msg.setSource(5184U);
    msg.setSourceEntity(70U);
    msg.setDestination(25515U);
    msg.setDestinationEntity(50U);
    msg.sane = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.6595690220392783);
    msg.setSource(28219U);
    msg.setSourceEntity(113U);
    msg.setDestination(13081U);
    msg.setDestinationEntity(137U);
    msg.sane = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.728708629880263);
    msg.setSource(38765U);
    msg.setSourceEntity(143U);
    msg.setDestination(10753U);
    msg.setDestinationEntity(43U);
    msg.value = 0.450322312951959;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.2844502094703518);
    msg.setSource(16925U);
    msg.setSourceEntity(97U);
    msg.setDestination(5073U);
    msg.setDestinationEntity(104U);
    msg.value = 0.14321289119196445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.8275740379825224);
    msg.setSource(4637U);
    msg.setSourceEntity(254U);
    msg.setDestination(62058U);
    msg.setDestinationEntity(120U);
    msg.value = 0.4482081410070341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.29259580368856997);
    msg.setSource(25183U);
    msg.setSourceEntity(219U);
    msg.setDestination(32082U);
    msg.setDestinationEntity(108U);
    msg.value = 0.41610417378041575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.019907430424963457);
    msg.setSource(63654U);
    msg.setSourceEntity(198U);
    msg.setDestination(44703U);
    msg.setDestinationEntity(198U);
    msg.value = 0.6093280839650653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.14402681664538552);
    msg.setSource(10808U);
    msg.setSourceEntity(238U);
    msg.setDestination(4135U);
    msg.setDestinationEntity(167U);
    msg.value = 0.5134012927800565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.38386090896485703);
    msg.setSource(37692U);
    msg.setSourceEntity(228U);
    msg.setDestination(53918U);
    msg.setDestinationEntity(54U);
    msg.value = 0.5030956860671225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.7176085881150164);
    msg.setSource(27014U);
    msg.setSourceEntity(17U);
    msg.setDestination(38934U);
    msg.setDestinationEntity(122U);
    msg.value = 0.7867521362301154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.2173664750641372);
    msg.setSource(47344U);
    msg.setSourceEntity(15U);
    msg.setDestination(52339U);
    msg.setDestinationEntity(123U);
    msg.value = 0.8138012138155191;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.1428512256544069);
    msg.setSource(49330U);
    msg.setSourceEntity(207U);
    msg.setDestination(59221U);
    msg.setDestinationEntity(92U);
    msg.value = 0.07797727334574467;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.9924724638423271);
    msg.setSource(15232U);
    msg.setSourceEntity(1U);
    msg.setDestination(47015U);
    msg.setDestinationEntity(114U);
    msg.value = 0.670707940962146;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.9286040101009532);
    msg.setSource(11133U);
    msg.setSourceEntity(134U);
    msg.setDestination(10578U);
    msg.setDestinationEntity(199U);
    msg.value = 0.8197921130422581;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.7027490415588762);
    msg.setSource(44233U);
    msg.setSourceEntity(224U);
    msg.setDestination(60357U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9816138888130516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.49077398129675176);
    msg.setSource(15097U);
    msg.setSourceEntity(39U);
    msg.setDestination(42780U);
    msg.setDestinationEntity(108U);
    msg.value = 0.5609921063632257;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.28114920751681394);
    msg.setSource(4778U);
    msg.setSourceEntity(115U);
    msg.setDestination(5266U);
    msg.setDestinationEntity(204U);
    msg.value = 0.5121989595626458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.854026481071003);
    msg.setSource(13845U);
    msg.setSourceEntity(168U);
    msg.setDestination(65480U);
    msg.setDestinationEntity(34U);
    msg.value = 0.43395612878987666;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.9697676628297676);
    msg.setSource(28800U);
    msg.setSourceEntity(245U);
    msg.setDestination(5516U);
    msg.setDestinationEntity(93U);
    msg.value = 0.8727731180362053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.8030333786960728);
    msg.setSource(15275U);
    msg.setSourceEntity(152U);
    msg.setDestination(9146U);
    msg.setDestinationEntity(36U);
    msg.value = 0.672815651866717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.39545517462003);
    msg.setSource(10908U);
    msg.setSourceEntity(206U);
    msg.setDestination(60508U);
    msg.setDestinationEntity(83U);
    msg.value = 0.41645557574444914;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.9916412257110835);
    msg.setSource(11628U);
    msg.setSourceEntity(57U);
    msg.setDestination(4655U);
    msg.setDestinationEntity(222U);
    msg.value = 0.6756698407342724;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.9664458530020962);
    msg.setSource(41417U);
    msg.setSourceEntity(142U);
    msg.setDestination(20688U);
    msg.setDestinationEntity(114U);
    msg.value = 0.20503109367868078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.7105232162981997);
    msg.setSource(25511U);
    msg.setSourceEntity(45U);
    msg.setDestination(58220U);
    msg.setDestinationEntity(152U);
    msg.value = 0.7436706830814395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.4118601296705452);
    msg.setSource(19814U);
    msg.setSourceEntity(14U);
    msg.setDestination(1608U);
    msg.setDestinationEntity(153U);
    msg.value = 0.6854146831063067;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.5330023805810803);
    msg.setSource(47928U);
    msg.setSourceEntity(186U);
    msg.setDestination(41840U);
    msg.setDestinationEntity(235U);
    msg.value = 0.7129546932420654;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.34042082106734384);
    msg.setSource(18969U);
    msg.setSourceEntity(224U);
    msg.setDestination(39128U);
    msg.setDestinationEntity(102U);
    msg.validity = 49844U;
    msg.type = 117U;
    msg.tow = 466781083U;
    msg.base_lat = 0.940267160740548;
    msg.base_lon = 0.7730826642326747;
    msg.base_height = 0.10844506450659008;
    msg.n = 0.3445618206629717;
    msg.e = 0.7831000455802157;
    msg.d = 0.24074530162584973;
    msg.v_n = 0.4120674096727355;
    msg.v_e = 0.6699635812717932;
    msg.v_d = 0.45261138469334916;
    msg.satellites = 250U;
    msg.iar_hyp = 56651U;
    msg.iar_ratio = 0.28930647953768907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.2557377839201149);
    msg.setSource(6223U);
    msg.setSourceEntity(171U);
    msg.setDestination(2981U);
    msg.setDestinationEntity(81U);
    msg.validity = 2556U;
    msg.type = 143U;
    msg.tow = 1703071441U;
    msg.base_lat = 0.5742305633033079;
    msg.base_lon = 0.8166850021933216;
    msg.base_height = 0.6499231209317461;
    msg.n = 0.40950148025203226;
    msg.e = 0.771926708604115;
    msg.d = 0.06517534762068267;
    msg.v_n = 0.45115553438180245;
    msg.v_e = 0.5354978420602834;
    msg.v_d = 0.11253037317601178;
    msg.satellites = 67U;
    msg.iar_hyp = 49132U;
    msg.iar_ratio = 0.11989477552711747;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.1787528158370456);
    msg.setSource(23515U);
    msg.setSourceEntity(152U);
    msg.setDestination(2317U);
    msg.setDestinationEntity(144U);
    msg.validity = 64985U;
    msg.type = 13U;
    msg.tow = 595353418U;
    msg.base_lat = 0.32280505620717326;
    msg.base_lon = 0.016328765371206644;
    msg.base_height = 0.43796919931432454;
    msg.n = 0.12375393908506438;
    msg.e = 0.2791223943135507;
    msg.d = 0.15378021160444233;
    msg.v_n = 0.1748527672054596;
    msg.v_e = 0.9294418359868957;
    msg.v_d = 0.2876624458303745;
    msg.satellites = 5U;
    msg.iar_hyp = 2734U;
    msg.iar_ratio = 0.8863722561532305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.19189018547029435);
    msg.setSource(8843U);
    msg.setSourceEntity(68U);
    msg.setDestination(39004U);
    msg.setDestinationEntity(161U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9674459766902845;
    tmp_msg_0.lon = 0.988252088540901;
    tmp_msg_0.height = 0.5197735503225962;
    tmp_msg_0.x = 0.4671023993526654;
    tmp_msg_0.y = 0.5473362030700633;
    tmp_msg_0.z = 0.6395085612800189;
    tmp_msg_0.phi = 0.24861815968358103;
    tmp_msg_0.theta = 0.35915011205164926;
    tmp_msg_0.psi = 0.030600523642538846;
    tmp_msg_0.u = 0.3431332944718939;
    tmp_msg_0.v = 0.45418817935287215;
    tmp_msg_0.w = 0.0982122048204852;
    tmp_msg_0.vx = 0.6184484251077994;
    tmp_msg_0.vy = 0.7459910472177653;
    tmp_msg_0.vz = 0.6910075321290947;
    tmp_msg_0.p = 0.8695511031398476;
    tmp_msg_0.q = 0.32067119263587973;
    tmp_msg_0.r = 0.459358588675135;
    tmp_msg_0.depth = 0.5254766782513374;
    tmp_msg_0.alt = 0.5239642498589042;
    msg.state.set(tmp_msg_0);
    msg.type = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.4578916568715339);
    msg.setSource(15420U);
    msg.setSourceEntity(179U);
    msg.setDestination(37475U);
    msg.setDestinationEntity(86U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2956450348153673;
    tmp_msg_0.lon = 0.15647787586395057;
    tmp_msg_0.height = 0.3111968498856795;
    tmp_msg_0.x = 0.2768959171497426;
    tmp_msg_0.y = 0.7491960987225151;
    tmp_msg_0.z = 0.055709525527781634;
    tmp_msg_0.phi = 0.28600186637207436;
    tmp_msg_0.theta = 0.11622615885462606;
    tmp_msg_0.psi = 0.35316472009944055;
    tmp_msg_0.u = 0.681622034197586;
    tmp_msg_0.v = 0.7675947540221733;
    tmp_msg_0.w = 0.14933741925210453;
    tmp_msg_0.vx = 0.10247094997741979;
    tmp_msg_0.vy = 0.26439287352462526;
    tmp_msg_0.vz = 0.22339607636311087;
    tmp_msg_0.p = 0.2903361730086864;
    tmp_msg_0.q = 0.5118954829841316;
    tmp_msg_0.r = 0.07406356755802856;
    tmp_msg_0.depth = 0.7478215576365613;
    tmp_msg_0.alt = 0.47124764404012875;
    msg.state.set(tmp_msg_0);
    msg.type = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.24414417314228387);
    msg.setSource(21120U);
    msg.setSourceEntity(226U);
    msg.setDestination(27794U);
    msg.setDestinationEntity(22U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 6.63666000680907e-05;
    tmp_msg_0.lon = 0.6916685397201735;
    tmp_msg_0.height = 0.6842677681367599;
    tmp_msg_0.x = 0.6204728575112886;
    tmp_msg_0.y = 0.5015289281435742;
    tmp_msg_0.z = 0.6242068558957231;
    tmp_msg_0.phi = 0.07504039094653536;
    tmp_msg_0.theta = 0.2684719435213887;
    tmp_msg_0.psi = 0.8300153460240257;
    tmp_msg_0.u = 0.59499773197949;
    tmp_msg_0.v = 0.879432888035221;
    tmp_msg_0.w = 0.8421105880522884;
    tmp_msg_0.vx = 0.35433755841864334;
    tmp_msg_0.vy = 0.948913682688887;
    tmp_msg_0.vz = 0.3873633669792359;
    tmp_msg_0.p = 0.35590543948794695;
    tmp_msg_0.q = 0.4294296255744271;
    tmp_msg_0.r = 0.14383353355066908;
    tmp_msg_0.depth = 0.5285171199105365;
    tmp_msg_0.alt = 0.7613613886264945;
    msg.state.set(tmp_msg_0);
    msg.type = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.2185899347188821);
    msg.setSource(52232U);
    msg.setSourceEntity(19U);
    msg.setDestination(28272U);
    msg.setDestinationEntity(13U);
    msg.value = 0.181109609266632;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.5091988339173691);
    msg.setSource(32553U);
    msg.setSourceEntity(198U);
    msg.setDestination(38832U);
    msg.setDestinationEntity(51U);
    msg.value = 0.18287434230318222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.7376069832410148);
    msg.setSource(11273U);
    msg.setSourceEntity(45U);
    msg.setDestination(32880U);
    msg.setDestinationEntity(245U);
    msg.value = 0.15017166331833065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.9257275541878004);
    msg.setSource(6902U);
    msg.setSourceEntity(106U);
    msg.setDestination(4087U);
    msg.setDestinationEntity(19U);
    msg.value = 0.8637461260365158;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.3959616246552311);
    msg.setSource(48298U);
    msg.setSourceEntity(25U);
    msg.setDestination(23469U);
    msg.setDestinationEntity(216U);
    msg.value = 0.2919431867032942;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.915462970421609);
    msg.setSource(15946U);
    msg.setSourceEntity(86U);
    msg.setDestination(50207U);
    msg.setDestinationEntity(159U);
    msg.value = 0.7581786176377369;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.9679138492063953);
    msg.setSource(15968U);
    msg.setSourceEntity(165U);
    msg.setDestination(59247U);
    msg.setDestinationEntity(120U);
    msg.value = 0.8684406902620224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.4421373808864736);
    msg.setSource(36169U);
    msg.setSourceEntity(55U);
    msg.setDestination(6190U);
    msg.setDestinationEntity(22U);
    msg.value = 0.5716829829637519;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.36016014045166544);
    msg.setSource(2267U);
    msg.setSourceEntity(71U);
    msg.setDestination(16733U);
    msg.setDestinationEntity(22U);
    msg.value = 0.20589336413209802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.4797773395582956);
    msg.setSource(9803U);
    msg.setSourceEntity(199U);
    msg.setDestination(53535U);
    msg.setDestinationEntity(200U);
    msg.value = 0.8177670676080557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.6924210883721835);
    msg.setSource(48991U);
    msg.setSourceEntity(203U);
    msg.setDestination(64858U);
    msg.setDestinationEntity(216U);
    msg.value = 0.8697887894648373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.154364045324469);
    msg.setSource(34558U);
    msg.setSourceEntity(247U);
    msg.setDestination(58917U);
    msg.setDestinationEntity(116U);
    msg.value = 0.10709108932779976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.27768448876741325);
    msg.setSource(50696U);
    msg.setSourceEntity(235U);
    msg.setDestination(23606U);
    msg.setDestinationEntity(129U);
    msg.value = 0.22147339581793768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.3285935807667606);
    msg.setSource(40532U);
    msg.setSourceEntity(233U);
    msg.setDestination(10507U);
    msg.setDestinationEntity(165U);
    msg.value = 0.7736971787772278;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.5526980330034507);
    msg.setSource(26308U);
    msg.setSourceEntity(85U);
    msg.setDestination(24406U);
    msg.setDestinationEntity(139U);
    msg.value = 0.3252217993339567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.31826408346924906);
    msg.setSource(47954U);
    msg.setSourceEntity(206U);
    msg.setDestination(36159U);
    msg.setDestinationEntity(247U);
    msg.id = 128U;
    msg.zoom = 43U;
    msg.action = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.6713831678276553);
    msg.setSource(21460U);
    msg.setSourceEntity(244U);
    msg.setDestination(22816U);
    msg.setDestinationEntity(248U);
    msg.id = 90U;
    msg.zoom = 232U;
    msg.action = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.7913142779811647);
    msg.setSource(43195U);
    msg.setSourceEntity(62U);
    msg.setDestination(39064U);
    msg.setDestinationEntity(253U);
    msg.id = 130U;
    msg.zoom = 120U;
    msg.action = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.042312673941962364);
    msg.setSource(51064U);
    msg.setSourceEntity(188U);
    msg.setDestination(29074U);
    msg.setDestinationEntity(118U);
    msg.id = 183U;
    msg.value = 0.6616761847327779;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.013748295609965155);
    msg.setSource(60639U);
    msg.setSourceEntity(108U);
    msg.setDestination(20469U);
    msg.setDestinationEntity(212U);
    msg.id = 158U;
    msg.value = 0.7268871059494962;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.9801017072399668);
    msg.setSource(57806U);
    msg.setSourceEntity(57U);
    msg.setDestination(24168U);
    msg.setDestinationEntity(126U);
    msg.id = 220U;
    msg.value = 0.1730067249594448;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.10642609487552246);
    msg.setSource(62834U);
    msg.setSourceEntity(3U);
    msg.setDestination(44782U);
    msg.setDestinationEntity(80U);
    msg.id = 168U;
    msg.value = 0.2881296093831729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.979184981824696);
    msg.setSource(31841U);
    msg.setSourceEntity(96U);
    msg.setDestination(65196U);
    msg.setDestinationEntity(3U);
    msg.id = 103U;
    msg.value = 0.8555179665653752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.03538874846901097);
    msg.setSource(53212U);
    msg.setSourceEntity(92U);
    msg.setDestination(20334U);
    msg.setDestinationEntity(103U);
    msg.id = 85U;
    msg.value = 0.9424025505385252;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.684889449432748);
    msg.setSource(50564U);
    msg.setSourceEntity(131U);
    msg.setDestination(2854U);
    msg.setDestinationEntity(175U);
    msg.id = 197U;
    msg.angle = 0.41546482792490047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.9478310504350519);
    msg.setSource(37302U);
    msg.setSourceEntity(117U);
    msg.setDestination(64084U);
    msg.setDestinationEntity(246U);
    msg.id = 25U;
    msg.angle = 0.5386897281294533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.33851231327378584);
    msg.setSource(50643U);
    msg.setSourceEntity(66U);
    msg.setDestination(39672U);
    msg.setDestinationEntity(12U);
    msg.id = 122U;
    msg.angle = 0.016180974656677005;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.7568533177610233);
    msg.setSource(29152U);
    msg.setSourceEntity(91U);
    msg.setDestination(17793U);
    msg.setDestinationEntity(140U);
    msg.op = 45U;
    msg.actions.assign("UHZDIRPPUQXFJBTQDAODEISGWVLWHUPWTFVGYQJPVGMNXMAESKEOTMYMCNYYWXPHBCTEPDIONLNSCAMUKJIBSKBBGIJSLSDLUCZAIHCQZSFJODBICRUOULXRPQKPDHEQRNNFQTUAFIOKOLLVZJXBCNTBRVVFBAWHZIGMKGCNZXOXMAYWMYTQDAJPFFNJEEVKUKGXRALTOKXMPUZFVXEDWNGERBYDSRSYZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.3243603240304006);
    msg.setSource(38385U);
    msg.setSourceEntity(19U);
    msg.setDestination(25612U);
    msg.setDestinationEntity(57U);
    msg.op = 27U;
    msg.actions.assign("BLIFYYCAFLBJCNGTVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.876753202671252);
    msg.setSource(6296U);
    msg.setSourceEntity(56U);
    msg.setDestination(1800U);
    msg.setDestinationEntity(23U);
    msg.op = 20U;
    msg.actions.assign("PNLIYQVBFUQVIFGSRJORSGDDNKOJRHNLTI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.6431670497325073);
    msg.setSource(59618U);
    msg.setSourceEntity(229U);
    msg.setDestination(12223U);
    msg.setDestinationEntity(194U);
    msg.actions.assign("FIANCNQCZZWDYQZMGRHZTGQQZCCDJJHKYTLYMHEFOPPKKVXSABJRIVYABNOZESWEZVRHCLRMAKLUHMXVDFTCMUZEKTDYZISYXUWRGUJNSJRCMOUIBBMNKDGEVTRBC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.37480941286221736);
    msg.setSource(42707U);
    msg.setSourceEntity(140U);
    msg.setDestination(45421U);
    msg.setDestinationEntity(111U);
    msg.actions.assign("QQNNJCLDCYALXMDAXZUCJSTYDPQUEEUYFBOATJATEECTCHXBAMKCPMWBTLJOQASKQFTORMVDSJVPWZMEPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.7819716420543857);
    msg.setSource(64234U);
    msg.setSourceEntity(230U);
    msg.setDestination(64789U);
    msg.setDestinationEntity(107U);
    msg.actions.assign("YZLJPFITDVXGTQKYJPVXHFGGCIYBCTQJTWXPAORRZGUIMGWLMDJPLBECLZFFQHNBZGSXUDBZRCSSLIWPYHQUUFCVHOMHLRTYVMFKOHRADOZWXKX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.8754460451322221);
    msg.setSource(28531U);
    msg.setSourceEntity(97U);
    msg.setDestination(17244U);
    msg.setDestinationEntity(61U);
    msg.button = 172U;
    msg.value = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.7053323919893044);
    msg.setSource(44702U);
    msg.setSourceEntity(141U);
    msg.setDestination(37277U);
    msg.setDestinationEntity(2U);
    msg.button = 117U;
    msg.value = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.3565391038915553);
    msg.setSource(17291U);
    msg.setSourceEntity(11U);
    msg.setDestination(10292U);
    msg.setDestinationEntity(89U);
    msg.button = 72U;
    msg.value = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.7952362136023835);
    msg.setSource(31379U);
    msg.setSourceEntity(106U);
    msg.setDestination(51726U);
    msg.setDestinationEntity(155U);
    msg.op = 237U;
    msg.text.assign("REFJSZILURMFJOXTCXTFDHYDBCBNXKHTHYEPEAAMLKUBBCGYUIRQLPHGNEJCKIWUNJWYQREHJVTIRAIAAQZTXCZOUXTNFMGLDSBDUKKRXMAMNVSNCZVPOUKQOLGQSGTJPRJZLCUWEPSUJOGZETFFWJSXJWVSKYTMWHVYWONBNMXUZBVHQXGBZAFQRKILDGCECQWPBVEMFRVVRSDMPOFIOMNPIZFAYHADYDZPHKLPKSDDATIHILNYXBQGLOCWSV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.9242924875561563);
    msg.setSource(32285U);
    msg.setSourceEntity(210U);
    msg.setDestination(20885U);
    msg.setDestinationEntity(12U);
    msg.op = 160U;
    msg.text.assign("BTHLOABLGHINWXKQVOHRDCLUGJDNAJKQMSSYDUQCMFXIOKITPACZWCPFLAEDECAMGDQFOMBCSTPPLKMVXPNTDYIGQQZTTSGZRWJOUNIGLAHHBQVSEEVFZNVGFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.30007239517647244);
    msg.setSource(55442U);
    msg.setSourceEntity(204U);
    msg.setDestination(2775U);
    msg.setDestinationEntity(99U);
    msg.op = 95U;
    msg.text.assign("AWORNBBMNZFRLMSIHWFGAASGSSSKQHAYWPXMITXICRDXQVLMORTVUNSHQBCJNUGTZDYRDLUAEFIRDGROYQYUUINQQDTZCQHYDUVKYBEZLOOSPPIJMPFCMCEEMJZUXVAEPFPXOHZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.7390411956698264);
    msg.setSource(57006U);
    msg.setSourceEntity(72U);
    msg.setDestination(56853U);
    msg.setDestinationEntity(252U);
    msg.op = 249U;
    msg.time_remain = 0.7790497387492702;
    msg.sched_time = 0.7888487555212012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.9025750414973678);
    msg.setSource(43344U);
    msg.setSourceEntity(35U);
    msg.setDestination(14753U);
    msg.setDestinationEntity(233U);
    msg.op = 196U;
    msg.time_remain = 0.3765061615473194;
    msg.sched_time = 0.8770740252830667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.8752375759264026);
    msg.setSource(10864U);
    msg.setSourceEntity(153U);
    msg.setDestination(45852U);
    msg.setDestinationEntity(50U);
    msg.op = 157U;
    msg.time_remain = 0.9895036101043524;
    msg.sched_time = 0.516190204845296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.7523846821181944);
    msg.setSource(57618U);
    msg.setSourceEntity(82U);
    msg.setDestination(56910U);
    msg.setDestinationEntity(34U);
    msg.name.assign("YMPARHQLBEKAXYUQMRNBRWGNZBRGNUXDIXOKAAQALQGTOOVGBSEFOINMRSNIOSYNSDCALZKCSHQTMNUDRFEAGLPZVUJVKXMDHXZEHIBOQSGPWFEKMDSAIWKITRYSCMCXWJH");
    msg.op = 163U;
    msg.sched_time = 0.16166049400695703;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.6765821056282565);
    msg.setSource(18057U);
    msg.setSourceEntity(128U);
    msg.setDestination(51804U);
    msg.setDestinationEntity(31U);
    msg.name.assign("LGKRFRXRPXFXBVKVHFJYEEAYXKHSXJACCUXICRYTBMHFKOWUZTLFGRKUBJRJFXNANWIOAYUGAQOMVKQDKTWTHNDXGWGTGZSCYPVZHZXEQZBEEGZBLWIQNISIHDJAKYMRDMFELMASNSQUIDJEVLZPPVPWBYIDCHQWIBVAFSQHWSOUL");
    msg.op = 249U;
    msg.sched_time = 0.9625216862438586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.027900846748637242);
    msg.setSource(9610U);
    msg.setSourceEntity(7U);
    msg.setDestination(50623U);
    msg.setDestinationEntity(14U);
    msg.name.assign("FXJOTAQVZVDUMSBHYSZYQNCIFKSOONRLGVXHSWZJXTGBZKOQLFVPDBXKSWMPBQQOANLHGQGNMEILZSIHRHIYJRFEAHUYBSQEAUNPVWPWSVOEBNSWTBZHTOJRCJZJCYFEKKDEUBLWIRDMWFRIQLJMGALUNPFJXGKXLLZDPNMMCCMWLGDREOFNFUVZTUYDAAHRUXDTRWPMQXKYRPAPXDCTVTKVICBFKOJDWGBXU");
    msg.op = 206U;
    msg.sched_time = 0.1736326018058858;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.6646317206522262);
    msg.setSource(33388U);
    msg.setSourceEntity(143U);
    msg.setDestination(23055U);
    msg.setDestinationEntity(179U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.24180541909153797);
    msg.setSource(35760U);
    msg.setSourceEntity(40U);
    msg.setDestination(30721U);
    msg.setDestinationEntity(125U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.29600914827209956);
    msg.setSource(14021U);
    msg.setSourceEntity(206U);
    msg.setDestination(33716U);
    msg.setDestinationEntity(92U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.8170515674294735);
    msg.setSource(58288U);
    msg.setSourceEntity(109U);
    msg.setDestination(27768U);
    msg.setDestinationEntity(110U);
    msg.name.assign("ZSOQGZGKLELSOFQPJDJKCGHFWXMTAWXXSFWVKLLCLLWGJ");
    msg.state = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.6163634993853576);
    msg.setSource(55069U);
    msg.setSourceEntity(192U);
    msg.setDestination(1684U);
    msg.setDestinationEntity(13U);
    msg.name.assign("QPHFJLXCYOQMECCNZDSEKWACWCPDNEISVKLPTGRYIJXDMMJZAHMZVDHXWNB");
    msg.state = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.20891960367912588);
    msg.setSource(3998U);
    msg.setSourceEntity(152U);
    msg.setDestination(62986U);
    msg.setDestinationEntity(250U);
    msg.name.assign("JSTVSWEXWKNBWIXGMTUKVPSXMMVEEWIKPADQ");
    msg.state = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.20300867940639966);
    msg.setSource(46657U);
    msg.setSourceEntity(200U);
    msg.setDestination(25275U);
    msg.setDestinationEntity(102U);
    msg.name.assign("XVXKPXLSNOTMOGBPYXDPYCWWJUKGATOQCOYTZLCLKSQRPHCJOJPAOQKRDMPVRDTOEGBTZHDRPXGLZXNBMSW");
    msg.value = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.4451047681850562);
    msg.setSource(1854U);
    msg.setSourceEntity(172U);
    msg.setDestination(45217U);
    msg.setDestinationEntity(181U);
    msg.name.assign("LUOGJPUMWRNEIZBTDXAAWBSYEQAHCVZDPVLIKVHVGKSRZYEOKPMZEWQCDMJNBUYFTVKNHCTCYGZGBQI");
    msg.value = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.061770738235467415);
    msg.setSource(51078U);
    msg.setSourceEntity(120U);
    msg.setDestination(60233U);
    msg.setDestinationEntity(235U);
    msg.name.assign("SMUNZCKKIHYTZNNESZKRYNKIADCJRIJBLMYMMJSTXXZVOPAKNXYUWDHQPGHDSUKARWFXBSQTDJBLDCSPAVQLHYNJPMMDVACAZDJOZFQFAMJELMSYFREHROPTIBHMWUJLXAYKTXGVLXEBLZDHDIBBCQQHITVNNFROVGRGWPTUSIEPZLFECUWYZSRV");
    msg.value = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.830176427116879);
    msg.setSource(19937U);
    msg.setSourceEntity(216U);
    msg.setDestination(23605U);
    msg.setDestinationEntity(229U);
    msg.name.assign("HPMWRNUUCDKZAATOWVJYDYETCAXCOQJHVUMIKWLXMAEAXGSRPRSJLODXQRPFMRMZQHTUBOCQJXTUSYPRZMGDHVNLZVEIBBXRLQXJIYTWVXKEBILBDIDFCBVOOWZGFCDCEMPNKNBFEGGSRXEMCSSVHHYYDFFETJUUTYGFBINSMRKPKEKVWOFNKCLIQHGQOWAUSIVZLYSHZHCHPLDOPAIWZLWJJATNKQGLXNGBUDJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.49121538322443603);
    msg.setSource(44965U);
    msg.setSourceEntity(226U);
    msg.setDestination(60346U);
    msg.setDestinationEntity(213U);
    msg.name.assign("PHOKKCALWHMEQJCBEKWHILEEZZIXPYRJOGRZEJSKMAVDQSAPAZVXYNXBWBJYRXUTGZTTHGZGPMQMANNCXGWDKUTPFYWHMSQYONTOJXBCSUEDIVBCLFYCAFRD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.625721688408457);
    msg.setSource(55728U);
    msg.setSourceEntity(181U);
    msg.setDestination(8412U);
    msg.setDestinationEntity(61U);
    msg.name.assign("MSFKHMSHEYVODABVLIZJMALSWQZGZZCHOZVWRTHTSRMSVLRANVRGBWNDWZVDRZBSHDNKFDOIPAJFEEQNOYKTHWENXUVVNFUQTAQLPPAHDEXGEBTGMDNCVBFUCIJGXABEVPIJJDYGYMDYQTSCCLG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.9608999413533724);
    msg.setSource(38986U);
    msg.setSourceEntity(203U);
    msg.setDestination(22490U);
    msg.setDestinationEntity(211U);
    msg.name.assign("RURHKJVOFEJGRGEZCRJPWCWXZRDLCWTGZUCNWBPDNVQQNDJCCJNWGETBAAOYSESJHY");
    msg.value = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.9305932485458289);
    msg.setSource(10383U);
    msg.setSourceEntity(41U);
    msg.setDestination(55332U);
    msg.setDestinationEntity(178U);
    msg.name.assign("ZDEWZJMHLYVBZRRKLOBPOGHRCL");
    msg.value = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.6084052748278049);
    msg.setSource(11029U);
    msg.setSourceEntity(247U);
    msg.setDestination(11826U);
    msg.setDestinationEntity(139U);
    msg.name.assign("FDJLMAMVHZQNLOJSSIEDLAEXZKAHKDWKTPAIIYUUEXEGCOYTIFMYFMNYVQBTIVYSLHLTTNGLCZXEBQKLOWXEIPVWUYXBZTWJFDIICHWRDMCCPAVUWRVNCCDJKAKOIYAXYZBRSFFHJKLOGQGHKNPBSPJQHNOMPGCVMBYWXCNEFJUOZUJOTZRQAWEGOTZPPHNAMEQXFZQBPAGUEUFCUGSNYBTVBPSDZ");
    msg.value = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.7836378439935185);
    msg.setSource(19262U);
    msg.setSourceEntity(20U);
    msg.setDestination(3576U);
    msg.setDestinationEntity(173U);
    msg.id = 75U;
    msg.period = 266378480U;
    msg.duty_cycle = 202928926U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.12821176640518395);
    msg.setSource(50095U);
    msg.setSourceEntity(158U);
    msg.setDestination(30306U);
    msg.setDestinationEntity(242U);
    msg.id = 173U;
    msg.period = 3096766415U;
    msg.duty_cycle = 2927712419U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.4212850535348226);
    msg.setSource(45656U);
    msg.setSourceEntity(3U);
    msg.setDestination(16340U);
    msg.setDestinationEntity(201U);
    msg.id = 52U;
    msg.period = 3787778484U;
    msg.duty_cycle = 728885252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.3628849688165948);
    msg.setSource(33890U);
    msg.setSourceEntity(128U);
    msg.setDestination(18783U);
    msg.setDestinationEntity(55U);
    msg.id = 134U;
    msg.period = 2349041295U;
    msg.duty_cycle = 1136918870U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.010714902985870967);
    msg.setSource(58724U);
    msg.setSourceEntity(90U);
    msg.setDestination(29349U);
    msg.setDestinationEntity(41U);
    msg.id = 166U;
    msg.period = 1783186769U;
    msg.duty_cycle = 1746549883U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.8441582956357513);
    msg.setSource(29423U);
    msg.setSourceEntity(223U);
    msg.setDestination(59008U);
    msg.setDestinationEntity(198U);
    msg.id = 124U;
    msg.period = 3950385208U;
    msg.duty_cycle = 2145043700U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.3165015031181062);
    msg.setSource(58626U);
    msg.setSourceEntity(56U);
    msg.setDestination(11360U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.5279791787724529;
    msg.lon = 0.13395449043494068;
    msg.height = 0.8222763769041739;
    msg.x = 0.18339003341710902;
    msg.y = 0.4479124864207764;
    msg.z = 0.5491985807028711;
    msg.phi = 0.7531252025714261;
    msg.theta = 0.19072054258114646;
    msg.psi = 0.3117241624856899;
    msg.u = 0.9780479450980623;
    msg.v = 0.7738495371064852;
    msg.w = 0.028660695046026752;
    msg.vx = 0.8327669811803172;
    msg.vy = 0.5556649039221843;
    msg.vz = 0.5184052920051265;
    msg.p = 0.4516775573003209;
    msg.q = 0.9330859421151086;
    msg.r = 0.7478403291271413;
    msg.depth = 0.13842415229686889;
    msg.alt = 0.16907190114388215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.47456624390158275);
    msg.setSource(26334U);
    msg.setSourceEntity(229U);
    msg.setDestination(16238U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.6946195851810074;
    msg.lon = 0.4956610908513741;
    msg.height = 0.4210467420627354;
    msg.x = 0.8274507148346123;
    msg.y = 0.12027404529079477;
    msg.z = 0.33576566680474107;
    msg.phi = 0.7428891450156729;
    msg.theta = 0.3923779153919096;
    msg.psi = 0.31421943048957623;
    msg.u = 0.9053491251343292;
    msg.v = 0.3289936577869459;
    msg.w = 0.6679854317352998;
    msg.vx = 0.9265547662674373;
    msg.vy = 0.29112452838402025;
    msg.vz = 0.8397700314352561;
    msg.p = 0.3331581088955018;
    msg.q = 0.47699646047154265;
    msg.r = 0.19025673489359585;
    msg.depth = 0.8717772575443558;
    msg.alt = 0.7136130854848889;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.015523368496601853);
    msg.setSource(14445U);
    msg.setSourceEntity(110U);
    msg.setDestination(15107U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.2560543160815314;
    msg.lon = 0.10846964621639266;
    msg.height = 0.8787539566898089;
    msg.x = 0.2833709351236894;
    msg.y = 0.6041232524252355;
    msg.z = 0.7478010112059991;
    msg.phi = 0.9658705610863568;
    msg.theta = 0.5698549139790418;
    msg.psi = 0.762243929652157;
    msg.u = 0.8458286448062176;
    msg.v = 0.533834533349203;
    msg.w = 0.7832329562918984;
    msg.vx = 0.3263116139624338;
    msg.vy = 0.7357440327780269;
    msg.vz = 0.4183667641984211;
    msg.p = 0.9368707715987117;
    msg.q = 0.1945385876360991;
    msg.r = 0.7435055489073504;
    msg.depth = 0.9073717654162348;
    msg.alt = 0.8592323698627036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.23431298916818533);
    msg.setSource(18921U);
    msg.setSourceEntity(172U);
    msg.setDestination(43144U);
    msg.setDestinationEntity(19U);
    msg.x = 0.9922381197140557;
    msg.y = 0.8109141790419562;
    msg.z = 0.6559541827914332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.24842004675941265);
    msg.setSource(26929U);
    msg.setSourceEntity(142U);
    msg.setDestination(61656U);
    msg.setDestinationEntity(192U);
    msg.x = 0.4721378465209458;
    msg.y = 0.03654866921340194;
    msg.z = 0.37814728571628753;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.21058367301094483);
    msg.setSource(15056U);
    msg.setSourceEntity(217U);
    msg.setDestination(33483U);
    msg.setDestinationEntity(73U);
    msg.x = 0.8340454720996205;
    msg.y = 0.2901922586152097;
    msg.z = 0.7229117712178432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.003037913485953281);
    msg.setSource(41986U);
    msg.setSourceEntity(58U);
    msg.setDestination(25703U);
    msg.setDestinationEntity(65U);
    msg.value = 0.8588412512364564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.4403861190821372);
    msg.setSource(9339U);
    msg.setSourceEntity(43U);
    msg.setDestination(47648U);
    msg.setDestinationEntity(238U);
    msg.value = 0.14615656365562812;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.46079970950127946);
    msg.setSource(32502U);
    msg.setSourceEntity(254U);
    msg.setDestination(62163U);
    msg.setDestinationEntity(3U);
    msg.value = 0.8551974366600548;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.8098741455941326);
    msg.setSource(57970U);
    msg.setSourceEntity(221U);
    msg.setDestination(47858U);
    msg.setDestinationEntity(185U);
    msg.value = 0.7716139521233374;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.5612533936012247);
    msg.setSource(39599U);
    msg.setSourceEntity(10U);
    msg.setDestination(32136U);
    msg.setDestinationEntity(167U);
    msg.value = 0.6416338096571318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.0014613235205529485);
    msg.setSource(7397U);
    msg.setSourceEntity(251U);
    msg.setDestination(60228U);
    msg.setDestinationEntity(22U);
    msg.value = 0.335013327304431;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.04841169230537523);
    msg.setSource(26852U);
    msg.setSourceEntity(40U);
    msg.setDestination(26956U);
    msg.setDestinationEntity(181U);
    msg.x = 0.8342136349253615;
    msg.y = 0.6807100959266382;
    msg.z = 0.6608341576194927;
    msg.phi = 0.6029558857928855;
    msg.theta = 0.16509493299042854;
    msg.psi = 0.8221551651831537;
    msg.p = 0.3799767386632745;
    msg.q = 0.4446926404898047;
    msg.r = 0.6083029801339165;
    msg.u = 0.7646850704131994;
    msg.v = 0.4764365234067838;
    msg.w = 0.16277499341007762;
    msg.bias_psi = 0.7362058337255705;
    msg.bias_r = 0.6059526393784752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.7254162656160574);
    msg.setSource(3773U);
    msg.setSourceEntity(41U);
    msg.setDestination(31978U);
    msg.setDestinationEntity(161U);
    msg.x = 0.8607124552151466;
    msg.y = 0.21031473700663672;
    msg.z = 0.10671885528460412;
    msg.phi = 0.3495817878117602;
    msg.theta = 0.9659393914586959;
    msg.psi = 0.07944352110569797;
    msg.p = 0.5027702281811978;
    msg.q = 0.8896932933823458;
    msg.r = 0.353038285972161;
    msg.u = 0.1712246065161972;
    msg.v = 0.8730988629590012;
    msg.w = 0.7000110662215558;
    msg.bias_psi = 0.06224085173329674;
    msg.bias_r = 0.45193479632630207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.34278767495648776);
    msg.setSource(9645U);
    msg.setSourceEntity(116U);
    msg.setDestination(19269U);
    msg.setDestinationEntity(245U);
    msg.x = 0.5917307332959856;
    msg.y = 0.5229019271269106;
    msg.z = 0.03702308767893625;
    msg.phi = 0.8804454432260558;
    msg.theta = 0.31730767000473237;
    msg.psi = 0.8396167286243946;
    msg.p = 0.11552264353532637;
    msg.q = 0.17408614337365536;
    msg.r = 0.5034868224884986;
    msg.u = 0.7784177322421197;
    msg.v = 0.9791330631225459;
    msg.w = 0.9567217283227877;
    msg.bias_psi = 0.11886630211961735;
    msg.bias_r = 0.3425344418980857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.05028786272792474);
    msg.setSource(11797U);
    msg.setSourceEntity(222U);
    msg.setDestination(33068U);
    msg.setDestinationEntity(214U);
    msg.bias_psi = 0.76683187444855;
    msg.bias_r = 0.032205064187424526;
    msg.cog = 0.8509161498368278;
    msg.cyaw = 0.35817104520603993;
    msg.lbl_rej_level = 0.11592003438948861;
    msg.gps_rej_level = 0.21803906220634894;
    msg.custom_x = 0.9365613051007634;
    msg.custom_y = 0.3448609622418579;
    msg.custom_z = 0.7162188714279667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.706661899866517);
    msg.setSource(12325U);
    msg.setSourceEntity(115U);
    msg.setDestination(9661U);
    msg.setDestinationEntity(243U);
    msg.bias_psi = 0.12791234970667165;
    msg.bias_r = 0.7077741527164999;
    msg.cog = 0.9185834943366677;
    msg.cyaw = 0.2246468884544982;
    msg.lbl_rej_level = 0.2814366668895767;
    msg.gps_rej_level = 0.6066706236793986;
    msg.custom_x = 0.8166761223030998;
    msg.custom_y = 0.031494319997490194;
    msg.custom_z = 0.9470696419578888;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.44594457855497593);
    msg.setSource(64771U);
    msg.setSourceEntity(244U);
    msg.setDestination(53601U);
    msg.setDestinationEntity(45U);
    msg.bias_psi = 0.776270729911907;
    msg.bias_r = 0.10699446847247485;
    msg.cog = 0.6382042063202503;
    msg.cyaw = 0.739908472481884;
    msg.lbl_rej_level = 0.8081712620844608;
    msg.gps_rej_level = 0.18606493953555558;
    msg.custom_x = 0.10574342144421911;
    msg.custom_y = 0.7109436587097093;
    msg.custom_z = 0.31029764350885347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.4268309028932581);
    msg.setSource(60403U);
    msg.setSourceEntity(138U);
    msg.setDestination(63400U);
    msg.setDestinationEntity(39U);
    msg.utc_time = 0.655902540068248;
    msg.reason = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.6601783570595712);
    msg.setSource(18714U);
    msg.setSourceEntity(220U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(67U);
    msg.utc_time = 0.7575392779508533;
    msg.reason = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.38863840981297326);
    msg.setSource(13168U);
    msg.setSourceEntity(208U);
    msg.setDestination(53329U);
    msg.setDestinationEntity(200U);
    msg.utc_time = 0.6495366001518776;
    msg.reason = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.2954534066844522);
    msg.setSource(17644U);
    msg.setSourceEntity(197U);
    msg.setDestination(19255U);
    msg.setDestinationEntity(19U);
    msg.id = 214U;
    msg.range = 0.485273260027142;
    msg.acceptance = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.6871195543676902);
    msg.setSource(53683U);
    msg.setSourceEntity(20U);
    msg.setDestination(19992U);
    msg.setDestinationEntity(69U);
    msg.id = 97U;
    msg.range = 0.41663279157945476;
    msg.acceptance = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.788391932370608);
    msg.setSource(37772U);
    msg.setSourceEntity(142U);
    msg.setDestination(33440U);
    msg.setDestinationEntity(159U);
    msg.id = 81U;
    msg.range = 0.9992134466112835;
    msg.acceptance = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.481888770237467);
    msg.setSource(14983U);
    msg.setSourceEntity(115U);
    msg.setDestination(9765U);
    msg.setDestinationEntity(138U);
    msg.type = 155U;
    msg.reason = 195U;
    msg.value = 0.6473985641845965;
    msg.timestep = 0.15912808845871473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.3943648333494061);
    msg.setSource(19199U);
    msg.setSourceEntity(57U);
    msg.setDestination(56131U);
    msg.setDestinationEntity(232U);
    msg.type = 216U;
    msg.reason = 202U;
    msg.value = 0.16523279676220826;
    msg.timestep = 0.7679312105083628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.5114331149071419);
    msg.setSource(50125U);
    msg.setSourceEntity(212U);
    msg.setDestination(29544U);
    msg.setDestinationEntity(123U);
    msg.type = 122U;
    msg.reason = 170U;
    msg.value = 0.5994680273234199;
    msg.timestep = 0.8710127140446513;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.9736414100532219);
    msg.setSource(35343U);
    msg.setSourceEntity(11U);
    msg.setDestination(53745U);
    msg.setDestinationEntity(92U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JHMUPDZKLXYQMOWCLPZMJELQCHTTHTFRVFCREBCJVSXULBSVZCRBWAZYYADWUGEDBOLMNSYDCWAIDGZWJXURVLIFVEYLAQNKOMEINCAHHRFZPQRFUKSTCNTVCZGNUGZPMPTGARVV");
    tmp_msg_0.lat = 0.9111702817941768;
    tmp_msg_0.lon = 0.6494019366049147;
    tmp_msg_0.depth = 0.41560647245988713;
    tmp_msg_0.query_channel = 136U;
    tmp_msg_0.reply_channel = 14U;
    tmp_msg_0.transponder_delay = 156U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8818838184218287;
    msg.y = 0.20951166246345765;
    msg.var_x = 0.21425527919143061;
    msg.var_y = 0.19118932025989954;
    msg.distance = 0.7558606196412759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.8893307164400094);
    msg.setSource(52686U);
    msg.setSourceEntity(121U);
    msg.setDestination(42276U);
    msg.setDestinationEntity(14U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZVNSYFLWCILJKPYECOIPMNGMPFYWACUBLVXMCNKIBHATVTPKEKJJLMSDFCBPXZRLEXOWPGUPPEZUHDJIXHQUXPBQMJTZHKURYPXEDQFWRKSRROHHOKQRWAIWLUXTFDINKTN");
    tmp_msg_0.lat = 0.9876781634861669;
    tmp_msg_0.lon = 0.3061211236749086;
    tmp_msg_0.depth = 0.8571359987953958;
    tmp_msg_0.query_channel = 243U;
    tmp_msg_0.reply_channel = 9U;
    tmp_msg_0.transponder_delay = 221U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8958082290497635;
    msg.y = 0.4918121992850423;
    msg.var_x = 0.3449878101683027;
    msg.var_y = 0.027898763807225335;
    msg.distance = 0.6406775271287688;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.14442731043813783);
    msg.setSource(52630U);
    msg.setSourceEntity(25U);
    msg.setDestination(41312U);
    msg.setDestinationEntity(19U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OALRAGKWTWTJJVFYDUVIRXPNOQAIOGPZTKKHLXCPNCPLNBULUDRDSSSAYXUZKLXBWDKLWDQIZOCAREKGEXLMQRHYQFMSFYXIHQVOQPFBIGASZMRXPMECTNGNUWTYRBUFKWPDEIACHJOYLGPWKBTHUDRTYIWUEZYAQTSFKBVMPGASNDBIMHQOX");
    tmp_msg_0.lat = 0.7310702455676666;
    tmp_msg_0.lon = 0.3601457634017746;
    tmp_msg_0.depth = 0.9359421244076643;
    tmp_msg_0.query_channel = 14U;
    tmp_msg_0.reply_channel = 149U;
    tmp_msg_0.transponder_delay = 92U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.21577736070744635;
    msg.y = 0.8363509779608965;
    msg.var_x = 0.016005809325726705;
    msg.var_y = 0.06807157507931272;
    msg.distance = 0.8277021317984736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.8367355791235298);
    msg.setSource(9841U);
    msg.setSourceEntity(18U);
    msg.setDestination(44416U);
    msg.setDestinationEntity(194U);
    msg.state = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.4762992203058798);
    msg.setSource(33531U);
    msg.setSourceEntity(238U);
    msg.setDestination(62672U);
    msg.setDestinationEntity(205U);
    msg.state = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.3355519078201351);
    msg.setSource(4978U);
    msg.setSourceEntity(82U);
    msg.setDestination(16891U);
    msg.setDestinationEntity(59U);
    msg.state = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.5209697471445265);
    msg.setSource(28740U);
    msg.setSourceEntity(175U);
    msg.setDestination(7581U);
    msg.setDestinationEntity(36U);
    msg.x = 0.30908728561915133;
    msg.y = 0.35782528786537715;
    msg.z = 0.9415834784186651;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.0673329109998122);
    msg.setSource(33009U);
    msg.setSourceEntity(102U);
    msg.setDestination(61768U);
    msg.setDestinationEntity(191U);
    msg.x = 0.825596415313542;
    msg.y = 0.9176765947249944;
    msg.z = 0.5662669661393985;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.47730211948001344);
    msg.setSource(12109U);
    msg.setSourceEntity(83U);
    msg.setDestination(18795U);
    msg.setDestinationEntity(78U);
    msg.x = 0.67345022704011;
    msg.y = 0.09252755076009567;
    msg.z = 0.9551108242014367;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.2611725758043254);
    msg.setSource(5463U);
    msg.setSourceEntity(141U);
    msg.setDestination(62132U);
    msg.setDestinationEntity(6U);
    msg.va = 0.922947511724111;
    msg.aoa = 0.5941354901915782;
    msg.ssa = 0.27191935428441316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.05386903687581257);
    msg.setSource(61893U);
    msg.setSourceEntity(3U);
    msg.setDestination(28260U);
    msg.setDestinationEntity(250U);
    msg.va = 0.8822989146979344;
    msg.aoa = 0.5868978071195077;
    msg.ssa = 0.25085534343275095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.14173269319221993);
    msg.setSource(55075U);
    msg.setSourceEntity(155U);
    msg.setDestination(60326U);
    msg.setDestinationEntity(250U);
    msg.va = 0.7832440880659928;
    msg.aoa = 0.46944880663103317;
    msg.ssa = 0.996300701656764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.6115891808427826);
    msg.setSource(37049U);
    msg.setSourceEntity(112U);
    msg.setDestination(21173U);
    msg.setDestinationEntity(25U);
    msg.value = 0.7075119477555545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.889544141203181);
    msg.setSource(6017U);
    msg.setSourceEntity(69U);
    msg.setDestination(48288U);
    msg.setDestinationEntity(85U);
    msg.value = 0.8305445278865405;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.3871777742953142);
    msg.setSource(6206U);
    msg.setSourceEntity(168U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(238U);
    msg.value = 0.3046445811356189;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.10726942242105708);
    msg.setSource(50506U);
    msg.setSourceEntity(224U);
    msg.setDestination(1348U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7957454656279785;
    msg.z_units = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.6520154774892761);
    msg.setSource(56296U);
    msg.setSourceEntity(125U);
    msg.setDestination(42804U);
    msg.setDestinationEntity(51U);
    msg.value = 0.3642284414610679;
    msg.z_units = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.7371838762890396);
    msg.setSource(33393U);
    msg.setSourceEntity(82U);
    msg.setDestination(41251U);
    msg.setDestinationEntity(63U);
    msg.value = 0.799334295424057;
    msg.z_units = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.8289533961721165);
    msg.setSource(2025U);
    msg.setSourceEntity(160U);
    msg.setDestination(25049U);
    msg.setDestinationEntity(130U);
    msg.value = 0.9915959056642555;
    msg.speed_units = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.8052957678915122);
    msg.setSource(36385U);
    msg.setSourceEntity(3U);
    msg.setDestination(46410U);
    msg.setDestinationEntity(14U);
    msg.value = 0.615349964586363;
    msg.speed_units = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.9484538759708933);
    msg.setSource(53816U);
    msg.setSourceEntity(146U);
    msg.setDestination(50624U);
    msg.setDestinationEntity(108U);
    msg.value = 0.9063558420772918;
    msg.speed_units = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.91595423262408);
    msg.setSource(46173U);
    msg.setSourceEntity(138U);
    msg.setDestination(18661U);
    msg.setDestinationEntity(48U);
    msg.value = 0.901613231222153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.12916772041527924);
    msg.setSource(1995U);
    msg.setSourceEntity(225U);
    msg.setDestination(45513U);
    msg.setDestinationEntity(159U);
    msg.value = 0.801367215801626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.08435164445306598);
    msg.setSource(3065U);
    msg.setSourceEntity(252U);
    msg.setDestination(22302U);
    msg.setDestinationEntity(136U);
    msg.value = 0.9401668673310064;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.21118717124783404);
    msg.setSource(2400U);
    msg.setSourceEntity(48U);
    msg.setDestination(65014U);
    msg.setDestinationEntity(69U);
    msg.value = 0.5791288038988209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.1348457602145462);
    msg.setSource(33186U);
    msg.setSourceEntity(158U);
    msg.setDestination(2487U);
    msg.setDestinationEntity(137U);
    msg.value = 0.03350226575948412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.34365762402660505);
    msg.setSource(38864U);
    msg.setSourceEntity(217U);
    msg.setDestination(22446U);
    msg.setDestinationEntity(115U);
    msg.value = 0.9793341926018315;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.21059520282867739);
    msg.setSource(65474U);
    msg.setSourceEntity(225U);
    msg.setDestination(50765U);
    msg.setDestinationEntity(221U);
    msg.value = 0.21975252616991847;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.734584678266387);
    msg.setSource(321U);
    msg.setSourceEntity(7U);
    msg.setDestination(9996U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6737722359471149;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.25022217628753973);
    msg.setSource(42631U);
    msg.setSourceEntity(130U);
    msg.setDestination(50000U);
    msg.setDestinationEntity(108U);
    msg.value = 0.9842418341146653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.7132516087631915);
    msg.setSource(25357U);
    msg.setSourceEntity(129U);
    msg.setDestination(33551U);
    msg.setDestinationEntity(120U);
    msg.path_ref = 3680156554U;
    msg.start_lat = 0.4956155402731106;
    msg.start_lon = 0.40610265181376737;
    msg.start_z = 0.9514693379953304;
    msg.start_z_units = 98U;
    msg.end_lat = 0.02440611036303275;
    msg.end_lon = 0.8478969450466729;
    msg.end_z = 0.011172232322970377;
    msg.end_z_units = 151U;
    msg.speed = 0.1850555957795983;
    msg.speed_units = 91U;
    msg.lradius = 0.6938842987289585;
    msg.flags = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.6388043705507068);
    msg.setSource(24506U);
    msg.setSourceEntity(8U);
    msg.setDestination(26473U);
    msg.setDestinationEntity(156U);
    msg.path_ref = 3977300826U;
    msg.start_lat = 0.7871179403205057;
    msg.start_lon = 0.8090981109855696;
    msg.start_z = 0.29531199296419164;
    msg.start_z_units = 201U;
    msg.end_lat = 0.31407750884205543;
    msg.end_lon = 0.7478370387088488;
    msg.end_z = 0.9203465128776531;
    msg.end_z_units = 254U;
    msg.speed = 0.3791230056708357;
    msg.speed_units = 137U;
    msg.lradius = 0.9544218442837945;
    msg.flags = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.08429195846236015);
    msg.setSource(59418U);
    msg.setSourceEntity(36U);
    msg.setDestination(46450U);
    msg.setDestinationEntity(81U);
    msg.path_ref = 4237504403U;
    msg.start_lat = 0.2165727407152198;
    msg.start_lon = 0.4369845447917201;
    msg.start_z = 0.11414120713883924;
    msg.start_z_units = 48U;
    msg.end_lat = 0.35833724166214476;
    msg.end_lon = 0.09045338742392461;
    msg.end_z = 0.7440979320654639;
    msg.end_z_units = 66U;
    msg.speed = 0.9143898979777565;
    msg.speed_units = 81U;
    msg.lradius = 0.03584185444819954;
    msg.flags = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.970471035235261);
    msg.setSource(50569U);
    msg.setSourceEntity(50U);
    msg.setDestination(42596U);
    msg.setDestinationEntity(248U);
    msg.x = 0.049757896507223176;
    msg.y = 0.30106453859591087;
    msg.z = 0.9791131320902079;
    msg.k = 0.9452034231913786;
    msg.m = 0.909090799615075;
    msg.n = 0.6810813063718933;
    msg.flags = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.46132709125772886);
    msg.setSource(36430U);
    msg.setSourceEntity(14U);
    msg.setDestination(49583U);
    msg.setDestinationEntity(223U);
    msg.x = 0.37360627386180667;
    msg.y = 0.008283820092998662;
    msg.z = 0.9217836052306915;
    msg.k = 0.16403051698361626;
    msg.m = 0.41033912019074303;
    msg.n = 0.6582696495351601;
    msg.flags = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.553473718634046);
    msg.setSource(21956U);
    msg.setSourceEntity(66U);
    msg.setDestination(42654U);
    msg.setDestinationEntity(190U);
    msg.x = 0.33746709731658586;
    msg.y = 0.38195884936663005;
    msg.z = 0.7011522861611379;
    msg.k = 0.4811502441299691;
    msg.m = 0.4355252539147799;
    msg.n = 0.25383391617769935;
    msg.flags = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.16660128266514806);
    msg.setSource(42094U);
    msg.setSourceEntity(212U);
    msg.setDestination(36631U);
    msg.setDestinationEntity(227U);
    msg.value = 0.8734410117837998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.02930041327307442);
    msg.setSource(10315U);
    msg.setSourceEntity(208U);
    msg.setDestination(19057U);
    msg.setDestinationEntity(100U);
    msg.value = 0.40536379927594535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.7443900732306177);
    msg.setSource(18255U);
    msg.setSourceEntity(30U);
    msg.setDestination(52453U);
    msg.setDestinationEntity(219U);
    msg.value = 0.060881196608254196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.4538970723824095);
    msg.setSource(41854U);
    msg.setSourceEntity(125U);
    msg.setDestination(6756U);
    msg.setDestinationEntity(55U);
    msg.u = 0.8877311268487256;
    msg.v = 0.5928665513345819;
    msg.w = 0.6633335445296563;
    msg.p = 0.18317449442933165;
    msg.q = 0.7347435204556013;
    msg.r = 0.518205310296664;
    msg.flags = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.9293012621353016);
    msg.setSource(13663U);
    msg.setSourceEntity(34U);
    msg.setDestination(46737U);
    msg.setDestinationEntity(247U);
    msg.u = 0.19015034103827633;
    msg.v = 0.08234168625727933;
    msg.w = 0.8934413657259889;
    msg.p = 0.9197732956443245;
    msg.q = 0.465141018970903;
    msg.r = 0.15767385883725082;
    msg.flags = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.9473277242828388);
    msg.setSource(14707U);
    msg.setSourceEntity(1U);
    msg.setDestination(64147U);
    msg.setDestinationEntity(11U);
    msg.u = 0.9278594393734738;
    msg.v = 0.6070023665779546;
    msg.w = 0.5226984227468335;
    msg.p = 0.7434546605237797;
    msg.q = 0.3973837459406938;
    msg.r = 0.9164730226851148;
    msg.flags = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.11919434406266682);
    msg.setSource(38577U);
    msg.setSourceEntity(251U);
    msg.setDestination(34082U);
    msg.setDestinationEntity(253U);
    msg.path_ref = 1817982179U;
    msg.start_lat = 0.6606590135618466;
    msg.start_lon = 0.7338082150439778;
    msg.start_z = 0.027013567338200928;
    msg.start_z_units = 223U;
    msg.end_lat = 0.8615807515213864;
    msg.end_lon = 0.09394373680332713;
    msg.end_z = 0.15611953685497126;
    msg.end_z_units = 139U;
    msg.lradius = 0.14733480719371095;
    msg.flags = 219U;
    msg.x = 0.22127177946666488;
    msg.y = 0.2575648892679522;
    msg.z = 0.4818620999566521;
    msg.vx = 0.8046995355679982;
    msg.vy = 0.787231712432316;
    msg.vz = 0.5799336380016746;
    msg.course_error = 0.5735444114432885;
    msg.eta = 30555U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.47765738777456723);
    msg.setSource(28056U);
    msg.setSourceEntity(88U);
    msg.setDestination(11512U);
    msg.setDestinationEntity(94U);
    msg.path_ref = 1516724130U;
    msg.start_lat = 0.5532611688476635;
    msg.start_lon = 0.7173941415239985;
    msg.start_z = 8.435339483225945e-05;
    msg.start_z_units = 87U;
    msg.end_lat = 0.02363945780886567;
    msg.end_lon = 0.9834861343612891;
    msg.end_z = 0.6614367801769775;
    msg.end_z_units = 160U;
    msg.lradius = 0.8930512811942383;
    msg.flags = 1U;
    msg.x = 0.6042514336752025;
    msg.y = 0.9722257261952577;
    msg.z = 0.4233641568701656;
    msg.vx = 0.6693065123348667;
    msg.vy = 0.6244666267916752;
    msg.vz = 0.4428739600659155;
    msg.course_error = 0.033065310345693155;
    msg.eta = 22435U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.34243903358205396);
    msg.setSource(44280U);
    msg.setSourceEntity(220U);
    msg.setDestination(14893U);
    msg.setDestinationEntity(149U);
    msg.path_ref = 3062980498U;
    msg.start_lat = 0.17695603709833418;
    msg.start_lon = 0.32634668430629876;
    msg.start_z = 0.9530355089997996;
    msg.start_z_units = 5U;
    msg.end_lat = 0.3291885785408669;
    msg.end_lon = 0.27295242565223987;
    msg.end_z = 0.27331885091353214;
    msg.end_z_units = 170U;
    msg.lradius = 0.029274433035831438;
    msg.flags = 225U;
    msg.x = 0.2109575041302555;
    msg.y = 0.37928910989860365;
    msg.z = 0.7343339513877869;
    msg.vx = 0.3822478614929672;
    msg.vy = 0.313553998103987;
    msg.vz = 0.013222750639931946;
    msg.course_error = 0.15834984085358994;
    msg.eta = 31415U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.6423577856339725);
    msg.setSource(31091U);
    msg.setSourceEntity(184U);
    msg.setDestination(26124U);
    msg.setDestinationEntity(73U);
    msg.k = 0.9113845836898412;
    msg.m = 0.21928771721984663;
    msg.n = 0.8117019381378056;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.855297989581191);
    msg.setSource(44369U);
    msg.setSourceEntity(236U);
    msg.setDestination(17082U);
    msg.setDestinationEntity(199U);
    msg.k = 0.7068490828932474;
    msg.m = 0.9072113157073474;
    msg.n = 0.03364515417191538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.6289692042485145);
    msg.setSource(20172U);
    msg.setSourceEntity(153U);
    msg.setDestination(53406U);
    msg.setDestinationEntity(41U);
    msg.k = 0.36914371724022843;
    msg.m = 0.9177187258139652;
    msg.n = 0.8836628575659641;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.587743397146486);
    msg.setSource(31921U);
    msg.setSourceEntity(186U);
    msg.setDestination(49416U);
    msg.setDestinationEntity(196U);
    msg.p = 0.7120687000361555;
    msg.i = 0.1656675576593718;
    msg.d = 0.6816334233317695;
    msg.a = 0.8070849729224199;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.6341611499077211);
    msg.setSource(32244U);
    msg.setSourceEntity(140U);
    msg.setDestination(33273U);
    msg.setDestinationEntity(130U);
    msg.p = 0.830558961100036;
    msg.i = 0.5484298667702647;
    msg.d = 0.9170469121541805;
    msg.a = 0.6594858237282549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.21279396708045106);
    msg.setSource(426U);
    msg.setSourceEntity(133U);
    msg.setDestination(27077U);
    msg.setDestinationEntity(127U);
    msg.p = 0.4910058283623745;
    msg.i = 0.05756667334068588;
    msg.d = 0.4917673931166947;
    msg.a = 0.6815970790133212;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.013048947098145858);
    msg.setSource(30353U);
    msg.setSourceEntity(162U);
    msg.setDestination(43763U);
    msg.setDestinationEntity(223U);
    msg.op = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.6006908234952035);
    msg.setSource(55890U);
    msg.setSourceEntity(78U);
    msg.setDestination(19096U);
    msg.setDestinationEntity(5U);
    msg.op = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.029943222795425606);
    msg.setSource(52914U);
    msg.setSourceEntity(93U);
    msg.setDestination(28284U);
    msg.setDestinationEntity(83U);
    msg.op = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.9065557014157718);
    msg.setSource(48317U);
    msg.setSourceEntity(112U);
    msg.setDestination(52948U);
    msg.setDestinationEntity(174U);
    msg.x = 0.5543903582442711;
    msg.y = 0.8020628000729871;
    msg.z = 0.9346616794617449;
    msg.vx = 0.9421870002853446;
    msg.vy = 0.3848317523913477;
    msg.vz = 0.3901446309689075;
    msg.ax = 0.029547254907610232;
    msg.ay = 0.6286570576164724;
    msg.az = 0.5212734321631085;
    msg.flags = 29184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.09258853577184156);
    msg.setSource(33605U);
    msg.setSourceEntity(58U);
    msg.setDestination(29817U);
    msg.setDestinationEntity(16U);
    msg.x = 0.807215143797213;
    msg.y = 0.6738063324901822;
    msg.z = 0.14951145051386905;
    msg.vx = 0.552644216381868;
    msg.vy = 0.5031173682815455;
    msg.vz = 0.7995694739167107;
    msg.ax = 0.6013894435806723;
    msg.ay = 0.4689776514342664;
    msg.az = 0.9246933883933482;
    msg.flags = 63957U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.6617397819141873);
    msg.setSource(18589U);
    msg.setSourceEntity(70U);
    msg.setDestination(9928U);
    msg.setDestinationEntity(155U);
    msg.x = 0.3212583548893877;
    msg.y = 0.33927248022521006;
    msg.z = 0.6693974599597173;
    msg.vx = 0.7934477721540126;
    msg.vy = 0.5655055330674628;
    msg.vz = 0.5529066542918246;
    msg.ax = 0.440174354186723;
    msg.ay = 0.28806018016276724;
    msg.az = 0.7905272283129546;
    msg.flags = 6537U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.36817193570862117);
    msg.setSource(47015U);
    msg.setSourceEntity(238U);
    msg.setDestination(60950U);
    msg.setDestinationEntity(132U);
    msg.value = 0.37329912926891096;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.9002693425457519);
    msg.setSource(40854U);
    msg.setSourceEntity(201U);
    msg.setDestination(52905U);
    msg.setDestinationEntity(27U);
    msg.value = 0.7302940335806342;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.40221554424626205);
    msg.setSource(61575U);
    msg.setSourceEntity(117U);
    msg.setDestination(8079U);
    msg.setDestinationEntity(234U);
    msg.value = 0.5933250282416038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.5385471587103805);
    msg.setSource(55864U);
    msg.setSourceEntity(101U);
    msg.setDestination(49080U);
    msg.setDestinationEntity(155U);
    msg.timeout = 5344U;
    msg.lat = 0.7755480552282821;
    msg.lon = 0.8594321153086084;
    msg.z = 0.0442657912153821;
    msg.z_units = 83U;
    msg.speed = 0.6214860883288627;
    msg.speed_units = 221U;
    msg.roll = 0.43765902367292897;
    msg.pitch = 0.8565110720832638;
    msg.yaw = 0.9233887532028828;
    msg.custom.assign("RUIXNLGUYXCGJQOMWZKYIWSVOAEXHKCSELNRIPNIRCQUQPCEJASWADITXRFULARPDDGWEFGTQPDMOCDIJBJKMLPZBKPVSDXIBFWBLIPAKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.3933143403631818);
    msg.setSource(19652U);
    msg.setSourceEntity(121U);
    msg.setDestination(15349U);
    msg.setDestinationEntity(210U);
    msg.timeout = 18125U;
    msg.lat = 0.3117163211840075;
    msg.lon = 0.7729669141213462;
    msg.z = 0.4416414250728242;
    msg.z_units = 31U;
    msg.speed = 0.6371591236827338;
    msg.speed_units = 110U;
    msg.roll = 0.2796274828777554;
    msg.pitch = 0.7534151657787588;
    msg.yaw = 0.2938184438683126;
    msg.custom.assign("PZBOIWKCJMCLXJUYCGVDRYAGFEZNTIRSIDCOUNPHJJPXFRWYLJALZUMYBBTVZJELSGMDCLOHIWUEIHXPLXHQNOGLWUWBVMABIAYWTWQASEXDS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.5952057918501034);
    msg.setSource(10322U);
    msg.setSourceEntity(253U);
    msg.setDestination(18351U);
    msg.setDestinationEntity(43U);
    msg.timeout = 21178U;
    msg.lat = 0.7860414933291187;
    msg.lon = 0.03046873254907967;
    msg.z = 0.20722146311557332;
    msg.z_units = 36U;
    msg.speed = 0.17484193510517032;
    msg.speed_units = 21U;
    msg.roll = 0.06069578696375899;
    msg.pitch = 0.8898067712533946;
    msg.yaw = 0.38465617885758296;
    msg.custom.assign("XYPNCTUWAKZDOBLNVGUKNAALYBPHODEVAVUEQGAJDRJLP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.5252462272783089);
    msg.setSource(60438U);
    msg.setSourceEntity(209U);
    msg.setDestination(43747U);
    msg.setDestinationEntity(92U);
    msg.timeout = 2609U;
    msg.lat = 0.3758677827008653;
    msg.lon = 0.6944925321160522;
    msg.z = 0.06760501177076439;
    msg.z_units = 93U;
    msg.speed = 0.5992620677068966;
    msg.speed_units = 198U;
    msg.duration = 35435U;
    msg.radius = 0.7307991566679461;
    msg.flags = 183U;
    msg.custom.assign("WXSAWALGFMVEALILWCUGMXLBMZWUEYCPVNTCBZGZWRVYQSSZENGBECUQIHRABPJUBOMSIGQXJYVEFKGANYYDLORTDMCMKTVDBQHFOCHOWZVJXESDXZZLFKTNCHUPTDYYIMTUPXGKOJFPUWNLIXGVJVJXIQFDQRDKXNSFTWGKQEOKRBACSNRCYHBBLRUXOUNSZEWYDPFJZKTAQIQEFNJJIBLJSAYHNHOOMLRWOIKEMFVVKHP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.06001335048344414);
    msg.setSource(8226U);
    msg.setSourceEntity(88U);
    msg.setDestination(3337U);
    msg.setDestinationEntity(85U);
    msg.timeout = 12172U;
    msg.lat = 0.437388689528985;
    msg.lon = 0.37975115989783537;
    msg.z = 0.9585060724555924;
    msg.z_units = 144U;
    msg.speed = 0.9337472971831011;
    msg.speed_units = 75U;
    msg.duration = 29977U;
    msg.radius = 0.4242787175987177;
    msg.flags = 145U;
    msg.custom.assign("KWORMESDNRAHPTUMBBVGUZHIITOPPZIGWBAMVPMESIRNNUDEWXNTEYJPFBKBNADWXZTDSSKMIHCBKXMLMVJGVXOIVWAIROWYLYVGCYAYJTJNMOPXQEQJOAUQGRQYYLSVNZCZPXSRQJQRCGLFJSCLUKLLGFXHZEMXGDFCVRPRQYFCTBPKODMHBTHZQJAPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.6160383926859366);
    msg.setSource(1203U);
    msg.setSourceEntity(119U);
    msg.setDestination(431U);
    msg.setDestinationEntity(231U);
    msg.timeout = 47290U;
    msg.lat = 0.09385444002070553;
    msg.lon = 0.4608524851030319;
    msg.z = 0.4798198523803824;
    msg.z_units = 182U;
    msg.speed = 0.9619495453129143;
    msg.speed_units = 143U;
    msg.duration = 59682U;
    msg.radius = 0.7745808272987085;
    msg.flags = 148U;
    msg.custom.assign("GXSNSQFDSRQDFXKOZIOAKYZQHXYMFYOYIYGHXTVLQIEKLERLTTZLGDWXWVNNHEPQAUUPUBEBTXDRTJMGVWWUSRDKCZUYLSIPFPAQMDTFKBDFSNSBCYAONWTKKRMNCMBNOWAVLDFEGLHCRCOTJLVFDPTFPBQWBQBSQOUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.6747718659127905);
    msg.setSource(53123U);
    msg.setSourceEntity(239U);
    msg.setDestination(9117U);
    msg.setDestinationEntity(57U);
    msg.custom.assign("MJNEHBZXHHALPEZETOVJXKENOIYYEHGMUBWBXCTGMBRWOCNKHAJJVSEASUEJTIOWZCHQPAUCRMAGELIXRVVBKOWNFWIXIFSMZNFJJHDXXCLFALZLFCWRLASNUQXRVMBJZKYGKLNTBNMSYQDMASUFRTUKLTIPSGOMYRHZBDPUIBEJFIDHVDVBPRSYRDRSFQKCTVYHUKVQUUPNGTYPPXWQPYTVQKEOKIDNFDWGIWMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.5674468196490863);
    msg.setSource(40458U);
    msg.setSourceEntity(243U);
    msg.setDestination(4260U);
    msg.setDestinationEntity(46U);
    msg.custom.assign("LOSZGKJUUHXKCZEKPXWNWZIVJPBFNLPHJPVDMKCIOHSFVUVRAPBNUCMJQCBEJKLJBRRNUCQXXMLGENTFVCUKVPRHNRQDFHWZLISSYSZENAICOPIBWGIEGWLUSXUTGPGNNTEMMFUCBTPYABQMYARGSMAYROLPSJFFOVCQZQIWYJWKZRQQYKAHDOXYHQDZOAYBDWTQGMSNRXLGETMYXTLABZRTTJFDVMIADGTLHEEKWEIVDXKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.8190147772640135);
    msg.setSource(33637U);
    msg.setSourceEntity(21U);
    msg.setDestination(57343U);
    msg.setDestinationEntity(14U);
    msg.custom.assign("HESOZSKERLGZADZAZEQXHDCVTBOPJSUMPJKYRHXUZEQBOLBBIOTNNIVDGCSNMXLSYRQEXWNWICZFWCTPLRKMFAMXQTNRVTLUAISCULUDUXQHDLEYFZYMVBTENFZOTPPAIOSQJKWDHGNRJKGXSUQYFVZIVACKBVTQMULFWATFXHKWPSKCHVJYHPMBJKACQYZJRWULJNRIOXPRGNQDHNFMOBWLDUVGKTGEIDGPMFOHJGVB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.7266000117703778);
    msg.setSource(3733U);
    msg.setSourceEntity(27U);
    msg.setDestination(25968U);
    msg.setDestinationEntity(104U);
    msg.timeout = 32728U;
    msg.lat = 0.5385182033837355;
    msg.lon = 0.5088815084636155;
    msg.z = 0.5973096401092546;
    msg.z_units = 164U;
    msg.duration = 42165U;
    msg.speed = 0.5055172916211813;
    msg.speed_units = 211U;
    msg.type = 43U;
    msg.radius = 0.5248246985124946;
    msg.length = 0.13222824224244634;
    msg.bearing = 0.4743894425566143;
    msg.direction = 199U;
    msg.custom.assign("QELTPVSYKQLMSLKBHIPRMVPOIZNXCFOFLNDGGYPLHUIASOTGRJJMQALRIGAXVTQAUQMSRPEMANPHKSWZHOFFKNVUDYDISDUZSXKNEBKYJCIBQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.5874433989681952);
    msg.setSource(13330U);
    msg.setSourceEntity(9U);
    msg.setDestination(13917U);
    msg.setDestinationEntity(215U);
    msg.timeout = 17491U;
    msg.lat = 0.27182637546117294;
    msg.lon = 0.08738911621253032;
    msg.z = 0.8679453101983914;
    msg.z_units = 153U;
    msg.duration = 52954U;
    msg.speed = 0.5923776120535057;
    msg.speed_units = 14U;
    msg.type = 62U;
    msg.radius = 0.9608236046699009;
    msg.length = 0.6212556374280063;
    msg.bearing = 0.9478810387071306;
    msg.direction = 64U;
    msg.custom.assign("WTZXBJIQIRAGHUWLELRFMZIPAXBENBGIMHUNEQCODVSSKHTKTWHJOOSCFKITUDGDBEVGDHHNLVRJGEBANWYQGLRJWIVOXYAJFOQZRLHRRWBMXWSXFEHVPXUEDNKDGSZQKLRAXJERWUZQYUCMACKBIRMGOTMDCTUHYDNQLSUCXJMZYPNMQQSIPYIFZOCTBALXUXJBIYDGPCYZVEKGKLFLPTVTCUABZPNANPSKFAQZJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.32327996010550675);
    msg.setSource(35514U);
    msg.setSourceEntity(65U);
    msg.setDestination(61091U);
    msg.setDestinationEntity(215U);
    msg.timeout = 32580U;
    msg.lat = 0.3675121649643597;
    msg.lon = 0.11035540151923562;
    msg.z = 0.10116910032549553;
    msg.z_units = 206U;
    msg.duration = 49091U;
    msg.speed = 0.3220934563294757;
    msg.speed_units = 216U;
    msg.type = 30U;
    msg.radius = 0.20230510203636087;
    msg.length = 0.886107447184167;
    msg.bearing = 0.4686000907682074;
    msg.direction = 132U;
    msg.custom.assign("GTUZRHQJOMLXYVQSISNUKUAXDSOFAUONWPSNEALDMPAVTJOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.7565602225585495);
    msg.setSource(44265U);
    msg.setSourceEntity(117U);
    msg.setDestination(62296U);
    msg.setDestinationEntity(125U);
    msg.duration = 34046U;
    msg.custom.assign("YOJLVGZGFRZNJANDOMMEVKHBLGRPPMNQZWLRKQAWGWRHIITAJBCN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.3720555398973162);
    msg.setSource(35581U);
    msg.setSourceEntity(21U);
    msg.setDestination(52991U);
    msg.setDestinationEntity(208U);
    msg.duration = 20526U;
    msg.custom.assign("FXTSCULCIAAJGYOOHVWVVKTGEUVYRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.9276522367928668);
    msg.setSource(12735U);
    msg.setSourceEntity(125U);
    msg.setDestination(14095U);
    msg.setDestinationEntity(224U);
    msg.duration = 38701U;
    msg.custom.assign("XJWOKPFRURPEDAIQMECTWTBJNEWGAAJIIPNRBAPAICKMVQOQWRGVSNHJMDNVQYUGQMCTWUMKZKBZUTFGAGXSBNDOYURZEIDSTYAHJMZPVIXOXLJKDRLSONMYHDCCMLEYNNIYBGWOTRZNUGGPVZFUTXKELZVOCDSFLLUCTASKGLNQGJLWYFIZPHEDWPXQJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.6300615498919714);
    msg.setSource(62843U);
    msg.setSourceEntity(214U);
    msg.setDestination(1937U);
    msg.setDestinationEntity(42U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.11750631167877157;
    msg.control.set(tmp_msg_0);
    msg.duration = 43800U;
    msg.custom.assign("FQIQJUHRAETMJPYWVIZAZTPPQRWTTBTLIWRSLXAFERSMYGRDVLJJCVXKCIPFVWUAUFZUBOSMDZZDNJGYIQZRVYFCCTIENJRVSVLGHEFUSEAJWPKFKYQXBQAUJCBAGMLIWQGHHYLNDKYOPGKMCDRWCKDYDGXVXHBDSSOTHNENHPQDUSEIOLXQFYQGMXZEHPJNYZEHVFXPRWTNSIALWORK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.8525423896878592);
    msg.setSource(44723U);
    msg.setSourceEntity(36U);
    msg.setDestination(63030U);
    msg.setDestinationEntity(13U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.11974213326752503;
    tmp_msg_0.z_units = 0U;
    msg.control.set(tmp_msg_0);
    msg.duration = 51285U;
    msg.custom.assign("SROIMULOKQWEUEKGCKFMTDHBJFIZMURMMNBNRCA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.9294557697181439);
    msg.setSource(24813U);
    msg.setSourceEntity(136U);
    msg.setDestination(27226U);
    msg.setDestinationEntity(177U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.3671498874903404;
    tmp_msg_0.z_units = 80U;
    msg.control.set(tmp_msg_0);
    msg.duration = 20959U;
    msg.custom.assign("DFLKGSIJFNOKUHCZIHBRRPSOTWAGXMVNVUAGPGINDBPCJRPDLCQTTRKY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.6489645520676028);
    msg.setSource(29465U);
    msg.setSourceEntity(189U);
    msg.setDestination(41996U);
    msg.setDestinationEntity(188U);
    msg.timeout = 24175U;
    msg.lat = 0.7197764458583185;
    msg.lon = 0.505916845498193;
    msg.z = 0.1103174663230253;
    msg.z_units = 62U;
    msg.speed = 0.9414581601038041;
    msg.speed_units = 47U;
    msg.bearing = 0.032038886938109634;
    msg.cross_angle = 0.2412609534054112;
    msg.width = 0.16627072124850484;
    msg.length = 0.7884097637934049;
    msg.hstep = 0.3764881603756606;
    msg.coff = 232U;
    msg.alternation = 57U;
    msg.flags = 134U;
    msg.custom.assign("QHGJPEDWNXNRPVFQPETSOCCBLUOBGGMULGCFODPLMVGAULVZHKIILXGYAPDDKCVZSRMTIWBINZCVWBWZHKXBZCXWRGNNLUTSNUIOJYCKTEBTAYIKIMXQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.9539474691597475);
    msg.setSource(27461U);
    msg.setSourceEntity(192U);
    msg.setDestination(28243U);
    msg.setDestinationEntity(50U);
    msg.timeout = 58807U;
    msg.lat = 0.3298004361761856;
    msg.lon = 0.9796610906450531;
    msg.z = 0.7431204406473423;
    msg.z_units = 155U;
    msg.speed = 0.8173404217146105;
    msg.speed_units = 129U;
    msg.bearing = 0.5219752915064257;
    msg.cross_angle = 0.8333418278366908;
    msg.width = 0.6957196901588443;
    msg.length = 0.04201605859542601;
    msg.hstep = 0.9651213430563214;
    msg.coff = 76U;
    msg.alternation = 154U;
    msg.flags = 145U;
    msg.custom.assign("BXGLWTNMOYCDXPSBCPTSVTIZOQCEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.613672123042339);
    msg.setSource(26992U);
    msg.setSourceEntity(87U);
    msg.setDestination(12832U);
    msg.setDestinationEntity(212U);
    msg.timeout = 44162U;
    msg.lat = 0.14146500991726063;
    msg.lon = 0.8861172402774253;
    msg.z = 0.8747119557670631;
    msg.z_units = 168U;
    msg.speed = 0.08967506846435291;
    msg.speed_units = 183U;
    msg.bearing = 0.9553729041136366;
    msg.cross_angle = 0.804316083601883;
    msg.width = 0.6933408302046725;
    msg.length = 0.9563000719163846;
    msg.hstep = 0.9861723253397849;
    msg.coff = 92U;
    msg.alternation = 190U;
    msg.flags = 39U;
    msg.custom.assign("EBOMOHQNDSIBOALZGFWCWZNNWBLUTWXPJZJCTKKCDVPIMOJLPWOWKYPDVSKJAMYXQCAGBFUAEFKBZHLILUCEBJVMGUGFZMSORVXLNPDMSKOAEAVAYNCQNRFNSGYUUGYZTCITKSGHRLHSJEMHRCZQOLIYHKWFIUUTRNEUGQXQREPZBJQFTHDJWMSWQPDFPPTBKXMETHGYYFRJNPDQNTVCBSWFUYO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.10680754402106762);
    msg.setSource(56130U);
    msg.setSourceEntity(49U);
    msg.setDestination(28541U);
    msg.setDestinationEntity(127U);
    msg.timeout = 9528U;
    msg.lat = 0.6815677191411406;
    msg.lon = 0.009952834038199687;
    msg.z = 0.7945698545734112;
    msg.z_units = 106U;
    msg.speed = 0.1879630861842434;
    msg.speed_units = 119U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8197276148890126;
    tmp_msg_0.y = 0.8350450682621754;
    tmp_msg_0.z = 0.8489320813587429;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FJOTSXZPBANROZBRHMBTLNMPXKIJTJLQVKDMFBQCOJNKAOXLASBMZFOWLTPJWNKQFPHVQCSVIISGWLFIYGOYYCCELKRUEELSSDZMMQXEBGPHOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.5069839623667419);
    msg.setSource(3173U);
    msg.setSourceEntity(43U);
    msg.setDestination(47253U);
    msg.setDestinationEntity(245U);
    msg.timeout = 50143U;
    msg.lat = 0.7186233698573593;
    msg.lon = 0.024870105945646648;
    msg.z = 0.2930942451288868;
    msg.z_units = 220U;
    msg.speed = 0.49927095225791973;
    msg.speed_units = 38U;
    msg.custom.assign("MEDLNZEPYTMYLATIJOPPRMMFOWZVBDLRKXAKAXIQPKUSQXLVYXQNQRJRUIUMPTDWEGYFUBMFKVOSAAUNRUOEWLJSARYJZXDXOIEPCDPCFIFEHNKEMDQBZGSZLVQNNGNWGCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.6103992538655332);
    msg.setSource(18447U);
    msg.setSourceEntity(166U);
    msg.setDestination(29440U);
    msg.setDestinationEntity(28U);
    msg.timeout = 10426U;
    msg.lat = 0.5037381559856565;
    msg.lon = 0.34369742927593283;
    msg.z = 0.813375393321536;
    msg.z_units = 225U;
    msg.speed = 0.11587127857299451;
    msg.speed_units = 6U;
    msg.custom.assign("RLBXRCNTEELMTVJGHNOVUTSYSESIATCKWFAUFGJGYUFKNEMHZLBCHYKFKSDJTOAWGJNPYNTIBPKDYJOWXWWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.004441305278595098);
    msg.setSource(42909U);
    msg.setSourceEntity(114U);
    msg.setDestination(28700U);
    msg.setDestinationEntity(25U);
    msg.x = 0.5791363155134681;
    msg.y = 0.1237853923788863;
    msg.z = 0.3864691761419048;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.551295506214096);
    msg.setSource(37329U);
    msg.setSourceEntity(247U);
    msg.setDestination(53794U);
    msg.setDestinationEntity(147U);
    msg.x = 0.3060854907266355;
    msg.y = 0.5288590877774095;
    msg.z = 0.6050036009043244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.519846797054746);
    msg.setSource(62066U);
    msg.setSourceEntity(171U);
    msg.setDestination(11635U);
    msg.setDestinationEntity(117U);
    msg.x = 0.9918861441948795;
    msg.y = 0.5214262640619638;
    msg.z = 0.9642938306351979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.4365396556122293);
    msg.setSource(16535U);
    msg.setSourceEntity(194U);
    msg.setDestination(48040U);
    msg.setDestinationEntity(43U);
    msg.timeout = 21746U;
    msg.lat = 0.6848622908243627;
    msg.lon = 0.16105595657679772;
    msg.z = 0.06572137752666041;
    msg.z_units = 164U;
    msg.amplitude = 0.8881851173228253;
    msg.pitch = 0.5192407272416014;
    msg.speed = 0.8784275497820878;
    msg.speed_units = 121U;
    msg.custom.assign("MUTEMZXIFIKSGROFKCAXSHODZLLSBTVPWEPENPRHEIYQOYUZSTBBWPLAMOHBUVGZRVSGYTAFYELCDUTFZKUHWULHQCWIHSBUJKWTYWAOKXXJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.3932740785118509);
    msg.setSource(41087U);
    msg.setSourceEntity(128U);
    msg.setDestination(8177U);
    msg.setDestinationEntity(6U);
    msg.timeout = 22203U;
    msg.lat = 0.5015641883403105;
    msg.lon = 0.45058976059365186;
    msg.z = 0.7619850360284183;
    msg.z_units = 148U;
    msg.amplitude = 0.4901952024426961;
    msg.pitch = 0.8187096498906975;
    msg.speed = 0.08099737840408838;
    msg.speed_units = 237U;
    msg.custom.assign("UEZZMATCGJEWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.3780354288317367);
    msg.setSource(8160U);
    msg.setSourceEntity(132U);
    msg.setDestination(34939U);
    msg.setDestinationEntity(27U);
    msg.timeout = 61135U;
    msg.lat = 0.06539219753760683;
    msg.lon = 0.48763243375119614;
    msg.z = 0.44063369241780936;
    msg.z_units = 166U;
    msg.amplitude = 0.26973146062530795;
    msg.pitch = 0.17758761998040506;
    msg.speed = 0.1505286380185431;
    msg.speed_units = 71U;
    msg.custom.assign("WMJICCIZIRJGVLHWONFKZOATWGPLJEDKZOBHFCPMUFWPGFEBVOFCYOGSDJQSWJKMMANZKOMHVXQIMGSQUASURTEHSPDFKUEYFWIDKOIMZUNVVLMTXNXIDDYZNNXKBTJIJWAYAYOVWHIILXSBRURGCADTGMXZTJYHRFQDULJBLLCPWCLVTHNO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.011574020403399388);
    msg.setSource(19918U);
    msg.setSourceEntity(17U);
    msg.setDestination(10796U);
    msg.setDestinationEntity(128U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.02788759395454321);
    msg.setSource(4716U);
    msg.setSourceEntity(62U);
    msg.setDestination(63672U);
    msg.setDestinationEntity(182U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.0975548985716771);
    msg.setSource(2477U);
    msg.setSourceEntity(184U);
    msg.setDestination(52190U);
    msg.setDestinationEntity(9U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.12912931773432546);
    msg.setSource(35667U);
    msg.setSourceEntity(219U);
    msg.setDestination(28178U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.27750389650662366;
    msg.lon = 0.8684651395642794;
    msg.z = 0.7070464283068346;
    msg.z_units = 25U;
    msg.radius = 0.618151043260425;
    msg.duration = 26759U;
    msg.speed = 0.9994694167729298;
    msg.speed_units = 221U;
    msg.custom.assign("FQQVHGYMSTZIZNAXIVFOQSEXAQHUHPEGJALIUYWVDGGVRDOMBGXQTYAAWHUANUQKYBEDMLCBCLEWLJCOAVPCKREJTTZALXHWNOMEBJEPJBOIWKMYBZOTZSEPIWDPNCNLPHSCHKYFHXLGFTDFDAXUVCQSDTDQFKSFKHRCBRMLJXVUVMZVJKTBNIWIURIYMNUIPKTORIBYJETXUSFUZCSPPYLRJRGRGSQRKNMQPXE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.6110718392212822);
    msg.setSource(36192U);
    msg.setSourceEntity(32U);
    msg.setDestination(37232U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.752782487545628;
    msg.lon = 0.7567987950763627;
    msg.z = 0.15339332500215774;
    msg.z_units = 38U;
    msg.radius = 0.016898921221734198;
    msg.duration = 53239U;
    msg.speed = 0.9717830395774298;
    msg.speed_units = 192U;
    msg.custom.assign("ORPVZZEXLSYRYOXKBJEVHLWKXZCPINKXSIEBUSIRVANLTBZVAKEVDMTGHYRVTXMSJFQJQHTZHRDCIHVMGWFKTQGIIPAEUJYDPCODCPVDCNJLHPUSLYQNPMJEWKPQNWEAUAWYCJDULWAOWLOSUDAFXEOTKVKSQGTIMZWUMENTBXHZRODCEVOPCOFBBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.95688633206235);
    msg.setSource(63556U);
    msg.setSourceEntity(147U);
    msg.setDestination(44502U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.04471981115253687;
    msg.lon = 0.2413188994158919;
    msg.z = 0.3106492747667423;
    msg.z_units = 123U;
    msg.radius = 0.4373279672713555;
    msg.duration = 61300U;
    msg.speed = 0.9851987665823974;
    msg.speed_units = 129U;
    msg.custom.assign("SVFMSEVUMMDHKCJCFDAQYHDGPAWQBGJWEJYIRUMYNISAPTGEFLKRKCSWLZSXYKDXUYAAWNHEVDNDCKATLNDHLGMBIVIQOHPDBIXQMGOTZHCORRQNCTFWGEFFWJOTEZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.41834761213157245);
    msg.setSource(38352U);
    msg.setSourceEntity(238U);
    msg.setDestination(34632U);
    msg.setDestinationEntity(222U);
    msg.timeout = 14330U;
    msg.flags = 151U;
    msg.lat = 0.23158784675452038;
    msg.lon = 0.12476423631987565;
    msg.start_z = 0.23259267735028533;
    msg.start_z_units = 201U;
    msg.end_z = 0.7073521715159733;
    msg.end_z_units = 234U;
    msg.radius = 0.5316610991351942;
    msg.speed = 0.6099423893609526;
    msg.speed_units = 9U;
    msg.custom.assign("LDXZNLZLHPRZXAYRZBFMQYWTAVISLSKUNKEUPQECJFEUNUVBMLOHXDADMIADCFGKIMUZWSYMOPRYHNTXIFTSJWSKCKNOTIHKGOGEBUZIJGEIDQZYKYKRJQHBCAQFCPDNNWRXVWQFPWFUQRTKWOJTTXDLVBJCMPDVNTWLQMGTVGSBBKWUUVZLQHFOZRLEZGYNXCTDXLDRHSJVHPJAMFBYRYMQIWSOCHBEVAANHFMPBSGJCUYIJAEOEPRCGXOVEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.1393357052367179);
    msg.setSource(23645U);
    msg.setSourceEntity(92U);
    msg.setDestination(37851U);
    msg.setDestinationEntity(253U);
    msg.timeout = 33842U;
    msg.flags = 8U;
    msg.lat = 0.8451969390322541;
    msg.lon = 0.2682120978889;
    msg.start_z = 0.7551694407063234;
    msg.start_z_units = 4U;
    msg.end_z = 0.2653892397833617;
    msg.end_z_units = 122U;
    msg.radius = 0.1121075108074604;
    msg.speed = 0.7453715305980896;
    msg.speed_units = 90U;
    msg.custom.assign("TDJFBWHGZYDLGOADSRGQYISXITGVBKOUWRLEOSWTJZQEHWHAADNJLXAKKENFTJWTOJKOJCGOEUWNYQMYRFWUPRTZFMABORCBMQVNUEICFNLZGSGGIJYBKIKYVYQNIBBVSOCVMPPZKFXNLQHUEDZHAATPKCRDCHLCUZZOXQVKMYHGJESXFPVMCHPUHUFCUZSAWVJSTVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.4354228673658368);
    msg.setSource(19425U);
    msg.setSourceEntity(210U);
    msg.setDestination(30162U);
    msg.setDestinationEntity(209U);
    msg.timeout = 835U;
    msg.flags = 237U;
    msg.lat = 0.7190328638597876;
    msg.lon = 0.4301754357223424;
    msg.start_z = 0.13130333886379486;
    msg.start_z_units = 95U;
    msg.end_z = 0.34061636879266466;
    msg.end_z_units = 168U;
    msg.radius = 0.7294098234936978;
    msg.speed = 0.3143001880838545;
    msg.speed_units = 104U;
    msg.custom.assign("VGFNLJBJCKVDIIDNMQVLLULOBQBQUKYWWHWAUUTANDBLCCEFYEWFFLGTZGNMKWOVCMWEKYAWXTYESDEPHYNQNXZUHNHTUCPRXRLIGF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.8117788561189857);
    msg.setSource(18534U);
    msg.setSourceEntity(140U);
    msg.setDestination(18542U);
    msg.setDestinationEntity(84U);
    msg.timeout = 43164U;
    msg.lat = 0.4062460623120471;
    msg.lon = 0.37883818223463583;
    msg.z = 0.7348588251470541;
    msg.z_units = 226U;
    msg.speed = 0.25552348863534946;
    msg.speed_units = 111U;
    msg.custom.assign("YCRPPTSFPVOZBKZNTZRFGYNVFANXBLTURQLIHUXKCMKUHIPWEYCPYBIKWXDOFUQTVJAVVWMGDRDEQKSGTADYSLVZXBEWFDISJOZMMFWQIVESCYPITUMYHLPQSRAAGOBQDOGLEKIQXUKGOMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.4171396548340063);
    msg.setSource(65145U);
    msg.setSourceEntity(173U);
    msg.setDestination(1709U);
    msg.setDestinationEntity(87U);
    msg.timeout = 63994U;
    msg.lat = 0.5542421693196016;
    msg.lon = 0.9056554516342765;
    msg.z = 0.8172022475563723;
    msg.z_units = 134U;
    msg.speed = 0.37159615022124004;
    msg.speed_units = 112U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.570996583597055;
    tmp_msg_0.y = 0.07479217881127442;
    tmp_msg_0.z = 0.07082142420947457;
    tmp_msg_0.t = 0.13987128974924523;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CJVGYGVPNNYLDRLYKGEKQHFENQWXIABRQRXHLJMAFCULJDJTDSZEWQWKCWRZXHZPXMKVJUKZTRDAOBFHTYCJUYINBVZDPSICUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.6042822411739838);
    msg.setSource(27691U);
    msg.setSourceEntity(130U);
    msg.setDestination(36226U);
    msg.setDestinationEntity(26U);
    msg.timeout = 22692U;
    msg.lat = 0.7358291074518843;
    msg.lon = 0.11221646372207716;
    msg.z = 0.3270385599386959;
    msg.z_units = 170U;
    msg.speed = 0.5589614965228616;
    msg.speed_units = 232U;
    msg.custom.assign("VMYCKTWLJWSAIDKBMVEASJUCALEXYXRWMEJHYJPAZLZTKFNHWZNEONJQFCTEQQNBOSDUWIVAFAIELZGELCVMSGHJVAKQORCLKUOPPGKRDUWFGSHXORDBLXPUOTQGFMSHLKEWTIIQXRCQODPAKNOMNZXYRCHUVMTXGDDNUZGPLYYGUJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.7997285924476222);
    msg.setSource(56126U);
    msg.setSourceEntity(230U);
    msg.setDestination(42130U);
    msg.setDestinationEntity(253U);
    msg.x = 0.20747263839534624;
    msg.y = 0.0903587592756997;
    msg.z = 0.7173096926141455;
    msg.t = 0.11198027247886155;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.3428717693459007);
    msg.setSource(7898U);
    msg.setSourceEntity(197U);
    msg.setDestination(61408U);
    msg.setDestinationEntity(98U);
    msg.x = 0.17788169165557244;
    msg.y = 0.9294463948760284;
    msg.z = 0.18687904360356689;
    msg.t = 0.294956737873062;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.30060264820313165);
    msg.setSource(53734U);
    msg.setSourceEntity(137U);
    msg.setDestination(16802U);
    msg.setDestinationEntity(42U);
    msg.x = 0.3671093679380725;
    msg.y = 0.21677308388522332;
    msg.z = 0.7399977193280695;
    msg.t = 0.9288685380085955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.5743962805221181);
    msg.setSource(48950U);
    msg.setSourceEntity(165U);
    msg.setDestination(62781U);
    msg.setDestinationEntity(13U);
    msg.timeout = 37264U;
    msg.name.assign("DPPIOFOMBBPTHKWTEQORVVZQVCNIWGNEKMRANRPFOTJVLMFAHNWGFPVABHNZIJYFIKAHBEULUOTDK");
    msg.custom.assign("ESWQUHQWGNACBUIJHNXYKRXSAOVAPRPSBFTULSIECGMEFOQGCANEKCGPSOPIQCDWWOGLMFTAQPJZCNBWZIKXTWRLUEPZVZRQWGVMWXCLCIYHRORMIUFELGEYJOOFFRDJHZDEGHUMNXWJDODC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.6780478191281071);
    msg.setSource(57284U);
    msg.setSourceEntity(192U);
    msg.setDestination(19503U);
    msg.setDestinationEntity(157U);
    msg.timeout = 23365U;
    msg.name.assign("RVLCFFJTLJRKPXETWXVWTRTQTLXYCRXVNOMNFZUSTHKJPOZCGRCSEZ");
    msg.custom.assign("VMGOYEALYHLKQXSCWNNOQNPJGPGAGETCOSSUYTRZSZTFMAXPKRLJXJXSZNEDIQEWSBGWMTCFBLHPXKSCGPPQUARJBQUJYMIUFDIVRIZVAHGDHMUPCQAFZYXEGLELWOQVFDHSFJVLKMJWBNOIBOZXXKUUFTLERWHNOFCACSOBDPVZTZLQMNIDIKQFRCV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.9644798168443784);
    msg.setSource(49434U);
    msg.setSourceEntity(178U);
    msg.setDestination(19341U);
    msg.setDestinationEntity(234U);
    msg.timeout = 49377U;
    msg.name.assign("BGLQXZRFZKBUWSMIRLSKZCIGTMGLORJRFLHTHJJUKEDYNGJACEDJAHJXHMXQCUJFWAGFUIYYPGHARYWVCQCTFXARSBGOXCKPFOTNIIYKMYSEFOLTXBXJPYHDW");
    msg.custom.assign("JBTHQTOPODNXENDWKORBAFBWSHBLSCEDFDVYDDWYQPOHWIJZBIERNIHPVYHWMGPTGFFYTELTTCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.651877695879226);
    msg.setSource(540U);
    msg.setSourceEntity(197U);
    msg.setDestination(26327U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.920165461864935;
    msg.lon = 0.41724311698808714;
    msg.z = 0.8471457188231454;
    msg.z_units = 113U;
    msg.speed = 0.8077208693327221;
    msg.speed_units = 137U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.44312232790118444;
    tmp_msg_0.y = 0.8939279852953181;
    tmp_msg_0.z = 0.5224963483945325;
    tmp_msg_0.t = 0.3903509439502283;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 37120U;
    tmp_msg_1.off_x = 0.4316572939110911;
    tmp_msg_1.off_y = 0.6406275413718381;
    tmp_msg_1.off_z = 0.1132266940757678;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.35878538600327103;
    msg.custom.assign("QROUTIMLYDSRVCHRVDLQEETGIAYQNYZPYWTHYCMIZDJONEQMKAXXFVISKEMZDSNNFPNCWXPWHBUZEUPRQDPWBWIHZPQVKHKSBPCHZBMWFTVJASGEDKBCICAQHTUWOFHLWXBDCSRYUOFTRLGULINSJVKSUHKINBJMFSREJGJNBRLDBDHPBADWOPNSQKOFGXOOJJAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.3337934822319263);
    msg.setSource(63844U);
    msg.setSourceEntity(84U);
    msg.setDestination(12609U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.4075623079106693;
    msg.lon = 0.8997758755495354;
    msg.z = 0.542414791319439;
    msg.z_units = 220U;
    msg.speed = 0.37951751717337456;
    msg.speed_units = 252U;
    msg.start_time = 0.8281035193106028;
    msg.custom.assign("TLUCFLVRPPGKZJUNGNOAHLVNADAQEIJMBDRPOYJCEBSMNRSSFTPLPXHEEEXHTSCGRMYDXDSKYITUPYUHBOGZBJGKTUIYRVZBAHVWQDKZKXLRXLFXHIVIMWCNFEMZJOQFGGGKETXCAMGQQBVFTWLIOIXZNZJAVCIJBQPJPYFFIZKSWYARDVJUPKEWUJRQAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.4358608802729065);
    msg.setSource(62151U);
    msg.setSourceEntity(169U);
    msg.setDestination(49512U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.11004454601563196;
    msg.lon = 0.3138474386168716;
    msg.z = 0.13350730894389717;
    msg.z_units = 80U;
    msg.speed = 0.3306188771889108;
    msg.speed_units = 48U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7091523249883892;
    tmp_msg_0.y = 0.3572242361246589;
    tmp_msg_0.z = 0.40828235911079624;
    tmp_msg_0.t = 0.878896795250901;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.29348065646356203;
    msg.custom.assign("AYJUTTAUKYPJNBJTFQPCQBKUWAVWVYGRDMSUQXENASCUOGOPOICVHMXDIWZBNOVJRHUDFYRKGLHEZRQFCQTTWKHKLARBUGIJIRKDNHCPZRGNDSBVTSMVBBGEJLVNXOWFWMPZBWBPYAOCHYMQLTPCPOENMMEAQDGSXDSYEIHBMRESKNWUQLEJZIYFWDVEILYKQMTXODEMHSFGRGKDCFHLJZVFOTSZXPTZSFXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.5712313518105063);
    msg.setSource(26518U);
    msg.setSourceEntity(210U);
    msg.setDestination(39952U);
    msg.setDestinationEntity(214U);
    msg.vid = 60034U;
    msg.off_x = 0.649263038978251;
    msg.off_y = 0.9061180331420616;
    msg.off_z = 0.44036887928538915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.22918393329157105);
    msg.setSource(59094U);
    msg.setSourceEntity(96U);
    msg.setDestination(8941U);
    msg.setDestinationEntity(45U);
    msg.vid = 34510U;
    msg.off_x = 0.015653166723507028;
    msg.off_y = 0.2951250706451978;
    msg.off_z = 0.5080060649532259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.36458893369804823);
    msg.setSource(8797U);
    msg.setSourceEntity(99U);
    msg.setDestination(64470U);
    msg.setDestinationEntity(159U);
    msg.vid = 22560U;
    msg.off_x = 0.7310464452626095;
    msg.off_y = 0.10668035691698907;
    msg.off_z = 0.7384322505481788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.7054956914671412);
    msg.setSource(56338U);
    msg.setSourceEntity(7U);
    msg.setDestination(35539U);
    msg.setDestinationEntity(154U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.9793780063237008);
    msg.setSource(37685U);
    msg.setSourceEntity(43U);
    msg.setDestination(10656U);
    msg.setDestinationEntity(166U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.6191793248159326);
    msg.setSource(15750U);
    msg.setSourceEntity(76U);
    msg.setDestination(28683U);
    msg.setDestinationEntity(26U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.9798314261043216);
    msg.setSource(42801U);
    msg.setSourceEntity(131U);
    msg.setDestination(41257U);
    msg.setDestinationEntity(34U);
    msg.mid = 35976U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.46335970602731114);
    msg.setSource(63573U);
    msg.setSourceEntity(84U);
    msg.setDestination(50112U);
    msg.setDestinationEntity(45U);
    msg.mid = 59173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.34144903529621173);
    msg.setSource(38378U);
    msg.setSourceEntity(14U);
    msg.setDestination(63536U);
    msg.setDestinationEntity(45U);
    msg.mid = 18089U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.5160883125971854);
    msg.setSource(43870U);
    msg.setSourceEntity(25U);
    msg.setDestination(15970U);
    msg.setDestinationEntity(77U);
    msg.state = 135U;
    msg.eta = 10774U;
    msg.info.assign("UOCFQBHKJXJOXXFWDSJCGLEYUGANMXBNAMLNZRDIOVAGZRTKKSTIJFGLVCMFRWLGBZYUZVEBHIXAEPSAUUGYRTHPPHUBJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.8437558385309085);
    msg.setSource(29925U);
    msg.setSourceEntity(165U);
    msg.setDestination(19448U);
    msg.setDestinationEntity(26U);
    msg.state = 150U;
    msg.eta = 26144U;
    msg.info.assign("MKUGKRIJNTDTMUHNZOAVNMVLYRVSRCEJRUMLDFYADNQFXIGZPCAZKBEPTXUNKMTDDVFVIMXGHNZHOCOULNXQPKQCXMTMZYIPWJAJSYBOYSLWGGJLHWEFEJHDQLISFWKMGZDE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.8411786404229418);
    msg.setSource(50840U);
    msg.setSourceEntity(13U);
    msg.setDestination(42321U);
    msg.setDestinationEntity(25U);
    msg.state = 223U;
    msg.eta = 42308U;
    msg.info.assign("BQYGXBTOAMWEXHUVFBEGWRTVZCQBQEABFWNHLTPIKHNJJYTVZVGMWIYZKDIZYXMMLFKEFCEYUGBZFKRGPYJATUDXSMNQQOVLOTHNKIGYZAGARRQIYHIAITKEKUDVNNBEPPDQNCNQPAWSXCGPIVSASSFSXFFDGUFAUGMVLETWBULETSHKMRSURDJOZCUW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.5563139867642206);
    msg.setSource(19817U);
    msg.setSourceEntity(54U);
    msg.setDestination(47079U);
    msg.setDestinationEntity(75U);
    msg.system = 32172U;
    msg.duration = 38617U;
    msg.speed = 0.22043797115256825;
    msg.speed_units = 72U;
    msg.x = 0.7705943920971896;
    msg.y = 0.22711175835382813;
    msg.z = 0.7730523908337689;
    msg.z_units = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.4075769276509269);
    msg.setSource(9917U);
    msg.setSourceEntity(237U);
    msg.setDestination(55348U);
    msg.setDestinationEntity(93U);
    msg.system = 6407U;
    msg.duration = 55796U;
    msg.speed = 0.4733429362683419;
    msg.speed_units = 178U;
    msg.x = 0.9711580618866967;
    msg.y = 0.19551921426796093;
    msg.z = 0.5507282792453264;
    msg.z_units = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.3187689023616721);
    msg.setSource(3563U);
    msg.setSourceEntity(141U);
    msg.setDestination(11170U);
    msg.setDestinationEntity(144U);
    msg.system = 33915U;
    msg.duration = 9700U;
    msg.speed = 0.28009917230459835;
    msg.speed_units = 132U;
    msg.x = 0.3773065382735664;
    msg.y = 0.10118203813125715;
    msg.z = 0.860488322510809;
    msg.z_units = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.19083268173795398);
    msg.setSource(28307U);
    msg.setSourceEntity(172U);
    msg.setDestination(18313U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.9661271511086507;
    msg.lon = 0.8584438905882692;
    msg.speed = 0.6242788740447179;
    msg.speed_units = 15U;
    msg.duration = 6516U;
    msg.sys_a = 42977U;
    msg.sys_b = 31465U;
    msg.move_threshold = 0.19717231976405447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.6549377771328763);
    msg.setSource(27493U);
    msg.setSourceEntity(253U);
    msg.setDestination(5794U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.12680344597607662;
    msg.lon = 0.3033986365228961;
    msg.speed = 0.6967445808138013;
    msg.speed_units = 245U;
    msg.duration = 64576U;
    msg.sys_a = 50393U;
    msg.sys_b = 25072U;
    msg.move_threshold = 0.35706079747479536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.7607574905442094);
    msg.setSource(45560U);
    msg.setSourceEntity(216U);
    msg.setDestination(10462U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.2631256322304073;
    msg.lon = 0.05997739494089893;
    msg.speed = 0.5495898714659812;
    msg.speed_units = 217U;
    msg.duration = 44528U;
    msg.sys_a = 26065U;
    msg.sys_b = 10647U;
    msg.move_threshold = 0.4991650363511534;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.9809347945817244);
    msg.setSource(61292U);
    msg.setSourceEntity(164U);
    msg.setDestination(35071U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.25064031881063553;
    msg.lon = 0.7832836653660071;
    msg.z = 0.03155946300934087;
    msg.z_units = 115U;
    msg.speed = 0.7827171233908263;
    msg.speed_units = 251U;
    msg.custom.assign("WVEAHRDOTGUIQGJPMNAUDCKRGSCIOODTRHDIUHKXLZQXJCOTPZMJKALCQXRSNTMILOWLYUDFZEINUYDFUNATIIBEZMQGPLHSWKDPYZGRFLSVPAEYQBTMZYJKUCXXSKRYJGXOLPBAPEQAJGXWJBOEMCTZHRHHVQYSFIIJHOCWBFVSNBGSOWRZCGET");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.5377056122875427);
    msg.setSource(18436U);
    msg.setSourceEntity(113U);
    msg.setDestination(28446U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.5201535951905835;
    msg.lon = 0.30713826881948403;
    msg.z = 0.6206406544647243;
    msg.z_units = 113U;
    msg.speed = 0.8071413983555805;
    msg.speed_units = 124U;
    msg.custom.assign("XFHMIYYPKKBVUBHNBVVZPCGVWEHDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.30129440904104243);
    msg.setSource(37250U);
    msg.setSourceEntity(34U);
    msg.setDestination(34914U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.41774974539566667;
    msg.lon = 0.8913831921738155;
    msg.z = 0.8326306266810666;
    msg.z_units = 222U;
    msg.speed = 0.07047690989287214;
    msg.speed_units = 190U;
    msg.custom.assign("MPZGKBIWCKHHDUVHXYLERYXKMNAVUCCTAAWGXNOPKYILPNFIZJIOUSWDYFOZXQQHHMSNMTBUZVLTEOPAWEOWRJNRCJIBBXSYLRUOZNHGMECJVAXPQWQYKVMTYUSNRENJBQNLECLSIKFMIKSZJLLZVWXSTVVUQITDGXFQIBHACYRFJJUNADPGRMOVSUIFTOKBQRRRAJEDZHZCQPFHADDSPBMZOGBAGDEBWFCKTOLEHWGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.4713326174011032);
    msg.setSource(51767U);
    msg.setSourceEntity(32U);
    msg.setDestination(25939U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.0951378835133544;
    msg.lon = 0.75870222487975;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.18694520360762767);
    msg.setSource(18759U);
    msg.setSourceEntity(26U);
    msg.setDestination(34498U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.5135662038810443;
    msg.lon = 0.9803609572597817;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.15815841983443912);
    msg.setSource(1271U);
    msg.setSourceEntity(157U);
    msg.setDestination(8109U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.26723312020267054;
    msg.lon = 0.3751439040051726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.6500448464993313);
    msg.setSource(45690U);
    msg.setSourceEntity(70U);
    msg.setDestination(25456U);
    msg.setDestinationEntity(9U);
    msg.timeout = 56442U;
    msg.lat = 0.8663087551832898;
    msg.lon = 0.4166902574177519;
    msg.z = 0.8478536835884434;
    msg.z_units = 152U;
    msg.pitch = 0.41301194063907465;
    msg.amplitude = 0.6592199824803139;
    msg.duration = 59880U;
    msg.speed = 0.06410423849968583;
    msg.speed_units = 246U;
    msg.radius = 0.925446374648111;
    msg.direction = 40U;
    msg.custom.assign("HSMQPESEOPRMAGYLGCAMRRIVVJNIWCOFTOBRQSWDYFVABZKLWVNMUHBLWNSILMTNHVKH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.05160526912447827);
    msg.setSource(17298U);
    msg.setSourceEntity(207U);
    msg.setDestination(24256U);
    msg.setDestinationEntity(107U);
    msg.timeout = 37043U;
    msg.lat = 0.4738275872164276;
    msg.lon = 0.6406251424491867;
    msg.z = 0.9974987246568352;
    msg.z_units = 173U;
    msg.pitch = 0.30821967888312085;
    msg.amplitude = 0.7454668924351623;
    msg.duration = 39094U;
    msg.speed = 0.6572479554468115;
    msg.speed_units = 49U;
    msg.radius = 0.2006545922304921;
    msg.direction = 147U;
    msg.custom.assign("BIKLZLGJJUDFMVMAMGRAVNPCYHAUYWFATDYMATIRCSDFNBTHUREM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.3519105227352727);
    msg.setSource(10442U);
    msg.setSourceEntity(254U);
    msg.setDestination(44101U);
    msg.setDestinationEntity(91U);
    msg.timeout = 17831U;
    msg.lat = 0.6466126602149622;
    msg.lon = 0.4721436398767028;
    msg.z = 0.29828263607575034;
    msg.z_units = 76U;
    msg.pitch = 0.7065292829163607;
    msg.amplitude = 0.6085094291711011;
    msg.duration = 24584U;
    msg.speed = 0.9106921863784586;
    msg.speed_units = 193U;
    msg.radius = 0.4077939186358096;
    msg.direction = 99U;
    msg.custom.assign("UCMASLZASHDOKLXRREKORPTI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.40870522444966306);
    msg.setSource(61382U);
    msg.setSourceEntity(7U);
    msg.setDestination(64398U);
    msg.setDestinationEntity(217U);
    msg.formation_name.assign("PLRRGJGCHMFTNXIVPDIWIDVUJXDYBFOJOALIKWQVHSWETDEJMOHEFXBRQBNKFASWPFC");
    msg.reference_frame = 49U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55037U;
    tmp_msg_0.off_x = 0.2245479941781484;
    tmp_msg_0.off_y = 0.14099131200012305;
    tmp_msg_0.off_z = 0.04034535172704401;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FXKBLYZONPHNFBSFBHTJYGKRFEJAQCCGWQTTVUFNPDBGMUOWJDVXIJKUVFDLGWQVIZFZHRQMYPYACQXGSXFXRJMQIBGMHSAZPLCCORVOWQRJEEIKTWNDGHIUVSEYYSPCVNTAUXNYTONSEADHHBZEAEPGKBWSMUCZJWDVAZKDDUYJMGGCRYAZVSMOIXZMXQIXZCKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.520531233567858);
    msg.setSource(35189U);
    msg.setSourceEntity(176U);
    msg.setDestination(36635U);
    msg.setDestinationEntity(188U);
    msg.formation_name.assign("MEHQARTWTFNDTUYXIBUBYMNSHXYRHRIDVPINWKYEPUHVBBVLZVPCMAOWVQAPNWKXNGOWHCFXOMBRWMMJBGJNURHVAJUEBH");
    msg.reference_frame = 195U;
    msg.custom.assign("EEYLOKBGOKAXJHKOBTHGWCVYWVXNWAQMCAVASPIJHPVJBZAQXSMTRLOWGFBWJEQZGPCRFFCEZMUMNEXMGACZZHSLTLFUWSQLZNIDMYBBXSUPVYSIMIYUSFRIPCGKCIDDGJYOIACPLQOQYVWXLYRMBZNXTRSTDPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.3193697171566262);
    msg.setSource(52135U);
    msg.setSourceEntity(110U);
    msg.setDestination(4895U);
    msg.setDestinationEntity(178U);
    msg.formation_name.assign("QPXZNTVMXDQGQZQNOUKMGZLNQLGLNWOIZEOCPWABRSVRNHYUXVHWITQXZFDHJSWJCEMPIHHZJJISVXRUENSZSCBRAUEDHEETTGJBBIOIDFENAKTDLDQLXOUDLAMTBVTSQWYMMKYMLKPFBAYHRNWOBXVJFFRGKVURMLYJZUHFHVSAKEYGPXEFSJGAHBIRCBKXGJLRWFPOWFDPXLGUUYATNYPF");
    msg.reference_frame = 56U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50976U;
    tmp_msg_0.off_x = 0.6749828487573021;
    tmp_msg_0.off_y = 0.46785211925430525;
    tmp_msg_0.off_z = 0.5302793433827665;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CLJDUIGOCYDJZNUTPHGYBSOAVINQQOOFSVKWSRAHUJKXATHSRYWNOZMQLUJGNJMXKBPLBVQLHCVYWTXDRAIWADNCZCRQVUTXIFTOUCMGHQLWGUTQMFECDPJWZBRPSLZJKQBEGDVZNKYBPNYRBLFMHUMTKFDESCEJYSONITPEVYRRXCFGFGRKARAXTIWZMJZGSSEFNBMEXEEHVASPHXIF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.9920685861135187);
    msg.setSource(35200U);
    msg.setSourceEntity(218U);
    msg.setDestination(52425U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("QZCSLDPJFCELQSYMFCTAGFVQCOLCKMTERKMTCRQCLAVFDHYCFPJGIMQXXWTTGIJSKSMRKKYJUHBKMKRCXVEXHQAJAIBIFPVTNAIWDVUSWXLREGBNOXFKPDJTQETEEQUWUXUWNBBSKLRAHGBBOMWEPFJPBUQWRWVLIFHMZONDNGDZZMNHSYKTZQPDVUHISIDFZNAPO");
    msg.formation_name.assign("IZNLHNDXOMJISDEWQOYYRBVSWYHUYNUOHINMAOGLAMGDGELDKRUFABADRBEVTODFARGWXCPBMTETQTKASGIQCWSVRPXKNEMPMVJMOGKHFTJVDPBPZCIYHXRWSQNRBXIAHQWVHXIBZ");
    msg.plan_id.assign("HXYHQJBOHLDZHUTYNTNSYXYKORIGJZJHTEWLHJUQTCSDDLBSLUWVQNACOVMBMUNBAZIKEBNMVMNQUQJXSXIZDRAPVIXBRPSUFEUFTCCMRXVKMZOGYCWIEDNWFPOAPLYYSKOFAPROQOFDDAXQQEFNCJCWVAGGUFIDZQVRBFBPFVTYKTGJZRIGKJJKEMTAEGKCGRVUDXCWRXBHFSHQHWLYSP");
    msg.description.assign("HCVRJQAOSLKWGFSBAFXNVYGUJKIXNCFWMXYHSFWYUOUMJDHEALGILTEIHJTPMWAMDZTMAAKIXQFQMGPPBZOFPPUIQVHEBTJPSCVYTCRPKSSABF");
    msg.leader_speed = 0.8772909179558896;
    msg.leader_bank_lim = 0.808075369582722;
    msg.pos_sim_err_lim = 0.3500282014404781;
    msg.pos_sim_err_wrn = 0.4309729531765797;
    msg.pos_sim_err_timeout = 46265U;
    msg.converg_max = 0.6730931551202575;
    msg.converg_timeout = 6241U;
    msg.comms_timeout = 13461U;
    msg.turb_lim = 0.36432650344790485;
    msg.custom.assign("XNDTEFDYEKLQDJTTZLLOLTXCAPWIEWTIBUGUJHOCLIQWMCFAHXQWOKEHGJVLUNELHMX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.3470401228584773);
    msg.setSource(63186U);
    msg.setSourceEntity(105U);
    msg.setDestination(43135U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("HDYMJLJYOMKRTGISMXGXAEMSGQOCOCEPDZUSAKTMBJUPFNEBEDYULDMKWQTARWQVHKQZJCLENRZNYNCUQDCPIICWRZNMSRLRTSOYIATFCJRKPVVIUNQWQLBGHFOXLIHFVGHIKZLXAAYKZPVWSVUVXFBBEFIOHOCDHVCXTZYTXJLFZBUGAJTPZNFYWEVOUNWINRRAGSELAMRLTGOSKSMPADOBQQHQUXKVDYKCPJIGJHFPFBDEHBBPWXMT");
    msg.formation_name.assign("RZTQXHXIXGCLRWBLPSWDIMAMVOIXRWDHZFGCUZCFACVNZTMJFMQKHLAOEROKYGCWOUNZRULEGYJILHFQDOIATTXKRYKMQBVQLKGGXURSKBGDRHMZMPAAQDTNBTPJESFMJSNFHQFKDZUOHVTWFGXJKWNRMPSEYLBVWJTAPGJEBVOPFDYINACIDSVPNNITVKXBCNJ");
    msg.plan_id.assign("JMJFWGARZRAZOSDAVJFYZYTBUANYEGPAKYCOPZFXVEDDTHVQWPBUZKAVPZPQNZFJXENOTKYRPLMASTHULRKGFRESSXINTSTVGIDWXQRVLMWJLJSFXMXMKBLDWUGLTHNLZRMKHDYTXKQCOJSVQCFNJWSGUOGBGQMBTYEICMZVRPSNLSNHGYUNKLOADCRVCQDHBQW");
    msg.description.assign("GWYIIHTFLBPVTOQZUGFWAOUQAEFKCZHYUTCLHQOLMTOLQTKMTXXBCBGNLVUUSXIAPKFRBSHWNFVCQMRCDYSPVOGIPRIYOSYEFVSANXRDOEEQBKMCWKWUMIERHLJJBPOUQIQWGNWRBFFBEFCTLYXTBATZCGTUZXIDVJHLPAELZANXFCNKBNHNSKZSOVJVHYZXWMYYDZKDJOILJYAVGKEJIHZQXSSPRMCNDSPNPGDGRKMJ");
    msg.leader_speed = 0.6074142547657044;
    msg.leader_bank_lim = 0.9600642606422181;
    msg.pos_sim_err_lim = 0.7247239840398734;
    msg.pos_sim_err_wrn = 0.09870023768667568;
    msg.pos_sim_err_timeout = 45144U;
    msg.converg_max = 0.38584996604983435;
    msg.converg_timeout = 11356U;
    msg.comms_timeout = 23691U;
    msg.turb_lim = 0.8339679219784473;
    msg.custom.assign("EKAAMCNGDHFBWWXMEVKRHTOKUPHLRBUVUBPZIDYOTZZDVRUKMYNUALFEUNQGNSVPQBCI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.15468948341510724);
    msg.setSource(50461U);
    msg.setSourceEntity(242U);
    msg.setDestination(7927U);
    msg.setDestinationEntity(69U);
    msg.group_name.assign("KAOTPERQBNNSFAZVCJVDEKTLBXGLXISTXYFEOIIWPMIRVBIEBTISLYZKBQSGJRDYG");
    msg.formation_name.assign("THITQCXJDBJFLBMOXQHNYVKNJSACRGFLDEOEVUDELOXQUXWNPLJBWDRNESKPRAJHMEIUYHQGLYNKOUWCVWHFFUVJLCGM");
    msg.plan_id.assign("VPPWRINJKHZYZDLAIEFBHUQFPCSDDEPVNIGUJOMXALXBRGFWDMTXNNHBBIGFRQBQKHAXFXNTUTVFLYHXQWHWQYZKDDTOYFGVJCBNNYJWELTWCHALHMCLWITEEQLZOWRHVEUOQPSSLOGCLSUGCQYAFIVMDMQDTSSPEEAJUPNXQAOU");
    msg.description.assign("GSYYPOBENEGWZTMZNRREPCNJQDLOPFRHEGNNPUGAJHFGNFJJBHKRKCYIDJDMIUTAFLDALTPHUKQYOVQWSVQZQSOD");
    msg.leader_speed = 0.7842903061433122;
    msg.leader_bank_lim = 0.07675805127566604;
    msg.pos_sim_err_lim = 0.8899341618339445;
    msg.pos_sim_err_wrn = 0.4046711713885187;
    msg.pos_sim_err_timeout = 53304U;
    msg.converg_max = 0.3322721064538485;
    msg.converg_timeout = 63183U;
    msg.comms_timeout = 7648U;
    msg.turb_lim = 0.7040006737777352;
    msg.custom.assign("DUVDCECMZHIMYQOMVSDFGMZNHUNKKWWJNNOEJVPOQXYQVGHTYHNAKDDXRRTBZIUVJLRGKLYMHZSMMUSCAXUKHXHLPJYAIXGAURISVENQPZKRJLQILNNNTHGGEOREDIVL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.9643946157271901);
    msg.setSource(42191U);
    msg.setSourceEntity(192U);
    msg.setDestination(24152U);
    msg.setDestinationEntity(110U);
    msg.control_src = 38019U;
    msg.control_ent = 26U;
    msg.timeout = 0.42400582509266316;
    msg.loiter_radius = 0.7793351908242668;
    msg.altitude_interval = 0.9504305847772215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.3714613370544918);
    msg.setSource(29273U);
    msg.setSourceEntity(166U);
    msg.setDestination(13363U);
    msg.setDestinationEntity(37U);
    msg.control_src = 38667U;
    msg.control_ent = 65U;
    msg.timeout = 0.33732890362056966;
    msg.loiter_radius = 0.6039052849456398;
    msg.altitude_interval = 0.04163136522070232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.9808323211350511);
    msg.setSource(596U);
    msg.setSourceEntity(118U);
    msg.setDestination(44287U);
    msg.setDestinationEntity(192U);
    msg.control_src = 63730U;
    msg.control_ent = 59U;
    msg.timeout = 0.3943255516938734;
    msg.loiter_radius = 0.5874701948942899;
    msg.altitude_interval = 0.3748768820444912;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.002479284700614093);
    msg.setSource(29719U);
    msg.setSourceEntity(191U);
    msg.setDestination(20634U);
    msg.setDestinationEntity(70U);
    msg.flags = 104U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5121991352721917;
    tmp_msg_0.speed_units = 41U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7846587938331199;
    tmp_msg_1.z_units = 159U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7726053993219492;
    msg.lon = 0.7092545104237508;
    msg.radius = 0.12784848111242408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.6351088748696648);
    msg.setSource(28510U);
    msg.setSourceEntity(174U);
    msg.setDestination(19387U);
    msg.setDestinationEntity(185U);
    msg.flags = 34U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.314086661966016;
    tmp_msg_0.speed_units = 160U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8140875057586899;
    tmp_msg_1.z_units = 28U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2824636168846525;
    msg.lon = 0.0525944797237764;
    msg.radius = 0.16378176343220363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.5572417142757033);
    msg.setSource(4503U);
    msg.setSourceEntity(78U);
    msg.setDestination(13620U);
    msg.setDestinationEntity(3U);
    msg.flags = 206U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5963031054020155;
    tmp_msg_0.speed_units = 228U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9337394716722782;
    tmp_msg_1.z_units = 244U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8078254662899645;
    msg.lon = 0.5178638767383418;
    msg.radius = 0.20642642103568765;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.22308658232038114);
    msg.setSource(57490U);
    msg.setSourceEntity(227U);
    msg.setDestination(64466U);
    msg.setDestinationEntity(61U);
    msg.control_src = 17572U;
    msg.control_ent = 112U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 246U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.23044487067484398;
    tmp_tmp_msg_0_0.speed_units = 193U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.04489746684228468;
    tmp_tmp_msg_0_1.z_units = 187U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3395247140565121;
    tmp_msg_0.lon = 0.056265952836214383;
    tmp_msg_0.radius = 0.5652678592899062;
    msg.reference.set(tmp_msg_0);
    msg.state = 213U;
    msg.proximity = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.16797792292846692);
    msg.setSource(45640U);
    msg.setSourceEntity(154U);
    msg.setDestination(12499U);
    msg.setDestinationEntity(140U);
    msg.control_src = 44513U;
    msg.control_ent = 148U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 143U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.09577545200867643;
    tmp_tmp_msg_0_0.speed_units = 178U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7416988934506221;
    tmp_tmp_msg_0_1.z_units = 143U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8589438922683988;
    tmp_msg_0.lon = 0.6552409231312576;
    tmp_msg_0.radius = 0.36467035293352323;
    msg.reference.set(tmp_msg_0);
    msg.state = 180U;
    msg.proximity = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.5619805918209919);
    msg.setSource(43156U);
    msg.setSourceEntity(138U);
    msg.setDestination(30719U);
    msg.setDestinationEntity(51U);
    msg.control_src = 40383U;
    msg.control_ent = 55U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 127U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.971104560835137;
    tmp_tmp_msg_0_0.speed_units = 118U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.46988125502902167;
    tmp_tmp_msg_0_1.z_units = 68U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.1629185579002559;
    tmp_msg_0.lon = 0.29696985755479;
    tmp_msg_0.radius = 0.6147478692503227;
    msg.reference.set(tmp_msg_0);
    msg.state = 201U;
    msg.proximity = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.9575722548270934);
    msg.setSource(9963U);
    msg.setSourceEntity(208U);
    msg.setDestination(57544U);
    msg.setDestinationEntity(188U);
    msg.ax_cmd = 0.5143940289661816;
    msg.ay_cmd = 0.5526203326579259;
    msg.az_cmd = 0.3212016642798772;
    msg.ax_des = 0.2990563711179226;
    msg.ay_des = 0.9710971047491127;
    msg.az_des = 0.5171442019029928;
    msg.virt_err_x = 0.09166484133940289;
    msg.virt_err_y = 0.9596544136710934;
    msg.virt_err_z = 0.486107150490503;
    msg.surf_fdbk_x = 0.7447363714117184;
    msg.surf_fdbk_y = 0.38992513094436876;
    msg.surf_fdbk_z = 0.7966334415568188;
    msg.surf_unkn_x = 0.8529348447223647;
    msg.surf_unkn_y = 0.13679736720108748;
    msg.surf_unkn_z = 0.9264537370985599;
    msg.ss_x = 0.2728425454712151;
    msg.ss_y = 0.5890429442766579;
    msg.ss_z = 0.41508570794461097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.034162651618961815);
    msg.setSource(13505U);
    msg.setSourceEntity(210U);
    msg.setDestination(4436U);
    msg.setDestinationEntity(34U);
    msg.ax_cmd = 0.133483945091179;
    msg.ay_cmd = 0.49257925946015324;
    msg.az_cmd = 0.7355137498842825;
    msg.ax_des = 0.4053287824410695;
    msg.ay_des = 0.2816784292293565;
    msg.az_des = 0.8066643206817202;
    msg.virt_err_x = 0.20422266042989912;
    msg.virt_err_y = 0.996764327984436;
    msg.virt_err_z = 0.30162458702975625;
    msg.surf_fdbk_x = 0.299895153740772;
    msg.surf_fdbk_y = 0.3089550126257743;
    msg.surf_fdbk_z = 0.7108923723676356;
    msg.surf_unkn_x = 0.7327086825535468;
    msg.surf_unkn_y = 0.7705994027045503;
    msg.surf_unkn_z = 0.4836092370413293;
    msg.ss_x = 0.7821020911884028;
    msg.ss_y = 0.1113915718154862;
    msg.ss_z = 0.4128210423569403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.0768246733008785);
    msg.setSource(49801U);
    msg.setSourceEntity(191U);
    msg.setDestination(47144U);
    msg.setDestinationEntity(10U);
    msg.ax_cmd = 0.5847874145507337;
    msg.ay_cmd = 0.7031746450322367;
    msg.az_cmd = 0.7116379572431271;
    msg.ax_des = 0.8971015410805301;
    msg.ay_des = 0.5784618619399066;
    msg.az_des = 0.03438859891227941;
    msg.virt_err_x = 0.5521313487143275;
    msg.virt_err_y = 0.9336009722220819;
    msg.virt_err_z = 0.3672918109764305;
    msg.surf_fdbk_x = 0.30178254220175194;
    msg.surf_fdbk_y = 0.3286058116753421;
    msg.surf_fdbk_z = 0.47487064188594996;
    msg.surf_unkn_x = 0.4857920681189265;
    msg.surf_unkn_y = 0.730591027470006;
    msg.surf_unkn_z = 0.1162039220770964;
    msg.ss_x = 0.44289652877616703;
    msg.ss_y = 0.05378974957980254;
    msg.ss_z = 0.4401557140458924;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PPBRAXUZYWRNQPQDCOAHQXIGJCWIETRVAXSUTETFVRVQMBLZRMBWPBLXFXQLLHHVBKDEYNTYDFVENOMDJQCGMFWTOKDQCEMWFSJPYUGODBNYUTJNWSLKJAOASCHORGCKSMZZTJZEUNWGCHYDHZOLDCXFREVNMVAJCNKRFDPPIAGKWOVBVXTHYGGQIKEGPXFDEHUHYIVJJXORSBZAQIIPLCIZUFIRJKNLKSO");
    tmp_msg_0.dist = 0.030907452833629723;
    tmp_msg_0.err = 0.6185118224618017;
    tmp_msg_0.ctrl_imp = 0.9063071557965473;
    tmp_msg_0.rel_dir_x = 0.24111102518463756;
    tmp_msg_0.rel_dir_y = 0.37284188597168255;
    tmp_msg_0.rel_dir_z = 0.01880317432411882;
    tmp_msg_0.err_x = 0.10290893147248037;
    tmp_msg_0.err_y = 0.5079603332797247;
    tmp_msg_0.err_z = 0.1937000870082387;
    tmp_msg_0.rf_err_x = 0.5519154261250668;
    tmp_msg_0.rf_err_y = 0.3829685145852123;
    tmp_msg_0.rf_err_z = 0.694543552080262;
    tmp_msg_0.rf_err_vx = 0.22529753735837965;
    tmp_msg_0.rf_err_vy = 0.20663554430145525;
    tmp_msg_0.rf_err_vz = 0.3691778169038633;
    tmp_msg_0.ss_x = 0.6338072522435412;
    tmp_msg_0.ss_y = 0.015322284131115804;
    tmp_msg_0.ss_z = 0.568266057196951;
    tmp_msg_0.virt_err_x = 0.7163901977728759;
    tmp_msg_0.virt_err_y = 0.8450408558455184;
    tmp_msg_0.virt_err_z = 0.7520427933051603;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.46590668885421893);
    msg.setSource(24122U);
    msg.setSourceEntity(5U);
    msg.setDestination(29131U);
    msg.setDestinationEntity(196U);
    msg.s_id.assign("FEXUVYKUUOXNLIINBVPWKTFXCFGQQBOJMVDCETHPHSNMSLGDNUOUAAKIZNEGRCZUZFWSSDCKEQHDYGPCSHETVLJQDACBDYQLFILXCSUYAPOWMBEZHTNGXXPQXLLYOIGCJWCRDZTDIKFJGNLEMSETTRIHBZYIVIJLSTKAUHRMOMRKYBWVBFFIYGRBOHXMKDZUJRREWOHJAD");
    msg.dist = 0.47177395912551534;
    msg.err = 0.5819866236261938;
    msg.ctrl_imp = 0.944075406271666;
    msg.rel_dir_x = 0.6950406949734912;
    msg.rel_dir_y = 0.3026154770588867;
    msg.rel_dir_z = 0.5196989080488269;
    msg.err_x = 0.2975960623823811;
    msg.err_y = 0.17033588960839174;
    msg.err_z = 0.5454207786377224;
    msg.rf_err_x = 0.5177041730580959;
    msg.rf_err_y = 0.28986918863322053;
    msg.rf_err_z = 0.9125920073221478;
    msg.rf_err_vx = 0.039828388562270334;
    msg.rf_err_vy = 0.8561519141386669;
    msg.rf_err_vz = 0.6456636709885092;
    msg.ss_x = 0.5271478939625942;
    msg.ss_y = 0.10694200739517312;
    msg.ss_z = 0.4425032951250941;
    msg.virt_err_x = 0.25326184104058946;
    msg.virt_err_y = 0.6675739422349601;
    msg.virt_err_z = 0.9343813658943391;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.8524516993654385);
    msg.setSource(47151U);
    msg.setSourceEntity(92U);
    msg.setDestination(10302U);
    msg.setDestinationEntity(103U);
    msg.s_id.assign("CZGRLQVQOAEKHBWXLZBRBGOMTZXOSJZAUYWIWVIPQOINRTJRYFGEFEUHXNGADDOUOVGYEWWNRMPSVYXLWAUPZCMTHFDVIWFLTCKYMBDNXNICFTAEKJMHSQDSYHCPYBSQBNCNXPGCE");
    msg.dist = 0.055614997087998996;
    msg.err = 0.7686286148067984;
    msg.ctrl_imp = 0.8296387942858995;
    msg.rel_dir_x = 0.4768467102928857;
    msg.rel_dir_y = 0.902146093162791;
    msg.rel_dir_z = 0.24935776374796548;
    msg.err_x = 0.5439861041317157;
    msg.err_y = 0.9177898026916094;
    msg.err_z = 0.7301069039232384;
    msg.rf_err_x = 0.9303014979602853;
    msg.rf_err_y = 0.7641268960709354;
    msg.rf_err_z = 0.4945980902081023;
    msg.rf_err_vx = 0.2947390052816168;
    msg.rf_err_vy = 0.719422065929516;
    msg.rf_err_vz = 0.15290727359074419;
    msg.ss_x = 0.7401366163149588;
    msg.ss_y = 0.4409910684488242;
    msg.ss_z = 0.9035308878410805;
    msg.virt_err_x = 0.428556742080647;
    msg.virt_err_y = 0.4449277278452436;
    msg.virt_err_z = 0.509093567367212;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.8974470128574668);
    msg.setSource(40212U);
    msg.setSourceEntity(160U);
    msg.setDestination(48980U);
    msg.setDestinationEntity(131U);
    msg.s_id.assign("SOJBTBXZLMHHBWNVPEXCSRLQCYZEYOSDHTQCQLOELZTIOUISBAREWSCQAAMKHWTTANPQGKTYVTJADYEHKBUTCGZWC");
    msg.dist = 0.7512869558462991;
    msg.err = 0.5447682199838876;
    msg.ctrl_imp = 0.7794592805310219;
    msg.rel_dir_x = 0.8706359161296535;
    msg.rel_dir_y = 0.9376435516911439;
    msg.rel_dir_z = 0.9938163164768979;
    msg.err_x = 0.8795887915524967;
    msg.err_y = 0.7893521188738455;
    msg.err_z = 0.52944441729155;
    msg.rf_err_x = 0.21429399676359728;
    msg.rf_err_y = 0.6785038009242477;
    msg.rf_err_z = 0.07433858336233057;
    msg.rf_err_vx = 0.7205322933226428;
    msg.rf_err_vy = 0.3070162686329938;
    msg.rf_err_vz = 0.9032788946983413;
    msg.ss_x = 0.9749234848082942;
    msg.ss_y = 0.22907285803514277;
    msg.ss_z = 0.7918644943151041;
    msg.virt_err_x = 0.6934186768163481;
    msg.virt_err_y = 0.5428795009851152;
    msg.virt_err_z = 0.14483166474895892;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.37723626380049);
    msg.setSource(4786U);
    msg.setSourceEntity(30U);
    msg.setDestination(47128U);
    msg.setDestinationEntity(239U);
    msg.timeout = 59173U;
    msg.rpm = 0.9808549833808522;
    msg.direction = 212U;
    msg.custom.assign("RYYTUOMLHPNNFQIWORXPSTBMJSGHNBFZXHSGKOWPNAN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.5080409828094494);
    msg.setSource(46414U);
    msg.setSourceEntity(184U);
    msg.setDestination(56799U);
    msg.setDestinationEntity(132U);
    msg.timeout = 57872U;
    msg.rpm = 0.90377978092606;
    msg.direction = 18U;
    msg.custom.assign("IVGSHLBEEQPVATXVOHYWARMQBOELRCPYTJDMCQTGCDYPKXKMHZIODERTJHLYKOEKHZYKJLZWHKEUZWUZGRQQSPMMGVZGRODFPGJUFXVUQCFMHRGBFDIKGQMSVRNHDMTJQWPRNAEIVLWAAUNDGAXPYUVXWIQPNAJQFVZYOKNWYOUCUKFLFIIOFEGDSMBNBETPYBXHKBSWETWWAFNPT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.15444098174480503);
    msg.setSource(61642U);
    msg.setSourceEntity(23U);
    msg.setDestination(2972U);
    msg.setDestinationEntity(61U);
    msg.timeout = 19504U;
    msg.rpm = 0.6714449196007095;
    msg.direction = 210U;
    msg.custom.assign("QCYEKAVWNHDTBWWKHHZKIGJDFSBKSYJADMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.8800457713131331);
    msg.setSource(15407U);
    msg.setSourceEntity(130U);
    msg.setDestination(42533U);
    msg.setDestinationEntity(177U);
    msg.formation_name.assign("TLJPWNEUDHAPUCNLRPQPJXPCDGWORJSAVMDUQEEKOGOJKMVJLDTCEMFFTGGZWZLBSQPBMQFIJSBLWTZNFYEUXHYIWRHCIZCSGXLKISVHHFLORSTBWRBZETZYVJAUSLTMNXWNSNEJKCFZIDDYXQAGLXXFCAKKFRGDHXORHZVMTYBGMGNYACFYAKGROPSIMVUACAZNCYWYLVKUQNHARPKPRIO");
    msg.type = 193U;
    msg.op = 101U;
    msg.group_name.assign("AFLMEDGGRBWYUMDINRVOLTOWPEWQPOHYHWJXJGVCTRIGNICJWSTITEGLZJKUGEJYDBHVUMZZEVNIARCKNMXQAUKTXZCRJHFRKUWOQHVXJUGPHFFNXMZUSNVBKYLLZOMKBE");
    msg.plan_id.assign("DJTDPLKZJZSFRCMPGOURVWEGGLXRXJOELAHZFPRRJWCDHGHLWLHEMFCVULBTPTWMNCWMSEKOKIDCQLXQEYMATYBNLZHCRQTDXRKXLBBISSMCDUKQVJXETVBNAZTKYARUIEXZ");
    msg.description.assign("VGFFVFYIIASNGLJZQEHFNKOFCYTRWSAZAOELBMUUNMTWUCUNSECESFDBGPVZLPJJUNAPMEFMVJUILAIKZZQKBRNBIILDDCFPGBYAOWJTADCSRPTQXIZMVPZWMJMXQKOVFYKPTJHR");
    msg.reference_frame = 49U;
    msg.leader_bank_lim = 0.6288694445914386;
    msg.leader_speed_min = 0.24859665200974113;
    msg.leader_speed_max = 0.20815061836375404;
    msg.leader_alt_min = 0.6683029023176817;
    msg.leader_alt_max = 0.22613183378573176;
    msg.pos_sim_err_lim = 0.5396491994731893;
    msg.pos_sim_err_wrn = 0.7485224837841182;
    msg.pos_sim_err_timeout = 34899U;
    msg.converg_max = 0.8050533548860819;
    msg.converg_timeout = 53135U;
    msg.comms_timeout = 28329U;
    msg.turb_lim = 0.2952539304218974;
    msg.custom.assign("JOCEWHGOEZKFEFMDWHYRQIJNKBXDTIGUGMNNCOBAGRWJFMUKPVBWJAKMQTKCAEXEJOYINSRLXNYGTQRZHWUTWDDMQZVOVZLANBUDGSFTQYXAICKFOSKJZFOROXEYQCQFVBSMEJERYPCPDCUDSQRYBPALHGFRHLSKGPPTVCNDLEVXDJPAOMJFUVNQQWUKNBWXBXAVIHSATMITVIIHJWLWGYKLPBUEHMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.6102189657340634);
    msg.setSource(42624U);
    msg.setSourceEntity(230U);
    msg.setDestination(42464U);
    msg.setDestinationEntity(58U);
    msg.formation_name.assign("PEMSTZYNCVOWJKJEPHQCKBJCKEJSL");
    msg.type = 97U;
    msg.op = 72U;
    msg.group_name.assign("VKOLNPEFTSNMMCDULBGFVJPDZOLQKKPNXCBRYPTKHSVIBHHIDCVBGAHGMMCWJLUNDNXNUGSCZDSEFQSJVOHXQKUZFMFHUGISIEZABBYXMTAYGRDIIQWYPN");
    msg.plan_id.assign("RZZFMBIJOXFMFGUASGVOOLWKECURKBRVXXKWURQORBZAKFYE");
    msg.description.assign("SNIVRXOXYPMHAQIDHKZNNDQEFOBOKGMAIEJXPLABWAGBEPZRO");
    msg.reference_frame = 104U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29576U;
    tmp_msg_0.off_x = 0.2737732322009694;
    tmp_msg_0.off_y = 0.33462824475956976;
    tmp_msg_0.off_z = 0.9449543722781435;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.09725803461076232;
    msg.leader_speed_min = 0.8844864233611558;
    msg.leader_speed_max = 0.5954714011712139;
    msg.leader_alt_min = 0.046739527212466214;
    msg.leader_alt_max = 0.7905438642207173;
    msg.pos_sim_err_lim = 0.9372180012534346;
    msg.pos_sim_err_wrn = 0.20005878063006866;
    msg.pos_sim_err_timeout = 38105U;
    msg.converg_max = 0.5662307075444484;
    msg.converg_timeout = 3962U;
    msg.comms_timeout = 26311U;
    msg.turb_lim = 0.03548432489074649;
    msg.custom.assign("LKVCRWEIBPXTLRTKXGUHIBNJKDKGECZJHKWBHPKSLESOJTTXSNSYKAWXJABUJSG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.13811099470555976);
    msg.setSource(5811U);
    msg.setSourceEntity(187U);
    msg.setDestination(55115U);
    msg.setDestinationEntity(39U);
    msg.formation_name.assign("KOUSBJZKXYAFAWIYIDCAXIKNGUYOIDHZJQGXEVQ");
    msg.type = 197U;
    msg.op = 211U;
    msg.group_name.assign("ZQLNOSJWHBEMIUZRGHCLMFOMXHTS");
    msg.plan_id.assign("SKNHYXQDAFFFZGDVMQOMCLODZWJTIMAELHWLNPIXISWWOWJYNPVFYHXQISZUXXRA");
    msg.description.assign("YCVNMTYCRVRLKLPCUGWZSJRRIBWLARXOEJMPNBQFQOHOXXWGNAWAPTQEYMAAEHMMNTRNDFIFBOYUCVEMLVYKQLUDIFXUSHEUHDTAQITZSUFBRZHWQMOHZZQJAOZWBHBMGIXSXAJJSIJALTVWWHGCWMYVKZTSKRCKGUOJPPMTADTFDFKWCVEHSBDXBPOSXN");
    msg.reference_frame = 147U;
    msg.leader_bank_lim = 0.26076572318238334;
    msg.leader_speed_min = 0.9668287458196612;
    msg.leader_speed_max = 0.6397684878570085;
    msg.leader_alt_min = 0.5500170490344065;
    msg.leader_alt_max = 0.6118631401018519;
    msg.pos_sim_err_lim = 0.8930766627085148;
    msg.pos_sim_err_wrn = 0.4052049354456424;
    msg.pos_sim_err_timeout = 17341U;
    msg.converg_max = 0.31042725396481097;
    msg.converg_timeout = 12852U;
    msg.comms_timeout = 42763U;
    msg.turb_lim = 0.8833002325717311;
    msg.custom.assign("INBTUMECECYYTBSXGZTAEUULHBGPGCUZNHRKGPUGZICDMGCAXWWNEPOQJZLLIQKUYQKXDTFWMGLCSGJQHNJRMVFPEYYKHODFCNDIKJBBSGVPBHOJLQAOTSEVOUWXJSSKTWNYTBOAPKZJVTITATAQDZWNPIDSEWUMMBAKFRVZDMHQFPXJFSNHKRXFWHCIUVXXUMJVYQARL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.869599686063383);
    msg.setSource(54505U);
    msg.setSourceEntity(77U);
    msg.setDestination(10938U);
    msg.setDestinationEntity(110U);
    msg.timeout = 2710U;
    msg.lat = 0.2615716628503876;
    msg.lon = 0.30006965674520536;
    msg.z = 0.09477362837312786;
    msg.z_units = 102U;
    msg.speed = 0.4690797063471519;
    msg.speed_units = 138U;
    msg.custom.assign("KVWEJOUIXMAMOQLCSMDJLJNBAVLDWHEBSYAJRTBQWUWGKFYSTFUYQNXUXJRQKQSILVFBLSBOFOLIICJXVTUTCWGZZCASOXQZGMHJRUZXBKUITMHNGOMNUVYQPAWEIWGCEUIRPEEDBHYLRXSRFKMDTZJDNHNSKPAOWZRCMXMYIYLNTVDKVSCUKSIQBOZHANGPPFFYDEJVLFOPGJGETGACZHDWLZNKOBPARNYFKPETQDHVHFCEGRXDBVTMXRCPWH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.43471649956020575);
    msg.setSource(45903U);
    msg.setSourceEntity(7U);
    msg.setDestination(36757U);
    msg.setDestinationEntity(89U);
    msg.timeout = 40624U;
    msg.lat = 0.4496552865556729;
    msg.lon = 0.35172967499692664;
    msg.z = 0.09265844785048416;
    msg.z_units = 65U;
    msg.speed = 0.3640919659198488;
    msg.speed_units = 185U;
    msg.custom.assign("CVIYKANPDZEOZEMAEXRNMZNDSJLVEDZPCTKQSQPRBBBHXEGKHATXJCIORNOWPWJXXQIIDFTTPOFBBCSVHDXAPDHRQAGFHXTMTUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.16554818147365968);
    msg.setSource(44047U);
    msg.setSourceEntity(212U);
    msg.setDestination(24209U);
    msg.setDestinationEntity(89U);
    msg.timeout = 25491U;
    msg.lat = 0.21008814653853836;
    msg.lon = 0.5785692382618329;
    msg.z = 0.6310572786748324;
    msg.z_units = 21U;
    msg.speed = 0.8609665282847028;
    msg.speed_units = 29U;
    msg.custom.assign("OOMGZGRMCYGNZSSAPJAPTSGREDVRQBULZP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.48141200830178354);
    msg.setSource(43927U);
    msg.setSourceEntity(173U);
    msg.setDestination(15595U);
    msg.setDestinationEntity(221U);
    msg.timeout = 1157U;
    msg.lat = 0.5967927027975586;
    msg.lon = 0.26174805332528783;
    msg.z = 0.8028631193020218;
    msg.z_units = 150U;
    msg.speed = 0.3836724343974768;
    msg.speed_units = 158U;
    msg.custom.assign("LQYQKLRIWYPIYTFGQTGOFCGAZLHEXLCTYYMTUFFIMVZLTIDPWFJHLCZHEWVBPVBPCKLQOOVAIPQEUJMFRABU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.9327064887043558);
    msg.setSource(23198U);
    msg.setSourceEntity(233U);
    msg.setDestination(31167U);
    msg.setDestinationEntity(161U);
    msg.timeout = 29070U;
    msg.lat = 0.5843939113175077;
    msg.lon = 0.5693471226094348;
    msg.z = 0.5973975007086226;
    msg.z_units = 23U;
    msg.speed = 0.9014847201484519;
    msg.speed_units = 72U;
    msg.custom.assign("BVJKYXXZIOIPXVOUFNIYSNLCCDMVCNTGRCAHVAQMZZUPWNKYPNQQVZIZEEWYPGDLNKKIQZEXLEKHDKGJNODXJZJODHMFMHJZJASFBAYQYRLCMSRMZFGLCDVHQIWWPBTMRSESCXNEPJAUSJDOSDTYBGROESYYFNRATCMZLBQHJXDHBKKGHWQCFDXGWLGTRBAITLUWPKUPQTVUAVHOAXRVIRHWKFFLMBOUUPAYGUMQOWSEOFPUSBTETTBJXEIWFV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.7241991129366877);
    msg.setSource(9946U);
    msg.setSourceEntity(153U);
    msg.setDestination(57217U);
    msg.setDestinationEntity(139U);
    msg.timeout = 8782U;
    msg.lat = 0.4275508878547304;
    msg.lon = 0.800334144094645;
    msg.z = 0.27566800280022496;
    msg.z_units = 57U;
    msg.speed = 0.3569192446534153;
    msg.speed_units = 211U;
    msg.custom.assign("YNMZSFHOVFRVSBWGKHZUFDBJVEOVRCARCPBGGLXIJOAOTDVLFCXDBPRGDLACWEUDGGPCPISZHWSLLVQTMWDABXKPTJOBHQFFTTREEIUIWYHGOBNGPYKWIAEKXOHXVBJYTPJFUYKCRXVOIPQXLMQNTU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.3040193874420194);
    msg.setSource(475U);
    msg.setSourceEntity(130U);
    msg.setDestination(14744U);
    msg.setDestinationEntity(106U);
    msg.arrival_time = 0.31008454499782045;
    msg.lat = 0.4760475897386872;
    msg.lon = 0.2269887781689207;
    msg.z = 0.2688969025936736;
    msg.z_units = 105U;
    msg.travel_z = 0.2565787006682937;
    msg.travel_z_units = 122U;
    msg.delayed = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.8052432751666353);
    msg.setSource(60193U);
    msg.setSourceEntity(54U);
    msg.setDestination(2195U);
    msg.setDestinationEntity(159U);
    msg.arrival_time = 0.3573486505236374;
    msg.lat = 0.8421205686195767;
    msg.lon = 0.7320779580791463;
    msg.z = 0.679624622462639;
    msg.z_units = 16U;
    msg.travel_z = 0.677141896441149;
    msg.travel_z_units = 11U;
    msg.delayed = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.10296428762236687);
    msg.setSource(25927U);
    msg.setSourceEntity(66U);
    msg.setDestination(33112U);
    msg.setDestinationEntity(120U);
    msg.arrival_time = 0.04171218501016094;
    msg.lat = 0.51266808947304;
    msg.lon = 0.9617776427234739;
    msg.z = 0.673976080768552;
    msg.z_units = 92U;
    msg.travel_z = 0.654105113516121;
    msg.travel_z_units = 40U;
    msg.delayed = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.7308467627423656);
    msg.setSource(16556U);
    msg.setSourceEntity(223U);
    msg.setDestination(55178U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.883001949500968;
    msg.lon = 0.3070860891448751;
    msg.z = 0.8044921134928241;
    msg.z_units = 61U;
    msg.speed = 0.17040592561799872;
    msg.speed_units = 18U;
    msg.bearing = 0.02983594922620625;
    msg.cross_angle = 0.5098747301685858;
    msg.width = 0.1344605888773096;
    msg.length = 0.0758030258944149;
    msg.coff = 23U;
    msg.angaperture = 0.683235996311016;
    msg.range = 48188U;
    msg.overlap = 196U;
    msg.flags = 147U;
    msg.custom.assign("LLKGRXGFGVDIYZSNWTKCTHUMHVCUCEQUWFHSBXXHJJJYTXPLLDVEPOTDIQIZYJQDSDGNLEQCJPQYBHDWBMHTSGXATDCRNWYUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.7722386659984459);
    msg.setSource(3769U);
    msg.setSourceEntity(113U);
    msg.setDestination(44387U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.3750012436438548;
    msg.lon = 0.8380034612667678;
    msg.z = 0.7313211538783944;
    msg.z_units = 76U;
    msg.speed = 0.870484355365789;
    msg.speed_units = 18U;
    msg.bearing = 0.1724103604337689;
    msg.cross_angle = 0.43598994237617805;
    msg.width = 0.9616248634715698;
    msg.length = 0.8674410326803703;
    msg.coff = 17U;
    msg.angaperture = 0.8477619679606739;
    msg.range = 31256U;
    msg.overlap = 254U;
    msg.flags = 86U;
    msg.custom.assign("GMAPSZOSRIPQTMEPKSWKLQZFPPVUBXGRVBUEQHDDWISIFKYJHICYLXFVSFCQOMNYNJLCCSJMGZJGZTGRE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.5016746045598056);
    msg.setSource(48733U);
    msg.setSourceEntity(75U);
    msg.setDestination(54499U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.06538943724673352;
    msg.lon = 0.1912535068324671;
    msg.z = 0.33621798610044473;
    msg.z_units = 149U;
    msg.speed = 0.5790132437036575;
    msg.speed_units = 47U;
    msg.bearing = 0.6998434474140547;
    msg.cross_angle = 0.34547538182382154;
    msg.width = 0.40979388368755865;
    msg.length = 0.16798623224101705;
    msg.coff = 168U;
    msg.angaperture = 0.022496609091931852;
    msg.range = 34724U;
    msg.overlap = 213U;
    msg.flags = 226U;
    msg.custom.assign("CURXZRQEXGJOZFQRUHLAYDGCRTVABTLATUALMOFETIKSXACTWSQLUHENHFFJORIFKPLNGDPBRHFYXINQWESZYNCTAXGCOHJZCXSWFLYOTGYIEWXHSOCUJYABNNJMEMJYZWMJXIOKDMNVDKCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.7583460430526815);
    msg.setSource(62710U);
    msg.setSourceEntity(121U);
    msg.setDestination(12358U);
    msg.setDestinationEntity(217U);
    msg.timeout = 13760U;
    msg.lat = 0.4917790987291355;
    msg.lon = 0.4696826891406647;
    msg.z = 0.9790081173640286;
    msg.z_units = 62U;
    msg.speed = 0.9385312312955196;
    msg.speed_units = 71U;
    msg.syringe0 = 25U;
    msg.syringe1 = 42U;
    msg.syringe2 = 122U;
    msg.custom.assign("KEQFVUVSZFKRBANWEOSUOIYEXDOOKOXGJPMCRFTKNRXGAYMBZANMQEGSGNDPRUTWIQNLZGITMZXKAZUDFLELCUDZWJPVUCLLDIFHTESLFHXDRTYLESXBRTEHATKFQFUMDOVGEGHNZMVBQPJQOEJYWCFBWZVIYBKTIJGIPJOPPQOXPVHPGCSWBWKYBJHCJCGNDWBCXRADAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.6545443783626256);
    msg.setSource(65237U);
    msg.setSourceEntity(209U);
    msg.setDestination(34696U);
    msg.setDestinationEntity(208U);
    msg.timeout = 6151U;
    msg.lat = 0.6601293658527588;
    msg.lon = 0.052466671405248966;
    msg.z = 0.5465327245168339;
    msg.z_units = 137U;
    msg.speed = 0.5283668739126011;
    msg.speed_units = 91U;
    msg.syringe0 = 221U;
    msg.syringe1 = 52U;
    msg.syringe2 = 40U;
    msg.custom.assign("AZCFMKKGQJSRLAUZANGVJRHLPRWZXNGFHRVIYPADYURQKKLGHBPUWCZZVEQYLNGRZFNGQJBFAJRBSIJVDJPLQTJSKBAEZUXDYXXWIAMVTMZNNONFTTIYMSBCACHSWXDELMZLOYBUWWCNMXWFLBSFKHLKIEHEHWQODGJIVWEYPMQDMCACIHBUKXCASYVFPYBMZTPQOGEDSITHUCKCYVTOUOHLRTVXBDQEIPNXJUGIPQROMEUNTGSFWDXO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.8687626839894842);
    msg.setSource(13940U);
    msg.setSourceEntity(23U);
    msg.setDestination(37180U);
    msg.setDestinationEntity(125U);
    msg.timeout = 47282U;
    msg.lat = 0.7225362259808705;
    msg.lon = 0.21142562943985221;
    msg.z = 0.7493751802055575;
    msg.z_units = 66U;
    msg.speed = 0.3432640857907936;
    msg.speed_units = 23U;
    msg.syringe0 = 220U;
    msg.syringe1 = 230U;
    msg.syringe2 = 192U;
    msg.custom.assign("UJJYTIROGQPEYXLJGIRSEIFQZLOQPTJPRHEMLRPCDZHCEAQLVXYGXMCBMKMNVAOYNWGUBCNKPDYWIZHOWABRCLEUNQEBAVJIHKPVVHSYKJSTIHUYMUHNJADHIWVKPSLVCAGWLLFUXBTPIWXDEFJRTYASRXYWVBGFSPSMITDCO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.6428952434502311);
    msg.setSource(41276U);
    msg.setSourceEntity(152U);
    msg.setDestination(48506U);
    msg.setDestinationEntity(66U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.48940904831010545);
    msg.setSource(29888U);
    msg.setSourceEntity(252U);
    msg.setDestination(41479U);
    msg.setDestinationEntity(222U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.5108479040456715);
    msg.setSource(3257U);
    msg.setSourceEntity(118U);
    msg.setDestination(719U);
    msg.setDestinationEntity(117U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.7738231070462918);
    msg.setSource(8379U);
    msg.setSourceEntity(169U);
    msg.setDestination(2133U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.992673800115044;
    msg.lon = 0.5834385753021528;
    msg.z = 0.6002965641307249;
    msg.z_units = 75U;
    msg.speed = 0.11642405064490535;
    msg.speed_units = 114U;
    msg.takeoff_pitch = 0.5133197209879438;
    msg.custom.assign("XBWZKZDYFGQPBJWUEISNSQFVNVCCWRFYXMYQQGFTAAUCNBJQXOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.49010615773052324);
    msg.setSource(41375U);
    msg.setSourceEntity(41U);
    msg.setDestination(26640U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.11076849450012982;
    msg.lon = 0.1927080182755091;
    msg.z = 0.17770784911567872;
    msg.z_units = 181U;
    msg.speed = 0.41263968213545954;
    msg.speed_units = 109U;
    msg.takeoff_pitch = 0.268473064180311;
    msg.custom.assign("RLSDWQUFNDFWAZPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.3336820104079997);
    msg.setSource(34089U);
    msg.setSourceEntity(227U);
    msg.setDestination(62782U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.3382318882635391;
    msg.lon = 0.47263442264087896;
    msg.z = 0.9280241896069178;
    msg.z_units = 7U;
    msg.speed = 0.869025681714059;
    msg.speed_units = 163U;
    msg.takeoff_pitch = 0.060191111646361706;
    msg.custom.assign("HXDCHHJJHIUKLEARUJGFTLMDAUAKGBQGYVULWAZGTMSFXNXXWDUYHWPBNJNXFTHOTVYSEOWWLWRRPOCNSXDURIPEVTDCQBROIXIXWSNWBZSSI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.9405547113066027);
    msg.setSource(25980U);
    msg.setSourceEntity(187U);
    msg.setDestination(20269U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.6957239175545636;
    msg.lon = 0.31410615483912374;
    msg.z = 0.8734405184985616;
    msg.z_units = 141U;
    msg.speed = 0.8377711206244168;
    msg.speed_units = 230U;
    msg.abort_z = 0.7720806634225845;
    msg.bearing = 0.16521658882227408;
    msg.glide_slope = 12U;
    msg.glide_slope_alt = 0.6932737012283752;
    msg.custom.assign("BYYMFJGMIVWWCEVZWNBCGASCTDZHISWFFEBDIJAARGULUQRMOTEXOXGPTILEZVXZFZQPFVSYXMJPNENNLIUBZGQKNLPCUUNVUQQDPSKZJYYCGBNFAGOMTOSOGDDHMHRVRKLKHZVZQEGJBHRHYCPWFBLBIMHWHTXLKELMRICRADLDOIAKSURWDKPJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.06443177448222148);
    msg.setSource(12885U);
    msg.setSourceEntity(101U);
    msg.setDestination(35433U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.9850221855672565;
    msg.lon = 0.1379935521648754;
    msg.z = 0.1588119636824955;
    msg.z_units = 174U;
    msg.speed = 0.5305964889751003;
    msg.speed_units = 35U;
    msg.abort_z = 0.9845122362201797;
    msg.bearing = 0.5268764923714104;
    msg.glide_slope = 144U;
    msg.glide_slope_alt = 0.6483592213106711;
    msg.custom.assign("OBWQMBBKVDHJCWQLLMFEPRYKICDWSZPTUFGSRQMYCOAHAVVNZUICMZSYLDLTBEGNPJZRTJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.8284889309449335);
    msg.setSource(56379U);
    msg.setSourceEntity(12U);
    msg.setDestination(31080U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.6103923582072774;
    msg.lon = 0.4480821379230401;
    msg.z = 0.1112128827658464;
    msg.z_units = 72U;
    msg.speed = 0.05036558016011805;
    msg.speed_units = 179U;
    msg.abort_z = 0.46942546883109737;
    msg.bearing = 0.31812577237117234;
    msg.glide_slope = 105U;
    msg.glide_slope_alt = 0.3366585128414058;
    msg.custom.assign("BSBCAMHSGRNWRIOQOSVLXEYPKZDEDACQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.3614801655805613);
    msg.setSource(60966U);
    msg.setSourceEntity(54U);
    msg.setDestination(62176U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.11594015759372045;
    msg.lon = 0.34132670934486886;
    msg.speed = 0.6559395415030387;
    msg.speed_units = 158U;
    msg.limits = 54U;
    msg.max_depth = 0.657333683253324;
    msg.min_alt = 0.031379321530108695;
    msg.time_limit = 0.2510441423135086;
    msg.controller.assign("NLBJZSSNWMEYCAHJLJKOAMME");
    msg.custom.assign("SSUUJZRXCJQRPSJEJZAJDAFMBJVKSGEPEYMAEYDKVOSBTCBPIWJYPVXTODNURULVXFNCKREUOTFBLXTDIPLTGKZKQKIFMHEUWYOCFQRACIGRUVWJBNDHMJNRPDNRLHZTGYMQTWHBZSIHKMUVJYGQSXLLCUKIBFVHKMRIMAAWMGBXZCWCLODPCWQZYWQEGYOHXRNADLVDDOSHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.11631348687596921);
    msg.setSource(61769U);
    msg.setSourceEntity(207U);
    msg.setDestination(27733U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.5751756172323378;
    msg.lon = 0.41082153084893125;
    msg.speed = 0.6470238942776587;
    msg.speed_units = 53U;
    msg.limits = 2U;
    msg.max_depth = 0.6070298362868872;
    msg.min_alt = 0.11941342744608141;
    msg.time_limit = 0.07232493571088161;
    msg.controller.assign("SDKHHOBBBVVREVWQFSPRWIAGNATDWSTLXZFGPRXYQJPASPHBGMUPJTVKMEOHJCSOLCUMDXCMFJIVWFPIJZUUIFLIHISI");
    msg.custom.assign("ELXUTLHEAFUMMEIYAUEOWFKWAPLFQGDHTXGQNUEBXEYYNCRJVCXJZZDLGARWKHHISLZCZRVGHCCDGCOVUMZHWIYRIEMBIJDYMZNQFKYLTKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.3362541025947714);
    msg.setSource(4728U);
    msg.setSourceEntity(237U);
    msg.setDestination(49677U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.18027067936360697;
    msg.lon = 0.4669648508102483;
    msg.speed = 0.30746740130898476;
    msg.speed_units = 64U;
    msg.limits = 246U;
    msg.max_depth = 0.5340851741317486;
    msg.min_alt = 0.3312928299217952;
    msg.time_limit = 0.6870622670916539;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3147126231579076;
    tmp_msg_0.lon = 0.26002999451410025;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("OYAACOIMNTICGAJKZYJDSQYBGRYLOXMFXMNUOKHNQUCTJEBXOFCNDQKCWIOHQQLPMSXFEQDGAGRWUVDCLDHHEVRLPZTPNOMZFYZRIQKAUSIVFLPWMOXMVTEOUUNBWAS");
    msg.custom.assign("BQATNVIUDRPKUWZUPYPKRYMMODWKPLDSAGBRUDIETWCXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.641226543325732);
    msg.setSource(63845U);
    msg.setSourceEntity(237U);
    msg.setDestination(13509U);
    msg.setDestinationEntity(77U);
    msg.target.assign("KCSCQOOFCXDNSUKEURTIRKSZWLDEIFJPTDPJZWHVPSMUYUSFKXFWLQGWYIKRHEPIIYWNBVMOTJMOSKNFLMWIVJHAE");
    msg.max_speed = 0.9522512172433083;
    msg.speed_units = 220U;
    msg.lat = 0.6441961415133373;
    msg.lon = 0.41055044199858914;
    msg.z = 0.38486276506270123;
    msg.z_units = 68U;
    msg.custom.assign("FOVLCNIWTLKRXOUKEANTNQFBPZEHSHRINOKRNQEXIXOBZCUYETVFWRXMSMSUZDZIBPPHEWFUXEUGXDVROJYWZHGRSSRCLLDACOGVQBQPYXEELZLDHMJCMTRTQDBOHGHIVTAEMALWLGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.7335211740466354);
    msg.setSource(18999U);
    msg.setSourceEntity(207U);
    msg.setDestination(62454U);
    msg.setDestinationEntity(61U);
    msg.target.assign("BNSBGXMOMGEPOASXYJIQKFTSCCDZYBXQLFIWGJJPCYQHKYBVSEHAJITNUNYXEWMYRZRFZWTXJNHFMWHNCNFNTANGPHIJLXAUWPBAOXZS");
    msg.max_speed = 0.4566122906557336;
    msg.speed_units = 199U;
    msg.lat = 0.04371862282687533;
    msg.lon = 0.8983835877333586;
    msg.z = 0.06077376657787881;
    msg.z_units = 142U;
    msg.custom.assign("CPVBPZPVQWOEWOBJGYVJVXTUMHTKRQZFLYSUIGZFKCUTAPGRMHSNCQBZTSMLUMLZYQGZTKWNPFTNJSNIUUGWODEDPYFUXNFUNHQDQFXPEYOUKOKXOSXVDATWTDVPLWYITIFHIGEYKHZLCKQNDBHAMLLJGALZEVJWCPMANRGIORICCCIPJQNWRHOQBNIERJZVKJRMJLFBWXGGOLKWE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.7122963198416001);
    msg.setSource(19559U);
    msg.setSourceEntity(205U);
    msg.setDestination(61182U);
    msg.setDestinationEntity(54U);
    msg.target.assign("SWJFLRLCWHJLWJWPRYGYSPIJPCEOGPGXJYJHHDDEKXUUMEWAQERMJBYQXFLXEIGLGWOYIUPMDEZKOBVZQFFLPAAAQEYIMVKTNRWGTKBBLCCQTY");
    msg.max_speed = 0.28906473447844816;
    msg.speed_units = 140U;
    msg.lat = 0.31909177777982467;
    msg.lon = 0.16227462725068564;
    msg.z = 0.31331993090383814;
    msg.z_units = 220U;
    msg.custom.assign("SZEDBIQNYQZTJBOKXIEUWXFEKYGKVEYMHPOPHAQCTRNUILJKHASQKIUSLXNANEFOTJLDQGRYNDPBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.9242712286830341);
    msg.setSource(48869U);
    msg.setSourceEntity(132U);
    msg.setDestination(11651U);
    msg.setDestinationEntity(190U);
    msg.timeout = 38483U;
    msg.lat = 0.3366039996038368;
    msg.lon = 0.4199588034755296;
    msg.speed = 0.5904036303087085;
    msg.speed_units = 230U;
    msg.custom.assign("LKNJWMEQCURKWTWYDVPAYRPZUGIGJSSJKCNEMBOLGLSXQMPWJFVEUBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.8315406687982496);
    msg.setSource(36733U);
    msg.setSourceEntity(227U);
    msg.setDestination(4282U);
    msg.setDestinationEntity(184U);
    msg.timeout = 10594U;
    msg.lat = 0.027275972987207187;
    msg.lon = 0.34729413132676656;
    msg.speed = 0.670763520669101;
    msg.speed_units = 195U;
    msg.custom.assign("PONSMZEUDPXIHGNEDZQDSSKELKFBXWNWHCGEQYYATVBKMVEPJIMWJRFWUCJDBTRQYCQJPIUVTUYJFUGLDSHDXITLFPAQMZDWRYSFKQRUIHAVFWKEOEQQLFIAQLOGRCWEDFHHRILTMUWYVPNQWDVSRAKUXOSTYOOZEPGGYVPXNZAUXSHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.4333945563046435);
    msg.setSource(46922U);
    msg.setSourceEntity(239U);
    msg.setDestination(55415U);
    msg.setDestinationEntity(224U);
    msg.timeout = 42486U;
    msg.lat = 0.5129378316317997;
    msg.lon = 0.911340884443142;
    msg.speed = 0.9841454767207598;
    msg.speed_units = 217U;
    msg.custom.assign("ZXNRLDAJQHWPMKCDIRLSEIQWPTIINVNBJWKFLGSHAFKIIUKVDMDLHVMLDTYIEUKCYMURFPQPNXOFTPOPCVVRNDWJDLWJUFKRJEXZEANHRQHAOTNAFEUFUNSYOZOQSGKOZVBIUKRVABMCFWFCDIKQIBCNHZETLQBBJPTCLWWMVGTJGMVOAELYZTEDNPCXSGZSYCXAQDGXZHBEHTJXJBZYJGXTYVLXUWEUPQQMGWKUMHRROBASYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.6719100819614462);
    msg.setSource(52782U);
    msg.setSourceEntity(94U);
    msg.setDestination(8318U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.028367774691779646;
    msg.lon = 0.8134729898755448;
    msg.z = 0.6691339923670201;
    msg.z_units = 120U;
    msg.radius = 0.3916002778095884;
    msg.duration = 50839U;
    msg.speed = 0.9554029864535871;
    msg.speed_units = 207U;
    msg.popup_period = 20593U;
    msg.popup_duration = 183U;
    msg.flags = 124U;
    msg.custom.assign("BHTPTIWIPHAHWMGDWTSAKEBXYTDGWQLIOYFQWSBQWICCIVCVXAZBJBLDQGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.07946017361908886);
    msg.setSource(11182U);
    msg.setSourceEntity(182U);
    msg.setDestination(58567U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.4074425887509405;
    msg.lon = 0.15155678914401038;
    msg.z = 0.494569437024044;
    msg.z_units = 41U;
    msg.radius = 0.7842934807378737;
    msg.duration = 64588U;
    msg.speed = 0.2598410652276565;
    msg.speed_units = 93U;
    msg.popup_period = 27058U;
    msg.popup_duration = 9584U;
    msg.flags = 217U;
    msg.custom.assign("ZUYDEHHNEWLVPUQCZWTRLAAQTBPGIPIQJFPIVKIIYTRFRPKKFOLTGQDQJULIFGMNCYSIDKCGOBWDVLIZTHVODMYQUDZFEVGEBWKEFCTBXZWPAXWESAVGVUOSEBHUXNAFSYKAHMGJMZPFIRJCPRZOAYOCRBYNWQTVHOBYKMEAGSJGCPKSXEMTFBRDCMLQOJXLBWVSTHLLLUTUMUIRJSXHHKPXANXEQXZZYAVSRGCSJKCOFDHQNWMJNDURB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.638935474239264);
    msg.setSource(33838U);
    msg.setSourceEntity(33U);
    msg.setDestination(39065U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.2550449809747377;
    msg.lon = 0.012341733504352081;
    msg.z = 0.3257136642780456;
    msg.z_units = 56U;
    msg.radius = 0.9903891139077878;
    msg.duration = 1413U;
    msg.speed = 0.9565388380888428;
    msg.speed_units = 113U;
    msg.popup_period = 53304U;
    msg.popup_duration = 51922U;
    msg.flags = 9U;
    msg.custom.assign("RSUXNJCCAWYQWPDVWBEBFHGIOBKPFAHAHYROVWGFIDTWQXOZDMUPU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.8735125345359327);
    msg.setSource(54626U);
    msg.setSourceEntity(50U);
    msg.setDestination(37744U);
    msg.setDestinationEntity(54U);
    msg.timeout = 1239U;
    msg.lat = 0.19948601262704724;
    msg.lon = 0.37400948910096643;
    msg.z = 0.7082458942069519;
    msg.z_units = 249U;
    msg.speed = 0.9558118142814169;
    msg.speed_units = 187U;
    msg.bearing = 0.4615484215123937;
    msg.width = 0.07043655300863538;
    msg.direction = 95U;
    msg.custom.assign("DQTFWTRPRXOLMQSUHOLUNNZNAVHAZNJPAXMEJELCOPDAKYFGHJMQRDEKCGUWVNAORUOGLEBSOWAFKEOGDNXJUUFLMSFTSEYZSVKJTCHHXOEKPXNYRZBQTVSBBQMABIXZIPYZTQWXIWVTKC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.060631027598193166);
    msg.setSource(49973U);
    msg.setSourceEntity(57U);
    msg.setDestination(10852U);
    msg.setDestinationEntity(81U);
    msg.timeout = 50399U;
    msg.lat = 0.9532275733874954;
    msg.lon = 0.06861066569207042;
    msg.z = 0.7722670665847665;
    msg.z_units = 22U;
    msg.speed = 0.28092489394041864;
    msg.speed_units = 143U;
    msg.bearing = 0.6813809444482832;
    msg.width = 0.2877134428969549;
    msg.direction = 147U;
    msg.custom.assign("UVWJFWLXPEGAEGBAGZIQDIVAJBKKMCJVIXDNQXVPDSQUWVLHEESSKNUOCWRHAGZNSFHQTNTUVDKOBFHPJVJVBNMAPRQOGRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.898658052445162);
    msg.setSource(10106U);
    msg.setSourceEntity(77U);
    msg.setDestination(22597U);
    msg.setDestinationEntity(151U);
    msg.timeout = 40127U;
    msg.lat = 0.822737044700891;
    msg.lon = 0.2105377602853713;
    msg.z = 0.22877482809475325;
    msg.z_units = 251U;
    msg.speed = 0.25333838510869244;
    msg.speed_units = 203U;
    msg.bearing = 0.41621283453977376;
    msg.width = 0.21009230365656018;
    msg.direction = 24U;
    msg.custom.assign("KLRBYSSIIHBRIPDZLQPVSDVLTDBWTNFRNQJWUBQAOLHYKJGONZFYFUPFZWKVFYQOXTUDBNXQROFTRTLUNMEKBGCAZYJWNUJFDZZZJLCVJZIZSPRLOMVAARFEMVPMAJAFEHVQOIXODGENZGXXWSDCHLSENIHQKCEFOGBMKKVLYMMMDVAPGYCSKBMJHOYSRGTCJQVUUMNLCSWQWYATHWAUSCHIXKDETYJXWGOWCE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.1563355170767875);
    msg.setSource(31723U);
    msg.setSourceEntity(226U);
    msg.setDestination(64184U);
    msg.setDestinationEntity(46U);
    msg.op_mode = 136U;
    msg.error_count = 81U;
    msg.error_ents.assign("WQGBSFQIVEKIFRGDJGUKUMNPOOFYYPT");
    msg.maneuver_type = 35083U;
    msg.maneuver_stime = 0.8745085869472303;
    msg.maneuver_eta = 19869U;
    msg.control_loops = 3909251236U;
    msg.flags = 176U;
    msg.last_error.assign("QBTSWIJCBIGIFXCAHNNORPEHEEOAXXAGHRDNLZKPSXKIFUMGTAQOFACVCBJBTOBSIUATRMXXWPSXLPGJWQKESOKFYBOLHSXJMNKQDVMUJWZXHWEJBWPUFJDWGSZWTHIDMMTOYYBJIFTPBHZIZMRGZAZYZDSQKFRNJPCOVPILKOERQEWHEMLKVCDGQCTTZXPJYVUNCMPNCFQLTRNFNDRLVYQGKLVYUBYOKRCDNSEGVYUEDUM");
    msg.last_error_time = 0.2298355637094528;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.5619966389611182);
    msg.setSource(10147U);
    msg.setSourceEntity(49U);
    msg.setDestination(19750U);
    msg.setDestinationEntity(72U);
    msg.op_mode = 40U;
    msg.error_count = 205U;
    msg.error_ents.assign("JIOLYCDWGKRKUVBBXVHHIQXPGPRQEVJIURGWJFSCDRYZSTMYINBSDIBQIMTVVTMXKNRUYUUPKQDBSUYKNQLJRHRDHOMSAUFLCAEMMFZVNVBVCCONWBFWZPGMWDKNALQXSJCKJIUICSHCGXHPHOPGWPQXJWAYGATFSAOANPXZSL");
    msg.maneuver_type = 50715U;
    msg.maneuver_stime = 0.5963195437539779;
    msg.maneuver_eta = 18235U;
    msg.control_loops = 3292095749U;
    msg.flags = 47U;
    msg.last_error.assign("IZRAEJISQJIOIIRMNZMRDZSZGWODGAQWJYNRHEESXOMNGYWMWZPYZAXPRVDYMZZDUULJYBQQGHUSJORCPGMYAKVZDTVLQFFIVOXETAUSKFFEYBEBKPBXKEMUFLZCFKQTPLVDJKFHJHLUVDGHMOHTKAHCXTWNBDAYX");
    msg.last_error_time = 0.5763681672001629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.2520658172418536);
    msg.setSource(29201U);
    msg.setSourceEntity(212U);
    msg.setDestination(24133U);
    msg.setDestinationEntity(233U);
    msg.op_mode = 24U;
    msg.error_count = 246U;
    msg.error_ents.assign("EIBDXKAEYQMYHWBHSVXYVTWKLVVHZGWSWVLUCJOSLLCCDXOHUIGMLQHUFKOVQNUAOKFAJLJDVNNYCRBPQERWGMBKPJNVOLAUTLXZCWZHNEOZIYRDYXGBQZXQNFRDMPEBTJJZHPPAQMKTYBEYXHIFRSSMCEBGKKMH");
    msg.maneuver_type = 54964U;
    msg.maneuver_stime = 0.9825049290411354;
    msg.maneuver_eta = 16096U;
    msg.control_loops = 581528799U;
    msg.flags = 146U;
    msg.last_error.assign("VHQWJGGFDERHIEPYKKVWMOXKAGIZIMXTYDMZTBQVIYLQWCUEGZHCNWIQWULRFHVPELJIIMHEPBDDKZGMTBJSJFQQPWNAPPNLPACDBLIYUBL");
    msg.last_error_time = 0.6218761959601674;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.4268755368141478);
    msg.setSource(33192U);
    msg.setSourceEntity(29U);
    msg.setDestination(22609U);
    msg.setDestinationEntity(27U);
    msg.type = 119U;
    msg.request_id = 58452U;
    msg.command = 6U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 20236U;
    tmp_msg_0.lat = 0.696310786955167;
    tmp_msg_0.lon = 0.32731946270257417;
    tmp_msg_0.z = 0.5404820601643683;
    tmp_msg_0.z_units = 191U;
    tmp_msg_0.speed = 0.5988097169113954;
    tmp_msg_0.speed_units = 82U;
    tmp_msg_0.bearing = 0.17407891450767343;
    tmp_msg_0.cross_angle = 0.08449366468976605;
    tmp_msg_0.width = 0.31865561935451137;
    tmp_msg_0.length = 0.2560170314802138;
    tmp_msg_0.hstep = 0.7666792056227502;
    tmp_msg_0.coff = 67U;
    tmp_msg_0.alternation = 211U;
    tmp_msg_0.flags = 13U;
    tmp_msg_0.custom.assign("NRYMHEUKSOOTCICBTYXHEYGIEMOJWMNGUFAEKRFSJHPIIUHRTESACDZDZZWGLAYBXSWMRNYALBTNDQFTLQWQUGOMLXSZXUMEGPTSONRWNJOKPXSJHBVZUIDTOCQORGALJUDFIYBQCXKGXRPXXMBKNIMEBJZPVLIGHRPYJRSYFATGZCVPFKCWNDHOQTVJCWYBDVUELPABKQFSZCPDUAILUODFWVAGENXYWHPKEKVMBHWZVQQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60248U;
    msg.info.assign("OHUEJJAMRIAZDMBPTIVRZAYDVKXBKEDKZGSVWDHHVOHIBIOOVTCMWAEZSOUEJRDXFEHUARLKBPLQG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.5755543286168595);
    msg.setSource(2764U);
    msg.setSourceEntity(170U);
    msg.setDestination(43146U);
    msg.setDestinationEntity(172U);
    msg.type = 155U;
    msg.request_id = 61194U;
    msg.command = 175U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.2007623734904922;
    tmp_msg_0.lon = 0.7063166988409151;
    tmp_msg_0.z = 0.7492972462599737;
    tmp_msg_0.z_units = 111U;
    tmp_msg_0.radius = 0.9130232280625442;
    tmp_msg_0.duration = 16623U;
    tmp_msg_0.speed = 0.7487718546927066;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.custom.assign("HCKQMKWTJBBZAOBJIEMAWAXRKEFUHZHIEUPSHYQRDJQDAFINYEAGOXQCKQTCDRKQEAVPNNSOCAZLBZGUMMWRWKACKGVYRTYITTGZSEGJZNNSNXNLQFUQXBTTVJICPSVTBCRKMCUZRUSZLRVJYCBYOVDNUHYEPZPVRUIPHFOYTADSIRVFDNXXWFPHLVEXLDMDMPLTSGAPDEFGVLWJGJBOXOKKLWOSILDBHJPWGUYQFMWCSBXINLQHF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32525U;
    msg.info.assign("TKJFOLOENVAUQBN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.9298285155750188);
    msg.setSource(62527U);
    msg.setSourceEntity(46U);
    msg.setDestination(28365U);
    msg.setDestinationEntity(33U);
    msg.type = 9U;
    msg.request_id = 34070U;
    msg.command = 253U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 34777U;
    tmp_msg_0.lat = 0.8148480044402887;
    tmp_msg_0.lon = 0.39734617809225237;
    tmp_msg_0.z = 0.705342160958827;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.speed = 0.17388092195825833;
    tmp_msg_0.speed_units = 185U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.4589032759057131;
    tmp_tmp_msg_0_0.y = 0.6734426951510217;
    tmp_tmp_msg_0_0.z = 0.30873709662335846;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PBECSNWHLCAAMFWZLXVDLEFJTKRLPWAOWCOPCIWIJXDTIQZLQOJLXSLZSVXNONONYMJOFVZYUYXBMOBYTZTSBWKTAJOIWFXYYDIKEVRCESTIFGBERMKUDPNFUINUQAGDRQAHCXKHRGDZUXTCMNMLMVGDRDJRABJJHIGPFKCVSGKVMKIUGNQZSYPWETBRNBYPQGGBPVQUUMEXQZSUEW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27414U;
    msg.info.assign("FYQDNCDXTQSKODYPFCRTJKSJFKRLJYRBVIAWXHVOBVIXBHMCNNIWOZSJULOEPANONWBMZGFFHWKZPRBQFYDBZOHIVSLIKRYTZDJRPTHEOZSWXCCSFUCGYDRSPTKBILYZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.8806600752948753);
    msg.setSource(23297U);
    msg.setSourceEntity(160U);
    msg.setDestination(39183U);
    msg.setDestinationEntity(60U);
    msg.command = 28U;
    msg.entities.assign("TBPUVNUHDECPBDHRDAXOSQJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.9467022741552221);
    msg.setSource(38569U);
    msg.setSourceEntity(224U);
    msg.setDestination(7103U);
    msg.setDestinationEntity(38U);
    msg.command = 174U;
    msg.entities.assign("RBRIBCEPDKZBVBYZVNUWSJLQJFZKGLCMQOOHDKSNREZYYQAWNCCWDQOPKGFPLJBBOCCYUHNATTGIJHRGFNHJJSIIJVXSKUBILXKZTMPMVEUZMFLCSPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.5579245114807622);
    msg.setSource(22992U);
    msg.setSourceEntity(29U);
    msg.setDestination(19338U);
    msg.setDestinationEntity(137U);
    msg.command = 243U;
    msg.entities.assign("EGXRREDESMZIPAHXCFUPWXOPAJJYBZUVDADAWOXSLFHFKLUMKVZCLRUBXOOAQYFGVJHAUQDXILZOCDDLTZJXVEERVVTWGUGCMGIGWYHWXUWMXBJFORNKISHQKQNPAYLMSGEQEKKGYANYHRITLNXSBOBZBITFJVRFMEVFMJATKWQTCGOQNVJNPHRIVKQHMQPWHCIMNSPYBYBDSSBYGFJWBDHCFYU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.6289339970206076);
    msg.setSource(38759U);
    msg.setSourceEntity(243U);
    msg.setDestination(44037U);
    msg.setDestinationEntity(185U);
    msg.mcount = 214U;
    msg.mnames.assign("WEUWVMPCWVILDTSQGTJZZOVRHIHIIBJIWFKEHVYPROYIXAJL");
    msg.ecount = 45U;
    msg.enames.assign("PANCSUAZLRRVBHEQYVSUGFEUFSBDYNQOMRCXHAWZJQAFYLJCKNGUDGDPTCCWBVWUXCCECHPJMPNFIIXSTOEUYVOMKRSYGYHXBZWRJODUHVQFKMSWZUEQORINLYLSZKSVVETIINHQSLCHTK");
    msg.ccount = 244U;
    msg.cnames.assign("MGMARDJFNOWYLCJDVGICWFPFKFSRNKWOTZUIDEABDPYWPBPOHNQXRUBULSPSIXLPDAXQXXSCAYDFUEYAGJIMNACLCKSNIFDAJHHYJDJFVVXVROGETOPWEZXSOIBENWLDNYVTKOQRTNCLGRKZLTZRQQDIZZMGLGYHBUJCXJVUMKBXQFUCIQHZYHZQHQGHSVWURYOVLWREHMTSNGQJKCYZEE");
    msg.last_error.assign("RUBQEXILDDKPHOPEILMXHYPDWIBIQIQRYIPDUHR");
    msg.last_error_time = 0.512156533081642;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.5528020233743758);
    msg.setSource(30474U);
    msg.setSourceEntity(164U);
    msg.setDestination(22028U);
    msg.setDestinationEntity(12U);
    msg.mcount = 184U;
    msg.mnames.assign("HNFRITIEYSHLSWMKADTQUYJJJEEYNFOQZSCAPJIGBGUKJWJOKMQZRWUSRBSLHXKABWDCLZMBCUSFUNBNPSIPGYFUQLMFGAHJNZXYDQSQMVMYTNFOGWPMYVTPTOCVHZBEEBYAGUCLUAIEZHAOCVZIXEQXJIMKNVGTVOYJFROCHOKXNRDHDLWEHEFYDCG");
    msg.ecount = 204U;
    msg.enames.assign("YUNWCEXDPXMXAKHWHIJVSRTIBCFDLDOSREBPCVUADQBZVNYSRGHVNTDNZWQYYCFBPBXFBMIQKLHHPGSYMUVSIUCQZRKUB");
    msg.ccount = 20U;
    msg.cnames.assign("RBGZRQGMGTGHQXALKYPCZHGRFVTZPAMWHSMXKLEYECXSUGHEVUJHENLCIJIJGQWAXVWRSFRDXIISAHINELZUTVBOMCONNNITURZFIUYSTWPUCNCLOBDKGSKXBRNDKYOIJNHRFKWJVAHRNEDWYAUBOWYTMJSJVPSYFEFTXUCZXUAEVAFOSOXWMLOFLDPPBMPJBVDYKPHAKDLTZMJCKAFIQYLQQEZYXPWTZVCJDSGVKQT");
    msg.last_error.assign("RLXPTURKSDVZQHSCVJCRSKQJZFFCTTYLGMIOSVPANGTKZPWQTOTVAZKGWKDKDNPLXSFJGXNSVIQAOGPYXIIFHNJ");
    msg.last_error_time = 0.4368021130081391;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.9944215522951574);
    msg.setSource(40972U);
    msg.setSourceEntity(66U);
    msg.setDestination(47757U);
    msg.setDestinationEntity(70U);
    msg.mcount = 133U;
    msg.mnames.assign("BVBYEZXIPELAHXZTHPVAHWMKZKLNNCLTQVKYTFJCYKMBGLRKZRBPUAZWCIBRWSXXPYBFJTNIMGOAWDIHJUNICROJJRLCNMDSUWRTGLGDVOJDLRGKPDUYVOJSMHXZTEBIHQFSYERMOOGEXASFQDVNKWHACSFIEXVGUVYDQWNZYQDRPSAL");
    msg.ecount = 23U;
    msg.enames.assign("HPHTYRRKOJIWTHPJENAXCDOZGMJLAMKPKJDZNSOWOEGPEFKHZFRSXMOYASJLQHYPXTZXJYCPEJOFFGFMUGMCGWVVNZZBSUDGRLIRAPVUNHTLBLHSKBANCIXUUWXKCZMHFRFBD");
    msg.ccount = 208U;
    msg.cnames.assign("IQWKLTNLKSDHPMUSGPTZPUFUMVYWMQQJWWVHHXIHZEYULYPGLCNAFZAWLFCVEMBZIGSMVBVYMQTQISEDGXKRNABBJORXPZDRUPHTWXFREMFRRPOACSJCLGDAZYRIACRTFOOBXYXYAGSLLDHKFHIMUVGBE");
    msg.last_error.assign("DVDBRSYOSXTWUYPNIRDYFGLHRSMKBKJFCIHULLQAYTQMODDMXWVEWTMAKTHGCYTGLZCKBEXWPCNJHJAUFNFIECDPULOLPKJCZJQIUWTYRMFALPHRMXSPYGAVZFAUKISXVEWUABPHDXHFWUOOCSXAEDHLRLGCGTVZBQMGQNUOPFRGPWGXYQKUTJSOWQABBLBBMEQXADTBNNRRZZEV");
    msg.last_error_time = 0.6091369775084619;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.13613137297639333);
    msg.setSource(24947U);
    msg.setSourceEntity(194U);
    msg.setDestination(61532U);
    msg.setDestinationEntity(76U);
    msg.mask = 76U;
    msg.max_depth = 0.04780895080485337;
    msg.min_altitude = 0.7332681291314911;
    msg.max_altitude = 0.0741513563955466;
    msg.min_speed = 0.541118454985947;
    msg.max_speed = 0.8258509691805882;
    msg.max_vrate = 0.4363139276548298;
    msg.lat = 0.18072792402853655;
    msg.lon = 0.24973636283765333;
    msg.orientation = 0.8534596442372104;
    msg.width = 0.10156667228090399;
    msg.length = 0.8779510596060366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.7739884039963983);
    msg.setSource(61535U);
    msg.setSourceEntity(30U);
    msg.setDestination(7349U);
    msg.setDestinationEntity(127U);
    msg.mask = 99U;
    msg.max_depth = 0.6101775432377922;
    msg.min_altitude = 0.36536831167302297;
    msg.max_altitude = 0.8548864847218782;
    msg.min_speed = 0.19512391261319906;
    msg.max_speed = 0.9536782382226514;
    msg.max_vrate = 0.23113840443384237;
    msg.lat = 0.9709407979373964;
    msg.lon = 0.2569642560737485;
    msg.orientation = 0.017187518677378666;
    msg.width = 0.03260542012824108;
    msg.length = 0.12422182065841869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.10538571079189885);
    msg.setSource(63056U);
    msg.setSourceEntity(128U);
    msg.setDestination(42227U);
    msg.setDestinationEntity(96U);
    msg.mask = 88U;
    msg.max_depth = 0.1784813551084633;
    msg.min_altitude = 0.17720784216686636;
    msg.max_altitude = 0.28705578060906467;
    msg.min_speed = 0.4563947230391281;
    msg.max_speed = 0.977094068218385;
    msg.max_vrate = 0.26738154285688875;
    msg.lat = 0.3797344212570094;
    msg.lon = 0.8024998595703998;
    msg.orientation = 0.9887541571733979;
    msg.width = 0.2023314402500902;
    msg.length = 0.08402837840158817;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.8366742187071889);
    msg.setSource(65500U);
    msg.setSourceEntity(93U);
    msg.setDestination(20482U);
    msg.setDestinationEntity(66U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.028810858858971722);
    msg.setSource(31660U);
    msg.setSourceEntity(98U);
    msg.setDestination(44150U);
    msg.setDestinationEntity(42U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.06071341680546538);
    msg.setSource(38259U);
    msg.setSourceEntity(87U);
    msg.setDestination(26565U);
    msg.setDestinationEntity(1U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.020999621551418435);
    msg.setSource(47707U);
    msg.setSourceEntity(143U);
    msg.setDestination(65469U);
    msg.setDestinationEntity(138U);
    msg.duration = 29643U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.8052528822079457);
    msg.setSource(57425U);
    msg.setSourceEntity(18U);
    msg.setDestination(56338U);
    msg.setDestinationEntity(207U);
    msg.duration = 14879U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.5541136451809108);
    msg.setSource(46811U);
    msg.setSourceEntity(236U);
    msg.setDestination(57698U);
    msg.setDestinationEntity(109U);
    msg.duration = 59330U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.7638206787178018);
    msg.setSource(14874U);
    msg.setSourceEntity(168U);
    msg.setDestination(51763U);
    msg.setDestinationEntity(201U);
    msg.enable = 129U;
    msg.mask = 3872199444U;
    msg.scope_ref = 1836593052U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.7076445386350699);
    msg.setSource(2816U);
    msg.setSourceEntity(216U);
    msg.setDestination(14703U);
    msg.setDestinationEntity(165U);
    msg.enable = 175U;
    msg.mask = 3316099177U;
    msg.scope_ref = 2967480765U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.6276256735859341);
    msg.setSource(4536U);
    msg.setSourceEntity(194U);
    msg.setDestination(10314U);
    msg.setDestinationEntity(234U);
    msg.enable = 84U;
    msg.mask = 3507149776U;
    msg.scope_ref = 3401679830U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.0076738877564792585);
    msg.setSource(38551U);
    msg.setSourceEntity(194U);
    msg.setDestination(51315U);
    msg.setDestinationEntity(213U);
    msg.medium = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.35961636318383783);
    msg.setSource(26614U);
    msg.setSourceEntity(173U);
    msg.setDestination(10464U);
    msg.setDestinationEntity(171U);
    msg.medium = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.15647410453749755);
    msg.setSource(35797U);
    msg.setSourceEntity(90U);
    msg.setDestination(35079U);
    msg.setDestinationEntity(181U);
    msg.medium = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.5398951620637114);
    msg.setSource(37352U);
    msg.setSourceEntity(67U);
    msg.setDestination(881U);
    msg.setDestinationEntity(8U);
    msg.value = 0.30322606652390294;
    msg.type = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.06670803114923429);
    msg.setSource(16543U);
    msg.setSourceEntity(242U);
    msg.setDestination(36841U);
    msg.setDestinationEntity(137U);
    msg.value = 0.008703541236458556;
    msg.type = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.3220015533756555);
    msg.setSource(64768U);
    msg.setSourceEntity(109U);
    msg.setDestination(46713U);
    msg.setDestinationEntity(127U);
    msg.value = 0.3018987380600515;
    msg.type = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.7339874063854976);
    msg.setSource(33902U);
    msg.setSourceEntity(74U);
    msg.setDestination(12815U);
    msg.setDestinationEntity(8U);
    msg.possimerr = 0.24561590635830366;
    msg.converg = 0.8012745462175257;
    msg.turbulence = 0.5051548259047764;
    msg.possimmon = 45U;
    msg.commmon = 221U;
    msg.convergmon = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.38716925431658433);
    msg.setSource(49936U);
    msg.setSourceEntity(215U);
    msg.setDestination(49760U);
    msg.setDestinationEntity(106U);
    msg.possimerr = 0.41461438740138024;
    msg.converg = 0.47504941877467277;
    msg.turbulence = 0.5516639886602481;
    msg.possimmon = 162U;
    msg.commmon = 45U;
    msg.convergmon = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.6430783499578258);
    msg.setSource(18161U);
    msg.setSourceEntity(159U);
    msg.setDestination(9125U);
    msg.setDestinationEntity(107U);
    msg.possimerr = 0.9051799762831827;
    msg.converg = 0.5644136366005611;
    msg.turbulence = 0.9777751889206613;
    msg.possimmon = 178U;
    msg.commmon = 13U;
    msg.convergmon = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.5460450830203972);
    msg.setSource(26052U);
    msg.setSourceEntity(55U);
    msg.setDestination(5744U);
    msg.setDestinationEntity(213U);
    msg.autonomy = 25U;
    msg.mode.assign("PBWQYUZGJAOKVMDQPTSDRWXIQALHJOTCIBKZQKZBKLBZQRJXWKBUBMLPCHLWEOQKKOXNHNGVUVIFSDNVXTSAQZTYCDMNAOGNZSSWFCDCTYZMOXTWACDPUCINSUHRNQFWYXXIELUHFTWQXJRYGCCEYXWHSCVIPNPHARFISXUIEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.6432166870330387);
    msg.setSource(59018U);
    msg.setSourceEntity(242U);
    msg.setDestination(39685U);
    msg.setDestinationEntity(170U);
    msg.autonomy = 188U;
    msg.mode.assign("WJMIZKWQDXEOFLHYGKYIVXSNMSDMQHZXIIXUNVEPQASZJEVEHRPBMZVIMAOOXXDVOSYMSYGJFQASCFXUTCGFJLPJIQJJQSNPEHLCHTIFICAJRQRLGULATNEGVMUMAIWHEPUWASGJDEXBZVZNNWBOKVBLCQROCFZUTDPGAWGWMOYFHXKJATYUWH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.20139007782006024);
    msg.setSource(37473U);
    msg.setSourceEntity(159U);
    msg.setDestination(35023U);
    msg.setDestinationEntity(217U);
    msg.autonomy = 142U;
    msg.mode.assign("MZCJIKLBFHLORLUWJXQCG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.16714063093360731);
    msg.setSource(14067U);
    msg.setSourceEntity(219U);
    msg.setDestination(44566U);
    msg.setDestinationEntity(206U);
    msg.type = 171U;
    msg.op = 186U;
    msg.possimerr = 0.24520431332360293;
    msg.converg = 0.963938379735491;
    msg.turbulence = 0.3708690696613941;
    msg.possimmon = 190U;
    msg.commmon = 167U;
    msg.convergmon = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.28459570536110457);
    msg.setSource(61792U);
    msg.setSourceEntity(57U);
    msg.setDestination(40805U);
    msg.setDestinationEntity(108U);
    msg.type = 10U;
    msg.op = 61U;
    msg.possimerr = 0.2201873476212679;
    msg.converg = 0.2585689871846403;
    msg.turbulence = 0.8801942717677951;
    msg.possimmon = 214U;
    msg.commmon = 135U;
    msg.convergmon = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.8441623924685108);
    msg.setSource(4586U);
    msg.setSourceEntity(188U);
    msg.setDestination(48376U);
    msg.setDestinationEntity(179U);
    msg.type = 186U;
    msg.op = 65U;
    msg.possimerr = 0.32415427455844115;
    msg.converg = 0.5873127930332247;
    msg.turbulence = 0.23442320804344008;
    msg.possimmon = 215U;
    msg.commmon = 46U;
    msg.convergmon = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.5161872085815843);
    msg.setSource(4366U);
    msg.setSourceEntity(58U);
    msg.setDestination(35207U);
    msg.setDestinationEntity(236U);
    msg.op = 62U;
    msg.comm_interface = 173U;
    msg.period = 36353U;
    msg.sys_dst.assign("KSLFHPXWXRCJOXNRMCMZUICPFHXWQIMVOVLGQQAYGLDTQELRTOVKCHSOPPVECWEWYUTMTWFXCOEDPKFWFJRZEGJTAPXJTIBJVVNNSHID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.40164110035516876);
    msg.setSource(54839U);
    msg.setSourceEntity(205U);
    msg.setDestination(7199U);
    msg.setDestinationEntity(151U);
    msg.op = 120U;
    msg.comm_interface = 145U;
    msg.period = 31863U;
    msg.sys_dst.assign("KQLIHEKCRAMDTNZLAVOVZGXPRHNRRTWNHQIWGJCEDQSCXWEPUTIKXSNSOVBFMFVSGUJWKXPDAJOVYCIDJOWZMHHYNFHTFMGEAHLBSJM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.1605942817300523);
    msg.setSource(10179U);
    msg.setSourceEntity(158U);
    msg.setDestination(53413U);
    msg.setDestinationEntity(168U);
    msg.op = 99U;
    msg.comm_interface = 169U;
    msg.period = 14662U;
    msg.sys_dst.assign("UDZBNEQFSGSKNRZGXLKTCVQJBUMEABJGLHHYCUBHTAUKXMQFOKWEPDFTMTZOHXPAYNWZEJTOIWJCJAQIGROYHRBUFWOJVVLRYOYXJOAPTDRANEAXWKSZVDUQNSATNLVLPCAFPJBJFVGXHCCTQDTZMWYH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.8968007300304244);
    msg.setSource(46679U);
    msg.setSourceEntity(161U);
    msg.setDestination(48288U);
    msg.setDestinationEntity(70U);
    msg.stime = 1275452608U;
    msg.latitude = 0.561630580012972;
    msg.longitude = 0.11725722080868994;
    msg.altitude = 1990U;
    msg.depth = 45330U;
    msg.heading = 27736U;
    msg.speed = -9151;
    msg.fuel = -61;
    msg.exec_state = -61;
    msg.plan_checksum = 8718U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.510516774998817);
    msg.setSource(56493U);
    msg.setSourceEntity(38U);
    msg.setDestination(34302U);
    msg.setDestinationEntity(203U);
    msg.stime = 2020042228U;
    msg.latitude = 0.8943332164460706;
    msg.longitude = 0.3800042031350077;
    msg.altitude = 46091U;
    msg.depth = 41986U;
    msg.heading = 7135U;
    msg.speed = -11153;
    msg.fuel = 60;
    msg.exec_state = 45;
    msg.plan_checksum = 14893U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.6879707209005855);
    msg.setSource(6251U);
    msg.setSourceEntity(205U);
    msg.setDestination(51291U);
    msg.setDestinationEntity(233U);
    msg.stime = 3621588507U;
    msg.latitude = 0.8872239506740275;
    msg.longitude = 0.2817420186078632;
    msg.altitude = 31029U;
    msg.depth = 26476U;
    msg.heading = 50382U;
    msg.speed = -3427;
    msg.fuel = -4;
    msg.exec_state = 52;
    msg.plan_checksum = 48657U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.9702914970953656);
    msg.setSource(15759U);
    msg.setSourceEntity(198U);
    msg.setDestination(21024U);
    msg.setDestinationEntity(109U);
    msg.req_id = 17908U;
    msg.comm_mean = 147U;
    msg.destination.assign("PDOKYOEZRYGWWZHAYIVPVURPTNXFGNR");
    msg.deadline = 0.5707554109559619;
    msg.data_mode = 235U;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 124U;
    tmp_msg_0.snapshot.assign("PXKSRITGUJ");
    IMC::CloseSession tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 2767933115U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UDSIMAOZKOSFGORSPIFMWLAXQHYCVJHDZFRADCWDUYPIUVFZMTZONSNBTCGWKYPVQHVPYHIAPUXFS");
    const char tmp_msg_1[] = {-70, -46, 85, -79, 115, -16, -119, -85, -101, 2, -63, -66, -29, -66, -52, 119, 57, -48, -108, -36, -108, 12, 67, -76, -123, 63, 25, 77, -62, 84, -117, -11, 75, 126, -39, -70, -94, -75, 9, 81, -87, 18, -77, 106, 113, -56, -12, 78, -35, -93, 7, -8, 21, 117, -85, 28, -8, 16, 42, -125, -28, 102, 46, -128, -17, 122, 10, 23, 78, -49, -36, 16, -78, -56, 39, -29, -88, 41, 68, 5, 73, -52, 48, -128, 99, 5, 112, -81, 89, 59, -47, -12, 121, -112, -119, 54, 59, 108, -14, 91, -118, 114, -1, 82, -87, -39, 62, 62, 31, 3, 44, 83, 114, -24, -5, -44, -81, -40, -47, 23, -52, -6, 106, 83, -18, -79, -24, -128, 34, -114, 85, -125, -41, -18, -82, 97, -107, 27, 63, 17, 113, 84, -40, 11, -27, -94, -56, 114, -70, -100, 11, 38, 88, -83, 33, -80, 93, -32, -20, -106, -4, -22, -110, -91, -5, 55, -59, -47, -97, 9, 30, -77, 65, -56, 105, 88, 36, -56, -58, 42, -12, 82, -121, -83};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.1821531221804631);
    msg.setSource(10519U);
    msg.setSourceEntity(171U);
    msg.setDestination(41045U);
    msg.setDestinationEntity(177U);
    msg.req_id = 41933U;
    msg.comm_mean = 138U;
    msg.destination.assign("XKWHRGUUGFBEQVRFYQZVLMZACDRIYDDBLXJCZBZPKRVJVXASDXCSDEXEFBPXVDOFNGYVJFSNWZRFYTNLSNXAQTXNSUHLXGWQYZKDMTEEJWOSRAYBSKCYTVVCKTJ");
    msg.deadline = 0.428498221398552;
    msg.data_mode = 1U;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2341436036U;
    tmp_msg_0.messages.assign("NINXNUIASSKKJMUWRSOCUDGEAZUOSZZQYXA");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YBIRAEPQTNDXMDMEMXWSVTG");
    const char tmp_msg_1[] = {24, -125, -42, -111, -108, 54, 43, 114, 105, -78, -80, 83, -98, 10, 70, -113, -86, 91, -18, 18, 80, -15, -76, -123, -78, 42, 58, -91, -62, 98, -47, 38, -35, -51, -104, 47, 63, -94, -37, -50, -128, -124, -55, 49, -84, 125, -103, 119, 48, 120, 51, 15, -119, -125, -9, -128, 72, -55, -53, -49, 106, -5, -87, -67, 103, -118, -117, 98, -118, 108, -46, -96, 103, 52, 49, 122, 1, 116, 23, 51, -99, -77, -70, -52, 3, -73, 126, 56, 121, 92, -88, -73, 29, 116, -64, 122, -18, 71, 53, 105, 34, -91, -82, 105, 29, 0, -30, -111, -55, -108, 81, -48, -120, 113, 32, -74, -53, 83, 73, 77, 71, 80, -14, 61, -64, 22, -92, -18, 49, 66, 46, -126, -72, -16, -120, -33, 44, 58, -45, -82, 64, -75, 86, 43, 98, 119, -116, 78, -82, 88, 109, 9, -118, 34, 77, -26, -12, -64, 80, -19, -47, -16, 31, -101, -32, 17, -114, -81, 26, -13, -110, -3, 41, 50, 109, 42, -53, 120, -69, -62, -52, 3, 98, -35, -57, 48, -115, -6, -78, -81, 51, -86, -26, 80, -50, 18, 63, 57, -92, -53, -12, 92, -29, 84, 82, 100, 36, 83, -6, 103, 61, 65, -56, 126, -18, -62, 66, 45, -64, 7, 51, 104, 94, 68, 32, 24, 86, 115, 18, 47, -51, 113, -8, 22, -80, 124, -6, 37, -95, -99, -7, 2, 51, 79, 85, -108, 126};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.1892946804746809);
    msg.setSource(56318U);
    msg.setSourceEntity(157U);
    msg.setDestination(46791U);
    msg.setDestinationEntity(67U);
    msg.req_id = 41934U;
    msg.comm_mean = 62U;
    msg.destination.assign("BFOCRLCQPZBSHMMFNIDHKJXKUYPEMHBQWTNIXEBUPFGUSRGVHTNTTKYOOXGYIKQLSTGJMYE");
    msg.deadline = 0.882258840561407;
    msg.data_mode = 150U;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("HYVEQUWEJPBOUMWDMMJVHSBWRTZYTNMXHPRQIYZLMWHVFSUHDLTFFJIEGWDHBEIFXEPOHRTBQHQPWGPDCFLTDXECKXNFGUOYEUVDRYDJXN");
    tmp_msg_0.type = 44U;
    tmp_msg_0.properties = 125U;
    tmp_msg_0.durations.assign("JKJBUPBKDFRKXMDMSOUFVREQPWTLHAVXKJAHFXNMNWEUHZHKZJPZAZISDJGVRNDCZRRENMWRFGUTALSOVCECLGNTILQQZJHBUJEIHYLKDPBYSCGPMVOAVGTYMYBGQTBIAFZQHXIAKLBBRXBHOECHYGIRTWKHCXMFRPWVAQGFTGUPYQOCANTNZVJFXXMWNUNDXPFISZDSCYOJTLKITELQIQWUL");
    tmp_msg_0.distances.assign("VMLGRWAQTORPKBUVSJWTMOCYTPKLXUWAZCMDCMEYJKYAPNXWQGFDCVYNZTLOJWBXHJBNRKBEVMSVRDSBWMEONKSGRFGQUQJDZZDWXVTCRMPFXPQYUYPCBHEGEKOLHXAOZLTUFIHXICWBIPROEQPTXENSBFHZAFGIFSDODJNPY");
    tmp_msg_0.actions.assign("VHCOUVBKLKADKWVHZJESUXXAURSLZMBZYPPDQLIERUDMQDKEQBUCZOFSDXECJOQPLVDBURJAPGDOAIMNSMRTBFEGARAYXTQRSENQCONJPTNCDQTRLTRNPGA");
    tmp_msg_0.fuel.assign("AFJZKOGQQCFDWUPPSUDTDRNNSMBZNTYUVUGOAWHFGMRIKOPJEIXTUXCDSZWKKVRNJXWEAQFMOIXJDHLBCZMJWKUGOQRVMSLKRLIHXBSFBGWWPXRZ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UGNDQOHPTLBOPLBDKYSQITVFQIDZZRELVAHYLFKPEAMYJXHLGTCWW");
    const char tmp_msg_1[] = {59, 79, -116, 70, 5, -103, 10, 71, -56, -47, 106, -11, -62, 37, -108, 87, -1, -8, -90, -51, -109, 91, 9, -80, -81, 78, -106, -56, 44, 120, 31, -122, -57, 14, 25, 6, 4, 14, -86, 1, -95, -21, 39, -17, 77, 7, -95, 120, 14, -15, -113, 43, 107, 101, -9, 87, 21, 92, 1, -76, 91, 43, -52, 26, 95, 35, -112, 21, -78, 44, -99, -114, 73, 102, 65, -83, 83, 25, -45, 22, 18, 96, -65, 24, -70, 44, 12, -60, 45, 57, -55, 12, -114, 16, -64, 46, 97, -68, 63, 67, -98, 96, -11, 10, -48, 23, 99, 47, 3, 53, -40, -66, -51, -66, -2, -8, 46, 76, 102, 83, 73, 125, 74, -115, -127, -7, -22, -73, 70, -111, -41, 88, 78, -57, -89, 109, -43, -81, 78, 95, 64, -80, 24, -24, -21, 42, 21, -91, -90, 69, 91, -61, -64, -107, -49, -74, 34, -10, -116, 119, -54, -85, 94, 24, -15, -23, 22, -89, -8, 56, -48, -48, 92, -64, 37, 46, 43, -114, -28, 74, -86, 117, 14, -13, 96, 97, 61, -12, -24, -58, -99, -30, 98, 55, 68, -56, -62};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.0796595253901281);
    msg.setSource(9213U);
    msg.setSourceEntity(68U);
    msg.setDestination(58736U);
    msg.setDestinationEntity(78U);
    msg.req_id = 13910U;
    msg.status = 208U;
    msg.info.assign("SBUKWSYFWRPMAYKCERHVPCBTNODPDQPHGRVGOPMFJAXLHEXJFCIJKKQSIWTRHPNJQZJAMFEWNLRTLOMGUSJXBROGCUMMDGOZDSMUWTORFIQULBXSFWXAKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.3179035689659043);
    msg.setSource(25061U);
    msg.setSourceEntity(185U);
    msg.setDestination(52652U);
    msg.setDestinationEntity(204U);
    msg.req_id = 44643U;
    msg.status = 9U;
    msg.info.assign("FRBUEMUAFXYOSWGXLHAZYNIZBZTZYCACXKDFRXRCODOISBCZKPBRKMMPNAWEAKOHNGWUGUMDPOJZFVGELINLBWJMCLSOYJIVQBDERVRNJZNFKSAWQQRJFNTZE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.10360511247739812);
    msg.setSource(32473U);
    msg.setSourceEntity(111U);
    msg.setDestination(60291U);
    msg.setDestinationEntity(172U);
    msg.req_id = 47084U;
    msg.status = 177U;
    msg.info.assign("RKQEGBVPEUNONMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.06172919408201605);
    msg.setSource(32311U);
    msg.setSourceEntity(121U);
    msg.setDestination(55144U);
    msg.setDestinationEntity(180U);
    msg.req_id = 48928U;
    msg.destination.assign("OAZXBYGHBAXGIHAPIJDKHMKLVRUBQXOMQGVFOIUXJDUKVTYYQPEWOFMSABRMZHEZTBKCBMPVCPSLEYNSQSWDKNUFWSNBOXMGRPJPVNRWTURFCKRGIKHKURLTWVATFTNCQDYUQKIZBLOFROHVEEOLGJNMYGOXTMNZMPTGFDJQSJEILGVZ");
    msg.timeout = 0.8039194969242706;
    msg.sms_text.assign("PREATKBVWRSAENLOPDWRPVVLJFGVUOSMTHIBKWLVKLSTDECJXANLFQEBFKYITYMFXUMNKTAXCJMTQIXEDGUKRRHWAZJAHAKUNCPZAIQVXHXDDBTUGFGUDNXTRWHYUOVIXSNBACPRJXQFKPSLELPPENCYUQOYXIFLDZCNGBHZIZQOTWCJGQGPSVSK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.00038861725529337754);
    msg.setSource(17131U);
    msg.setSourceEntity(47U);
    msg.setDestination(7202U);
    msg.setDestinationEntity(16U);
    msg.req_id = 11176U;
    msg.destination.assign("WWLWMLBBYKAZNZHJWZJQMACDIZBLUMTFGHOKQSRRIMPOWJUKMIDIJGYQERJNPZIRBAROWUSWTOHUEQA");
    msg.timeout = 0.4634335825909056;
    msg.sms_text.assign("QCKLVSJJSUOSCRMERMVLVRHCAEPZAXCQYODBGTFCOKLDYLDOWIJSYEXFXUVABUCGDKHVDKMTAHREHBTLGGAMSWPQYMZIUKXMPJGOIEHNWJJXUYWQHLOTZJUXIGPFUGSQZYTRUICBGYKCPCWEKJYHOYWZBMSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.014787466771568947);
    msg.setSource(22160U);
    msg.setSourceEntity(192U);
    msg.setDestination(15068U);
    msg.setDestinationEntity(75U);
    msg.req_id = 10771U;
    msg.destination.assign("SGHDOFCSWPJLPEMZIWZXXVOCGGQASAJMUAIUTVRMFKAAHFKKZWUHFSKBWCAQAIJNNOMBZQHUDFD");
    msg.timeout = 0.8804237353629962;
    msg.sms_text.assign("DMWHVALOKQUPGNMEHPFJMHYAFMPDOVXBCACRJHEDXTUBNDFLHOYVHVTUIKNKQLXRJALKSXCCTYKSSNAIJUPVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.5895676998597196);
    msg.setSource(48884U);
    msg.setSourceEntity(163U);
    msg.setDestination(53883U);
    msg.setDestinationEntity(79U);
    msg.req_id = 6076U;
    msg.status = 229U;
    msg.info.assign("AJNUVGQQXIZOGKLXXWLCPMVUYIMABBUAFMKYLNQVYQLXSCKECDHCYIHXCZGOAVUHBODMTGYQIAYUSEEGAIDPITQNJTMLWEWSPFDOHFWZRDGWPWPOJGEOVSVOHHDLPBUYOUTBFLFCTPJZKJYSRJQDAPZIZHARNFSULCUVTKMLZSEBTJVNDEGCWKITWWSGRFMUCJXEMAXBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.04472938166660323);
    msg.setSource(50073U);
    msg.setSourceEntity(231U);
    msg.setDestination(64406U);
    msg.setDestinationEntity(125U);
    msg.req_id = 35548U;
    msg.status = 64U;
    msg.info.assign("KIXBENZAXBZMAYJFKHORORECAUYNUZWVDEUTPOPIMCOVXCTFWQZLPUIREOSMHXCQQKGULEOVEWNHBJPQSMDYBKFEGAGXATTAGIFWEDVJXDIDWYBDQXVDKZICASHVGZJHJTFVLSZPNTRAYGCOSVFQURKFCAYUNMJETMHGPTLMYWQMLQCWSDPIKCWVDHDUWZLLKCJIUMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.569241739029786);
    msg.setSource(16142U);
    msg.setSourceEntity(151U);
    msg.setDestination(45257U);
    msg.setDestinationEntity(76U);
    msg.req_id = 47877U;
    msg.status = 243U;
    msg.info.assign("ARVHVGZEAHEKTONYPOYCGEFSIZBNAWZQXPLDVODJGRBQDCNRHYLMQHNIRXAGGQSFODDLLXJJLGOELWSLNMUCHMLAKMDHNOAFUZFLKQTEZTBQSFTMWWFYJIUMCZQHRYATEJVPGPDKHRZBQWSKYOBRMYRCIDICJBUKJYDJGIWZKAWGCCKPUHJHFZEXACLMUIVBNSF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.5891715674445719);
    msg.setSource(627U);
    msg.setSourceEntity(247U);
    msg.setDestination(25190U);
    msg.setDestinationEntity(157U);
    msg.state = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.026499764969522444);
    msg.setSource(33768U);
    msg.setSourceEntity(63U);
    msg.setDestination(35058U);
    msg.setDestinationEntity(210U);
    msg.state = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.3475553649910552);
    msg.setSource(10771U);
    msg.setSourceEntity(213U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(212U);
    msg.state = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.548785449321505);
    msg.setSource(20097U);
    msg.setSourceEntity(226U);
    msg.setDestination(10660U);
    msg.setDestinationEntity(81U);
    msg.state = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.7516505784730267);
    msg.setSource(24834U);
    msg.setSourceEntity(38U);
    msg.setDestination(56440U);
    msg.setDestinationEntity(168U);
    msg.state = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.23929325560661363);
    msg.setSource(54828U);
    msg.setSourceEntity(52U);
    msg.setDestination(18540U);
    msg.setDestinationEntity(141U);
    msg.state = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.10169546799856533);
    msg.setSource(8552U);
    msg.setSourceEntity(55U);
    msg.setDestination(53863U);
    msg.setDestinationEntity(9U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.08016070388514684);
    msg.setSource(30000U);
    msg.setSourceEntity(135U);
    msg.setDestination(37402U);
    msg.setDestinationEntity(124U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.23104431656609548);
    msg.setSource(54131U);
    msg.setSourceEntity(148U);
    msg.setDestination(39093U);
    msg.setDestinationEntity(41U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.5325773638370078);
    msg.setSource(41512U);
    msg.setSourceEntity(8U);
    msg.setDestination(53262U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("AWXOOMLQGVXBUSPLZKLIFIJRIGOSREYMLJFLTPKYZGZXYZTCEIBUNJVCCBHJKOHWOAJGGYTESEUEUTFXCPPWFALYEMUHOYBZVSRGPUNXWGRWVPWVEZTRVMGMMIYUCDDHDNESXNQYFHQHWPQUNPATHMOLXSXABNNCKAVSEVPDDCYZODQFHSJKB");
    msg.description.assign("IRUWYFYKONCLHWJNOAIOGOKCQMOBMSBABZZNVDDTCFZQSTWTOCQRTHMHUHZVXVLEVMWIAKNSJYPGWLIMUIEFPXDSGYTNJHYPRESSGFLUVKRMBENACVFXSDPWKANIR");
    msg.vnamespace.assign("YJRIBZWVHIRISDKEYYSROWNLPWSATQHCORRWVPADXMOIXVMHGXLUBNGXHNQTXVWVWOGIDEXLQAHZIELCZJULADNJQFCKNNPITCGXSPTJMYOJCKPLQAYJKRAIWVPOBTBBQFJTMGDEUOFHANVNBUFMLDZGDTTHBYEPVJFSDEQBRZEUOWYUTKSKMGRCMKESUMLNQDOMHYFJXGZGCHAAESIKZUCFBR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PMINMREBKDAAFXDJCUWCDDGJLUVACXMRIHIEORPFLBZHFTPQBBSETWDYRYYIZASHRFQDKLXNYXWJWLMNK");
    tmp_msg_0.value.assign("FOAYPZNSFHWGKSXMOKJMUIUVZEWDASPBPQPKGIPTXEVVHUCBXABGUCZAGJGSNZDEOTRPKYNWQRDUHKNNYXJJCTGXBEJLDVPGRRDJIDMIJAKMVXVLYPHWSSDBKUNUWLJTRLTHTTXTOOCEHLLEWKYPOQZGEWNIRUHYFNCWBWRDFYOMVTABDSMJZRGEZZAGYBVFVIVBOWOZKONMAUDFFEY");
    tmp_msg_0.type = 116U;
    tmp_msg_0.access = 30U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JENQKMZXUBSKGZZEJEUESFOKHUUGWYTAFNVIAGVDWWXNKNMJFAFXEPAOFWBMTKDIPHRZLHPDSSCLRNFCZXYCPDULZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.6221040117094715);
    msg.setSource(36901U);
    msg.setSourceEntity(20U);
    msg.setDestination(44410U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("IEQXLVNYSBGPJQANZCUGKHLVZYNEPXXHTHQBLGKFUHPJJAFYKUBMROUOEOXUKKSLVOJZOKMMGGPIZNYNDJPJBSYGR");
    msg.description.assign("DRADWQJWNXWZKEDYQVKONKZJYVUKUHNXR");
    msg.vnamespace.assign("AQJEYUPWMPNVEXWHJBFNOPOXAPTZQHLYQORAQSK");
    msg.start_man_id.assign("GUSYKRFJOBWJHCEHXNCIVJIZMXTGRPBHMUMGLEWQAGOUMLXGPAESNFQVATYWZCNJRYUXTDPIXDBFGDHIKIEFWVTHNTOWHUCUTLGYCPDWSMRZHE");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KDJTISEINSDVPISAQTULRFVJCYWUWFWZPMOTLETFKJHHBLEAHZHVNTIOPDZDOUBUFKWSRICSAWCVTRLXAGNZNGC");
    IMC::Magnetometer tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 37166U;
    tmp_tmp_msg_0_0.lat = 0.8053447249378232;
    tmp_tmp_msg_0_0.lon = 0.8125922894837442;
    tmp_tmp_msg_0_0.z = 0.4749249658613156;
    tmp_tmp_msg_0_0.z_units = 32U;
    tmp_tmp_msg_0_0.speed = 0.03948740568148512;
    tmp_tmp_msg_0_0.speed_units = 168U;
    tmp_tmp_msg_0_0.bearing = 0.12104920845960465;
    tmp_tmp_msg_0_0.width = 0.5453698224535646;
    tmp_tmp_msg_0_0.direction = 149U;
    tmp_tmp_msg_0_0.custom.assign("QZUDQCQAZOYXVIRJDPEPTBCAVBEOBWILDHFYDEICWGGIFLRHUGZENVUPWPGZHKCJXGRMJJCVN");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::TeleoperationDone tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.27256750362227233);
    msg.setSource(11595U);
    msg.setSourceEntity(239U);
    msg.setDestination(40527U);
    msg.setDestinationEntity(124U);
    msg.plan_id.assign("CWHLQUEYPLUQQXCVDHNNLJZKRVYMMZLBGKVIYNPOAMOGGTENSNAVNVJHLVNMTYFOQFRWZVGBAEHNJKCEWZOPRIHPOAHDHYZLISEJFSBUMTJRHXDUIGBMMCJDASKDEAWPJISIHCSKEGVRDWDTXTXLUIRUPOBXAIFBEVRTZMQUJSYUFAKNBYMYQJRIBJSAVXMLZUL");
    msg.description.assign("AAAUIFLRIOBCTWZMJZLALPHHZKKAZWRGJOELVOPFDUQHCTLHQZVUIVIPQTYYSNLEBDWXIZHIPOBL");
    msg.vnamespace.assign("FQMZWBKCBYHOQFVDIENBVOFFMMBPGSSKEFIHHZXYVVPHVLAFBIPCPRSBYYYRMEGPVGXQCUOVPYGWUYLJLQDTCFHAUSNNOLUTWEWMOXHCXINEUNSEWCZGBRBRDVTHXSQLWMJZRGKHOIKCUNZTMAASLSURMIMRYJZAOPJ");
    msg.start_man_id.assign("YOBQOZQHYXSTIYPRYNNMFJODLIHBFDCITSEAGHBBJCUWMZSSWGLRUQLGNMOAABORFOUNXKTZYKATCEIWDRVTMZEQQTBZROLJXTCSBZKIZADZIFNPCOJTJAUHFBGVELFBDOHJSIHVJQRSJGKJEGCMSMQPBG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("PNHZGXFMQHRYNTNRJMHOWKVZLCEDUJOEKSAOECUTSSYPRUFZTANCVODTCRHSVIBWZDPWISFOEBZMGWKGKRDVIAYJNKVXPIBYIDDQIKILXZKHRWERHAQLOJDTPLMJWUEHMGFHOYMD");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("ENGXGJUKDUFHIISIMFBEGQUQLPTYXVMKMXPQUODVYDQCVPKRAXYLIMFBQOZEJEYZ");
    tmp_tmp_msg_0_0.formation_name.assign("RZCVDSXVQASPUERRBSCHZNGXLIZJRJKTPIQZNDCCUJAWDFHMYUDIWPRDPTJIFPMUUOGLWZBTGLIAETBVQNTGIELVSFINWLMQDKXFLXOBTXLYCWNJHHQZETWHMOYXHUDMBVZMUNHBTMGCSJKHHBYTRGOPCVUOFYHWNWOFKBYRECQNVNMZSUWESPFPACMFDBLIRKAIZRDEVVONQMQSYGTSYEEXQOLGJDXXFJPRAE");
    tmp_tmp_msg_0_0.plan_id.assign("QHMDXCJOSZFALXUYEDDEUJNMQLWQMLAGVTMSBBSBWBQYRKGYOQAQCJWRHEJZNRKDXWRYLFFALNUTRYFXOVBENPSXJFDGVMKKWVADVLHGBRHWIULPOXMMLGFUGHYHOISNEXMGUCTIAZPNRTAWVRTJHBWPKCROJQZANQCBZNDOPWIUPZHGXBCFPEXLEIYKBJSTOPINUIUDCIOSTNTEYDOTZCPTKQKRC");
    tmp_tmp_msg_0_0.description.assign("NBDBEEYNWRMXXWZIFMAPHQPFZMLAUXJWZNILBVZQNBQDFPNNOGLBJQXUULFZWKYKYLMVXOIWTJAHSAOYLKOSLOPCMGTZDZDSHWFOPYKXKGLKQCU");
    tmp_tmp_msg_0_0.leader_speed = 0.8823856188217792;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.07488246274230603;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.8083232484312908;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.8233064855037349;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 48694U;
    tmp_tmp_msg_0_0.converg_max = 0.5956695228646695;
    tmp_tmp_msg_0_0.converg_timeout = 57806U;
    tmp_tmp_msg_0_0.comms_timeout = 58924U;
    tmp_tmp_msg_0_0.turb_lim = 0.436533118348566;
    tmp_tmp_msg_0_0.custom.assign("XMBGBRXRNEBLMDIEJSSYBNQOXMNKHYDPFZCIQCLYFQBAPBISXZLMKITHKJAVTMGBUXNQJFXPNCDYSRYWZJESWNGMFONWGADJLSRNRKYJXMQVKVHQCPNASPOTUTZURCLKTVATETLOOPSTVHLAIDMXZFIPLUWGABKVWITIPDJGDWUSFEJOIUCRRGGGPUCOODRCVDWHUPOAHNQYTJVQCFGAEESOLYRDFMMZEZCVXWAUBEYKYLHZWHFWQKUQF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Rows tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 8866U;
    tmp_tmp_msg_0_1.lat = 0.32221059743265645;
    tmp_tmp_msg_0_1.lon = 0.9270101145407441;
    tmp_tmp_msg_0_1.z = 0.6554531486258941;
    tmp_tmp_msg_0_1.z_units = 32U;
    tmp_tmp_msg_0_1.speed = 0.1580086989261461;
    tmp_tmp_msg_0_1.speed_units = 112U;
    tmp_tmp_msg_0_1.bearing = 0.18890095006051466;
    tmp_tmp_msg_0_1.cross_angle = 0.6620037308053582;
    tmp_tmp_msg_0_1.width = 0.7358323446642269;
    tmp_tmp_msg_0_1.length = 0.3530224298779733;
    tmp_tmp_msg_0_1.hstep = 0.5732662547201938;
    tmp_tmp_msg_0_1.coff = 241U;
    tmp_tmp_msg_0_1.alternation = 114U;
    tmp_tmp_msg_0_1.flags = 114U;
    tmp_tmp_msg_0_1.custom.assign("CHDKCKYRNMSRNIIBIE");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("UXAVONWSZAYITBKLITBOILKWRYKPOTKAIHZLWSSHEGNZRMITZUVKYHCXDNDMFQNYEJWTERRAJWGJCIVFPMFEUXGHLSCJSENYOMZWCSBQGPHGZFPAXJOWEUTGPUDNYLMUCEKUOPDZNWFPXBILZUGVBPOAXRUCKVQXLYQASPBGHLUVAKBHVQGJANFGJJQWFDYRHSCHLERN");
    tmp_msg_1.dest_man.assign("IUBYNODDMATCVNSJMRJWQBZPZWEYGPUYJHOXRBFWSGJBZISHLCKDQACUZQXCEHIIPCDRATVLZWISUMTXFZIBNOTSNFBXRPABAXNMVYQG");
    tmp_msg_1.conditions.assign("CJIQGYRRLIPEZFVUUEEAWCBHOUITELIOOGAJYVBJQXGWYPJFBMHYCNHYKVXKTOUABZJQOZNURSKXJYFPKMRQBMOFITPSKCPAJXFFLEHRRMDZBNXDSESGSRPISCGCWHBACABVJPQCWUDNTDMNMZDGOTNBMSPZLHXEMQWFGSHDTAQZWLCVKTJRWILOKIUTZLEVTFDHUKDXYVAVQXKQIIDA");
    IMC::DesiredThrottle tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.06340621044610606;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.4809012876814637);
    msg.setSource(8440U);
    msg.setSourceEntity(187U);
    msg.setDestination(54318U);
    msg.setDestinationEntity(70U);
    msg.maneuver_id.assign("EGWQZXBZKUAJANGWABRUOFBMDM");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.0027385965490551722;
    tmp_msg_0.lon = 0.17377181191871616;
    tmp_msg_0.z = 0.5695150134771926;
    tmp_msg_0.z_units = 82U;
    tmp_msg_0.radius = 0.8790980640591824;
    tmp_msg_0.duration = 59616U;
    tmp_msg_0.speed = 0.36123900874894666;
    tmp_msg_0.speed_units = 40U;
    tmp_msg_0.custom.assign("MUAXZGITLFJRSUKUROXLZCMLTCZAZDNLAWQMQFQHDCRGXBBNBNYVNJZPPTZBOTWQFFWPEWOIWCMTTWAPYUVJGXPARVUODJDGAKKZTBSWPKWIEHLCQRPIPAFSARRJYKSSLEHTICMKFVUBOHIMFJMDKBVNUXGGDPXCUXJYNHEJVUOIOYBI");
    msg.data.set(tmp_msg_0);
    IMC::GpsNavData tmp_msg_1;
    tmp_msg_1.itow = 3995456268U;
    tmp_msg_1.lat = 0.40272522474160044;
    tmp_msg_1.lon = 0.13555926449049194;
    tmp_msg_1.height_ell = 0.18015315460418668;
    tmp_msg_1.height_sea = 0.6429589279921423;
    tmp_msg_1.hacc = 0.7410771288851757;
    tmp_msg_1.vacc = 0.3042889981834562;
    tmp_msg_1.vel_n = 0.8400152865655333;
    tmp_msg_1.vel_e = 0.6938836242805003;
    tmp_msg_1.vel_d = 0.017416815206717007;
    tmp_msg_1.speed = 0.8395934782301901;
    tmp_msg_1.gspeed = 0.45153613618653954;
    tmp_msg_1.heading = 0.7562449404519712;
    tmp_msg_1.sacc = 0.7505440897477754;
    tmp_msg_1.cacc = 0.15678767072086097;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.12393478313243167);
    msg.setSource(49460U);
    msg.setSourceEntity(29U);
    msg.setDestination(60845U);
    msg.setDestinationEntity(231U);
    msg.maneuver_id.assign("ZYANEQESOPGFEPUAQNSCMPYWQDVHSWDPUHCIPFWBEBWFHYGRXTSLOXBBGBXCZGHAUDMPEVAOBOTQKRZMQIKDIVSJXZJZFLSNIYVZJQOMLUWSGFZJMHJDBPQKLVLFNAJHCGYTRUWZHRVEAOPCJUNEUXTGSLRUNJWIZGGOHCKIKCDIZPTIVXNFHIWMBKPKVQEDGTKNNRLXJLBXOOCKHLTFXEUWMQYVSAYMCFNAWARYUKDJOSTQBT");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 5886U;
    tmp_msg_0.lat = 0.6014820887463016;
    tmp_msg_0.lon = 0.344315846115652;
    tmp_msg_0.z = 0.9922096825974117;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.speed = 0.5640116982484593;
    tmp_msg_0.speed_units = 147U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.7936365806337791;
    tmp_tmp_msg_0_0.y = 0.9764645396504985;
    tmp_tmp_msg_0_0.z = 0.07107303548049837;
    tmp_tmp_msg_0_0.t = 0.9177131471364309;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("WPMBXSCLYTAUUGPTMHKNQIDRILBTQTMPRVVIBVEUJUVNGNWQTKJJSRDSFDBDHQUOYPBGEHFIEYMRICSLKKYXQZEPZAJQDGYYMWWHFOGIDSLN");
    msg.data.set(tmp_msg_0);
    IMC::SessionStatus tmp_msg_1;
    tmp_msg_1.sessid = 2996731513U;
    tmp_msg_1.status = 156U;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.5381462269558658);
    msg.setSource(27482U);
    msg.setSourceEntity(254U);
    msg.setDestination(13090U);
    msg.setDestinationEntity(9U);
    msg.maneuver_id.assign("USVNSHUGMBDYQTJDEHVAJGYQZJEZZRRSDYOZAMLEPODHBQWXCQABXFZBVXGEWRQHMLLRGIDOTBDCDBRHRSEHJWAPJYOETCJNTPQWVBWGSLEOUMONPNXHAKETLCKFISCWZKTUJGWRKFIHJXXAPEXYPYFILUGYTYIAUCMPQINGWRVVIMBNFTVJRHAIPOKXPCFQKDCQDSQCKCSNMKTNLEUTXODUJHFZSMM");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 52127U;
    tmp_msg_0.lat = 0.09599517727327389;
    tmp_msg_0.lon = 0.08528854537850439;
    tmp_msg_0.z = 0.8392812039920011;
    tmp_msg_0.z_units = 115U;
    tmp_msg_0.speed = 0.7532272015184679;
    tmp_msg_0.speed_units = 30U;
    tmp_msg_0.custom.assign("SQKYFBXWRMSNQEPGLRWBVFQJFXGRKFGVTMHJRONCREHPOHGKQWAOMVICPXEOVNPYWSIMBQJGFEDTZUZXXAFHMOHZHMLDGGSFFQYBKFTWASBOVISLIJABCUQEIJXTOXDRUCDPZGSKEEOIPLYAJNRSKLSKJBHZTDUKXISUMNDJNMBTYTEJTACFUWKZRCWDLNQDNLZHXUYPVUQCDPTLXCZVUPKDIACLAGHLVNMEPWUYYAQOCI");
    msg.data.set(tmp_msg_0);
    IMC::PowerChannelControl tmp_msg_1;
    tmp_msg_1.name.assign("HSLJAHDRCGUBBOXAMTUDIQLYSANDNKWPLJATHEGTKCNWFVBGQVYNUYXYEFQEYOJQHALGFXIKCJJISVZZUWSMWDRVYFRJU");
    tmp_msg_1.op = 96U;
    tmp_msg_1.sched_time = 0.2632272430390028;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.7491759894744223);
    msg.setSource(31081U);
    msg.setSourceEntity(28U);
    msg.setDestination(53788U);
    msg.setDestinationEntity(247U);
    msg.source_man.assign("VEUSAXVZRCNCSXJOFADTYGSQQGNHXGHCTFSYLSTZJEIBMAIPWRZDUDRERHUXYJJFBOTZTNCEQUOQIPSMRNGENUWWRQWAPGKCUFTPCVQLROPXQIJO");
    msg.dest_man.assign("XYKWEILCYXTJRRTWVXUTXCQRPTDGKBPFGTKEWQVUOBVYWFBVZMBGBAADEAGURZEKLTNYPJYYXMRGIQKCCHZJGICVURQKWWPDOLGJQNXMZMSFLFSGBDLVPOPXEPOQSMWNIBHNSMV");
    msg.conditions.assign("ICCUCHUOBXVTZRBLWDNCOBHIMPGJZPTQKZDOASXDYLPTTXWIRUQXYGHESYMJBLYHZKGQGBEWDHSDMNPNNCZJOITTZXOYSARGEQWBGHSOKFSVUCQDITGKHKLJRKQPPNFLEWZTYNQMLRQACHUVJXRILZFNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.8381543378754072);
    msg.setSource(41224U);
    msg.setSourceEntity(20U);
    msg.setDestination(7386U);
    msg.setDestinationEntity(207U);
    msg.source_man.assign("TFKLJXXUDTIOXXFRUBYFKDDFNZZHUXNTLSYNJBZGRGOMWHQFOAPIBBEOGFZVWPMAPQCJSPMWHTBRGJZVPPLXRZDDJAFQBSWICCKCQWXBTJPDJVWBSAGGKXSLAENQLUXOZYSGXNJQNNQDVCBVKUAKOEVYNEWVTYYKEUNGHNVHMSEOLAYJVLZYZLICTUBHRMCMTQTMRLQDOPIIOQDGACMJUIHFWTVKPWDSLORASCUHIRYEGMSWCRHEIPFHYEUEK");
    msg.dest_man.assign("UAOTVIORKDNLESOEOIZYSFNMTPDQSLZLATJSFLARDZQEWXDPYRXFYUARWXBFLFJUJKHUBUCWFDCGCEYEUHQGZQYCTHVJCKKNKYLGIIQZWJWBCSTMBGPBMEZQZPHIMJDVWPKXKWBOXPRVLEIBONEFGMVNBTIMYNARIAHURPZQCHJCUVHHVPDFRDMWVKKCRQMOWDNQNSVXXUIGFTGYKRJ");
    msg.conditions.assign("UCFJAPEZTSXTAVGEVGGKNSOELWXQJRZJICD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.5664409635199997);
    msg.setSource(34515U);
    msg.setSourceEntity(80U);
    msg.setDestination(29763U);
    msg.setDestinationEntity(209U);
    msg.source_man.assign("ZUMKHJNRWEYGZKCPFSRSWVREVBGUTYHOXNPNUBFMEMIRBXLTMRXDQFBVKVOUXSHZOQFAPINLDHLNWSBQETVVRCEZBCBJKUEXMJNKSLFQNHFCXXAQCOUJBUAOHPNERQEWMYAMNJYTDFPDDYRLTNQUPHLLOZCDPPBBQZ");
    msg.dest_man.assign("PKLQQQQTZLCBCS");
    msg.conditions.assign("TYKRGBVFGTNCFDEZDMVZITKMVZCOOIOSGAFQYEYULERMHLNTYZZEZAKTGJDDAEYBQQFXEFIWCOPRFSCBYPJLQUCBEGXNDARKADSYCXMSMSYNGGNBAZPHPDAISURWFUJDOTICWZONFGIGXKSMTOHXXADJNVHTDLWQLVWJUFOXXETNOJ");
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.8846232641510597;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.7070744637702174);
    msg.setSource(36354U);
    msg.setSourceEntity(30U);
    msg.setDestination(58680U);
    msg.setDestinationEntity(98U);
    msg.command = 183U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EFXZINHPVHHDCOMKXGCUUGJDUJFBTICDMZGQGDHMLBLPQWYPVLJSBENWYEAGUJQHVRCPZBEYLDRPCAOJKSMUKEHOAHWMGRSATXEKWUFTZJDVCZXNILNIAFWTGRSDIAAVFBNKYOYNNJPUXOFXHZVMZJBOCEONKR");
    tmp_msg_0.description.assign("YWBSVYKNURJQKXBEWBESQZOMNPIHCUDJEWISPGJCVPFHUUJMQBNHKTLZTSLJRMCUOCYFFNBKGXYI");
    tmp_msg_0.vnamespace.assign("VKYKOSKOGVQBWZEDNYNADZWEIZBUDPBIUFJVNILHARMCACXQJDYXWYHJUUMJEUEONJMQPMCHALBORZHJQIOIOJTBPRFECWSFWGOFCLRBLGCESXYUVLDUSKCTMKIJDVTHVJLNIQEQGRFRGXOPTKPGLZGTWETRHKQDQOBNANXFUYBBSYFZSMNLOXYPPJSKGNYRWZWTWFAAERTHMHDHTUZSQABMPNDLVPALDMUCIAFIXVKCXFICV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GNETGXMYMNFDQBOKSHHCKBUSBRAWFXMILFTMAMEPCTQOHFRCRQQCWETPEWLGDXQGZGRSKKXSXPNPZRASYCRTHJMJWSRLJFPIQGKZTIPNCTWFAQRUJARFZKAZGLCYLBPYEHGLEIMKIIVYAJWVKPHHDXUHNZZJAUPSWGEV");
    tmp_tmp_msg_0_0.value.assign("FZRPWPMHJUVG");
    tmp_tmp_msg_0_0.type = 89U;
    tmp_tmp_msg_0_0.access = 171U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QMTSVLCAOPKMAXWPIIOFJUILNZFDFFFKRCNDOPCWYQZBIWTYFRBBKMCIXBBPAOUUV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("EMRZAMOOOQPHONV");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("ZZFGJPQQSHZXGNVHWWPFCTEBYFUPJKPPMSLAOJTUNGQIXBKVDXYGRWILHFBOFPRWSXKXLBYEMWNYDDXBCVBPQPZLVBCUYETHTOGUKPIVJFOSJGFMAIWQYHMVYCCKRMJOEZMHW");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("YZJOEYVJTHNCDEFHXJWZAMEXHLBAIYUOYVNLVFQEUPKRHYXNJKQZUCGCMNCVNTQTYDTGMLMILJEIKSUBWYBONVUIDPGPMILCXMKXBUPDGGVVKRWFNZISCW");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("JPHTNGYFJNFRRBMUMDWYNMDXGKAOMICYVDSGGKEEWMAIQUZTVWFQRHTHQFPGMVSQKECXSYGBBXHIBPLRZOSPSOAXXRJMGOCNKQHQBBNMOHZUPKVXKHAVAGGJUICAJYLTJ");
    tmp_tmp_tmp_msg_0_1_0.description.assign("XLUPPWQIYRKZHNMDABWJVSICUCPOCBLJMVSKNBQZQWYLVODBXGTGCXXTNPGXIMJEUHCSJPFQBIZUCAMENYFUJTWJAARVQRTQZATJPKAMGLTEFDSGKSUVQBPKZRXFAIVSYRHSAZODSEZODSUAPQBYHXYGYIRDOXWDCMBUXHKVNATKFFIOUCPZEKRIBZLDWYEYGERRTHFEVKFILQG");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.9858472294835688;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.11892105024662092;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.7739090215851628;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.6970990206910529;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 26123U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.25258699360545034;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 53142U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 28708U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.6463072460313561;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("PYFXVUHJFWDNZZAWUEZGVVPLPHZBMRLQFGEAECVZTXEZY");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SoiCommand tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.type = 42U;
    tmp_tmp_tmp_msg_0_1_1.command = 112U;
    tmp_tmp_tmp_msg_0_1_1.settings.assign("WZVQFEMCBHRIDXPANHVNRKWTFZOFAICNIQJMBSZIQAWBTWLKGABFILYPOFKCXGCIUFXNAQWARVXEXCMBYUEYEJMSLXMSXTPVOHMQELKJCGOOIKYMELFTSYZFDTPDDROJSCTNBBJZDXVJKOLUQOGCGVEAEHGSPOJWMQNDHAUDZTZUTNLHU");
    IMC::SoiPlan tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.plan_id = 41790U;
    IMC::SoiWaypoint tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0.lat = 0.9357695457470704;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0.lon = 0.7916265131620587;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0.eta = 1325891211U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0.duration = 59499U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.waypoints.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0);
    tmp_tmp_tmp_msg_0_1_1.plan.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.info.assign("XSTPLSCKMLWFZCYUXHQAQFATGBIVBRMLECKVIHGILTQTBZMDKAIHLBSEKOUABJNJVWHHVPUTAMSJEEDNLPOOGBYGVSMPYNRZHZWUUUCJSPUMCCXWPEOXAOAVYITMDDPPVCTJZREQFWKZDINDXOXOZYSGETQMFGFIEMRNRCJYTLFRHFLNYIY");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::RelativeHumidity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.4471264121980135;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.2034887518141162);
    msg.setSource(27127U);
    msg.setSourceEntity(227U);
    msg.setDestination(58224U);
    msg.setDestinationEntity(56U);
    msg.command = 251U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OGCSMYBQDEBUUTCKRMANBVJMOTASBYIZWZIDPPOOBXNLKKD");
    tmp_msg_0.description.assign("KMGIKHMQCQMFJCFADUWYLUFGSBCMIOZLITQJVYLEAUMIWQQOWTDH");
    tmp_msg_0.vnamespace.assign("TDXLMHEUWQOINNGOHUNYETYAUXXANZBOSTABXSJRWFCBHLRCBWYTDFMFQJEMSGNUQDZOXZTKJBIYUYVCSFTFLNQNLHHKVWZKKVLUMGXIBEJOVUATXIIXPGESWDXDABPZQFWDVPSNMGRYIVTAARIAOCT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NSHIGKWJJOBXUALFQKXGTDZFHEYINTAKABHXRMQMMBMSWGOQSNTPDUDVACDIPGOJEDRFXCTUSILWYLDJINVOWRFQHAMPKUHZNAHUOFGZLTKHYREPJPEPXMNNPUBLWFYXDRSBCMLACAHVUYHZTQFDVMNWBINVEUSGDOCSRYMYBLZZBELSGZVSKFLXAJPTOFET");
    tmp_tmp_msg_0_0.value.assign("TSDRJBFUDFXIDBPRATXMCETVKLHCLMAJXIVXGFAWQEMFVCDYKFLMPEKTHWIWWRQCLENYRPSEALKIDG");
    tmp_tmp_msg_0_0.type = 233U;
    tmp_tmp_msg_0_0.access = 232U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FTASCSEDJDUKYUVMXXXUUMGCHYRTDIYOLZMZPSKLATAEKDZNYWCPOTJBVQCZMWFVIKWOIQCPQHGIHXKWAOVJQCXDOPRFZMGYLLHZLSAVBBWNETJKUTGIAESJIVIGEIUJKVOGPAXFLITYNPCLBHWRDXYWRRXHNBMMHBSSFZAAKMQJFGUBLUSONDTJYEDJWGTEVFPFEZRXQMQPYTBZELQMXAQSOCWBHRZFCHJSLQNRUONGYOHDVRPFGNDC");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.015187852187423245);
    msg.setSource(33658U);
    msg.setSourceEntity(61U);
    msg.setDestination(11413U);
    msg.setDestinationEntity(238U);
    msg.command = 219U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FXGFTQCFBWMAPIGZVYKRAJJQMEXDUGTIDTRLEYSEPHUJKVXUUQOFLLMROVABBZHLRJKPZUJGRACHKHTAWXBIAENNNTAEO");
    tmp_msg_0.description.assign("ACQJUQNDEFSKDUCJFALOYQKP");
    tmp_msg_0.vnamespace.assign("UVEPZZENAGAQJDWAZPKLMLFQDZIGOYBSMVJANUZLGUIHKDBGHLTMVKHWNZAGFCECQBJOHLRCJRDFSSXCUPEOXXFLVNISOTAMDRVBQQJPVFGOHYQMJYFNBRTCKMMYXAEUVZWRWUJHXNHUSXUFLTPWWTIMDEVNISAGRHVGIEMUWJZZDYWYRPSWKBJOQOPGKSCEMJKFBEBHRHEXGZBTNYRXISQUNIC");
    tmp_msg_0.start_man_id.assign("CZTXNMFQQBZUMDZKMAHLHDLBWKNAWIFGXTLIGTTGJQMKRCWSEPKSVETZOBECPVYHUVRLNCIOWDVEIJDMIMSWHBZPOGNDGWQGSUMUSTDPKVYAJNNCPFYJYZCMJTOGAUHRBBF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WYAQTXQVZAADSQYERWMHCCNYPBMFJCBDWZMDOOTHPEPUHSAJXGMUZNTJAZTWKNSPFHTGXLGSCPUFSNGKDEFELZKDOGVYNEHOKFOVCBVMTRMJRISNDUIVJUVDVUMVUSYLFIGDBOGMPBISWWQYEQYKQNCVQODCBWCZRBLUKREPYAFBZOIOMCJBQRPGTBNYFLLDJAXMXIRGGTHWKHLKZZ");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 53714U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6325734340781152;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2054960177899532;
    tmp_tmp_tmp_msg_0_0_0.z = 0.23487248717482911;
    tmp_tmp_tmp_msg_0_0_0.z_units = 14U;
    tmp_tmp_tmp_msg_0_0_0.duration = 22826U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.7542491892153047;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 49U;
    tmp_tmp_tmp_msg_0_0_0.type = 206U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.24847530345147084;
    tmp_tmp_tmp_msg_0_0_0.length = 0.42923526686237923;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.26379208815643496;
    tmp_tmp_tmp_msg_0_0_0.direction = 240U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("WSAACVIUXABUSITLHMUXPQCPSNFXGEIVCKYCEPUHVPTDEMSDMKVGVKHKYMQNBNBCDOBJWMRMJCLCZFPHRFLZDEEJZFUZDUETOLQFIKKTA");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op_mode = 157U;
    tmp_tmp_msg_0_1.error_count = 46U;
    tmp_tmp_msg_0_1.error_ents.assign("PQCDPDXBIRGKJNSDLDURWCGVRPNJNMYSAFIKBLAXYFENVJXRLAXIGCZMUYUVYOOEWKJGPAQXMJFKYMSYTLBREUDSHMUSTZIZZOJAZEQENDLRSHF");
    tmp_tmp_msg_0_1.maneuver_type = 58889U;
    tmp_tmp_msg_0_1.maneuver_stime = 0.49643345918336423;
    tmp_tmp_msg_0_1.maneuver_eta = 36503U;
    tmp_tmp_msg_0_1.control_loops = 569770637U;
    tmp_tmp_msg_0_1.flags = 82U;
    tmp_tmp_msg_0_1.last_error.assign("CPMDQUHGIJCLLKBSUJZKMDZOLBMUQQHEBXRPYNODXGHIEIWEZKNZMJIRIVXBAINBVRVSJNULYEBFFDUGNTUSGVTTBOZFMDDKTXAFNYTCHXTEEXZNOOCEUTOJ");
    tmp_tmp_msg_0_1.last_error_time = 0.5828671496037454;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.5898620411902679);
    msg.setSource(20591U);
    msg.setSourceEntity(108U);
    msg.setDestination(17783U);
    msg.setDestinationEntity(188U);
    msg.state = 34U;
    msg.plan_id.assign("GXRMLTGTRDYOCEEZKHAFSABHAWSFDLKHCCCGJZUGNVOVNUFMPEITILBKWQUIVOARPJSLJFBLJIRKQLOWRMIAIEWZQCDUKTFCNOIIFLFSSXHVWTUHHJNBHVCWPYJCGHAZAYPNTBESYKEGZSPUPZMQGEKPEVFDQWFRQY");
    msg.comm_level = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.5865213102863212);
    msg.setSource(52282U);
    msg.setSourceEntity(70U);
    msg.setDestination(62855U);
    msg.setDestinationEntity(190U);
    msg.state = 53U;
    msg.plan_id.assign("URBXXYFPXLSUQLVPYLCWNNWDSPZTMOYZAMWH");
    msg.comm_level = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.1810667800562985);
    msg.setSource(44906U);
    msg.setSourceEntity(64U);
    msg.setDestination(52743U);
    msg.setDestinationEntity(207U);
    msg.state = 248U;
    msg.plan_id.assign("ZUTOLINUBSTDPPRELLXWJATQXKAPUZSOEQBVZAXDHJYXUSJOHDIFFQRFIOVYHWBOCBLMYOMYGSTBEKKRQMHWUNJTAVKGAQGVOLMCTILIESCYKGNXPIBXPNNYRDEOBEZLDWKGRVNJEDFCAKIBSPHQTZPJJIHNURMUGKAYFQXKDFTAEZHZQGWMFNURZCVVUMNMBVFPJKMVISJZCOWSUJANWSSWCYLWPHXCDZ");
    msg.comm_level = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.10514691215216032);
    msg.setSource(53049U);
    msg.setSourceEntity(20U);
    msg.setDestination(37078U);
    msg.setDestinationEntity(41U);
    msg.type = 60U;
    msg.op = 236U;
    msg.request_id = 9702U;
    msg.plan_id.assign("QZOEGIXTHWYNXADFQHSANZCPACQYCNXFLPVPCUNU");
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.8116076522313451;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VXFETYDOLZDNUWFXHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.4102021048564468);
    msg.setSource(48220U);
    msg.setSourceEntity(23U);
    msg.setDestination(9801U);
    msg.setDestinationEntity(186U);
    msg.type = 222U;
    msg.op = 57U;
    msg.request_id = 16502U;
    msg.plan_id.assign("ORIVAOEWHAKPAGKHVOATQCGNDAFDNMAVSFCJNLWNPRQMRUOXIJSCMTEZTKOYTZAZPCDAYDGOFICXESKXPVYSDLUJWYIUGGQEQ");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("ZPHTYHNQTPFGQWPMRCMSFTEDNZCIEUSUSLJLJKCJGJ");
    tmp_msg_0.service_type = 235U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IXVSAMPNGOFYKNWHOUJPCYHRVYWBNCYTEQOVDFCODUTBJWTZELBDRHVAKPDMUZZLIJMVRWDQSJKIQVYNBZCUMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.352060091627422);
    msg.setSource(44069U);
    msg.setSourceEntity(138U);
    msg.setDestination(23841U);
    msg.setDestinationEntity(102U);
    msg.type = 239U;
    msg.op = 158U;
    msg.request_id = 47300U;
    msg.plan_id.assign("AMCNIWBKAXINBUDZXCVYASVKDQOKOIYMTLGRGFYMBFJPXXPLHPMZDGOVQZPYEIECWCWNSSZCDBRJZMFKGYQHGQMYTNQZFMUWJHOKDRMWCRVNPFAZGPJVQHVTFTSQYFUKYOVGTXMRUOXYPTELWXJISHDBFXOPYDHSJRBRBEERRZAXRWVBENAFUCUDONONJIUIUGISKQACTDLLJKLLFXHHSQNLTJUEKGWWKSZPIAEPOTILCEUV");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 237U;
    tmp_msg_0.snapshot.assign("ZDGCWIQLIDAJZOWSGNMDBJWMZORDIPCGDYMFMPKOWULLRUDXOHPVSKZRMJMFCCIGMLUJSQJLHVRXTVSRHPFTEUXOTECIQSNWDUECPFACLSBZAY");
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5471255296465407;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PEUXKNFWESRXTBVCGIYDIKFYQLJDGVFTHNQQGNZDLJSMLWFTYKACGVONHXTHRKPTDJZCBFHYBIZOXSKMRPSGTPQSETQKIMKYYEUWXXUHWAZEHFRKDLXGWZLUYTVOGPMAFMCCQYHPUOVHFNVSBBOIFOBCCZVMXMFLNZWJJWEDSNHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.08870103628461312);
    msg.setSource(26793U);
    msg.setSourceEntity(218U);
    msg.setDestination(20693U);
    msg.setDestinationEntity(31U);
    msg.plan_count = 38593U;
    msg.plan_size = 1634075210U;
    msg.change_time = 0.8097358742505286;
    msg.change_sid = 4764U;
    msg.change_sname.assign("VORJIZBWABGKNICTPIJANVCUODALNZHHITZHKRZXBLPSEQSAWWJQJNIEWNJLESDNDKXPYKEYDCRILLHIUHFTTRUDJKAGRBRWXFUYSMCXLXDMCFNZGTLBPMDOCWQVAQXGNBPDOXQQHLXOYGLPTXTESMUBGSWHFQJZGBQUKUZMYRSJHBCBIYOKYWAPFNEFIEDVEMYRFHWJCISYPVGEOLAEKPYFMSCGTVVDKGMTUQOV");
    const char tmp_msg_0[] = {-15, -101, -125, -50, 101, -127, 49, 100, -128, 35, 62, 45, -108, -83, -128, 61, 115, -69, 10, 74, -95, 42, 57, 107, 71, -87, 23, -69, -33, 22, -29, 76, -46, 123, -39, -52, -48, -16, 63, 113, -80, -75, -10, 24, 2, -79, -67, 35, -109, 86, -86, 36, -106, -53, 16, -105, 26, -113, 108, 88, 94, 5, -106, -17, -63, 114, -85, -124, -56, -54, 117};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.3307166764833168);
    msg.setSource(31136U);
    msg.setSourceEntity(129U);
    msg.setDestination(64738U);
    msg.setDestinationEntity(53U);
    msg.plan_count = 41023U;
    msg.plan_size = 2417987829U;
    msg.change_time = 0.25616329515654224;
    msg.change_sid = 7177U;
    msg.change_sname.assign("WTJWBFBFSREXSCARJPPUBEZAOYFFOTRPWTGUKOBWLPMOBHUNLRNUUWAWJEIBKACEWQUNHVHKEMOIPZRSJDMYCEVZDXHIJVDGZMFVGAV");
    const char tmp_msg_0[] = {-1, -101, -44, 57, 45, -81, 115, -119, 10, 6, -6, 119, -113, 13, -71, 93, -19, -60, 34, 37, 61, -28, 1, -51, 42, -94, -26, -62, -94, -78, 67, -39, 57, 46, 122, -82, 3, 61, 77, 50, -67, -27, -33, -103, 22, -64, 71, 102, 9, 126, -50, -16, -6, 64, 97, -121, 111, -116, 90, -11, 11, 32, 58, -6, 29, 99, 107, -3, 62, -110, -12, 69, -48, -63, -1, -38, 19, -82, 119, -50, -25, 12, 122, -91, 63, 76, -52, -111, 59, -41, 114, -24, 63, 67, 76, -8, 59, -17, 24, 7, -27, 60, -36, -34, -70, 93, -6, 121, 6, 84, -70, -64, 81, 69, -89, 96, 30, -84, 53, 23, -126, -52, 54, -105, -41, -68, 35, 120, 52, 1, 87, -26, -10, 96, -67};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NSSJXMJYYRBHCPIBTMSKLMGXGLNZRKZITXQODQHLLYRGJCDUTVCYUJPXLJWUXETFRABSSJYBHCOITUUBFECOSGDWALGFRBZOMANSVPRIVZNPKPOHZFEJENDEQGMZTKHXKLOCSAFLRQBPNHUYRJYFPFXCHDWWGIQVVAYOMVWHOBTUDUOQQRZHAQBHZKNYXFTJTZMEYKLIPQSPXWAWFWMVUEAENRWCFJK");
    tmp_msg_1.plan_size = 56843U;
    tmp_msg_1.change_time = 0.17393781230310967;
    tmp_msg_1.change_sid = 49074U;
    tmp_msg_1.change_sname.assign("PGBQQLOWLQXSQZKLJOERWFLSKVUSKMDDITARRETWHBYVXNLENCELAGLAPWFTUXCHCMLXYTBWPBZDQHENFDPOZPVINXAYOVNSEGDZQBWVTSFJDBRSVIIHHRBMRLXSOZRWWAUMU");
    const char tmp_tmp_msg_1_0[] = {-80, -92, -8, 6, 108, 9, -12, 17, 83, 21, 13, -119, -113, -120, 63, 15, -85, -94, -76, -90, -40, 62, 36, 2, -37, 122, -26, 52, 19, -88, -37, 43, -30, -98, -31, -58, -2, -58, 110, 28, 18, 74, 104, -98, 52, 22, 100, 42, -8, 126, -87, -66, -3, 121, 92, -32, 34, -95, 21, -126, -7, -92, -69, 59, 122, 21, -57, -35, -49, -4, 59, -120, -20, 95, -11, -122, 126, 73, 123, 81, -124, -23, -64, 110, 112, 41, 66, 17, -40, -6, 47, -84, 84, 22, -11, 9, 106, -85, -107, 80, 36, -119, -125, -98, -114, -97, 94, 66, 25, 2, 13, -80, 125, 84, -23, -75, -17, 104, 21, 17, -73, 93, -117, -45, -95, -125, 121, 56, 77, -52, -100, -26, 82, 10, 18, 15, -62, -56, -65, -5, -87, -43, -19, 18, -74, -29, -33, -118, -57, -50, 78, 96, 25, 61, 103, 61, 61, -83, -8, -92, -13, 14, -53, -66, 33, -71, -85, -25, 47, 67, -2, -68, -16, 55, -95, 56, 111, 123, -71, -77, -67, 16, -40, 85, -116, 110, -33, 37, -102, 72, -76, -83, 92, 23, -49, 110, -38, -75, -105, -36, 120, -5, -61, -8, 61, -115, -10, -44, -89, 70, 105, -78, 86, 47, -112, -53, -45, 73, 60, -103, -27, -88, 116, 61, 65, 73, -43, -59, 88, -18, 118, -85, -97, 114, 11, 87, -85, -3, -29, 115, 55, -8, 54, -7, -5, -9, -24, 44, 124};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.5153699986239259);
    msg.setSource(58230U);
    msg.setSourceEntity(239U);
    msg.setDestination(34066U);
    msg.setDestinationEntity(2U);
    msg.plan_count = 40459U;
    msg.plan_size = 3596268582U;
    msg.change_time = 0.2593960759870295;
    msg.change_sid = 23469U;
    msg.change_sname.assign("SPUOUXRGGEIVAUMNFGGRZGOJOGFAPEOGOKMWKBKJVFBCWWDNHHISLRIOLPZJLJXGEXSAHKFCXYXWTDUNUDJJPHUIUMHBOJQNSBMNVPDEVF");
    const char tmp_msg_0[] = {-104, -78, 86, -69, 37, -104, 106, -83, 52, -8, -86, 10, 20, -79, -62, -38, 1, 8, 107, 103, 70, 43, 1, -43, 90, -5, 103, -16, -123, 100, -96, -28, 40, 13, 41, -64, -46, 11, -31, 122, 86, 65, 42, -53, 116, -54, -83, 85, 119, 60, -126, 87, -127, -25, -11, -24, 117, -98, 115, -33, -3, 9, 32, 22, 69, -46, -103, 72, 85, 3, 110, -57, 95, -58, -60, -3, -50, -19, -40, 66, -1, -61, 50, -10, 85, -125, -23, -7, 125, 72, 47, 36, -105, 95, 50, -123, 77, -70, -85, -68, -45, 52, 93, -122, 58, -74, -41, -64, 51, -43, 63, -43, 70, 30, 125, 49, -116, 108, 1, 11, 90, 86, -15, -101, -104, 110, -116, 12, -36, -107, -92, -46, -22, -91, -110, -117, 84, 104, 35, 71, 63, -112, -87, 39, -55, -32, 77, -30, 34, 39, -116, -32, 100, 75, 116, 57, 4, -75, 57, -26, 65, -11, 54, 95, 108, -125, 63, -69, 83, -125, -57, -119, 98, 73, 59, -118, 30, 90, 85, -36, -123, 58, 89, 38, 63, -2, -11, 115, 114, -90, 113, 13, -127, -124, -9, 45, -88, -26, 66, 37, 23, 108, 71, 8, -107, 11, 49, 93, 125, 78, -115, 8, 3, -55, -16, 77, 99, -76, -118, -54, -101, -21, -42, -113, 101, -27, -73, 85, -124};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DIESAZSDLDPGOLNBVYNIUTVROVQZTRALMLAYLUXHBWKDSFLPQHNRBUSLWJCXANKVBYLPMDHQHKWKWIYQUIFSWJJTXXSAECYKCVVMSFRFKTTOZKDGRAXQOHPBAYUOJIQLTWUTMVVJEMGIGYNVXBBZTZJOHFQCIXOSCRGJZCNUEVGSWRHFEOHPXCGPZENCZYMUWQGKUAEUFQWDIJBNSIDEARFJOBLBPXPXDEGDWKPOGKNAMFRQYMZHMJTETCCMP");
    tmp_msg_1.plan_size = 42151U;
    tmp_msg_1.change_time = 0.8840029770808705;
    tmp_msg_1.change_sid = 4900U;
    tmp_msg_1.change_sname.assign("APSHGMKJMFTKOQOBFTZHZRHCSKWEYTBKFGSJVTZRWNXIXLGZSVIMQHUTLJBEFWZBLZEXZLIQVOAANVBHIQLNXDBHYZVPYPWGKCHHUQGKMUCYITIYGXVNBPCGRNQAYFDRMLGCSDUEJHGLBSOIRGTWNXMDKRUSUJYCLPUEFDLAPDZICABJVTTXXRMANSPEJF");
    const char tmp_tmp_msg_1_0[] = {46, -92, 6, 15, -83, -88, -69, -74, 126, 94, -28, 47, 106, -92, -58, -67, 84, 9, 120, 116, 44, 126, -120, -49, -56, -56, 86, -2, -40, 122, 45, 92, -20, 76, -77, 90, -96, 46, -46, 43, 118, -115, -21, 27, 39, -9, 68, 30, -21, 14, 89, 105, -78, -7, -73, 79, 35, 48, -45, 32, 115, -96, -32, 41, -77, 12, -85, 90, -99, -38, -20, -18, -85, 92, -6, 64, 71, 72, -128, 88, -54, -5, -29, 98, 104, -87, -29, 68, -63, 65, -24, 40, 65, -38, -65, -44, 75, -32, 51, 31, 74, 35, -113, 5, 15, -113, 102, 9, -49, -6, 31, -26, 76, -111, -68, 0, 38, -91, 65, 61, -108, 2, 69, 32, -104, 23, 35, -84, 71, 85, 45, 29, 44, -27, 70, -30, -100, 119, 76, 57, -111, -75, 63, -19, 110, 93, 27, 39, -93, -50, -106, 39, -55, 48, 21, -31, -59, 47, 56, -84, 31, -97, -53, -101, 2, -29, -90, 51, 125, -91, -69, 62, 20, 116, 10, -65, -51, -126, 109, 46, -24, -69, -35, 4, -96, 112, -31, -42, -99, 7, -82, -14, 42, -112, 119, 37, -98, 24, -84, 36, -49, 93, 26, 120, 56, -26, 11, -67, -98, -81, -67, -67, 100, -113, 34, -15, 79, 28, 117, -105, -45, 19, -114};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.654409642851675);
    msg.setSource(2251U);
    msg.setSourceEntity(105U);
    msg.setDestination(46631U);
    msg.setDestinationEntity(3U);
    msg.plan_id.assign("WVKBPVNWKWJKSYNAMJLJSXLKFVHACBALQVFULZBDBYDOVCQYHILURSBRAZUFLTEWNOIANTEWQOB");
    msg.plan_size = 32188U;
    msg.change_time = 0.5593843904580976;
    msg.change_sid = 29590U;
    msg.change_sname.assign("VZTSQFGPYWRKTKTONWJFIXQPMZLTAPFVKOJGEHKASDCDNRXKO");
    const char tmp_msg_0[] = {-74, 120, 89, -99, 14, -38, -52, 52, 93, -72, -23, -60, -108, -56, -25, -43, -94, -59, -101, -41, 58, 118, -10, 21, 82, -47, -19, 44, 58, 65, -62, 75, 105, -36, 79, 102, 86, 42, 66, -23, -57, -62, -127, -68, -12, -121, -71, -39, -41, -36, -87, -87, -87, -108, -20, 73, -115, 19, -50, -62, -17, 49, -26, 57, 76, -74, -100, 30, 81, -55, 104, -2, -39, -73, -125, -16, -119, -11, 87, -89, 58, -16, 34, -55, 29, -68, -41, 10, 94, -118, 65, 77, 99, 121, -115, 118, 27, 13, 70, -110, 30, -128, -77, 91, 66, 112, -120, 6, -125, 49, -43, -31, -62, 65, 99, 94, -99, -25, -83, -110, 53, -99, -96, -77, 77, -80, -128};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.8944834436863879);
    msg.setSource(21639U);
    msg.setSourceEntity(88U);
    msg.setDestination(51959U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("NUMUMKJRRDRHFVHYAIJIVMPSAPTWHBITSEGAPJVZCYZKKNAFECQTOWAYCLZGKBXJLOQQPRGVVXEMU");
    msg.plan_size = 1433U;
    msg.change_time = 0.3569873534296002;
    msg.change_sid = 48573U;
    msg.change_sname.assign("BNSSTGVRMO");
    const char tmp_msg_0[] = {50, 89, 42, -122, 55, 97, -32, 98, 115, -102, 123, 27, -4, 51, -74, -10, 121, 32, 11, 49, -87, -51, 8, 118, -37, 50, 41, 63, 26, -52, -30, 40, 36, -19, 69, -38, -111, -2, -39, 20, -86, -41, -57, 101, 52, 61, -109, -117, 4, 113, 102, -75, -71, 26, 1, 111, -71, 87, -120, -124, -116, -22, -57, -32, 104, 12, -45, -29, -63, 48, -81, -52, 18, -68, -97, 64, 18, 73, 61, 98, 29, -76, -117, -113, 4, -83, 34, 28, -105, 100, 34, -82, 9, 64, -81, -114, -106, -127, 16, -117, 49, -70, -81, 33, -11, -122, 110, 62, -78, 88, -2, -99, 66, -24, -62, -10, 80, 38, 84, -109, -100, 56, -81, 109, 95, -77, -63, -30, 126, 25, 6, 88, 114, -125, 0, -27, 124, -113, -101, 82, -48, 41, 50, 87, 32, -59, 87, 35, 80, -70, -69, -44, -25, -15, -29, 62, -30, 55, 85, 91, 72, -63, -16, 22, 20, -105, -18, -102, 96, 38, 85, -44, 17, 65, 27, 77, 50, 16, 120, -65, 105, 120, 83, -105, 114, -12, -90, 49, -115, -115, -96, 67, 99, 7, 12, -54, 26, -58, 33, -80, 64, 69, 81, 46, 16, -29, -47, -21, 23, 29, 79, -28, 99, -37, -55, -88, 20, -125, -95, 61, -14, -122, -92, -11, -29, 125, 92, -1, -88, -98};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.31338506382423637);
    msg.setSource(54513U);
    msg.setSourceEntity(18U);
    msg.setDestination(56176U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("UJCYAZKZLXXNGFJZWGLTBDHFGNIULSVGAALEHUBOKDSLAWOZJEXDNPAPWONWYPSTWYSBWNAWOZIVXGPEWNROJLCHUOXNDSECGUIQBXTOQHHBCCYGQLRAHMABJQLVPDQVMHKYUTROMBJOHTMJGIIEREYFYNGCWKIBUTTZDJMSVMHKYFPMCFEQPXZRSIUVDSZWQGMLHVDVNRPAXYRFKIRFAC");
    msg.plan_size = 60693U;
    msg.change_time = 0.44494647313113334;
    msg.change_sid = 12929U;
    msg.change_sname.assign("BIFNQAYGRCPURTDUDZREQKLAHZQSUDNLSIQLPKIMFOEPRHSGRJKRPWQICTNXLXNCBFGXAOKHPZWHETOXMBHOJJMGLFWYKKYWSGBAMTFFLBDXAQJQOSMOCVQMFSGEZWIIJWMJCTIIOJMWPEOSZERGUDOLXBRKCBFEOJZNIXGYAPIDNC");
    const char tmp_msg_0[] = {72, -98, -111, -29, -78, -37, 19, 33, -33, -61, 85, -81, -47, -25, -62, -101, 77, -85, 61, 50, 108, 4, -29, -112, 47, -97, -117, -80, -23, -92, -103, -3, -118, -95, -28, -5, 2, 122, -54, -8, 46, -5, 89, 18, 68, -106, 43, 43, 101, 83, 24, 23, -88, -52, 117, 122, 81, -15, -18, -54, -116, -97, 38, -72, 83, 70, -118, -96, 58, -15, -9, -66, -111, -94, 25, -45, 23, -35, -15, -121, -115, 23, -37, 35, 5, 72, -109, -87, -123, 31, -25, 8, 119, -17, -10, 52, 37, 53, -49, -52, 8, 0, -85, 86, 19, 110, -18, -109, 7, 13, -69, -34, 14, -39, 79, -87, -127, -107, -65, -17, -47, -14, -27, -2, 19, -16, 25, 120, 62, -25};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.31653495537898524);
    msg.setSource(11501U);
    msg.setSourceEntity(148U);
    msg.setDestination(3216U);
    msg.setDestinationEntity(104U);
    msg.type = 207U;
    msg.op = 19U;
    msg.request_id = 46273U;
    msg.plan_id.assign("WBNRQEAMFQKSHZTXPLHBTWZODUUTQASGPKLPWKUCKGSVYAOESPVKAPIGACZCIKYCGJUCLUTEFNMDCFPNGLMBVNMTLQNSEYJEWBFXWZLTZVCKCYUYOLLQQIXREXMAHJKNEIOLKSHYAAHXGJ");
    msg.flags = 32936U;
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -16646;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BNJWXITTBYWQOEDHCHSSISPABSJMVCCKMDZONTEIHZXOCNGBIALSGZVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.5395693510166942);
    msg.setSource(35355U);
    msg.setSourceEntity(165U);
    msg.setDestination(27676U);
    msg.setDestinationEntity(10U);
    msg.type = 176U;
    msg.op = 56U;
    msg.request_id = 28084U;
    msg.plan_id.assign("VBZBMIKSYVYURACKOAQXZELNZIHCPCJFREEDMPUXDTCULBKHAJBWNDUALCKJOGYXIRBPHBUEIJYYTZESVHQULSFXMMPAVSYVWPKPSIRREGFYLPQNHODDDXARSCJZESVNQTKYZWOTUWWRIICULXBQ");
    msg.flags = 54444U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 100U;
    tmp_msg_0.zoom = 45U;
    tmp_msg_0.action = 52U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JIIWLKTPJKXQCYPONRGIYBALRCDTNXRSVMXAVSDRUUREGQZJCWPLJXLERCABAUUHLJJCFVPWYMQGTLPEZXFQHQMFVPTPNIFCWITTJYCVWUYZFNUSNZDQSNWRMCGOFZAVZZEBBOSMRPOHMPKSIOXYVQYZKFJAWWQDFDGGIBOEGKYTSWOUWLQAGBIHBMDSFUFXXAIUZOEEUINMHEHPHKAQTVTHRDVBLDCKGEBMAGHYDBNXKOLOZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.8528653958613486);
    msg.setSource(36699U);
    msg.setSourceEntity(234U);
    msg.setDestination(19624U);
    msg.setDestinationEntity(54U);
    msg.type = 60U;
    msg.op = 254U;
    msg.request_id = 681U;
    msg.plan_id.assign("PFMSMWPYSABDGWNWIZKCCBWOZSWDUIGTSXOFIVXYZJZENDGMLOECABCOODPKLAVDZITHDMZOGLJQWQHKMMTVUBEBBQRXJNRJSHKYQNIUHOLSQLFNAHAVGKENBEFUENNMBEXJKSKCLQKYLCLFQZYWYAPUDFEQZMVXHRRSDPNMPGLTFRCWFMTGUKPQGVCUJHYXXA");
    msg.flags = 39449U;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.23635376588789558;
    tmp_msg_0.type = 251U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VYQUMFGHCHDZSHDAOJBXGZXCBPWIWLOMZJXEQDTONTETKCQYEMPVUHBYCEMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.5361734536741718);
    msg.setSource(39006U);
    msg.setSourceEntity(115U);
    msg.setDestination(48763U);
    msg.setDestinationEntity(149U);
    msg.state = 168U;
    msg.plan_id.assign("XFMABUUVYHEOLLSZBSWXDENLSDVBZLMRCVWTQUWTRSJHTGCADPUCNGTSMFHIOCKEODVHJQBEYYYAXNGJRP");
    msg.plan_eta = -1215976130;
    msg.plan_progress = 0.4098792407204548;
    msg.man_id.assign("OEHACDIJHBNRLBWXQTBLHNUNPJIUMQNYSVATFLBYQWGWTVPEXJTMNQOREECLVYNBGYLVWFOZDZFGEZAZJGRAZOUCUJXFLGGOUVEKVADTPR");
    msg.man_type = 18519U;
    msg.man_eta = 269907408;
    msg.last_outcome = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.21853612350429275);
    msg.setSource(7655U);
    msg.setSourceEntity(123U);
    msg.setDestination(10458U);
    msg.setDestinationEntity(14U);
    msg.state = 112U;
    msg.plan_id.assign("BRAHODDAHUMOJLZYAECOHTZTDHMZONSAOPYDCLGUJKFCQHPRBRVWNGHWQUXZNFJRSNSLXXYDZSYGBWQZCUBFWVEIYJVFKUMIIZDUPGBIABGNTQIVRLXSMHQEWKLZRLAXDOMFGXHRAJFPEJYJQVDUFIQZKM");
    msg.plan_eta = 287564423;
    msg.plan_progress = 0.393199830153273;
    msg.man_id.assign("KRDDIQILZALPSCMGPWSOWBBRSUQVYKVHLHJSZAZSHZYTEJUJLIMPGPTDJIKEQDHZYOTXBWKXXYLCROIXCGQWIXCKACGUMBLOEYWNVFDWFDBOTAITYTVQFROSRYXESQNMTUANDJOXOSEETHVMVMAKGYWEJXQHRYUJADBGMHNNKHUFLVAODXNFCFUETYCBMPJTHPN");
    msg.man_type = 56926U;
    msg.man_eta = 1393685562;
    msg.last_outcome = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.49083886303116);
    msg.setSource(42143U);
    msg.setSourceEntity(175U);
    msg.setDestination(24982U);
    msg.setDestinationEntity(130U);
    msg.state = 75U;
    msg.plan_id.assign("YFJDIRWZTYFMTISJELUMPPKHBGZSRIDWAFRNXHQVEVTJVZIJUUPXNQRZKDHRPFBGMUOZCCJJPOWHOSPBOAPNXQYDAEGVZSKNFLMMSUCFNDCJNXORKVVKWEWYSYEGATCFQHEEBZGHQNZISNOLBFQDHBCLQCYMFROWMUUDONUITTYAKCLSBYDLHYPGLVPAMADOXVAMTJXTHEQKJJVXXRITWDAIUERQKWMQKPLTXH");
    msg.plan_eta = 997662892;
    msg.plan_progress = 0.6871573804111428;
    msg.man_id.assign("BJUFFUWZRSRXZCYOMRAEZVPIUEZNJTAMGCBXZAEALQEIQCYSASGGPMNXIHOZGNUMINTDPUTHXURMLLTAIUSCPQROOHCSIWKEKDRCBHXWUQYIEJIVLWFQMZWHVXAKLQVDSHDJZMNCKODAORLAJBYCKGXPUJQVVVDHKDFPEJNCMBOGRJNLTKYEWGSTDKQS");
    msg.man_type = 59980U;
    msg.man_eta = -958721225;
    msg.last_outcome = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.8376196579711632);
    msg.setSource(38327U);
    msg.setSourceEntity(136U);
    msg.setDestination(20293U);
    msg.setDestinationEntity(100U);
    msg.name.assign("VNJWQXKSLBVLOAPSGOGWRFJKQFJGJMANKOLDBECDHXDSAQUVQHWEUZNCYYEOOMYRGXIJYWEFLBTUIOZYYPBJAZVJBKHPIRECRCWKGFBAPYLNNCJJIPUYTMMGVSGKOMFAUBRLFVRUSIWQLNTUMPLRUIQWXZDNRFKSHEOR");
    msg.value.assign("OZZPMULOYMYCUZJWSUYBFAZRSESMFGNXHIOHGJJUQKHINSOZECZWSTIEOGKJGFOXSXBUVKBDFKCJOULOAPDIAXFYGDQIDDJPLIBXUETDGTZVLLBRQEHXJSYZAMGLUVHAFCMWATAABTGPYSWEVYQS");
    msg.type = 106U;
    msg.access = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.720851458627355);
    msg.setSource(8886U);
    msg.setSourceEntity(145U);
    msg.setDestination(43015U);
    msg.setDestinationEntity(127U);
    msg.name.assign("NYORHVFQIXFVDRZHRSGZHTLJSSTQNAXEKCSTDPKMXYVQLIKSHEMWKFTPIGWWHBQGDGKDULXDZEFQBCKVOMPCBNMGSTVTTDAHPDWJOWPMXCKCFRZZJUSQLBQMBCFWXDPUUJSMIYNFALDLARPLCOOFYWJWIQZEMXIBNTBLFXZOYJAUUJKK");
    msg.value.assign("PRTUEGZDUHOFALHNKSWKTPWSSPGZPNAYOLWWZJPVJVRCAZFEOVYZUIJGPIDMHFERTUTYBISMGEVCWRXMTNGRFEPVXXO");
    msg.type = 221U;
    msg.access = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.27750747115915875);
    msg.setSource(58975U);
    msg.setSourceEntity(77U);
    msg.setDestination(4037U);
    msg.setDestinationEntity(186U);
    msg.name.assign("UQWCJDBLYQ");
    msg.value.assign("ATKCLQEXMIZVSLTMPYJSPHLHRWQPTAYENZQGCMJWJBADRVZOVNSFJGMLRAHBDISQKUZQLOUYHTRLCGEFABRTPJUUBWPNQMVIOFGGMUFYBYVIDOTMZS");
    msg.type = 108U;
    msg.access = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.17675205260115856);
    msg.setSource(47820U);
    msg.setSourceEntity(204U);
    msg.setDestination(63165U);
    msg.setDestinationEntity(225U);
    msg.cmd = 3U;
    msg.op = 21U;
    msg.plan_id.assign("DFQMIYOAVWRVQUYHLZMAJDQOHCDTKTTIIATCPBVVGOZPLEXOHHGDWUCVMEWGZXMAJUJDIFOLETHBUYZSCGKWZOORLTJDRGMYEKEBAECRUXXLUJLVRGMFDKGBKXEHJZKYFVLEZXSXPROSWTJXLYQWISQVHUIASRND");
    msg.params.assign("BDLDOIISBLIUHWVXCWZMDNNBWLOZYGOEUADNQCQYPARUVPGQSRYUKCMWHILALFBYBLQDZZAEPHRZVTGEYVYNAFPPKNIGGAXFFUXTSWSEVXMWJJSWPVJSFVTQKXPCQRUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.5712110986467855);
    msg.setSource(6208U);
    msg.setSourceEntity(134U);
    msg.setDestination(58345U);
    msg.setDestinationEntity(61U);
    msg.cmd = 226U;
    msg.op = 151U;
    msg.plan_id.assign("BJJPRUOHGIHHIJIRPVYZPDFMCQZPVHPKKMVBULZHCLINWOITZFSNVRODBJGCKAPKAAYDWTQHCXXNRRWETGMCVNBJLRVNMKTGSQZYCBWYUZGYLRQXDIUZFPSVAUZVSOLKFIXEUAQDYXKNAEULSRLJNBMMCNLFEBCSEDWPEQNLFJGMYAULG");
    msg.params.assign("GUZUBUMFHJGDSGGTCDFJXGQWYWIOTDRXTQICFVVNAKAIBAKOADVVMRHZNYTDXZONXLRRTYQMAWWUSWELJMGLMQDIBCERKOYCONTLTQIPXRJTIYEUUKZKSVFQVEGJFTESHQIWHBCWSCIZXZMCLZKBMUKOFUBAMRQYDUYVHYDNHMPHPEKCWFARXPLVSSVFNYLNBZYKGSHIZORWPEBZXADEQPKHMPDCLXTO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.08141214314167);
    msg.setSource(39529U);
    msg.setSourceEntity(3U);
    msg.setDestination(26116U);
    msg.setDestinationEntity(163U);
    msg.cmd = 86U;
    msg.op = 122U;
    msg.plan_id.assign("LSRYCYLMPKAXWDIJTQXFWMGQZJDRMKXI");
    msg.params.assign("QJNICWQOVMXOOIKHWMASNKIHIJDPHAPAPSMVYLZTVBEYWYGGUD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.0819614032497975);
    msg.setSource(5976U);
    msg.setSourceEntity(173U);
    msg.setDestination(55385U);
    msg.setDestinationEntity(180U);
    msg.group_name.assign("FHFRBLEQJEHEFPFZQODWTNZXYVQJMBUTHIUZBTRVWVYDKGAZNODGUPMAGYAMAQYIKQSEMDIXHWWDOCQNJAFIGUGCEZGFVYHTZRHHPKDUASLJOLONJKNIWKLSEVJQVOLCCWFYCSISPBLBZYTSQAXZXXLSIDWPVCKTSLTYAIYGFHZRXMERCWRPKNUMAEJRNKXMBJONBPUKMWOJEFRGKUXHCNXGLRG");
    msg.op = 63U;
    msg.lat = 0.9362082757991731;
    msg.lon = 0.40186993010497374;
    msg.height = 0.3275903242121554;
    msg.x = 0.9217382743693554;
    msg.y = 0.35162495811370886;
    msg.z = 0.058031743692327886;
    msg.phi = 0.06541350744107699;
    msg.theta = 0.9137439657902636;
    msg.psi = 0.3530561161990553;
    msg.vx = 0.9066312755983078;
    msg.vy = 0.13075603985684048;
    msg.vz = 0.721073086145686;
    msg.p = 0.18006985468688053;
    msg.q = 0.5564140246672495;
    msg.r = 0.02157198152098938;
    msg.svx = 0.30628832432752096;
    msg.svy = 0.7472241637948849;
    msg.svz = 0.5681458426248452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.618126306826328);
    msg.setSource(58168U);
    msg.setSourceEntity(147U);
    msg.setDestination(50103U);
    msg.setDestinationEntity(103U);
    msg.group_name.assign("KOANQEVSHTZQMXALGEVTGISLVVTWHQOPFFBYVGPYTNLWXCYDKMCXKJZHJRKZBOLUQSRTHXMJEAHYHUGSXDVZSRFXAOMJTWBGCLINUTJOKQYDMQQLCCUQPXIKNPANIFIRAZJUSWFLKNTLSDBAUF");
    msg.op = 63U;
    msg.lat = 0.644722317855317;
    msg.lon = 0.7925820618346201;
    msg.height = 0.3336110143130234;
    msg.x = 0.7509858450330416;
    msg.y = 0.9349450369095287;
    msg.z = 0.4976982126714632;
    msg.phi = 0.32821447643877133;
    msg.theta = 0.05723844947033041;
    msg.psi = 0.571299198996581;
    msg.vx = 0.3306299472268289;
    msg.vy = 0.5151101340411623;
    msg.vz = 0.39975965172041605;
    msg.p = 0.7470120622110702;
    msg.q = 0.458021551463793;
    msg.r = 0.8543474454699354;
    msg.svx = 0.2841135029145727;
    msg.svy = 0.3204568095921283;
    msg.svz = 0.24297965125996024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.9269516619788614);
    msg.setSource(10813U);
    msg.setSourceEntity(246U);
    msg.setDestination(29578U);
    msg.setDestinationEntity(208U);
    msg.group_name.assign("KALVHSNYJASAVKKRPJTBNKELZISOLWNBZBHDFTNBBUWASVHFHWQUPMYZMHKONYAYCGDJYFPEKGNYVDVGJTZEOENAQPJLGXQWSGSUOCCWOZEWPUUMZUHZWKJMHEVIBRMSPIDLUPDXQMDKLYFHONCLCRZQMPRIX");
    msg.op = 19U;
    msg.lat = 0.5777262047060399;
    msg.lon = 0.09849860769270069;
    msg.height = 0.4571239745743706;
    msg.x = 0.16370718136092;
    msg.y = 0.33398589596421546;
    msg.z = 0.34721358808537583;
    msg.phi = 0.799455880144149;
    msg.theta = 0.08840880754816505;
    msg.psi = 0.9435124050191674;
    msg.vx = 0.6343452883269595;
    msg.vy = 0.8831279114993431;
    msg.vz = 0.3149861347118673;
    msg.p = 0.9145479805705768;
    msg.q = 0.562680210485879;
    msg.r = 0.7527981596134131;
    msg.svx = 0.4394460935430078;
    msg.svy = 0.7602235140544438;
    msg.svz = 0.7388284779764869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.8263957888186133);
    msg.setSource(16815U);
    msg.setSourceEntity(143U);
    msg.setDestination(16480U);
    msg.setDestinationEntity(233U);
    msg.plan_id.assign("LSUDHINYMJOZVNHRDNDZXVBWZAQSJQIVCERMVWPNILUJKFTHZNETYQGEUEKPBGDIHZPQCVMAFEBGOKJCAATUPREJLXXCWQBRHYPWRGYEOMOJFXXKFDSVEUWLBFWDRACUNYUAJHTIJSQQCOGRPWSKINBGMRGOSFHCVKPKLALSTEUSOQWYHSFDKXNDUVIAUHIZISRVFH");
    msg.type = 227U;
    msg.properties = 161U;
    msg.durations.assign("YMVSXGORLQGECETVJJIVINBLFXPVVJXPQISWGYAGIPQGLHGQERICKUPDBCDPIWFWXMQMSIYCBVKTENOTEZAFAHGMRLHDVRBNOLVNPQIFWQJJBKMJWTQSLURODWWHOAPFHDCTMHKMODSZQOBBBEAZYTHDTGYVASZUACQNNHSUTYEXMSZPXACUEWZYDXNZYJXUWKJJKFLKPCXYUFACLRLFBIZMDJLZNFYXSKODVUNZK");
    msg.distances.assign("SEIZNYMGOATECDBFTSUWJFFOWDCXKKKWGDPJJJZOKVCPBQRCIBAYXMQAIXBHGNGMVMGLLKBUJVHGUCWNVKBYADLVQWXULHESAPYQVZMPTROUDZGYNQDTCDSRABAELSCZBGONXEFIWKUEPXWNQXZUAGQYCXSHWULDJEHTYQREDJWOTTSPFNZRTLAZJIMAPFQNQXHYLDEWVCSISRILHRVFPFKMVZ");
    msg.actions.assign("QZRQCSYSQKRUMUIJSHQSJIYAHLYWGMUBAILWEBXFIJHRHZHWARDFLGNMU");
    msg.fuel.assign("PBOBTBPPBRKYJEWHDKNJIOAUEFAMPOLXPAWPDUVDINNFROHITLCMVYEDGKQGBPFCXAFOHYSXXITRJXPBFHRRTQICWWJVGBTGFVNBVIJFYMQFYHZXSEIWVXZPSHESAYCVDGVVNLOLYKUQPKGYLUHTWMLGUMODCJSIZSUWJBNQXAJKSLWKTLUDZMCFGASOAZJCNXDRMZD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.35126876455128564);
    msg.setSource(25941U);
    msg.setSourceEntity(73U);
    msg.setDestination(36616U);
    msg.setDestinationEntity(37U);
    msg.plan_id.assign("KGHXENFYAXZUBCQGWLMRXYPRDUHPSZSXRQUZZQQDTHDCILFCJXRGOVIUAPTPNRNGUCXEO");
    msg.type = 99U;
    msg.properties = 71U;
    msg.durations.assign("NVCTYDHFKAVIFETHYDOUJKXSLGIJWTQXJCEPLNDJPBCXIWNIPZBESGSUTLXTSBRVYGLYDXLNFZARBACODZF");
    msg.distances.assign("TCPFWTGMEBPPKVFFCHNKRVZNUYXUYEQOGULNBWRHAQDCVDMZNMHTQAKFOLJXJXJOJSLTSGRSBEYUAQAUBXUZTSVTWJERAMIWPTOSPXXIUVDUMOFMTWEDEOMRLZWZLEMKIDQPBCNCVDZAXLIQFBZRNNGTVYZZWILIPHYEAFTKORUCRSWHJFDVHXDHMSXHNACLGMWFJIGLOBYEVBQUKSLCQARCIGX");
    msg.actions.assign("OVMOVHHTURJJZHRAKWPMJNDXENFLIOQSEXFMYSGJFADLINRCANNNHAESYJLPHPYIWNHCARZODLXMAHGEPWRYSQCGFKPRBKTQIGJZZDPZUDKWKVGBVDFVCQITZAWKLIVDPBXFWGWBYVETMDJOCCBCOMMYRQOIGDCFQUUHGOPHETVHVIUIBZEQYZXDNBKEOQYLALGYUTCTETKUXFUMTBRWMPUQXRRCAXMBQYGSSWXJLPWFBLZ");
    msg.fuel.assign("ELAINKWJTFRDCVXHEIFONMEDUCCJHPFQUQXQTPAHNZDUZAMCGIRUEYXIEXVQEZTORAQWTTTXRSQVSFOMMYSPBZPCNTZBUVFSXOKJNVHEOYOKRKPJFDKDZPLHYTBLBRIAMOCVRGYKEHXIDMNDYQJOGPBBPQNFBULKGHXZAHNTWYTUVEIBJGVSLYIZJYMCFJMZGDSNMOCXRAYAGBMLBSSPGQRJKSSDEAKHDWFWQXILWUWJALCUFUIPGHVKZCVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.46995231684718364);
    msg.setSource(49010U);
    msg.setSourceEntity(128U);
    msg.setDestination(12004U);
    msg.setDestinationEntity(231U);
    msg.plan_id.assign("RSRKGGGJCYQUKQEQWVJSXKFSAKYLYPVFPNBATIEINYGYQURPFUDVNADJCDPBMSWEZOKNGWUSUVCNSBGCZDCZXZGPICOBTIBBJXIXFXOOLQWSJREOESGUZBJR");
    msg.type = 154U;
    msg.properties = 17U;
    msg.durations.assign("QZOQSWLCGUHQOVIAWNDIRIGYCFMTAOJRXUJLNXQIIETUTCCGRTEIVPHQASBSGDRCBDHPZDOHHFPBJDJPWOQYOZPYHLXUGMEWWYHFJSKQGMZVZRVSPREWLAFKMZGIDYTYEUJOXKVNWDDBQAHLFJYETPSAAFKULNUTOYFWDOPQTBSKGAVJUGARIXKFLCKUEAWSBVQRFNKCCXTTHNBMYXNJUGLDRZBMN");
    msg.distances.assign("UWTILWOAYRDPBQKZJFOICBMOEHFLQRFHNSYZNRQITAZWXSAWCUDSANLQBHBUHUWKQVPRTJMZIGHWULMZCEVRXIPRQSXBLJPUBJXOMBMUKYFWZIEDACQOPGKHDVYESXAGSFUKRENPWVGNFUJKXNUIHXKCRYPRHOIYVVIDSRPCJYWQEOGFNVGCHFIXSEPFLCGQTDZMSLJBGJVOEMDNQAXYFCSATV");
    msg.actions.assign("SCPJYYCFIMNSGGGJUJMVLVYSKPKRRBOZZGKHFXTKURXIZZRCTUZTADMLGUQZWPFBIHOPOXGVSPBGAEZCOHJHVYKFAIXJZRDEMENHGWNCCUDAQAKTMDOBOLZUKNFEUUOBZXFTEWJWXPBUQLASVJVDHLDLJWIYCOWMHGQTNTQPNFEXQQNRIBEOFKYBISPDRTYCAWPAITXDSYOCUSPRJNMRXEAVEMLMVXNSNHEFW");
    msg.fuel.assign("GGPTKCBNUQEFFNKDZHRGVFHBOMYJXMSYDQYUFSRIEVTCSLCXODZTGXDDOAJVKGCDWNYRKIWJGPEMMKXGAQMXLSHRAPKVJGZZSHEBNHLERPUAMARWWVIYEFTEYTQVQWWSUZLQLDVSBEHPOUBUVJQWGJYZTPJHWATDAPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.833918284391967);
    msg.setSource(53250U);
    msg.setSourceEntity(78U);
    msg.setDestination(26630U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.3169372745002479;
    msg.lon = 0.9155302237793264;
    msg.depth = 0.5560032071481821;
    msg.roll = 0.5333931300593695;
    msg.pitch = 0.6035913760058839;
    msg.yaw = 0.10644044626675309;
    msg.rcp_time = 0.31098184594669065;
    msg.sid.assign("GZRSGVBDKQEAMPLWZRGEZXDBHOYCATGWFQIRZTJBXBEUCZKFLTGLDOJPQSBIDOFQZHONORJNHKPHRYHKRYLIXUJWMNHSTNKTCUSGQKSTRVVKDVRIXTUDEWTADBYUNQLGWVQENGTAQSPBPRXQUSFCLFHUMWMWOJSD");
    msg.s_type = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.06041092233161349);
    msg.setSource(58526U);
    msg.setSourceEntity(107U);
    msg.setDestination(6150U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.7438993525638138;
    msg.lon = 0.3532621079497993;
    msg.depth = 0.3491560438002643;
    msg.roll = 0.30764501083803886;
    msg.pitch = 0.7910874875621705;
    msg.yaw = 0.7500397673729966;
    msg.rcp_time = 0.9289885059864926;
    msg.sid.assign("VNOKVLNEJCAGKHIGQKYDVOVFNPRUJRKHYPSQPUNFTUVIDEXXSP");
    msg.s_type = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.704929753267535);
    msg.setSource(37131U);
    msg.setSourceEntity(80U);
    msg.setDestination(46216U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.9342505253903867;
    msg.lon = 0.49663891815684014;
    msg.depth = 0.4665971860545032;
    msg.roll = 0.06501120842479546;
    msg.pitch = 0.6848728908357236;
    msg.yaw = 0.06372812244996073;
    msg.rcp_time = 0.18424571000375;
    msg.sid.assign("PDLGXIYQGACSMAODFZTZUZAWYOFPSEXHUFJRGCWOEEIMEGTLCPLMAEPYURZDHJKWVNVQKFIRXIMHRGBKXECDBJOWLPBNTXNVMANVFLWTERYAJEH");
    msg.s_type = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.5562181148160316);
    msg.setSource(37603U);
    msg.setSourceEntity(158U);
    msg.setDestination(1324U);
    msg.setDestinationEntity(58U);
    msg.id.assign("PMCCWTTVQVGWRMURVSSJQBWUFXEXLNLDENFFABXZZHATBSFFBUUDVDWFKTLRQXRNCWKLOIJAMWOSPQWYRRIGANEHJUGKGVZPJCTXXTCYYECFGXUMQMFYJXPZUJRJPNEYNWIHZAZCMLHNZKEKZLNLKDOQBMDOYOXHKPHIEBHPPGHLTEOBZASTDSOTAAC");
    msg.sensor_class.assign("LBUGOREJVPGDGACCWPZJFFSHLUJXPQHNYCFECVGFFTRUMMBMZLQHTTWATNISPSLNVJBQSUYJONJOEOENMGPBSIDTWREAUXYXHRXK");
    msg.lat = 0.7085096239658798;
    msg.lon = 0.9862752015324322;
    msg.alt = 0.7511997079594926;
    msg.heading = 0.2848203886845746;
    msg.data.assign("OEXLIUIYPOPMTRUYRBRVVTTWQXHFWTLPSYFQPTKIJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.6898372049140676);
    msg.setSource(58446U);
    msg.setSourceEntity(146U);
    msg.setDestination(15846U);
    msg.setDestinationEntity(16U);
    msg.id.assign("VYWMDWBJLKHZUXPVFNPFPXRYYNAUMVVTHCQFQLKNHRIJWZVHBIEOWOUVMKVLLTTXYGIIBDOXHZJCECWGMDIFFDNDRWNXLXCEKPWICHNYEUJIPQGBUYUNYLHNLTGTKIAFIGFXMRBSVTCMTQHEQSATORZERMAXUOJMJSQSNCFDGQZOMEAYXIRVLUHKKP");
    msg.sensor_class.assign("PKVFJYSQDFXOHDERPPOAAIRFUYKEHKHLRZZXJDGNVIWGGMJSYGMXOIXOMESGZDCHZNENJTMVYJCNUKCQPCZRKWSKFUQKTGCQXAABBOHJSMBELYNVTWKZFNTMZXLMWDJAUJHBPLTEBOVVBTUVFLXRAJZLUTSLZXDWFUPQMSEQLHAOCVJBVEYGBXCFWHNYRHLNPPBLTXMQHYNYKFCRFDGQUEP");
    msg.lat = 0.32276937797981153;
    msg.lon = 0.27014066811377235;
    msg.alt = 0.984506599246224;
    msg.heading = 0.654210869699106;
    msg.data.assign("HMALLIRUPPMKRJJDFXONDGCSDDVPTZLWHRSWQYRJWYIVKKHRVWXZVNSUFUXZUHAXMKEKBYMPUEBVAECCLBFAQOICXIAGECHEGZASBREPTG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.08170920201759124);
    msg.setSource(39548U);
    msg.setSourceEntity(145U);
    msg.setDestination(17612U);
    msg.setDestinationEntity(237U);
    msg.id.assign("QSOWCUOZEIFRMKRDSJEAPGZAANLIOYKBYJZQSLHLLOUGFOVOMQIIXCYKEBRZTVHGEUSSQQSWGXREAIFVVZIPXHIBWTDDDLNPXJNEZKMSDTPLNZWHNECVCKGUBQYCBWGVJTRTXBPWPLNMVRCUMJIQNMCSJOWPB");
    msg.sensor_class.assign("YSPAYUIIKFSRVOHIDDTUFNERMXCKYKJDZHPIWZDZDYPQNPSGNGGLYCZWCZGTVLZKJZEFQKTHAARNCUODISJWVAMXKVSHDTJVTEJQB");
    msg.lat = 0.5681748111393151;
    msg.lon = 0.5047054064663027;
    msg.alt = 0.786486702308145;
    msg.heading = 0.842701545181412;
    msg.data.assign("ZRZEQDWQYUFGJBNVFVXUFMFTPLLHWJAHLFAJHLDRDMCZWRQESOTOSCCTIIPOGXKTDIDOYCIWNYXWNUKXHJROZLPKXTCGBXMRQSVTQOVRZUJYIGYBJQCSOUILIEQIOUEDAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.8837583955028142);
    msg.setSource(16912U);
    msg.setSourceEntity(126U);
    msg.setDestination(26292U);
    msg.setDestinationEntity(166U);
    msg.id.assign("CZNBDTKHGRNEFVUUQZFIBELEGXUTSCRYICPTPDXHQPDXYERCRTISLTGFWYQVLXUYRZFTKLKUKSGGYISNQLQVHFRFMMQGAPBJEKWXWGJMEBQARPEPLNOCGZEHNAMMDQGVHZOURCDZKWSAWHKBFHWQYBPNPSD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.867106397986685);
    msg.setSource(25998U);
    msg.setSourceEntity(61U);
    msg.setDestination(419U);
    msg.setDestinationEntity(147U);
    msg.id.assign("LXLGANAYJTBIPGUARWPQKNSKLREAQMEBIGCPXZWRCZHXXXZQOTXHNMTDIAEJEKFUCGRKSIZTIQXYSEEPFVUQJYCSQOUCHSMYWBRZKMPJWVDGSMUVOFELFWMYGPOOHWMXVDLRIOTVTFGDEAYNKSZBVHTFIIWHOBKDXNQPRLYROSUDAQATNNHSDDJLOYHNKVJGVYHKBCIKLVOEPQEDMZJUFRRBNZUFWBQJFSNCBZLDBWJTUAL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FAAIXHEAPCQLCVLYZFNWWWSUGWGZZZNSKCNNHBNBDAYOGCSKOWEG");
    tmp_msg_0.feature_type = 83U;
    tmp_msg_0.rgb_red = 132U;
    tmp_msg_0.rgb_green = 157U;
    tmp_msg_0.rgb_blue = 58U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5301529559503331;
    tmp_tmp_msg_0_0.lon = 0.5561023995888426;
    tmp_tmp_msg_0_0.alt = 0.10328262280561051;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.5072738398746953);
    msg.setSource(61942U);
    msg.setSourceEntity(158U);
    msg.setDestination(48232U);
    msg.setDestinationEntity(64U);
    msg.id.assign("KOJYULXOLKCXGHGNIFAIDVLPUVFXHWNMRGYFQHIDVPELRWNUYKSGPMOEANMTGZKQQICDBTNHUAZDDOLMVGEKIBASCYAOZFLYQCBHZRWGSMVUIFEMBBNRAYQSSHYEPPJRVSPEJQBGFJTCGHWKKLSULZOPKTANRRRFCCFUXLAQCBAXZMIJCWNEYNZRZSPOVWGITOISFTUNPDXEDTXJMEBWKHUHXODWDJVWTVMOQUYABYE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QZCDQDSIYZASCZQEPHQXUINFKSKDWCKWUCFCZQXUUZMJYUMJTEGLZHWEMDORFOTJYKXZPNBKKIAMPSIDDLZATHWMBNXYWCJMXTPNRVGUFALNIVGYSXLLJPNKUFKUDEEACWFAAWHUSAQYOVBBVI");
    tmp_msg_0.feature_type = 236U;
    tmp_msg_0.rgb_red = 53U;
    tmp_msg_0.rgb_green = 166U;
    tmp_msg_0.rgb_blue = 152U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7460247524943203;
    tmp_tmp_msg_0_0.lon = 0.4120955415180688;
    tmp_tmp_msg_0_0.alt = 0.6535186920252051;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.0314803618278493);
    msg.setSource(31364U);
    msg.setSourceEntity(237U);
    msg.setDestination(54891U);
    msg.setDestinationEntity(80U);
    msg.id.assign("BUCGSARFZHYENDPWJKFPXDVBMBBOEBLQIOSN");
    msg.feature_type = 108U;
    msg.rgb_red = 249U;
    msg.rgb_green = 27U;
    msg.rgb_blue = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.4375580283784588);
    msg.setSource(3965U);
    msg.setSourceEntity(29U);
    msg.setDestination(61818U);
    msg.setDestinationEntity(146U);
    msg.id.assign("YDDPOHIHCTNGLOXKMCBTQCFVXJVACULBPHPEMLDBXTAQQAUGJYKJVMVZSSWDAVTFIZCTFWCIZIHIZHSWJCRYSEREPKRRIBVNUMSJQHLXGBTNYHFGQOMOGWQROYFJMJKDUOJSGMAXFHDRTIXGXEWYDQFQOSAFMLTYRCUENGPFIRTVAOAWCJXDPSEEKLNWZZUAZVGUYJ");
    msg.feature_type = 101U;
    msg.rgb_red = 112U;
    msg.rgb_green = 30U;
    msg.rgb_blue = 249U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.689417620302583;
    tmp_msg_0.lon = 0.9354862514659864;
    tmp_msg_0.alt = 0.7230943484060695;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.9289866045963698);
    msg.setSource(47512U);
    msg.setSourceEntity(91U);
    msg.setDestination(19185U);
    msg.setDestinationEntity(179U);
    msg.id.assign("UESGZGPICNQKUUUWDKTBUHARKMEWZORPLQIYOENAHMERMSBHCHXFRKVNWAKDBQQKCCBAXNXGHVLBVYWJRTYAJZSAIQTYGGDQKMYJXOSDZGFZPQMXKPZNISSEAYPXJMLBNLCRZHIVEVTLOJPLHCSXFXBTCRHCDDGKUWZYZNEFAEHMPHCRJJTVIFUWCOTWOOFTALUM");
    msg.feature_type = 52U;
    msg.rgb_red = 25U;
    msg.rgb_green = 41U;
    msg.rgb_blue = 143U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5392820786236715;
    tmp_msg_0.lon = 0.17374797269445497;
    tmp_msg_0.alt = 0.6596285607592078;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.617299833155036);
    msg.setSource(43947U);
    msg.setSourceEntity(149U);
    msg.setDestination(32460U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.10872289978470395;
    msg.lon = 0.8826112861550428;
    msg.alt = 0.35286817972747053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.888526437130152);
    msg.setSource(35896U);
    msg.setSourceEntity(15U);
    msg.setDestination(14457U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.8293505949787432;
    msg.lon = 0.14847756886445385;
    msg.alt = 0.6168093031551967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.16242973226822222);
    msg.setSource(34475U);
    msg.setSourceEntity(157U);
    msg.setDestination(14880U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.6456032150353908;
    msg.lon = 0.1680447448980048;
    msg.alt = 0.4708540322335546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.3521592628589506);
    msg.setSource(28110U);
    msg.setSourceEntity(122U);
    msg.setDestination(59086U);
    msg.setDestinationEntity(147U);
    msg.type = 57U;
    msg.id.assign("HHTSJPXETVAYSBLJCKGZWQDVBUBDTTXFQMWQVGPDAQIKAYBDGCXEHKJZYQUUILCAEQGOEKUWFIXFSSDYIFFUNMFNWJNZYPPIILTKXTPXWLCEUCAHTOBRRSLNEOSHCSGMANLGTEOMENBFXKKOLPOMXWWOHBPYZSAVIHJHFPURBMIJVOUOQRZYSBMAWZBVLGR");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 1718821208U;
    tmp_msg_0.state = 192U;
    tmp_msg_0.error.assign("JDHCFJDZGNYOGXIYRZMWYOSWTEHTKVQBSNCGIMSNVPMBUERGMRFCJPVFUTLDUAZTSDAICJQGYHPFFYPDJELBOIQZYSYRTXKEUVLKHVEWLZNLOTCSVJCPVAHABEQZOWU");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.3297766527700121);
    msg.setSource(49684U);
    msg.setSourceEntity(146U);
    msg.setDestination(39417U);
    msg.setDestinationEntity(112U);
    msg.type = 59U;
    msg.id.assign("TINOKLMHAXDHJFHQAF");
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 13U;
    tmp_msg_0.op = 128U;
    tmp_msg_0.err_mean = 0.6044018309642115;
    tmp_msg_0.dist_min_abs = 0.0279573335525799;
    tmp_msg_0.dist_min_mean = 0.6922811781161441;
    tmp_msg_0.roll_rate_mean = 0.3911967958279713;
    tmp_msg_0.time = 0.5204149609556523;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 114U;
    tmp_tmp_msg_0_0.lon_gain = 0.3150513999728819;
    tmp_tmp_msg_0_0.lat_gain = 0.5657109926997612;
    tmp_tmp_msg_0_0.bond_thick = 0.3145673755339853;
    tmp_tmp_msg_0_0.lead_gain = 0.7411567984049487;
    tmp_tmp_msg_0_0.deconfl_gain = 0.8072067257213965;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.5600874164420003;
    tmp_tmp_msg_0_0.safe_dist = 0.538986583834434;
    tmp_tmp_msg_0_0.deconflict_offset = 0.13352008385697722;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.6904982749568209;
    tmp_tmp_msg_0_0.accel_lim_x = 0.6317567795053629;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.3124558426843609);
    msg.setSource(19637U);
    msg.setSourceEntity(68U);
    msg.setDestination(4738U);
    msg.setDestinationEntity(199U);
    msg.type = 198U;
    msg.id.assign("WJAPTPKUVONDHWZBKVUYTQGKMYZRFNEVQSHCPOSCAYIVMFTCYLWUTIAWPBHHLYMAVNGQKEUEFRLFPULBCLEDIIGCGDYYBWVYRQYAIWCOKRXAMEDJTZCGPZCDOLDMLWNHGOTAOHHEGDTDXFTVXKIJHSXPJPXKSWFQRUDSZSIWLBMROFQRJJCUFEMMRXNGKREUYHBMZVNJBQLONMNIXIXUPFQFCGJBHXVSLZZXAEOAEWJBPKQDNSNBZ");
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("DSVKHOCYASUHGNCJJSHXYVNTXTWTOSKEZLBRDMAKPYGXBHQBLTVTRSGDYDHFJUEWUWOLEABEINNCFDTDHSBPXCKEGXXQORPIGWRAQWXNJAWGEIKYUKFYAECNLAZFLKUZBBPQJPCLVAOTSUMQJOCKWRVHMMDFGOECSJKAPMMQYNUASHRGWILLKFUGJIMHOZZIPZDBQSJYFBQTGWZV");
    tmp_tmp_msg_0_0.lat = 0.15945552611471903;
    tmp_tmp_msg_0_0.lon = 0.5180765329263;
    tmp_tmp_msg_0_0.depth = 0.7769495276781831;
    tmp_tmp_msg_0_0.query_channel = 106U;
    tmp_tmp_msg_0_0.reply_channel = 5U;
    tmp_tmp_msg_0_0.transponder_delay = 70U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.46795703364404284;
    tmp_msg_0.y = 0.055970391435726574;
    tmp_msg_0.var_x = 0.8477820804965785;
    tmp_msg_0.var_y = 0.13910841929334794;
    tmp_msg_0.distance = 0.14246667735955054;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.5706470566729778);
    msg.setSource(30275U);
    msg.setSourceEntity(13U);
    msg.setDestination(54588U);
    msg.setDestinationEntity(245U);
    msg.localname.assign("KNPOIQCGNTJFBKHYHAUGVZNKLONUMCDXLOJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WRSGEKIDTPHSQCNSBGHMUBJOFCNCGWUOSOKUCFTMTLNPDNJZEUOWKZXYFIUHHEKFGNDBLQJLARYTOYTTADLPUWXVSIYYTEHVRRZQVMXCHAUFTQJDAPMIQJLHM");
    tmp_msg_0.sys_type = 235U;
    tmp_msg_0.owner = 42842U;
    tmp_msg_0.lat = 0.6176618793339713;
    tmp_msg_0.lon = 0.47245194317892747;
    tmp_msg_0.height = 0.8324248227490939;
    tmp_msg_0.services.assign("IVEXRKFAHMIFOXYFAJVLDBANIKYMCPGCNHUKZKGVWLVATTPXHQKCLBLBAQTADRPDRANNZRFEXHTSDDODXZWVSFGKVLBUWPFSCOUBIJWTNSNIBMZJCYWYCJZXGVEPBWDHQGUEDLXLUHHVJIOGGYIUROPHFCGWNNTEMOEUFQNXKNHMYFXBPRTYIQRSZDKLAURJSYEQPSZYOERLAEVIVCWIEHBXJSMQRMJ");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.11335145963327131);
    msg.setSource(42734U);
    msg.setSourceEntity(53U);
    msg.setDestination(29274U);
    msg.setDestinationEntity(103U);
    msg.localname.assign("GGKSSCEJITUEURPTKWZLYKCOPRVHLFLLGXFEQTRRALAMWBEDNNSHOCL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.6251457051025692);
    msg.setSource(14729U);
    msg.setSourceEntity(236U);
    msg.setDestination(24365U);
    msg.setDestinationEntity(11U);
    msg.localname.assign("KKBQTJLMCKEZTHZGIZPPCTFUIVZALWHIWITJRXWVDUSEEDLKFYJKFEOSTCOZYPZZORQSSRXIBRIMYLWQCAJNYXPVUWOMRGPEADZSIFLRAAMSUHRSLJJBCNVOURDEUI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FBZBFIJQDUNDRIUNVWCSXGFHQECXTSEONHXZKUELMLVPRGENSMZCOPRLTYNLPGHYYKSDYFJLJLVUHALCZFXRVNUXOGDMXHKEAYMVAUNJPWUEYKPXIHOJMEWUFDHMOFRCFDNORTTERJJZOBBJDQM");
    tmp_msg_0.sys_type = 93U;
    tmp_msg_0.owner = 3732U;
    tmp_msg_0.lat = 0.8025126325749653;
    tmp_msg_0.lon = 0.39473075980216643;
    tmp_msg_0.height = 0.8608777132148248;
    tmp_msg_0.services.assign("BYIZYGEISJBNKCUYLCQYPKKCWUQUCTOFRQKJWGUEMVZIEVYBVXIUAGS");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.7377692477224801);
    msg.setSource(12379U);
    msg.setSourceEntity(99U);
    msg.setDestination(18970U);
    msg.setDestinationEntity(3U);
    msg.timeline.assign("YNRNORJSTRENVZTUJSIBKXHPQJENOZOPQZFRHYNYYBHGLIVXDDIUVJHPXXHWAJBSUXDIMWFSPINQCCQWJUTOKIPDQBVAIGBKUKKDOZBEEXEQKPCUZSZGSTEXEBFLWWLCCQDDYEVWQADFBCDFLLQGMHCJTLFMJRRPWTZDNRBSYZPNHKFAVSLVRCMAWYIUOCIGOCGXAGULAFRVHYWGMBETKTU");
    msg.predicate.assign("DQNXGFBBPWCKVPVKIPOLESDZAHXQSJORZFCTYNAKMXRYQPPAACVUBVWENUJPLSQDKDSTIQIRMWBHRXGOCGEYIZLBRLJNBAVOLOAYVKIPZGJDAF");
    msg.attributes.assign("KHULABRKNPTWCKHZSUNOZCNXSTVQPOJUDYZEJUTDAKPPTMTMFFYCVGCOEWXEZNEOURMLYNPJDFVBPQLBGDQPMGGLIJNIBLIRKHEUASMIJFAARWXISFMXGQXWDCVRICVJOHIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.2604337752832778);
    msg.setSource(43695U);
    msg.setSourceEntity(162U);
    msg.setDestination(15092U);
    msg.setDestinationEntity(121U);
    msg.timeline.assign("ZMSYBOAKIAUIOFKACRZLEDPKWNLUGDWYUHPRTMEAIQQBWNENOENJQKKPPNZQWECUDCPXAXRLHUSTYBFKCSDMJLYLSGCWOCKFSVJNMTHXLAUMOIOGXZXVNINQJD");
    msg.predicate.assign("HJIUFUAMTPWLXZSIYEDOZPTHNKCCYIEFBTDWFQCMMCXBGHMWPUHBCGRCFTSLPJXRONRCSMWMSMGHKIDOWUHFXCNSHYNJIJZZPVKKFLBHVQTDMJLCNORIQEKUNPOSZIYBMAZNTIKNRRXQPNGADHETDVZXTMEAYRSYOQHCVLW");
    msg.attributes.assign("RJDAGXBMGADIIAMCLFETUVMUOPCRDZJEOKLZKWXWTDKLHMQXMEONPKUEWQZHSBADEPZSWAUDWGEVQDIJRRFKPZCUFYMDVVBGSXATPRSITCLPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.1151143499476952);
    msg.setSource(26305U);
    msg.setSourceEntity(151U);
    msg.setDestination(25810U);
    msg.setDestinationEntity(252U);
    msg.timeline.assign("WVXYDAPIGNRAZUPRQYJMXHPCBWCZLTLTSODHAXRWEEEHQQLJHLWHEYFQPLHSGPBTRIADIORQFOGNJFUDSNVZZLFNUBZKGOGHKKJGNVIVBOAUEYLIHNFVIGMLIMJVCEDJPGCGYIWZMFHWZVUJUQSRBKFWPARQOKVEYTLSVCTORXFASCNTJUXXYKSKQGPNLAODQBEAYOXTCBCCADBQ");
    msg.predicate.assign("IEVEVZBSQJFXEZPAOZWHNQGLIXCGDFNJMCCFSYJIELRJAPLKGVWUBMBYMOZDZQRWEELKAJONTSJHSPRDEYACRINVMSJRVPHGOLGDYTWTTIDUUFGYTGIKWWIKWLAEHXUKPDDTZIVMHPXKHMNCCUKXZGSIYHDOBWMUQKJNNBQSKCYSVOM");
    msg.attributes.assign("YSTPRUCZHWEZAOROGJZFWAIGJPSQLUKZVBDVFTZIIBQOWCTVNSRQFXZXEZEXJJYHXIPLDCXVOHGSYIJVWSNIKMONXGQJDNVYIKQKIRDDLMQMMWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.2643701690852872);
    msg.setSource(54261U);
    msg.setSourceEntity(107U);
    msg.setDestination(45607U);
    msg.setDestinationEntity(106U);
    msg.command = 64U;
    msg.goal_id.assign("OBMNFXGCMDSTBVOIIZJAWNVKUSQHXXVWFPQWEWQTHRLASMREZJJMSUGQEKBSVHUNMNCIDNQTWCOWGEEFSJRXTDHFYBRDRXSRIYOJJLTZDCOGHAPDHNKULRDLAFFVMB");
    msg.goal_xml.assign("FASNCUHXHDVLOQCVNMPEOBKKQGMHGFWLJPVDKFCAFLGMFWPIOFTOJTVHLPUIQYYLBGNDRZREODSVCFTMZNHCVFXSOUCXQWHAOSWYEJLBPKQSLIRCEINKQSXXYXNTARMUPJRRGIZBSAYTIHTKNZGNBMAJPOYWRQUVULZPXIBUYXMIBKZDCSGTXMFYQAYSUERVMVBOWGBPPUWFTHWIBEYJKMNVCUXRJKEJDONGLEQLHAJDTCZKAZAHGWZDWREDJQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.7892045059407838);
    msg.setSource(12545U);
    msg.setSourceEntity(56U);
    msg.setDestination(51808U);
    msg.setDestinationEntity(166U);
    msg.command = 10U;
    msg.goal_id.assign("PBXPBGVJRDKEMKQXCAJSUALGADWZQVJZNEAGIFTIUEPGSXX");
    msg.goal_xml.assign("EWEBXJMHMDRPDEIUOFEZFIBYJGSUYCHJNDQPLZUFGYHDPHASNBGXJCFLIVDVCWOZTHJDHBXZARTSWLWTCAAWXCVDSVJWMYWOSPXTILXCDQCPDCOAKJQRZPXYFOKKRXPMNEAKBNUZAEGJLWRRETEMCVRJSFVIFHVNIINTKXPDZHWFQQGZFTPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.5435998909014585);
    msg.setSource(7054U);
    msg.setSourceEntity(172U);
    msg.setDestination(19663U);
    msg.setDestinationEntity(212U);
    msg.command = 240U;
    msg.goal_id.assign("VGEXIRBZEXUONBJHUKDZZAUZQQMSDK");
    msg.goal_xml.assign("XOSCGIMZVDQMLHAABJMQJGAAPVMORBYJJLVRDXINNMDTBURNYHFVLOVHZUUDJGLBHVGESZKZXJVPEENWQOTKLPPTCLHITMKHZYWZZDKNFLCJSPQGPBSOEAXYXVBUJDRRFYAWEFVWMPAFSKFWJXCICQYXVNKQLSZDNAYYRQUFKSDPREZNOEUCDUCCQTAWEBUKWHORMFTXLWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.4932977575374413);
    msg.setSource(51382U);
    msg.setSourceEntity(179U);
    msg.setDestination(16839U);
    msg.setDestinationEntity(193U);
    msg.op = 171U;
    msg.goal_id.assign("BKJSHOZNMZIFRUDKXZYUSWNHGIDKKMGLXMVMWKWSHAFLTOJAUDRPFZRTTP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OIRBWIOLGJGNEDFYVWASKQQCYSPNADRKJAOQEVPZIRHWTFNTPAXWHAG");
    tmp_msg_0.predicate.assign("SJYUDJNPKNWOYUBGLUZFVHHBDVOUWLVXAEUQTEHABBKIJMMXFQVVGVINGINBCMDZFPKBPFVEZWSICEAAWAMLKRUJTKYYMBVG");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.18786286333884428);
    msg.setSource(56577U);
    msg.setSourceEntity(18U);
    msg.setDestination(18661U);
    msg.setDestinationEntity(163U);
    msg.op = 159U;
    msg.goal_id.assign("NMCTXXIIQXYTZDWURQPIHZNJCFFVWRIYWKEHTKZCCGMFEHCSUBCRXOGYBRODINCLKPLFOHIBARJSFQYYAPFLGLKGWMDJFUQWYUFTBGVPESSPOUJFZOTXUVQHXUNXRWSKUACGMSYRMLTGOLHAAVZHLZGLIROJLJQSRANEZKNYPHNQHKXDHWUIYDDCSPOWMBTJWGIKSPZJR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WNHZIGWHAQEWOAMOHVYXJHTRWBBJTZDLFLSNYVXUPNDJPNUQZKZKXUYTNWPGZKEAPDKCBKXVZGFJYQHTBMDTREBWTLWUUFGLGEIYQOIIQPVLCKBZHSAAUSYSNERJNSIREUFFVNMTQGEZOBAAXGRTVSKPSYDVTHJ");
    tmp_msg_0.predicate.assign("KNPDOWADZIXWLCNQXEYHCLVKRHGROYOGUTEATNSBUDQWTGHBTTDNNZCIKNOFJVGDWCEF");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.16959615681164109);
    msg.setSource(1340U);
    msg.setSourceEntity(144U);
    msg.setDestination(13666U);
    msg.setDestinationEntity(12U);
    msg.op = 31U;
    msg.goal_id.assign("YAFYRGBAGKUVKGVNSQKXIGECOUDGEZZJKVCABIBMXVDKCHFQQXNOJANUWLGXEKKTPKLYXOZKUHXWGHUQPKZAOSPLMRDNRQYHQHMMHSDFFRBGWCWHNPCMJEPYMNTAAFZVAWTIXTNWEFATSZCAIMUVEBFJBOUYCRWZHI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YVHTVKOBSPIIWUMXYBJJQJUYSGRSKIPCYKARLQXYZMJEJKISUXPLILCDKQQHCR");
    tmp_msg_0.predicate.assign("DPEBTGKWKLPQZLRRYDCMEROJOMHHPKTOGAUUWCIBRSBIXCHLJUMJWOCEFVMKBNVWIMJUSOOSTPNDRIUXUKOEJTSNUGGYGCWZHZCQDAZNBMOJDSGFFWLENAQLZYHCQIYKEIOYZVIGCBQYNEBPMOTVMLFPTFMDAVNZJTZNAZEIXLWDVRYNRXKPXVAIHTBGXSDRGJUDZXVHQKTFGBLDCQBIAUVKHJTAXXHX");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.19997171797113578);
    msg.setSource(34699U);
    msg.setSourceEntity(200U);
    msg.setDestination(35847U);
    msg.setDestinationEntity(140U);
    msg.name.assign("SPLSNEVPAUWIRJZABARNLYJANVTQLYGZGTKKBSYUKDOXMWSBUHIYTDWFLZAJVMTKRGCUJLOEJIPFXULFMXVOJUXMCDSRUWNGOBHCA");
    msg.attr_type = 235U;
    msg.min.assign("ESBOTIOJWLEEYXZKPKNKODXXHKYXQRBXPLYZHCNMAXU");
    msg.max.assign("QEMINDASCBFRFIURGWJXZNYQADUGNJZEBTBNAMUJKJYFDKLSPTRSGVBIJQOYVUGRKSTJERMZNMNCSMCVKRLCEQMWPGOKDHNFGHEUVIWSBKBNAOUYVHUPGRTCFOSXCDCWSVXVWVKWPFIFIFDZZUWTSZYZRMIADZBILHGAIXMLHDXELXYEPBHQVLZOFZKJTONHXOJVJTAHETEKQQPCSXBODRGLCQAJTPXKYYWWXMYLIROUHCQNY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.6300575164243267);
    msg.setSource(11365U);
    msg.setSourceEntity(83U);
    msg.setDestination(20036U);
    msg.setDestinationEntity(54U);
    msg.name.assign("NYSWPWPPJTLWFLXQNBEXKAWEYEJZJQSVTDIGKBNEOEIADKDOBHORKALMMGOKJGGGSVFLFJGGRPAMCXPHLYIWZOEAIAHHKJORWTCRNQ");
    msg.attr_type = 237U;
    msg.min.assign("BWRWLJZYDIIGPGMBYULKJGFRDJIFQJHBAWGYEREIBFYQKYLLVBSWSGAIZBIEKQGUZVQDHEDAMLTKXRTDTNBRDISJCMSITFEVGTOGCOHURBKJCKANTAUCOZEXYEUFXNTMQNPEOCOFCNMLYAFTPHPHZNKOQJSOPVDJMEPALCNOCHGWONYZZXSZTPUNWQ");
    msg.max.assign("XZJBLASTMHOYARIBTHFCPIEVGDKRFCJEVOXZSPJOGTJEARYQLRHZZGDKUYXGRYEOHUVQXNAEPALHGKCFMOIVUJXAQPLNJLRGHZOFYITIAQZUKRGCUVEDWDSBEVUXSBWZVDQHCNWCWSMMVISICFBXSCBEITPMMSKGPNOQBWVNDPULEKEXCSVHLOAKDMRLXBINTUNYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.02782536843656591);
    msg.setSource(28185U);
    msg.setSourceEntity(100U);
    msg.setDestination(21951U);
    msg.setDestinationEntity(187U);
    msg.name.assign("XMTFMMCVZKENOJBCYJXQVKCCUUFDEJTADRERNIBWLVJGOSGNQXDEAAXTRQAHZBJXSTVXVBFUTNCNUTKHISAIN");
    msg.attr_type = 108U;
    msg.min.assign("MAVPLADYQJCSUUHZVNUFECRTMKHKPQLFBETEGJWOVYPCTMRNLMADEYRAFGVXAHGJBBXY");
    msg.max.assign("DQCCDHABOFHJBZGVHFQMLKMAJRNJKZBMJRGSLDAFNWVXFYQYPLCXOPSUOYGBXSIDQLNTAYHXBWENGNMVERBHYBLIUQINRJAXZBANPLZPCKVGMEVIJYBMWGWGFYTLUMZSLDHPTPYQZUPWRCTOXDEYWLVVALKKFZEJEUDHZWOMOXOOUCPAQVKCFNJNZISUSC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.9377079302799627);
    msg.setSource(9828U);
    msg.setSourceEntity(53U);
    msg.setDestination(47686U);
    msg.setDestinationEntity(252U);
    msg.timeline.assign("XUMTJFYNNZYDLCETLCLVHZHVBBXZQYXDMSMMAOXNGDAFFFLKQZVOYDQXVRGQGWWUIPRSVJMDONEGWDCPWPLQKUKOPBHIFYMEAVAGJWKRHCJBIQTIQKKPOYLSPETDACJEPZUVYYHZU");
    msg.predicate.assign("XMCVVHRSASXUJQFDMUPAMCRCCQOLZTBREIVVILXXWVFTDPHOBSOZKPDBSCFKZNGRNUDHIZCEOYTEJVIOLADUMEHAGBKTMCWNIZFLDFLKP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FKZCMTBAQQSNQHEMETZNBIQVXTZOCGONIAYVJNWTCCPWKEVEFOLSPVNGAIRKPJXPYPUCQOUDBWBRUYZFHIDDKYZNKHINGKPIDMWHZCSBAGOGRMVOVKDWBEFZPIXVULWCNLUFOVDPZWQLOSIXTDURGMBCWLEQVFTLEZOYSXSJUJZFDXMDOFQIADLJRXRBTGYGWRWUTR");
    tmp_msg_0.attr_type = 142U;
    tmp_msg_0.min.assign("IQHAMGFFKREHJYCYDBEUDFHWZWYLCIRLNFXQSDGDQXIMNFMYTOAINJMXEBTCJPQOBRZVEICSGZNIINVLTDSGMUWWPIWSQMKRAPAHJGOSVKDCUECLKSABSXNHAQHTLPOXXRXZFKLFUNYBLOUR");
    tmp_msg_0.max.assign("PAMFAOFWENBVJWIVSSVIAEQNCJFPRVOFBCZJPVLCFDIXKBYJBFSEICQSDLADYB");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.3457105314471153);
    msg.setSource(15373U);
    msg.setSourceEntity(106U);
    msg.setDestination(50824U);
    msg.setDestinationEntity(26U);
    msg.timeline.assign("NXDSQEHNVOPIFTPCIPVWRTMSJWHZALVZZDIXOJUPFNYRMPGOKUNAICKEAKSTPMRDPVSGDLOQOTXFRFEPKSUMCYXEERGRLJFSOKBHVSCBFJMZQGHEJBZCCTAKZMIXYVMQBHXXDPGUSJLWKQQMCNSHAYCVEQJOUEMCAWZOGDYLJHITRALHAIBRWVRLOIAIDLZDBFKDTTBUQBVRZQCGYWNYHYAUKMGOWTSUIFGXYJFWGYEQXWZDNBNWBUEKP");
    msg.predicate.assign("NFJSPKDZEQKYCXWTWXSWMTILTPCDZMRZFKJQBGZDSNLRMWTNLAJVIZVLPUBCOFWYUAUOHUFTHMSNRJJGAQPOIBFBLARXCNRLERXGYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.4206525784027588);
    msg.setSource(34356U);
    msg.setSourceEntity(194U);
    msg.setDestination(14791U);
    msg.setDestinationEntity(95U);
    msg.timeline.assign("JZTMXFAHVJFOFOPXPQTLNNHPMTAKYQOWOUFHKSVTIJXIWGLXEZEQYAWZYLZIDNPHWJFRPZRAOBPHMEKZSF");
    msg.predicate.assign("NBEJZGZVHJSXWCSWJLXMVJCTIATKXKUQZGACRRKHBTEEOZAVWEKLMVIYOINFCHYDAINHXPCODUBQNSOSSEYIYOKBDTKXCDDQCWPPYPPXBQQUETRITSRFEDDMCSMFXOGGHLUIPEXULISHPOMKXKUYWVNEJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QPZZISASWAESCQFFNBRCPLUQQTXJNGIEPOSUHRGDBTRNUPOMZHBGJIUWTELSBFXWDEKKKTTQMWJVVNCMYIOWFOPGAJQM");
    tmp_msg_0.attr_type = 212U;
    tmp_msg_0.min.assign("EHPANRVECNBUJRLSJJQFEIFFBRGTPNJAXYTCWYRDOIFCHITYTTNLHKLQPAYHEBECDIFUZCHSZYBCKCGLKIDYJWSURJEIUKXTLGMSPEZELGQWMBGKDVFOIQHKXIRVADWJAXZBHKDWQEVMRPNPSZHBUYQAJUOMNFBTLYXVVNNLXHLTSAGMODQRCMQOGNOKZFWZTDUJVUSGIEPYZVLTOHSCIKSVOFPBAQQWBUPSXXYZWAX");
    tmp_msg_0.max.assign("CHHCJMWMKDRXRLETQTCHXVMSYAJLSVZMIMEHWGWSNTBOTPADKFMJXQGUQUDNIDBZXXNELJQTSBPGSYYDRBQDKDVLYVFEOPZETFASVGLBNTZYIVUIYRYQGHPZJKDOZDLHOAHBACPXKNMUEYZ");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.0019823189868897195);
    msg.setSource(22323U);
    msg.setSourceEntity(208U);
    msg.setDestination(9898U);
    msg.setDestinationEntity(20U);
    msg.reactor.assign("HEUIYAUEPEFBSWTLSYWXTLZZLZYKQQBNORZGDWXSOXJPLBXYDVSBVGGVMFBMQXJREGMJTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.4102459538342824);
    msg.setSource(13950U);
    msg.setSourceEntity(98U);
    msg.setDestination(21921U);
    msg.setDestinationEntity(29U);
    msg.reactor.assign("APTWVDJVINLNJAWCQKRNJXHTMLIASAZGSXHPAHKQEWWUIFTXJSRKNGVGNPBMNILUZLNYZMYLEDXPITLBPSIMUQEGWPCHDGDTWGQOYFZJEEGANQAFXICKOMBPIBRZHPCJDABFRXOBVEGKSCLDMMRFERTZXUVPKCSQDZIDSHILSVUYYROEUKKBTMWTJRYFZVOMVYHMAFUKRBJUOGBDYTYXWLFOKNETQWCRJHBYCHNSFOUEDXVVQUSCOCPQAX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LCZKYNNVDUPLOIXQYSBEIYXZJPZVCWEBLLAPJDTJYNJETXMCIXMZKEHTPBEMTDJFDMABWTWTSCARVSXLZVSGNPCBMNCWWAQQBJMSSHOKEARPQRUZXDHUQYIMTVHIQUKAZFGOXDXPOBECZYIVSORHBFTFJWJCLKTKZOSKPIOHQNNWGVLFBFHEHAEPLINMRRQOACJAYCFNYIUOUWRSNFRTPDGQDYXGWUOGKU");
    tmp_msg_0.predicate.assign("GFFDHZFSBNUBUUFOOPLETCCNIAZLVZYRKGJNGTLLNEYRMKWHRCRXOJFQBJEZPQXJAOEHUSAXZXIRPJHTIRJNNVYHKBYCYSMNLK");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.9915448884725538);
    msg.setSource(50700U);
    msg.setSourceEntity(9U);
    msg.setDestination(11967U);
    msg.setDestinationEntity(113U);
    msg.reactor.assign("EDLEAHSOZWVORXUZMNOPHXYDMGNHAZBUJBRNZQKDQVBPBVIOAJBTSXTFBCWLKRVDLUMHCFGTXAIXPVQQYREBQEFDYHLGIFEGRWPWOLZJNDGKIASYYYWPGDGUEQWYSRUQKUTTZFLKSJRJUFOOIPTRMHJIFNWNVJVPQDXTAASJVLZIKCHMSJLHDQKOOLCCMFKGUZIYGGDNMFZVJOXCKUYQBMCXNEHFXTNRIBXHMPWAYACWUNTEKZB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZGRBFHCCKNUYTMHIGNMOUZVJEEQREWWFRWJRHSFLIOIVXXTRDYXLIYBTZDLFLHALGBELNSNDARYUQHIUZKDI");
    tmp_msg_0.predicate.assign("VHKLYQYSSRJPWCWJQOODFDWXHEIGPETNFLUNIQJVEUBVPOMDOSHGFZEMPDBWCTKAZARXAQDDSORMHCFXCKRCKSA");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.5819461227802383);
    msg.setSource(5955U);
    msg.setSourceEntity(137U);
    msg.setDestination(44646U);
    msg.setDestinationEntity(186U);
    msg.topic.assign("UGNWHWYRSSKZOUXHMJDDHDYEOHLEBCFPESXNPZTUXSMFXYLLYTGAQJTPKAWOTXEYUQCPFVUNGLTRWEFHLQIXGYTELRXWJCJZNTORDUAILEIFNEYIRDWFHOAMETBJMJBBMXHRHNVFLGYPJPWZZQRCGFXKDTIFWJGUMHQODCGVQPNKWOICCOUUECNKABPKLAVQGJKRSBIKYOSBRZPNAQBSAMOMWIQKICFVVASDLMCIVMNDBSRVTZZAZJGPSYZ");
    msg.data.assign("BIVXPFAAGIJKGFIRHUUNHWQUFZHJOVDAQNRSETJQZFHVTTIRHMYCYDNMEEGRURFKYQLDBYESVZPPTKLQYELWJKCOMBKLAGXZSNRGLODXVAPJCBDKNPOIYL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.4297077102903768);
    msg.setSource(64789U);
    msg.setSourceEntity(59U);
    msg.setDestination(61651U);
    msg.setDestinationEntity(98U);
    msg.topic.assign("CVXSDKZXXVRRGMTNVKIXKELZKGDRFQAGJDUPVFHBYCSAYEDERNYPZAXBCWTMVZBFUQSBBUIEDRPASWKNIZYMOFLBYVMIWFUYATWYJFBHAFSXILJLKYNLMLSNIZGYQIH");
    msg.data.assign("NMFFRUKBGPOESHJWFXEUSXJQLWCAETBCCBKJYKD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.9911864703407139);
    msg.setSource(61480U);
    msg.setSourceEntity(115U);
    msg.setDestination(62403U);
    msg.setDestinationEntity(67U);
    msg.topic.assign("PCBETLXUSOALAPTOIMHSNNHDRGMDWDCREUXFIEWOUOZTOJYLPMSRGWXREPVBPEMAXIOYSEVEYBTUKWNLBGCXZNONWI");
    msg.data.assign("LUEDRQRWABDLPOCBVDXOZPZTNISPCGYNCYKCCLJWYCRPTYWKQQNKMWXJXTMLZFBHVMVOPNLMXBVIGGKWGSJSZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.6108745211565145);
    msg.setSource(32954U);
    msg.setSourceEntity(222U);
    msg.setDestination(4951U);
    msg.setDestinationEntity(172U);
    msg.frameid = 137U;
    const char tmp_msg_0[] = {2, 58, 86, 48, 119, 11, -52, 22, 19, 125, 23, -99, -126, -123, -26, -85, -62, -10, 74, -88, 61, 2, -125, 8, 72, -56, -126, -117, -30, -107, 7, -95, 2, 104, -31, -87, -92, -18, -61, -4, 107, 73, -25, 57, 49, -3, 42, 114, -41, 14, 10, -112, 111, 52, -56, -126, 67, 8, 31, -126, 80, -38, 12, -26, 0, 112, -75, 76, -127, -85, 120, 20, -86, -86};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.011247007834594425);
    msg.setSource(48362U);
    msg.setSourceEntity(95U);
    msg.setDestination(28521U);
    msg.setDestinationEntity(39U);
    msg.frameid = 162U;
    const char tmp_msg_0[] = {30, -93, -120, -16, -59, -78, 58, -50, 85, -11, 51, -35, 112, 86, -34};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.8548945130381578);
    msg.setSource(46223U);
    msg.setSourceEntity(147U);
    msg.setDestination(65164U);
    msg.setDestinationEntity(123U);
    msg.frameid = 130U;
    const char tmp_msg_0[] = {-8, 54, -92, 91, 70, -10, -4, 98, 85, -74, 102, -37, -118, 9, 47, -15, -81, 95, 122, -29, -68, -26, 57, -27, 19, -114, 25, -26, 21, 25, 21, 105, -19, -127, 66, -112, 46, -7, 10, -18, 8, -14, 1, 45, -110, 22, -19, -118, 59, 6, -55, -62, -103, -109, -57, -8, 110, 68, 64, 28, 105, -39, -116, -53, -84, -73, -38, -34, 47, -53, -50, -2, 25, -105, 4, -24, -32, -50, -98, -101, 30, -94, 123, -127, 75, 106, -26, 32, 54, 88, 72, -93, -108, 113, 99, 45, -120, 29, 44, -47, -39, 0, 60, 65, -86, -104, -51, 44, 82, -87, 41, -68, -92, -83, -71, -113, 20, 56, -116, 14, 125, 66, 32, 36, 53, 37, -32, 53, 67, -99, -83, -26, 7, 102, -92, 17, -75, -27, 11, 54, -83, -71, -120, -111, -35, 70, -1, 52, -67, 27, -33, 119, -12, 96, 2, 48, 91, -19, -127, 93, -16, 110, 122, 79, -93, -11, -19, 109, 80, 7, -34, -108, 12, 8, 81, 116, 14};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.011831575858798238);
    msg.setSource(32949U);
    msg.setSourceEntity(118U);
    msg.setDestination(25885U);
    msg.setDestinationEntity(223U);
    msg.fps = 234U;
    msg.quality = 119U;
    msg.reps = 144U;
    msg.tsize = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.4500850045874304);
    msg.setSource(6810U);
    msg.setSourceEntity(65U);
    msg.setDestination(43159U);
    msg.setDestinationEntity(162U);
    msg.fps = 54U;
    msg.quality = 38U;
    msg.reps = 120U;
    msg.tsize = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.24377954627203202);
    msg.setSource(24892U);
    msg.setSourceEntity(100U);
    msg.setDestination(11752U);
    msg.setDestinationEntity(151U);
    msg.fps = 30U;
    msg.quality = 33U;
    msg.reps = 211U;
    msg.tsize = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.5987805382983982);
    msg.setSource(7915U);
    msg.setSourceEntity(186U);
    msg.setDestination(64265U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.022784773535505676;
    msg.lon = 0.18762292376690604;
    msg.depth = 71U;
    msg.speed = 0.28140285983519275;
    msg.psi = 0.8921097543076826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.6054345908722194);
    msg.setSource(452U);
    msg.setSourceEntity(125U);
    msg.setDestination(17383U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.2587628481337635;
    msg.lon = 0.12549998691837905;
    msg.depth = 97U;
    msg.speed = 0.06565004341895397;
    msg.psi = 0.54891517479118;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.08650089896081392);
    msg.setSource(6220U);
    msg.setSourceEntity(10U);
    msg.setDestination(12216U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.5496339987541627;
    msg.lon = 0.005574332062011633;
    msg.depth = 245U;
    msg.speed = 0.7471270827940365;
    msg.psi = 0.6540618784578439;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.8940171753012172);
    msg.setSource(57921U);
    msg.setSourceEntity(11U);
    msg.setDestination(32806U);
    msg.setDestinationEntity(63U);
    msg.label.assign("OSJZZCKKAIDIWVPXEMS");
    msg.lat = 0.2588824588519255;
    msg.lon = 0.30621903445025644;
    msg.z = 0.23260082170441232;
    msg.z_units = 75U;
    msg.cog = 0.842423225076335;
    msg.sog = 0.6048861507164376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.6047761934594547);
    msg.setSource(45016U);
    msg.setSourceEntity(50U);
    msg.setDestination(10172U);
    msg.setDestinationEntity(25U);
    msg.label.assign("MZOBYMDYJLBKNKTNGMRBOTWTBPLDULDQXLRFJYLUXOCEVLSSJVVPGOEWFRNSKHYOKGACYAUQSMZTTDNYICTEIOOZFQVSCWWBGKGQVSRTKPCQERHNFDUTFEBUEZREQEHUQMWPHNUJPXBVZZCVRMCXIZWRJYHLPHCGNTOV");
    msg.lat = 0.6366859403748821;
    msg.lon = 0.224949058977861;
    msg.z = 0.18568129716566883;
    msg.z_units = 113U;
    msg.cog = 0.07417439069080833;
    msg.sog = 0.05088115539961702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.1419714377269098);
    msg.setSource(3133U);
    msg.setSourceEntity(34U);
    msg.setDestination(7299U);
    msg.setDestinationEntity(37U);
    msg.label.assign("ZHHKOCJKPECVXCTFRENFACEWUASWTPAYGQWVSWLWHVLFKATVMPEUTMOLNJARHKMBYLN");
    msg.lat = 0.9109843061087152;
    msg.lon = 0.1062845136131686;
    msg.z = 0.20933441203535297;
    msg.z_units = 42U;
    msg.cog = 0.15983871453267517;
    msg.sog = 0.9509910014673094;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.40007155255358595);
    msg.setSource(14807U);
    msg.setSourceEntity(225U);
    msg.setDestination(56941U);
    msg.setDestinationEntity(86U);
    msg.name.assign("QBTPKWDQKOJXDQNETXUEBCIVSPQAKWTHHRMSJEYDBVFJXMMDMXGPDWELOHLYCGQLPLUFUVXYRWBABRSKBKHRQHMCKUIIULYGMYOWDAOTPOVMOFOKEEBUGICHAIJPAZUVGJRYTKRFNDLLFBZHXTMYEIASMNQRSR");
    msg.value.assign("LTSRQHVWLKXQJLLHTXZZDHYWFYMLXFRQQTATWJSXYWMRLSKMPCMOOOSPOFVZLCIBFAILDXGYGVPTQSUXWSVCTUPVGVUBBNG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.02634518724333801);
    msg.setSource(13462U);
    msg.setSourceEntity(118U);
    msg.setDestination(9326U);
    msg.setDestinationEntity(182U);
    msg.name.assign("WYJWLYXCQKBEKIQIEBDYEIFDQIXHTKVOMSCGWJYLWHCIQRCAQKCXZIUQBZORMCWYTZFJVBVXQHHZFLZTWNTOELXJFXDNHWUGPFGTMSXIYJPLDOTOEOVPIQQBMROYNPUVHSDVDLKPADWHDEMEJSLUGQGDKPAORGRRIGFBFPZHTZMXWNOKTEWAJMSRMJFHJNRBVATUISSNHKK");
    msg.value.assign("GJXOBOKPVWRFGQGMBCRRTGYWSFJHJCXSGABQCLDWIEKUCDDWANJJASPYRDAAUCFKXSWZMTNDIABRCFCSUAIZXGWLUSLVENETMZFJZQHIKEOVSVGZYHZXOKKDJWMNXLZNEMYXKXLSNBVKSPQVPOEVZTTBFWOUHKTPJRQPUUJKQBRDTZOQTEVHTFEDAIVHBLQYULYBLMFPMIVDWPAOUECRRMIXFPXYRNQG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.7557832550634992);
    msg.setSource(55118U);
    msg.setSourceEntity(166U);
    msg.setDestination(60536U);
    msg.setDestinationEntity(216U);
    msg.name.assign("GGDEIHYIJVTEZOKLFSJHBCGKVCYUVDVNKGMWDEOXVKIJRVOUOCTRCZPVSQMSNSDIJYTQIBABTAGOTYAFAN");
    msg.value.assign("CRMVOXHEVEROHAVQSQEQRRZULWSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.38259778004764955);
    msg.setSource(28623U);
    msg.setSourceEntity(119U);
    msg.setDestination(16030U);
    msg.setDestinationEntity(44U);
    msg.name.assign("DSNIARLHQRINCVKKDEWECXTAJMDZHQFFEFGBTHZXJABVJGAKVNCTHMGAZURLEBNMCJGECEPGIWVJBUKFIFPKWIVOUWEUPUQIIIZPXVMGYEAXLRLMINGCZRKAVYAYDKDWQOYMJRQNSFYBFTRTYMYJJUOTQYJCOTLOMVPJDTZNTOEZFGUSDFRXEYZMOAIWBCBAXBYDDHLSWUNTKHVPPODSHCXXPWQUSGHLSXBHQWMUBPKNL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.814303448624519);
    msg.setSource(33710U);
    msg.setSourceEntity(200U);
    msg.setDestination(3589U);
    msg.setDestinationEntity(12U);
    msg.name.assign("HZWZPTGATQOXVSYFMKWWCJHSVPKIKVHLJBPSZUAIAXRBOESHUIHINNTEHWMYETBWNLZUZOFYQSZFXGYQMDMQATGBVCBRZPWOTRFEKDBMOTKAWIXWRQSDCKYVTBHCVXGNPILHNJGYCBCNGJQQBIFHVIEPI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.9557310209773838);
    msg.setSource(12825U);
    msg.setSourceEntity(8U);
    msg.setDestination(4654U);
    msg.setDestinationEntity(237U);
    msg.name.assign("BWWWLPTIKEXFQONTOSGEFSTZNZHMWANZECZJPDMLSINYKYUXBWTKNXQCFMUPEQMJGLUWIICORTTCKESJDFRKKXKCURCVOIVXJGNSIPMBYAVVMTFCRJNWIAJBBPODFUOHKUOXYLEASHVBBUTHZSUGJODQYVMWSLLBDQOWSHNDUMCARVFRQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.6937016045119019);
    msg.setSource(64527U);
    msg.setSourceEntity(123U);
    msg.setDestination(13551U);
    msg.setDestinationEntity(38U);
    msg.name.assign("IMTJPUIGDCJJUJLNLPQZSPGEWQCOBFHGTMMFSZYMECLDCOAKVHI");
    msg.visibility.assign("DRFHFHBZAYLUGCKGMNCLEQITJVNA");
    msg.scope.assign("KNDMSYXBTGWVRRFOUGGDNTULFYOOCXMMKVXTEBDTKCJHOKJDZPUWZOPIFZYNNGPVRCJPUOCQKXFXPMQBSUFANZDJAJLSXURKIQVBWEJUKGSHYGR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.8217219613146135);
    msg.setSource(56138U);
    msg.setSourceEntity(193U);
    msg.setDestination(49620U);
    msg.setDestinationEntity(123U);
    msg.name.assign("FQZVJLCYDBRJIAEUZKIQMXLSQWFADCLCRPXQJYZJPDBGWXRYTNYWTSUCF");
    msg.visibility.assign("TXKQHWAGJRRGCHFMENCCHPIDAIDPYENWGEARBLRRCOFFPFQKMGSEHIEFVYSSPUQBJXIUJGVUPIMVTLTLKMXCQYRWZZLCMSWJLNQGNTSOHAAPLUVD");
    msg.scope.assign("TRWIODXPJDVSUOTBJZLKDQSGAIWXWCSLGJWVAGQFRZKWBEHEDQPHIOBNQCYHSQCROCXLBTZRQAWDPOBIJEVHBQBMJFKWKTAWTIRYENMBCYCXSYRMKPGBYYNZUZOUXUACVMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.38939505416069053);
    msg.setSource(57909U);
    msg.setSourceEntity(198U);
    msg.setDestination(62613U);
    msg.setDestinationEntity(35U);
    msg.name.assign("POQVXXQEAHFXGZAEWBDRJXHMYNNSOT");
    msg.visibility.assign("APAMKCLDHXCFZPNICKSLSOBOBYJHTQHTDWMMXQDNZIELDGYFXZWGVZUAPCFXOWSZLCBPFCLZVRMXSODAEBQJUGPVDTNWKVLY");
    msg.scope.assign("BNTLKTWXWPCPFMQEGVEEMXATPTAWOYGSJSJEJCREVAOSZCTMQFCQGIQYQEBENKCUBODOALHBYXKHDHKROVJJIXRILGPSZBPCPJSNSDWJFGEJADIHLFUNCZWNAEZAMPVAZISVDUSHYTLRWXRSLMMVXJCKIKXWKNVWMYIYNCDRPTESOGKHQURVFUGMYFPKTZBLFVTVUQIFOOXHFUZRHDNQIDLQNMXBYDBHOUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.26439868096417274);
    msg.setSource(46197U);
    msg.setSourceEntity(132U);
    msg.setDestination(53540U);
    msg.setDestinationEntity(109U);
    msg.name.assign("GPHVYQLCKFNZNQSCCXYFRXLHFQVGEWNWMEMBSYVNRUCPWMUPREADOWKTGTNZAJHMXDYGEJBHUPBJVBMHYPDHIGBSXFGVIVIDOVQEHQDKRFODITMTOJXCNXQQGOTKHFQFRKNOQRZTJRUIYAAWJEISOCPBKNYOHTPAJNLCBLVDIUVZSYJZBRLUZFUTNDSLTAHKESMEXWKJKSLUCYELPWBJXXRDMLGZCMPMEUOPZDSCQRXLZGTKAWWGYBOIAAIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.308521048769699);
    msg.setSource(23513U);
    msg.setSourceEntity(46U);
    msg.setDestination(65085U);
    msg.setDestinationEntity(218U);
    msg.name.assign("RELKSFHGSGCXMJQWXH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FMAXOWHKHVRKHNVVLMPPCVITEJFHECRPAUETNCXIJYOUXGMHGZSMFFSBWOASJRZGYAMMSIAVEKDBTVJUPKVWNWLNNUXONAFJZCZVUVNSUCECUKKIKPHEQTZIMJLYLLCQTVTBLISQDQFXQFLGHMFBUYLTDGPURQJMRWBQBBJPRKCA");
    tmp_msg_0.value.assign("MNKVIKCHCGUSAUUQMMSEHQALLOOKKUXLJKPJRFNLQZWVBVZUZBJXRAFEBNEQGWVSMMVPPSXWUTQHPIOVGZZRYLATIZSCNJJUFYHQEVD");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.41745460538857726);
    msg.setSource(23731U);
    msg.setSourceEntity(22U);
    msg.setDestination(38612U);
    msg.setDestinationEntity(11U);
    msg.name.assign("PGMAPSWMTQFDBZIC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.991074190535433);
    msg.setSource(17005U);
    msg.setSourceEntity(7U);
    msg.setDestination(15009U);
    msg.setDestinationEntity(55U);
    msg.name.assign("VMHRMQDWWVDBGOSGODIMVKWKXMSRPMYVFANDVCSYNABAJGUACTQVVKBLGBRTNXOJMRKCSRAZFHUJXCFDQRHIPRXBIBSHQXPTHZGBZEYTWMTWJYSLJKOENSLEJWYIUYGNZOUYGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.671854307403467);
    msg.setSource(51465U);
    msg.setSourceEntity(136U);
    msg.setDestination(32729U);
    msg.setDestinationEntity(120U);
    msg.name.assign("FMOEBQVZDODXSRTHQMJLZFKAKYGTARTRLLFATHWNPSSCHIZCKYNCOSEPBPHWJBSHUPQFEZKREYYVLRXNCSCXXUHVOZYFEMHIXIMAFNLIPSKADOIQGGVTUNIDWBPTKIUVPMOZPWVEFXPKMZRDLUKUNETVWRADYKOGMJYYIHASFQBLNJVWNODLCXCEGBBCJWWJWJJGBRLQDLVZGBMENCZBTDQPOGAZYCQEVUKTFTQNUUUJQRSHIRG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.9157077436570791);
    msg.setSource(45833U);
    msg.setSourceEntity(232U);
    msg.setDestination(47497U);
    msg.setDestinationEntity(96U);
    msg.name.assign("PIHAXQCWTVOXBWGTUZCYFDRAMREWVYQKURMYNFXPLNJWAFNMPASTKJHPFAHKFAZSCCERQFMABINJKDXEILZGMLOOKBASFFOULFUYKPUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.19541850235389768);
    msg.setSource(14701U);
    msg.setSourceEntity(50U);
    msg.setDestination(11339U);
    msg.setDestinationEntity(71U);
    msg.timeout = 3178354535U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.5080824889692769);
    msg.setSource(62358U);
    msg.setSourceEntity(80U);
    msg.setDestination(18024U);
    msg.setDestinationEntity(161U);
    msg.timeout = 2148880463U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.8783199451702093);
    msg.setSource(42630U);
    msg.setSourceEntity(15U);
    msg.setDestination(30055U);
    msg.setDestinationEntity(254U);
    msg.timeout = 1330664061U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.7197839094569751);
    msg.setSource(17817U);
    msg.setSourceEntity(125U);
    msg.setDestination(51305U);
    msg.setDestinationEntity(247U);
    msg.sessid = 2028864172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.6058773741136294);
    msg.setSource(28177U);
    msg.setSourceEntity(206U);
    msg.setDestination(40193U);
    msg.setDestinationEntity(22U);
    msg.sessid = 2448520420U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.0890017376134512);
    msg.setSource(32580U);
    msg.setSourceEntity(142U);
    msg.setDestination(62695U);
    msg.setDestinationEntity(187U);
    msg.sessid = 2741242929U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.5769175791562836);
    msg.setSource(50741U);
    msg.setSourceEntity(90U);
    msg.setDestination(47264U);
    msg.setDestinationEntity(35U);
    msg.sessid = 1922626014U;
    msg.messages.assign("HOUWKADMKVKIYNCDPAIWSIAWMBRGBRTNBNTRHCKGNSXCSKVCBHWYVSODYIHQSBQCJXWQPNKXDXPZHNZDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.9961825725028884);
    msg.setSource(12470U);
    msg.setSourceEntity(59U);
    msg.setDestination(5431U);
    msg.setDestinationEntity(175U);
    msg.sessid = 3203633850U;
    msg.messages.assign("HRHKNWUXEASEPIREVZUDTYPYPTDJNEGSFFSSWGDALMWXIRMORN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.3710863077037466);
    msg.setSource(8657U);
    msg.setSourceEntity(246U);
    msg.setDestination(43121U);
    msg.setDestinationEntity(5U);
    msg.sessid = 22889819U;
    msg.messages.assign("QYSOJXPAPEZRQATNHXGLOJWHSTCYCCZEXNCNNTUVDHYRFBZZIYDPWXBWPBFTOBMHJHTMDQIE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.4600297047276902);
    msg.setSource(26905U);
    msg.setSourceEntity(250U);
    msg.setDestination(14406U);
    msg.setDestinationEntity(201U);
    msg.sessid = 1948435885U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.2630585247830268);
    msg.setSource(30240U);
    msg.setSourceEntity(131U);
    msg.setDestination(53413U);
    msg.setDestinationEntity(116U);
    msg.sessid = 3635696966U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.6642997792175553);
    msg.setSource(48126U);
    msg.setSourceEntity(164U);
    msg.setDestination(53758U);
    msg.setDestinationEntity(207U);
    msg.sessid = 560976658U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.31334155519308016);
    msg.setSource(41091U);
    msg.setSourceEntity(204U);
    msg.setDestination(15831U);
    msg.setDestinationEntity(46U);
    msg.sessid = 1979384181U;
    msg.status = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.1514457457512015);
    msg.setSource(44660U);
    msg.setSourceEntity(160U);
    msg.setDestination(38091U);
    msg.setDestinationEntity(241U);
    msg.sessid = 2584534427U;
    msg.status = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.08120390613917783);
    msg.setSource(3152U);
    msg.setSourceEntity(161U);
    msg.setDestination(16123U);
    msg.setDestinationEntity(48U);
    msg.sessid = 880993037U;
    msg.status = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.8991032369708877);
    msg.setSource(65406U);
    msg.setSourceEntity(251U);
    msg.setDestination(14605U);
    msg.setDestinationEntity(78U);
    msg.name.assign("TUSGDJYJCNXQUPWKYXYDWCFGMILXXQZVHKEYKTEQRBKFJXZSKIBPRIHBZLFXPIABABMNOSRQKZOVXYNPEOLGQIHLTNFVPUPVAOWABONBJMRCYTGMVMEOZZSLNFAXFRYEJMUKCVJBATXZHWPXEDTGDGLDTWMKKFCNFEPFJUVTCSIGIYQUUACSIOQARHSLEHHPTUDAN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.824938894466644);
    msg.setSource(2789U);
    msg.setSourceEntity(117U);
    msg.setDestination(35167U);
    msg.setDestinationEntity(222U);
    msg.name.assign("KWQUQKNXNWXRJCWOSVVTSHMBZAICAVQOYJPYNYBUBZTTRLCNIGRSX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.73011033516831);
    msg.setSource(5486U);
    msg.setSourceEntity(108U);
    msg.setDestination(46270U);
    msg.setDestinationEntity(81U);
    msg.name.assign("ANIWSZFIOMFLRUZQXFIDCLEJNASEVLMCTQNXACJGKVETNRUDTUQYJBZQEURDPURSHOKJOPVJCZGQMOZTPCXHGINMICFSYRRBEWVHUHAQYDGPWLTFQHSHKOWEIMKZYBBVMQABFCKXTLZGLAYPTSJULGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.953636848441546);
    msg.setSource(47155U);
    msg.setSourceEntity(215U);
    msg.setDestination(4069U);
    msg.setDestinationEntity(215U);
    msg.name.assign("UQPQLDCJQUUMZPMTCDAFRSVKZLCQNGDZVWQBLRFEKADYVBWXNJIBMSBCXIGPWOMJKYGKBJASZUVIMNSRWZPAIOWTTFMFDEHXFCCDGHQOWXZUOHGMYQWKPVTDLLLSEVJHATLKNGZVCLASOJFVNFWCGNENGGVUHBPBRXTXIEIHMNISJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.9676426900963978);
    msg.setSource(1227U);
    msg.setSourceEntity(207U);
    msg.setDestination(31965U);
    msg.setDestinationEntity(214U);
    msg.name.assign("WNXGLRRTTSXUFJNXTNCCNMILYMDFTRHUEOGPPCNZUKTKZHQQBYYEZBSMLGYJIXSRBYZHSJQEQLQHNDQIWOIJCSVBVCINJIJGAGEHOPSUOOGDEOGQXMVJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.4511257755533612);
    msg.setSource(53256U);
    msg.setSourceEntity(155U);
    msg.setDestination(21241U);
    msg.setDestinationEntity(179U);
    msg.name.assign("EXUTPPWNAVVAQYEUIAMZMGGXRRKLSHFBACBZRIBXYNDRUWYJIBJKNQMQVYSKQUSTTCQIHBDDCLEOKZINOICUZMCSHZUNGHGRHXEUGQOPDFVBWIJCZJHRMYLSGDMNVOFRLBIKCPXNUQHFLAHTQVYNVHSRNLTGXGZPTSTGZDPSDWBBCELOLOOKIYNGKDFHPPYRVQLF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.7139774992508624);
    msg.setSource(16825U);
    msg.setSourceEntity(123U);
    msg.setDestination(42888U);
    msg.setDestinationEntity(26U);
    msg.type = 221U;
    msg.error.assign("TONACCFHYVNUAFDBDLPMEDKWBYMHZOJCIYGNRJLYPKSUPLPIHJZCAJRTDNDAXRGEVXBTRAOCVSEFKKXEDJWPXQTIPPHVTZOVBHUROCWGKWCIRUOJOHAUSPUAGPMEGVQSSXRHSZIETWFQRQCJZQGRDOIHWYKNLLBSZIKNOQUAMWNQDGYRGXUCWYFQTBFDUXWUYBVIXLDSL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.8247910263913858);
    msg.setSource(51274U);
    msg.setSourceEntity(233U);
    msg.setDestination(21236U);
    msg.setDestinationEntity(220U);
    msg.type = 166U;
    msg.error.assign("DTXTYVKARGTMUGXVGEFBOZZCXVSNNJXMBSSHHJGRDQBIDKSBOQKXUANZIGPTKOIMCNLAYXUAKCMJQCFMATJJAUWVLKVNYAUIVQUSBYLJPZHFQEVUDPGODWEHOCQFCFBWOXREIBAGYCTZZZNWUNYGPPZPFMQQBAHCEXUDWBESVLHXDJOLHHFPOWLPNKQLIVJHOMJKWZWRJGREFRYWCIBLKWTTZFOMFRDYSSEYLPCLIHTYIEQNRTKRXRDASPDE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.9472099205656436);
    msg.setSource(27728U);
    msg.setSourceEntity(182U);
    msg.setDestination(49833U);
    msg.setDestinationEntity(168U);
    msg.type = 59U;
    msg.error.assign("GCYKQGPQDJNPWIXQFAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.34878228757455076);
    msg.setSource(50731U);
    msg.setSourceEntity(133U);
    msg.setDestination(32763U);
    msg.setDestinationEntity(66U);
    msg.seq = 21240U;
    msg.sys_dst.assign("WBJMFYZWOWXQKWKLTHMROEFHSZDXZNQXOLJEPEMDDEFFBJUOQSWNRLIOAZTIOPRYNRSDDGQVQLJSPWXUJCTINCIZWFWVEFBCUFKHLEBTXLFSYKJUZYUJUHVOOHYKCNINBXMBJEPCNIMHTJGCCPYAGCPTUWZEIXKRVLNAXTKUFTHKQPGQPRCLGYBXGDVVJGRSEADRHHIBLQTGMDMRQPVTQKPOABVSWMXMZAYEAYASSLKO");
    msg.flags = 102U;
    const char tmp_msg_0[] = {-118, -77, -101, 62, 75, -29, -113, 52, 0, -75, 57, 35, 0, 4, -114, -99, 107, -127, 91, 91, 95, 110, -22, 71, -90, -27, -104, 78, 90, -45, -91, 110, -91, 74, -126, 89, -14, -68, 126, -90, 123, -121, 55, -107, 31, -2, -22, -58, -73, -48, 98, -82, 11, 85, 8, 55, 122, -48, 35, -84, 98, -114, -5, -13, 69, -71, 1, -126, -58, 39, 62, 115, -17, 13, -61, -78, 21, -51, 76, 124, -23, 0, 121, -84, 125, -67, 94, -51, 47, -10, -108, -38, 3, -57, -43, -44, -76, 75, -5, -3, 99, -6, -123, 30, 20, -52, 65, -112, -66, -51, -79, -5, 82, -57, -119, -52, -25, 58, -87, -88, -42, 126, -87, -124, 15, 58, 81, 35, -95, 77, -42, 56, -87, -120, -112, -9, -22, -34, 55, 70, 119, 89, 112, 91, 39, -119, -13, -22, 108, -42, 118, -24, 89, -99, 110, -50, 118, 88, 84, 10, -82, -80, -90, 38, -118, 42, -125, -81, -7, 45, -108, -30, -4, 16, 116, 80, 103, -98, 21, 51, 69, -65, 19, -117, -102, -92, -88, 65, 104, 118, -115, 35, 40, 4, -39, -123, -102, 101, -25, 114, -46, 58, -64, 53, -91, -6, -56, 105, -108, -28, 125, -58, -110, 59};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.3841135750312672);
    msg.setSource(8262U);
    msg.setSourceEntity(195U);
    msg.setDestination(3554U);
    msg.setDestinationEntity(198U);
    msg.seq = 7305U;
    msg.sys_dst.assign("DOIMCFWCLAOGDSUVCYPVXSWTALCIJUBENRUZPYRTBQGNCNGREWFOAKFIWL");
    msg.flags = 24U;
    const char tmp_msg_0[] = {-54, -11, 99, 68, -43, -112, -43, -7, -121, 118, -110, 81, 39, -44};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.3374949331345468);
    msg.setSource(20975U);
    msg.setSourceEntity(26U);
    msg.setDestination(23608U);
    msg.setDestinationEntity(155U);
    msg.seq = 15228U;
    msg.sys_dst.assign("FRECLOWHJNKFVPNRQHLHJACVNLOEMHMVUUDPGDDVBJDXWGLZXQCGGSLIZTSTUFBIFTBMGTPQEKYOQESRJSTCVNARPQMPDMAPXBXSJKLZCHYHWFOJYDIXYVXULUMXZDAGNIABWTHAOBRXLGATRWIXUSKTXFRIBKRWPQRKINKQIKZTCMFLCQHYQFVGKDYWUGHUVRJZVEJLYGDZHPOOZJWVKIUOCMOBAEAJPCNSMTA");
    msg.flags = 245U;
    const char tmp_msg_0[] = {103, -97, -2, -33, 32, 67, 109, -84, 121, -9, -79, 3, -17, -82, -41, -14, -12, -67, 108, 27, 43, 85, -92, -5, -31, -64, 63, -46, -71, -122, 14, -33, 82, -20, -7, -40, -22, -89, -43, 37, -21, 35, -105, -86, -88, 33, 4, -110, -67, -70, 68, -75, -105, 66, 53, -86, 5, 71, 45, 64, -23, -36, -91, -5, -59, -58, -127, 94, -69, -62, -21, 27, -20, -5, -82, -127, 12, -111, -54, -14, -72, -64, 48, 39, 115, 81, -48, 45, 82, -91, 97, 110, 72, 93, -125, 44, 95, -101, -46, 49, -46, -84, 110, 107, 94, -50, 72, -3, -40, 108, 3, -17, -105, 114, 6, -77, -104, -36, -79, -13, 21, -4, 65, -78, -119, -16, -87, -93, 36, 44, 70, 124, 28, 89, 45, 18, 36, -104, 66, -114, -120, -77, 106, -41, -13, 115, 92, -6, -92, -58, 13, 8, 106, 7, 104, -116, -99, -21, 63, 98, -108, 4, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.6538201957690496);
    msg.setSource(35655U);
    msg.setSourceEntity(59U);
    msg.setDestination(36958U);
    msg.setDestinationEntity(238U);
    msg.sys_src.assign("EPHOHYRCCMQRORIKQOXKCHSWQBMQHYXJMHMADLGVICZQDSPTSFBIRHUVDOFTVGYULTFUANHMHJWRYHZSAGXWVWWZTKQXWTLTNNEZGJBLYEZKJGCEFRDAQXXCCDEUZNGDRCJUVAXOVREQYEAOJDCLLKVPPNNEDBWTINFQOKUHTBBPKEIVIAAVKWUUJLTPKPNUSIFAYFAMMYSJLUPBXJSQMBCSJTWZSRXPZLYF");
    msg.sys_dst.assign("DFPQEORXGOZTPMJDIBXZNQSAYTHWCAELJNBDZFKPXURLFMNLKQKTBJACHZSBXYVXYYWQUVFETVLVMSYGFSNJNQHGNJOGAPITQIUYPJDGZDTXETNVYS");
    msg.flags = 72U;
    const char tmp_msg_0[] = {87, -17, -24, -59, 52, -38, 67, -124, 100, -71, 72, 79, 43, 12, -37, 121, -91, 120, 49, -105, -123, 104, -30, -119, -5, -96, -112, 62, 120, 32, -119, -111, -59, -1, -70, -123, 75, 85, 5, 113, 83, 118, -2, -106, 102, 68, -29, -21, 9, 55, -64, -48, 119, 122, -87, 23, -97, 35, 4, 10, 114, 84, 73, 61, 13, -72, 117, -16, 49, -1, -5, -69, -80, -91, 66, -24, -125, -71, 123, -65, 30, -38, 64, 88, 60, -64, -47, 61, 121, -109, -128, 102, 109, -37, -29, -66, 77, 100, -10, 51, -26, 50, 36, -52, -107, 103, 64, 22, 126, -112, -122, -34, -110, -75, 7, -120, -65, -57, -94, -15, 67, 75, -30, -119, 25, 98, 104, -25, -26, -25, 37, -77, 86, -69, -107, -12, -30, -102, -122, -31, 89, -61, -110, -20, 70, -54, 42, 96, 50, -61, -118, -67, -1, -61, -125, 101, 51, -37, 21, 118, 104, -82, -84, -15, -70, 26, -123, -114, -33, -96, 111, -51, -105, -32, 89, 58, 76, -110, 9, -107, -69, 78, 105, 101, -123, 88, 62, -6, -94, 23, 94, 111, 59, -33, -77, -13, -102, -75, -56, 30, 69, -62, 36, 10, -29, 92, 93};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.8257865893429498);
    msg.setSource(25250U);
    msg.setSourceEntity(238U);
    msg.setDestination(35048U);
    msg.setDestinationEntity(122U);
    msg.sys_src.assign("JTAEUHHBDWGLKDBSDTBTIFXQFHWJCFEIJXWWYXJJYKBPOBHUTANMIKDPEENMKLBLWFCZFQBGPSZFSOEWGZDCACKISYSNRZDCFRLBHYSRBNZGTKPRYIMDUWAXOQVHQNQTXSDTEDGIRUSOVFVOZKXLAURHAZAKCZVMEUGDGPCQNZGVJ");
    msg.sys_dst.assign("MAORQNKRWUVRXWHVPXVPGAIRKUHNDCPCCIDKOBFRLTYDGWKGMSMBWCPYUEDSFKJJJVUVYZSLHRSCINYKMTOADJAEXNLLHOCMMIGQMCHLMIFTGBFQGTMJAYLLAHZFGOQPQEIOJNRPTGSPQXWVWAI");
    msg.flags = 69U;
    const char tmp_msg_0[] = {-81, -65, -115, 120, 24, -120, -26, 93, -79, 82, -72, -23, 21, -117, -33, 32, -16, -117, -67, 83, -107, 6, 6, 94, 50, 44, -51, 7, 8, 79, -64, 45, 38, 72, -50, -125, 70, 65, -118, -52, 49, 63, -62, 56, -85, -31, -91, 50, 21, -50, -27, -127, -19, -4, 26, 83, 42, 45, 100, -9, -58, 59, 5, 52, -58, 58, 9, 14, 57, 47, 50, 95, 122, -21, 115, -27, 73, 48, -92, -85, -26, 112, -101, 50, -109, 99, 106, 67, -74, 95, -58, -49, -38, -39, 47, -11, 56, 120, 21, 101, 22, -6, -4, -111, -48, 9, -75, 97, 25, 100, 44, -72, -67, 78, -115, 44, 105, 6, -102, -38, 71, -24, -49, 48, -37, -2, -88, 4, -91, 68, -29, 53, -68, -9, 14, -57, -32, -49, -112, 104, -104, -23, 10, -10, 67, 39, 84, -95, -72, 27, 91, 3, -100, -54, 22, -30, -21, 90, -66, 92, -96, -95, 125, 23, 15, -56, 18, 2, 104, -13, -15, 82, -39, 17, -65, -23, -10, 3, 66, 78, -122, 13, 67, -7, -50, 19, 39, -39, -75, -56, -86, 25, 88, -4, -4, 78, -41};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.2054517931402765);
    msg.setSource(19331U);
    msg.setSourceEntity(98U);
    msg.setDestination(9597U);
    msg.setDestinationEntity(192U);
    msg.sys_src.assign("WFGKQMDLVESDWIMSLIONNLPXOYVHKKPUJHUSRNRJSCFJNTOMROVNNXHUWTENTBNHDXFXTRQJUJQAYTYWLQDDORYFBLWCDXCCPIOKHFEZGWAZPKWGXMKBPZWPBMAZJKGLHXAYTPDYVPIEIBCSERUEEDRBA");
    msg.sys_dst.assign("TURLSSCHLQPSBQBNJLPCJOUVPMFQTOELHVDZNREWCCBLKVSIZEGDKVRYBGYDJLKSLMWURSURCYGQAMDFTZ");
    msg.flags = 0U;
    const char tmp_msg_0[] = {81, -18, -13, -62, -17, -18, 67, -117, -46, 108, 103, -122, 70, 82, 82, 11, 106, 112, 77, 55, 103, 77, 58, 117, -49, 82, 101, 91, -25, -28, -60, -67, 98, -6, -49, 75, -122, 109, -120, 38, 83, -80, 113, -25, 68, 60, 59, -24, 62, 113, -66, 41, 79, 82, -110, 73, -53, -88, -88, 48, 71, -43, -124, 74, -100, -16, 67, 69, -55, 112, 52, -57, 93, 70, 13, 53, -7, -58, 40, 63, 57, 124, -16, -44, -52, 119, 51, 98, -97};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.2893242949762479);
    msg.setSource(1180U);
    msg.setSourceEntity(49U);
    msg.setDestination(49839U);
    msg.setDestinationEntity(112U);
    msg.seq = 55488U;
    msg.value = 121U;
    msg.error.assign("MKDPOZKLEHECKJRH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.7158025459047138);
    msg.setSource(64660U);
    msg.setSourceEntity(67U);
    msg.setDestination(55015U);
    msg.setDestinationEntity(174U);
    msg.seq = 48709U;
    msg.value = 184U;
    msg.error.assign("USRWTYLMVRXSBEGWYGBFGJAOLPEOAXXLZDOELXMICCTISUYVIDMWSNK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.6099213128895553);
    msg.setSource(32565U);
    msg.setSourceEntity(26U);
    msg.setDestination(36770U);
    msg.setDestinationEntity(8U);
    msg.seq = 9534U;
    msg.value = 31U;
    msg.error.assign("ADKQZUMVBEXIFCEMOQWRBMZUYKZYCURWDTHIOFPWYJYPFNJGGWWDKMBASHPGAOTESEZYTISDYWNLZECNLJDDRITJJTBLHGVBGHSGIVVIEACZSJDHAIOCJZXQATMCERLEULGPCBQSTNXBWOKQUFQNKRRMPXPIPLQIQVYBHXHBAXRSDZMVAXOTMUYOCSMYVZVRGRHMCANKFLXWVFNQCKLPLPVK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.3772979840890568);
    msg.setSource(12465U);
    msg.setSourceEntity(164U);
    msg.setDestination(23827U);
    msg.setDestinationEntity(108U);
    msg.seq = 52798U;
    msg.sys.assign("AEJZLTAMSGHWOTQOLX");
    msg.value = 0.0884245830224788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.03033092190295439);
    msg.setSource(32590U);
    msg.setSourceEntity(231U);
    msg.setDestination(4785U);
    msg.setDestinationEntity(100U);
    msg.seq = 1362U;
    msg.sys.assign("FGNYGKNLPGNMUMSCPPSYKKXQARXBMVBIJLHSYIAXSEOQQFOIRBHFXDUMTEGAQOIPSYPUUDUJKWUVEJZCODDLKZBRVECSJHPNQVIYRFXTOVGDHRAJWSZZEDGOFMILMXLXICMUQBAKYLHTZCJCZPFATROWOGYOZNQMTLCHKNKXDEGBIJBSKHTLMTRBWWPLLMNWACSXHUCZUQERTWBUCDAEGVYHYGWJBIVWTYZEIXAFKTQJDPSERFWFVVAV");
    msg.value = 0.6798478534779302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.08588454072363017);
    msg.setSource(27483U);
    msg.setSourceEntity(148U);
    msg.setDestination(34549U);
    msg.setDestinationEntity(167U);
    msg.seq = 54597U;
    msg.sys.assign("SYOQDHWIWLACRQAKKWZRJIVIKQFVLXVVGHETSHFCTBPETGQNLCSMDPLCIWSBOKFPUCEMTTOCXSZPHQFHDPFSEJAPBCMZHBLHMMVLDENPJBLKRXDNLUOZYNOXUCWFTUQIPYTYCKZRFHTYIBNFDGFYXQR");
    msg.value = 0.3766493166462769;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.7471800337022539);
    msg.setSource(26311U);
    msg.setSourceEntity(185U);
    msg.setDestination(28677U);
    msg.setDestinationEntity(57U);
    msg.action = 91U;
    msg.longain = 0.9895153611517017;
    msg.latgain = 0.16302199628819392;
    msg.bondthick = 3276406607U;
    msg.leadgain = 0.9141181235852062;
    msg.deconflgain = 0.06536237314531768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.8416472934787053);
    msg.setSource(28488U);
    msg.setSourceEntity(137U);
    msg.setDestination(17745U);
    msg.setDestinationEntity(171U);
    msg.action = 108U;
    msg.longain = 0.541491619759007;
    msg.latgain = 0.13343626149649357;
    msg.bondthick = 1064249413U;
    msg.leadgain = 0.9793715705661955;
    msg.deconflgain = 0.3529094126025102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.8991992932870811);
    msg.setSource(16449U);
    msg.setSourceEntity(143U);
    msg.setDestination(29642U);
    msg.setDestinationEntity(13U);
    msg.action = 107U;
    msg.longain = 0.3017185104305473;
    msg.latgain = 0.5645899514924949;
    msg.bondthick = 1940140294U;
    msg.leadgain = 0.6732508375443592;
    msg.deconflgain = 0.4484938531174719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.06989341014936479);
    msg.setSource(23795U);
    msg.setSourceEntity(233U);
    msg.setDestination(7924U);
    msg.setDestinationEntity(146U);
    msg.err_mean = 0.12658544088840307;
    msg.dist_min_abs = 0.20817972896595838;
    msg.dist_min_mean = 0.7413349793928987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.8480566024660721);
    msg.setSource(64173U);
    msg.setSourceEntity(127U);
    msg.setDestination(23442U);
    msg.setDestinationEntity(215U);
    msg.err_mean = 0.7563000676779212;
    msg.dist_min_abs = 0.9352920921304863;
    msg.dist_min_mean = 0.381351643977872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.07105355114160983);
    msg.setSource(24751U);
    msg.setSourceEntity(127U);
    msg.setDestination(45489U);
    msg.setDestinationEntity(17U);
    msg.err_mean = 0.12929783407494178;
    msg.dist_min_abs = 0.3384052016522321;
    msg.dist_min_mean = 0.9900431675848161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.8097532837441282);
    msg.setSource(23445U);
    msg.setSourceEntity(240U);
    msg.setDestination(44952U);
    msg.setDestinationEntity(57U);
    msg.action = 118U;
    msg.lon_gain = 0.12711149064058447;
    msg.lat_gain = 0.28390179411111915;
    msg.bond_thick = 0.5993194296740779;
    msg.lead_gain = 0.23459773019406882;
    msg.deconfl_gain = 0.8717811856865856;
    msg.accel_switch_gain = 0.1271375948954243;
    msg.safe_dist = 0.5950107375275153;
    msg.deconflict_offset = 0.35663509420562545;
    msg.accel_safe_margin = 0.49481443622069077;
    msg.accel_lim_x = 0.8092709972755783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.8902767134118582);
    msg.setSource(54577U);
    msg.setSourceEntity(146U);
    msg.setDestination(22629U);
    msg.setDestinationEntity(34U);
    msg.action = 158U;
    msg.lon_gain = 0.6300841495468823;
    msg.lat_gain = 0.9124212031198207;
    msg.bond_thick = 0.0561559720304875;
    msg.lead_gain = 0.14093284654172256;
    msg.deconfl_gain = 0.8615996842568197;
    msg.accel_switch_gain = 0.6736112372765826;
    msg.safe_dist = 0.8066030082685764;
    msg.deconflict_offset = 0.18406978281241515;
    msg.accel_safe_margin = 0.4031303548406645;
    msg.accel_lim_x = 0.26815810826569786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.7275901162170448);
    msg.setSource(59137U);
    msg.setSourceEntity(77U);
    msg.setDestination(22893U);
    msg.setDestinationEntity(141U);
    msg.action = 99U;
    msg.lon_gain = 0.9622524535812184;
    msg.lat_gain = 0.9996622158351685;
    msg.bond_thick = 0.30245136326200794;
    msg.lead_gain = 0.46045745038540753;
    msg.deconfl_gain = 0.7046765623081849;
    msg.accel_switch_gain = 0.9483638959719113;
    msg.safe_dist = 0.3176072622947208;
    msg.deconflict_offset = 0.20537905095230613;
    msg.accel_safe_margin = 0.71851998640966;
    msg.accel_lim_x = 0.553702357488253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.33550766868400916);
    msg.setSource(6694U);
    msg.setSourceEntity(113U);
    msg.setDestination(693U);
    msg.setDestinationEntity(246U);
    msg.type = 123U;
    msg.op = 34U;
    msg.err_mean = 0.6135537393096367;
    msg.dist_min_abs = 0.8305543982949647;
    msg.dist_min_mean = 0.37200208777917954;
    msg.roll_rate_mean = 0.575967897088017;
    msg.time = 0.7594350126237108;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 238U;
    tmp_msg_0.lon_gain = 0.5476651618706518;
    tmp_msg_0.lat_gain = 0.3771704605821995;
    tmp_msg_0.bond_thick = 0.5877624274977267;
    tmp_msg_0.lead_gain = 0.415464763431455;
    tmp_msg_0.deconfl_gain = 0.7648003893755104;
    tmp_msg_0.accel_switch_gain = 0.4576184729827796;
    tmp_msg_0.safe_dist = 0.021369058651946493;
    tmp_msg_0.deconflict_offset = 0.826360181778636;
    tmp_msg_0.accel_safe_margin = 0.52743098503793;
    tmp_msg_0.accel_lim_x = 0.4669283739444692;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.45839462565612155);
    msg.setSource(55800U);
    msg.setSourceEntity(178U);
    msg.setDestination(44747U);
    msg.setDestinationEntity(224U);
    msg.type = 208U;
    msg.op = 0U;
    msg.err_mean = 0.9765985516301466;
    msg.dist_min_abs = 0.6907434477133151;
    msg.dist_min_mean = 0.2738144881794864;
    msg.roll_rate_mean = 0.9051191370264803;
    msg.time = 0.26775640164318393;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 127U;
    tmp_msg_0.lon_gain = 0.889405127875706;
    tmp_msg_0.lat_gain = 0.8078344736984803;
    tmp_msg_0.bond_thick = 0.6103195259683435;
    tmp_msg_0.lead_gain = 0.7834177838126714;
    tmp_msg_0.deconfl_gain = 0.8843370424870776;
    tmp_msg_0.accel_switch_gain = 0.06763444798285678;
    tmp_msg_0.safe_dist = 0.21665910255589704;
    tmp_msg_0.deconflict_offset = 0.702070612806499;
    tmp_msg_0.accel_safe_margin = 0.7633450333828036;
    tmp_msg_0.accel_lim_x = 0.7288768864986894;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.7125360348361784);
    msg.setSource(58298U);
    msg.setSourceEntity(12U);
    msg.setDestination(36037U);
    msg.setDestinationEntity(54U);
    msg.type = 237U;
    msg.op = 218U;
    msg.err_mean = 0.7560430579633106;
    msg.dist_min_abs = 0.24064160586293504;
    msg.dist_min_mean = 0.946653402379181;
    msg.roll_rate_mean = 0.22963292244175282;
    msg.time = 0.37015412343417853;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 1U;
    tmp_msg_0.lon_gain = 0.6259840494911968;
    tmp_msg_0.lat_gain = 0.2693152851294086;
    tmp_msg_0.bond_thick = 0.5728140929514126;
    tmp_msg_0.lead_gain = 0.6348864912727269;
    tmp_msg_0.deconfl_gain = 0.021108291195033546;
    tmp_msg_0.accel_switch_gain = 0.402861214796037;
    tmp_msg_0.safe_dist = 0.020386016135487628;
    tmp_msg_0.deconflict_offset = 0.08802611163406415;
    tmp_msg_0.accel_safe_margin = 0.5846889107998;
    tmp_msg_0.accel_lim_x = 0.9302369809620572;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.7958425972768645);
    msg.setSource(61334U);
    msg.setSourceEntity(50U);
    msg.setDestination(42016U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.48237770304945227;
    msg.lon = 0.372974109753867;
    msg.eta = 2307262699U;
    msg.duration = 63793U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.2775059033088393);
    msg.setSource(49317U);
    msg.setSourceEntity(83U);
    msg.setDestination(46599U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.8192099871180397;
    msg.lon = 0.859245406310164;
    msg.eta = 2548338149U;
    msg.duration = 15026U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.5566878638033618);
    msg.setSource(22735U);
    msg.setSourceEntity(177U);
    msg.setDestination(33889U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.1146171117985012;
    msg.lon = 0.5847012777201609;
    msg.eta = 174060850U;
    msg.duration = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.29329085349231143);
    msg.setSource(12550U);
    msg.setSourceEntity(239U);
    msg.setDestination(7698U);
    msg.setDestinationEntity(135U);
    msg.plan_id = 53854U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.6993918608805709);
    msg.setSource(56464U);
    msg.setSourceEntity(13U);
    msg.setDestination(48719U);
    msg.setDestinationEntity(24U);
    msg.plan_id = 53225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.3250372312050457);
    msg.setSource(57312U);
    msg.setSourceEntity(28U);
    msg.setDestination(39999U);
    msg.setDestinationEntity(5U);
    msg.plan_id = 54628U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.20486080389557393;
    tmp_msg_0.lon = 0.3142111260897362;
    tmp_msg_0.eta = 609390994U;
    tmp_msg_0.duration = 46337U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.14611133935247622);
    msg.setSource(42499U);
    msg.setSourceEntity(56U);
    msg.setDestination(6971U);
    msg.setDestinationEntity(170U);
    msg.type = 98U;
    msg.command = 46U;
    msg.settings.assign("CZIYLSOLPWQFH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48154U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.23843584158604136;
    tmp_tmp_msg_0_0.lon = 0.1706134124641533;
    tmp_tmp_msg_0_0.eta = 3704809365U;
    tmp_tmp_msg_0_0.duration = 13559U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ULGSZNTTAUAFPNOZXBRHQNJSEEEQZJCNXIPISQRDZNDKVHUHCBMMTJLSBDBBVXFUCFYSEWJOIUYKQZTGSWCHLMWXXGAJZTBIHEVFPNYRPVWVMYPECQPKUWPDOFMIDKRBXEGOYFCNRFLWKEIPDWXVGTNQBUJAKHMOKLTCSBTIAXVQRMTRLGDHWFDORUYZETGPWWOZJHVDLCJZAIQMLRHNILGQVPSZDUCBLHRJYMKGSAXKIEOOAMNXKJYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.016715682266891907);
    msg.setSource(31174U);
    msg.setSourceEntity(66U);
    msg.setDestination(59573U);
    msg.setDestinationEntity(242U);
    msg.type = 230U;
    msg.command = 34U;
    msg.settings.assign("OOQSDUXWSAMUGWCHEFFGARZQQUAIFEVLTPEIWXJJAYBRVZLQYERWBHNKQUBKKAZSRHCSZXCOGIXTOYZVYUYQBPGCFDPZDEFHVYIZDMILTULEKFOGVJQDARW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 54572U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6047109204130048;
    tmp_tmp_msg_0_0.lon = 0.15555686234967037;
    tmp_tmp_msg_0_0.eta = 3493204831U;
    tmp_tmp_msg_0_0.duration = 4140U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OSYLZLWUJEJLFPHZXBRMXTJQRAXYFTCVEOUPRBINAMFUWBDIXCDOYHHYPNMWOMEVEFVVJHQWQWOGWRFQTULQCSOKMASUMYVCPQLRWHTMINXCXWVLBHPHYSKEASPTRUEECDGKVFKONAPTKAKYBTPVKADIJFICOHYVUGMUDZJYNAJOGSTBHCPXIJNIKOXQQLGAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.22265878145701834);
    msg.setSource(25514U);
    msg.setSourceEntity(100U);
    msg.setDestination(23316U);
    msg.setDestinationEntity(43U);
    msg.type = 93U;
    msg.command = 195U;
    msg.settings.assign("HPWSEDCNINUGBYNJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 3383U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UWEXBRTYLJEOCGPGKICIYVECJYHZIBF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.71891158869907);
    msg.setSource(26479U);
    msg.setSourceEntity(145U);
    msg.setDestination(34742U);
    msg.setDestinationEntity(176U);
    msg.state = 226U;
    msg.plan_id = 23306U;
    msg.wpt_id = 49U;
    msg.settings_chk = 38376U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.06470719302797434);
    msg.setSource(33348U);
    msg.setSourceEntity(175U);
    msg.setDestination(14669U);
    msg.setDestinationEntity(224U);
    msg.state = 251U;
    msg.plan_id = 11498U;
    msg.wpt_id = 233U;
    msg.settings_chk = 58019U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.0709586858472776);
    msg.setSource(32551U);
    msg.setSourceEntity(11U);
    msg.setDestination(28086U);
    msg.setDestinationEntity(15U);
    msg.state = 245U;
    msg.plan_id = 17753U;
    msg.wpt_id = 201U;
    msg.settings_chk = 8631U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.7588722137319976);
    msg.setSource(63525U);
    msg.setSourceEntity(196U);
    msg.setDestination(37444U);
    msg.setDestinationEntity(1U);
    msg.uid = 179U;
    msg.frag_number = 200U;
    msg.num_frags = 79U;
    const char tmp_msg_0[] = {-62, -92, -37, -52, -112, -34, 22, -68, -102, 26, -5, -67, 95, -68, -36, 56, -122, 43, -15, -119, 89, -85, 79, 118, 110, -49, -120, -7, -22, -110, -103, 57, 17, 13, 0, -116, -39, -51, -28, -3, -35, -88, 45, -25, 41, 59, -118, -69, 56, 28, 99, 56, -63, -35, -16, -66, -81, -108, 31, -15, 54, 112, -106, 99, -73, 96, -120, 20, 94, -28, 10, 71, 77, 88, 47, 24, 92, 50, -13, -38, 83, -108, 71, -45, 58, 10, -90, -26, -125, 42, -33, -21, -107, -102, 68, 6, 62, 37, 91, -56, 8, -3, -92, -12, -72, -13, 76, -16, -54, -95, 112};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.8657851647574074);
    msg.setSource(36333U);
    msg.setSourceEntity(221U);
    msg.setDestination(34147U);
    msg.setDestinationEntity(225U);
    msg.uid = 68U;
    msg.frag_number = 120U;
    msg.num_frags = 231U;
    const char tmp_msg_0[] = {-69, -28, -107, -103, -40, 66, -77, 17, 71, 31, -33, -27, 24, -46, 110};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.9207430399331642);
    msg.setSource(56553U);
    msg.setSourceEntity(222U);
    msg.setDestination(28855U);
    msg.setDestinationEntity(23U);
    msg.uid = 203U;
    msg.frag_number = 89U;
    msg.num_frags = 93U;
    const char tmp_msg_0[] = {-27, -50, -2, -17, -43, 112, 104, 33, 38, 8, 92, -4, -12, 64, 53, -122, -88, -62, -10, -122, 23, -54, 81, 99, 21, -102, -36, -62, -70, 4, -108, 113, 84, 103, -89, 113, 106, -58, -53, 24, 19, -48, 32, 75, 25, 26, 116, 3, -70, 96, -115, 103, -59, 71, 84, -105, -12, -3, 8, -1, -20, -13, 19, 71, 110, -74, -62, 69, 99, 100, -4, -43, 46, -93, -47, -7, 63, -93, 14, -56, -29, -42, 121, -60, 119, -41, -24, 126, -124, 124, -112, 111, -58, -125, 66, -16, -51, -26, -127, 21, -8, -82, -11, 98, 64, -17, 60, -110, 73, -6, 86, 126, 91, -112, 10, -33, -56, -98, 104, -18, -23, 65, -27, 74, 84, 65, 95, -30, 65, -9, 49, 42, 57, 120, 69, 16, 12, 89, -111, 91, 94, -111, 2, -55, 98, -78, 42, -15, 32, -88, -83, -9, -36, 38, 38, -56, -90, 70, -14, -64, -95, 59, 46, 14, 4, 37, -112, 49, -114, -106, 100, -71, -82, 14, 17, 51, -83, 125, 96, -44, 45, 120, -9, -20, -103, 97, 13, 5, -65, -92, -80, 28, 124, -44, 60, 110, 24, -20, 19, -89, -92, -54, 80, -79, -48, -23, 103, -35, -66, 23, -120, 52, -69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.3086884513844085);
    msg.setSource(18615U);
    msg.setSourceEntity(235U);
    msg.setDestination(38003U);
    msg.setDestinationEntity(139U);
    msg.content_type.assign("MLDGTCSJJIBLTCXKNKJWXJQUDQKOPOEADOYRFPIXEOULQHWTURYRETRDBEGYLAACTWABDIFFVRCRXIPOZVPJHBNDCKKBDGTZBYANDGHHXMKTINMBGAZBAFQIHZFSHUXRKLSOPUFWUYFWNZLWYVQJSCICVMSPGZDLCOLQPVYYJHQIYBUHEKPSXSGVZTEJFSZXGVMVHRMULANNVRGHPYZJFMQOSAWMCIKW");
    const char tmp_msg_0[] = {-3, 101, 69, 45, -30, -47, -83, -40, -59, -86, 26, 26, 119, -26, -58, 117, -29, 28, 117, -73, 33, -68, 44, 40, -52, -3, -87, 29, -83, -100, -59, -39, 28, -72, -90, -53, 64, -42, 110, -75, -25, -83, -74, -45, 61, 22, -104, 70, -102, 98, 9, 109, 25, 82, 83, -123, 111, -74, -95, 41, 28, 85, 69, -106, -120, 56, -34, -32, -51, 14, 111, -108, 56, -89};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.6609355379769419);
    msg.setSource(6231U);
    msg.setSourceEntity(208U);
    msg.setDestination(29133U);
    msg.setDestinationEntity(29U);
    msg.content_type.assign("HMGWHSVTYLPDQAFLXWEYWTWRZKCCV");
    const char tmp_msg_0[] = {-61, 17, 88, 6, 34, 27, -13, 52, -22, -8, -94, -82, 57, 69, 84, -29, 3, 109, 114, 122, 93, -40, 4, 64, 2, -102, 61, -81, -122, 125, 102, 66, 99, -52, 25, -121, -23, -53, 32, -57, 38, -51, -60, 64, -110, -45, 61, 57, 120, -92, -112, 23, -114, -108, 32, 19, -15, -120, -62, 122, -3, -9, -28, -62, 113, 111, 107, 38, -118, -113, -14, 101, -79, 49, 78, -90, 81, 31, 92, -4, 89, -77, -17, -127, -125, 20, 81, -91, -112, -13, 25, -86, 94, 89, 81, 89, -126, -3, -69, -52, -29, -124, -14, 78, 73, -37, 75, -56, -17, -97, 106, -30, -56, 115, 8, 91, 119, 13, -18, -82, -117, 81, -82, 121, 114, -67, 79, -2, -6, 26, 104, 25, 102, 115, 106, 21, 39, 86, -72, -108, -4, -35, 28, -122, 110, -46, -50, 69, 116, -95, 102, 83, -126, 28, 7, 120, 79, -17, -32, 34, 114, 111};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.4686805150953458);
    msg.setSource(13247U);
    msg.setSourceEntity(99U);
    msg.setDestination(63677U);
    msg.setDestinationEntity(194U);
    msg.content_type.assign("CXFNPCSGSTRXXAFPXIQUCIZMEVFOHLKSXHQCYWRLTKMSENDGMKSCIGFFLVWEYFKCSVGJIIZJUHEWOTJJXCSRDVEPXEDNWZAGFLRQKRQAGBZEOVWRVUHVAHHYBLQKBTBBOCOOBYWIJIPSMWYJNKJSQDZYFPJENWADUHYONFZNBFHRSRWDEM");
    const char tmp_msg_0[] = {100, -35, -82, 123, -41, 83, -77, -78, 53, 123, 60, 58, 5, 40, 121, -86, -60, 19, 64, -60, -73, -68, 55, -38, -42, 101, 5, 30, -116, 107, -31, 30, 18, 97, -84, -92, -88, 121, 125, -90, 74, 71, 68, 28, 46, 82, 59, 72, 77, -8, -128, -58, -120, -112, 20, -116, 125, -53, -58, -34, -81, -74, -128, -1, -104, -7, -55, -61, -38, -34, -113, -51, 25, -31, -43, -85, -66, -50, -23, 7, 4, -62, -116, 59, 81, -105, -94, -83, 13, 12, -28, -112, -27, 51, -101, -90, -22, -72, 17, -118, 117, 70, -86, 85, 17, 71, -5, -119, 39, -94, -3, -5, -44, -81, -2, -108, -81, 43, -18, 112, 51, 101, 93, -26, -107, -109, -83, 72, -79, 98, -19, -95, -91, 51, -24, -122, 42, 16, -56, -121, -88, -75, -79, 106, -44, 2, -43, 121, -9, 22, 63, 65, 7, -68, -56, -79, -108, -57, -128, 98, 96, 49, 117, -101, -103, -33, 35, -103, -94, -31, -121, -63, -52, -45, 104, 44, -111, -112, 33, 95, 7, 20, 126, -95, -99, -20, 89, -7, 31, -30, -106, 102, -42, -96, -82, 119, 119, 48, 77, -118, -81, -4, 48, -20, 32, 42, -7, 116, -125, 41, 79, -13, 65, 73, 31, 112, 29, 109, -92, -44, 11, -52, 62, 119, -77};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.6767390791350212);
    msg.setSource(65457U);
    msg.setSourceEntity(125U);
    msg.setDestination(34239U);
    msg.setDestinationEntity(132U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.30576237292707853);
    msg.setSource(12115U);
    msg.setSourceEntity(140U);
    msg.setDestination(1790U);
    msg.setDestinationEntity(0U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.8286822607276189);
    msg.setSource(34126U);
    msg.setSourceEntity(2U);
    msg.setDestination(50089U);
    msg.setDestinationEntity(126U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.9174776002701949);
    msg.setSource(64623U);
    msg.setSourceEntity(176U);
    msg.setDestination(60086U);
    msg.setDestinationEntity(199U);
    msg.target = 59327U;
    msg.bearing = 0.47303862201245117;
    msg.elevation = 0.6290819306163484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.12084189321301675);
    msg.setSource(45366U);
    msg.setSourceEntity(216U);
    msg.setDestination(60416U);
    msg.setDestinationEntity(137U);
    msg.target = 3760U;
    msg.bearing = 0.5050843159062935;
    msg.elevation = 0.1740012285728445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.09144014788934629);
    msg.setSource(36631U);
    msg.setSourceEntity(249U);
    msg.setDestination(11950U);
    msg.setDestinationEntity(109U);
    msg.target = 55786U;
    msg.bearing = 0.6708491386103835;
    msg.elevation = 0.9638846565177693;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.7098163292135193);
    msg.setSource(51345U);
    msg.setSourceEntity(126U);
    msg.setDestination(38785U);
    msg.setDestinationEntity(233U);
    msg.target = 39139U;
    msg.x = 0.6166550821898565;
    msg.y = 0.8566615075468554;
    msg.z = 0.5711354400242636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.5603965703061722);
    msg.setSource(35425U);
    msg.setSourceEntity(100U);
    msg.setDestination(27819U);
    msg.setDestinationEntity(150U);
    msg.target = 46394U;
    msg.x = 0.9265676876725557;
    msg.y = 0.7260543377488289;
    msg.z = 0.26844831104574873;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.25634713068150716);
    msg.setSource(24508U);
    msg.setSourceEntity(243U);
    msg.setDestination(34807U);
    msg.setDestinationEntity(64U);
    msg.target = 35410U;
    msg.x = 0.09147960056049331;
    msg.y = 0.041820077023281055;
    msg.z = 0.3290718734502277;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.10154199285707399);
    msg.setSource(64640U);
    msg.setSourceEntity(206U);
    msg.setDestination(61119U);
    msg.setDestinationEntity(139U);
    msg.target = 45362U;
    msg.lat = 0.7283806926152715;
    msg.lon = 0.17564145683929888;
    msg.z_units = 16U;
    msg.z = 0.6744259070834531;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.44362892906127793);
    msg.setSource(37742U);
    msg.setSourceEntity(242U);
    msg.setDestination(38978U);
    msg.setDestinationEntity(51U);
    msg.target = 2905U;
    msg.lat = 0.11369075946405949;
    msg.lon = 0.3612675744590206;
    msg.z_units = 67U;
    msg.z = 0.12929919596218187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.8535301226697986);
    msg.setSource(295U);
    msg.setSourceEntity(37U);
    msg.setDestination(52605U);
    msg.setDestinationEntity(84U);
    msg.target = 29658U;
    msg.lat = 0.06557159304131366;
    msg.lon = 0.6728624268574602;
    msg.z_units = 159U;
    msg.z = 0.14753639394313356;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.9132827439731017);
    msg.setSource(21473U);
    msg.setSourceEntity(195U);
    msg.setDestination(64999U);
    msg.setDestinationEntity(19U);
    msg.locale.assign("ZOOVDTGCHHJBMMLGDVLOEIZWPHUXLUDIWVWGQCZFNSQVOCETQBNQZDROQZPAJSUKERGZJYYM");
    const char tmp_msg_0[] = {-86, -69, 58, -64, 105, -61, 108, -93, -15, -82, -62, 103, 97, -122, -57, 58, -74, -15, -1, 96, 105, 45, -82, -24, -50, -12, -110, 115, 20, 114, 90, -28, -126, -39, -73, 13, -26, 104, -78, 9, 123, 115, -36, -45, 83, 46, 51, -25, 63, -19, 79, 40, 3, 101, 90, -68, 45, 110, -18, -90, 50, 76, -82, -4, -50, -39, -92, 12, -88, 98, -18, -86, -28, 8, 65, -71, 119, 81, -121, -6, -47, 83, -127, 10, 10, -68, -89, -101, -16, -57, 6, -126, -59, 124, 97, -26, -80, 6, 70, -27, 72, -72, 19, 42, 3, 125, -61, -20, -80, -14, 22, -111, 24, 124, 30, -125, -106, 43, 10, -43, -27, -94, -77, 28, 125, -108, -13, 40, -98, 67};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.8067400143924232);
    msg.setSource(6240U);
    msg.setSourceEntity(54U);
    msg.setDestination(26251U);
    msg.setDestinationEntity(163U);
    msg.locale.assign("JDIBNWIBOATKQMCTRPQOLLRSGNNRKJSMBNUBSTEAQSUDRCSVHYHOEBIAHMFXOWNGSGSIPNGZDF");
    const char tmp_msg_0[] = {-58, -38, 119, 80, -56, -125, 16, -70, 77, -21, -102, 91, 43, -52, 18, 77, -21, -60, 94, 65, -57, 87, -4, -86, -16, 16, -77, -123, -51, -38, -18, 105, 114, -19, -12, -112, 28, 38, -118, 89, -36, 73, 34, -55, -86, -68, 62, 12, 57, -64, -108, -109, -71, -9, -37, 125, -66, -46, 53, 105, 42, -34, -45, 57, 66, -84, 34, -89, 16, -91, 21, 113, 124, 52, -105, -101, 116, -101, -23, -16, 104, 52, -121, 47, -47, -30, -17, 47, -67, 102, -63, 114, 119, 81, -102, 65, 82, 119, -119, -44, -121, -48, -76, -67, 97, -58, 16, 32, 93, -114, -14, -31, 13, -85, -54, -34, -4, 116, -127, -92, -100, -37, -116, 125, -62, 26, -77, 67, 44, 93, 98, 54, -4, 87, 7, -92, -67, 126, -101, -72, -34, 117, 84, 109, -113, 93, 25, -117, 104, -62, 84, 37, -6, -18, 102, -33, 57, 117, 123, -56, 90, 45, 49, -48, 23, -26, 19, -62, -78, -91, -55, -104, -71};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.5508135502340799);
    msg.setSource(41675U);
    msg.setSourceEntity(88U);
    msg.setDestination(21689U);
    msg.setDestinationEntity(214U);
    msg.locale.assign("CZVEAJPBYWCWYTGQWHSZJJEZDJPMHLLTNTNKWLSAOKRUTFMSXXICBCIKVZGDULVZXSWIXAWWTOXYTCRMDVFMRXJANRDFAISJREPQKEEKXBWPVHFANFPBQCDTPTBNVFBZHFICGOILXPUGZETQAJHOVGEMNNGYHBUYQJGITYRPQUQVMMAGOHYOUKJNKUUMJYLYQFXRROKECNKRQCIWAMPBSVOKOZHQLENZGLLDEPRXDHZ");
    const char tmp_msg_0[] = {-77, 87, 105, -33, 39, 99, -51, -82, -104, 20, 85, 6, 83, -32, -91, -122, 41, 98, -120, -41, -14, -80, -18, -120, -92, 73, -100, -48, 88, 110, -122, -99, -75, -105, -90, 114, 44, 36, 36, -46, 67, 108, 79, -87, -61, 71, 105, -7, 108, -35, 47, 31, -84, 31, 50, 24, 113, -108, 8, 87, 96, 67, 65, -70, -39, -115, -97, -122, -34, 83, -32, 37, 59, -54, 100, 30, 3, 114, -53, -54};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.30339817230516597);
    msg.setSource(57505U);
    msg.setSourceEntity(42U);
    msg.setDestination(14087U);
    msg.setDestinationEntity(123U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.9323800346701006);
    msg.setSource(52168U);
    msg.setSourceEntity(155U);
    msg.setDestination(49231U);
    msg.setDestinationEntity(6U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.27746033831347217);
    msg.setSource(20475U);
    msg.setSourceEntity(131U);
    msg.setDestination(8768U);
    msg.setDestinationEntity(225U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.12948792538828635);
    msg.setSource(63086U);
    msg.setSourceEntity(0U);
    msg.setDestination(20436U);
    msg.setDestinationEntity(225U);
    msg.camid = 201U;
    msg.x = 25682U;
    msg.y = 43532U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.5201320892170407);
    msg.setSource(34939U);
    msg.setSourceEntity(141U);
    msg.setDestination(7950U);
    msg.setDestinationEntity(149U);
    msg.camid = 253U;
    msg.x = 7192U;
    msg.y = 10856U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.0735912046784225);
    msg.setSource(44492U);
    msg.setSourceEntity(75U);
    msg.setDestination(45227U);
    msg.setDestinationEntity(103U);
    msg.camid = 49U;
    msg.x = 43936U;
    msg.y = 54280U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.6373675336529563);
    msg.setSource(33957U);
    msg.setSourceEntity(244U);
    msg.setDestination(22070U);
    msg.setDestinationEntity(194U);
    msg.camid = 65U;
    msg.x = 51251U;
    msg.y = 30047U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.4198624819909945);
    msg.setSource(60351U);
    msg.setSourceEntity(210U);
    msg.setDestination(21288U);
    msg.setDestinationEntity(189U);
    msg.camid = 121U;
    msg.x = 5381U;
    msg.y = 35086U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.7179377481700375);
    msg.setSource(21511U);
    msg.setSourceEntity(144U);
    msg.setDestination(3197U);
    msg.setDestinationEntity(88U);
    msg.camid = 30U;
    msg.x = 60780U;
    msg.y = 10778U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.04062317899623691);
    msg.setSource(47881U);
    msg.setSourceEntity(184U);
    msg.setDestination(4748U);
    msg.setDestinationEntity(94U);
    msg.tracking = 70U;
    msg.lat = 0.026776766294105192;
    msg.lon = 0.8568982861687459;
    msg.x = 0.15466441476698356;
    msg.y = 0.12158053929872681;
    msg.z = 0.6175609248506857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.5929543845935525);
    msg.setSource(25207U);
    msg.setSourceEntity(249U);
    msg.setDestination(19000U);
    msg.setDestinationEntity(92U);
    msg.tracking = 154U;
    msg.lat = 0.769034178582106;
    msg.lon = 0.43641101136144933;
    msg.x = 0.7953343972107576;
    msg.y = 0.39474117850028945;
    msg.z = 0.5508595612846433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.41766947668080956);
    msg.setSource(6452U);
    msg.setSourceEntity(52U);
    msg.setDestination(11377U);
    msg.setDestinationEntity(63U);
    msg.tracking = 2U;
    msg.lat = 0.9150119876694907;
    msg.lon = 0.7674039339708556;
    msg.x = 0.27881976213913695;
    msg.y = 0.18683503218547604;
    msg.z = 0.7181099945077741;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.24088382426219856);
    msg.setSource(55887U);
    msg.setSourceEntity(131U);
    msg.setDestination(35371U);
    msg.setDestinationEntity(103U);
    msg.target.assign("PCCPONHJWNUYJHDHAZAKESOVXYNDANCZQVQODZBMTRMJEHQAQGGCAAWXKTQVUOLFYDWCJGXZIUKRBFKWVJTHBYEYEVCTNMRGEHVMBDRSWYLPLNMQWSLKRP");
    msg.lbearing = 0.8596002628165622;
    msg.lelevation = 0.36741444734750484;
    msg.bearing = 0.996214476201571;
    msg.elevation = 0.9727317438890611;
    msg.phi = 0.3130020910628388;
    msg.theta = 0.8257333044038895;
    msg.psi = 0.3418789251884976;
    msg.accuracy = 0.4136248011173276;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.5458455303291572);
    msg.setSource(31754U);
    msg.setSourceEntity(181U);
    msg.setDestination(16896U);
    msg.setDestinationEntity(176U);
    msg.target.assign("LZXAVQGCLRNNSAUVHYJGJDZTAELLFBWQZULCYAIEVFKSCYYQYPDBBWXMCQREVMCXBPSCXHMGURTGJKMWCEEONAOIQXDEHUFPZTVJKNUUWIRZKTIOHVNVMFWPOJERFTHVXAIRHPKKDBRBAGSMIX");
    msg.lbearing = 0.7808685548583676;
    msg.lelevation = 0.427052793788378;
    msg.bearing = 0.4020609122548604;
    msg.elevation = 0.9636650410852778;
    msg.phi = 0.9955268811128782;
    msg.theta = 0.9954430886984694;
    msg.psi = 0.5089860972229351;
    msg.accuracy = 0.3983584226176943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.801618762421328);
    msg.setSource(16653U);
    msg.setSourceEntity(8U);
    msg.setDestination(37881U);
    msg.setDestinationEntity(170U);
    msg.target.assign("ZJCPMVSWZOCULGYTDVOXGQXSCQEZBTUCREHGFZYACPPJDKBJRKYDUYFYBRIYSTMPVAINDJYCRODHIPQVBILOZWAYWBNUJVKOFOLMXLWWMYFZIJFWHNRRFXQKQABXUOIQCULBTVEBDLTISHUQILZOBFSTCNKJZVQHULKMTSGAQLGXIA");
    msg.lbearing = 0.7292819277587366;
    msg.lelevation = 0.5445300136368059;
    msg.bearing = 0.725235770307303;
    msg.elevation = 3.5535934467922914e-05;
    msg.phi = 0.4941182852918463;
    msg.theta = 0.14121353430599726;
    msg.psi = 0.42498146696807737;
    msg.accuracy = 0.8496040356299641;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.16379170337947813);
    msg.setSource(11979U);
    msg.setSourceEntity(217U);
    msg.setDestination(30580U);
    msg.setDestinationEntity(217U);
    msg.target.assign("LQSTPGBIAIGIODCWGNKCAOHVSDHJJRZCMZKRSSMRQWXDPRRQIMPDICFHCLEUDEBDQPYCAVSWXVBPTGQVHWYBWSVJRAYMTLNSWPWIMAYTPEWTPGHGMHZENBOQQVNAZYXFEHOUHBIOOIULJKIJFNZLXOMATXKD");
    msg.x = 0.2653459520074112;
    msg.y = 0.014972856015550318;
    msg.z = 0.2589773385105829;
    msg.n = 0.09335174987833217;
    msg.e = 0.5586404968677812;
    msg.d = 0.7619534512442354;
    msg.phi = 0.8756910375422998;
    msg.theta = 0.13264492187939814;
    msg.psi = 0.42974463808813645;
    msg.accuracy = 0.7131661719335286;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.7549800138714239);
    msg.setSource(33119U);
    msg.setSourceEntity(202U);
    msg.setDestination(62702U);
    msg.setDestinationEntity(88U);
    msg.target.assign("ZQKQFGKNMDNAAOYTKYVNJOYSRQHDRWQNLYMAEDOXOUIWPITYOTCGCASNZBJIREGQFVKJFTDSFXHAGBPFBBRDZXAIAKPSEEPMTFVAWSGQAEWKKXPLLHEXWMBIBSENLJRVULSCWZWQHKRZMRCDGQFTLGYBOURFOHJCFKPVCRHHPWJYUSMADGIJCIXQVVTZDLPNZJYDSGIZSHJGPUEXLTDVPLUFCXOHZQRZLTXKMTNNVMUNEUHIWYVMCCYUU");
    msg.x = 0.9680288746335213;
    msg.y = 0.4226400354452694;
    msg.z = 0.4962915299118634;
    msg.n = 0.029318049216631614;
    msg.e = 0.7894410148738527;
    msg.d = 0.4692744820962813;
    msg.phi = 0.4386197556548238;
    msg.theta = 0.16585910618680544;
    msg.psi = 0.18900202502649832;
    msg.accuracy = 0.06278821088265707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.02592952772931567);
    msg.setSource(31689U);
    msg.setSourceEntity(88U);
    msg.setDestination(59589U);
    msg.setDestinationEntity(90U);
    msg.target.assign("QUOMOAUENZHSEQBSXKYBUNVXXELLZVWZHJCYFCKTDAXEHYWKOEZVVRBLGWOUYCTTRHDIDSMYRYAFPKILFZWAKDSHTWEMGNHRLCWLXKVSIFFJRWNXPYEOMBJPJMXERUXFPLMSJAPZQVRMCCHPKABWZQFQTKTBGVDNVTBKWFOGH");
    msg.x = 0.4930266777895701;
    msg.y = 0.03288385129000582;
    msg.z = 0.5999124718838021;
    msg.n = 0.24107237692800576;
    msg.e = 0.23010090078977063;
    msg.d = 0.8155793134741697;
    msg.phi = 0.4577383920983559;
    msg.theta = 0.23726933324941535;
    msg.psi = 0.21014427292812854;
    msg.accuracy = 0.9674472566798679;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.13840235941540524);
    msg.setSource(49528U);
    msg.setSourceEntity(3U);
    msg.setDestination(30209U);
    msg.setDestinationEntity(90U);
    msg.target.assign("AHDIDOFJZPCYKEUBWTXBCUYLXSWBDRPEHFEICHSDGSJAQRVUSPWXVZOKYFCXENX");
    msg.lat = 0.18184946793320145;
    msg.lon = 0.6287757043438654;
    msg.z_units = 186U;
    msg.z = 0.45920115554007757;
    msg.accuracy = 0.056653637568835236;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.9054860301418187);
    msg.setSource(42097U);
    msg.setSourceEntity(108U);
    msg.setDestination(406U);
    msg.setDestinationEntity(195U);
    msg.target.assign("OPWJBRKZMTYJUMTVKOHUUIAQAVEGDKXZHQKVSRMHCYDFPLJZYNVVXHKSVMKLIIUE");
    msg.lat = 0.536445648719275;
    msg.lon = 0.7677908525958946;
    msg.z_units = 209U;
    msg.z = 0.09988681778016584;
    msg.accuracy = 0.39964231502583303;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.3029745883333025);
    msg.setSource(3057U);
    msg.setSourceEntity(198U);
    msg.setDestination(44870U);
    msg.setDestinationEntity(170U);
    msg.target.assign("NGIKNJWNOCQHFKXBNANIASEILIEPKYAJRCAHQEUVAVWMN");
    msg.lat = 0.9636963728895358;
    msg.lon = 0.29028251544359807;
    msg.z_units = 26U;
    msg.z = 0.23595441951299712;
    msg.accuracy = 0.4255450381057282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.9417463794453301);
    msg.setSource(53382U);
    msg.setSourceEntity(221U);
    msg.setDestination(61040U);
    msg.setDestinationEntity(25U);
    msg.name.assign("DTAXMVBIIPUXEUEXLAJGJLHRAOFTEXQJSK");
    msg.lat = 0.5947946773346292;
    msg.lon = 0.5528381443403247;
    msg.z = 0.12406696810809215;
    msg.z_units = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.7385707308646543);
    msg.setSource(21863U);
    msg.setSourceEntity(238U);
    msg.setDestination(2772U);
    msg.setDestinationEntity(135U);
    msg.name.assign("OZPAQQXWDSHDSEGCUFCQMALHIENTBEMFILPYRRNIEVJGJPEQOMGFXKJTWUNMAGOJBDDZTCYTPRKEIPDIVKQFPFGBNOTZWLNIJCVHUABHUCPLTQYXIMYKVVZXZSTLRYBUCYGYMMSBOJWSADHXWLJKPX");
    msg.lat = 0.7291813317678841;
    msg.lon = 0.39351417556701707;
    msg.z = 0.3583189002618786;
    msg.z_units = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.595245099808554);
    msg.setSource(18681U);
    msg.setSourceEntity(74U);
    msg.setDestination(45936U);
    msg.setDestinationEntity(30U);
    msg.name.assign("IZKZBKUVMXBCTMYAFDRHZJWKV");
    msg.lat = 0.8258359347392462;
    msg.lon = 0.42502907024243597;
    msg.z = 0.44267220415697484;
    msg.z_units = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.6175754844738319);
    msg.setSource(19016U);
    msg.setSourceEntity(168U);
    msg.setDestination(55809U);
    msg.setDestinationEntity(156U);
    msg.op = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.07798069276413044);
    msg.setSource(39237U);
    msg.setSourceEntity(107U);
    msg.setDestination(40021U);
    msg.setDestinationEntity(201U);
    msg.op = 168U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.6234331785600032);
    msg.setSource(30262U);
    msg.setSourceEntity(189U);
    msg.setDestination(20256U);
    msg.setDestinationEntity(112U);
    msg.op = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.7710084988402476);
    msg.setSource(12219U);
    msg.setSourceEntity(0U);
    msg.setDestination(60758U);
    msg.setDestinationEntity(244U);
    msg.value = 0.7554153774361299;
    msg.type = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.7979538667036439);
    msg.setSource(45916U);
    msg.setSourceEntity(10U);
    msg.setDestination(33671U);
    msg.setDestinationEntity(226U);
    msg.value = 0.42404198914660707;
    msg.type = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.8329739655364232);
    msg.setSource(54483U);
    msg.setSourceEntity(135U);
    msg.setDestination(23508U);
    msg.setDestinationEntity(230U);
    msg.value = 0.6467458380772753;
    msg.type = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.8636528837732869);
    msg.setSource(17155U);
    msg.setSourceEntity(240U);
    msg.setDestination(31506U);
    msg.setDestinationEntity(116U);
    msg.value = 0.8849942762750729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.24503764756794655);
    msg.setSource(3727U);
    msg.setSourceEntity(157U);
    msg.setDestination(58448U);
    msg.setDestinationEntity(184U);
    msg.value = 0.7462613073374628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.03809977806049458);
    msg.setSource(32071U);
    msg.setSourceEntity(99U);
    msg.setDestination(47722U);
    msg.setDestinationEntity(247U);
    msg.value = 0.2282506460073651;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.5965518961897229);
    msg.setSource(36808U);
    msg.setSourceEntity(185U);
    msg.setDestination(3354U);
    msg.setDestinationEntity(42U);
    msg.timestamp_last_service = 0.8896215075420402;
    msg.time_next_service = 0.37422177131792234;
    msg.time_motor_next_service = 0.48271772676934754;
    msg.time_idle_ground = 0.2740408816800667;
    msg.time_idle_air = 0.28011731894330194;
    msg.time_idle_water = 0.036642908633788274;
    msg.time_idle_underwater = 0.008561779965965854;
    msg.time_idle_unknown = 0.5947650916372651;
    msg.time_motor_ground = 0.5016971998983246;
    msg.time_motor_air = 0.7650799180757945;
    msg.time_motor_water = 0.7917106661490219;
    msg.time_motor_underwater = 0.3518703576471728;
    msg.time_motor_unknown = 0.38165223695486683;
    msg.rpm_min = -13628;
    msg.rpm_max = 18892;
    msg.depth_max = 0.006539967245707823;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.10565828218536277);
    msg.setSource(44839U);
    msg.setSourceEntity(89U);
    msg.setDestination(17365U);
    msg.setDestinationEntity(239U);
    msg.timestamp_last_service = 0.16735080672120684;
    msg.time_next_service = 0.9849889661599116;
    msg.time_motor_next_service = 0.925278372993398;
    msg.time_idle_ground = 0.8618903028871711;
    msg.time_idle_air = 0.053060728501238;
    msg.time_idle_water = 0.07091963995376926;
    msg.time_idle_underwater = 0.898863481061358;
    msg.time_idle_unknown = 0.10046003918382995;
    msg.time_motor_ground = 0.05427675473365656;
    msg.time_motor_air = 0.11015496580169293;
    msg.time_motor_water = 0.6651576422836598;
    msg.time_motor_underwater = 0.9649749471693316;
    msg.time_motor_unknown = 0.3627018469986336;
    msg.rpm_min = 18378;
    msg.rpm_max = -23091;
    msg.depth_max = 0.3915958899403389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.0040837735463500335);
    msg.setSource(41165U);
    msg.setSourceEntity(48U);
    msg.setDestination(32949U);
    msg.setDestinationEntity(67U);
    msg.timestamp_last_service = 0.3767095075785454;
    msg.time_next_service = 0.23216644376087603;
    msg.time_motor_next_service = 0.2680037030928889;
    msg.time_idle_ground = 0.533590791473612;
    msg.time_idle_air = 0.1633532933162265;
    msg.time_idle_water = 0.6996959652310608;
    msg.time_idle_underwater = 0.21055379524687678;
    msg.time_idle_unknown = 0.7412384612983202;
    msg.time_motor_ground = 0.23803277270306622;
    msg.time_motor_air = 0.5554966265104571;
    msg.time_motor_water = 0.6688787846568567;
    msg.time_motor_underwater = 0.602513425495747;
    msg.time_motor_unknown = 0.00885408483355099;
    msg.rpm_min = -21961;
    msg.rpm_max = 18806;
    msg.depth_max = 0.7207398389565515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.8031305118802908);
    msg.setSource(23338U);
    msg.setSourceEntity(75U);
    msg.setDestination(3263U);
    msg.setDestinationEntity(146U);
    msg.severity = 167U;
    msg.text.assign("NXASTBYNLNAZPRVLRMMAIPYXIIMVYQDEXWBLJYORUKCJHWIOUHCCHDFZPYNFWIRZNLBAUGZASSGNTCHKOQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.6669283232368438);
    msg.setSource(45076U);
    msg.setSourceEntity(234U);
    msg.setDestination(16029U);
    msg.setDestinationEntity(145U);
    msg.severity = 194U;
    msg.text.assign("VXAABMKYSLQEGZSMOSRSUZVIPXDFSHIUZTWQALXGVFEDINKFMILZFEGDGIBDXJJMDPFCZHAOSIEGNZGTUHCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.5976342400797879);
    msg.setSource(2493U);
    msg.setSourceEntity(49U);
    msg.setDestination(61236U);
    msg.setDestinationEntity(116U);
    msg.severity = 164U;
    msg.text.assign("CREIPYDPSBHWKEUXNEQDZKBALLFERJNJVGRRYYMSAOSMWNSPJQLYCQIHPPBREGHNYTXHUBREMSONREZXYOWCANNTIOTEQSXYOGZROARDPIGZVWHDOXTYCJTLV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.26342021629994716);
    msg.setSource(48217U);
    msg.setSourceEntity(201U);
    msg.setDestination(25874U);
    msg.setDestinationEntity(153U);
    msg.channel = 119;
    msg.value = -862256737;
    msg.gain = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.6550971161206457);
    msg.setSource(25215U);
    msg.setSourceEntity(139U);
    msg.setDestination(24281U);
    msg.setDestinationEntity(78U);
    msg.channel = -104;
    msg.value = -650357184;
    msg.gain = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.4189702377671257);
    msg.setSource(18746U);
    msg.setSourceEntity(11U);
    msg.setDestination(261U);
    msg.setDestinationEntity(210U);
    msg.channel = -32;
    msg.value = 356071071;
    msg.gain = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.2181407391449931);
    msg.setSource(30686U);
    msg.setSourceEntity(36U);
    msg.setDestination(59508U);
    msg.setDestinationEntity(32U);
    msg.ch01 = 0.6620280832848199;
    msg.ch02 = 0.32478082037382094;
    msg.ch03 = 0.29340977836864834;
    msg.ch04 = 0.6610968245141016;
    msg.ch05 = 0.3783396901851228;
    msg.ch06 = 0.09766698230735027;
    msg.ch07 = 0.36089610783685566;
    msg.ch08 = 0.9310027417316097;
    msg.ch09 = 0.1477645771089119;
    msg.ch10 = 0.5508130566380091;
    msg.ch11 = 0.9580595960187702;
    msg.ch12 = 0.03678970567118811;
    msg.ch13 = 0.3521051292519136;
    msg.ch14 = 0.8132854041421573;
    msg.ch15 = 0.30818198810487196;
    msg.ch16 = 0.8725845090368791;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.22346288560455363);
    msg.setSource(61804U);
    msg.setSourceEntity(62U);
    msg.setDestination(10910U);
    msg.setDestinationEntity(232U);
    msg.ch01 = 0.9833033556687767;
    msg.ch02 = 0.049685272196679175;
    msg.ch03 = 0.09598371708972919;
    msg.ch04 = 0.7141937217294217;
    msg.ch05 = 0.29167827288132586;
    msg.ch06 = 0.27165567389509737;
    msg.ch07 = 0.6434991932584476;
    msg.ch08 = 0.11255529810321108;
    msg.ch09 = 0.18149468201400587;
    msg.ch10 = 0.7859237018909474;
    msg.ch11 = 0.0210305991472165;
    msg.ch12 = 0.4290517232175073;
    msg.ch13 = 0.42157183038565127;
    msg.ch14 = 0.5233365740223621;
    msg.ch15 = 0.5418720583520782;
    msg.ch16 = 0.4408662316955335;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.29516852761409995);
    msg.setSource(9311U);
    msg.setSourceEntity(159U);
    msg.setDestination(27751U);
    msg.setDestinationEntity(161U);
    msg.ch01 = 0.2981212451800299;
    msg.ch02 = 0.2901419764956168;
    msg.ch03 = 0.4539586249629338;
    msg.ch04 = 0.6047929928508273;
    msg.ch05 = 0.3803145025740138;
    msg.ch06 = 0.08267781984803146;
    msg.ch07 = 0.24715795184938483;
    msg.ch08 = 0.8819064471259775;
    msg.ch09 = 0.4817231028471439;
    msg.ch10 = 0.2867812953006751;
    msg.ch11 = 0.6946261643378565;
    msg.ch12 = 0.7450218278150599;
    msg.ch13 = 0.5239162166029493;
    msg.ch14 = 0.427755945816919;
    msg.ch15 = 0.9869142713096523;
    msg.ch16 = 0.8882775834276541;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.3398295609029589);
    msg.setSource(54958U);
    msg.setSourceEntity(228U);
    msg.setDestination(11845U);
    msg.setDestinationEntity(114U);
    msg.value = 0.1810112511264682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.19641930990633227);
    msg.setSource(23188U);
    msg.setSourceEntity(86U);
    msg.setDestination(28557U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6828400130344207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.41230216332131997);
    msg.setSource(25404U);
    msg.setSourceEntity(93U);
    msg.setDestination(51407U);
    msg.setDestinationEntity(83U);
    msg.value = 0.5206377470230987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
