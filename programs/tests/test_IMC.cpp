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
// IMC XML MD5: 131d9a09127324ee268805c13abdbfc6                            *
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
    msg.setTimeStamp(0.193050999908029);
    msg.setSource(61774U);
    msg.setSourceEntity(166U);
    msg.setDestination(57684U);
    msg.setDestinationEntity(217U);
    msg.state = 206U;
    msg.flags = 128U;
    msg.description.assign("HEBXBTITIRWGZZXJMWNVYMSKLOIXHDPGRLRBMTTEELYQUIJHLFBIERWETOFGRJHUREFBZQJPUAGOMATQAJQXRUOCDIOVBLPUQUBSMQYSMSYMDTSKZPDWVQXWGXNCGYAKMPGAGSHKATCLKZRDSOFBECVYXKVNNMHFCKWWEDTHDNWANZSCPLXCQIQXGJIIOLXJBDJYFGNLFR");

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
    msg.setTimeStamp(0.6428490950758413);
    msg.setSource(39153U);
    msg.setSourceEntity(222U);
    msg.setDestination(47907U);
    msg.setDestinationEntity(123U);
    msg.state = 230U;
    msg.flags = 238U;
    msg.description.assign("RIJXULEZSYPFQFNYGLPFDMYOCSKJIGWMBMIXBNQGHWBPOAPFKDKUORFOSNBRZCQAZULTCNXXTTYLEQMAOIXRHXHLQWHWWJVOERSDLMJLVVKFWVANHGVGQBEZB");

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
    msg.setTimeStamp(0.19301778273518122);
    msg.setSource(52703U);
    msg.setSourceEntity(127U);
    msg.setDestination(56136U);
    msg.setDestinationEntity(226U);
    msg.state = 61U;
    msg.flags = 7U;
    msg.description.assign("VMFUNQVDYYJIPSIXMSWAFETKSXESFPDA");

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
    msg.setTimeStamp(0.4388390018735394);
    msg.setSource(49589U);
    msg.setSourceEntity(89U);
    msg.setDestination(49402U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.17059526181208473);
    msg.setSource(39582U);
    msg.setSourceEntity(158U);
    msg.setDestination(54133U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.07953980644344139);
    msg.setSource(1720U);
    msg.setSourceEntity(6U);
    msg.setDestination(9073U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.5043166437440147);
    msg.setSource(54357U);
    msg.setSourceEntity(79U);
    msg.setDestination(55229U);
    msg.setDestinationEntity(41U);
    msg.id = 36U;
    msg.label.assign("PGDNTBBWFOGDGEVAQTJCYSMUAHVIQGJPONUWEWZDVUJPZVSOBTZPYQOWYXLKRYZZLSZUXOICSIPWXMLFNCQLBARMSTXWPRFNQKFCRTPWLLQKDETXM");
    msg.component.assign("LIOXCRSCDFRMQVVFXSIKEYXABFCABZKLCYUUFLLBRPXNHYKIINYGEQASGJEZROZDGTBMPCUWWPUVTLXUOTNAWDJYWPFHRPHRQUBRSYVEUZOTREHQFNYZIXQLARFASGODCMBHEBMIXWJVQLJZQGDTAFBMJWPIOBGLGQEHLTEVLSDJDSNIXAJOMKNYKZITCQFWRBYEMKJZKDHOUHEJYHSNPVKTVQZNWSSTHNAMUDOGCUX");
    msg.act_time = 30773U;
    msg.deact_time = 16649U;

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
    msg.setTimeStamp(0.33646119042087896);
    msg.setSource(30184U);
    msg.setSourceEntity(85U);
    msg.setDestination(42846U);
    msg.setDestinationEntity(87U);
    msg.id = 3U;
    msg.label.assign("PPSCDSUFMKJBJUFCHLCGAUNUZWJMVRNECQNTFPLJXXTVVFMHUIHWLJGBGPDUKTNZBHBURYOJOBERDQFXDVQIHRAOTSKPSJUIUYHXACIHBOUEFKQVSLAQXGZQTDSIXKYAEADZZDXDSBQYNTSOMAMEIONWESVBWVGQLZPJBZXNFMVWNQTRLASGRGXDFWPYRRKVTHWZWPYPEIXPTMTCMLQIDJNWMGEBRKOHMIGAZOICVYEZWHOKFOFCK");
    msg.component.assign("AXUDCFIFJCZVJZSPLQKCUTIOSHRPAFALGBDJTUDVUSFVXKOVVKBWPHJDGMHYKMSOBXZHYYDXSJMZRZQKIHNQYJNMZAWFLJMPYWMNHWDQWVDIWKOYYDNPLTULVICKMSIZUENREAMENGXQYEBAXJLSBOGGNBJOAQKWPCZFRXTVLURIFXTIFNURJACYQXDPTDARALSGEHBSRTQLZKRHMOHKOPTHBFFQEYMIGIXGVLBWUPV");
    msg.act_time = 30059U;
    msg.deact_time = 25750U;

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
    msg.setTimeStamp(0.8640564306222112);
    msg.setSource(18176U);
    msg.setSourceEntity(3U);
    msg.setDestination(41353U);
    msg.setDestinationEntity(168U);
    msg.id = 145U;
    msg.label.assign("ELPAMRWULJLHKYXCOQUBURMHMRVYBYPNEXSZUSHNGNXW");
    msg.component.assign("AFWEAPAZDMHEOPJCXYIEJTTUIXJZJZANKQZQXFSYIKIVDRZKFBLCWHYVDOSMXMSFYVFJROMCOQIHBNNVTCFJUEGLA");
    msg.act_time = 34102U;
    msg.deact_time = 52964U;

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
    msg.setTimeStamp(0.5436044150499371);
    msg.setSource(41094U);
    msg.setSourceEntity(177U);
    msg.setDestination(18998U);
    msg.setDestinationEntity(206U);
    msg.id = 80U;

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
    msg.setTimeStamp(0.972384407683271);
    msg.setSource(47211U);
    msg.setSourceEntity(223U);
    msg.setDestination(15340U);
    msg.setDestinationEntity(215U);
    msg.id = 146U;

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
    msg.setTimeStamp(0.6893374290027054);
    msg.setSource(42611U);
    msg.setSourceEntity(80U);
    msg.setDestination(13249U);
    msg.setDestinationEntity(141U);
    msg.id = 186U;

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
    msg.setTimeStamp(0.5788909969298123);
    msg.setSource(15207U);
    msg.setSourceEntity(252U);
    msg.setDestination(44229U);
    msg.setDestinationEntity(87U);
    msg.op = 69U;
    msg.list.assign("ZYACKNQHHFFLSDKHDAIBMRZTTXKRWZYNLHSFBCMBMBWTAGIMFKTLNNYZPFAXCVLTHXLQVTUAIAJEQYGPMXFJHZMGUWKOUDXPPLVEEEGUNNWKJCWOOPEPQFSYIDBMWJLUGBPWYKSNFFQOBKDAPJXDVEKOIJZTZRRXPGVOGLWRPGZAFJBAQSXNMVQXOMDLCTTUREQURUTGCRDCQDWNOOSVZIOVBHRBIKIJSIJSEEYE");

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
    msg.setTimeStamp(0.40174397516105287);
    msg.setSource(10234U);
    msg.setSourceEntity(30U);
    msg.setDestination(36106U);
    msg.setDestinationEntity(108U);
    msg.op = 28U;
    msg.list.assign("BLRUMMXUFAQMJSNZEPMENWDUBJ");

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
    msg.setTimeStamp(0.7534537389723159);
    msg.setSource(61718U);
    msg.setSourceEntity(210U);
    msg.setDestination(14452U);
    msg.setDestinationEntity(39U);
    msg.op = 129U;
    msg.list.assign("XUTMZVNMECXVOTAQNYXKCGBFREJJZYAGEJZPDNLXGTTTQUCUWFRKANWSIBSYAOHDBKRZRAYWFTYKIOBJHJXJXUCDNLHFIUDQSFXCNGWTNPBOBGDEPEPNVVSMIHYMCTZYJEWKNQAGJBDEVNLHTELVWMZQPOUFUORUSHDMKIUOHBYHGLLMPIKVPISPWFBKQOAMBLWLXEDFQCCP");

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
    msg.setTimeStamp(0.771269838362182);
    msg.setSource(9475U);
    msg.setSourceEntity(206U);
    msg.setDestination(42724U);
    msg.setDestinationEntity(185U);
    msg.value = 139U;

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
    msg.setTimeStamp(0.14270258795197643);
    msg.setSource(19643U);
    msg.setSourceEntity(207U);
    msg.setDestination(20825U);
    msg.setDestinationEntity(104U);
    msg.value = 213U;

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
    msg.setTimeStamp(0.12852286676107694);
    msg.setSource(56137U);
    msg.setSourceEntity(146U);
    msg.setDestination(27752U);
    msg.setDestinationEntity(151U);
    msg.value = 148U;

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
    msg.setTimeStamp(0.26657881541534567);
    msg.setSource(2854U);
    msg.setSourceEntity(211U);
    msg.setDestination(19024U);
    msg.setDestinationEntity(215U);
    msg.consumer.assign("WHBTXBXWVUFMMKFUHIPTTEFZDFYFLAWQISLQWPNTGTRJKBEVKMJGBOUOIQLUPLNDFAHQUXDCJEDKNTCTJEXXQHLUITRLNAOSPDOLJMCHEVUVAHQGWAOVESJRJYTMFZWDFZXZJBNBKIDCRBMSMNUQEKDPPOXCCQVXCMNHZPW");
    msg.message_id = 38837U;

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
    msg.setTimeStamp(0.7834520495948332);
    msg.setSource(53078U);
    msg.setSourceEntity(227U);
    msg.setDestination(59005U);
    msg.setDestinationEntity(237U);
    msg.consumer.assign("MDQWAYJXBPYDAOIMGACVIGMFEDUF");
    msg.message_id = 1149U;

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
    msg.setTimeStamp(0.6797633530397638);
    msg.setSource(17654U);
    msg.setSourceEntity(160U);
    msg.setDestination(18203U);
    msg.setDestinationEntity(161U);
    msg.consumer.assign("NIRIKNSRKUCRCIUVZXEGUKMDGKCRFKJJPGJJZSZQTPZCDIRYWXVBVFWTMBSFHHGITJYQMJMNHYSAYWEZAVAVUMXLJQHVILWPDGDBZXFNLERXECKTMRICQVLMOFTQDHSLRIQYANUMDXGGYNLOAYLPDFIKTLETWOKF");
    msg.message_id = 64908U;

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
    msg.setTimeStamp(0.8968048947164126);
    msg.setSource(54683U);
    msg.setSourceEntity(136U);
    msg.setDestination(4210U);
    msg.setDestinationEntity(113U);
    msg.type = 180U;

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
    msg.setTimeStamp(0.04875358311428091);
    msg.setSource(45627U);
    msg.setSourceEntity(254U);
    msg.setDestination(13896U);
    msg.setDestinationEntity(161U);
    msg.type = 36U;

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
    msg.setTimeStamp(0.14244900686216588);
    msg.setSource(35393U);
    msg.setSourceEntity(122U);
    msg.setDestination(33037U);
    msg.setDestinationEntity(194U);
    msg.type = 21U;

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
    msg.setTimeStamp(0.90055621012278);
    msg.setSource(39961U);
    msg.setSourceEntity(168U);
    msg.setDestination(64521U);
    msg.setDestinationEntity(54U);
    msg.op = 8U;

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
    msg.setTimeStamp(0.49797899158168457);
    msg.setSource(48806U);
    msg.setSourceEntity(148U);
    msg.setDestination(41172U);
    msg.setDestinationEntity(166U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.002414086159733042);
    msg.setSource(4777U);
    msg.setSourceEntity(41U);
    msg.setDestination(42134U);
    msg.setDestinationEntity(241U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.5014411221631223);
    msg.setSource(55090U);
    msg.setSourceEntity(145U);
    msg.setDestination(45183U);
    msg.setDestinationEntity(206U);
    msg.total_steps = 10U;
    msg.step_number = 192U;
    msg.step.assign("UNXLJRMNILLAGPTZKYXUGMGEQCNFAHQMINTACNRYDYZZVCQELQTFEZDSEDULMFNBFUAPJGBRDBAQRWXOHLHLTDPPTXVBZCGOOTFBMKSHUESBJETXKJMCWXHNPJKQPYPWUKRISGZPKHUDAQJKPJCHHSWJCSZESWLCKBUCYIFDMVOWVFTJWMGQJLTRBKXRMWTSOVFEVAIARKM");
    msg.flags = 75U;

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
    msg.setTimeStamp(0.3438436633394335);
    msg.setSource(44610U);
    msg.setSourceEntity(81U);
    msg.setDestination(60694U);
    msg.setDestinationEntity(200U);
    msg.total_steps = 16U;
    msg.step_number = 57U;
    msg.step.assign("PQTKHIGRKZMVCZWU");
    msg.flags = 221U;

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
    msg.setTimeStamp(0.04470308669941647);
    msg.setSource(32295U);
    msg.setSourceEntity(123U);
    msg.setDestination(50860U);
    msg.setDestinationEntity(204U);
    msg.total_steps = 250U;
    msg.step_number = 191U;
    msg.step.assign("TVNBRGHTORGXEUVSHNRKGSWQRHZWRTGNUBTXXYDEVKDIEJLJNMCHUALIWFEBJFYXATZPQVWECYXMSLGAOYEKLKOAXPHHMLIQVCPQZUWSXLASJEOJSWJLIPIPTFHFOZNOTQDCCXKCNSKUIDHUGZDBWMIUGJYXURFZLPYDNYWCPYJREFNOBBMIHOMPLADMNWMABPUEZAKBNZRFPCKQLGSFTHKBVZOIAYBDQJQ");
    msg.flags = 23U;

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
    msg.setTimeStamp(0.23882058683925855);
    msg.setSource(45894U);
    msg.setSourceEntity(187U);
    msg.setDestination(15726U);
    msg.setDestinationEntity(158U);
    msg.state = 156U;
    msg.error.assign("JCLZYUESVNIBWUSOQEOKHJSRCOBUEDHBFEXAEBXFVEKPGPGQVMYLPGINORNHFRSVSKHTLDIASTCCJUAAHDJVQJYHUZMGBYTUBPEFOKRGXUDZSIPQOZAMCKQGHXJREBLCOWIZYLNLNWL");

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
    msg.setTimeStamp(0.2487866322162553);
    msg.setSource(21438U);
    msg.setSourceEntity(85U);
    msg.setDestination(34359U);
    msg.setDestinationEntity(110U);
    msg.state = 50U;
    msg.error.assign("DACZCYCZTGNCPUCJZHBMJWEHKMBQQEMOZPJOEVNXFFHXTDOOFWBRZZKTHTLTYQSHJPUNYXRZWGRNKUIBDXDFJNKGKKSLTYQTDYLMVVOXAMECPNIFTBRESYPAWPEZLLTNXUMVDOSJFGQQGKELMPPIGACHHLWYQZKGMGVRVAJOZFYCIUIMUADXRJSQW");

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
    msg.setTimeStamp(0.3634134975682535);
    msg.setSource(53985U);
    msg.setSourceEntity(106U);
    msg.setDestination(33766U);
    msg.setDestinationEntity(17U);
    msg.state = 250U;
    msg.error.assign("FZYTNQIPFAOYU");

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
    msg.setTimeStamp(0.7216567580600084);
    msg.setSource(44155U);
    msg.setSourceEntity(149U);
    msg.setDestination(28397U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.4996854687838109);
    msg.setSource(20410U);
    msg.setSourceEntity(201U);
    msg.setDestination(35442U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.44457627911446973);
    msg.setSource(1037U);
    msg.setSourceEntity(72U);
    msg.setDestination(56871U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.780005902602846);
    msg.setSource(21890U);
    msg.setSourceEntity(114U);
    msg.setDestination(14399U);
    msg.setDestinationEntity(246U);
    msg.op = 78U;
    msg.speed_min = 0.8463076736600535;
    msg.speed_max = 0.7634835445512448;
    msg.long_accel = 0.9174143458748872;
    msg.alt_max_msl = 0.07639477403142336;
    msg.dive_fraction_max = 0.6079255287713352;
    msg.climb_fraction_max = 0.911496940955004;
    msg.bank_max = 0.08889471089227097;
    msg.p_max = 0.39315711798273856;
    msg.pitch_min = 0.46961091278948663;
    msg.pitch_max = 0.7812711395666287;
    msg.q_max = 0.41270063188895467;
    msg.g_min = 0.5403529330746467;
    msg.g_max = 0.3033798435331362;
    msg.g_lat_max = 0.3954199713796106;
    msg.rpm_min = 0.49030588262095176;
    msg.rpm_max = 0.6988674934252564;
    msg.rpm_rate_max = 0.6402721373681118;

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
    msg.setTimeStamp(0.8856189103464124);
    msg.setSource(32109U);
    msg.setSourceEntity(17U);
    msg.setDestination(33923U);
    msg.setDestinationEntity(121U);
    msg.op = 127U;
    msg.speed_min = 0.5312565558553556;
    msg.speed_max = 0.1176361342830925;
    msg.long_accel = 0.48723101579663797;
    msg.alt_max_msl = 0.16944392342768877;
    msg.dive_fraction_max = 0.1461333577655739;
    msg.climb_fraction_max = 0.546877479550927;
    msg.bank_max = 0.4631261952185258;
    msg.p_max = 0.13061640168739652;
    msg.pitch_min = 0.21664691951355997;
    msg.pitch_max = 0.9202196772163923;
    msg.q_max = 0.9154723488650122;
    msg.g_min = 0.7015672194875863;
    msg.g_max = 0.42999102323283833;
    msg.g_lat_max = 0.787971040149989;
    msg.rpm_min = 0.5857768822956712;
    msg.rpm_max = 0.9519069457539325;
    msg.rpm_rate_max = 0.6607551580427871;

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
    msg.setTimeStamp(0.2445096745594405);
    msg.setSource(35084U);
    msg.setSourceEntity(193U);
    msg.setDestination(35687U);
    msg.setDestinationEntity(100U);
    msg.op = 254U;
    msg.speed_min = 0.5618438098683048;
    msg.speed_max = 0.5863784001686808;
    msg.long_accel = 0.30610914995443783;
    msg.alt_max_msl = 0.16681699708436493;
    msg.dive_fraction_max = 0.7182051681192184;
    msg.climb_fraction_max = 0.1714259616099374;
    msg.bank_max = 0.20480972904452033;
    msg.p_max = 0.11718129765816188;
    msg.pitch_min = 0.9441020422497668;
    msg.pitch_max = 0.821452781359673;
    msg.q_max = 0.9956928290095858;
    msg.g_min = 0.05116188917869624;
    msg.g_max = 0.8104157126506769;
    msg.g_lat_max = 0.6821039523606354;
    msg.rpm_min = 0.6144404863330888;
    msg.rpm_max = 0.4564304777473275;
    msg.rpm_rate_max = 0.7529295419050948;

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
    msg.setTimeStamp(0.23227914566868424);
    msg.setSource(13587U);
    msg.setSourceEntity(48U);
    msg.setDestination(55514U);
    msg.setDestinationEntity(166U);
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("WESPCUTOLHVMYFXXZEEHHBLBCTOGUSMKCUHLINVXMYXQGCYJEFSGXMNDAVTWXUTCRHROAYGBJULTVUEKGDAFBSPORZUBJLWLMMYKDTOQYKCWRPYIVKRBXFQHPNJYTZAMXIZRNIHHVIGKNMPCCKEDNWDSFDENRDVPFCJWITLRHDIMWPQAVHFGJBILJOAZNGAZKZEVDLTZZPIQWPJBZOJBSCFJGKQXQSSDNAVWQYYOQOIUNUKUFAOWEEMSG");
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
    msg.setTimeStamp(0.29360535459656834);
    msg.setSource(11222U);
    msg.setSourceEntity(155U);
    msg.setDestination(59638U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.5559130670551383);
    msg.setSource(35901U);
    msg.setSourceEntity(194U);
    msg.setDestination(64060U);
    msg.setDestinationEntity(199U);
    IMC::MsgList tmp_msg_0;
    IMC::SetEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ULGEXSUMVXKRNOCGBTQZVVUDTAJPQJAFFNNLZEFDSSKKLFRHQGYBKSROAUBITZFDSIKBMRZILGLWERHCTNYCFBYPMSTFOFJDNUCRSCQPIUXEJODUICVALNCZIOKNAZHBVXYOHPWJOJAIYXPAEPDQDLVHDTRDBWLJTMGIQHEQPZGXFHAZWSNMOHUTKSAQRQYVFQHEBWGEVTXHLBSCUPWPVJMYWLJYROBCZEWETKVZAPGYXKMNDM");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("TRWLGVJNHNULCADODMKJEKBSGOSYNKODVRUTWYTMDIHAGRGQQLODSRNGQCDEXQREBZXJOUYVGZOYMHJBFUPXFPVKUBWHEDCLBKLMITRJWOHOENBIIZAKIKIRQPOMC");
    tmp_tmp_tmp_msg_0_0_0.value.assign("GTSQOBYXHGKIBNNKQKZZANGVYEPRXEUWSFNBHB");
    tmp_tmp_msg_0_0.params.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6443292898199006);
    msg.setSource(2403U);
    msg.setSourceEntity(63U);
    msg.setDestination(29707U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.7609070339932722;
    msg.lon = 0.6070938789183905;
    msg.height = 0.09490576631812131;
    msg.x = 0.9174588768627211;
    msg.y = 0.7064809163056799;
    msg.z = 0.4512900553837089;
    msg.phi = 0.3786445680272781;
    msg.theta = 0.07184451048136864;
    msg.psi = 0.014467126166952782;
    msg.u = 0.5107489456192841;
    msg.v = 0.2903388713857684;
    msg.w = 0.867161707938828;
    msg.p = 0.22313042586791543;
    msg.q = 0.20131656547097476;
    msg.r = 0.32197842911967733;
    msg.svx = 0.9888410734028273;
    msg.svy = 0.9222666365769061;
    msg.svz = 0.321777641345541;

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
    msg.setTimeStamp(0.4922301929280234);
    msg.setSource(17240U);
    msg.setSourceEntity(73U);
    msg.setDestination(47200U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.6586850881803665;
    msg.lon = 0.5377929506448567;
    msg.height = 0.509780877305484;
    msg.x = 0.644603651981508;
    msg.y = 0.1554898467509458;
    msg.z = 0.9078480881317178;
    msg.phi = 0.509295698314953;
    msg.theta = 0.3595462339215064;
    msg.psi = 0.7443409556873234;
    msg.u = 0.03244421234098671;
    msg.v = 0.1200576458784528;
    msg.w = 0.42073239997821077;
    msg.p = 0.10843057280590873;
    msg.q = 0.4262181599348701;
    msg.r = 0.3474278326297209;
    msg.svx = 0.5192598380131614;
    msg.svy = 0.587902967430965;
    msg.svz = 0.9458447192024474;

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
    msg.setTimeStamp(0.04207279844777978);
    msg.setSource(28039U);
    msg.setSourceEntity(125U);
    msg.setDestination(53690U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.4775906432904924;
    msg.lon = 0.3906886073703203;
    msg.height = 0.665600789188767;
    msg.x = 0.8946867470720798;
    msg.y = 0.34304197899230815;
    msg.z = 0.32342450363933983;
    msg.phi = 0.613437140959836;
    msg.theta = 0.7661479367984892;
    msg.psi = 0.6491105755878762;
    msg.u = 0.6337240968527877;
    msg.v = 0.4245119464446916;
    msg.w = 0.29689167963468954;
    msg.p = 0.245795744487471;
    msg.q = 0.8580542654877144;
    msg.r = 0.8730786166762868;
    msg.svx = 0.6072246472363783;
    msg.svy = 0.8366591979037298;
    msg.svz = 0.24282882740093803;

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
    msg.setTimeStamp(0.784412456040583);
    msg.setSource(50494U);
    msg.setSourceEntity(1U);
    msg.setDestination(25862U);
    msg.setDestinationEntity(35U);
    msg.op = 13U;
    msg.entities.assign("NXNAPFEWGFHAYIXNLSMCUZRXTBMGWASEIOYULQBKJPGMNVJRQZXTDZHBRCGBELLULRIKTAECEXKBQRPWUYFGTEBOSZWNVIEYJRQQRDPLO");

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
    msg.setTimeStamp(0.08815157922754013);
    msg.setSource(46202U);
    msg.setSourceEntity(106U);
    msg.setDestination(33906U);
    msg.setDestinationEntity(14U);
    msg.op = 213U;
    msg.entities.assign("NIXFKKUQPFVDXXMWHRBCXAKHSKAQEMMJBGGKPGHLYSJJLUMXOWCVBLPFKBOERNXNIIMCSTGZBZZQDSHAAPRYLDAGRQWUBJFXVPMOAQKOZBEVNRDUUCOCNEPLESDWNEBOCRHUIIXIUYTPQXZGGEQKEDFLJVEVGTTLDHWSHYAPIYQISDKAMW");

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
    msg.setTimeStamp(0.5880456816274006);
    msg.setSource(3939U);
    msg.setSourceEntity(199U);
    msg.setDestination(38670U);
    msg.setDestinationEntity(160U);
    msg.op = 112U;
    msg.entities.assign("EANMKAPXHEDDNTFXQEOVMTCD");

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
    msg.setTimeStamp(0.13763657624182546);
    msg.setSource(5418U);
    msg.setSourceEntity(80U);
    msg.setDestination(60335U);
    msg.setDestinationEntity(181U);
    msg.type = 4U;
    msg.speed = 56327U;
    const char tmp_msg_0[] = {-79, -80, -112, -124, -37, 87, -95, -35, 93, -111, 106, -106, 123, -24, -97, 20, -62, -120, -97, -21, -21, 54, 60, -43, -31, -14, -91, 23, -34, 9, -121, -10, 93, -47, -67, 105, 16, 62, -2, -111, 56, -29, -94, 84, 44, 73, -76, 19, 107, 23, 17, 14};
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
    msg.setTimeStamp(0.8139555727087181);
    msg.setSource(10559U);
    msg.setSourceEntity(40U);
    msg.setDestination(16892U);
    msg.setDestinationEntity(55U);
    msg.type = 21U;
    msg.speed = 46279U;
    const char tmp_msg_0[] = {24, 76, -16, 86, -79, -90, -77, 104, 82, 67, 105, 125, -127, -4, -9, -98, -45, 65, 28, -95, 14, -107, -8, -41, 36, 84, -84, 110, -92, 26, 52, 4, 63, 124, 63, -69, -68, 43};
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
    msg.setTimeStamp(0.31730700504132436);
    msg.setSource(38292U);
    msg.setSourceEntity(191U);
    msg.setDestination(55360U);
    msg.setDestinationEntity(249U);
    msg.type = 62U;
    msg.speed = 27850U;
    const char tmp_msg_0[] = {79, -9, 49, -20, -14, 4, -84, -81, -79, 107, 98, -45, -58, 34, -69, 42, -55, 107, -126, -103, -28, 64, -111, 98, 14, 112, -39, 94, -30, -30, -23, 80, -80, 0, -4, 101, 53, 34, -84, 3, -32, -99, -100, 103, 23, -95, 97, -17, -93, 96, 20, 14, -58, -18, 7, 67, -116, 98, 102, 40, 33, -91};
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
    msg.setTimeStamp(0.1275832571870249);
    msg.setSource(34352U);
    msg.setSourceEntity(210U);
    msg.setDestination(49370U);
    msg.setDestinationEntity(126U);
    msg.op = 90U;
    msg.tas2acc_pgain = 0.3951749742284262;
    msg.bank2p_pgain = 0.04546650236102756;

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
    msg.setTimeStamp(0.5268210909467804);
    msg.setSource(5334U);
    msg.setSourceEntity(76U);
    msg.setDestination(37933U);
    msg.setDestinationEntity(234U);
    msg.op = 176U;
    msg.tas2acc_pgain = 0.6974565324678609;
    msg.bank2p_pgain = 0.4985865027140852;

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
    msg.setTimeStamp(0.09206735275135347);
    msg.setSource(22154U);
    msg.setSourceEntity(229U);
    msg.setDestination(43165U);
    msg.setDestinationEntity(188U);
    msg.op = 227U;
    msg.tas2acc_pgain = 0.8636406699855346;
    msg.bank2p_pgain = 0.1411230402910021;

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
    msg.setTimeStamp(0.4619284736150676);
    msg.setSource(25965U);
    msg.setSourceEntity(11U);
    msg.setDestination(62891U);
    msg.setDestinationEntity(162U);
    msg.available = 2406171034U;
    msg.value = 224U;

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
    msg.setTimeStamp(0.07798125341083884);
    msg.setSource(15903U);
    msg.setSourceEntity(221U);
    msg.setDestination(2327U);
    msg.setDestinationEntity(147U);
    msg.available = 2507848123U;
    msg.value = 238U;

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
    msg.setTimeStamp(0.6514089477019804);
    msg.setSource(1617U);
    msg.setSourceEntity(150U);
    msg.setDestination(29978U);
    msg.setDestinationEntity(214U);
    msg.available = 3109221958U;
    msg.value = 233U;

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
    msg.setTimeStamp(0.6454256163206602);
    msg.setSource(59323U);
    msg.setSourceEntity(98U);
    msg.setDestination(21925U);
    msg.setDestinationEntity(11U);
    msg.op = 84U;
    msg.snapshot.assign("FKLSIVYQKRLAITBOPGJXZJFQQDVPIEMOPWXXLVGNURLBZNYTKEQGGZOSCPOFSCZMANNZCWWOCNIVXPHOLPCUEZJJRYELBYQXLONFYYXGVZHXASCKGZRBRKNUQMKHPHLMAIIGQKDNIKMFPHXDJNQMHJVHGV");
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.09998922685086742);
    msg.setSource(44363U);
    msg.setSourceEntity(209U);
    msg.setDestination(44003U);
    msg.setDestinationEntity(81U);
    msg.op = 39U;
    msg.snapshot.assign("ANWMVGJUKZELDEIOIHTYHXPIGTSWVFFPBCLOKZKYXDVOCHEXJPYYNMWNLQSKHDQMPDRBTSXYQTDTQYMISJNBKTDGGMBRVSXALDCKPCVBZCLNUUGZHMSKRRFECBZJRSHPPSWAEPIBMZLLOKOOJADXU");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 31U;
    tmp_msg_0.plan_id.assign("SRCBFSMAKFGGJSRANQKNTIXHONFDLYTCTGMIUHAJEPVZELQSWPQNOVGXKPKUCVYAWQCHJZWRPNYYVCZBWQUEMRQPJBAMZTUBXNVUKL");
    tmp_msg_0.comm_level = 30U;
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
    msg.setTimeStamp(0.6688561067617875);
    msg.setSource(54691U);
    msg.setSourceEntity(90U);
    msg.setDestination(8128U);
    msg.setDestinationEntity(183U);
    msg.op = 117U;
    msg.snapshot.assign("XVFWSWLXPVHSFYOAPQEUNIKENWXXBZGSRDDDAEAHBTRLZZIRSUIWVOGQRTZPPACHZKNSIKFIAKTWGVMJGNCQCCLGQVHLYHKJXEWLHTSFHZQJIPGJHMWVOQVMHLAKUGRLQAXOORRYVBVMPUEOCHTRBRCCCTBESPRZZFUBGBJEOBDYDOKBCANMENBGFAASJXPDDYWXJDQUTEMUPXUKQTCNTZJDYIKYFMIMMMLZWSWDY");
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("QIWZYDPQNEMSASPVEBGDWXCAXMKLJNYNRDHLAAKZPHVEG");
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
    msg.setTimeStamp(0.04943615094506115);
    msg.setSource(3174U);
    msg.setSourceEntity(89U);
    msg.setDestination(9574U);
    msg.setDestinationEntity(154U);
    msg.op = 68U;
    msg.name.assign("BAUGIBBAPDGEFLIQCQZHUDNERYVBVAVPBDZBMCKGULYXCTATCESRMRTQWMUJKHYFYYANPOSKMPFLZERJFLNOXVGJO");

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
    msg.setTimeStamp(0.7683817506371089);
    msg.setSource(8120U);
    msg.setSourceEntity(23U);
    msg.setDestination(62513U);
    msg.setDestinationEntity(243U);
    msg.op = 253U;
    msg.name.assign("RFGMOTNZXNGZXUHKLFZJNGBYQTRVBKDJECQPUSILJSBWRZHDYKWTWUFNWAJDSAYDNQIIQFKTPJKTCNSXQQCKVGMCHIOWDMMTRYMYWHWSZNHNFXNRCVBPIXMXQIPOVJBCELAUQCCRLKGMSSAWZMNUZJUSKVELPBWTEVBGRYUHWOHTUFXHPFLMHOSPGIBVDOQGDHLOUYKOAAEEDVYFJPAOJEZDYVGBDRXYECCIRBZETGUTMLOXJILRAAKZP");

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
    msg.setTimeStamp(0.8000283119145563);
    msg.setSource(22109U);
    msg.setSourceEntity(193U);
    msg.setDestination(48725U);
    msg.setDestinationEntity(95U);
    msg.op = 104U;
    msg.name.assign("XYRCPXHNFEKIUZYYQBTAICSOVWTEOZHPSSSFBUPADQEYCLDIGJZHHOFULPIEHZAFXRAYQCSXWQZDILXVFGGJRJJJVKHRPOCLTRCTHUJEPVRGNQXUWMKRZXOOPFRLSDUEMGJNINZKBPDEILPMBBXFFQT");

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
    msg.setTimeStamp(0.8274113495175793);
    msg.setSource(64510U);
    msg.setSourceEntity(221U);
    msg.setDestination(30557U);
    msg.setDestinationEntity(109U);
    msg.type = 21U;
    msg.htime = 0.903288497443805;
    msg.context.assign("PSYQWPQQYUTOTNJOBNCMNDBRLOYFICCEGYEPLYKDKKHHJANRPQOBCWAGBJOURIFIUZXIUPTYFAXQDIJDVEDIZWESEILTGGHGPJRJRLZXZUEGQWDWMTSMWAMYEWGHWVNXQPOFXKZNZOMZKNLRFTYFSMUC");
    msg.text.assign("EQHFYPFFZZCNESYBZQBAINKUOTUHLOULIXQWQQYKCTKPSAVQSEEDBUHPUAHGQTAYUMKMRFRUKNNTEGWCHKDQYARXSRNEFRIZXYXTYHMWJIVXYHVJFJMMNTSJOSAXOALMHWSTAJIRVXVPLSCLPGCJLWLQIBCDEVFUJPMJOZMGDNUQCKOGM");

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
    msg.setTimeStamp(0.9633954153134608);
    msg.setSource(21153U);
    msg.setSourceEntity(233U);
    msg.setDestination(30090U);
    msg.setDestinationEntity(213U);
    msg.type = 252U;
    msg.htime = 0.49665904689580953;
    msg.context.assign("WMXEFPLNTZEXFVMKHMVXAMUUFYKRHOUVCOCLECFTYNSOPBZPCIJGOAWCKIIPAYBVTDBZAPTRJGDNVTGAKKIERCGQWHIDNIBOU");
    msg.text.assign("CNOKWRLJBSHXXWNSMVPTMBDYMCLXFKCGQFFBJIWHXTDDFINWLCTGRIIVOXLVEEYNECUKDARRDCIZPEPPLUSYQBVUXOFVJIHXDMKPYGUUHOTMZHVMOVMZJZAPGBHHROZOQFJYDFTUUPKPLOLZNDNLNAIVAUPABXSGP");

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
    msg.setTimeStamp(0.062331313352731565);
    msg.setSource(3246U);
    msg.setSourceEntity(161U);
    msg.setDestination(14588U);
    msg.setDestinationEntity(197U);
    msg.type = 81U;
    msg.htime = 0.1302274424568114;
    msg.context.assign("HEYVGQWPNGNSGKBMKIHJYLNQ");
    msg.text.assign("MWBDGEFVXFGCXKFFXZNMXONFLMEOKYQNOWRIJESBKSXGSITGJJBVPHTJFYRHKYYRUHVJVEKGMKSATEAFUZCNNFTZOALJUNHXZBA");

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
    msg.setTimeStamp(0.1863176019490418);
    msg.setSource(59579U);
    msg.setSourceEntity(128U);
    msg.setDestination(36702U);
    msg.setDestinationEntity(194U);
    msg.command = 213U;
    msg.htime = 0.4952536426438584;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 54U;
    tmp_msg_0.htime = 0.7724726000956673;
    tmp_msg_0.context.assign("EKHCECNQBYJDKOOVAXMNCMZZBEVHVGNCYHLMWZPPSXECZNAIPZFKDKA");
    tmp_msg_0.text.assign("PBGQXESXZBJHOKNJXHMJFYCAIKVWESGWSHHCYKDIZFSLNEGGPFGMGCDCVTQVLQOLWKWEHVWUOKMTZAOPHKALUTBFTEIFLDVCMQXDTXBJIPVFDGTNFUEPCUWAYKSPXHDMBVNZPRPRHIJADPN");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.07096544415849793);
    msg.setSource(5853U);
    msg.setSourceEntity(35U);
    msg.setDestination(49617U);
    msg.setDestinationEntity(96U);
    msg.command = 170U;
    msg.htime = 0.531228449648983;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 65U;
    tmp_msg_0.htime = 0.2281586226091895;
    tmp_msg_0.context.assign("SMJRNXXMTGZYXKEBIHLPQMXZGJKPUNPSTWAHDSUIXVZIOAUVPGNYMUFNLHFQSSJPABXTFIZEYJCVUWOURVGWHKZQALKZWFBTRQIXBPDMGVYBQQWVBTDSRDARGOOSYEEENYNCAGJCBAWZLTQDBMNIKHKWVJMYIVLNDYLSGRDRLIPJFJDKFWQIRIUSWNDUZENBGCPQXXACAMXAMKTROHTFCEFOWHVJ");
    tmp_msg_0.text.assign("TVBZRUMSZVBSKUNKJTANVEXAHNPUSXXWNILTFHKXLGGLDZZCYGBYPSXGSQHBCHOROBBPCTRTMEMFYGCUGHEFWQFUNMXDVAOLGOPAQCDGIRFRETPIJXDVCWKDJWWEQZPLYAKKPRLGNOWNJYPAQOIMVWEPXMGVKIRNIDBMDVBMUKYDLSBAUZESCJN");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6634148498040563);
    msg.setSource(9673U);
    msg.setSourceEntity(182U);
    msg.setDestination(40880U);
    msg.setDestinationEntity(211U);
    msg.command = 14U;
    msg.htime = 0.933955714477656;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 126U;
    tmp_msg_0.htime = 0.7573509813612885;
    tmp_msg_0.context.assign("GDKGBTRONYQOEASAWWHWRJEFUWTQTSENRYBLVDYXFGNRPQKXOQCBDUCVQZXQNLPAIIKAYHUVVGHSKNZNEQFHYVPPNBAGIMGSEKJBOTEPZXMGSHJHOUJMZMBBDUFZTTXVYXXJZMCAIRHEVIGCXFLTGSAKSZTHQUHMPPRQVFSCXOGSVRDDDWROJWFFZXNTJCAYMRFWKYULMZRBNLLWIIZSBEKBYU");
    tmp_msg_0.text.assign("YNDXCDALKHTLIDAUGWSUIXUPM");
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
    msg.setTimeStamp(0.702256773247929);
    msg.setSource(58537U);
    msg.setSourceEntity(96U);
    msg.setDestination(27631U);
    msg.setDestinationEntity(83U);
    msg.op = 47U;
    msg.file.assign("RDQOMOUWVKPB");

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
    msg.setTimeStamp(0.1485836767348645);
    msg.setSource(20060U);
    msg.setSourceEntity(57U);
    msg.setDestination(55342U);
    msg.setDestinationEntity(217U);
    msg.op = 182U;
    msg.file.assign("NCBFILLBZEFBQKMBRJAWIDPXGYFZCBKTLFXVNZMXQFHFTOQUWMWQLOTVITVOSTHNJYLUIJNRJZCCLZKERYPKWNMMCUUPIOTFSVAJLSVPAAYRLWURYEHYPXRRXTUFGYGGXMUIEXORNIEODKCSEDMNOWQKAQJZPGDVFLCZBWUS");

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
    msg.setTimeStamp(0.010753101127722209);
    msg.setSource(27055U);
    msg.setSourceEntity(123U);
    msg.setDestination(10318U);
    msg.setDestinationEntity(221U);
    msg.op = 210U;
    msg.file.assign("TGQDFHAALMLYCFQSFHWGROQCXOWFPJJXIVEGQTBBFLHRBCSVZIKNQIXIJIIMMORZTOXFAKLEUDCTWVUHECHTQKJEBAPKWXRROBJYDJCPGGOIBPPGULXP");

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
    msg.setTimeStamp(0.20254844078310286);
    msg.setSource(64514U);
    msg.setSourceEntity(165U);
    msg.setDestination(38721U);
    msg.setDestinationEntity(177U);
    msg.op = 218U;
    msg.clock = 0.5091248794545776;
    msg.tz = -8;

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
    msg.setTimeStamp(0.3429790637850769);
    msg.setSource(48128U);
    msg.setSourceEntity(234U);
    msg.setDestination(57744U);
    msg.setDestinationEntity(182U);
    msg.op = 63U;
    msg.clock = 0.9045519006447462;
    msg.tz = 111;

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
    msg.setTimeStamp(0.614975757514375);
    msg.setSource(8282U);
    msg.setSourceEntity(251U);
    msg.setDestination(45198U);
    msg.setDestinationEntity(117U);
    msg.op = 120U;
    msg.clock = 0.7008162195622867;
    msg.tz = 58;

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
    msg.setTimeStamp(0.12970755863882055);
    msg.setSource(47646U);
    msg.setSourceEntity(179U);
    msg.setDestination(60290U);
    msg.setDestinationEntity(55U);
    msg.conductivity = 0.5606782471217322;
    msg.temperature = 0.2370474598965734;
    msg.depth = 0.3927766214623968;

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
    msg.setTimeStamp(0.27608504677107326);
    msg.setSource(64563U);
    msg.setSourceEntity(225U);
    msg.setDestination(603U);
    msg.setDestinationEntity(102U);
    msg.conductivity = 0.8508003844382027;
    msg.temperature = 0.7772595792856537;
    msg.depth = 0.31819869471121875;

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
    msg.setTimeStamp(0.4508629457205101);
    msg.setSource(48639U);
    msg.setSourceEntity(142U);
    msg.setDestination(10222U);
    msg.setDestinationEntity(149U);
    msg.conductivity = 0.175063152474496;
    msg.temperature = 0.15760728994360296;
    msg.depth = 0.5557551239478201;

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
    msg.setTimeStamp(0.8818528800025158);
    msg.setSource(10613U);
    msg.setSourceEntity(197U);
    msg.setDestination(44843U);
    msg.setDestinationEntity(146U);
    msg.altitude = 0.6883283125697586;
    msg.roll = 59997U;
    msg.pitch = 26317U;
    msg.yaw = 14788U;
    msg.speed = 28864;

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
    msg.setTimeStamp(0.2075158925198094);
    msg.setSource(32735U);
    msg.setSourceEntity(158U);
    msg.setDestination(43099U);
    msg.setDestinationEntity(186U);
    msg.altitude = 0.07856764294190721;
    msg.roll = 4671U;
    msg.pitch = 53255U;
    msg.yaw = 33588U;
    msg.speed = -2073;

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
    msg.setTimeStamp(0.5862592083756394);
    msg.setSource(58312U);
    msg.setSourceEntity(252U);
    msg.setDestination(24161U);
    msg.setDestinationEntity(164U);
    msg.altitude = 0.709455663474321;
    msg.roll = 16299U;
    msg.pitch = 41272U;
    msg.yaw = 7346U;
    msg.speed = 5879;

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
    msg.setTimeStamp(0.6836872799029138);
    msg.setSource(13275U);
    msg.setSourceEntity(125U);
    msg.setDestination(34474U);
    msg.setDestinationEntity(32U);
    msg.altitude = 0.32182041456515986;
    msg.width = 0.5418357322132085;
    msg.length = 0.5723738646872519;
    msg.bearing = 0.22497812704853848;
    msg.pxl = 1912;
    msg.encoding = 253U;
    const char tmp_msg_0[] = {-99, -85, -18, 99, -118, 86, 87, 108, 11, 124, -49, 80, -85, -81, 93, -1, 81, -122, -49, -44, -73, -74, 76, -100, 125, -117, 63, 75, -19, -112, -113, -69, -65, 103, 85, -107, -89, -39, -28, 32, 34, -10, 83, 59, -9, 3, -101, -106, 98, 126, 27, -28, -14, 108, -20, -111, 51, 114, -39, 79, -88, 47, -41, -100, 28, -9, 33, 84, 48, 2, -41, -118, 85, 125, -15, -80, -65, -56, 9, 77, -112, 58, 110, -68, 10, 55, -127, 6, 64, 121, 66, 88, 83, 22, -50, 71, 31, 73, -104, -89, -104, 121, -97, 117, -52, 5, -35, 35, 19, 5, 110, 34, -74, 83, -48, -113, 3, -74, -117, -63, -52, 77, 19, -38, -55, -3, -66, -124, -56, -118, -11, 1, 12, 20, 38, -110, 21, -10, 66, 63};
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
    msg.setTimeStamp(0.4686407926558065);
    msg.setSource(44571U);
    msg.setSourceEntity(226U);
    msg.setDestination(14632U);
    msg.setDestinationEntity(127U);
    msg.altitude = 0.5722937961457454;
    msg.width = 0.8008309856113004;
    msg.length = 0.8033784125332281;
    msg.bearing = 0.28570711183558795;
    msg.pxl = -15893;
    msg.encoding = 136U;
    const char tmp_msg_0[] = {-97, 4, -20, 10, 101, -12, 125, -85, 70, 64, -28, -29, 79, -68, -66, 75, 11, 36, -113, -68, -122, 16, 72, 37, 101, 89, 104, -40, 57, 35, 41, 108, -81, -37, -81, -117, 61, -128, -95, 21, -59, 66, -57, -23};
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
    msg.setTimeStamp(0.3678550041870853);
    msg.setSource(17545U);
    msg.setSourceEntity(91U);
    msg.setDestination(24605U);
    msg.setDestinationEntity(61U);
    msg.altitude = 0.07795563237304237;
    msg.width = 0.37154104739279603;
    msg.length = 0.5312935030363083;
    msg.bearing = 0.1033239729978731;
    msg.pxl = 13117;
    msg.encoding = 84U;
    const char tmp_msg_0[] = {-27, -46, -21, 54, 71, 51, 22, 76, 126, -84, 123, 18, -66, 57, 53, -6, -44, 70, -15, -41, -31, -92, 119, -76, -18, 26, -68, 103, -12, -42, -120, -30, 51, -28, -107, -21, -60, 59, -41, 1, 111, -124, 92, -12, -97, -2, 8, 8, -116, 105, 98, -128, 91, 123, -17, 55, 5, -44, -51, -41, 47, -18, -44, -51, 105, -127, 43, -46, -111, 23, 58, -71, 65, 93, -110, -62, 89, 83, -57, 54, -98, 54, 12, -119, 122, -41, -43, 27, -101, 119, -109, -98, -77, 113, 45, 117, 121, 40, -4, 21, -78, 38, 20, -56, -45, 93, 3, -55, 41, 42, -81, -104, -106, 102, -74, 18, -66, -62, -39, 95, 75, -102, 120, 14, -42, 17, 97, -27, 21, 28, 19, -43, -122, -5, 100, -120, 98, -98, -44, 2, 20, 88, -22, 79, 89, -39, -8, -103, 9, 93, -112, 25, 68, 102, -27, 82, 82, -118, -26, 115, 106, 17, 79, -115, 95, -66, 34, -81, 120, 5, 59, -84, -20, 117, -62, 114, 95, -65, 75, 3, 7, -21, -36, 68, 20, -107, -71, 107, -124, -50, -18, 64, 31, 15, 44, 14, 20, -23, 41, 1, 99, -7, -83, -29, 68, 126, -83, -7, -96, 24};
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
    msg.setTimeStamp(0.7552950964337674);
    msg.setSource(31543U);
    msg.setSourceEntity(189U);
    msg.setDestination(53756U);
    msg.setDestinationEntity(105U);
    msg.text.assign("OAWNZYKBKWGUEVXDBMLBTUAAICHTGTFUHGXAXROXZMBKKOFQEEZJWBFEYXVZDWJQBJZSFZXFGVZQPFEILNEKOTVCRMRSPLTPPRWPOYCWANZNQMTHWICRXGZPUCXYRHNFKTYIWUVUTNDLPFLJDJICGSXMWOTMMQUHCQHOXRSFIUMCUBEIUWDGRQVQIIDHLCJMYDEYGKNZBHDKSNYQOGVDNRVSJDBAPCJLL");
    msg.type = 40U;

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
    msg.setTimeStamp(0.5803525848825063);
    msg.setSource(8543U);
    msg.setSourceEntity(239U);
    msg.setDestination(6001U);
    msg.setDestinationEntity(50U);
    msg.text.assign("GLUMZHJNTKGFNFPYULQUHFPJMRTZXBHVIAGOMHZNKCKWVWQEUYWTIPJLKXDHZIEAVYEVDSILLSGXAMSCQIDYEADXFBFACXGVZPULTJOGVKUWTOMFIODKBFKXFHZKJBUDJJORCZAGGBNNWMCTT");
    msg.type = 91U;

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
    msg.setTimeStamp(0.09309367061021201);
    msg.setSource(60453U);
    msg.setSourceEntity(186U);
    msg.setDestination(40569U);
    msg.setDestinationEntity(190U);
    msg.text.assign("WSKWCLOTZKCGDGHUGYOLKMABUTDLMTPECGCRMMWVWSXSVZELQRXOJNBIHUEMDYRUFEFZJKWHEIOHUTNZPQFRICBQNZNPYGXYXVBVOHXBAALYPQISYJWONCCUIPQAXANENVX");
    msg.type = 249U;

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
    msg.setTimeStamp(0.009751019909063685);
    msg.setSource(1329U);
    msg.setSourceEntity(216U);
    msg.setDestination(51117U);
    msg.setDestinationEntity(251U);
    msg.parameter = 178U;
    msg.numsamples = 104U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 34347U;
    tmp_msg_0.avg = 0.38018520856763016;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9013031268830201;
    msg.lon = 0.2666551687698604;

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
    msg.setTimeStamp(0.1711321644034619);
    msg.setSource(13759U);
    msg.setSourceEntity(164U);
    msg.setDestination(59835U);
    msg.setDestinationEntity(195U);
    msg.parameter = 42U;
    msg.numsamples = 91U;
    msg.lat = 0.27745567998210796;
    msg.lon = 0.4789648524051092;

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
    msg.setTimeStamp(0.7094826267893498);
    msg.setSource(52153U);
    msg.setSourceEntity(109U);
    msg.setDestination(55060U);
    msg.setDestinationEntity(124U);
    msg.parameter = 97U;
    msg.numsamples = 15U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 32087U;
    tmp_msg_0.avg = 0.10096053869822075;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.014244652448516026;
    msg.lon = 0.2035159458234368;

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
    msg.setTimeStamp(0.6254330526949172);
    msg.setSource(4520U);
    msg.setSourceEntity(174U);
    msg.setDestination(61502U);
    msg.setDestinationEntity(51U);
    msg.depth = 46900U;
    msg.avg = 0.7645236408250532;

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
    msg.setTimeStamp(0.6103783017430143);
    msg.setSource(58917U);
    msg.setSourceEntity(66U);
    msg.setDestination(28769U);
    msg.setDestinationEntity(65U);
    msg.depth = 9190U;
    msg.avg = 0.675704222988022;

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
    msg.setTimeStamp(0.41021851995311465);
    msg.setSource(2654U);
    msg.setSourceEntity(217U);
    msg.setDestination(46455U);
    msg.setDestinationEntity(35U);
    msg.depth = 15071U;
    msg.avg = 0.3067305202479649;

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
    msg.setTimeStamp(0.6045704893799567);
    msg.setSource(14093U);
    msg.setSourceEntity(199U);
    msg.setDestination(21445U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.9665482060622711);
    msg.setSource(14136U);
    msg.setSourceEntity(4U);
    msg.setDestination(64218U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.5346513816695052);
    msg.setSource(39065U);
    msg.setSourceEntity(94U);
    msg.setDestination(33482U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.31481138571279255);
    msg.setSource(48978U);
    msg.setSourceEntity(143U);
    msg.setDestination(41949U);
    msg.setDestinationEntity(157U);
    msg.sys_name.assign("XCVSUICMUCRKVFXCPDVHHLRYGSRJLSNERAT");
    msg.sys_type = 215U;
    msg.owner = 29011U;
    msg.lat = 0.8518106759588503;
    msg.lon = 0.5754849018349294;
    msg.height = 0.8791752412464595;
    msg.services.assign("SPQVMUONQWYYUSIBUZESCJUBNLEROBOZABAOTMRLIRRVVLSGFMPFHZYVWLGIZKMKVXQUDMEYOTZHGJRNCSSWEFTDVQRHBQCKGXSGPPJMFFNAADTQNTZRWIOQGNPAPZYPUJDLIWPMHMLVFCDXVABNQKYFEVXEFTKJAKVKDTK");

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
    msg.setTimeStamp(0.7690278406945127);
    msg.setSource(44194U);
    msg.setSourceEntity(54U);
    msg.setDestination(44673U);
    msg.setDestinationEntity(242U);
    msg.sys_name.assign("AZGAVCGKBVYDPWVESBFRZZDMEHPDSAAKHQSPVGGHRFNUROFMEALXUWYTIFCUJZPKIIOFFZWVSYXNBDZBHKKCBYRMMDUHSROHEWSTXGTTDUBILIYGXETTUFFAKMGSXYEGMLEGJCKUQILTAOJVXCWEBNXOU");
    msg.sys_type = 80U;
    msg.owner = 62165U;
    msg.lat = 0.5614344121760869;
    msg.lon = 0.8526489386381473;
    msg.height = 0.052978636502155174;
    msg.services.assign("VBMKMKFOQJXYVRDAEDFFGPMICIUSSHLRHXZIMOLSMRONRYONIWNGZVHTGIMNBKHXWRUQLPEGJVHZDEJYPXFTQPPRSZZWEVSYKBJXRQWDFQQANZKWBIZAXTWBVAIOBPSKSBZHJVGLOLANSBAVGUKERSLCTPHNZKGSGFCNV");

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
    msg.setTimeStamp(0.21115820868090907);
    msg.setSource(64416U);
    msg.setSourceEntity(227U);
    msg.setDestination(37243U);
    msg.setDestinationEntity(154U);
    msg.sys_name.assign("SMEOSNMRFARIDWLJTGKTQJVWICEEGJFUPUMSGTODRBNRNUAKGVZBAHARFQOZYLJVBBZMWQOCOLCSSZTUGIVB");
    msg.sys_type = 138U;
    msg.owner = 33043U;
    msg.lat = 0.2033082175106541;
    msg.lon = 0.5094487506820911;
    msg.height = 0.14077670159195754;
    msg.services.assign("ZTTYQUGOOXWNGRCKCYDVQGUAPJTMOUAUHAOKFRPSHEHEJZBEHMRFIJASASTLIGJEXONLXDWFKAUDSNNLICQUFBMTEZMRHPFNEHOFYKPCYENSMFUKIYRDA");

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
    msg.setTimeStamp(0.017372405315787653);
    msg.setSource(51650U);
    msg.setSourceEntity(2U);
    msg.setDestination(29611U);
    msg.setDestinationEntity(73U);
    msg.service.assign("HKESJTGBUQMFSJVGLREQXQNCVORVFIZZBWSAFERSIMHHYWAKOYGLNJIUHFTBRPRWUXFMXIDYXLKAMJFAKWEWWG");
    msg.service_type = 103U;

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
    msg.setTimeStamp(0.6615886089509476);
    msg.setSource(27588U);
    msg.setSourceEntity(204U);
    msg.setDestination(12484U);
    msg.setDestinationEntity(89U);
    msg.service.assign("FMEBCTVBZRJUMLBGJOZEHJCWBDAKFFSUXEXIXLWKWNCRVQQJZGAQDOXQUJTGKUBOSFKFPIRKLSOOHVNPFMYKCQCJTHPDWSWNOAGUQVSTOYVLFWHQMUEHAZRGCPMCAYKXRVSMOXEGRPDAHOJXYFRPZEPDMVNHJIUYXTBDACWEDGLZIPVQISLHUNHGISUTKFWBZIYBLTINUAPXQKNSLKRRYJCE");
    msg.service_type = 146U;

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
    msg.setTimeStamp(0.9176461517165277);
    msg.setSource(14557U);
    msg.setSourceEntity(194U);
    msg.setDestination(49960U);
    msg.setDestinationEntity(213U);
    msg.service.assign("ZJDVHUHSFXXCQVYPWKZYNYINAANDIWQTHMEQJUSNEQUIXJQBVBWZQBBVAUAAPLFRPBZRRKKA");
    msg.service_type = 23U;

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
    msg.setTimeStamp(0.7669281542815066);
    msg.setSource(45624U);
    msg.setSourceEntity(180U);
    msg.setDestination(785U);
    msg.setDestinationEntity(53U);
    msg.value = 0.6149614592337294;

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
    msg.setTimeStamp(0.11890134215725678);
    msg.setSource(9504U);
    msg.setSourceEntity(251U);
    msg.setDestination(26556U);
    msg.setDestinationEntity(205U);
    msg.value = 0.6934731861743773;

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
    msg.setTimeStamp(0.8791602344211403);
    msg.setSource(54807U);
    msg.setSourceEntity(22U);
    msg.setDestination(58474U);
    msg.setDestinationEntity(174U);
    msg.value = 0.1605410816578553;

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
    msg.setTimeStamp(0.4952865017608594);
    msg.setSource(54606U);
    msg.setSourceEntity(210U);
    msg.setDestination(44075U);
    msg.setDestinationEntity(161U);
    msg.value = 0.3137791296304382;

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
    msg.setTimeStamp(0.4621138561263728);
    msg.setSource(10049U);
    msg.setSourceEntity(227U);
    msg.setDestination(17638U);
    msg.setDestinationEntity(26U);
    msg.value = 0.052273409058340214;

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
    msg.setTimeStamp(0.9718594623343637);
    msg.setSource(1055U);
    msg.setSourceEntity(110U);
    msg.setDestination(14026U);
    msg.setDestinationEntity(182U);
    msg.value = 0.38298623820528377;

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
    msg.setTimeStamp(0.26270829514453853);
    msg.setSource(10890U);
    msg.setSourceEntity(144U);
    msg.setDestination(30089U);
    msg.setDestinationEntity(244U);
    msg.value = 0.876947216550272;

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
    msg.setTimeStamp(0.04061495226235723);
    msg.setSource(38053U);
    msg.setSourceEntity(0U);
    msg.setDestination(48659U);
    msg.setDestinationEntity(191U);
    msg.value = 0.725036449471028;

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
    msg.setTimeStamp(0.03265593115784082);
    msg.setSource(34140U);
    msg.setSourceEntity(74U);
    msg.setDestination(42600U);
    msg.setDestinationEntity(99U);
    msg.value = 0.9864522354762024;

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
    msg.setTimeStamp(0.9499531000211223);
    msg.setSource(50132U);
    msg.setSourceEntity(8U);
    msg.setDestination(14668U);
    msg.setDestinationEntity(201U);
    msg.number.assign("SBWJBQYXKRIZGYPWJEKPLJIUAZCBRHRTAENMPISYGVLUTEGKABIZFECOJXUXSQYDYMVNKWITMPEETWKKV");
    msg.timeout = 63582U;
    msg.contents.assign("GPDBRCMKMHBZBLSCBDBXRRHCUQZIUNWDIXLASIENWFPOMMKIAZTSWKJYRKJFPMQLVZYLCNHVDUBFGKJZSQGXQTWFACVXUPWCNHOXANLFRYGXONHOTPJRECGYWIUXDKYRUEWZAFQAQGVNYWODTZSFOKTEFOEIUI");

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
    msg.setTimeStamp(0.5598866868477533);
    msg.setSource(36335U);
    msg.setSourceEntity(142U);
    msg.setDestination(8145U);
    msg.setDestinationEntity(55U);
    msg.number.assign("EMHMCPSPKWNLWIEMGZPXLJTRCKYTXZRMVFGNLIRBAIKGAETAFGJGPPYZQJTQQBWLRJCDYDWIGKCYFLWBQMKKVTSHDDJQABZVNO");
    msg.timeout = 31891U;
    msg.contents.assign("XCHOSMOHJBDTXYIMJHY");

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
    msg.setTimeStamp(0.9264919930936693);
    msg.setSource(4021U);
    msg.setSourceEntity(10U);
    msg.setDestination(16506U);
    msg.setDestinationEntity(46U);
    msg.number.assign("IAMWSRDNKTMCRMBWVIWQOARRTCWMLNZTYJGHWVQLCTQYOGDPQZHDOYMOAUNBWNYVTSPZJRZTDFUGFMVXGEIQSEODERKHFGICULXJZKKGYMJLFSSFAZLGXHNLYYKIBWCELQUXUOVICDDGLVBPWSAXXZIHYVVKYSBXNKHOZEDINMCQUZZLUKBSEICEA");
    msg.timeout = 11788U;
    msg.contents.assign("QMOZJSRHJOZLKXCYZMEOVZPLIIRKWTIYPGNARPIDVHKGBCYZEBTUOQOUZTXCTDUQASPFFXLDKEUHOOVNMDNASUOIVDKWHTWGBENWJWGYPXCRVXDLNHUDUCYKFXBMKAKZTFURIXRTUJVXPEAGJNQFYCBNJFVOPISHQBAQVCIEGDSMVIFREFJYQZYMGGMKTCMJRHPRHJYLMQPWRLFLBX");

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
    msg.setTimeStamp(0.44866817696734496);
    msg.setSource(14217U);
    msg.setSourceEntity(205U);
    msg.setDestination(53174U);
    msg.setDestinationEntity(87U);
    msg.seq = 615114297U;
    msg.destination.assign("OVHPTBLUVDITDQUWLUWPOCRGIVBINDESJJHNZASZCEKIDBBQFGPKXUKNWCAEGHJHYZKVKNBHMLVJSAMNYXADWRDIYUJQVZUMVPCCGBYQAPJURXGXEXWFDEFKCJCIJQSVBKSHBLWUIATLEXOKFNAVXRIRERQWDDUHAXPZYSCMPXCZQEMOYFFGOYPQFKTSTZMGRLOMOOLETENJM");
    msg.timeout = 12411U;
    const char tmp_msg_0[] = {-88, -71, 37, -62, 84, 39, -110, 6, 83, -98, -113, 13, -99, -106, -115, -43, 8, -30, -116, -66, -23, 110, 100, -69, 19, 106, -13, 72, -48, -122, 106, -57, -123, 90, -34, 41, 71, -126, 26, -30, -84, 3, 12, -54, -40, 47, 109, 73, 49, -71, -26, -104, 73, 49, 26, 31};
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
    msg.setTimeStamp(0.6226041751005775);
    msg.setSource(60980U);
    msg.setSourceEntity(103U);
    msg.setDestination(25867U);
    msg.setDestinationEntity(125U);
    msg.seq = 781212653U;
    msg.destination.assign("TOUNBBFIEGDPCWMTFGOSYXHFRGSEKJMMUQYIQFDLZJKLGRICCIZTYQOHNYYRGIMFPBXHRLOEOTTELMDIRSKQVPALZWTVB");
    msg.timeout = 50574U;
    const char tmp_msg_0[] = {110, 13, 89, 49, -30, -34, 17, -105, -83, 105, -49, 42, 43, 18, -35, -84, 37, 27, 5, 18, -8, -15, 65, 109, 89, -28, -111, 124, 126, 57, -37, -64, 111, -89, 37, -18, 60, 9, -70, -22, 100, 68, 93, 13, 124, -80, -93, -12, 112, 60, 63, -91, 31, 97, 71, -127, -75, -104, 75, -57, -52, -74, -122, -83, 4, 96, -23, -18};
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
    msg.setTimeStamp(0.9148093848780781);
    msg.setSource(11156U);
    msg.setSourceEntity(64U);
    msg.setDestination(53631U);
    msg.setDestinationEntity(20U);
    msg.seq = 19319657U;
    msg.destination.assign("LSNVDGFTBVZNCRAXKC");
    msg.timeout = 22785U;
    const char tmp_msg_0[] = {82, 65, -5, -126, 56, 22, 3, 71, 15, -9, -67, 67, 75, -85, 112, 113, -54, -13, -61, 79, 80, 111, 57, -97, 46, 79, 79, 19, -24, 100, 79, -99, 15, -111, -88, 57, 57, 52, 123, 58, -86, 8, -66, -100, 99, 15, 101, 47, -115, -104, -29, 11, 35, 36, 74, -123, 27, -117, 18, -81, 80, -71, 111, 109, 44, 74, 56, 92, -76, -87, 109, -49, 83, -113, 43, 110, -42, 89, -26, -127, 116, 112, -13, -113, 84, 39, 103, -97, -17, 8, -9, -36, -88, 11, 67, -110, 39, 3, -30, 6, 72, 22, -7, -14, -45, 99, -124, 103, 91, 71, -100, -108, -82, -19, -39, -101, -111, -127, 37, 11, 122, 3, -33, 25, 71, 42, 68, -42, 120, -117, 2, 63, 125, 112, -49, -116, -64, -9, -83, 67, -75, -93, -51, -125};
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
    msg.setTimeStamp(0.3084883551861939);
    msg.setSource(29259U);
    msg.setSourceEntity(102U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(48U);
    msg.source.assign("AWBCQGPKUDTYZQMXYALG");
    const char tmp_msg_0[] = {-125, 51, 110, -109, 3, -55, 52, -8, -67, -65, -111, 19, -19, 113, 42, -79, -35, 82, -118, -121, -70, 51, -87, -45, -107, 120, -58, -102, 35, 20, 28, -87, 9, -4, 65, 97, 99, -42, 26, 44, -74, -127, 3, -56, 103, -24, -127, 107, 89, 101, 86, 120, 116, 126, -106, -65, 82, 111, 97, 106, -13, -80, 39, 12, -27, -42, -90, -109, 121, 56, 45, 51, 67, 21, 110, -8, 72, -77, -29, 58, -122, -24, 31, -19, -21, -101, 36, 104, 99, -55, 64, -86, -21, 38, -68, 79, -29, -105, -117, 64, 20, 124, 21, 56, 109, -61, 114, -13, -24, 75, -127, -30, 67, -113, -15, 41, -43, -70, 55, 35, 71, 57, 113, 20, -52, -76, -39, 46, 58, -105, 116, 89, -53, 109, 99, 14, -103, 5, 40, -112, -64, 38, -69, -77, 77, 36, -120, 53, 73, -22, 95, -6, 22, 46, -119, -120, 1, -48, -3, 68, -104, 75, 75, -106, -128, 29, -57, 105, -31, 13, 13, 79, -93, -101, -29, -15, -6, 30, 52, 34, 11, 5, 123, 90, 60, -106, -113, 26, 40, 111, -111, 53, 0, -10, -14, -125, 21, -50, 53, -51, -1, 76, -36, -128, -91, -50, -45, -65, -96, 87, -95, -72, -10, 57, -72};
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
    msg.setTimeStamp(0.3448902978365207);
    msg.setSource(5791U);
    msg.setSourceEntity(194U);
    msg.setDestination(56765U);
    msg.setDestinationEntity(55U);
    msg.source.assign("RYFVKVJGWOTMZGXYHXEDFRQFIAAOLPWXSIHHEQJSWBFIOWHBGIZVMWDSFXIWREKNSSBFXBNAINYPYMVDXUZLVTMLAHLBFDTNEUXSRKNLPUCCTMJBOPZHTOKGZSZCFSTPWLEBLRKQDSSCJGRJJDQRADNKZCGAKEVMFUDTQYAJIPBUGEXPQCNVIQKGUZTCPQHWJOGYNMCXMLLEQRHPCLWKIJPMYFOODHYDUUZATIOXRZYGNBJOQWYKVVECT");
    const char tmp_msg_0[] = {98, -29, -65, 31, 125, 27, -35, 70, -109, 67, 90, -126, -42, 51, 36};
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
    msg.setTimeStamp(0.323787075353551);
    msg.setSource(42350U);
    msg.setSourceEntity(33U);
    msg.setDestination(41181U);
    msg.setDestinationEntity(215U);
    msg.source.assign("SFWNELZGKEWVTXWOKZUIZJVWCFNACLFSNGHXYZASBQZIEGUMTBATKMDCKZUELUQIBATAJYH");
    const char tmp_msg_0[] = {-26, -114, -15, 98, 34, 24, 124, -94, -113, 96, 61, -70, 57, 115, 74, 93, -27, 76, 40, 80, -45, -81, 83, 64, -22, 45, -20, -117, -20, 44, 63, -113, 110, 29, 76, 16, -19, -68, -32, -74, -8, -82, -68, 68, -99, -127, -10, 71, 34, -85, 86, 80, 15};
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
    msg.setTimeStamp(0.8785347295589709);
    msg.setSource(14860U);
    msg.setSourceEntity(200U);
    msg.setDestination(41612U);
    msg.setDestinationEntity(124U);
    msg.seq = 995860109U;
    msg.state = 98U;
    msg.error.assign("IWNPZDORRFL");

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
    msg.setTimeStamp(0.33016869268795346);
    msg.setSource(46710U);
    msg.setSourceEntity(105U);
    msg.setDestination(63879U);
    msg.setDestinationEntity(179U);
    msg.seq = 1397704177U;
    msg.state = 23U;
    msg.error.assign("SYEDZSPHYMTMUCOUPDOXWXSNZLNOQRYTFVFEHQWHGVKCINYBTHNZSSGIOUXFIZVBITJXVBXCWFQMEJSAWOBHRNEMVHGJHTUFDKGHBDQWMKOVDIPRLJRXCJIKEMGULKQZNQQSQZLFRRUCEREEVZYC");

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
    msg.setTimeStamp(0.5502405500234526);
    msg.setSource(12788U);
    msg.setSourceEntity(215U);
    msg.setDestination(2702U);
    msg.setDestinationEntity(177U);
    msg.seq = 2047262660U;
    msg.state = 200U;
    msg.error.assign("IPCZFAMSLNKAOASBZQPRKFIQYLLCDQEMKJYPEJVUYWDULNPTXEAHUWOSZTSEUAVWGIDBJBTXJLHRZOOYQOTMAWICYHTIXOXVNBGSNSKHXKBSIHFGPAENRQUUP");

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
    msg.setTimeStamp(0.0034260756629256317);
    msg.setSource(17350U);
    msg.setSourceEntity(34U);
    msg.setDestination(10281U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("MNSCDWYUKQBLDUJKAH");
    msg.text.assign("RISPZXORYFUZRQFAUJRUBCBCAKVGEIIHSZHKAWMVQHPEFOOGYDMOCLSNDTSPENVHZNQCSOYEMXLPMJHVEIRLQTANKKQCJODYSYKLLIZMTHBLGDBGVBDHLMFTNNNFKWCPXBAAEPSJLXBWDKVRWFTWUMCZHXVGGQQRJOXA");

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
    msg.setTimeStamp(0.1769111777803385);
    msg.setSource(6566U);
    msg.setSourceEntity(92U);
    msg.setDestination(18698U);
    msg.setDestinationEntity(45U);
    msg.origin.assign("DZLMJPYTXDLLQORBDHFDAEAJNHBUAJLIZOVEMXBYRCYIXHSQSKZMTKTTQEZPISWABFJUOXUBPRCMNYJBCVSVVOMUWEWVFAQJLIOYON");
    msg.text.assign("MMUBXEBXAEVNVJBIRRVPFNVIKJTZHPGUJOCGTBYWLQEYTYQBUTLOHGMANGNTHSWLBJRFRXRVNWOAFFTDEXKEDCMXROYZNZWUZADIQQRNTVSHACHLKUZXCCAKLUSDNLOAQFDBBCQYYMFDVLGBZAYRZIS");

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
    msg.setTimeStamp(0.2896219222981211);
    msg.setSource(33087U);
    msg.setSourceEntity(93U);
    msg.setDestination(7565U);
    msg.setDestinationEntity(2U);
    msg.origin.assign("QEZCBDSAFNTLAE");
    msg.text.assign("DVTWQTWFRUNEZSCOKABIJAUUFNQVOQMTYKKYLYAGEDIVQWIXYGZWKYLPTEQZNMWSZCGDWNCBMJEFXDMQKITSQOJPUTUDCZUCKGMVWIBKHZMSDYOGHUSBHCSAMVARBTNNLNXLBKBRVBLTLDDJLHVCRGHYWXGIOCRCFTERMXOAHQEAZFDPSCJPERFKJJUOYPVHALSPEYPQXEM");

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
    msg.setTimeStamp(0.1742843139951591);
    msg.setSource(21748U);
    msg.setSourceEntity(137U);
    msg.setDestination(15493U);
    msg.setDestinationEntity(120U);
    msg.origin.assign("SAXLNPMRBMKRBUTIRZWONKVPMHQNFIMIDLSDCGBHZVHRYBFEFIETZTMOLYQZGOTFISRRKCCVBHLMWXXWSGHJOAQCXPQJZAUTPPUDWUZEIDIGDYQGIAARNBKEOIOGXDUHYDCGUWNUEZXNAQEQDLJVXGGWUBZMPTYLOYJZGMFNLAVDOKVXHPFWSUSOQEKJHCWVZCAQDE");
    msg.htime = 0.7690049231381788;
    msg.lat = 0.6822489974803888;
    msg.lon = 0.6896972787498101;
    const char tmp_msg_0[] = {-31, 43, -77, 91, 3, -66, -94, 69, -74, 11, 5, 99, 124, -41, -115, 75, -126, -61, 120, 90, -59, 64, 124, 3, -80, -99, -77, 99, -108, 94, -3, 126, 45, 89, 59, 98, 108, -9, -24, 62, -79, -97, 30, 95, -110, -59, -22, 64, -54, -70, -6, -12, 30, 70, -51, -76, -35, -55, 65, 36, -66, 86, -93, -21, -49, -28, -110, -120, -58, 54, 92, -75, 32, -15, 9, 111, -18, -37, -49, 6, 8, 2, -66, -104, -117, 115, -104, 126, 42, -15, 126, -97, -61, -45, 9, 40, -49, -92, 35, -62, -118, 50, 39, 87, 125, 99, -112, -112, 97, 93, -122, -116, 65, -99, 19, -31, -88, -124, 67, 123, 104, 56, 55, 18, 2, 48, 93, 85, 32, 43, 111, 123, -14, 90, 31, 31, -111, -46, 49, 113, -35, -34, 121, 114, 80, -94, -122, -95, -128, 31, 94, 62, 58, -22, 26, 23, -67, 94, -39, -30, -5, -40, -53, -84, 20, -103, -104, -82, 5, 1, 62, 8, 37, 83, 53, -75, -61, 33, 121, 68, -109, 81, -10, -83, -17, -31, -124, -25, 103, -96, -57, -110, -102, -35, -7, 8, -33, -16, -39, -67, -123, -28};
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
    msg.setTimeStamp(0.4863138563306697);
    msg.setSource(62908U);
    msg.setSourceEntity(132U);
    msg.setDestination(21751U);
    msg.setDestinationEntity(94U);
    msg.origin.assign("IJDADRGLFYYMUAMUYIPONWOKWXGKJBMYJPDTUCBEIAKCOKAYSPFZRJBIHXDEHOFRZSCPIYDTJGLRBKDMTDCIJTIHUQOLXGGURLJKSIKAWATQWVNXGVQXQQUYNVAZFLZFGSWQSVQJYQINHCZXEEBOTTJHWZGIEMPKNPSXUMVHLZHFPPBCDEFUVNTEEORVSNBLHOZWSCLDFRLJVWU");
    msg.htime = 0.11852411002333163;
    msg.lat = 0.9749553209428091;
    msg.lon = 0.3682524240503785;
    const char tmp_msg_0[] = {77, -15, 35, 123, -40, 77, -59, 23, 53, 26, 119, -118, -10, -111, -24, 99, -124, -66, -120, -68, -88, -32, -83, 40, -80, -35, 22, -103, 126, 26, 69, -24, -103, 47, 77, 96, -20, -20, -56, 80, 32, -32, 93, -59, -88, 34, -120, -98, -86, 50, -49, -35, -41, 112, 114, -54, -98, 83, -49, 117, -73, 43, 39, 71, -120, 64, 22, 119, -15, 67};
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
    msg.setTimeStamp(0.45605968700324595);
    msg.setSource(35771U);
    msg.setSourceEntity(142U);
    msg.setDestination(2490U);
    msg.setDestinationEntity(30U);
    msg.origin.assign("QMGYXJWTDLSCMP");
    msg.htime = 0.3333313983998969;
    msg.lat = 0.2984653416182482;
    msg.lon = 0.9733411321784957;
    const char tmp_msg_0[] = {-4, -89, -59, -83, 86, 117, -12, -47, 65, 29, -119, 15, 30, 55, 36, 8, 121, 126};
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
    msg.setTimeStamp(0.3447691878296937);
    msg.setSource(15984U);
    msg.setSourceEntity(231U);
    msg.setDestination(26717U);
    msg.setDestinationEntity(30U);
    msg.req_id = 40321U;
    msg.ttl = 50065U;
    msg.destination.assign("UFRLGQIBLZAIEFVFEXHGTCDWBKYHKORBWAZEPYAWQZZIMIUXETMKKGCWSOVPMVBFJRALKMTOXSMNDKLBQRVNHIFRJINVXLQGVUDBRQXOMSZHUCBPSSFEAUEXKAHBCVWJYZVJDJWRZFNYCQGHBHAMDYCFNEQTKDJPPNJYKUJSOXYTPTIKUTWNURGCPEOWTPFOAHCLYEIUJMPMYDCLITHS");
    const char tmp_msg_0[] = {-89, -12, 55, 58, 80, -55, -119, 52, 62, -25, 90, -43, -4, -54, 10, 125, 126, 119, -38, 122, 57, 118, 61, -77, -58, 42, 38, -106, -89, -88, -49, 13, -13, -4, 30, 72, -119, 113, -15, -45, -6, 44, 8, 71, 6, 47, -47, -93, -54, 68, -53, -41, -98, 23, -125, -98, -64, 60, -4, 40, -22, -93, -104, 22, -36, 21, 26, 101, 2, -20, -112, -40, 69, -20, -15, 6, 50, -115, -72, -48, -76, 102, 91, -70, 104, 92, 70, -35, -99, 39, -96, -84, -41, -18, -9, -37, -101, 14, -49, 8, 98, -128, 46, -59, -35, -74, -97, 4, -73, -22, 90, -114, 33, -77, -62, 50, 52, 39, 13, 16, -74, 22, 13, -22, -22, -117, -104, -69, -20, 18, 4, -41, -7, 70, 48};
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
    msg.setTimeStamp(0.8974139979548467);
    msg.setSource(41681U);
    msg.setSourceEntity(134U);
    msg.setDestination(49597U);
    msg.setDestinationEntity(91U);
    msg.req_id = 61807U;
    msg.ttl = 42577U;
    msg.destination.assign("FSVPYKIGUSPUDDOTWKTXOLGVHAHMOXGWFIRANRWLBMMOCHDHIQSTSVCXIPLYAAMUQMPBDKZDNVSALFVYCUQTMZHNCZJKLXWJYSZEWWXEBMTNHRRFJVWIJWAZOXQWRJEVJCPXISUGEIFPCCKFSKXZWVJBIOAZLMETQYUIPFNQAOKPDEVXRKNBNHZREOGJBNBMLBGTFDZRGCKLTHRGSUUYQFJCDEDAHOY");
    const char tmp_msg_0[] = {96, -116, 30, -118, 64, 106, -19, -21, -7, -108, 11, -7, 41, 38, -50, -110, -1, 96, -103, -7, 120, 93, -27, 108, -25, -102, 1, -63, -103, 64, -28, -11, 91, 0, -24, 47, -122, -97, -114, 115, -67, 77, 101, -119, -76, -25, 77, -111, 76, -124, 10, -59, -79, 70, -66, -84, 90, -67, -22, 23, -33};
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
    msg.setTimeStamp(0.24133364724846196);
    msg.setSource(38988U);
    msg.setSourceEntity(195U);
    msg.setDestination(1588U);
    msg.setDestinationEntity(215U);
    msg.req_id = 7637U;
    msg.ttl = 30068U;
    msg.destination.assign("JLZYSKHPIEEDGCAGTWSZMSEYVUQDHYZTQASVHQCYMXEUSBKQNBZXQULXOKFWWGIECROJCSWUEWVFBSRDYQIGZKJTABGODUONGLELHZWJOJGNCERMOLTIDVFDTPBOVNSPHBKEMMHUNCHIOTOFVRITZRBQFFHBLYDZASYIUFCLIBMPUKXXNCJLYHV");
    const char tmp_msg_0[] = {-127, 29, -88, 27, -49, -98, -18, 53, 118, -118, -24, 47, 80, 0, -26, -102, 60, 15, 65, 57, 13, -65, -19, 22, 5, 87, 18, -37, -92, 99, -85, -21, -34, -96, 99, -75, -25, 31, 125, -38, -32, -64, -26, -56, 70, -117, 39, -51, 95, -38, -21, 62, 21, -67, -23, -44, -81, -11, 121, -85, -80, 6, -33, -29, -87, -75, -61, 95, -124, 99, -38, -112, 120, -77, -111, 59, -117, 66, -46, 18, -29, -40, 39, -67, 55, -64, -125, -110, -89, 113, -44, -126, 104, -69, 103, 76, 32, -6, -58, 22, 118, -3, 59, 64, 18, -42, -10, 95, -120, 84, 110, 24, 63, -106, -98, 53, -18, 118, -84, 67, -10, -45, -65, 120, 114, 6, 125, 114, -38, -40, -99, -8, 45, 34, 2, 85, -58, -104, -105, 109, -37, 86, -50, 75, 38};
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
    msg.setTimeStamp(0.7912663512945013);
    msg.setSource(35545U);
    msg.setSourceEntity(186U);
    msg.setDestination(23445U);
    msg.setDestinationEntity(196U);
    msg.req_id = 57461U;
    msg.status = 69U;
    msg.text.assign("NIIXSKQKLGZBHPNGMJEVRVOQMYLKHWTBRSTUTLAFFBBOFGRFBZYPYASIQKXYZIEQMUAKFVMVGKJWDXEJFHDKCOLFOTIECHAYCJWGFBJVNQKGBSIHPWPRNOXMNSXJQOCWLPUCSZHZCGDANXDNMCBRILWJUOXGYEGVDUUZXEDYTMSWETMENDEZBCOCVJUAUPRRCZNAUXFXWGDWTSJVDADUMZPVQY");

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
    msg.setTimeStamp(0.7379528823236835);
    msg.setSource(4721U);
    msg.setSourceEntity(118U);
    msg.setDestination(20665U);
    msg.setDestinationEntity(208U);
    msg.req_id = 61528U;
    msg.status = 95U;
    msg.text.assign("JUPNUOKIQLKEKJGEJZBIDTXXPJFWPIRTYTZTFIIDOSSMRUUVHWKDNOILOVARIGNJSPHMGUQPXUAWUVXIAFESKVFWBHLYCVOQKHDKJBDWXMNUERMEYHRMNHFQSQGLXECEJMOEYZTEHPVXWPJTDCWNDCAMMFSGOYNNBCSMKVYLIFGWPLRWREVJDTTQWOCAXVAKGGIOBLCSTSBXYSUCPPRVTADLKMFYAQZ");

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
    msg.setTimeStamp(0.15987669291422968);
    msg.setSource(51237U);
    msg.setSourceEntity(12U);
    msg.setDestination(32984U);
    msg.setDestinationEntity(244U);
    msg.req_id = 28978U;
    msg.status = 209U;
    msg.text.assign("PJNEOSIQYGXLVVKTNSEGLHTMHZXUKSUTARMJRTJJCXKVWMTSUJZQAOIDXURYJBOWFBWVLJMWAYQZBOFCOULPFKFCNUJNYDBOKMXYMDGMAKSEMWAGYRXOEIDNHUQLSBBWRFZAIQTETGDZKRPPAQTNHVSMFHXAQGBBDXGWRGC");

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
    msg.setTimeStamp(0.3167997440167831);
    msg.setSource(18165U);
    msg.setSourceEntity(198U);
    msg.setDestination(22881U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("REZVGCFSWZUDHPGFVPQTABTUNGJDCKROLJOUOKFHQAEQHMLCTZBNEVP");
    msg.links = 2470072385U;

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
    msg.setTimeStamp(0.8599924914577339);
    msg.setSource(16972U);
    msg.setSourceEntity(237U);
    msg.setDestination(3721U);
    msg.setDestinationEntity(53U);
    msg.group_name.assign("KIVAUUVBBFNJNQIYHBEIKQQYODJJILBWUXDRYSSYROJXOZGCTFFTFHQPIVAJIQATWCWUXYMMZJNUIOAG");
    msg.links = 3917535422U;

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
    msg.setTimeStamp(0.35949693806276495);
    msg.setSource(31543U);
    msg.setSourceEntity(233U);
    msg.setDestination(1011U);
    msg.setDestinationEntity(203U);
    msg.group_name.assign("DOMFFYBJOUPSSRXEOAJWXMEIQCXNZUNTOYHJNPOFRRHLJWCOTKLQBZPVLEKDGLQPBYHYVXPSGMOFHJASDGXLGKDSWCJABKPTYLUMSPIDQRUTKDORHWMIIIFDIXNLWGOKJDAVBULITQVYXTGUHCMNUFCQUZVQNQVLNMCZTEDVXJZPGOHAGAAKDKVEYXRTGZHZSMCBYBAFNHIBMYWBBVZWICRSSCPE");
    msg.links = 2545385056U;

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
    msg.setTimeStamp(0.9214087248835044);
    msg.setSource(38371U);
    msg.setSourceEntity(166U);
    msg.setDestination(7355U);
    msg.setDestinationEntity(168U);
    msg.groupname.assign("PDSOHAAAPYLDFOXXCOISQPWRZTPWXRDRKDBWDENTLZIGJXYCRONDCWHACDYFTHWIGOSAMJNEJNYQCJSZALQRSLKUGMJXCJLAEKTBYLMBEIUPMXUNMWRPCSTBAJYIQICVHKSYFWZZVIEEQBHZNMRZUSVQFLEILDBGWKPJY");
    msg.action = 181U;
    msg.grouplist.assign("UONLQSYINPKKZWQBSZRZHTVGZCQMGDHBUUSPSEJXTWXQLLDHDQBSDGRBEPLXYYVKSFJRFFUWMEZLJXTGOIUCTMKVKNIAIFMFVXQOJHPOFOAWZYTRRNRTUFXTCIOJLYWCEGWGJEWXYRKIQWWPDLOCUYJVEMVAQQAGASHLPTLVEMPDZEZGIODNHFYMAHCMYDNKPXFNEBPCKHUFKAUXUIYCRGMNPRBARXTIVMWBDZVZNCJOEGBHJSAOSBQ");

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
    msg.setTimeStamp(0.5940489946016524);
    msg.setSource(27076U);
    msg.setSourceEntity(108U);
    msg.setDestination(42243U);
    msg.setDestinationEntity(166U);
    msg.groupname.assign("DWZATKFBOFOPAJOEUHGCCQIKBHBWVCCEVBOAKWQHYRTNSEBNVSRXODADTQVYHSLPXXXCGLULITXKNBKNTJWMZERETELINHGUAREOJXEJKUDUMBUPFMYGICL");
    msg.action = 9U;
    msg.grouplist.assign("GUHDWYVPLJYXSUOFQUFDFTDMJWAQNFOQAZSEWWIUWAKDQMGICBDFGMHMJVBRNKFCLUHQICJBQEWWRETNKYIPZZYXPGJWBARNKTSSECXILNQCOPIENPVAZATLJRDBKQMHCSYWBRPZPLSSTDBTUGWBZELIYGQFPARFPVXVQCKOJTZHXJTUOFXYHUVMZMTPOVJCJLURSKXGVAIYDHSLXTNNVBDVHGDKABRGOEMUNFIMEKSAYZLECENHIORGZOYKX");

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
    msg.setTimeStamp(0.4179572344650623);
    msg.setSource(38862U);
    msg.setSourceEntity(151U);
    msg.setDestination(37271U);
    msg.setDestinationEntity(195U);
    msg.groupname.assign("ZRDVCAVCDFBISCTEXTDSKCQHYHDDHYKOJFGOLENEJIJQJBRRCXLNMAECOSARHAAJSP");
    msg.action = 68U;
    msg.grouplist.assign("TWFPDEHSGWHWUUUPAJKVPCZVWSSDYIOCNMYIWYOKJXBAAJTZWILFATENUHZGSAYTGFXMGKUQNPOQQIFFEZMZVBMBKZSUGNPYOTMBLFDHKIPRCRFOCGFYAYNGXNCGTZPFMDUBEXDYCVAZONXXHVMWVKWHCCQHEAEBUSTKEPJLFLPQVVIXAWJHREDIBMJRMAURKBEYVDQODRHCXETVSSJLDRNORDQLZIGLPNXLJQMOCIWBTJLQYZQRSKXHKTJG");

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
    msg.setTimeStamp(0.7764531022727373);
    msg.setSource(27054U);
    msg.setSourceEntity(84U);
    msg.setDestination(3374U);
    msg.setDestinationEntity(4U);
    msg.value = 0.32102342190941713;
    msg.sys_src = 16132U;

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
    msg.setTimeStamp(0.3953470879489348);
    msg.setSource(26777U);
    msg.setSourceEntity(32U);
    msg.setDestination(41993U);
    msg.setDestinationEntity(127U);
    msg.value = 0.19681423523378772;
    msg.sys_src = 42025U;

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
    msg.setTimeStamp(0.3317076268103495);
    msg.setSource(31579U);
    msg.setSourceEntity(254U);
    msg.setDestination(55074U);
    msg.setDestinationEntity(174U);
    msg.value = 0.7785787989816622;
    msg.sys_src = 65042U;

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
    msg.setTimeStamp(0.3316779126332422);
    msg.setSource(53036U);
    msg.setSourceEntity(194U);
    msg.setDestination(6691U);
    msg.setDestinationEntity(72U);
    msg.value = 0.2413403289568512;
    msg.units = 131U;

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
    msg.setTimeStamp(0.24800628708816974);
    msg.setSource(40181U);
    msg.setSourceEntity(56U);
    msg.setDestination(20230U);
    msg.setDestinationEntity(226U);
    msg.value = 0.6959401428313995;
    msg.units = 176U;

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
    msg.setTimeStamp(0.3959601746106881);
    msg.setSource(25946U);
    msg.setSourceEntity(88U);
    msg.setDestination(36877U);
    msg.setDestinationEntity(152U);
    msg.value = 0.4453193439286761;
    msg.units = 85U;

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
    msg.setTimeStamp(0.4842477518322764);
    msg.setSource(27533U);
    msg.setSourceEntity(213U);
    msg.setDestination(36194U);
    msg.setDestinationEntity(225U);
    msg.base_lat = 0.9008461104817729;
    msg.base_lon = 0.8340920876822733;
    msg.base_time = 0.4577357188907346;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 24687U;
    tmp_msg_0.destination = 42063U;
    tmp_msg_0.timeout = 0.4730748110711256;
    IMC::PlanGeneration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cmd = 211U;
    tmp_tmp_msg_0_0.op = 215U;
    tmp_tmp_msg_0_0.plan_id.assign("CRJYMSVHDGUDIYUBIKIRPFQQPQQCNAHKTMBMJLUAPTRVOWMVYDEWVHWYFKUYESQHBNEIKEDCJJNBXOSSSEWPJC");
    tmp_tmp_msg_0_0.params.assign("HJBWSUZEIECKTTJABYFODQRFQESGAOVXQMVTDVRDVJRAHDBCBTYRDWIOOVVTSYUERZLCLUMBANANKWDILFC");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7749542828385876);
    msg.setSource(56469U);
    msg.setSourceEntity(231U);
    msg.setDestination(1283U);
    msg.setDestinationEntity(12U);
    msg.base_lat = 0.5510121602022127;
    msg.base_lon = 0.6354167049585794;
    msg.base_time = 0.45984431939438997;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 64120U;
    tmp_msg_0.destination = 48012U;
    tmp_msg_0.timeout = 0.8377979296836316;
    IMC::GetOperationalLimits tmp_tmp_msg_0_0;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7153487236689324);
    msg.setSource(6445U);
    msg.setSourceEntity(221U);
    msg.setDestination(48905U);
    msg.setDestinationEntity(247U);
    msg.base_lat = 0.09954386076001909;
    msg.base_lon = 0.8522139514796617;
    msg.base_time = 0.6304645517519889;

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
    msg.setTimeStamp(0.32576592081213807);
    msg.setSource(2113U);
    msg.setSourceEntity(1U);
    msg.setDestination(43824U);
    msg.setDestinationEntity(34U);
    msg.base_lat = 0.46740323990853905;
    msg.base_lon = 0.32000835278604334;
    msg.base_time = 0.384200215883591;
    const char tmp_msg_0[] = {-54, 80, -111, -82, -23, -99, 41, -5, 102, -16, -9, -11, 34, -41, 55, -100, 28, -50, 110, -82, -8, -66, 34, 21, 125, 90, 55, -95, 10, -72, 6, -20, -50, 34, 123, -37, 1, -83, -7, 44, -71, -47, 39, -108, -81, 32, 110, -120, 5, 45, -47, -30, 79, -120, 48, 87, -15, 111, -102, -78, 107, -70, -100, -112, 88, 71, -117, -72, 53, 26, 84, -85, -10, -112, 43, -99, -92, -29, -100, -43, 109, -42, 53, -32, 101, -64, 18, 63, 49, 122, 20, -115, -107, 123, -52, 61, -111, 23, 93, 60, -41, 55, -108, 114, -17, -104, 30, 84, 112, -86, 114, 100, 105, 84, -85, -2, -96, -44, 31, 87, -21, 111, -40, 108, 38, -92, -35, 107, 54, 12, -36, -3, 27, 43, 79, -101, -25, 17, -9, 52, 117, 125, -20, -12, -96, 36, -72, 118, 93, 21, 6, -110, -23, 45, -37, -22, -55, -52, -103, 87, -6, -73, 45, -126, -84, -28, 125, -9, 67, -92, 56, 57, 41, -49, -46, 66, -100, 68, 69, 14, -101, -94, 54, -69, 6, 15, -124, -84, 58, 47, -44, -31, -54, 78, 121, 48, -110, 57, -1, 62, 98, 27, 62, 62, 93, 16, -42, 74, 65, 64, -91, -68, 65, -26, 34, -126, 13, -69, -104, 34, -105, -62, -73, -119, -48, -100, 97, -3, -62, -91, -92, 1, 57, 68, -22, -100, -14, -53, -104};
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
    msg.setTimeStamp(0.6363743677909482);
    msg.setSource(51803U);
    msg.setSourceEntity(183U);
    msg.setDestination(64310U);
    msg.setDestinationEntity(31U);
    msg.base_lat = 0.2674557849153928;
    msg.base_lon = 0.40571475599660856;
    msg.base_time = 0.005387117669174324;
    const char tmp_msg_0[] = {93, 99, -29, 49, -127, -101, -101, -44, 82, 88, 61, 43, 30, -64, -31, 66, 42, -26, 26, -78, -63, 85, -119, 86, -67, 42, -81, -37, -89, 97, -15, 28};
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
    msg.setTimeStamp(0.7439087425710218);
    msg.setSource(30091U);
    msg.setSourceEntity(48U);
    msg.setDestination(61301U);
    msg.setDestinationEntity(70U);
    msg.base_lat = 0.8940138349470537;
    msg.base_lon = 0.9710554988611836;
    msg.base_time = 0.01974306181625396;
    const char tmp_msg_0[] = {-100, 126, -100, 45, -7, -18, -127, 112, -29, 2, 119, -26, 94, 59, -14, -59, 72, -67, 2, -18, -21, 11, -40, -60, 40, 79, -32, 76, -119, 72, -78, -109, -69, -117, -82, 50, 78, -44, 65, -44, -122, -66, -25, 63, -115, -6, 117, 28, -44, -2, 96, -119, 4, -40, 79, 109, -128, 112, 17, -10, 94, -37, 9, -19, 83, 115, 90, -41, -89, 46, -126, 116, 29, 123, -119, -17, -42, -75, -7, -109, -63, 34, -90};
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
    msg.setTimeStamp(0.5967949195482669);
    msg.setSource(33821U);
    msg.setSourceEntity(4U);
    msg.setDestination(58688U);
    msg.setDestinationEntity(54U);
    msg.sys_id = 54233U;
    msg.priority = 113;
    msg.x = 12974;
    msg.y = -2139;
    msg.z = -4153;
    msg.t = 4948;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VGNYFTYVRLNYUAGXYAHNLIMTQVMIPCMBMSPSZXDWJVSKNXZWXVCDVYFJXERQCVFEPMLXFUVXZRZYDEZNJZKORJPYKIFKOSNOULBDQQFWJGNEROTGFBGTOCMMIBUMONVMTZBWKUEQKBSHRRIUHWDHZJUDFNDYTGWPJLCCUUA");
    tmp_msg_0.dist = 0.43675980750429955;
    tmp_msg_0.err = 0.42427653218547057;
    tmp_msg_0.ctrl_imp = 0.6332321072653845;
    tmp_msg_0.rel_dir_x = 0.13946055542874125;
    tmp_msg_0.rel_dir_y = 0.5059499252877435;
    tmp_msg_0.rel_dir_z = 0.18244336569854114;
    tmp_msg_0.err_x = 0.8824196356093654;
    tmp_msg_0.err_y = 0.9872380777697307;
    tmp_msg_0.err_z = 0.13252698687754616;
    tmp_msg_0.rf_err_x = 0.9630133188322585;
    tmp_msg_0.rf_err_y = 0.839147627544459;
    tmp_msg_0.rf_err_z = 0.9533771420848828;
    tmp_msg_0.rf_err_vx = 0.1324275184045891;
    tmp_msg_0.rf_err_vy = 0.7078281156704216;
    tmp_msg_0.rf_err_vz = 0.8712136772511535;
    tmp_msg_0.ss_x = 0.19934757627786615;
    tmp_msg_0.ss_y = 0.12583653089640368;
    tmp_msg_0.ss_z = 0.3820310650207521;
    tmp_msg_0.virt_err_x = 0.23367062179107279;
    tmp_msg_0.virt_err_y = 0.9418688793224086;
    tmp_msg_0.virt_err_z = 0.11483997427095982;
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
    msg.setTimeStamp(0.4633075037806714);
    msg.setSource(10460U);
    msg.setSourceEntity(40U);
    msg.setDestination(56359U);
    msg.setDestinationEntity(238U);
    msg.sys_id = 29156U;
    msg.priority = 63;
    msg.x = 7239;
    msg.y = 18216;
    msg.z = -28919;
    msg.t = -7193;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.9784140500167285;
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
    msg.setTimeStamp(0.42575342625418955);
    msg.setSource(61852U);
    msg.setSourceEntity(159U);
    msg.setDestination(31030U);
    msg.setDestinationEntity(42U);
    msg.sys_id = 62838U;
    msg.priority = -116;
    msg.x = -6317;
    msg.y = -25268;
    msg.z = -17937;
    msg.t = -19213;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 31298U;
    tmp_msg_0.lat = 0.11983747950334211;
    tmp_msg_0.lon = 0.02798884030354143;
    tmp_msg_0.z = 0.8055168433479517;
    tmp_msg_0.z_units = 188U;
    tmp_msg_0.speed = 0.1647389359134671;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.bearing = 0.31280433416234876;
    tmp_msg_0.cross_angle = 0.2956489194026162;
    tmp_msg_0.width = 0.1973900562027061;
    tmp_msg_0.length = 0.13985638547360046;
    tmp_msg_0.hstep = 0.48060441122521413;
    tmp_msg_0.coff = 17U;
    tmp_msg_0.alternation = 230U;
    tmp_msg_0.flags = 30U;
    tmp_msg_0.custom.assign("RTGUPFCZSUAOEOIRWWYYJSMLOXJPJTBNHJGSRDDXTQBRXIBHGASCXIKQAQTBZNPTWSODKMDFYZTECXMYOQUEVZRIFHMBZATTAANBZAQDELXBHNLQWXJLNFZQLYYZUVBRCUNKRPIBKG");
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
    msg.setTimeStamp(0.054445491669559254);
    msg.setSource(21558U);
    msg.setSourceEntity(179U);
    msg.setDestination(64648U);
    msg.setDestinationEntity(69U);
    msg.req_id = 37822U;
    msg.type = 50U;
    msg.max_size = 894U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.1997901112044459;
    tmp_msg_0.base_lon = 0.24355466665877323;
    tmp_msg_0.base_time = 0.4212983279117606;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 47144U;
    tmp_tmp_msg_0_0.destination = 54476U;
    tmp_tmp_msg_0_0.timeout = 0.29063392562710955;
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 3887U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.9907193136938378;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6251883522256338;
    tmp_tmp_tmp_msg_0_0_0.z = 0.1411169443503857;
    tmp_tmp_tmp_msg_0_0_0.z_units = 191U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8029064926823366;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 47U;
    IMC::PathPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.8135758402807453;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.6526351899933776;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.33590936944398797;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OTSPFYBCMIKOUMRKDLRISTCSBUKFZAWCXZIPHNFRXLVAEXJLXOODWDVFLWNSDOELSRCADKVJQIJUSKEJPCLDUWBSUKKPNAQCDGPVJYYPUTHNXTVXWMCZDJHNYINFLFG");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6327683422930418);
    msg.setSource(22698U);
    msg.setSourceEntity(233U);
    msg.setDestination(25609U);
    msg.setDestinationEntity(9U);
    msg.req_id = 44850U;
    msg.type = 19U;
    msg.max_size = 24743U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8663702499941631;
    tmp_msg_0.base_lon = 0.34916571674193975;
    tmp_msg_0.base_time = 0.6650585230594611;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 9734U;
    tmp_tmp_msg_0_0.destination = 37967U;
    tmp_tmp_msg_0_0.timeout = 0.7590881498938403;
    IMC::DissolvedOxygen tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.0012251580922842953;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.09789230944972471);
    msg.setSource(64250U);
    msg.setSourceEntity(7U);
    msg.setDestination(12508U);
    msg.setDestinationEntity(24U);
    msg.req_id = 5422U;
    msg.type = 164U;
    msg.max_size = 42546U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.08944312483398731;
    tmp_msg_0.base_lon = 0.4333346993492073;
    tmp_msg_0.base_time = 0.03813005283246329;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 12159U;
    tmp_tmp_msg_0_0.destination = 33280U;
    tmp_tmp_msg_0_0.timeout = 0.3806239212169621;
    IMC::ExtendedRSSI tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.2344579824034022;
    tmp_tmp_tmp_msg_0_0_0.units = 31U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.5864832655233325);
    msg.setSource(6803U);
    msg.setSourceEntity(225U);
    msg.setDestination(20596U);
    msg.setDestinationEntity(68U);
    msg.original_source = 24182U;
    msg.destination = 37960U;
    msg.timeout = 0.3011989769298553;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("GYUZCWUAQCSVSRNABIFCGMPHKPEIVOQVYTRTGSOPLQMPTXGFATJBXCCWSDCKRQLTIVKOHUNYNXXWQDZTJKMEZJNNXIOHWJHUWPKSMAGOADVZAEVIHXZAXHCOKQSBYYKLDEDONGUWQXZJZSGWDUOUAPHSSRXMBEZMJFERGDFVJPSNHZXLVAGRIEFTVQFRHNRIWJYAMLTRWEDOUBKKYCFMFLNKBPCNCPLDUOEZHJ");
    tmp_msg_0.service_type = 64U;
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
    msg.setTimeStamp(0.8325052502267906);
    msg.setSource(22728U);
    msg.setSourceEntity(197U);
    msg.setDestination(15482U);
    msg.setDestinationEntity(56U);
    msg.original_source = 30422U;
    msg.destination = 39623U;
    msg.timeout = 0.48503639587089464;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 72U;
    tmp_msg_0.mnames.assign("GRSKDPIVECHYZQKNLRBLQIOEKPQTOUWSZUYMGL");
    tmp_msg_0.ecount = 72U;
    tmp_msg_0.enames.assign("NIOMGQYFMIHTXQOPKNJTAGLMSDATIHQVBOMCPXATEMQIRDRODPPADKSDFCUXCXATGCRPNPKMAHLBYNFWJTTGELLRSXYIPJXXLNJINOZSWUEKXCHVGCEFVQVYNMBJHVBWSIORQKUAZEDISZEPWSBNSHWKEUGJJRRKVEPMKPKTJCLSZCREAYNMDWHTRVUZBOQOBFCFTYCFWBVNJLFDKYQYHGM");
    tmp_msg_0.ccount = 249U;
    tmp_msg_0.cnames.assign("RBRCMBDMKATBQHVVWSDMCFGLUEXZWMGLZRSOAGGRKJHSPTBONKKHECSZMFPQYLIDTFBUNYTVZKMBFEXCSEZATZJPLNKAAXWZQDHYUGFWLPSS");
    tmp_msg_0.last_error.assign("HDEFAMAQWDKQZBZFMCBLRWJXWANYRCAPLFLEIBNDPGDPRXYXDZMAOJEMTTLQXXLJVFOKYYYWAIFHUIWUVOHEUIWJZJMFOHLKVMEGQSWSQYFSEXPHBKBNUORTITZDHAENBSDGQVUYZRJVSCVERPOVPWJGXFHNCOBNIDSYBSLECGTWOFRRKJYGKZVKULUQTPAUIVRQXNJHD");
    tmp_msg_0.last_error_time = 0.16604311720557408;
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
    msg.setTimeStamp(0.869575712197591);
    msg.setSource(14056U);
    msg.setSourceEntity(171U);
    msg.setDestination(64746U);
    msg.setDestinationEntity(152U);
    msg.original_source = 59513U;
    msg.destination = 22835U;
    msg.timeout = 0.7514703137652144;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1825174172U;
    tmp_msg_0.start_lat = 0.5057058580366179;
    tmp_msg_0.start_lon = 0.9894069603048368;
    tmp_msg_0.start_z = 0.8368353550958831;
    tmp_msg_0.start_z_units = 31U;
    tmp_msg_0.end_lat = 0.11426535641556179;
    tmp_msg_0.end_lon = 0.8062738165568779;
    tmp_msg_0.end_z = 0.1965406306758929;
    tmp_msg_0.end_z_units = 189U;
    tmp_msg_0.speed = 0.01746561819997583;
    tmp_msg_0.speed_units = 98U;
    tmp_msg_0.lradius = 0.3391951841024853;
    tmp_msg_0.flags = 68U;
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
    msg.setTimeStamp(0.7245424685664974);
    msg.setSource(20491U);
    msg.setSourceEntity(239U);
    msg.setDestination(64863U);
    msg.setDestinationEntity(97U);
    msg.type = 61U;
    msg.comm_interface = 55151U;
    msg.model = 37343U;
    msg.list.assign("VEETSJZQIQRZHMABBUQRVCVBYOCPNPEHVJKRHAEFEMOXDOGDPGZXZYFCMPTMFVDPFUMLTXOGOTPKWSNMIAONNFYHWGNELXAKWFWWNJQSFLLYJBODFGUTUUYSTHVWUBKIICJXCIGDFZRLYTLDVSUZQMNCLJWBJSENX");

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
    msg.setTimeStamp(0.0609170357468789);
    msg.setSource(5538U);
    msg.setSourceEntity(213U);
    msg.setDestination(42292U);
    msg.setDestinationEntity(84U);
    msg.type = 140U;
    msg.comm_interface = 54284U;
    msg.model = 38406U;
    msg.list.assign("JNEXWUGCYIINSIQJCOPYYJZFCCELZKVROOAPGDWTXNZCPDNZKCVDBWATARFOMWUSGUQJMJLOEQQAQAJGROEVIAYPGEBFRPIXXDWHQBFSTKFYLYURVOULKPEWAEDEJNASKZWTMCGELXTMIXHCAOUYNYBNMSEHNTZWUPRW");

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
    msg.setTimeStamp(0.8051248874922478);
    msg.setSource(12821U);
    msg.setSourceEntity(82U);
    msg.setDestination(53209U);
    msg.setDestinationEntity(80U);
    msg.type = 192U;
    msg.comm_interface = 61471U;
    msg.model = 57518U;
    msg.list.assign("KNMKCTYRMIQFHELJQXWN");

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
    msg.setTimeStamp(0.5280538570305472);
    msg.setSource(58874U);
    msg.setSourceEntity(117U);
    msg.setDestination(28778U);
    msg.setDestinationEntity(39U);
    msg.type = 88U;
    msg.req_id = 2688271083U;
    msg.ttl = 6776U;
    msg.code = 39U;
    msg.destination.assign("YEPHRKHIBPKKMAGIFWRDIDPSZCKXZULMXFQYQNTZTDSFLHVMBGUKENCCVEDBLNADAWEQWWOENNSSYUPGFDILJHBFCVJOAXGNMLLOLNZWVCEJQJIGQSYJRHMQVTWEORIMNRZDTAYZUOT");
    msg.source.assign("NGMIMNYKXKJDGFEWLXXBLIRQJZRSMYOUOTCNUAVDEAWALODVVUCGKRCJTERGSRSQBTRQJBYOBQXJD");
    msg.acknowledge = 57U;
    msg.status = 73U;
    const char tmp_msg_0[] = {-62, -100, -110, 54, 26, -24, 111, 112, -122, 64, -98, -120, 52, 47, -10, 4, -1, 50};
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
    msg.setTimeStamp(0.45886604321905655);
    msg.setSource(16746U);
    msg.setSourceEntity(184U);
    msg.setDestination(44552U);
    msg.setDestinationEntity(83U);
    msg.type = 149U;
    msg.req_id = 389195979U;
    msg.ttl = 47309U;
    msg.code = 188U;
    msg.destination.assign("YTQKEXPNSCIDLCVGZTMWYWSDRZZLFLFJEWORROMQUXIKKFSCEYIIBYCBQBWBBPJTDGCKHTSRKAZJPVKURJLOPWOHOUDTSYVGUKUXXCEKXCPMODVYNLTAAWEXSTQYIUMTMPFKQEGHSQJAEAA");
    msg.source.assign("QVMQVZLYYLQOJDXMHKYEFJGRKGQMKITEGNXRFYGOIRJNEPJINHAFAMMCDCIKJQNOEZCZLQVGFRLHYWCTDNYRNFOQEUPSJJKLCBGPTTGVBIDKQSCJPBSTXZMDSLHGOFXZWZOHRICIKRAEUREVXZUUAYSGPFMPYVVTHTNIEXBXOUTHUBWJSWUKWOFBRFQFMKWZUMDRCOQAIZSSYUATCWNYXBJWVBCPMADPOXVBBHLXAPG");
    msg.acknowledge = 28U;
    msg.status = 86U;
    const char tmp_msg_0[] = {41, 96, 122, 94, -48, 20, -44, -83, 120, 52, 70, -34, 91, 20, 95, -64, -15, 30, 39, -98, 119, 29, -98, 79, -39, 73, 109, 34, 105, 74, 60, 88, 109, -56, -38, 59, -3, -120, 114, 114, 47, -123, -70, -18, 82, -24, -14, 68, -84, -74, -13, -7, -71, 75, 0, 116, 20};
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
    msg.setTimeStamp(0.23726161387361588);
    msg.setSource(60173U);
    msg.setSourceEntity(21U);
    msg.setDestination(35384U);
    msg.setDestinationEntity(177U);
    msg.type = 52U;
    msg.req_id = 4174799443U;
    msg.ttl = 33438U;
    msg.code = 7U;
    msg.destination.assign("WZNEAEXXRQQFHKAIPBDYFXZTQLUFRSIHVUEOBRHAHGVCNJSVBGFLOESQUVDEGNZSGIBCNMABWPXLZECAKDDDPGPOCYOFVFZMEPAUJIEJFPMWBLMHWRZLWQKWYRCZKTKGCUNCOTRNVMBDCHDYNQVJMLTYSTZTJJEIVDHSAPSUBYUXDQFMRTGWBKHYGAWWTJMJCIGVFMRUDZLHIRQKRXLOSYABVOEWTOCIKOSKNMLJTNZHII");
    msg.source.assign("FKNVZPENPNIKBXJTZEWFC");
    msg.acknowledge = 57U;
    msg.status = 148U;
    const char tmp_msg_0[] = {-25, 54, 53, -37, 83, 8, -32, 36, 12, -60, 17, 36, 78, -98, -26, -30, -122, 63, 10, 60, 118, 65, 55, -80, -46, 20, 75, 31, -34, 108, 60, 37, -45, -12, -62, -61, -20, 68, 65, 29, -97, 16, -39, 45, 83, -51, -104, 47, -20, -105, -37, -114, 10, 55, -14, 31, -125, -57, 101, 58, -109, 78, 10, -87, -79, -11, 87, -105, -65, -108, -56, 77, -19, 43, -69, 51, 25, 105, 118, -84, -74, 73, 103, -31, 47, -18, -24, -44, 0, -125, 45, -26, 76, 15, -106, 68, 83};
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
    msg.setTimeStamp(0.33046663597639836);
    msg.setSource(10342U);
    msg.setSourceEntity(129U);
    msg.setDestination(29466U);
    msg.setDestinationEntity(15U);
    msg.id = 66U;
    msg.range = 0.7920753003195314;

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
    msg.setTimeStamp(0.021679149261942032);
    msg.setSource(20934U);
    msg.setSourceEntity(232U);
    msg.setDestination(5107U);
    msg.setDestinationEntity(248U);
    msg.id = 20U;
    msg.range = 0.03409473254345485;

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
    msg.setTimeStamp(0.5153453953519355);
    msg.setSource(4501U);
    msg.setSourceEntity(106U);
    msg.setDestination(28092U);
    msg.setDestinationEntity(22U);
    msg.id = 73U;
    msg.range = 0.20614884334192995;

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
    msg.setTimeStamp(0.24444701185681916);
    msg.setSource(10063U);
    msg.setSourceEntity(111U);
    msg.setDestination(61706U);
    msg.setDestinationEntity(198U);
    msg.beacon.assign("GYLKAOJRFFETERLSAVKLYSLREJIWNXUNFQDUVTPRSNEDORWOJSNWSZDTCCAXKDMHUMGDDBXCIATYMUYPCMMVFGHQTYRBZGGJHADKOL");
    msg.lat = 0.9602747615428456;
    msg.lon = 0.41687519826451247;
    msg.depth = 0.6745157707380999;
    msg.query_channel = 5U;
    msg.reply_channel = 174U;
    msg.transponder_delay = 210U;

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
    msg.setTimeStamp(0.5540863445798099);
    msg.setSource(31180U);
    msg.setSourceEntity(112U);
    msg.setDestination(7864U);
    msg.setDestinationEntity(137U);
    msg.beacon.assign("FXCNHDHUKFABJPFYWDPPYYOGLCOTRPVNTQNZADVLRIWLVIFKPRFBCBBOANVZSMTLCCXVYSODQJIZHXASLEXMUZUFNLTGHSBMRHFXZCSRJAGRCZPGDTJMCIUJRHWHPEGILWUEXGAEQKGIKYMDSEBVNNQFXQWDODVOUIDNLUBSXBMQWNFBNAGTTEEAUAKJIYZKTMPIMITSH");
    msg.lat = 0.37582129901479144;
    msg.lon = 0.21708020826547558;
    msg.depth = 0.148074291094775;
    msg.query_channel = 86U;
    msg.reply_channel = 198U;
    msg.transponder_delay = 243U;

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
    msg.setTimeStamp(0.3544672230418212);
    msg.setSource(16591U);
    msg.setSourceEntity(236U);
    msg.setDestination(51282U);
    msg.setDestinationEntity(138U);
    msg.beacon.assign("CLYMQGCBWGPLUCLKVGWQAKGDBKBEXMVHEZVIGPVCACKETHHCKWEATATFBBOHFDQCPQTSPJAEAZQYGKBLBJWQUGJJRHXWJINVCENNMIUPZXLRVJOEUFYUSFEPWOQDRUTDHFWMYSLJOFRSLEVURSFINPNZRQZHOLYUMUSZXPFSKOVVYMZPXMFTROXGLIJLDSPGNNDI");
    msg.lat = 0.311177947710747;
    msg.lon = 0.2063493976991172;
    msg.depth = 0.11385026633511064;
    msg.query_channel = 5U;
    msg.reply_channel = 235U;
    msg.transponder_delay = 80U;

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
    msg.setTimeStamp(0.3024539304629026);
    msg.setSource(18592U);
    msg.setSourceEntity(60U);
    msg.setDestination(29746U);
    msg.setDestinationEntity(198U);
    msg.op = 46U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PDAUBKTLHXBDYGYQFZKSGYQWEZLBRFIUIZNWPXHNAPVKINU");
    tmp_msg_0.lat = 0.6287440158235712;
    tmp_msg_0.lon = 0.9807913110195745;
    tmp_msg_0.depth = 0.3963968056182411;
    tmp_msg_0.query_channel = 13U;
    tmp_msg_0.reply_channel = 144U;
    tmp_msg_0.transponder_delay = 112U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5899774516429339);
    msg.setSource(59670U);
    msg.setSourceEntity(120U);
    msg.setDestination(59124U);
    msg.setDestinationEntity(206U);
    msg.op = 131U;

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
    msg.setTimeStamp(0.20962295361808003);
    msg.setSource(60569U);
    msg.setSourceEntity(76U);
    msg.setDestination(46352U);
    msg.setDestinationEntity(166U);
    msg.op = 41U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YNGGMJKMFJCIZINGCGVPYRPNMSHVOSARTYTPLDMBJAGZIUWYXRWFUNOZUELEPGPCIALOWEGUDZVXVPFKZFZTLQJOGLWDHLCUQSQORFNCNDMRAVXEXEKRRDMKEUCSNIQAEMPKOZAJWHWUQKJTPLMBDHCBNTHNKVBWFYXEYJLXBHXAHCFPWQGHTOZLFXWSWSMFGVVXNTRQJ");
    tmp_msg_0.lat = 0.6437043661217632;
    tmp_msg_0.lon = 0.37349859132805585;
    tmp_msg_0.depth = 0.8071296099036415;
    tmp_msg_0.query_channel = 200U;
    tmp_msg_0.reply_channel = 87U;
    tmp_msg_0.transponder_delay = 159U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.45376843865257266);
    msg.setSource(59560U);
    msg.setSourceEntity(133U);
    msg.setDestination(47109U);
    msg.setDestinationEntity(214U);
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 161U;
    tmp_msg_0.reason = 100U;
    tmp_msg_0.value = 0.2640992741056337;
    tmp_msg_0.timestep = 0.5813304053867163;
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
    msg.setTimeStamp(0.3642417726173518);
    msg.setSource(48415U);
    msg.setSourceEntity(158U);
    msg.setDestination(8706U);
    msg.setDestinationEntity(104U);
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.002440276824154819;
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
    msg.setTimeStamp(0.9127789583005818);
    msg.setSource(23752U);
    msg.setSourceEntity(143U);
    msg.setDestination(59566U);
    msg.setDestinationEntity(79U);
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3881340519875358;
    tmp_msg_0.lon = 0.01657920572225502;
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
    msg.setTimeStamp(0.8419003710443473);
    msg.setSource(46755U);
    msg.setSourceEntity(111U);
    msg.setDestination(48936U);
    msg.setDestinationEntity(241U);
    msg.op = 19U;
    msg.system.assign("PPNKVASCIUXJFDPTXK");
    msg.range = 0.6151312813399087;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 250U;
    tmp_msg_0.request_id = 52531U;
    tmp_msg_0.command = 39U;
    IMC::Takeoff tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.35126053885468334;
    tmp_tmp_msg_0_0.lon = 0.36885773431559166;
    tmp_tmp_msg_0_0.z = 0.8471972716069947;
    tmp_tmp_msg_0_0.z_units = 206U;
    tmp_tmp_msg_0_0.speed = 0.611770063870534;
    tmp_tmp_msg_0_0.speed_units = 148U;
    tmp_tmp_msg_0_0.takeoff_pitch = 0.5312955503829591;
    tmp_tmp_msg_0_0.custom.assign("GFOZLJQPNWFCVXUOWSFVGQVIRQLMMVYMTMOKCCEYPSGJYLPNYSIBLQJYHPPCIZOTREITHZIIFYHKUQUAXLYEQESWZEFKVPLXHKINENJCMFMMHBLGFJSUOMNVCPTUJZTDIQZYRKBQSUGHJVHLBEHERAWSCFLIRNXASDGPGBHDJNCVUXXKJBAAYRXHADNALNBTOQVAFMSACGBVUDWWGKDOWIRPMXS");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 47263U;
    tmp_msg_0.info.assign("DCQEAQWZXBWCEOAOZWDTFBUIGRADKTEFWHGNODVYKDLQKICWJDFPIYGLFPEBBWPZLXTAOJIUGSROYOHPSPRXPBGVKWLKJNQQNQXZPLCTOFRAJYDKUTVNJKMMSVJEATTUMQQLZGCCERZUVRSVHNXZGVLDHPYAUAOTHBVMLBPXDCMIFCVMIT");
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
    msg.setTimeStamp(0.2186859282499668);
    msg.setSource(30446U);
    msg.setSourceEntity(226U);
    msg.setDestination(27478U);
    msg.setDestinationEntity(32U);
    msg.op = 231U;
    msg.system.assign("YEFQINHHFZWQUGXZSBOCEAKUQMLNLRWHVDBWRVYFDFW");
    msg.range = 0.04202179142726503;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.8416632867751781;
    tmp_msg_0.v = 0.042143429304334235;
    tmp_msg_0.w = 0.4829853999064202;
    tmp_msg_0.p = 0.4629917165559043;
    tmp_msg_0.q = 0.5637730305645055;
    tmp_msg_0.r = 0.13564098219892806;
    tmp_msg_0.flags = 168U;
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
    msg.setTimeStamp(0.8178530487478138);
    msg.setSource(15111U);
    msg.setSourceEntity(129U);
    msg.setDestination(36971U);
    msg.setDestinationEntity(81U);
    msg.op = 34U;
    msg.system.assign("EXUZHBHZUQVYIAZJLLUPCMLIDJHEPCWUQRFDNPYEXHGASOZCAEMABWWKFGTPCODCTPKJONTWVXGXRINXKMGZKGVKFOSAJQTUHWIBMRLHURDKDDFRBTESRHYNJUVFYKHLSZNIMANY");
    msg.range = 0.6126313165757524;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 38238U;
    tmp_msg_0.lat = 0.745010294353145;
    tmp_msg_0.lon = 0.24534297068152433;
    tmp_msg_0.z_units = 41U;
    tmp_msg_0.z = 0.610890819578527;
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
    msg.setTimeStamp(0.9395186355739175);
    msg.setSource(23748U);
    msg.setSourceEntity(133U);
    msg.setDestination(64290U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.7648227474519685);
    msg.setSource(8186U);
    msg.setSourceEntity(36U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.8085323867485007);
    msg.setSource(52671U);
    msg.setSourceEntity(139U);
    msg.setDestination(40116U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.2723205932477972);
    msg.setSource(25918U);
    msg.setSourceEntity(11U);
    msg.setDestination(46274U);
    msg.setDestinationEntity(223U);
    msg.list.assign("HIGXCUAQYVUTUEFJXFILNBQEAQFH");

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
    msg.setTimeStamp(0.7909062369748461);
    msg.setSource(5698U);
    msg.setSourceEntity(230U);
    msg.setDestination(62005U);
    msg.setDestinationEntity(230U);
    msg.list.assign("ALZPSBBLQERIPJEGZORESSEMWEQXCIN");

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
    msg.setTimeStamp(0.3095996602153892);
    msg.setSource(51657U);
    msg.setSourceEntity(87U);
    msg.setDestination(2742U);
    msg.setDestinationEntity(149U);
    msg.list.assign("KWUYDLMTXBUMAAJKAJVMFINYWNPEMNHHTJJPVGMTUXGDGOTIAQAKNHGJQTQLOMFKXXXZPSWKHRKEVKMRNENFFCCDDJSTRQVNWGMLCVQWCCSLXPHSSLVCQNFKAPZEXXATZIOHIRIWJYPTJUQXBGXSTVHYMNDLNBZOHBLGRRPHFLOWRYKOBDUUJIBQIGZBAYOEGSCDRYELFEOPUUKBDGYVOUIZCQESSZUVZCWIVRJSFEYADZZWDFHBRYLQMFAPI");

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
    msg.setTimeStamp(0.6359920268859887);
    msg.setSource(45732U);
    msg.setSourceEntity(216U);
    msg.setDestination(25512U);
    msg.setDestinationEntity(18U);
    msg.peer.assign("KASHXFQMBMTMGQJBOUPKGKZBSTVWBZWGMNVMJEVWWGNHJAQDTQAEIVCCUITAPQXSUTYMTELFULBBWEIQXQLKGPZBAALAHNMPYKEOYFILKOURMNJXTNICPPLIOEFPAIVJVKHLDZZCNDXJSJDFUYWPTKCTHXRTXWFBHVGSHODRSINSDGPEWYCURZYYRXAHZLGQDKEOJJQEZIDFVDVSVREFSLHOZNGXDOUWMQOCSNP");
    msg.rssi = 0.2710450065336557;
    msg.integrity = 10289U;

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
    msg.setTimeStamp(0.8276789866239554);
    msg.setSource(56751U);
    msg.setSourceEntity(241U);
    msg.setDestination(50101U);
    msg.setDestinationEntity(63U);
    msg.peer.assign("PRXKGRZNIYJDHNRBRSKCMMLUOJUJUTDYNRSCSCPEYFCEOHGVUQEHAEVYBLVVFXCWFGFGEU");
    msg.rssi = 0.4671267064838045;
    msg.integrity = 39585U;

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
    msg.setTimeStamp(0.3238213069375927);
    msg.setSource(24770U);
    msg.setSourceEntity(233U);
    msg.setDestination(59223U);
    msg.setDestinationEntity(62U);
    msg.peer.assign("HIUNRYILLSNZCOQJQXRBXMWWMZGIYPDPTPVCEIKOTUJERKFOFOVBKGJBALVUEWCSRBCGZJJOQGAWDCWYSUPYFEDNVCKBVAMYANOT");
    msg.rssi = 0.8718271423716882;
    msg.integrity = 53972U;

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
    msg.setTimeStamp(0.24607721030874075);
    msg.setSource(27349U);
    msg.setSourceEntity(26U);
    msg.setDestination(63326U);
    msg.setDestinationEntity(17U);
    msg.value = -6073;

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
    msg.setTimeStamp(0.4912764013033404);
    msg.setSource(35700U);
    msg.setSourceEntity(20U);
    msg.setDestination(46633U);
    msg.setDestinationEntity(74U);
    msg.value = -25610;

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
    msg.setTimeStamp(0.45654273241819465);
    msg.setSource(2701U);
    msg.setSourceEntity(158U);
    msg.setDestination(15324U);
    msg.setDestinationEntity(21U);
    msg.value = -2116;

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
    msg.setTimeStamp(0.9047237471103974);
    msg.setSource(7608U);
    msg.setSourceEntity(170U);
    msg.setDestination(15494U);
    msg.setDestinationEntity(191U);
    msg.value = 0.6692475698378003;

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
    msg.setTimeStamp(0.8614981741376636);
    msg.setSource(24837U);
    msg.setSourceEntity(52U);
    msg.setDestination(14543U);
    msg.setDestinationEntity(40U);
    msg.value = 0.7134535630255177;

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
    msg.setTimeStamp(0.6604630524534498);
    msg.setSource(64468U);
    msg.setSourceEntity(26U);
    msg.setDestination(28238U);
    msg.setDestinationEntity(154U);
    msg.value = 0.8252027253213572;

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
    msg.setTimeStamp(0.41990771654637304);
    msg.setSource(10564U);
    msg.setSourceEntity(189U);
    msg.setDestination(20597U);
    msg.setDestinationEntity(56U);
    msg.value = 0.5461834470062926;

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
    msg.setTimeStamp(0.5905122528843969);
    msg.setSource(17669U);
    msg.setSourceEntity(2U);
    msg.setDestination(9257U);
    msg.setDestinationEntity(159U);
    msg.value = 0.9396319746092692;

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
    msg.setTimeStamp(0.4824095193688499);
    msg.setSource(62674U);
    msg.setSourceEntity(104U);
    msg.setDestination(3333U);
    msg.setDestinationEntity(132U);
    msg.value = 0.3751881274633466;

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
    msg.setTimeStamp(0.10094386604946903);
    msg.setSource(26980U);
    msg.setSourceEntity(17U);
    msg.setDestination(63033U);
    msg.setDestinationEntity(159U);
    msg.validity = 37278U;
    msg.type = 58U;
    msg.utc_year = 38725U;
    msg.utc_month = 54U;
    msg.utc_day = 10U;
    msg.utc_time = 0.23747334733813819;
    msg.lat = 0.7110092036167255;
    msg.lon = 0.3773231562758983;
    msg.height = 0.08497963870613101;
    msg.satellites = 108U;
    msg.cog = 0.7865184226614239;
    msg.sog = 0.9649090182549472;
    msg.hdop = 0.9339826294014532;
    msg.vdop = 0.5638423188605174;
    msg.hacc = 0.5977125268767078;
    msg.vacc = 0.8210402205013692;

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
    msg.setTimeStamp(0.7514624496850355);
    msg.setSource(26522U);
    msg.setSourceEntity(20U);
    msg.setDestination(21027U);
    msg.setDestinationEntity(154U);
    msg.validity = 25729U;
    msg.type = 191U;
    msg.utc_year = 39420U;
    msg.utc_month = 193U;
    msg.utc_day = 153U;
    msg.utc_time = 0.4161452119806007;
    msg.lat = 0.25583527891094326;
    msg.lon = 0.5884931220371361;
    msg.height = 0.5256364395940402;
    msg.satellites = 227U;
    msg.cog = 0.1556879088014984;
    msg.sog = 0.9106407031325282;
    msg.hdop = 0.035312940884809185;
    msg.vdop = 0.21092896996917865;
    msg.hacc = 0.6954155017599207;
    msg.vacc = 0.41218292894804176;

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
    msg.setTimeStamp(0.40697386631453036);
    msg.setSource(51001U);
    msg.setSourceEntity(150U);
    msg.setDestination(20422U);
    msg.setDestinationEntity(138U);
    msg.validity = 61759U;
    msg.type = 147U;
    msg.utc_year = 14671U;
    msg.utc_month = 231U;
    msg.utc_day = 145U;
    msg.utc_time = 0.9306993524670198;
    msg.lat = 0.42999993432028205;
    msg.lon = 0.46211946635634693;
    msg.height = 0.6865692888351311;
    msg.satellites = 207U;
    msg.cog = 0.9231807837143142;
    msg.sog = 0.5065099442254332;
    msg.hdop = 0.1684342751416359;
    msg.vdop = 0.610342828779827;
    msg.hacc = 0.33225600365909014;
    msg.vacc = 0.5020308187725573;

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
    msg.setTimeStamp(0.8517816351198237);
    msg.setSource(23195U);
    msg.setSourceEntity(162U);
    msg.setDestination(8880U);
    msg.setDestinationEntity(199U);
    msg.time = 0.912844487980937;
    msg.phi = 0.2919894615483545;
    msg.theta = 0.10293550498156112;
    msg.psi = 0.42552298480515927;
    msg.psi_magnetic = 0.6998263889019075;

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
    msg.setTimeStamp(0.3341726429628328);
    msg.setSource(51500U);
    msg.setSourceEntity(73U);
    msg.setDestination(3937U);
    msg.setDestinationEntity(48U);
    msg.time = 0.7993669751688872;
    msg.phi = 0.8138643642869545;
    msg.theta = 0.5051991640365702;
    msg.psi = 0.8578456967342807;
    msg.psi_magnetic = 0.7058152495717559;

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
    msg.setTimeStamp(0.3695996529315463);
    msg.setSource(54929U);
    msg.setSourceEntity(26U);
    msg.setDestination(59239U);
    msg.setDestinationEntity(130U);
    msg.time = 0.12435383935389877;
    msg.phi = 0.5155200572434472;
    msg.theta = 0.02662342993423239;
    msg.psi = 0.6554655243026037;
    msg.psi_magnetic = 0.06554167357472651;

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
    msg.setTimeStamp(0.8978784676194944);
    msg.setSource(55355U);
    msg.setSourceEntity(250U);
    msg.setDestination(56084U);
    msg.setDestinationEntity(118U);
    msg.time = 0.7992086531820152;
    msg.x = 0.5462855331574746;
    msg.y = 0.05934170922027737;
    msg.z = 0.28173826592329343;
    msg.timestep = 0.38439863751080516;

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
    msg.setTimeStamp(0.25416854082421947);
    msg.setSource(13789U);
    msg.setSourceEntity(185U);
    msg.setDestination(637U);
    msg.setDestinationEntity(165U);
    msg.time = 0.7183424964728714;
    msg.x = 0.4835936291434487;
    msg.y = 0.345780696648639;
    msg.z = 0.7312565436506738;
    msg.timestep = 0.11880868772010234;

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
    msg.setTimeStamp(0.11808777256833802);
    msg.setSource(42947U);
    msg.setSourceEntity(141U);
    msg.setDestination(33183U);
    msg.setDestinationEntity(250U);
    msg.time = 0.3921138022060392;
    msg.x = 0.7588589209006401;
    msg.y = 0.5411189273143568;
    msg.z = 0.9429892641436491;
    msg.timestep = 0.7954535325133195;

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
    msg.setTimeStamp(0.7043788596701673);
    msg.setSource(57016U);
    msg.setSourceEntity(72U);
    msg.setDestination(63799U);
    msg.setDestinationEntity(247U);
    msg.time = 0.8557482689266513;
    msg.x = 0.8177029655341721;
    msg.y = 0.0975621336485708;
    msg.z = 0.5928179717035669;

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
    msg.setTimeStamp(0.6702424697805801);
    msg.setSource(7517U);
    msg.setSourceEntity(47U);
    msg.setDestination(29799U);
    msg.setDestinationEntity(38U);
    msg.time = 0.7655739504807433;
    msg.x = 0.6938420819761117;
    msg.y = 0.9988376130842547;
    msg.z = 0.4251423342672185;

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
    msg.setTimeStamp(0.6948838484733937);
    msg.setSource(27179U);
    msg.setSourceEntity(246U);
    msg.setDestination(6544U);
    msg.setDestinationEntity(70U);
    msg.time = 0.3673247439931582;
    msg.x = 0.34056959648748797;
    msg.y = 0.37478211622130453;
    msg.z = 0.3104194321751549;

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
    msg.setTimeStamp(0.07577002859409632);
    msg.setSource(28655U);
    msg.setSourceEntity(250U);
    msg.setDestination(15547U);
    msg.setDestinationEntity(45U);
    msg.time = 0.5633041266946437;
    msg.x = 0.3399224241197891;
    msg.y = 0.9457286112902644;
    msg.z = 0.03769225013011657;

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
    msg.setTimeStamp(0.004527760101731615);
    msg.setSource(16953U);
    msg.setSourceEntity(21U);
    msg.setDestination(60536U);
    msg.setDestinationEntity(235U);
    msg.time = 0.009216948350601384;
    msg.x = 0.12566987501879212;
    msg.y = 0.010405932677971075;
    msg.z = 0.34962006019231895;

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
    msg.setTimeStamp(0.239879429241994);
    msg.setSource(64933U);
    msg.setSourceEntity(59U);
    msg.setDestination(23771U);
    msg.setDestinationEntity(176U);
    msg.time = 0.8587693312493586;
    msg.x = 0.6991481597014707;
    msg.y = 0.581574169145017;
    msg.z = 0.12830272985936841;

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
    msg.setTimeStamp(0.2863631187295905);
    msg.setSource(20474U);
    msg.setSourceEntity(67U);
    msg.setDestination(25246U);
    msg.setDestinationEntity(231U);
    msg.time = 0.8581752858188217;
    msg.x = 0.062059053297636946;
    msg.y = 0.04664986672231264;
    msg.z = 0.3600476165856008;

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
    msg.setTimeStamp(0.7018050116713263);
    msg.setSource(43792U);
    msg.setSourceEntity(45U);
    msg.setDestination(21417U);
    msg.setDestinationEntity(132U);
    msg.time = 0.6343923398079137;
    msg.x = 0.2191911840787617;
    msg.y = 0.7342583993123416;
    msg.z = 0.1552729979905343;

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
    msg.setTimeStamp(0.34257547389932774);
    msg.setSource(17657U);
    msg.setSourceEntity(186U);
    msg.setDestination(21005U);
    msg.setDestinationEntity(249U);
    msg.time = 0.2778317708838741;
    msg.x = 0.6151093873949394;
    msg.y = 0.9614831343730674;
    msg.z = 0.9430018521054251;

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
    msg.setTimeStamp(0.7069650734606414);
    msg.setSource(4075U);
    msg.setSourceEntity(241U);
    msg.setDestination(61122U);
    msg.setDestinationEntity(152U);
    msg.validity = 146U;
    msg.x = 0.824455910015312;
    msg.y = 0.7502380292878842;
    msg.z = 0.8127055658731838;

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
    msg.setTimeStamp(0.16904182482651975);
    msg.setSource(60198U);
    msg.setSourceEntity(26U);
    msg.setDestination(62076U);
    msg.setDestinationEntity(199U);
    msg.validity = 4U;
    msg.x = 0.9552257372932217;
    msg.y = 0.419000906413428;
    msg.z = 0.16710664746665993;

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
    msg.setTimeStamp(0.7839991761118434);
    msg.setSource(48363U);
    msg.setSourceEntity(123U);
    msg.setDestination(18014U);
    msg.setDestinationEntity(133U);
    msg.validity = 220U;
    msg.x = 0.4284028055734821;
    msg.y = 0.17663324398632785;
    msg.z = 0.9426183817999776;

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
    msg.setTimeStamp(0.07887708310565766);
    msg.setSource(43913U);
    msg.setSourceEntity(168U);
    msg.setDestination(65409U);
    msg.setDestinationEntity(104U);
    msg.validity = 203U;
    msg.x = 0.610732662225903;
    msg.y = 0.7925151451255823;
    msg.z = 0.12707130328767202;

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
    msg.setTimeStamp(0.02735508616891902);
    msg.setSource(11603U);
    msg.setSourceEntity(141U);
    msg.setDestination(47710U);
    msg.setDestinationEntity(125U);
    msg.validity = 137U;
    msg.x = 0.6570557750402172;
    msg.y = 0.5662776501248818;
    msg.z = 0.8614371414855224;

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
    msg.setTimeStamp(0.4792913760921268);
    msg.setSource(49055U);
    msg.setSourceEntity(37U);
    msg.setDestination(58706U);
    msg.setDestinationEntity(107U);
    msg.validity = 26U;
    msg.x = 0.091845710884923;
    msg.y = 0.8394245263785602;
    msg.z = 0.9190605847719537;

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
    msg.setTimeStamp(0.6282009355265715);
    msg.setSource(32348U);
    msg.setSourceEntity(9U);
    msg.setDestination(23861U);
    msg.setDestinationEntity(245U);
    msg.time = 0.34232695702987836;
    msg.x = 0.5408396123448544;
    msg.y = 0.4400032366069415;
    msg.z = 0.9330079322317092;

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
    msg.setTimeStamp(0.10758935531802694);
    msg.setSource(11992U);
    msg.setSourceEntity(232U);
    msg.setDestination(5228U);
    msg.setDestinationEntity(219U);
    msg.time = 0.13961562313318032;
    msg.x = 0.9064433330842947;
    msg.y = 0.865716015505066;
    msg.z = 0.34461695141645965;

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
    msg.setTimeStamp(0.47713947885717745);
    msg.setSource(62374U);
    msg.setSourceEntity(121U);
    msg.setDestination(36199U);
    msg.setDestinationEntity(245U);
    msg.time = 0.16081645298222924;
    msg.x = 0.8773419330454082;
    msg.y = 0.43023839299337163;
    msg.z = 0.7786713898107361;

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
    msg.setTimeStamp(0.9543790941578799);
    msg.setSource(31530U);
    msg.setSourceEntity(124U);
    msg.setDestination(53986U);
    msg.setDestinationEntity(203U);
    msg.validity = 153U;
    msg.value = 0.4619622345748804;

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
    msg.setTimeStamp(0.6260737958410524);
    msg.setSource(33074U);
    msg.setSourceEntity(76U);
    msg.setDestination(3956U);
    msg.setDestinationEntity(159U);
    msg.validity = 48U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6160016218597542;
    tmp_msg_0.y = 0.3597130917090855;
    tmp_msg_0.z = 0.21235319027728317;
    tmp_msg_0.phi = 0.21446122442471383;
    tmp_msg_0.theta = 0.23514056664235472;
    tmp_msg_0.psi = 0.672198710131561;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.943932317263913;

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
    msg.setTimeStamp(0.0034382832402735097);
    msg.setSource(3926U);
    msg.setSourceEntity(69U);
    msg.setDestination(43022U);
    msg.setDestinationEntity(39U);
    msg.validity = 226U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8220433795326924;
    tmp_msg_0.y = 0.0454737741686525;
    tmp_msg_0.z = 0.45882967374178685;
    tmp_msg_0.phi = 0.7363539478091863;
    tmp_msg_0.theta = 0.6451489754220162;
    tmp_msg_0.psi = 0.39372561083932867;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.03383749206326203;

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
    msg.setTimeStamp(0.38995489034870867);
    msg.setSource(50885U);
    msg.setSourceEntity(47U);
    msg.setDestination(53118U);
    msg.setDestinationEntity(149U);
    msg.value = 0.5294835626280715;

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
    msg.setTimeStamp(0.48961067204530995);
    msg.setSource(16448U);
    msg.setSourceEntity(108U);
    msg.setDestination(52247U);
    msg.setDestinationEntity(191U);
    msg.value = 0.2724726437979269;

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
    msg.setTimeStamp(0.46442242018038227);
    msg.setSource(12634U);
    msg.setSourceEntity(161U);
    msg.setDestination(30779U);
    msg.setDestinationEntity(162U);
    msg.value = 0.026152891999621675;

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
    msg.setTimeStamp(0.7387893151497102);
    msg.setSource(10947U);
    msg.setSourceEntity(194U);
    msg.setDestination(48821U);
    msg.setDestinationEntity(216U);
    msg.value = 0.82815773359386;

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
    msg.setTimeStamp(0.15057144402143974);
    msg.setSource(50931U);
    msg.setSourceEntity(50U);
    msg.setDestination(8375U);
    msg.setDestinationEntity(247U);
    msg.value = 0.6764206305042256;

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
    msg.setTimeStamp(0.7390008817254895);
    msg.setSource(40816U);
    msg.setSourceEntity(111U);
    msg.setDestination(6631U);
    msg.setDestinationEntity(130U);
    msg.value = 0.00792352840922761;

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
    msg.setTimeStamp(0.07718592497899213);
    msg.setSource(30416U);
    msg.setSourceEntity(158U);
    msg.setDestination(10739U);
    msg.setDestinationEntity(214U);
    msg.value = 0.23087120102807435;

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
    msg.setTimeStamp(0.6214521264223216);
    msg.setSource(18793U);
    msg.setSourceEntity(144U);
    msg.setDestination(16242U);
    msg.setDestinationEntity(74U);
    msg.value = 0.2915278963829607;

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
    msg.setTimeStamp(0.6438505113779571);
    msg.setSource(33312U);
    msg.setSourceEntity(218U);
    msg.setDestination(43478U);
    msg.setDestinationEntity(93U);
    msg.value = 0.5155511876766111;

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
    msg.setTimeStamp(0.8881022117949421);
    msg.setSource(57754U);
    msg.setSourceEntity(107U);
    msg.setDestination(45818U);
    msg.setDestinationEntity(84U);
    msg.value = 0.18421661494074948;

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
    msg.setTimeStamp(0.11283588112563747);
    msg.setSource(10764U);
    msg.setSourceEntity(42U);
    msg.setDestination(30952U);
    msg.setDestinationEntity(194U);
    msg.value = 0.7385680567828655;

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
    msg.setTimeStamp(0.09712649595308864);
    msg.setSource(14000U);
    msg.setSourceEntity(233U);
    msg.setDestination(58289U);
    msg.setDestinationEntity(229U);
    msg.value = 0.3778460048799973;

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
    msg.setTimeStamp(0.26453186505880244);
    msg.setSource(863U);
    msg.setSourceEntity(94U);
    msg.setDestination(4339U);
    msg.setDestinationEntity(175U);
    msg.value = 0.4461641724861164;

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
    msg.setTimeStamp(0.1449600738262259);
    msg.setSource(6972U);
    msg.setSourceEntity(36U);
    msg.setDestination(16388U);
    msg.setDestinationEntity(40U);
    msg.value = 0.6732569879513576;

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
    msg.setTimeStamp(0.5009995708204386);
    msg.setSource(752U);
    msg.setSourceEntity(30U);
    msg.setDestination(1757U);
    msg.setDestinationEntity(171U);
    msg.value = 0.7770721482580792;

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
    msg.setTimeStamp(0.7609300578131976);
    msg.setSource(50328U);
    msg.setSourceEntity(17U);
    msg.setDestination(9177U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8307115410837319;

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
    msg.setTimeStamp(0.9291572370025712);
    msg.setSource(4530U);
    msg.setSourceEntity(139U);
    msg.setDestination(24930U);
    msg.setDestinationEntity(100U);
    msg.value = 0.001068798514278102;

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
    msg.setTimeStamp(0.32369162671570584);
    msg.setSource(43355U);
    msg.setSourceEntity(169U);
    msg.setDestination(6262U);
    msg.setDestinationEntity(59U);
    msg.value = 0.38097937455433184;

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
    msg.setTimeStamp(0.11968072735634094);
    msg.setSource(46078U);
    msg.setSourceEntity(195U);
    msg.setDestination(9400U);
    msg.setDestinationEntity(108U);
    msg.value = 0.4866978594171645;

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
    msg.setTimeStamp(0.5287559349553645);
    msg.setSource(32870U);
    msg.setSourceEntity(83U);
    msg.setDestination(59137U);
    msg.setDestinationEntity(187U);
    msg.value = 0.9898497491619666;

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
    msg.setTimeStamp(0.5621421112157984);
    msg.setSource(30625U);
    msg.setSourceEntity(141U);
    msg.setDestination(55265U);
    msg.setDestinationEntity(186U);
    msg.value = 0.5140539170994854;

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
    msg.setTimeStamp(0.8525410446796686);
    msg.setSource(37051U);
    msg.setSourceEntity(48U);
    msg.setDestination(31003U);
    msg.setDestinationEntity(219U);
    msg.value = 0.3527725990804135;

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
    msg.setTimeStamp(0.9645338146425674);
    msg.setSource(38368U);
    msg.setSourceEntity(162U);
    msg.setDestination(55332U);
    msg.setDestinationEntity(158U);
    msg.value = 0.11583036919977918;

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
    msg.setTimeStamp(0.32102962966044246);
    msg.setSource(51375U);
    msg.setSourceEntity(162U);
    msg.setDestination(9690U);
    msg.setDestinationEntity(213U);
    msg.value = 0.345739003853363;

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
    msg.setTimeStamp(0.9746745507531916);
    msg.setSource(12240U);
    msg.setSourceEntity(245U);
    msg.setDestination(17471U);
    msg.setDestinationEntity(103U);
    msg.direction = 0.23811394902614058;
    msg.speed = 0.15138049533721853;
    msg.turbulence = 0.788136140118781;

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
    msg.setTimeStamp(0.05825082071814036);
    msg.setSource(34096U);
    msg.setSourceEntity(21U);
    msg.setDestination(205U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.13095265307312254;
    msg.speed = 0.42600559428040485;
    msg.turbulence = 0.6641998269435789;

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
    msg.setTimeStamp(0.2214470955137008);
    msg.setSource(29910U);
    msg.setSourceEntity(62U);
    msg.setDestination(39044U);
    msg.setDestinationEntity(151U);
    msg.direction = 0.2410303304354774;
    msg.speed = 0.9880815631644554;
    msg.turbulence = 0.86594177016142;

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
    msg.setTimeStamp(0.4337292290110256);
    msg.setSource(51671U);
    msg.setSourceEntity(55U);
    msg.setDestination(24006U);
    msg.setDestinationEntity(71U);
    msg.value = 0.8746615788533014;

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
    msg.setTimeStamp(0.6749647990952137);
    msg.setSource(47946U);
    msg.setSourceEntity(229U);
    msg.setDestination(40518U);
    msg.setDestinationEntity(136U);
    msg.value = 0.015443338483313696;

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
    msg.setTimeStamp(0.5462822767511851);
    msg.setSource(34U);
    msg.setSourceEntity(63U);
    msg.setDestination(31239U);
    msg.setDestinationEntity(212U);
    msg.value = 0.2160837484938597;

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
    msg.setTimeStamp(0.03532649648543684);
    msg.setSource(8536U);
    msg.setSourceEntity(84U);
    msg.setDestination(35264U);
    msg.setDestinationEntity(186U);
    msg.value.assign("PZZDWVWRUDFYQJFXTHYTYQXMLKTOMOBPKODKRVTHQQCBEPTPHJAVURNZNDDWLIYTRMHCXFUUNREPSNCSXCDYTGFQICOSLLMICEBEIKDYSKMOSFRVASFINXIEOGZIWTMXQAC");

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
    msg.setTimeStamp(0.5011073087293433);
    msg.setSource(42366U);
    msg.setSourceEntity(71U);
    msg.setDestination(23635U);
    msg.setDestinationEntity(129U);
    msg.value.assign("PEIPMIZMXYCSNCKKYVSWIAI");

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
    msg.setTimeStamp(0.7422455077554586);
    msg.setSource(14337U);
    msg.setSourceEntity(152U);
    msg.setDestination(27046U);
    msg.setDestinationEntity(35U);
    msg.value.assign("TMWPRQYHIP");

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
    msg.setTimeStamp(0.8833828526957147);
    msg.setSource(23043U);
    msg.setSourceEntity(178U);
    msg.setDestination(56532U);
    msg.setDestinationEntity(12U);
    const char tmp_msg_0[] = {-53, 17, 66, 19, -33, 10, 101, 9, 108, 88, 13, 5, -73, 118, 107, -46, -107, -102, -25, -82, -95, 21, -43, 84, 79, 87, 54, 35, -12, -77, 36, 108, -71, 102, 30, 43, 60, 35, 31, 125, 118, -31, -85, -108, -121, -13, -61, 35, 118, 122, 19, 117, -40, 104, -26, -40, -112, -79, 90, 37, 84, -128, -90, 93, 31, 66, 56, 95, 41, -81, -82, 39, -10, -98, 17, 14, 86, 107, -34, -10, -95, -22, -112, 42, -103, -65, 119, -66, -29, -108, -1, 91, -111, 101, 27, -19, 100, -60, 57, 16, 56, -66, 46, -84, -72, 24, -63, 69, 126, 24, -65, 56, -128, -31, 33, 101, 17, 95, -78, -82, 108, 102, 28};
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
    msg.setTimeStamp(0.03764444345067153);
    msg.setSource(51721U);
    msg.setSourceEntity(190U);
    msg.setDestination(41251U);
    msg.setDestinationEntity(73U);
    const char tmp_msg_0[] = {31, -9, 98, -118, 82, 73, -50, -123, -82, -66, 74, -80, 87, 10, 85, 38, -38, -88, -89, -16, 126, -80, 2, 89, 25, 103, -26, 111, 33, -88, 18, -39, -109, -88, 50, 95, -120, 14, -30, 69, 92, 109, 73, 27, -4, -97, 124, 71, -103, 7, 78, -76, -40, -41, 78, -73, -109, -5, 46, 105, 14, -9, -2, -39, 41, 71, -55, 124, 85, 121, -29, -98, -72, -52, -82, -25, -42, 40, -24, -111, -24, -63, -31, -114, 53, -52, -10, -50, 124, 122, -68, -38, -103, 61, -51, 14, -41, -63, 80, 62, -109, 111, -125, -96, -128, -69, -39, 2, 76, -125, 57, -79, -26, 103, -81, 30, -38, -115, 33, -39, 34, 113, 20, 86, 9, 68, 88, 21, 28, 123, -4, -90, 84, 98, -53, 122, -33, -80, 26, -79, 73, -56, 105, 34, -127, 51, 66, -3, -69, -110, -1, 82, -5, -21, 13, -76, 95, -17, 54, -14, 82, 26, -78, 9, 18, 16, -61, -13, 22, 122, 120, -97, 103, -6, -107, -68, 35, 45, 64, -22, -95, -106, -84, -107, 11, -94, -18, -108, 67, 17, -121, -116, 91, 22, 115, 61, -53, 58, 37, -74, -29, -35, -48, 109, 64, 17, 16, 93, 76, 103};
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
    msg.setTimeStamp(0.27465661041256495);
    msg.setSource(27781U);
    msg.setSourceEntity(214U);
    msg.setDestination(36611U);
    msg.setDestinationEntity(126U);
    const char tmp_msg_0[] = {115, -7, 104, 27, 29, 9, -46, -112, 59, -90, 95, 40, 118, -107, -30, 76, 67, 124, 55, 20, 76, 2, -17, -120, -99, -24, -16, 64, 36, -61, 71, 44, 71, -19, -67, -47, 77, 10, -85, 85, 96, -33, -27, -125, 25, -19, 46, 97, -11, 121, 28, -9, -46, -78, 103, -113, -95, -23, -52, 48, -111, 35, -70, -118, -37, -17, 94, 18, -99, -75, 79, 17, -3, 117, 81, 98, 104, -109, -96, 29, -36, -13, 97, -17, -74, -29, 12, 70, -10, -19, -126, 100, -23, -41, -108, 87, -89, 60, -106, 98, -60, -37, 2, -59, -14, 63, 58, 108, -54, -90};
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
    msg.setTimeStamp(0.5873551121504083);
    msg.setSource(3465U);
    msg.setSourceEntity(176U);
    msg.setDestination(52373U);
    msg.setDestinationEntity(17U);
    msg.label.assign("NCTEGFAAQDXRECIFZFBMJYOJMJEIUATCSK");
    msg.x = 0.3039616890793039;
    msg.y = 0.955578218519469;
    msg.z = 0.852187427935691;

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
    msg.setTimeStamp(0.9238592623334183);
    msg.setSource(45532U);
    msg.setSourceEntity(181U);
    msg.setDestination(22952U);
    msg.setDestinationEntity(159U);
    msg.label.assign("RUQIAMOXGOFDTVQWCJKZRVRQEPSWTUVTUSVXYHHIIVNCMXWPSOQWTOQRGLFDUHPEANYSYAPTSKRTZXFJSLGGBTIKNKCGA");
    msg.x = 0.2025069958589718;
    msg.y = 0.9413127532033081;
    msg.z = 0.8187126558200057;

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
    msg.setTimeStamp(0.1534723244839027);
    msg.setSource(47592U);
    msg.setSourceEntity(44U);
    msg.setDestination(24408U);
    msg.setDestinationEntity(228U);
    msg.label.assign("UULNCJJYYXKTRLJHOWVGMQLVNYUEBJLUOQPNCNQEWYVGUFSFGTLGDDXMXUZPBZRBSVF");
    msg.x = 0.4608689030296297;
    msg.y = 0.47379961041252583;
    msg.z = 0.3574701512743669;

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
    msg.setTimeStamp(0.16541401262561262);
    msg.setSource(58828U);
    msg.setSourceEntity(27U);
    msg.setDestination(18752U);
    msg.setDestinationEntity(224U);
    msg.type = 197U;
    msg.frequency = 1517577128U;
    msg.min_range = 27974U;
    msg.max_range = 17214U;
    msg.bits_per_point = 79U;
    msg.scale_factor = 0.802357935864214;
    const char tmp_msg_0[] = {118, -112, -66, -121, 17, -125, 24, 117, -111, -48, 47, -24, -112, 62, 33};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.6367029080256095);
    msg.setSource(7022U);
    msg.setSourceEntity(10U);
    msg.setDestination(39419U);
    msg.setDestinationEntity(62U);
    msg.type = 96U;
    msg.frequency = 3468830648U;
    msg.min_range = 18217U;
    msg.max_range = 31573U;
    msg.bits_per_point = 63U;
    msg.scale_factor = 0.00945063932717416;
    const char tmp_msg_0[] = {-43, 55, -50, -52, -121, -1, -51, 99, 64, -48, -122, -78, -32, -36, 75, -87, 81, -61, -121, 24, -100, 97, 94, 52, 67, -77, 100, 40, 59, 116, 121, -114, 23, 25, -78, 13, -100, 31, 114, -118, -3, 92, 76, 12, -116, 112, -122, 4, -69, -72, -40, -31, 115, -68, -19, 105, 107, -9, 105, 106, 86, -115, 113, 10, 102, -65, 28, 17, 4, 82, -11, -97, 125, 76, -74, -88, 118, 124, 22, 25, -120, -16, -13, 102, -77, -33, -113, 106, 42, -117, -117, 29, -97, 113, 62, -116, -118, -118, 74, -7, 31, -56, -35, 39, -91, 33, 85, 116, -97, -101, -111, 39, 120, 29, 63, -45, -112, 30, 21, -115, -100, 104, -95, 44, 18, -66, 94, -66, -11, 38, -33, -103, -35, -79};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.7290656370815422);
    msg.setSource(11304U);
    msg.setSourceEntity(195U);
    msg.setDestination(14363U);
    msg.setDestinationEntity(80U);
    msg.type = 108U;
    msg.frequency = 2762627446U;
    msg.min_range = 45449U;
    msg.max_range = 16034U;
    msg.bits_per_point = 226U;
    msg.scale_factor = 0.8817112351840749;
    const char tmp_msg_0[] = {-56, 73, -123, -119, 24, 111, 26, -38, -64, -9, -1, -97, -55, 97, -25};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.5812545529649258);
    msg.setSource(27507U);
    msg.setSourceEntity(244U);
    msg.setDestination(11764U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.5866865023970192);
    msg.setSource(12694U);
    msg.setSourceEntity(244U);
    msg.setDestination(51608U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.17495920893679462);
    msg.setSource(24633U);
    msg.setSourceEntity(53U);
    msg.setDestination(41803U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.9142690405311781);
    msg.setSource(28463U);
    msg.setSourceEntity(61U);
    msg.setDestination(14175U);
    msg.setDestinationEntity(47U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.5838622263860057);
    msg.setSource(54926U);
    msg.setSourceEntity(218U);
    msg.setDestination(49206U);
    msg.setDestinationEntity(188U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.07358502195007077);
    msg.setSource(52604U);
    msg.setSourceEntity(113U);
    msg.setDestination(43433U);
    msg.setDestinationEntity(253U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.8270063653881945);
    msg.setSource(44000U);
    msg.setSourceEntity(220U);
    msg.setDestination(32867U);
    msg.setDestinationEntity(94U);
    msg.value = 0.21305424724496547;
    msg.confidence = 0.9482545438993534;
    msg.opmodes.assign("RKBEKOMOKOGAFT");

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
    msg.setTimeStamp(0.37269871137219024);
    msg.setSource(15187U);
    msg.setSourceEntity(144U);
    msg.setDestination(46469U);
    msg.setDestinationEntity(20U);
    msg.value = 0.6429034170778324;
    msg.confidence = 0.36947596138609107;
    msg.opmodes.assign("MRDVKETGFQEPLYMWTAXIXVATULAQWVBJEADUNGWUCBKMEGAMOMJKOIGAGCXQKAWUNMRPNKCRAGBYHVPRRHKVLNZSVTFLQZLBVZONZNBFMQPXBEUQRCLWYSHSRYJRXCZKFCTLTGRSDASUZSKIIRODHOCAULNHLIDWGKEPIPIFQJHGHOMCTZYBEUMHXVJYGOEYXTXVNJPTBBYOSZIBODUTEISFPHQJXWXWZQNDNFFYL");

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
    msg.setTimeStamp(0.8053762501733396);
    msg.setSource(46486U);
    msg.setSourceEntity(58U);
    msg.setDestination(50906U);
    msg.setDestinationEntity(126U);
    msg.value = 0.9897917916545186;
    msg.confidence = 0.6793385413183552;
    msg.opmodes.assign("AORXPIWJUELVHEWHVPTUOFNDIKITGTOTQLRHO");

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
    msg.setTimeStamp(0.7894629761375095);
    msg.setSource(8865U);
    msg.setSourceEntity(148U);
    msg.setDestination(61709U);
    msg.setDestinationEntity(24U);
    msg.itow = 3067221282U;
    msg.lat = 0.6744055656399294;
    msg.lon = 0.7865840468332266;
    msg.height_ell = 0.22143412958569775;
    msg.height_sea = 0.03789119013347997;
    msg.hacc = 0.563180339182917;
    msg.vacc = 0.2181571415328818;
    msg.vel_n = 0.09449394417531187;
    msg.vel_e = 0.7875549372610107;
    msg.vel_d = 0.8315130764592776;
    msg.speed = 0.5900343971953589;
    msg.gspeed = 0.6987802613436691;
    msg.heading = 0.08424714048258453;
    msg.sacc = 0.3048182282680223;
    msg.cacc = 0.6192171707800402;

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
    msg.setTimeStamp(0.19044763765302264);
    msg.setSource(31504U);
    msg.setSourceEntity(143U);
    msg.setDestination(48557U);
    msg.setDestinationEntity(247U);
    msg.itow = 1998618100U;
    msg.lat = 0.8949736007506651;
    msg.lon = 0.03210132272048427;
    msg.height_ell = 0.3899662735932127;
    msg.height_sea = 0.8902749734587205;
    msg.hacc = 0.1479401331393445;
    msg.vacc = 0.13432331641265904;
    msg.vel_n = 0.9243004691129458;
    msg.vel_e = 0.08435006554066382;
    msg.vel_d = 0.7519341159772154;
    msg.speed = 0.7278179319805475;
    msg.gspeed = 0.5533980832976957;
    msg.heading = 0.7665488461188249;
    msg.sacc = 0.883081340471445;
    msg.cacc = 0.02521582704809544;

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
    msg.setTimeStamp(0.5125516487509341);
    msg.setSource(46612U);
    msg.setSourceEntity(81U);
    msg.setDestination(49082U);
    msg.setDestinationEntity(170U);
    msg.itow = 1496969494U;
    msg.lat = 0.43039831017236796;
    msg.lon = 0.13007948940420888;
    msg.height_ell = 0.42076868871750417;
    msg.height_sea = 0.41009245085260104;
    msg.hacc = 0.6305159936399399;
    msg.vacc = 0.9511522280564824;
    msg.vel_n = 0.007658271647508319;
    msg.vel_e = 0.27066681970635165;
    msg.vel_d = 0.8531527707771542;
    msg.speed = 0.31972724809433795;
    msg.gspeed = 0.7161056386352631;
    msg.heading = 0.5251556520391405;
    msg.sacc = 0.5919385686889406;
    msg.cacc = 0.6344861015994485;

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
    msg.setTimeStamp(0.24811692070421099);
    msg.setSource(53376U);
    msg.setSourceEntity(248U);
    msg.setDestination(53403U);
    msg.setDestinationEntity(130U);
    msg.id = 131U;
    msg.value = 0.25253219808968674;

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
    msg.setTimeStamp(0.9014732529904411);
    msg.setSource(19727U);
    msg.setSourceEntity(243U);
    msg.setDestination(6312U);
    msg.setDestinationEntity(41U);
    msg.id = 186U;
    msg.value = 0.10560876430396648;

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
    msg.setTimeStamp(0.8814186441793506);
    msg.setSource(52518U);
    msg.setSourceEntity(178U);
    msg.setDestination(58932U);
    msg.setDestinationEntity(171U);
    msg.id = 27U;
    msg.value = 0.8248918258583493;

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
    msg.setTimeStamp(0.6838341618397438);
    msg.setSource(8088U);
    msg.setSourceEntity(190U);
    msg.setDestination(23647U);
    msg.setDestinationEntity(237U);
    msg.x = 0.4700131325152034;
    msg.y = 0.3642112652755698;
    msg.z = 0.15940104250648435;
    msg.phi = 0.007608702758376218;
    msg.theta = 0.24720737712440977;
    msg.psi = 0.6652606077984403;

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
    msg.setTimeStamp(0.42092559191986023);
    msg.setSource(4371U);
    msg.setSourceEntity(93U);
    msg.setDestination(23133U);
    msg.setDestinationEntity(107U);
    msg.x = 0.8468774992436403;
    msg.y = 0.2581212842032291;
    msg.z = 0.5620693374027005;
    msg.phi = 0.8133681678818084;
    msg.theta = 0.13046467419076202;
    msg.psi = 0.18383751242487523;

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
    msg.setTimeStamp(0.4930795107437088);
    msg.setSource(31533U);
    msg.setSourceEntity(95U);
    msg.setDestination(7615U);
    msg.setDestinationEntity(193U);
    msg.x = 0.8420801571971792;
    msg.y = 0.9750138571391929;
    msg.z = 0.21716134659603048;
    msg.phi = 0.41447396316806406;
    msg.theta = 0.5869003147318612;
    msg.psi = 0.07836417853808275;

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
    msg.setTimeStamp(0.8687737797274716);
    msg.setSource(63395U);
    msg.setSourceEntity(67U);
    msg.setDestination(37602U);
    msg.setDestinationEntity(226U);
    msg.beam_width = 0.32473165507333646;
    msg.beam_height = 0.23261541158074073;

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
    msg.setTimeStamp(0.42319469647426455);
    msg.setSource(51490U);
    msg.setSourceEntity(252U);
    msg.setDestination(18963U);
    msg.setDestinationEntity(111U);
    msg.beam_width = 0.8692266646996428;
    msg.beam_height = 0.7965267190341582;

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
    msg.setTimeStamp(0.16995625294402417);
    msg.setSource(16048U);
    msg.setSourceEntity(85U);
    msg.setDestination(50847U);
    msg.setDestinationEntity(128U);
    msg.beam_width = 0.4209131026193361;
    msg.beam_height = 0.08187828504106864;

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
    msg.setTimeStamp(0.48974979925516315);
    msg.setSource(48284U);
    msg.setSourceEntity(115U);
    msg.setDestination(30747U);
    msg.setDestinationEntity(88U);
    msg.sane = 62U;

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
    msg.setTimeStamp(0.9341828189722876);
    msg.setSource(3457U);
    msg.setSourceEntity(96U);
    msg.setDestination(55402U);
    msg.setDestinationEntity(237U);
    msg.sane = 238U;

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
    msg.setTimeStamp(0.7490834382077617);
    msg.setSource(20345U);
    msg.setSourceEntity(2U);
    msg.setDestination(14398U);
    msg.setDestinationEntity(146U);
    msg.sane = 212U;

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
    msg.setTimeStamp(0.49846161738543837);
    msg.setSource(57675U);
    msg.setSourceEntity(218U);
    msg.setDestination(32613U);
    msg.setDestinationEntity(151U);
    msg.value = 0.7534030856796079;

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
    msg.setTimeStamp(0.5186567528166136);
    msg.setSource(42521U);
    msg.setSourceEntity(65U);
    msg.setDestination(14370U);
    msg.setDestinationEntity(41U);
    msg.value = 0.8260742376737756;

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
    msg.setTimeStamp(0.285760391649604);
    msg.setSource(8918U);
    msg.setSourceEntity(12U);
    msg.setDestination(62236U);
    msg.setDestinationEntity(153U);
    msg.value = 0.8420691647095059;

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
    msg.setTimeStamp(0.615250810552384);
    msg.setSource(46057U);
    msg.setSourceEntity(124U);
    msg.setDestination(278U);
    msg.setDestinationEntity(66U);
    msg.value = 0.5510547644453795;

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
    msg.setTimeStamp(0.29600777520665134);
    msg.setSource(4261U);
    msg.setSourceEntity(125U);
    msg.setDestination(45162U);
    msg.setDestinationEntity(8U);
    msg.value = 0.12595361590671206;

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
    msg.setTimeStamp(0.2867063024725278);
    msg.setSource(19231U);
    msg.setSourceEntity(229U);
    msg.setDestination(28511U);
    msg.setDestinationEntity(238U);
    msg.value = 0.46565168524826894;

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
    msg.setTimeStamp(0.8222032216883399);
    msg.setSource(26791U);
    msg.setSourceEntity(231U);
    msg.setDestination(11034U);
    msg.setDestinationEntity(244U);
    msg.value = 0.6318775195587016;

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
    msg.setTimeStamp(0.14971423451086951);
    msg.setSource(16665U);
    msg.setSourceEntity(243U);
    msg.setDestination(44354U);
    msg.setDestinationEntity(37U);
    msg.value = 0.5172681778240341;

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
    msg.setTimeStamp(0.1510240020316419);
    msg.setSource(38758U);
    msg.setSourceEntity(118U);
    msg.setDestination(40555U);
    msg.setDestinationEntity(128U);
    msg.value = 0.8966472446893083;

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
    msg.setTimeStamp(0.6086372125175246);
    msg.setSource(26477U);
    msg.setSourceEntity(105U);
    msg.setDestination(26638U);
    msg.setDestinationEntity(114U);
    msg.value = 0.8090500407475516;

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
    msg.setTimeStamp(0.2709513591620172);
    msg.setSource(22122U);
    msg.setSourceEntity(81U);
    msg.setDestination(17841U);
    msg.setDestinationEntity(183U);
    msg.value = 0.8660016642960108;

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
    msg.setTimeStamp(0.9326875331290123);
    msg.setSource(4127U);
    msg.setSourceEntity(156U);
    msg.setDestination(20379U);
    msg.setDestinationEntity(30U);
    msg.value = 0.06905098469322568;

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
    msg.setTimeStamp(0.19422586240297302);
    msg.setSource(27302U);
    msg.setSourceEntity(70U);
    msg.setDestination(10050U);
    msg.setDestinationEntity(216U);
    msg.value = 0.4809916548754193;

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
    msg.setTimeStamp(0.19972259721909646);
    msg.setSource(57447U);
    msg.setSourceEntity(214U);
    msg.setDestination(37871U);
    msg.setDestinationEntity(50U);
    msg.value = 0.11477251895668017;

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
    msg.setTimeStamp(0.4403605251455015);
    msg.setSource(56174U);
    msg.setSourceEntity(242U);
    msg.setDestination(6664U);
    msg.setDestinationEntity(57U);
    msg.value = 0.6114105144511732;

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
    msg.setTimeStamp(0.3141047565520618);
    msg.setSource(30220U);
    msg.setSourceEntity(108U);
    msg.setDestination(51721U);
    msg.setDestinationEntity(212U);
    msg.value = 0.015252228430836845;

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
    msg.setTimeStamp(0.10270477734888017);
    msg.setSource(6338U);
    msg.setSourceEntity(242U);
    msg.setDestination(29454U);
    msg.setDestinationEntity(208U);
    msg.value = 0.3674669834945625;

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
    msg.setTimeStamp(0.5697170262855324);
    msg.setSource(7732U);
    msg.setSourceEntity(46U);
    msg.setDestination(40445U);
    msg.setDestinationEntity(127U);
    msg.value = 0.6903137165213243;

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
    msg.setTimeStamp(0.28318758991814597);
    msg.setSource(50321U);
    msg.setSourceEntity(169U);
    msg.setDestination(52775U);
    msg.setDestinationEntity(229U);
    msg.value = 0.7011293036451045;

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
    msg.setTimeStamp(0.18497553026233549);
    msg.setSource(35419U);
    msg.setSourceEntity(245U);
    msg.setDestination(15784U);
    msg.setDestinationEntity(96U);
    msg.value = 0.04721759604497533;

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
    msg.setTimeStamp(0.5775852634098088);
    msg.setSource(41265U);
    msg.setSourceEntity(160U);
    msg.setDestination(59848U);
    msg.setDestinationEntity(196U);
    msg.value = 0.936818511397446;

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
    msg.setTimeStamp(0.247542670997016);
    msg.setSource(45526U);
    msg.setSourceEntity(96U);
    msg.setDestination(60212U);
    msg.setDestinationEntity(186U);
    msg.value = 0.11326106926447821;

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
    msg.setTimeStamp(0.4268708425717116);
    msg.setSource(46447U);
    msg.setSourceEntity(102U);
    msg.setDestination(1294U);
    msg.setDestinationEntity(75U);
    msg.value = 0.9723191382657008;

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
    msg.setTimeStamp(0.6421794858331896);
    msg.setSource(29739U);
    msg.setSourceEntity(3U);
    msg.setDestination(48978U);
    msg.setDestinationEntity(68U);
    msg.value = 0.2090947643859724;

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
    msg.setTimeStamp(0.520035203177456);
    msg.setSource(6435U);
    msg.setSourceEntity(204U);
    msg.setDestination(9420U);
    msg.setDestinationEntity(76U);
    msg.validity = 35864U;
    msg.type = 236U;
    msg.tow = 1343460333U;
    msg.base_lat = 0.04863480856557689;
    msg.base_lon = 0.2639421302543624;
    msg.base_height = 0.26002617746439516;
    msg.n = 0.3516094024375802;
    msg.e = 0.03899229700593465;
    msg.d = 0.12148094388438646;
    msg.v_n = 0.48544163415834696;
    msg.v_e = 0.9683910196945344;
    msg.v_d = 0.07413066766593901;
    msg.satellites = 228U;
    msg.iar_hyp = 26901U;
    msg.iar_ratio = 0.25582856493380035;

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
    msg.setTimeStamp(0.93141732519196);
    msg.setSource(56242U);
    msg.setSourceEntity(5U);
    msg.setDestination(64389U);
    msg.setDestinationEntity(243U);
    msg.validity = 62952U;
    msg.type = 100U;
    msg.tow = 1658487619U;
    msg.base_lat = 0.10176331414729822;
    msg.base_lon = 0.07992236264096242;
    msg.base_height = 0.7671611426807832;
    msg.n = 0.9540837132177659;
    msg.e = 0.5381092608599448;
    msg.d = 0.8792326632634468;
    msg.v_n = 0.26228677206239104;
    msg.v_e = 0.018414477463419288;
    msg.v_d = 0.03328167898233947;
    msg.satellites = 238U;
    msg.iar_hyp = 19351U;
    msg.iar_ratio = 0.07231026738532909;

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
    msg.setTimeStamp(0.3738039681941111);
    msg.setSource(32684U);
    msg.setSourceEntity(234U);
    msg.setDestination(18438U);
    msg.setDestinationEntity(77U);
    msg.validity = 11313U;
    msg.type = 178U;
    msg.tow = 697329182U;
    msg.base_lat = 0.6307854195580364;
    msg.base_lon = 0.8692896972790735;
    msg.base_height = 0.42849101376480836;
    msg.n = 0.25752422483407045;
    msg.e = 0.47536370172744213;
    msg.d = 0.8386370962573458;
    msg.v_n = 0.013102095107203504;
    msg.v_e = 0.3418913588844863;
    msg.v_d = 0.8393812350122344;
    msg.satellites = 175U;
    msg.iar_hyp = 24693U;
    msg.iar_ratio = 0.46422272287417665;

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
    msg.setTimeStamp(0.470119107100637);
    msg.setSource(8484U);
    msg.setSourceEntity(213U);
    msg.setDestination(18085U);
    msg.setDestinationEntity(198U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5389656186300826;
    tmp_msg_0.lon = 0.8718885761832816;
    tmp_msg_0.height = 0.4354390578191185;
    tmp_msg_0.x = 0.14162486986741785;
    tmp_msg_0.y = 0.5971475278647742;
    tmp_msg_0.z = 0.4196869860643534;
    tmp_msg_0.phi = 0.9701188460389379;
    tmp_msg_0.theta = 0.17894639177858673;
    tmp_msg_0.psi = 0.8715563631897447;
    tmp_msg_0.u = 0.4126936952445365;
    tmp_msg_0.v = 0.8166825991052784;
    tmp_msg_0.w = 0.43563790221300636;
    tmp_msg_0.vx = 0.1598521382097039;
    tmp_msg_0.vy = 0.3721652122154101;
    tmp_msg_0.vz = 0.2655562266700727;
    tmp_msg_0.p = 0.20554455725640963;
    tmp_msg_0.q = 0.7765879475187614;
    tmp_msg_0.r = 0.3717909891549005;
    tmp_msg_0.depth = 0.8720583857281199;
    tmp_msg_0.alt = 0.9487347049752796;
    msg.state.set(tmp_msg_0);
    msg.type = 166U;

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
    msg.setTimeStamp(0.15966992850999762);
    msg.setSource(19144U);
    msg.setSourceEntity(201U);
    msg.setDestination(56536U);
    msg.setDestinationEntity(118U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.016855890077429714;
    tmp_msg_0.lon = 0.027353942100727613;
    tmp_msg_0.height = 0.6637420802325535;
    tmp_msg_0.x = 0.47094772293560705;
    tmp_msg_0.y = 0.6374117532952789;
    tmp_msg_0.z = 0.9198471234110112;
    tmp_msg_0.phi = 0.22032193258582877;
    tmp_msg_0.theta = 0.2863818388308015;
    tmp_msg_0.psi = 0.7547371453133761;
    tmp_msg_0.u = 0.12339566109197941;
    tmp_msg_0.v = 0.22428953056450862;
    tmp_msg_0.w = 0.9222234063004607;
    tmp_msg_0.vx = 0.3794840008581012;
    tmp_msg_0.vy = 0.7902648727848357;
    tmp_msg_0.vz = 0.5114142708938468;
    tmp_msg_0.p = 0.9819195661771423;
    tmp_msg_0.q = 0.7609612621907035;
    tmp_msg_0.r = 0.6341814246716143;
    tmp_msg_0.depth = 0.9927649227841703;
    tmp_msg_0.alt = 0.9837557024465587;
    msg.state.set(tmp_msg_0);
    msg.type = 3U;

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
    msg.setTimeStamp(0.20732759167283699);
    msg.setSource(41640U);
    msg.setSourceEntity(39U);
    msg.setDestination(6630U);
    msg.setDestinationEntity(239U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6116035591022063;
    tmp_msg_0.lon = 0.6714215420895558;
    tmp_msg_0.height = 0.008993092063677155;
    tmp_msg_0.x = 0.7393775596991414;
    tmp_msg_0.y = 0.2851314368778267;
    tmp_msg_0.z = 0.7806658990231619;
    tmp_msg_0.phi = 0.14846815175213735;
    tmp_msg_0.theta = 0.777574703473137;
    tmp_msg_0.psi = 0.0284930372267449;
    tmp_msg_0.u = 0.9727043671430219;
    tmp_msg_0.v = 0.36638613096052963;
    tmp_msg_0.w = 0.0777845370470418;
    tmp_msg_0.vx = 0.8502344872174632;
    tmp_msg_0.vy = 0.6300019349331614;
    tmp_msg_0.vz = 0.3107675718766988;
    tmp_msg_0.p = 0.7999906597277083;
    tmp_msg_0.q = 0.5139796523598961;
    tmp_msg_0.r = 0.4280456554293315;
    tmp_msg_0.depth = 0.6441452385398654;
    tmp_msg_0.alt = 0.4633583625196809;
    msg.state.set(tmp_msg_0);
    msg.type = 42U;

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
    msg.setTimeStamp(0.29707936634333953);
    msg.setSource(23267U);
    msg.setSourceEntity(93U);
    msg.setDestination(8107U);
    msg.setDestinationEntity(210U);
    msg.value = 0.9575349791498834;

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
    msg.setTimeStamp(0.15153094296263048);
    msg.setSource(21510U);
    msg.setSourceEntity(226U);
    msg.setDestination(56664U);
    msg.setDestinationEntity(41U);
    msg.value = 0.5992586647129838;

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
    msg.setTimeStamp(0.4375859557097673);
    msg.setSource(26020U);
    msg.setSourceEntity(92U);
    msg.setDestination(37181U);
    msg.setDestinationEntity(1U);
    msg.value = 0.5203935000640669;

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
    msg.setTimeStamp(0.7870299783748644);
    msg.setSource(60956U);
    msg.setSourceEntity(28U);
    msg.setDestination(56460U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6970280676502404;

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
    msg.setTimeStamp(0.21753107130438398);
    msg.setSource(19457U);
    msg.setSourceEntity(149U);
    msg.setDestination(44224U);
    msg.setDestinationEntity(30U);
    msg.value = 0.7844129363933168;

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
    msg.setTimeStamp(0.7516243476303526);
    msg.setSource(9573U);
    msg.setSourceEntity(248U);
    msg.setDestination(27878U);
    msg.setDestinationEntity(69U);
    msg.value = 0.24321922185581124;

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
    msg.setTimeStamp(0.4791957957151882);
    msg.setSource(58165U);
    msg.setSourceEntity(133U);
    msg.setDestination(64526U);
    msg.setDestinationEntity(151U);
    msg.value = 0.7440675168787472;

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
    msg.setTimeStamp(0.2130906927580689);
    msg.setSource(14276U);
    msg.setSourceEntity(54U);
    msg.setDestination(52858U);
    msg.setDestinationEntity(162U);
    msg.value = 0.06312078317941694;

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
    msg.setTimeStamp(0.9610187432283492);
    msg.setSource(65289U);
    msg.setSourceEntity(222U);
    msg.setDestination(26263U);
    msg.setDestinationEntity(210U);
    msg.value = 0.5068890643921139;

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
    msg.setTimeStamp(0.021122726431897054);
    msg.setSource(36441U);
    msg.setSourceEntity(69U);
    msg.setDestination(51022U);
    msg.setDestinationEntity(54U);
    msg.value = 0.0762816313927065;

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
    msg.setTimeStamp(0.18174308047693877);
    msg.setSource(11558U);
    msg.setSourceEntity(71U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(148U);
    msg.value = 0.6963756426678405;

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
    msg.setTimeStamp(0.20241327191477398);
    msg.setSource(4024U);
    msg.setSourceEntity(218U);
    msg.setDestination(64722U);
    msg.setDestinationEntity(230U);
    msg.value = 0.6592389641397977;

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
    msg.setTimeStamp(0.3843995167773152);
    msg.setSource(54008U);
    msg.setSourceEntity(22U);
    msg.setDestination(7579U);
    msg.setDestinationEntity(73U);
    msg.value = 0.40168533554816443;

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
    msg.setTimeStamp(0.5850982298043982);
    msg.setSource(33928U);
    msg.setSourceEntity(33U);
    msg.setDestination(26749U);
    msg.setDestinationEntity(57U);
    msg.value = 0.27963308249044805;

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
    msg.setTimeStamp(0.8228548552317176);
    msg.setSource(31282U);
    msg.setSourceEntity(24U);
    msg.setDestination(34013U);
    msg.setDestinationEntity(125U);
    msg.value = 0.6771929411081842;

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
    msg.setTimeStamp(0.30921171174672357);
    msg.setSource(17652U);
    msg.setSourceEntity(211U);
    msg.setDestination(22872U);
    msg.setDestinationEntity(214U);
    msg.id = 127U;
    msg.zoom = 80U;
    msg.action = 169U;

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
    msg.setTimeStamp(0.12552779790682878);
    msg.setSource(43394U);
    msg.setSourceEntity(179U);
    msg.setDestination(8906U);
    msg.setDestinationEntity(19U);
    msg.id = 227U;
    msg.zoom = 111U;
    msg.action = 252U;

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
    msg.setTimeStamp(0.10833757474084005);
    msg.setSource(52255U);
    msg.setSourceEntity(128U);
    msg.setDestination(42134U);
    msg.setDestinationEntity(128U);
    msg.id = 100U;
    msg.zoom = 104U;
    msg.action = 226U;

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
    msg.setTimeStamp(0.03448035941872385);
    msg.setSource(52241U);
    msg.setSourceEntity(17U);
    msg.setDestination(14181U);
    msg.setDestinationEntity(141U);
    msg.id = 229U;
    msg.value = 0.7385173475077985;

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
    msg.setTimeStamp(0.50424799528996);
    msg.setSource(20493U);
    msg.setSourceEntity(0U);
    msg.setDestination(24615U);
    msg.setDestinationEntity(199U);
    msg.id = 32U;
    msg.value = 0.8859172119732508;

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
    msg.setTimeStamp(0.601025678605378);
    msg.setSource(44073U);
    msg.setSourceEntity(35U);
    msg.setDestination(60563U);
    msg.setDestinationEntity(43U);
    msg.id = 38U;
    msg.value = 0.1638942782014039;

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
    msg.setTimeStamp(0.32200533399668296);
    msg.setSource(45406U);
    msg.setSourceEntity(58U);
    msg.setDestination(18405U);
    msg.setDestinationEntity(21U);
    msg.id = 138U;
    msg.value = 0.5760842863042928;

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
    msg.setTimeStamp(0.8923642135188119);
    msg.setSource(55083U);
    msg.setSourceEntity(111U);
    msg.setDestination(34472U);
    msg.setDestinationEntity(139U);
    msg.id = 108U;
    msg.value = 0.6807548524090308;

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
    msg.setTimeStamp(0.1311396882094833);
    msg.setSource(34336U);
    msg.setSourceEntity(90U);
    msg.setDestination(57130U);
    msg.setDestinationEntity(21U);
    msg.id = 21U;
    msg.value = 0.29050239542297296;

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
    msg.setTimeStamp(0.20397521088342896);
    msg.setSource(50558U);
    msg.setSourceEntity(173U);
    msg.setDestination(45708U);
    msg.setDestinationEntity(52U);
    msg.id = 126U;
    msg.angle = 0.32629819969061036;

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
    msg.setTimeStamp(0.725285272601066);
    msg.setSource(18252U);
    msg.setSourceEntity(107U);
    msg.setDestination(36232U);
    msg.setDestinationEntity(208U);
    msg.id = 119U;
    msg.angle = 0.8621819941570051;

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
    msg.setTimeStamp(0.6590359690434117);
    msg.setSource(43584U);
    msg.setSourceEntity(44U);
    msg.setDestination(51967U);
    msg.setDestinationEntity(38U);
    msg.id = 2U;
    msg.angle = 0.5208461966595603;

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
    msg.setTimeStamp(0.05244784860606144);
    msg.setSource(19390U);
    msg.setSourceEntity(113U);
    msg.setDestination(40569U);
    msg.setDestinationEntity(185U);
    msg.op = 113U;
    msg.actions.assign("HYJGPOQYWJMKJUDNZTFCYOAGVDJLBAYKEWHFJVBTEGZYKHPDCMICTVBAOPDHMQWWBOMLPUGGNTQQHE");

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
    msg.setTimeStamp(0.7172573384023812);
    msg.setSource(47943U);
    msg.setSourceEntity(180U);
    msg.setDestination(4579U);
    msg.setDestinationEntity(241U);
    msg.op = 90U;
    msg.actions.assign("SGJRNEMVNACSQVETIAZSAPCUXLKUXACQTVVTIRFQIZZNQESRWDQNJMOZGBTRVHFALKGIKFHBXSRUJAFOHSSNBZULACQ");

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
    msg.setTimeStamp(0.10811201233931855);
    msg.setSource(13164U);
    msg.setSourceEntity(189U);
    msg.setDestination(33032U);
    msg.setDestinationEntity(210U);
    msg.op = 22U;
    msg.actions.assign("OHKEUWNWURGYMHCFKMDCXFTAYVRIJODJRNGGLYSTLFHNVLHOAUKQGWLWVLZTMZOHPMBCXNEJHPALIFVRLIUAPUMDPUDEGKIE");

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
    msg.setTimeStamp(0.8958537943011335);
    msg.setSource(35192U);
    msg.setSourceEntity(134U);
    msg.setDestination(33298U);
    msg.setDestinationEntity(177U);
    msg.actions.assign("AXVQJEAWAOESFRGNGGSSZRXKVLYBZPKOTELJXPDGOLYDVMUGZHOYOYIRHSRDBPUDEVWFPLVFCALTKSVTXFNGZBKKBMWCISMMBPBWWRJHUYRDJXUFCKEWOHDQSJKAXGAPLLTVKEGJNBQUEHPZHAFMWTQRJGTQIYUTBEIBFZNLKYEHPOEAYGRWQQCVRMDCNTLXCDFCSXILYRJXQPSIINFCHQFOMMPVJHOXTCDWIKONN");

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
    msg.setTimeStamp(0.46161753097868075);
    msg.setSource(41589U);
    msg.setSourceEntity(57U);
    msg.setDestination(3159U);
    msg.setDestinationEntity(227U);
    msg.actions.assign("QWJDKCTDEMFBREQPMINKBZQUBIJJGHHTLKGJWXWLGCGFMXWOGPLYVDOMKPKFQQLUTIZDWYUTGUPMYCNFGYEKOXAXILOIYKOEKOHIV");

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
    msg.setTimeStamp(0.9875836557732222);
    msg.setSource(39091U);
    msg.setSourceEntity(154U);
    msg.setDestination(57138U);
    msg.setDestinationEntity(199U);
    msg.actions.assign("DBUEHJZOAWKJXEJXLIHNJTKUZEQXSDMJNCVQDTXRJALHSHPPVFARZMNKCWKCDBIGIBFMTYTOASIETWPRKCFUQBZOFGFLKOEIVUNQQLQWGYTYYHTPNCMYRLIDONCIESSNYVBVF");

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
    msg.setTimeStamp(0.07461523006223592);
    msg.setSource(30519U);
    msg.setSourceEntity(1U);
    msg.setDestination(58211U);
    msg.setDestinationEntity(31U);
    msg.button = 29U;
    msg.value = 20U;

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
    msg.setTimeStamp(0.7529217501343531);
    msg.setSource(34125U);
    msg.setSourceEntity(26U);
    msg.setDestination(17646U);
    msg.setDestinationEntity(170U);
    msg.button = 123U;
    msg.value = 98U;

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
    msg.setTimeStamp(0.24913606751696626);
    msg.setSource(22428U);
    msg.setSourceEntity(231U);
    msg.setDestination(61175U);
    msg.setDestinationEntity(197U);
    msg.button = 249U;
    msg.value = 188U;

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
    msg.setTimeStamp(0.5461146264602691);
    msg.setSource(37942U);
    msg.setSourceEntity(87U);
    msg.setDestination(31462U);
    msg.setDestinationEntity(111U);
    msg.op = 52U;
    msg.text.assign("NCNJLPAZREJW");

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
    msg.setTimeStamp(0.5812444779471679);
    msg.setSource(60797U);
    msg.setSourceEntity(53U);
    msg.setDestination(61248U);
    msg.setDestinationEntity(127U);
    msg.op = 131U;
    msg.text.assign("BLKWTXZGPUHRYVGENZFLVBIRDMMYKKYFOSMBPCBVECQYMIVFFXJFTJZNAOZNZCKGALTZCDACCCYSAYOAUJXIRRNOQVQEKNKSZPKEEVZTBSNJJOHCCJMQWWUSIHWXOXALVSHDRDMQUBIFWTGPEVLFBDZJEPQDXLYRRWKIUTETRDGJDFHGYUXSLHPFTHBWIVL");

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
    msg.setTimeStamp(0.4288363962242687);
    msg.setSource(23606U);
    msg.setSourceEntity(84U);
    msg.setDestination(5352U);
    msg.setDestinationEntity(198U);
    msg.op = 142U;
    msg.text.assign("AGWKGUCZSMMWJFHRHFTMRNMIRUNRVJQLSEEPHNBJELUFFNLLTOPJNQGYIBSECKXCWMYUOHJRYDKXYFSWYABAUOVBXOUBZMNDVUAUYEQFHKXPQTOAHNIZTKLHQNCZLVDKTYMSJFOWPVHRDWGPKQEYOPTZKEOEQSZTSDNGRPQIJVXSNPBXPRFEACGVOVDJHV");

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
    msg.setTimeStamp(0.7186923094198806);
    msg.setSource(63660U);
    msg.setSourceEntity(4U);
    msg.setDestination(25538U);
    msg.setDestinationEntity(138U);
    msg.op = 120U;
    msg.time_remain = 0.6479889750171329;
    msg.sched_time = 0.8411167853356434;

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
    msg.setTimeStamp(0.5722756318881428);
    msg.setSource(2794U);
    msg.setSourceEntity(74U);
    msg.setDestination(12841U);
    msg.setDestinationEntity(112U);
    msg.op = 78U;
    msg.time_remain = 0.24671518360731837;
    msg.sched_time = 0.6170528527568551;

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
    msg.setTimeStamp(0.12214618602004901);
    msg.setSource(20433U);
    msg.setSourceEntity(236U);
    msg.setDestination(54038U);
    msg.setDestinationEntity(28U);
    msg.op = 4U;
    msg.time_remain = 0.7153512147865462;
    msg.sched_time = 0.9588542943034025;

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
    msg.setTimeStamp(0.7245776389991213);
    msg.setSource(2412U);
    msg.setSourceEntity(129U);
    msg.setDestination(49044U);
    msg.setDestinationEntity(92U);
    msg.name.assign("NZMTEGWXHCYRYRTADSNFSNBPNLRJUXDTHXWWYYSTPMEVPPLPGVMGODEZFYKGLPXBCUKUDGHBQKZIVSRNLQXMFBQPNTVGEIQBVNMZFHUIUOHNJ");
    msg.op = 114U;
    msg.sched_time = 0.9473954033527264;

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
    msg.setTimeStamp(0.5357255618300408);
    msg.setSource(12214U);
    msg.setSourceEntity(62U);
    msg.setDestination(24414U);
    msg.setDestinationEntity(251U);
    msg.name.assign("WJLPGLSXUWOMICLLBLBXYCORBBSZYEDGGZSHGKSMGTRXOGTZPIYAQNPQDSRDKUGAOFRVCFLCEWFPHJHWAPWAUEXZMVEUTSDNVOZQFLMZJQRFYZJHAWUWMJMNQWUDKTVTLOCWSEOENDYKPUXEADCPNNTQYXCXOIOHCMKJLIAHKBSTSBDBEHJAQYUQXTBVUEPQYIHNRFCKVZGYNVNIJHBPNFVTFKEDTWMZRZLKUDIRFJVRAGYKIHCO");
    msg.op = 164U;
    msg.sched_time = 0.9284541923204113;

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
    msg.setTimeStamp(0.12488385247997136);
    msg.setSource(57726U);
    msg.setSourceEntity(164U);
    msg.setDestination(54550U);
    msg.setDestinationEntity(153U);
    msg.name.assign("VIIEMTNSIIVLCNTOOCFSEFZDHYRVVAWCHWQQVQJQQMJTNJFSZBAFSYTLNQTBDCGISSMJPUADUXYBRIOGCBYHTHZAMMNMQEHRKOSOGGXRCAOGEWNLLXYWRPWLGEFGCGWLDEOIZL");
    msg.op = 90U;
    msg.sched_time = 0.5317859718607337;

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
    msg.setTimeStamp(0.04684296984876224);
    msg.setSource(38228U);
    msg.setSourceEntity(118U);
    msg.setDestination(19413U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.13320351716904744);
    msg.setSource(31144U);
    msg.setSourceEntity(238U);
    msg.setDestination(31064U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.23912503587087053);
    msg.setSource(29174U);
    msg.setSourceEntity(63U);
    msg.setDestination(47714U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.35752831115487615);
    msg.setSource(21847U);
    msg.setSourceEntity(106U);
    msg.setDestination(47541U);
    msg.setDestinationEntity(138U);
    msg.name.assign("HGZWNKUNIPNIJSQFHNARCIARCGOJBYAGBSIWQXOSLMZSFCNPNCHMSISTFVJQBWXBLGJKAAGZTGXRJPCVNXWUDPIRQLMJCVPLXDDCDFYFBMKQMTTWXUYZL");
    msg.state = 112U;

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
    msg.setTimeStamp(0.2669003965861073);
    msg.setSource(41043U);
    msg.setSourceEntity(66U);
    msg.setDestination(42953U);
    msg.setDestinationEntity(31U);
    msg.name.assign("OWLNLOYCPLWRNEAOWNPYTMUCHLKKPGBISSIXWPUQIKUNWLGUEOBAOBZNWYTJSRRCHENZV");
    msg.state = 195U;

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
    msg.setTimeStamp(0.6918741659294323);
    msg.setSource(35911U);
    msg.setSourceEntity(107U);
    msg.setDestination(47421U);
    msg.setDestinationEntity(127U);
    msg.name.assign("OIIFAGZCKTEOUXNAIROEQCTHWGQTQAPLZUTXBSPFTBMRSQNHIXXFRDPODBPLPDDOHLUXOJLCKYGIREDNHQUYISWEVWJKJJSZPRXXYSXNAOBUOZLPFCVNKLKZQWHGDIPJUGPHN");
    msg.state = 22U;

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
    msg.setTimeStamp(0.10642606810170796);
    msg.setSource(17711U);
    msg.setSourceEntity(236U);
    msg.setDestination(44418U);
    msg.setDestinationEntity(94U);
    msg.name.assign("PBNMYWLDRJVDGPHPBVUBXBDNLFEIDOOJSMAAQGCROBUHQAIUPPCGFLWZSEKYXVOKNCUEFOCYCAMUTNUOQJNSFVMCTTPII");
    msg.value = 35U;

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
    msg.setTimeStamp(0.9084767786804581);
    msg.setSource(56489U);
    msg.setSourceEntity(165U);
    msg.setDestination(44034U);
    msg.setDestinationEntity(34U);
    msg.name.assign("HQVXZWKAKSZMVLGSICPCLWRARUDPGWEXJASJXHJRPCMUUFIONOEAKPAQZMYXURQBQGUPZUKKIZEJRETIBECBPIMZZMNBUAWYNDHKMGCMAJBEZFTGCQLPROMNQVFXFIVYQWSKJRFXITATUTPONJFDMKXYWOKFLLCXSHBQGYODCOBFZAVVUHGHFLEQNBHKAEWDYSXDIBNHTONYDUP");
    msg.value = 18U;

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
    msg.setTimeStamp(0.9822869331363607);
    msg.setSource(31259U);
    msg.setSourceEntity(137U);
    msg.setDestination(62464U);
    msg.setDestinationEntity(66U);
    msg.name.assign("SIVXPNZUZMOPVQXI");
    msg.value = 218U;

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
    msg.setTimeStamp(0.966502171013864);
    msg.setSource(38067U);
    msg.setSourceEntity(188U);
    msg.setDestination(28333U);
    msg.setDestinationEntity(55U);
    msg.name.assign("RCGUBZZYTSGOJXGIQJJPOMAKQRUULPJGCNNVPTFVAQJVRBWOJZDAWBWUGFJGORNRKWKLCUQLLWJYUDLYOBIDHNSHPVEYLUXZEZQQQVISTFHKYPYMHODFCPACHHVEIPQFXBZSXTBOLSNCFEGPWHDRTDVQFNCCIXMBRNKVFFMMIWCKAUENKSWXHYYDBMTNKKJNUROEXBXDXWMYVIHIWKFD");

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
    msg.setTimeStamp(0.20856791009224818);
    msg.setSource(43531U);
    msg.setSourceEntity(77U);
    msg.setDestination(22447U);
    msg.setDestinationEntity(148U);
    msg.name.assign("JBFMKWGCVHEWBMKKXIYMRQLGLHKCNYVYHABAAUBSTAJPDTSMSMZMQWRXNNBXDYKPBDQGIQDWNOPTWRSGMZQAFIDZYPECPFCKLEVOEAGIQUOVAHOFTKUJTCUWKQPOBUHVLZHZVSXTVYUNDMFXYINPGRJNROLAVZRFTGTQMFXYHRGWWSWHSHJIRLIRWPEJYJZSSXDFTUEXYQMDCAFELVKULDZDLJVROPICCQCBNEONLNSJGZFHUABJOKE");

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
    msg.setTimeStamp(0.22708224127488663);
    msg.setSource(6160U);
    msg.setSourceEntity(137U);
    msg.setDestination(29727U);
    msg.setDestinationEntity(171U);
    msg.name.assign("JNSJEIYCJPCAFB");

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
    msg.setTimeStamp(0.7611370412335825);
    msg.setSource(64880U);
    msg.setSourceEntity(22U);
    msg.setDestination(19423U);
    msg.setDestinationEntity(99U);
    msg.name.assign("DVRADOMZHXKFVRKTFVDGEVAMQFQUZZGQBBXUVSNAOCKKCAUP");
    msg.value = 245U;

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
    msg.setTimeStamp(0.3768451479906839);
    msg.setSource(39223U);
    msg.setSourceEntity(73U);
    msg.setDestination(22150U);
    msg.setDestinationEntity(191U);
    msg.name.assign("EKDQFVKMLUTMLDXSNZJXOBCJNOBCGVWCOLPHXDEVXASDRYVPKGURRLCUOGXRFAHVQOAEEGTEFRATVAYPAFDMLADTDHIVXAIUEGFIARNWUPZUKBQMMQZHTHSWQNDULJKZPUJNGXOFWLYCMCQUFWIMHBOQ");
    msg.value = 228U;

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
    msg.setTimeStamp(0.18206814943939786);
    msg.setSource(13223U);
    msg.setSourceEntity(30U);
    msg.setDestination(27754U);
    msg.setDestinationEntity(217U);
    msg.name.assign("CAIYRXOEDLRQUCXZRQICADFUEHEXKBOOJWBGGFRWPVRPPCU");
    msg.value = 213U;

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
    msg.setTimeStamp(0.13717010127945894);
    msg.setSource(7141U);
    msg.setSourceEntity(137U);
    msg.setDestination(34433U);
    msg.setDestinationEntity(238U);
    msg.id = 68U;
    msg.period = 976372840U;
    msg.duty_cycle = 2470805498U;

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
    msg.setTimeStamp(0.6524647224203526);
    msg.setSource(18245U);
    msg.setSourceEntity(99U);
    msg.setDestination(11861U);
    msg.setDestinationEntity(3U);
    msg.id = 158U;
    msg.period = 435893755U;
    msg.duty_cycle = 921593289U;

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
    msg.setTimeStamp(0.013787142646040973);
    msg.setSource(29411U);
    msg.setSourceEntity(79U);
    msg.setDestination(18831U);
    msg.setDestinationEntity(202U);
    msg.id = 143U;
    msg.period = 163429409U;
    msg.duty_cycle = 1896515977U;

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
    msg.setTimeStamp(0.1546076103289461);
    msg.setSource(53154U);
    msg.setSourceEntity(93U);
    msg.setDestination(4885U);
    msg.setDestinationEntity(197U);
    msg.id = 77U;
    msg.period = 1701323914U;
    msg.duty_cycle = 2275779019U;

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
    msg.setTimeStamp(0.006674017278828881);
    msg.setSource(49841U);
    msg.setSourceEntity(233U);
    msg.setDestination(56129U);
    msg.setDestinationEntity(3U);
    msg.id = 98U;
    msg.period = 3842483216U;
    msg.duty_cycle = 1460294231U;

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
    msg.setTimeStamp(0.9233389072008344);
    msg.setSource(55954U);
    msg.setSourceEntity(180U);
    msg.setDestination(7238U);
    msg.setDestinationEntity(28U);
    msg.id = 235U;
    msg.period = 1724501514U;
    msg.duty_cycle = 2734550202U;

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
    msg.setTimeStamp(0.172534380079996);
    msg.setSource(34406U);
    msg.setSourceEntity(132U);
    msg.setDestination(62055U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.6523809121397243;
    msg.lon = 0.12521911561732346;
    msg.height = 0.02337377124732587;
    msg.x = 0.20641325275156297;
    msg.y = 0.5351615837640691;
    msg.z = 0.7048848851749538;
    msg.phi = 0.20825903116975375;
    msg.theta = 0.882557423090203;
    msg.psi = 0.429261480518466;
    msg.u = 0.18475187342585864;
    msg.v = 0.8455487971881501;
    msg.w = 0.9787423568307757;
    msg.vx = 0.19350943413388688;
    msg.vy = 0.3732049517296623;
    msg.vz = 0.4772137920742311;
    msg.p = 0.2064701374668616;
    msg.q = 0.9650232909600246;
    msg.r = 0.5194958428449612;
    msg.depth = 0.6209743380998042;
    msg.alt = 0.7696876961209431;

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
    msg.setTimeStamp(0.353921642969532);
    msg.setSource(49280U);
    msg.setSourceEntity(14U);
    msg.setDestination(40334U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.31262792985433485;
    msg.lon = 0.6110493510802013;
    msg.height = 0.5834708728728878;
    msg.x = 0.37401460123086927;
    msg.y = 0.26263611842130574;
    msg.z = 0.25842059970930686;
    msg.phi = 0.5354561763551041;
    msg.theta = 0.1965635922581096;
    msg.psi = 0.5756215952548845;
    msg.u = 0.36557570834468167;
    msg.v = 0.8512171104081582;
    msg.w = 0.39377293001773717;
    msg.vx = 0.5733428848026844;
    msg.vy = 0.07953283673371203;
    msg.vz = 0.7367893223322136;
    msg.p = 0.31726606844128546;
    msg.q = 0.5902800920059392;
    msg.r = 0.09595565211924917;
    msg.depth = 0.3763522963276853;
    msg.alt = 0.7435176487085687;

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
    msg.setTimeStamp(0.15322990131572245);
    msg.setSource(47209U);
    msg.setSourceEntity(193U);
    msg.setDestination(7228U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.2974350887250723;
    msg.lon = 0.6962759019116175;
    msg.height = 0.16957401602988653;
    msg.x = 0.26661582841884734;
    msg.y = 0.6784933486529041;
    msg.z = 0.1288021886686045;
    msg.phi = 0.7714124427578397;
    msg.theta = 0.47084044316876794;
    msg.psi = 0.37876153317777417;
    msg.u = 0.7458074365956125;
    msg.v = 0.34471829586222336;
    msg.w = 0.02991580174954933;
    msg.vx = 0.12889496105650633;
    msg.vy = 0.3140431200280672;
    msg.vz = 0.6659223649251698;
    msg.p = 0.8894904378031261;
    msg.q = 0.43298511331869616;
    msg.r = 0.5746117210046214;
    msg.depth = 0.3092429057559605;
    msg.alt = 0.7285220972699897;

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
    msg.setTimeStamp(0.38791128636474304);
    msg.setSource(42920U);
    msg.setSourceEntity(242U);
    msg.setDestination(17633U);
    msg.setDestinationEntity(54U);
    msg.x = 0.4713776803230443;
    msg.y = 0.10001049048609212;
    msg.z = 0.37712867620720303;

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
    msg.setTimeStamp(0.4898753398325929);
    msg.setSource(15267U);
    msg.setSourceEntity(225U);
    msg.setDestination(56641U);
    msg.setDestinationEntity(160U);
    msg.x = 0.6295571205194834;
    msg.y = 0.7508546080826689;
    msg.z = 0.5283745687586594;

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
    msg.setTimeStamp(0.023327051380154673);
    msg.setSource(38933U);
    msg.setSourceEntity(13U);
    msg.setDestination(20302U);
    msg.setDestinationEntity(122U);
    msg.x = 0.26083365432021444;
    msg.y = 0.09732021096225285;
    msg.z = 0.28931824604882583;

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
    msg.setTimeStamp(0.7968407356952644);
    msg.setSource(28756U);
    msg.setSourceEntity(205U);
    msg.setDestination(30534U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6736062888657172;

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
    msg.setTimeStamp(0.027213303703467084);
    msg.setSource(64533U);
    msg.setSourceEntity(42U);
    msg.setDestination(40512U);
    msg.setDestinationEntity(202U);
    msg.value = 0.37286862113598185;

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
    msg.setTimeStamp(0.12861059019944476);
    msg.setSource(28254U);
    msg.setSourceEntity(116U);
    msg.setDestination(57088U);
    msg.setDestinationEntity(169U);
    msg.value = 0.08495525407063853;

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
    msg.setTimeStamp(0.02237849714337581);
    msg.setSource(26772U);
    msg.setSourceEntity(41U);
    msg.setDestination(28023U);
    msg.setDestinationEntity(0U);
    msg.value = 0.9381477879175333;

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
    msg.setTimeStamp(0.2528444544030727);
    msg.setSource(29029U);
    msg.setSourceEntity(190U);
    msg.setDestination(52172U);
    msg.setDestinationEntity(32U);
    msg.value = 0.7927829348452852;

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
    msg.setTimeStamp(0.8089208616150426);
    msg.setSource(1997U);
    msg.setSourceEntity(132U);
    msg.setDestination(37460U);
    msg.setDestinationEntity(187U);
    msg.value = 0.027193211696966313;

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
    msg.setTimeStamp(0.5250334921182089);
    msg.setSource(28727U);
    msg.setSourceEntity(191U);
    msg.setDestination(59570U);
    msg.setDestinationEntity(196U);
    msg.x = 0.44906636522268817;
    msg.y = 0.972841035669851;
    msg.z = 0.32482237326488106;
    msg.phi = 0.2796935343999274;
    msg.theta = 0.2567493541941125;
    msg.psi = 0.941325552929073;
    msg.p = 0.5316464776469966;
    msg.q = 0.6333933100884698;
    msg.r = 0.8887464633677395;
    msg.u = 0.2521416780368023;
    msg.v = 0.9765725405541987;
    msg.w = 0.009554517019478292;
    msg.bias_psi = 0.11369376794969144;
    msg.bias_r = 0.6375573711349353;

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
    msg.setTimeStamp(0.3575001879174695);
    msg.setSource(19137U);
    msg.setSourceEntity(224U);
    msg.setDestination(63505U);
    msg.setDestinationEntity(168U);
    msg.x = 0.27304820533933905;
    msg.y = 0.7909696402006994;
    msg.z = 0.43499852854413334;
    msg.phi = 0.9356113302820364;
    msg.theta = 0.7747959905126846;
    msg.psi = 0.646645974217972;
    msg.p = 0.5223580998788141;
    msg.q = 0.8515209435028848;
    msg.r = 0.5528210687668691;
    msg.u = 0.3305791100515597;
    msg.v = 0.5159609528017575;
    msg.w = 0.16557604104085;
    msg.bias_psi = 0.7470105838962374;
    msg.bias_r = 0.6163984924011419;

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
    msg.setTimeStamp(0.7750882721363331);
    msg.setSource(20011U);
    msg.setSourceEntity(34U);
    msg.setDestination(52849U);
    msg.setDestinationEntity(59U);
    msg.x = 0.272028211729082;
    msg.y = 0.42639996811689207;
    msg.z = 0.9638753152197258;
    msg.phi = 0.2798162432743063;
    msg.theta = 0.16979463547242646;
    msg.psi = 0.9234153446104546;
    msg.p = 0.24234963065260617;
    msg.q = 0.9271752360248807;
    msg.r = 0.7826827020238992;
    msg.u = 0.4961036232530338;
    msg.v = 0.25469577878219585;
    msg.w = 0.9051139473097272;
    msg.bias_psi = 0.38400023578129816;
    msg.bias_r = 0.8701260558477212;

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
    msg.setTimeStamp(0.9330115521849146);
    msg.setSource(47226U);
    msg.setSourceEntity(19U);
    msg.setDestination(60290U);
    msg.setDestinationEntity(144U);
    msg.bias_psi = 0.48010657965606784;
    msg.bias_r = 0.1347094960071623;
    msg.cog = 0.051858924982722265;
    msg.cyaw = 0.12967154275122306;
    msg.lbl_rej_level = 0.3286247289632327;
    msg.gps_rej_level = 0.8686892661610209;
    msg.custom_x = 0.9583119130951954;
    msg.custom_y = 0.7073757352218853;
    msg.custom_z = 0.3126947342626114;

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
    msg.setTimeStamp(0.5126118053586154);
    msg.setSource(33311U);
    msg.setSourceEntity(245U);
    msg.setDestination(17968U);
    msg.setDestinationEntity(180U);
    msg.bias_psi = 0.3515260877359597;
    msg.bias_r = 0.3944613597216978;
    msg.cog = 0.5130544390658541;
    msg.cyaw = 0.08184678231577602;
    msg.lbl_rej_level = 0.6303904476074838;
    msg.gps_rej_level = 0.7899064254904439;
    msg.custom_x = 0.32257737300730893;
    msg.custom_y = 0.8702307576927298;
    msg.custom_z = 0.3686450342222256;

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
    msg.setTimeStamp(0.6085489027047117);
    msg.setSource(61584U);
    msg.setSourceEntity(217U);
    msg.setDestination(19418U);
    msg.setDestinationEntity(65U);
    msg.bias_psi = 0.16792755781547508;
    msg.bias_r = 0.8438013811410812;
    msg.cog = 0.3090830568052011;
    msg.cyaw = 0.5545645654005235;
    msg.lbl_rej_level = 0.11077229944666855;
    msg.gps_rej_level = 0.9230609155173456;
    msg.custom_x = 0.898526167886843;
    msg.custom_y = 0.9002280954313766;
    msg.custom_z = 0.1368813595373366;

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
    msg.setTimeStamp(0.45070332740272445);
    msg.setSource(14319U);
    msg.setSourceEntity(205U);
    msg.setDestination(62569U);
    msg.setDestinationEntity(58U);
    msg.utc_time = 0.7065267493416405;
    msg.reason = 10U;

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
    msg.setTimeStamp(0.7754767029707825);
    msg.setSource(22577U);
    msg.setSourceEntity(202U);
    msg.setDestination(29063U);
    msg.setDestinationEntity(141U);
    msg.utc_time = 0.5941767840673968;
    msg.reason = 90U;

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
    msg.setTimeStamp(0.17486946286576777);
    msg.setSource(16699U);
    msg.setSourceEntity(125U);
    msg.setDestination(48634U);
    msg.setDestinationEntity(193U);
    msg.utc_time = 0.2096687307361511;
    msg.reason = 84U;

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
    msg.setTimeStamp(0.194892659224697);
    msg.setSource(41028U);
    msg.setSourceEntity(154U);
    msg.setDestination(30103U);
    msg.setDestinationEntity(163U);
    msg.id = 231U;
    msg.range = 0.883049822278546;
    msg.acceptance = 34U;

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
    msg.setTimeStamp(0.7999936970109452);
    msg.setSource(20038U);
    msg.setSourceEntity(83U);
    msg.setDestination(8556U);
    msg.setDestinationEntity(73U);
    msg.id = 11U;
    msg.range = 0.11196749495742553;
    msg.acceptance = 31U;

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
    msg.setTimeStamp(0.26073008383113316);
    msg.setSource(17117U);
    msg.setSourceEntity(41U);
    msg.setDestination(23948U);
    msg.setDestinationEntity(43U);
    msg.id = 74U;
    msg.range = 0.5267302623862141;
    msg.acceptance = 96U;

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
    msg.setTimeStamp(0.8826690808629872);
    msg.setSource(42319U);
    msg.setSourceEntity(96U);
    msg.setDestination(49584U);
    msg.setDestinationEntity(57U);
    msg.type = 82U;
    msg.reason = 200U;
    msg.value = 0.7534589079369272;
    msg.timestep = 0.1308606422568549;

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
    msg.setTimeStamp(0.7856365830522654);
    msg.setSource(47949U);
    msg.setSourceEntity(211U);
    msg.setDestination(27229U);
    msg.setDestinationEntity(38U);
    msg.type = 122U;
    msg.reason = 228U;
    msg.value = 0.0911123702161849;
    msg.timestep = 0.659208203684176;

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
    msg.setTimeStamp(0.16831715575314754);
    msg.setSource(3310U);
    msg.setSourceEntity(105U);
    msg.setDestination(16604U);
    msg.setDestinationEntity(241U);
    msg.type = 118U;
    msg.reason = 171U;
    msg.value = 0.4360051402690681;
    msg.timestep = 0.6138431876669544;

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
    msg.setTimeStamp(0.09999372030662423);
    msg.setSource(62334U);
    msg.setSourceEntity(109U);
    msg.setDestination(25685U);
    msg.setDestinationEntity(104U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QUWXCYPXZDWVNPVRTAMPYNWYTGAKXRJLLTPSIHNZUEAAGGNOLMTHKJIQLTPJIPDQZCOOH");
    tmp_msg_0.lat = 0.3271970513042557;
    tmp_msg_0.lon = 0.32714017202215107;
    tmp_msg_0.depth = 0.6453217127596688;
    tmp_msg_0.query_channel = 123U;
    tmp_msg_0.reply_channel = 52U;
    tmp_msg_0.transponder_delay = 50U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8531546183664602;
    msg.y = 0.3410903467839609;
    msg.var_x = 0.6380853943080509;
    msg.var_y = 0.8730837717791855;
    msg.distance = 0.47335958004512535;

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
    msg.setTimeStamp(0.49368059696264044);
    msg.setSource(50672U);
    msg.setSourceEntity(150U);
    msg.setDestination(25799U);
    msg.setDestinationEntity(197U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QEKGULOUYKKAUTCOMSTR");
    tmp_msg_0.lat = 0.756523651038459;
    tmp_msg_0.lon = 0.9016588468431573;
    tmp_msg_0.depth = 0.6040275127676387;
    tmp_msg_0.query_channel = 67U;
    tmp_msg_0.reply_channel = 165U;
    tmp_msg_0.transponder_delay = 138U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.367064466493914;
    msg.y = 0.25693155985527627;
    msg.var_x = 0.7991336790605231;
    msg.var_y = 0.11468399230071546;
    msg.distance = 0.5322943352094273;

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
    msg.setTimeStamp(0.09603157549240038);
    msg.setSource(26466U);
    msg.setSourceEntity(187U);
    msg.setDestination(54472U);
    msg.setDestinationEntity(88U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NKOXRZDFFTCSDBRPNRJSHXBQFXJGNKHLWVAUNSNXITEMIGLUSKZHIPETJIHGEXACXULSHCPVDFEIKBYGWPMPBYRPVMXTCDVHIIWTIZFOUOBOUHACQDMJMNQIWGRCOTBYOPQXUZGDTLLPEBJQAHMFYRVZAUUYMXVYW");
    tmp_msg_0.lat = 0.33905772856391936;
    tmp_msg_0.lon = 0.6571891496775218;
    tmp_msg_0.depth = 0.5535787144166291;
    tmp_msg_0.query_channel = 228U;
    tmp_msg_0.reply_channel = 137U;
    tmp_msg_0.transponder_delay = 58U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4428636192019054;
    msg.y = 0.8429580024792914;
    msg.var_x = 0.1854133754785373;
    msg.var_y = 0.20928107462975942;
    msg.distance = 0.642961783895659;

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
    msg.setTimeStamp(0.999481061899571);
    msg.setSource(26554U);
    msg.setSourceEntity(23U);
    msg.setDestination(41958U);
    msg.setDestinationEntity(129U);
    msg.state = 104U;

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
    msg.setTimeStamp(0.036339719826462);
    msg.setSource(3040U);
    msg.setSourceEntity(97U);
    msg.setDestination(56135U);
    msg.setDestinationEntity(250U);
    msg.state = 33U;

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
    msg.setTimeStamp(0.34529953440028904);
    msg.setSource(7431U);
    msg.setSourceEntity(206U);
    msg.setDestination(40770U);
    msg.setDestinationEntity(23U);
    msg.state = 204U;

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
    msg.setTimeStamp(0.4691742317988328);
    msg.setSource(51483U);
    msg.setSourceEntity(26U);
    msg.setDestination(62902U);
    msg.setDestinationEntity(54U);
    msg.x = 0.7424791984707613;
    msg.y = 0.7147085695781183;
    msg.z = 0.7764992534359648;

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
    msg.setTimeStamp(0.21243970783107002);
    msg.setSource(33647U);
    msg.setSourceEntity(63U);
    msg.setDestination(15141U);
    msg.setDestinationEntity(181U);
    msg.x = 0.1401906740293576;
    msg.y = 0.962209096778981;
    msg.z = 0.5771164392405814;

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
    msg.setTimeStamp(0.2811872947002688);
    msg.setSource(18862U);
    msg.setSourceEntity(43U);
    msg.setDestination(1456U);
    msg.setDestinationEntity(46U);
    msg.x = 0.9604330737541584;
    msg.y = 0.05461422656113013;
    msg.z = 0.37013756804302234;

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
    msg.setTimeStamp(0.6264385572485366);
    msg.setSource(16011U);
    msg.setSourceEntity(111U);
    msg.setDestination(51489U);
    msg.setDestinationEntity(227U);
    msg.va = 0.12200582809249028;
    msg.aoa = 0.4116686243657046;
    msg.ssa = 0.9326951932579912;

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
    msg.setTimeStamp(0.33937909528389765);
    msg.setSource(9262U);
    msg.setSourceEntity(9U);
    msg.setDestination(15824U);
    msg.setDestinationEntity(75U);
    msg.va = 0.5645172204077543;
    msg.aoa = 0.8473252570520621;
    msg.ssa = 0.23765932384283595;

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
    msg.setTimeStamp(0.4069011825632406);
    msg.setSource(64823U);
    msg.setSourceEntity(245U);
    msg.setDestination(23271U);
    msg.setDestinationEntity(47U);
    msg.va = 0.4488533266181717;
    msg.aoa = 0.87468752239391;
    msg.ssa = 0.5812154608164275;

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
    msg.setTimeStamp(0.8429326787310205);
    msg.setSource(56537U);
    msg.setSourceEntity(173U);
    msg.setDestination(30532U);
    msg.setDestinationEntity(245U);
    msg.value = 0.7059107998603259;

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
    msg.setTimeStamp(0.8509538373416374);
    msg.setSource(14082U);
    msg.setSourceEntity(48U);
    msg.setDestination(21477U);
    msg.setDestinationEntity(28U);
    msg.value = 0.8185673929932493;

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
    msg.setTimeStamp(0.2178595227775898);
    msg.setSource(8089U);
    msg.setSourceEntity(210U);
    msg.setDestination(23771U);
    msg.setDestinationEntity(191U);
    msg.value = 0.07329885891878929;

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
    msg.setTimeStamp(0.43219739852736827);
    msg.setSource(34236U);
    msg.setSourceEntity(56U);
    msg.setDestination(43740U);
    msg.setDestinationEntity(45U);
    msg.value = 0.7975874206400121;
    msg.z_units = 247U;

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
    msg.setTimeStamp(0.6477102084231805);
    msg.setSource(16752U);
    msg.setSourceEntity(182U);
    msg.setDestination(26326U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6319270670330136;
    msg.z_units = 106U;

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
    msg.setTimeStamp(0.20371725645762562);
    msg.setSource(14375U);
    msg.setSourceEntity(91U);
    msg.setDestination(60451U);
    msg.setDestinationEntity(1U);
    msg.value = 0.6769869204605984;
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
    msg.setTimeStamp(0.38995196471974714);
    msg.setSource(49082U);
    msg.setSourceEntity(152U);
    msg.setDestination(32940U);
    msg.setDestinationEntity(180U);
    msg.value = 0.8303678286294179;
    msg.speed_units = 207U;

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
    msg.setTimeStamp(0.9633304497091573);
    msg.setSource(38101U);
    msg.setSourceEntity(43U);
    msg.setDestination(43726U);
    msg.setDestinationEntity(243U);
    msg.value = 0.8672508686091788;
    msg.speed_units = 116U;

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
    msg.setTimeStamp(0.052605380196714235);
    msg.setSource(21940U);
    msg.setSourceEntity(144U);
    msg.setDestination(6849U);
    msg.setDestinationEntity(174U);
    msg.value = 0.3323706251469667;
    msg.speed_units = 241U;

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
    msg.setTimeStamp(0.6173835816528954);
    msg.setSource(36848U);
    msg.setSourceEntity(244U);
    msg.setDestination(8969U);
    msg.setDestinationEntity(58U);
    msg.value = 0.5446160075428755;

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
    msg.setTimeStamp(0.12083528782416764);
    msg.setSource(20852U);
    msg.setSourceEntity(235U);
    msg.setDestination(54432U);
    msg.setDestinationEntity(76U);
    msg.value = 0.9039214845288491;

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
    msg.setTimeStamp(0.11579165593102203);
    msg.setSource(3365U);
    msg.setSourceEntity(202U);
    msg.setDestination(65162U);
    msg.setDestinationEntity(123U);
    msg.value = 0.4976853691750073;

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
    msg.setTimeStamp(0.24384774962057154);
    msg.setSource(45583U);
    msg.setSourceEntity(234U);
    msg.setDestination(36246U);
    msg.setDestinationEntity(57U);
    msg.value = 0.3966874051603333;

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
    msg.setTimeStamp(0.10075747693195136);
    msg.setSource(40984U);
    msg.setSourceEntity(29U);
    msg.setDestination(25765U);
    msg.setDestinationEntity(91U);
    msg.value = 0.39975973765731954;

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
    msg.setTimeStamp(0.22785304017663144);
    msg.setSource(43242U);
    msg.setSourceEntity(236U);
    msg.setDestination(38158U);
    msg.setDestinationEntity(121U);
    msg.value = 0.44197698804869057;

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
    msg.setTimeStamp(0.8959223930966081);
    msg.setSource(2606U);
    msg.setSourceEntity(206U);
    msg.setDestination(2318U);
    msg.setDestinationEntity(44U);
    msg.value = 0.7380328782606024;

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
    msg.setTimeStamp(0.6509273124183397);
    msg.setSource(62287U);
    msg.setSourceEntity(227U);
    msg.setDestination(24658U);
    msg.setDestinationEntity(92U);
    msg.value = 0.8730654072721126;

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
    msg.setTimeStamp(0.8628925981215332);
    msg.setSource(35183U);
    msg.setSourceEntity(239U);
    msg.setDestination(26377U);
    msg.setDestinationEntity(197U);
    msg.value = 0.47719519053639226;

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
    msg.setTimeStamp(0.041846436819573785);
    msg.setSource(17354U);
    msg.setSourceEntity(102U);
    msg.setDestination(51297U);
    msg.setDestinationEntity(224U);
    msg.path_ref = 1836438446U;
    msg.start_lat = 0.4760861683270792;
    msg.start_lon = 0.6592375962250266;
    msg.start_z = 0.0323284403753622;
    msg.start_z_units = 30U;
    msg.end_lat = 0.6999856068503387;
    msg.end_lon = 0.5406521347745187;
    msg.end_z = 0.9631074088727757;
    msg.end_z_units = 155U;
    msg.speed = 0.48744484013375367;
    msg.speed_units = 180U;
    msg.lradius = 0.3087423530144948;
    msg.flags = 189U;

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
    msg.setTimeStamp(0.2879313271607491);
    msg.setSource(50864U);
    msg.setSourceEntity(250U);
    msg.setDestination(1681U);
    msg.setDestinationEntity(237U);
    msg.path_ref = 2791068312U;
    msg.start_lat = 0.044521933813935544;
    msg.start_lon = 0.3889627991361788;
    msg.start_z = 0.12940874326692398;
    msg.start_z_units = 98U;
    msg.end_lat = 0.11810900456380125;
    msg.end_lon = 0.7825790564168711;
    msg.end_z = 0.6737316397659876;
    msg.end_z_units = 239U;
    msg.speed = 0.18657014535855077;
    msg.speed_units = 126U;
    msg.lradius = 0.8420371409040351;
    msg.flags = 42U;

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
    msg.setTimeStamp(0.7765706192085475);
    msg.setSource(49494U);
    msg.setSourceEntity(201U);
    msg.setDestination(61161U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 3501978128U;
    msg.start_lat = 0.4545508754727442;
    msg.start_lon = 0.1509617764986655;
    msg.start_z = 0.7846686555230676;
    msg.start_z_units = 225U;
    msg.end_lat = 0.8016852129435882;
    msg.end_lon = 0.1500932949962418;
    msg.end_z = 0.11796971357143637;
    msg.end_z_units = 185U;
    msg.speed = 0.2781191128566801;
    msg.speed_units = 231U;
    msg.lradius = 0.946911002341562;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.9024556515296224);
    msg.setSource(36090U);
    msg.setSourceEntity(217U);
    msg.setDestination(40600U);
    msg.setDestinationEntity(135U);
    msg.x = 0.04695026770308075;
    msg.y = 0.8978194532035616;
    msg.z = 0.9107892826712477;
    msg.k = 0.9356499219258477;
    msg.m = 0.9700564315009207;
    msg.n = 0.0688511024476407;
    msg.flags = 239U;

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
    msg.setTimeStamp(0.8029903686880605);
    msg.setSource(17341U);
    msg.setSourceEntity(194U);
    msg.setDestination(21095U);
    msg.setDestinationEntity(65U);
    msg.x = 0.16825111832513318;
    msg.y = 0.5756009483353335;
    msg.z = 0.9187355453419702;
    msg.k = 0.3918948265967106;
    msg.m = 0.6516131967344051;
    msg.n = 0.937770468416446;
    msg.flags = 78U;

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
    msg.setTimeStamp(0.9761674658878321);
    msg.setSource(797U);
    msg.setSourceEntity(220U);
    msg.setDestination(14908U);
    msg.setDestinationEntity(240U);
    msg.x = 0.15004364069995402;
    msg.y = 0.8643267127840789;
    msg.z = 0.9981099847038697;
    msg.k = 0.8712878858356881;
    msg.m = 0.8413940860763467;
    msg.n = 0.3479285295542536;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.19627141488474464);
    msg.setSource(56768U);
    msg.setSourceEntity(210U);
    msg.setDestination(55030U);
    msg.setDestinationEntity(206U);
    msg.value = 0.707354935268536;

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
    msg.setTimeStamp(0.6868411074874939);
    msg.setSource(40649U);
    msg.setSourceEntity(17U);
    msg.setDestination(20749U);
    msg.setDestinationEntity(183U);
    msg.value = 0.3386742317012361;

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
    msg.setTimeStamp(0.8891551950044255);
    msg.setSource(63743U);
    msg.setSourceEntity(109U);
    msg.setDestination(6627U);
    msg.setDestinationEntity(158U);
    msg.value = 0.2305649468510389;

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
    msg.setTimeStamp(0.25370290572680665);
    msg.setSource(46200U);
    msg.setSourceEntity(22U);
    msg.setDestination(52576U);
    msg.setDestinationEntity(179U);
    msg.u = 0.03484867824728555;
    msg.v = 0.598883328754316;
    msg.w = 0.9927322793890581;
    msg.p = 0.3424003480183647;
    msg.q = 0.13555169728049865;
    msg.r = 0.40759109892438705;
    msg.flags = 108U;

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
    msg.setTimeStamp(0.04925332270277483);
    msg.setSource(63490U);
    msg.setSourceEntity(124U);
    msg.setDestination(27440U);
    msg.setDestinationEntity(147U);
    msg.u = 0.7542428093687849;
    msg.v = 0.43733408009010044;
    msg.w = 0.3029218214685485;
    msg.p = 0.547393605391977;
    msg.q = 0.20440483523083186;
    msg.r = 0.5264429411365258;
    msg.flags = 129U;

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
    msg.setTimeStamp(0.5543552545376533);
    msg.setSource(40547U);
    msg.setSourceEntity(103U);
    msg.setDestination(64674U);
    msg.setDestinationEntity(72U);
    msg.u = 0.04590926776511184;
    msg.v = 0.19233955871590813;
    msg.w = 0.7578995613191682;
    msg.p = 0.9415229911128385;
    msg.q = 0.8672496432190022;
    msg.r = 0.4656170133880637;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.179185677906053);
    msg.setSource(23652U);
    msg.setSourceEntity(23U);
    msg.setDestination(40042U);
    msg.setDestinationEntity(151U);
    msg.path_ref = 741063850U;
    msg.start_lat = 0.11982241359903045;
    msg.start_lon = 0.7856786217989853;
    msg.start_z = 0.758871278576515;
    msg.start_z_units = 162U;
    msg.end_lat = 0.8480080442752006;
    msg.end_lon = 0.9513485976625957;
    msg.end_z = 0.6884257884197228;
    msg.end_z_units = 129U;
    msg.lradius = 0.9229209880418722;
    msg.flags = 101U;
    msg.x = 0.931246068739483;
    msg.y = 0.5970080245847604;
    msg.z = 0.15958235881753335;
    msg.vx = 0.5893682771337814;
    msg.vy = 0.41889893030280156;
    msg.vz = 0.2632211648466125;
    msg.course_error = 0.1329352247638309;
    msg.eta = 48171U;

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
    msg.setTimeStamp(0.23264281758309013);
    msg.setSource(28992U);
    msg.setSourceEntity(161U);
    msg.setDestination(36076U);
    msg.setDestinationEntity(186U);
    msg.path_ref = 1738649287U;
    msg.start_lat = 0.3732114175703163;
    msg.start_lon = 0.944482871231522;
    msg.start_z = 0.5460006804895357;
    msg.start_z_units = 5U;
    msg.end_lat = 0.03125728362320368;
    msg.end_lon = 0.8528459397460918;
    msg.end_z = 0.33106134248212404;
    msg.end_z_units = 125U;
    msg.lradius = 0.8828746085075082;
    msg.flags = 93U;
    msg.x = 0.8991360939946196;
    msg.y = 0.14349966576911644;
    msg.z = 0.6825095343099693;
    msg.vx = 0.3516557105517062;
    msg.vy = 0.18009948221376804;
    msg.vz = 0.449690990662311;
    msg.course_error = 0.23134859358956206;
    msg.eta = 49851U;

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
    msg.setTimeStamp(0.23047279685678534);
    msg.setSource(56120U);
    msg.setSourceEntity(14U);
    msg.setDestination(47581U);
    msg.setDestinationEntity(115U);
    msg.path_ref = 1639126295U;
    msg.start_lat = 0.3386386976429965;
    msg.start_lon = 0.4757823072672013;
    msg.start_z = 0.08023078431580155;
    msg.start_z_units = 205U;
    msg.end_lat = 0.9626668844752234;
    msg.end_lon = 0.16349449851949116;
    msg.end_z = 0.6872541690204781;
    msg.end_z_units = 75U;
    msg.lradius = 0.05981136463541403;
    msg.flags = 45U;
    msg.x = 0.4660234707077582;
    msg.y = 0.9072775693343024;
    msg.z = 0.0660946420398808;
    msg.vx = 0.22460368114952833;
    msg.vy = 0.8179922369785596;
    msg.vz = 0.8930856065835477;
    msg.course_error = 0.43231690353763996;
    msg.eta = 54668U;

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
    msg.setTimeStamp(0.6701213874432818);
    msg.setSource(6155U);
    msg.setSourceEntity(185U);
    msg.setDestination(50673U);
    msg.setDestinationEntity(243U);
    msg.k = 0.4472932328422351;
    msg.m = 0.5819019399372383;
    msg.n = 0.33007930083990833;

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
    msg.setTimeStamp(0.18746819107666735);
    msg.setSource(18070U);
    msg.setSourceEntity(100U);
    msg.setDestination(63096U);
    msg.setDestinationEntity(215U);
    msg.k = 0.25474933993375826;
    msg.m = 0.2929634715687037;
    msg.n = 0.33494796887009703;

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
    msg.setTimeStamp(0.3302669071723182);
    msg.setSource(61545U);
    msg.setSourceEntity(83U);
    msg.setDestination(28608U);
    msg.setDestinationEntity(247U);
    msg.k = 0.369643609188399;
    msg.m = 0.12630377756048716;
    msg.n = 0.2213240251950611;

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
    msg.setTimeStamp(0.6891545585293546);
    msg.setSource(9070U);
    msg.setSourceEntity(197U);
    msg.setDestination(63488U);
    msg.setDestinationEntity(235U);
    msg.p = 0.6706648652624718;
    msg.i = 0.8709602143398707;
    msg.d = 0.5031351153851645;
    msg.a = 0.42828394633847566;

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
    msg.setTimeStamp(0.7123021965177462);
    msg.setSource(60303U);
    msg.setSourceEntity(89U);
    msg.setDestination(44820U);
    msg.setDestinationEntity(218U);
    msg.p = 0.6588198558513364;
    msg.i = 0.9136386840625341;
    msg.d = 0.5276879951867466;
    msg.a = 0.41073835400999115;

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
    msg.setTimeStamp(0.9842706558294851);
    msg.setSource(32504U);
    msg.setSourceEntity(145U);
    msg.setDestination(49509U);
    msg.setDestinationEntity(184U);
    msg.p = 0.2114380799445459;
    msg.i = 0.8841656236636094;
    msg.d = 0.0971610215001506;
    msg.a = 0.020840709544165836;

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
    msg.setTimeStamp(0.548342516934856);
    msg.setSource(14261U);
    msg.setSourceEntity(193U);
    msg.setDestination(28424U);
    msg.setDestinationEntity(88U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.46554742413662);
    msg.setSource(29541U);
    msg.setSourceEntity(154U);
    msg.setDestination(54065U);
    msg.setDestinationEntity(54U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.3200432786795041);
    msg.setSource(13847U);
    msg.setSourceEntity(53U);
    msg.setDestination(12999U);
    msg.setDestinationEntity(172U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.8324207483771967);
    msg.setSource(31063U);
    msg.setSourceEntity(16U);
    msg.setDestination(9266U);
    msg.setDestinationEntity(195U);
    msg.x = 0.299878850075199;
    msg.y = 0.664014085927898;
    msg.z = 0.022603692272270215;
    msg.vx = 0.6508334200177815;
    msg.vy = 0.5854650690588978;
    msg.vz = 0.6365982194148908;
    msg.ax = 0.8837430336038091;
    msg.ay = 0.4223671923128377;
    msg.az = 0.24423958396187484;
    msg.flags = 17219U;

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
    msg.setTimeStamp(0.37853082731332854);
    msg.setSource(39132U);
    msg.setSourceEntity(231U);
    msg.setDestination(36007U);
    msg.setDestinationEntity(10U);
    msg.x = 0.47185139312317514;
    msg.y = 0.8413742817360255;
    msg.z = 0.5219812405736578;
    msg.vx = 0.7329660322687973;
    msg.vy = 0.7212237912134846;
    msg.vz = 0.2061821178955774;
    msg.ax = 0.6445453622682646;
    msg.ay = 0.6859858931470558;
    msg.az = 0.27534043527194496;
    msg.flags = 46976U;

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
    msg.setTimeStamp(0.4679745425200674);
    msg.setSource(59782U);
    msg.setSourceEntity(152U);
    msg.setDestination(34499U);
    msg.setDestinationEntity(201U);
    msg.x = 0.14670606782819717;
    msg.y = 0.2513900216877685;
    msg.z = 0.5205435313521255;
    msg.vx = 0.06926237683065173;
    msg.vy = 0.09691412154936552;
    msg.vz = 0.93806741163627;
    msg.ax = 0.3825768403793067;
    msg.ay = 0.669189424521928;
    msg.az = 0.32489249201226655;
    msg.flags = 12024U;

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
    msg.setTimeStamp(0.81699338986079);
    msg.setSource(58521U);
    msg.setSourceEntity(133U);
    msg.setDestination(61968U);
    msg.setDestinationEntity(2U);
    msg.value = 0.5188165180223564;

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
    msg.setTimeStamp(0.2516797162092861);
    msg.setSource(21426U);
    msg.setSourceEntity(39U);
    msg.setDestination(37174U);
    msg.setDestinationEntity(71U);
    msg.value = 0.8261041632885958;

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
    msg.setTimeStamp(0.38597735030483593);
    msg.setSource(55596U);
    msg.setSourceEntity(83U);
    msg.setDestination(18647U);
    msg.setDestinationEntity(43U);
    msg.value = 0.538105124324191;

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
    msg.setTimeStamp(0.7151358773218328);
    msg.setSource(31241U);
    msg.setSourceEntity(38U);
    msg.setDestination(60627U);
    msg.setDestinationEntity(54U);
    msg.timeout = 28594U;
    msg.lat = 0.7044150339677449;
    msg.lon = 0.5650407306907919;
    msg.z = 0.7342123201483548;
    msg.z_units = 45U;
    msg.speed = 0.49883387089264475;
    msg.speed_units = 167U;
    msg.roll = 0.32463148808431264;
    msg.pitch = 0.1859000675353326;
    msg.yaw = 0.8306679689317166;
    msg.custom.assign("HZLHCLMRRYTOZFOOAXJJCTZIVMYRMIQKZVIFXKPXGLRMWEDDLEURLPYGUUTSPCBKNKEOGVNSY");

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
    msg.setTimeStamp(0.5616152796517375);
    msg.setSource(14763U);
    msg.setSourceEntity(65U);
    msg.setDestination(2233U);
    msg.setDestinationEntity(121U);
    msg.timeout = 44219U;
    msg.lat = 0.34438975691085294;
    msg.lon = 0.3647310591981815;
    msg.z = 0.9886277928617846;
    msg.z_units = 208U;
    msg.speed = 0.4418612857172728;
    msg.speed_units = 173U;
    msg.roll = 0.7158657052375095;
    msg.pitch = 0.0210612525215359;
    msg.yaw = 0.026530854104036883;
    msg.custom.assign("GYPFEHWBYOIASVUURFDYDTQIKOYFHJP");

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
    msg.setTimeStamp(0.8973742421986384);
    msg.setSource(47910U);
    msg.setSourceEntity(49U);
    msg.setDestination(11496U);
    msg.setDestinationEntity(241U);
    msg.timeout = 53710U;
    msg.lat = 0.8960825435047776;
    msg.lon = 0.7946377159036793;
    msg.z = 0.7411930547425957;
    msg.z_units = 234U;
    msg.speed = 0.321481672558243;
    msg.speed_units = 21U;
    msg.roll = 0.029966521656355605;
    msg.pitch = 0.005897310270599254;
    msg.yaw = 0.37180619666294823;
    msg.custom.assign("DZOSNCAZWLJHBARAQUFTRBDLNWSNGYTKQFLEOQMYFHEHCEMCQEABILCYGOIYRADPGTMHPXKNSCHRWEGQKYUMOIWUFOKGTVOJVOQTDXHDYLHCIJFTZCFVZRGJEGSVWFHUYBLMBBZRDCXXYSKPMKBSXDLJNPXMUFNIWVTLDIXRBGHKZUVSEAZZJTYVIUJNXTKBIHCGVWUJARQRWELSOKXVFEKO");

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
    msg.setTimeStamp(0.3760275282805656);
    msg.setSource(16700U);
    msg.setSourceEntity(191U);
    msg.setDestination(60750U);
    msg.setDestinationEntity(252U);
    msg.timeout = 44215U;
    msg.lat = 0.20295105860155438;
    msg.lon = 0.196869901340623;
    msg.z = 0.6984402048836114;
    msg.z_units = 203U;
    msg.speed = 0.3995522565033298;
    msg.speed_units = 106U;
    msg.duration = 9759U;
    msg.radius = 0.9563847567703171;
    msg.flags = 236U;
    msg.custom.assign("TWJEVRROHWYZSWAAATDBTVOINWTEIXUNJSSIKKJVZAKCCDMYPSZMHIZIXLROALULGD");

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
    msg.setTimeStamp(0.4724670151281205);
    msg.setSource(1875U);
    msg.setSourceEntity(217U);
    msg.setDestination(20849U);
    msg.setDestinationEntity(121U);
    msg.timeout = 47034U;
    msg.lat = 0.6058432386695505;
    msg.lon = 0.3203599917704226;
    msg.z = 0.5071244954351537;
    msg.z_units = 66U;
    msg.speed = 0.4223754327485023;
    msg.speed_units = 58U;
    msg.duration = 49337U;
    msg.radius = 0.9659503762915289;
    msg.flags = 42U;
    msg.custom.assign("PYDRVDPCRZWBTAIZJFVNYNKT");

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
    msg.setTimeStamp(0.9690753504032728);
    msg.setSource(47420U);
    msg.setSourceEntity(104U);
    msg.setDestination(56695U);
    msg.setDestinationEntity(26U);
    msg.timeout = 18172U;
    msg.lat = 0.6566304954640144;
    msg.lon = 0.7347320069044873;
    msg.z = 0.09651193412313908;
    msg.z_units = 13U;
    msg.speed = 0.18121392859524643;
    msg.speed_units = 5U;
    msg.duration = 55968U;
    msg.radius = 0.5638267979598038;
    msg.flags = 171U;
    msg.custom.assign("OPWLCBWQFVHXOMQTFUTMBXCFNUMEFITDYACYEIMKMVGXSCNOEUJNRHQBRJBWYGKDEDGKUKAERHCNZCKXHNZNIYNKIADAIRQQPLTAZCFISXDLNZTQVSIJSVUWBXSLHAYZOKCZPLGZREFHOLZVRIVULLKQPRYVVJQEMBOJUFJDXWAGSWTPVIDZYHWRXBYQMWSHOTJHPTCPGXGCULEDMKPQHAGSAETAGBUYDSGWBOMPNJWKDRIPFYTUSJNZEFOL");

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
    msg.setTimeStamp(0.6610041156182248);
    msg.setSource(17921U);
    msg.setSourceEntity(85U);
    msg.setDestination(41070U);
    msg.setDestinationEntity(232U);
    msg.custom.assign("JSKQJYPTCBMCWUKNH");

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
    msg.setTimeStamp(0.23690242969874786);
    msg.setSource(43691U);
    msg.setSourceEntity(180U);
    msg.setDestination(51521U);
    msg.setDestinationEntity(99U);
    msg.custom.assign("GXLKDNJXOMBHAIMEKMHLICLYVFLQXCFJXEZTRHIUMFNNLAWSNFMNKCQZAKBSIROUVJNHORXKBCBHTOEBVWXZNJRDAGDJYLG");

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
    msg.setTimeStamp(0.33311383831607366);
    msg.setSource(18097U);
    msg.setSourceEntity(236U);
    msg.setDestination(2443U);
    msg.setDestinationEntity(52U);
    msg.custom.assign("TJYAMPMYLDPMHAQYVPYVGZRNFBSFXNLXKXSAIGWFEOAGLTHRHRUSUEFGJTZFUBXOMLTDZEIXIQSWSNJPHRQGQUQPBCDYKKZWKIFVKACAKHRZUQCURUGSTFZONHXABWNEDNHJNKLOWXLCDPVMGVIDSPCHNGLYVITYXDVSJLJZCNQGBCOVBZFJPRTKWFORAYWKVOIGBOUTJYETBXHQJ");

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
    msg.setTimeStamp(0.9528492513977598);
    msg.setSource(15263U);
    msg.setSourceEntity(86U);
    msg.setDestination(19789U);
    msg.setDestinationEntity(229U);
    msg.timeout = 24917U;
    msg.lat = 0.2417365271969838;
    msg.lon = 0.28948890810516437;
    msg.z = 0.819808401754629;
    msg.z_units = 137U;
    msg.duration = 56851U;
    msg.speed = 0.8747597111486967;
    msg.speed_units = 54U;
    msg.type = 155U;
    msg.radius = 0.04225051693981341;
    msg.length = 0.5943356182116221;
    msg.bearing = 0.6739646783992493;
    msg.direction = 224U;
    msg.custom.assign("BNTCSHXXSZEWEJGIFJSALCNOUVMIWAQDWVNOXIRRIJPAXIJEWUKMDYASKLYTDXVHYZXFZHMKYFKGUDTCOHLETMZPRVMWOIHHHNRRGCDPFXBQQQUWEFHUIPKPAESUZCLKGQQQJPFZPEBNBEMYXBBCNFFIYZLIGONYALUDBJKSQDHTVQFVCVNAVRY");

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
    msg.setTimeStamp(0.18880001773590416);
    msg.setSource(11222U);
    msg.setSourceEntity(79U);
    msg.setDestination(18355U);
    msg.setDestinationEntity(74U);
    msg.timeout = 30051U;
    msg.lat = 0.2643982512114642;
    msg.lon = 0.28226433504816206;
    msg.z = 0.8003785189257355;
    msg.z_units = 54U;
    msg.duration = 31384U;
    msg.speed = 0.5307682246088957;
    msg.speed_units = 46U;
    msg.type = 234U;
    msg.radius = 0.6757412083041416;
    msg.length = 0.06044165075536567;
    msg.bearing = 0.6346024806592412;
    msg.direction = 154U;
    msg.custom.assign("JADDBASMHQSVQHZZLDGXZVSWXNEWMDRZBTRYGIBRPMWBILHHSPGQUTAJIJIADEKKGCPWEMOYWBCKONRPJTNZVZJFTTFWXUIHXQSEJAXFSVVLAWWDNTSOXCPJLQSYBKVAWFGXONFYXILMEFKQCFYMPONAZGMTAGGUYKJXDBPKEOFULUBDTKOULVUWVQIKRULRZE");

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
    msg.setTimeStamp(0.055102366500873856);
    msg.setSource(1105U);
    msg.setSourceEntity(197U);
    msg.setDestination(64995U);
    msg.setDestinationEntity(41U);
    msg.timeout = 64600U;
    msg.lat = 0.019800210511346394;
    msg.lon = 0.8791317936911847;
    msg.z = 0.4781707948860775;
    msg.z_units = 154U;
    msg.duration = 19265U;
    msg.speed = 0.4967556614923725;
    msg.speed_units = 24U;
    msg.type = 250U;
    msg.radius = 0.18242140349667657;
    msg.length = 0.5990178726732555;
    msg.bearing = 0.6663519994886977;
    msg.direction = 217U;
    msg.custom.assign("WHPHMMTUOLAXZVCEUBNXVBQSHWIKPQGZTGVCV");

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
    msg.setTimeStamp(0.7414541148770765);
    msg.setSource(10622U);
    msg.setSourceEntity(8U);
    msg.setDestination(7900U);
    msg.setDestinationEntity(142U);
    msg.duration = 38297U;
    msg.custom.assign("QNUEVHKCSYUBQFMUBNKSY");

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
    msg.setTimeStamp(0.17632474946709287);
    msg.setSource(19649U);
    msg.setSourceEntity(214U);
    msg.setDestination(61685U);
    msg.setDestinationEntity(189U);
    msg.duration = 21856U;
    msg.custom.assign("ODRNAXLZDMMZRFJDDQGRJBMLRQKJDMMKXBFLUOPIEYUANBEPQYBILXLSPHLKVCOUGCFDNDPAWPYWVLEUHTMWPMGKYYJEONSFOARICVCVBHGHCUWJTQVQAUFKKWOUTFHWAFYSOOVKGZVNWECQIUXPYGA");

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
    msg.setTimeStamp(0.35704052131061126);
    msg.setSource(15514U);
    msg.setSourceEntity(35U);
    msg.setDestination(26236U);
    msg.setDestinationEntity(223U);
    msg.duration = 62002U;
    msg.custom.assign("ZMSWEBDBMZJSJWFFCPMRVEEJXMEHQCEOGQDUVOPTGNNSQRHORXBDJNIANOGXULTJEEBADUJRYAACZEXPLVWTZDMILWYOUKNGYOAUHCXLCKLZEIPHNCYQSYAMMYDMLQYNTXWVYVQIAKFFPDMTOVVUBIQFAOKRUSFFKVWXNOTTIRPMLPCNTZWUKX");

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
    msg.setTimeStamp(0.02857200480684119);
    msg.setSource(47239U);
    msg.setSourceEntity(56U);
    msg.setDestination(48379U);
    msg.setDestinationEntity(124U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.6068833467686595;
    tmp_msg_0.z_units = 194U;
    msg.control.set(tmp_msg_0);
    msg.duration = 10775U;
    msg.custom.assign("VUXQLYCOGHQHCFZACCFFWQKPTRGKHJRAZGWSAELXLLUNPFKQRZAKUBGJCMTNVLPJVFACDVVKSLEYHWIYBNLDUXXBNGFTTTVPQOPUPBZJOHCOTODQLDLGEDWHRJPZTXLXYOJNGMREUNZZHUYDIJMMRHSBPYESBTXQSINJFMSRJSWIEIBUDOGFXXRMZFSSDRZEYWQHSAVAZHFYUCQNVKPKIMVWRBMNIKGUYTBYDEAMAOOGVIBTIXCWD");

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
    msg.setTimeStamp(0.054782442841274204);
    msg.setSource(57472U);
    msg.setSourceEntity(157U);
    msg.setDestination(27400U);
    msg.setDestinationEntity(204U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.5386162088248796;
    tmp_msg_0.z_units = 87U;
    msg.control.set(tmp_msg_0);
    msg.duration = 40382U;
    msg.custom.assign("MRVFNNPVDLUMVRZHEKIUWTPMSOCOUJIAWVBQMEORPNDDSPAETGRTYFXBMJRNVKYZCMYLSDGNYUTWGAZYAMNYWVSGJTQXZKBTCKSDFJCHWOAUJPAIARQMGRHCJWTJIXGORUHEGUVBLCWMCKCHTHBQSGLEOOFIIXFKKXGDLHBFVEYLMXONKEISIOLXFIXNWXYJAJFCXFQRSBQVESPDZTQSHPPQYDNNZJZULUHWLODCARUQAZBLQHWKETG");

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
    msg.setTimeStamp(0.18366656699937134);
    msg.setSource(22013U);
    msg.setSourceEntity(13U);
    msg.setDestination(55785U);
    msg.setDestinationEntity(150U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.3915873922227213;
    tmp_msg_0.z_units = 240U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11547U;
    msg.custom.assign("GYQXOCXAWRXEIUVQZPXLOJWHBSUXPIAHALJZJVQWDFESCYDIWDZPUEQKFCRMPIMZTSKBZOMMWCXJJCDCTNZLAKTBQAPERMDZI");

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
    msg.setTimeStamp(0.8426740862251496);
    msg.setSource(35843U);
    msg.setSourceEntity(248U);
    msg.setDestination(23864U);
    msg.setDestinationEntity(188U);
    msg.timeout = 65203U;
    msg.lat = 0.3387554328954615;
    msg.lon = 0.8382217788689219;
    msg.z = 0.27311411497798066;
    msg.z_units = 53U;
    msg.speed = 0.7851288666104962;
    msg.speed_units = 59U;
    msg.bearing = 0.4931864287881188;
    msg.cross_angle = 0.20352383437289379;
    msg.width = 0.25386135904820684;
    msg.length = 0.36669224837687187;
    msg.hstep = 0.4393846155701304;
    msg.coff = 108U;
    msg.alternation = 245U;
    msg.flags = 58U;
    msg.custom.assign("YMIUKEPVCGDCWWLPGHGVTRQAXWKQAKNNUKYGYOQLDNBRNXXJICRDDRISNDJVIALQLGUSLLUGDLJRPOSVAOPHTODHIXIYHMBTQRKSEWBOCUBZKEZPPIFZH");

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
    msg.setTimeStamp(0.6291751859367292);
    msg.setSource(15181U);
    msg.setSourceEntity(150U);
    msg.setDestination(55658U);
    msg.setDestinationEntity(91U);
    msg.timeout = 5873U;
    msg.lat = 0.7135905322244961;
    msg.lon = 0.031930988566064245;
    msg.z = 0.3178295080468755;
    msg.z_units = 174U;
    msg.speed = 0.6610596946653934;
    msg.speed_units = 8U;
    msg.bearing = 0.09714591440025555;
    msg.cross_angle = 0.883224525812209;
    msg.width = 0.06662909721315868;
    msg.length = 0.6684158787527541;
    msg.hstep = 0.7925886727803679;
    msg.coff = 148U;
    msg.alternation = 93U;
    msg.flags = 33U;
    msg.custom.assign("EVADHWYSBATBVJFVSDBFTKOCZTMXRFDDXSJGTFBBMOJXHCPSTTMWBAKEYPYGFWFCAXBELRNCPBDAZPIKONVPAQFHJHIULANFHOXDAXTUHZWQDHKDJXLKIJOTCOAERWNUKUSLQMTMOIYNGDEIPKMNILPSMRBQVAUGVZEMLRGLKWCEEUPCVIIKGZHJYLWGYJNQOPHJRLYIWK");

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
    msg.setTimeStamp(0.6968619389378166);
    msg.setSource(5048U);
    msg.setSourceEntity(179U);
    msg.setDestination(34246U);
    msg.setDestinationEntity(171U);
    msg.timeout = 32024U;
    msg.lat = 0.9250360811447103;
    msg.lon = 0.6948633376638692;
    msg.z = 0.690960993893479;
    msg.z_units = 59U;
    msg.speed = 0.6869747164798261;
    msg.speed_units = 138U;
    msg.bearing = 0.9966938072947551;
    msg.cross_angle = 0.5384299633239538;
    msg.width = 0.9173097942331037;
    msg.length = 0.6035382533422328;
    msg.hstep = 0.02989468674841922;
    msg.coff = 136U;
    msg.alternation = 8U;
    msg.flags = 216U;
    msg.custom.assign("PSSLBOUSBQWVATNSPNFHJECXZUUATZBYIFGZILPFM");

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
    msg.setTimeStamp(0.8185297412566969);
    msg.setSource(1124U);
    msg.setSourceEntity(102U);
    msg.setDestination(22305U);
    msg.setDestinationEntity(87U);
    msg.timeout = 45632U;
    msg.lat = 0.8689116414512426;
    msg.lon = 0.2830424186584807;
    msg.z = 0.6192521104568788;
    msg.z_units = 131U;
    msg.speed = 0.867466762432282;
    msg.speed_units = 117U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6151917251896111;
    tmp_msg_0.y = 0.6369736895162523;
    tmp_msg_0.z = 0.03539202977913636;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OXUYJKRLTGWOBOMRFWSQGYJUXHHYIZRPBEZJPTYZAAIMNUFCFNHQRANOEWMNNETUGRMXWMDZVEEHIPKAFJDDYMFQRDFFWVANKQLCQMSLHVFPNQVBKSZLFWRAU");

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
    msg.setTimeStamp(0.8378470459839451);
    msg.setSource(63925U);
    msg.setSourceEntity(58U);
    msg.setDestination(21557U);
    msg.setDestinationEntity(71U);
    msg.timeout = 18464U;
    msg.lat = 0.1033375136584953;
    msg.lon = 0.20106805749346746;
    msg.z = 0.12366984637023737;
    msg.z_units = 147U;
    msg.speed = 0.0923994224512702;
    msg.speed_units = 91U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5517107226404729;
    tmp_msg_0.y = 0.4664668032923792;
    tmp_msg_0.z = 0.7984881798717197;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HTMJEPIJEOBRTGEQPCESLLZJVYPRYCQXLIJKZBNTGHROMSQKLZCPAWADRKPJAXDNCTAMQHAXUUUYVHOELWDDFCMSGBFWXEFOWDEXNRCBDIGDGXIZZTQSNRYFNQVKJGDUUQKJ");

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
    msg.setTimeStamp(0.25958298813164604);
    msg.setSource(6751U);
    msg.setSourceEntity(224U);
    msg.setDestination(60154U);
    msg.setDestinationEntity(58U);
    msg.timeout = 56477U;
    msg.lat = 0.3587574055912852;
    msg.lon = 0.750252557366318;
    msg.z = 0.44814871337401496;
    msg.z_units = 125U;
    msg.speed = 0.4345579592746599;
    msg.speed_units = 161U;
    msg.custom.assign("IWDJASTFUABCVHQTEYWQYOZTNHPEIPIZRZOXMEGGDOLXPBVIEBEZIADEHUYLCKALRKXGANTYRXWDQQJCHOHUYEGURYYRACDNJDJZPFESNWJQXOHRANEHWPZYHXTWBWLQL");

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
    msg.setTimeStamp(0.46744008222097744);
    msg.setSource(23447U);
    msg.setSourceEntity(37U);
    msg.setDestination(54491U);
    msg.setDestinationEntity(86U);
    msg.x = 0.5278809419163599;
    msg.y = 0.9302707938615651;
    msg.z = 0.3093168575759032;

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
    msg.setTimeStamp(0.5528041591857472);
    msg.setSource(20956U);
    msg.setSourceEntity(13U);
    msg.setDestination(53542U);
    msg.setDestinationEntity(127U);
    msg.x = 0.9275321954303495;
    msg.y = 0.7991503485264605;
    msg.z = 0.07899473476968433;

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
    msg.setTimeStamp(0.47845491334713297);
    msg.setSource(52464U);
    msg.setSourceEntity(59U);
    msg.setDestination(9301U);
    msg.setDestinationEntity(164U);
    msg.x = 0.15853652958605968;
    msg.y = 0.5477778594156274;
    msg.z = 0.49841222121794404;

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
    msg.setTimeStamp(0.39336038181281907);
    msg.setSource(54371U);
    msg.setSourceEntity(121U);
    msg.setDestination(39196U);
    msg.setDestinationEntity(160U);
    msg.timeout = 52073U;
    msg.lat = 0.39853404775361734;
    msg.lon = 0.49651379920618355;
    msg.z = 0.17472357154953944;
    msg.z_units = 209U;
    msg.amplitude = 0.22390958726199883;
    msg.pitch = 0.2948048200527843;
    msg.speed = 0.6285391236440201;
    msg.speed_units = 247U;
    msg.custom.assign("THSYEMFUEXACKFZOYZLVXPJOEQLUJEWZQMKLGRLVWDHIXMICDQOLILRYSFRXORRJFCHNPTYQHMAPZXLHJCGMFIPLTNEKHQFDWQWMKTXNUCDISIN");

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
    msg.setTimeStamp(0.9335076160244549);
    msg.setSource(36055U);
    msg.setSourceEntity(120U);
    msg.setDestination(61951U);
    msg.setDestinationEntity(234U);
    msg.timeout = 25790U;
    msg.lat = 0.6198223598880839;
    msg.lon = 0.7130336339485782;
    msg.z = 0.5592904484075853;
    msg.z_units = 6U;
    msg.amplitude = 0.43185629644442747;
    msg.pitch = 0.6233723707735964;
    msg.speed = 0.5050689292655327;
    msg.speed_units = 217U;
    msg.custom.assign("HEAVKFZSHZLHPNCQTPNLQHQIXDYXGCTOKSUTDMBZLXXXRKHDUJFQPKBAWGYINMVEZQEDMUQWKIQPKIHNRPLRHLWFQJHFJMRZVXDQZZLEROOAJGLEDXXBVTZEEVCYFIATTNELUSPSBBNIPIMBW");

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
    msg.setTimeStamp(0.510217384757475);
    msg.setSource(63103U);
    msg.setSourceEntity(137U);
    msg.setDestination(30161U);
    msg.setDestinationEntity(162U);
    msg.timeout = 46332U;
    msg.lat = 0.35225511896275796;
    msg.lon = 0.12125591937982738;
    msg.z = 0.05749363584319789;
    msg.z_units = 35U;
    msg.amplitude = 0.0007314112415537366;
    msg.pitch = 0.7258270979745683;
    msg.speed = 0.028328488955779996;
    msg.speed_units = 72U;
    msg.custom.assign("TAPMTJYVQVYYGLQZJCLHLPDMRJBLDESSTGJVKJVDMFPTHWULITLSWNH");

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
    msg.setTimeStamp(0.07950923339534355);
    msg.setSource(3433U);
    msg.setSourceEntity(221U);
    msg.setDestination(62750U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.8447244058749672);
    msg.setSource(62346U);
    msg.setSourceEntity(215U);
    msg.setDestination(30973U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.9552685184881974);
    msg.setSource(64337U);
    msg.setSourceEntity(122U);
    msg.setDestination(48317U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.611041267087016);
    msg.setSource(6439U);
    msg.setSourceEntity(149U);
    msg.setDestination(18901U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.07886232534359505;
    msg.lon = 0.9808697391865447;
    msg.z = 0.023051478207498532;
    msg.z_units = 136U;
    msg.radius = 0.13435789239970142;
    msg.duration = 21507U;
    msg.speed = 0.8050281000053117;
    msg.speed_units = 140U;
    msg.custom.assign("LANTCZJTMBXFEXWXIXEROGWQUGLDFWVUBIXKADSJLVJSQARFSPVEMLIHHHRIQBOGSSMDDNWKFDLZUCVZTHYMBKSLPYNPQHPXGIGDAZFHQORMKBOSJNEPTVSGJCOWTFUTTDLWHGQVQKVPPWTOEZRYJKIMEAKOJZXXJZPNKESH");

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
    msg.setTimeStamp(0.40217323034789076);
    msg.setSource(45281U);
    msg.setSourceEntity(230U);
    msg.setDestination(57896U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.3254491860006923;
    msg.lon = 0.16933008476802103;
    msg.z = 0.6580051170398308;
    msg.z_units = 192U;
    msg.radius = 0.18218245854165194;
    msg.duration = 16817U;
    msg.speed = 0.10398142248194753;
    msg.speed_units = 219U;
    msg.custom.assign("MTGNDTYRQYFPAPAWGFTICJSIDZZPXAOBXHMGKDRXCOYHNRZSEPZZALAYCIGMUBARWHCHMGHWFKYENCUIKLNZKQOYFUUEVKUXAQHIPHKDRONJBXVSUWNQWSJJDVFTXPOSJEVPQBPAGCRSCZTXHRNJKVXDWELOBMFVGYRHYBAQWWFQMVIEUVFUOMJXIFNMQGIYECDBJNCFGZZJCELYPWDMZRNTAKLWVVKITE");

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
    msg.setTimeStamp(0.8667422682820579);
    msg.setSource(2012U);
    msg.setSourceEntity(39U);
    msg.setDestination(4964U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.4680592590160546;
    msg.lon = 0.7009391318474176;
    msg.z = 0.244491864036121;
    msg.z_units = 174U;
    msg.radius = 0.4696802672005058;
    msg.duration = 64725U;
    msg.speed = 0.2950069318046238;
    msg.speed_units = 37U;
    msg.custom.assign("JNFQXQDZMXVPEDN");

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
    msg.setTimeStamp(0.39112406195985416);
    msg.setSource(36557U);
    msg.setSourceEntity(116U);
    msg.setDestination(60761U);
    msg.setDestinationEntity(234U);
    msg.timeout = 22529U;
    msg.flags = 235U;
    msg.lat = 0.11305374529619983;
    msg.lon = 0.08940905316411574;
    msg.start_z = 0.9542096410024618;
    msg.start_z_units = 227U;
    msg.end_z = 0.5661900933460225;
    msg.end_z_units = 129U;
    msg.radius = 0.6232211688310342;
    msg.speed = 0.05607038927140262;
    msg.speed_units = 229U;
    msg.custom.assign("BNYMYTIIWKHVIFGLALDGAESBPXATPCOCYSANAGQKBPFTNIAQRITCQXHMXEXRRQTORIVYZFOXBCPCQEVHNJHELFWWEPMETFLZJDMKTJINOVFNAGZSBZTDSMVNCZ");

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
    msg.setTimeStamp(0.9926855965653827);
    msg.setSource(58601U);
    msg.setSourceEntity(140U);
    msg.setDestination(49403U);
    msg.setDestinationEntity(49U);
    msg.timeout = 47026U;
    msg.flags = 117U;
    msg.lat = 0.0870982900554208;
    msg.lon = 0.36565461220311446;
    msg.start_z = 0.26622651129736075;
    msg.start_z_units = 139U;
    msg.end_z = 0.8197143670580644;
    msg.end_z_units = 174U;
    msg.radius = 0.2610212529174779;
    msg.speed = 0.9459859787611451;
    msg.speed_units = 186U;
    msg.custom.assign("KEDBLZYDBKNLXAXGOSLJIUPXPRSAUDRDZQUVLGFOQBVZZUDVICST");

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
    msg.setTimeStamp(0.6047329710145473);
    msg.setSource(43045U);
    msg.setSourceEntity(109U);
    msg.setDestination(63347U);
    msg.setDestinationEntity(9U);
    msg.timeout = 46692U;
    msg.flags = 47U;
    msg.lat = 0.19704357664584837;
    msg.lon = 0.33059752716602;
    msg.start_z = 0.34247489049748003;
    msg.start_z_units = 175U;
    msg.end_z = 0.23881741210519358;
    msg.end_z_units = 242U;
    msg.radius = 0.18468538437822501;
    msg.speed = 0.5896469399250772;
    msg.speed_units = 8U;
    msg.custom.assign("EERVAZFGDDVPDKIDHODZAAIBCKVJCUFWHBZMLUPGUSJYCJIHDZWFATHRPFWVQJOQIJFSBBVSRWYLPUBIECKZNETXCVYQWLANYJSG");

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
    msg.setTimeStamp(0.7865907815523563);
    msg.setSource(58757U);
    msg.setSourceEntity(160U);
    msg.setDestination(16518U);
    msg.setDestinationEntity(120U);
    msg.timeout = 39485U;
    msg.lat = 0.8186908781069966;
    msg.lon = 0.40212829456983223;
    msg.z = 0.02062206746293882;
    msg.z_units = 188U;
    msg.speed = 0.11030102718338108;
    msg.speed_units = 49U;
    msg.custom.assign("GEVLJPFFBFUIJGVPYAHXIMYFRDAQVQDRLMQYTBMTVWIXOWYZEERNRMG");

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
    msg.setTimeStamp(0.21720597286222854);
    msg.setSource(14400U);
    msg.setSourceEntity(183U);
    msg.setDestination(55943U);
    msg.setDestinationEntity(55U);
    msg.timeout = 1778U;
    msg.lat = 0.9993805077233506;
    msg.lon = 0.978189986412936;
    msg.z = 0.5168004051115297;
    msg.z_units = 39U;
    msg.speed = 0.5761393053936866;
    msg.speed_units = 142U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7905723629953966;
    tmp_msg_0.y = 0.16785667927743742;
    tmp_msg_0.z = 0.22554959258501095;
    tmp_msg_0.t = 0.11768558659071537;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AWWFEFDKCUWHNCJFNGWCJXUEYLDHAPSOEPABJBXWDOYKPPHMAFLQNFFFICMZQULPCHQBUWSDNXLPLDOXVRYOQIMPIBS");

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
    msg.setTimeStamp(0.14291072543047745);
    msg.setSource(32107U);
    msg.setSourceEntity(152U);
    msg.setDestination(16619U);
    msg.setDestinationEntity(36U);
    msg.timeout = 35648U;
    msg.lat = 0.1676113237442194;
    msg.lon = 0.5609565900912197;
    msg.z = 0.008222131410693168;
    msg.z_units = 120U;
    msg.speed = 0.41647585440666957;
    msg.speed_units = 245U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.29099483220273725;
    tmp_msg_0.y = 0.6031700977391278;
    tmp_msg_0.z = 0.6050065302652406;
    tmp_msg_0.t = 0.2938167920910596;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QQCTNARJDIJKQODIKSDSWUUFEFMDZLYIHWUZCHZQSFKPKCDVJYQTIVOJGDKGHGXGWEEXYXBNNVBHWSBPLMDEBDQAOZAXLOTERULVISYJYRGWGVBZKRLZPYCJVEOLXWGSMJZLIVWVBXUNPOOQCFMFAMTYXAMXLHNHUEXOCWAEICVATWZNPRIHKDPGFUNPR");

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
    msg.setTimeStamp(0.3412548089902425);
    msg.setSource(46681U);
    msg.setSourceEntity(229U);
    msg.setDestination(17103U);
    msg.setDestinationEntity(41U);
    msg.x = 0.23854505120496627;
    msg.y = 0.9905601925228841;
    msg.z = 0.47667545419245305;
    msg.t = 0.8433384918452217;

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
    msg.setTimeStamp(0.686165067660524);
    msg.setSource(64102U);
    msg.setSourceEntity(153U);
    msg.setDestination(63758U);
    msg.setDestinationEntity(124U);
    msg.x = 0.3335227228780905;
    msg.y = 0.3413091814070427;
    msg.z = 0.6456898689707726;
    msg.t = 0.8356563004407718;

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
    msg.setTimeStamp(0.3750411279604221);
    msg.setSource(17294U);
    msg.setSourceEntity(86U);
    msg.setDestination(63726U);
    msg.setDestinationEntity(224U);
    msg.x = 0.25849997493187704;
    msg.y = 0.2815893105131215;
    msg.z = 0.18393062339283428;
    msg.t = 0.9077219118468195;

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
    msg.setTimeStamp(0.28651413530590886);
    msg.setSource(51446U);
    msg.setSourceEntity(187U);
    msg.setDestination(17880U);
    msg.setDestinationEntity(38U);
    msg.timeout = 56316U;
    msg.name.assign("DJULIRFNQZGQVDYRTBIBGOWFNWTXWBQSOOEZEDCKFZPSAUVAYLCSVBGUFMDGJSLXBYVLDKMCPDXXPTMUHYGAEFXTZLEYKPRGJEJRCRZIONEFUPEQRDCQUSMROTLTFHTJJXZAHNUAKMAIOOLJSMTZ");
    msg.custom.assign("XUNMAONQXIKFJKYRSS");

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
    msg.setTimeStamp(0.8165143946101932);
    msg.setSource(55509U);
    msg.setSourceEntity(21U);
    msg.setDestination(64965U);
    msg.setDestinationEntity(146U);
    msg.timeout = 34022U;
    msg.name.assign("BTQQTFJVXAWSKMNCBEASORADBJNFZHHKOUO");
    msg.custom.assign("EPBGQFFJVHIFESVTCWFEMEGHPXAJPPOLTIJAHWTGESNSVYEOIUFPIRJJWGUVBQFFGONBGUKLXODSJFXPQYLULYZFLOYOXCGKRKBQRXCTAJBZVDAOAYKCCXKNMEKLCQENDKYEVRUIXXTHYZBNIRJWTCPTTPAHBSBIHMQLPADWBRUQZQUHKZSWKNUWMQDAUVTZVDAFNICNRRLGZNMWSIMVZDTYWOJMXRMQLSEYBDKRGAZCCVIHYPWUH");

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
    msg.setTimeStamp(0.42500307979408736);
    msg.setSource(26159U);
    msg.setSourceEntity(157U);
    msg.setDestination(40650U);
    msg.setDestinationEntity(139U);
    msg.timeout = 60695U;
    msg.name.assign("QQIUVEUZUKFGNWSHKKIYOGKXKOYQSDZLCPVZMDKUDHAFTEHOLRQIDLSAXPMDFUZNSRMYMAJGDWTRFSOYOWEWYJLKXBFVRTROIPTOIKVCYCCUKKAS");
    msg.custom.assign("VRPFWDXAWYPWRVRQWDHVSQZGGWQBDHETILLRVAIFPQEYOOZSKABJDQHIUGNSHFDRRCRAPULAGFXNHCMBGVXBAJFQGKKSACHZVHKECKOMIIPNXHTUYBQGXCDFUYET");

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
    msg.setTimeStamp(0.8211628115884666);
    msg.setSource(1710U);
    msg.setSourceEntity(235U);
    msg.setDestination(51657U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.47955014763693027;
    msg.lon = 0.9117217712988396;
    msg.z = 0.9399265717729285;
    msg.z_units = 47U;
    msg.speed = 0.3160607331063555;
    msg.speed_units = 226U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33429U;
    tmp_msg_0.off_x = 0.36436440764515554;
    tmp_msg_0.off_y = 0.39347333848214605;
    tmp_msg_0.off_z = 0.9483783137846101;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6994501292961196;
    msg.custom.assign("SZUFSOKQBVIPJOMZPFGSRLFJAQZTTPFNVCVJNHCAMKLCKJGZUOHZEMSNGKXMJYYXIDTACRISNYBXBGETVDZBVDQLZAPLIJYNOXDDOGWHKEIQC");

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
    msg.setTimeStamp(0.12017810015434927);
    msg.setSource(51395U);
    msg.setSourceEntity(20U);
    msg.setDestination(12844U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.056135857169534176;
    msg.lon = 0.6318161262392675;
    msg.z = 0.7550276782964213;
    msg.z_units = 160U;
    msg.speed = 0.469580032988843;
    msg.speed_units = 18U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.15761363568033104;
    tmp_msg_0.y = 0.62281914000428;
    tmp_msg_0.z = 0.37573328537317274;
    tmp_msg_0.t = 0.09957398481305257;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 21675U;
    tmp_msg_1.off_x = 0.29438281277895073;
    tmp_msg_1.off_y = 0.8718832416334044;
    tmp_msg_1.off_z = 0.09902816600884867;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.2903486229102612;
    msg.custom.assign("BUJEQMVDTAQVCKYVBTGMWRZQSCIIEHLFPTILFFVDWZLNLDYBSHJ");

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
    msg.setTimeStamp(0.4304657432728989);
    msg.setSource(33682U);
    msg.setSourceEntity(41U);
    msg.setDestination(35258U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.0562244301510989;
    msg.lon = 0.916182698191893;
    msg.z = 0.22197469353829158;
    msg.z_units = 208U;
    msg.speed = 0.17195233508356234;
    msg.speed_units = 241U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41557U;
    tmp_msg_0.off_x = 0.928819313772754;
    tmp_msg_0.off_y = 0.996937036546349;
    tmp_msg_0.off_z = 0.712972254845797;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.27223176334281685;
    msg.custom.assign("FBSACYHSXVFBGHJXGHYWSRHJCAFAMGEQFGEOFBDDGKNQEDAEKVTYZSHFUDVESUOCOZZVTZOWJPOKX");

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
    msg.setTimeStamp(0.7440743406348971);
    msg.setSource(56249U);
    msg.setSourceEntity(220U);
    msg.setDestination(64622U);
    msg.setDestinationEntity(4U);
    msg.vid = 48588U;
    msg.off_x = 0.7662481028539653;
    msg.off_y = 0.9906624346425844;
    msg.off_z = 0.07948525956204233;

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
    msg.setTimeStamp(0.5887511103086813);
    msg.setSource(5171U);
    msg.setSourceEntity(21U);
    msg.setDestination(62522U);
    msg.setDestinationEntity(122U);
    msg.vid = 28822U;
    msg.off_x = 0.7326948559894934;
    msg.off_y = 0.6984151435338644;
    msg.off_z = 0.12488707333878224;

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
    msg.setTimeStamp(0.3166125619501874);
    msg.setSource(52761U);
    msg.setSourceEntity(93U);
    msg.setDestination(45248U);
    msg.setDestinationEntity(103U);
    msg.vid = 35461U;
    msg.off_x = 0.11153031802123348;
    msg.off_y = 0.23873305799346656;
    msg.off_z = 0.12016376296099007;

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
    msg.setTimeStamp(0.6044727262514898);
    msg.setSource(11201U);
    msg.setSourceEntity(18U);
    msg.setDestination(38274U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.7005124282905429);
    msg.setSource(37143U);
    msg.setSourceEntity(75U);
    msg.setDestination(26332U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.029708985633419616);
    msg.setSource(58313U);
    msg.setSourceEntity(99U);
    msg.setDestination(3752U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.7738999444989759);
    msg.setSource(31196U);
    msg.setSourceEntity(129U);
    msg.setDestination(18283U);
    msg.setDestinationEntity(161U);
    msg.mid = 28982U;

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
    msg.setTimeStamp(0.7757318926396477);
    msg.setSource(40466U);
    msg.setSourceEntity(47U);
    msg.setDestination(13069U);
    msg.setDestinationEntity(87U);
    msg.mid = 20554U;

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
    msg.setTimeStamp(0.6024681008233146);
    msg.setSource(40118U);
    msg.setSourceEntity(205U);
    msg.setDestination(25910U);
    msg.setDestinationEntity(140U);
    msg.mid = 30810U;

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
    msg.setTimeStamp(0.8946613729631853);
    msg.setSource(29954U);
    msg.setSourceEntity(148U);
    msg.setDestination(58134U);
    msg.setDestinationEntity(121U);
    msg.state = 57U;
    msg.eta = 52165U;
    msg.info.assign("EKYYPUVXYQBIODXUIAZQNVMGRMSHRWMXMDUPDZTLGULIBEEAFWKEMVHGAWBJPPTECQTCIVSJRAJOLWDJOZNDHNFPYFLSLDFTGAUNJBRIHQQZQYIYYPIBWUQAVCDVQOTFGLUWAJRSPFCKKTEAIV");

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
    msg.setTimeStamp(0.7929080380878575);
    msg.setSource(38378U);
    msg.setSourceEntity(26U);
    msg.setDestination(23795U);
    msg.setDestinationEntity(218U);
    msg.state = 123U;
    msg.eta = 52831U;
    msg.info.assign("OMLJDIYQDDIZWRENVRUAQPIZSBATBLCVWOGHMGGCVIWVZFEQXYUQOZLKYVTTURQUEBKOHSVWVVNEMGOAMBEETGUYUIPZUSSKYUOAXXGLLAMBXJFJNGNNILMHDFWJWSTXULBDPQISWFAMWRQLSHAPVCHFX");

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
    msg.setTimeStamp(0.7984363855717101);
    msg.setSource(37552U);
    msg.setSourceEntity(20U);
    msg.setDestination(34953U);
    msg.setDestinationEntity(198U);
    msg.state = 4U;
    msg.eta = 24766U;
    msg.info.assign("YRGOVMBERPHFIWKVICZSHXCXZWOSPKPYEDTCUSVVEVVZLJDLPCBMLQNCYUIUMMAATOIXNZWTQFETFLXNDBILBTUNJTBFDVWSRLAQUWNUQVOAHMTAFJJCJZDFKFMBGULDHRWEWTGACAOSXHZFEWZWLRSGEXMQKICOSDQYDNSDLCQARJPJRETBRFGQ");

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
    msg.setTimeStamp(0.9267931760119965);
    msg.setSource(31896U);
    msg.setSourceEntity(213U);
    msg.setDestination(97U);
    msg.setDestinationEntity(245U);
    msg.system = 5387U;
    msg.duration = 8722U;
    msg.speed = 0.759662912535134;
    msg.speed_units = 51U;
    msg.x = 0.29226140026891745;
    msg.y = 0.6142171686084653;
    msg.z = 0.6520585900418612;
    msg.z_units = 11U;

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
    msg.setTimeStamp(0.1794550259063873);
    msg.setSource(14737U);
    msg.setSourceEntity(223U);
    msg.setDestination(41990U);
    msg.setDestinationEntity(63U);
    msg.system = 11254U;
    msg.duration = 5526U;
    msg.speed = 0.697676166604949;
    msg.speed_units = 37U;
    msg.x = 0.5051099167960643;
    msg.y = 0.3072815295511757;
    msg.z = 0.6403837909480012;
    msg.z_units = 178U;

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
    msg.setTimeStamp(0.9128643513721991);
    msg.setSource(20459U);
    msg.setSourceEntity(32U);
    msg.setDestination(5178U);
    msg.setDestinationEntity(180U);
    msg.system = 34420U;
    msg.duration = 27065U;
    msg.speed = 0.3790525908911889;
    msg.speed_units = 148U;
    msg.x = 0.3648613788389836;
    msg.y = 0.4192584418802078;
    msg.z = 0.5335662528963374;
    msg.z_units = 42U;

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
    msg.setTimeStamp(0.2836199652089014);
    msg.setSource(3632U);
    msg.setSourceEntity(172U);
    msg.setDestination(25945U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.9718936056628288;
    msg.lon = 0.555221520374691;
    msg.speed = 0.21025191998282333;
    msg.speed_units = 146U;
    msg.duration = 65173U;
    msg.sys_a = 39496U;
    msg.sys_b = 59859U;
    msg.move_threshold = 0.26622230364491273;

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
    msg.setTimeStamp(0.8611295505329326);
    msg.setSource(32663U);
    msg.setSourceEntity(68U);
    msg.setDestination(28487U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.8090929908950407;
    msg.lon = 0.41604480858796866;
    msg.speed = 0.1268514633297002;
    msg.speed_units = 158U;
    msg.duration = 39518U;
    msg.sys_a = 13039U;
    msg.sys_b = 9776U;
    msg.move_threshold = 0.5535760671951088;

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
    msg.setTimeStamp(0.9619591577472804);
    msg.setSource(40940U);
    msg.setSourceEntity(18U);
    msg.setDestination(29769U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.8644589169867698;
    msg.lon = 0.6867511219918789;
    msg.speed = 0.2331760561008107;
    msg.speed_units = 55U;
    msg.duration = 33947U;
    msg.sys_a = 28505U;
    msg.sys_b = 21640U;
    msg.move_threshold = 0.5134376428470812;

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
    msg.setTimeStamp(0.9003099346831857);
    msg.setSource(54630U);
    msg.setSourceEntity(77U);
    msg.setDestination(18174U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.7021138897467063;
    msg.lon = 0.23589630026603026;
    msg.z = 0.6585555488553754;
    msg.z_units = 126U;
    msg.speed = 0.3910789221841343;
    msg.speed_units = 92U;
    msg.custom.assign("EKHVCHHBGYUINSIKZOOLNMCDYFPMWZVEYYCXOIHNDTRYMWGJLNFIXSKTPKQLIJGAGXJWTGLJBQFYVCQOOWSFTBLEAJURCUQKZOMPHAJDFLQHWSFFXQHIORQKDAMDUXVUYQFINXEBYJBRLUTAWRCUCPTPJBKIMWBODSNZREWTCLCXWNP");

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
    msg.setTimeStamp(0.1633142654000893);
    msg.setSource(63655U);
    msg.setSourceEntity(178U);
    msg.setDestination(11704U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.5645851972961469;
    msg.lon = 0.7590775143251365;
    msg.z = 0.05358746975897888;
    msg.z_units = 35U;
    msg.speed = 0.4838639370314748;
    msg.speed_units = 2U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.039643250073339575;
    tmp_msg_0.lon = 0.9952422448564551;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FWQXQKEHVJDNJWYFXISWGOROXAOVUIPMERNWYKKDFBTCZIYHQLYNUVQPRQSAHBFGQQXQPGPOJXVADRLFAYJPEQNRDRJMFTJZVIMUSOOCEWXUMQDEVWMXJCUGYRUIMIEJECCXKPAADAHSCCFTZNGTHVZCYGAUVNHLLGDRYNVYBSOZEVTABXXIKSWWZZOTILFJEPZHZSJFLKMOKHSAUGGPNCCLRIZEBNSHOBLPBUITWKL");

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
    msg.setTimeStamp(0.7196412150895124);
    msg.setSource(29266U);
    msg.setSourceEntity(112U);
    msg.setDestination(24694U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.05337066269908619;
    msg.lon = 0.9831692274942674;
    msg.z = 0.5272323119243225;
    msg.z_units = 30U;
    msg.speed = 0.02209948720293342;
    msg.speed_units = 73U;
    msg.custom.assign("XZPNMBMEYKGVXXTUPUABSWNFENDJOQIIUXZICAPKUBTHADKRFIMTLYBZVLJKFOQFOHDGPHULFIYTYURHWVBCWNJCBYDWXIWRIVYJYOEHVLGKHREALHJNDFITAGXYSLUUPWRDWDNTCCEZKDLGSOKSDNGCCAIZSRSVZQAJMXGMQMSOGPZTF");

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
    msg.setTimeStamp(0.5325914433941239);
    msg.setSource(45221U);
    msg.setSourceEntity(99U);
    msg.setDestination(8934U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.13882966938480945;
    msg.lon = 0.9758184492455972;

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
    msg.setTimeStamp(0.5288561446634896);
    msg.setSource(49501U);
    msg.setSourceEntity(141U);
    msg.setDestination(15505U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.750673664823621;
    msg.lon = 0.9396459526362344;

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
    msg.setTimeStamp(0.8023224151124707);
    msg.setSource(26206U);
    msg.setSourceEntity(10U);
    msg.setDestination(56660U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.06882900195950958;
    msg.lon = 0.018103893971516904;

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
    msg.setTimeStamp(0.15449256469824846);
    msg.setSource(50805U);
    msg.setSourceEntity(168U);
    msg.setDestination(60849U);
    msg.setDestinationEntity(46U);
    msg.timeout = 6947U;
    msg.lat = 0.6372723220564862;
    msg.lon = 0.8970818522556393;
    msg.z = 0.4750857528930843;
    msg.z_units = 6U;
    msg.pitch = 0.9433231284470515;
    msg.amplitude = 0.37103162442337545;
    msg.duration = 3029U;
    msg.speed = 0.9140927435993815;
    msg.speed_units = 169U;
    msg.radius = 0.09993957242114493;
    msg.direction = 114U;
    msg.custom.assign("URRPCTXREVQWDOQAJGKFAMMNNMJDNQKBFHNCKTCDIKZCVHIOZKNLATVHUIEAPPVGYBLVIWWOMLHWGWSCOT");

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
    msg.setTimeStamp(0.712164964288176);
    msg.setSource(38896U);
    msg.setSourceEntity(190U);
    msg.setDestination(15406U);
    msg.setDestinationEntity(125U);
    msg.timeout = 37591U;
    msg.lat = 0.5948699258149016;
    msg.lon = 0.024502475205711804;
    msg.z = 0.2237519887307744;
    msg.z_units = 239U;
    msg.pitch = 0.5825487970347786;
    msg.amplitude = 0.05809897082097282;
    msg.duration = 25677U;
    msg.speed = 0.3904953404018606;
    msg.speed_units = 135U;
    msg.radius = 0.26368610252183944;
    msg.direction = 56U;
    msg.custom.assign("PZBXKOHFTGZOTNBASYKHJJDNGRMLHDVEYGDMVXIHGAVVRSCFHECGKZQEKURZJKUMASMUMSKGSDNYUXXWIGNTOELTLOMEBIOLLDNKRIMLDLWJQUYRYORPLGAWEQZHUCBIAQZIBJUECFTZNXWMBXCHDGQIADWPIGYCMKPVEP");

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
    msg.setTimeStamp(0.9883350073618714);
    msg.setSource(8020U);
    msg.setSourceEntity(5U);
    msg.setDestination(60857U);
    msg.setDestinationEntity(50U);
    msg.timeout = 25684U;
    msg.lat = 0.17065336938809306;
    msg.lon = 0.8703689621932009;
    msg.z = 0.6988449754196021;
    msg.z_units = 244U;
    msg.pitch = 0.4122732504318557;
    msg.amplitude = 0.9935054379804213;
    msg.duration = 40904U;
    msg.speed = 0.45331617484729114;
    msg.speed_units = 73U;
    msg.radius = 0.7254930493887943;
    msg.direction = 93U;
    msg.custom.assign("KQHEMLFWVMAFLYELNETZYBJLGKHYSQOFKUFSJVMGEHNSHHNRHDLWSCLODLOITOJJDVONIABRQFEJUFPAZIHBWVOQSJZEWIUKBXBXLGSTRMCOYWWVMIZITB");

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
    msg.setTimeStamp(0.026115370414701244);
    msg.setSource(64374U);
    msg.setSourceEntity(236U);
    msg.setDestination(33032U);
    msg.setDestinationEntity(23U);
    msg.formation_name.assign("VCJLYPEQINZQDLUCDOEVQQKGXJBHNJEHHBAYPGGRPRXPWELVBURGJSUAQKQEYXMLJCDFOCZXTESLMSCXJLANMHTGWZRRISPSBFFVWUCCBYMRFITOCUWGSNKFTNYBODIHOKVNOMDVTATOMTSAJFAIWQFYRKIHGUUBCSVZVYULAMREHDWTKPZKNHBXVUWXGHCTQZFRNIZLVODWUZJPZGXJBESJIIBANNSYOQE");
    msg.reference_frame = 132U;
    msg.custom.assign("HMMNGHOCTYINPEDITZOLNRPVGLJRUVXATJMRQLPQWTLKOQUOCWLENPPBRPHENWCERPVMBURCTUNMEUNHDMJZJYKSKEFOJIJYYHPOKQOCEGJWVLUUDFIBCQBZKGIWYHTASXEQKMAPXIIDOBLTFRLV");

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
    msg.setTimeStamp(0.6022519072472564);
    msg.setSource(40910U);
    msg.setSourceEntity(65U);
    msg.setDestination(56128U);
    msg.setDestinationEntity(51U);
    msg.formation_name.assign("UASHIREJJOYWLSRKSIROLAZRGGCKQPDFLGZSZFXWGTXWRBCLMDKUKSUIYXUMNTBKHVAAUGHPHPQBZQKDTXOVMPMHFZOOGHXJRAVHVBDLUOVNVSADGEIICKANFWZMXQSFZGNKBTPFCQNUOBR");
    msg.reference_frame = 218U;
    msg.custom.assign("GQCHKBTWQHJGEJIZOQSTEBHYPZZUONJJRUVDHSVCQKLKJNNKVPMBOZTMMXCIOUEZMXJJTDYSHRXJMIIHGLSFDGSWVIFKXSXYBJHOLEZEIRGBVALPCCEYPVCTXTITHVVRGNDBDLIMNXRWNWMGKVXFBYRSTHPUAUSWMEWZBFQKNIGEQZSLW");

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
    msg.setTimeStamp(0.0941967167883141);
    msg.setSource(6074U);
    msg.setSourceEntity(30U);
    msg.setDestination(58676U);
    msg.setDestinationEntity(75U);
    msg.formation_name.assign("OVCEJYAYCCETQHFUZSZJXKCIJMPWEJNIQGGLEMAHPSRUH");
    msg.reference_frame = 126U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59547U;
    tmp_msg_0.off_x = 0.45622378185977874;
    tmp_msg_0.off_y = 0.20258976709946586;
    tmp_msg_0.off_z = 0.6605701810724296;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WIKLUHQCFFDWTFWBZALYJCLGIXESJEZAEZSLPBKKKVRYOVXBFQSLXPRPEZOIQJBWTIUBHRPGTESLYYGXYIOGRNRJPOZJDUGZRNMLMJCPAVMWAZLOXBVIVAEURRDCHIYDMBETOBBMVNY");

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
    msg.setTimeStamp(0.6308320374604744);
    msg.setSource(59371U);
    msg.setSourceEntity(225U);
    msg.setDestination(23979U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("HRGWIRMJGCGAQYELSSISRSWQNXZSZXYRTFHPASDBTWRZUNCMMQUXOLBIYDHTXTFXGGEJCGFFCKRUOYYZHZAQPLEBSAEWJSAYHMQFPGEAOPJHFMCWBKWHKNVLRDYBOPOTLUTDDVGBWQZKBPCZVOQRUNIIUCOIWQALATNOMELIUYMZBLYMMKZBGJVATXRJEVVUIEFNTNJHTOBVFPK");
    msg.formation_name.assign("IQSOJHPCGKEDAGUCFUBMSIFOLBNTHQUEDQJYSVJLTQIGMDFFYFLJWDRKQISZVPPLWEQDWKGBQIMLZKIXSKMVPROTMRNNKXR");
    msg.plan_id.assign("UNYZYAXPCGIAIRAVBQRLXPOUQTQDHRTSLMEWVTUCJNITVVIXBZLYGAXHTPUMBYWBERGPQMOOMRNCWDLLAKKNBQIPWJAJVWSYCJIHCRJVPEDYQJQEMJVAIEFSMILHESBDUQNNDCYHCOKXAVHTXDWGFXPV");
    msg.description.assign("GRWSFAELTHLXFOMINPMAPJQMJFBPJCQKLZIZGJKUNTSDHDLSVCCXRWPOUHMKEMGCHTKJQFDXPNDZJRFNVXIUOTLJNUKYCUOZMVBEWPR");
    msg.leader_speed = 0.9866122514569955;
    msg.leader_bank_lim = 0.6802843732043851;
    msg.pos_sim_err_lim = 0.7134775628266286;
    msg.pos_sim_err_wrn = 0.2703015261214281;
    msg.pos_sim_err_timeout = 17783U;
    msg.converg_max = 0.4353956819597955;
    msg.converg_timeout = 12746U;
    msg.comms_timeout = 45777U;
    msg.turb_lim = 0.2177291792324143;
    msg.custom.assign("MRZKRZYZWAVVUQWJIMPGLSWBSQMEXKXFUUEOSIUMIZLTVYOUEXJJKNTZLAHKSLAHZBJTHDQSBCMEERYQGVAOSWCLXNQICTRZQPYNDYCLRBTYRKVGVQPEFDODAFEHZHJNCEUJCBGIKUWQHLWMFKTZTCFUNAKPEXAFWBXCPN");

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
    msg.setTimeStamp(0.6177533610037171);
    msg.setSource(59583U);
    msg.setSourceEntity(39U);
    msg.setDestination(4746U);
    msg.setDestinationEntity(216U);
    msg.group_name.assign("CXWIBUVYRGXNOQQMDXMDYPLHTDCDSBZFMYIKHSTRIXYHUHCGJLGQGPWXRYBGTFBCTJIMIHKC");
    msg.formation_name.assign("SNMQKNVNLWGTNACXDEFRRLXSADTMIZHBRXRXFBMZPNIKMDMBAWNFQGVWOUIGMDYVFVCWPQLHLYYGBOPKJZKJPUCLZUFTMAWEJQQBXYTJYWTZETGXLAPPCWBWWTYZHHOSGJFQBEJKFAMSSCDEPUVGXKRLZFHDEAOIIFUVZIQOBSOELNOUBYDKJIJVPDXEJHNYXCISHHLINCTXASNRAVVIBARYCQGUO");
    msg.plan_id.assign("BGCPURJJQWXJJFVMEVYJTOTXHPCAKYDVIZOCLNASKIERLEGMXFKUINRYBSFLTIRKMVUDSCPDMCWADYHCCOKKGTDGRODALQYNHMLHKIRLRTBJRBSRLPDKDBUQFZNNCANGKBHYGOTQABWESUFBEAZNCYSWYAXHIXOZIFTWGVTMWEHOWPMJUZZLBWFLIPZYQGWIJFOFPSVQQGMPTJXNOYEZPXSKNEVUWEXGAXUNTHSQVHUPMJHSFZAVZVDQRUCOE");
    msg.description.assign("LZTVJHSEVMKWGMTAHZIKLYAZJFWDMGBYMEQKOMHSTAPDXYFFRUNDMZJMRDDGNQCPWRXESVBOSORFJSCKJIIXODHDZMSQCQRPBRVBSIYPGCIXIHLVWVTKYEGMCOB");
    msg.leader_speed = 0.5793272091970696;
    msg.leader_bank_lim = 0.8324588205831197;
    msg.pos_sim_err_lim = 0.4246450017222556;
    msg.pos_sim_err_wrn = 0.8776872958559603;
    msg.pos_sim_err_timeout = 62351U;
    msg.converg_max = 0.9782428176111643;
    msg.converg_timeout = 31696U;
    msg.comms_timeout = 11933U;
    msg.turb_lim = 0.13883642305813715;
    msg.custom.assign("EFMHURENVEINGJXCGHHPOTJMMSBXIFBDZSLPITXKGQPRUU");

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
    msg.setTimeStamp(0.1959288950296092);
    msg.setSource(37673U);
    msg.setSourceEntity(32U);
    msg.setDestination(38783U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("JGFOQBBJKKDMYHMGDQJCRBRWWWYJHNYHAYUQIDNRWGNEFRMRRMF");
    msg.formation_name.assign("VDEHQMNFFMSZZYSGDSVWMKPAMQEVTEOYVRUTRUDYWPDOWMRRWPBDYVCPEJFGPHHPKBLNBLFPYRLZJASBLRPOAECTKXXUJQIGSKKJWTONXCVGFQLZYRHHFGIZIJLQEHTUYGY");
    msg.plan_id.assign("XKIXXUKCDBJFDPFKEHQRARAGZGALFYMWSJNNHEBHYWNMKLCPOOPBUYMUFXLUPEXCALUJDYDMYR");
    msg.description.assign("VFPINUIKFCWVTOJSALCGMWYMILXYBVLUWOEOHHVNZKRAOEWUERHBBDMUUFPVXLWYBZQFEUGHMJPGAYMFHKTFRRCMXVBCXFSJZQDHTQEPAPNQQDECHCYROVLQALJNZGQRQEMXYGUDBWTNDVZBPAQAAPGLSSLTOWSYUJOUBLBIRYNTKCSJMGZOCNJDWXJMDAJSYRKVTIBIGHSKQZEFKVDCRIPIPANZZKSEXINKZDGSRDMNXHFEFJITTOXK");
    msg.leader_speed = 0.18162576346445736;
    msg.leader_bank_lim = 0.25325253744205944;
    msg.pos_sim_err_lim = 0.017811594015206933;
    msg.pos_sim_err_wrn = 0.3839064525943463;
    msg.pos_sim_err_timeout = 28135U;
    msg.converg_max = 0.3006657096145796;
    msg.converg_timeout = 29841U;
    msg.comms_timeout = 12720U;
    msg.turb_lim = 0.47866236005782337;
    msg.custom.assign("VRHUNNZAKZNIIVXNLLQQEZZWQMEIZPXPGTXHQOOLBQNDINBFQDUKHSDZRGHRAAVGPRFVGBBTDJGYCJBUSCOISCCGBGILJAXYSJJMEWKXDWZTTGNYYOAHIMXVUERWMMZIWMAYAUWTVWBRUOADSSCNAKCHMRFEFMNOPYMXIUOEBLPYXKOCRDWUSSGVJPVTIAVLLHCPKFXJTKNFLQVLZ");

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
    msg.setTimeStamp(0.28889467025544646);
    msg.setSource(48152U);
    msg.setSourceEntity(250U);
    msg.setDestination(7296U);
    msg.setDestinationEntity(41U);
    msg.control_src = 32241U;
    msg.control_ent = 180U;
    msg.timeout = 0.22668147103628;
    msg.loiter_radius = 0.13100521405250332;
    msg.altitude_interval = 0.33961112621082645;

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
    msg.setTimeStamp(0.22031835004394096);
    msg.setSource(23684U);
    msg.setSourceEntity(11U);
    msg.setDestination(17406U);
    msg.setDestinationEntity(7U);
    msg.control_src = 65072U;
    msg.control_ent = 27U;
    msg.timeout = 0.596920772364716;
    msg.loiter_radius = 0.7898149366362672;
    msg.altitude_interval = 0.02699475127067308;

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
    msg.setTimeStamp(0.24551399744628732);
    msg.setSource(58148U);
    msg.setSourceEntity(213U);
    msg.setDestination(37799U);
    msg.setDestinationEntity(167U);
    msg.control_src = 33771U;
    msg.control_ent = 247U;
    msg.timeout = 0.3269537954592243;
    msg.loiter_radius = 0.5400176804625522;
    msg.altitude_interval = 0.25774413352195535;

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
    msg.setTimeStamp(0.23698300275350204);
    msg.setSource(25849U);
    msg.setSourceEntity(119U);
    msg.setDestination(15313U);
    msg.setDestinationEntity(174U);
    msg.flags = 181U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5902674320639857;
    tmp_msg_0.speed_units = 69U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9774497046792009;
    tmp_msg_1.z_units = 196U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8727824908092197;
    msg.lon = 0.01291093412304578;
    msg.radius = 0.007939989579735518;

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
    msg.setTimeStamp(0.256858479819832);
    msg.setSource(64970U);
    msg.setSourceEntity(37U);
    msg.setDestination(64808U);
    msg.setDestinationEntity(138U);
    msg.flags = 139U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.20631278971912825;
    tmp_msg_0.speed_units = 242U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.630429752828896;
    tmp_msg_1.z_units = 197U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.522217473712155;
    msg.lon = 0.8365820569453964;
    msg.radius = 0.3431965515113268;

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
    msg.setTimeStamp(0.6375170618426201);
    msg.setSource(27428U);
    msg.setSourceEntity(220U);
    msg.setDestination(18059U);
    msg.setDestinationEntity(16U);
    msg.flags = 127U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3395025637061254;
    tmp_msg_0.speed_units = 43U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3838698745624408;
    tmp_msg_1.z_units = 235U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.09442688199799387;
    msg.lon = 0.07461841554864068;
    msg.radius = 0.02044547471179281;

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
    msg.setTimeStamp(0.9387943106134405);
    msg.setSource(48190U);
    msg.setSourceEntity(123U);
    msg.setDestination(34407U);
    msg.setDestinationEntity(225U);
    msg.control_src = 236U;
    msg.control_ent = 145U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 17U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1917321693159555;
    tmp_tmp_msg_0_0.speed_units = 8U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.12651101541165566;
    tmp_tmp_msg_0_1.z_units = 5U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7016826986001383;
    tmp_msg_0.lon = 0.8446811268972083;
    tmp_msg_0.radius = 0.8928640555273146;
    msg.reference.set(tmp_msg_0);
    msg.state = 215U;
    msg.proximity = 188U;

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
    msg.setTimeStamp(0.9589251687590454);
    msg.setSource(61186U);
    msg.setSourceEntity(132U);
    msg.setDestination(6725U);
    msg.setDestinationEntity(86U);
    msg.control_src = 31375U;
    msg.control_ent = 68U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 156U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.07821232528065125;
    tmp_tmp_msg_0_0.speed_units = 74U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0733954541632611;
    tmp_tmp_msg_0_1.z_units = 197U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.24571783999023988;
    tmp_msg_0.lon = 0.8250044653916658;
    tmp_msg_0.radius = 0.26692587935764045;
    msg.reference.set(tmp_msg_0);
    msg.state = 21U;
    msg.proximity = 25U;

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
    msg.setTimeStamp(0.021361837027124908);
    msg.setSource(2811U);
    msg.setSourceEntity(131U);
    msg.setDestination(10337U);
    msg.setDestinationEntity(190U);
    msg.control_src = 50713U;
    msg.control_ent = 179U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 182U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7276184920522746;
    tmp_tmp_msg_0_0.speed_units = 222U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5002338225325238;
    tmp_tmp_msg_0_1.z_units = 28U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.401061087302216;
    tmp_msg_0.lon = 0.375591339106605;
    tmp_msg_0.radius = 0.12944472168997778;
    msg.reference.set(tmp_msg_0);
    msg.state = 110U;
    msg.proximity = 96U;

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
    msg.setTimeStamp(0.8784038810629461);
    msg.setSource(56507U);
    msg.setSourceEntity(104U);
    msg.setDestination(4535U);
    msg.setDestinationEntity(55U);
    msg.ax_cmd = 0.6127558485819352;
    msg.ay_cmd = 0.5834716063880024;
    msg.az_cmd = 0.1363950705804985;
    msg.ax_des = 0.28570277481114636;
    msg.ay_des = 0.17019100048551605;
    msg.az_des = 0.9335202271787885;
    msg.virt_err_x = 0.10297902756811816;
    msg.virt_err_y = 0.848078550054194;
    msg.virt_err_z = 0.7593931020597221;
    msg.surf_fdbk_x = 0.29352283506126053;
    msg.surf_fdbk_y = 0.38906984731679506;
    msg.surf_fdbk_z = 0.45918015413446067;
    msg.surf_unkn_x = 0.3890427950354245;
    msg.surf_unkn_y = 0.993339457074201;
    msg.surf_unkn_z = 0.8973250383528634;
    msg.ss_x = 0.09013945846553972;
    msg.ss_y = 0.3805354460601875;
    msg.ss_z = 0.687228188797366;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UAREDHKKYAHRRFNPCVBCLTMFOVDHNPILNQPDOTLHXSZZIFLXWWZMXNYOQNHOXYIGMRALTGWXYGPHTWBMOKEOCWGQUQJCAAJKKZMGYFJLPBDEYSQYTKJDVJHHBPDFEEEMXUNYSOVTEIRUQNBFDOCGXAKWEAVCQICGMZYFYKAIFRCKXGSQUDFRUTBWXUULIJZJGZQPNVVRHTABPVCNGVZXMTZSASKIIREUDOHSQWJLOVWJTB");
    tmp_msg_0.dist = 0.5020935206116004;
    tmp_msg_0.err = 0.34088525994346575;
    tmp_msg_0.ctrl_imp = 0.313092831332476;
    tmp_msg_0.rel_dir_x = 0.2820658362783003;
    tmp_msg_0.rel_dir_y = 0.7699707205614649;
    tmp_msg_0.rel_dir_z = 0.567066633798361;
    tmp_msg_0.err_x = 0.16544482194198962;
    tmp_msg_0.err_y = 0.5069196881699524;
    tmp_msg_0.err_z = 0.2515840941486125;
    tmp_msg_0.rf_err_x = 0.10737282411835947;
    tmp_msg_0.rf_err_y = 0.2989972295622664;
    tmp_msg_0.rf_err_z = 0.11901753724563102;
    tmp_msg_0.rf_err_vx = 0.8148252450755519;
    tmp_msg_0.rf_err_vy = 0.4631961564398317;
    tmp_msg_0.rf_err_vz = 0.3620201593263769;
    tmp_msg_0.ss_x = 0.6713028349553889;
    tmp_msg_0.ss_y = 0.6761529887339046;
    tmp_msg_0.ss_z = 0.8429440550846374;
    tmp_msg_0.virt_err_x = 0.9874458945196443;
    tmp_msg_0.virt_err_y = 0.34649944414879785;
    tmp_msg_0.virt_err_z = 0.05319982418760372;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.2895920214514046);
    msg.setSource(61030U);
    msg.setSourceEntity(211U);
    msg.setDestination(65429U);
    msg.setDestinationEntity(12U);
    msg.ax_cmd = 0.3368857778309211;
    msg.ay_cmd = 0.7213875266641444;
    msg.az_cmd = 0.3793080999284295;
    msg.ax_des = 0.3573481224910039;
    msg.ay_des = 0.7949579050972266;
    msg.az_des = 0.3514833770562982;
    msg.virt_err_x = 0.3020622838413567;
    msg.virt_err_y = 0.28956009626419266;
    msg.virt_err_z = 0.11462303199531476;
    msg.surf_fdbk_x = 0.011539752441819928;
    msg.surf_fdbk_y = 0.07565859636779626;
    msg.surf_fdbk_z = 0.9826080083026066;
    msg.surf_unkn_x = 0.9318020703940816;
    msg.surf_unkn_y = 0.3010706669110751;
    msg.surf_unkn_z = 0.42933478389683544;
    msg.ss_x = 0.07480556926518811;
    msg.ss_y = 0.07274892859573134;
    msg.ss_z = 0.8685860470323817;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RPQBTUSFNJFCFSRPIFBXZWBRJZPNYODUDVHEWKNEVUSAZMUSEAWQQCQTYKISVFRDOYUOIHGJYCRSWOZEGNGHBXPHMBAOAZXGGAIBTJBMTTHAAPVVUMZXLGLJPBFMAMVZOXWSVYSIDIJVHNFXRXDCWBINDJEPDPVTOEDKG");
    tmp_msg_0.dist = 0.4554721322432884;
    tmp_msg_0.err = 0.9283454367792184;
    tmp_msg_0.ctrl_imp = 0.8207904194263449;
    tmp_msg_0.rel_dir_x = 0.33523697101889427;
    tmp_msg_0.rel_dir_y = 0.27177104010243935;
    tmp_msg_0.rel_dir_z = 0.6093422940807351;
    tmp_msg_0.err_x = 0.4525013414366542;
    tmp_msg_0.err_y = 0.4106098978604932;
    tmp_msg_0.err_z = 0.1364781255921388;
    tmp_msg_0.rf_err_x = 0.8915287736329871;
    tmp_msg_0.rf_err_y = 0.8135419597101528;
    tmp_msg_0.rf_err_z = 0.3902464047362202;
    tmp_msg_0.rf_err_vx = 0.7369193106385816;
    tmp_msg_0.rf_err_vy = 0.8155777464495257;
    tmp_msg_0.rf_err_vz = 0.8607097450625021;
    tmp_msg_0.ss_x = 0.13087455012981686;
    tmp_msg_0.ss_y = 0.591982797519989;
    tmp_msg_0.ss_z = 0.07206827028502161;
    tmp_msg_0.virt_err_x = 0.9437487847392789;
    tmp_msg_0.virt_err_y = 0.4596039379907012;
    tmp_msg_0.virt_err_z = 0.7636533122894639;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.49640221408866936);
    msg.setSource(18665U);
    msg.setSourceEntity(97U);
    msg.setDestination(42509U);
    msg.setDestinationEntity(78U);
    msg.ax_cmd = 0.1682618853650898;
    msg.ay_cmd = 0.08594549735620571;
    msg.az_cmd = 0.6543956791330884;
    msg.ax_des = 0.5981174849486944;
    msg.ay_des = 0.8439569683873842;
    msg.az_des = 0.4349648518805045;
    msg.virt_err_x = 0.024660733114563183;
    msg.virt_err_y = 0.5241287218052136;
    msg.virt_err_z = 0.18566188358102687;
    msg.surf_fdbk_x = 0.11374378456173728;
    msg.surf_fdbk_y = 0.8313925355246286;
    msg.surf_fdbk_z = 0.6267272975106882;
    msg.surf_unkn_x = 0.8375780026832387;
    msg.surf_unkn_y = 0.17184289296327615;
    msg.surf_unkn_z = 0.41882377034236706;
    msg.ss_x = 0.3981953938836881;
    msg.ss_y = 0.5547323180779863;
    msg.ss_z = 0.23808294807621244;

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
    msg.setTimeStamp(0.2651740838410207);
    msg.setSource(43862U);
    msg.setSourceEntity(67U);
    msg.setDestination(58536U);
    msg.setDestinationEntity(146U);
    msg.s_id.assign("VLYEMQHXOPOKXIYZPMHIPHJCSMBBVGGFZYLAHEKZDWZNRSELZJXGWEHNOYLTDOWGMJCKFSAEHVCGQZNNIWYHSVULRXGFFZTDRQTLPTIRFGWSNFSMCUOQPGQTKWEUJZVRBBSYQDOCXOPTIJVYKVIR");
    msg.dist = 0.14335998198514843;
    msg.err = 0.04540011372649466;
    msg.ctrl_imp = 0.18821323583405436;
    msg.rel_dir_x = 0.598669878989479;
    msg.rel_dir_y = 0.3088160588904384;
    msg.rel_dir_z = 0.9467037007158874;
    msg.err_x = 0.292354664391518;
    msg.err_y = 0.6620113323410101;
    msg.err_z = 0.48452775269991977;
    msg.rf_err_x = 0.6727037459158899;
    msg.rf_err_y = 0.484124540677601;
    msg.rf_err_z = 0.2819211231617763;
    msg.rf_err_vx = 0.16596113005038238;
    msg.rf_err_vy = 0.2833998677436017;
    msg.rf_err_vz = 0.18320168386259217;
    msg.ss_x = 0.002284893879956229;
    msg.ss_y = 0.3965403015041248;
    msg.ss_z = 0.7860737975702072;
    msg.virt_err_x = 0.968112249742994;
    msg.virt_err_y = 0.4846044337522518;
    msg.virt_err_z = 0.7675500178248164;

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
    msg.setTimeStamp(0.23908149127902323);
    msg.setSource(64348U);
    msg.setSourceEntity(248U);
    msg.setDestination(65020U);
    msg.setDestinationEntity(163U);
    msg.s_id.assign("WLUDIXPHZVVNLJZOWYYJJLSFWBZNWSLQCKXNYVIEUVUWHDUNDNUUYJZKGYVTJEQHFAPNRXCHORTEWQQKTAAIHXLHBBDGMJNYSVUARRSMGMSWCEEYEQQVACBBMPGHKFQXFTKAYOATAPZSMCQDLFOVYSPRIXMOWOBRLRXWYHIGZDPEMGWLCXZKRBVFRQNPCETZXOVGOGEJMJJAMISGPKIRQHCDKDCJNAMTIFDBOFUSFBCLOKHKETZGLBXUSZ");
    msg.dist = 0.9892247746494618;
    msg.err = 0.24767168499479386;
    msg.ctrl_imp = 0.15130741034442652;
    msg.rel_dir_x = 0.9994749405284894;
    msg.rel_dir_y = 0.4286486691932435;
    msg.rel_dir_z = 0.5742656349267814;
    msg.err_x = 0.9723332252979404;
    msg.err_y = 0.6078222068550062;
    msg.err_z = 0.5594347497494456;
    msg.rf_err_x = 0.423058732489453;
    msg.rf_err_y = 0.6032844837764838;
    msg.rf_err_z = 0.7464245894147867;
    msg.rf_err_vx = 0.8321498236201709;
    msg.rf_err_vy = 0.3389071630882081;
    msg.rf_err_vz = 0.3298534639979701;
    msg.ss_x = 0.28254865624515546;
    msg.ss_y = 0.728624196052551;
    msg.ss_z = 0.4545427276649132;
    msg.virt_err_x = 0.2879409102368161;
    msg.virt_err_y = 0.5876953384834258;
    msg.virt_err_z = 0.9956229488576104;

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
    msg.setTimeStamp(0.6416439485846489);
    msg.setSource(46091U);
    msg.setSourceEntity(144U);
    msg.setDestination(12786U);
    msg.setDestinationEntity(242U);
    msg.s_id.assign("SRXXOQJDHNDOYSHXKKDSXXWQHKKDFHZEWSIRMNUNPOQBMTSFEWGZWNWIPBTYISBLVNMZBEENAYMZSBMRIYPOUQCMKGFNLELWIMQWKFCLNJUHASDZFFLIGMCRCZOVEMHHBACZYECTPEEXRAXZBFAUBOGWJYIUGPNOLQVRGHJTVDCAHRGPFPJUTPJTACVYMAXTRDVGLAHPXKATWFDCTYGOPIZOSJQVXODGQRTCJUBJYRQLDULVZJUUFLKSIV");
    msg.dist = 0.36626253124576935;
    msg.err = 0.707494169477115;
    msg.ctrl_imp = 0.6070809796069627;
    msg.rel_dir_x = 0.45803469682245823;
    msg.rel_dir_y = 0.8000382509323507;
    msg.rel_dir_z = 0.7642358836622312;
    msg.err_x = 0.02389648247136289;
    msg.err_y = 0.41719942544556465;
    msg.err_z = 0.7692136108080148;
    msg.rf_err_x = 0.25476630310023607;
    msg.rf_err_y = 0.21772733807781253;
    msg.rf_err_z = 0.5890334486047936;
    msg.rf_err_vx = 0.42050009172488234;
    msg.rf_err_vy = 0.055558178658090096;
    msg.rf_err_vz = 0.0871440718809996;
    msg.ss_x = 0.989685246321754;
    msg.ss_y = 0.990217943116655;
    msg.ss_z = 0.7670972537265521;
    msg.virt_err_x = 0.5409306655267856;
    msg.virt_err_y = 0.8792326584433798;
    msg.virt_err_z = 0.2612939140665481;

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
    msg.setTimeStamp(0.38915880239087075);
    msg.setSource(28611U);
    msg.setSourceEntity(191U);
    msg.setDestination(16048U);
    msg.setDestinationEntity(84U);
    msg.timeout = 21406U;
    msg.rpm = 0.2074591866568919;
    msg.direction = 79U;
    msg.custom.assign("ONXVVEDJMXETQL");

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
    msg.setTimeStamp(0.9999165882671176);
    msg.setSource(58586U);
    msg.setSourceEntity(98U);
    msg.setDestination(38518U);
    msg.setDestinationEntity(251U);
    msg.timeout = 50664U;
    msg.rpm = 0.6586364044548798;
    msg.direction = 187U;
    msg.custom.assign("XZUUJURHQSJJLWROKCGXJTMJBRXMZFWEVJFFRFABSXRNBPVQDKUKOSSVBCFCOCGPZPMTUHDSUHUZMQLTCRXVAVKOJQWDHYPQG");

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
    msg.setTimeStamp(0.19453149253156743);
    msg.setSource(58451U);
    msg.setSourceEntity(207U);
    msg.setDestination(51366U);
    msg.setDestinationEntity(187U);
    msg.timeout = 14091U;
    msg.rpm = 0.2870083399499541;
    msg.direction = 18U;
    msg.custom.assign("RKSIYOAVZKHADOEQROHUDDYKDRWIVJMLZZBFTFBUDKCHHKCTPGBSJSORXITZGEPRSVBXYISLTLTVCPVBMKDWAIXOUXTWHQAJHWDXIXFZXPUNAUGEJVPCVCGKCQHHSRLZKQUGJWEKAJNTCOOJXVYLGQQUZOYSBAFGEHMPVJFQNDEMTWUREXLPFYZTLPNNQELCMEFYFHG");

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
    msg.setTimeStamp(0.570933134804914);
    msg.setSource(2012U);
    msg.setSourceEntity(188U);
    msg.setDestination(19694U);
    msg.setDestinationEntity(171U);
    msg.formation_name.assign("RJSJOELXCXGOMAWWIWNZCXTAZ");
    msg.type = 156U;
    msg.op = 89U;
    msg.group_name.assign("CCPDSGMARZIFQMBEKRSYFZAYQXUHECTTKBGYSJENEAURMWTYGSXAWMBZVIQAPYFCPXRAGCQRLNXNIOLFUAZJXZMHBBPOVHTESUREMNDHLQWNOTKDDPIDNJZZTBNCWIPICREILVUKFLLGWFDWAGLZTDUHPATVHYMYFGTYSVHBCCEKIVJXEPOQGMKHBVOCMWESFDQKXUOKGHWJHVMKGSNIBOQRUFOKZUXTJ");
    msg.plan_id.assign("NKULYPAMZIDSTPISPYECWCPVELLNYYIOEBLITAEJKGKVAFSMKZRQPIFWYVBRFLXNWBEVFFBFTOAFNHLDUP");
    msg.description.assign("XMGNKFHNYJOGLWKYKDJKNJWVZHEQGTFXAOMAJTZUMUWBQANVIDFKXELOPWBGYPKECRETYWBCGUTPIOOCTQUNYNGMGJFDWCSZPARQRZFAUCIDXUXTISXMKSQHDPMACDZPRWWJBSCIHEMOL");
    msg.reference_frame = 10U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44866U;
    tmp_msg_0.off_x = 0.031071222860521663;
    tmp_msg_0.off_y = 0.5705102934103812;
    tmp_msg_0.off_z = 0.4295218439731322;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5232153478980677;
    msg.leader_speed_min = 0.2620015630516124;
    msg.leader_speed_max = 0.7959831792658705;
    msg.leader_alt_min = 0.6878344181245876;
    msg.leader_alt_max = 0.9531596985571699;
    msg.pos_sim_err_lim = 0.7132011790804387;
    msg.pos_sim_err_wrn = 0.3451615619951176;
    msg.pos_sim_err_timeout = 39633U;
    msg.converg_max = 0.817326600101114;
    msg.converg_timeout = 41467U;
    msg.comms_timeout = 15751U;
    msg.turb_lim = 0.16698773832686564;
    msg.custom.assign("ZEQNVNULEWDSYFERYFBCWIGCYSPPJUIHJVCKJPMKHWLLCFYGGZAQZUBIKOFMFFVTJPXRAYDHDXSNBLDZUBFGMRUQQXLAYNOZHTFZMTNBMOMHHDZQDJJRVR");

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
    msg.setTimeStamp(0.6760051661409505);
    msg.setSource(32450U);
    msg.setSourceEntity(106U);
    msg.setDestination(44667U);
    msg.setDestinationEntity(50U);
    msg.formation_name.assign("YFOMNEJQSQTJJENFZRWFLMHZANBBSRVKIIYC");
    msg.type = 129U;
    msg.op = 23U;
    msg.group_name.assign("DIGCECJWGZGRDYENOLMREVMZE");
    msg.plan_id.assign("NRPJWMFEJPHKUXTTFEZIJ");
    msg.description.assign("AYKCJYEBTIADSHEVCVDXNZKSQPAKKEOQNQGWZTMUXXGHZDVQUWVAFJAVPAJUJWJRCEDFFQITYRMDTFXBLVBPYNOHRNDNZYZZQLYDMFPJWGFBCSQVXYOKKNLBFHMVCUHIBMOTWTJCLLIFIOICSBKENKIZLXMSDGSHGEUAHUAMOWPUPNJPRZTOCBLWNOKKDMRZGGXEAW");
    msg.reference_frame = 44U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56036U;
    tmp_msg_0.off_x = 0.4466446206528406;
    tmp_msg_0.off_y = 0.23046107660650428;
    tmp_msg_0.off_z = 0.3157872682121339;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.08313348541064425;
    msg.leader_speed_min = 0.1762145359416013;
    msg.leader_speed_max = 0.24236615075996815;
    msg.leader_alt_min = 0.1172981117498284;
    msg.leader_alt_max = 0.5511117476288526;
    msg.pos_sim_err_lim = 0.9142069822535489;
    msg.pos_sim_err_wrn = 0.08869197637526505;
    msg.pos_sim_err_timeout = 34805U;
    msg.converg_max = 0.579305993298445;
    msg.converg_timeout = 40026U;
    msg.comms_timeout = 44481U;
    msg.turb_lim = 0.7270643404684124;
    msg.custom.assign("PATWCSJRKTJEBFGLXDCXFZFTQRZIJJCOGYVSDDDTZUWFWHJHDWFJJZGXMLMLKKIOAXSOWVBFCOFMNVOSEFPGULUCVYDBIQODLCRDAPEWPLJOBUMBVRPLWWEQUWKNSIZXVTBQCSOGRAMHNQBLPJGHXKGBEZIZVQAKLOYXMKMIASNTPBAYEHKXUVIENPZUNYCYH");

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
    msg.setTimeStamp(0.6574151533270345);
    msg.setSource(19526U);
    msg.setSourceEntity(205U);
    msg.setDestination(26143U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("YFFIXVWTIKLMZDBVFXEWKYUGSAFIDGTBZGCHEJKQBPQOYIZPMIXOBJKKULXYXUNKSERIBGWVXRJSMPHCGHAWCPEHCPTHVVDHNRGSNTBRFSNPQGWSZZZMLRYQEHOAPWQSACEQIROFQBUMNETLJJNWUQCZKQTLLPOCQWDRTNNYSRPUDVUDTMJSNUKCLGLSDWOEAIYIBWFJXNORYMHYHK");
    msg.type = 17U;
    msg.op = 0U;
    msg.group_name.assign("EXANJJNQSMDFNZATLQIDWKKNRWKVVABPOZHWEGZPQNWOAFYMGSJUREECMBFGDXLPZQSEZIYJYHXRTLMHLIQUWSGVVEAHJCOZLVRTRCMJWHYBUFTFCVKUDOPNECPFGTZTMBUUNCPXCZQTXMSOYLGIWROUYBBGRMHKLSZOXPDKADTMAURIIXOVSQDQDYVTUTYERYJEBLJSFJKXMKCFGWPHXLKISGORJBPQAKNNHULNBE");
    msg.plan_id.assign("UPKACDRURNNUZVYTXCKOXJIHGDMNUSHEOFYGQLOIMCVERMQEIHIVFZZLRBTFCDSCJMKQSCRLZJABEFQWGSPAVDHANHPVJBYLOICIAFZ");
    msg.description.assign("PXPLKITKYEGOZSIEFHKVNPPGVZDTIDVIZJCESWHBSIBXYOJDRYORYOAUQDIAQZSAKGQVTVVLLFTIPCKYWEKDDDSYLQSFFVGOJGMYQNNXRZQPUMXQNMCJCMZKFURYWUBFCHCHOAVZPNKATBDMWLNXERMHIGNW");
    msg.reference_frame = 205U;
    msg.leader_bank_lim = 0.6281694353418927;
    msg.leader_speed_min = 0.6388206214823008;
    msg.leader_speed_max = 0.6084307314011186;
    msg.leader_alt_min = 0.12114709948178015;
    msg.leader_alt_max = 0.6625971101715832;
    msg.pos_sim_err_lim = 0.05556835131212112;
    msg.pos_sim_err_wrn = 0.37999805144495824;
    msg.pos_sim_err_timeout = 46914U;
    msg.converg_max = 0.49021476357990046;
    msg.converg_timeout = 13484U;
    msg.comms_timeout = 17035U;
    msg.turb_lim = 0.2066558912369273;
    msg.custom.assign("LEZGDWVXOEMIONRXJMNJBYNJLJUKSSSRQDOWQLUFAAHFELSHFKCTNGGIGUXQXUBRGVOKYJOCAWPCYNINLEJMBRMVNWBCYCYBZXHFUWBWDQLIRDQHNDPXNAIEIPZL");

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
    msg.setTimeStamp(0.12808480521465504);
    msg.setSource(62948U);
    msg.setSourceEntity(53U);
    msg.setDestination(39525U);
    msg.setDestinationEntity(175U);
    msg.timeout = 17129U;
    msg.lat = 0.5979155105298551;
    msg.lon = 0.17532952810505897;
    msg.z = 0.21998919783518078;
    msg.z_units = 130U;
    msg.speed = 0.3531713851820728;
    msg.speed_units = 119U;
    msg.custom.assign("PIOXXLZMADVVUYWDGAJEIDJ");

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
    msg.setTimeStamp(0.846237088471919);
    msg.setSource(61892U);
    msg.setSourceEntity(62U);
    msg.setDestination(52594U);
    msg.setDestinationEntity(187U);
    msg.timeout = 6222U;
    msg.lat = 0.21505557096349304;
    msg.lon = 0.2302823224401349;
    msg.z = 0.3001036266606931;
    msg.z_units = 46U;
    msg.speed = 0.10882917570212003;
    msg.speed_units = 150U;
    msg.custom.assign("CQFAQGJMSUIRHODNRNNEFISXMBRQYPZDUIXZBSDFNZCAGSGJBPKICVUZQFABKWVTPJPYGYAQUCLNK");

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
    msg.setTimeStamp(0.6708027000142773);
    msg.setSource(36410U);
    msg.setSourceEntity(158U);
    msg.setDestination(6162U);
    msg.setDestinationEntity(113U);
    msg.timeout = 47197U;
    msg.lat = 0.6908150308523584;
    msg.lon = 0.7350937953540411;
    msg.z = 0.5553959116149397;
    msg.z_units = 50U;
    msg.speed = 0.4232976759260715;
    msg.speed_units = 8U;
    msg.custom.assign("UEZCMMBTQMDZVHNZWBGUIYSRPHZPCBDHTYUYCKNHWGBIJLQDRAIYTEEXDOYGXWFQZAGFCSNWUOGZLSMAPVGETOHTDRFBYSJUXJMBITJIVWFKYINSHAYOMFRQWPCBDYQXPWHXUFMLVTPVECJSKGKOANKIVQMTCKPNDVVLLXDLLBRSWLMFEZEJLGZJQRQAIKEANUZTKVQXZOMJPGERHGCNPKPJUWOFHDWACAYIKBFSNRNXSXAXU");

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
    msg.setTimeStamp(0.9405279527623811);
    msg.setSource(9489U);
    msg.setSourceEntity(144U);
    msg.setDestination(31666U);
    msg.setDestinationEntity(216U);
    msg.timeout = 19990U;
    msg.lat = 0.04042190402901891;
    msg.lon = 0.3976666792522989;
    msg.z = 0.4072814319615301;
    msg.z_units = 164U;
    msg.speed = 0.7616427121225228;
    msg.speed_units = 212U;
    msg.custom.assign("LYMSXMCUWJBJAFEPZJOGSCMRFSDSLBHRBHPUHNAJNAYQFKDZYSTXENESXGBYUSHKVTTJMDVDTGOJOMLWWWQKDKKVAWMEEOOVXWDRBBIMXOPFFPYKWEEYVREZCRTZQXRUPSCXSAQGGAQYFWHPCBVBFZVY");

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
    msg.setTimeStamp(0.3587068506171981);
    msg.setSource(56990U);
    msg.setSourceEntity(223U);
    msg.setDestination(2019U);
    msg.setDestinationEntity(210U);
    msg.timeout = 53539U;
    msg.lat = 0.9952996383301278;
    msg.lon = 0.18127447354094894;
    msg.z = 0.7312478541079643;
    msg.z_units = 78U;
    msg.speed = 0.24828627829905736;
    msg.speed_units = 247U;
    msg.custom.assign("UNITDNUHFOHPJTLAYCOJVYGLIEVYDEAVNIBKSYNSXBYWYLITPHATFJXOZYAJQJJVKCQAOIHGPNFFNNXRKACTPUAEXKURRUAXUWSTEDRZSBWGIARGEBTWDRDWNLQLSMRELJQWJOHYVGSMXPVTPFRKCIFXQFMSKDQCMMGGJRMDLMFOWMUGZZJEPVSZYIZUCEPVCDONBIDOGWTHPZZXDNBQPMZXEHSK");

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
    msg.setTimeStamp(0.028025392483471467);
    msg.setSource(3879U);
    msg.setSourceEntity(156U);
    msg.setDestination(4443U);
    msg.setDestinationEntity(209U);
    msg.timeout = 32126U;
    msg.lat = 0.8211376565193136;
    msg.lon = 0.8446126562621987;
    msg.z = 0.2595234009636721;
    msg.z_units = 76U;
    msg.speed = 0.02211456590170202;
    msg.speed_units = 105U;
    msg.custom.assign("PVXFEJZSZWOEUMPACRSQOWNGKNKFOHYKUAXQWCNLLATYPCNCOXIVPYMQENDELJBHGCENGATCOMRUCXYSKOEZXRELSTIRODBSOBIJEKQFVVPBUHXPHITKUYABDDZIHSUWAGLVHFVTLTLVYBPYMWDXXIKYGWVPIFCSJZBGQXZWBWFJVMJDGIMJAQNLCURGKGPZSDQRAHZQBHWBVRJRTNQDFYF");

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
    msg.setTimeStamp(0.3117734253039367);
    msg.setSource(43422U);
    msg.setSourceEntity(105U);
    msg.setDestination(13104U);
    msg.setDestinationEntity(72U);
    msg.arrival_time = 0.0021044791952093966;
    msg.lat = 0.9545462398862319;
    msg.lon = 0.2783832490985486;
    msg.z = 0.5096543725621803;
    msg.z_units = 243U;
    msg.travel_z = 0.3934300960762874;
    msg.travel_z_units = 207U;
    msg.delayed = 101U;

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
    msg.setTimeStamp(0.3452519815514009);
    msg.setSource(54248U);
    msg.setSourceEntity(220U);
    msg.setDestination(54017U);
    msg.setDestinationEntity(153U);
    msg.arrival_time = 0.41813386923285956;
    msg.lat = 0.7739148745145297;
    msg.lon = 0.6280873309765305;
    msg.z = 0.8681728951714985;
    msg.z_units = 74U;
    msg.travel_z = 0.7535200379370111;
    msg.travel_z_units = 69U;
    msg.delayed = 154U;

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
    msg.setTimeStamp(0.6271735800317395);
    msg.setSource(64125U);
    msg.setSourceEntity(37U);
    msg.setDestination(50606U);
    msg.setDestinationEntity(109U);
    msg.arrival_time = 0.10668082076402907;
    msg.lat = 0.22950441477367955;
    msg.lon = 0.7743570006094367;
    msg.z = 0.03604198314136864;
    msg.z_units = 146U;
    msg.travel_z = 0.9146517964981771;
    msg.travel_z_units = 20U;
    msg.delayed = 60U;

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
    msg.setTimeStamp(0.19831452956174456);
    msg.setSource(65100U);
    msg.setSourceEntity(234U);
    msg.setDestination(48236U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.3506851212043831;
    msg.lon = 0.8120242898570433;
    msg.z = 0.03046261183827459;
    msg.z_units = 150U;
    msg.speed = 0.5498118428599693;
    msg.speed_units = 60U;
    msg.bearing = 0.6407665966306876;
    msg.cross_angle = 0.6910782917077627;
    msg.width = 0.8875883383303916;
    msg.length = 0.015063670634996362;
    msg.coff = 25U;
    msg.angaperture = 0.7573913682571818;
    msg.range = 53612U;
    msg.overlap = 249U;
    msg.flags = 247U;
    msg.custom.assign("GUOHDFOPHMAQXEUXHIGNUQKZFUNDNAZKWROSOGYSEYQI");

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
    msg.setTimeStamp(0.40601127742204846);
    msg.setSource(24558U);
    msg.setSourceEntity(83U);
    msg.setDestination(62427U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.4040392851967719;
    msg.lon = 0.4467049597500128;
    msg.z = 0.8546658630458165;
    msg.z_units = 7U;
    msg.speed = 0.23365782260429546;
    msg.speed_units = 175U;
    msg.bearing = 0.37403890682425533;
    msg.cross_angle = 0.3001473498486198;
    msg.width = 0.3057301950411221;
    msg.length = 0.5559986743235518;
    msg.coff = 237U;
    msg.angaperture = 0.07141302626435331;
    msg.range = 17425U;
    msg.overlap = 121U;
    msg.flags = 249U;
    msg.custom.assign("LKFAJFJVUSSINRPKLBKZWMOLEJRGYPMGGZBSFBVJDAKFLBTOVXBVMIICRSGATOIZBNUKRXLDQQXMNUKUXXQLKAVOVEMSYEYMCZVRHWXRDNQYCHLWEIJOCRGXSEGHFNYNQZJXTTIDDUHOPQDOGRUNZIOQSWTHWCUWPHKGD");

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
    msg.setTimeStamp(0.1692165512073449);
    msg.setSource(38747U);
    msg.setSourceEntity(170U);
    msg.setDestination(9811U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.995870666679566;
    msg.lon = 0.1358385468975123;
    msg.z = 0.4073155806686539;
    msg.z_units = 171U;
    msg.speed = 0.8195140816946874;
    msg.speed_units = 36U;
    msg.bearing = 0.5246924007158298;
    msg.cross_angle = 0.9019873103777986;
    msg.width = 0.5001168824355228;
    msg.length = 0.47128815506798716;
    msg.coff = 190U;
    msg.angaperture = 0.8437545765029596;
    msg.range = 53581U;
    msg.overlap = 45U;
    msg.flags = 230U;
    msg.custom.assign("QQGCTVHYFUBXNUBHAPLLXEXMCRBUGQEROVDTDPNPLJIDHIXBXDOEIMGZMYDUNRXEEMVNGMFUQAYHOOJWEKHNNFSTWJCQICPWARKALFCCDVBSNRRAVCLOSPWAOFISIIWBTUOJKKKWFTAPKLGSJFZYMPHFAGP");

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
    msg.setTimeStamp(0.8020798103951486);
    msg.setSource(21996U);
    msg.setSourceEntity(206U);
    msg.setDestination(38114U);
    msg.setDestinationEntity(50U);
    msg.timeout = 58812U;
    msg.lat = 0.6930810029157549;
    msg.lon = 0.19000411472348022;
    msg.z = 0.853879505416791;
    msg.z_units = 26U;
    msg.speed = 0.16119122542319642;
    msg.speed_units = 221U;
    msg.syringe0 = 193U;
    msg.syringe1 = 142U;
    msg.syringe2 = 247U;
    msg.custom.assign("LCULLMQRQJEDMXSYNQZSYRPDABZNJSOWJNXRKZBDIVRFHRKWDEPMIYPLGRFOUURVVXRCRVZNQHJSTLVAULZJMGWVHXBQ");

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
    msg.setTimeStamp(0.5806013256628383);
    msg.setSource(15588U);
    msg.setSourceEntity(36U);
    msg.setDestination(14997U);
    msg.setDestinationEntity(252U);
    msg.timeout = 6753U;
    msg.lat = 0.5817616456562046;
    msg.lon = 0.24453555299674223;
    msg.z = 0.5273620766575889;
    msg.z_units = 226U;
    msg.speed = 0.27659594324208336;
    msg.speed_units = 201U;
    msg.syringe0 = 250U;
    msg.syringe1 = 212U;
    msg.syringe2 = 253U;
    msg.custom.assign("YQYNEGOPUDIZARILECGPSVWEGFOPFGOAHOUHTVUIZXZOPVZFBURMTESIJNEDDICCLWIDQPKHQJYUDCBUJWWLAVVGAJBAXBZRJHLMBDOYLBMELFMQAXNTAFVKQNVEYOLHDJBYMXHWMWNEZCXRSYNSTUCTQJFQJTIUKMZUWRKZQCTFNLDMQBPHRPKSDKCJFDPMZXRNAKNYVSHTPYASHKCWGUIWSKRBLOGATOVGXLMEFFROGN");

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
    msg.setTimeStamp(0.12408621837205769);
    msg.setSource(17115U);
    msg.setSourceEntity(19U);
    msg.setDestination(17097U);
    msg.setDestinationEntity(239U);
    msg.timeout = 8240U;
    msg.lat = 0.6395302268143535;
    msg.lon = 0.5183506559317688;
    msg.z = 0.04831190005619013;
    msg.z_units = 24U;
    msg.speed = 0.5181575428268295;
    msg.speed_units = 134U;
    msg.syringe0 = 175U;
    msg.syringe1 = 65U;
    msg.syringe2 = 100U;
    msg.custom.assign("KSCYKWPIXQROXNVIMUWTEQZDZEHRFDYBDWJLTRCGRAONWQGHYPQNPVSOHBYDVHEPAKTCIAFXAELJPATXNTPUHJDVTIKINJXSYKTDOUOQLVBSCCTMKCBXPILUZFJZHMIXBRSOGUWRQHJVUICFKLXKMPVAEZLYIJFYBEVJEVFNFULNTWLROSAZUASBVWXOABZRGPNWGMYGHMPDJGGCBTKZESKHONLMMDB");

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
    msg.setTimeStamp(0.3268301788290945);
    msg.setSource(31226U);
    msg.setSourceEntity(35U);
    msg.setDestination(20055U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.6242780915619859);
    msg.setSource(31466U);
    msg.setSourceEntity(108U);
    msg.setDestination(5484U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.04716243653540475);
    msg.setSource(34883U);
    msg.setSourceEntity(170U);
    msg.setDestination(5926U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.4169537314920594);
    msg.setSource(12554U);
    msg.setSourceEntity(149U);
    msg.setDestination(34032U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.560794460153087;
    msg.lon = 0.7323978903149211;
    msg.z = 0.63423182756919;
    msg.z_units = 97U;
    msg.speed = 0.41117439923894916;
    msg.speed_units = 19U;
    msg.takeoff_pitch = 0.7488931139387988;
    msg.custom.assign("RPYMBRHJSJXZRTZFSVYIZHKMLTGSAARKEBJCTRHWVDTBVHMCNCVYKMOLDLIGJEPVHEOGSMXRNBOYBWQPFFASAXDYVLCCTOTAEJBSSGFCGJHLXNKFIUIAYDMDQOPQFYHJAUYKFMWJISGEZDN");

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
    msg.setTimeStamp(0.6397417676433372);
    msg.setSource(27848U);
    msg.setSourceEntity(18U);
    msg.setDestination(33297U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.1826999437499267;
    msg.lon = 0.6259657048247801;
    msg.z = 0.6871979147052157;
    msg.z_units = 107U;
    msg.speed = 0.020112124497821626;
    msg.speed_units = 153U;
    msg.takeoff_pitch = 0.9790656979012285;
    msg.custom.assign("PLRTNJLDDJZZCFLPBKDLDZIUIAUXWDYVARUVMISRLKSPJKZIYIVMPPMYTWVEHKYZRCBAFCTKRDGZGNZTSLMSDGGBXBJXWUEXKQCAGGGWTVYJVPYEEEMBCAIJCBNIQNDNLOESNRAHCOCVTKQMUGBUJNGRVPMXPABNOOIYXXBKFAWHTFTSJLHSZEKQEEUZSPQFDHPWXFLMVIQCTORHWFOFYBHOCUSSAQUZWQIDOQJGOFFWTRRAHHE");

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
    msg.setTimeStamp(0.6745162006846207);
    msg.setSource(8609U);
    msg.setSourceEntity(252U);
    msg.setDestination(17421U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.06095551473112182;
    msg.lon = 0.8986447392760952;
    msg.z = 0.9875262492133037;
    msg.z_units = 18U;
    msg.speed = 0.034344325220484806;
    msg.speed_units = 167U;
    msg.takeoff_pitch = 0.03756426292216175;
    msg.custom.assign("SGTTZVMUYTQUKVGOVCWQHXLZWLCNWBBHJEQRSMDEXKYBLVXJAUYBUANMHDJISSQXNMWBAQREEENKSAXJVHGERNUJTVPLOZDSEVHHLGRYRJUUYDSCLJKCNCNYMIJRZDZCNANXZJNZSWMOZRWHTIWOPUODUCPXVCOATBGPFILPYFWXAFLUKGHLFMXLKWOIMMEJGPBQBZAYQTIPTRFOZDIK");

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
    msg.setTimeStamp(0.6323064014613553);
    msg.setSource(53269U);
    msg.setSourceEntity(101U);
    msg.setDestination(43641U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.18857783290706365;
    msg.lon = 0.39204876333683814;
    msg.z = 0.08277112518265839;
    msg.z_units = 144U;
    msg.speed = 0.9256058308175387;
    msg.speed_units = 81U;
    msg.abort_z = 0.7817306612701974;
    msg.bearing = 0.5062699481979003;
    msg.glide_slope = 12U;
    msg.glide_slope_alt = 0.3187019127228896;
    msg.custom.assign("JKXKYSEKIVYLYQJWNKDVLTYIC");

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
    msg.setTimeStamp(0.5617521620077396);
    msg.setSource(55379U);
    msg.setSourceEntity(78U);
    msg.setDestination(31697U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.502503191318239;
    msg.lon = 0.8051085393648288;
    msg.z = 0.804241312696022;
    msg.z_units = 132U;
    msg.speed = 0.8141969104870024;
    msg.speed_units = 239U;
    msg.abort_z = 0.32435949952160936;
    msg.bearing = 0.15098155300020877;
    msg.glide_slope = 94U;
    msg.glide_slope_alt = 0.7461582861997191;
    msg.custom.assign("EXVGEGRRPJIHFMQRCWCQYWMNTARUKZVRDGYEDLMZBRZ");

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
    msg.setTimeStamp(0.7022611105047436);
    msg.setSource(8613U);
    msg.setSourceEntity(199U);
    msg.setDestination(40727U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.37645466159055674;
    msg.lon = 0.774158094382925;
    msg.z = 0.0824277888623135;
    msg.z_units = 198U;
    msg.speed = 0.13528469521466802;
    msg.speed_units = 106U;
    msg.abort_z = 0.28015283763703025;
    msg.bearing = 0.917491848340674;
    msg.glide_slope = 61U;
    msg.glide_slope_alt = 0.8749757717686966;
    msg.custom.assign("YCILQJTHBXZSJLIOSDGNOQREFZDMBCLPTPRWBONQKBESCWOSVIYEYTGAFYEDQSAOHWDGIVMSJBVLZKMGDQOUCPEWJZGSHWXIATTUUGNDNEPEAUPKJKRRIMQHDMDKTUSKQGZXRGVFVPPJHBYYJHUESDHVWTIINXXERX");

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
    msg.setTimeStamp(0.38419972038980954);
    msg.setSource(29176U);
    msg.setSourceEntity(248U);
    msg.setDestination(433U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.21351735816303474;
    msg.lon = 0.36244684821689044;
    msg.speed = 0.9680519730619883;
    msg.speed_units = 53U;
    msg.limits = 187U;
    msg.max_depth = 0.391507259953911;
    msg.min_alt = 0.07880714019561685;
    msg.time_limit = 0.650142111136351;
    msg.controller.assign("WETDEAXKWUTCRHUVHEWOFLIBVEPSFKBMVADVNNDXUCYZSFXHPKPADCRQAMQPMDGOUKVMYGQMJGUPUROKZKVHCEDPOBWAZSVKQXNHGOIITZZXKRAEXUTXGQCRUSADICLSSIRFPBQJERINOCYTFJSWVHCMWGWSOD");
    msg.custom.assign("YCWMLVMFLQDJPGDLYHDQVMXJSXNEGXPXKNNBUIDPWORZZHPMZSXCIQFXSMHTUGCTYLQHCYZQNRSXDAOLKDMSBZHHFBPURRTYBORLFUTWQVJWSJOYSQQDJU");

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
    msg.setTimeStamp(0.5386085630303821);
    msg.setSource(64047U);
    msg.setSourceEntity(2U);
    msg.setDestination(47279U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.8895187369981176;
    msg.lon = 0.3413371664893402;
    msg.speed = 0.6129479585166508;
    msg.speed_units = 15U;
    msg.limits = 78U;
    msg.max_depth = 0.4304185616989801;
    msg.min_alt = 0.9145413837411497;
    msg.time_limit = 0.37852638636126634;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8097183854203711;
    tmp_msg_0.lon = 0.47784036803691765;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EDDRGCHSNJRVIIRQCZKQLOSLXBJYEUJV");
    msg.custom.assign("GSKRPPJOSNTFKLWBELROLZIBHBDPWLSVEUXGPMFBLEICZUFWMJZCQAZYXDCAQWVFBJVGSVKJXRAUSNNRCGUTQKELMTDOHRDCJBPDZZKNONPTAQCMYHLZWDODUHSIYUDQKQBNRKU");

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
    msg.setTimeStamp(0.7062044295672324);
    msg.setSource(40458U);
    msg.setSourceEntity(77U);
    msg.setDestination(63187U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.26166727074687957;
    msg.lon = 0.19249492478670926;
    msg.speed = 0.01713636013450026;
    msg.speed_units = 177U;
    msg.limits = 173U;
    msg.max_depth = 0.7063322098716331;
    msg.min_alt = 0.5446745669291786;
    msg.time_limit = 0.49896209778572853;
    msg.controller.assign("QLYPVKPULLDKPBTZAXUTHTIIUATMZSYGWJAFONMPSVQICPHAVTIEECOASHMRQOCFRCKLAMJBDEAZMFKGWWCVHUWYXTKVGIJLNGDBSJEKXEHJDEHRYKRZGWESFMKMCNHPOBVOVQDYHERZGBPFTCSDFKBUZHGYXWQOXFPETBXYJXFPHAMVZFVXIIKRZQRRZNOLJNLJNEOSXIUAMWPSIUGGCIOJLYNNBWQRVWNL");
    msg.custom.assign("WILEGCASXZMOHWZATJOEMLHEFNQPBPWTTILYMQGDIKSTDHCVYZUKOYZRHEWTHQEGPKFJRSNHYDCRGXDSELZRCBJWVSJPYLRDVLWAVFENIWCDDCSWWWOLNAIIZKJLTSCRFFXHXIJPVDKAYANXYZBBLRMVFXNGCUGNPQTIHYSNBXUXFMOAUTFMRDZFVQKUMQRAUYGDQKJBJUQGCNACGEBMIGOLJOHPQVVBZXRUSKNVOFPKUEBAJYE");

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
    msg.setTimeStamp(0.7589822225054171);
    msg.setSource(35177U);
    msg.setSourceEntity(47U);
    msg.setDestination(26990U);
    msg.setDestinationEntity(72U);
    msg.target.assign("MLUYNMBAYSXKOCYBSLOZXMREHNBEGQGKLSDPXORORBVXZVGZKPHHFJIQXTHWZZSNOZWGHADFVALOSGFGOKXENVDDWFCLPTDATGCVWJRCQFZQSXEWNCHZIQQTBJKPERNTONIXRUXSKEDLQTCNZJFHRFINYSMGQIYRYKHMBVGWBMCJKTDSICKODYAICANYRXIJL");
    msg.max_speed = 0.709017139406079;
    msg.speed_units = 15U;
    msg.lat = 0.8433534953723774;
    msg.lon = 0.3390017565579515;
    msg.z = 0.5816446740780062;
    msg.z_units = 1U;
    msg.custom.assign("JQTPAPHJUKNTWVYPEEJSRYPXFRYCKGZQITNGZURFGYMETZIMFXINZCQSGGYJZCFYNVH");

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
    msg.setTimeStamp(0.017739213051514047);
    msg.setSource(32734U);
    msg.setSourceEntity(154U);
    msg.setDestination(61428U);
    msg.setDestinationEntity(138U);
    msg.target.assign("DPIUMEZWQHHVPMAJLCFXVWVKTZIWLJKMTYJFEQHZJSBBAGGTZLKSGICVELSFHLWFEAAVJMFCSZAMHIDQUDXTHLGAMUUSOAYDLBQPGKQHRJJORVBPZCRUCOWBKXKNFHMYTEVORIHKOTOWGDLKNVEUOHRPGTUQVAZGXADJIBSOXBXQOFXKYOMXDWCPYZPPYYNEEUWRRUIMKXYZSEFNQANCWGLNDIBTXQQBPYNSYUNINTRFJ");
    msg.max_speed = 0.5086157996118973;
    msg.speed_units = 92U;
    msg.lat = 0.6918406662974335;
    msg.lon = 0.026530140374694366;
    msg.z = 0.11810618423771035;
    msg.z_units = 157U;
    msg.custom.assign("IPGSMPVWKXYDGLDSYJJQKOEROEPLEWRFJKIBBVMMOUELXKJFWPSQABJQQUVAOMSKAQVFQOFYTEWUNWNLTNINISGFFCYHQZHGZVBDXMNDAIBUCIMIBMZTTXZWNCDJTRRQTCAHPXGADNLXUAXZWGXCDXECBKUMGPHHKHURUCABAHTULRICSFSURZPZLVPSDJNOWKJRZXYOCHEYOOBFVRPLLVPDYVVWWITEMFIZYFJKNGSKG");

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
    msg.setTimeStamp(0.5939776903678841);
    msg.setSource(60730U);
    msg.setSourceEntity(58U);
    msg.setDestination(45633U);
    msg.setDestinationEntity(95U);
    msg.target.assign("GDPEIXCOLNCDKLU");
    msg.max_speed = 0.4406726061097267;
    msg.speed_units = 185U;
    msg.lat = 0.35522295944856064;
    msg.lon = 0.3713105820045244;
    msg.z = 0.3028796790711168;
    msg.z_units = 126U;
    msg.custom.assign("BEFOXSGPSGLTACNLTSILIQTOOKMVEYZJYWAFTKGBFQPGLMAQKHKCFGANUIKQVIVMWXETJVIZHMXPBCUMDRPMDRFIAHZWRMYPVREQZDQJUFNNJRIBWQREBBPELFHTVYVGQMWARHLOODCPYADAXLXNUVMAUEXXQOESFYGHZOZXSUCUHLPZNUWINKHHDYKYTGSZLTKCIPNDN");

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
    msg.setTimeStamp(0.1446631065976508);
    msg.setSource(28251U);
    msg.setSourceEntity(151U);
    msg.setDestination(51524U);
    msg.setDestinationEntity(51U);
    msg.timeout = 57836U;
    msg.lat = 0.38155735979679484;
    msg.lon = 0.9908298775355326;
    msg.speed = 0.32343496210652634;
    msg.speed_units = 141U;
    msg.custom.assign("GQWICAULZAADBQYSTDSAPXGHHOKPYCXYNMOBEBMZXUTVSKZFRRLAMFNNVWCAGWEDTKDIBVWZGXIARLNZWJZTGSIMHQWUFEJM");

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
    msg.setTimeStamp(0.3102326540787921);
    msg.setSource(47179U);
    msg.setSourceEntity(30U);
    msg.setDestination(3406U);
    msg.setDestinationEntity(161U);
    msg.timeout = 55167U;
    msg.lat = 0.08977327254641143;
    msg.lon = 0.804419656783098;
    msg.speed = 0.10173267621209048;
    msg.speed_units = 228U;
    msg.custom.assign("HYZUFGXFJZOESRANYINPDVOVTBBVJWAHOOQOKQAQQLGMYMJEURLHNVPXYSTRMVKALWPURXYFIWYOSRGKFXQLTWMQXEZYDNCWLEENDWVEDAXSKXPDNPCGPBFITLCCKSWFRVIYUUMBUFJSPSIJZFZQEWTJADHQJDKCMCVXUCHMYZHPAGIQPDBJBKZGMBXKLEASQUCLKTZBRZKIWH");

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
    msg.setTimeStamp(0.1307930688790757);
    msg.setSource(63714U);
    msg.setSourceEntity(214U);
    msg.setDestination(19300U);
    msg.setDestinationEntity(39U);
    msg.timeout = 18361U;
    msg.lat = 0.7292591714149719;
    msg.lon = 0.07161574018542949;
    msg.speed = 0.7440211803605219;
    msg.speed_units = 220U;
    msg.custom.assign("OATBYSUHUDTHSYREYVTJPTFOUUZTOTXAWKXMKVIKEXCCAFDIUABIOXDXAJWZUPKWPNFNVVJQXNHJWQBSPDUFEYMOSJCQGQTLCRYWJLDTIKDGVULLRQENZMKDFNWGGTOOBEZZFKODHVLJDQIZNRLGAMEKNICWPSHIMNQKGFCGWYBAWYBBSRJ");

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
    msg.setTimeStamp(0.11119429515677615);
    msg.setSource(7134U);
    msg.setSourceEntity(191U);
    msg.setDestination(16748U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.9738159117975631;
    msg.lon = 0.6259851267969702;
    msg.z = 0.4874120312522855;
    msg.z_units = 220U;
    msg.radius = 0.48562756433955157;
    msg.duration = 43100U;
    msg.speed = 0.2347886887151932;
    msg.speed_units = 143U;
    msg.popup_period = 61398U;
    msg.popup_duration = 41355U;
    msg.flags = 195U;
    msg.custom.assign("HUIPSTJXFVJHOWKPMAXQUDUKRIJDDFCZKWPNROBWQAYPXGXWTFMLDJBOLQMMLDVEXUDFENBKKECVEJUTYZGNVPSSAQLCGHSIWJGVOKMNVYCUCNOAEGHKONRCFXLJUSRRMMQDBMEPYPGKZHRSMP");

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
    msg.setTimeStamp(0.9651267090247356);
    msg.setSource(12228U);
    msg.setSourceEntity(80U);
    msg.setDestination(62998U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.3714952352788027;
    msg.lon = 0.6332238510941333;
    msg.z = 0.7557395379351357;
    msg.z_units = 149U;
    msg.radius = 0.4253672973067887;
    msg.duration = 34784U;
    msg.speed = 0.08472863369931172;
    msg.speed_units = 187U;
    msg.popup_period = 18306U;
    msg.popup_duration = 50100U;
    msg.flags = 205U;
    msg.custom.assign("ISLHLAUVWKOMTYBEMCBLYAKUGXTEOUAQGBRQGUTNKPHCHCRDFDPYIUFXZCKVNHFHFHNFJJJUOFSTXNMXKCTZJLEGXWAYAHKXKBPUSEZCWJENSGUETZWPXTVHNWQMWVUUCBYIXLCSTITMOJVYZZXGLOBMKRRYVEFNBHENBIWPSOVRBDAPVZJRMDLVINRFEDGIQZLDOXKDSPOQAFTPYYJCILJIQCOBRIQRZMAWGHELWSRDYAQSQJZM");

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
    msg.setTimeStamp(0.24980150018480585);
    msg.setSource(40871U);
    msg.setSourceEntity(56U);
    msg.setDestination(44132U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.322643710077013;
    msg.lon = 0.4283137664671548;
    msg.z = 0.5679381631326549;
    msg.z_units = 251U;
    msg.radius = 0.7239151798150948;
    msg.duration = 37172U;
    msg.speed = 0.6212574974265516;
    msg.speed_units = 214U;
    msg.popup_period = 57109U;
    msg.popup_duration = 60434U;
    msg.flags = 116U;
    msg.custom.assign("LXYXELWVAQAWMFTLDHKEPTOCRWIXZJOWUKTHGKQQOBWVXTUEQAOYPBGKVPEFVBZDUGSIFGBGCFIYJMWOLANHAPXSYXWCJRJQRURRNCMAHSSNQPIHGCOFDEODWLZBVD");

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
    msg.setTimeStamp(0.7541196767138584);
    msg.setSource(1834U);
    msg.setSourceEntity(245U);
    msg.setDestination(58772U);
    msg.setDestinationEntity(182U);
    msg.timeout = 35054U;
    msg.lat = 0.732851026100531;
    msg.lon = 0.04886687203158213;
    msg.z = 0.7273306946620257;
    msg.z_units = 182U;
    msg.speed = 0.6950564695388296;
    msg.speed_units = 34U;
    msg.bearing = 0.13780513962223562;
    msg.width = 0.028008348062811717;
    msg.direction = 60U;
    msg.custom.assign("EZKACWKWXRHDIVUWQAZYFHVDCXNTDGFMTNOOQSPYISYVWVAQIMMVJVRRPIAJQSFXVBLBIRFTBEOWXTMDKLTYZMAPOKLQTEGQZEDOUGXJPFIGZSKULXDXHLYPTHWGCDQENHRIGBMJCEGKBGKMSBHNPJMOD");

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
    msg.setTimeStamp(0.01192996878424435);
    msg.setSource(38238U);
    msg.setSourceEntity(246U);
    msg.setDestination(61437U);
    msg.setDestinationEntity(21U);
    msg.timeout = 3618U;
    msg.lat = 0.1993427979657093;
    msg.lon = 0.7095204286879163;
    msg.z = 0.4667421968871388;
    msg.z_units = 169U;
    msg.speed = 0.8913447555826776;
    msg.speed_units = 53U;
    msg.bearing = 0.46401329738656727;
    msg.width = 0.48995127887439127;
    msg.direction = 52U;
    msg.custom.assign("IIWXQJUSNGJLDROAAFCCVDQABNIQYBSRKHNFUJWGRCRERMKRRULPGWUUTQMFEJCGTCZDUSMOPTNZHYVFIY");

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
    msg.setTimeStamp(0.005032746509829766);
    msg.setSource(14823U);
    msg.setSourceEntity(210U);
    msg.setDestination(9974U);
    msg.setDestinationEntity(43U);
    msg.timeout = 21625U;
    msg.lat = 0.4531269599518808;
    msg.lon = 0.6469209748786424;
    msg.z = 0.17120045061736533;
    msg.z_units = 228U;
    msg.speed = 0.4569300845981684;
    msg.speed_units = 210U;
    msg.bearing = 0.1775807206533223;
    msg.width = 0.023035456129928522;
    msg.direction = 231U;
    msg.custom.assign("QLRNWZVTGQSOCLHWBGCKXKENNIEDPCZOEGNZOISWFRBHTWQWXVVSCMJYSDUNOCCJIDDVDRGLBOBYDMYAMWZKFRQXYIAFUDSHLJLBSQJRRXVGPMAOBPJAHHCXRZSSVRITNWPGEKFXWHUTKDBPHQQUSBFPAYVVPFOCXTJBHMKMARVOFF");

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
    msg.setTimeStamp(0.7299784120670185);
    msg.setSource(57609U);
    msg.setSourceEntity(214U);
    msg.setDestination(25217U);
    msg.setDestinationEntity(68U);
    msg.op_mode = 157U;
    msg.error_count = 231U;
    msg.error_ents.assign("OESWNUUBDY");
    msg.maneuver_type = 38649U;
    msg.maneuver_stime = 0.5712100605165007;
    msg.maneuver_eta = 34977U;
    msg.control_loops = 1382971854U;
    msg.flags = 238U;
    msg.last_error.assign("HPJRQJMSTKNQOVAQTCXZMKNDIXZKWQGJRIFQUXMTRZPCDUHSXMPMWSGJYLHUVMWEANFWDMFLFUDJCGOTDLFRXEJZBUDYZJZHVTOFKNESPPDQOGRSECGWLFXVVRZKAFNVPIXWPPCXYSYAUJITIROCGJBTIUCFBTQGTAPIINAAQWVZXYOBLIOOKLVXMSVUSRNDQYUBJKYALEFWYHLPGOVNEY");
    msg.last_error_time = 0.7896963851987551;

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
    msg.setTimeStamp(0.22844076573591632);
    msg.setSource(26628U);
    msg.setSourceEntity(63U);
    msg.setDestination(6599U);
    msg.setDestinationEntity(39U);
    msg.op_mode = 56U;
    msg.error_count = 43U;
    msg.error_ents.assign("WKOBNWXOAXUIHKMSTEIMWBOEDQYGASASZJIOYVZVPLYMGFAGKWGZDCBGRASZQPRGXIVIFMGFPICNSZRWWODBNGZTKXHHXJCFYJDRCJQIMJZEFTKLEDCUTUNRRICULYYNWYPUXTUIQEXOESYUKBXSDULXUTJZMVCZTZOPVKKQNJYGHWNFCLESCRHHCFPHFKRVMFWLBDAPAVF");
    msg.maneuver_type = 24022U;
    msg.maneuver_stime = 0.13331849232419746;
    msg.maneuver_eta = 58200U;
    msg.control_loops = 1891461089U;
    msg.flags = 50U;
    msg.last_error.assign("UCMVUKAGBMESOHACWGCBDKYDWMSAARLUPBVSLNEIGTWRQWBGENCYPRNHRXJNICMYTOFSSRYTXPAXUQUZEJUKNTETHGTXXNVNAFPWWQXPPJKVTEKEJIPXDZGACOTACILLLDYWSWRNYJLQFCAOFSYKZSBJYFFFEIIIKMTPJZKOGYQCRWBVIIRDLBQZXHOUMZHSJMCFVZUOMDHVVMHHNADTJGNIPVHSLRFHQUOQVW");
    msg.last_error_time = 0.9631828301070297;

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
    msg.setTimeStamp(0.06858209466540899);
    msg.setSource(61454U);
    msg.setSourceEntity(150U);
    msg.setDestination(13383U);
    msg.setDestinationEntity(111U);
    msg.op_mode = 5U;
    msg.error_count = 51U;
    msg.error_ents.assign("FREMROCFXMOLVQVCSTXNKDBKTJMGILKGVSCZDKZFSHJTMPDTQSYWAVQHTAEYUWNCGKKRAHBBWXROHAYZIGBUROIQJMWCDKDUYJBAANAAIUPUFEWVTYXWLMVOOZERHFRNCZVSGTEMCMJCZVBAEZVATSNLRJOYFRIQLGOFIPP");
    msg.maneuver_type = 33168U;
    msg.maneuver_stime = 0.013898866944125232;
    msg.maneuver_eta = 7999U;
    msg.control_loops = 1561796494U;
    msg.flags = 143U;
    msg.last_error.assign("JMGBMAIQKBQEHXVOCYSPGEFWAIKZXGZOGTCNZHNYWQUCJUSWESIOYLAPBMOPFUQTQFFNRKQVHRQSAODEZRELYDNUDJNMULKDC");
    msg.last_error_time = 0.09366003747057094;

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
    msg.setTimeStamp(0.49426841584313286);
    msg.setSource(54940U);
    msg.setSourceEntity(68U);
    msg.setDestination(62110U);
    msg.setDestinationEntity(241U);
    msg.type = 194U;
    msg.request_id = 7447U;
    msg.command = 63U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 42202U;
    tmp_msg_0.lat = 0.5965610816413928;
    tmp_msg_0.lon = 0.25066845954487027;
    tmp_msg_0.z = 0.2300396312607702;
    tmp_msg_0.z_units = 114U;
    tmp_msg_0.speed = 0.8831852317075665;
    tmp_msg_0.speed_units = 136U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.42433515713556424;
    tmp_tmp_msg_0_0.y = 0.6234064136696394;
    tmp_tmp_msg_0_0.z = 0.9899731402043799;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FZCCFBUBSXNMNQIHJKCAHJNHRFIYJWRDABAMMSAQLSHOUQFOXAVWPXGSLNPGZDJCUMPKKLVEEWLHSNWKWQXOFECZGEIROJZKCXPHYTICLPUGCYEJRXBPEFOFROOAVXPIBZNKJUUEBYHERIATSGD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17437U;
    msg.info.assign("ZRRHCYWVJJMNUXGLXEZRHTPXBYYSHJMSIPNVHKJFKWFIKMGPZLWMAASAHYTRPSQXUTOCALPPWSWQUZPIAGILNSTWNCBOHHNOOEZKKOYCLBTMJINEYUVGAEIVYFTDZSDGDDSRGLCTOBOFYPEAQCLUZWBEBDEQNXVFYQHBMAWVDSPGDZAGHQCNJENZXKERUXJVHRTSQXKQ");

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
    msg.setTimeStamp(0.13111047704321233);
    msg.setSource(49965U);
    msg.setSourceEntity(34U);
    msg.setDestination(3370U);
    msg.setDestinationEntity(17U);
    msg.type = 88U;
    msg.request_id = 20221U;
    msg.command = 140U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.5783011062070171;
    tmp_msg_0.lon = 0.4950783571142595;
    tmp_msg_0.z = 0.7447242889965651;
    tmp_msg_0.z_units = 82U;
    tmp_msg_0.radius = 0.23816477803427283;
    tmp_msg_0.duration = 56442U;
    tmp_msg_0.speed = 0.9747866396744232;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.popup_period = 53342U;
    tmp_msg_0.popup_duration = 27587U;
    tmp_msg_0.flags = 183U;
    tmp_msg_0.custom.assign("LDSVXOSGCWANCLMCMANDMRKIZYXOUTKFDKDIGHPUNJRDSLIPWJHWTITAFXOUPVXMKFPRYNPCFEJBJNCUGCQVUKRVZKAZSSXUFPTTO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35828U;
    msg.info.assign("BUONYPQBPKVSCLDUCCOTMIMNGQTIWYWUDGAFYGXKMNFMQHZWEXILVMADLSYTQPNAQHDIHYULSOSOEIZMMHSVEMHZJBPWAWICFGKUJKRIQYSEONVUJJNGJQGAFJSUGFTVNQORHPYGCLBETCHEBNQZOX");

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
    msg.setTimeStamp(0.5948294897536329);
    msg.setSource(22951U);
    msg.setSourceEntity(73U);
    msg.setDestination(53481U);
    msg.setDestinationEntity(232U);
    msg.type = 118U;
    msg.request_id = 50446U;
    msg.command = 100U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 42067U;
    tmp_msg_0.flags = 180U;
    tmp_msg_0.lat = 0.9840575437768391;
    tmp_msg_0.lon = 0.5609137252484989;
    tmp_msg_0.start_z = 0.9493094045398501;
    tmp_msg_0.start_z_units = 84U;
    tmp_msg_0.end_z = 0.9761505097322303;
    tmp_msg_0.end_z_units = 166U;
    tmp_msg_0.radius = 0.19853929718632357;
    tmp_msg_0.speed = 0.06278895786742278;
    tmp_msg_0.speed_units = 134U;
    tmp_msg_0.custom.assign("DHMVNQRADGUDFNOGOPHIKGGGWJEIGKXHQUXBFVQVZWQIGGJOYAFCYRRYMRZSEDUCTFBIAPTHLSVHKCNNWVSSQTREKMIITFXAUJXFYCMSKEQVXAHNJPZXWDFSUJJWCPZCUEZJNUWMAYMPVAAXITDCVQNOPNMUARHRJMYIFUTDESEWEUYOTQKHTZTOPLZNWSZRCYVZCBAQSWJBIWVOBOGBKODKCRLX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 37750U;
    msg.info.assign("UTHPVHGDGKAZDSCLQRFZXWPJQOHC");

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
    msg.setTimeStamp(0.7561255594006809);
    msg.setSource(49875U);
    msg.setSourceEntity(122U);
    msg.setDestination(13885U);
    msg.setDestinationEntity(3U);
    msg.command = 234U;
    msg.entities.assign("FISMHSKIAZFEVOAJVGCZFDRHDALFTYMWOVZQXQEAASFOLUCPBQBFPHRXNQBLUSBWVTBMZROJWYMRYHXFCZFEKGWLYJZCGMOKVCLZRBRAGHBJHCXMOQHBTLXUYYDXNGHBSWPEYOXKWEEDNUJLQIUUAGSTUPZOIIQJKTJMLCQLDVNZRGCIVZVQIMRKEWUJPAFJDNSIRO");

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
    msg.setTimeStamp(0.2514386973835515);
    msg.setSource(9566U);
    msg.setSourceEntity(165U);
    msg.setDestination(46838U);
    msg.setDestinationEntity(209U);
    msg.command = 157U;
    msg.entities.assign("DFRESUFXYQBCVJNADRAVWNFAARJIAFGNQQPLRQLUHQYVNUIQILSCVRRNCEOKEZCHHXMSKDTTLFAZSCXSHWUEZUEPI");

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
    msg.setTimeStamp(0.04820363991399568);
    msg.setSource(27074U);
    msg.setSourceEntity(234U);
    msg.setDestination(1175U);
    msg.setDestinationEntity(131U);
    msg.command = 77U;
    msg.entities.assign("WKOGMUCGYOYIZVHEZWYNVSURKHEWEWANMBQSHVNOAKHPCIPTKXSDKFSTKQINFFFGZPHQQVWJLMEQAIFVJUBGILMFVAYDRDOYI");

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
    msg.setTimeStamp(0.6592321119321398);
    msg.setSource(62349U);
    msg.setSourceEntity(76U);
    msg.setDestination(22781U);
    msg.setDestinationEntity(120U);
    msg.mcount = 152U;
    msg.mnames.assign("QPQLKIGAFMOSEHAIYFMCPVAXREQQMOJNFXDRKKPTHHKIGUXBRXAGZUVFGHSVCHLEJDBOTNGRBLTXLHWVOQZXVINLTOEZPOKHPJMDSXNGWUGPYMZODZJTBIDYVEKWCITLTNQZASESINCAYDVFBYEJOXNKJZFWYTLPQBDUPCOAYAUMCRHBFYRFIWCYNWU");
    msg.ecount = 209U;
    msg.enames.assign("SAHNJYGPIQZGMBLWCABPVITVSELYNZHDAWEHIUQTNMLNWHRIRTSIRKXJVFZQGENDOYNAQOWUBOUYUDZUMXDUPJTRLJLVAOTCACSKAFFEEIZXHZMCKFXSSLWJDPWJKWKKFVQJHZBGMWTQVJJVGBC");
    msg.ccount = 152U;
    msg.cnames.assign("DLUUHETWGWXENFIGSMNBONROPZVIXNPACIDQDHGGXZXBFXKEZMMVXKLDN");
    msg.last_error.assign("RCZFARWAOSLNDKZIXAHKSNQJFRWTCPWFXVCDOTUATYCGKEBCZKUQPPVNVHJWFVSDWKLCRMEPYWOIMVUPCRGBYMIUOYETMQXFZYCJLLWVGBJXMLQSMDUVBFOQQ");
    msg.last_error_time = 0.821428268897275;

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
    msg.setTimeStamp(0.1822244450323397);
    msg.setSource(59734U);
    msg.setSourceEntity(42U);
    msg.setDestination(21274U);
    msg.setDestinationEntity(248U);
    msg.mcount = 52U;
    msg.mnames.assign("IJXQHNNLBZLTLKZGAGESWHNQPPJLLYLYMFVJKCTCRPCYNTDISKUQVEXBQBB");
    msg.ecount = 54U;
    msg.enames.assign("EYKVLVUBVVNNMFHWZRJFKIRJLTIXJOCYNODOHBSSELREKEQIYWMYHFYPSTQRPTTIUYRDQEVFHFNNPZWINJMHFTVIKHMGPBIMHJGWMWJKIQOVWQHEGZMXMRGFQDDWGRCXVKXBFZMEUXNNELUDBLXPUYXGZLOBAOBTAXPKXPGDAJJDSALRATRVUUWKOSHQUOCPUCFGCKCSZECLSNDIQZSDJWAZCFZNPIQZWSHVSGMLRYCYBJB");
    msg.ccount = 196U;
    msg.cnames.assign("CXICMEPHKUOBEBKHWLRJIHEQGSVEBFRKOTEWIWSMWXMOZAVTXJWURHVSKNAJSCFALGPOTGUQIULGYYNQODSZCIYHMYJZDOSNFJEZXAWNBPNADMCGPHUFXIPKJVVPFGWYYKSCFKDYPPJGHSQLFABAMZRUIJLJELTUMSNNREKTAVUAIODBOZNGGXOCKLLHRHUKZZRVFSVAGXWNMYHDEQUCPRZYCLQYETMQDFQBWC");
    msg.last_error.assign("ZBJTMBCQVTYPVQEMSKHLAIKUEKRSZJNCZEAFVCXDZUHDSHEGPCOWURSXLULMISSHBTEUAKZLIXEOTNYKLNZAGFGBOOPXDJCTFGHZDJGPGEAHYSMAMWOSQPXVBPJETHXWPYRORCUQIXTTFTFDRFORYPV");
    msg.last_error_time = 0.9485660799805485;

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
    msg.setTimeStamp(0.1472744622924541);
    msg.setSource(48870U);
    msg.setSourceEntity(90U);
    msg.setDestination(22054U);
    msg.setDestinationEntity(72U);
    msg.mcount = 83U;
    msg.mnames.assign("HWKDORPJZCDMCTSSWBEMQRNNEVVCLHNJUJ");
    msg.ecount = 165U;
    msg.enames.assign("ERWRPZYSPMASURJNKDJDPXIBWZWXJWAZUBIIMEVVQIYRJEAKQYAKDYZTZJHQYAJWDUVXEIMLWNENFRLPLXFSNWLNKTMICCEQYSGKJUHFOKDTLSEYZOHAJGRGPPCTYSPRUROGI");
    msg.ccount = 193U;
    msg.cnames.assign("SFAIENYWGBPGLXXWXDHQBKAKWIDLBNVFYDU");
    msg.last_error.assign("LAFZUYEUFUWYYGINAIBYVXQWTEGCOWLIRSGYWGWVDCMGTCHASMPEUNXZPLZVKABKUDONONPJPFHKTLHBEISZIVMUINTVYBMFVOWTXXHOTNCIRLNYQQQHBAJZPASPQWZZOXFJNHCTMJUHKSBGGREROCACRJEJEWRIFUADSDGOLLTUQFQPIBHBZILOFKMVRBKLLBGWKCXEHVJDFDRWSMSONYAMDYRJSXDZESFKMCDQNPJXTEKCAVPXMDYJZXTPUR");
    msg.last_error_time = 0.33749563028004503;

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
    msg.setTimeStamp(0.15479614977893386);
    msg.setSource(25361U);
    msg.setSourceEntity(204U);
    msg.setDestination(57127U);
    msg.setDestinationEntity(186U);
    msg.mask = 32U;
    msg.max_depth = 0.6298566581656959;
    msg.min_altitude = 0.778478176040525;
    msg.max_altitude = 0.7203566380266643;
    msg.min_speed = 0.5816622862527778;
    msg.max_speed = 0.7444180889206918;
    msg.max_vrate = 0.9898912977942317;
    msg.lat = 0.38338112430951377;
    msg.lon = 0.45232802718737875;
    msg.orientation = 0.059573319633395294;
    msg.width = 0.21650529139398222;
    msg.length = 0.710594125542171;

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
    msg.setTimeStamp(0.4506137675187589);
    msg.setSource(37367U);
    msg.setSourceEntity(102U);
    msg.setDestination(42518U);
    msg.setDestinationEntity(99U);
    msg.mask = 196U;
    msg.max_depth = 0.7105191937347699;
    msg.min_altitude = 0.4551345456757414;
    msg.max_altitude = 0.7960595044429718;
    msg.min_speed = 0.43591628306929175;
    msg.max_speed = 0.8714934783613947;
    msg.max_vrate = 0.22045049400170957;
    msg.lat = 0.2087918804938913;
    msg.lon = 0.12147687285198028;
    msg.orientation = 0.9642755758856109;
    msg.width = 0.8231396411071749;
    msg.length = 0.40097454556614864;

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
    msg.setTimeStamp(0.2989968467142826);
    msg.setSource(24756U);
    msg.setSourceEntity(245U);
    msg.setDestination(56930U);
    msg.setDestinationEntity(42U);
    msg.mask = 205U;
    msg.max_depth = 0.9782114514370235;
    msg.min_altitude = 0.6929305030030118;
    msg.max_altitude = 0.21696966517287397;
    msg.min_speed = 0.604930065861849;
    msg.max_speed = 0.7212765349237918;
    msg.max_vrate = 0.08069611580239755;
    msg.lat = 0.33768417957938357;
    msg.lon = 0.6016222142403377;
    msg.orientation = 0.055916974241493445;
    msg.width = 0.5293519539622911;
    msg.length = 0.5152633546076936;

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
    msg.setTimeStamp(0.4603548979052422);
    msg.setSource(39206U);
    msg.setSourceEntity(28U);
    msg.setDestination(57146U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.10957150102722435);
    msg.setSource(36833U);
    msg.setSourceEntity(168U);
    msg.setDestination(7087U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.725555580974662);
    msg.setSource(21494U);
    msg.setSourceEntity(157U);
    msg.setDestination(5585U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.5871565628957005);
    msg.setSource(1558U);
    msg.setSourceEntity(232U);
    msg.setDestination(18828U);
    msg.setDestinationEntity(79U);
    msg.duration = 58638U;

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
    msg.setTimeStamp(0.26579270889528983);
    msg.setSource(29489U);
    msg.setSourceEntity(15U);
    msg.setDestination(8990U);
    msg.setDestinationEntity(153U);
    msg.duration = 28110U;

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
    msg.setTimeStamp(0.4792481109689265);
    msg.setSource(1173U);
    msg.setSourceEntity(122U);
    msg.setDestination(56510U);
    msg.setDestinationEntity(198U);
    msg.duration = 47674U;

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
    msg.setTimeStamp(0.21599698742776363);
    msg.setSource(6512U);
    msg.setSourceEntity(177U);
    msg.setDestination(19521U);
    msg.setDestinationEntity(90U);
    msg.enable = 249U;
    msg.mask = 3080693864U;
    msg.scope_ref = 2079526826U;

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
    msg.setTimeStamp(0.8189993698623156);
    msg.setSource(44085U);
    msg.setSourceEntity(53U);
    msg.setDestination(18995U);
    msg.setDestinationEntity(244U);
    msg.enable = 219U;
    msg.mask = 2890725143U;
    msg.scope_ref = 2021651222U;

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
    msg.setTimeStamp(0.9254341718106036);
    msg.setSource(29891U);
    msg.setSourceEntity(247U);
    msg.setDestination(59487U);
    msg.setDestinationEntity(143U);
    msg.enable = 102U;
    msg.mask = 53447431U;
    msg.scope_ref = 1741691893U;

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
    msg.setTimeStamp(0.38382745927721773);
    msg.setSource(49686U);
    msg.setSourceEntity(112U);
    msg.setDestination(14602U);
    msg.setDestinationEntity(133U);
    msg.medium = 234U;

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
    msg.setTimeStamp(0.06534402388681515);
    msg.setSource(50678U);
    msg.setSourceEntity(33U);
    msg.setDestination(41480U);
    msg.setDestinationEntity(87U);
    msg.medium = 108U;

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
    msg.setTimeStamp(0.3812424413844693);
    msg.setSource(36300U);
    msg.setSourceEntity(145U);
    msg.setDestination(52215U);
    msg.setDestinationEntity(174U);
    msg.medium = 56U;

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
    msg.setTimeStamp(0.20386707153280348);
    msg.setSource(15951U);
    msg.setSourceEntity(245U);
    msg.setDestination(22060U);
    msg.setDestinationEntity(199U);
    msg.value = 0.23727302797023597;
    msg.type = 129U;

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
    msg.setTimeStamp(0.40962326380901615);
    msg.setSource(32895U);
    msg.setSourceEntity(159U);
    msg.setDestination(17617U);
    msg.setDestinationEntity(196U);
    msg.value = 0.552692793969728;
    msg.type = 207U;

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
    msg.setTimeStamp(0.6944475761405844);
    msg.setSource(20240U);
    msg.setSourceEntity(210U);
    msg.setDestination(26621U);
    msg.setDestinationEntity(250U);
    msg.value = 0.4385008938150735;
    msg.type = 222U;

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
    msg.setTimeStamp(0.7395313425628482);
    msg.setSource(50061U);
    msg.setSourceEntity(123U);
    msg.setDestination(3053U);
    msg.setDestinationEntity(24U);
    msg.possimerr = 0.8698729942042327;
    msg.converg = 0.3585540324926393;
    msg.turbulence = 0.596755252473928;
    msg.possimmon = 224U;
    msg.commmon = 134U;
    msg.convergmon = 177U;

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
    msg.setTimeStamp(0.652415509602108);
    msg.setSource(53070U);
    msg.setSourceEntity(250U);
    msg.setDestination(21511U);
    msg.setDestinationEntity(40U);
    msg.possimerr = 0.7548773531324445;
    msg.converg = 0.977756582069235;
    msg.turbulence = 0.7908188172102654;
    msg.possimmon = 81U;
    msg.commmon = 162U;
    msg.convergmon = 140U;

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
    msg.setTimeStamp(0.4189310831483356);
    msg.setSource(26065U);
    msg.setSourceEntity(204U);
    msg.setDestination(37467U);
    msg.setDestinationEntity(243U);
    msg.possimerr = 0.22795246331496077;
    msg.converg = 0.4852193195975034;
    msg.turbulence = 0.2201901445836546;
    msg.possimmon = 78U;
    msg.commmon = 2U;
    msg.convergmon = 64U;

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
    msg.setTimeStamp(0.20844635350299756);
    msg.setSource(35310U);
    msg.setSourceEntity(4U);
    msg.setDestination(18820U);
    msg.setDestinationEntity(215U);
    msg.autonomy = 60U;
    msg.mode.assign("ESPMKSNAZIPYEKIZOEVMCAVQXWHRMYIKCDWNYQMXLBOMGTVNQUPUFNRTWUCSUXVVRLBAZWEGAJAVGYKVBSGOTTPHDPJIAXZABBDFKODTPDKNSGHJGC");

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
    msg.setTimeStamp(0.6862419715002711);
    msg.setSource(52607U);
    msg.setSourceEntity(64U);
    msg.setDestination(25669U);
    msg.setDestinationEntity(205U);
    msg.autonomy = 48U;
    msg.mode.assign("KGODCVQTFZLIZIRNUZCJGLQCEOCMHAQOEVWWLTVOIXNNGANIEVFRSDFASGJYDLTTPJBBHREPRISTLEXYHAVAGIXSJFOZSQYMGTJNGBOUXFWEIQJWKIGMCYDCMPTCZBBVTWHRNDTAOWKQPDKQJWMFBHLHKMZLLBPHZWYPX");

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
    msg.setTimeStamp(0.7933072522415718);
    msg.setSource(25857U);
    msg.setSourceEntity(21U);
    msg.setDestination(62584U);
    msg.setDestinationEntity(225U);
    msg.autonomy = 172U;
    msg.mode.assign("VRERAKLNMHZONWOMITTZEOWHZYEJYGXZOQDWYXLEMCSREHJJGVFIXTUEVMSXTHBXMJNPNPUQMSGXJUZABTXHJSVKGIUBNQCCOSHLAFPJFHDVDQEUAOPDWAFLONIPDCIOOONMEFGHVKKBYTBIBKHGQFNSYXRQUSSQKMUKCYYLGDLSEPIBLYNKZWIWECRVMIUWFGZZHCDFAFKRXTJNABQVQVLLPCBPYKAZQJ");

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
    msg.setTimeStamp(0.7480562837387766);
    msg.setSource(26007U);
    msg.setSourceEntity(0U);
    msg.setDestination(31056U);
    msg.setDestinationEntity(40U);
    msg.type = 54U;
    msg.op = 42U;
    msg.possimerr = 0.5023435152557549;
    msg.converg = 0.7147919504172988;
    msg.turbulence = 0.3893260841305979;
    msg.possimmon = 75U;
    msg.commmon = 75U;
    msg.convergmon = 114U;

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
    msg.setTimeStamp(0.6049889353959648);
    msg.setSource(45903U);
    msg.setSourceEntity(9U);
    msg.setDestination(16621U);
    msg.setDestinationEntity(97U);
    msg.type = 161U;
    msg.op = 66U;
    msg.possimerr = 0.2553142354919449;
    msg.converg = 0.24002847190263876;
    msg.turbulence = 0.2137124648798283;
    msg.possimmon = 212U;
    msg.commmon = 234U;
    msg.convergmon = 107U;

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
    msg.setTimeStamp(0.10680562049136122);
    msg.setSource(33979U);
    msg.setSourceEntity(144U);
    msg.setDestination(21682U);
    msg.setDestinationEntity(208U);
    msg.type = 161U;
    msg.op = 240U;
    msg.possimerr = 0.12068741061752697;
    msg.converg = 0.8731884672289947;
    msg.turbulence = 0.9228555854081844;
    msg.possimmon = 13U;
    msg.commmon = 250U;
    msg.convergmon = 179U;

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
    msg.setTimeStamp(0.12298666437675199);
    msg.setSource(16741U);
    msg.setSourceEntity(31U);
    msg.setDestination(22586U);
    msg.setDestinationEntity(216U);
    msg.op = 85U;
    msg.comm_interface = 80U;
    msg.period = 27129U;
    msg.sys_dst.assign("VGKSXZLGWLECUBQSCCWBFAAOEKXNGWCPITEEVMPVCHGIZAPMRBOJANXRAJTOJVUPQYGRWNYXUKU");

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
    msg.setTimeStamp(0.40823382248041995);
    msg.setSource(44201U);
    msg.setSourceEntity(141U);
    msg.setDestination(30412U);
    msg.setDestinationEntity(34U);
    msg.op = 58U;
    msg.comm_interface = 119U;
    msg.period = 15373U;
    msg.sys_dst.assign("LLAGIOSTKLVKCUPMGTKEMXQPRUNFFWKZZGQIOHZNJTBZCVITSBODGHDSFWIUGOA");

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
    msg.setTimeStamp(0.2915898385624405);
    msg.setSource(46320U);
    msg.setSourceEntity(84U);
    msg.setDestination(35422U);
    msg.setDestinationEntity(212U);
    msg.op = 250U;
    msg.comm_interface = 159U;
    msg.period = 64231U;
    msg.sys_dst.assign("SWQWGMQPJXUBVKFYOLURZIWYNBNJVNBHHJUWDVDLDGAKKSMYEZUTEPWJTTNJFBLTXRAIARPQPTMOMTDNHVJOQODTWGHLXABAHFPNCVZICFVONUEESXLLCXEH");

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
    msg.setTimeStamp(0.5802104022838391);
    msg.setSource(34391U);
    msg.setSourceEntity(58U);
    msg.setDestination(8643U);
    msg.setDestinationEntity(2U);
    msg.stime = 3315875683U;
    msg.latitude = 0.6873843654320339;
    msg.longitude = 0.6012410731147616;
    msg.altitude = 53667U;
    msg.depth = 19868U;
    msg.heading = 14065U;
    msg.speed = -26243;
    msg.fuel = 66;
    msg.exec_state = -41;
    msg.plan_checksum = 30348U;

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
    msg.setTimeStamp(0.6520595275887014);
    msg.setSource(30171U);
    msg.setSourceEntity(69U);
    msg.setDestination(16908U);
    msg.setDestinationEntity(56U);
    msg.stime = 2368269508U;
    msg.latitude = 0.2384483197549101;
    msg.longitude = 0.8772641468516644;
    msg.altitude = 40156U;
    msg.depth = 58613U;
    msg.heading = 22526U;
    msg.speed = -29390;
    msg.fuel = -85;
    msg.exec_state = -54;
    msg.plan_checksum = 29414U;

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
    msg.setTimeStamp(0.8765439728069708);
    msg.setSource(51969U);
    msg.setSourceEntity(48U);
    msg.setDestination(5097U);
    msg.setDestinationEntity(235U);
    msg.stime = 3981263426U;
    msg.latitude = 0.4353153387129727;
    msg.longitude = 0.7144857165022144;
    msg.altitude = 14277U;
    msg.depth = 23971U;
    msg.heading = 59952U;
    msg.speed = -23827;
    msg.fuel = 4;
    msg.exec_state = -95;
    msg.plan_checksum = 18841U;

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
    msg.setTimeStamp(0.7993893508555187);
    msg.setSource(23376U);
    msg.setSourceEntity(81U);
    msg.setDestination(34544U);
    msg.setDestinationEntity(42U);
    msg.req_id = 731U;
    msg.comm_mean = 56U;
    msg.destination.assign("POVUTVPDWAMRUVWUPHEWNJRXRJMZQENSXEOYOSHNSYEYJHESQXKHBKILMKBNQHDTPFZFSYIYRFMDZKJPVGJBJOIGCWIALNDGTMFLRYLEPXDFPHTORAAMGZDAATLRFEJKQNTKCUOXWHQQZOWTUBWLLIGIPMDUYXUCOZBXAQBFWP");
    msg.deadline = 0.13371149673728389;
    msg.data_mode = 71U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.09090678131806895;
    tmp_msg_0.y = 0.4339919655133052;
    tmp_msg_0.z = 0.3335126683255213;
    tmp_msg_0.phi = 0.7213447269531612;
    tmp_msg_0.theta = 0.6552080258725663;
    tmp_msg_0.psi = 0.8057179831441414;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DKRYHBQOREQPEPEGBSOTIOGNNDJENKNALLGSQYBRRAAPOKFMDTDTFVGZHWDAOUNCKXJULROTKLPKWFHGZZLQPXBGDHOIHAHVQCTSWHLXXWKCSBIGATJUZQMYUSEJPQJJBFMWCBARPFLDYNUCEMJYMIFXJMWZWRVCRXJTSZIMNQSEF");
    const char tmp_msg_1[] = {-6, 45, -12, 25, -76, 52, 13, -5, -13, -90, 95, -23, 37, -63, 104, 17, 99, -50, -92, -103, 76, -110, 30, 71, -18, -36, 79, 116, 110, -112, -60, -10, 105, -27, 45, 56, 69, 105, 63, -124, 49, -60, 33, -2, 92, -55, 44, 41, 56, 19, 90, 76, 102, 33, -10, 1, 31, -58, -23, 8, -70, 98, -64, 15, -20, -101, -45, 76, 114, -121, -21, -8, -45, 24, 83, 62, -15, -24, 100, 40, -102, -8, -65, 98, 70, -33, -123, 0, -13, 51, -81, -62, 3, 57, -8, 60, -88, 1, -95, -23, -48, -106, -23, 28, -107, 125, -28, 69, 96, 91, -26, -95, 23, -57, -64, -128, 29, 91, -2, 58, -48, 55, 106, -128, 10, -96, -14, -94, -121, 120, 55, 19, 98, -25, 110, -75, -75, -103, -87, 19, 69, -92, 17, 77, 76, -123, 53, 7, 66, 23, 111, -85, -14, 4, -89, 50, 68, 63, 7, 98, 44, 106, -80, -117, 91, -81, -118, 67, 67, 13, 87, -62, -26, -125, 61, 13, 2, 68, 17, 15, 61, 99, 65, -119, 108, 59, -88, -65, 53, -113, 110, -15, 59, 65, -7, 77, 65, -45, -10, -52, -29, 2, 82, -42, -3, -56, -128, -121, -125, 86, 110, -23, 62, -110, -22, -11, -18, -102, -118, -126, -46, -64, -96, -58, -8};
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
    msg.setTimeStamp(0.16292449817596433);
    msg.setSource(50025U);
    msg.setSourceEntity(237U);
    msg.setDestination(52277U);
    msg.setDestinationEntity(16U);
    msg.req_id = 14881U;
    msg.comm_mean = 198U;
    msg.destination.assign("ATQFVIHGCLZUPXSCMDHYAOUOFGZSQJCXASBYPBARRINQVXXCSEEIDTWQEGDUWDESRVHBWXSQNCOXKGYYGLEATOJXJNMVICXWKHRDYWZSMRTCOQLTPKFZIDLVAFGDKR");
    msg.deadline = 0.394169370610877;
    msg.data_mode = 92U;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 98U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("IXWCQWAONFUAQYJYJBZQGHOMFUIJKVYXLEIBLUWURDQTPODGOJQTYSCZRZAXNIPPYDSYFCXILKCCYENI");
    tmp_tmp_msg_0_0.description.assign("FFAMUKPPTFZUUFXCNWDGMWYWHVOTRJMDGKRSVVLYEHMNIRAPMNKCIKATWYIDBOUXNLGLGUBYKNTULLCPYNOENDHBUAESVYIPKBKKGCPBQAONFTXLHQZGOUMJXESTHNMSJVMVHMQHWYEJZTPPYBZSIZBGKTGZDHEAGDTQWZCIXZABQBEHYXFDEWRJQWZBXRLQRIFQXVLZCUJKTSJQSGAORALRCJPUIDLOHWACEJCMSPDFXRJDOIO");
    tmp_tmp_msg_0_0.vnamespace.assign("WYRADDYIITMDPHIUKISYTQFVTHZAUERAEOCSORFPHYMGIEZNNUQCWCPGXGNXTVDMSCRRDGUFTIMROLVCHOUKARUKXANBPPEYKBALJBFMVQFSWKPHLXRSZTYITJMJINWDZJPFBZZNOENOJJMQHMTHKQJUGBMYFDXXNTFVGNWAKYCPKJEQBLFZXGOCKWIPUCJQZSHNHYQBXLTLEKEQOBAYUQGCLRWUVHWACJRSLZEPZDVSDD");
    tmp_tmp_msg_0_0.start_man_id.assign("NKYJASCPXHLZ");
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.source_man.assign("YGDACISGBNSEOIBHYUWEJQGPXLLOAXWRLDXXKEJYHOZMFOPVVCGGJEAMWZIMOYPVBZNNOZODNIFBRPBSGKTBVLYUHXTPSFUWTAWOQOWZFUUZXHUQVXPRACRVQCMXCSBNKLILHDLJISTYTZIRURWZCZJHAKNPJ");
    tmp_tmp_tmp_msg_0_0_0.dest_man.assign("QSGHVBFKRLTNOPANSMCQYHXOVNPGCHZR");
    tmp_tmp_tmp_msg_0_0_0.conditions.assign("AQLCMJVNLTZSRSXOHKHPSYNARIFLMPGJQHVCJCIADIEHQTYQVEWZPGXKZKGDFBJPZBFOFWCSWGGRDQUOAVNEBEMJJSFYYHNLELVRDABTHMWALTRRGBDQAIFHCSGUNTXENPPXPKPQMPDMSKDEUOXYKOIERZBP");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("IRAFFZSKYICUUWGIORSYOZDAGGJSAAPKTZFZJPMQQPOIUKGLXTEQYTMIFSRYDHMVHXLHCMYHJVDBCKMNEQURWNPLQBBDLVACFXZGLVRAEKVVSVIAHMXKLFUYNKRKBWPRNSGLWHFZQQFJUGJCXJSBPQNOHAPIUDATSMBPTQLNXHTXOALTYGUNXEIXHOEOI");
    tmp_tmp_tmp_msg_0_0_1.description.assign("NCTRJKMEIDKV");
    tmp_tmp_tmp_msg_0_0_1.vnamespace.assign("FBLUTEBWJBZMAFADXKAVZATVXJMLTRPUCDRQYYAULWESKQWIUXVMXKNMFEHCLCYWNJHUBNMDCMWIABFFCHSAGHSPBECCDWFKRURULGEGVYMSVYQNMQDNVTNFZIHQNRZUQFNPMPHGFAKDCOBPXRXHOQBNTKLCBDTMRYXZJYWTKUVBIXXHORLODQZZOIVIKZYKWSDASOHI");
    tmp_tmp_tmp_msg_0_0_1.start_man_id.assign("WJAADYZJDICTICOXAFXHUFYSTFIBHLPFUDVOWJQXRQCNHURQGNLAFFURWHFMDSZNRGWKPAHADQOVUMTFQICLXZBOEEKFKEULSYMXBDJACNZGKEZSYPTOVMBQBBDMLRIXXWOYASTGRYZNGASIMWDUWZNMWEJKKGLVTJVHZPCPTHVJULOKBIHRJERLXJGSOQOSPDCKBTDIHGHSYVGEMYFPZYRIKVMCCEQUBPLOYQEXVVRENWZTJNSKPBWILMUPQ");
    IMC::UsblPosition tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.target = 46892U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.x = 0.5528156942689416;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.y = 0.07310361534143728;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.7612315155146069;
    tmp_tmp_tmp_msg_0_0_1.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FTGWSEJUZJWWYUOYKDVXDOTEZ");
    const char tmp_msg_1[] = {-12, 64, -75, -28, -20, 36, -105, -36, 47, -48, -18, 29, -61, 49, 84, -80, 66, -97, 86, -43, -90, 111, -29, 11, -78, 48, 40, 57, -6, 116, -118, 30, 70, -91, 103, 40, 106, 42, 9, -2, 68, -43, -105, 71, -11, -63, -33, 81, -57, 91, -6, 77, -62, -121, -17, -40, 27, 12, -85, -8, 35, -24, -21, 124, -14, 1, -101, -28, -112, 85, 77, -49, 105, -42, 99, 101, 13, -72, 5, 57, 77, -91, -2, 70, 38, 36, -79, -20, 93, 27, 74, 111, -102, 43, 95, 33, 21, 3, 53, 11, -83, 64, -89, -57, 106, 42, 124, -64, 104, -77, 101, -90, -73, -42, -1, -67, -55, 3, -118, 20, 80, 115, 5, -95, -65, -6, 5, -91, 17, -109, -38, 96, -3, -88, 40, 59, 71, -11, -1, 21};
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
    msg.setTimeStamp(0.9501144632034748);
    msg.setSource(37855U);
    msg.setSourceEntity(53U);
    msg.setDestination(28115U);
    msg.setDestinationEntity(116U);
    msg.req_id = 16734U;
    msg.comm_mean = 193U;
    msg.destination.assign("ERBMGANCMZKVRMCMMKVXXIQPDXVKXXMYQZBWXBISUYCBZDSROXOFVBJAAGSPEGGMBZWZRYMXUVIBTPNLNODHUHICSCXJHTXTOQQRYQTCEYHEPTRSFPHWROOIKGQLAZGQNHGNPYFDUFQPSNLIUPTANFDSHWKATHUYJZRJJCNEZWTIAEKWGEWGFV");
    msg.deadline = 0.43271909780825646;
    msg.data_mode = 11U;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("RPXCWUTQAZIQSIYMHVEFCPZBWDTUBYIJXEPGHYXGVREWXBDFCXHFYAJWHCKOIIOMCYTSZ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KUFDOKGPLHBZOOAMPHLDEJWFCRBWMXNLFHCWVZ");
    const char tmp_msg_1[] = {19, 67, 121, 100, 77, 107, 54, -98, -12, 9, 18, -75, 101, -16, 73, 103, -76, -114, -10, 109, -113, -19, 65, 109, -113, 30, -96, 41, 27, 118, -14, 94, -10, -79, 88, 50, 100, -57, 46, 33, -8, 93, -3, -14, -10, 45, 86, -126, -74, -60, 27, -40, -79, 110, 106, -95, -39, -91, -35, 18, 105, 42, 22, -32, -77, 66, 117, -86, -16, -62, 30, 55, 125, 76, 17, -119, -79, 109, -27, 80, -120, 63, 116, 83, -16, 43, -9, 12, 36, 51, -76, -20, -32, 43, 4, -69, 66, -110, -24, 25, -122, 102, -42, 26, -4, -126, 114, -49, 16, -1, 9, -54, 116, 104, -102, 126, 1, 2, 33, -26, 88, -50, 61, -41, 110, -48, -124, 15, 19, 66, 40, -119, 39, 21, 88, -54, -126, 48, -30, 82, 21, 11, -12, -124, -32, -47, 44, -107, -80, -17, 46, -28, 66, 34, -60, -25, 117, -28, 72, 107, -34, 99, 72, -20, -18, -50, -84, -100, -110, 44, 32, 50, 89, -79, -78, 52, 63, 73, -118, -128, -116, -41, 52, -83, -1, -50, 110, 64};
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
    msg.setTimeStamp(0.41732144416651185);
    msg.setSource(35245U);
    msg.setSourceEntity(147U);
    msg.setDestination(53207U);
    msg.setDestinationEntity(53U);
    msg.req_id = 62574U;
    msg.status = 54U;
    msg.info.assign("ZAOZKBMUCUVSLXTTKPJEIDVEFWSWADREEFWGKJXIMQUECLKTXLZVSPQBGODCJDNNMRFHRKIMGLUHRTYHFOFPHMALBDBNFCIMQCMJTYYCAKXNLGYTGFTHDRIIDNKYQFJVXVXNHBDHUYDMPJEBWGSBQARXZR");

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
    msg.setTimeStamp(0.853988740256841);
    msg.setSource(30460U);
    msg.setSourceEntity(118U);
    msg.setDestination(55969U);
    msg.setDestinationEntity(103U);
    msg.req_id = 15973U;
    msg.status = 177U;
    msg.info.assign("DEONLMYDSPHEZOKLFEARGYWCUASOFTAWZJULBQZHHFXWBJRYPXCSERDMQYIMJGECBIDVTKSOLLZJWDVKCPKKGEJRFGBCSXSCWUPIRYTUMUGAFWXMIVGQARMYHCKBROFMJLWDXAXBAQURNENNBEOAVQJOXFWLVQFWXTLMOSI");

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
    msg.setTimeStamp(0.8584516820678517);
    msg.setSource(43655U);
    msg.setSourceEntity(106U);
    msg.setDestination(30762U);
    msg.setDestinationEntity(179U);
    msg.req_id = 63593U;
    msg.status = 195U;
    msg.info.assign("QNYGFBPFSPCTHCJMLLKMEZZIAGKAYYMMCNUMFVKKGWQZOUK");

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
    msg.setTimeStamp(0.5291776843345556);
    msg.setSource(28008U);
    msg.setSourceEntity(75U);
    msg.setDestination(1168U);
    msg.setDestinationEntity(128U);
    msg.req_id = 9157U;
    msg.destination.assign("RNRZIOYXUXDTMA");
    msg.timeout = 0.31885593077525953;
    msg.sms_text.assign("IKQMYBNRDDSYQFWQTUHRZSELBFLSUQZUIRVQZFTBPWEENDRREXHHOP");

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
    msg.setTimeStamp(0.5858061664424699);
    msg.setSource(56073U);
    msg.setSourceEntity(179U);
    msg.setDestination(15928U);
    msg.setDestinationEntity(41U);
    msg.req_id = 25381U;
    msg.destination.assign("HGEQATNFHWLHLYOBKRJGMNFKAPFWZHNXQTTYBKHIFXQSQENBLVFPZUCGNOAZRSOSUDOMYIURCUGUDJUJLEDRFKVXXBOTASVMZZLHWLLKEEASLXODKHGYBROVMDICRCXXQIKBSPLZIJHZWTZEUQJKPDNRDXICVFHVPECQXBJJKWATQRPGGMXHVNJWMKUWE");
    msg.timeout = 0.7428689702815235;
    msg.sms_text.assign("FNJPEOHHAOENGMKLFNFRAEANFDWEGOFURGQWSLTVJXBVWKRTVLMIINVOIWCHSNXESTPBACKJQGEAOJKZPYFKLZRBLZBFHP");

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
    msg.setTimeStamp(0.554124279902866);
    msg.setSource(51423U);
    msg.setSourceEntity(24U);
    msg.setDestination(24153U);
    msg.setDestinationEntity(217U);
    msg.req_id = 53334U;
    msg.destination.assign("WUOYPGEKAJTEYZTWRAJSJOYGPJPIJQCSLKOBMVSV");
    msg.timeout = 0.18011691337488855;
    msg.sms_text.assign("KKWKSZTILGZKNDFCRLGEFKLTI");

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
    msg.setTimeStamp(0.3068278812034394);
    msg.setSource(36853U);
    msg.setSourceEntity(5U);
    msg.setDestination(1196U);
    msg.setDestinationEntity(104U);
    msg.req_id = 25940U;
    msg.status = 56U;
    msg.info.assign("TLLPREMASGEJNIZTYDMDPWIEKPPDZUHOPQMIJATCWNXELYMQSDEOXHEOGVLKANFUWGBAICFFQGQYNLISSXTBNRXBLVPUWAYJWICHPCJZUBGKMQXRICFBZBXQLHONAATDPNWXVJSKRYPXGWVNVNHHJMJCHFZOVRUEBMXZIOEFCUGIHGUOMXRJDAQFTRELJSDKIKKDKVLPD");

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
    msg.setTimeStamp(0.2909607626909645);
    msg.setSource(25351U);
    msg.setSourceEntity(229U);
    msg.setDestination(39611U);
    msg.setDestinationEntity(129U);
    msg.req_id = 36406U;
    msg.status = 233U;
    msg.info.assign("LYPPORHFXDIFYBTYZJGMLBKXLEOAWPGITOAFVLVWCARJQTBQP");

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
    msg.setTimeStamp(0.7636934205238012);
    msg.setSource(45680U);
    msg.setSourceEntity(52U);
    msg.setDestination(954U);
    msg.setDestinationEntity(123U);
    msg.req_id = 47032U;
    msg.status = 83U;
    msg.info.assign("EPUMJYWTLZZKISKLRCLRMYWQBZXVLTFJUQMUQQJCZZVTYMEYJFXDHNRCHVVNBGURNYGBOMDIWEVERRFBCRAHOMLKQRKSSCZZSHCEAIKIUABBFEEXILONTTTCAKNPITXABVBDGZQPYUXGOQNIWTWMPSRYVSTKLFHLAQDXWISFJMOEIPJJPVOGGHZKULPQPJNKAXAUSBFNOWDYJMXCHGFUEFAPWZHJYED");

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
    msg.setTimeStamp(0.009818629421571523);
    msg.setSource(63779U);
    msg.setSourceEntity(37U);
    msg.setDestination(13007U);
    msg.setDestinationEntity(37U);
    msg.state = 126U;

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
    msg.setTimeStamp(0.9084092748531677);
    msg.setSource(14333U);
    msg.setSourceEntity(166U);
    msg.setDestination(21622U);
    msg.setDestinationEntity(206U);
    msg.state = 50U;

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
    msg.setTimeStamp(0.49016883924671073);
    msg.setSource(55792U);
    msg.setSourceEntity(94U);
    msg.setDestination(56546U);
    msg.setDestinationEntity(38U);
    msg.state = 123U;

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
    msg.setTimeStamp(0.06076227464022477);
    msg.setSource(14792U);
    msg.setSourceEntity(226U);
    msg.setDestination(30850U);
    msg.setDestinationEntity(13U);
    msg.state = 103U;

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
    msg.setTimeStamp(0.46359462171905685);
    msg.setSource(2933U);
    msg.setSourceEntity(212U);
    msg.setDestination(49274U);
    msg.setDestinationEntity(225U);
    msg.state = 1U;

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
    msg.setTimeStamp(0.9403047302081763);
    msg.setSource(35775U);
    msg.setSourceEntity(196U);
    msg.setDestination(63771U);
    msg.setDestinationEntity(71U);
    msg.state = 142U;

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
    msg.setTimeStamp(0.05569648477545419);
    msg.setSource(27509U);
    msg.setSourceEntity(209U);
    msg.setDestination(21198U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.13658349419875837);
    msg.setSource(23372U);
    msg.setSourceEntity(249U);
    msg.setDestination(49286U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.8965878903292308);
    msg.setSource(28863U);
    msg.setSourceEntity(237U);
    msg.setDestination(46293U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.20281171303342105);
    msg.setSource(38278U);
    msg.setSourceEntity(119U);
    msg.setDestination(49886U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("FXKQPKDZIVNALNHNPPBZWBLJOXNCKMRUQMGFQTVXCRJAQBICGRSSRVLHHTFXTVEOKPEHCSHIJOMZHUAUACJSSNKWDJJWDDXLYMGYKDUNEJFPUQMLSDWFODBPYWZRYOKVPIYCVZVKWXTIQLWOSBVLGRKAISOZTAPOHGRM");
    msg.description.assign("CJKDZXYMQATKUKAEXUUQBVBFYBJMRLOJEQHNVEXGCYEDSLUPTJGEHGNNOI");
    msg.vnamespace.assign("JZSXDADZNFVKWCIBDNEQLCLZGHJJSFVUNFXXOJVBKZSBYLPNMLSJGJBKWYRWNGUCJQFYWMWYEPURRILKTXAEELTSGAPZMWTYBGTTUAREFIIKHCOESNKJPEVWTGKEXSQGIDYIMQGPXJSTPVHXVQZSDLTOMAMKABMOIOCHDNLACNAOIVCBSUVRW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UNWZXMXXYLWYLRDDUMLXWQOQBDWFIIXFLTRZMUTIIHIDGIPWNPXJNKGQPDRILFDUCMULRZRSYANOZGWGDYVUHBVDBVGIZEGNPNTSSZFCPCAOQPTTEHCBXMVLBDYEJHTECQVSZYVBNEOROLWACJIVAQAOAJXEBVPJZPNPMSMCAGHKXZFADSUTCGSOFHEKLLKSGWUXGBFTCKT");
    tmp_msg_0.value.assign("JDPSTHLTQLLBDXHRWTZINAUABYHAZRFHZFEKEIBGGPERPGDWZKJUWIXWKIJXBZATWDTEBVBMJXCXETFNSUPMQFRUXIVZZWFAQOWDWIMENQBLVJJSCQSMRVRPURPVHAFHJLNOKNGKDRDCXKGCUFYSLXQYOUNXFOJSQVKCKVCURLKIZIOUHNIBCGJZ");
    tmp_msg_0.type = 54U;
    tmp_msg_0.access = 186U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DGHSKAFAOCSJRGHNZRRUKEPFDOTGUPNYOMZOEWRCCUWPZPHOUOWIBZGJFXFRTTCQPBLELCRVFRFYMPWWVPY");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("GUUZFXOSWPHAFRBILWISCUWMSHGOQOZBONYRBYGTTEGEDVQAVDFTRFBMKLFBLUNSAIYHTXSWPCXUELFPVCKGJHEXPQITERKSTMIQWOFNJETJBQCMZIYZUJOJFJWYDHSVKLWSBUCYNKPVXWQADPFAMUZAKVEWEXMBUQNVMVQPVZIKYNDYIXKNHARGXXDZGRNAWZBITXYHDJRQQOICJPCGKZMPCDCJVHTEMREAGPRBLYKHOZ");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 21001U;
    tmp_tmp_msg_1_0.custom.assign("MFAJUZBYVQLAEDFNNXQNPSZJFCMOUKNWNSPLLWXXXVJYJSJWOYWBESDJRQXARLBHAIULNPOZQYJKXUEKVQKDKFKATFFUDSDDRERKECLVARIRYUPLCYHAGQOTSPZYZMKMHZYWOEMIILXDOBSOMFRMCURXHHEZGUBBSZTCEPPWFJXCGVVNBNINTIAZVDDMUBOQPGVCCFQSTHTPVJNYWHTGRAEMHGIB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Dislodge tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 14179U;
    tmp_tmp_msg_1_1.rpm = 0.38419453952662785;
    tmp_tmp_msg_1_1.direction = 99U;
    tmp_tmp_msg_1_1.custom.assign("ARYNXUSPXAXSWQDISZTDZVTPDY");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::Chlorophyll tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.value = 0.5929414780374258;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::CoverArea tmp_msg_2;
    tmp_msg_2.lat = 0.36590745035472694;
    tmp_msg_2.lon = 0.10563799974631505;
    tmp_msg_2.z = 0.14391826932494045;
    tmp_msg_2.z_units = 185U;
    tmp_msg_2.speed = 0.932997079138251;
    tmp_msg_2.speed_units = 35U;
    IMC::PolygonVertex tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.lat = 0.03161255975316091;
    tmp_tmp_msg_2_0.lon = 0.6306101531217086;
    tmp_msg_2.polygon.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.custom.assign("AFKPXDCWDXNHMJHSEHNPWAFSQYEISDTFBQYRAGVYBJZRRRHEMLAVNMNQAQKYZDKKNKHEXVORSJQAGCJPYDIEVQWRCKNQLKXPOVXEISZIYUNGRD");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.09714119416017186);
    msg.setSource(46522U);
    msg.setSourceEntity(46U);
    msg.setDestination(53901U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("CDIGVQXNQEWPIKDGOCXFJKCYFOZKWKPANYZMLCTFFTLBDCCQZGGVIWDZZPXKRTYWAMBYJHHOUUCSBBZNHAYDDMWTGXLRNWGSODPWNITQOSXAHXKEVVQDEEMQEBJDFATQCWPMGEIGJMWSMOJRNKUEGAUVBLHLRYNJRPSIOIXCIPNSTQPXKRWBYOPDSHAVTUSURVHEVMQHAQUYOEK");
    msg.description.assign("EOIDHWGLSLKNJYTWTGJDQJMUGVGXJNMBEWGULRXBHNZPPOAPVMTNPMIIKPTURVTWCFUOHAKGKUFJIHRRQYMNHHVDRFMJUTFMOBXSFIUPZGWTBUCYVFJYRXCKEOPQYZKHKVHBEASANPQEDUNALAIDNJDRMDSIQLCXZFCZFSELMWWBOCZJIXCVRLHLKNKSOGCVEKSMYFQXLPXZWDQN");
    msg.vnamespace.assign("TEOCHQUHWNLASGTUKWLQZFHBBDAXYNHOTDXCNGESTFISJNRFMUGMCACYZFRNXWMBBNREFBCZLPZYSPDLENWKEANKOMMLDKPIAYFFOBLAQLVJGZGRIUTVAMYJIVIRZYFPRHPOQDWPIXHPQNYEGIVHYUTRKOBOMXRXGHQYDMO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VSCXSWHAVKIWKMDWZEKRMQJVRLHXTQNHNUXHDRKQEGYERFFDDRETGZJDJVKWLLGCGTRTNSWFRYBUKMUUCFLOUCFJNMILABVZWIEQFOXAVTOMBJORKMQQUFZYHPCPPLYEHPNYABKINCMAUYHKGILXZAPYSCDZLSPSZXMIEGVM");
    tmp_msg_0.value.assign("TYLZGIFYYAMFQVONZHOOLBMTTJYRQFTVNFMFYACZCVWSPKLEDMPIRIGLHJKHLLYGBUAPAUXTEOHLOXRUNXQKXQHKBQXO");
    tmp_msg_0.type = 109U;
    tmp_msg_0.access = 206U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZWFWXHDNAIHFBEAYQOVXFMDBFVQATIWPQWQODNISLJEEXLQIOJOPGQPNKIJFQOKTDKYNONCPCBKBIOFHLEQHUKPURGYZMTTWTFYKSISNREIFVPADZPENLZTHZTCMMCSEXYJRAALDBGFGYLSKVMUTAORNFPUZQXPRJMBWUTDVE");
    IMC::CacheControl tmp_msg_1;
    tmp_msg_1.op = 34U;
    tmp_msg_1.snapshot.assign("ZJQQQXKMPDRAVITHHKQYMGRDYXOULGHPYSTUXVETEWNBXEQEIUNIQUXNAWTPMORGTXAMAXGIFVLZVFZJHOKAVEYZVRCTSGUFBOBZQMNEAVWQKWRROKJECNPLFIKFGQLHHP");
    IMC::NavigationUncertainty tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.8933547019381278;
    tmp_tmp_msg_1_0.y = 0.3374182368359373;
    tmp_tmp_msg_1_0.z = 0.5949987552420057;
    tmp_tmp_msg_1_0.phi = 0.566286391811144;
    tmp_tmp_msg_1_0.theta = 0.7981702475517348;
    tmp_tmp_msg_1_0.psi = 0.834529726192693;
    tmp_tmp_msg_1_0.p = 0.8903736442411908;
    tmp_tmp_msg_1_0.q = 0.596129100015048;
    tmp_tmp_msg_1_0.r = 0.08550859375260067;
    tmp_tmp_msg_1_0.u = 0.7488593060519028;
    tmp_tmp_msg_1_0.v = 0.48498237011928624;
    tmp_tmp_msg_1_0.w = 0.39073612336058483;
    tmp_tmp_msg_1_0.bias_psi = 0.7108193881344096;
    tmp_tmp_msg_1_0.bias_r = 0.6617508515857239;
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.6465767245948697);
    msg.setSource(57438U);
    msg.setSourceEntity(139U);
    msg.setDestination(4850U);
    msg.setDestinationEntity(171U);
    msg.plan_id.assign("WGLAZVRSYRGOPRM");
    msg.description.assign("XDXMHSSKWXXHXJTUGKOLEOZDNFZPBLJFUPFJXJBSJCZUOVNEDNFMDSLNAATIGGTLRYQIZKBLKOCBNQZUKIQWXLOOUVEFSDFCNWBNTCQWAIPMRXEEUTIFGN");
    msg.vnamespace.assign("MEETRKZFKNGUZMWNCJUIWDIXFCBJTVRQBXNVYBZLJFFDKCXYZOTQODWBVZYHUPPPLRGVIKQZFIBWUSGELMMYZNIRTJGUPFWAZEOXBZKOUDVANHOFUROTQTRCLCEOMSCTBSFKNBNQKJHYAXRLIDLWHSCWVQSYJGKPUADEPVGDDRVHIPBHLCIWJRQQGYAXLYAMGQJSAMGSYIZD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HHQZNKQUMWQQNC");
    tmp_msg_0.value.assign("ICUFLPOICZWFDCGBFRNYKXWNLHABMTGDWAHFVTJPZLETWIIOLNEBLRATLTVYGOPRSRNENQEGAZHNIBWXJVQOJKPZAESDUVWJEJSGTKAOPPBRHTQWCVDPKMQEJECMUVOKDMAFXMQFGKUUQM");
    tmp_msg_0.type = 253U;
    tmp_msg_0.access = 19U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GPSVUDKPBYGJFQZRDTXFAITBFUAHBOPVHVYAKNCULNYCDTEGJUIKZYZMXSBFKDXEDPFYURWINKIZONNUJKIPITSPZOMRHJFCETEPHCLVJDKOQVLBAZVGDMQS");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PHUBJZGMQXBJEOYHECSNPUOBSJTWSWMBMCITAQAYGNQDSSAIVHLPRIGLGJYFPGINPXVPQZYRNSBDQFCKLLQUTFRKHIRIUTYEIFFOWLGFRCEZMDNKCCCDAYRUJKHIWTQBAEXONMAVXCGGKHZDRMRPKYQHWQXHTSMLDAYTFJBUSWQOAKXWOEGVPOICAOPXNVMUHYXZFNLSEJTURXZDTK");
    tmp_msg_1.dest_man.assign("WZGAEPIJZUCWRVGZAMHYVAZSRDOEDSBYYNDQTERBFZIJEBIAPOGWCGXQOSTPNXSKZLSMUYEYJPXJWQURCPVLJLTDWDF");
    tmp_msg_1.conditions.assign("MVJHEQGNOCFXUNPLDMKHYRNWHHZQIGDICQULGVHKC");
    IMC::LedBrightness tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("YAVXGPFOTNITQSKXOCVIJTBEJDZGIYGRLNXLEGCMSRZYYCTRJZA");
    tmp_tmp_msg_1_0.value = 102U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::DesiredLinearState tmp_msg_2;
    tmp_msg_2.x = 0.13906588505423956;
    tmp_msg_2.y = 0.2979814471754624;
    tmp_msg_2.z = 0.7890709051573702;
    tmp_msg_2.vx = 0.41643335318699937;
    tmp_msg_2.vy = 0.3014462510651046;
    tmp_msg_2.vz = 0.4929688763778066;
    tmp_msg_2.ax = 0.09293301425357436;
    tmp_msg_2.ay = 0.3052257285162675;
    tmp_msg_2.az = 0.6905438632548531;
    tmp_msg_2.flags = 46123U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::IoEvent tmp_msg_3;
    tmp_msg_3.type = 120U;
    tmp_msg_3.error.assign("JFXWBBWEKKZSYJTGGZSNYYFJQDURCGVVGMUULVHXNLHOVBDBLGORCOMOZNYHFHFFRVDZPPUOHZUVDKNGKGTMGBEYPXUMNQXXQGEWLDWLFPQEOTWA");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.7453186756356184);
    msg.setSource(42364U);
    msg.setSourceEntity(61U);
    msg.setDestination(57479U);
    msg.setDestinationEntity(175U);
    msg.maneuver_id.assign("DTFGWQYINCZMRQQWDLCVIZOWJITFTKUMJKGNXRZDQUQYFXQWSHLXOAIHDHELSAGHBJNADOUTZDYFCLXCFNTVBUDBFBRTPHIEXSGSAGJYQOYUBOQBAITWAOICRKVVNOZWGSDLPLUTMWJIWKMFUHLRSSLNKCHURFKQMEPPSKGZQUWEMZRMYYIDMIZBALETGHPPOUFMVXVEZHPRCGZWOYAJEXGNPSAXVXVYHJBXJPAOYCEDM");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 56396U;
    tmp_msg_0.flags = 145U;
    tmp_msg_0.lat = 0.6704444991604107;
    tmp_msg_0.lon = 0.5151468074312522;
    tmp_msg_0.start_z = 0.18324721880361727;
    tmp_msg_0.start_z_units = 23U;
    tmp_msg_0.end_z = 0.9996463764945626;
    tmp_msg_0.end_z_units = 81U;
    tmp_msg_0.radius = 0.8344080159197422;
    tmp_msg_0.speed = 0.12661339821676876;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.custom.assign("BZPLVUUUKXCRTKKOKBD");
    msg.data.set(tmp_msg_0);
    IMC::StateReport tmp_msg_1;
    tmp_msg_1.stime = 1163013033U;
    tmp_msg_1.latitude = 0.43799586920991085;
    tmp_msg_1.longitude = 0.20273016004689515;
    tmp_msg_1.altitude = 62056U;
    tmp_msg_1.depth = 36429U;
    tmp_msg_1.heading = 50139U;
    tmp_msg_1.speed = -5174;
    tmp_msg_1.fuel = -102;
    tmp_msg_1.exec_state = -74;
    tmp_msg_1.plan_checksum = 50667U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AllocatedControlTorques tmp_msg_2;
    tmp_msg_2.k = 0.6936314982484508;
    tmp_msg_2.m = 0.9536983872081363;
    tmp_msg_2.n = 0.3024624041899684;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.7325556294362018);
    msg.setSource(4123U);
    msg.setSourceEntity(146U);
    msg.setDestination(43697U);
    msg.setDestinationEntity(50U);
    msg.maneuver_id.assign("TGLHCLCLGYBWLAHCJVAFKUJKEYFSBLVTYTVIUPBDV");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.21063632433497115;
    tmp_msg_0.lat = 0.5671638743395668;
    tmp_msg_0.lon = 0.828559681354743;
    tmp_msg_0.z = 0.22739899638593575;
    tmp_msg_0.z_units = 123U;
    tmp_msg_0.travel_z = 0.6750333087783195;
    tmp_msg_0.travel_z_units = 162U;
    tmp_msg_0.delayed = 196U;
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.30947581968533633);
    msg.setSource(53874U);
    msg.setSourceEntity(0U);
    msg.setDestination(20780U);
    msg.setDestinationEntity(194U);
    msg.maneuver_id.assign("MOUVKYHBAPNEEUSMHSCXCYYMPGJJQBSAFXZPCHKIVUDKTJNOXSNHUHLYXMXHKGTOBIDZPUTCBXGZDBQVZVNZNBICGYDWPKSFFLWVZCXIMIUORJYDRPTRGMXLDYBAOUOOTQMWLEECJPLAILTZJFHKXLDWKGKIBOOCSEZPSWWBHFGSBEEYRVNRVITNKV");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 56309U;
    tmp_msg_0.lat = 0.8663901083260002;
    tmp_msg_0.lon = 0.6182375494613852;
    tmp_msg_0.z = 0.8886226332171704;
    tmp_msg_0.z_units = 85U;
    tmp_msg_0.speed = 0.6977970435239947;
    tmp_msg_0.speed_units = 141U;
    tmp_msg_0.custom.assign("AKJPQELTLADAGXNY");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.9925629918845517);
    msg.setSource(8090U);
    msg.setSourceEntity(222U);
    msg.setDestination(28219U);
    msg.setDestinationEntity(196U);
    msg.source_man.assign("XPCVNDQHBXIZONQHUJAFUHLRVOGYVBPMBWJMNHICKPZOSZWGSGKDEVDDY");
    msg.dest_man.assign("YAGQJYOCLDXLARFMYHLVAZQPNTIDKHKUXCSVGVQPZXGDKYTEAPCUCTRFNKHAPOCGRYISMGNOUHEUTVGRDJZJRANAQUKLZBQSKSZBMGBBNESBJWYCNTEX");
    msg.conditions.assign("KWDFWIBYJRASEGIVZERZECENMBTIWYLGNGYYCQRISVCVTJUJEYPJHIQZLRNDFSKGVUZCPTGWOVNCCHREWKIXMOTMXXRLXADKBFAPHESQYSNXMVZKIFYAJLXNDAEZUAOWBQKFQJBMPOOXWPANBUHQWFVMGKNJURIVQPQMCMKYSSCOKXZTPSHGKMLURDRVUTFHNOPDYAGIEZDLMGORUSTBCBYOWBLLDZPVSXFUU");
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 208U;
    tmp_msg_0.plan_id = 29888U;
    tmp_msg_0.wpt_id = 235U;
    tmp_msg_0.settings_chk = 3167U;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.01856268350329271);
    msg.setSource(7217U);
    msg.setSourceEntity(145U);
    msg.setDestination(24400U);
    msg.setDestinationEntity(223U);
    msg.source_man.assign("MYQKRGWKCSOAKEDLQYYEFVTXMJLAEBXNHGPRNTOLEFWZJIHW");
    msg.dest_man.assign("YBQAUUFQNZTDTODQNQIRBNJNVSAJWSMRDBOZBIIOUUWIF");
    msg.conditions.assign("HFHLTIJQQMLJWDQLRXDCHYPGBFIITOMYMSCSJKNNZSRUMRXXLUFXHGAC");
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.14669450339982104;
    tmp_msg_0.sys_src = 47159U;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6524045895357687);
    msg.setSource(38880U);
    msg.setSourceEntity(38U);
    msg.setDestination(49293U);
    msg.setDestinationEntity(95U);
    msg.source_man.assign("BSSOFIGZEPIETJVNYAGMAKHCKIFTCEHJFAPSKHSYZVCFBKOWWXETBMNDEIAOOOBRVISQOHWQTTQDFCYNXWXEMRVURWFBHWVGQWXDKGIAJMSFTMOPXUMHLVMRBJWUHKEJLLQYLDVAPXVBYJXGBSKCQNAISOKUPWNQDJZMVOEYZACYSJTRZNBRXYRZNFOLNCEQZPVPKRUUPTQSUULWPCRPLGZBMZQCHZATNLHYUFDTEMRNJXGDYIGJ");
    msg.dest_man.assign("BPDXMOGNBQHLCZI");
    msg.conditions.assign("PJWLQGTOXDBYXVZUKGSDEZHOSHKNMYXYHRZNTWPSQBFRWETFCZOFYVGEAKMBFHJBSNTURSEWY");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.6786163610115767;
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
    msg.setTimeStamp(0.00018316557359443486);
    msg.setSource(27312U);
    msg.setSourceEntity(188U);
    msg.setDestination(62325U);
    msg.setDestinationEntity(87U);
    msg.command = 153U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UCEIQHHYEKTQMMYVWCLPTGOYNUNOEZEBJYTDXMTPQVOEHUARHMGGFYRBVCDUFORXDWLUWGJWCBYTKBJSLTIHIPNBIZQFHBSGPOKUQRVBDRCFXAKWVMFGDNAZIRZOESNZSYPVHFWRNQFGJULEIDFI");
    tmp_msg_0.description.assign("TGHOTVAGOTZYEJPKXUQRUQ");
    tmp_msg_0.vnamespace.assign("RAKUWHBHJKEDDFRYILVXQP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IEOBNFDZEKLJUGXQVZODAHAUKKZJSBPFRQNWLIZPJQENSHYMBOGYIXZWXGONTCGATWYFSLDJCUXYLWSUIRJIBYMXZCCHFMHRHSXCWJENOGUSFQPEEBGMSOVVGUNIIXDVYEPRHBOQFMRTIKYXWKERYDGJVTMKACURHFPBVHKU");
    tmp_tmp_msg_0_0.value.assign("AOLWTRDGZMWGFFKVRTLXTUYYIVVKSSJOQLPUQRQALAPJBBNIJKLLZMVEITXYTDEXFPBRDJQYUJCJJMHQHHXHIMZJCUGTPYPBQECYFKJIFBZWXCKIVBLGYQCGVW");
    tmp_tmp_msg_0_0.type = 32U;
    tmp_tmp_msg_0_0.access = 63U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QOFAPDJSPVCTGRCCTFJNKHYYSKKNAGEYGHFMBLZPDUMPTBYUTYBGUZJDZCOQJXDXUEUVYB");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PURZANJNYASYTGBWPDDGIMKRLFNFRWQVSTXYDCBPMDEZCUMUJWIVYKMSXLLMZZE");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("NJKMFNKEIGTYLVFDNIEXDQIFDAFWZCBAOHQJLOBSIMYPMCPUUFPKZHTOPPIFKSXEZFMPGEZFJWSYLJJGRKSMCNXNIVTOZXKIYPSOHFETGUDTWATVESXAQBQATBIHKONBBDVXVWA");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("LGBSIWCQXJTBUFCHZFNBMCVYOHEEIQTGAGLFYTOMWABCLGM");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("NXGVBHQOZCLBVMKIRKPRVAMHSNLISJRHQBRPACSVCNZWAYBERJBIJ");
    tmp_tmp_tmp_msg_0_1_0.description.assign("HRKQEVSMTDWEYMXEXYTLIVJDGUQPZLOFBPVSTKFOKPVGHTLFPWYUXLCQEMDWIPIQNCMUFOBKVZZJMBCGLTWXATWZOBJZRMYNBGYORZZFNPIVHJYXHBGRBTQIAWLWKRHYSYBPIBPSLXCKUXNEGTDAVNFZUGTLGTGSEMQAHHCHMNAVILINNUBJVAOJSMPJJUSNMZQODEROCFIRACDRQIDREDDRSCCSAFYXP");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.8127968262088664;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.3797691605653958;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.7695923997599311;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.04882882324530213;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 28453U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.9865323678452201;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 15127U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 40212U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.5448888669942131;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ZNVQEGPFZUAXBAJIWVLSSCXKMNKYPHHBWDMHNLROCEOMJLREBXUDGAFZCPTMLXGYBROLUHXKWVCKTXOYXRRVQINXJGPHA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("OIAAUYTAJQCZPNXSKLYCACFCQDDWEBSEKPKSASFMTDHAPVZYIHRGHUUJRRGOTXMCWIXXQPNNQNIHRTOFAJDUMHSGEZJNSNOQLZNGHZUVJUPPWGXYRJYPCIBQVFWNZMQIDB");
    tmp_tmp_tmp_msg_0_1_1.attr_type = 148U;
    tmp_tmp_tmp_msg_0_1_1.min.assign("INKAYYPVJSAI");
    tmp_tmp_tmp_msg_0_1_1.max.assign("RGQOLEZJDMRXNSMVQWBBOHPAYCVXSSJAJYXGZNBGTEOWNENHRFXEXJLJKCFIIZCUPXKWRCRBAWNLDFSJSITHWKDHUGTZCKLWSYWYLVBMNVAZDRKZUTQDFUQLPTJPTPFULQFMBGLBK");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("VIHZCAGEWIMGAADPMZMXDREIPZPQGGDIHENIWAZZTQDOMMSTVOIGQIOHUXAFCFRWHCXJMHDKKAMSLTYHRSXRPNQPNBBQKOHJJVJOAXYERRENNQVVTTNUMSWRUJVEL");
    tmp_tmp_msg_0_2.dest_man.assign("EPRUWMTAQRLKQXWGOAUYZLWGFCVBXBJDAUYFKVJNEZWNCDZMTOOPQKXLOQEXTXCFGTJHDVFLEYELFHBDPMFSYRNEVLQBFMGNYTYULWRFAOIJKVRBVKZWHKPKOSPCMDUNBHHMIYKYJEPCPGNCEVHTIRGISBRCILHQSPNFYMGTJESAWNTALBEVZAWKUWGINLDZNATV");
    tmp_tmp_msg_0_2.conditions.assign("JIAQUMWHTSPZLZYKOEKAIDVPDJEISGDYGOHCHEUYUHFGBRLSTCNWSBSKELYXMWKIOUOCCVWAHQQZVMCVPYDBVEXJGBWFHURGNFSSZUPBHOZQBRAZQDYASLFFJZJKWVCZEAPLOIFTQQKYCWOVXRTWUSYHTJMXTEGKLBPATPOTI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::CommsRelay tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.43482153302855575;
    tmp_tmp_msg_0_3.lon = 0.23330061643603928;
    tmp_tmp_msg_0_3.speed = 0.1802888810662191;
    tmp_tmp_msg_0_3.speed_units = 103U;
    tmp_tmp_msg_0_3.duration = 55793U;
    tmp_tmp_msg_0_3.sys_a = 47346U;
    tmp_tmp_msg_0_3.sys_b = 21394U;
    tmp_tmp_msg_0_3.move_threshold = 0.7588541155938292;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.026793247369088058);
    msg.setSource(259U);
    msg.setSourceEntity(19U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(10U);
    msg.command = 125U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IFQFJLEWQBKOVOBKOJQGSFKADXTZVNXKEOBNWZETANCSCRZTUMPMZLLXPWJJVZEZVYAQXWDLOXYMYGVYRHHOBDVIMFTLJAMMPQNYSDRBBGCWNNPXLFEJPYCFJAWKOAUSHQGDYCBVGYPTUUOLUDICIGUNKQSGEFMTJINGHPUVHVGWXDJQZEWZAIUCEPFNFHOPHXVLRUWGUZRQZDKDN");
    tmp_msg_0.description.assign("VHIFUWTRFMBQIEOUJFLWZTCWNTODJOIXGKVGRVBEAPUVJWVLURDYQCLLVKFIFJMUBFMNXBKWFKLNNPZPJTYDRWCBXUYANVWKFCHSMUQYJAABRISPJSKUZTGXCBXGUSNDAJAYSXHLNREMQPDHHESRYAVDHEXSDKZFSNPLNROJQAOOHEPKCRYPKHPLJGGEUTZTIGXWBQBGD");
    tmp_msg_0.vnamespace.assign("CWXXIQNGJKQESIMANZICLEZUJAEBPSGQMLFOATSCCMRJZLFCVGBQKRKDYLYLCOOWIOENPFGTHOHFJLKISOYXYJEKWPBTIYLDGWQVFQGSTJKWQEVHAJIKNMCOCVYDGVHVOQALESYMCESMNPZFTCEUFKQWRTUYWMJKAZXBDTOHNUZXDH");
    tmp_msg_0.start_man_id.assign("XGCRTRSOHGJKIFDKMFEFHOOYUQDPQPSENHCMQJXODCESIJDBFGEDUYRFYEHUTBGRPTZNAXWCIGTMTMZFUUKIFMMBTVHSOXYTTIQAZBVOASRZAWUIKHSKWBWUJRAQAHCNGKLLZRXJTNGTRKXWJAQSVHQWZIPVFLYX");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QKLFIWJSQBWMWCEMBOJYAUSWOYUQYVVFKIORNXXUYQXICCUTZLDNXIQMVBRONPWTZAMTGPEOQCJRWEGUBDEV");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 55420U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6936282729711637;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8441506750516345;
    tmp_tmp_tmp_msg_0_0_0.z = 0.36606854872606465;
    tmp_tmp_tmp_msg_0_0_0.z_units = 241U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.5626044505605015;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 196U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JRRYCSYYJCNNNTADMREMJPMQZIXNOJXLCLCNPTKDLAAPWBYOJVMNQSSHEVAHFBMGQMPUJNGHGPUISSCGLHQYXCZKDWEHQMJOBFGSLIVBXUXOSKKRZZKBRFXINOO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::UsblFixExtended tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.target.assign("LHOIDJFVDJQGTUHAEFQNUDSHLLOHSNZMGWTHMBGEQFPXKCBVEBDBETJRTPLTFZSHIQZCUCVXRNGKDTKGYOKNOEVIDYYCMQYCZDGXBFUATCUXSVVISQMLCPCLAZIQFKPVZMOMSESBFMMLZYRAHWIOVYNQRWATTJNSJJFBIUYAJREBBUOOAWIENXXDFLPOAPRUEGKPRXXNOHBWNVSYUYKJKPZXRDAQILWKHYGZUAEPWVRWJQCRCFXMTGZ");
    tmp_tmp_tmp_msg_0_0_1.lat = 0.7820789611355611;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.11330863399330882;
    tmp_tmp_tmp_msg_0_0_1.z_units = 80U;
    tmp_tmp_tmp_msg_0_0_1.z = 0.6406974849802065;
    tmp_tmp_tmp_msg_0_0_1.accuracy = 0.18177543652838102;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("SVNZTFYQLLFLUVRETCYRWMVVQANWTGGPPWTZCJILTXXBQHVKMATTKGEBXKLJLHQDYEUHDKJYXYCGPFLKTPUNOHUXQJORJJMOCCPDUUDWAYWZGRFLEEYSIMJCPAVDRFHQFZLXWBVPISEJNABZSMYIVGCMB");
    tmp_tmp_msg_0_1.dest_man.assign("UOYQCWBLDXAZHJJLUTKNXYWRGIAEMHTXSQQEJWZEDPGUFVGGAJPUYTJSBANVVRFKPFLMOEYGDDXUIFRJESR");
    tmp_tmp_msg_0_1.conditions.assign("ZXTJXOHXYAKJLEMNGYWTGNGFVAGIDUOEAMVUKUVWEEUEPGBBMZEPUMOHDPMHNWRIKTHLPGOUBWCITMQNUFJZJKBQNOKIDVFBRYAEFDDCYZSLFOOQMWEBQZQXATWVAJRIQTWAVWBRSZRJOZDYRGDKANUVLFJPQPKRHRASQPEVTCLLDBYHYSOFMPJCHLYBHNXPHSALJSTZBMSLIZXZIDRQLPSYRCFTGKKGIXECYXIXUICMX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.7801808291948179);
    msg.setSource(51242U);
    msg.setSourceEntity(5U);
    msg.setDestination(947U);
    msg.setDestinationEntity(249U);
    msg.command = 78U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RUIMAZYKANSWGBNCOISJKZOMLECPDHPBTTKHWYNRKDMLKPNQSVNTLTMTPSVDHWWFGQFEKPIICXLHGFNRMVJHBDOMKQAGYGBZXAWF");
    tmp_msg_0.description.assign("DAYIOCEADMZORBYLMXPSHZPFVPNYXBJBVVZQMUXMAURZOJOFWEILKHLPCNENENSTBGCTAWIQ");
    tmp_msg_0.vnamespace.assign("UFUATMDMDJDBAAOKHWKSMRRBNMNQLSFQPTSURYTIYGZEELWARLUVDSWIFCJECZLCIIBEMEJW");
    tmp_msg_0.start_man_id.assign("YXIUHDYPNOICWQPYUPHBFVZSGMGRCWOJIDSCJEHKVYPFVZSYSEVMFMKNAELAUBRBWQXJOGZUDCWLYRMNAXWEMZSGELALJSGTZAAPWBUVHCXLRJUBBKFTWTCYNDKORJHSDYMXQAVUUFLGCTNNJWPLNQQEHYZCJUGHCAQBUIIKNADRJWRFSMXIKFRPVRIQVYF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("XCAUZLADWVBAWLXSEXTKFQASWDREDCBALTBDEZCWYBRJWQMZFSLNHRT");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredPath tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.path_ref = 3660915892U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_lat = 0.5504146641584836;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_lon = 0.6515242142444282;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_z = 0.7198158432693574;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_z_units = 33U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_lat = 0.24575019874580972;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_lon = 0.49726348935417564;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_z = 0.07073410986612627;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_z_units = 81U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.6078910700433562;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 157U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lradius = 0.19929546881180094;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.flags = 253U;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 19485U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NDWIIWFQLTOBMSZMRBITSZJYJQQFVDSJKBQOCVRNCXDPWIXISMKVYNZLAQDTRNVMNOFFETHLBBX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Land tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.6301529098356047;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.9293120550501801;
    tmp_tmp_tmp_msg_0_0_1.z = 0.7783324935718252;
    tmp_tmp_tmp_msg_0_0_1.z_units = 225U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.04106439259611261;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 78U;
    tmp_tmp_tmp_msg_0_0_1.abort_z = 0.5557644397579219;
    tmp_tmp_tmp_msg_0_0_1.bearing = 0.6409323052467525;
    tmp_tmp_tmp_msg_0_0_1.glide_slope = 115U;
    tmp_tmp_tmp_msg_0_0_1.glide_slope_alt = 0.6724038587924474;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("UPJXGFTUQUIPMHTVQABFPYOGEWRZYAF");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::FollowRefState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.control_src = 42401U;
    tmp_tmp_msg_0_1.control_ent = 85U;
    IMC::Reference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.flags = 144U;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.038229500074548395;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.speed_units = 148U;
    tmp_tmp_tmp_msg_0_1_0.speed.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.value = 0.7436662106492143;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.z_units = 30U;
    tmp_tmp_tmp_msg_0_1_0.z.set(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    tmp_tmp_tmp_msg_0_1_0.lat = 0.1376521498177965;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.20244195904786755;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.6757330812184561;
    tmp_tmp_msg_0_1.reference.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.state = 63U;
    tmp_tmp_msg_0_1.proximity = 229U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::MessagePart tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.uid = 41U;
    tmp_tmp_msg_0_2.frag_number = 173U;
    tmp_tmp_msg_0_2.num_frags = 173U;
    const char tmp_tmp_tmp_msg_0_2_0[] = {23, 13, 113, 44, -94, -97, 83, -81, -84, 76, 112, -83, -51, 83, 119, -97, -91, 19, 101, -33, 43, -55, 60, 68, -78, -113, -95, 123, -112, -2, -27, -75, 36, 62, -58, 6, -96, 121, -52, 104, 76, 53, -37, 49, -41, -100, -73, -124, 29, -5, -65, -39, -30, 3, -54, 1, -122, -89, -33, -81, 23, -113, 38, 21, 115, 96, -15, 66, 112, 61, 95, 78, 115, 123, 59, -115, -114, -34, -96, -121, 52, 67, 70, -76, 113, -123, 98, -3, -7, 21, 72, -37, -95, -54, -57, 117, -38, 111, -16, 63, 123, 93, -13, -105, 0, -96, -23, 66, -13, 67, 82, -11, 0, 19, -80, -4, 40, -102, -69, 84, -107, -85, 97, 86, -17, 121, -29, 11, 44, -99, -34, -9, 14, -75, 20, 13, 87, -117, 22, -114, -100, -115, -79, -49, -100, -128, -109, -53, 30, 18, 103, 116, -57, -58, 39, -69, -108, 81, -1};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.2035255706430642);
    msg.setSource(33016U);
    msg.setSourceEntity(202U);
    msg.setDestination(8578U);
    msg.setDestinationEntity(146U);
    msg.state = 39U;
    msg.plan_id.assign("SXLRQMRHWBGZCUJGURMALLCRZBRRQVMNODIWSGFFJZCYHJRUGDNXLGZPTILDZXYDQJOPJKQYPIWHXWAGTGIPNDOZHKFYNVBPNVFEMNJ");
    msg.comm_level = 194U;

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
    msg.setTimeStamp(0.42910105450416347);
    msg.setSource(6929U);
    msg.setSourceEntity(17U);
    msg.setDestination(24513U);
    msg.setDestinationEntity(113U);
    msg.state = 76U;
    msg.plan_id.assign("LTXIYCLQIOQJGKQKFNQDVJCQSCMUFUJEAUUOFAOHGJTAGDMWAMYGWDVBRLKSUPCFHIEAACZMZYSN");
    msg.comm_level = 38U;

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
    msg.setTimeStamp(0.7294286751283865);
    msg.setSource(52521U);
    msg.setSourceEntity(135U);
    msg.setDestination(10440U);
    msg.setDestinationEntity(240U);
    msg.state = 79U;
    msg.plan_id.assign("NYIBFXVQJCDZMOAAJBPMITWYNDLLBBLCJYXKNHFRJEVOSANRAQSZXVHPJNFPWZWTUKXUNAYLBGCOTDCZJOAIGRBPNSVFIXOJQISCHUOD");
    msg.comm_level = 242U;

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
    msg.setTimeStamp(0.12272082839626508);
    msg.setSource(21113U);
    msg.setSourceEntity(64U);
    msg.setDestination(46733U);
    msg.setDestinationEntity(19U);
    msg.type = 221U;
    msg.op = 165U;
    msg.request_id = 11902U;
    msg.plan_id.assign("NQDDUAPVEDDMKGZEVOLHYELCSGLDWRXGUEXUCJTMYJYMICCVYRPEWSCFVPGAPCKBUJAXRXLQNSIRLDWRTYKWZYQQMFPBZZKAXCNPSBXQSXKKMMOWANWJACCIVGMOKQPWMLPYRHVLIENNH");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 55738U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GKYLTQVPUDEFCMEDKVDJUNGZYMYLPTSXXMAWQBOAORETMKDICBBHCTNTLJDEOGGJCRYNVFSKJHEBLOOARECPJLPBMMAIWNBWRKLCVSFUGBPWFFHIUUNUZNTZOXUKFCVWOLGQAZYLNAIZIHRQVBSWBQPARYFPHTKHZESEWYHAGJNTUGQDW");

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
    msg.setTimeStamp(0.3754829566596013);
    msg.setSource(46179U);
    msg.setSourceEntity(49U);
    msg.setDestination(12411U);
    msg.setDestinationEntity(147U);
    msg.type = 200U;
    msg.op = 1U;
    msg.request_id = 13963U;
    msg.plan_id.assign("SYSUDQFGLKIEFMROFNLRGIMTWKMZAQCNPOAPIWIPZTZGVJWGCTZQQERDDLKIVWWKBSG");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 189U;
    tmp_msg_0.speed = 40855U;
    const char tmp_tmp_msg_0_0[] = {-122, 25, -77, -99, -90, 30, 64, 105, 37, 103, -96, -61, -76, 89, 101, 37, 73, -44, 81, -78, -44, -95, 45, 123, -17, 125, 117, -109, -90, -25, -75, 65, 77, 122, -66, 34, 13, -30, -44, 98, 91, 105, -89, -78, -59, 109, 79, 27, 3, 80, 85, -34, 100, -23, 31, 28, 32, 46, -59, 3, 51, -102, 79, 46, -110, 69, 71, 126, 73, -6, 27, -48, -71, -26, 35, -47, -3, 83, 55, 35, 107, 17, 33, -35, 5, -32, -77, -6, -5, 65, -106, 10, 92, -109, 108, 41, -55, -110, -42, -4, -62, -111, 50, -40, 73, 47, -96, -46, -94, -31, -19, -125, -104, -104, -8, -73, -5, 126, 48, 88, -84, 63, 79, -29, -100, -49, -20, -30, 26, -14, 74, -56};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MKEDCFYIHRIXMVWLXZCHZSEWTPFNXSQKFKKNTTDKPBMYVCMYDOWLHGQEEVQFPGWHUQIGVCGZNEJESGOBXYAFPKNYVSIORAYNVTWJMHBMDSANXQIBSTPFJHPKUHYVRAIQXOEMDXAODGZUDCUJJQWLCILIRVZLABBGWPGGUHFTVJADRUHQBXUARCTQLRTHTLGZWSFILWPRLOPYKAROINXZSRBFEOUVMKYZWCPUBC");

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
    msg.setTimeStamp(0.755528453297109);
    msg.setSource(20967U);
    msg.setSourceEntity(128U);
    msg.setDestination(46584U);
    msg.setDestinationEntity(163U);
    msg.type = 22U;
    msg.op = 170U;
    msg.request_id = 13310U;
    msg.plan_id.assign("WVOPWISFLFXUJGANFESOLWQTQJYJXQMHISWDUBRJJVFNZDBPNUTRAEWKLDHJMHTCWCARNZDATERJOIPUPZVGEDBSTWYOQIEKLSX");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 146U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AHOWBPEGCAVMSFCGOIDYPLSIORHYPYALXMFGIBSOHZLNQQHDCFOJSLRBAUGNHBMGXEOSEUTROIKCBAZRMLWKZQUEHLFTJYYNVMQTGRQYJVNXWJKJGOUCTXBNJWNBKVWZTIUPAADDLCMXPPZGKN");

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
    msg.setTimeStamp(0.8328456990557104);
    msg.setSource(58292U);
    msg.setSourceEntity(141U);
    msg.setDestination(57164U);
    msg.setDestinationEntity(46U);
    msg.plan_count = 11526U;
    msg.plan_size = 3553617830U;
    msg.change_time = 0.23544579060004556;
    msg.change_sid = 13940U;
    msg.change_sname.assign("OSBHVOFPDXREDDEMSTJXIUWUWFBXKANCSEBYWBEWKKFJRMIZDY");
    const char tmp_msg_0[] = {-45, 65, -52, -32, -114, 77, -95, 87, 86, 46, -125, 24, -70, -73, 22, 88, -46, 101, 104, -115, 56, -123, -5, 72, -59, -40, 96, -17, 36, -83, -101, -23, -13, -106, 6, -95, 104, 77, -115, -56, 106, -71};
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
    msg.setTimeStamp(0.9724691729345639);
    msg.setSource(19611U);
    msg.setSourceEntity(89U);
    msg.setDestination(15046U);
    msg.setDestinationEntity(226U);
    msg.plan_count = 4469U;
    msg.plan_size = 3205763865U;
    msg.change_time = 0.22723922424920062;
    msg.change_sid = 57736U;
    msg.change_sname.assign("VZFCAJHYEAORDWXIOJYWFDQINXDPSTFDLFQLRSAGHHBRQVCCBKZDXRIPKPCHORVHJLZOEOKAPQTDIVPHISEHMVQNGFJOJA");
    const char tmp_msg_0[] = {-15, 110, 29, 50, -43, -14, -101, -61, -119, 124, -34, -9, -81, -16, -86, -68, -24, -27, -106, 29, -43, 11, 104, -49, -19, 67, 103, -90, 121, -21, 9, -75, -26, 33, 13, 77, -29, 103, 71, 44, -80, -121, -115, 3, -47, 6, -98, -16, -41, -102, 65, -11, -107, -111, -4, 21, -103, -91, -92, -99, 99, 28, 61, 61, -20, 59, -77, 117, -15, 105, -8, 64, 97, 54, -73, -78, -95, 25, 75, 76, 105, 82, 49, -127, -55, -29, -84, -6, -13, -49, 50, -107, 97, 114, -69, 49, -44, -118, -111, -26, 65, 52, -94, -99, 43, -55, -100, -106, -88, -104, 65, -124, -109, -45, -50, -82, -81, 62, -9, -69, 43, -74, -123, -102, -109, -10, 15, 117, 33, -59, -66, -107, -72, 7, 8, 28, 73, 86, 78, -77, -27, -18, 123, 49, -85, -114, 56, 28, 20, 100, 55, -63, -93, 53, -77, 90, -14, 46, 4, -81, -82, 36, 112, 55, 67, 31, -20, -30, -56, 110, -24, -49, 52, -48, 19, -115, -74, 84, 45, 92, -13, 83, -106, -52, -114, -94, -34, 16, 2};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.03139304253856767);
    msg.setSource(13681U);
    msg.setSourceEntity(158U);
    msg.setDestination(5027U);
    msg.setDestinationEntity(31U);
    msg.plan_count = 19915U;
    msg.plan_size = 2053805198U;
    msg.change_time = 0.5945068796572445;
    msg.change_sid = 47653U;
    msg.change_sname.assign("KLXTLADZBLULMSUZOTNKLQOIJUVHEZXFIODAVNYILJNIGG");
    const char tmp_msg_0[] = {27, -48, 73, -63, -58, -23, -17, 68, -46, 61, -104, 122, 22, -122, -79, -90, 40, 79, 70, -3, -84, 68, -32, 113, -39, 11, -49, 116, -61, 114, 50, 38, 105, 114, -107, -128, -95, -90, 37, -63, -32, -99, 81, -76, -74, -26, -40, -24, -21, 23, 3, 51, -108, 94, 61, -1, 110, -106, 29, -34, -52, 16, 47, 49, -79, 105, 45, 96, 40, 17, 25, -109, -43, 65, -114, 85, 74, 101, 5, 98, 39, 111, -78, -28, -45, -2, -22, 84, 102, -102, 20, -42, -50, -124, 118, 64, -12, -120, -76, 85, -88, 52, -34, 104, -75, -92, 105, -29, 84, -12, -12, -33, -119, -82, -122, 18, 57, -56, -26, -38, 126, 47, -44, 74, -128, -88, 66, 85, 95, 57, -12, 68, 101, -48, -83, 24, 57, 115, 110, 75, 86, 114, 30, -59, -1, -117, -5, -22, 24, -51, -27, -17, -82, -114, -11, -110, -104, -92, 116, 100, -36, 120, -76, -25, 98, -3, -24, 57, -59, 17, 62, 66, -89, 51, 77, 111, -110, -77, -47, 116, 45, -17, -37, 31, 81, 79, 12, -128, -11, -75, 92, 16, -96, -119, -102, -104, -42, -117, 17, 20, -10, -45, -53, -98, -75, -118, -116, 28, 50, 94, -55, 5, -94, 123, -70, -21, 68, -31, 10, 3, -90, -87, -113, 68, -40, -105, 26, 25, -87, 111, 90, -103, -91, 25, 37, 96, -6, 19, 60, 4, -124, -84, -48, 12, 97, -120, -112, 28, 54, -113, 66};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NTNNYYTDGUIFLJRFJXYQKOPNUSGNJVXAZEJJBFXPKRUCSWIYUBAABXIKZPSLLIJIOPRQEABMAIBDQKHJUUBOWOMSQHCCFKWTROWQFUAFIZHNHFGHR");
    tmp_msg_1.plan_size = 25047U;
    tmp_msg_1.change_time = 0.5358731302370715;
    tmp_msg_1.change_sid = 63071U;
    tmp_msg_1.change_sname.assign("DAHPMLVGNUJ");
    const char tmp_tmp_msg_1_0[] = {-16, -88, 62, 16, -109, 33, 20, 39, -103, -101, 122, 75, 27, 53, -53, -92, 33, -61, 0, -44, 29, 111, 49, 108, 87, 95, -31, 96, 125, 14, 18, -111, 36, 108, 118, -10, -62, -86, -88, 33, 17, 90, -43, -36, -36, 19, -84, -42, -83, 86, 61, 108, -16, 63, -102, -55, 89, 121, 56, -45, -8, 11, 118, -89, -68, 40, 57, -67, 47, 59, -43, -72, 14, 34, -83, 50, 99, -76, 11, -74, -20, -26, 81, -4, 2, 69, 87, 79, -118, -93, -48, 80, 100, -36, -34, -87, 4, -128, 75, -123, -71, 106, -21, 100, -52, 123, 3, -41, 59, 3, 63, 17, 5};
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
    msg.setTimeStamp(0.6177378697830705);
    msg.setSource(14581U);
    msg.setSourceEntity(245U);
    msg.setDestination(26476U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("QYGQFQSTXGMBRSXJNGATIQACSDNEKVBGTTHLDUPQWTGFJPZBVWVEQMCSXQRSXEXWPPUPWAELRJJNTMIOUELHFFMPMOQSUOCNVEDOKLYSLVNZAEOJYGXEDIKOAHCCGH");
    msg.plan_size = 37478U;
    msg.change_time = 0.3791612149834488;
    msg.change_sid = 7447U;
    msg.change_sname.assign("PBXHKXQXLQHYOIDBZOIVGFGNREFPYRKLDLWIILJTGNVTADYQYJSIGFCUUOZJR");
    const char tmp_msg_0[] = {46, 36, -89, 112, 3, 113, 14, -100, -47, -42, -6, -17, 23, 66, -54, -17, 11, -78, 87, -72, -96, -67, -58, 18, 44, -75, 15, -98, -38, -106, -20, -97, -38, -123, 101, -69, -68, 103, -53, 126, -26, -21, -113, -116, -80, 19, 45, -59, 111, -1, 125, -113, -102, -83, 65, -102, 68, 63, 15, 103, -120, -113, -67, 47, 74, 27, 1, -86, -23, 81, 52, -97, 31, 98, -87, 76, 108, 7, 36, 105, -90, -126, -89, -92, -62, -122, 87, -38, -105, 94, -26, 103, -51, -114, -30, -7, -106, 28, -76, -39, 104, -99, -74, -114, 119, 79, 93, -125, -93, 75, -120, 95, 107, 55, -57, 102, 2, -59, 25, 126, -122, -47, 27, -58, -99, 126, -63, -85, 27, -52, 125, -53, -76, 103, -94, 2, -47, 25, -69, -91, 10, -53, -79, -98, -40, 25, 42, -69, 115, 57, -50, 109, -50, -117, -18, 24, 38, 51, -23, 1, -27, 15, 59, 113, -72, 67, -30, -32, 25, -71, -49, -97, 62, -126, 26, -68, 114, -53, 81, 66, 59, 116, -93, 24, -11, -52, 116, 91, -71, 111, -105, -38, 97, 50, 86, -50};
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
    msg.setTimeStamp(0.953140584852707);
    msg.setSource(54852U);
    msg.setSourceEntity(163U);
    msg.setDestination(17573U);
    msg.setDestinationEntity(17U);
    msg.plan_id.assign("ZPCGFILGQMGNKIPMSBETSZLPBESJLIQEFQBDGAFKLAHIGZXQRVFBJOHNTIXCKHGULVONHQNGBZLABDSWVITMOQWPBSCRKRXGZCRYJYELWDGTDVMPEGUAIFAKNJVRYUOZAUUJTBOZSMNLLUWIMOKADRWFURKPUNRPKYTXHCXNHJKTXDFHBFYUQRN");
    msg.plan_size = 37625U;
    msg.change_time = 0.6729410199534847;
    msg.change_sid = 39140U;
    msg.change_sname.assign("YHFMVJVSTIWCHTCERIBFWBIPPZRLYWZTOMZNBQOFHWRPCVAVHUGNMIYDLSDLQFPKSJNEAELDXVYRPKGACXNBGXLXPFHXJWOSRWACWBIEREKXGQNARFDXOOGMZTDJYFVDDQGUABXMQQHLETLTOQEXIFKPSBVCHWNGJLPCTARPDSFJBFJXKSZGTBUHVTSOEKRJGKISZGHOQDOZNOUPLJUUDHAYECMNMKWJYAWZSBNZQIIUE");
    const char tmp_msg_0[] = {44, 78, 94, 52, 60, 86, 77, 106, 63, -115, 61, 72, -111, 106, 11, -76, -46, -100, 18, 108, -2, -59, -1, 34, -4, -114, 107, -105, -70, -59, 55, 65, -74, 23, -2, 86, 81, 44, 1, -37, 25, -13, 59, -36, -24, -110, -49, 89, 113, 62, -30, -69, -11, 22, 19, 35, 89, 119, -107, 45, 10, -119, 97, -43, 16, -52, -47, -103, 47, -10, -65, 13, 91};
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
    msg.setTimeStamp(0.5104540788066593);
    msg.setSource(9996U);
    msg.setSourceEntity(205U);
    msg.setDestination(43637U);
    msg.setDestinationEntity(202U);
    msg.plan_id.assign("ENFLMJAXTYPTSAPCWDCSOXECVMWVBHSSQRKJARZGAKQRFXZWBDBNUAAYRGBUQHIURUQUZEFZKWEZHYONMVENKDXTTKQZCDEQBBSEVKIETUYWWMFMOSNYMBIILNYSJOGCCXFNDGUSLCLFOXUDIDPGFDTZFSIMLPPKZAFLIXVVUYKSOPHJJOFDVGGHNJTRHPNOAWGLOBPKCYPVMYOGUJBINTHILRXIYMZLE");
    msg.plan_size = 32263U;
    msg.change_time = 0.6508741290045782;
    msg.change_sid = 52876U;
    msg.change_sname.assign("SCAVFJDUGUUNRGPEDICUUQFI");
    const char tmp_msg_0[] = {-2, -97, -93, 87, -13, -24, 118, -97, 83, -33, -18, -117, -50, 97, -111, 102, 118, 103, -78, -76, -17, 49, 54, -73, 72, -119, -92, 97, 41, -26, 54, 119, -84, 97, -120, -63, 49, -65, 68, -76, -46, -116, 5, -27, 59, -18, 16, 97, 113, -33, -122, 113, 1, 120, -110, -71, -38, -54, -100, -111, -57, -31, -74, -65, -110, -12, 42, 37, -51, -77, -124, 54, 61, -73, 53, 111, 6, 111, 90, -88, 125, 28, -121, 13, -54, 49, 26, -57, -112, 104, 3, -22, -3, 92, -52, 89, -112, -89, 87, 122, -53, 102, 75, 41, 76, -45, 52, 119, 26, -104, 72, 70, 103, -98, -114, 60, -67, 24, -79, -43, 7, -41, 90, -93, 16, -30, -5, 36, 4, 103, 104, -48, 12, 102, 35, 94, 44, -76, -103, -76, -5, -5, -57, -101, 53, -27, 102, -9, 7, -45, 4, -92, 17, 55, 29, -102, -66, 121, 23, 102, 93, 21, -37, 124, 112, -111, 25, 58, 8, -69, -45, -58, 38, 28, 78, 67, -5, 74, 77, -15, -53, 119, -50, -64, 115, 116, -121, -82, 73, -44, 8, -111, -44, 5, 78, -43, 52, -79, 122, -91, 100, 102};
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
    msg.setTimeStamp(0.29168571722938075);
    msg.setSource(37034U);
    msg.setSourceEntity(27U);
    msg.setDestination(19694U);
    msg.setDestinationEntity(186U);
    msg.type = 85U;
    msg.op = 77U;
    msg.request_id = 51322U;
    msg.plan_id.assign("OQGYEAORQDZFM");
    msg.flags = 55926U;
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.5324160598832313;
    tmp_msg_0.y = 0.7054120871364201;
    tmp_msg_0.z = 0.08144314066559688;
    tmp_msg_0.vx = 0.4612300987232235;
    tmp_msg_0.vy = 0.7652284166966195;
    tmp_msg_0.vz = 0.7607456944607098;
    tmp_msg_0.ax = 0.11248617209831557;
    tmp_msg_0.ay = 0.879409333303402;
    tmp_msg_0.az = 0.7880111230117427;
    tmp_msg_0.flags = 10832U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZVDCAONESMGBXZDOLFCHJGPXRQJAUIIWPYWYVLIKYWZJSQPMNHMVBNNTKGRBRDHWMLTFIGBGNKCDIKHFJY");

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
    msg.setTimeStamp(0.09155273382097817);
    msg.setSource(37749U);
    msg.setSourceEntity(84U);
    msg.setDestination(16407U);
    msg.setDestinationEntity(96U);
    msg.type = 153U;
    msg.op = 80U;
    msg.request_id = 13430U;
    msg.plan_id.assign("NCRHIKDBFLZDQZUKFTNBFKMIUUJELXKSHDFGVSCNBDAUPYDLETBISAQJFGNMERJRNSUGVCVMALYYHLDZQTOZSTTYWLMCXPQUEWGFDHSHOWYBYJKAEHPIBBKQNFSRTCIKQVOJGAXOISAOMYWWVTRKHWRNQZ");
    msg.flags = 2460U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 13182U;
    tmp_msg_0.lat = 0.7594664895111501;
    tmp_msg_0.lon = 0.9481534931272956;
    tmp_msg_0.z = 0.3857529731855476;
    tmp_msg_0.z_units = 39U;
    tmp_msg_0.speed = 0.301778428658518;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.roll = 0.39130974569134014;
    tmp_msg_0.pitch = 0.8334201255130366;
    tmp_msg_0.yaw = 0.5308006463708187;
    tmp_msg_0.custom.assign("DONIHVAEIHRUCBATXONRJIPZCFBVTYZJMTQZCSEMEDQCLHMYLGMCPSPFRHTRGEBOGNOZZWFSTXLRVNHEWGAQGNRBGCWQMGYGVTMUHBOKMXSBRANPKAOROVALXYPNOZDPKBQFUVIQUYITKXHAZUISAFWJSRLRDJEJYOISVPENNMJFJWHDDMFYXKQILCUCXKWWQYSLVKCWPLEKDTBYYVDTCAJFIBDUGAWZW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WGKORZAKUBQQQHQGYQGGCDLKLHZBNEHJYYJMBXMZFKNSXJPHZPJRXXLAOQODWWASZKDWMVVVHRZNBVBEAHTIXJOUEIZNYAGJWXMLTKTETSGFTPFBFICGUFBYSCSAEJUTNMNABMMLBDFSUWNITSVLDYARYRFFQOUOQJZUMPHPCALVDNVHOYEXUPLSWCTNLCVDWIQ");

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
    msg.setTimeStamp(0.13947607195063616);
    msg.setSource(11275U);
    msg.setSourceEntity(21U);
    msg.setDestination(824U);
    msg.setDestinationEntity(41U);
    msg.type = 173U;
    msg.op = 125U;
    msg.request_id = 65236U;
    msg.plan_id.assign("LDOAYDXJNBFAJWREBKGRHZZXCPMFYTGKLEJVYAWGZHNYSVTPQIUCSDJNDYIOCVWPMUFGLTMNLPHBZETWOZAMJNVYOLINOIQJHUNUTFQXPHWVEICBESBLXZAFLDEAJKCSEXOOMUTRVAXKTRPQJRPSFVRKLGGRAKHZRSNXPQBNWFGCVTWFKUQUONBMKZDHZYTB");
    msg.flags = 5465U;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.22276453006335073;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GBVVOSMBCJHHNAVQAEZEEODHQUPATGRZYKSJHIZWIXGTNKKXKVIBFAOBXQFVETIMVEBDZDOINVRLMWGRLXSRALESNFMJFRUDTNSKLPPPWUJDCHLYLHOEDQYPCKNCWAPXLGEXTJRHOYCQBDWSPIYDTXMJZKQILSZFYOUPEQAYCJJQTAWIPZDNYQKUUEYWGONJNJHSBFBGMRZMCUWSMTOGARUBFFSWOGXGIWVKXPRAHXZB");

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
    msg.setTimeStamp(0.7816836418112629);
    msg.setSource(9004U);
    msg.setSourceEntity(168U);
    msg.setDestination(22486U);
    msg.setDestinationEntity(221U);
    msg.state = 0U;
    msg.plan_id.assign("BNNADSUXCVCPXECEQSEDKSZYFWRXSRVFHUVDMFWRERYZDPPMCICAFKVMIYTNPNBMTWDPOQGJBMEBMVLATLMLAKCORXVWOPQXDILSCQFJJLFGDSRXTPGZOAUIUGHRYOHAWYKIIHSHGKJRUBVLNJJMZTQAWBWOSLYYIUJZXIUZPJGBHQTWGEZANYZFXNQFQLTR");
    msg.plan_eta = -298114910;
    msg.plan_progress = 0.6949925496087943;
    msg.man_id.assign("ZARICETHFUVUKEILCGXAYNASDTLWJBVNXRNFMMLNOEFKRODFYXNTJGYGEAPTUMUOUQPBXIUANWMNYZHHEBIZS");
    msg.man_type = 20011U;
    msg.man_eta = -1562024672;
    msg.last_outcome = 187U;

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
    msg.setTimeStamp(0.14756119588014216);
    msg.setSource(29531U);
    msg.setSourceEntity(174U);
    msg.setDestination(48692U);
    msg.setDestinationEntity(84U);
    msg.state = 43U;
    msg.plan_id.assign("FRZLYYHUYBXOVUWGBMDUYNHCNJWXHRZCMGOJQOQMUIFZAFWEWWRVPLJPPPSUBGMPRZBFKIZHBCUSAYVKLRTDLIIDSDIAASXYHEFYCPSMCEXFOTMUKXMFQUEQVIVUWNGGGDFZRTALYVZCABHOMKVEHQIOX");
    msg.plan_eta = 636671417;
    msg.plan_progress = 0.7066164779386075;
    msg.man_id.assign("YLOETWMBXHHVDFHIFBZOMEIIGVIKBFAXENVFCUNEWENUWSRJNJGPAIBCXXAWCZSZJVSTFIJUUXPCWLKQHIYPQRIDYHGMVKTOOENRASGZXPDADDYJDLHPQGGJLTTSBURFNWXKDYSVZVWSLLOTRDRMNACJOVWTAMEJERSLQDJLVULGRCIBFXZYYGFYVCEFQKYOMXMOBNCYFMKKMOAUUWPKPQXPONKLQ");
    msg.man_type = 27031U;
    msg.man_eta = 1502494159;
    msg.last_outcome = 94U;

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
    msg.setTimeStamp(0.6109329588910262);
    msg.setSource(18184U);
    msg.setSourceEntity(5U);
    msg.setDestination(45555U);
    msg.setDestinationEntity(41U);
    msg.state = 178U;
    msg.plan_id.assign("ICHKAPELPBENQKTRMZMWJTMKXUJIWSCHKUGOXVUIQLZ");
    msg.plan_eta = 473878209;
    msg.plan_progress = 0.983679945651203;
    msg.man_id.assign("PVCSTQGFGEYJCCJVPTZOCLMXTTELAOKMTHDYYNJLPKVRRNDHDZRAALQOJLWZATHXYHYDBKLNEUMCZNSOCOFXVEOUWFMBBWYWVVZJPYMLCNUSYSPIXMUFKWOFJSIZUKRCTQQRECJFQKHWHJMMPGXAFQIIMDAFHIJGSUEIZ");
    msg.man_type = 26475U;
    msg.man_eta = -1888192009;
    msg.last_outcome = 101U;

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
    msg.setTimeStamp(0.2772107110808085);
    msg.setSource(29472U);
    msg.setSourceEntity(79U);
    msg.setDestination(6345U);
    msg.setDestinationEntity(216U);
    msg.name.assign("LSKIQPCCPMIRZIOSUTCCMHBSNADBHYVNZAIXUYLHVWUZPGYROUWTFZYEKXNPNCNJMBJFQUIDQOKFWAJVSZSMWRARMBIUBLSGELZBPRTXAOOHJMLDQVCMHGVDYWFQQCZSLJYCJFKEJYPMSEGIRGYFXKBDZMOWVBHGGDKVUETYAJLSEXWXGNDUHREBPIWOPTUFGTNRYDXXSNTQNAKXZ");
    msg.value.assign("CGFZQPWRDOOFSJWVNUNSDYWQXNIWUDPZFTEIHNWSZWBKNLDPIUOOKUVDANQPEATHUQBVBZAFLPJNBIXXVLOLPHMZURXXAQIQIYPQLHTMHGERVVMHCVWGOBSHJWFLTTJDCESKDJLGYGEMJEKMPRBOJDICKUAZSKEFYYADRYTTSYMNOXJCQGQZHRATVIOLAWEVUUFIPZVZLRRHYXBDARNCOBXEXSTCKPKAGTGXJFKGCYMZYKQUCBG");
    msg.type = 137U;
    msg.access = 140U;

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
    msg.setTimeStamp(0.985783910672553);
    msg.setSource(60058U);
    msg.setSourceEntity(119U);
    msg.setDestination(26008U);
    msg.setDestinationEntity(9U);
    msg.name.assign("YNYIWZIVHUSCADECGGEKABYHVWAXIKUSMWZEUTTTOTIZWBQSNQTAZHXFPUFSEQPEBMVEAFBNVVOCOHTDUJVRIIOJUWIXLFRCNLMNWSRUYEJJHYVXFPMQQOLSPDGGKLMYJZYCOKLZDNIPSTWEFMQXIBELFOSQYBLFGUQA");
    msg.value.assign("VBCZGROXUCUEAMWQCDLLNFTTEZRWFVIFIWGEOMPEMMMPMBWEQPPBIEVJBAKKVIGQNHHDPLXNQLBIAAYBDFOMSOZROVTQHDUMKISTSUKSLEJYXMZYQSZZCKWGYTEGKFTOAHZCZWGXOBHPFKAKBGJUXTNXLEDPJQYVCHYXJQGHMSNWHKUTZH");
    msg.type = 50U;
    msg.access = 7U;

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
    msg.setTimeStamp(0.5551990495629127);
    msg.setSource(50749U);
    msg.setSourceEntity(121U);
    msg.setDestination(3807U);
    msg.setDestinationEntity(87U);
    msg.name.assign("UAXUSVCQAINQLOXHBNLABQFLXRNGHRJRMXLPLHZGZLWQKXWUGWJJFNUZXKVCBOPHGLKKHUOLCXNDBVMNPHPGRFNVMRWBMSWDJOVGJPWOIVISUFYSI");
    msg.value.assign("IVKAFVWIGEOTRDOHPXSYLPYYSHZCSDVAEIPHBKAJWRQFCPPIBFJRIWULGBBUXTXNFURMQSESPHPYFCTTBAGKFKDAUMTEOQKCMLCXVNBGJUHZWTSEMQOMDQRUADYJGQLLQJICPNFSKJVMLVEHWZORMARLHNYNOPHQVUMVUJTBNSRXUZFCEPFUDWDSXEZ");
    msg.type = 44U;
    msg.access = 211U;

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
    msg.setTimeStamp(0.03428681394962696);
    msg.setSource(29341U);
    msg.setSourceEntity(73U);
    msg.setDestination(4797U);
    msg.setDestinationEntity(55U);
    msg.cmd = 152U;
    msg.op = 55U;
    msg.plan_id.assign("RNQVLMYALSGFJOKZQVNGALAZOWMZBBCYTLSVXMVPHKPTEWUDPZEUVOTAYIMTHIEWJMVFIXOPFYNEWJPEXCABTNUVKFZLXLHQULFFOCLESMIRHYNXZPSKDROODUCPEYFGROEPIKBRJKJZQGZGKEKWDBOWTUZLMRNXHDDMTSIJRWXUBYRDFBISUADHGVMYXIRWJBGQECVJCYSLAXQ");
    msg.params.assign("MWSFQVYWZKQBPGINPPOLLUNWQPACRLFMTBGEIKJHJIRUXRITDIVXDWUXMNJLRQQTNYJORBMPJM");

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
    msg.setTimeStamp(0.3567835398531751);
    msg.setSource(60120U);
    msg.setSourceEntity(194U);
    msg.setDestination(4802U);
    msg.setDestinationEntity(38U);
    msg.cmd = 116U;
    msg.op = 117U;
    msg.plan_id.assign("HWLDPUDZGUCREDJXODFWERUOSOMFIHINYXACTYKYRGATIVDZURSJTJEZBEIWJZHTPICZOQOVJBFUDMCVFMNNLPBXSLZQMHGYAYTRARKNYATJTCUNEIYRKVXRNLAYGWXTXVQHWKLEAWEQTVWGHUPSKCZFFCCYBLFCDWOKEKFISQVMUIZSHJFUBJPWMJNGRXPNMOLDMNEYLMGVPCHNOIKRQSBWQMBPKLXQAAOSVFGQ");
    msg.params.assign("UAHIMLHEFNPUDFIEJQFNHOQLADJMVNOZYAYACVTTXORUEXPOSCEJAPTVCWDEEOOKCGBBYMPLGSNLBJGUZBQHZPEZYXZLORVRSLCLKIVGTAYIUTRZNSMMBQSKEFHTWVRFCGMFTWTDWBPZWEVAZFPNHJHWSDXFUFN");

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
    msg.setTimeStamp(0.8458567539087483);
    msg.setSource(54300U);
    msg.setSourceEntity(209U);
    msg.setDestination(56675U);
    msg.setDestinationEntity(218U);
    msg.cmd = 48U;
    msg.op = 25U;
    msg.plan_id.assign("XQFPFBFEYSOJPPCLHNGFYPLBIBSCGBQUXCLZVSPZTIXDANRXRUFLOJBSQMKRQJVGGIQDGWTNHBGFUHQKIOWSMDIHUBAMZWZEWYJWEOHDRIMPBHCHZAVWCAETNOTETXUTOSEKZCJDXIN");
    msg.params.assign("JHTNIJLIAZSWXONEPVZBGRJQSBMVGUOQYBSMMEYNXZAFZYAFGKSWISNGKRZFLUSTETOOXQYCZWVTADYLODMAHXKWHUCGNYKRTYXEXHIZIBHIDNEZMFTIGLCBKBMDGYPFJOBHEJGTFWIHKSO");

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
    msg.setTimeStamp(0.4745515365798193);
    msg.setSource(62080U);
    msg.setSourceEntity(242U);
    msg.setDestination(36106U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("TYIOICCSQVV");
    msg.op = 30U;
    msg.lat = 0.531594261594023;
    msg.lon = 0.518580707277656;
    msg.height = 0.6826472309042361;
    msg.x = 0.5264455462488873;
    msg.y = 0.9052268108120113;
    msg.z = 0.04677589257054504;
    msg.phi = 0.40614871522309315;
    msg.theta = 0.6636884771421776;
    msg.psi = 0.1364874272211266;
    msg.vx = 0.8634240008076766;
    msg.vy = 0.6489028820254178;
    msg.vz = 0.6927793722328213;
    msg.p = 0.7131218829239736;
    msg.q = 0.759624196845838;
    msg.r = 0.23883074800464843;
    msg.svx = 0.2481607983294395;
    msg.svy = 0.8736422128447452;
    msg.svz = 0.8751779327976582;

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
    msg.setTimeStamp(0.9897615013719121);
    msg.setSource(31325U);
    msg.setSourceEntity(119U);
    msg.setDestination(3091U);
    msg.setDestinationEntity(45U);
    msg.group_name.assign("UCUCCYOSZKNLKFJAFRPPFHGQPCEEYSHLMKODDHAPWVYIZTMPZEOGRWQVEDEQWXMHGNHDSMWVCUVFFSFATOVY");
    msg.op = 214U;
    msg.lat = 0.4994366005058818;
    msg.lon = 0.3601730333011809;
    msg.height = 0.04279457969049805;
    msg.x = 0.8146004295822985;
    msg.y = 0.6622217619048772;
    msg.z = 0.9743247432700969;
    msg.phi = 0.16092531075711525;
    msg.theta = 0.7221042683679177;
    msg.psi = 0.5669657589577516;
    msg.vx = 0.49038771001623793;
    msg.vy = 0.9200373734697775;
    msg.vz = 0.16453914485514454;
    msg.p = 0.004619316915877358;
    msg.q = 0.1337155177147079;
    msg.r = 0.2103022340407592;
    msg.svx = 0.13154542120449442;
    msg.svy = 0.7359521410951434;
    msg.svz = 0.3825786934765193;

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
    msg.setTimeStamp(0.5501377069529305);
    msg.setSource(39087U);
    msg.setSourceEntity(95U);
    msg.setDestination(22853U);
    msg.setDestinationEntity(135U);
    msg.group_name.assign("GPZMJNFFVGJDXRPGXSOXALEFCYYAYVPTXAZYKNCNWKWKUFFLHDCOQTNZWJREOQEBAOUSUPDHQGZIGQICTWUHFBXBCURSZPRAIIBQAIIIVNETSNYUWNTCSHGLNXHSOPIOBLEBHKYVMTDVPDTUJRZUWLWWRIMFRFTLQBUIV");
    msg.op = 112U;
    msg.lat = 0.9518017105834048;
    msg.lon = 0.25264439192379173;
    msg.height = 0.3250804816041163;
    msg.x = 0.13701683826828737;
    msg.y = 0.5108361316244034;
    msg.z = 0.7247136368747972;
    msg.phi = 0.5445214237550555;
    msg.theta = 0.5334483636090019;
    msg.psi = 0.01834832644731954;
    msg.vx = 0.8104384268752944;
    msg.vy = 0.6031642691145761;
    msg.vz = 0.38993581625536655;
    msg.p = 0.20725475027058304;
    msg.q = 0.8454275197659996;
    msg.r = 0.7126986075259553;
    msg.svx = 0.30435066323281657;
    msg.svy = 0.649689527983449;
    msg.svz = 0.7772653045170255;

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
    msg.setTimeStamp(0.27884092218236034);
    msg.setSource(53575U);
    msg.setSourceEntity(39U);
    msg.setDestination(34264U);
    msg.setDestinationEntity(252U);
    msg.plan_id.assign("JTLITNKMOFMWPEKIQSZUSDCAUYDHWXQTUKEGEAXVFW");
    msg.type = 48U;
    msg.properties = 186U;
    msg.durations.assign("MMZAUPFOUVZNTYJPXAXRSTGCDODSXLRHEHSQTSFEBZQKHRSKBHUVLYDBJQITHUPWLSVECXLMFELJRBGNYPGWKQUKPYUGIGQUIQWAZLJWAMRVWRDTIOPTYPZCOXNGMXJLKWUFWNRIROVZTOFMHZFATNXQYZNTCWDAINDZEBBSALHDVJHIQAWHKYEAOMIMM");
    msg.distances.assign("QTVHKLGACAUMAUODMWYXPIRICNEUNBRCUBXQXPCGS");
    msg.actions.assign("RZZSPWIBVRKMDTXGRQUGLDNAOCDLZNULQOVASTMOFJMNHSSHJGRIQGIGTVWYOCPFYYRHKNUJPOASCCVHEJWQVUASQMZI");
    msg.fuel.assign("MOUTOFWSKSHRGCAAAOEUNEEFTFRYRDIBXJSQDRNMPETGXZSWQJFQKMVSXKQYEHDKTVJGTXKRZBMBNYWSVEHVEWMYZVCJYROVWIJPAWUMXINGDPNVGSFQWFQHMGGRTPAUIRDQIZRBHPZVUVYOQORBDSELXHHFGOIOUDBFUOGJMJYULMDCJFYQ");

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
    msg.setTimeStamp(0.7778166615752117);
    msg.setSource(56027U);
    msg.setSourceEntity(79U);
    msg.setDestination(62617U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("FBQZYEUKQLIUEURPGVPVXOKHZHEIWRRSFSVIGDKQHYEKQTQVRWTRVMDMJIKQGPFDLAJMYRULFOGSDYIDHOXTGGSCNEMH");
    msg.type = 143U;
    msg.properties = 201U;
    msg.durations.assign("JCXIETZOXUJVUQQGRIFQTMNODASJYAMTIWEWLNUTLFUQFTJKMDOFEKIAZDVXHBTKROEKNIOGZITFQCYLIXGUP");
    msg.distances.assign("UIWNHSCBOTHAAHBDJVZWLWSFKJNPEGVIJLYNGCOZTEDNYOOECOEMUKAVXFEINTLBPLQOKNXQDOWDZEBNUIQUMNGLDQMFXTFKZTTQZDRMHXSQPCRHYDSSALSEQRUFNGDCIPQGOPOKGTCMAGVJYIIAMGLWLMXWBCRHKWTTZAKJYUWXYRFIWUGFEHIAHKPCSERAMQNVLVYBRAGOKUXBLRQSPVCXZYFPZSJZ");
    msg.actions.assign("WVPWNHXLYDXQNRTZSMSGZDNIULEGMUPLEEXBITRGGBLRRMXHPBTDWFJKFQMQZXLVVOIPYFHKXCFNKMCBTFCSPKZXTLBVTHUOFWZWRBCZWUDXGEYAQUROMTRWPLMWNUAVRZOCOJFOSKDBNSBCHSSIYTAUYVQOKHDTGZAPMDISCGNODQINCRMUJQ");
    msg.fuel.assign("EKGOPQOHWKZCSVREMCVUPTEUNOEOVCRBWZIFGZPLXHHRDUONWUOPIUYCUESCSYEOIYBKWKTLDBYEXFRNNDZSJXLBRXJHDBPFPYQIHANHSKKEATHEBFI");

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
    msg.setTimeStamp(0.4346333776763852);
    msg.setSource(53348U);
    msg.setSourceEntity(112U);
    msg.setDestination(11315U);
    msg.setDestinationEntity(132U);
    msg.plan_id.assign("NRNSITRJKWIXOHRLUUEFCQYWYGDLALXUSDPDIWDPMHPZVXVZDKMAKOVPEEWYODHVJQLMJLWFVUHXRQFBQJQEEYHZJLXOKCYWRANWPTANYCDKKMDQAQUKIRIIIAHEEGTCSVMUXBU");
    msg.type = 89U;
    msg.properties = 68U;
    msg.durations.assign("BJETTROGIWCQYTJUXNHBZQOZHLCTEWVIFWGXJKYHPSMRYRPMKAZJQPVZYLNIRXJBXUHCLWOZQQUABCEMBZFTQDESYCLWMJSDASAYUBLFAHYIGHCIFEVJUNRLXZJOXDODJVGFUOUQAKXTRLOKYBKIVKSRVAEIFGIWZHTMVEMANQZPIWCXI");
    msg.distances.assign("ZJCHWVQBMVESCMLUOZDPHTNFVXNVIKNGUQGRIBOGTVSXIPUVOTNJLDSRTLLTWCFWKWYQVXBSZTZDMXAHSMDARVEWFUBSFEYBKXQETIQXYHODJCKYKLXFDEQSOTMQUJFGJZZLZBWQCGYUIYIKSRMOKMVOLECPHRNCNPLBBHJEOAGJNKASEXHUDJWIYTGJPCRCZODWFHTLZEAAWARYYMMRPKUSGGF");
    msg.actions.assign("KXQULZTLQYITOASIDARPEAHOVXLHCHFEDDUEXREGRUSJAAFAFQSXGCBMYVREJVSOWYSNMSVXBIXELKPHOKYJUZSPYQNKODVFLAJNQSCHSKARBTJZENJWOICMROG");
    msg.fuel.assign("QLTDKRNPPRSGUKNLTGDOMOYXDNHBEPVHBRWUGSGCWYHRFFVVQXVVNZKMYHPHTSSRIAYMTHCCAYGDQOOTEDBQXIZKKSWNWUHBZMDDQRLKJZCNOBTLFMILAZAPCHBWOFFHOSOJKPYJXQXWBGNPILKEEQNEKMADUTTYQIMXYUJFBXUCYIBJELUFMVJPRWQURFAPGUZJI");

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
    msg.setTimeStamp(0.7427338487904694);
    msg.setSource(11545U);
    msg.setSourceEntity(158U);
    msg.setDestination(3615U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.060458016598408326;
    msg.lon = 0.33719313290466535;
    msg.depth = 0.46743822536293245;
    msg.roll = 0.5579148982020865;
    msg.pitch = 0.011657295996937878;
    msg.yaw = 0.32724869590498584;
    msg.rcp_time = 0.2029110472686465;
    msg.sid.assign("DXZZKTKFWSZKNXGIKGLHQJRZDWPYIPVIVHICYJVVFNJMEPSGUHRYSTMWLHYEPGVLSZTRDBFHHKOFOFSAMTQCXHSUGJRCHFEPWQQNXUUMBVXQAMKQLBSJIFDZNMOYVGQLTUEMUBCEPEVXIZBOCARTDNWMQUUMRTUIGSOWDTCYWOKHACAHMPFWNOLOCVXEJXLRZNYWQIALAYOLQXERPITFTGGOSYIVJBNERBDDJ");
    msg.s_type = 214U;

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
    msg.setTimeStamp(0.6065805026962363);
    msg.setSource(12718U);
    msg.setSourceEntity(187U);
    msg.setDestination(29696U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.6009252536664252;
    msg.lon = 0.6250320837282783;
    msg.depth = 0.8254583368225346;
    msg.roll = 0.6309990073034845;
    msg.pitch = 0.7826708934306142;
    msg.yaw = 0.19607621123610575;
    msg.rcp_time = 0.10160095088069454;
    msg.sid.assign("AQYCSMLLEBXYOPHDBWIWVMZPPLNGBCFFRBACVMTLHCROOAUGWDVDUKHGXHRUKIRLEYKAZIYQYRYEJSAXPPTFLVTXZWOPJXCEYGKJRXCDQTERZAFVHHNBVWYEOQETFMBUEYLJTURSCKQPGMSFIUNAHDDKISUXSUINXJOBBQPZVWZQOSLASJHNUUJGHGZVGSBQIDLFMICEX");
    msg.s_type = 40U;

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
    msg.setTimeStamp(0.44016610300570713);
    msg.setSource(20922U);
    msg.setSourceEntity(98U);
    msg.setDestination(2420U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.6209416411292032;
    msg.lon = 0.6527636040532537;
    msg.depth = 0.48372239457664057;
    msg.roll = 0.4793524534602497;
    msg.pitch = 0.927142257219408;
    msg.yaw = 0.8481467067372901;
    msg.rcp_time = 0.14079038166181856;
    msg.sid.assign("QWJUTRYRDEDJEZVWQCQVLTWSYYTRBOGWJKYGFSBSGJCPBOHOKKSLEMFJGLXOKHINCQGKOHBVNIYPOGT");
    msg.s_type = 30U;

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
    msg.setTimeStamp(0.0794763979498756);
    msg.setSource(32336U);
    msg.setSourceEntity(248U);
    msg.setDestination(37788U);
    msg.setDestinationEntity(45U);
    msg.id.assign("XADHSCBBCRRYLKTQANOMJTGCISCYQPYTANRIWQUABYKAYKPTHBNCNVYQSEIBUCWILCHTVBXNUHLJMSDSTFEQORWAUKUOIZTDZLDHJHZKEIEZMMPVVFXWGUBHGWIYUCWGHJVATBQMDXJZEUKFOFQWONFALJVNPOROAXGFUIDRQBEZWXQLZXVMPHVMOMSEXJDELEJYPHAISNYRNLGUFJEIRKWPGMMRXDSRZTKLQDDCCFJPFGSKTNPBPXYZLGZ");
    msg.sensor_class.assign("WEAEDDDOONUUTPWCWAANSLFRZRBQMYZIUTLJMBJICJDUTSOXMTCIXWSRRRGGQXYEUOH");
    msg.lat = 0.2358031342686593;
    msg.lon = 0.3988722771513611;
    msg.alt = 0.8697300838822042;
    msg.heading = 0.014011228034409462;
    msg.data.assign("IDYFYXAFTPPGOLHSJSJONOXTGHYHACZJVKGRSFUYVZPCTJMQCMNNYQWNUXUIWFQXMZLVIGUCKLZOMHTURMZDKMRJKPGGCXNQRAPBNGOQBE");

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
    msg.setTimeStamp(0.3440153897700188);
    msg.setSource(11318U);
    msg.setSourceEntity(52U);
    msg.setDestination(29193U);
    msg.setDestinationEntity(74U);
    msg.id.assign("ZCNHHKHKITUJFGDKCXUFERAQLG");
    msg.sensor_class.assign("JIWCUODRASABAXSPIBDRJNMMDSRXAALKOMJSQHWNFNRUVDNSSDQHZPZ");
    msg.lat = 0.5350649097003941;
    msg.lon = 0.7471487114035684;
    msg.alt = 0.5518668295707109;
    msg.heading = 0.7707740796828636;
    msg.data.assign("YIGHUPCDWHQMDSKZYZVFLLNYEIXWONZWLUNBLXANREGASPZHASSVMZTUOBLWGEVFNQOCXDXUPKRMNKKYLRXFINTXREDHREYRVIEFQZKBFIJCNZCVBEOHEVZLBRNJJXMGQCJVJPWFDDHIXMBBUOSJAPAIWWQWKQFMIGDJTPAKQWTGUVPTLANTQYSUAAXMKLUQCHVHZCMOBRJYEGGBMWCTHZKSPSYYUIJRFOXHRVBEFPFIADCUSOYMCOOLTTQSG");

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
    msg.setTimeStamp(0.09439021865002795);
    msg.setSource(61801U);
    msg.setSourceEntity(97U);
    msg.setDestination(46737U);
    msg.setDestinationEntity(151U);
    msg.id.assign("VVVLEHSPYTSHOGQEVHMDQQX");
    msg.sensor_class.assign("AJHHPDANBDMSJLHPVGDZUIQXOXWJQVOCRXRMNIZEJNENRURDOERGYUTNTPNCWUJIFGXPBVYLBWDSWMEWRBOPYRVAWGPFFUYJSVYAMTA");
    msg.lat = 0.9065971817462304;
    msg.lon = 0.43649241159012164;
    msg.alt = 0.8986253854174113;
    msg.heading = 0.5857778787867756;
    msg.data.assign("EJWPRSNYPVPFXYZEJKCNCTDMAEUAWDTRLUEHVJMGHBSMKGOPITGWCHPAFUXYJKAHPMKJBYEKLRDBEWWHPQNIXULUWIZVQAEBFVQNOQYAVTLULPYNOMTDOKMYBQOPMXGCSGURLZXRIZQOAPAVBGNBFCOQEZFLEVWYSVKHYAZRCBUJUDDDTNSHIXXIKLCQSGISSJUYTMCWSIFNQNWJBL");

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
    msg.setTimeStamp(0.9624387824144723);
    msg.setSource(18584U);
    msg.setSourceEntity(205U);
    msg.setDestination(30958U);
    msg.setDestinationEntity(58U);
    msg.id.assign("LLLDIRIJSURPXZAHIJTVRXQSGCAVUDBNMGOFJIEDEFJINLXBYQXZLHEQTPYHQCCNQRUWYELAOLRKDBZSHPNKDOMLIXUENGJPXOMJKGLBOWKHNKTFHRGBQGMGAGVZTYMCQPZDPQDTSFUNJJUAMYR");

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
    msg.setTimeStamp(0.17393992145330028);
    msg.setSource(32171U);
    msg.setSourceEntity(96U);
    msg.setDestination(27038U);
    msg.setDestinationEntity(74U);
    msg.id.assign("VYBXXHYYAAFYNEESQDMNPMGYOTFHXOKHEQPJYDBRGWKZVJZBDCSCTPGZRASQUAXKCRMTHWFQKLLGLKDMJNBVBALFNUKCXSQENUENIZXJGVMPMGSIEBLMGRIOFZWPMQNKHRUTLICIIWEJLEHXKSJ");

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
    msg.setTimeStamp(0.3349937681291083);
    msg.setSource(22820U);
    msg.setSourceEntity(199U);
    msg.setDestination(5031U);
    msg.setDestinationEntity(207U);
    msg.id.assign("EGFZORPUQIFBPJRTLKXUCIWRDOVWUXACQYJDQXBMSHKBIZMRDYQEOGAFFCEMVUSHORTWLFWMLSMHVKAYEYNQHHSTIXGOMOZGNPDDLQKJHGGTAPNXPMSQZROGWPZSVCAPMCMIVBBJAQUABWJFAQKREJSLYBGULPNDREAVICIXFSJRBLROOVJWBKSTNTLTPENNDTZDWUOXEHYFHYXIUEUKSLGMWCYVZKJGKDPDXZFUKEYANXLTIYTHBH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("VBPGPXPQYMEJWVTBSXGYNJHLKPTZQMIMXLAEPKKTPMATDDIKFWFSYDYLQQNAJENJZJCBDGQFCMQNZZMNRXVCVOCIGRLSJSNOBEWRZTHWXQTACUMGDGUZQAQHXHXKVNCRRFZSWBQDYCHKGTLVPUYGAYLJJSE");
    tmp_msg_0.feature_type = 181U;
    tmp_msg_0.rgb_red = 138U;
    tmp_msg_0.rgb_green = 141U;
    tmp_msg_0.rgb_blue = 191U;
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
    msg.setTimeStamp(0.572284190326543);
    msg.setSource(26501U);
    msg.setSourceEntity(155U);
    msg.setDestination(48610U);
    msg.setDestinationEntity(98U);
    msg.id.assign("XNSPJDEZNTFSKPEDKWTEDDOMYWWYDYSTXJLCYNSUSJQLFCRNJVGLRVVWMOZIAZOXVQZILWXELWIDPQUXHABZPOHCIKCNHWRLNFKNSFRTSCRISJUXFWAITTFWDOMYSFAGSEBLYQTQZEJMOMDAEPRTBWYBFQBJGKYHANUTOBKQDXFVFQOYVPDRIKBIJPUGBPZLUGOMGHUQHZJZOEMHRJMLHAHKTPCVABVAVVRKGUGXHIYELXNQ");
    msg.feature_type = 202U;
    msg.rgb_red = 112U;
    msg.rgb_green = 101U;
    msg.rgb_blue = 194U;

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
    msg.setTimeStamp(0.7471952858885393);
    msg.setSource(59899U);
    msg.setSourceEntity(151U);
    msg.setDestination(17353U);
    msg.setDestinationEntity(69U);
    msg.id.assign("LRMPGVTAVTAKTAVIRZFPYDMFECMSGAZGIJPEHJAFGNQLIVPUXBVPNZZWRQUSZWUIFFFAEXCHMBIKHTNBUHOJPJCYNJSIEOZLBQROOQLQAHMPDIZYQWYUZUEJWTRXNWTOSHIQAECMSWPGXOGHWXYSKPDIYZOBXKELXKHJSRDRF");
    msg.feature_type = 171U;
    msg.rgb_red = 34U;
    msg.rgb_green = 14U;
    msg.rgb_blue = 99U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.45924899930039087;
    tmp_msg_0.lon = 0.5373386197272358;
    tmp_msg_0.alt = 0.5463942719841117;
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
    msg.setTimeStamp(0.540766475151241);
    msg.setSource(28062U);
    msg.setSourceEntity(218U);
    msg.setDestination(56607U);
    msg.setDestinationEntity(226U);
    msg.id.assign("SHGANWJAHOCPEBLOEYFHUUVJWMOXIRAHYSIDZCHQCUIEQQBNXNEQLVPXKOOJKGYNSAMLXJJTINFK");
    msg.feature_type = 85U;
    msg.rgb_red = 64U;
    msg.rgb_green = 225U;
    msg.rgb_blue = 2U;

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
    msg.setTimeStamp(0.9200886204052497);
    msg.setSource(45664U);
    msg.setSourceEntity(71U);
    msg.setDestination(3311U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.8994216511850445;
    msg.lon = 0.11363172968270197;
    msg.alt = 0.08906341891239444;

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
    msg.setTimeStamp(0.613294757335759);
    msg.setSource(15338U);
    msg.setSourceEntity(93U);
    msg.setDestination(61501U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.07606538425434839;
    msg.lon = 0.35354563924839644;
    msg.alt = 0.2835325813758369;

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
    msg.setTimeStamp(0.6011169479778381);
    msg.setSource(58199U);
    msg.setSourceEntity(22U);
    msg.setDestination(27543U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.9967921105767709;
    msg.lon = 0.665198052502973;
    msg.alt = 0.12239294276833101;

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
    msg.setTimeStamp(0.331276011722653);
    msg.setSource(37131U);
    msg.setSourceEntity(195U);
    msg.setDestination(33347U);
    msg.setDestinationEntity(24U);
    msg.type = 63U;
    msg.id.assign("NHXKQQHDKODXOLUGYTBOXCSHZNF");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.41958576472232834;
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
    msg.setTimeStamp(0.5315508777972601);
    msg.setSource(62226U);
    msg.setSourceEntity(87U);
    msg.setDestination(61784U);
    msg.setDestinationEntity(118U);
    msg.type = 177U;
    msg.id.assign("EEZXPAKCHEQMDKCJVFJZUFTBBQJTMXOAHCYISOOTVXUPRJZXSPZFGDAXIESILBJWFBLSVSSGJTNNAVLIIXDVBRSRIO");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.29114553655012654;
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
    msg.setTimeStamp(0.9301247921518386);
    msg.setSource(5438U);
    msg.setSourceEntity(129U);
    msg.setDestination(28767U);
    msg.setDestinationEntity(228U);
    msg.type = 113U;
    msg.id.assign("IEFATDHOHZAMAKSXHZACYXMCOZAIJOFKCRKWUTJJGKLHOIRQIDQNXWDZXJRKHWYMQEMZHNVDELBWFOPPEUFBUSJGKTBIZHSSVOQWKPCOMUJYXCQUJTZDMBVPGERINFOAPIOYFRLDAVEBYMLSJFWCQTVSTULYTCSSFIDYQXBTJXNNGZTQHESGAVAK");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.6519765075152171;
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
    msg.setTimeStamp(0.6617725149341852);
    msg.setSource(10274U);
    msg.setSourceEntity(182U);
    msg.setDestination(46180U);
    msg.setDestinationEntity(79U);
    msg.localname.assign("UWKOUWPAPATIBJXXDMLQBXTTKCERUHVTULGQLCWVIWEETMWAHBXHODSQGAEUAXKZOODVMHFPPHZU");

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
    msg.setTimeStamp(0.7269632076992388);
    msg.setSource(10705U);
    msg.setSourceEntity(59U);
    msg.setDestination(42698U);
    msg.setDestinationEntity(8U);
    msg.localname.assign("SBKSLYHSXSYVOCWZAEDWOWMJPYWGOEKUDFITOTDHTKJNVUQOGNVWMAHOXZREGUCLRATZQZHGRXLZVICVRDEJUSOFCRCGLKPRQWKSAURVLCXXKJLEAFYPJYIYGOISXKZGZOAPJMJKICSCMIYWPBTNFFFQUQNPPUKIDJDTVBBWGKTPFBHGRMHMYNARZVFOZLZBVQSGNMVQJIEBDWIFCMNLXHQUNBLCHDXEUBAAPLDNXWHABFUHYERDJMSENYETP");

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
    msg.setTimeStamp(0.2463827362559916);
    msg.setSource(26068U);
    msg.setSourceEntity(31U);
    msg.setDestination(30987U);
    msg.setDestinationEntity(146U);
    msg.localname.assign("LPYYEPERBFJKHMCXKSFKDLOYNPORPUDUGINMVU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XHFTNPDTAZIMJSBZHEAZFLMFWRQOXERMSXYULRASVBABHUTFKYFGQZQOXJCYRCZHEXEIGJQQJRDXLJBREOMKDBTKPDBNWTGIUAQKUOXSTKYVCRLRCIWJPSNDYXNLICHHVFAZUEQHCSVUYJIPDVHOTVIPHENGFNJWHCLZKOBSDNTKARWFQKLUVBCYWGYPEPEGDVDTMYGNYADKZUOWCMQMPVZIELROOMBZNAXLGCIV");
    tmp_msg_0.sys_type = 142U;
    tmp_msg_0.owner = 18115U;
    tmp_msg_0.lat = 0.7465408786717915;
    tmp_msg_0.lon = 0.9531377312099969;
    tmp_msg_0.height = 0.8693103019408847;
    tmp_msg_0.services.assign("FZSSIIDCSRZDLGBNWKDOEFQECBDBDTECJMILABYXOXRNLQEFJCAXFWRUUQGWWVGGVGCJRTVGNRBTRVSMYAVVKAURFRLCMCTTMSIPOPZTEMIEGHPIDNYQJFCHRFHJWUGBH");
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
    msg.setTimeStamp(0.2542656035715217);
    msg.setSource(13722U);
    msg.setSourceEntity(104U);
    msg.setDestination(2212U);
    msg.setDestinationEntity(162U);
    msg.timeline.assign("SEMQEREKTBEFFHXGOZDHIMLAPUXMYDQHJHGRRKGFXIHAFTNNIKGTUWYYGJGUOOOVHJWBNZARBLMADIJLSFFZWMKCVZBNIVNJPFSRCNQ");
    msg.predicate.assign("ZZVPHWLCATYNUOSHDUSXKPDLGFBSQLDMDJNPFFVULBTXIJEXHWCGRTXSYESBRVTJXWIZQNDPFYFAQPZSDKHRTLGJASAQCORBXKHMAQBBWPXLXVDNUCYBRFTHSOHAZZLEVGCIQWELDKUGUBFPOAUKMOOIYNCBAJDEHRWETXRWWSQKCZLTNLMUZVANOFRGVCMKYWYKJBRPIODXCGWVKHFMEJVNQMIEPOMMSJYTAGGUNYIOIGEIJQEUZV");
    msg.attributes.assign("VMIDJLKZEHIMYZYHPHLZKXNOMSXPQSJOGXEUXUWBLNQSQLRURSIPFNJMJMXZCCICVOMDEDCEMJXIWPTIBKCVDAXLFRSACRWHMODODAINQBENRHSWHXTHFBCVAZAGKGGGQONVXQLTYPBYNHKEZVTPQWYTPFI");

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
    msg.setTimeStamp(0.1630798441856499);
    msg.setSource(11019U);
    msg.setSourceEntity(154U);
    msg.setDestination(43030U);
    msg.setDestinationEntity(78U);
    msg.timeline.assign("ZAHNSAHCQWGBCYPLIICRPATBWFUFIKRFEKKGGQOMMNSLOVBYREVESSTIYIZMCXKBFHBVADPJPNZEQZPHVBKYQEIGDZCVALUHELQXMRTAJUXWUATCULUSOVFEYKDJUXVGOOKVHYGCWXDQFQXAXITMDWPDXQYZFFNSCXWDIWPYSHNZJLFCKMSJRASGNNWOEEKXLDZTJSZCTGRBMBOROWJNHHJIYRPAIOPWYPGUMGKHDOVELMMBFTRBTJTJ");
    msg.predicate.assign("NVIZMTQPRDWWSOOPLGRXEIXK");
    msg.attributes.assign("MBSTFWQRBANYJXYTRGVTYFIEFHBSNTDSRTTIADGUVKCNRRVMOUUZUMDCIJQODTLGHDFVITJYLEULQPHVBPEWAKCQHRWZVXYWJAEKHIIEMIZQLYNCGBCRQPESDGSAINRGMNMXOWCIPKBUUCBAMWBYQQWZRGKQAUVAQPHFO");

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
    msg.setTimeStamp(0.6170920315575609);
    msg.setSource(30876U);
    msg.setSourceEntity(165U);
    msg.setDestination(57388U);
    msg.setDestinationEntity(34U);
    msg.timeline.assign("QTNBCYEADKDAELLCNXZJTDVQIMZUSPHASRGOCYFFKBEZTHXQCOHM");
    msg.predicate.assign("AQIFLHPQGTGLOCAXJQWFPOCPDPXYFPWTKJLUAJFOJUIUVWHOHREWERKTXSDKAOVWGZBOMNTLGXDCNSDBRSIZYOVFYIHDYIZQABKESGEZNIQSJIYUJUCBRVNSFCALAMNNYRGQEUBUTYCSHMVEOBAQRJSDYEWUWPZHKSNZ");
    msg.attributes.assign("TCOIHPWAFKGMSBEBEOFFQDAGAQKGNNWPLCJRJLNHWKFEVDHHNYOCRPCOWIJDUATGULIKBHAEYZJWXRPTILEVMMMHYWBCHNXMFVZYQDADEOAIVQKUTSMWSQQPKQXDKIFZZTAXRRLPBFBMIRAGEPCSBLXXHGWRZNPLSKJIOPZKNGZLJTPIERYKJDDHTDCWUVGEMJXTNRVXUAQOJLSXX");

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
    msg.setTimeStamp(0.3335930939915158);
    msg.setSource(63030U);
    msg.setSourceEntity(214U);
    msg.setDestination(1834U);
    msg.setDestinationEntity(137U);
    msg.command = 15U;
    msg.goal_id.assign("WNZUAHPMLCCEZDRXZJVKUIVJUVBPAHRAUOLNEUNULAISDMXVRQOILEPIQBGXGZKHVGQYXEVNFQVVJYOMRHQXTRFFFIPMOZRTAFSXNHEDZFEPQXSTAXJSTBUKZVFECDYEPGTFWT");
    msg.goal_xml.assign("HCTZCSUUEFVLVPHAWSJUDABPIJADGKRFRWKGNYBD");

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
    msg.setTimeStamp(0.022954319344406504);
    msg.setSource(18021U);
    msg.setSourceEntity(113U);
    msg.setDestination(17716U);
    msg.setDestinationEntity(227U);
    msg.command = 235U;
    msg.goal_id.assign("VDORHQTCXFYROVTJPUWEIIGQAUEOTCZJPKOYVZHFJXFOKEUCULHRRDTFUSYRVFCPMIWAHDABNIYQFJNGZGZJDRSOAOMARNMEBYVFRSQLDMMIYIZYZCKQSKOJKQGSGULFQKWYSWZATNBCEUBXICGXMPXNDPQTKAXJHFCVHLEFVTHGZWSLZXGAGCQAMHWBWTWPBNISLXHMDNNCLLOWAEEEKLGUBIYXTHMSPINJRNVJQKMZPKRDBU");
    msg.goal_xml.assign("YOWARSNYNSBNVJAYLFJSXAKHRKJIVVNIADCKKXTSBSPNLWBFXJPIRPBMJHMXPRQIVEMOEYQRIYZNBMKDIPERYJRHXKMZVQUEJIYVTRZIGAWIWXFVOGLWAPCJLMWNLNDMEVTDKU");

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
    msg.setTimeStamp(0.39491442198972526);
    msg.setSource(25892U);
    msg.setSourceEntity(248U);
    msg.setDestination(46627U);
    msg.setDestinationEntity(243U);
    msg.command = 229U;
    msg.goal_id.assign("YDWJDWEUZIXPMZNWXOVOHGRZIMLBMUSYBTA");
    msg.goal_xml.assign("EGRPXGYMDMTEPZZVJUWVAUNVXNOPXAONLFGHXTHNRIHJIUPMKCZBIKWLPIFRBGGKHARNTEUWRLWNUSJYVKPWQXOJSJUDSBKFBFQJLQOAJBUCRYFEYFXQCBWKBBUHZLHIUVPNJLIYRGAZZLDTXECEKWDVHSKQOYPDZXFMZTDDRMOPCDAVXMTOSQORMUKEAAGNOWLRTMQGZHYCICQVASVMDYBOYEIKITIJQHWSXEJNFSSEFLTCY");

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
    msg.setTimeStamp(0.7619258643358524);
    msg.setSource(13150U);
    msg.setSourceEntity(79U);
    msg.setDestination(17073U);
    msg.setDestinationEntity(193U);
    msg.op = 154U;
    msg.goal_id.assign("QBVNTYUPDUHNCKZEMNBKLGJWSMOTXIFJLRBKIQIPEJYAXEUVJDYPSJNPHPQRPDLERUIJFXZOUQPIKXKRHWGKQVVRECVZWAFZGSBSJNIBFKVRLHZYFLPYAYCWMRSTTF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RIVOIDEMKKYQWTJKKVMZBLEHZPODLGKZJNIKHBOEWZFEVTCWFCDURTMXVGGDEFXATHIQCAJ");
    tmp_msg_0.predicate.assign("GCIGXFOITCUXQRYNQJNWWUKYNRILEEEWFLCMPCADWGQJFHYXWL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BADNSPKRLIWYZLFQCGATVBVFSMIKDXRKBAGZBQHNWHNNGFVZFHHUUKRUCHGKMKOCXDSZWOSCLUJJOPYHJHRMPSURKMRALILAGFLYQMEFEQWCTFAWSAYXHOBTUAJPAMTQWXIZZROVZDIDOEQEZMXSMDJSKVUOJTECJKV");
    tmp_tmp_msg_0_0.attr_type = 254U;
    tmp_tmp_msg_0_0.min.assign("KAFXVUVGBMBSTHSGKSCSGKQCJZGCLUDSNRFNLBFTFHFVRQTDOAYUDYZCLRLMZCACWEEPAVXXZWVKTZJSEOPDZKVMBWFPXZIJENFXDLPVIMXMBGWHRHUCBLEHTNVWKK");
    tmp_tmp_msg_0_0.max.assign("OLDETRRCHJZVDYYKCJPSTLZSBDTXZYMMANUPTZNAUNYNWEZQVSUSQZRWREXJVEIXQLRWDGHMQYFEIUZPDGGUGFKNFTZKYRQALKCGLOBTKFEWBGSUVMXIMOIJOPOOHAJVCROPSNXAQYBDBKOLKKNFXAMHSKRXPVWLVYQFGIJHIDSMEBBCVWJWPCSFZVCUDTJBEEQXGKHNVQJTUCLEQNORPAAU");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.03735696374831021);
    msg.setSource(558U);
    msg.setSourceEntity(123U);
    msg.setDestination(15353U);
    msg.setDestinationEntity(77U);
    msg.op = 56U;
    msg.goal_id.assign("KOKKNBDVEKRZGVRMNWWCOFYXCFERAIOJFCXWUBWVBUGCKDEZBINMPQSZVOFXCLRDGMJXDAYTXQEIPGFOLZJLEHPVUBWCUYUXOMZDXEIHRSSHKUSFFTGBFVYKADMJOPELPLRZUKEGHIKWVNLQACILKXQYNMWTCLBGHBZAYNAJQYACOERRDAUQZXHPQUSTZCQYLMPPGDWZTQTJAISYGGHTVIBNMRQHJTMLHFJO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OBGCQAYYLVROQGRKUQNKTPCVBBLWZMPRTVIDKJEOGMDXWFEJJQQAYUSKEMJQPUORUCYARSHWWTLNDMEEJTBVANIVMTNZSXACZZGAGNDMMXUJSXPHPFOAGYWBCCWXNXUZCAULSLQYCHPALMHOHZDFSFJDXEWQVVCGRICSZKGHRGFVDNSQHGODDIITBEEIHFTFKEOLZXOSRVJBVKYJXURMFZQTPNPLAYWMZLWLFHBNFOUSIBTEUPNW");
    tmp_msg_0.predicate.assign("DLZWTSLGKAKVRXLVEKUBZJIIDXDOZMBNXHDJOWERCOQEYZIPOPPFNRWEMSVCGBYQDZYLWHWHHMRCHCYAUZJBMIIPWZFRUYPIVMSCWHYKLKWTGXTKRTDUJFPOGJNMIGBIVTPFMLSJOATCGALFYPRVDBNCIZKVY");
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
    msg.setTimeStamp(0.6845328493155719);
    msg.setSource(33154U);
    msg.setSourceEntity(199U);
    msg.setDestination(10373U);
    msg.setDestinationEntity(171U);
    msg.op = 83U;
    msg.goal_id.assign("OHVLVLWRDUGBBHFYZGBKFZJDUSPGQXZUJUJFTMVNPMCIMNINLEUWCKRIGYXIESZZIXHNOCAZKOQVKCUPPQNGDWADXQRSGWCTRVBKGWKSXCQFWZUJOAPTOENNGVJYRIBNMMWHATSANMEQCXTRRAUEFOLAKWCRFIMQLHRPEYAQOEBRDCLJPOBTBFDFZNYDPLSJEIHQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FXEMGRAYXUQYNXYHLEOZOTIEJLQTDOCUGRXBODFZPHHXRVGRQGO");
    tmp_msg_0.predicate.assign("CIHSQPGKFBGVOZTOLGPNHTBISGNNPGWFJIZLMDYRBYAKDBJWTUKHJYBGMPHXJJKVLOMYONRAVEHAUPYQGHHSWRZZQVQFFHSXFLYNXKQYEXYKKVDHHJOZWYPJNQIICSSBCXRWAXIDUYMZCTGEVRLGISUAVEEBVCCZTTCCMZBMSFJMTFNWXQOVOWBEKUNUIPLRLXUMOIATDKQNJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SCSIHCMFDOLTUMEHXJJMQUYJEENWVZDRKMKW");
    tmp_tmp_msg_0_0.attr_type = 162U;
    tmp_tmp_msg_0_0.min.assign("RKWWOXYXLAUDEPZANLYQRHQWBIGGCFLBUJOGUUTTUEMLLDEIIBGXEBITNBYNZVUVEFAIACYJZCEOQPFQGHNPRIHFWSZUBBZZDNVUPJKTJLCJZBJCUSODVQMGIRSKVPMVPZTQDKHRKLYRTCESOOVXYFFSDGSXHLPTXCEKHWJPVXSGJYCWEBHDIWZCH");
    tmp_tmp_msg_0_0.max.assign("DKCFWGIXDSWITEYNZMPIONOQHZYHSHIEKCPOYHVVJZVRNERZMKQJ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6917270044932534);
    msg.setSource(7734U);
    msg.setSourceEntity(211U);
    msg.setDestination(44698U);
    msg.setDestinationEntity(80U);
    msg.name.assign("YJNKNOBCMEVZWUWDVOCXNPGDXRWGKYLKIKTSXGAMPQARQZHCYPFVONIZVWNBO");
    msg.attr_type = 20U;
    msg.min.assign("ICMAMIKIZXVRKSLPUVJNJTKORELGXEXGETBREPCCGRLYCDVNXLPXTZIAOSHJFLKPBJWHJNQLUTTFGQIAWJSARHQHTOP");
    msg.max.assign("ICMSYHVRLJCAROPPIVMQNTODZDUHYLTXMQLKBAESZKVCBFMGCALIJJPLWZGTZWTGPAOXXWFTQPDBKAEEIMWQFXCARGOEXPSPDCHWYUAWJZBLAENDFQNRNLEXUJYIPKHSTCSRWZYBDBRIANXZGVQNBONJTHKOFMZFMISBPDDZWQGJZLIDOBYMJHTXECVNNJUVJGIQSKRHWGOUB");

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
    msg.setTimeStamp(0.8783151773129595);
    msg.setSource(33904U);
    msg.setSourceEntity(92U);
    msg.setDestination(57664U);
    msg.setDestinationEntity(157U);
    msg.name.assign("CJRVYRTKTYWODJBUFZNQUSRGMXODRBSKHEDXUFHYTHEOHMXGWGTHWNMMRUYSSZWNUOGKFFQIABUXQEOESTGXNITQHXDBMGAAXIGJAVEWHDAJHBHZQQPIVLFBOKTJCYMJILGYFNWIODXATK");
    msg.attr_type = 75U;
    msg.min.assign("COZZSIGSYYDCYJMYTOJEIDQLIAHUCXKGOZPZIOYNLMCBMVITIUTKJJMXREZTPDRHWHNGFKCWANIDBUOQGAZMPZGYUHVWTS");
    msg.max.assign("IAZLDPVUXSGVYUMRBKRNPIBYNDKRGEDAIEMZIFAWHTYZSNCPTXWAUPNHQMCSUFIGPJULHQPAWONSSICBQXIFGQAFXQCGMVCQXGRLVEGBIKNAZOEKMYUQJELMNHODCWMGVYEHKQWEKDAYARYSEKXYJJJSDLJXJLBUTBLADCTDCIOFDOVEFORYQZUOLJMHWFMBCZYHRZTHPVLMOUXDHRJKFWV");

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
    msg.setTimeStamp(0.15595797984328474);
    msg.setSource(30178U);
    msg.setSourceEntity(172U);
    msg.setDestination(25652U);
    msg.setDestinationEntity(11U);
    msg.name.assign("PZTSKRJMUAVXY");
    msg.attr_type = 241U;
    msg.min.assign("WYCNGZEXYOJAEXUZYRZNMEUJVTTFTGEBGXOUNCLSBCRJROCHFJPMRMMAPWSKEGBVCYPSNSVMLJXEXQOZVMBFAQIPOKRNHUFCWPZVUZOIBBHPFTKSTGWDHKZSDTALPLKGXVIYQDGARNQFYBNDFLQKKKIAHOUJNPO");
    msg.max.assign("LGWNNRMSJQPCWBYFYUSBNGCZYVFJSCTCWMSEOBBZIHXFRNIXAXZYGVKKFVESRYHFQKCAFZOEEDZPGMQZAXAVUBTECJSUATPPCUUEUXBBRBSKHPQKUCLIJBIYIMWGTQLJWONNLJMJRNSKLYGNQTFDVXHWLISUMZZPMDOFXNT");

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
    msg.setTimeStamp(0.31196975659797477);
    msg.setSource(27521U);
    msg.setSourceEntity(89U);
    msg.setDestination(59090U);
    msg.setDestinationEntity(134U);
    msg.timeline.assign("POLQPOQSYZGZXKCQDVSBHZOWMSFHCTXVHXTMYVELJUDJUVGCYELHALUIWWJFGTTFLRZMNQKIAVYQIRGBFMOLSDPRIQPMXZSDMIDWFZAPTMJNGEKGCWTNMIURQJACENHVRMQJKLTNJKKBBFWXXUGFEVBJTKYLEGZXOUIDZPUQRNHYSWYCINHXADEHEVUNCRJNDSTCCAZOSAOYBRKQXSRBRBBHX");
    msg.predicate.assign("OCJSJCDHDNOKUHWOLVASYAHRNLQGFBMSKUPUMDSWRAIVXEUPCQCQYWVOLQRYVWHRKZCIEK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VAIESWQDWVLDCBYADURKSRLUWHLLJPJFWPYMDXBQTTTYDKSMTYYNJNP");
    tmp_msg_0.attr_type = 56U;
    tmp_msg_0.min.assign("MHZYAIFBUONNZDPSLAABJQBHGVTSRRISXZCFTDBSFCNJNJXMMVWWRKCQUDKYVROBAGQGPHYNVIPCWGFOBFTISQDKPOSKMCJVVTZNRDELLWFJHOHVPBGGQXTAYLFXOHVPEILGEOGENHNFFNGKRJDURQAAHKZDILCDEBXKCJRZUPLMBWRSJDKSYSL");
    tmp_msg_0.max.assign("TUTQNPBDGVGIINPRNELQOGSHYJMTHJZENLMHOOLPPGSCUACRXGDWSJAXVAWCNMDOQDIESSLUPQKIOLFGCUREJIFSRSYGXNEL");
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
    msg.setTimeStamp(0.3302180519141731);
    msg.setSource(65532U);
    msg.setSourceEntity(98U);
    msg.setDestination(42011U);
    msg.setDestinationEntity(138U);
    msg.timeline.assign("HAWFFXKSMCLVWPKLRTQHNXUGKWAMQPEJKWTRVLDHAVIFPJXAJAVJZFZZOJVYPJVJVBCGKGINDSHPMOOPEYKBBOELDPKIQADHNUMCQVTIBERCGSBZUNXRTOURSERRQCITNUZENVUCLHIUGQQSEFOMLHOYMFICCMKWXUUYQOWYFDAPKTBZZSNAHQBJIJXZLNTSRMGYJPGHCTYRDDTBWLUEHLMFFBOCGGKBXDNROPEYZDWSQDIWMZN");
    msg.predicate.assign("WCBEDUWLRSKSLEMRPAUUBWNLPAKQXRHNRDANHBVZAMMAXGPIJHTFGCZKNKJGXTESRQSGAMMICDVWRYDXYTQEHSAOOZRNEIEJZYLJIXJXMQKGVHKPFILJDEUOMLYSXTIHWBYVJCNUBBAGAIYVRWF");

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
    msg.setTimeStamp(0.6205194929423139);
    msg.setSource(51322U);
    msg.setSourceEntity(156U);
    msg.setDestination(40156U);
    msg.setDestinationEntity(171U);
    msg.timeline.assign("NREBKLTCQIBIVJOWJACHDZKUBXYGCPSACPBCUVEEXIRIMIYHNUHXYAUTLBTXLMDJGWHVZJNAFXSGVAEZHNFTSSTURUICYNEFCIGFIVUSBYONXOSZWKQXERFOELIXLDWOTRKMEMYBUSVLKJJOCQPWHGOPQKNRDFMQVTEERMXZLQTQTPSQHZGQWWDMVZFRQGVAD");
    msg.predicate.assign("TPJGRHKBYSBAOAXBTLDUEJDBOGYUDVRSMCLSTYOOEXFEA");

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
    msg.setTimeStamp(0.011788101922786232);
    msg.setSource(32526U);
    msg.setSourceEntity(9U);
    msg.setDestination(11218U);
    msg.setDestinationEntity(230U);
    msg.reactor.assign("OTWCEAWYBIHKZPDHUZKDPVQUAXEQDQYTJOBFEMRWUNXCSASGWSPMFNMKDMIBVLHYZAONXBFQFKVTYCMCNOKOJBQYFMSOMLACTUGVJLRVXDJJZLNIJGCIZHEPTXTBMZERREUFYIWIHHYMOIOSQABFZIHEDBJGXRPDNFIWPPUIPGVYRXF");

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
    msg.setTimeStamp(0.6225266624178404);
    msg.setSource(51592U);
    msg.setSourceEntity(117U);
    msg.setDestination(28773U);
    msg.setDestinationEntity(12U);
    msg.reactor.assign("DIZAKYABBPCSEMGYBOGZWHFDOLXVLSIAHQTCQUJITDUAJQMBKUROFTOAYJAEHEGKFPVHCTVTDIUYVHAKOMJKQGRZWQBJUIOGBXKXNVVWRUEFGJVWFMHGWRSXXCOUMS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EBEFYAOJFIPLICNSBYBAYZXLKZHPGIQKWCMMRORDFPUWNGRLEVITGDKHSOGINSHNEGILXHBFULAONKQZSMRHTCJKMXURSKUZETADQNKVUHNMPWXBQTLCYWTYJQZPQHJEPLPWNWYVRUOYBZIMSKZGOQOBPXVHSWTGSCWBVIX");
    tmp_msg_0.predicate.assign("QVELZEOFSZYFAZCIVKEMOOEDNBBQITOSLKVOHHHITTHPJFJJWGNGBZJSXKAOBHCAPRXCISKLOMBRLZWKXEHXWDRZUCYDSDLA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BICZGGSHCWHHJWVIWHKMXTPYTRJQAWJLGNYVDLZCUSQNXMBCPYJGDMMGZMLZEPAWWUYCUHQLPQTVAXURGLXADFUQKBYNNOXICVIIQVORJTBFINGVEDUTMTLDKMXNKRGXSYSDNCRJFFMQENOFOEKAACKPYBQSOMGEHZWLEREONJFXCDSHUUMLUFARORWQYSZOPPVEVBCUHEDBJIZOTXFPLIQVTIERLJKS");
    tmp_tmp_msg_0_0.attr_type = 231U;
    tmp_tmp_msg_0_0.min.assign("BYCCALHSNTYFDKUCGNUKCQNRPZHMERMUGTNBSMCUBKATJYKIKSRFARLJXJWPXEFNWBEAFOAGSSFMVPSPIVVVRMHDLGPOAMVIXZODWLWUUFHGXLOEHFTVWLBYEDCVRNONSCDWTWPXTZFLHQHAOAKROX");
    tmp_tmp_msg_0_0.max.assign("MTWODQISVFTJHHQZQJMUPIGUJAQBXJARZEGIAVOMGGRAHZUNMXWDPVEFRPFDEWLZRDUYCEHNTTYKYSYDNNXGRLDACNXBUZBTVBNRCSEZLWOYVGRFCKZKUMVDCGHPLAGSXSWJYDIXTJQOFOBJRHKXBUMZOVWWOYISFLKEQPXTCWXPJHVPJRTDSQTJFYBILZNIDAOMRUAICCHTSIVFKKKBMSMQPEBEYNA");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3623168763389919);
    msg.setSource(16527U);
    msg.setSourceEntity(26U);
    msg.setDestination(25538U);
    msg.setDestinationEntity(118U);
    msg.reactor.assign("GDIVNVPVXACDXGYZWBQTTKPCNZMSIEUHNGVZYOYUNWTVKFHJVZWWSHTZCBGFWJSUC");

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
    msg.setTimeStamp(0.165565222961499);
    msg.setSource(3963U);
    msg.setSourceEntity(37U);
    msg.setDestination(1206U);
    msg.setDestinationEntity(119U);
    msg.topic.assign("GARCSJQLKOZXLXGSSAHLVEVBUASNDIQF");
    msg.data.assign("WLDPMHWPIBKYZKQAVFSXDFRRIJWRQAVFBUVPGDFDQMSFHMEPUVHMFYSFGNUKTKVQQTMKDVIICTOAGNNRXI");

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
    msg.setTimeStamp(0.03814390282652269);
    msg.setSource(39377U);
    msg.setSourceEntity(113U);
    msg.setDestination(3358U);
    msg.setDestinationEntity(29U);
    msg.topic.assign("PIWMPYTRXEHLYJXDCZDGOICUXBELUJSJZCYTPBXTEUZFBAEVKFYQMSACGLQFODMVIXLFQIHSOWDBEJXBPIUEBUAWKYDOBPGLVNFVSWCOFY");
    msg.data.assign("FLSNFJNPCYPJETEYZOWGWMVBKPUHATGTSOFKWIECCYHYLDGNRUAPRLNBZXNFSDSGWHTLKFXCVNDKKHNLDRRUISLFMXDVIMJGRRZNVBAHAOSODBPQZRCXUDIXOJLPZVDEMIVEOPYBGURRHCPXJHYETIDUNEYMETZWZOPUJZTBGIFKNVBXQVATXCXQZWOKABQCAAWIEQLMSSKSQTLSGAWYJOMJQFFYUTJEHFBGDUWOCHIVGQAW");

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
    msg.setTimeStamp(0.32607528815119224);
    msg.setSource(49154U);
    msg.setSourceEntity(220U);
    msg.setDestination(9935U);
    msg.setDestinationEntity(130U);
    msg.topic.assign("QWUTPSGDUNOTNZEGCDVAQFFDHVNGSKSTNVHSSZJJQFUXVKYXHWXIUBEGJLSIARDDPDPRTBPFKMDLWGKFFCMCSJTMNTGIAIPBUQUSBWYKWOAQCUPXCOVPXHUNBZKZEIOIOYGJELAXCYLRUCBBHVJSHHIMTQWJKXZWBEMZFHVOCLRYRWXJNFMGUNQAVQWRMKRCAFTBHGJEANKW");
    msg.data.assign("DCUBLPLXJFHNHESRQMGTDXHOYRPOIIEAFWAPBXFVOYWOZHMJNCHBQORXQCAVFBMBNUVKSJDRHTUQKQQZOSVKZWZDETTGZRWOIDIPKFGMKM");

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
    msg.setTimeStamp(0.9401306141923681);
    msg.setSource(19116U);
    msg.setSourceEntity(232U);
    msg.setDestination(46528U);
    msg.setDestinationEntity(42U);
    msg.frameid = 156U;
    const char tmp_msg_0[] = {-12, 67, 25, -115, 72, -107, 113, -114, -11, 52, 5, 76, 84, -108, -34, 88, -67, -95, -22, -34, 64, -39, 65, -39, 68, -64, -73, -16, -59, -17, 91, -107, 89, -108, 67, -57, 24, 105, -50, 22, -112, -112, -58, -106, 21, 37, 112, 117, -12, 11, -93, -71, -99, -50, 115, 66, -12, 116, -54, 76, -33, -121, -20, 70, 76, 18, -25, -103, 88, -86, 59, -126, -70, 106, 51, -35, -109, 39, 73, 21, 46, -26, 18, 69, 101, -31, 39, 124, -73, -2, 96, 108, -84, -50, -74, -122, 33, 50, -40, -125, -98, 71, -6, 14, 1, -69, 0, -96, 113, -33, -127, 78, -57, -115, -24, -47, -116, 117, -60, -29, -24, -90, 117, 73, -53, -46, -50, -54, 105, -2, -74, -17, 126, -28, 118, -7, -122, 117, 120, -51, 73, 2, -85, -87, -68, 100, -92, 20, 115, -120, 16, 57, 43, 47, 111, 0, -21, 63, -60, 72, -105, 97, -75, -30, 84, 51, -38, 61};
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
    msg.setTimeStamp(0.014634256838872872);
    msg.setSource(31783U);
    msg.setSourceEntity(164U);
    msg.setDestination(64923U);
    msg.setDestinationEntity(210U);
    msg.frameid = 183U;
    const char tmp_msg_0[] = {98, -113, -127, 64, 29, 81, 108, -59, -87, -112, -95, -79, -71, -104, 108, 61, 61, -125, 72, 55, -74, -93, 116, 80, 16, 73, -43, -62, 48, 9, 57, 91, -107, 3, 27, -93, 120, 51, -48, 11, -33, 75, -124, 0, 8, 96, -127, 9, 2, -54, -48, 119, 7, 113, 69, -29, -73, 7, -24, 54, -63, 57, 75, 16, -56, -128, 19, -42, 99, 116, 85, 36, 20, -15, -45, 104, -52, -113, -38, 49, -20, -59, -98, -74, -47, -47, -89, -5, -57, -106, -83, 8, -95, 21, -57, -15, -121, 78, 99, 75, -62, 33, -8, -37, -6, -7, -82, 8, -84, -17, 8, -108, -120, -62, 72, 106, -112, -26, -22, 99, 110, 111, 22, 69, -113, -116, -109, -101, -41, -19, -24, 18, 2, 95, -35, -20, 109, 21, 58, -68, -52, -94, 22, -125, -23, 107, 41, 103, 119, -115, 78, 16, -84, 101, -94, -121, 10, 90, 120, 76, -9, -102, 90, -18, 87, 39, -42, -126, -54, 91, 3, 107, -85, 37, -128, 123, 25, 12, 17, 86, -75, 63, 7, -102, -106, -101, 70, -27, 43, 49, -20, -70, 26, 76, 47, -55, -106, -42, -72, 112, 37, 90, 55, 77, -54, -91, 91, 74, 32, 7, -86, -52, 115, -89, -63, -46, -29, 72, -62, -21, -81, -92, 94, -42, -105, -9, -16, 61};
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
    msg.setTimeStamp(0.5903444677361459);
    msg.setSource(25301U);
    msg.setSourceEntity(145U);
    msg.setDestination(4045U);
    msg.setDestinationEntity(185U);
    msg.frameid = 97U;
    const char tmp_msg_0[] = {103, -43, -22, -47, 88, -21, -95, 120, -90, -43, 50, 70, -88, -102, 124, 30, -20, -117, 13, 35, -87, 71, 38, 112, -7, 110};
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
    msg.setTimeStamp(0.22239417537404893);
    msg.setSource(60460U);
    msg.setSourceEntity(82U);
    msg.setDestination(53483U);
    msg.setDestinationEntity(151U);
    msg.fps = 82U;
    msg.quality = 208U;
    msg.reps = 171U;
    msg.tsize = 126U;

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
    msg.setTimeStamp(0.15601156591113097);
    msg.setSource(20536U);
    msg.setSourceEntity(57U);
    msg.setDestination(37507U);
    msg.setDestinationEntity(137U);
    msg.fps = 240U;
    msg.quality = 135U;
    msg.reps = 225U;
    msg.tsize = 160U;

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
    msg.setTimeStamp(0.5734242290003408);
    msg.setSource(21958U);
    msg.setSourceEntity(48U);
    msg.setDestination(29273U);
    msg.setDestinationEntity(205U);
    msg.fps = 177U;
    msg.quality = 171U;
    msg.reps = 252U;
    msg.tsize = 211U;

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
    msg.setTimeStamp(0.44184175736891673);
    msg.setSource(6601U);
    msg.setSourceEntity(107U);
    msg.setDestination(10653U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.5350449599770356;
    msg.lon = 0.4058193596850308;
    msg.depth = 164U;
    msg.speed = 0.5198880591713925;
    msg.psi = 0.434326748319399;

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
    msg.setTimeStamp(0.3037428251094183);
    msg.setSource(63296U);
    msg.setSourceEntity(185U);
    msg.setDestination(23676U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.13385218033688473;
    msg.lon = 0.7208642703797156;
    msg.depth = 65U;
    msg.speed = 0.9966827973098522;
    msg.psi = 0.425291138391534;

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
    msg.setTimeStamp(0.8935923343865648);
    msg.setSource(2133U);
    msg.setSourceEntity(30U);
    msg.setDestination(55167U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.12788541157468003;
    msg.lon = 0.7140708111614026;
    msg.depth = 179U;
    msg.speed = 0.8863860400439301;
    msg.psi = 0.6466491488773485;

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
    msg.setTimeStamp(0.8470009996003581);
    msg.setSource(26172U);
    msg.setSourceEntity(88U);
    msg.setDestination(49224U);
    msg.setDestinationEntity(0U);
    msg.label.assign("XYFNCQYFFGDLWZPIWHVBZJ");
    msg.lat = 0.04177970862150837;
    msg.lon = 0.3168359723412819;
    msg.z = 0.034725755704857475;
    msg.z_units = 180U;
    msg.cog = 0.06704593097781464;
    msg.sog = 0.04163814287359846;

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
    msg.setTimeStamp(0.07956061172691475);
    msg.setSource(31394U);
    msg.setSourceEntity(253U);
    msg.setDestination(26714U);
    msg.setDestinationEntity(157U);
    msg.label.assign("JHRZLMQZYGVHHANUGKIMAEIBPZWEZYTAXFICYHKCWNOVCTMNHRRCFJFIYHDEOPF");
    msg.lat = 0.39837751266182253;
    msg.lon = 0.6674374226888135;
    msg.z = 0.9108564695841412;
    msg.z_units = 55U;
    msg.cog = 0.4232468209005905;
    msg.sog = 0.05550272743408302;

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
    msg.setTimeStamp(0.3438730744536448);
    msg.setSource(32240U);
    msg.setSourceEntity(177U);
    msg.setDestination(30964U);
    msg.setDestinationEntity(47U);
    msg.label.assign("IXTSJWIXMLPAOYG");
    msg.lat = 0.7896524076171205;
    msg.lon = 0.013987757211634144;
    msg.z = 0.25865169851552994;
    msg.z_units = 240U;
    msg.cog = 0.5737917649625578;
    msg.sog = 0.8725890863139143;

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
    msg.setTimeStamp(0.11583632859801696);
    msg.setSource(14501U);
    msg.setSourceEntity(77U);
    msg.setDestination(36139U);
    msg.setDestinationEntity(0U);
    msg.name.assign("FWMECYTOFGAOIRIHRXWWRHIBJSOOCGOVSGXIXLFUGNPADAIIPOTQWJCAEQVSMYHSCFLGZTDJNEBRMYURYWSHKQETLMDYBYBHLXCCMTBVTIZQJYEZPUSGRUZFJNXKRAXUVSJKOHIFZSUFYXBJHRAQJPKWSWZVGPKGKEMPDDHJNKKSAHPDMAEYHQI");
    msg.value.assign("JOFZPHMMXCATZJBYWEKHBYZJSXVFDTXSLJWDUUIVTEKADDMJGOPHBASVOXOSNTOTYFGDQPSAUPNIFYOQGVIXRZQUAKQYDUHZYFUBTBKJNFEBXGZCNRWMIDAFCJFJWVEBTMPGKEHOWOVRMLCQXRHWBQVINMJRCWQVMGYCHIKMLWRUYIIPRNKBJNL");

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
    msg.setTimeStamp(0.29544104938061233);
    msg.setSource(15721U);
    msg.setSourceEntity(199U);
    msg.setDestination(54772U);
    msg.setDestinationEntity(162U);
    msg.name.assign("YHDHXARFNZPNWWLRCXZDNOYVEDHQAMXTQNFEMFYIFSDUTHXMRTGWGAUSMZZWZTBCBVZOIXBDIEOBNCAGOHVMZUUEJMOGSPKAQHWPCKEKWUGESDAXJVEZIXQJKRBYPJNTYLPMKVLSOXRPTLANOCRDUAPJMMVQJOQBRKJLDLLCNHPGTYKXZGA");
    msg.value.assign("QWZKPHPFXOABKOKCNLETFJMRYZNDYJHSZVCWRXWMEOPOVBGKHUKSUZCLXNMYIYLAVPLXWABZCAHEGTBFQITDZWJWDGECFBMQHPSSNSVCFPWSACLHXTKNPVBLNXLQMWQEMNDKFDEFDYIOVYJYMNXTJKOIFQHRDDDTRACEQVNVZDYIQWRUGLOFQU");

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
    msg.setTimeStamp(0.7602680741039879);
    msg.setSource(268U);
    msg.setSourceEntity(222U);
    msg.setDestination(7443U);
    msg.setDestinationEntity(17U);
    msg.name.assign("EQMFPAYJLJLZCWETWOYRKYHGIRULHTMQFWNDZVNVIJEZWZWHTPFIUGCJVYJRFXWKERCXBPHPYGDSXBMBTAQXGSHEDPRMSXZVQYOLWQSCTBIJHQDIGICVOPUNUSSLOHZXSVBOHTWTNGTNIPCNALXKLIECDVRAIBSEDKXAQPRMJCYOOVTURDOUNDDLKFTZY");
    msg.value.assign("NSUYPEWADBPGJZHRBSXMPKSFNTUOHLLAGEXYFNJCDXXPFGXBNAHCOEZOSAHMEWPWQUCIQAYJSEKGNGOXXUGVMHZFREICOAKUWYFQZIYWI");

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
    msg.setTimeStamp(0.5714651654469093);
    msg.setSource(10130U);
    msg.setSourceEntity(213U);
    msg.setDestination(13013U);
    msg.setDestinationEntity(42U);
    msg.name.assign("HZXKAGUOSTFQCSRBZNVFGOIBYZYVPEBWGXGAPT");

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
    msg.setTimeStamp(0.6553228853246043);
    msg.setSource(46650U);
    msg.setSourceEntity(36U);
    msg.setDestination(31579U);
    msg.setDestinationEntity(194U);
    msg.name.assign("LRTDWPZERGNAVZDSLSFYBDJXRUKOJSTNFOLCZQAEJXYJQSNKHTCGRUHZLCBBVJXAZLNFXMWDOJFSLHKBAFQAGZMHMIRIEXNHHKDDRGFBVPEMJ");

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
    msg.setTimeStamp(0.38198198400153005);
    msg.setSource(47533U);
    msg.setSourceEntity(235U);
    msg.setDestination(14957U);
    msg.setDestinationEntity(151U);
    msg.name.assign("QLBTEVBRVZEBNHVNJTXOKZZUCHWMCWYEWVQUMCCKLGUKHTSXQTRKVWKMSOGFDRZFPBSREYWZCTAKLIUGLDKGLLALALFQBSSOPQIFRDIDXUMNPDJNOWQXHCYUVKIMZPSETXHCXTWXAQXDMIGUDPZONJGORYVTYAADWKMNJBIGPNFWPLPTQCWFIOUEIGNHBVAJEESJRRJBYFUZMYYZCHKPHAFHBOCPESUQJEHFNBIZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IKYVJRVSVSEUMKNRRRALIEHGEOIYGCBJPBELFZGMZTSCLUXYXSYLIZFAFKZAFDECQOJAILMWPHWZHAGSLRTTNQNWDOUZDXBFMJUNWVDKGJAIKNBVNCVTWGLAOBJQKNQPWCHDUYEGMDKAFJNYSOCAPEPVMPTGFXXUQQXZWEZMORHSUDSEKICCRVBRHMPVOTTXYENNCCDSHWJGSQ");
    tmp_msg_0.value.assign("XCHBREZEINHMSOICKEDJTFDNQWZMBLSETPGCROPIHSAHOEDFVOHHVOVJRMWJGEKUUVUGPMDUTHLPKHMNEXDGMKROGSYNYUUXBYTNY");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6041409659435056);
    msg.setSource(42921U);
    msg.setSourceEntity(184U);
    msg.setDestination(31518U);
    msg.setDestinationEntity(184U);
    msg.name.assign("HJZOZWPIVZDUZFIISGCMZXYAJSDFCYXJBFLRYFZIQEWMHQPFDMVMJSHAHFBVWJPZLMIG");
    msg.visibility.assign("QKWRARYMGNOCIPEDXDCKYELHOJZQBFWMAAEQGSHMYKICLOMETGPFLWBWLUSPCSAGSFVUCDATRYYLYPYODUZZAUVFHKHVPRQVBFTBKWOXMEIHIPUOJZDFDXTGPNIVITXWGVJDKTKRMZGVDDQVWAHWQPWSDVGXFCURBJUBTHUOIZECECKIAZQMQLBFUNYNIS");
    msg.scope.assign("CJUZCKSTNJSBKYVWDHHZUWGNCVYIEHNOKUKLQAECYNGHOFKALYYAVMQTARMUAHUXOAHFMZENDWPUJLPZVFXKIIGJRHSHUZRYGXXRZWOXJOVBPXTIEBDDYTWRJNWPLLFGJCQGWILKKPLBMTBOCZCMBGRSGHMJISBKSSDTMQMYFNZEEGANFMIZAOOLDUUXRTDREONBJUZDYQVJIVFCQFPVWHBIVTDERASERCXQLVAQLFPPWBMGNPTEFSXYOST");

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
    msg.setTimeStamp(0.8683069992512236);
    msg.setSource(1132U);
    msg.setSourceEntity(177U);
    msg.setDestination(12590U);
    msg.setDestinationEntity(169U);
    msg.name.assign("AHBDTKNINBELWJDOGBFJOXKCMSQHTIKQCGWZDSTAKHHUXFLIHDGSEZNKGGYSUEYOZMAVTGBNAJYKXDDVBTVVURMROAFBGGAOXHHLWLBPNIKWVNJDTWMZBPLXEFGCDIUNQEEOUQUHYFHOVOPFBVYCJNMC");
    msg.visibility.assign("FJBCXWTJMBUHMINEAZWBNSCRALWQUTVOGZURJDKJJLUXRWXQTNGSFZYYLMLMRVHZAJKBKABLDGEPWJEIAVXPHDOYZPEQNAHUEYXFYIQVQVFKMZOGYGHAQBURGTMGEPEGKODNQKYDFRBJZKUG");
    msg.scope.assign("HWMKIPUNPMZIHLBSNWHJKETJIWBNLQXAXSIYRSFDGGSYRVFZUZOJWZKVMJLDFGVFKSSPWTUFOUVAVGNKRPBZIEXJZBTCPGGTNMNYAHCWMHGBBO");

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
    msg.setTimeStamp(0.2849033607552869);
    msg.setSource(5916U);
    msg.setSourceEntity(161U);
    msg.setDestination(20181U);
    msg.setDestinationEntity(161U);
    msg.name.assign("BMLGFDJVYOHYKAOVUNHIBXEULVSQWTEIVJPMTYEAXIGSVZWTJRJAUUUOABXYVJSEMSNXIHGKQCKILSHNCKAPLMBCYQWENYOXWKDKDOLADQVTXZGUBBFVCGECZDEYHRUCIBUBGNLDIFMEQGCJOKRJWEADGKBRCFNZNDGRTQUZSFDMWHS");
    msg.visibility.assign("KSOHEQTAZXOCBDUPUOBBWYRTMJTGSYXIAFWCBIEXNSWWGZMSMGFPEQCPKYHRRFAKQHDGDNPJEWQLTUJVOJUTXJAGZJZPVFXMCNECHDY");
    msg.scope.assign("GNRKUVDFPBGJBIPMDJTLXDVMPJQOOOIYIQGELZJHIHJZFURTCMYYCVBUMCTKOGBTNSGUPWAEQWNKYSOJNTDAZMZYEAZLRIGBYMUPGWKDRKZZLQQXHVERPXDZZIQPCAEDTFPHFIVETZHMXBDFQDLRUFLWHXFOVCNRUXHNFXXUJWSFAVAKRTSMNQKJITYSRKOPDASSUVYXFBBJWRNEWLENSGYEPQSSBIHJCCLAWUEQGWNBMAK");

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
    msg.setTimeStamp(0.20520289482743026);
    msg.setSource(42447U);
    msg.setSourceEntity(242U);
    msg.setDestination(49112U);
    msg.setDestinationEntity(189U);
    msg.name.assign("XLXAZSPEOSMSCHYJTILGDNHOPSTBVWNWQPEHVRGAZYBOQKTQAIUJPPWUXUBZQYSJNCEYIBMSPIXYOKZVKUHCWJZKTNLFTYRCULKNLBOIALMWEEGDTDMHVONRMQSNVZDQRTMQCAGJCVSGWWXHVILCICEFKIROFABCPLJFRNFERJADTOUZABGEZUFDMPNDEMKWCZF");

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
    msg.setTimeStamp(0.46701771434713857);
    msg.setSource(65258U);
    msg.setSourceEntity(52U);
    msg.setDestination(15252U);
    msg.setDestinationEntity(83U);
    msg.name.assign("TCCJMHFVTAVUXEJAWMOBKNERREUULWXOAAULQTKSPIWWDMWZZZHYIQWZXFFWHBGDNJPIXDHSREYNJWKMLUIZPEOXVGVHEGLUDVPLIMRQHXYGYDTJSDMOBFKKZYNVDSGEGUMVHTGJZV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PLLWPLUKFLBQQADWUMYACUQWHPOXVGFRFUVLDGBYYKDZVWPHZEQK");
    tmp_msg_0.value.assign("RHFDDAOVKQLRMTZJYZGFCWIPXIFWFOWZZQVGSBQYUQCNGWIPMKNFVVWABHVKFRMOXQKTKDIOG");
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
    msg.setTimeStamp(0.10151401492510748);
    msg.setSource(23835U);
    msg.setSourceEntity(134U);
    msg.setDestination(58799U);
    msg.setDestinationEntity(190U);
    msg.name.assign("HESUJREUHUOXWVJNDIGYZLOJPIZXTDIQGRRLXRJMLXPZQHSVHAPGSHCWOJZPBHKHWQTMIMOJILFVKGHACZSDEIYUFMJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PREIPXFJBRVQCBLOTECHLGBHNVGKWZIKFEYSZNXQZUYJPPOTDJCQUVXIMULFEBNVQCLAHZDYZYCRUWPPJOSNJWUHZRIDAPZOXKDBYESUHASWTFHWAXIPRGUDJLNJWAGMKJIHQOGQAICAMRJOMBJVNFWMOSHXGXSTYFPFZHQCQVCAEKDIOLVRGNHKMNQUCMXVMATRBTXRLSVTIGTUBGLFYEFLZKYSKKSQENGLDKTBYMUZDSECOWRWFNTW");
    tmp_msg_0.value.assign("BEKYBQFZRPONUVHZEDUEGLGICIKCVSWAHAYNAFOILADOMOFPVMBEMTCCPXJOCYGAEQXZGSKYLOQKHSUFOVWLUKRFDRIHMGRJSUSEJHAEDLUDLWFIRJPNVXXRGBNHFTLOIGYHCTDOYSNQSTQAMZFYPDEIPUGNBQMKSSQWWJVTVFJCYMVTCJDPQMYLAZIYFRTBDXTWKPBNWMZRRTHEKHZVU");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9246620454323182);
    msg.setSource(44930U);
    msg.setSourceEntity(187U);
    msg.setDestination(19018U);
    msg.setDestinationEntity(207U);
    msg.name.assign("CUIGWHWQAETXIVQOMNUCAYPWWDNHMPJRPWVDTPHPLEGMBNBLLSZIVPFFKJEDXMMOCGVOUOUBFAWSGQDIZTEAYSFUGHXBLZZKOSELMJVSHKWTOTXZDRJVKAA");

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
    msg.setTimeStamp(0.3310963037753559);
    msg.setSource(39504U);
    msg.setSourceEntity(64U);
    msg.setDestination(55586U);
    msg.setDestinationEntity(243U);
    msg.name.assign("MYWBGLXJIKZYJGHCAYHLSBEWNPYSIYLHQFCHFNFADUYVHQEEJKLMAQFDSUIFWVRXNTNOJIWNVCSJBATUBRGBTGPKPFRFVCZGMOPJZKBVLMVBQXIIVQRXWIIEYAWOHGIRHLBEUEAZCTOZPZNHYUFSGRDGVOWNDKLCPNSEJUDQXQCXZRJUAATKTPKRUZPYSSTMXDVLTJDEOTBMRXHLGFOAUQJOP");

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
    msg.setTimeStamp(0.9541158449186805);
    msg.setSource(34615U);
    msg.setSourceEntity(73U);
    msg.setDestination(30399U);
    msg.setDestinationEntity(42U);
    msg.name.assign("QHOWTETAXQMWVFBWBUBSSVBODVASKRNCHMIARLEQYPUMUVGPEQXYKBXITOVFNGWRSHOJJFNRWALDIZLHFHPBQXTHYKGZZJSLRDDNZJPARIYDIVXPWZKUMTIZUVKEREOSCBOWKLYJJUQNQCCAVVCFSDYXJRKMEISRFSMPZXFJEFSEAMIBCJWOURXXWKWZNQPQM");

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
    msg.setTimeStamp(0.9875306280583293);
    msg.setSource(30140U);
    msg.setSourceEntity(57U);
    msg.setDestination(43676U);
    msg.setDestinationEntity(48U);
    msg.timeout = 4173590889U;

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
    msg.setTimeStamp(0.7508476537282928);
    msg.setSource(4569U);
    msg.setSourceEntity(14U);
    msg.setDestination(13485U);
    msg.setDestinationEntity(215U);
    msg.timeout = 2502592423U;

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
    msg.setTimeStamp(0.7513794187736436);
    msg.setSource(36387U);
    msg.setSourceEntity(35U);
    msg.setDestination(64593U);
    msg.setDestinationEntity(123U);
    msg.timeout = 2414750755U;

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
    msg.setTimeStamp(0.6611493610020465);
    msg.setSource(52487U);
    msg.setSourceEntity(2U);
    msg.setDestination(20708U);
    msg.setDestinationEntity(81U);
    msg.sessid = 121019896U;

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
    msg.setTimeStamp(0.9641629262861098);
    msg.setSource(8997U);
    msg.setSourceEntity(17U);
    msg.setDestination(53803U);
    msg.setDestinationEntity(27U);
    msg.sessid = 2961667260U;

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
    msg.setTimeStamp(0.7988646481074282);
    msg.setSource(42238U);
    msg.setSourceEntity(99U);
    msg.setDestination(3174U);
    msg.setDestinationEntity(49U);
    msg.sessid = 3405895617U;

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
    msg.setTimeStamp(0.0032594781798387373);
    msg.setSource(51234U);
    msg.setSourceEntity(144U);
    msg.setDestination(35385U);
    msg.setDestinationEntity(247U);
    msg.sessid = 2895056910U;
    msg.messages.assign("KHOQVVHOJRWMPOFIPCWIFLVEIPLFAUZLWCQHVKBGMNQPQDASMTQNGUZVRABXSCXXVBRJDFGEXTOAGDNXOSMJUMLZKITNKILQHSV");

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
    msg.setTimeStamp(0.20156324779530288);
    msg.setSource(3221U);
    msg.setSourceEntity(146U);
    msg.setDestination(13182U);
    msg.setDestinationEntity(85U);
    msg.sessid = 2338513050U;
    msg.messages.assign("ZYQAOPQSMLLXJQNKAPGWTRIOQJKXHEUVPNGUOGQETSPIQNQTHZAVAUZFDBUQZEDBDINZSNJRKTXAXMOKEVMMU");

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
    msg.setTimeStamp(0.005933269200652402);
    msg.setSource(20524U);
    msg.setSourceEntity(136U);
    msg.setDestination(29878U);
    msg.setDestinationEntity(199U);
    msg.sessid = 3440896827U;
    msg.messages.assign("PHQYLDUGJHXOEQJHBNDYMZAFMGHXRJUVWMKKUWHAFMECNENFCVMLXZWBKVZTFHGAKTXCPIUQSBMPOGPDSIZMRTKTYAFBSGYCULJLRMSNYNCJDXQVDORQHYASZRHMFKXICSX");

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
    msg.setTimeStamp(0.3917220281951246);
    msg.setSource(10257U);
    msg.setSourceEntity(65U);
    msg.setDestination(30169U);
    msg.setDestinationEntity(4U);
    msg.sessid = 1778749211U;

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
    msg.setTimeStamp(0.34339106528107666);
    msg.setSource(22556U);
    msg.setSourceEntity(60U);
    msg.setDestination(60743U);
    msg.setDestinationEntity(45U);
    msg.sessid = 870990694U;

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
    msg.setTimeStamp(0.721595673055322);
    msg.setSource(57923U);
    msg.setSourceEntity(73U);
    msg.setDestination(60496U);
    msg.setDestinationEntity(97U);
    msg.sessid = 3456787298U;

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
    msg.setTimeStamp(0.6630172779657636);
    msg.setSource(47623U);
    msg.setSourceEntity(171U);
    msg.setDestination(28177U);
    msg.setDestinationEntity(115U);
    msg.sessid = 3093017921U;
    msg.status = 122U;

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
    msg.setTimeStamp(0.5024304404369903);
    msg.setSource(40279U);
    msg.setSourceEntity(182U);
    msg.setDestination(18430U);
    msg.setDestinationEntity(0U);
    msg.sessid = 3181624528U;
    msg.status = 17U;

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
    msg.setTimeStamp(0.46680851845497806);
    msg.setSource(39550U);
    msg.setSourceEntity(201U);
    msg.setDestination(32600U);
    msg.setDestinationEntity(179U);
    msg.sessid = 3570774038U;
    msg.status = 31U;

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
    msg.setTimeStamp(0.3049244639896025);
    msg.setSource(7691U);
    msg.setSourceEntity(248U);
    msg.setDestination(3893U);
    msg.setDestinationEntity(17U);
    msg.name.assign("RIPVAHXMDWBCQPECGYFBTMWMXHBMOGNHLADTVHSTZBZNLTQERXPVZLPBAEEZYHFFVLAJRPYTUXIXGWJOTJNKOKCQEDXWZPHQLPKZUACNCAWLXSSWKKYWLIUSIEWHJMPBJOERLDTHRQJFGVMLSIQKGOMQSIIVZVUJRNYDRSCHUYJVFPAIMFCUNNCBDWNUIGAGDHNVXFNPBDFOMFSDKWLSGJGAVTTMRAR");

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
    msg.setTimeStamp(0.973727938616412);
    msg.setSource(37447U);
    msg.setSourceEntity(186U);
    msg.setDestination(134U);
    msg.setDestinationEntity(160U);
    msg.name.assign("AZMTRVYISKFJRFWSICMQZRXBEDIKGOYZCMRYUITSAPXLGQEWWHCOXCWBNLQCYBBEBOACENLJSOVBSXMXXFKLHEHVVHTQKBKEAWFZIHDUDRZYNMNUBRYDKMLVCTZQESADABEIKSQFUJPAUDGUXZGFDGJOPOUVSJCAWNGQNSRWPQJCTHZMHFNVYHIVPHRLVDOPLTGRYENTUOXGIDSMYNB");

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
    msg.setTimeStamp(0.4103394434247256);
    msg.setSource(14689U);
    msg.setSourceEntity(178U);
    msg.setDestination(24135U);
    msg.setDestinationEntity(28U);
    msg.name.assign("OKBWNXWQRTRJIWLHHRASEKXBGLENNOFJRZYCWYHYNCQSZRXCJGTCQDMEVKMTAYYHIDIEMHTFPQKSQJZH");

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
    msg.setTimeStamp(0.3019738497474982);
    msg.setSource(59124U);
    msg.setSourceEntity(78U);
    msg.setDestination(9575U);
    msg.setDestinationEntity(242U);
    msg.name.assign("VZPBHDNVIPEGKWSFFDCKDSYBQWNAJRZVQAWQZOOASPHPIZZCQKMBUSXJKXPSKLXTZXTOVYIFVBNHVQUGXJTEIFNPHNTM");

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
    msg.setTimeStamp(0.6843500430234482);
    msg.setSource(46235U);
    msg.setSourceEntity(210U);
    msg.setDestination(21819U);
    msg.setDestinationEntity(138U);
    msg.name.assign("NTERDETHNRGGKBHTRSAUHLCOKIBSPFSRCUYPFDPGILFRHKYYUIDAJFQJSKNGNFLPPDWUDZHCOIRBQPZUTXUMKDQGO");

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
    msg.setTimeStamp(0.8319891897357798);
    msg.setSource(19285U);
    msg.setSourceEntity(249U);
    msg.setDestination(53897U);
    msg.setDestinationEntity(249U);
    msg.name.assign("OTOOVEZPCQFVHEWGVXJSRXBNBKQAXPHZZUASYYTTYZZGKWXJSCIRYFGBMLCKJOQWVFGUZJMCFYYNDWLQJWYKKPQWLLHAKSDCXFJDNWGATDADUBHOFUFZCNUHCRGGGBDBIEIZPFRJKARQKEHGOXOWUOQUMAMXEXHIDDUFTHBXISNDKIETXMRMAWTVCJRLLVFQUJPASZYPCHTJCMSRVSOENPNEIPTLMLVZ");

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
    msg.setTimeStamp(0.5411021080966064);
    msg.setSource(54212U);
    msg.setSourceEntity(26U);
    msg.setDestination(31057U);
    msg.setDestinationEntity(234U);
    msg.type = 130U;
    msg.error.assign("BDOCHAYNKKCPPLM");

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
    msg.setTimeStamp(0.5234108281344714);
    msg.setSource(2201U);
    msg.setSourceEntity(167U);
    msg.setDestination(5941U);
    msg.setDestinationEntity(124U);
    msg.type = 226U;
    msg.error.assign("HEZTDQRHYFWWSAPASAGJU");

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
    msg.setTimeStamp(0.6486236999484901);
    msg.setSource(7934U);
    msg.setSourceEntity(90U);
    msg.setDestination(31948U);
    msg.setDestinationEntity(111U);
    msg.type = 203U;
    msg.error.assign("NZQHNBKQHATPLUEYQVMSEXSWEYHIUOEBSWZJTZHGEKIJHYFDYVAOMEGMYIOGMWZFQNNWZSRXMRBXBGKCELCDMUVPJAXBCUPGSLYDOJDPMTAMXHWULMAKCIVXNSV");

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
    msg.setTimeStamp(0.3781149983529719);
    msg.setSource(63393U);
    msg.setSourceEntity(191U);
    msg.setDestination(8700U);
    msg.setDestinationEntity(81U);
    msg.seq = 51352U;
    msg.sys_dst.assign("BNJKGRMNCEFIVOCBRRYKIATMBPDRJQYTJLTGQNFTTCKNXVNIRXWFJIKGJUMTFZAWCPSZRCHMDSMPEASPYSMDHXJZMESYDFMJNXTPVGDGBLHWTVGXYANGRUNHFRDOLAJVODWWKOOGVBYRUNFQZHBVOZXKPHIAIDGCGBCBSSEOBSYCLUFNILZPAXPIUQJCVAMUQAIOYFHPVLDLUFSLEIWSHCTPZBQKZW");
    msg.flags = 254U;
    const char tmp_msg_0[] = {-78, 18, -47, -31, 55, 95, 120, 84, 46, 42, 85, 75, -115, -85, 42, 70, -33, 52, -23, -14, 105, -86, -56, -59, 84, -118, 38, -95, 19, -48, -81, 17, 111, -108, 31, -77, 31, -17, 34, 4, -94, 126, 92, 116, -98, 76, -62, -2, 104, 113, -110, 84, -79, 104, 114, 113, -65, 48, -19, 63, 71, 47, 61, -108, 55, -42, -64, -1, 57, 110, -92, 32, 16, -70, 82, -7, 73, 102, 121, -19, -57, 95, 23, 41, -17, 117, 30, 101, -90, 79, 3, 60, 33, -10, -23, -48, -18, -6, -15, 40, -1, 86, -18, -92, -18, -59, 7, 45, -90, -42, -122, -26, -58, -10, 55, -127, 46, -95, -84, 16, -128, -39, 46, 90, -86, 23, 121, 108, -55, -44, 75, 79, 122, -16, 17, -61, 9, 106, 17, 74, 45, 13, 120, -88, 23, 15, -10, -58, 47, -45, -14, 83, -78, 77, -92, -28, -103, -11, 100, 65, 57, 123, 26, -71, 121, 99, 27, -107, 25, 96, 110, 106, 80, -49, 64, 92, 81, -62, 103, -20, 16, 46, -25, -39, 80, 79, -115, -2, -69, -50};
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
    msg.setTimeStamp(0.6127422196732597);
    msg.setSource(44163U);
    msg.setSourceEntity(9U);
    msg.setDestination(45008U);
    msg.setDestinationEntity(245U);
    msg.seq = 8474U;
    msg.sys_dst.assign("SIXQPAVZPOCULVDDETGKRFLZNZKKEJIQKWOFPEDANJPXGMHZJQWCNQHURISBNFHRRZCDIPBMZSLVHYLQDALIDILYFTODHMSPGVFZJGKNZRAAFRHMFBWYOOGGJYMKAWLNUYUWVTAAGSZFXTYXJDQGNYENHLFTVVYPNDZYSOAQVXMLMKCWPXRXBQDJERSUEWKCBORBQOUWXEQTGMOJUBTYJEXPHKUKJSUOCPCCXNHULERFBVBI");
    msg.flags = 70U;
    const char tmp_msg_0[] = {-19, 118, 35, 113, 108, 0, -7, -9, 62, 42, 92, -37, 50, -60, 97, -8, -51, -47, -72, 97, -12, -23, 22, 87, 91, -47, 95, -7, -83, 53, -122, 98, 124, 0, -56, 80, -21, -114, 64, 126, -95, 44, -82, -32, -53, -119, 6, 37, -45, 81, -5, -67, -34, -85, 96, -64, 18, 104, 84, -17, 95, -22, 37, 4, -51, 13, -54, 36, -63, 69, 8, -23, -82, -32, -25, -90, 89, -72, 94, -69, -34, -11, -99, -53, 107, -96, -25, 2};
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
    msg.setTimeStamp(0.8169036945523943);
    msg.setSource(11635U);
    msg.setSourceEntity(158U);
    msg.setDestination(23337U);
    msg.setDestinationEntity(3U);
    msg.seq = 13089U;
    msg.sys_dst.assign("YOILVIQNJXJHXDQJKRSDUADTPKYAOTHAUWAQECQCRT");
    msg.flags = 147U;
    const char tmp_msg_0[] = {-15, 48, 89, -110, 77, 69, 8, -92, -86, 51, 95, -72, 63, -89, -4, -89, 8, 52, 66, 45, -102, -82, 99, 51, -88, 20, -108, -102, 28, 83, -8, 75, 100, -61, 48, 70, -105, 50, -127, 15, 47, -64, 25, -63, 81, -41, 18, -128, -7, 75, 120, 103, -67, 98, 12, -17, 63, -128, -52, -99, 49, 126, 98, -95, 52, 105, -92, 108, -117, 59, -80, -20, -81, 49, 25, 95, 73, 77, -117, 49, 126, 12, -96, -16, -123, -94, 56, 82, -54, -89, 61, -85, -83, -32, -75, 29, -117, -121, -107, -55, -115, -42, -58, -93, -75, -33, 46, -79, -42, -11, -49, 0, -69, 119, 65, 89, -75, 3, 61, 47, -109, 46, 36, 71, -100, 49, -77, 0, -80, -72};
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
    msg.setTimeStamp(0.6686135639626825);
    msg.setSource(34114U);
    msg.setSourceEntity(54U);
    msg.setDestination(64266U);
    msg.setDestinationEntity(176U);
    msg.sys_src.assign("AHMOXUOLFEGSWJVYUIJKMXWZOLPRBHQQREOCIEWKZFLFLYCNXYEMBPTEIBQWUGPSLQONOYSAZRAIHBVEUYDMRCKZVVUJCBAUETDZQTMKF");
    msg.sys_dst.assign("RYFADAZGOIGBNKEUDHIX");
    msg.flags = 243U;
    const char tmp_msg_0[] = {-90, 76, -89, -54, -81, -66, 86, -4, 60, -56, 5, 36, -62, -116, 27, -43, 62, 124, 70, 115, -94, -101, -61, -40, -124, 25, 25, -77, -103, 61, -97, 59, 80, -77, 66, 89, -52, 18, -14, -110, 25, -10, -21, 66, -28, 98, 24, 41, 87, -124, -71, 96, -101, 38, -84, 79, 41, -11, 0, 117, -122, -120, 50, -48, 70, 116, -128, -63, -11, -115, 98, -115, -25, -35, 39, -43, -87, -13, 46, 87, -76, 88, 39, 92, 0, 36, 108, 123, -103, 69, 101, 88, 118, -71, 103, -59, -97, 69, 121, 46, 109, -45, 51, 31, 75, -89, -14, -109, -103, -99, -99, 86, -67, 40, 43, 110, -90, 9, -18, -64, 46, 121, 66, -91, -81, -79, 79, 112, 76, -45, 104, 117, 72, 0, 51, -121, 56, 16, -80, -42, 35, -18, -66, -53, 86, -27, -97, -123, -123, 100, -116, 84, 61, 77, -61, 81, 100, -47, -1, 64, -12, 95, 117, 62, 40, 3, -74, 100, -117, 3, -70, 86, -46};
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
    msg.setTimeStamp(0.6318392997005543);
    msg.setSource(46267U);
    msg.setSourceEntity(114U);
    msg.setDestination(8163U);
    msg.setDestinationEntity(167U);
    msg.sys_src.assign("UJVWFMTASBSIXQERLPFXCJDCHKGNLJPPPZYBSSWO");
    msg.sys_dst.assign("TLHWYFLWMGQPITRGEDPSBBFBXEMRHRXEFAUBPXCQPNCIJKOUADQSESFSUMTHRHLKFYLWVGNWOAGGYBLYCTZGENORGRBZZXKQAJUCQNHQSPHCGSWDNKNHFYYLYLUSUVEZRXZPXEUFALJAKDMDCQVVGMXHAVCFCMLVOPCZBISTJQRISIJOIYIV");
    msg.flags = 247U;
    const char tmp_msg_0[] = {111, 21, -18, -8, -111, 48, -8, 97, -2, -4, -90, 41, -81, 43, 22, -90, 117, -34, -4, -127, -101, -99, 40, -63, 27, -116, 15, -114, 54, 73, 35, 26, 79, -12, 89, 39, 77, -34, -99, 122, 21, 93, 41, -88, 39, -34, 65, -38, -42, 44, -10, 57, 56, -44, 46, -12, 101, 43, -120, 36, 37, -89, -86, 66, -17, -121, 83, -80, 24, -67, 60, 78, 21, 15, 98, -13, -11, 68, -88, 63, 111, -105, -25, -81, -35, 115, -128, -24, 119, -59, 47, 27, -42, -49, -68, -67, -120, -28, 94, -114, 5, -1, 54, 105, -96, 21, -111, 31, 57, -36, 62, 82, 59, 21, -59, 123, -110, -80, -84, 124, -86, 115, 87, -127, 6, 35, 8, -100, -35, -38, 43, -39, 36, -125, 83, 77};
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
    msg.setTimeStamp(0.4517537693526783);
    msg.setSource(11739U);
    msg.setSourceEntity(42U);
    msg.setDestination(21382U);
    msg.setDestinationEntity(59U);
    msg.sys_src.assign("KEKLWRXZBHNMJXCEITVLZWWTRMCFIYSDYMVZTHQRVFNZEBHXJGPPHLEDOXXLGNDYVQMJPERWQOONWXUAYNLDJQGDYJERDBOPDZYNTVDJBMGGTBIEAURGEFUEKUCUKVSKHLIPOIVNAGSKIZFFGQCDHMJMXAVPCKXHCARKBAFAILCYYGWOMTUVPDVYPKBASIIJWCTZFJ");
    msg.sys_dst.assign("BPCYJGJKDAPGOCWYFCMBJLWQOCCUKIFCXMOISHVTGYHMPLXJIZFXQEEPPVSFSMHFCNKGBIDDENJHBLOUVQGPMW");
    msg.flags = 69U;
    const char tmp_msg_0[] = {-123, -15, 30, -34, 112, -50, 98, -83, -14, 65, -14, -82, 41, 116, 46, 84, 87, -107, 15, -64, 34, -65, -128, -96, 29, 72, 107, 11, -41, 88, -112, -1, -8, -82, -26, 47, 111, 63, 63, 23, -88, 109, 53, -110, -8, -17, -61, 95, -36, -114, 55, -2, 116, 29, 81, 17, 9, 45, 74, -39, -18, -63, 118, 114, 120, 10, 88, -120, 112, 118, 5, 101, 55, -81, -90, 6};
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
    msg.setTimeStamp(0.436617390124832);
    msg.setSource(9198U);
    msg.setSourceEntity(236U);
    msg.setDestination(4935U);
    msg.setDestinationEntity(66U);
    msg.seq = 39206U;
    msg.value = 197U;
    msg.error.assign("VZHPCJZJTKQQBJNDNYVSMLERPUHGPKSEHRTAZPFALAGSAPSDKAOUYYIOJIJCXNAHWLOLCWRFNNOIZBHWZSSQXVQFVIKIHSNKSTIYGEAEVGFVHTDEUQIFCTSLZEMRVDYDIUSCFWFJWELXCTKMMQDEORCUXCKHGBDWPIBUQGBEVDLRZBCXJMUYQOBCMVFJX");

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
    msg.setTimeStamp(0.36357868820355865);
    msg.setSource(55097U);
    msg.setSourceEntity(109U);
    msg.setDestination(17981U);
    msg.setDestinationEntity(112U);
    msg.seq = 47684U;
    msg.value = 63U;
    msg.error.assign("IDCVOWKEXMKJAGRNJZRDBAFGHUYVIVLYCKXOJMKXSRHXFPYVJHPQXD");

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
    msg.setTimeStamp(0.7454411645230884);
    msg.setSource(12368U);
    msg.setSourceEntity(173U);
    msg.setDestination(60038U);
    msg.setDestinationEntity(98U);
    msg.seq = 32409U;
    msg.value = 30U;
    msg.error.assign("CBZJSUEXSNVCNTQYHGXRBDYNWPWXHMECBFWALAWQWEZFAKFHZBORTRGEWYTLPAGRUJENTAWZPJOOEIDPXJQYXMAYAMWSMHXDCIWEGOLMMQXUXUPNV");

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
    msg.setTimeStamp(0.767178127215094);
    msg.setSource(64016U);
    msg.setSourceEntity(125U);
    msg.setDestination(31512U);
    msg.setDestinationEntity(193U);
    msg.seq = 60809U;
    msg.sys.assign("DJTUUHBIDNUZOWRLBBMRVPLMMPAUFVJATEVQAJPIOKYXCEEGGMHSAALFLWYYKIJJZJSDHNHIVPMHBTYFVSRLVGXGAFGYQJNNFIPAMBKDVLUCJBESCKNXQDORQSYEBKMPARTPOTINSNWURITH");
    msg.value = 0.7204212100185642;

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
    msg.setTimeStamp(0.7306541766691316);
    msg.setSource(32484U);
    msg.setSourceEntity(251U);
    msg.setDestination(47858U);
    msg.setDestinationEntity(126U);
    msg.seq = 12127U;
    msg.sys.assign("HQMKOEVZUEBALYOJQZLLUPYFFYJRDFZANTSTPB");
    msg.value = 0.4322883434807422;

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
    msg.setTimeStamp(0.6451898303849315);
    msg.setSource(5857U);
    msg.setSourceEntity(19U);
    msg.setDestination(18473U);
    msg.setDestinationEntity(197U);
    msg.seq = 42341U;
    msg.sys.assign("LGCJJLIJESQEGKVPLFUCTIHHXZXYFMFDOPTBIODAELBMFMQQDRGXJTRHCAHGBUVFMYWCRBYYNGXYNUKTDIYUUWZCNNNKDJALHFJOPKSHIZPGFXCUEWBTYVPMLWBWULXKZSKQTSXMCMMKRYSKWVAKRQRADIZQEEJLZMBPCPGHGSRASLIQNVXUTANVOOIJQXDWZEGN");
    msg.value = 0.24149672473110184;

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
    msg.setTimeStamp(0.7678392635888889);
    msg.setSource(42766U);
    msg.setSourceEntity(54U);
    msg.setDestination(36991U);
    msg.setDestinationEntity(44U);
    msg.action = 145U;
    msg.longain = 0.11011127492544093;
    msg.latgain = 0.6191100152121575;
    msg.bondthick = 2684529217U;
    msg.leadgain = 0.1652722683158977;
    msg.deconflgain = 0.6598580993748457;

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
    msg.setTimeStamp(0.49959843767537604);
    msg.setSource(54384U);
    msg.setSourceEntity(114U);
    msg.setDestination(52210U);
    msg.setDestinationEntity(127U);
    msg.action = 205U;
    msg.longain = 0.05784710258415171;
    msg.latgain = 0.9161100613801189;
    msg.bondthick = 3958046478U;
    msg.leadgain = 0.00912812924082973;
    msg.deconflgain = 0.059041091529795864;

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
    msg.setTimeStamp(0.8967679026042791);
    msg.setSource(16346U);
    msg.setSourceEntity(206U);
    msg.setDestination(45726U);
    msg.setDestinationEntity(243U);
    msg.action = 155U;
    msg.longain = 0.3942888795149764;
    msg.latgain = 0.4375959125953204;
    msg.bondthick = 3042719627U;
    msg.leadgain = 0.6666931645495742;
    msg.deconflgain = 0.29458322146369564;

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
    msg.setTimeStamp(0.706858305844062);
    msg.setSource(39319U);
    msg.setSourceEntity(17U);
    msg.setDestination(908U);
    msg.setDestinationEntity(130U);
    msg.err_mean = 0.4216232941884319;
    msg.dist_min_abs = 0.8424757802612454;
    msg.dist_min_mean = 0.14875883458667793;

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
    msg.setTimeStamp(0.6239568621635344);
    msg.setSource(51157U);
    msg.setSourceEntity(242U);
    msg.setDestination(7424U);
    msg.setDestinationEntity(164U);
    msg.err_mean = 0.9421235882947896;
    msg.dist_min_abs = 0.8543345136043254;
    msg.dist_min_mean = 0.8155832470585788;

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
    msg.setTimeStamp(0.39942573893706257);
    msg.setSource(13610U);
    msg.setSourceEntity(186U);
    msg.setDestination(62767U);
    msg.setDestinationEntity(20U);
    msg.err_mean = 0.7942846723535382;
    msg.dist_min_abs = 0.0821039681098743;
    msg.dist_min_mean = 0.5522110910522792;

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
    msg.setTimeStamp(0.16338429566470292);
    msg.setSource(64067U);
    msg.setSourceEntity(161U);
    msg.setDestination(33064U);
    msg.setDestinationEntity(202U);
    msg.action = 101U;
    msg.lon_gain = 0.5771005306033508;
    msg.lat_gain = 0.5152251989324723;
    msg.bond_thick = 0.09764021950329427;
    msg.lead_gain = 0.45258406010847885;
    msg.deconfl_gain = 0.9323488367304356;
    msg.accel_switch_gain = 0.7177096190660227;
    msg.safe_dist = 0.7073071338775958;
    msg.deconflict_offset = 0.5643548887111582;
    msg.accel_safe_margin = 0.44493227298025717;
    msg.accel_lim_x = 0.24916645117225322;

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
    msg.setTimeStamp(0.011834875723697236);
    msg.setSource(28250U);
    msg.setSourceEntity(69U);
    msg.setDestination(40215U);
    msg.setDestinationEntity(118U);
    msg.action = 100U;
    msg.lon_gain = 0.9330101019349764;
    msg.lat_gain = 0.8243771098080355;
    msg.bond_thick = 0.6271155066445654;
    msg.lead_gain = 0.44556041084510456;
    msg.deconfl_gain = 0.30454805056618817;
    msg.accel_switch_gain = 0.9673693413277797;
    msg.safe_dist = 0.7638558424896613;
    msg.deconflict_offset = 0.986925301375188;
    msg.accel_safe_margin = 0.41039605539348534;
    msg.accel_lim_x = 0.27351651446920144;

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
    msg.setTimeStamp(0.7956676238484344);
    msg.setSource(32927U);
    msg.setSourceEntity(25U);
    msg.setDestination(41653U);
    msg.setDestinationEntity(4U);
    msg.action = 127U;
    msg.lon_gain = 0.45768499945380936;
    msg.lat_gain = 0.04425421410668062;
    msg.bond_thick = 0.8855599799734152;
    msg.lead_gain = 0.32403917159919804;
    msg.deconfl_gain = 0.8604316340111312;
    msg.accel_switch_gain = 0.016763111694953925;
    msg.safe_dist = 0.8102905478215735;
    msg.deconflict_offset = 0.6802360717782416;
    msg.accel_safe_margin = 0.9266844079955218;
    msg.accel_lim_x = 0.24179219124064832;

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
    msg.setTimeStamp(0.36162741735685877);
    msg.setSource(17441U);
    msg.setSourceEntity(164U);
    msg.setDestination(42445U);
    msg.setDestinationEntity(60U);
    msg.type = 133U;
    msg.op = 73U;
    msg.err_mean = 0.5935415656004429;
    msg.dist_min_abs = 0.9888218399635396;
    msg.dist_min_mean = 0.7545606513952416;
    msg.roll_rate_mean = 0.676902743586986;
    msg.time = 0.2874476665840143;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 213U;
    tmp_msg_0.lon_gain = 0.06338503124210748;
    tmp_msg_0.lat_gain = 0.7709515963703452;
    tmp_msg_0.bond_thick = 0.49270038748536094;
    tmp_msg_0.lead_gain = 0.8403203114666787;
    tmp_msg_0.deconfl_gain = 0.6265971056763792;
    tmp_msg_0.accel_switch_gain = 0.2976055548698141;
    tmp_msg_0.safe_dist = 0.3205188787954776;
    tmp_msg_0.deconflict_offset = 0.09156770762621591;
    tmp_msg_0.accel_safe_margin = 0.2978915064833263;
    tmp_msg_0.accel_lim_x = 0.8089368737278047;
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
    msg.setTimeStamp(0.8360566117584293);
    msg.setSource(11471U);
    msg.setSourceEntity(25U);
    msg.setDestination(34427U);
    msg.setDestinationEntity(207U);
    msg.type = 150U;
    msg.op = 90U;
    msg.err_mean = 0.19501802862619855;
    msg.dist_min_abs = 0.1810250838372096;
    msg.dist_min_mean = 0.5820775591788985;
    msg.roll_rate_mean = 0.8129753254818844;
    msg.time = 0.7168165243154246;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 238U;
    tmp_msg_0.lon_gain = 0.11458785699358143;
    tmp_msg_0.lat_gain = 0.33981739967138824;
    tmp_msg_0.bond_thick = 0.6326884076427927;
    tmp_msg_0.lead_gain = 0.6977498907113872;
    tmp_msg_0.deconfl_gain = 0.7391328037526819;
    tmp_msg_0.accel_switch_gain = 0.8142845215309201;
    tmp_msg_0.safe_dist = 0.3469332733440076;
    tmp_msg_0.deconflict_offset = 0.855438305173282;
    tmp_msg_0.accel_safe_margin = 0.04980183563440432;
    tmp_msg_0.accel_lim_x = 0.7379017099628621;
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
    msg.setTimeStamp(0.0540822071073217);
    msg.setSource(56623U);
    msg.setSourceEntity(173U);
    msg.setDestination(25280U);
    msg.setDestinationEntity(214U);
    msg.type = 14U;
    msg.op = 61U;
    msg.err_mean = 0.7466441263016913;
    msg.dist_min_abs = 0.9759611709869902;
    msg.dist_min_mean = 0.7098831355802767;
    msg.roll_rate_mean = 0.31848392817506654;
    msg.time = 0.5594476041160373;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 234U;
    tmp_msg_0.lon_gain = 0.328545608710061;
    tmp_msg_0.lat_gain = 0.0762573912080281;
    tmp_msg_0.bond_thick = 0.20083941534207594;
    tmp_msg_0.lead_gain = 0.6634019885444195;
    tmp_msg_0.deconfl_gain = 0.22745756388363536;
    tmp_msg_0.accel_switch_gain = 0.7103669180856547;
    tmp_msg_0.safe_dist = 0.7046032688272501;
    tmp_msg_0.deconflict_offset = 0.9681232995287897;
    tmp_msg_0.accel_safe_margin = 0.5675093048076691;
    tmp_msg_0.accel_lim_x = 0.31310481434833215;
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
    msg.setTimeStamp(0.6653356925195478);
    msg.setSource(26164U);
    msg.setSourceEntity(108U);
    msg.setDestination(60469U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.09488861606986565;
    msg.lon = 0.41446016201622005;
    msg.eta = 3406733965U;
    msg.duration = 49544U;

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
    msg.setTimeStamp(0.2780037574158378);
    msg.setSource(24251U);
    msg.setSourceEntity(204U);
    msg.setDestination(23887U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.44857062764330313;
    msg.lon = 0.6489105343670466;
    msg.eta = 2459516703U;
    msg.duration = 32675U;

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
    msg.setTimeStamp(0.23775738740897123);
    msg.setSource(1461U);
    msg.setSourceEntity(106U);
    msg.setDestination(36056U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.28319820618408076;
    msg.lon = 0.9085052967005156;
    msg.eta = 1195799958U;
    msg.duration = 29447U;

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
    msg.setTimeStamp(0.30028750571836593);
    msg.setSource(18425U);
    msg.setSourceEntity(185U);
    msg.setDestination(45833U);
    msg.setDestinationEntity(90U);
    msg.plan_id = 43206U;

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
    msg.setTimeStamp(0.6424154086040192);
    msg.setSource(49525U);
    msg.setSourceEntity(214U);
    msg.setDestination(64901U);
    msg.setDestinationEntity(75U);
    msg.plan_id = 61787U;

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
    msg.setTimeStamp(0.6296834373375266);
    msg.setSource(37488U);
    msg.setSourceEntity(224U);
    msg.setDestination(8530U);
    msg.setDestinationEntity(196U);
    msg.plan_id = 34344U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6176907663245571;
    tmp_msg_0.lon = 0.7989760326698189;
    tmp_msg_0.eta = 1969078021U;
    tmp_msg_0.duration = 60223U;
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
    msg.setTimeStamp(0.5819928979367471);
    msg.setSource(36932U);
    msg.setSourceEntity(206U);
    msg.setDestination(53320U);
    msg.setDestinationEntity(139U);
    msg.type = 29U;
    msg.command = 206U;
    msg.settings.assign("JRFJALBZKVBFRQVGHMWLJRRUVWJSPZZQHVKRAHEUSTQAOREFVPRIZEDMAUPQIHXBYDTHIIYOLQPMYNPZMOLXNCGEQYODKHLNWORADVGGXGBHKZXJNOQCPSATZOKRKIGHAYI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 41609U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VUSDRWHVSOHXMGRLQAEZIBPKJNRSSUARHJTNQCWLDAKZJZEDNMMYMBKTAAGKUS");

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
    msg.setTimeStamp(0.20569113407756623);
    msg.setSource(24245U);
    msg.setSourceEntity(206U);
    msg.setDestination(26893U);
    msg.setDestinationEntity(43U);
    msg.type = 110U;
    msg.command = 252U;
    msg.settings.assign("UYJNWYIVHBOBHVFZGXDCGJAXEJHOGYWACUJMSVUGFQLSEPYSSBZQGPTKIPXVCJDCITFVMDZQFWQVQOZSEKRGXJLKLFTYMQUJIBKVBRQDOCXHWADKBGIKZNXUWWBXJRLQNFWEHEGBAKZOQAFDZCWOSASYYKPRRZFRM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 33638U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ACHNZKJDPNSVWYWYHEFCGOZXTERQGZYJNERYFKFONOXGNDBSQSDSGCIXICQFXURMAGMTHCOOZAIUBISAOLBSULCBXBPRZUZHWGTFWLPZHDLFDAOTKHIPEYLZNVYERMWWRASJCHFZVZJAJOVQAJEAKPMWLTUTNHOBLUPGLKSLGWRFTHMXMYQOJRKRNWMMQBWMQKTNVQFVQPRCSXPUGXBIYYKBUJ");

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
    msg.setTimeStamp(0.29424268030859113);
    msg.setSource(60637U);
    msg.setSourceEntity(247U);
    msg.setDestination(32508U);
    msg.setDestinationEntity(189U);
    msg.type = 253U;
    msg.command = 232U;
    msg.settings.assign("YLPZPCDMHKHBDKSKARMZEZZUUPWGOTHOLKXYWGHWOYPFSMOLVPGFEOTQMMRVJXLAWYPUZEIODHTSXSZQNSTNXJDFWKTIYOYZZIEBDVMWPZUUKFWMFTKPXGQVHMJFCPARFXRLNKRJXTUYICFMYTBJJJIQSIBDOEIVGNEHFBSVQIHUDREVIAYLGAQLNVXSLCNKDSABAGFCBLBCNTNUGQAJZBKMOQUEDENGCNSJXCRLWICADRJVRTPHGQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 52512U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.17737870209473305;
    tmp_tmp_msg_0_0.lon = 0.10154274293887744;
    tmp_tmp_msg_0_0.eta = 4110952696U;
    tmp_tmp_msg_0_0.duration = 49341U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZXVSDCWKJCCXGFQTBSJOOQLKMMJIDRRWYGXUVUNDAONFORBJNRNHYPHTRCYWTAHHKBISBXFSLGRQOMPIGWGVTZASQXSCDVQOJZRXFYLDGNFKGURANCNKVIFLLMVTUCAWPZYKJXWFTOTIEKZOZBBYNHIMKEZPEXVDEWDHNAWITNOBPFFEQFJLAYBYPEJYQURSDLLEOMPJDERXMLWHCHGCHBTEQWEXMQMUSJLPKHACUUVIBMP");

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
    msg.setTimeStamp(0.19034252480239966);
    msg.setSource(51507U);
    msg.setSourceEntity(82U);
    msg.setDestination(30903U);
    msg.setDestinationEntity(28U);
    msg.state = 46U;
    msg.plan_id = 29269U;
    msg.wpt_id = 96U;
    msg.settings_chk = 36577U;

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
    msg.setTimeStamp(0.28033244228357346);
    msg.setSource(43379U);
    msg.setSourceEntity(239U);
    msg.setDestination(58760U);
    msg.setDestinationEntity(236U);
    msg.state = 204U;
    msg.plan_id = 29629U;
    msg.wpt_id = 184U;
    msg.settings_chk = 12809U;

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
    msg.setTimeStamp(0.16981714362667233);
    msg.setSource(56796U);
    msg.setSourceEntity(86U);
    msg.setDestination(14142U);
    msg.setDestinationEntity(205U);
    msg.state = 138U;
    msg.plan_id = 13781U;
    msg.wpt_id = 216U;
    msg.settings_chk = 32201U;

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
    msg.setTimeStamp(0.3622483998431103);
    msg.setSource(40214U);
    msg.setSourceEntity(104U);
    msg.setDestination(37198U);
    msg.setDestinationEntity(49U);
    msg.uid = 92U;
    msg.frag_number = 98U;
    msg.num_frags = 13U;
    const char tmp_msg_0[] = {-54, 22, -8, -40, -85, -69, 27, -125, -98, 45, -83, -19, -102, -71, 73, 21, -115, -13, -56, -84, 91, 65, -91, 77, 43, 2, -26, 72, -62, 100, -59, -102, -47, 105, 51, -38, 33, -126, -38, -39, -20, 40, -64, 0, -57, 6, -37, 110, 73, 68, -55, -95, -108, -3, -91, 97, -84, 90, 64, -90, 119, -65, 112, -126, -15, -99, 40, 29, 40, -30, -120, 45, -85, 100, -49, 61, -30, -126, 28, 92, -1, -25, -41, -62, -27, 29, -8, -98, -64, 63, -68, -28, -101, -120, -95, -89, -39, 102, 47, -73, -6, 3, 61, -40, -127, -64, 76, -4, 112};
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
    msg.setTimeStamp(0.35574018695141196);
    msg.setSource(42996U);
    msg.setSourceEntity(101U);
    msg.setDestination(21351U);
    msg.setDestinationEntity(235U);
    msg.uid = 156U;
    msg.frag_number = 56U;
    msg.num_frags = 199U;
    const char tmp_msg_0[] = {-39, 40, 3, 23, 24, 89, -93, -55, -69, -101, -47, 94, 23, 19, -45, -84, -62, 104, -27, -94, -118, 43, 90, -52, -95, 124, -18, -114, 69, -91, 67, -103, -35, 91, -56, -58, 21, 93, 97, 58, -84, 6, -58, -86, 53, -21, -23, 9, -27, -92, -102, -30, -34, -83, -121, 50, -10, 119, -40, 72, 108, 82, -87, 89, -58, 81, -97, -15, 81, -60, -121, -69, -33, -69, -119, -49, -25, 119, -42, 49, 118, 72, -113, -66, 12, 11, 124, 68, 14, -17, -22, -122, -104, -71, -16, 58, 81, 46, -72, -53, -1, -90, -98, -64, -127, -110, -81, -35, -21, -123, -118, 82, 73, -62, -60, 120, -41, 42, -23, -79, -41, 55, 99, -101, -111, -127, 126, 5, -123, 84, -80, -38, 87, -71, -48, 82, -79, -30, -99, 106, 81, 96, -65, 2, -96, -78, 78, 53, 74, -98, 118, 82, -119, 58, -68, 79, 17};
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
    msg.setTimeStamp(0.05974617940424798);
    msg.setSource(61875U);
    msg.setSourceEntity(206U);
    msg.setDestination(33375U);
    msg.setDestinationEntity(18U);
    msg.uid = 125U;
    msg.frag_number = 204U;
    msg.num_frags = 204U;
    const char tmp_msg_0[] = {118, 104, -16, -45, -114, 21, 79, -18, -100, -111, 86, -122, -19, 109, -53, 12, -7, 31, -3, 14, 27, -57, -55, 103, -124, -122, -25, -82, 123, -18, 81, 64, -93, -74, -100, 75, 37, 88, 12, 113, -100, -100, 21, -90, -105, 10, -71, 76, -54, -115, 84, 27, -58, -34, -49, -41, -70, 51, -63, 48, -9, 14, -38, 35, 27, 84, -46, -48, -66, 126, 108, 19, 100, 100, -122, 23, -36, -110, -59, -48, 126, 82, 5, 102, -38, -9, -52, -105, 38, 119, 70, -51, 102, 105, -16, 53, 79, -60, 103, 121, -39, 65, -22, -64, -78, 88, 123, -61, 116, -32, 39, 10, 3, -75, 65, -46, -73, 86, 13, 113, -118, 74, -35, 32, -99, 61, -94, 58, 110, 64, -73, 30, -96, -104, -63, -113, 102, -83, -107, -85, -61, -19, 31, -38, 75, 84, 10, 34, 124, 23, -104, -126, -118, -37, 40, -106, 84, 102, -5, -37, -105, 101, -109, 54, 116, -75, 55, 31, -105, 43, 73, 53, -126, -86, 70, -117, 90, -20, 32, 122, 34, -44, -11, -56, -37, -18, 4, 7, 107, -56, 126, -3, -99, 32, 91, 44, -99, -14, 26, -106, -117, -18, -20, -33, -39, -22, -15, -91, -95, -9, 123, -32, -93, -92, -121, -98, 100, -88, 65, -19, -119, 0, -54, 94, 76, -47, -22, -107, 72, 49, -62, -106, -103, -125, -111, -31, 87, 80, 111, -41, -69, 109, -121, 63, -126, 28, -31, -44, -96, -127, 88, -126, -96, 3};
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
    msg.setTimeStamp(0.17354751290650572);
    msg.setSource(54639U);
    msg.setSourceEntity(74U);
    msg.setDestination(20550U);
    msg.setDestinationEntity(148U);
    msg.content_type.assign("KSZNBRYGUSUBHYGPRFDAMHRQNKMXMAFBFGSXJGUKOWORRNTEJDTVNLMZWYJBOLUGUEXEDEFHAGRNFRKPJHAMEWHRWDYKZ");
    const char tmp_msg_0[] = {-100, -61, 63, -112, -118, -72, -95, -74, 85, 115, -83, -49, -48, 39, 85, -115, -113, 3, -116, -66, 96, -48, -98, -46, 48, 14, 116, -116, 55, 97, 21, -102, 57, 24, 100, 83, -88, 32, 113, -93, 48, 11, -51, -14, -20, 107, 63, -67, 83, 38, -116, 10, 85, -119, 65, -89, -120, 39, 60, -93, -93, -29, -38, -97, -85, -17, 67, -51, 42, 5, 5, -76, 83, 93, 33, 93, -106, -25, 39, 105, 27, -124, -27, -43, -9, -91, -9, -71, -24, -2, -99, -108, 4, 123, 92, 34, 2, -58, -63, 81, 42, 9, 82, -62, -101, -25, 112, -92, -47, -83, 88};
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
    msg.setTimeStamp(0.5066061693140596);
    msg.setSource(56470U);
    msg.setSourceEntity(56U);
    msg.setDestination(3333U);
    msg.setDestinationEntity(132U);
    msg.content_type.assign("NLQJWTTJFDAJNVMRBYNOQXBWFCSLPOTWAQPHPUKFPIUMHRXSFUPCNBPCHIQXBQYHSKTAUZZTCMOMKZDVGKQXSGWSRZBRJZYZNMLIYNCZGDIBLNSRZUCZVVFEYHDMESNBNYKORMLHIQUCDGWMEAEXOPPHYYOWJJIRZXBOJWWEOAOPVQAHWMDXFGCTCKGVSRLJVEYGDASDFUSIHQFAXRKGTBDYGPNITKFJUIL");
    const char tmp_msg_0[] = {-73, 16, -111, -46, -113, 100, 71, -92, -34, -26, -125, -72, 57, 121, 79, -96, -18, -72, -76, 107, -52, -4, 3, 94, 58, 59, -81, -68, -67, 7, -53, -16, -33, 5, -79, 0, -37, 21, 7, -4, -108, -68, 63, 0, 114, 90, -55, 44, 60, 66, 41, 105, 112, 12, -53, 64, -9, -6, 24, 23, -75, -98, 94, -26, 104, 55, -31, -126, 34, -21, -49, -116, 8, 18, -25, 98, -118, 96, -17, 37, 72, -67, 103, 34, 51, -63, -30, -46, -32, 58, 75, -9, 43, 31, 52, 80, -48, 63, -67, -68, -13, -85, -79, 57, 39, -34, 118, -105, 75, 96, -15, -47, 106, -9, 87, 24, -85, 2, 118, -31, -63, -26, -19, -71, -77, -89, -54, 119, -119, 20, 111, -51, 108, -97, -101, -76, -15, -50, -73, -127, 6, -108, 35, 14, 22, 5, -15, -5, -52, 40, -113, -85, 29, -43, 89, -62, 81, -111, 94, 24, 13, 39, -55, 3, -66, 30, 89, 19, 45, 37, -115, 49, -121, 51, -2, 72, -120, 20, 16, -17, -53, 110, -4, -3, -79, 55, -33, -80, 124, 39, 33, 120, 69, 84, -117, -42, -53, 11, -36, 77, -35, -3, -122, -4, 16, 57, -73, -106, -23, -100, 77, -86, -52, 20, 93, -50, -73, -22, 73, 33, 101, -52, -122, -103, -50, -65, -109, -118, 70, -69, 34, -93, -111, -77, -72, 35, -84, 95, 100, 46, -3, 77, -56, -87, 39, -8, 119, -26, 30, 15};
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
    msg.setTimeStamp(0.15674244421081163);
    msg.setSource(29287U);
    msg.setSourceEntity(209U);
    msg.setDestination(13402U);
    msg.setDestinationEntity(245U);
    msg.content_type.assign("OAMTODXMBRYFHVPBPBXRXXGWQVBIQCPQXBMJZPNDQCQHVTZTNMNIHQPCRKTGBYWZXGRGRFYPQANISQPJLNDADNOKKAVWUWCLFLZKHHRXREEKXFILEJWOOUSBYFVJTZNIQYKLIM");
    const char tmp_msg_0[] = {22, -80, -78, -15, 121, -82, 83, 65, 102, -92, 6, 70, 52, 59, 115, -3, 51, -8, -40, -60, 78, 3, -87, -94, 93, -69, -6, 28, -21, 19, -89, 16, -101, -120, -87, 17, -85, -84, -61, -36, -84, 81, -14, -28, 115, -115, 98, -7, 101, -86, -97, 32, 29, 116, -58, 119, 10, 80, -38, 122, -98, 114, -63, -14, 48, -109, 93, -107, -52, 41, 82, -4, -23, 125, -70, 17, 38, 52, -111, -20, 59, -59, -73, -84, -73, -52, 65, 85, -109, -4, -116, 108, 112, 23, -32, 63, -86, 65, 35, 52, 37, 33, -73, 85, 77, -82, -91, 67, -60, 106, 120, -13, 19, 76, 5, 101, -23, -37, -88, 46, 85, -121, -120, -41, -105, -78, 40, -25};
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
    msg.setTimeStamp(0.3287500735564147);
    msg.setSource(41564U);
    msg.setSourceEntity(68U);
    msg.setDestination(58341U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.2377443498148616);
    msg.setSource(10506U);
    msg.setSourceEntity(66U);
    msg.setDestination(33814U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.2501502605542607);
    msg.setSource(440U);
    msg.setSourceEntity(62U);
    msg.setDestination(63614U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.8782697270858831);
    msg.setSource(48032U);
    msg.setSourceEntity(216U);
    msg.setDestination(14382U);
    msg.setDestinationEntity(194U);
    msg.target = 8143U;
    msg.bearing = 0.00671556232406012;
    msg.elevation = 0.8128661254623741;

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
    msg.setTimeStamp(0.655307166180978);
    msg.setSource(43296U);
    msg.setSourceEntity(200U);
    msg.setDestination(17092U);
    msg.setDestinationEntity(211U);
    msg.target = 49220U;
    msg.bearing = 0.6531107738919494;
    msg.elevation = 0.8132935433586536;

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
    msg.setTimeStamp(0.2892700567106903);
    msg.setSource(3056U);
    msg.setSourceEntity(203U);
    msg.setDestination(58283U);
    msg.setDestinationEntity(243U);
    msg.target = 52855U;
    msg.bearing = 0.5435368634629297;
    msg.elevation = 0.6187051591426075;

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
    msg.setTimeStamp(0.8110234224573445);
    msg.setSource(53014U);
    msg.setSourceEntity(252U);
    msg.setDestination(35921U);
    msg.setDestinationEntity(57U);
    msg.target = 25933U;
    msg.x = 0.020860206474956455;
    msg.y = 0.8742898399581447;
    msg.z = 0.8546118248403857;

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
    msg.setTimeStamp(0.19657605212628904);
    msg.setSource(13061U);
    msg.setSourceEntity(45U);
    msg.setDestination(19116U);
    msg.setDestinationEntity(159U);
    msg.target = 39288U;
    msg.x = 0.9556396667546989;
    msg.y = 0.2690023340646509;
    msg.z = 0.4900814344148292;

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
    msg.setTimeStamp(0.18282905060057164);
    msg.setSource(6497U);
    msg.setSourceEntity(30U);
    msg.setDestination(1418U);
    msg.setDestinationEntity(187U);
    msg.target = 58062U;
    msg.x = 0.11038040319377884;
    msg.y = 0.5718792785580729;
    msg.z = 0.45461943582693376;

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
    msg.setTimeStamp(0.42431051340429693);
    msg.setSource(61550U);
    msg.setSourceEntity(112U);
    msg.setDestination(51981U);
    msg.setDestinationEntity(240U);
    msg.target = 542U;
    msg.lat = 0.5811570450834532;
    msg.lon = 0.9894706306437997;
    msg.z_units = 208U;
    msg.z = 0.17855733691814046;

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
    msg.setTimeStamp(0.19895454954025915);
    msg.setSource(61274U);
    msg.setSourceEntity(62U);
    msg.setDestination(17072U);
    msg.setDestinationEntity(63U);
    msg.target = 24673U;
    msg.lat = 0.12146290044066033;
    msg.lon = 0.42772145780355164;
    msg.z_units = 244U;
    msg.z = 0.7630262045096496;

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
    msg.setTimeStamp(0.3127953348825605);
    msg.setSource(38126U);
    msg.setSourceEntity(154U);
    msg.setDestination(6949U);
    msg.setDestinationEntity(85U);
    msg.target = 39352U;
    msg.lat = 0.2320744585489074;
    msg.lon = 0.9523071000834322;
    msg.z_units = 127U;
    msg.z = 0.15039225215760987;

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
    msg.setTimeStamp(0.6089932774740782);
    msg.setSource(52336U);
    msg.setSourceEntity(234U);
    msg.setDestination(26929U);
    msg.setDestinationEntity(48U);
    msg.locale.assign("KOPGCNYIEROHUYAJEVLPKFKSSTUMSCP");
    const char tmp_msg_0[] = {4, 25, 73, -127, 89, -128, -124, 13, -60, -36, -22, -61, 69, -30, -71, 44, -114, -69, -55, 88, 31, 4, -61, -5, -81, 66, 20, 64, -47, -63, -13, 93, 61, -16, 120, 33, 22, -73, 55, 42, -114, -73, 105, -60, 38, -67, -86, 117, -72, 77, 66, -15, 34, -73, 49, -86, -52, -96, 24, -48, 39, -73, 39, -126, -114, -35, -58, -48, 0, 12, -117, -14, 102, 98, 94, -96, 62, 51, -19, -17, 33, 25, -125};
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
    msg.setTimeStamp(0.09030660973803761);
    msg.setSource(15754U);
    msg.setSourceEntity(76U);
    msg.setDestination(6165U);
    msg.setDestinationEntity(154U);
    msg.locale.assign("GYCNDAQHLLZWZEYSUDXFSEUNCDRTMOKUHOWKGMRGNAQUTFAWDEATTCKIMYZDVHGVXCCLBQFNUUNQAYVWWWJJFPEPRRKSPCBNOGOFTLMKDBU");
    const char tmp_msg_0[] = {-6, -75, 17, 16, 111, 8, 123, 3, -123, 54, -128, 84};
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
    msg.setTimeStamp(0.1449127457950714);
    msg.setSource(31300U);
    msg.setSourceEntity(250U);
    msg.setDestination(2157U);
    msg.setDestinationEntity(82U);
    msg.locale.assign("EXYPKNFUMPSAMJROWQKSXZJTFRZHTNYGVTOGSQFQVIBSPAJABDXPDWKKJTELPWERYTCSHHHQCGRPEGLVQLILJHOUYWFTLHAWQVKBULICNCWHEFZOUKSOBBZNBPCZBYLRTOOWDDVAGCJAVPMUIQKYXOYHRDQKCSSMACAUFENWOWADQ");
    const char tmp_msg_0[] = {126, 34, 94, 117, 100, -108, 59, -90, -92, -11, -22, -57, -118, -37, -2, 48, 50, 86, 29, -127, -114, -109, -60, 115, 38, 43, -85, 64, -27, -128, 120, -58, 32, -90, -22, 95, -23, 108, 116, -4, -14, -18, 29, -4, -63, -43, -116, -46, 99, -57, 93, -52, -55, 48, 51, -58, 36, -73, -32, 32, -63, 61, 108, 25, 77, -116, 53, -98, -75, -58, -110, -87, -46, 104, -10, -15, -91, -108, -41, -34, -56, 70, -41, 81, -87, -85, 12, -108, -12, -104, 89, -58, 126, 9, -25, -90, -14, -85, -22, -118, -11, -64, -43, -62, 102, -86, -6, 124, -118, 45, -84, -27, -67, 103, -10, -45, 84, -42, 35, -113, 10, 121, 120, 48, -49, -48, -63, -29, -24, 103, -15, 2, 90, 82, 113, 33, 43, -24, -5, -93, 71, 52, 68, -98, -29, -54, 94, -18, 78, 121, -59, 108, -26, -108, -45, -83, 5, -69, 125, -34, 53, 12, -114, 4, 38, 13, -22, -26, 112, -128, 85, -115, -107, 14, 20, 6, 120, 23, 26, -48, 78, -12, -77, -93, 59, 55, -120, -29, 35, 26, -70, -75, 41, -81, -77, -5, -67, -98, 95, 69, -28, 92, 90, 40, 52, 59, 111, 116, -36, -67, 42, -14, 3, -28, -88, 55, 11, -56, -21, -103, 126, -32, 115, 40, 41, 24, 23, 25, 33, 75, 46, -85, 124, 39, 20, -121, -85, -95, -107, 42, -24, -59, 31, -5};
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
    msg.setTimeStamp(0.14525748892093648);
    msg.setSource(6807U);
    msg.setSourceEntity(128U);
    msg.setDestination(19705U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.9720851175107151);
    msg.setSource(13600U);
    msg.setSourceEntity(183U);
    msg.setDestination(572U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.784215860367854);
    msg.setSource(10911U);
    msg.setSourceEntity(9U);
    msg.setDestination(26180U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.9708185730092247);
    msg.setSource(45625U);
    msg.setSourceEntity(107U);
    msg.setDestination(10677U);
    msg.setDestinationEntity(81U);
    msg.camid = 32U;
    msg.x = 26332U;
    msg.y = 43804U;

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
    msg.setTimeStamp(0.7755953994205622);
    msg.setSource(5879U);
    msg.setSourceEntity(87U);
    msg.setDestination(33454U);
    msg.setDestinationEntity(168U);
    msg.camid = 212U;
    msg.x = 54588U;
    msg.y = 25315U;

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
    msg.setTimeStamp(0.10193378072764891);
    msg.setSource(39082U);
    msg.setSourceEntity(123U);
    msg.setDestination(62794U);
    msg.setDestinationEntity(250U);
    msg.camid = 186U;
    msg.x = 62452U;
    msg.y = 42201U;

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
    msg.setTimeStamp(0.32332714198505474);
    msg.setSource(24091U);
    msg.setSourceEntity(88U);
    msg.setDestination(23531U);
    msg.setDestinationEntity(110U);
    msg.camid = 111U;
    msg.x = 56657U;
    msg.y = 37900U;

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
    msg.setTimeStamp(0.10796757911994437);
    msg.setSource(1364U);
    msg.setSourceEntity(47U);
    msg.setDestination(11834U);
    msg.setDestinationEntity(23U);
    msg.camid = 241U;
    msg.x = 10840U;
    msg.y = 36774U;

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
    msg.setTimeStamp(0.5066532920690388);
    msg.setSource(53182U);
    msg.setSourceEntity(75U);
    msg.setDestination(24037U);
    msg.setDestinationEntity(158U);
    msg.camid = 230U;
    msg.x = 29423U;
    msg.y = 60294U;

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
    msg.setTimeStamp(0.07129997750239958);
    msg.setSource(5983U);
    msg.setSourceEntity(239U);
    msg.setDestination(55283U);
    msg.setDestinationEntity(118U);
    msg.tracking = 102U;
    msg.lat = 0.231398740855286;
    msg.lon = 0.2787239240309515;
    msg.x = 0.05399643612755489;
    msg.y = 0.5155421895460722;
    msg.z = 0.45807891368820086;

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
    msg.setTimeStamp(0.19670475663883447);
    msg.setSource(43874U);
    msg.setSourceEntity(4U);
    msg.setDestination(61737U);
    msg.setDestinationEntity(201U);
    msg.tracking = 208U;
    msg.lat = 0.4236616259388275;
    msg.lon = 0.08332285538946338;
    msg.x = 0.40538163338523436;
    msg.y = 0.3231642693020268;
    msg.z = 0.21632735079148102;

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
    msg.setTimeStamp(0.734445909818795);
    msg.setSource(31807U);
    msg.setSourceEntity(205U);
    msg.setDestination(7183U);
    msg.setDestinationEntity(157U);
    msg.tracking = 208U;
    msg.lat = 0.662229158080561;
    msg.lon = 0.7046664667913417;
    msg.x = 0.4215580663253885;
    msg.y = 0.5658223746248684;
    msg.z = 0.3740330331612569;

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
    msg.setTimeStamp(0.7665583006723433);
    msg.setSource(5249U);
    msg.setSourceEntity(41U);
    msg.setDestination(28899U);
    msg.setDestinationEntity(238U);
    msg.target.assign("JFIYLNUTCZDSRTAQOUKHQZPOXKFDMVANRKLHORCPVCYCOGIWYMHIOWPITIFGPSNBGUUYLHWWFLYPGLPQYHCXGBORGTSMZSMBAXBDYBVSXLLEXEQDJJHAFUZTDFOURTGFBEFBAJXZHMABZENXRCQSSVYPAFJPEMK");
    msg.lbearing = 0.42266729337368314;
    msg.lelevation = 0.20434662885270194;
    msg.bearing = 0.3884936670356439;
    msg.elevation = 0.6234125956155002;
    msg.phi = 0.7792855431388319;
    msg.theta = 0.23658209966681853;
    msg.psi = 0.4183398005614539;
    msg.accuracy = 0.721526128918305;

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
    msg.setTimeStamp(0.4008516393289657);
    msg.setSource(22565U);
    msg.setSourceEntity(119U);
    msg.setDestination(2025U);
    msg.setDestinationEntity(36U);
    msg.target.assign("TXNWNHQQMOAVCODEIEIGEEQBAJPOPARAMELXSUBAIIKEZCDUZYWYFVFANGRPLXQHWIZDMZOMDITYDEJWHNEVSDVRSAMUXPHVVZTNYOYCVMSANQGOPTJBLXFBTKSKOPL");
    msg.lbearing = 0.8353121026883351;
    msg.lelevation = 0.0968493414683057;
    msg.bearing = 0.9831705857640074;
    msg.elevation = 0.41306111794733424;
    msg.phi = 0.6542262877627831;
    msg.theta = 0.9704879668211122;
    msg.psi = 0.6767062125531718;
    msg.accuracy = 0.3965471597264444;

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
    msg.setTimeStamp(0.007593044905748747);
    msg.setSource(3589U);
    msg.setSourceEntity(52U);
    msg.setDestination(27996U);
    msg.setDestinationEntity(204U);
    msg.target.assign("PRJYVSQBRJDBWSEUTLKMRKBWBBHVBQYYUFZTUOOAESHASNQJROJTSCOKSICGDR");
    msg.lbearing = 0.41559353074664007;
    msg.lelevation = 0.9382628644097608;
    msg.bearing = 0.8060047984755073;
    msg.elevation = 0.8823737412973649;
    msg.phi = 0.2534173960614381;
    msg.theta = 0.07962283929148872;
    msg.psi = 0.5584509515974689;
    msg.accuracy = 0.12705321297958416;

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
    msg.setTimeStamp(0.8059929347471865);
    msg.setSource(47040U);
    msg.setSourceEntity(124U);
    msg.setDestination(45669U);
    msg.setDestinationEntity(56U);
    msg.target.assign("LNHSKOXIVWERPPMYJUPWFXNVTYKHVRPZTRXIKZJOOPB");
    msg.x = 0.4341521595169753;
    msg.y = 0.8041401894369418;
    msg.z = 0.06564024636364496;
    msg.n = 0.6580036314989889;
    msg.e = 0.06591480789405846;
    msg.d = 0.43924269138365835;
    msg.phi = 0.1933013076152611;
    msg.theta = 0.2140277785734368;
    msg.psi = 0.4429350299141165;
    msg.accuracy = 0.5303552133163003;

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
    msg.setTimeStamp(0.573927289287716);
    msg.setSource(59295U);
    msg.setSourceEntity(202U);
    msg.setDestination(59033U);
    msg.setDestinationEntity(234U);
    msg.target.assign("UTKVSPSTIDFMSPGANURXJYNYLFLFALQDXLYZNNNKKJIIXKEWLBUYPFQEMXSDEKVQOOAAGUKRECWVXRCYBG");
    msg.x = 0.9195894593078126;
    msg.y = 0.21056790215407029;
    msg.z = 0.863137761210246;
    msg.n = 0.46865362715549463;
    msg.e = 0.37376412202591613;
    msg.d = 0.4558052849880302;
    msg.phi = 0.8049760499360278;
    msg.theta = 0.31431469246747834;
    msg.psi = 0.25675869558372677;
    msg.accuracy = 0.849078429097483;

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
    msg.setTimeStamp(0.9379861084210502);
    msg.setSource(53128U);
    msg.setSourceEntity(176U);
    msg.setDestination(13543U);
    msg.setDestinationEntity(43U);
    msg.target.assign("HZXGIGNQOIXAJBCORKKWPM");
    msg.x = 0.6136134086680237;
    msg.y = 0.14899057209851274;
    msg.z = 0.5771093561666581;
    msg.n = 0.7838010230105816;
    msg.e = 0.14109622477243577;
    msg.d = 0.7920647897764583;
    msg.phi = 0.017080296915458426;
    msg.theta = 0.8704182810631538;
    msg.psi = 0.29698575303229835;
    msg.accuracy = 0.4925544186492976;

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
    msg.setTimeStamp(0.8072995199063275);
    msg.setSource(37693U);
    msg.setSourceEntity(110U);
    msg.setDestination(47208U);
    msg.setDestinationEntity(179U);
    msg.target.assign("ULKMJZAHQDBNFURQEZDHRUOSQZJEXTGPSGGUZHYXGEBFMZHDBXEWVOJZZLBSABOPFYMOIVQSVLGCPQNQU");
    msg.lat = 0.8856829015095821;
    msg.lon = 0.6541564617683464;
    msg.z_units = 45U;
    msg.z = 0.6475093336928596;
    msg.accuracy = 0.08704587942745212;

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
    msg.setTimeStamp(0.0641767180548023);
    msg.setSource(474U);
    msg.setSourceEntity(15U);
    msg.setDestination(27016U);
    msg.setDestinationEntity(7U);
    msg.target.assign("EMLTXJXXVDJUNOBPGOCKGVKMIBALZMSQXLFRINWICFACQIDFILPKYGEULYLZVFAQAJIEFZYPOIMDNYNPWACBMCXHOAVTPGHETFHKXWDIUJNRTEMRYFYZDHJRWZPNZTTSWVRULSUJTKWITRCVQUYFROEBBTCJNOLYJSG");
    msg.lat = 0.4570787770342961;
    msg.lon = 0.4392415168804261;
    msg.z_units = 236U;
    msg.z = 0.45730743003176655;
    msg.accuracy = 0.3149630342807406;

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
    msg.setTimeStamp(0.4505339201677321);
    msg.setSource(32235U);
    msg.setSourceEntity(73U);
    msg.setDestination(60243U);
    msg.setDestinationEntity(39U);
    msg.target.assign("IJMYUBMDEARGVFKDPCXKMCMJORLWKPYATEXEQSTPUUPAOTMIJKPBPALRTIUHFZRDHILTHRNWBZYASCSGWTVUEHMPSVGBKWHZQXSOCBFHRRUVPRLFNJZOBOMCXGQYIUOMGWIKGNQPWUUVAQCVYAZXYBRIGWYYVDEKJCLBCSVWETZOONJMEDHAWNLJXYMFFJDASHLPXDGDQVZFGIBYVNKFGOSJZFZXQUJKENQTXENTFHD");
    msg.lat = 0.3990470656150673;
    msg.lon = 0.6088574440289002;
    msg.z_units = 64U;
    msg.z = 0.2905785280861731;
    msg.accuracy = 0.706582022355389;

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
    msg.setTimeStamp(0.32460431380358723);
    msg.setSource(47256U);
    msg.setSourceEntity(186U);
    msg.setDestination(4725U);
    msg.setDestinationEntity(187U);
    msg.name.assign("FZCTWLSKNJFANTLIWOXG");
    msg.lat = 0.037571591401300175;
    msg.lon = 0.2948405430829071;
    msg.z = 0.8175332577137387;
    msg.z_units = 121U;

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
    msg.setTimeStamp(0.3972789731756159);
    msg.setSource(59017U);
    msg.setSourceEntity(227U);
    msg.setDestination(12337U);
    msg.setDestinationEntity(96U);
    msg.name.assign("TVMVTFJFRFKYQBUHYXYKPNSYRLZIMDWWPQMIZSNGSRJJGXQAACEOIXEFJPMZWDPAVBE");
    msg.lat = 0.5522069181863251;
    msg.lon = 0.9592638388371421;
    msg.z = 0.6802404475051236;
    msg.z_units = 0U;

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
    msg.setTimeStamp(0.9854875757163051);
    msg.setSource(362U);
    msg.setSourceEntity(97U);
    msg.setDestination(62162U);
    msg.setDestinationEntity(54U);
    msg.name.assign("TKEYVLIWSODTZIOLNKGRGPGXJPVWCTUMEOXBOAMBPHDOLZGNUZIHBKWAPBIGPQJGSQFTEZDSKIATDDSYWSRTCFEYKWJWKMHGOMVRRCYXN");
    msg.lat = 0.1288189272091893;
    msg.lon = 0.3995398779499135;
    msg.z = 0.9003824740191536;
    msg.z_units = 241U;

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
    msg.setTimeStamp(0.7710717588624155);
    msg.setSource(1173U);
    msg.setSourceEntity(87U);
    msg.setDestination(24028U);
    msg.setDestinationEntity(48U);
    msg.op = 142U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("YIIQKPTKYFPZECUJRLSPFJURWOQAPIHMRAICPZOABONZHCADAHXJVGEVRQBBAFGVGRFSVCMXVENSPNEIHWBTKLEZSVAWZTFYHVVSACTHXYDEGLNYWNHPIZGWKCXGUN");
    tmp_msg_0.lat = 0.3054016046805903;
    tmp_msg_0.lon = 0.3022987372578211;
    tmp_msg_0.z = 0.8418545052072847;
    tmp_msg_0.z_units = 79U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.1368791017168257);
    msg.setSource(3736U);
    msg.setSourceEntity(140U);
    msg.setDestination(8100U);
    msg.setDestinationEntity(134U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.2542686656469164);
    msg.setSource(41337U);
    msg.setSourceEntity(128U);
    msg.setDestination(64347U);
    msg.setDestinationEntity(116U);
    msg.op = 242U;

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
    msg.setTimeStamp(0.7815813709273904);
    msg.setSource(37845U);
    msg.setSourceEntity(233U);
    msg.setDestination(23447U);
    msg.setDestinationEntity(28U);
    msg.value = 0.4507096783214807;
    msg.type = 114U;

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
    msg.setTimeStamp(0.9434351377743045);
    msg.setSource(35162U);
    msg.setSourceEntity(173U);
    msg.setDestination(52844U);
    msg.setDestinationEntity(87U);
    msg.value = 0.4797273114493047;
    msg.type = 89U;

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
    msg.setTimeStamp(0.9331021131398135);
    msg.setSource(31510U);
    msg.setSourceEntity(77U);
    msg.setDestination(15348U);
    msg.setDestinationEntity(26U);
    msg.value = 0.34149812797014445;
    msg.type = 31U;

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
    msg.setTimeStamp(0.6801438662946868);
    msg.setSource(13702U);
    msg.setSourceEntity(205U);
    msg.setDestination(54140U);
    msg.setDestinationEntity(154U);
    msg.value = 0.3145693621654877;

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
    msg.setTimeStamp(0.09103362299901896);
    msg.setSource(24763U);
    msg.setSourceEntity(202U);
    msg.setDestination(9659U);
    msg.setDestinationEntity(4U);
    msg.value = 0.5869036883751936;

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
    msg.setTimeStamp(0.31689994369022456);
    msg.setSource(10426U);
    msg.setSourceEntity(43U);
    msg.setDestination(56383U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8190483312584093;

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
    msg.setTimeStamp(0.08953796273772197);
    msg.setSource(1738U);
    msg.setSourceEntity(54U);
    msg.setDestination(6937U);
    msg.setDestinationEntity(148U);
    msg.timestamp_last_service = 0.11938148562169204;
    msg.time_next_service = 0.9448963018803537;
    msg.time_motor_next_service = 0.726844477563891;
    msg.time_idle_ground = 0.9991582995920043;
    msg.time_idle_air = 0.6145151471555574;
    msg.time_idle_water = 0.016681613417870667;
    msg.time_idle_underwater = 0.0794400816086488;
    msg.time_idle_unknown = 0.31370511681391733;
    msg.time_motor_ground = 0.010873256698370248;
    msg.time_motor_air = 0.3013436684948386;
    msg.time_motor_water = 0.9749236819332301;
    msg.time_motor_underwater = 0.7203095107279675;
    msg.time_motor_unknown = 0.6414032631573245;
    msg.rpm_min = -18470;
    msg.rpm_max = 4416;
    msg.depth_max = 0.05997539595110968;

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
    msg.setTimeStamp(0.11418486864796673);
    msg.setSource(56126U);
    msg.setSourceEntity(240U);
    msg.setDestination(32107U);
    msg.setDestinationEntity(247U);
    msg.timestamp_last_service = 0.3088958100179636;
    msg.time_next_service = 0.06378553179319768;
    msg.time_motor_next_service = 0.3425566352882883;
    msg.time_idle_ground = 0.6939778968025913;
    msg.time_idle_air = 0.5364638925662788;
    msg.time_idle_water = 0.21351206252866373;
    msg.time_idle_underwater = 0.08151290750742124;
    msg.time_idle_unknown = 0.9945505346165915;
    msg.time_motor_ground = 0.16223676429735068;
    msg.time_motor_air = 0.7487587768360312;
    msg.time_motor_water = 0.5127425724123136;
    msg.time_motor_underwater = 0.953803938485839;
    msg.time_motor_unknown = 0.9789414143730957;
    msg.rpm_min = -30053;
    msg.rpm_max = -3948;
    msg.depth_max = 0.6575013020768423;

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
    msg.setTimeStamp(0.016308663176803795);
    msg.setSource(26207U);
    msg.setSourceEntity(109U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(110U);
    msg.timestamp_last_service = 0.3150144038868391;
    msg.time_next_service = 0.2978055609964394;
    msg.time_motor_next_service = 0.5377847668945622;
    msg.time_idle_ground = 0.6798132341485353;
    msg.time_idle_air = 0.8030339844217592;
    msg.time_idle_water = 0.5786385519086169;
    msg.time_idle_underwater = 0.40431457979263685;
    msg.time_idle_unknown = 0.9928673649937385;
    msg.time_motor_ground = 0.935612655591967;
    msg.time_motor_air = 0.4186123868636905;
    msg.time_motor_water = 0.8053799622275066;
    msg.time_motor_underwater = 0.6946207060728407;
    msg.time_motor_unknown = 0.03756723566286524;
    msg.rpm_min = -19850;
    msg.rpm_max = 19936;
    msg.depth_max = 0.6926151247413967;

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
    msg.setTimeStamp(0.656927156337092);
    msg.setSource(35022U);
    msg.setSourceEntity(65U);
    msg.setDestination(36263U);
    msg.setDestinationEntity(67U);
    msg.severity = 21U;
    msg.text.assign("SYHMPDWWYKQUFJKZFAFKXHIAZVSCCJZPXTIMRLGLDHKXBNLMSMIXACRNSEVNRNEPSEZEMQQLSEZCJFDFYDPVEHTJHZNOIUBFULNGLGAILJYTOQVBGKYFNVEDOHVB");

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
    msg.setTimeStamp(0.9327451168359246);
    msg.setSource(21677U);
    msg.setSourceEntity(117U);
    msg.setDestination(7737U);
    msg.setDestinationEntity(68U);
    msg.severity = 8U;
    msg.text.assign("OJRLQTXOKCVZSYMAOCKIATBGNCUDLR");

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
    msg.setTimeStamp(0.8684681633341698);
    msg.setSource(55081U);
    msg.setSourceEntity(187U);
    msg.setDestination(14424U);
    msg.setDestinationEntity(56U);
    msg.severity = 138U;
    msg.text.assign("MGSZWUJILHXYDKMHRQTVCQRIQDYWAOXJLTUZRNPNDCZECZDGMOHJRSBVVFHPABPUGBKJXMCKCVPWPDRQFSTQYOVWHHDJHUXVKKYXFSNJAGGXPMLXRSMEAXWOFJYPHINZBIABSATKEYFJTBMCQUTHDQAIREDKZQLLFMZWKMGWYVBGGRWTTRBDIUEPIFJGCFLFOVISOZNECPSW");

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
    msg.setTimeStamp(0.9201663518546113);
    msg.setSource(41719U);
    msg.setSourceEntity(129U);
    msg.setDestination(39098U);
    msg.setDestinationEntity(112U);
    msg.channel = 114;
    msg.value = -1061641016;
    msg.gain = 85U;

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
    msg.setTimeStamp(0.49710527863560816);
    msg.setSource(43750U);
    msg.setSourceEntity(192U);
    msg.setDestination(931U);
    msg.setDestinationEntity(138U);
    msg.channel = -80;
    msg.value = -943879405;
    msg.gain = 212U;

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
    msg.setTimeStamp(0.28408954853830737);
    msg.setSource(12973U);
    msg.setSourceEntity(166U);
    msg.setDestination(51722U);
    msg.setDestinationEntity(138U);
    msg.channel = -81;
    msg.value = -1142329967;
    msg.gain = 176U;

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
    msg.setTimeStamp(0.7934818785434276);
    msg.setSource(39269U);
    msg.setSourceEntity(94U);
    msg.setDestination(50457U);
    msg.setDestinationEntity(135U);
    msg.ch01 = 0.6393571167094629;
    msg.ch02 = 0.44042810376980235;
    msg.ch03 = 0.11045103119421829;
    msg.ch04 = 0.16116072522997393;
    msg.ch05 = 0.21686752892875205;
    msg.ch06 = 0.020271029862913625;
    msg.ch07 = 0.6859703093813937;
    msg.ch08 = 0.13048791534223492;
    msg.ch09 = 0.462963323743805;
    msg.ch10 = 0.5067861637011952;
    msg.ch11 = 0.13809806959707482;
    msg.ch12 = 0.08150649935562704;
    msg.ch13 = 0.9334968230780452;
    msg.ch14 = 0.2859648508216679;
    msg.ch15 = 0.5928861804895651;
    msg.ch16 = 0.9013845338531128;

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
    msg.setTimeStamp(0.9564873326091448);
    msg.setSource(41362U);
    msg.setSourceEntity(63U);
    msg.setDestination(17209U);
    msg.setDestinationEntity(235U);
    msg.ch01 = 0.2345486838162576;
    msg.ch02 = 0.4338853476832454;
    msg.ch03 = 0.5480653498079802;
    msg.ch04 = 0.164005462472826;
    msg.ch05 = 0.5422190393704895;
    msg.ch06 = 0.42998104045701135;
    msg.ch07 = 0.9992540452616957;
    msg.ch08 = 0.5258122007359449;
    msg.ch09 = 0.8759331275117683;
    msg.ch10 = 0.014340386323966392;
    msg.ch11 = 0.6565488226663967;
    msg.ch12 = 0.5739528911361552;
    msg.ch13 = 0.6441825399574452;
    msg.ch14 = 0.08395788636059198;
    msg.ch15 = 0.49365337819916577;
    msg.ch16 = 0.2492146009093864;

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
    msg.setTimeStamp(0.31676278015901793);
    msg.setSource(16599U);
    msg.setSourceEntity(80U);
    msg.setDestination(47550U);
    msg.setDestinationEntity(97U);
    msg.ch01 = 0.33370032277973316;
    msg.ch02 = 0.9008049793083567;
    msg.ch03 = 0.6714248703582006;
    msg.ch04 = 0.2802553450436298;
    msg.ch05 = 0.9643641330063899;
    msg.ch06 = 0.4613387755476316;
    msg.ch07 = 0.405513337296351;
    msg.ch08 = 0.6837467127584821;
    msg.ch09 = 0.9721044980955769;
    msg.ch10 = 0.3149641103526274;
    msg.ch11 = 0.31480245876414825;
    msg.ch12 = 0.3914723818567021;
    msg.ch13 = 0.13554936005275908;
    msg.ch14 = 0.24476128740840974;
    msg.ch15 = 0.3832974465351654;
    msg.ch16 = 0.5634366516142553;

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
    IMC::FlightEvent msg;
    msg.setTimeStamp(0.7354341549678641);
    msg.setSource(37821U);
    msg.setSourceEntity(83U);
    msg.setDestination(1391U);
    msg.setDestinationEntity(131U);
    msg.type = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FlightEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FlightEvent msg;
    msg.setTimeStamp(0.84831217519416);
    msg.setSource(52542U);
    msg.setSourceEntity(29U);
    msg.setDestination(49201U);
    msg.setDestinationEntity(47U);
    msg.type = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FlightEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FlightEvent msg;
    msg.setTimeStamp(0.930292320315235);
    msg.setSource(23962U);
    msg.setSourceEntity(230U);
    msg.setDestination(51011U);
    msg.setDestinationEntity(20U);
    msg.type = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FlightEvent #2", msg == *msg_d);
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
    msg.setTimeStamp(0.2797265772345787);
    msg.setSource(52602U);
    msg.setSourceEntity(227U);
    msg.setDestination(62412U);
    msg.setDestinationEntity(43U);
    msg.value = 0.776180195996759;

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
    msg.setTimeStamp(0.416939238713838);
    msg.setSource(51762U);
    msg.setSourceEntity(215U);
    msg.setDestination(8899U);
    msg.setDestinationEntity(47U);
    msg.value = 0.9834958575966558;

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
    msg.setTimeStamp(0.1754247318575598);
    msg.setSource(56620U);
    msg.setSourceEntity(18U);
    msg.setDestination(64011U);
    msg.setDestinationEntity(214U);
    msg.value = 0.8136707851564839;

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
