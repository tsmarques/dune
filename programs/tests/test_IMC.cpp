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
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 91d7531f361c96af60273fb577b584f0                            *
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
    msg.setTimeStamp(0.10657017555872339);
    msg.setSource(34411U);
    msg.setSourceEntity(231U);
    msg.setDestination(56904U);
    msg.setDestinationEntity(214U);
    msg.state = 5U;
    msg.flags = 93U;
    msg.description.assign("FWYGBXOIKGDEAANJPQOEUTLUIVHJRVOYMPOKUYTZPLGUSNAQMRZTHWIFHFQQDEOZFZTKTRFZNNBVSCYFVKQJNJAWZCMGYMRURRCEWHPBELBHGZWSXKWQCEAJDQPHHMIPCUNEJWCSRZFVCQGGBNSXYXGAXXCLKLCRAYKLSLYVOIM");

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
    msg.setTimeStamp(0.0595234172836453);
    msg.setSource(19891U);
    msg.setSourceEntity(101U);
    msg.setDestination(28450U);
    msg.setDestinationEntity(51U);
    msg.state = 251U;
    msg.flags = 53U;
    msg.description.assign("PUSVYTUEYHBFDJCAAEEUETYHAHARLSOLQMHAZIIZLEDNXGPGHGMZDERXBOMTDQDBOQSVRYOJLZYSNHFOMWDSYIXGLIXPWLA");

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
    msg.setTimeStamp(0.1378711213595024);
    msg.setSource(925U);
    msg.setSourceEntity(140U);
    msg.setDestination(58006U);
    msg.setDestinationEntity(183U);
    msg.state = 126U;
    msg.flags = 236U;
    msg.description.assign("FBSYBNZRQQQTCDJPVBCITHO");

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
    msg.setTimeStamp(0.1298776845720162);
    msg.setSource(5979U);
    msg.setSourceEntity(183U);
    msg.setDestination(18361U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.6981725752101985);
    msg.setSource(37975U);
    msg.setSourceEntity(154U);
    msg.setDestination(58701U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.9832564363248376);
    msg.setSource(17437U);
    msg.setSourceEntity(81U);
    msg.setDestination(42557U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.6431793659372608);
    msg.setSource(59693U);
    msg.setSourceEntity(118U);
    msg.setDestination(43985U);
    msg.setDestinationEntity(148U);
    msg.id = 4U;
    msg.label.assign("HNYRAGMMHLBPAKCQNIWUDKUKGIYNIDIZKYOEITFJLPWTWXJQOVVYCGWKM");
    msg.component.assign("CSEBXERTDVKWIHDYDPCHNCMZXHVZEZKKXZIXNFSKLYXFSGQSBFLRURZRNJOONRKAGMCUWCEYEVVOSOVQBFPLPVMPLUJWHJCUMYGYRWCKHZEAUMEXQGIFGACXTZBTYASQLDQXVVQELUBLIPCYMTAQUIRTDJZQUXSUZIQZLGOTOMFPHEEKJBNYGJJKDIYADUAGITMSHDOARDPCNDORFKMXJWHWPHTJFWTKATOA");
    msg.act_time = 28130U;
    msg.deact_time = 38331U;

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
    msg.setTimeStamp(0.3908047896354815);
    msg.setSource(25562U);
    msg.setSourceEntity(72U);
    msg.setDestination(4068U);
    msg.setDestinationEntity(229U);
    msg.id = 171U;
    msg.label.assign("DVFPMZTFDPHDNGNQKSTZUHJECBVHWRILDYSFOISXSDYIZBRGTEUFULJBOAREGDAIPZRYZEQJBQGDCHOEWNFKNWMBGTAAGQJXWTSEMOUHKIYCQEPYXJXPCXMVENATYUKUIFKQICZRKQARMVMNRLWXHEERJWNCOVYRSFPBUSXPKIYWWPTDFGFVXUFQSSJTHLVOHBCMLLKOCXVYTYZUANWZH");
    msg.component.assign("GCXJMOJJSADCJRTIVPZDPKBNOPNHYQLUOXFGBSWEAGDNCNADAXNIXLKSPMRTAVGRIHCLHPVQIGYIROLGEIYFCTGDLQUYVZSKEJQMQWRVMLUCLCODWBYWOXGLHYUZTBRRWIBZHMFAFDJWN");
    msg.act_time = 51655U;
    msg.deact_time = 28396U;

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
    msg.setTimeStamp(0.6278759627581583);
    msg.setSource(64027U);
    msg.setSourceEntity(165U);
    msg.setDestination(38712U);
    msg.setDestinationEntity(178U);
    msg.id = 253U;
    msg.label.assign("WSDFIYEUPXTMVMYBHUHNYVTSIXKRBWKRIGJAFEOPGIOMLBACJPKAFCCCDQVKKLUICJNPMZJSPLZGUZJWWOVMYAKCISXSSZSXXVRBMOKRAEXNWKHWQPLDSHLYJVKZTTLEAQNMFLJMIZCNROEXYTHEIFRJQGIBZNCTYVFQVWGEZPYOEHZRHPGDRPGNTENRDTSHPTWVYLOAXCMTQNBJLGFDBVQHXBDQWAUYGQ");
    msg.component.assign("DNCVIEKZQOTXNDWZJGLBZZCPMIPSUJRBPWQQFEEHUBDLLRGXBQKVTTGLNSTVREYHLSIBEPKFMDRJOAGJMDJVANGYLEJTPLFFPEICCUQVOASZZCMDIOAJ");
    msg.act_time = 23239U;
    msg.deact_time = 6204U;

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
    msg.setTimeStamp(0.7277959824667148);
    msg.setSource(12557U);
    msg.setSourceEntity(202U);
    msg.setDestination(34465U);
    msg.setDestinationEntity(20U);
    msg.id = 4U;

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
    msg.setTimeStamp(0.8640597183830068);
    msg.setSource(5631U);
    msg.setSourceEntity(157U);
    msg.setDestination(22140U);
    msg.setDestinationEntity(164U);
    msg.id = 83U;

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
    msg.setTimeStamp(0.7211172002882056);
    msg.setSource(31035U);
    msg.setSourceEntity(5U);
    msg.setDestination(44420U);
    msg.setDestinationEntity(136U);
    msg.id = 40U;

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
    msg.setTimeStamp(0.4830146701699479);
    msg.setSource(3126U);
    msg.setSourceEntity(184U);
    msg.setDestination(12905U);
    msg.setDestinationEntity(15U);
    msg.op = 229U;
    msg.list.assign("WFCAJAWQOKEILIXHZNLFVPWNWWIFJSJTRAUBECSLJHAQJXJYRIPHEMMAHDXNTWPYUSFLNPEVBVPNDZJNBOEDMZOLZOIGLUBGFYKXOVQGCGRSITIQAZQIBAKTSCSZVFMTPCVTXZOUCUFGVKYHVD");

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
    msg.setTimeStamp(0.7841409402298121);
    msg.setSource(8098U);
    msg.setSourceEntity(202U);
    msg.setDestination(48204U);
    msg.setDestinationEntity(43U);
    msg.op = 9U;
    msg.list.assign("NPXKQDTHEYTCVOBNUEQIKSIQYUIXLAXPGXESJXSWDDNYFFXZIHOKJOZHFZRKAWJGECGKMJUFQVJWODLBKIWTPNBXTERKUJRQAVWRNGPZFMQQVDFHWLSYNQEPOTHZETOLDTUFPHYCLWYSMEEVFXCOONTCHBSGVYAWJDIDCINMRULNGMEOIJSCKAZKNABGRCZQHVBSKLSYRIXRMPCBVHA");

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
    msg.setTimeStamp(0.6511064903628796);
    msg.setSource(56907U);
    msg.setSourceEntity(142U);
    msg.setDestination(53426U);
    msg.setDestinationEntity(14U);
    msg.op = 84U;
    msg.list.assign("QBOGQMIIERDMLBUKXWUYGJTCJBFBMKGHKCUKHBOAAVQMOFCMRPVMOSOIQHTPFKQJTHYZXJUCDUMHTRQIRHXLJZHJVTEAINCYUZINUYRKPNGOYZKYIUNZAXCJMGMBJQMLVPGSDXOIOBSISGDSWFTTEAWRNLEPWQTWJTL");

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
    msg.setTimeStamp(0.3280021221237578);
    msg.setSource(914U);
    msg.setSourceEntity(254U);
    msg.setDestination(21341U);
    msg.setDestinationEntity(227U);
    msg.value = 214U;

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
    msg.setTimeStamp(0.9939535694444928);
    msg.setSource(50753U);
    msg.setSourceEntity(160U);
    msg.setDestination(64719U);
    msg.setDestinationEntity(51U);
    msg.value = 118U;

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
    msg.setTimeStamp(0.2997377570628095);
    msg.setSource(57672U);
    msg.setSourceEntity(79U);
    msg.setDestination(32217U);
    msg.setDestinationEntity(51U);
    msg.value = 224U;

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
    msg.setTimeStamp(0.3330636834247497);
    msg.setSource(50612U);
    msg.setSourceEntity(87U);
    msg.setDestination(29809U);
    msg.setDestinationEntity(163U);
    msg.consumer.assign("KMXTFJBMAKFFRLBWXZNKKIUQHKDYHZXHVWIGTEBMGIVLSMSNYDBWPTOACXUNDLPQQDBJZZRAPTCINEJORDUJMMLGULBVLCGVOQLISATYWV");
    msg.message_id = 57334U;

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
    msg.setTimeStamp(0.6153001893268195);
    msg.setSource(24361U);
    msg.setSourceEntity(15U);
    msg.setDestination(38349U);
    msg.setDestinationEntity(141U);
    msg.consumer.assign("VWAUVGBGSAWJIRIUMSLKEBBNBQIJRUQYJVUZBTRPTYMQNMZUFNYGTUAJN");
    msg.message_id = 64013U;

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
    msg.setTimeStamp(0.2903609734893353);
    msg.setSource(65084U);
    msg.setSourceEntity(246U);
    msg.setDestination(58267U);
    msg.setDestinationEntity(36U);
    msg.consumer.assign("HWGLYSLBODMXWEUAFDTZQNQTANDECSRPZJPMFMOETZPNPWQNVRIBVKP");
    msg.message_id = 11131U;

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
    msg.setTimeStamp(0.2527911281571572);
    msg.setSource(1264U);
    msg.setSourceEntity(164U);
    msg.setDestination(59756U);
    msg.setDestinationEntity(132U);
    msg.type = 17U;

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
    msg.setTimeStamp(0.1070116555248577);
    msg.setSource(7010U);
    msg.setSourceEntity(20U);
    msg.setDestination(13778U);
    msg.setDestinationEntity(250U);
    msg.type = 243U;

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
    msg.setTimeStamp(0.867160249834228);
    msg.setSource(58369U);
    msg.setSourceEntity(148U);
    msg.setDestination(6335U);
    msg.setDestinationEntity(245U);
    msg.type = 118U;

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
    msg.setTimeStamp(0.4398091344981365);
    msg.setSource(25512U);
    msg.setSourceEntity(128U);
    msg.setDestination(32580U);
    msg.setDestinationEntity(107U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.2257670903952479);
    msg.setSource(60336U);
    msg.setSourceEntity(54U);
    msg.setDestination(61175U);
    msg.setDestinationEntity(174U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.7070051362955828);
    msg.setSource(49906U);
    msg.setSourceEntity(59U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(164U);
    msg.op = 239U;

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
    msg.setTimeStamp(0.41591993153638207);
    msg.setSource(27983U);
    msg.setSourceEntity(193U);
    msg.setDestination(24760U);
    msg.setDestinationEntity(142U);
    msg.total_steps = 124U;
    msg.step_number = 28U;
    msg.step.assign("XKQRNDZQSWDATFNMEHBKAVSWGCNMCSTSUPYGMYBFOGQOCSEOPLXJXRARVPQUSLRZJEHYQDESGTTRYFPFIHDWDDUJBKPVBTZKCYHKTZBFCPXAEZBSMTOLEZCXXGNPWXACINJPJJWALIOBVMNPYKULHGKSUHIYBAIJDIEYNOYLWCZGFUQWNCDWXLMORHKVQRELEKVRMAUMVBTUHONZIFIFXOLVWRBLMJSFVUAU");
    msg.flags = 223U;

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
    msg.setTimeStamp(0.7505982242457669);
    msg.setSource(60857U);
    msg.setSourceEntity(7U);
    msg.setDestination(3262U);
    msg.setDestinationEntity(176U);
    msg.total_steps = 168U;
    msg.step_number = 167U;
    msg.step.assign("YDJVSPGXHIDKIYZOXSSNYOLTPXQTGHQFLJVORKCTGJDROQVSHFMCZBFWLEMIRZPSDOBGECYVLTMCTYBJJXGIPJZZNTFVEIPZZMBXSIAPQAVETOWRNLVSXGMAHRZFABPPDECSWYSVDFLJUQUQOBREEAUH");
    msg.flags = 124U;

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
    msg.setTimeStamp(0.012872290871373426);
    msg.setSource(62571U);
    msg.setSourceEntity(186U);
    msg.setDestination(3575U);
    msg.setDestinationEntity(175U);
    msg.total_steps = 114U;
    msg.step_number = 77U;
    msg.step.assign("OTGQEUTDVMGESPKUPCANQMEGMXQATCZRXSPUTRVOGDMPDCTCGJLBDSIUWHFCBYSQMODDYHGAZFVBPQWCYEAERCCHPIKWUEHFZLYLZAMKJVOROTEFANTQXDCNXPOWNBCGMDZSKFYSINJJZHZZHIZQROPBYAUXOKTYQKAOUJIGNRBKUJ");
    msg.flags = 80U;

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
    msg.setTimeStamp(0.022971191539527758);
    msg.setSource(28770U);
    msg.setSourceEntity(185U);
    msg.setDestination(10615U);
    msg.setDestinationEntity(158U);
    msg.state = 169U;
    msg.error.assign("DBASQRNRPPMYHBJBHNBKNQXWBGIHOQKSHGNCECFWWWKXYCUAFEJQKFFBKXUSJJTCSDDJREEMUADUSPGBKYJMXTODAYBGEOMTYLJFLQFPRTVYPALIZTLVUWAGNRTWPASSQAUMHKKZTOUIEOISZCCHIDYQFQNDYOXWDVIILEOLWJHDEXVHZNPFLEURGGRGXKXDOWZLVRVPVPBAZVUOTFVMRCRNZWIGNXZGKJMQUHZYCMMOHSTZAICCMBXITV");

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
    msg.setTimeStamp(0.6129876256369063);
    msg.setSource(29893U);
    msg.setSourceEntity(50U);
    msg.setDestination(59538U);
    msg.setDestinationEntity(112U);
    msg.state = 158U;
    msg.error.assign("ZTRNEXLLBDOKKIKBFFQSHADOMHQLTZCPNKZMJZBWPZIYARVSVPOCQTJWQAOKHFXEAQHALQLWSOHUZRITLLEAOYGVYCAXPXVRJTEOCPXNSLONOCXECFGDUOSMWIJXRDVUUWDRGVRINCMNJJPMVYUTXJZMSRMGPGKBFIJNCRTZYXMXCCUIPIBVGQJLHAEAJLYVKM");

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
    msg.setTimeStamp(0.09603887397723798);
    msg.setSource(55604U);
    msg.setSourceEntity(192U);
    msg.setDestination(37756U);
    msg.setDestinationEntity(219U);
    msg.state = 148U;
    msg.error.assign("SCZPRYMTTGWD");

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
    msg.setTimeStamp(0.03374111657935863);
    msg.setSource(8805U);
    msg.setSourceEntity(15U);
    msg.setDestination(50047U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.14920905514937677);
    msg.setSource(31931U);
    msg.setSourceEntity(141U);
    msg.setDestination(36770U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.2963320876363764);
    msg.setSource(63229U);
    msg.setSourceEntity(189U);
    msg.setDestination(43969U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.6489782465266101);
    msg.setSource(43820U);
    msg.setSourceEntity(185U);
    msg.setDestination(44111U);
    msg.setDestinationEntity(23U);
    msg.op = 0U;
    msg.speed_min = 0.7312792109841333;
    msg.speed_max = 0.517672176454191;
    msg.long_accel = 0.7733630702582525;
    msg.alt_max_msl = 0.23698001421591464;
    msg.dive_fraction_max = 0.2242731629339556;
    msg.climb_fraction_max = 0.7632564618412967;
    msg.bank_max = 0.3440436425725477;
    msg.p_max = 0.41350589975911856;
    msg.pitch_min = 0.3884802039339854;
    msg.pitch_max = 0.8473364899717946;
    msg.q_max = 0.3542539063300242;
    msg.g_min = 0.45822393097529335;
    msg.g_max = 0.2737259387398683;
    msg.g_lat_max = 0.8199887550858722;
    msg.rpm_min = 0.3945267257181554;
    msg.rpm_max = 0.5781754610356855;
    msg.rpm_rate_max = 0.43833791205595374;

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
    msg.setTimeStamp(0.42795320749961063);
    msg.setSource(49075U);
    msg.setSourceEntity(108U);
    msg.setDestination(48939U);
    msg.setDestinationEntity(63U);
    msg.op = 89U;
    msg.speed_min = 0.33348058574349027;
    msg.speed_max = 0.06347289317438021;
    msg.long_accel = 0.9956023951588209;
    msg.alt_max_msl = 0.6822823234468516;
    msg.dive_fraction_max = 0.5225720137639077;
    msg.climb_fraction_max = 0.8062720383583136;
    msg.bank_max = 0.6329082013618287;
    msg.p_max = 0.40959713181275004;
    msg.pitch_min = 0.37188075460227066;
    msg.pitch_max = 0.35292140072941136;
    msg.q_max = 0.008077690281268368;
    msg.g_min = 0.20537414471698623;
    msg.g_max = 0.4655935555705031;
    msg.g_lat_max = 0.4274522448535728;
    msg.rpm_min = 0.6052322568340976;
    msg.rpm_max = 0.05805660283206504;
    msg.rpm_rate_max = 0.0493847176701373;

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
    msg.setTimeStamp(0.0017402165483174636);
    msg.setSource(31153U);
    msg.setSourceEntity(189U);
    msg.setDestination(44747U);
    msg.setDestinationEntity(177U);
    msg.op = 96U;
    msg.speed_min = 0.716210441592077;
    msg.speed_max = 0.0706922506090848;
    msg.long_accel = 0.6275278103100799;
    msg.alt_max_msl = 0.22969760598024047;
    msg.dive_fraction_max = 0.6616500170990973;
    msg.climb_fraction_max = 0.7840127637716638;
    msg.bank_max = 0.09228196747131967;
    msg.p_max = 0.30089060669672674;
    msg.pitch_min = 0.7755743330101644;
    msg.pitch_max = 0.08071242980942217;
    msg.q_max = 0.9903870000071832;
    msg.g_min = 0.6519454005912707;
    msg.g_max = 0.03659487883650836;
    msg.g_lat_max = 0.733421929926898;
    msg.rpm_min = 0.5443158447490397;
    msg.rpm_max = 0.7421466010845438;
    msg.rpm_rate_max = 0.5057938685870139;

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
    msg.setTimeStamp(0.9067966753635965);
    msg.setSource(13836U);
    msg.setSourceEntity(135U);
    msg.setDestination(37923U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.2695128385978275);
    msg.setSource(42275U);
    msg.setSourceEntity(35U);
    msg.setDestination(24119U);
    msg.setDestinationEntity(170U);
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 78U;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.4238332335776369);
    msg.setSource(65098U);
    msg.setSourceEntity(103U);
    msg.setDestination(1918U);
    msg.setDestinationEntity(37U);
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 149U;
    tmp_msg_0.quality = 197U;
    tmp_msg_0.reps = 69U;
    tmp_msg_0.tsize = 126U;
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
    msg.setTimeStamp(0.49011002848993634);
    msg.setSource(64791U);
    msg.setSourceEntity(59U);
    msg.setDestination(60591U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.11820779013618787;
    msg.lon = 0.10591736968150023;
    msg.height = 0.6054439541541651;
    msg.x = 0.6544883557374327;
    msg.y = 0.5815658411561762;
    msg.z = 0.6830409207880489;
    msg.phi = 0.6470053481423111;
    msg.theta = 0.9708528594471215;
    msg.psi = 0.6352146691291455;
    msg.u = 0.9108124851008503;
    msg.v = 0.5011934645461658;
    msg.w = 0.6983078161385851;
    msg.p = 0.7895707723369932;
    msg.q = 0.9448602702365713;
    msg.r = 0.04754362973229598;
    msg.svx = 0.40545525868385424;
    msg.svy = 0.7655193374242013;
    msg.svz = 0.3825493715126874;

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
    msg.setTimeStamp(0.5328500862344215);
    msg.setSource(56551U);
    msg.setSourceEntity(13U);
    msg.setDestination(12757U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.21318429613783907;
    msg.lon = 0.17453205358127466;
    msg.height = 0.936122939895447;
    msg.x = 0.5337530579354839;
    msg.y = 0.7816697309573255;
    msg.z = 0.012583263841687509;
    msg.phi = 0.49326350545690223;
    msg.theta = 0.36594889126303287;
    msg.psi = 0.386630951026648;
    msg.u = 0.9198529408438636;
    msg.v = 0.810862944549926;
    msg.w = 0.8679620981468454;
    msg.p = 0.4726849195234397;
    msg.q = 0.5775465251451901;
    msg.r = 0.607057766337205;
    msg.svx = 0.3227610241395654;
    msg.svy = 0.05870733254618621;
    msg.svz = 0.9495544350664458;

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
    msg.setTimeStamp(0.024446921977700597);
    msg.setSource(31895U);
    msg.setSourceEntity(119U);
    msg.setDestination(36172U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.1911035587632287;
    msg.lon = 0.5065590289437069;
    msg.height = 0.5230946249420851;
    msg.x = 0.4911438107734476;
    msg.y = 0.3993694854196814;
    msg.z = 0.25357131405232736;
    msg.phi = 0.8557899248057486;
    msg.theta = 0.05433898440402585;
    msg.psi = 0.6620760192179516;
    msg.u = 0.6631784417126281;
    msg.v = 0.5750469866710265;
    msg.w = 0.9180137064555779;
    msg.p = 0.13050882265528818;
    msg.q = 0.955398315793703;
    msg.r = 0.14677894329589347;
    msg.svx = 0.6853398057148635;
    msg.svy = 0.37995374641994084;
    msg.svz = 0.3426769142817442;

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
    msg.setTimeStamp(0.8627914292292572);
    msg.setSource(25230U);
    msg.setSourceEntity(155U);
    msg.setDestination(13197U);
    msg.setDestinationEntity(216U);
    msg.op = 47U;
    msg.entities.assign("QKQHZVRKFLOZBJGXFQLUIWSNUJANJDFYGVEHRJLSFHDRGWUTYIZZTNPCGXIRPKWEAPKMHBJVQALMBKYIHJMYHFLYECBYOUVZPHKOAYBTGANNQVMDOIHBWFJGNDPCFZQCTGVFBCRMUDRCCJBIONRIWQXURWEKZCPNFSLAROMTJSBDOEOYPGEQTKJXXNCEXSVAIAMISTIATWPDQPZWOLCOXDLQLRSMD");

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
    msg.setTimeStamp(0.7908124578359588);
    msg.setSource(55932U);
    msg.setSourceEntity(44U);
    msg.setDestination(7680U);
    msg.setDestinationEntity(140U);
    msg.op = 185U;
    msg.entities.assign("DILHLECOPXQZPXIELHRWJYCVQQCMPKMFOSZRPZHDKPKBOZIMBDPRIYIFSTNQCHSFLBNIPOBGM");

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
    msg.setTimeStamp(0.22860173910756265);
    msg.setSource(46639U);
    msg.setSourceEntity(3U);
    msg.setDestination(44808U);
    msg.setDestinationEntity(133U);
    msg.op = 171U;
    msg.entities.assign("LQDTPWJNFCVAXCJSOKCNZCHPPTAVKTMNTHXOJOWERMOOHZADECOVOAVFBBGXIARRQWXBRRMWYFEDPJFDSNIUHCSFETMTJIMFWYOALLUXENVSKK");

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
    msg.setTimeStamp(0.6117823337986906);
    msg.setSource(13810U);
    msg.setSourceEntity(68U);
    msg.setDestination(36572U);
    msg.setDestinationEntity(100U);
    msg.type = 212U;
    msg.speed = 54884U;
    const char tmp_msg_0[] = {121, 14, -41, 62, 56, 6, 96, 62, -122, 5, -19, -15, -103, -44, 100, -13, -93, 67, -74, 4, -113, 108, -108, 52, -34, 14, 57, -44, 90, -96, 20, 118, 106, -105, -54, 81, 17, 83, 122, -33, 91, 59, -127, -123, -99, 28, -47, 105, 81, 75, -105, -46, -81, 89, 96, 19, -60, -33, 36, -70, 45, -97, -111, 103, 8, 47, -26, -105, 119, -78, 38, 33, -30, -10, 62, 105, 106, -61, -49, -64, 43, 74, 78, -121, -77, 124, -51, 53, 8, 86, 116, -23, -96, 19, 40, -49, 80, 100, 54, 112, -61, -18, 57, -33, 99, -6, 115, -26, 14, -44, -10, -104, -25, 103, 56, -47, 24, 86, -5, 6, 97, -126, -78, -47, -70, -65, 47, 38, -12, 52, -109, -124, -105, -127, -60, 38, 90, -70, -103, -76, 8, -128, -105, 21, -114, 65, 70, -104, 78, 83, -109, 72, -39, -90, -22, 94, 103, 25, 105, -23, -52, 100, -1, 15, 70, 51, -66, 60, -42, 37, 17, 97, -45, -1};
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
    msg.setTimeStamp(0.18569796773059533);
    msg.setSource(36397U);
    msg.setSourceEntity(45U);
    msg.setDestination(39921U);
    msg.setDestinationEntity(216U);
    msg.type = 9U;
    msg.speed = 15629U;
    const char tmp_msg_0[] = {-35, -78, -88, -103, -107, 88, 3, 55, 7, -8, 113, 116, -36, -68, 103, -85, -99, 46, -60, -108, 104, 97, 25, 36, -88, 63, 33, -45, 124, 64, -79, 85, -52, 75, 72, 117, -17, 110, -72, -116, -103, -35, 92, -113, 42, 125, -94, 31, 53, -27, -57, -64, -121, 56, -72, 125, -57, -13, 98, 71, -77, -59, -69, -78, 58, 119, -40, -66, -37, 85, 113, 71, -46, 110, -24, 120, 74, 116, -4, 45, 5, -97, 53, 55, 39, -46, -90, 53, 35, 82, -78, 108, -40, -34, -69, -71, -113, -92, -104, 85, -102, 115, 118, -99, -73, 108, 14, -47, 104, -31, -58, 60, 27, -101, -34, 41, -35, -123, 110, 116, 124, 108, 12, 24, 69, 30, -47, -41, 59, 37, 11, -78, 10, -57, -10, -26, -46, -97, -78, 110, 104, -83, 5, -37, 8, -54, 38, -17, -33, 17, -43, -125, -16, 11, 126, -121, 48, 58, 72, -113, 50, 103, 14, 29, -96, 60, 0, 77, 105, -122, -22, -128, -55, -5, -107, -84, 45, 82, 113, -85, -79, -118, 109, -63, -94, 95, 73, 13, -82, 33, 60, -22, -92, 77, -23, -128, 103, 92, 37, -97, -6, 69, -69, 11, -52, -55, 94, 1, 121, -73, 106, 20, 111, -80, 27, -18, 71, 46, 107, -34, 43, 97, 8, 21, -107, 118};
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
    msg.setTimeStamp(0.9553283971268363);
    msg.setSource(18845U);
    msg.setSourceEntity(237U);
    msg.setDestination(7673U);
    msg.setDestinationEntity(207U);
    msg.type = 135U;
    msg.speed = 19949U;
    const char tmp_msg_0[] = {46, -12, -19, 41, 23, 22, 100, 71, -32, -56, 63, -68, -13, 37, -18, 77, -91, -84, 28, 48, 74, -72, 84, -88, 106, 40, 109, 13, -85, 31, 78, -48};
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
    msg.setTimeStamp(0.08210192435375396);
    msg.setSource(64137U);
    msg.setSourceEntity(128U);
    msg.setDestination(64598U);
    msg.setDestinationEntity(110U);
    msg.op = 230U;
    msg.tas2acc_pgain = 0.530950086444652;
    msg.bank2p_pgain = 0.6168280128798308;

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
    msg.setTimeStamp(0.11204556420646916);
    msg.setSource(48530U);
    msg.setSourceEntity(154U);
    msg.setDestination(25252U);
    msg.setDestinationEntity(232U);
    msg.op = 101U;
    msg.tas2acc_pgain = 0.2961329465690744;
    msg.bank2p_pgain = 0.23311599167355967;

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
    msg.setTimeStamp(0.7089038439024574);
    msg.setSource(54708U);
    msg.setSourceEntity(29U);
    msg.setDestination(23856U);
    msg.setDestinationEntity(146U);
    msg.op = 21U;
    msg.tas2acc_pgain = 0.20601512116975973;
    msg.bank2p_pgain = 0.2631713719885451;

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
    msg.setTimeStamp(0.9450388580791524);
    msg.setSource(4592U);
    msg.setSourceEntity(120U);
    msg.setDestination(52225U);
    msg.setDestinationEntity(112U);
    msg.available = 255546642U;
    msg.value = 226U;

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
    msg.setTimeStamp(0.6661244048990659);
    msg.setSource(59892U);
    msg.setSourceEntity(178U);
    msg.setDestination(9069U);
    msg.setDestinationEntity(208U);
    msg.available = 1774853769U;
    msg.value = 69U;

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
    msg.setTimeStamp(0.8589846670947449);
    msg.setSource(57998U);
    msg.setSourceEntity(217U);
    msg.setDestination(53016U);
    msg.setDestinationEntity(125U);
    msg.available = 797350286U;
    msg.value = 38U;

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
    msg.setTimeStamp(0.7037315410738036);
    msg.setSource(50464U);
    msg.setSourceEntity(158U);
    msg.setDestination(39320U);
    msg.setDestinationEntity(130U);
    msg.op = 198U;
    msg.snapshot.assign("WWDQKJJTNASFHWXIQODMVMURDYTDEMSXIZJLAMYUFTBCEBEQNIYWCKJAVFCCOWOFRJVPOPYTWFPWQSNBKXHESRHCCOPSNUMLNZJIAZKRHDGIZEDVGISKRRUQEJVHMWIVZFDHALYCHGLNOSDAIKFBRBAPHBYUKGVRTXOZYQYL");
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.7291409390070053);
    msg.setSource(60550U);
    msg.setSourceEntity(40U);
    msg.setDestination(2525U);
    msg.setDestinationEntity(130U);
    msg.op = 210U;
    msg.snapshot.assign("JGTMQKYWOGQ");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.9463149829072349;
    tmp_msg_0.lon = 0.5091961928227778;
    tmp_msg_0.z = 0.1902449963650622;
    tmp_msg_0.z_units = 179U;
    tmp_msg_0.speed = 0.5171239865747722;
    tmp_msg_0.speed_units = 105U;
    tmp_msg_0.abort_z = 0.12121447267136687;
    tmp_msg_0.bearing = 0.38155442267642115;
    tmp_msg_0.glide_slope = 182U;
    tmp_msg_0.glide_slope_alt = 0.37874878272338486;
    tmp_msg_0.custom.assign("RSJDIIEBGYWAHANRASLDCXVRNWQDLTBKQYKMJCEVIWCZPTUHTMKYIWETUUTLE");
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
    msg.setTimeStamp(0.6556702694249691);
    msg.setSource(18318U);
    msg.setSourceEntity(251U);
    msg.setDestination(38707U);
    msg.setDestinationEntity(253U);
    msg.op = 59U;
    msg.snapshot.assign("IBTAYTKCSXDMDVSUXHOFTNKGFRFUAFBLELOTBAMIXLIIEKMJRHKEYCLPGFAJCQOCDGZDSQJJXEZEFRJVZOSCMDHQLYQUFQGEBZGHGWVPPRLRUMIAWRIBRNLPFKBKMTWVSCIMQZAXHWNELUNAZHXTVWKEGCSXUSXQDMNHNPADPODJYCPTYSBZGVQNQ");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.893185347098034;
    tmp_msg_0.speed = 0.6639170618336685;
    tmp_msg_0.turbulence = 0.8238132508841821;
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
    msg.setTimeStamp(0.29816446736385915);
    msg.setSource(36334U);
    msg.setSourceEntity(244U);
    msg.setDestination(46818U);
    msg.setDestinationEntity(223U);
    msg.op = 231U;
    msg.name.assign("WAQOECZIEYMLFFQEOLNCCEARJRKMVCVLUYVRCWGKDJJUGSXUDGLEDHIXBABSJWACTPDKBNZJFLMMIJSMDDZZGGVAXHDBWEXREXFOAKFWFKPNOVXTHBFEPTOCVRTSGLPGUGORMUCMKKALZFBL");

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
    msg.setTimeStamp(0.4282621512061411);
    msg.setSource(61939U);
    msg.setSourceEntity(241U);
    msg.setDestination(1868U);
    msg.setDestinationEntity(191U);
    msg.op = 196U;
    msg.name.assign("TFMPNCRDEQTSACHWFDAWPFSYKJZQFMIBPUIHYSUGURZWTOHNRIWLOWRPOSDVHFXVTIPAENUMASYAPZVMCEDADBKKLLHJDKBQVEILXOGNSWXOBEKOZMNEGKOODNDQLQHFVCGLPCXZMJAWYRJXTLBGVDKFGGZMTIGNZYXHWKYUIPPAVSRJXUVHNYHBIFUEVQVNXUQTJBFQAIYOBDCKYOPBGNCZLJHAZSML");

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
    msg.setTimeStamp(0.33865286532303984);
    msg.setSource(15049U);
    msg.setSourceEntity(56U);
    msg.setDestination(37356U);
    msg.setDestinationEntity(153U);
    msg.op = 26U;
    msg.name.assign("ITPTLTNRUIDONJBTPTIYGQWCJDEZRARVEPUXIAYGAFMELZZPWWGYFFOZARHS");

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
    msg.setTimeStamp(0.5903827369374068);
    msg.setSource(20309U);
    msg.setSourceEntity(194U);
    msg.setDestination(45965U);
    msg.setDestinationEntity(195U);
    msg.type = 59U;
    msg.htime = 0.7382105779703954;
    msg.context.assign("JUOQIVNGIYLRYOVPJXXORHVIYZYNWKLKAJVMDPTYEUYNWNBZRRGKQFKXVIEHJCTGDFGNUBWVBL");
    msg.text.assign("LCWFYFURITOJOBQGRDQVRVTGJBYGVJTOFPNDBMSBAXUHXGVCI");

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
    msg.setTimeStamp(0.5830384352527006);
    msg.setSource(19362U);
    msg.setSourceEntity(122U);
    msg.setDestination(58338U);
    msg.setDestinationEntity(116U);
    msg.type = 87U;
    msg.htime = 0.24591096684496538;
    msg.context.assign("CBGZOZBTYMXIWHMQLBWFGJREEGCKCCHLROLVAFKSNVOUQSXWOTGI");
    msg.text.assign("UEBXIMWUXEOLXDOQAYDSHJAFNWDZKBXCKUHEZTPASCYQJYGLRYCKLYGROOQGWNIEAJPXDYMQTMPLNWIAUZEUCZPUNOIMVURLYNSTHDASDCHPTCXFQWKGBHGVWSJXKUNLCMGEJYTGVOSXTVTFZNNBGFIBZZHOJVLYXHUMWRBQFNMPAFTOQSRXQKDJBWDMRVOBFFJNWCODILAGCIVHFAGAYFHEBUKJVPZEZRVMRPSEITWI");

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
    msg.setTimeStamp(0.9713902262106882);
    msg.setSource(4870U);
    msg.setSourceEntity(135U);
    msg.setDestination(10470U);
    msg.setDestinationEntity(103U);
    msg.type = 222U;
    msg.htime = 0.30653581215011205;
    msg.context.assign("VECPAXBLRYLWFWTZPGFDQBRKQAJWIZKSVOVHOMFBDADUFSNIHQFODNDSPYELLAHVMIFITLRJWQRCVMRPCDFXSOBUESMLUEPCUJJWJJEGHSKGIFMKCAUN");
    msg.text.assign("XRAIVRIEHNBKBNRZINBGZGUTTMOVMWECPGFRQAKDYMSCFYCPMZUMBDGXQCDNWFLTKMIMJSNUOULCAOTIR");

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
    msg.setTimeStamp(0.801442094950667);
    msg.setSource(3047U);
    msg.setSourceEntity(222U);
    msg.setDestination(21299U);
    msg.setDestinationEntity(206U);
    msg.command = 216U;
    msg.htime = 0.6431413437876521;

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
    msg.setTimeStamp(0.8614940037063659);
    msg.setSource(48198U);
    msg.setSourceEntity(58U);
    msg.setDestination(4272U);
    msg.setDestinationEntity(31U);
    msg.command = 97U;
    msg.htime = 0.5861348908429737;

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
    msg.setTimeStamp(0.2651125803389235);
    msg.setSource(24234U);
    msg.setSourceEntity(77U);
    msg.setDestination(15273U);
    msg.setDestinationEntity(152U);
    msg.command = 102U;
    msg.htime = 0.31435952664440725;

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
    msg.setTimeStamp(0.34685424193644865);
    msg.setSource(34305U);
    msg.setSourceEntity(249U);
    msg.setDestination(51234U);
    msg.setDestinationEntity(78U);
    msg.op = 153U;
    msg.file.assign("ZXJAOFELSSYVCUMYDQYOGYHMPHRLBDFZVELAPSZUDOGXMIDANHFKZMAJLQLGLSTQDDOTQTFCNFWKUL");

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
    msg.setTimeStamp(0.5400065708408458);
    msg.setSource(48917U);
    msg.setSourceEntity(233U);
    msg.setDestination(11826U);
    msg.setDestinationEntity(123U);
    msg.op = 136U;
    msg.file.assign("AVZTDZQDWEGHMOILPGHDLFZMYQVWGHHFXAZJRORWFLAXSKFTWPKQXBNLZJSXAHOVOSGHNKDCKEVXROWUMSFLNXAVDTCHQFJNRISYKDQQYZMQKRZHCZIBBNEMECOOKYPIFEEPWZCSSWRCBRHPVIPMMVULZOTTSQUNBJWJJOGUSRGNQELSDYUALBBICGVTNAECJXBUUMTIAEOVIGRQHYMUYXTFLAPPXGUGWKJCDWKDP");

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
    msg.setTimeStamp(0.29271015253354593);
    msg.setSource(12683U);
    msg.setSourceEntity(177U);
    msg.setDestination(60542U);
    msg.setDestinationEntity(24U);
    msg.op = 46U;
    msg.file.assign("FHNLBJHOWGLXVJAILQWAMFCSTPULKCRXOXDEAUBMTYMBKXFWPDEEOLIZVXRKKBEBSKNWHEUUNODSANJJCJNODYDBFDBWPKYGGMLDRMZKUVCG");

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
    msg.setTimeStamp(0.3316759098508836);
    msg.setSource(30752U);
    msg.setSourceEntity(130U);
    msg.setDestination(2939U);
    msg.setDestinationEntity(155U);
    msg.op = 79U;
    msg.clock = 0.2573949325505883;
    msg.tz = -10;

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
    msg.setTimeStamp(0.4182134455911185);
    msg.setSource(1464U);
    msg.setSourceEntity(154U);
    msg.setDestination(13349U);
    msg.setDestinationEntity(96U);
    msg.op = 204U;
    msg.clock = 0.7394337191930009;
    msg.tz = 19;

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
    msg.setTimeStamp(0.34204014227265755);
    msg.setSource(12516U);
    msg.setSourceEntity(165U);
    msg.setDestination(28734U);
    msg.setDestinationEntity(94U);
    msg.op = 218U;
    msg.clock = 0.5291879015177188;
    msg.tz = 86;

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
    msg.setTimeStamp(0.8732456764627532);
    msg.setSource(35720U);
    msg.setSourceEntity(242U);
    msg.setDestination(53447U);
    msg.setDestinationEntity(138U);
    msg.conductivity = 0.036444929454517716;
    msg.temperature = 0.7549020238377685;
    msg.depth = 0.44604302421794795;

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
    msg.setTimeStamp(0.39081282985327237);
    msg.setSource(64087U);
    msg.setSourceEntity(142U);
    msg.setDestination(31857U);
    msg.setDestinationEntity(114U);
    msg.conductivity = 0.4800504063193044;
    msg.temperature = 0.6338782018871407;
    msg.depth = 0.9760546676921822;

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
    msg.setTimeStamp(0.3641316301424755);
    msg.setSource(44664U);
    msg.setSourceEntity(28U);
    msg.setDestination(3524U);
    msg.setDestinationEntity(139U);
    msg.conductivity = 0.45286916014890766;
    msg.temperature = 0.3733391512121994;
    msg.depth = 0.37903728395134184;

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
    msg.setTimeStamp(0.8464442028918633);
    msg.setSource(61863U);
    msg.setSourceEntity(47U);
    msg.setDestination(5190U);
    msg.setDestinationEntity(10U);
    msg.altitude = 0.4128991191735907;
    msg.roll = 59830U;
    msg.pitch = 43521U;
    msg.yaw = 38979U;
    msg.speed = -28061;

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
    msg.setTimeStamp(0.8484852600027115);
    msg.setSource(2076U);
    msg.setSourceEntity(183U);
    msg.setDestination(33964U);
    msg.setDestinationEntity(246U);
    msg.altitude = 0.8066369816078331;
    msg.roll = 6310U;
    msg.pitch = 36997U;
    msg.yaw = 28390U;
    msg.speed = -15227;

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
    msg.setTimeStamp(0.8652468499141575);
    msg.setSource(56006U);
    msg.setSourceEntity(125U);
    msg.setDestination(61197U);
    msg.setDestinationEntity(139U);
    msg.altitude = 0.8155722467582122;
    msg.roll = 12828U;
    msg.pitch = 36061U;
    msg.yaw = 51618U;
    msg.speed = 26309;

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
    msg.setTimeStamp(0.24728857318103425);
    msg.setSource(51812U);
    msg.setSourceEntity(221U);
    msg.setDestination(1062U);
    msg.setDestinationEntity(240U);
    msg.altitude = 0.347119926115927;
    msg.width = 0.037171312983164784;
    msg.length = 0.9943024215322827;
    msg.bearing = 0.9813729450419938;
    msg.pxl = -23761;
    msg.encoding = 12U;
    const char tmp_msg_0[] = {-111, 94, 1, 63, 57, 18, -83, -8, -127, 16, 8, 79, -9, 57, 6, -8, -19, 12, 72, 126, 12, -28, 53, -53, 62, 5, 38, -91, 23, 62, 22, 123, -65, -3, -105, -8, -7, 31, -16, -43, -79, 40, 17, 60, 71, -126, -89, -40, 57, 25, -108, -40, 124, 65};
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
    msg.setTimeStamp(0.7421242080187564);
    msg.setSource(10130U);
    msg.setSourceEntity(17U);
    msg.setDestination(26085U);
    msg.setDestinationEntity(63U);
    msg.altitude = 0.2651081384260435;
    msg.width = 0.8953626884305862;
    msg.length = 0.6833715140174728;
    msg.bearing = 0.37204450763122465;
    msg.pxl = -23888;
    msg.encoding = 14U;
    const char tmp_msg_0[] = {-115, -96, -28, -111, -7, 72, -77, 20, 78, 84, 18, -105, 67, 5, 55, 87, -85, -44, -15, -28, 16, -63, -92, 107, -104, 17, 40, 100, 35, -53, 42, 109, 61, -64, 77, -64, 100, -95, -79, 33, -35, -36, -57, -126, 81, -113, 11, -61, -22, -44, 12, 33, -109, 20, -6, -83, 27, -78, 11, 41, -19, -30, 11, 114, -85, -73, 68, 108, 75, -9, -16, -58, -116, -98, -85, -43, -70, -32, -113, -29, 120, 10, -111, -95, 122, 38, 37, 15, -112, 41, -78, 58, -116, 2, 118, -1, -128, 117, -114, 10, -73, -9, 121, -44, -35, -96, 62, 117, 45, -123, 40, 86, -98, 37, -124, 104, 9, -117, 10, 19, 65, 0, 29, -63, -121, 76, -48, 34, -40, -79, 12, 38, -31, 120, -92, -98, 5, 95, 8, 113, -15, -25, -60, -21, 63, -28, 123, 101, 21, 89, -56, -73, -81, 45, 101, -99, -51, -42, -108, -90, 84, 95, -43, 70, -63, 19, -34, -107, -120, 8, 74, 1, -121, -55, 119, -95, 123, 81, -113, -33, -116, -60, -2, 70, -75, -47, -56, -124, 94, -115, 35, -119, 2, -25, 78, 61, -37, -47, -98, -58, -46, 82, 107, 75, -35, -93, -36, -6, 4, 46, -98, 9, 68, 88, -59, -116, -127, -87, 50, 102, 55, 45, 95, 37, -60, 125, 43, 88, -79, 18, 28, -26, -108};
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
    msg.setTimeStamp(0.32378052829556536);
    msg.setSource(54997U);
    msg.setSourceEntity(96U);
    msg.setDestination(4641U);
    msg.setDestinationEntity(227U);
    msg.altitude = 0.30551977826997945;
    msg.width = 0.18495425382013375;
    msg.length = 0.4065256157594679;
    msg.bearing = 0.022062824786496238;
    msg.pxl = -10651;
    msg.encoding = 235U;
    const char tmp_msg_0[] = {-52, -77, -36, -109, -21, 65, 111, -109, 8, -72, 75, 99, 37, -89, -123, -105, -80, 96, -37, 110, -54, 7, 63, -16, 97, -89, 57, -39, -79, -82, 7, 23, 17, 53, -48, -127, -73, 12, -58, 111, -35, -70, -93, 58, 71, 23, -19, -44, -78, -68, -55, 69, -116, 5, -19, -35, 48, 13, 10, -111, 63, -31, -46, 30, -7, -91, -45, -32, 74, 19, 56, -44, 23, -24, -128, -76, -55, -127, -41, 119, -2, -80, 63, 58, -88, 21, 92, 2, 10, 22, 61, -66, -11, 17, -81, 64, 50, -106, 116, 120, -40, 5, 15, 76, -127, 51, -17, 121, -54, -3, -43, 65, -71, -106, 82, -10, 68, -47, 100, -78, 9, -127, -42, 42, 96, -1, -64, 85, 22, -100, -116, 65, -122, 57, 114, 21, 96, 50, 85, -50, -104, 122, 80, 32, -125, 81, 64, 23, -2, -125, -57, -59, 60, 106, 39, -49, 59, 82, 1, -26, -57, -106, 110, 109, 102, 115, 3, -59, -16, -55, -83, -26, -88, -38, -55, -14, 19, -90, 118, 57, -41, -70, -94, 68, -20, -86, -126, -89, 56, 115, -56, -84, -84, 54, 92, -87, -100, -57, -97, -41, -109, -16, -119, -61, -107, 22, -35, -99, -26, -92, -50, 82, 114, -15, 94, 29, 6, -113, -55, -5, 121, -71, -27, 1, -101, 59, 6, -48, 63, -109, -12, -87, -87, 38};
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
    msg.setTimeStamp(0.2697030433807218);
    msg.setSource(29688U);
    msg.setSourceEntity(77U);
    msg.setDestination(57139U);
    msg.setDestinationEntity(115U);
    msg.text.assign("MJLTKYOIKPEYQAQXPBCNCAROGOVZWUFUMVXJKTTCSEVZMRWERKORLEHVDAZUGUQX");
    msg.type = 184U;

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
    msg.setTimeStamp(0.10150802101129719);
    msg.setSource(19973U);
    msg.setSourceEntity(27U);
    msg.setDestination(52256U);
    msg.setDestinationEntity(127U);
    msg.text.assign("IANSGNENPHIZHZQBAOCSVCMFVAXCQJSVOTFIYGZHMIHXMPQZMEFQROERULDPXKBLVCCPLSMFKGTDKOKGWUBWRENNSSQMLRAYVBYKWYVYUOANGHBMPTEJRJKETUPIWRXEDUJFFDHPWUMCRADZNDQPSDPRDSRLDHJUTXUAJPOHCVYLWNJBNODYZIXELTBVEKFYTQXZXCATFIAOAOCIWMOUFYBLQWMRGUTNLHWW");
    msg.type = 177U;

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
    msg.setTimeStamp(0.21646627290730225);
    msg.setSource(64825U);
    msg.setSourceEntity(164U);
    msg.setDestination(8907U);
    msg.setDestinationEntity(182U);
    msg.text.assign("VXAPFPQGYOVGLCZNLYIXMSIWRUQZVLDTFFNWIUNEUINULOSDHOIKHUALSKMIUSFETFPJGRBIJXCGVBDYADGRTLYHWFGVMATXNYDZEBZZTWWVSRLACKJEJJKAOLYBNOQNFJQSGIFAEHCKDVMOOPEMJKMZPKTUVCSOOSRQWDTAKPBRYWJXHVQMFIBSZAPSCLKENWQBXIUPBQOPVXDNKFRLHBHCHXMUHEYMCXJWJPTHBEDMWCGQZCRYEUTA");
    msg.type = 144U;

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
    msg.setTimeStamp(0.36067378766002045);
    msg.setSource(13072U);
    msg.setSourceEntity(26U);
    msg.setDestination(42062U);
    msg.setDestinationEntity(56U);
    msg.parameter = 248U;
    msg.numsamples = 88U;
    msg.lat = 0.008451310091061814;
    msg.lon = 0.6015919400584162;

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
    msg.setTimeStamp(0.4435425102745689);
    msg.setSource(63551U);
    msg.setSourceEntity(23U);
    msg.setDestination(9383U);
    msg.setDestinationEntity(150U);
    msg.parameter = 102U;
    msg.numsamples = 180U;
    msg.lat = 0.6114946028920543;
    msg.lon = 0.7263763055616405;

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
    msg.setTimeStamp(0.6834533264582848);
    msg.setSource(54625U);
    msg.setSourceEntity(181U);
    msg.setDestination(35584U);
    msg.setDestinationEntity(153U);
    msg.parameter = 223U;
    msg.numsamples = 90U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 10297U;
    tmp_msg_0.avg = 0.871715766908774;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.27274027150629376;
    msg.lon = 0.24922174091162108;

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
    msg.setTimeStamp(0.3615643892474676);
    msg.setSource(11945U);
    msg.setSourceEntity(27U);
    msg.setDestination(28018U);
    msg.setDestinationEntity(97U);
    msg.depth = 33779U;
    msg.avg = 0.18484832384706607;

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
    msg.setTimeStamp(0.8175114980963737);
    msg.setSource(59628U);
    msg.setSourceEntity(94U);
    msg.setDestination(57006U);
    msg.setDestinationEntity(49U);
    msg.depth = 7329U;
    msg.avg = 0.5345780119858958;

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
    msg.setTimeStamp(0.3358480385661752);
    msg.setSource(46114U);
    msg.setSourceEntity(61U);
    msg.setDestination(56259U);
    msg.setDestinationEntity(177U);
    msg.depth = 16607U;
    msg.avg = 0.367129135112256;

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
    msg.setTimeStamp(0.5828650292028761);
    msg.setSource(55992U);
    msg.setSourceEntity(68U);
    msg.setDestination(13710U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.3780945095880136);
    msg.setSource(61269U);
    msg.setSourceEntity(105U);
    msg.setDestination(27300U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.8734575134091608);
    msg.setSource(9777U);
    msg.setSourceEntity(139U);
    msg.setDestination(16643U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.49890038417915505);
    msg.setSource(14683U);
    msg.setSourceEntity(11U);
    msg.setDestination(15208U);
    msg.setDestinationEntity(49U);
    msg.sys_name.assign("CSBHSSBFYTKHPZEIZSLHTHGBWVIFXYOJIMLKSARNDGVTYHKGEIRQFZMISLCFZBKBLQQWFHOMBWTTSXTLWEXG");
    msg.sys_type = 124U;
    msg.owner = 57479U;
    msg.lat = 0.8535901627510336;
    msg.lon = 0.28623498072879583;
    msg.height = 0.3285240573445437;
    msg.services.assign("TLPGOFNUBLXWWPKUOUJCASEMJVUVZGDQVGHQJELKLMRIFEAUC");

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
    msg.setTimeStamp(0.8580587124541363);
    msg.setSource(64284U);
    msg.setSourceEntity(13U);
    msg.setDestination(63972U);
    msg.setDestinationEntity(152U);
    msg.sys_name.assign("UNKWKIUCJAKABWZEKPRTJOTHQQXVELPYGMWNXBLXWCHHFKUYJJWRFWKAGOPMURTZPBCGGBBXNLVXQYIHTMAJYUMETQHVYVQFYITDJIICSMTSMTUCOVKQFGTVVNETAHOREMEJLXIAMNYSRIOLBLHZCUDRGLFSXQPDQHDZOHDVODDPBHEIUPDXJLKWZNGBPSFYRRYWNQYRSEBPSQXDBA");
    msg.sys_type = 61U;
    msg.owner = 23304U;
    msg.lat = 0.5660308448533609;
    msg.lon = 0.6634653202726163;
    msg.height = 0.6314366457319535;
    msg.services.assign("OICVMDBKMXFDPWKVHOXPFNHLDSQYKGZBVZURHPDLGZNHJILBCKUKMZPMGGRKAOJHJVFAHAAJDENQU");

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
    msg.setTimeStamp(0.5652569859423637);
    msg.setSource(19544U);
    msg.setSourceEntity(4U);
    msg.setDestination(16687U);
    msg.setDestinationEntity(52U);
    msg.sys_name.assign("NOWAKGECXGNNMZKFEDDULEDYYKFIXOAVGKDMOBBLJSTDERCHKOYEHZVVVQJFTGNSNWTGGQMPVSEKWENLRLBUWQFMTPFOJRDPMXVRSLIWJFMHAAIMURWVDTJXGCQJBWAAKZMMYMCFZIUYPULZSIKYYXRHBQWNOPLLIFPZGGTUAQDEOYZNZEBBRTICPDGRHTSXVCAJBSIACKAXRUCVQLHZ");
    msg.sys_type = 121U;
    msg.owner = 20434U;
    msg.lat = 0.8642205169252336;
    msg.lon = 0.20246157362555395;
    msg.height = 0.7702298500138179;
    msg.services.assign("GJTZWPESYYKABGARZFNRUBOLOKGIIEFBFIAALWCBZWMTAMSJQXQDLMQLNCJMRKNNIMVPEPGEFBGOYCAYUVXVLBTOJGGUOXGHKVJ");

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
    msg.setTimeStamp(0.28333719306820637);
    msg.setSource(6347U);
    msg.setSourceEntity(115U);
    msg.setDestination(47376U);
    msg.setDestinationEntity(19U);
    msg.service.assign("NCVZHFXNJKTLNEKHTUMUEUZXSCBAUOJSPREELVHUDTTHLJEMRBBBXWOYJREJNYAEFVKVFIRWRZAPAJHPWXSXICZGTNTPJNEMQGYBGKKBOQJAQWQAXKPACDDFSDYKBWTVHCMIVIOXNPLMSLOKKIICQTUMWYZWZAQHXMAVFRGQKVUQFMDGSLDWEHIGQREINBYDHNVJCLRUDODZONJXRSPLWUYPUYVFZFOZQGYPGYSOSOGI");
    msg.service_type = 52U;

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
    msg.setTimeStamp(0.2566610223255593);
    msg.setSource(309U);
    msg.setSourceEntity(107U);
    msg.setDestination(59493U);
    msg.setDestinationEntity(6U);
    msg.service.assign("YYLINMCUVJFNIYPACPWTKREGPFKDUZPTTCSMQTQPYHWZJLDS");
    msg.service_type = 32U;

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
    msg.setTimeStamp(0.3746430943015483);
    msg.setSource(41900U);
    msg.setSourceEntity(245U);
    msg.setDestination(24311U);
    msg.setDestinationEntity(49U);
    msg.service.assign("DOBAFXKJZWOPNTPTDWIKIMXBZWVTOFOBTBKGIFTPKHVQJTJCEXPZWXHSSYLLAATHBEXOVIZBFDTOGYLNXAIGPCMURCCPGBGZKZKPYIFI");
    msg.service_type = 8U;

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
    msg.setTimeStamp(0.5369411693580473);
    msg.setSource(14172U);
    msg.setSourceEntity(55U);
    msg.setDestination(63046U);
    msg.setDestinationEntity(73U);
    msg.value = 0.7445367795907353;

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
    msg.setTimeStamp(0.30903073657426205);
    msg.setSource(8094U);
    msg.setSourceEntity(17U);
    msg.setDestination(22377U);
    msg.setDestinationEntity(97U);
    msg.value = 0.9255319761264168;

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
    msg.setTimeStamp(0.2051637824522362);
    msg.setSource(12203U);
    msg.setSourceEntity(7U);
    msg.setDestination(9507U);
    msg.setDestinationEntity(136U);
    msg.value = 0.13675922153638775;

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
    msg.setTimeStamp(0.652141931402309);
    msg.setSource(27404U);
    msg.setSourceEntity(233U);
    msg.setDestination(30964U);
    msg.setDestinationEntity(216U);
    msg.value = 0.6745529906541177;

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
    msg.setTimeStamp(0.7149094749487463);
    msg.setSource(45945U);
    msg.setSourceEntity(175U);
    msg.setDestination(52716U);
    msg.setDestinationEntity(220U);
    msg.value = 0.7275362359877146;

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
    msg.setTimeStamp(0.7647388857993211);
    msg.setSource(47121U);
    msg.setSourceEntity(95U);
    msg.setDestination(43868U);
    msg.setDestinationEntity(132U);
    msg.value = 0.4617216652528138;

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
    msg.setTimeStamp(0.8229921730057735);
    msg.setSource(60864U);
    msg.setSourceEntity(112U);
    msg.setDestination(61387U);
    msg.setDestinationEntity(48U);
    msg.value = 0.7534153370841888;

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
    msg.setTimeStamp(0.6894183997083796);
    msg.setSource(12857U);
    msg.setSourceEntity(237U);
    msg.setDestination(4730U);
    msg.setDestinationEntity(135U);
    msg.value = 0.29349636228633547;

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
    msg.setTimeStamp(0.9437184645953811);
    msg.setSource(59027U);
    msg.setSourceEntity(154U);
    msg.setDestination(37947U);
    msg.setDestinationEntity(5U);
    msg.value = 0.1635194293096358;

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
    msg.setTimeStamp(0.6696388570223752);
    msg.setSource(46763U);
    msg.setSourceEntity(19U);
    msg.setDestination(27260U);
    msg.setDestinationEntity(8U);
    msg.number.assign("NVIWBSXJJBMUXUOLFKNTHDNROEWWALNOQFFHXUZUWDROLZKNKSPOAKUBTCQFZMHVRKCZANHFMUKDQPAABKWBQCDADZFIGCMJOSEBSTWAHGGSYTZNRFSYYZDJXLVDYFYUIHUVCJOGGIQNDCPUQTGEQCVTPXGMDERIMWBVGPEPYOIBPGIWJFIPMLWYXZTUXNJHNBLLBXXEQPAQCMALLSATEMKRSWJERYRJVLXFH");
    msg.timeout = 60162U;
    msg.contents.assign("XCAOTPJBUUNZBQJRHHLWFQATUKEYOMPDSWEXUEEZBPGKODULRGEGWAWFXOGDSHHAMPRXZVQOZFMTFFNCCNBJGTDCVLROCQTSLUMMXVXUWJELSGSVNKGIRTKZPKIJYFJVYVKEMYLLUJUAQLJKAQZR");

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
    msg.setTimeStamp(0.7276445322039442);
    msg.setSource(42513U);
    msg.setSourceEntity(95U);
    msg.setDestination(30915U);
    msg.setDestinationEntity(77U);
    msg.number.assign("ZVCYNUWHTFEWRYNRYRCMSRJPSQLXIWTMXSGLPROZFQVUDKTLSDVLZGTDOEJFHCNKFFHWUVXHDPZIDKMNITJYRJSFOPSUQZKFOXWMPCIVUMKLXJNNRVGZPLMYCPBWVHESYEESBKVCGUBATXGTJSURIAEQKBIKPXZWBYMJRLRBKEOWGMCYAEXYBGNTIQOCDCNIGDILUFVQGPAHQZJLNBAYAFZWBHOFXPWQINMTEOVH");
    msg.timeout = 50102U;
    msg.contents.assign("DSAGJKKIEQUTTMSTXUNUBEDJWYBXEJHCMRZCVORYRVWDSPFTKSVIWXPUOPCYGEMUQQNDBDKXIMNQNROHUICDAPYVOFRKKVHGZGSVLCIZWLZCIDXSLZIWNLRWJEIKWJTYSHAEZR");

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
    msg.setTimeStamp(0.058599990075759445);
    msg.setSource(27910U);
    msg.setSourceEntity(129U);
    msg.setDestination(8016U);
    msg.setDestinationEntity(128U);
    msg.number.assign("VPPSVOJYTYJRBJDQWDQCTOFSRETBNSZXDZLVJFWKPECQJXZLKPMZOUAKDYTTMVKVFPKNOWGVIDUJDAZSEWNJDWTQXVCMGAEYWBKCCZUQEPSZUUQJLXAUGSWIHVOBTERXIRGDVAAQIXUCYIKSDNNNF");
    msg.timeout = 1467U;
    msg.contents.assign("VYJJHFDYLAPBZWKNXHHQNWNHOENOGVL");

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
    msg.setTimeStamp(0.6045190994943946);
    msg.setSource(38879U);
    msg.setSourceEntity(86U);
    msg.setDestination(25576U);
    msg.setDestinationEntity(57U);
    msg.seq = 1984522098U;
    msg.destination.assign("XNIUPAAOQBVMWHEDQYSIGSSWTZGQTLWVIAIPWECUDXFCGRSZNUEUSPUZDBGALWMTBWCLVFWEPAQEXMECMUKLONKCJKDKXMIPOYGXLNFGQHJUVZXUANBBALRMHYRCTHNZNQTRLDJNYFRLAVBSQRVJBIZKFZIQOACFYVKPEZZDKSCHZUELITXNQYITJFKGCNOBSPWYRPTSCETMXOVVJMJYHSBDRMJURRHDXHVGOMAHGTEGWBFJKJFDXODPIY");
    msg.timeout = 49689U;
    const char tmp_msg_0[] = {111, -18, -95, -31, -22, 108, -90, -3, 44, 22, -21, -116, -2, -85, 71, -93, -32, 29, -92, -89, -4, -96, 92, 34, 65, -92, -118, 35, 70, 48, -105, -120, -109, -50, 76, 18, 44, 110, -107, -36, -80, -28, 116, -5, 26, -71, 17, 76, -111, -8, -120, 78, 38, -6, -123, 65, -128, -32, 78, 17, -98, -103, 35, -90, 23, 72, -33, -126, 112, 21, -78, -123, -83, -43, 115, -4, 2, 71, -29, -41, -104, -88, -115, -60, 30, 126, -119, -106, 57, -68, 92, 94, 113, 24, -72, -125, 42, 104, -124, 97, -1, -55, -31, -81, -66, -54, -36, -20, -8, -107, -78, -38, -40, -24, 83, 47, -2, 50, 118, -52, 35, -109, -28, 30, 2, -126, -47, 0, -74, 95, 100, 91, -105, -7, 92, 118, -57, 98, 19, -52, -108, -48, 102, -51, 59, -110, 119, 2, 17, 40, 20, -98, -118, -58, 0, 1, -85, 57, 45, -109, 111, 103, 109, 107, -49, -29, -55, 93, -99, 94, -66, 78, 40, -90, 66, 37, 8, 89, 109, 46, -75, -87, 42, -89, 61, -24, -110, 40, 3, 33, 95, 122, -84, 52, 29, -72, -47, -91, 77, -67, 119, 32, 57, 119, -22, -45, -18, 119, 37, 111, 76, -48, -14, -85, -119, -77, -9, -57, 63, -9, 49, 107, 29, -56, -49, 103, -126, 11, -125, 68, 83, 52, 44, 91, 16, -20, 19, 61, 76, 93, 24, 11, -11};
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
    msg.setTimeStamp(0.40749095701124016);
    msg.setSource(12922U);
    msg.setSourceEntity(163U);
    msg.setDestination(46407U);
    msg.setDestinationEntity(8U);
    msg.seq = 3472249146U;
    msg.destination.assign("PAJAIYFSDYYSVKSKAJBJSUUMRYINFLRAGLUTZSMAGQJQVBXWFBXTGPWNDFXDNERHCJRPKAPLOYHSCTCJGJCUQCIRMAIGZWJHNEQWNKGEUUHXMPAYPOLTPKTHGDQFFLSNQOMERUUHNDICKXXPZHMRYOMVANBWFTWLVCEKQPHZEORIMVSTGYDNEEJTYLIUZWQARRBCEWCCUZOYDDOKBBGIXTZVIBZJMNQXDDLXWVBWOTSFPELVVZMOGKO");
    msg.timeout = 64565U;
    const char tmp_msg_0[] = {40, -45, 63, -89, -47, 94, 89, -63, -122, -7, -123, -54, 9, -74, -99, 13, 34, 62, -66, -1, -31, 109, -56, 42, 61, 19, -16, 6, 46, -19, 50, -77, -49, 116, 51, -91, 51, 100, 110, -14, 126, -78, 120, -128, 77, 6, 108, -24, 45, -106, 90, 92, 107, 38, -123, -42, 80, 5, 111, -37, -11, -118, 37, -40, -35, 42, 16, -99, 114, 121, -121, -1, -17, -16, 23, -37, -33, 114, 114, -46, -90, -37, 26, 45, 83, 94, 89, 71, -35, -9, 53, -90, 84, -91, 79, -1, 72, -97, -125, -93, 16, 108, -4, 107, -108, 14, 47, -14, -11, -52, 79, 6, 125, -72, 3, 10, -91, 96, 98, 119, -65, -54, -41, 8, -68, 111, 68, -85, -77, -53, -62, -98, -70, -95, -95, 123, 25, 59, -94, 35, 10, 51, -7, -128, -54, 21, 71, 104, 20, -90, 107, 48, -20, 5, 113, -111, 115, -3, -83, -124, 108, -94, -76, -78, 18, 68, 96, -117, 114, -98, 20, 29, 34, -6, 48, -95, 122, -104, -12, -3, 26, -56, 37, -26, 91, -19, 20, -63, 7, -89, -58, 83, 85, 11, -75, -106, 35, 44, 80, 39, 121, 117, 23, -17, -62, -85, 26, 52, -34, 30};
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
    msg.setTimeStamp(0.5240193328567088);
    msg.setSource(45529U);
    msg.setSourceEntity(242U);
    msg.setDestination(10560U);
    msg.setDestinationEntity(102U);
    msg.seq = 2711523419U;
    msg.destination.assign("PUTMJDBGZDFUGQIMRXUXVUIJWEFEHCDOOOGBIAQQEEHAIZTIKMOUGMKXKJTGKOAXNJXWAYSXUDJEBYSQECBNVNHFNHQTEMQRCAZSNWACXJHYEPDLHRSISMILNLWQJHXYRZFTTRY");
    msg.timeout = 23074U;
    const char tmp_msg_0[] = {-21, -13, 39, -91, 17, -96, -14, -17, -19, 61, -113, 112, 52, 4, -32, 13, -63, 34, -48, 11};
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
    msg.setTimeStamp(0.5114140863041171);
    msg.setSource(4933U);
    msg.setSourceEntity(181U);
    msg.setDestination(62820U);
    msg.setDestinationEntity(127U);
    msg.source.assign("DYYCRBKVJABPHNOPCSKWAATYWWKVVSACNZBPLSFFCRXKQCJOGIKHCLWQBLBYESIUPWZVSEXINPGGWPGYNUOZMLQSRHLBNTEHJQKFTJNOVZMMNKSJZRNMIYGDJUMUBEBRTDAXQJHRPABMQ");
    const char tmp_msg_0[] = {49, -44, -107, 6, -22, -51, 0, -12, -86, 80, -81, -85, 114, 99, 29, 4, 44, -89, -1, -41, -126, -30, 63, 15, -19, 31, 16, -14, 47, 4, 23, -9, 0, 12, 81, 73, 67, 22, -128, -91, -31, 5, -51, 91, 5, 119, -71, 16, -66, 35, 9, 101, 111, 4, -105, -64, -45, 7, 52, 99, 97, 115, 98, -68, -12, -2, -90, 18, -12, 89, 59, -69, -19, -77, 65, -110, -46, 100, 102, 43, -75, 87, 6, 120, -116, 66, 28, -124, -35, -13, -66, -56, 7, -34, 106, -78, 114, -15, -74, 69, -68, -72, -127, -76, 84, -71, 25, -9, -34, 92, -100, 123, -45, 75, -98, 105, 75, -84, -106, -69, 88, -3, -84, -1, -127, 61, 57, 122, 63, -116, -26, 27, 108, -89, 60, 112, -74, -20, 92, -125, -63, 67, -14, 104, -101, -76, -111, 48, 37, 28, 70, 11, -82, 65, 46, -102, 32, 88, -117, -69, 88, -6, 38, -19, -122, -87, 26, 106, -26, 32, 26, 84, -4, -64, -59, 83, 60, 21, 112, 120, 125, -78, 9, -34, -24, -19, 5, 70, 55, 47, 18, -80, -81, -64, 13, 64, 77, -37, -123, -8, 57, -109, -41, 44, -14, 90, 32, 84, 56, -27, -118, -49, 98, 47, 125, -26, 22, 77, 40, -23, -13, 121, -37, -4, -107, 92, 31, -110, 123, -27, 87, -94, -55, -8, 38, 105, -22};
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
    msg.setTimeStamp(0.5368262185597945);
    msg.setSource(41312U);
    msg.setSourceEntity(174U);
    msg.setDestination(55675U);
    msg.setDestinationEntity(33U);
    msg.source.assign("SNQBNXHBLEBJVC");
    const char tmp_msg_0[] = {80, -108, 70, 84, -43, 34, -26, 17, -48, -26, 100, -84, -121, 62, -101, 121, 49, -105, -89, -44, -21, 41, -111, -19, 104, -43, 98, 101, -84, -88, -43, 115, 36, -103, 18, 4, 102, -112, -13, -57, 80, 20, -51, 79, 86, -115, 116, -104, -70, -87, -52, 116, 110, -50, -114, -52, 42, 59, -81, -63, 69, -94, 0, 121, 113, 22, 121, 125, -54, 51, -10, 111, -96, -98, 77, -19, 101, -53, 126, 0, -6, 69, 45, -37, 99, 115, -79, 93, -69, -30, 102, 90, 62, 80, -50, -105, 112, 84, 51, -41, -40, 118, -92, 74, 4, -109, -44, -101, 27, -24, -91, -23, -26, -66, -125, 19, 66, -19, 1, 6, -6, -28, 81, 22, -73, 75, 26, -40, -91, -7, -29, 26, -29, 1, 114, -98, -120, -36, 14, -78, -61, 36, -33, 97, 54, -18, -98, 49, -105, 58, -124, 115, -74, 71, 34, 97, 36, -6, -106, -39, -12, -22, 114, -68, -88, -74, 22, 101, -40, 126, -26, 66, -78, 56, 38, -67, 41, 78, -11, -1, 74, -78, -31, -68, 126, -95, -94, -67, -83, 73, -125, 48, 42, 45, -99, -102, -105, 73, 112, 49, 32, -46, 35, 48, -13, 15, -124, 19, -65};
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
    msg.setTimeStamp(0.6139465116592285);
    msg.setSource(54001U);
    msg.setSourceEntity(102U);
    msg.setDestination(9580U);
    msg.setDestinationEntity(66U);
    msg.source.assign("JIQVIYIOFOJXGZRVPFGFJKBIXWAWXQNBKDSRSVCADUAECHYMLKQINIFTWNRNKMNNHNEGLNMVTZZKU");
    const char tmp_msg_0[] = {80, -22, -16, 122, -26, -19, 105, 16, 71, -92, -49, -64, -6, 1, 67, 39, -15, -49, -74, -104, -80, -76, -69, -7, -82, 28, -85, -57, -60, 103, 89, -106, -97, -34, 101, 112, 114, 57, 67, 113, -106, -118, 9, -83, 8, -18, 29, 33, -21, 94, -6, -89, 34, -45, -102, 99, -17, -116, -28, -1, -75, 65, 88, 82, 28, -82, 116, -86, 18, 38, -86, 89, -31, -65, 28, 42, 104, 17, 61, -36, 31, -37, 24, 94, -17, -17, 36, -112, 25, -59, 95, 1, -71, -84, -18, -95, 75, 101, 54, -61, -4, 79, -71, 51, 108, -68, 3, 23, -34, -18, -39, -112, -18, -81, -21, 30, 55, -88, -10, -104, 12, 40, -99, -50, -44, 2, -27, 37, -122, -96, -23};
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
    msg.setTimeStamp(0.4806888576841072);
    msg.setSource(65410U);
    msg.setSourceEntity(29U);
    msg.setDestination(56138U);
    msg.setDestinationEntity(165U);
    msg.seq = 2023700552U;
    msg.state = 152U;
    msg.error.assign("QFOCNDSYVIDNSUCMVNOIKMQKBZASHWVUYYBUJTBGOCUKEQCWSRZWCMZGDEEIJAGXUYNNVTKWVRZWOFRPBJ");

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
    msg.setTimeStamp(0.4103382045570759);
    msg.setSource(5942U);
    msg.setSourceEntity(95U);
    msg.setDestination(36057U);
    msg.setDestinationEntity(234U);
    msg.seq = 430600217U;
    msg.state = 5U;
    msg.error.assign("JDTIZOPOMVDQFEWXTUURGETDWMQGGOYZOQGAQHTQVYBNKRVYZINHSBPSEFXFGANXDEGBREAJKJMZRTPWQXLJKSBCUDMPRKCCYHFVTHCODRFIXSSEHNZWSCBILPIJHESUCXUAAKIZRYFEJNTWZYPCYULFPHLVOXJDJNJRSOWBQPRMVMJFWK");

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
    msg.setTimeStamp(0.7613236963640776);
    msg.setSource(2062U);
    msg.setSourceEntity(168U);
    msg.setDestination(35245U);
    msg.setDestinationEntity(64U);
    msg.seq = 4046738690U;
    msg.state = 47U;
    msg.error.assign("HTMBOSJHILRYPCMMIBLVQEFGIGKRLRUDWQTCVIKVWSNLZZANJKUSRXBDRYWIXMPUSLHDQYEWNPNEUQGQBBGDMVHORWPICBMUTIJTCKNCIYANOEKNSQDBYPOHNJPJT");

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
    msg.setTimeStamp(0.5879280370093903);
    msg.setSource(1324U);
    msg.setSourceEntity(23U);
    msg.setDestination(59456U);
    msg.setDestinationEntity(183U);
    msg.origin.assign("FTRTDYEKPWOLMEVCAZSEWEPKNAWNNQHSOOGIMRYZWAWKENUSOLAOPPJDXCKBVFNNMCHBAZUHYWRXUJJLDJIVQRSVXWMKCZBYIEDFVUPGJSYYABBDQHTGFFEYIPTUIICEBJTZVHWLUQCNGLBLMXDCPOBF");
    msg.text.assign("BVUUQBZHWFCLNTWQSRWKHELUIPNNCSIEXZVPYOJMYHIKVMDSKVJFCTBSGYFKGFTMUTSQJGIUIGRCESNGDZDQICYDA");

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
    msg.setTimeStamp(0.6772681218234426);
    msg.setSource(42910U);
    msg.setSourceEntity(252U);
    msg.setDestination(19650U);
    msg.setDestinationEntity(135U);
    msg.origin.assign("TATSQAZPJNUOFABCVYQWMNSLQRITZDTOYWAXKXWAQUHMXGHKEZDVBFZIDYJSDCRNCNGEMRGCOSPYWVHAUXBLQBFWVEIGMPBFLAUSHSEPHTYLGXLBCJDCJYIJQKVMRWUDKXVFJKLNLGOSHUOKWNPFBNTIWQZMVTCEPPCXRIIIVUTGBMXVEL");
    msg.text.assign("HTGIEWEFNVGWGXSPNJLOJZECCRDLSZJWKQZWXBKMSJVOTEMDTFQFUPOIKMNBTOOCOIVDLOLEVIOHYBKMEYDDVAARGCQNNMZNWRRQAAFUFGCJRSXJBQJJGSBMAAHRNCQCUWSAFBRAUYQBCNNBDRPWTDHSXYKXZCUQUPHSDFKIIVGVPKTWFHYYPQUMLZZXTBUIQVIMMYGBLIZKHTM");

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
    msg.setTimeStamp(0.4821024680310523);
    msg.setSource(3447U);
    msg.setSourceEntity(57U);
    msg.setDestination(43289U);
    msg.setDestinationEntity(188U);
    msg.origin.assign("CDAHUYXQWHCDIPCELYOBGUNJABPTAWWMLQSHUJTGWOTUAYKVKDPMMNULMLFWXNBNZRVYRQDEFQFJJPGUBPEXWLXZOKNKBIZIVIJUQXSDOCGSIJKJVDNEKLHRWERWTIZDYCXATCPWXTIFMVVRNJPEUKKLGNZMNAUQMWRSPHYYGHOPZTHXQRFLYFEGFASBBFZOQB");
    msg.text.assign("HOEVCNVXJPQNMORLVPWRIMRNMUURXHLXJGQBFJTDMEAGFRSEYTCWPWGZIDQJOTVGHYKRDSSQDJFFGMLUOVFSDVPAAZRWNOSTOJCUKNSWEKYWLBBR");

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
    msg.setTimeStamp(0.04181502943894866);
    msg.setSource(342U);
    msg.setSourceEntity(60U);
    msg.setDestination(59127U);
    msg.setDestinationEntity(207U);
    msg.origin.assign("XJNBTYSUINDDGNRRFUIEACRAPSKEXDQSTCOSMVJKLIGMWVNHWKJCTOKZIZBWUMTRNAHYQFPHWFVLYJEFNHSQVEBZLOCGNPBQEKNPHNIASKCVAHMDKFCBDDPKTZZNZVILHEQO");
    msg.htime = 0.33139104875708236;
    msg.lat = 0.8370023462363061;
    msg.lon = 0.029120302654267127;
    const char tmp_msg_0[] = {-89, -109, 10, 54, 23, -16, -105, -102, -103, 8, -79, -61, 9, 94, -21, 13, -71, 37, -76, -102, -14, -20, -33, 16, 110, -8, -89, 92, 98, 26, 75, 62, 78, 7, -97, -14, 101, 9, 0, 37, -67, -38, 67, -58, 27, -31, 30, -6, -72, 79, -28, 28, 12, -26, -32, -57, -86, -87, -65, -112, -51, -108, -126, -78, 47, -66, 5, 87, -116, -103, -16, 52, -85, 112, 19, -10, -67, 11, -30, -3, 11, 115, -53, 59, 61, 125, 39, 53, -21, -69, -82, -104, -69, 26, -27, 124, 46, 7, 23, 16, -40, -19, 94, 29, -53, 46, -92, -11, 41, -68, 117, -25, 62, 24, 50, 7, -110, 81, -90, 105, 106, -35, 118, 53, -51, -9, 52, 20, -119, 125, 4, 75, -94, -28, 91, 65, -86, -31, 42, 21, 92, 57, -118, 19, -27, -21, -116, 56, -13, -109, 10, 94, -105, 114, 25, -26, -26, 27, -70, 125, -84, -47, -128, -40, -5, -81, 126, 30, -122, -59, 54, 100, 126, -74, -23, -93, 53, 43, 56, 82, -77, -112, 29, -65, 101, -6, 23, -89, -88, 108, 59, 14, -64, 66, -84, 1, 14, -90, 111, 93, -114, -32, 11, -60, -25, -39, -10, -65, 22, -34, 75, -72, -6, -36, 118, 67, -33, -111, -3, 91, 108, 35, -48, 74, 70, -18, 36, -94, 98, -24, 67, 13, 2, -59, -127, -15, -128, 56, -12, 49, -7, 86, -8, 102, -53, -31, -15, 42, -9, 84, -77};
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
    msg.setTimeStamp(0.04199368871625486);
    msg.setSource(11772U);
    msg.setSourceEntity(245U);
    msg.setDestination(57520U);
    msg.setDestinationEntity(160U);
    msg.origin.assign("PVFFRAETOVASHYNPOBUEFZPYPGURWRCFTJRQYGZMEUTRNDQVOKSOBJTJVKKZUOVBSEKJABYHIHQJXCPQEYHTPKBZLDLBSUADLZIRTOIRXICKIRKWWXUGNSSJUQTTECMPCSRUEGADMXQSWDNXHCXDNJFLIOWZKOVLFNFQUEBAZHPWLRFSHZQHBCJTGXWJXLMVPZPWMJIYFXWBMAEGAGYHMHVYLYDCQVLWBIFNEDIKZOUNNMKXCGSINLMGAVGCDD");
    msg.htime = 0.7906422707585381;
    msg.lat = 0.7114529230877188;
    msg.lon = 0.38514783023990296;
    const char tmp_msg_0[] = {31, -95, -93, 25, -39, -19, -118, -73, -83, 104, 94, -5, -49, 49, 41, -57, 58, 58, -99, 83, 51, -35, -68, -95, 20, -58, -74, 29, 74, 89, -32, 43, 48, -87, 30, 42, -24, -20, -44, 91, -49, 52, 32, 83, -56, 90, 53, 90, 103, 108, -1, 32, -50, -51, 18, -58, 51, 13, -56, 74, -118, 97, -91, 96, 27, -24, 101, 117, 48, -93, 50, 63};
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
    msg.setTimeStamp(0.2662195188415464);
    msg.setSource(24182U);
    msg.setSourceEntity(145U);
    msg.setDestination(50006U);
    msg.setDestinationEntity(196U);
    msg.origin.assign("GVYOQXMKHDKVTJEILDEPEPTFEJCBEZWOPQJWJAQBNXGEDMASWTNPTBSMOSWFOYCOZRFDLNOJGXRKHWCZUFCJGWRIVGQSSGHHUZVDOETFINZNGRLMLVXJGQTNMCIZPXLPRCYAZUUZKFIRFHKSYRPBAAVFXMDCFBYXWPBHYIQFVAOWQNULWOEEYDMVVMJQZVBHIPXKKSHNAIGKCRRTDMDXLEAYLSNWTILTJSCLSBBPUYHGKTHUBMAO");
    msg.htime = 0.525873025366707;
    msg.lat = 0.8150210966743874;
    msg.lon = 0.13085516932757335;
    const char tmp_msg_0[] = {20, 30, -42, -86, -25, 106, 16, 85, -55, 104, 103, 111, -46, 92, -99, -31, 48, 119, 100, -70, -116, -43, 40, -101, -21, -80, 82, -120, -6, 86, 57, 101, 63, -6, 112, -81, 1, -57, 36, 51, -93, 65, -22, 72, 87, 78, 2, 61, 34, 35, -16, 0, 119, 64, -110, 22, -72, 114, 36, -74, -59, 34, 2, -75, -28, 87, -128, -120, -48, -101, 111, 74, 57, 97, -70, 94, 72, 55, 54, -106, 93, 35, 62, 21, -128};
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
    msg.setTimeStamp(0.40177348495532417);
    msg.setSource(21132U);
    msg.setSourceEntity(81U);
    msg.setDestination(33949U);
    msg.setDestinationEntity(33U);
    msg.req_id = 16706U;
    msg.ttl = 5680U;
    msg.destination.assign("CAHPRKNMFR");
    const char tmp_msg_0[] = {-32, -15, 37, 69, 121, -4, -72, 13, 87, 125, -66, 115, 20, -60, 48, -102, -21, -103, -42, 23, -20, -11, -73, -94, 126, -55, -81, 9, 98, 41, -102, -28, -38, -127, 14, -35, -88, -21, 16, -115, 71, -19, 73, -69, -95, -13, 33, -76, 125, -118, 49, 90, 1, -29, -59, 54, -67, -34, -121, -36, 10, -31, 20, -105, -5, 59, -106, -6, 97, 48, 115, 97, 117, -21, 7, 63, 75, -45, -52, -72, -105, -30, 21, -125, 92, -5, 81, 2, -49, -97, 10, 67, -80, 10, 69, 117, -62, -54, 110, -9, -89, -9, -52, -46, -91, -52, -56, -58, 62, 11, -69, 18, 116, 84, 113, -1, -44, 39, -119, 118, -108, 28, 33, -74, 54, -45, -22, 91, -34, 38, 98, -3, -20, 24, 110, 15, 72, -103, -122, 126, 13, 52, 105, -80, 104, -8, 51, 63, -96, -119, -59, 22, 27, 83, 66, 74, 102, -83, -111, -112, -55, -29, -2, 109, 24, -27, -6, 50, 9, 121, -56, 66, 57, 52, -86, 14, -92, 31, 40, -73, 5, 99, 34, 6, 106, 6, 125, -119, 123, 28, -104, 9, 31, 104, 82, -44, 80, -53, 24, -120, -117, -32, -105, -87, 112, -82, -26, -44, -27, -82, 98, 118, 48, 119, -11, 108, -96, 71, 28, -3, -91, 62, 114, -128, 67, 33, 49, -38, 113, 93, 110, 3, 38};
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
    msg.setTimeStamp(0.5961015041778402);
    msg.setSource(20357U);
    msg.setSourceEntity(55U);
    msg.setDestination(47012U);
    msg.setDestinationEntity(197U);
    msg.req_id = 34080U;
    msg.ttl = 39068U;
    msg.destination.assign("CDZCOSICQNKMEEORMYOJBGIMXZTDZVAZBIGYLANPKZANQFTYIIQVTPQNHHBBYPEDTWVTJKWYABNICGZOHEXHWPRQRDNXUREPCMGFZFFVGHLGGTDLJHJKUHSLACFQYSETFAVXSFOWNW");
    const char tmp_msg_0[] = {21, -32, -73, 75, -52, 28, -102, 12, 57, -20, -111, 56, 49, 114, 71, -123, 0, -82, -86, -24, 73, -66, 79, 9, 7, 50, -101, -4, 34, -50, 35, -43, 78, -85, -20, -71, 106, 10, -43, -17, 121, -121, 126, -91, -15, 66, -128, -123, -128, -30, 55, 9, -42, -128, 100, -110, 56, -100, -7, 84, -40, 126, 115, 111, -104, -72, 85, 110, -111, 103, -117, 12, -124, -68, 12, 21, 44, -87, 22, -119, -94, -78, -80};
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
    msg.setTimeStamp(0.9937480948853348);
    msg.setSource(24301U);
    msg.setSourceEntity(202U);
    msg.setDestination(47284U);
    msg.setDestinationEntity(48U);
    msg.req_id = 16388U;
    msg.ttl = 25189U;
    msg.destination.assign("YGJZVNDOCQKDKWVDUKKVVHULMKRZGMATBJZVJARYRKLBAKKEEEFTTWWEZYCHUCTLMMSXI");
    const char tmp_msg_0[] = {73, -12, -49, -104, 80, 114, -88, -67, 59, 116, -6, 5, -112, 11, -88};
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
    msg.setTimeStamp(0.5892297474891209);
    msg.setSource(7254U);
    msg.setSourceEntity(71U);
    msg.setDestination(25724U);
    msg.setDestinationEntity(20U);
    msg.req_id = 15913U;
    msg.status = 201U;
    msg.text.assign("JRHQKQGHIELMUKAAKVRPCPWIVPAGVVCEOEXNNHKDJENHUBLAZTAFAPDEBEJBDPLFRBQUOOSXSTPSWRFGSTPZCBGIOCFSGMROMPBXDTBWTCOAPCLYVMUFYFKJJY");

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
    msg.setTimeStamp(0.2689438085702469);
    msg.setSource(39U);
    msg.setSourceEntity(231U);
    msg.setDestination(45757U);
    msg.setDestinationEntity(3U);
    msg.req_id = 48480U;
    msg.status = 217U;
    msg.text.assign("LCLUUTBOXZHWZVCHTXDNYRIJCPUAVJFTVSSKCRYPINIXOBOBKVOYROCXGGEATDSTQHXIDGYEHDCEFFTGKRGUVWBQNVFDBHWEALXETJBQPJHEBPNMINMWFARZUEILGJKPMBRUSZCHWDFQQGAVMRMLBMJSTPISVNOZYLQXIKLNAGPTDFIYYWBJDFKHAWTHSZCGDFE");

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
    msg.setTimeStamp(0.42666776339727663);
    msg.setSource(23241U);
    msg.setSourceEntity(82U);
    msg.setDestination(64538U);
    msg.setDestinationEntity(96U);
    msg.req_id = 32765U;
    msg.status = 55U;
    msg.text.assign("CJPMWTAKAKBONHGNJPVFIRNHHCIFFUMTFUZJZTQOWLBPADMZCONLJDVDFTQKBLHHXWDMSZTWR");

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
    msg.setTimeStamp(0.4827457262434762);
    msg.setSource(39689U);
    msg.setSourceEntity(224U);
    msg.setDestination(42814U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("AANLVBTFUEIXHFIFSCJBTRXG");
    msg.links = 3527291048U;

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
    msg.setTimeStamp(0.7929470101694854);
    msg.setSource(58603U);
    msg.setSourceEntity(151U);
    msg.setDestination(852U);
    msg.setDestinationEntity(204U);
    msg.group_name.assign("TINKDNWACDNGZUHJGCDYLYRVJEOAXWPYRUSYEAIGMEDFEHNUQRWPRGCOQVUJRKGOXMBHXEUCZTQIWMZCQMAJQSDYPICZWQJGSPOYBIXBXHRFDNCIWVZYFSZFTQKSJXPVORNIHFBSARJKXAOEEZDNPIDJIXMKOUKPONTEJUGEBJCMGFSWUXQLSVYTVTUBL");
    msg.links = 2116846325U;

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
    msg.setTimeStamp(0.08592657566699191);
    msg.setSource(56694U);
    msg.setSourceEntity(182U);
    msg.setDestination(42950U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("YKJBJYTJUXABBKPTZGRYMAYUIUUCJKDOKVOPLHFMIKJQPRVWRIGGECDFEGNHCGLYVNNZWKLZYYASTDSZFAJFOWRPMFMJIOGSBELWXWIIELCNKSGEDVWXBKEDNSWGCCJCBZROLZRFVERNWYHNEBRIMBUMSOKVXTIZDOSQQYLP");
    msg.links = 2315628963U;

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
    msg.setTimeStamp(0.7184593192895631);
    msg.setSource(31161U);
    msg.setSourceEntity(141U);
    msg.setDestination(23126U);
    msg.setDestinationEntity(109U);
    msg.groupname.assign("AJZILULVVJHFJQLMAYMWZNVGUBGCLCGMSLYBCDYZDIWTJHGMIPOFAHSDHKGRMSRNERBEOFHTKKINITUMGSOXRQVSWTXXCTKRFNTUOYSQPZJRLAPQB");
    msg.action = 10U;
    msg.grouplist.assign("FMTZCZHCFLMRVWQLRSEPCTJDTDTKXKMDFHLQNFEQRUVFNRYHAPFMEXJASITTZDSMUELDUHFMKOSWKAPEZPDNKXZSHUWRVBBSEZZEQUCSIKLONRIVGLHYIIYYBZBJHKYNPPOYHWVWIGAYNDQCGNMJSNNOHVTDIGAYPUJEOQLEBQKMWXOWJBSJFPXHJOGPCCAGMQYOWXVALEOVOGWIZVB");

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
    msg.setTimeStamp(0.8330456259142826);
    msg.setSource(53869U);
    msg.setSourceEntity(180U);
    msg.setDestination(31983U);
    msg.setDestinationEntity(243U);
    msg.groupname.assign("ZOBECOBHNPMBXEPBFRBPJNLKWQGVPQRDLZZTHYKLOBCQQLHGVTOFBXVRZQSOYSFLYDFKGEQCEEBKQAFFZLVLMOJTIXLXNICRSCYMSEFASITTCYSTDEKS");
    msg.action = 135U;
    msg.grouplist.assign("UPRSANWDICEZGAYYLRMIJTQVQBYWPJXGLDYFYKTJPPOGWSKKETLVLEHQNRJGFNHFSORQJHMHBXNJESUAEIWGICOFXDZFWIARNDSHOZOVBCBACLMKSCXESHDRGDVCKHWGIKVMCIXPNFIIVCIQHKXPGRFEBLMZRCPYUWYWDPNEOKAUBZLHQUZTJMZTNSJPBZUXZFANOQJTEKMFXVAVAPQCLXSTVYMYGFDTQRYDTDQRMWBL");

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
    msg.setTimeStamp(0.9357515010681392);
    msg.setSource(16930U);
    msg.setSourceEntity(172U);
    msg.setDestination(32778U);
    msg.setDestinationEntity(163U);
    msg.groupname.assign("TBJWZPFIYRHYEZXTVMECJRNTFAGVIOUPFQTIOCGBLFICECLEQSWWXLNADGDQWBGROTSMPHRDETXGQPLAYJVISPJZZJSAWJWZRCFZMTYNSZDBPQMRVDCVFLVEEBGUPMFPOUYNWHKHNFJSC");
    msg.action = 21U;
    msg.grouplist.assign("UFTLAGXZBRLUCYNLBGEAXVPLQJKMDAMFLUZHUSJHCWLXGVMLLIWEHIUTACRTBQPATXYHEFGRZNJQQSDCXFNKJVYMRXWKOWYFGCSGTPNRTSHSKPVWGBOQHMZELZIDIDKZQPGTQCEQSYPIEZOKHYAASNJDJMXXDZISJZERSKUVTNPVMBRENLNSRDVMCMJVVCYIPAHDBTCOWAHUUPQBOAYDKTCBRFKJRNWHQUFGIGNYFDBWXBOUZWOKIIOMY");

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
    msg.setTimeStamp(0.07709593070244036);
    msg.setSource(58853U);
    msg.setSourceEntity(193U);
    msg.setDestination(36296U);
    msg.setDestinationEntity(200U);
    msg.value = 0.8467752294509525;
    msg.sys_src = 49683U;

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
    msg.setTimeStamp(0.0923674705084172);
    msg.setSource(61962U);
    msg.setSourceEntity(23U);
    msg.setDestination(49212U);
    msg.setDestinationEntity(37U);
    msg.value = 0.026422820037200423;
    msg.sys_src = 42011U;

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
    msg.setTimeStamp(0.7822191499256334);
    msg.setSource(2124U);
    msg.setSourceEntity(66U);
    msg.setDestination(48926U);
    msg.setDestinationEntity(114U);
    msg.value = 0.2972397476175057;
    msg.sys_src = 9330U;

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
    msg.setTimeStamp(0.7751185100572756);
    msg.setSource(15567U);
    msg.setSourceEntity(152U);
    msg.setDestination(36670U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5392958634178636;
    msg.units = 30U;

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
    msg.setTimeStamp(0.05967039467412194);
    msg.setSource(47551U);
    msg.setSourceEntity(148U);
    msg.setDestination(3259U);
    msg.setDestinationEntity(159U);
    msg.value = 0.5717818994928816;
    msg.units = 138U;

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
    msg.setTimeStamp(0.7401232192645338);
    msg.setSource(47631U);
    msg.setSourceEntity(177U);
    msg.setDestination(35761U);
    msg.setDestinationEntity(194U);
    msg.value = 0.8359744410095166;
    msg.units = 179U;

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
    msg.setTimeStamp(0.038513480895849384);
    msg.setSource(58092U);
    msg.setSourceEntity(190U);
    msg.setDestination(18208U);
    msg.setDestinationEntity(143U);
    msg.base_lat = 0.06983286686198564;
    msg.base_lon = 0.07985590332447579;
    msg.base_time = 0.45573789446966306;

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
    msg.setTimeStamp(0.47539887008105863);
    msg.setSource(11269U);
    msg.setSourceEntity(199U);
    msg.setDestination(32221U);
    msg.setDestinationEntity(130U);
    msg.base_lat = 0.2801725307906078;
    msg.base_lon = 0.01367472845124218;
    msg.base_time = 0.12707854048114153;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 50290U;
    tmp_msg_0.destination = 42857U;
    tmp_msg_0.timeout = 0.8766572940547535;
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UUSGHLGQGMIZKHNBEXKOJCBMFUFEFOAND");
    tmp_tmp_msg_0_0.value.assign("SXOSPGORSSTNGSFAEYRTFEAKPBCDLEMBXAIJGIFKHOQKSUNJCXUHYUFPSKGIZTLYEJPSAVTMVROXXNLYUDBTJBVZAZEHXKUBPHGATTQIQWHCDDODNYFHHCKUGIQLABNRYJEJPNOIRVRXOLDKFSEMRZZTCBID");
    tmp_tmp_msg_0_0.type = 224U;
    tmp_tmp_msg_0_0.access = 10U;
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
    msg.setTimeStamp(0.3548979469900393);
    msg.setSource(37060U);
    msg.setSourceEntity(19U);
    msg.setDestination(41662U);
    msg.setDestinationEntity(31U);
    msg.base_lat = 0.3557884134764856;
    msg.base_lon = 0.8766827437627421;
    msg.base_time = 0.7790641985356407;

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
    msg.setTimeStamp(0.09887518561931985);
    msg.setSource(17834U);
    msg.setSourceEntity(211U);
    msg.setDestination(4601U);
    msg.setDestinationEntity(54U);
    msg.base_lat = 0.9333330459499584;
    msg.base_lon = 0.10370953755870915;
    msg.base_time = 0.8679087156127362;
    const char tmp_msg_0[] = {-33, 125, 30, -116, -56, -43, 80, 94, -93, -56, 105, 83, -19, -121, 4, -5, 57, -66, 18, 10, 116, 19, 117, -44, -86, -20, 47, -109, 119, -22, 28, -78, 1, 26, -27, 31, -9, 25, -101, -39, 70, 63, 15, -45, -17, 50, -106, -69, -100, -31, -110, -45, 110, -80, 119, -29, -39, -10, -73, 91, -85, -27, 107, -9, -108, -4, -102, 48, 5, 108, -80, 16, 30, 25, -46, 122, -33, 125, -65, -43, -93, -18, -33, 103, -102, -90, 81, -4, -26, -106, -111, -20, -42, 78, 67, -109, 88, 117, -9, 97, -111, 1, 80, -97, 95, -106, -125, 49, 98, -10, -104, 95, -14, 35, 6, 30, -96, -79, -105, 24, 88, 70};
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
    msg.setTimeStamp(0.2086576362222904);
    msg.setSource(54055U);
    msg.setSourceEntity(161U);
    msg.setDestination(27630U);
    msg.setDestinationEntity(25U);
    msg.base_lat = 0.2627772599812961;
    msg.base_lon = 0.38026771589547304;
    msg.base_time = 0.9553333609754586;
    const char tmp_msg_0[] = {-115, 72, 117, -57, -4, -35, 95, 56, 74, 37, -86, 1, 24, 58, -99, 8, 98, -13, 115, -23, 110, -119, -118, -45, -34, 92, -72, 78, 120, -76, 97, -96, 66, -29, -51, -67, 61, 39, 84, -104, 25, 32, 88, 124, -59, -57, 87, 66, 43, 112, 83, 118, -113, 86, -54, -78, -4, 109, -42, 103, 69, 66, -97, 25, -41, -80, -63, 122, 50, 60};
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
    msg.setTimeStamp(0.551353474342005);
    msg.setSource(56763U);
    msg.setSourceEntity(57U);
    msg.setDestination(53924U);
    msg.setDestinationEntity(164U);
    msg.base_lat = 0.47586651121904744;
    msg.base_lon = 0.44623769638863187;
    msg.base_time = 0.5406908255134114;
    const char tmp_msg_0[] = {103, -88, -10, 13, 76, -57, -124, 106, 101, 57, -51, -44, -59, 58, -6, -123, -31, 111, -115, -45, -115, 32, -38, -99, -18, 62, -100, 110, -9, 34, 12, -128, 30, 96, 121, 77, -34, -75, -94, -118, 49, 63, 84, 102, -56, -89, 68, -38, 105, -24, -104, -66, -69, -104, 46, 111, 75, -36, 89, -93, 29, -37, -42, -61, -39, -15, 79, -18, 57, 109, 106, 92, -122, -90, -46, -60, 6, -107, 61, 81, -102, 83, -100, 26, -71, 73, -14, -94, 84, -79, 93, -4, -56, 42, 23, 93, -48, -94, 102, -34, -90, -27, 7, -64, -108, -60, 115, -29, -87, 53, 46, -39, -113, -78, 43, 51, -50, 14, -18, -12, 106, -48, 65, -49, 90, 27, 23, 26, 102, 102, 36, 72, -41, -16, 63, 19, 10, -100, -47, -96, -111, -106, 98, -74, 69, 65, -60, -96, 71, 16, -26, -36, 52, 89, 82, 94, -68, -9, 4, -126, 32, -128, -102, 90, 100, 70, -80, 60, -112, -98, -108, 102, -36, -30, 67, 51, 70, 24, -104, 22, -13, 23, -77, 73, 44, -39, 65, -54, -106, 81, -35, -67, -46, 0, -103, -13, -33, 0, 45, -112, -20, 115, -17, -74, -11, -91, 94, 46, -66, -20, -34, -84, 32, -40, -64, 102, -93, -37, 119, 6, -33, -100, -53, 13, -28, 80, -55, -1, 45, 54};
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
    msg.setTimeStamp(0.05936602191182927);
    msg.setSource(38623U);
    msg.setSourceEntity(123U);
    msg.setDestination(21103U);
    msg.setDestinationEntity(194U);
    msg.sys_id = 60124U;
    msg.priority = -75;
    msg.x = 15487;
    msg.y = 17333;
    msg.z = -30016;
    msg.t = -20703;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 38658U;
    tmp_msg_0.destination = 41411U;
    tmp_msg_0.timeout = 0.6271056927987463;
    IMC::CrudeOil tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5047414434767376;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8387712118854298);
    msg.setSource(4639U);
    msg.setSourceEntity(49U);
    msg.setDestination(5867U);
    msg.setDestinationEntity(204U);
    msg.sys_id = 21840U;
    msg.priority = -70;
    msg.x = -24863;
    msg.y = -16804;
    msg.z = -29810;
    msg.t = -9237;
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.043759224013014575;
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
    msg.setTimeStamp(0.7570186823381762);
    msg.setSource(25437U);
    msg.setSourceEntity(228U);
    msg.setDestination(1262U);
    msg.setDestinationEntity(141U);
    msg.sys_id = 8070U;
    msg.priority = -12;
    msg.x = 6550;
    msg.y = 7236;
    msg.z = -16684;
    msg.t = 11143;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("EWIHPKQVXEFTVVCEYSUSCNFGHAHEAAFVGBLUOZWQDSJZJTKWAVFZUAPVEXVSRPMYQWYYXHNCIKLQKKSMRCU");
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
    msg.setTimeStamp(0.17070257960865143);
    msg.setSource(64938U);
    msg.setSourceEntity(103U);
    msg.setDestination(52412U);
    msg.setDestinationEntity(38U);
    msg.req_id = 23326U;
    msg.type = 0U;
    msg.max_size = 35966U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3796925294999334;
    tmp_msg_0.base_lon = 0.39414450129074263;
    tmp_msg_0.base_time = 0.7005279005306615;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 4865U;
    tmp_tmp_msg_0_0.destination = 62754U;
    tmp_tmp_msg_0_0.timeout = 0.6078382755833784;
    IMC::DissolvedOxygen tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.3488585035264379;
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
    msg.setTimeStamp(0.5806393481673735);
    msg.setSource(4309U);
    msg.setSourceEntity(88U);
    msg.setDestination(599U);
    msg.setDestinationEntity(49U);
    msg.req_id = 51398U;
    msg.type = 205U;
    msg.max_size = 45939U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6216474859391365;
    tmp_msg_0.base_lon = 0.2934216287315936;
    tmp_msg_0.base_time = 0.2436227061003814;
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
    msg.setTimeStamp(0.9355132274559286);
    msg.setSource(64940U);
    msg.setSourceEntity(151U);
    msg.setDestination(50083U);
    msg.setDestinationEntity(111U);
    msg.req_id = 7719U;
    msg.type = 194U;
    msg.max_size = 541U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.45920134089785747;
    tmp_msg_0.base_lon = 0.7713757525750016;
    tmp_msg_0.base_time = 0.9763652441291372;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 34097U;
    tmp_tmp_msg_0_0.destination = 50399U;
    tmp_tmp_msg_0_0.timeout = 0.19228131642720592;
    IMC::FollowSystem tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.system = 49658U;
    tmp_tmp_tmp_msg_0_0_0.duration = 60219U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.034046856273048376;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 198U;
    tmp_tmp_tmp_msg_0_0_0.x = 0.7806254420512677;
    tmp_tmp_tmp_msg_0_0_0.y = 0.41479384961260923;
    tmp_tmp_tmp_msg_0_0_0.z = 0.2566395013029692;
    tmp_tmp_tmp_msg_0_0_0.z_units = 179U;
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
    msg.setTimeStamp(0.15840591486607647);
    msg.setSource(3712U);
    msg.setSourceEntity(108U);
    msg.setDestination(10271U);
    msg.setDestinationEntity(119U);
    msg.original_source = 53952U;
    msg.destination = 22173U;
    msg.timeout = 0.6293218308657785;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.5930065084420446;
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
    msg.setTimeStamp(0.8789994306069304);
    msg.setSource(11765U);
    msg.setSourceEntity(176U);
    msg.setDestination(57835U);
    msg.setDestinationEntity(167U);
    msg.original_source = 12704U;
    msg.destination = 23807U;
    msg.timeout = 0.3753464453375043;
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 123U;
    tmp_msg_0.angle = 0.0997008851618173;
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
    msg.setTimeStamp(0.6564629753530354);
    msg.setSource(10055U);
    msg.setSourceEntity(76U);
    msg.setDestination(5458U);
    msg.setDestinationEntity(19U);
    msg.original_source = 25300U;
    msg.destination = 50119U;
    msg.timeout = 0.9245711326155122;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 5109U;
    tmp_msg_0.lat = 0.5057694979822428;
    tmp_msg_0.lon = 0.1755306012757274;
    tmp_msg_0.z = 0.6472397433464547;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.duration = 28458U;
    tmp_msg_0.speed = 0.026896366081168077;
    tmp_msg_0.speed_units = 98U;
    tmp_msg_0.type = 215U;
    tmp_msg_0.radius = 0.017324952371422175;
    tmp_msg_0.length = 0.3064595352330166;
    tmp_msg_0.bearing = 0.2341093050725228;
    tmp_msg_0.direction = 186U;
    tmp_msg_0.custom.assign("YDPYQPYBNWKAWOIAIUXDZZPYXPANRHHKJCAKLZYGOEG");
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
    msg.setTimeStamp(0.4188646827045889);
    msg.setSource(36040U);
    msg.setSourceEntity(163U);
    msg.setDestination(54234U);
    msg.setDestinationEntity(177U);
    msg.type = 189U;
    msg.comm_interface = 36884U;
    msg.model = 17165U;
    msg.list.assign("WTSIIMKXGD");

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
    msg.setTimeStamp(0.6488421973486255);
    msg.setSource(60801U);
    msg.setSourceEntity(237U);
    msg.setDestination(30398U);
    msg.setDestinationEntity(69U);
    msg.type = 56U;
    msg.comm_interface = 8186U;
    msg.model = 33184U;
    msg.list.assign("BSTSAOHAEECURPKWLIGPVMFNMWXSIWMQRBVQCCJHVPDXHAHEUNKAFTGTCYSYOKGUBIZFOVCQMARAH");

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
    msg.setTimeStamp(0.8810571968534395);
    msg.setSource(36816U);
    msg.setSourceEntity(199U);
    msg.setDestination(1093U);
    msg.setDestinationEntity(185U);
    msg.type = 82U;
    msg.comm_interface = 38375U;
    msg.model = 43315U;
    msg.list.assign("JKBEKGQXVONHLECNFWIPNBHYGYIXSUZZKVGYFMNEVXHQPCTGYAQRXTCRRZRDRJWTOKKSGTHBGAUWCUQIAOJOZFPJZXALODBWFPVKKBQSPLIPFJUMAPGEWEDVECZEKLTDAQSDBMOLNRXNY");

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
    msg.setTimeStamp(0.6284055414423149);
    msg.setSource(28687U);
    msg.setSourceEntity(225U);
    msg.setDestination(12063U);
    msg.setDestinationEntity(136U);
    msg.type = 113U;
    msg.req_id = 520638209U;
    msg.ttl = 50255U;
    msg.code = 135U;
    msg.destination.assign("ABJIRHMLGXOCZFIXJGGINWMUIANUZTYDXIUXWHKNQEXRUPDHBORYZPGHYQWUDFFNRRTLBASPTLHNQRVZKBFVGDEDWDMKKWBTXMXEOIAZCEYPEOJDNTCRKMQYUWCQJHIOFVVAOGKCSLZOMHFSKFBAEUASWVCNLZZJRHSCDATVBQCPUFITRMSXVKDYAJOSQPTOSQRSYJDLUBYALELOZJMWQGVMCPKFCELBHIGVMGLEVYFWQN");
    msg.source.assign("LKGJBRNFUUXCORVSMVZSQTLJCLAHZXCAIZIXBGHSYGYXREEZFDQFCTIJFYURVQZTFAIMULRAITWM");
    msg.acknowledge = 46U;
    msg.status = 251U;
    const char tmp_msg_0[] = {62, -72, -110, 0, -109, 4, 80, 58, 57, -61, 7, 120, 6, -24, 79, 59, 70, -15, -73, -32, 2, 20, 27, -75, 64, 44, 22, -40, 65, -39, -74, -80, 37, 61, -117, -83, -5, -22, 115, 4, 48, 109, 61, -85, 19, 99, 71, 69, -74, 33, 1, 0, -107, -3, 55, 26, -4, -121, 52, -113, 30, -15, 114, -11, 71, 75, 12, 71, 90, 47, -20, 62, 86, -86, 7, -95, -79, 81, -116, 14, 68, 120, 53, 14, 98, 3, -15, -25, 79, -103, 90, -11, -60, 38, -61, 119, 12, 30, 105, 93, 108, 58, -63, 48, 18, 120, -61, 115, -6, -57, -94, -98, -38, 48, -68, -113, 5, -42, 26, -7, 113, -125, -83, 38, 7, 117, -111, 58, 102, 96, -89, 81, -98, 111, 28, -83, -111, 27, 30, -104, -89, -111, 16, 92, 54, -48, -21, -49, 120, -71, 111, 6, 38, 47, 73, 16, -34, 126, 111, 16, 88, -127, -42, 75, 122, 126, -30, 76, 29, -38, 26, -32, 1, -117, -108, 96, -20, -8, 52, -4, -30, 105, -13, -6, 107, -44, 25, -13, 46, -24, 19, -58, -89, 0, -71, 111, 14, 78, 112, 102, 115, -123, 124, 45, -3, 92, -16, 116, -59, -53, -123, 94, -83, -105, 20, -57, 113, 96, 70, 60, 89, 78, -26, 17, -82, -102, 12, 32, 101, -5, -40, -2, 68, -62, 43, -93, -36, -41, -64, 90, -121, 53, -74, 41, 112, 74, 83, 53, 98, -57, 124, 14, 22, -109};
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
    msg.setTimeStamp(0.2836718665108473);
    msg.setSource(16033U);
    msg.setSourceEntity(133U);
    msg.setDestination(47536U);
    msg.setDestinationEntity(150U);
    msg.type = 49U;
    msg.req_id = 2685720326U;
    msg.ttl = 63745U;
    msg.code = 104U;
    msg.destination.assign("COGQNPEIEPEZDSQWINIXDL");
    msg.source.assign("LMJLMVRMTTJIZFQNLCBITPXSJUZPTFJAOH");
    msg.acknowledge = 169U;
    msg.status = 118U;
    const char tmp_msg_0[] = {38, -91, -79, -56, 26, -11, -67, 75, 124, 120, -91, -45, 70, -3, 121, 8, 37, 64, 110, 85, 97, -87, -58, 63, 87, 126, -8, -127, 33, -42, -7, 11, -82, -93, 25, -45, -20, -121, 81, 65, 107, -49, -114, -36, 49, -1, -75, -19, -73, 19, -50, 81, -90, 60, 74, 42, -66, -78, 104, 3, -60, -115, -31, 68, 65, 97, -13, -71, 63, 40, -108, 73, -1, -94, 106, 43, -91, -90, 5, -35, -99, -64, -66, -80, -26, 66, -68, 36, 84, 117, -105, 108, 14, 90, -36, -123, -48, 59, 100, 63, -67, 105, 113, -52, 69, -92, -105, 96, 39, -62, 16, -13, -4, -42, 102, -29, 20, 58, -79, 124, -42, -41, -9, 5, 123, -117, 115, -124, -92, -27, 10};
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
    msg.setTimeStamp(0.21820144528147212);
    msg.setSource(5477U);
    msg.setSourceEntity(25U);
    msg.setDestination(12440U);
    msg.setDestinationEntity(181U);
    msg.type = 20U;
    msg.req_id = 1409761588U;
    msg.ttl = 48699U;
    msg.code = 222U;
    msg.destination.assign("QNRIFHHEHBKLIIBRCYNDAVPWXSZTKMRFBTHIYALYQNRHVDZSWOTKWHS");
    msg.source.assign("WDIPTQRUWSBKMPQVAPWSWEKKFXYCZJRLROJBFKNOZOMJMUJRBJACVXVZGJKENMCPUUCRIZLYEROWXEMAYBENXRIKNYECZRXCDMBZYJHZAUVJPIYDUFOTSBS");
    msg.acknowledge = 156U;
    msg.status = 107U;
    const char tmp_msg_0[] = {121, -106, -117, -20, 5, -81, 80, -88, -2, 65, -105, -96, 7, 1, -102, -75, 15, 108, -33, -62, 89, -3, -50, 64, 49, 110, -59, -110, -62, 66, 97, 86, 104, -119, -122, -8, -80, 100, -89, -99, 27, -95, 70, 34, -96, 46, -34, 34, 71, -100, -118, 103, 9, -107, -43, -81, 100, 118, 51, 28, -54, -123, 28, -10, -66, -87, 74, 119, 86, -16, -117, 101, -125, 124, -64, 104, -103, 109, 88, 42, 123, 17, 110, 26, 81, -62, 111, 61, -19, -49, 40, -58, -91, -26, 36, -119, -93, -86, 114, -75, 99, 89, -80, 114, -40, 73, -38, 80, 24, -82, -51, -116, 30, -56, -114, -40, 79, -5, 57, 95, -76, 48, -106, 31, -117, 65, 53, 61, 16, 113, 21, -57, -97, 101, 11, 38, 105, -56, 113, 104, 34, -104, -33, -28, -67, -55, 101, -11, -98, -81, 4, 60, -87, -116, -72, -105, 82, -21, -89, 56, -74, 126, -113, 57, 85, -56, -76, -69, -92, 123, 53, 113, 6, -103, -35, 89, 67, 94, -12, 110, 125, -37, 46, 75, -41, -49, -31, -97, -111, 29, 38, -101, -66, 89, 11, 72, -51, 75, 124, -24, -109, 50, 30, 32, 7, 71};
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
    msg.setTimeStamp(0.19501834934555562);
    msg.setSource(63392U);
    msg.setSourceEntity(250U);
    msg.setDestination(3723U);
    msg.setDestinationEntity(224U);
    msg.id = 191U;
    msg.range = 0.0096117342155293;

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
    msg.setTimeStamp(0.9598695546991647);
    msg.setSource(51097U);
    msg.setSourceEntity(209U);
    msg.setDestination(4962U);
    msg.setDestinationEntity(175U);
    msg.id = 41U;
    msg.range = 0.5056516207887854;

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
    msg.setTimeStamp(0.518112706217145);
    msg.setSource(59722U);
    msg.setSourceEntity(43U);
    msg.setDestination(58168U);
    msg.setDestinationEntity(184U);
    msg.id = 88U;
    msg.range = 0.139968666269481;

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
    msg.setTimeStamp(0.8629481884011734);
    msg.setSource(4506U);
    msg.setSourceEntity(65U);
    msg.setDestination(37099U);
    msg.setDestinationEntity(12U);
    msg.beacon.assign("PJVJYIMJWENPWQSOKKGNNUGZGJCXHXHCVXUGUMGZRHAECISILMCASUHPQIWNRQDJSJQLRBQBAGCXEBPDSKOHFZDMEELEFRBWTSMTRTMBVLILGAZMQOADFIKIUFIPVYNREBKTPHVVZYYKXQWYFFB");
    msg.lat = 0.13541111874621847;
    msg.lon = 0.5740659425366618;
    msg.depth = 0.35274525958659153;
    msg.query_channel = 207U;
    msg.reply_channel = 41U;
    msg.transponder_delay = 29U;

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
    msg.setTimeStamp(0.970348323138655);
    msg.setSource(4914U);
    msg.setSourceEntity(161U);
    msg.setDestination(42878U);
    msg.setDestinationEntity(168U);
    msg.beacon.assign("TMORJDDAIGYBFGYQAXYTGRRTJRBOGPDZQZUYWQLCHCQBGYNHWKNVCIHMJDELVIQFMUSULBUDZJVSAOOFENFPSXQEKXAHPCZREFJOIODWQCLNCOWTZYBSV");
    msg.lat = 0.8533942640132134;
    msg.lon = 0.042682059546816475;
    msg.depth = 0.5884229205778183;
    msg.query_channel = 23U;
    msg.reply_channel = 51U;
    msg.transponder_delay = 69U;

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
    msg.setTimeStamp(0.8733944558430486);
    msg.setSource(19229U);
    msg.setSourceEntity(37U);
    msg.setDestination(6256U);
    msg.setDestinationEntity(199U);
    msg.beacon.assign("FXWLKKGOVDKBIDFTLMILZKMIFEHDCVQOISMABPEDAACHWFXCBYFVOIZYNRNEHHEACTRNTJDRJQPYNTZPEYTLLWNSOUMXOUXAJGJYZCWPVGSCZJTPDISUAZJVRKQLXAVCUVKVSUOIUHAXUSCOXRRIKHQXBQBBYSMEWCLNJOHNUXVLMOPANACMRVGZPGQWWPNYZKZGSTOILRZQ");
    msg.lat = 0.1321965003870036;
    msg.lon = 0.5888288237551594;
    msg.depth = 0.17048328382363087;
    msg.query_channel = 198U;
    msg.reply_channel = 206U;
    msg.transponder_delay = 98U;

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
    msg.setTimeStamp(0.6777158938921359);
    msg.setSource(30932U);
    msg.setSourceEntity(214U);
    msg.setDestination(42960U);
    msg.setDestinationEntity(139U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.9512393221521184);
    msg.setSource(7669U);
    msg.setSourceEntity(67U);
    msg.setDestination(62205U);
    msg.setDestinationEntity(221U);
    msg.op = 169U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PEIPLVFZEIPBBRTOEYCAQSHKNIBQAVODYBUUSDYSIXQCJJESTETPRUEFOZWZAVKDWPFSSLUKGPIHDRXKERKVXFKDONPXSSLPJAGEVWTQJCDIFRDMAZRWMFGZYNNGUVHPTOJZNQQXNDBFVOKJTJSGNBXGUHYPIVZRLZTUDHUZJBCAEWOACSMQO");
    tmp_msg_0.lat = 0.13139207731483926;
    tmp_msg_0.lon = 0.6239237781506793;
    tmp_msg_0.depth = 0.30991583808337664;
    tmp_msg_0.query_channel = 119U;
    tmp_msg_0.reply_channel = 181U;
    tmp_msg_0.transponder_delay = 169U;
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
    msg.setTimeStamp(0.8478354131687746);
    msg.setSource(1511U);
    msg.setSourceEntity(106U);
    msg.setDestination(30859U);
    msg.setDestinationEntity(77U);
    msg.op = 47U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BGIBAWNTJZCBLEZFVDJCYQPIYCIANRLTLAHSWHHAEDHUXLWWFERUHXAZQDICMGZMOFDUYJUJGJCDYKVWLMOOPGCEDZFTODBHWZNPRBXCOFXSIOEQHVLSLKTYWAK");
    tmp_msg_0.lat = 0.25277913864542145;
    tmp_msg_0.lon = 0.529863969428731;
    tmp_msg_0.depth = 0.019005872424536885;
    tmp_msg_0.query_channel = 8U;
    tmp_msg_0.reply_channel = 117U;
    tmp_msg_0.transponder_delay = 218U;
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
    msg.setTimeStamp(0.5624006855976885);
    msg.setSource(42689U);
    msg.setSourceEntity(201U);
    msg.setDestination(30755U);
    msg.setDestinationEntity(5U);
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.32505289107988655;
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
    msg.setTimeStamp(0.8630938727053786);
    msg.setSource(14963U);
    msg.setSourceEntity(86U);
    msg.setDestination(28326U);
    msg.setDestinationEntity(58U);
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.6642273601362885;
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
    msg.setTimeStamp(0.08445613889755432);
    msg.setSource(30645U);
    msg.setSourceEntity(43U);
    msg.setDestination(17788U);
    msg.setDestinationEntity(187U);
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.47512057652587236;
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
    msg.setTimeStamp(0.7778925298850881);
    msg.setSource(21793U);
    msg.setSourceEntity(246U);
    msg.setDestination(35033U);
    msg.setDestinationEntity(241U);
    msg.op = 204U;
    msg.system.assign("MPTEREWLFOAIHGGIVSTYROYSWNXDOUBBLDBMOMZJWYLDDUKJVFTEAGBZSZZRYIWAFGJFETQNSWYLVNNAXBYITJJTXFPXOEREMSDRWXLJASLNCHMOMQCZRUHFOIQQUFZFKPHYLDQQTGNSGICVXAQDYGKYRVHBESHDFNZTPQJXLUKMCHKMOCIPTVKRSC");
    msg.range = 0.135333126399388;
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.9606519360700768);
    msg.setSource(22832U);
    msg.setSourceEntity(157U);
    msg.setDestination(63483U);
    msg.setDestinationEntity(201U);
    msg.op = 76U;
    msg.system.assign("PBUFNVWAZJKCYHQPSZUWJSWMOCLKSCOPRZYASFFGNDNMQRJDMIVHOTIREBPTPZGQDWXEKUXWTLVFOWBVMNVTXDYAAPDEHMAMFZXZHJZXESYZFNSDEBRFILTDAHQVFCCSQULIJFUHXPGVRINTQJCFRKCHGKYZBNQXDXBH");
    msg.range = 0.5486781885051594;
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 27;
    tmp_msg_0.value = -924373019;
    tmp_msg_0.gain = 12U;
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
    msg.setTimeStamp(0.4440712825982288);
    msg.setSource(57582U);
    msg.setSourceEntity(28U);
    msg.setDestination(62525U);
    msg.setDestinationEntity(102U);
    msg.op = 136U;
    msg.system.assign("WHOEGNATHPBQCRZOATNOQIQONOKOMMWQLLBZWCWMTKJOSRSVXCTKBAHWBUOPRKFJDGOWYSWMKNSETYXEAEDZLBWHIJIRKVFRLYCNYRUDZCVQWLIFSPGANXPUJEVDAXJIDZSRTTECXHNPKIFXSVIFQDNMAMTPMBPFZVICPZZGHUUHQPCDDJGLMBJPGGVUYNFYLEYWHQXBQTEACVXVJJBUMYSFUUXSRHNGAEDFTLLAJRFYIYMBHDOVGGXKLIK");
    msg.range = 0.5436871926621181;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 118U;
    tmp_msg_0.comm_interface = 131U;
    tmp_msg_0.period = 674U;
    tmp_msg_0.sys_dst.assign("MOJWXEDDIFVMPHUETVEBKOYPTOUBLGAQBDZOLZVIOSGFFXFWHWPGCXSGLVXMYDHNUSLRJMQZWKRCEVTNNJUTNZAHKMQGAZRHTLAUBGFCQDXSQENUKHRNTFBYNAEBYIXOJAYCGKJXPMECDMJOGNQAGWRXXYTYIXUKVBEOAPBQZMHRLPNSPTL");
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
    msg.setTimeStamp(0.026261513378787127);
    msg.setSource(6346U);
    msg.setSourceEntity(33U);
    msg.setDestination(2909U);
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
    msg.setTimeStamp(0.04931926091260397);
    msg.setSource(24073U);
    msg.setSourceEntity(207U);
    msg.setDestination(48886U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.10138684615643123);
    msg.setSource(5533U);
    msg.setSourceEntity(203U);
    msg.setDestination(41446U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.5315672108271755);
    msg.setSource(39523U);
    msg.setSourceEntity(209U);
    msg.setDestination(56930U);
    msg.setDestinationEntity(167U);
    msg.list.assign("EEHGQDNRXIAGHIAKWVZCEQKFRVLTXOBWKQSJJZIQXUNDJUGSTEZWUSBSVBBQHPQC");

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
    msg.setTimeStamp(0.4518961923463697);
    msg.setSource(15567U);
    msg.setSourceEntity(212U);
    msg.setDestination(4991U);
    msg.setDestinationEntity(198U);
    msg.list.assign("QBLHKPCNELLLGXWKDAGOELHBARMXNIEZZOMQRYSZFRIQNRFZZVAWUWXTITXOUJXKJFDPASRVUSWNMCTFPTVRCTPK");

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
    msg.setTimeStamp(0.3823630647211185);
    msg.setSource(44405U);
    msg.setSourceEntity(191U);
    msg.setDestination(46308U);
    msg.setDestinationEntity(126U);
    msg.list.assign("ZIRMCWESKKMBVPCRTLYOUKZSYIXJJJGPXVLCCQTMVFOOURLZIHNPEVDVEVPGFUJXCRMJBIOXGDTBAGDYZNUGEXHOGDEL");

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
    msg.setTimeStamp(0.25891615006128976);
    msg.setSource(62093U);
    msg.setSourceEntity(195U);
    msg.setDestination(4605U);
    msg.setDestinationEntity(247U);
    msg.peer.assign("XCYKHRYBVXBRBOXFSCETVQYHXAPCVTSKJVCJOJNZDKXUHDLOIERETRMNDUYWJDFGVPFFSYHIUOREXHQWUWSISAYSKBMPLFUJAAMNTUGRJMLEEPSOJAPYQQTWTURVHGHZFIGZMNERCVSGCIQQLXPCZGYDBKIAIDZBUMDYZVOGEBMSPRFLXUNLQQKZGZVILGFCPWTYFHZGBOAOMWNDOJWOLWQBJZLTANN");
    msg.rssi = 0.9128694199274039;
    msg.integrity = 22405U;

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
    msg.setTimeStamp(0.320834924058631);
    msg.setSource(25967U);
    msg.setSourceEntity(209U);
    msg.setDestination(34173U);
    msg.setDestinationEntity(46U);
    msg.peer.assign("WWRTYZYORZUXHMMKCGUCDSBRNEAXBIWNWPCZKFLEMYQNOUEOANYHFJVTFQUQGJDFNPEZDEGDEKSWIUXPCDBDLTHRJABIAGKICJZMBNMXVCQJPKVBPKRVLMEUBKFKVANPFQOZUCILNWJOUGIRZXQLXMVLVMMQEPDJQDWQJVZFYXFHQWOSSJLWGURCEOTGIUTZSOLHLSMHFTSXODYHPZBOIBYVTGJRALYXVPTDAKASNHHIITCYPSANEFSYWT");
    msg.rssi = 0.037758016348864776;
    msg.integrity = 32942U;

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
    msg.setTimeStamp(0.14778978269730347);
    msg.setSource(43975U);
    msg.setSourceEntity(204U);
    msg.setDestination(48639U);
    msg.setDestinationEntity(253U);
    msg.peer.assign("OIEQSRMQHFBXHSBACRPFSWPNEWAOBSCTPNWHCVDXYKQGUHJHZNBGTODJRLVWFKZYFXMCLXMMDKZORGZKMXEYQOYTEVAJLVWMAVFAWPCNRSFGISYRJSNSJ");
    msg.rssi = 0.023781292104393947;
    msg.integrity = 36044U;

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
    msg.setTimeStamp(0.27237488947292454);
    msg.setSource(7454U);
    msg.setSourceEntity(97U);
    msg.setDestination(7710U);
    msg.setDestinationEntity(252U);
    msg.value = -21837;

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
    msg.setTimeStamp(0.5905779779226105);
    msg.setSource(47442U);
    msg.setSourceEntity(39U);
    msg.setDestination(55040U);
    msg.setDestinationEntity(217U);
    msg.value = -519;

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
    msg.setTimeStamp(0.96155210453);
    msg.setSource(47993U);
    msg.setSourceEntity(75U);
    msg.setDestination(11476U);
    msg.setDestinationEntity(240U);
    msg.value = 13197;

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
    msg.setTimeStamp(0.7495074299627793);
    msg.setSource(44789U);
    msg.setSourceEntity(116U);
    msg.setDestination(39900U);
    msg.setDestinationEntity(42U);
    msg.value = 0.40401925461485144;

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
    msg.setTimeStamp(0.19312786101976265);
    msg.setSource(23449U);
    msg.setSourceEntity(93U);
    msg.setDestination(2121U);
    msg.setDestinationEntity(20U);
    msg.value = 0.6613688975468588;

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
    msg.setTimeStamp(0.14554572499180451);
    msg.setSource(55265U);
    msg.setSourceEntity(188U);
    msg.setDestination(9146U);
    msg.setDestinationEntity(231U);
    msg.value = 0.37636128627327803;

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
    msg.setTimeStamp(0.3352649470543143);
    msg.setSource(19870U);
    msg.setSourceEntity(92U);
    msg.setDestination(16890U);
    msg.setDestinationEntity(90U);
    msg.value = 0.9259154573095445;

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
    msg.setTimeStamp(0.5396920595980377);
    msg.setSource(7168U);
    msg.setSourceEntity(22U);
    msg.setDestination(4629U);
    msg.setDestinationEntity(18U);
    msg.value = 0.7310537827992202;

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
    msg.setTimeStamp(0.3871105206024469);
    msg.setSource(23160U);
    msg.setSourceEntity(126U);
    msg.setDestination(38039U);
    msg.setDestinationEntity(201U);
    msg.value = 0.8788472205438924;

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
    msg.setTimeStamp(0.303607568829252);
    msg.setSource(26639U);
    msg.setSourceEntity(33U);
    msg.setDestination(20840U);
    msg.setDestinationEntity(113U);
    msg.validity = 28833U;
    msg.type = 110U;
    msg.utc_year = 57890U;
    msg.utc_month = 174U;
    msg.utc_day = 66U;
    msg.utc_time = 0.38561304315729117;
    msg.lat = 0.5532159032212913;
    msg.lon = 0.5362980171188423;
    msg.height = 0.6067641421459322;
    msg.satellites = 148U;
    msg.cog = 0.38990380513364753;
    msg.sog = 0.35687944176412745;
    msg.hdop = 0.6691020544531019;
    msg.vdop = 0.6491782494458099;
    msg.hacc = 0.7104512700964674;
    msg.vacc = 0.7865509226765562;

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
    msg.setTimeStamp(0.1878286290852741);
    msg.setSource(194U);
    msg.setSourceEntity(175U);
    msg.setDestination(25916U);
    msg.setDestinationEntity(185U);
    msg.validity = 58963U;
    msg.type = 14U;
    msg.utc_year = 59370U;
    msg.utc_month = 50U;
    msg.utc_day = 150U;
    msg.utc_time = 0.8667321407612538;
    msg.lat = 0.36756504219289854;
    msg.lon = 0.6476904226917057;
    msg.height = 0.9996479656052432;
    msg.satellites = 236U;
    msg.cog = 0.19527394793527175;
    msg.sog = 0.3263591064615142;
    msg.hdop = 0.941661020812938;
    msg.vdop = 0.6017462668468313;
    msg.hacc = 0.32189571147456486;
    msg.vacc = 0.034994249463231375;

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
    msg.setTimeStamp(0.2668659311808247);
    msg.setSource(17139U);
    msg.setSourceEntity(59U);
    msg.setDestination(4255U);
    msg.setDestinationEntity(212U);
    msg.validity = 32U;
    msg.type = 59U;
    msg.utc_year = 28684U;
    msg.utc_month = 44U;
    msg.utc_day = 232U;
    msg.utc_time = 0.21490096647585777;
    msg.lat = 0.9194200182192485;
    msg.lon = 0.49297992204277086;
    msg.height = 0.239716811778953;
    msg.satellites = 61U;
    msg.cog = 0.20697705041966774;
    msg.sog = 0.4802933690058666;
    msg.hdop = 0.3146099458805697;
    msg.vdop = 0.469042885590369;
    msg.hacc = 0.3017066342398782;
    msg.vacc = 0.360516362715944;

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
    msg.setTimeStamp(0.8026838233933695);
    msg.setSource(34314U);
    msg.setSourceEntity(17U);
    msg.setDestination(44700U);
    msg.setDestinationEntity(49U);
    msg.time = 0.6302173041358291;
    msg.phi = 0.8256835603734615;
    msg.theta = 0.1511395477496682;
    msg.psi = 0.9945381835378402;
    msg.psi_magnetic = 0.8721323333062329;

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
    msg.setTimeStamp(0.69747300897385);
    msg.setSource(54353U);
    msg.setSourceEntity(57U);
    msg.setDestination(41874U);
    msg.setDestinationEntity(59U);
    msg.time = 0.6135172814945389;
    msg.phi = 0.04952942256037396;
    msg.theta = 0.018080524261725794;
    msg.psi = 0.40198475461509897;
    msg.psi_magnetic = 0.7603743304326132;

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
    msg.setTimeStamp(0.6911163298313432);
    msg.setSource(42982U);
    msg.setSourceEntity(137U);
    msg.setDestination(13014U);
    msg.setDestinationEntity(115U);
    msg.time = 0.5112812982786642;
    msg.phi = 0.6025752997574318;
    msg.theta = 0.18952705610801857;
    msg.psi = 0.01655242540432178;
    msg.psi_magnetic = 0.913625320404033;

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
    msg.setTimeStamp(0.9974316243956227);
    msg.setSource(49134U);
    msg.setSourceEntity(4U);
    msg.setDestination(879U);
    msg.setDestinationEntity(170U);
    msg.time = 0.7682989691881859;
    msg.x = 0.8628291142248855;
    msg.y = 0.9722424100040505;
    msg.z = 0.8904155693644935;
    msg.timestep = 0.2121871502373488;

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
    msg.setTimeStamp(0.8631802862253101);
    msg.setSource(20844U);
    msg.setSourceEntity(20U);
    msg.setDestination(59681U);
    msg.setDestinationEntity(156U);
    msg.time = 0.017856446367531476;
    msg.x = 0.8012119851480735;
    msg.y = 0.5313188387725781;
    msg.z = 0.5519413430061751;
    msg.timestep = 0.47728794954552944;

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
    msg.setTimeStamp(0.7798343411057289);
    msg.setSource(7838U);
    msg.setSourceEntity(32U);
    msg.setDestination(50536U);
    msg.setDestinationEntity(186U);
    msg.time = 0.14210198576380295;
    msg.x = 0.12316161030616146;
    msg.y = 0.7248748833534231;
    msg.z = 0.8519565717322284;
    msg.timestep = 0.9351671904808694;

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
    msg.setTimeStamp(0.3936132609702956);
    msg.setSource(12284U);
    msg.setSourceEntity(211U);
    msg.setDestination(7894U);
    msg.setDestinationEntity(14U);
    msg.time = 0.5964038944041843;
    msg.x = 0.9890951458184896;
    msg.y = 0.7552062700917209;
    msg.z = 0.16052487056194864;

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
    msg.setTimeStamp(0.5498622875352125);
    msg.setSource(5378U);
    msg.setSourceEntity(12U);
    msg.setDestination(43946U);
    msg.setDestinationEntity(11U);
    msg.time = 0.8437715512934146;
    msg.x = 0.4985448473602786;
    msg.y = 0.3016063277024572;
    msg.z = 0.6074192445198704;

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
    msg.setTimeStamp(0.6880081602874768);
    msg.setSource(12021U);
    msg.setSourceEntity(66U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(25U);
    msg.time = 0.8985072035128492;
    msg.x = 0.052341148007759575;
    msg.y = 0.06840874749899473;
    msg.z = 0.3172420356554152;

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
    msg.setTimeStamp(0.9992941241691982);
    msg.setSource(2566U);
    msg.setSourceEntity(55U);
    msg.setDestination(2060U);
    msg.setDestinationEntity(55U);
    msg.time = 0.46665711030429624;
    msg.x = 0.7784153909961007;
    msg.y = 0.42545000081831685;
    msg.z = 0.5220695173531588;

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
    msg.setTimeStamp(0.20929746588252318);
    msg.setSource(22163U);
    msg.setSourceEntity(161U);
    msg.setDestination(49626U);
    msg.setDestinationEntity(226U);
    msg.time = 0.5660175625522044;
    msg.x = 0.2332945143544578;
    msg.y = 0.5964241838802287;
    msg.z = 0.3821967164030683;

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
    msg.setTimeStamp(0.5777267989182591);
    msg.setSource(26844U);
    msg.setSourceEntity(216U);
    msg.setDestination(5164U);
    msg.setDestinationEntity(136U);
    msg.time = 0.11763787582877328;
    msg.x = 0.08714439375195016;
    msg.y = 0.6164047759504679;
    msg.z = 0.1399641769207539;

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
    msg.setTimeStamp(0.41878321629862436);
    msg.setSource(26684U);
    msg.setSourceEntity(180U);
    msg.setDestination(61897U);
    msg.setDestinationEntity(151U);
    msg.time = 0.5128854589850637;
    msg.x = 0.4328816759501365;
    msg.y = 0.4054563110775362;
    msg.z = 0.5491537774124472;

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
    msg.setTimeStamp(0.21270460825557602);
    msg.setSource(2496U);
    msg.setSourceEntity(238U);
    msg.setDestination(34089U);
    msg.setDestinationEntity(109U);
    msg.time = 0.18293213206658276;
    msg.x = 0.6712741976280389;
    msg.y = 0.5541033994297735;
    msg.z = 0.15643242783825506;

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
    msg.setTimeStamp(0.6067006462534953);
    msg.setSource(29581U);
    msg.setSourceEntity(27U);
    msg.setDestination(52745U);
    msg.setDestinationEntity(57U);
    msg.time = 0.06258891437343994;
    msg.x = 0.6624672925330759;
    msg.y = 0.29431519329871847;
    msg.z = 0.9998576062991836;

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
    msg.setTimeStamp(0.055425706187837376);
    msg.setSource(14436U);
    msg.setSourceEntity(45U);
    msg.setDestination(7272U);
    msg.setDestinationEntity(12U);
    msg.validity = 18U;
    msg.x = 0.12112755417720755;
    msg.y = 0.23509117586734862;
    msg.z = 0.13154156034526043;

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
    msg.setTimeStamp(0.4051265717145157);
    msg.setSource(23303U);
    msg.setSourceEntity(35U);
    msg.setDestination(43180U);
    msg.setDestinationEntity(36U);
    msg.validity = 210U;
    msg.x = 0.23957705649916794;
    msg.y = 0.4910214570060919;
    msg.z = 0.17920348418520893;

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
    msg.setTimeStamp(0.5760143435756511);
    msg.setSource(53579U);
    msg.setSourceEntity(47U);
    msg.setDestination(47625U);
    msg.setDestinationEntity(146U);
    msg.validity = 6U;
    msg.x = 0.619056662336749;
    msg.y = 0.7541726375831578;
    msg.z = 0.700628879458664;

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
    msg.setTimeStamp(0.7033957125026206);
    msg.setSource(119U);
    msg.setSourceEntity(38U);
    msg.setDestination(6112U);
    msg.setDestinationEntity(196U);
    msg.validity = 52U;
    msg.x = 0.014378897216664854;
    msg.y = 0.7178881141301706;
    msg.z = 0.020449002427759266;

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
    msg.setTimeStamp(0.23427428887378454);
    msg.setSource(8920U);
    msg.setSourceEntity(40U);
    msg.setDestination(8328U);
    msg.setDestinationEntity(197U);
    msg.validity = 157U;
    msg.x = 0.4902793499900955;
    msg.y = 0.8129755372859397;
    msg.z = 0.6466769488044499;

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
    msg.setTimeStamp(0.5207846568254653);
    msg.setSource(40424U);
    msg.setSourceEntity(54U);
    msg.setDestination(60786U);
    msg.setDestinationEntity(188U);
    msg.validity = 217U;
    msg.x = 0.21943492812176935;
    msg.y = 0.5230224645001237;
    msg.z = 0.2803185600688243;

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
    msg.setTimeStamp(0.029562014882504872);
    msg.setSource(41143U);
    msg.setSourceEntity(82U);
    msg.setDestination(16773U);
    msg.setDestinationEntity(13U);
    msg.time = 0.4867546295743044;
    msg.x = 0.3754210327709542;
    msg.y = 0.09145973473834956;
    msg.z = 0.9652256328967052;

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
    msg.setTimeStamp(0.510020296069179);
    msg.setSource(34847U);
    msg.setSourceEntity(200U);
    msg.setDestination(57734U);
    msg.setDestinationEntity(182U);
    msg.time = 0.18138570663809195;
    msg.x = 0.5749590430137687;
    msg.y = 0.27388036223655177;
    msg.z = 0.42047346353032466;

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
    msg.setTimeStamp(0.9322237408835928);
    msg.setSource(8233U);
    msg.setSourceEntity(118U);
    msg.setDestination(22806U);
    msg.setDestinationEntity(92U);
    msg.time = 0.5385841508640973;
    msg.x = 0.09790396765096598;
    msg.y = 0.43713614665300426;
    msg.z = 0.6437301646858238;

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
    msg.setTimeStamp(0.19799136333167322);
    msg.setSource(47368U);
    msg.setSourceEntity(113U);
    msg.setDestination(553U);
    msg.setDestinationEntity(143U);
    msg.validity = 2U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.48608028551894655;
    tmp_msg_0.y = 0.9923127328808434;
    tmp_msg_0.z = 0.9617869860690261;
    tmp_msg_0.phi = 0.05604357015793737;
    tmp_msg_0.theta = 0.825438518233566;
    tmp_msg_0.psi = 0.3750856790949768;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.4716347656011788;

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
    msg.setTimeStamp(0.9789466831277974);
    msg.setSource(4679U);
    msg.setSourceEntity(92U);
    msg.setDestination(56604U);
    msg.setDestinationEntity(81U);
    msg.validity = 81U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.1854450269826602;
    tmp_msg_0.y = 0.2055730461326849;
    tmp_msg_0.z = 0.1680123738703313;
    tmp_msg_0.phi = 0.4026368443862598;
    tmp_msg_0.theta = 0.5408357338344976;
    tmp_msg_0.psi = 0.5753998045058345;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.8392707797195486;

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
    msg.setTimeStamp(0.02277429128955344);
    msg.setSource(48660U);
    msg.setSourceEntity(138U);
    msg.setDestination(43216U);
    msg.setDestinationEntity(91U);
    msg.validity = 155U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6542293273247212;
    tmp_msg_0.y = 0.1130802159851586;
    tmp_msg_0.z = 0.7134568829759571;
    tmp_msg_0.phi = 0.8039970395202894;
    tmp_msg_0.theta = 0.7384589134248676;
    tmp_msg_0.psi = 0.2841537696563251;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.6260226394188589;

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
    msg.setTimeStamp(0.9745882767680738);
    msg.setSource(10265U);
    msg.setSourceEntity(172U);
    msg.setDestination(60900U);
    msg.setDestinationEntity(105U);
    msg.value = 0.30343098885463426;

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
    msg.setTimeStamp(0.8280927569956206);
    msg.setSource(24083U);
    msg.setSourceEntity(20U);
    msg.setDestination(2896U);
    msg.setDestinationEntity(89U);
    msg.value = 0.015928365124008748;

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
    msg.setTimeStamp(0.9333166204700152);
    msg.setSource(38303U);
    msg.setSourceEntity(206U);
    msg.setDestination(52128U);
    msg.setDestinationEntity(92U);
    msg.value = 0.17502435214355871;

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
    msg.setTimeStamp(0.019870217863312445);
    msg.setSource(43154U);
    msg.setSourceEntity(162U);
    msg.setDestination(52014U);
    msg.setDestinationEntity(128U);
    msg.value = 0.003099202912955512;

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
    msg.setTimeStamp(0.35409951390792316);
    msg.setSource(60753U);
    msg.setSourceEntity(224U);
    msg.setDestination(53650U);
    msg.setDestinationEntity(35U);
    msg.value = 0.8435427172703563;

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
    msg.setTimeStamp(0.1383102965738593);
    msg.setSource(27974U);
    msg.setSourceEntity(101U);
    msg.setDestination(34926U);
    msg.setDestinationEntity(107U);
    msg.value = 0.4917136492187313;

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
    msg.setTimeStamp(0.2982436376002944);
    msg.setSource(13749U);
    msg.setSourceEntity(18U);
    msg.setDestination(26302U);
    msg.setDestinationEntity(230U);
    msg.value = 0.8871881455709909;

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
    msg.setTimeStamp(0.9322834517125194);
    msg.setSource(13844U);
    msg.setSourceEntity(246U);
    msg.setDestination(39705U);
    msg.setDestinationEntity(27U);
    msg.value = 0.7965653938556765;

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
    msg.setTimeStamp(0.24605148420537615);
    msg.setSource(56533U);
    msg.setSourceEntity(247U);
    msg.setDestination(31596U);
    msg.setDestinationEntity(40U);
    msg.value = 0.7460243034688581;

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
    msg.setTimeStamp(0.8396395408271318);
    msg.setSource(27415U);
    msg.setSourceEntity(180U);
    msg.setDestination(52076U);
    msg.setDestinationEntity(217U);
    msg.value = 0.05062991929887839;

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
    msg.setTimeStamp(0.300886936565232);
    msg.setSource(22594U);
    msg.setSourceEntity(27U);
    msg.setDestination(50709U);
    msg.setDestinationEntity(162U);
    msg.value = 0.6858560047100207;

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
    msg.setTimeStamp(0.24074499119151027);
    msg.setSource(23420U);
    msg.setSourceEntity(53U);
    msg.setDestination(43494U);
    msg.setDestinationEntity(95U);
    msg.value = 0.9217253640409443;

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
    msg.setTimeStamp(0.002763017683970248);
    msg.setSource(59098U);
    msg.setSourceEntity(58U);
    msg.setDestination(53238U);
    msg.setDestinationEntity(151U);
    msg.value = 0.9391605385792857;

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
    msg.setTimeStamp(0.3188851667754933);
    msg.setSource(14315U);
    msg.setSourceEntity(194U);
    msg.setDestination(4945U);
    msg.setDestinationEntity(12U);
    msg.value = 0.3018598349282128;

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
    msg.setTimeStamp(0.6040785158368497);
    msg.setSource(61921U);
    msg.setSourceEntity(102U);
    msg.setDestination(38662U);
    msg.setDestinationEntity(168U);
    msg.value = 0.7656774211529254;

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
    msg.setTimeStamp(0.9989235033622972);
    msg.setSource(44839U);
    msg.setSourceEntity(23U);
    msg.setDestination(31736U);
    msg.setDestinationEntity(124U);
    msg.value = 0.4399377542092743;

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
    msg.setTimeStamp(0.4000220989910208);
    msg.setSource(54848U);
    msg.setSourceEntity(115U);
    msg.setDestination(57387U);
    msg.setDestinationEntity(177U);
    msg.value = 0.6232956705591162;

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
    msg.setTimeStamp(0.014869165829552111);
    msg.setSource(15653U);
    msg.setSourceEntity(171U);
    msg.setDestination(52234U);
    msg.setDestinationEntity(253U);
    msg.value = 0.7651707226727125;

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
    msg.setTimeStamp(0.12448652611604993);
    msg.setSource(6379U);
    msg.setSourceEntity(32U);
    msg.setDestination(52090U);
    msg.setDestinationEntity(18U);
    msg.value = 0.9101629106984613;

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
    msg.setTimeStamp(0.14818715528548976);
    msg.setSource(54624U);
    msg.setSourceEntity(35U);
    msg.setDestination(48520U);
    msg.setDestinationEntity(145U);
    msg.value = 0.9162794479036411;

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
    msg.setTimeStamp(0.5575619286233666);
    msg.setSource(11072U);
    msg.setSourceEntity(106U);
    msg.setDestination(62248U);
    msg.setDestinationEntity(171U);
    msg.value = 0.5419483091404315;

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
    msg.setTimeStamp(0.062367878249456665);
    msg.setSource(27838U);
    msg.setSourceEntity(86U);
    msg.setDestination(34831U);
    msg.setDestinationEntity(212U);
    msg.value = 0.41196269127494245;

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
    msg.setTimeStamp(0.9350769848540605);
    msg.setSource(43714U);
    msg.setSourceEntity(160U);
    msg.setDestination(51252U);
    msg.setDestinationEntity(243U);
    msg.value = 0.03289876593791852;

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
    msg.setTimeStamp(0.26110702435654964);
    msg.setSource(14152U);
    msg.setSourceEntity(26U);
    msg.setDestination(20739U);
    msg.setDestinationEntity(175U);
    msg.value = 0.2316154738424845;

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
    msg.setTimeStamp(0.22128252953102012);
    msg.setSource(7651U);
    msg.setSourceEntity(62U);
    msg.setDestination(8086U);
    msg.setDestinationEntity(28U);
    msg.direction = 0.9584601649964041;
    msg.speed = 0.6636792967954851;
    msg.turbulence = 0.6061308729739945;

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
    msg.setTimeStamp(0.9135028541295119);
    msg.setSource(31730U);
    msg.setSourceEntity(219U);
    msg.setDestination(17027U);
    msg.setDestinationEntity(163U);
    msg.direction = 0.9103899970157455;
    msg.speed = 0.059859760934934614;
    msg.turbulence = 0.6418563068623105;

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
    msg.setTimeStamp(0.20004772152403694);
    msg.setSource(59112U);
    msg.setSourceEntity(45U);
    msg.setDestination(16715U);
    msg.setDestinationEntity(32U);
    msg.direction = 0.3769354071161346;
    msg.speed = 0.35891237599453807;
    msg.turbulence = 0.7241543384064579;

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
    msg.setTimeStamp(0.8275154304221697);
    msg.setSource(59925U);
    msg.setSourceEntity(59U);
    msg.setDestination(3507U);
    msg.setDestinationEntity(25U);
    msg.value = 0.6571188416432902;

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
    msg.setTimeStamp(0.07465870422454823);
    msg.setSource(21158U);
    msg.setSourceEntity(206U);
    msg.setDestination(39290U);
    msg.setDestinationEntity(188U);
    msg.value = 0.13912605863486105;

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
    msg.setTimeStamp(0.10939931377301804);
    msg.setSource(11472U);
    msg.setSourceEntity(114U);
    msg.setDestination(2730U);
    msg.setDestinationEntity(51U);
    msg.value = 0.16132887573051313;

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
    msg.setTimeStamp(0.847563036983194);
    msg.setSource(15236U);
    msg.setSourceEntity(185U);
    msg.setDestination(52036U);
    msg.setDestinationEntity(122U);
    msg.value.assign("NJFQLZDSXHIGEBOBPUZMHLJJGQXMWELSYAYMTJJOQVYXLNNQLGGAKSOFBVVUCSNRVUKREKZHCJGLLXCKDAQFTTPAJPRCFKZPIVWUYUUDTDYGSGCSWMRPIIORLHUWLNBDIEWNWPTOJSKABAASCFRZJCVYOYFECBSOINHETREDRUVBVVOZRHHRXEQFNMY");

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
    msg.setTimeStamp(0.9730066536657505);
    msg.setSource(6931U);
    msg.setSourceEntity(211U);
    msg.setDestination(21412U);
    msg.setDestinationEntity(159U);
    msg.value.assign("BGLJCTUCEGTHCKGOZIMUUCAYWRGTDWHNKYAMTZOMOHERYWRYPCYPEQMSAOUKBPWSNDDPFKWGCSFRRJHHJUWRZCAVFXSJXJJJFVDQEOKBIPIZNKYJYAIAUINIYEXZUMHZGHIWLQIVFJXZDSVAERKLBXQSIHFPXYVSGOTLVOMNZABFTFVKPEZOQGCWGUINHLQZTJULRXMSDB");

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
    msg.setTimeStamp(0.7124201330402982);
    msg.setSource(57879U);
    msg.setSourceEntity(238U);
    msg.setDestination(60932U);
    msg.setDestinationEntity(114U);
    msg.value.assign("WIARMFTPEBUVIDXBVLJJMAOTJNULUODWLCYZUHCSAOYTXHIWUTFHPLJSKZLCZXFQWTOGIHQNRSUGBZNGSMDQYWYUWYFMBSGYSSBENUYBPFMGYIKXNEGZGTXPRPTCFZHJPHNCYXMGNVGFRECEKBWUXFLVRRIERMZXDWEJLLZQDAIRWPQVOHKKAQMZJWFNCMQEZEOKIRDVQTDIHJVXRQKFJJPSVUIKOSXPEADNDOTCSKAGBV");

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
    msg.setTimeStamp(0.06819332273039092);
    msg.setSource(42011U);
    msg.setSourceEntity(81U);
    msg.setDestination(11509U);
    msg.setDestinationEntity(186U);
    const char tmp_msg_0[] = {78, 126, 100, -5, 29, -102, -39, -61, -117, -49, -5, -96, 40, 27, 61, -48, 106, -14, -126, -92, 120, -70, -27, 85, 64, 83, -3, 121, 9, -54, 4, 126, -44, 15, -91, -127, 61, -43, -94, -76, 34, 17, 13, -45, 64, 88, 120, 1, 120, 5, -39, -46, -99, 33, 112, 44, -120, 67, -46, 40, -73, 114, 73, 4, -3, 12, 108, -68, 59, 23, 103, -118, 36, 41, -46};
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
    msg.setTimeStamp(0.16803161799524424);
    msg.setSource(9797U);
    msg.setSourceEntity(88U);
    msg.setDestination(47957U);
    msg.setDestinationEntity(236U);
    const char tmp_msg_0[] = {-19, 122, 33, 114, 18, 119, -14, 30, -122, 113, -3, 113, -110, -85, -40, 57, -74, -32, 70, 103, -114, -109, -7, 53, 5, 29, -29, 37, -114, -82, 3, 31, -15, 10, 27, -78, 56, -74, -18, 64, -102, 98, 105, 59, -85, -43, 40, 84, 44};
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
    msg.setTimeStamp(0.5380876632808964);
    msg.setSource(62899U);
    msg.setSourceEntity(72U);
    msg.setDestination(65531U);
    msg.setDestinationEntity(232U);
    const char tmp_msg_0[] = {-92, -49, 16, 27, 6, -56, 9, -61, 63, 123, 116, 59, -108, -42, -18, -111, 67, 100, -65, 103, -68, 4, 78, -27, -128, -99, -86, 77, -90, -25, 16, 73, -69, 80, 92, 52, -64, 27, 11, 120, 110, -6, -27, 13, 54, -59, 63, 117, -83, 118, -59, -2, 72, -52, -46, 42, -60, 116, 83, 28, 71, 93, 44, 45, -32, -75, 59, -76, 54, 116, 62, -10, -67, 31, 117, -118, 83, 67, 104, -47, -54, 21, 59, -72, 86, -107, 80, 125, -14, 95, 105, 72, 16, 107, -39, 17, -124, -28, -118, 36, 39, -93, 126, -65, 87, -1, 72, 75, -79, 44, -30, 82, 108, 103, 26, 94, 36, -24, -15, -122, 35, -123, 94, -28, -3, -89, 113, 112, 55, -111, 118, 48, 7, 85, 77, 43, -92, -87, -26, 47, 108, 42, 59, 60, -49, -54, 35, -61, 66, 124, -124, -107, 64, 4, -17, -46, -31, 31, -50, -28, -29, -18, -119, 49, -2, 125, 64, -40, 119, 39, -18, -113, -99, -7, -119, 111, 114, 110, 28, -23, -51, 61, 21, 73, -59, 29, -2, -43, 19, 92, -103, 39, -124, 66, -49, 50, -106, -13, 85, 121, -3, -113, 122, -41, -97, 115, 112};
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
    msg.setTimeStamp(0.9478161049379984);
    msg.setSource(17340U);
    msg.setSourceEntity(44U);
    msg.setDestination(52079U);
    msg.setDestinationEntity(249U);
    msg.value = 0.5003997647009836;

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
    msg.setTimeStamp(0.8958792050103138);
    msg.setSource(1042U);
    msg.setSourceEntity(94U);
    msg.setDestination(16213U);
    msg.setDestinationEntity(202U);
    msg.value = 0.39951398412050054;

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
    msg.setTimeStamp(0.3623079302908372);
    msg.setSource(1282U);
    msg.setSourceEntity(80U);
    msg.setDestination(31065U);
    msg.setDestinationEntity(48U);
    msg.value = 0.013476874879012835;

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
    msg.setTimeStamp(0.24378244514881164);
    msg.setSource(58563U);
    msg.setSourceEntity(239U);
    msg.setDestination(41385U);
    msg.setDestinationEntity(240U);
    msg.type = 17U;
    msg.frequency = 1385584612U;
    msg.min_range = 50473U;
    msg.max_range = 31052U;
    msg.bits_per_point = 0U;
    msg.scale_factor = 0.5918551879073336;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.37651734077220633;
    tmp_msg_0.beam_height = 0.6060050190746636;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {75, 14, -25, -79, -90, 76, -55, -110, -54, 85, 15, -102, -17, -53, 93, 121, -38, -104, 109, -109, -45, -90, -97, -65, -121, 121, 50, -81, 73, 101, -84, 85, -124, 67, -7, 42, -118, 92, -36, 43, -1, 67, -93, 116, -49, -37, 30, -48, 1, -14, -31, 89, 4, -51, -106, -108, -96, -27, -84, 88, -46, -74, -119, 56, 82};
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
    msg.setTimeStamp(0.2615542091140656);
    msg.setSource(27770U);
    msg.setSourceEntity(104U);
    msg.setDestination(9179U);
    msg.setDestinationEntity(25U);
    msg.type = 229U;
    msg.frequency = 3987995416U;
    msg.min_range = 48741U;
    msg.max_range = 41409U;
    msg.bits_per_point = 16U;
    msg.scale_factor = 0.262385102451836;
    const char tmp_msg_0[] = {-104, -94, -3, -89, -126, 46, 116, -106, -41, 28, 42, -79, -51, 25, 111, -48, 27, 58, 98, -89, -57, 13, -36, 44, 43, 92, 93, 10, 56, 15, -114, -125, -113, 28, 31, -44, 70, -42, -54, -117, 33, -59, -38, 88, -43, 122, 43, 54, -13, -64, 47, -24, -66, -44, 120, -122, -69, 65, -90, -115, -26, 33, -25, 67, -96, -4, 81, -5, -120, 53, 35, 29, 50, -5, 120, -99, -33, -115, -15, 8, -24, 35, 126, -53, 43, -117, -57, 35, -56, -84, -53, 103, -55, 113, 21, -90, 78, 124, -57, 35, 93, 106, -94, -60, -82, 2, -102, -98, -80, -19, -1, -63, 30, 75, 17, -59, -15, 5, -35, -117, -47, 3, 111, 66, -45, -31, -39, -103, -45, 36, 122, 40, -8, 104, -115, 64, -47, -75, 72, -11, 116, -91, -73, -78, -100, 115, -104, 104, 104, -109, -63, 114, -49, 58, 97, -101, 80, 28, 88, -71, -53, -32, -42, 106, -48, 66, 111, 100, 105, 4, -7, -34, 117, -69, -51, 92, -63, -24, -81, -84, -26, 92, -74, 81, -98};
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
    msg.setTimeStamp(0.6325774307172233);
    msg.setSource(13753U);
    msg.setSourceEntity(130U);
    msg.setDestination(19732U);
    msg.setDestinationEntity(77U);
    msg.type = 95U;
    msg.frequency = 1203633989U;
    msg.min_range = 32410U;
    msg.max_range = 14991U;
    msg.bits_per_point = 165U;
    msg.scale_factor = 0.4629777851528636;
    const char tmp_msg_0[] = {-14, 124, -124, -10, -22, 64, 39, -89, -72, 116, -55, -87, 90, -65, 1, 39, -7, -126, 66, -106, 25, 28, -19, 81, 62, -127, 94, -93, -35, 10, -126, -76, 67, -35, 36, -121, -122, -101, 124, -54, -60, 107, 24, 60, -115, -1, 77, 92, 5, 116, -97, 71, -112, 11, -71, 48, 64, -28, 75, -111, 126, -113, 12, 119, -121, 88, 47, 122, 114, 80, -109, -22, -128, 61, -119, -109, -111, -99, -26, -54, 80, -33, 4, 8, 70, -59, -87, -61, -84, 64, -50, 27, -65, -116, 11, -64, -10, -49, -81, -20, 97, -18, 33, 1, 94, -47, -109, -14, -103, 120, -5, -85, -17, 71, 2, 99, -104, -94};
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
    msg.setTimeStamp(0.964893076811145);
    msg.setSource(49291U);
    msg.setSourceEntity(240U);
    msg.setDestination(54897U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.2654340460889837);
    msg.setSource(17989U);
    msg.setSourceEntity(76U);
    msg.setDestination(9288U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.39251511288465535);
    msg.setSource(5672U);
    msg.setSourceEntity(34U);
    msg.setDestination(4872U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.6350231250575011);
    msg.setSource(25864U);
    msg.setSourceEntity(114U);
    msg.setDestination(25656U);
    msg.setDestinationEntity(106U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.6017408516742181);
    msg.setSource(41289U);
    msg.setSourceEntity(130U);
    msg.setDestination(9116U);
    msg.setDestinationEntity(216U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.998105407240191);
    msg.setSource(61070U);
    msg.setSourceEntity(124U);
    msg.setDestination(46039U);
    msg.setDestinationEntity(138U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.9110863886054145);
    msg.setSource(57502U);
    msg.setSourceEntity(10U);
    msg.setDestination(6249U);
    msg.setDestinationEntity(151U);
    msg.value = 0.49360861790780897;
    msg.confidence = 0.404030014292019;
    msg.opmodes.assign("YUVLWLBNSSGYUHWVLNFDIVITUMJKXDFYCAAZIZHZBCXDCJVOWCGYHMZXVBAOEYQDOMDIMEPJCKIYSZXIQESPQQXXUGJWMKLOHBHGQNTCLPTILMILNOZKMTEFPSMSERJAKTYVLGVLMJDDXWNDOCBWSAHKWGRQAUAGTQRZZHPUUHRBXIECNNKEZIFGTUTSCPWAAGBJBGRZYFOJXDPVEPPXERLQFHOFFKRKNFNNEYW");

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
    msg.setTimeStamp(0.8517253800224627);
    msg.setSource(2543U);
    msg.setSourceEntity(84U);
    msg.setDestination(61652U);
    msg.setDestinationEntity(117U);
    msg.value = 0.9362619727589361;
    msg.confidence = 0.3949294623552415;
    msg.opmodes.assign("BZCJPWOGTYPRYTKJLNEKOKDONYBUSOIAMZISKAYSQPMURVCDQTVVCIFHTMOBTJNDLCUYFBWQHGBJLPEIFIGQKAZPWQRQXGYLEJGAPFZX");

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
    msg.setTimeStamp(0.906504937437414);
    msg.setSource(13073U);
    msg.setSourceEntity(227U);
    msg.setDestination(11999U);
    msg.setDestinationEntity(252U);
    msg.value = 0.34976768116791146;
    msg.confidence = 0.6539027160370524;
    msg.opmodes.assign("FBZGPXGBZMZORQKFUWYKEVLWYTXVQIGJAURPSHYNIBRVUUJKMFBARHUXLWYHRMDSELCZDJNFVCHBFVWYIFADJAIEECGXQXJLLZLNKTJZZGWSZSTPNRXQKAJOUYJNDXSOJS");

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
    msg.setTimeStamp(0.5616932528311022);
    msg.setSource(54332U);
    msg.setSourceEntity(230U);
    msg.setDestination(60127U);
    msg.setDestinationEntity(198U);
    msg.itow = 3817610898U;
    msg.lat = 0.04858936065036801;
    msg.lon = 0.8140634673344777;
    msg.height_ell = 0.33692767120198897;
    msg.height_sea = 0.18424731205138112;
    msg.hacc = 0.8148154496056506;
    msg.vacc = 0.0011552667227707758;
    msg.vel_n = 0.575222245201594;
    msg.vel_e = 0.21358262760425073;
    msg.vel_d = 0.7999574915327313;
    msg.speed = 0.7654042827980908;
    msg.gspeed = 0.13231012893594907;
    msg.heading = 0.7148307315218623;
    msg.sacc = 0.45879071765357515;
    msg.cacc = 0.5237670053917568;

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
    msg.setTimeStamp(0.7614171998016322);
    msg.setSource(41971U);
    msg.setSourceEntity(230U);
    msg.setDestination(26755U);
    msg.setDestinationEntity(1U);
    msg.itow = 2995354584U;
    msg.lat = 0.27596607607423196;
    msg.lon = 0.9584355150837885;
    msg.height_ell = 0.24663438970029006;
    msg.height_sea = 0.8748656121833546;
    msg.hacc = 0.59370213754459;
    msg.vacc = 0.991549971117051;
    msg.vel_n = 0.9760806739070651;
    msg.vel_e = 0.1331039650473349;
    msg.vel_d = 0.9833417869412953;
    msg.speed = 0.6450086658481291;
    msg.gspeed = 0.40355788641497903;
    msg.heading = 0.9702048430901966;
    msg.sacc = 0.9124453835819234;
    msg.cacc = 0.037386476641513955;

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
    msg.setTimeStamp(0.2019904222141543);
    msg.setSource(841U);
    msg.setSourceEntity(42U);
    msg.setDestination(32176U);
    msg.setDestinationEntity(106U);
    msg.itow = 3183469700U;
    msg.lat = 0.6452666162787495;
    msg.lon = 0.8702070461646257;
    msg.height_ell = 0.1755859708300237;
    msg.height_sea = 0.03560019146651405;
    msg.hacc = 0.6606421676095361;
    msg.vacc = 0.2420103445191809;
    msg.vel_n = 0.6188600372295572;
    msg.vel_e = 0.6316241638907487;
    msg.vel_d = 0.3023529196176411;
    msg.speed = 0.5014478148049694;
    msg.gspeed = 0.37681987448413035;
    msg.heading = 0.5065799791043728;
    msg.sacc = 0.5765404001702392;
    msg.cacc = 0.5887742541935134;

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
    msg.setTimeStamp(0.2000921805685082);
    msg.setSource(19231U);
    msg.setSourceEntity(113U);
    msg.setDestination(54596U);
    msg.setDestinationEntity(91U);
    msg.id = 139U;
    msg.value = 0.24430839637276258;

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
    msg.setTimeStamp(0.5666778392610224);
    msg.setSource(9084U);
    msg.setSourceEntity(17U);
    msg.setDestination(18416U);
    msg.setDestinationEntity(60U);
    msg.id = 90U;
    msg.value = 0.5299154038768473;

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
    msg.setTimeStamp(0.864288558432468);
    msg.setSource(41457U);
    msg.setSourceEntity(233U);
    msg.setDestination(54095U);
    msg.setDestinationEntity(180U);
    msg.id = 93U;
    msg.value = 0.32361404813316064;

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
    msg.setTimeStamp(0.41276776110404056);
    msg.setSource(12157U);
    msg.setSourceEntity(50U);
    msg.setDestination(49905U);
    msg.setDestinationEntity(86U);
    msg.x = 0.1383218638269601;
    msg.y = 0.906090156011897;
    msg.z = 0.4478200506587391;
    msg.phi = 0.749913013892882;
    msg.theta = 0.17613968542288672;
    msg.psi = 0.9672981143447751;

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
    msg.setTimeStamp(0.32192117099586615);
    msg.setSource(50798U);
    msg.setSourceEntity(112U);
    msg.setDestination(19443U);
    msg.setDestinationEntity(99U);
    msg.x = 0.5533650133140917;
    msg.y = 0.9480135369535981;
    msg.z = 0.8722237638012892;
    msg.phi = 0.5883302806313737;
    msg.theta = 0.5752376668306989;
    msg.psi = 0.6196597563839964;

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
    msg.setTimeStamp(0.3349606945942758);
    msg.setSource(9574U);
    msg.setSourceEntity(48U);
    msg.setDestination(37773U);
    msg.setDestinationEntity(163U);
    msg.x = 0.8778043744895343;
    msg.y = 0.22864156179280115;
    msg.z = 0.20709273805652484;
    msg.phi = 0.4606128376499733;
    msg.theta = 0.3373558441219061;
    msg.psi = 0.5936194538713022;

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
    msg.setTimeStamp(0.90019742209571);
    msg.setSource(27846U);
    msg.setSourceEntity(143U);
    msg.setDestination(10000U);
    msg.setDestinationEntity(193U);
    msg.beam_width = 0.1388132202311082;
    msg.beam_height = 0.39328718593721035;

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
    msg.setTimeStamp(0.5720286860200565);
    msg.setSource(54424U);
    msg.setSourceEntity(118U);
    msg.setDestination(5449U);
    msg.setDestinationEntity(61U);
    msg.beam_width = 0.6533846259299562;
    msg.beam_height = 0.21946416381982758;

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
    msg.setTimeStamp(0.629990569819618);
    msg.setSource(60819U);
    msg.setSourceEntity(241U);
    msg.setDestination(26127U);
    msg.setDestinationEntity(38U);
    msg.beam_width = 0.30225949841284394;
    msg.beam_height = 0.6144446225587895;

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
    msg.setTimeStamp(0.36539087598179565);
    msg.setSource(24559U);
    msg.setSourceEntity(178U);
    msg.setDestination(16202U);
    msg.setDestinationEntity(164U);
    msg.sane = 22U;

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
    msg.setTimeStamp(0.033116521492973616);
    msg.setSource(48644U);
    msg.setSourceEntity(135U);
    msg.setDestination(12546U);
    msg.setDestinationEntity(13U);
    msg.sane = 219U;

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
    msg.setTimeStamp(0.6273847928039986);
    msg.setSource(42516U);
    msg.setSourceEntity(213U);
    msg.setDestination(61955U);
    msg.setDestinationEntity(184U);
    msg.sane = 21U;

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
    msg.setTimeStamp(0.7483567948916975);
    msg.setSource(59018U);
    msg.setSourceEntity(242U);
    msg.setDestination(45325U);
    msg.setDestinationEntity(77U);
    msg.value = 0.23254592189047452;

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
    msg.setTimeStamp(0.34688301423096546);
    msg.setSource(6029U);
    msg.setSourceEntity(176U);
    msg.setDestination(379U);
    msg.setDestinationEntity(157U);
    msg.value = 0.4970157442381662;

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
    msg.setTimeStamp(0.8017153766384172);
    msg.setSource(24001U);
    msg.setSourceEntity(238U);
    msg.setDestination(22347U);
    msg.setDestinationEntity(38U);
    msg.value = 0.14437240060108636;

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
    msg.setTimeStamp(0.23444051943947697);
    msg.setSource(36776U);
    msg.setSourceEntity(126U);
    msg.setDestination(37883U);
    msg.setDestinationEntity(128U);
    msg.value = 0.45660090834351297;

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
    msg.setTimeStamp(0.6746285660333883);
    msg.setSource(26979U);
    msg.setSourceEntity(56U);
    msg.setDestination(11200U);
    msg.setDestinationEntity(220U);
    msg.value = 0.5224252928464727;

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
    msg.setTimeStamp(0.48611356315219845);
    msg.setSource(43058U);
    msg.setSourceEntity(79U);
    msg.setDestination(11164U);
    msg.setDestinationEntity(197U);
    msg.value = 0.5414727052366327;

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
    msg.setTimeStamp(0.5347230819727854);
    msg.setSource(14591U);
    msg.setSourceEntity(91U);
    msg.setDestination(43249U);
    msg.setDestinationEntity(252U);
    msg.value = 0.1555616593236281;

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
    msg.setTimeStamp(0.9139045268557863);
    msg.setSource(8379U);
    msg.setSourceEntity(125U);
    msg.setDestination(1407U);
    msg.setDestinationEntity(151U);
    msg.value = 0.027434258239057763;

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
    msg.setTimeStamp(0.3248319769706014);
    msg.setSource(24087U);
    msg.setSourceEntity(106U);
    msg.setDestination(49694U);
    msg.setDestinationEntity(134U);
    msg.value = 0.794171008764729;

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
    msg.setTimeStamp(0.3845716592322581);
    msg.setSource(59376U);
    msg.setSourceEntity(103U);
    msg.setDestination(3591U);
    msg.setDestinationEntity(45U);
    msg.value = 0.44048239310487924;

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
    msg.setTimeStamp(0.14854722184285662);
    msg.setSource(22162U);
    msg.setSourceEntity(49U);
    msg.setDestination(47899U);
    msg.setDestinationEntity(65U);
    msg.value = 0.47424441528337946;

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
    msg.setTimeStamp(0.43260893885867946);
    msg.setSource(19022U);
    msg.setSourceEntity(220U);
    msg.setDestination(35481U);
    msg.setDestinationEntity(199U);
    msg.value = 0.42831655527694834;

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
    msg.setTimeStamp(0.0726855055315655);
    msg.setSource(56498U);
    msg.setSourceEntity(249U);
    msg.setDestination(27346U);
    msg.setDestinationEntity(239U);
    msg.value = 0.08807565118997551;

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
    msg.setTimeStamp(0.09824191629048484);
    msg.setSource(10176U);
    msg.setSourceEntity(16U);
    msg.setDestination(28015U);
    msg.setDestinationEntity(115U);
    msg.value = 0.27830562122615976;

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
    msg.setTimeStamp(0.35957450584793704);
    msg.setSource(15134U);
    msg.setSourceEntity(14U);
    msg.setDestination(3645U);
    msg.setDestinationEntity(40U);
    msg.value = 0.05369077189292604;

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
    msg.setTimeStamp(0.617036263912062);
    msg.setSource(14125U);
    msg.setSourceEntity(207U);
    msg.setDestination(51519U);
    msg.setDestinationEntity(228U);
    msg.value = 0.7230722429471725;

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
    msg.setTimeStamp(0.023362561660817294);
    msg.setSource(34348U);
    msg.setSourceEntity(146U);
    msg.setDestination(29012U);
    msg.setDestinationEntity(87U);
    msg.value = 0.6705150899712373;

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
    msg.setTimeStamp(0.5120449440239596);
    msg.setSource(53048U);
    msg.setSourceEntity(100U);
    msg.setDestination(37392U);
    msg.setDestinationEntity(62U);
    msg.value = 0.4399053355281013;

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
    msg.setTimeStamp(0.893279175619424);
    msg.setSource(34518U);
    msg.setSourceEntity(106U);
    msg.setDestination(62228U);
    msg.setDestinationEntity(218U);
    msg.value = 0.9254518826439899;

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
    msg.setTimeStamp(0.28933726674230065);
    msg.setSource(25343U);
    msg.setSourceEntity(85U);
    msg.setDestination(35132U);
    msg.setDestinationEntity(197U);
    msg.value = 0.7139402304862779;

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
    msg.setTimeStamp(0.5137122901970163);
    msg.setSource(14874U);
    msg.setSourceEntity(32U);
    msg.setDestination(22040U);
    msg.setDestinationEntity(74U);
    msg.value = 0.2914141201659137;

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
    msg.setTimeStamp(0.20250988973211248);
    msg.setSource(7273U);
    msg.setSourceEntity(82U);
    msg.setDestination(63596U);
    msg.setDestinationEntity(102U);
    msg.value = 0.4772054481582291;

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
    msg.setTimeStamp(0.9079370956260113);
    msg.setSource(29383U);
    msg.setSourceEntity(9U);
    msg.setDestination(61956U);
    msg.setDestinationEntity(189U);
    msg.value = 0.6068228898973159;

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
    msg.setTimeStamp(0.6419813379985921);
    msg.setSource(21251U);
    msg.setSourceEntity(119U);
    msg.setDestination(44111U);
    msg.setDestinationEntity(187U);
    msg.value = 0.28522517417376403;

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
    msg.setTimeStamp(0.6222017102009568);
    msg.setSource(50717U);
    msg.setSourceEntity(30U);
    msg.setDestination(35684U);
    msg.setDestinationEntity(85U);
    msg.validity = 35703U;
    msg.type = 199U;
    msg.tow = 3516838606U;
    msg.base_lat = 0.9355675341771246;
    msg.base_lon = 0.27533864223620974;
    msg.base_height = 0.8495386443846109;
    msg.n = 0.6362614173242717;
    msg.e = 0.32585974571657006;
    msg.d = 0.7230854168562206;
    msg.v_n = 0.16387701153881562;
    msg.v_e = 0.8113269174485449;
    msg.v_d = 0.5955234579971693;
    msg.satellites = 130U;
    msg.iar_hyp = 18078U;
    msg.iar_ratio = 0.4695835343138841;

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
    msg.setTimeStamp(0.23711740961495842);
    msg.setSource(60844U);
    msg.setSourceEntity(38U);
    msg.setDestination(22538U);
    msg.setDestinationEntity(121U);
    msg.validity = 46240U;
    msg.type = 216U;
    msg.tow = 342513046U;
    msg.base_lat = 0.8981970018712749;
    msg.base_lon = 0.25118829006688603;
    msg.base_height = 0.22391483877032137;
    msg.n = 0.7716490453673066;
    msg.e = 0.48223509628981964;
    msg.d = 0.7871730483332726;
    msg.v_n = 0.6405414791453715;
    msg.v_e = 0.41269083310211374;
    msg.v_d = 0.8980904397586003;
    msg.satellites = 53U;
    msg.iar_hyp = 3732U;
    msg.iar_ratio = 0.9557072699630483;

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
    msg.setTimeStamp(0.6174323263622385);
    msg.setSource(39298U);
    msg.setSourceEntity(186U);
    msg.setDestination(4984U);
    msg.setDestinationEntity(3U);
    msg.validity = 10036U;
    msg.type = 112U;
    msg.tow = 2338565262U;
    msg.base_lat = 0.7573633163977909;
    msg.base_lon = 0.8729165820558425;
    msg.base_height = 0.5917326635379538;
    msg.n = 0.8579977684264519;
    msg.e = 0.27609661329145563;
    msg.d = 0.4808111042462835;
    msg.v_n = 0.0006518597380090752;
    msg.v_e = 0.24462280820088655;
    msg.v_d = 0.8172299490031151;
    msg.satellites = 244U;
    msg.iar_hyp = 9096U;
    msg.iar_ratio = 0.939307492171406;

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
    msg.setTimeStamp(0.5763060947533474);
    msg.setSource(15818U);
    msg.setSourceEntity(202U);
    msg.setDestination(18972U);
    msg.setDestinationEntity(236U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4601896418909631;
    tmp_msg_0.lon = 0.9932769656753173;
    tmp_msg_0.height = 0.8793515685821982;
    tmp_msg_0.x = 0.33248959492408603;
    tmp_msg_0.y = 0.27733971309999184;
    tmp_msg_0.z = 0.3944508269788958;
    tmp_msg_0.phi = 0.6764253704638252;
    tmp_msg_0.theta = 0.256906549412972;
    tmp_msg_0.psi = 0.528595704055233;
    tmp_msg_0.u = 0.0746826764467734;
    tmp_msg_0.v = 0.7421838687640394;
    tmp_msg_0.w = 0.9411276557979252;
    tmp_msg_0.vx = 0.4397141260347348;
    tmp_msg_0.vy = 0.41993078881599244;
    tmp_msg_0.vz = 0.40229652902431956;
    tmp_msg_0.p = 0.01546526905191059;
    tmp_msg_0.q = 0.2081388242090637;
    tmp_msg_0.r = 0.9377744622069887;
    tmp_msg_0.depth = 0.5450031809438801;
    tmp_msg_0.alt = 0.22489101256974375;
    msg.state.set(tmp_msg_0);
    msg.type = 69U;

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
    msg.setTimeStamp(0.28968862789772043);
    msg.setSource(53235U);
    msg.setSourceEntity(170U);
    msg.setDestination(28644U);
    msg.setDestinationEntity(10U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.23641360109132392;
    tmp_msg_0.lon = 0.06721446844818946;
    tmp_msg_0.height = 0.5975714145444979;
    tmp_msg_0.x = 0.13743024710191565;
    tmp_msg_0.y = 0.21580114763387348;
    tmp_msg_0.z = 0.2328339513122144;
    tmp_msg_0.phi = 0.7350353884946543;
    tmp_msg_0.theta = 0.3151444267027962;
    tmp_msg_0.psi = 0.11134804320013791;
    tmp_msg_0.u = 0.33711456914874316;
    tmp_msg_0.v = 0.11420448194392974;
    tmp_msg_0.w = 0.20458129230842315;
    tmp_msg_0.vx = 0.907191584460412;
    tmp_msg_0.vy = 0.6064268143906865;
    tmp_msg_0.vz = 0.08623673811131682;
    tmp_msg_0.p = 0.5589059347141357;
    tmp_msg_0.q = 0.11138132590048011;
    tmp_msg_0.r = 0.5156701567929637;
    tmp_msg_0.depth = 0.5407287994927978;
    tmp_msg_0.alt = 0.36663270501008116;
    msg.state.set(tmp_msg_0);
    msg.type = 218U;

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
    msg.setTimeStamp(0.12718430909598266);
    msg.setSource(2014U);
    msg.setSourceEntity(246U);
    msg.setDestination(2140U);
    msg.setDestinationEntity(24U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6131762121916021;
    tmp_msg_0.lon = 0.7331356445461708;
    tmp_msg_0.height = 0.3377462931820183;
    tmp_msg_0.x = 0.28536452542444213;
    tmp_msg_0.y = 0.24924656110092547;
    tmp_msg_0.z = 0.10204772285017194;
    tmp_msg_0.phi = 0.5496198359087886;
    tmp_msg_0.theta = 0.3055531717224991;
    tmp_msg_0.psi = 0.06267507820066587;
    tmp_msg_0.u = 0.29122247175742566;
    tmp_msg_0.v = 0.9677825150465605;
    tmp_msg_0.w = 0.11544930497679273;
    tmp_msg_0.vx = 0.6808178735701086;
    tmp_msg_0.vy = 0.1484314337255207;
    tmp_msg_0.vz = 0.5248636515211426;
    tmp_msg_0.p = 0.3735187118965604;
    tmp_msg_0.q = 0.9849471942723204;
    tmp_msg_0.r = 0.28803213385268844;
    tmp_msg_0.depth = 0.6062142565868262;
    tmp_msg_0.alt = 0.959202583948037;
    msg.state.set(tmp_msg_0);
    msg.type = 82U;

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
    msg.setTimeStamp(0.4987885952548663);
    msg.setSource(37272U);
    msg.setSourceEntity(154U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(119U);
    msg.value = 0.2003788301496383;

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
    msg.setTimeStamp(0.4780644215529585);
    msg.setSource(44676U);
    msg.setSourceEntity(224U);
    msg.setDestination(63346U);
    msg.setDestinationEntity(217U);
    msg.value = 0.92267913347507;

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
    msg.setTimeStamp(0.8137899325625275);
    msg.setSource(56894U);
    msg.setSourceEntity(36U);
    msg.setDestination(45527U);
    msg.setDestinationEntity(158U);
    msg.value = 0.4412334688206636;

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
    msg.setTimeStamp(0.48434996564886446);
    msg.setSource(8200U);
    msg.setSourceEntity(72U);
    msg.setDestination(17607U);
    msg.setDestinationEntity(165U);
    msg.value = 0.8249780645424916;

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
    msg.setTimeStamp(0.8529019982548004);
    msg.setSource(42390U);
    msg.setSourceEntity(42U);
    msg.setDestination(26504U);
    msg.setDestinationEntity(209U);
    msg.value = 0.909933051272286;

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
    msg.setTimeStamp(0.0919201622313851);
    msg.setSource(2877U);
    msg.setSourceEntity(170U);
    msg.setDestination(7962U);
    msg.setDestinationEntity(43U);
    msg.value = 0.40555073711868384;

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
    msg.setTimeStamp(0.9582150751962317);
    msg.setSource(59340U);
    msg.setSourceEntity(169U);
    msg.setDestination(41669U);
    msg.setDestinationEntity(229U);
    msg.value = 0.9521261485152592;

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
    msg.setTimeStamp(0.20682483039113952);
    msg.setSource(1301U);
    msg.setSourceEntity(185U);
    msg.setDestination(33268U);
    msg.setDestinationEntity(89U);
    msg.value = 0.4726224235890206;

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
    msg.setTimeStamp(0.8783991342491705);
    msg.setSource(4198U);
    msg.setSourceEntity(207U);
    msg.setDestination(26207U);
    msg.setDestinationEntity(170U);
    msg.value = 0.44459042613583977;

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
    msg.setTimeStamp(0.3098462791613177);
    msg.setSource(49700U);
    msg.setSourceEntity(241U);
    msg.setDestination(62520U);
    msg.setDestinationEntity(111U);
    msg.value = 0.5423525440673083;

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
    msg.setTimeStamp(0.5244984722052848);
    msg.setSource(44301U);
    msg.setSourceEntity(201U);
    msg.setDestination(61315U);
    msg.setDestinationEntity(175U);
    msg.value = 0.3237459837718215;

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
    msg.setTimeStamp(0.22651358960238888);
    msg.setSource(27732U);
    msg.setSourceEntity(46U);
    msg.setDestination(16691U);
    msg.setDestinationEntity(231U);
    msg.value = 0.4759927670434114;

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
    msg.setTimeStamp(0.15067951432954896);
    msg.setSource(57010U);
    msg.setSourceEntity(92U);
    msg.setDestination(19639U);
    msg.setDestinationEntity(174U);
    msg.value = 0.3062133911799597;

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
    msg.setTimeStamp(0.43491367664036873);
    msg.setSource(65411U);
    msg.setSourceEntity(137U);
    msg.setDestination(38223U);
    msg.setDestinationEntity(40U);
    msg.value = 0.26750102385006824;

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
    msg.setTimeStamp(0.022945802073350396);
    msg.setSource(22409U);
    msg.setSourceEntity(141U);
    msg.setDestination(55726U);
    msg.setDestinationEntity(233U);
    msg.value = 0.012597611271759845;

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
    msg.setTimeStamp(0.4516854352757461);
    msg.setSource(56539U);
    msg.setSourceEntity(179U);
    msg.setDestination(5071U);
    msg.setDestinationEntity(129U);
    msg.id = 110U;
    msg.zoom = 6U;
    msg.action = 229U;

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
    msg.setTimeStamp(0.661933417872348);
    msg.setSource(10311U);
    msg.setSourceEntity(141U);
    msg.setDestination(35173U);
    msg.setDestinationEntity(108U);
    msg.id = 93U;
    msg.zoom = 50U;
    msg.action = 123U;

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
    msg.setTimeStamp(0.7301630808660744);
    msg.setSource(46431U);
    msg.setSourceEntity(76U);
    msg.setDestination(35607U);
    msg.setDestinationEntity(19U);
    msg.id = 61U;
    msg.zoom = 132U;
    msg.action = 66U;

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
    msg.setTimeStamp(0.37056098511330227);
    msg.setSource(28054U);
    msg.setSourceEntity(230U);
    msg.setDestination(28140U);
    msg.setDestinationEntity(8U);
    msg.id = 41U;
    msg.value = 0.4949642306192483;

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
    msg.setTimeStamp(0.7524203099242808);
    msg.setSource(48456U);
    msg.setSourceEntity(247U);
    msg.setDestination(47857U);
    msg.setDestinationEntity(121U);
    msg.id = 18U;
    msg.value = 0.8555928056290567;

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
    msg.setTimeStamp(0.8741417001193854);
    msg.setSource(29840U);
    msg.setSourceEntity(38U);
    msg.setDestination(44709U);
    msg.setDestinationEntity(178U);
    msg.id = 3U;
    msg.value = 0.7946275722711043;

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
    msg.setTimeStamp(0.7348407552427723);
    msg.setSource(42915U);
    msg.setSourceEntity(254U);
    msg.setDestination(38374U);
    msg.setDestinationEntity(230U);
    msg.id = 150U;
    msg.value = 0.1605175450983043;

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
    msg.setTimeStamp(0.3275976963985363);
    msg.setSource(78U);
    msg.setSourceEntity(45U);
    msg.setDestination(13745U);
    msg.setDestinationEntity(144U);
    msg.id = 125U;
    msg.value = 0.21187797496889538;

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
    msg.setTimeStamp(0.4775477514779576);
    msg.setSource(41428U);
    msg.setSourceEntity(73U);
    msg.setDestination(42356U);
    msg.setDestinationEntity(1U);
    msg.id = 168U;
    msg.value = 0.9677867969182562;

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
    msg.setTimeStamp(0.5206580433869135);
    msg.setSource(39811U);
    msg.setSourceEntity(103U);
    msg.setDestination(4288U);
    msg.setDestinationEntity(194U);
    msg.id = 240U;
    msg.angle = 0.14916928385391226;

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
    msg.setTimeStamp(0.7113796310266971);
    msg.setSource(55122U);
    msg.setSourceEntity(248U);
    msg.setDestination(7120U);
    msg.setDestinationEntity(110U);
    msg.id = 91U;
    msg.angle = 0.07344949627968111;

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
    msg.setTimeStamp(0.8142182561657443);
    msg.setSource(5864U);
    msg.setSourceEntity(77U);
    msg.setDestination(43739U);
    msg.setDestinationEntity(3U);
    msg.id = 58U;
    msg.angle = 0.418160180036491;

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
    msg.setTimeStamp(0.6645299650330625);
    msg.setSource(5592U);
    msg.setSourceEntity(27U);
    msg.setDestination(26801U);
    msg.setDestinationEntity(154U);
    msg.op = 195U;
    msg.actions.assign("MJZTTDMDOHLARBXQNQDLKCXIMFHLZHKLBWHWWTKBDYOHRTSAELCFVTIEKSNPCQS");

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
    msg.setTimeStamp(0.6387943770457477);
    msg.setSource(27772U);
    msg.setSourceEntity(5U);
    msg.setDestination(43804U);
    msg.setDestinationEntity(37U);
    msg.op = 177U;
    msg.actions.assign("IBBGZAMYEYCQANNDHTKGELTYZXUVUIUYNGCUXCIOSQRQPRLDYPBINKPKAFYGAWKFQVNVLWXFAPOOMMEWHIJNVMJVLUJNWCWSMDACOHSIIXHHGKJEHCKVADCMWCABDZQBFFQDTHTCWVSTGUQEBOPXZGFPTLIMRXZSVEXEPIBCOSLTMXYB");

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
    msg.setTimeStamp(0.4839167439466421);
    msg.setSource(37467U);
    msg.setSourceEntity(39U);
    msg.setDestination(22279U);
    msg.setDestinationEntity(37U);
    msg.op = 241U;
    msg.actions.assign("QKGMOUDGLGJHY");

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
    msg.setTimeStamp(0.7057263584820004);
    msg.setSource(48787U);
    msg.setSourceEntity(212U);
    msg.setDestination(48472U);
    msg.setDestinationEntity(161U);
    msg.actions.assign("PHKYCUIZVZEMVPIAEBVZYFNJAERHDUHKXHIPZLLUDBBTCNRTQRCOIQJRCJNUHZDOXCXVGXNZLCPSGOSNGXSAYGMWNYHAWIOBJVUFHJYAFAQFSEDIKWBFWWKLJULXWQTUTBFMABERHTNCUDSUDVSGGWNQGTNPSORYKFPKGFGMRYJDKSYCQXIGKTQLMQQZXHUYBPASKXIMTWDMVLOPLPPFDTRZZXEOVMAOSVEWAONFRJWKOTMJLCEE");

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
    msg.setTimeStamp(0.34745719523666263);
    msg.setSource(42114U);
    msg.setSourceEntity(31U);
    msg.setDestination(51409U);
    msg.setDestinationEntity(188U);
    msg.actions.assign("VYFCMJNTYFILEHLENWYQGKTQPKSRYTZDMZZQOXUYAQVJOWZTOQWADCJBOLGAGKFSEWIBMMDVKXTAAYDRSULLGUHMRBMVDGETNHIRXBJCOPMBBJSMFZRUSVWXIALZTQUTGIOCZXLDPJFPKQ");

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
    msg.setTimeStamp(0.7297875887794312);
    msg.setSource(32805U);
    msg.setSourceEntity(3U);
    msg.setDestination(57880U);
    msg.setDestinationEntity(144U);
    msg.actions.assign("KGDRVAHPNGMMQOITGCEOJZJSRXNMVBUCEKD");

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
    msg.setTimeStamp(0.14860100959321088);
    msg.setSource(28252U);
    msg.setSourceEntity(195U);
    msg.setDestination(9021U);
    msg.setDestinationEntity(90U);
    msg.button = 60U;
    msg.value = 249U;

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
    msg.setTimeStamp(0.3045036189000665);
    msg.setSource(59451U);
    msg.setSourceEntity(202U);
    msg.setDestination(47283U);
    msg.setDestinationEntity(168U);
    msg.button = 249U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.23601930077236577);
    msg.setSource(13534U);
    msg.setSourceEntity(51U);
    msg.setDestination(13707U);
    msg.setDestinationEntity(190U);
    msg.button = 170U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.1714975285653012);
    msg.setSource(23496U);
    msg.setSourceEntity(100U);
    msg.setDestination(48474U);
    msg.setDestinationEntity(63U);
    msg.op = 72U;
    msg.text.assign("ISGACHUZVTSPVHPQZNFNWOEMNCJMLRCGDAYTXPSVWEMZMJLDIRDUARYMHXIXJELAXWDBUFRNHLQWVYRRNZXFRUXIRAUMWTMKYYPHOQQIIOTQPNKPWHGEZJQRBIFDBGAFEHGDCDKJNIOLCIOPRPXWZFVZTULVLQBYWEYAOWEHAPEMSQTGCDDEMKXLSGXFSXUUVJSKYBHVOLNYKBKZ");

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
    msg.setTimeStamp(0.041027891209727385);
    msg.setSource(3811U);
    msg.setSourceEntity(198U);
    msg.setDestination(2357U);
    msg.setDestinationEntity(160U);
    msg.op = 196U;
    msg.text.assign("OSQBFQAJEHGTMXVKMWUTIBAIQRBNTTCJWAZDWCXJLASRF");

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
    msg.setTimeStamp(0.4363033315832707);
    msg.setSource(20942U);
    msg.setSourceEntity(196U);
    msg.setDestination(4601U);
    msg.setDestinationEntity(204U);
    msg.op = 30U;
    msg.text.assign("AKNJMHBWLOUSVDCLQJYXWHSCVIIFPJTWPXWUDNXAZNFQTFDEMBRJVYTXIXRWRDBDXWRIMKMRDDGESQUHFSYMGIAGZQAOSOGYYGLHTKQTACKKUBCBEKLZLNXIZNEUMCEYWMONIQANMFSDHHAQTFOGLPRKKOIOXQVLGMUBYAOPVRSCZPJVQCNOVGFJLQCPAXGJRPNLKHUTBEHJZUERJCWPV");

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
    msg.setTimeStamp(0.8476924603076628);
    msg.setSource(6653U);
    msg.setSourceEntity(127U);
    msg.setDestination(63061U);
    msg.setDestinationEntity(64U);
    msg.op = 50U;
    msg.time_remain = 0.2030436782741739;
    msg.sched_time = 0.4063762341467462;

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
    msg.setTimeStamp(0.6952029311756178);
    msg.setSource(44884U);
    msg.setSourceEntity(204U);
    msg.setDestination(6220U);
    msg.setDestinationEntity(5U);
    msg.op = 157U;
    msg.time_remain = 0.23387504261273107;
    msg.sched_time = 0.307226812842337;

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
    msg.setTimeStamp(0.1020411600030422);
    msg.setSource(4394U);
    msg.setSourceEntity(247U);
    msg.setDestination(53858U);
    msg.setDestinationEntity(65U);
    msg.op = 18U;
    msg.time_remain = 0.433847695619193;
    msg.sched_time = 0.747965812121184;

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
    msg.setTimeStamp(0.25341397460902304);
    msg.setSource(51234U);
    msg.setSourceEntity(149U);
    msg.setDestination(9465U);
    msg.setDestinationEntity(203U);
    msg.name.assign("DXFUEGPLFKHYALOKITLLXSWBUOOCYZMFZBSGCJQJINRXHYGSALYQTVSKUOAVUIGHUCRNTMRWAHIXUDNHXIQRNXVNMCIIP");
    msg.op = 200U;
    msg.sched_time = 0.2582031811492812;

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
    msg.setTimeStamp(0.4765825172356287);
    msg.setSource(63918U);
    msg.setSourceEntity(84U);
    msg.setDestination(52079U);
    msg.setDestinationEntity(166U);
    msg.name.assign("GRYWPPELQWEISBSOUBBWYLJQAYVTUMZMGCKSQCXDDEREFPTVGEWIVMFDDTNRPKAJLLJMESHCHMJZFNQKVULNUQUSTVNGZTUFNJFKEWXRAJRCXLHJLMIXROCYOHQSAHTBEGFFWPEAIMBWRBNNHXNDVTYAIYVZOKLD");
    msg.op = 139U;
    msg.sched_time = 0.6857504356378817;

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
    msg.setTimeStamp(0.954008177796832);
    msg.setSource(18335U);
    msg.setSourceEntity(51U);
    msg.setDestination(49515U);
    msg.setDestinationEntity(5U);
    msg.name.assign("FCHWXTYNIQSCTIRJSLZMGDQMNXYSXMDPQSPNTPSOVUUJATHVCHPZAKZPWXUSKBMRAIFNUJLJZYBZHKZLKBRDEDNVDEGQTIFOICESRHFSKBEQAMVBWFDOZOHFFPEPIMZHNKOJWSSYZOCYKAGDLETRILBNACTAOTVQVVUCZVXBHKTKREWRNWEURPHBMLFYWRQOTQCJULUEIMXXGUAGAOJDJIDBCCJHL");
    msg.op = 31U;
    msg.sched_time = 0.2863218072521704;

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
    msg.setTimeStamp(0.7478416929935096);
    msg.setSource(58242U);
    msg.setSourceEntity(130U);
    msg.setDestination(63243U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.25557530935394235);
    msg.setSource(59466U);
    msg.setSourceEntity(224U);
    msg.setDestination(16309U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.10002588710137494);
    msg.setSource(11763U);
    msg.setSourceEntity(231U);
    msg.setDestination(1155U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.7001089873069997);
    msg.setSource(39817U);
    msg.setSourceEntity(235U);
    msg.setDestination(23814U);
    msg.setDestinationEntity(61U);
    msg.name.assign("PGZMZECEGBKLEBFAXFCMXLIJEDQPGSIXQQLLMQMVVAYKIRXNAWJXXKOBJHXZHESZUEHMXFBWCJJCDFGGFLESINOUHVEYCFTKVWMPYNXWGAPATIKCRDDCMHIWADBQHLJUYWCZCPYGBIQUBFVKONYQJRSHROFUAOZDSPZLPQVOYBXIDDNBFRNHRUWTTSH");
    msg.state = 142U;

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
    msg.setTimeStamp(0.08428240954406807);
    msg.setSource(34918U);
    msg.setSourceEntity(71U);
    msg.setDestination(64339U);
    msg.setDestinationEntity(196U);
    msg.name.assign("MPKERWWJVJFNMHPPZFMWGQZVVEJSAFNWVDHYEGAGFHWXQIDPNVCUHBDPYXMLQNZXDKORPOKCTSZOUKUARLJFMTTMQ");
    msg.state = 235U;

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
    msg.setTimeStamp(0.12077424132103176);
    msg.setSource(56339U);
    msg.setSourceEntity(127U);
    msg.setDestination(54626U);
    msg.setDestinationEntity(166U);
    msg.name.assign("SOKDMUADZKPUWCHCPZOGBAFDXLTBOFGJVWNUSIESYFBNJXXOENDXPRHDCMMBTAMYELCWPYEJEINCYBHGHGAFDWGWKZJK");
    msg.state = 193U;

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
    msg.setTimeStamp(0.7077069977414587);
    msg.setSource(54817U);
    msg.setSourceEntity(21U);
    msg.setDestination(53646U);
    msg.setDestinationEntity(236U);
    msg.name.assign("CJUGLEZPQYJFQTEGZYBGPFKZKETHGRFHXLUVNVVZBYJUMAUQSRNHPNZROTBCYLUFQGEACNSOKTMBUYJWRLCGBFXWMXSIFAXYTTJYYPWSQIKRWZNNCFSJAIPPKZDSWSNBQEVORLJH");
    msg.value = 47U;

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
    msg.setTimeStamp(0.954062462715593);
    msg.setSource(63378U);
    msg.setSourceEntity(74U);
    msg.setDestination(63704U);
    msg.setDestinationEntity(18U);
    msg.name.assign("VRTSDZQKHGTUSTEWBJBCOJHEAQCGPIGNWIYQXJDERSSYQWZEFYBMKCUQCTAIWOSMVPICTFPPBWBFUNFXJNJFHZOKMLOLMXOVRAGNDAWEYHGOLOUDHMXLJIGPZBTQDSVMLBHZVAUFELLZVZXFCF");
    msg.value = 97U;

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
    msg.setTimeStamp(0.7835532799520937);
    msg.setSource(31210U);
    msg.setSourceEntity(82U);
    msg.setDestination(50020U);
    msg.setDestinationEntity(107U);
    msg.name.assign("EHXCRGYATINYUATZDSXTMKCLUWRENPQRCYBK");
    msg.value = 235U;

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
    msg.setTimeStamp(0.927691718490575);
    msg.setSource(448U);
    msg.setSourceEntity(9U);
    msg.setDestination(58479U);
    msg.setDestinationEntity(144U);
    msg.name.assign("LYSOCZBBDSUXXEJIUZSJMRYGWZLSFLPXKTKMEXMPRCTLADNRZZGTUKFCUBMGNFWQIEKJVIBLYBGKSEIINRAOIZHMXORUPVYZTFALRHDDPJEOAUFJBQYDICEJXWQWHLZOTQDWHZDHGWVSYCXEOSLRSVQNJKQJPTOWFKVQNKMVAWONBJCPVOYIVGXIQRRQBCFMRKPCOENYUYKNCPHWDFQABFNT");

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
    msg.setTimeStamp(0.5767335149539867);
    msg.setSource(42159U);
    msg.setSourceEntity(51U);
    msg.setDestination(39430U);
    msg.setDestinationEntity(48U);
    msg.name.assign("MMOQKVUUCLJUBEROMMPDZJICABYOTXHBWGWLDMVGDHLTIACACFWNSIZHRJLZPJFJURK");

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
    msg.setTimeStamp(0.22494891875754608);
    msg.setSource(4910U);
    msg.setSourceEntity(142U);
    msg.setDestination(62423U);
    msg.setDestinationEntity(145U);
    msg.name.assign("NWRVSWMNKJQSHXSMGVCDBWIJQIZEXOSXICFIQGYXQZHPUXGYSZKYNQEZAILMVGJTERBPUMFOVYGDAVTXFUADXJDWMCVBNSSJOFJICJYBNEQFKPTQKAVMSTXAIUTWZYWHKAMBCPZGJGPPDOFBASIH");

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
    msg.setTimeStamp(0.41340603354220895);
    msg.setSource(62809U);
    msg.setSourceEntity(38U);
    msg.setDestination(32427U);
    msg.setDestinationEntity(121U);
    msg.name.assign("UVEOZFYXUBANVPXBQZFIDHJRVMSZTCCUHSHKWCKFEWLNAXOHXIXJKYYNCHOMJJTZWGGHDHURPDSUDNMBLAFPFCGTPELRGBUKTOXTPIZBYVGISHJDGOSLARXTFJJQJCPWINENJUFCQNCDZUZGRMYYQOKAKCEEYRVABWATGLOGQRBBOEQRKPMQJPDVXRKFAIID");
    msg.value = 185U;

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
    msg.setTimeStamp(0.5178347063479264);
    msg.setSource(57084U);
    msg.setSourceEntity(243U);
    msg.setDestination(26826U);
    msg.setDestinationEntity(234U);
    msg.name.assign("CCIZPMIMJTLEWJQEXDHZCSRDMSTUNPGHUSBNOSBZRYPMFOFJFIXHQJZSPATPCOICCSMINHUHXTOAWBJQSQAGUADKKKEFQQNHINAUMTCWEXGYLBQPBCMKZYUJMEZBELUOYEWKVILXLYISKGFBVRRHKHZGJDSUXWXVWYNYWGOOBTHDFLTXLAVRWXAALFLRGAZTQYKVVTYDOPEVAFHEFONNWNCGIJJZKPQDVRKLCPRDREOIPTDGNBBZDRVFY");
    msg.value = 48U;

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
    msg.setTimeStamp(0.7102295428534839);
    msg.setSource(28672U);
    msg.setSourceEntity(63U);
    msg.setDestination(33694U);
    msg.setDestinationEntity(24U);
    msg.name.assign("OCKNGTTRQNZYRRGFPDYPEVEEGSVLBHIVUVNAMAXLNYEILTSNQKECFYCWKAXUFCCGFUJHNPNIHUTJEOHETR");
    msg.value = 131U;

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
    msg.setTimeStamp(0.26640547550911264);
    msg.setSource(59468U);
    msg.setSourceEntity(105U);
    msg.setDestination(11871U);
    msg.setDestinationEntity(69U);
    msg.id = 37U;
    msg.period = 4073494697U;
    msg.duty_cycle = 260161836U;

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
    msg.setTimeStamp(0.3827500376984021);
    msg.setSource(55054U);
    msg.setSourceEntity(209U);
    msg.setDestination(30193U);
    msg.setDestinationEntity(86U);
    msg.id = 48U;
    msg.period = 4079382299U;
    msg.duty_cycle = 623276767U;

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
    msg.setTimeStamp(0.8474063981958488);
    msg.setSource(17783U);
    msg.setSourceEntity(203U);
    msg.setDestination(23826U);
    msg.setDestinationEntity(155U);
    msg.id = 139U;
    msg.period = 4274161571U;
    msg.duty_cycle = 2169827663U;

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
    msg.setTimeStamp(0.5036995047584637);
    msg.setSource(34860U);
    msg.setSourceEntity(14U);
    msg.setDestination(55327U);
    msg.setDestinationEntity(141U);
    msg.id = 90U;
    msg.period = 4191546198U;
    msg.duty_cycle = 2070935323U;

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
    msg.setTimeStamp(0.998342693794509);
    msg.setSource(33253U);
    msg.setSourceEntity(159U);
    msg.setDestination(61197U);
    msg.setDestinationEntity(186U);
    msg.id = 175U;
    msg.period = 853742898U;
    msg.duty_cycle = 3971632643U;

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
    msg.setTimeStamp(0.4884633268453543);
    msg.setSource(30798U);
    msg.setSourceEntity(164U);
    msg.setDestination(17033U);
    msg.setDestinationEntity(221U);
    msg.id = 130U;
    msg.period = 1748730795U;
    msg.duty_cycle = 3127351320U;

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
    msg.setTimeStamp(0.9854359391631358);
    msg.setSource(26851U);
    msg.setSourceEntity(189U);
    msg.setDestination(25079U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.3876779602963979;
    msg.lon = 0.5352170022758743;
    msg.height = 0.13171587005305696;
    msg.x = 0.3045998068367949;
    msg.y = 0.13616171922611042;
    msg.z = 0.22658206262249825;
    msg.phi = 0.3725510087982101;
    msg.theta = 0.415876217341106;
    msg.psi = 0.5762251497709158;
    msg.u = 0.93276111416174;
    msg.v = 0.11069871872876014;
    msg.w = 0.9825917668247561;
    msg.vx = 0.041355064367131766;
    msg.vy = 0.08145992483721565;
    msg.vz = 0.13554351409941012;
    msg.p = 0.13684730762083797;
    msg.q = 0.3423678993423298;
    msg.r = 0.43008918745825553;
    msg.depth = 0.619057711768697;
    msg.alt = 0.27918148293857337;

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
    msg.setTimeStamp(0.005950613177968078);
    msg.setSource(43533U);
    msg.setSourceEntity(164U);
    msg.setDestination(47244U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.28604324324078334;
    msg.lon = 0.14232779982301413;
    msg.height = 0.1448344203294708;
    msg.x = 0.7297861435308881;
    msg.y = 0.06768328221399167;
    msg.z = 0.10998804126620199;
    msg.phi = 0.4215018338471097;
    msg.theta = 0.6190835522781649;
    msg.psi = 0.5028271723061001;
    msg.u = 0.6879557306826909;
    msg.v = 0.9179316074448807;
    msg.w = 0.1499205896119964;
    msg.vx = 0.3823690004534981;
    msg.vy = 0.7829126050086109;
    msg.vz = 0.28786571004877115;
    msg.p = 0.1284114795394452;
    msg.q = 0.8163670693938286;
    msg.r = 0.8406408690160683;
    msg.depth = 0.20285074081014975;
    msg.alt = 0.26758920347473925;

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
    msg.setTimeStamp(0.16283265763063903);
    msg.setSource(64837U);
    msg.setSourceEntity(78U);
    msg.setDestination(4936U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.00791307513952999;
    msg.lon = 0.8215758761152935;
    msg.height = 0.6839481283641551;
    msg.x = 0.9650411389358946;
    msg.y = 0.7512529352501326;
    msg.z = 0.7244346849667788;
    msg.phi = 0.05731685643257478;
    msg.theta = 0.7651522271343013;
    msg.psi = 0.25287128450811325;
    msg.u = 0.2038739164645822;
    msg.v = 0.6514319658968909;
    msg.w = 0.8540593555348294;
    msg.vx = 0.7139164572407719;
    msg.vy = 0.03030170436948265;
    msg.vz = 0.5572681353408075;
    msg.p = 0.8989196600559207;
    msg.q = 0.44428221796408807;
    msg.r = 0.2962129631094359;
    msg.depth = 0.17344615616427816;
    msg.alt = 0.9023950436863546;

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
    msg.setTimeStamp(0.02570954890385657);
    msg.setSource(16502U);
    msg.setSourceEntity(167U);
    msg.setDestination(57724U);
    msg.setDestinationEntity(150U);
    msg.x = 0.1936910292489784;
    msg.y = 0.8495915623370617;
    msg.z = 0.8448750539418797;

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
    msg.setTimeStamp(0.20142946439135812);
    msg.setSource(53499U);
    msg.setSourceEntity(230U);
    msg.setDestination(48082U);
    msg.setDestinationEntity(67U);
    msg.x = 0.8689506986545968;
    msg.y = 0.10530679983454827;
    msg.z = 0.2966013741311365;

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
    msg.setTimeStamp(0.8922228461542824);
    msg.setSource(16615U);
    msg.setSourceEntity(234U);
    msg.setDestination(35621U);
    msg.setDestinationEntity(73U);
    msg.x = 0.8020710328939743;
    msg.y = 0.25970446716156037;
    msg.z = 0.5976640973910288;

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
    msg.setTimeStamp(0.4942791924195946);
    msg.setSource(1768U);
    msg.setSourceEntity(30U);
    msg.setDestination(18782U);
    msg.setDestinationEntity(185U);
    msg.value = 0.6793300047936945;

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
    msg.setTimeStamp(0.6560429495245399);
    msg.setSource(61430U);
    msg.setSourceEntity(138U);
    msg.setDestination(46283U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9550880663971743;

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
    msg.setTimeStamp(0.366161489080997);
    msg.setSource(35369U);
    msg.setSourceEntity(165U);
    msg.setDestination(8893U);
    msg.setDestinationEntity(205U);
    msg.value = 0.9203319156339549;

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
    msg.setTimeStamp(0.5313731466099001);
    msg.setSource(9695U);
    msg.setSourceEntity(244U);
    msg.setDestination(57208U);
    msg.setDestinationEntity(67U);
    msg.value = 0.6124467965592535;

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
    msg.setTimeStamp(0.5295310089436619);
    msg.setSource(40961U);
    msg.setSourceEntity(172U);
    msg.setDestination(24773U);
    msg.setDestinationEntity(114U);
    msg.value = 0.48935671314407325;

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
    msg.setTimeStamp(0.6678035226546012);
    msg.setSource(2118U);
    msg.setSourceEntity(115U);
    msg.setDestination(18519U);
    msg.setDestinationEntity(121U);
    msg.value = 0.3707304738188364;

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
    msg.setTimeStamp(0.19005415100379286);
    msg.setSource(45796U);
    msg.setSourceEntity(103U);
    msg.setDestination(47590U);
    msg.setDestinationEntity(102U);
    msg.x = 0.772378764915411;
    msg.y = 0.5509860089357085;
    msg.z = 0.141851782893463;
    msg.phi = 0.4113291035345138;
    msg.theta = 0.6106642874554903;
    msg.psi = 0.4723587854898945;
    msg.p = 0.3393056103473855;
    msg.q = 0.3408289247549424;
    msg.r = 0.8718306374905286;
    msg.u = 0.4431020979012146;
    msg.v = 0.37048586442135634;
    msg.w = 0.9127066286515985;
    msg.bias_psi = 0.49887586478260393;
    msg.bias_r = 0.6470555602428398;

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
    msg.setTimeStamp(0.2646915658613278);
    msg.setSource(7615U);
    msg.setSourceEntity(234U);
    msg.setDestination(36817U);
    msg.setDestinationEntity(154U);
    msg.x = 0.7923245887823461;
    msg.y = 0.9483100978386523;
    msg.z = 0.04556511876735325;
    msg.phi = 0.5983861662746828;
    msg.theta = 0.310495106747538;
    msg.psi = 0.8147367462424989;
    msg.p = 0.5963695219395568;
    msg.q = 0.967576905547503;
    msg.r = 0.7546156441721011;
    msg.u = 0.12075046965112413;
    msg.v = 0.33354868905756996;
    msg.w = 0.19920783533068298;
    msg.bias_psi = 0.020943386774762818;
    msg.bias_r = 0.8648760139214353;

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
    msg.setTimeStamp(0.04003140575822517);
    msg.setSource(19200U);
    msg.setSourceEntity(37U);
    msg.setDestination(39226U);
    msg.setDestinationEntity(93U);
    msg.x = 0.3317721583977046;
    msg.y = 0.6097184777021067;
    msg.z = 0.7423044636400846;
    msg.phi = 0.2069732263659083;
    msg.theta = 0.12479079278078942;
    msg.psi = 0.5932244861916304;
    msg.p = 0.7192110442198953;
    msg.q = 0.24957317515890753;
    msg.r = 0.9643417389637773;
    msg.u = 0.8171213884652732;
    msg.v = 0.479823293074105;
    msg.w = 0.8436802858142728;
    msg.bias_psi = 0.5776111295272363;
    msg.bias_r = 0.6548339967487288;

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
    msg.setTimeStamp(0.4830259150989844);
    msg.setSource(62695U);
    msg.setSourceEntity(221U);
    msg.setDestination(64816U);
    msg.setDestinationEntity(195U);
    msg.bias_psi = 0.7205122890251033;
    msg.bias_r = 0.938457461599441;
    msg.cog = 0.401836367021849;
    msg.cyaw = 0.3818613669482831;
    msg.lbl_rej_level = 0.21899326536917518;
    msg.gps_rej_level = 0.009693494610817477;
    msg.custom_x = 0.5957231393952677;
    msg.custom_y = 0.3076222565482304;
    msg.custom_z = 0.343953921446565;

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
    msg.setTimeStamp(0.47522927893132016);
    msg.setSource(514U);
    msg.setSourceEntity(43U);
    msg.setDestination(32470U);
    msg.setDestinationEntity(210U);
    msg.bias_psi = 0.07407272435029777;
    msg.bias_r = 0.10692622653981254;
    msg.cog = 0.9373423969764189;
    msg.cyaw = 0.19574395898922625;
    msg.lbl_rej_level = 0.03543698962033781;
    msg.gps_rej_level = 0.8641148986760385;
    msg.custom_x = 0.20191819439188619;
    msg.custom_y = 0.4567296030595235;
    msg.custom_z = 0.22832670522810083;

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
    msg.setTimeStamp(0.9826148850364609);
    msg.setSource(45657U);
    msg.setSourceEntity(45U);
    msg.setDestination(35546U);
    msg.setDestinationEntity(207U);
    msg.bias_psi = 0.02383927565268984;
    msg.bias_r = 0.1832479831586027;
    msg.cog = 0.9060901007628213;
    msg.cyaw = 0.797285016897782;
    msg.lbl_rej_level = 0.32518299037255705;
    msg.gps_rej_level = 0.7518229197225519;
    msg.custom_x = 0.10415915294753175;
    msg.custom_y = 0.6770761699389803;
    msg.custom_z = 0.6229304274167361;

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
    msg.setTimeStamp(0.1318375934109569);
    msg.setSource(15604U);
    msg.setSourceEntity(133U);
    msg.setDestination(58885U);
    msg.setDestinationEntity(71U);
    msg.utc_time = 0.1521517914217433;
    msg.reason = 70U;

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
    msg.setTimeStamp(0.9641414202425537);
    msg.setSource(19995U);
    msg.setSourceEntity(154U);
    msg.setDestination(60523U);
    msg.setDestinationEntity(193U);
    msg.utc_time = 0.9561833498534974;
    msg.reason = 20U;

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
    msg.setTimeStamp(0.18561148608417255);
    msg.setSource(63263U);
    msg.setSourceEntity(117U);
    msg.setDestination(1880U);
    msg.setDestinationEntity(54U);
    msg.utc_time = 0.41310490740243877;
    msg.reason = 121U;

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
    msg.setTimeStamp(0.4786777723354534);
    msg.setSource(23540U);
    msg.setSourceEntity(246U);
    msg.setDestination(937U);
    msg.setDestinationEntity(221U);
    msg.id = 227U;
    msg.range = 0.9985692421883104;
    msg.acceptance = 6U;

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
    msg.setTimeStamp(0.8878003329106893);
    msg.setSource(16176U);
    msg.setSourceEntity(111U);
    msg.setDestination(14390U);
    msg.setDestinationEntity(72U);
    msg.id = 17U;
    msg.range = 0.06127655191872805;
    msg.acceptance = 77U;

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
    msg.setTimeStamp(0.45047011301362805);
    msg.setSource(22796U);
    msg.setSourceEntity(45U);
    msg.setDestination(25550U);
    msg.setDestinationEntity(37U);
    msg.id = 94U;
    msg.range = 0.7380645494864806;
    msg.acceptance = 84U;

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
    msg.setTimeStamp(0.6203023063444004);
    msg.setSource(38440U);
    msg.setSourceEntity(60U);
    msg.setDestination(34883U);
    msg.setDestinationEntity(101U);
    msg.type = 213U;
    msg.reason = 156U;
    msg.value = 0.7643408862519911;
    msg.timestep = 0.5026699155020317;

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
    msg.setTimeStamp(0.3036909793964062);
    msg.setSource(49201U);
    msg.setSourceEntity(80U);
    msg.setDestination(47106U);
    msg.setDestinationEntity(186U);
    msg.type = 41U;
    msg.reason = 216U;
    msg.value = 0.9922159991889699;
    msg.timestep = 0.13246520133808282;

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
    msg.setTimeStamp(0.3145491619476136);
    msg.setSource(47407U);
    msg.setSourceEntity(139U);
    msg.setDestination(57678U);
    msg.setDestinationEntity(87U);
    msg.type = 66U;
    msg.reason = 188U;
    msg.value = 0.9954312026574419;
    msg.timestep = 0.4162498710852718;

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
    msg.setTimeStamp(0.016188178378817142);
    msg.setSource(32412U);
    msg.setSourceEntity(112U);
    msg.setDestination(32658U);
    msg.setDestinationEntity(111U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GXAOPIWSISPJYKNSAZKDOQMIFTCALQBDDLPBEJXGCH");
    tmp_msg_0.lat = 0.7337137528750932;
    tmp_msg_0.lon = 0.05145426944374942;
    tmp_msg_0.depth = 0.8005268589334702;
    tmp_msg_0.query_channel = 114U;
    tmp_msg_0.reply_channel = 246U;
    tmp_msg_0.transponder_delay = 7U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6441599488760268;
    msg.y = 0.4511822754616468;
    msg.var_x = 0.45071989500051446;
    msg.var_y = 0.6029000520489051;
    msg.distance = 0.3362543221001528;

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
    msg.setTimeStamp(0.11450706664942112);
    msg.setSource(26674U);
    msg.setSourceEntity(117U);
    msg.setDestination(13803U);
    msg.setDestinationEntity(196U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XEMILGAPCBLSWCKXGMROXQOINXTKZRPKHLLMGFGUGGVMRUXVSGWGHKWWWFQHBEMZFRDJEENXDQQATUJVAWCFBVMYKFWIDQLCQIEVVYNOOQPNHOUAPSHZFWRSDITHLOYZTYJELPACIBZBQNTDHIZSXRGVMPNLHVACT");
    tmp_msg_0.lat = 0.7246265458235979;
    tmp_msg_0.lon = 0.7927209003587443;
    tmp_msg_0.depth = 0.0850919345611052;
    tmp_msg_0.query_channel = 140U;
    tmp_msg_0.reply_channel = 163U;
    tmp_msg_0.transponder_delay = 45U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7373003940941907;
    msg.y = 0.30499806395176954;
    msg.var_x = 0.032765801597382294;
    msg.var_y = 0.8127692295963189;
    msg.distance = 0.6984317259181179;

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
    msg.setTimeStamp(0.5558753972657248);
    msg.setSource(19681U);
    msg.setSourceEntity(73U);
    msg.setDestination(49670U);
    msg.setDestinationEntity(153U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FBKEWZDDXVDJYAKSFPTD");
    tmp_msg_0.lat = 0.6252852790174351;
    tmp_msg_0.lon = 0.11022062745939132;
    tmp_msg_0.depth = 0.3066864029768579;
    tmp_msg_0.query_channel = 209U;
    tmp_msg_0.reply_channel = 211U;
    tmp_msg_0.transponder_delay = 32U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9682969959857725;
    msg.y = 0.8006787461394541;
    msg.var_x = 0.3379219989913962;
    msg.var_y = 0.17687351080529168;
    msg.distance = 0.0019035372659504946;

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
    msg.setTimeStamp(0.9680589861324892);
    msg.setSource(29101U);
    msg.setSourceEntity(15U);
    msg.setDestination(34207U);
    msg.setDestinationEntity(240U);
    msg.state = 229U;

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
    msg.setTimeStamp(0.8483475804008082);
    msg.setSource(8485U);
    msg.setSourceEntity(171U);
    msg.setDestination(9813U);
    msg.setDestinationEntity(1U);
    msg.state = 75U;

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
    msg.setTimeStamp(0.2773848663718791);
    msg.setSource(32553U);
    msg.setSourceEntity(29U);
    msg.setDestination(1622U);
    msg.setDestinationEntity(27U);
    msg.state = 73U;

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
    msg.setTimeStamp(0.7680050335317472);
    msg.setSource(27053U);
    msg.setSourceEntity(223U);
    msg.setDestination(44835U);
    msg.setDestinationEntity(233U);
    msg.x = 0.3109097127980225;
    msg.y = 0.6550144484352131;
    msg.z = 0.8557911710521159;

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
    msg.setTimeStamp(0.3119171403866734);
    msg.setSource(639U);
    msg.setSourceEntity(66U);
    msg.setDestination(39340U);
    msg.setDestinationEntity(204U);
    msg.x = 0.32829873832014644;
    msg.y = 0.9361562741327062;
    msg.z = 0.36785152373843055;

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
    msg.setTimeStamp(0.39832616811722377);
    msg.setSource(64177U);
    msg.setSourceEntity(125U);
    msg.setDestination(33535U);
    msg.setDestinationEntity(180U);
    msg.x = 0.5262182014618048;
    msg.y = 0.4968753422988058;
    msg.z = 0.7848502389615243;

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
    msg.setTimeStamp(0.3276144356666527);
    msg.setSource(6552U);
    msg.setSourceEntity(2U);
    msg.setDestination(26142U);
    msg.setDestinationEntity(252U);
    msg.va = 0.1347785828832062;
    msg.aoa = 0.6875069261399991;
    msg.ssa = 0.4550446208929141;

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
    msg.setTimeStamp(0.49758213657712613);
    msg.setSource(47754U);
    msg.setSourceEntity(167U);
    msg.setDestination(6603U);
    msg.setDestinationEntity(143U);
    msg.va = 0.5944534810342671;
    msg.aoa = 0.18994641719687488;
    msg.ssa = 0.0455977682022809;

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
    msg.setTimeStamp(0.8761181895911856);
    msg.setSource(59690U);
    msg.setSourceEntity(16U);
    msg.setDestination(2281U);
    msg.setDestinationEntity(4U);
    msg.va = 0.6671394765229534;
    msg.aoa = 0.9737361939915411;
    msg.ssa = 0.6253878498473914;

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
    msg.setTimeStamp(0.7376223843695539);
    msg.setSource(53370U);
    msg.setSourceEntity(204U);
    msg.setDestination(58052U);
    msg.setDestinationEntity(61U);
    msg.value = 0.4303575929197009;

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
    msg.setTimeStamp(0.6397890541650741);
    msg.setSource(2416U);
    msg.setSourceEntity(225U);
    msg.setDestination(38381U);
    msg.setDestinationEntity(41U);
    msg.value = 0.654235217804918;

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
    msg.setTimeStamp(0.14381004662439745);
    msg.setSource(9103U);
    msg.setSourceEntity(231U);
    msg.setDestination(22422U);
    msg.setDestinationEntity(143U);
    msg.value = 0.046357000004873083;

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
    msg.setTimeStamp(0.5432146852937003);
    msg.setSource(8230U);
    msg.setSourceEntity(54U);
    msg.setDestination(27070U);
    msg.setDestinationEntity(243U);
    msg.value = 0.9859338671185814;
    msg.z_units = 113U;

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
    msg.setTimeStamp(0.7394832524551891);
    msg.setSource(5808U);
    msg.setSourceEntity(225U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(80U);
    msg.value = 0.3402173334597103;
    msg.z_units = 226U;

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
    msg.setTimeStamp(0.8679746259407891);
    msg.setSource(7326U);
    msg.setSourceEntity(101U);
    msg.setDestination(62134U);
    msg.setDestinationEntity(138U);
    msg.value = 0.9175979347205478;
    msg.z_units = 130U;

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
    msg.setTimeStamp(0.3546776001377898);
    msg.setSource(56124U);
    msg.setSourceEntity(210U);
    msg.setDestination(58367U);
    msg.setDestinationEntity(146U);
    msg.value = 0.0030121478262468138;
    msg.speed_units = 147U;

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
    msg.setTimeStamp(0.8880940239025326);
    msg.setSource(24034U);
    msg.setSourceEntity(104U);
    msg.setDestination(31805U);
    msg.setDestinationEntity(132U);
    msg.value = 0.8902182008500318;
    msg.speed_units = 91U;

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
    msg.setTimeStamp(0.8096617336727537);
    msg.setSource(18243U);
    msg.setSourceEntity(36U);
    msg.setDestination(850U);
    msg.setDestinationEntity(127U);
    msg.value = 0.44988204000301835;
    msg.speed_units = 205U;

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
    msg.setTimeStamp(0.42591661594878183);
    msg.setSource(32666U);
    msg.setSourceEntity(174U);
    msg.setDestination(14153U);
    msg.setDestinationEntity(134U);
    msg.value = 0.2503274393599607;

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
    msg.setTimeStamp(0.4220442662586854);
    msg.setSource(12545U);
    msg.setSourceEntity(36U);
    msg.setDestination(44891U);
    msg.setDestinationEntity(58U);
    msg.value = 0.3132481332853736;

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
    msg.setTimeStamp(0.6390959986843633);
    msg.setSource(6905U);
    msg.setSourceEntity(89U);
    msg.setDestination(53097U);
    msg.setDestinationEntity(240U);
    msg.value = 0.011375078178495479;

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
    msg.setTimeStamp(0.7360966202352516);
    msg.setSource(62750U);
    msg.setSourceEntity(205U);
    msg.setDestination(48222U);
    msg.setDestinationEntity(51U);
    msg.value = 0.17608510131273158;

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
    msg.setTimeStamp(0.8653770803524946);
    msg.setSource(62664U);
    msg.setSourceEntity(120U);
    msg.setDestination(43211U);
    msg.setDestinationEntity(80U);
    msg.value = 0.656425398205995;

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
    msg.setTimeStamp(0.31901194237341);
    msg.setSource(23787U);
    msg.setSourceEntity(19U);
    msg.setDestination(41748U);
    msg.setDestinationEntity(90U);
    msg.value = 0.04149964911061599;

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
    msg.setTimeStamp(0.908016949005858);
    msg.setSource(31946U);
    msg.setSourceEntity(36U);
    msg.setDestination(44508U);
    msg.setDestinationEntity(95U);
    msg.value = 0.13257958273224013;

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
    msg.setTimeStamp(0.11000863579691544);
    msg.setSource(3333U);
    msg.setSourceEntity(71U);
    msg.setDestination(48317U);
    msg.setDestinationEntity(176U);
    msg.value = 0.7487226706285208;

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
    msg.setTimeStamp(0.4738215693419876);
    msg.setSource(63226U);
    msg.setSourceEntity(68U);
    msg.setDestination(6268U);
    msg.setDestinationEntity(148U);
    msg.value = 0.2117780640988085;

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
    msg.setTimeStamp(0.43836517879517367);
    msg.setSource(20717U);
    msg.setSourceEntity(8U);
    msg.setDestination(9066U);
    msg.setDestinationEntity(111U);
    msg.path_ref = 3106829329U;
    msg.start_lat = 0.4381114649895995;
    msg.start_lon = 0.6830498162819325;
    msg.start_z = 0.9593156932793824;
    msg.start_z_units = 171U;
    msg.end_lat = 0.19578284936095258;
    msg.end_lon = 0.4327946863714677;
    msg.end_z = 0.938143153236089;
    msg.end_z_units = 130U;
    msg.speed = 0.1887457193749993;
    msg.speed_units = 86U;
    msg.lradius = 0.6656513901018547;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.5685464813472417);
    msg.setSource(1152U);
    msg.setSourceEntity(194U);
    msg.setDestination(64350U);
    msg.setDestinationEntity(76U);
    msg.path_ref = 299849093U;
    msg.start_lat = 0.8927568168459555;
    msg.start_lon = 0.07310011275440131;
    msg.start_z = 0.9887300180702409;
    msg.start_z_units = 62U;
    msg.end_lat = 0.9781205987666167;
    msg.end_lon = 0.28796530723424885;
    msg.end_z = 0.2743201441059805;
    msg.end_z_units = 4U;
    msg.speed = 0.004395632192764842;
    msg.speed_units = 164U;
    msg.lradius = 0.6123362182576267;
    msg.flags = 21U;

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
    msg.setTimeStamp(0.14537948272361834);
    msg.setSource(37820U);
    msg.setSourceEntity(97U);
    msg.setDestination(62726U);
    msg.setDestinationEntity(163U);
    msg.path_ref = 1181047040U;
    msg.start_lat = 0.11036197500219103;
    msg.start_lon = 0.4438294374391424;
    msg.start_z = 0.09350686663409735;
    msg.start_z_units = 121U;
    msg.end_lat = 0.02846981940479454;
    msg.end_lon = 0.3043597875158883;
    msg.end_z = 0.41795424688298344;
    msg.end_z_units = 237U;
    msg.speed = 0.40064215125542146;
    msg.speed_units = 112U;
    msg.lradius = 0.798463771453867;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.5826569737159014);
    msg.setSource(6464U);
    msg.setSourceEntity(5U);
    msg.setDestination(42810U);
    msg.setDestinationEntity(139U);
    msg.x = 0.37742360766723937;
    msg.y = 0.6498164593540515;
    msg.z = 0.6804030566385474;
    msg.k = 0.5016121314832319;
    msg.m = 0.819712885031894;
    msg.n = 0.8860442893765035;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.9026728871828911);
    msg.setSource(7863U);
    msg.setSourceEntity(22U);
    msg.setDestination(48001U);
    msg.setDestinationEntity(19U);
    msg.x = 0.2467033990856592;
    msg.y = 0.0021556411954146704;
    msg.z = 0.04000913678902396;
    msg.k = 0.3516041073906653;
    msg.m = 0.5692321504042942;
    msg.n = 0.5081175040218667;
    msg.flags = 36U;

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
    msg.setTimeStamp(0.19865879694652722);
    msg.setSource(19403U);
    msg.setSourceEntity(54U);
    msg.setDestination(6184U);
    msg.setDestinationEntity(108U);
    msg.x = 0.49745165285905246;
    msg.y = 0.30138563904779325;
    msg.z = 0.8632042943831232;
    msg.k = 0.6618090052366331;
    msg.m = 0.8589952015757409;
    msg.n = 0.06349818718545219;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.7283100777957424);
    msg.setSource(43981U);
    msg.setSourceEntity(63U);
    msg.setDestination(43173U);
    msg.setDestinationEntity(136U);
    msg.value = 0.7772845584662101;

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
    msg.setTimeStamp(0.6783479736187973);
    msg.setSource(48705U);
    msg.setSourceEntity(232U);
    msg.setDestination(33865U);
    msg.setDestinationEntity(223U);
    msg.value = 0.12600975100920453;

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
    msg.setTimeStamp(0.017564383021391627);
    msg.setSource(13522U);
    msg.setSourceEntity(137U);
    msg.setDestination(54710U);
    msg.setDestinationEntity(32U);
    msg.value = 0.9828875640430926;

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
    msg.setTimeStamp(0.3391315349842283);
    msg.setSource(8688U);
    msg.setSourceEntity(209U);
    msg.setDestination(39440U);
    msg.setDestinationEntity(199U);
    msg.u = 0.8945048295345069;
    msg.v = 0.17867053664325883;
    msg.w = 0.2963191241872921;
    msg.p = 0.7809831849554615;
    msg.q = 0.634301438799192;
    msg.r = 0.6291173496416697;
    msg.flags = 15U;

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
    msg.setTimeStamp(0.1058262044857402);
    msg.setSource(33392U);
    msg.setSourceEntity(19U);
    msg.setDestination(46981U);
    msg.setDestinationEntity(178U);
    msg.u = 0.17115452647756713;
    msg.v = 0.1984755825778013;
    msg.w = 0.5408703155977009;
    msg.p = 0.29119180816283097;
    msg.q = 0.39816456875327055;
    msg.r = 0.7081821998808203;
    msg.flags = 101U;

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
    msg.setTimeStamp(0.5978618947486325);
    msg.setSource(37037U);
    msg.setSourceEntity(53U);
    msg.setDestination(61998U);
    msg.setDestinationEntity(243U);
    msg.u = 0.9589051619311669;
    msg.v = 0.4509194310114484;
    msg.w = 0.6674270645895621;
    msg.p = 0.5466684512943947;
    msg.q = 0.656433970887624;
    msg.r = 0.8915274026360036;
    msg.flags = 37U;

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
    msg.setTimeStamp(0.14718977909251418);
    msg.setSource(32013U);
    msg.setSourceEntity(29U);
    msg.setDestination(47261U);
    msg.setDestinationEntity(138U);
    msg.path_ref = 1985303572U;
    msg.start_lat = 0.015501798325048166;
    msg.start_lon = 0.4407568948596001;
    msg.start_z = 0.8659367395443798;
    msg.start_z_units = 9U;
    msg.end_lat = 0.5634047039358935;
    msg.end_lon = 0.41192215409991406;
    msg.end_z = 0.4415651706005569;
    msg.end_z_units = 98U;
    msg.lradius = 0.5026108146482542;
    msg.flags = 216U;
    msg.x = 0.8210703263312404;
    msg.y = 0.8860023640920477;
    msg.z = 0.46471502612977256;
    msg.vx = 0.17452063833009412;
    msg.vy = 0.20328190602424356;
    msg.vz = 0.23822460958444902;
    msg.course_error = 0.8121338757168316;
    msg.eta = 33966U;

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
    msg.setTimeStamp(0.8290422616043593);
    msg.setSource(20618U);
    msg.setSourceEntity(52U);
    msg.setDestination(19199U);
    msg.setDestinationEntity(180U);
    msg.path_ref = 3589468485U;
    msg.start_lat = 0.22473349720977664;
    msg.start_lon = 0.048422955143965885;
    msg.start_z = 0.3666702443147394;
    msg.start_z_units = 86U;
    msg.end_lat = 0.09668094074886613;
    msg.end_lon = 0.46679403357494986;
    msg.end_z = 0.9678167247103763;
    msg.end_z_units = 53U;
    msg.lradius = 0.3207484772810396;
    msg.flags = 247U;
    msg.x = 0.2296093809819898;
    msg.y = 0.5493349955292178;
    msg.z = 0.770430451584866;
    msg.vx = 0.7413000823604273;
    msg.vy = 0.9537301351566064;
    msg.vz = 0.7068181014745739;
    msg.course_error = 0.09076025806249388;
    msg.eta = 35409U;

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
    msg.setTimeStamp(0.8214252103666984);
    msg.setSource(13070U);
    msg.setSourceEntity(254U);
    msg.setDestination(38537U);
    msg.setDestinationEntity(8U);
    msg.path_ref = 2538053656U;
    msg.start_lat = 0.48583429779358167;
    msg.start_lon = 0.9706990550604768;
    msg.start_z = 0.205386084498691;
    msg.start_z_units = 197U;
    msg.end_lat = 0.8235138195526995;
    msg.end_lon = 0.029444382503328814;
    msg.end_z = 0.42128451515252696;
    msg.end_z_units = 36U;
    msg.lradius = 0.5777092273622997;
    msg.flags = 211U;
    msg.x = 0.16650918521177405;
    msg.y = 0.7692895021066806;
    msg.z = 0.6571413141672737;
    msg.vx = 0.5586567637128145;
    msg.vy = 0.28318603665228903;
    msg.vz = 0.46223712899190483;
    msg.course_error = 0.04353730690254243;
    msg.eta = 59525U;

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
    msg.setTimeStamp(0.9004542344110407);
    msg.setSource(47218U);
    msg.setSourceEntity(46U);
    msg.setDestination(45974U);
    msg.setDestinationEntity(139U);
    msg.k = 0.9132798937805411;
    msg.m = 0.5653252261588413;
    msg.n = 0.38664809126081345;

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
    msg.setTimeStamp(0.14620696227912555);
    msg.setSource(18648U);
    msg.setSourceEntity(96U);
    msg.setDestination(2699U);
    msg.setDestinationEntity(210U);
    msg.k = 0.5936090792685808;
    msg.m = 0.0641490309746846;
    msg.n = 0.9317659413485608;

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
    msg.setTimeStamp(0.7635156448269407);
    msg.setSource(36050U);
    msg.setSourceEntity(201U);
    msg.setDestination(43671U);
    msg.setDestinationEntity(61U);
    msg.k = 0.6989948999215985;
    msg.m = 0.6136868485219347;
    msg.n = 0.6087554845669998;

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
    msg.setTimeStamp(0.5528754608373594);
    msg.setSource(39148U);
    msg.setSourceEntity(221U);
    msg.setDestination(34636U);
    msg.setDestinationEntity(103U);
    msg.p = 0.9108823182320122;
    msg.i = 0.10796159421871931;
    msg.d = 0.6027582176301816;
    msg.a = 0.11471840482448259;

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
    msg.setTimeStamp(0.1714141976938196);
    msg.setSource(23223U);
    msg.setSourceEntity(87U);
    msg.setDestination(13791U);
    msg.setDestinationEntity(187U);
    msg.p = 0.6283937798380698;
    msg.i = 0.41672677547265136;
    msg.d = 0.9999655301517388;
    msg.a = 0.9036118549687728;

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
    msg.setTimeStamp(0.6398765394194814);
    msg.setSource(49224U);
    msg.setSourceEntity(28U);
    msg.setDestination(38451U);
    msg.setDestinationEntity(7U);
    msg.p = 0.5855709299023107;
    msg.i = 0.2679754593530487;
    msg.d = 0.29949935910026637;
    msg.a = 0.9659064232400705;

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
    msg.setTimeStamp(0.18139303783111693);
    msg.setSource(33090U);
    msg.setSourceEntity(193U);
    msg.setDestination(38535U);
    msg.setDestinationEntity(248U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.42927441630496865);
    msg.setSource(23752U);
    msg.setSourceEntity(90U);
    msg.setDestination(30561U);
    msg.setDestinationEntity(102U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.22057424275670345);
    msg.setSource(62028U);
    msg.setSourceEntity(189U);
    msg.setDestination(6893U);
    msg.setDestinationEntity(86U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.09148121775013329);
    msg.setSource(6946U);
    msg.setSourceEntity(186U);
    msg.setDestination(20507U);
    msg.setDestinationEntity(32U);
    msg.x = 0.23480425311365793;
    msg.y = 0.2088153133201297;
    msg.z = 0.9301128431742254;
    msg.vx = 0.7693665654285305;
    msg.vy = 0.2919005231998312;
    msg.vz = 0.538586684406982;
    msg.ax = 0.6540947407655434;
    msg.ay = 0.9032975515503051;
    msg.az = 0.067728901539294;
    msg.flags = 50343U;

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
    msg.setTimeStamp(0.786665040297375);
    msg.setSource(19970U);
    msg.setSourceEntity(111U);
    msg.setDestination(10550U);
    msg.setDestinationEntity(30U);
    msg.x = 0.7051635512140066;
    msg.y = 0.05535575006543014;
    msg.z = 0.049538436856224055;
    msg.vx = 0.5850853815260709;
    msg.vy = 0.8533259107794335;
    msg.vz = 0.7441447873847853;
    msg.ax = 0.6211583063432855;
    msg.ay = 0.5204425720213245;
    msg.az = 0.49626209894998985;
    msg.flags = 35149U;

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
    msg.setTimeStamp(0.12753700365184895);
    msg.setSource(40174U);
    msg.setSourceEntity(26U);
    msg.setDestination(12259U);
    msg.setDestinationEntity(130U);
    msg.x = 0.7809560297465211;
    msg.y = 0.9615698767348975;
    msg.z = 0.007501577657873071;
    msg.vx = 0.5190767274676609;
    msg.vy = 0.6037492445297381;
    msg.vz = 0.6795847321347089;
    msg.ax = 0.35523395483460773;
    msg.ay = 0.7283340478915277;
    msg.az = 0.3879681411645992;
    msg.flags = 36911U;

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
    msg.setTimeStamp(0.306003667761264);
    msg.setSource(18581U);
    msg.setSourceEntity(252U);
    msg.setDestination(22592U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7688274099700846;

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
    msg.setTimeStamp(0.11750246678345377);
    msg.setSource(58165U);
    msg.setSourceEntity(108U);
    msg.setDestination(25318U);
    msg.setDestinationEntity(187U);
    msg.value = 0.6250571972160361;

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
    msg.setTimeStamp(0.7089054010742071);
    msg.setSource(33695U);
    msg.setSourceEntity(215U);
    msg.setDestination(26600U);
    msg.setDestinationEntity(82U);
    msg.value = 0.7994814592690385;

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
    msg.setTimeStamp(0.7058631686916877);
    msg.setSource(1526U);
    msg.setSourceEntity(215U);
    msg.setDestination(4628U);
    msg.setDestinationEntity(49U);
    msg.timeout = 59353U;
    msg.lat = 0.24957529129227818;
    msg.lon = 0.5717007322226263;
    msg.z = 0.8796859454614211;
    msg.z_units = 109U;
    msg.speed = 0.23522290124005663;
    msg.speed_units = 22U;
    msg.roll = 0.06009298983535627;
    msg.pitch = 0.630823429356281;
    msg.yaw = 0.6247705483188074;
    msg.custom.assign("MZBHERCUYBPXQZPVRNHDSZHMYITNLDPWBDQDNGZMKMQPFKSOAHIMRJFUTDPOSYTRNXPGICFZNVVWOYRWCJQDCOAOSWUKWVJCUEJEHYLNTAJSQOSDKACVFDAPNJMZKGONXKL");

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
    msg.setTimeStamp(0.8705557959509893);
    msg.setSource(28017U);
    msg.setSourceEntity(105U);
    msg.setDestination(32801U);
    msg.setDestinationEntity(35U);
    msg.timeout = 6447U;
    msg.lat = 0.19095176426693916;
    msg.lon = 0.010088482713995539;
    msg.z = 0.6453306885010398;
    msg.z_units = 63U;
    msg.speed = 0.06497619705834423;
    msg.speed_units = 75U;
    msg.roll = 0.25316863534512457;
    msg.pitch = 0.9685773948810027;
    msg.yaw = 0.5280098002097481;
    msg.custom.assign("FTURPFEYOMDMMXEHOQPNRSBODZIONJVQYUSCSBKOFFALUWFHNEAWHJNTHTABOTCLVWWZDBWQQJBVMBGRVISAJYJWGNJTSLPCYDPVZISKUEQHBFUHDQCLBKDM");

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
    msg.setTimeStamp(0.23196330859826297);
    msg.setSource(34257U);
    msg.setSourceEntity(13U);
    msg.setDestination(63539U);
    msg.setDestinationEntity(33U);
    msg.timeout = 33324U;
    msg.lat = 0.519230440121278;
    msg.lon = 0.5126504738368972;
    msg.z = 0.5165907317068708;
    msg.z_units = 236U;
    msg.speed = 0.3780398139876028;
    msg.speed_units = 136U;
    msg.roll = 0.9828737146111115;
    msg.pitch = 0.3085464553894359;
    msg.yaw = 0.09112075446664192;
    msg.custom.assign("TDWSMRGOHNLIFKVSYYBSUMDGBUOZQYYRYZAEGCBLLIFJLEKOFQLNBNATJWGXXSTJFUTZDPQMVMBOAEGJIDXHBJQFZHCZHADIUNYRNWQYPERJPVSLXAWJYOUIEQYMBRMQFVOZVBSUSKKITNXPPIUFKTZCXWGASNCXVCGZILHHZBMXNUAWRVYBGGVAKLKXWUELROTQIODFHPUVOEGKPANHMTJDMLDWRSDTECEHSPKQP");

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
    msg.setTimeStamp(0.06593130399497071);
    msg.setSource(7857U);
    msg.setSourceEntity(148U);
    msg.setDestination(9957U);
    msg.setDestinationEntity(65U);
    msg.timeout = 42190U;
    msg.lat = 0.17749535382983217;
    msg.lon = 0.03484617010690949;
    msg.z = 0.9665031395696427;
    msg.z_units = 195U;
    msg.speed = 0.9462567723317397;
    msg.speed_units = 213U;
    msg.duration = 62382U;
    msg.radius = 0.89102027617819;
    msg.flags = 122U;
    msg.custom.assign("UNLLFQIRHVUXYAYSGVXHSIBICKPHGVIQKCQZSETURGCG");

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
    msg.setTimeStamp(0.3947244161264677);
    msg.setSource(14815U);
    msg.setSourceEntity(182U);
    msg.setDestination(41182U);
    msg.setDestinationEntity(93U);
    msg.timeout = 18313U;
    msg.lat = 0.4424469972361298;
    msg.lon = 0.4750892027851875;
    msg.z = 0.7250036076799976;
    msg.z_units = 1U;
    msg.speed = 0.7450454148237011;
    msg.speed_units = 206U;
    msg.duration = 33678U;
    msg.radius = 0.27274562848202444;
    msg.flags = 159U;
    msg.custom.assign("QDASMFNNXWLWDQLHAWSLTDCPEXVISFMUCJGXKBYMFNIGKVVVSDXKHOZUGFBHZGUNSOZQEEUIXNYO");

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
    msg.setTimeStamp(0.44584455666077827);
    msg.setSource(48154U);
    msg.setSourceEntity(7U);
    msg.setDestination(18864U);
    msg.setDestinationEntity(10U);
    msg.timeout = 32511U;
    msg.lat = 0.7009403291305524;
    msg.lon = 0.3471957065334158;
    msg.z = 0.34951980536658844;
    msg.z_units = 175U;
    msg.speed = 0.07261318629339619;
    msg.speed_units = 47U;
    msg.duration = 37513U;
    msg.radius = 0.6634009616757268;
    msg.flags = 231U;
    msg.custom.assign("UDLAHKACVPXELWJYQBLGXKWVNTPRPDYONMHEQAQXKNCQKQYMXTZJFCAPJDIEIVSLTVSDORXRKFAEZUISTMHPPGOXVURXMKNZBWGDFXGADQBFCFPMHNTBUOLHZWUFHWHMNSIDWJFFUYQDPTFEZGHHZJISUUM");

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
    msg.setTimeStamp(0.9254529754318254);
    msg.setSource(2922U);
    msg.setSourceEntity(149U);
    msg.setDestination(23870U);
    msg.setDestinationEntity(6U);
    msg.custom.assign("FWVIWVRIOJIPBHLEOTFJACAINOKGQGXGSCBZPSMQQPAXSPSUZSTQLFKDUCBUTHKKMGUBUZQUIOBNYXRWTYZNWHBEZDTMIUGNFFGWZLNMOHFXZKTWQVTVAVGRULFYCRQGNMJHZQCELKKCWVAXYDVUOSDIEEYAYRKSHXEZWVYXDMIGCKHLPW");

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
    msg.setTimeStamp(0.43390862393283447);
    msg.setSource(33518U);
    msg.setSourceEntity(7U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(91U);
    msg.custom.assign("OOPAOOPYQINTVGBTLBNVGZILHJTJXMPEXCAUPCRSZKXAMOYUBRAQQBYSAWUJLNFDWXURUFXNCGKNRNBEJRLNMHLQEIJPEVNSOMMAJOKDTAPDSVETHUQGHYKGCQX");

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
    msg.setTimeStamp(0.7384552818385685);
    msg.setSource(45616U);
    msg.setSourceEntity(221U);
    msg.setDestination(35792U);
    msg.setDestinationEntity(65U);
    msg.custom.assign("WHLBYZQZIKSVTIMZMWWVIWOPXPNUGFOKUQZJQSTTGVAOSCWTHRYWAPJKEJXCBKDXPYGEVFDLYSSBYHMAPIENGRGJRFFVRFMPUISWIXBFEWCXREFQNFOKELBUMLTHRCDQHCDTLHKCDULUMAAZSWDCGYFAZQOHXTDAIUKVW");

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
    msg.setTimeStamp(0.5304932458230297);
    msg.setSource(60246U);
    msg.setSourceEntity(229U);
    msg.setDestination(11328U);
    msg.setDestinationEntity(43U);
    msg.timeout = 32657U;
    msg.lat = 0.5111090578326349;
    msg.lon = 0.9410362154772528;
    msg.z = 0.8004046956155819;
    msg.z_units = 231U;
    msg.duration = 37033U;
    msg.speed = 0.9328060248565571;
    msg.speed_units = 137U;
    msg.type = 243U;
    msg.radius = 0.36937267089759074;
    msg.length = 0.46950472239303076;
    msg.bearing = 0.5858367000224147;
    msg.direction = 52U;
    msg.custom.assign("NFGPROGNNYUJCTCLYUZNBADABKEAQJWQCYZCHIRFZJBXJFTEFCXSQOHOLSEQJQZTICWKMGOUCVAFFEIWJUTNAPEZLYCFMNMPBXGEFKLNUHZOKVKVYNSXPDHWIMOVNQLARLXEDWHTXRLIUMKYBHOBCGDPPWWJUSSRBGUXYPDHMISFODSXDXZZTZEPBAQMYAMKVYZXGEGCTWWOPBGGKKNHSFVAPTMMUIRVIDUJISRWDQ");

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
    msg.setTimeStamp(0.9518255180897311);
    msg.setSource(1400U);
    msg.setSourceEntity(67U);
    msg.setDestination(60456U);
    msg.setDestinationEntity(253U);
    msg.timeout = 65245U;
    msg.lat = 0.2679799724861156;
    msg.lon = 0.8718179688134223;
    msg.z = 0.8338883163729257;
    msg.z_units = 232U;
    msg.duration = 42981U;
    msg.speed = 0.8896414404888409;
    msg.speed_units = 187U;
    msg.type = 239U;
    msg.radius = 0.4629471532138312;
    msg.length = 0.665140787721842;
    msg.bearing = 0.49196371243959347;
    msg.direction = 156U;
    msg.custom.assign("QPKAWMACRURTKBZWVDMQFKENXAUDVEYVIPRLTWNLLZIGEIMHMRNOIAFELBKDGGLYQEWXTJAAAOFILYQSNMQEQCCWJKEWXVGSYCBIZJBLWZOJPZFBDTDJDZAOINKYDHOXFUUGHUTXYLKHF");

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
    msg.setTimeStamp(0.6270505176150889);
    msg.setSource(20446U);
    msg.setSourceEntity(15U);
    msg.setDestination(65416U);
    msg.setDestinationEntity(35U);
    msg.timeout = 55759U;
    msg.lat = 0.07877299906365076;
    msg.lon = 0.9958435010134814;
    msg.z = 0.3587926576187397;
    msg.z_units = 117U;
    msg.duration = 49542U;
    msg.speed = 0.7720774160473985;
    msg.speed_units = 132U;
    msg.type = 124U;
    msg.radius = 0.9499040868189451;
    msg.length = 0.2662176606196016;
    msg.bearing = 0.17374198680344877;
    msg.direction = 182U;
    msg.custom.assign("TXHNUDTVNHMECPMYBHAIAFHIJSVBAENDLNHPTWDJALKUSFESHKARLVCMQBVZACCIOLGKSWUQCGNRGXLOMTPOMRUIAIJYNLMQCRRYJWVKLNFWPKTOXOPAZBSJFDVJURXFPKIQSBGSZSFKDEBXNHZDFONOATYXTLPWGRJIIGEOT");

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
    msg.setTimeStamp(0.627236049744625);
    msg.setSource(60692U);
    msg.setSourceEntity(43U);
    msg.setDestination(30640U);
    msg.setDestinationEntity(93U);
    msg.duration = 42618U;
    msg.custom.assign("LECAYDPKXEGCYYWRFIZBNZPOAQOAFWJMNJBKDNWZEWYZXUHQXDSSLIBCRDUFJQLEIUXYDZODRBTMQULSQYIAFMKVNBDEUVHTXGNIGHXVGMZULMKROBHGZNWHUSYLVTWLCUGPHRCJOTOMAEBFPRZRPPSPWKPVTQWCESSTHADRJU");

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
    msg.setTimeStamp(0.5690343765949396);
    msg.setSource(62972U);
    msg.setSourceEntity(21U);
    msg.setDestination(31571U);
    msg.setDestinationEntity(7U);
    msg.duration = 64496U;
    msg.custom.assign("IJOBURJTKFCBVJLGOTITRORXZEDYOHVCNWKOENWPJXSWGSHCFVGAZENGLYTZTRSMUTJKXPIIHABXAQAPHBCKCQRCSMKMMMQCQLYHJPNCWEUWWYPMPDFJBIBWVRAFFEEMLITONXRDUKQVHXG");

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
    msg.setTimeStamp(0.5215689760625974);
    msg.setSource(52628U);
    msg.setSourceEntity(44U);
    msg.setDestination(55957U);
    msg.setDestinationEntity(242U);
    msg.duration = 26036U;
    msg.custom.assign("URPGBDLGQINEDCJWWTJTCZJQHLBXFYFQBKISNPORGJEIHJBNMSIPBTEDFTVYQKCNZGKHLCNLSVTVRYZGFRAGLEGIZYVHYSOOICJACMWHLNDWRVWMWYCIZTROMFFBKHBEHOBBPUSAWXULFTCHQOOYGBKMJXPLUPALUHAMMAL");

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
    msg.setTimeStamp(0.46290564873984164);
    msg.setSource(35168U);
    msg.setSourceEntity(34U);
    msg.setDestination(28734U);
    msg.setDestinationEntity(107U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.44555735777114436;
    tmp_msg_0.z_units = 58U;
    msg.control.set(tmp_msg_0);
    msg.duration = 14411U;
    msg.custom.assign("LMSGUDILEITAAPDNZPHWBSKPGIVQJGOXRUJSWXHZCHOQLVQXJIVXYPWYAWBDYDECRHATQBGA");

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
    msg.setTimeStamp(0.23696858073036098);
    msg.setSource(34695U);
    msg.setSourceEntity(82U);
    msg.setDestination(3198U);
    msg.setDestinationEntity(34U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8332718276646793;
    tmp_msg_0.speed_units = 38U;
    msg.control.set(tmp_msg_0);
    msg.duration = 2004U;
    msg.custom.assign("YYATIFRFJWCYUYTDWFZZGQDGEMTYOKNUGSEQFVZTGNHBUKLLKNVLIPSKLRLQRPTNWOMPPJSXCORGCSAZAENUWOGLCPBBVAJDHIJBEOZE");

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
    msg.setTimeStamp(0.28341089014376886);
    msg.setSource(6555U);
    msg.setSourceEntity(38U);
    msg.setDestination(503U);
    msg.setDestinationEntity(169U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6715069402179202;
    msg.control.set(tmp_msg_0);
    msg.duration = 46375U;
    msg.custom.assign("KJJENYBQIFMRYSHLRZWEPMCLCHPUVOEPADHATSIANGMTRBXHUDYBWLTEPZJGRIZIZCREDXBWARQHMQYOICKHZZEDGVBJFUFSXCNOSTSYAAMJKYGVSXFSUVTUYSOQBPVDCVCRBNFJLYXHQOZTEUBNFQOU");

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
    msg.setTimeStamp(0.8644524287933152);
    msg.setSource(33342U);
    msg.setSourceEntity(150U);
    msg.setDestination(50080U);
    msg.setDestinationEntity(191U);
    msg.timeout = 7182U;
    msg.lat = 0.7833358134343239;
    msg.lon = 0.352309107673763;
    msg.z = 0.303763293212589;
    msg.z_units = 173U;
    msg.speed = 0.2559370963753743;
    msg.speed_units = 109U;
    msg.bearing = 0.5923363554247975;
    msg.cross_angle = 0.46045957614079935;
    msg.width = 0.9149217993123723;
    msg.length = 0.8019265117687422;
    msg.hstep = 0.39388702474067794;
    msg.coff = 0U;
    msg.alternation = 198U;
    msg.flags = 213U;
    msg.custom.assign("WWFTITRGDICVM");

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
    msg.setTimeStamp(0.5924673348267016);
    msg.setSource(37993U);
    msg.setSourceEntity(227U);
    msg.setDestination(46473U);
    msg.setDestinationEntity(75U);
    msg.timeout = 23015U;
    msg.lat = 0.08181889895939765;
    msg.lon = 0.6995668331503918;
    msg.z = 0.9082065448573025;
    msg.z_units = 185U;
    msg.speed = 0.8372132326946924;
    msg.speed_units = 122U;
    msg.bearing = 0.6562394276511271;
    msg.cross_angle = 0.04466052088450434;
    msg.width = 0.14158263619220612;
    msg.length = 0.6541282070962806;
    msg.hstep = 0.04218171262134407;
    msg.coff = 235U;
    msg.alternation = 138U;
    msg.flags = 236U;
    msg.custom.assign("UZHRBQELLAKMFQWLOXXDNYXPTRNHBBIRGBRWRLKMIVESAUCGGAHVNNENWOTRJVDNHTKATZZGXFTZJYPYAKIMNEBULVQRFSMYDAOGTSDMIUWPIEUXLKMXJZWOQMYJQMJGVNQTDBSWFMTGXYCWSCLBGSQFXBECOFUFOD");

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
    msg.setTimeStamp(0.17140736195454442);
    msg.setSource(45525U);
    msg.setSourceEntity(90U);
    msg.setDestination(28153U);
    msg.setDestinationEntity(89U);
    msg.timeout = 34966U;
    msg.lat = 0.02859315504035742;
    msg.lon = 0.1137497775510895;
    msg.z = 0.030927608733389844;
    msg.z_units = 58U;
    msg.speed = 0.15374115734675742;
    msg.speed_units = 234U;
    msg.bearing = 0.2595214173817304;
    msg.cross_angle = 0.6081010848281493;
    msg.width = 0.09449103680290594;
    msg.length = 0.7219533297002791;
    msg.hstep = 0.5156037380396395;
    msg.coff = 192U;
    msg.alternation = 201U;
    msg.flags = 249U;
    msg.custom.assign("KTSOTIEOBDLNEDKJPLIFQVMIOVFXFUQPQRWJGKZJPAQXFFOWSDXAHVJWWUFUIHRMBUYYEFTHC");

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
    msg.setTimeStamp(0.9163543680168393);
    msg.setSource(53902U);
    msg.setSourceEntity(141U);
    msg.setDestination(61236U);
    msg.setDestinationEntity(122U);
    msg.timeout = 19292U;
    msg.lat = 0.19555740844897818;
    msg.lon = 0.4315854791988639;
    msg.z = 0.00812220191406865;
    msg.z_units = 30U;
    msg.speed = 0.8159688150470255;
    msg.speed_units = 152U;
    msg.custom.assign("WNBFOQYPGCLFVSCXMEYETHWFZXLMWDRPOZNPJRWGN");

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
    msg.setTimeStamp(0.4785686760601747);
    msg.setSource(65252U);
    msg.setSourceEntity(249U);
    msg.setDestination(12724U);
    msg.setDestinationEntity(85U);
    msg.timeout = 64304U;
    msg.lat = 0.626901256584411;
    msg.lon = 0.43617553070230997;
    msg.z = 0.7896835258665358;
    msg.z_units = 231U;
    msg.speed = 0.9021725436550262;
    msg.speed_units = 151U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5942463580189743;
    tmp_msg_0.y = 0.8275267017604404;
    tmp_msg_0.z = 0.8039466384491725;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GECQULNSRFFBZDIXMKCIIXIATJGWDWIIIEODWVKPFSACJPPDWELLRMZPRNGZOTSIEHEQJWYKTBYFZFCTOLLJVSEWKNVTAOZNZXZTRDXJBURHNMSNRAATPSDGTMVAFVCNKQEMYUXNDVULOQVVRKYBZUGGPPJKPHJQFVHZGSLCYRKOPUEYRYZBWISCFDHGOMXFOUXKKDYABLNCXSHLXQIXMFBGOQUTJLCYYSG");

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
    msg.setTimeStamp(0.3369829213439144);
    msg.setSource(525U);
    msg.setSourceEntity(167U);
    msg.setDestination(52336U);
    msg.setDestinationEntity(216U);
    msg.timeout = 18602U;
    msg.lat = 0.8388428187036576;
    msg.lon = 0.8390866247339828;
    msg.z = 0.1025129575183672;
    msg.z_units = 75U;
    msg.speed = 0.7872255407207868;
    msg.speed_units = 224U;
    msg.custom.assign("XXYVJJBFMXDZPXZUGGMTVKTTYQDOLWNBBJFVNERCRLWSUVVRMBEKOLHCZCGAHQYCRVYPNSLVSTHWZLE");

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
    msg.setTimeStamp(0.7586330986263947);
    msg.setSource(33660U);
    msg.setSourceEntity(235U);
    msg.setDestination(11779U);
    msg.setDestinationEntity(124U);
    msg.x = 0.7475066812881536;
    msg.y = 0.46880852004699114;
    msg.z = 0.3524547614503384;

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
    msg.setTimeStamp(0.03191056850501206);
    msg.setSource(56157U);
    msg.setSourceEntity(113U);
    msg.setDestination(33082U);
    msg.setDestinationEntity(216U);
    msg.x = 0.6556679131801795;
    msg.y = 0.31074996016578316;
    msg.z = 0.625296077144006;

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
    msg.setTimeStamp(0.866311782613638);
    msg.setSource(48876U);
    msg.setSourceEntity(82U);
    msg.setDestination(15715U);
    msg.setDestinationEntity(144U);
    msg.x = 0.6340335184629411;
    msg.y = 0.29865334772903684;
    msg.z = 0.726919262475631;

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
    msg.setTimeStamp(0.08308818629901815);
    msg.setSource(41963U);
    msg.setSourceEntity(207U);
    msg.setDestination(4381U);
    msg.setDestinationEntity(75U);
    msg.timeout = 18400U;
    msg.lat = 0.22986557726960744;
    msg.lon = 0.6295060694086136;
    msg.z = 0.5826088918319035;
    msg.z_units = 84U;
    msg.amplitude = 0.184661375742883;
    msg.pitch = 0.22989852348349127;
    msg.speed = 0.5585282550613351;
    msg.speed_units = 93U;
    msg.custom.assign("KTRLBYKXUWQBEJAWGRMQJBKADOOZDOURQQTPOIOCMGDPKWMWCYLSQRSNFNXOYFRSAITHHCGCRVNIGDSYPPVCYFXZKBUYLTJJOCSIHUPXEZTPEESKQWXEFJGHXAJZIYHVEVHLLUTIXNCHZHMUSEVLOZTPGDFRFNLWFJFAGXDODUJVUERAQWVQEIKZZYBMMKMVUKBPTD");

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
    msg.setTimeStamp(0.18881788494530416);
    msg.setSource(41630U);
    msg.setSourceEntity(29U);
    msg.setDestination(17846U);
    msg.setDestinationEntity(130U);
    msg.timeout = 32351U;
    msg.lat = 0.9626281909398225;
    msg.lon = 0.25844977851848316;
    msg.z = 0.16795239615761404;
    msg.z_units = 136U;
    msg.amplitude = 0.2568632541129806;
    msg.pitch = 0.42692082775043594;
    msg.speed = 0.8807303008787175;
    msg.speed_units = 115U;
    msg.custom.assign("TMCOSNDYKRNODNMHETFOKBRCIQHROSKHZDNHYPMBXJUWGRSSEUJBXBBNICDUXPPPWPGYQOXQGNGTFETEOZJQEJRWAGXPIKLSDYXXFNKMUMVLPKRLUIRGYUQGKIEVUTLYSYYQV");

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
    msg.setTimeStamp(0.6593065004488922);
    msg.setSource(29887U);
    msg.setSourceEntity(148U);
    msg.setDestination(62742U);
    msg.setDestinationEntity(157U);
    msg.timeout = 43428U;
    msg.lat = 0.7747882647288409;
    msg.lon = 0.47356925281054363;
    msg.z = 0.41760156942474114;
    msg.z_units = 202U;
    msg.amplitude = 0.892618689160402;
    msg.pitch = 0.5757089576868627;
    msg.speed = 0.8621184683440464;
    msg.speed_units = 29U;
    msg.custom.assign("NTPURUMSYGLOTGDJGJWQVYMDETCUXYXLNBVFVCPNJJSYCFBAAPPIMFWBPOEDASSBRCTXCHKIIYKULVBPQPBNUAUEZQEOBZRMMQDNSSQHNIJ");

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
    msg.setTimeStamp(0.056916386596387425);
    msg.setSource(28841U);
    msg.setSourceEntity(44U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.9155477089489978);
    msg.setSource(6906U);
    msg.setSourceEntity(22U);
    msg.setDestination(18056U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.006467701605990528);
    msg.setSource(58472U);
    msg.setSourceEntity(8U);
    msg.setDestination(60492U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.17802961342225976);
    msg.setSource(29652U);
    msg.setSourceEntity(193U);
    msg.setDestination(56606U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.25760562393958286;
    msg.lon = 0.9479856667953017;
    msg.z = 0.9903516278926806;
    msg.z_units = 82U;
    msg.radius = 0.9290119887032896;
    msg.duration = 48833U;
    msg.speed = 0.5441540914613348;
    msg.speed_units = 12U;
    msg.custom.assign("YLOJWQHHJEFNNLKMVCTDDYXEFSZXDRVLJXFVYIPAIJGHRPMKWGUERQLLHQTYVJCQKHNHNZYJYTMTSKGUDKBDNWCQTXEKCMNZFCMHVPWARVWZYLZKSMNOXOTE");

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
    msg.setTimeStamp(0.1619857458255366);
    msg.setSource(64499U);
    msg.setSourceEntity(161U);
    msg.setDestination(27853U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.021057540559556887;
    msg.lon = 0.3050847731765123;
    msg.z = 0.009200464772577854;
    msg.z_units = 164U;
    msg.radius = 0.751440385210051;
    msg.duration = 56859U;
    msg.speed = 0.9833683989231194;
    msg.speed_units = 198U;
    msg.custom.assign("ACENUCDBXVSBKDNYQMAYRTRBEMGPCAHNJJZIRNOLENHOVGGBSSQIWUNZQBZDZMAKRGTTDDIXFDYXJWGPIDBWRPKWIAAGMYIEFCMGIWOEALQNKTFRPSVJO");

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
    msg.setTimeStamp(0.29559902515753067);
    msg.setSource(39154U);
    msg.setSourceEntity(115U);
    msg.setDestination(783U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.5267107984718088;
    msg.lon = 0.03317230242537972;
    msg.z = 0.4173821534000114;
    msg.z_units = 248U;
    msg.radius = 0.5665399621495891;
    msg.duration = 36872U;
    msg.speed = 0.24948458334141255;
    msg.speed_units = 15U;
    msg.custom.assign("EFJGBMEKAU");

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
    msg.setTimeStamp(0.42446502044349077);
    msg.setSource(33373U);
    msg.setSourceEntity(141U);
    msg.setDestination(32435U);
    msg.setDestinationEntity(25U);
    msg.timeout = 20175U;
    msg.flags = 130U;
    msg.lat = 0.9939844569359813;
    msg.lon = 0.76320049490911;
    msg.start_z = 0.6178121662365703;
    msg.start_z_units = 133U;
    msg.end_z = 0.06722184131074427;
    msg.end_z_units = 33U;
    msg.radius = 0.7038505741726573;
    msg.speed = 0.8160846470215379;
    msg.speed_units = 35U;
    msg.custom.assign("YWBWMADMTMMWQFHORQWPMXBIAOXDGNKEBBIJFRGVRGIQBFHTNUPCSXYSDSIZDAPVMTCKJJBAKOCNVEHJWZKFDZQJIQVNXLBLBGPLG");

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
    msg.setTimeStamp(0.022821561662971113);
    msg.setSource(5838U);
    msg.setSourceEntity(219U);
    msg.setDestination(45254U);
    msg.setDestinationEntity(130U);
    msg.timeout = 57602U;
    msg.flags = 131U;
    msg.lat = 0.18917209315605943;
    msg.lon = 0.8879517413204325;
    msg.start_z = 0.41739088184711526;
    msg.start_z_units = 64U;
    msg.end_z = 0.007556501453501063;
    msg.end_z_units = 197U;
    msg.radius = 0.7429575698209897;
    msg.speed = 0.20029411706591382;
    msg.speed_units = 153U;
    msg.custom.assign("OTWWATDEBGHTKBCVLSAORJPYQMACHGEHPJWYOQCCZRBMKTDKDQZJYXBNPXLHEPCTSIZTFFKLUEUQQGOWHAPKVMTJBNMNGUZDVWENTACBCVIJVSSVUAYPESKOCDKBROJQRQRIGFXMOLHHDANDERYIQXXIWNQAGGZJMKLEICFFUUXKILZMGLSPYNYZGRFRLJXFRJIKWDTHZHAASNUUWDHQEBWECITISPOFNYZBUYFXF");

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
    msg.setTimeStamp(0.1958135339424213);
    msg.setSource(1897U);
    msg.setSourceEntity(165U);
    msg.setDestination(30129U);
    msg.setDestinationEntity(104U);
    msg.timeout = 52659U;
    msg.flags = 110U;
    msg.lat = 0.9989034955456766;
    msg.lon = 0.8991898410493817;
    msg.start_z = 0.5236023521674166;
    msg.start_z_units = 46U;
    msg.end_z = 0.9992375312024654;
    msg.end_z_units = 185U;
    msg.radius = 0.5892500275866916;
    msg.speed = 0.2870708497307558;
    msg.speed_units = 46U;
    msg.custom.assign("RGCVKLKSSSPQAMYBPCVOHRYVQKUHEPLERDNPBWAERGOVHXTFYEXBAMJYXNUIZEBOPFQGJZTGYTNUSAPBLNYADZDBPFCXPKDO");

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
    msg.setTimeStamp(0.9417996065854655);
    msg.setSource(18032U);
    msg.setSourceEntity(78U);
    msg.setDestination(28532U);
    msg.setDestinationEntity(36U);
    msg.timeout = 13520U;
    msg.lat = 0.17336348231757892;
    msg.lon = 0.4983299098934395;
    msg.z = 0.7358874530087371;
    msg.z_units = 159U;
    msg.speed = 0.29801332193522667;
    msg.speed_units = 17U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6177843320640157;
    tmp_msg_0.y = 0.4762130805281507;
    tmp_msg_0.z = 0.3506261956110598;
    tmp_msg_0.t = 0.18195015899130962;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NJJZIZEETOSPBKYVGQCTLRVRABYTYRNKAMEVPWLQUEENGJEPGNNDVYWBDZSHVUTQOQUTAUACMOWMSLBLVHWKOLZCCJFPZNKRDPIQGCMKIWCYTIDHRQCWLWMJEDXYSJXIJPKXOHMFODIAFFKUYPZLDUHWZXOGLUB");

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
    msg.setTimeStamp(0.4291359176324471);
    msg.setSource(58248U);
    msg.setSourceEntity(47U);
    msg.setDestination(9918U);
    msg.setDestinationEntity(197U);
    msg.timeout = 11064U;
    msg.lat = 0.7037908422829013;
    msg.lon = 0.7980878136089263;
    msg.z = 0.432532096548252;
    msg.z_units = 241U;
    msg.speed = 0.24868625948752598;
    msg.speed_units = 119U;
    msg.custom.assign("PODQLZHXLAAAJKTVVHSNMTBBQSSLNRRCSEZUANOYYKVBFCYKRQVBDZTIGPXHNVWEFCBGZPMXRCWZDERFFRLXDYM");

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
    msg.setTimeStamp(0.2120631393395861);
    msg.setSource(52610U);
    msg.setSourceEntity(116U);
    msg.setDestination(9621U);
    msg.setDestinationEntity(158U);
    msg.timeout = 24335U;
    msg.lat = 0.8247801929495389;
    msg.lon = 0.6253598364502391;
    msg.z = 0.6378174916386604;
    msg.z_units = 167U;
    msg.speed = 0.2903981107476248;
    msg.speed_units = 202U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7432385252575985;
    tmp_msg_0.y = 0.9826941378411583;
    tmp_msg_0.z = 0.6227149605201155;
    tmp_msg_0.t = 0.14430411318588465;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FBEZXROGQAWZPGHXTJDLYHMXPGGWKYIIWRRAXZFNJLVTQZPGKGCTTPWJMUVWUKCBH");

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
    msg.setTimeStamp(0.8745112498616973);
    msg.setSource(12078U);
    msg.setSourceEntity(85U);
    msg.setDestination(18350U);
    msg.setDestinationEntity(41U);
    msg.x = 0.11614004625403074;
    msg.y = 0.9068717973949535;
    msg.z = 0.8484590195610787;
    msg.t = 0.43223670716255735;

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
    msg.setTimeStamp(0.676597196473872);
    msg.setSource(23161U);
    msg.setSourceEntity(40U);
    msg.setDestination(18162U);
    msg.setDestinationEntity(233U);
    msg.x = 0.3450172701564881;
    msg.y = 0.975647512001338;
    msg.z = 0.11781413992933831;
    msg.t = 0.3225966867700275;

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
    msg.setTimeStamp(0.5264637579089583);
    msg.setSource(4450U);
    msg.setSourceEntity(176U);
    msg.setDestination(39468U);
    msg.setDestinationEntity(151U);
    msg.x = 0.1472669794042809;
    msg.y = 0.6313942634493579;
    msg.z = 0.14245894572440787;
    msg.t = 0.41007641869138745;

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
    msg.setTimeStamp(0.566273439106923);
    msg.setSource(46754U);
    msg.setSourceEntity(94U);
    msg.setDestination(49730U);
    msg.setDestinationEntity(32U);
    msg.timeout = 56767U;
    msg.name.assign("QQRTEHFHWJZEDNWBUUCCDINNXZXVPVYUMFHGBUCLILOJYUXRJTAFAIEDONODKYGPBWBHMPZPMLLWWSLFMLVMJNEORWJCQONPSHSVWFMGYHFCNMAYGZIXADVSQTUXLEXBQKECTRRH");
    msg.custom.assign("XZWAUFSCRZDOIRLOJIYCOSPNHHMIMCPVGELFFKBPIFOBVTEFFODIMUJGQBTGRCLKHSGITRXQMCWAAJANAAVULXUKESJAYTKOBWKRQVPRGHHOWXEBVSXNYFBWHSCMJNTESKAWQWOHWBRDTRE");

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
    msg.setTimeStamp(0.29791149923327276);
    msg.setSource(59810U);
    msg.setSourceEntity(81U);
    msg.setDestination(58140U);
    msg.setDestinationEntity(225U);
    msg.timeout = 31550U;
    msg.name.assign("HEIWMSMIINJCHZIAUHMENVDGTLTEJIXPTXAWFFVQFYLDAZYBPQWQDIPICODOUWNEERPLBDJNCEOLLWCUOHLKJPZSSLVTKZRTPVRMETTYCYFODOIAJYSNYHYBGZXRPGVLHVLMPEAKGXUNFANQMVFFBIRHLUSDVQBXHAOWWJBIRXKSNKUGADKYBCFDVGZXXQCJNQSUUWWXKOQUJKBUDHKRMEJFOQGWCGQSNRCTRXBGGKPZEMSTAZSMYV");
    msg.custom.assign("GNGAILJUJYLWDMIEEKVOXETTKGQRHANHPAJCFCQVEUSYZYVRHSCCXCQNLQMNOQKFTZNJPBOTIBXIJXLQJRWALBUSHSMZXPBPCR");

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
    msg.setTimeStamp(0.2282997034217693);
    msg.setSource(55101U);
    msg.setSourceEntity(50U);
    msg.setDestination(32501U);
    msg.setDestinationEntity(248U);
    msg.timeout = 57345U;
    msg.name.assign("OMJOHHVOZAOKOIQCLHHBBENLNNE");
    msg.custom.assign("YASFQXMNJQGVHWXFHLJYSZWYCONYXUZKSOEEVCLIJVRRTDCGFYEPXTUXDBESTGNDDYDKWQMZCLFZPLFJXSEVNXMWWGIWOUEN");

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
    msg.setTimeStamp(0.8980130068019323);
    msg.setSource(41460U);
    msg.setSourceEntity(160U);
    msg.setDestination(25964U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.4745720952989658;
    msg.lon = 0.49943493618153356;
    msg.z = 0.9213951246420379;
    msg.z_units = 90U;
    msg.speed = 0.02143762212418643;
    msg.speed_units = 97U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5096311703849283;
    tmp_msg_0.y = 0.8150964976575528;
    tmp_msg_0.z = 0.8721807560977869;
    tmp_msg_0.t = 0.5711624850082527;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.8647437897162441;
    msg.custom.assign("QPCDUPWQNGFNVSHSWAJKUPTAFXVODCHJMUFMJYDTVLWEVDFDOUQJHLSMZKGZEJCYNSVEASTVLYEVNZQBGOMQRHRGIZKKJYTZRAMBFFZYJBXCCRMGXLURKUAYXGXBCCSOPNNYWQBDYKLBFDDHWFQLZENCTLEOGKIJMTHFRBRLVUYHPJO");

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
    msg.setTimeStamp(0.17181672235932588);
    msg.setSource(21078U);
    msg.setSourceEntity(1U);
    msg.setDestination(50410U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.4830244792119792;
    msg.lon = 0.19987990613888573;
    msg.z = 0.2718964943405403;
    msg.z_units = 1U;
    msg.speed = 0.2948256453951028;
    msg.speed_units = 116U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10837U;
    tmp_msg_0.off_x = 0.32064609237974995;
    tmp_msg_0.off_y = 0.2490240029152916;
    tmp_msg_0.off_z = 0.7838140419229974;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.06873670456312331;
    msg.custom.assign("UIYOCELTXSLJQRVNVFBVIIHPTJFSBNPXWSYMHHPREODKGAPASULPIPYDGFFTKRMLDADHZQQMLQCNVDKVRKDNEGBSAFHAJUGCVTSNGUHODIRXWJIYJQMXRMPPFJKBGNBCZCVZFMXORZBVYOTROTTXGEMB");

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
    msg.setTimeStamp(0.41676201467666196);
    msg.setSource(22507U);
    msg.setSourceEntity(231U);
    msg.setDestination(10275U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.9813547836660802;
    msg.lon = 0.9848107821267545;
    msg.z = 0.19815695692546953;
    msg.z_units = 146U;
    msg.speed = 0.04941257586787051;
    msg.speed_units = 88U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5682691355714932;
    tmp_msg_0.y = 0.7565682478930914;
    tmp_msg_0.z = 0.9885420602254247;
    tmp_msg_0.t = 0.9337113660704117;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 38176U;
    tmp_msg_1.off_x = 0.937524719642365;
    tmp_msg_1.off_y = 0.26695854478454495;
    tmp_msg_1.off_z = 0.6099341971327504;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.17799793780924078;
    msg.custom.assign("OUBTYAQNSSNZILELEAAYSHBFNTPTIBQWEPFRFJHXYUKMPSTGPJDTDCVPCAXULNIWOWXSOYPVVURKIWSHHBVQPYKGSOTUBZJBLIBXIZJGZQDMIEOAMNHULFDAWMCKGQGTFWBFPKJIFYXREHARVDZLKWCUXZHUHQBOEVGERLYDONMMGCJVNWJZTAGDJAMKGVXCACMLNXVOTFK");

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
    msg.setTimeStamp(0.4127169522729617);
    msg.setSource(10074U);
    msg.setSourceEntity(139U);
    msg.setDestination(57417U);
    msg.setDestinationEntity(81U);
    msg.vid = 26756U;
    msg.off_x = 0.9804566125859626;
    msg.off_y = 0.34893830625543587;
    msg.off_z = 0.8914307236058383;

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
    msg.setTimeStamp(0.2059304038866141);
    msg.setSource(50913U);
    msg.setSourceEntity(239U);
    msg.setDestination(5207U);
    msg.setDestinationEntity(22U);
    msg.vid = 3484U;
    msg.off_x = 0.025192392621773085;
    msg.off_y = 0.3985638213613414;
    msg.off_z = 0.6670394662369642;

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
    msg.setTimeStamp(0.5987830559221148);
    msg.setSource(11812U);
    msg.setSourceEntity(235U);
    msg.setDestination(37746U);
    msg.setDestinationEntity(46U);
    msg.vid = 18500U;
    msg.off_x = 0.7465102800475355;
    msg.off_y = 0.5793294818861171;
    msg.off_z = 0.7670217075688577;

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
    msg.setTimeStamp(0.0006200123801992641);
    msg.setSource(6122U);
    msg.setSourceEntity(187U);
    msg.setDestination(5383U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.5048798276894897);
    msg.setSource(17782U);
    msg.setSourceEntity(56U);
    msg.setDestination(40706U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.5428932678311403);
    msg.setSource(55623U);
    msg.setSourceEntity(80U);
    msg.setDestination(16068U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.8821521665550198);
    msg.setSource(34263U);
    msg.setSourceEntity(212U);
    msg.setDestination(30984U);
    msg.setDestinationEntity(206U);
    msg.mid = 54930U;

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
    msg.setTimeStamp(0.9581543743144225);
    msg.setSource(25084U);
    msg.setSourceEntity(82U);
    msg.setDestination(32246U);
    msg.setDestinationEntity(2U);
    msg.mid = 59791U;

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
    msg.setTimeStamp(0.4612758657003352);
    msg.setSource(60056U);
    msg.setSourceEntity(70U);
    msg.setDestination(11820U);
    msg.setDestinationEntity(142U);
    msg.mid = 51403U;

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
    msg.setTimeStamp(0.28408773760194284);
    msg.setSource(34538U);
    msg.setSourceEntity(143U);
    msg.setDestination(14540U);
    msg.setDestinationEntity(176U);
    msg.state = 57U;
    msg.eta = 54161U;
    msg.info.assign("LMOCJYTKIHQZEAVMCFVBPQHYDWJGATHXXCIEPBQKWUJGWGCGOAZBYHWJKGVNTUZZIQOEOHLPVUZQFPRLURWQSJJPKAMWSMKAJUURNBDDHRESONFNNGRCTOGGKQOIUSMLNYVLZRBCLSTXBODSHTEAEFDTXBQHCFIKKZZYTSDNPFYACGXRKNJSBEUQIRSYUYIFDTJCGIIPMLQFYPMVMYXTCMPANXVEWZBHOSDDVVIALDEXZRJXWWFKRVL");

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
    msg.setTimeStamp(0.35571749029988553);
    msg.setSource(27694U);
    msg.setSourceEntity(65U);
    msg.setDestination(9561U);
    msg.setDestinationEntity(127U);
    msg.state = 196U;
    msg.eta = 5104U;
    msg.info.assign("FKUNTYPYVMXRNVFE");

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
    msg.setTimeStamp(0.038385709670518575);
    msg.setSource(14922U);
    msg.setSourceEntity(152U);
    msg.setDestination(27986U);
    msg.setDestinationEntity(170U);
    msg.state = 92U;
    msg.eta = 23040U;
    msg.info.assign("XTAXKAWUBACLFTQTTAKOMRRFYDDHNUSIRAWLSHJGYRBFUBNIEQGYYKBCWUXHNZPLPNHIYBKJEAOJSVFYMZJLRWRYWDOOALEVSLCDGCEXBKMXCYIRYDENIZPIPMQMNEKQQPHHENSQGDLXRWLNFXJFWUUVOOLCHKCBCTEATXGTPZUZJSUKEFPSM");

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
    msg.setTimeStamp(0.2900643753520189);
    msg.setSource(28164U);
    msg.setSourceEntity(216U);
    msg.setDestination(11799U);
    msg.setDestinationEntity(100U);
    msg.system = 12322U;
    msg.duration = 36421U;
    msg.speed = 0.4591269943660137;
    msg.speed_units = 49U;
    msg.x = 0.7168647505011989;
    msg.y = 0.7761183679178867;
    msg.z = 0.07339252704654453;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.7765424700923663);
    msg.setSource(24519U);
    msg.setSourceEntity(86U);
    msg.setDestination(20284U);
    msg.setDestinationEntity(134U);
    msg.system = 7984U;
    msg.duration = 43438U;
    msg.speed = 0.8495588533820373;
    msg.speed_units = 125U;
    msg.x = 0.4603166352315252;
    msg.y = 0.980375876058774;
    msg.z = 0.09632506515973493;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.9754426811582405);
    msg.setSource(13518U);
    msg.setSourceEntity(195U);
    msg.setDestination(17517U);
    msg.setDestinationEntity(138U);
    msg.system = 61377U;
    msg.duration = 29182U;
    msg.speed = 0.9914708930478051;
    msg.speed_units = 209U;
    msg.x = 0.7734156832650024;
    msg.y = 0.9045558565556526;
    msg.z = 0.28063724235412635;
    msg.z_units = 162U;

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
    msg.setTimeStamp(0.5340112909777659);
    msg.setSource(1928U);
    msg.setSourceEntity(0U);
    msg.setDestination(31811U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.9916516043066816;
    msg.lon = 0.715226067286596;
    msg.speed = 0.29907976763099353;
    msg.speed_units = 41U;
    msg.duration = 41300U;
    msg.sys_a = 15315U;
    msg.sys_b = 11863U;
    msg.move_threshold = 0.5486398434572983;

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
    msg.setTimeStamp(0.8897415241331762);
    msg.setSource(54202U);
    msg.setSourceEntity(191U);
    msg.setDestination(24937U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.6414887093495287;
    msg.lon = 0.7665678224477305;
    msg.speed = 0.01696206197696748;
    msg.speed_units = 170U;
    msg.duration = 56172U;
    msg.sys_a = 14869U;
    msg.sys_b = 48663U;
    msg.move_threshold = 0.08449810834246185;

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
    msg.setTimeStamp(0.5699352741942624);
    msg.setSource(41942U);
    msg.setSourceEntity(87U);
    msg.setDestination(17073U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.6924592748062942;
    msg.lon = 0.6717970064632846;
    msg.speed = 0.8073028719290163;
    msg.speed_units = 170U;
    msg.duration = 57546U;
    msg.sys_a = 34435U;
    msg.sys_b = 27866U;
    msg.move_threshold = 0.6718506019113258;

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
    msg.setTimeStamp(0.41693966278368866);
    msg.setSource(23881U);
    msg.setSourceEntity(87U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.23047807358087258;
    msg.lon = 0.5445404054789713;
    msg.z = 0.8954947679394581;
    msg.z_units = 89U;
    msg.speed = 0.013340693685562233;
    msg.speed_units = 86U;
    msg.custom.assign("ANOYHWTUXLAEYLVQCDWTATVYJULGSRYAKYMADWOAAP");

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
    msg.setTimeStamp(0.23847488678719198);
    msg.setSource(6612U);
    msg.setSourceEntity(67U);
    msg.setDestination(45114U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.04019526647539151;
    msg.lon = 0.9490169172065797;
    msg.z = 0.6188454065096483;
    msg.z_units = 34U;
    msg.speed = 0.0760801653963945;
    msg.speed_units = 175U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.687113126005369;
    tmp_msg_0.lon = 0.41094875320462876;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CUZPBKSXALGIKABQUHDMKPSWMFEXDEVPAQCMMSBDIOFGLTQEYXWJUHPOVJUCVZD");

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
    msg.setTimeStamp(0.8311801057747501);
    msg.setSource(15558U);
    msg.setSourceEntity(198U);
    msg.setDestination(15064U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.9224831291992871;
    msg.lon = 0.23612334385198896;
    msg.z = 0.0494538929768078;
    msg.z_units = 172U;
    msg.speed = 0.7533567962852888;
    msg.speed_units = 192U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.29094609581123976;
    tmp_msg_0.lon = 0.46820179572971543;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ITGOUGVNJGPNOZTPCGRDSIPUAIIJSHMIIXOIORTNFLKAPOOZCEBGXMORWPWQUVHMYFEUTPDAYVEKBWFCWHFUCSXYDJPOAXRZEACEEQCZHLQTBXDULTVANLIKFASCHNRXXNSCLSRBMKRSHYTTLQFYMQYUQBWMELGLZJKWGWLIDPKRTJFHJIXJAVGMVVMCBDWNGHXRMSTHYBUKOBEZVOFZMBAYNGVD");

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
    msg.setTimeStamp(0.4138075231514694);
    msg.setSource(12855U);
    msg.setSourceEntity(148U);
    msg.setDestination(55354U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.5191451333753522;
    msg.lon = 0.7068117692546466;

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
    msg.setTimeStamp(0.019890340006764373);
    msg.setSource(32167U);
    msg.setSourceEntity(94U);
    msg.setDestination(40657U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.09802204563409689;
    msg.lon = 0.896767612566655;

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
    msg.setTimeStamp(0.7328641517340198);
    msg.setSource(752U);
    msg.setSourceEntity(249U);
    msg.setDestination(16889U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.10225937796826656;
    msg.lon = 0.8918907906458706;

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
    msg.setTimeStamp(0.3266965202705887);
    msg.setSource(10022U);
    msg.setSourceEntity(191U);
    msg.setDestination(63347U);
    msg.setDestinationEntity(225U);
    msg.timeout = 35591U;
    msg.lat = 0.7370907365811412;
    msg.lon = 0.6759806789423184;
    msg.z = 0.6966259009037952;
    msg.z_units = 238U;
    msg.pitch = 0.6525349171100009;
    msg.amplitude = 0.031288780159631324;
    msg.duration = 25779U;
    msg.speed = 0.7671760386373767;
    msg.speed_units = 197U;
    msg.radius = 0.6991510240048439;
    msg.direction = 236U;
    msg.custom.assign("YROEMBAWDIMAVZTYIGTOZZBJRMOJJPYSXUWNJWOVOICXDDNUHANEWSLVUZYUXMYPDWZPVADIJCRMTILVKSEQDRWQAJQQLSEQZWFKBCFRZRGHHAYGCFSKVNGNYFTDKDMFMCHAWXXALQTIESBLKLCYNUFURBIKDSNTTFOHKHJJNEFBZVBVKCHHSCYZIHIRJEPWSNCZFXQKFXGMXGLTU");

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
    msg.setTimeStamp(0.9894478473639335);
    msg.setSource(40161U);
    msg.setSourceEntity(186U);
    msg.setDestination(3652U);
    msg.setDestinationEntity(107U);
    msg.timeout = 13153U;
    msg.lat = 0.07999193499550539;
    msg.lon = 0.543003751920349;
    msg.z = 0.8108978196716194;
    msg.z_units = 192U;
    msg.pitch = 0.8872162888259826;
    msg.amplitude = 0.08549931558057222;
    msg.duration = 21638U;
    msg.speed = 0.03559276386362664;
    msg.speed_units = 47U;
    msg.radius = 0.013452072376645363;
    msg.direction = 142U;
    msg.custom.assign("KKFVLPLGEDCBUTQHZJPURNLYBMKBWWGQMCNGCVEVXBIQSCNTUAIPJAKRRSFQXGPDWOTXFMUYBRMJVCGNZXGOYELXCOVELVZTAPRTZTKDVXCDIYBILCZMOOJLSUFXJVTNQJYARARIHNMWIBNJSCRARJTAYYUGDXDFHXNL");

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
    msg.setTimeStamp(0.47797955224778266);
    msg.setSource(39584U);
    msg.setSourceEntity(46U);
    msg.setDestination(63663U);
    msg.setDestinationEntity(68U);
    msg.timeout = 36328U;
    msg.lat = 0.47760410841859924;
    msg.lon = 0.409108355330864;
    msg.z = 0.7807412743590362;
    msg.z_units = 121U;
    msg.pitch = 0.20582848616383553;
    msg.amplitude = 0.01587331120963853;
    msg.duration = 11080U;
    msg.speed = 0.13597786199915685;
    msg.speed_units = 126U;
    msg.radius = 0.45639792750128405;
    msg.direction = 157U;
    msg.custom.assign("GXJFIKWSDQVCINJLIWM");

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
    msg.setTimeStamp(0.24001605139732285);
    msg.setSource(26365U);
    msg.setSourceEntity(227U);
    msg.setDestination(31234U);
    msg.setDestinationEntity(91U);
    msg.formation_name.assign("EFKZGAHQQRVCKBWHHKHGUNFFYGCPDULPCAARPMZGROOPPGFJSXHQTVCPDFJCSCRSKXGBRHDBBYDUDPTJLBQDUHYUIUMZAXIWNDNTMVVWHKASIWJEXXMLSMLSNZBHEPEBILXMJLWXBXOTDSMROZIGYCTTQIAWITVKZNUJYJODUMBRTPINEVVIYROWYABQKV");
    msg.reference_frame = 41U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 980U;
    tmp_msg_0.off_x = 0.7388646753136727;
    tmp_msg_0.off_y = 0.20269765481288493;
    tmp_msg_0.off_z = 0.8926497930325629;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SMQUVYBFUPNAAEGJQFNCFWEGKJUMRUVMSORHLXDZNPOWTBIRHEYHJDAASHMOAYQCNTHDWWBVPGDGTHJIUAYYZMOZFVYBKFHQXVRWHEIPBTLLDRSXXZDKNOLLUMXWBTCYDBALGRBDRQHDCZCKXN");

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
    msg.setTimeStamp(0.04647487610221834);
    msg.setSource(35529U);
    msg.setSourceEntity(201U);
    msg.setDestination(49447U);
    msg.setDestinationEntity(133U);
    msg.formation_name.assign("JPSDIUPZWIMXPGVRQHLMNQRZJCMR");
    msg.reference_frame = 211U;
    msg.custom.assign("DQMDRHMRLPEQIHQEABNFBTYDYOYSVTGWRZNYDDPAFLUBVWYBIJQVIMJZQUJJUQRJDGUCXOOXPSSCIGKAKNSHZFLIBLGYKLJMJKKJKISFVHIYXZMGYXLAWPEOEXYOGCKITNMRPSGEUNMOUWIENLALVIZVPEHXSCXWQFOACRTCUTONSVFFSDWJOTBUVMFRPEEQLWQCROHKBCBWBM");

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
    msg.setTimeStamp(0.32737293135355494);
    msg.setSource(33760U);
    msg.setSourceEntity(160U);
    msg.setDestination(5310U);
    msg.setDestinationEntity(209U);
    msg.formation_name.assign("CFJXFMQXBOZOKZELYMELUNDZXQBJCSFGTHBU");
    msg.reference_frame = 231U;
    msg.custom.assign("FUOKBNMDDAOTWHKAMXUGXXTOKXDKWGPASLDERUJWRIGAXTLSFHWCRVZXXBSOWZAPLBOWEYYSVHKLRNUQIAFDZXVHVVCRZMUEBDHGHWWWGDJNPPROYMDBJETZZYLPMRHGEUZSOJPGVUKNHAIRKQ");

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
    msg.setTimeStamp(0.13150265539719663);
    msg.setSource(33457U);
    msg.setSourceEntity(41U);
    msg.setDestination(24934U);
    msg.setDestinationEntity(107U);
    msg.group_name.assign("BFEOANANCQNVUVKRQNQHJSUDNYTFIWJWKQLSDXJVTBVQOFPMDETYAXVUK");
    msg.formation_name.assign("SNMUWQUOBJGNQUDUJAEPKJBVRCQOTMPTGTEFGUUKLDARQLSKIYOVFIZLHDEYYHPSBLSLJBZIVFEVZYAVTIJEXOCSWYDYHQFBDBFQFQFWQTASGHRMVJGLGRKPCURDGKEZHVPFIXTSOXKIKELNPKZISPWBXSBLAINJHEZMPAXGLUDWWRYKGOHHQEXOADYJLRCMJZCNTXBOJFEWFNXXSVNPNPMACCU");
    msg.plan_id.assign("ZAREKXDVGRWKMNFVVAUCSYWSJKKRJXMVWODPQPBMFTIPLQWTTEQLSKOCEAXTTOCIZDNOXCYKZQNFBRDDYULEVCRHFTKWCGQTKFXFMUWZJLPQSNSEEXIOXEQLJOSJBYR");
    msg.description.assign("SRUKMJCICEYIKMZNDVEVIVVLMSEEXTTMFKGXQWBSPHDUMIDNZIZARAWIHPATPCOW");
    msg.leader_speed = 0.15779530688755672;
    msg.leader_bank_lim = 0.9967483274950676;
    msg.pos_sim_err_lim = 0.5691441331905053;
    msg.pos_sim_err_wrn = 0.9163206494745092;
    msg.pos_sim_err_timeout = 64181U;
    msg.converg_max = 0.5053083825660066;
    msg.converg_timeout = 14604U;
    msg.comms_timeout = 54634U;
    msg.turb_lim = 0.5923283879241455;
    msg.custom.assign("IUUTDKDFRHZYWFYMAWSLNDCIUIQKNJJNCMHKAJJ");

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
    msg.setTimeStamp(0.39968281148638674);
    msg.setSource(12599U);
    msg.setSourceEntity(18U);
    msg.setDestination(55153U);
    msg.setDestinationEntity(170U);
    msg.group_name.assign("JAMIZPHTACFVXFNVIXZVGQW");
    msg.formation_name.assign("QDALLPUBXNLHXFPLZYOAAQFZHZRMBKDJIYNCXTSWBDFOXOSIOCKOSHJHRKGZSBVVGAXEVWQDAAKPGNUJHZCQVWTUEWIAGPHJTETYJTMEVBUMUBMIPDOSNUUWLNFXTEAIMBWMPBQCCQ");
    msg.plan_id.assign("OVZJNAGABXKMUEPQTIHMDJYZZBEUGCHYAZMFOPCBODBWPJOFQHWSTEKSLGCZPQISVEIMRVTFBUTWVDXDPYWOGXZXWZKGSIYUGBLRTDYISWKEMAMFBQSHRIGNCAIDNTLKLNVJECNZYWTRPDTXNCUBDQJB");
    msg.description.assign("FMRASHGLDKRTSOBUEFOLUHFKSTOOUJZAOMFWJPTHFRGQGRYCAZKMFHLPJHRQNVACVBGBREQNCIGVQTXAIMHEJSMZXFKXHXUDNKDZYIUDEDWXBYCMZLJYJVWUITPCLQLJDWHPVCJWEYPUSNTMZSSDXFOGCLYQXDPPWODHJLQYWFWZAR");
    msg.leader_speed = 0.02370988484910974;
    msg.leader_bank_lim = 0.3407534827932098;
    msg.pos_sim_err_lim = 0.8671569516136843;
    msg.pos_sim_err_wrn = 0.4897588062244148;
    msg.pos_sim_err_timeout = 11566U;
    msg.converg_max = 0.577346531813573;
    msg.converg_timeout = 20649U;
    msg.comms_timeout = 64545U;
    msg.turb_lim = 0.7939166448938991;
    msg.custom.assign("CZIUVEGWZBJNRMLPZRLHQJICYQVONSZGOHKTAZXFAJGGVUHADQ");

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
    msg.setTimeStamp(0.11005621753608696);
    msg.setSource(56697U);
    msg.setSourceEntity(171U);
    msg.setDestination(19548U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("HDFTKXMBICBIJWVAKJOIVAARFNCNHDYDMQOUMGITVFSQJLXFPZAQDPQEKBNTHOXIOCAHFLVSGOSGYUYJZYFEMHGPXREATJJJJOLPHRJTPLCCSDBRDAKYOUNELCGZNCWMRDVWIBQREYZMLWNDUDLRXYEOQNVIOSZGZESIKIYWHPUQILWKYBLRPFFUUPGBHCOGSXXYXFGWBZTTPCQBTKNMUAWCQZVWKMLHRTVQSKJKFNMEAHPRSDZE");
    msg.formation_name.assign("CYBAGNXKYVYEWIRZTDYWBLXOJFASQRECIQTHYOMRHPHMZIRIFKHGHWSBBLO");
    msg.plan_id.assign("OJSEOCKPUUIJOSGDZBYINXWFVUPVFKDQUZKYNQAHNLJZ");
    msg.description.assign("AKLXTETCBNJLDFLTLBWMWHMTYNTWVMF");
    msg.leader_speed = 0.16787444488297842;
    msg.leader_bank_lim = 0.7770539563569865;
    msg.pos_sim_err_lim = 0.18257468524992782;
    msg.pos_sim_err_wrn = 0.800431304527768;
    msg.pos_sim_err_timeout = 52238U;
    msg.converg_max = 0.8588879639747763;
    msg.converg_timeout = 21222U;
    msg.comms_timeout = 62242U;
    msg.turb_lim = 0.9855652945389751;
    msg.custom.assign("YVUMOXNEHZGUAYNMSNKUNQRUPPEHIDXWZDBQSHTKERNCDDQDQYATFOPFMESCBXCSIPKMCIJSAJJGGFRWCMYFEBELLTADRNFSVLEJLGAOOUQTAFBRPUQLATWHVGHJGXOZNDRCXXHBIQEBINVWUKWRJKJVKJVOXAGYBZTEQYQVSVEZPPMTNFIXLKXMGVKVKPDRCUMMZAH");

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
    msg.setTimeStamp(0.732030694439878);
    msg.setSource(58268U);
    msg.setSourceEntity(147U);
    msg.setDestination(41913U);
    msg.setDestinationEntity(125U);
    msg.control_src = 20016U;
    msg.control_ent = 228U;
    msg.timeout = 0.6904540306732037;
    msg.loiter_radius = 0.7289091219348163;
    msg.altitude_interval = 0.6386997692632639;

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
    msg.setTimeStamp(0.33950328179253486);
    msg.setSource(23763U);
    msg.setSourceEntity(205U);
    msg.setDestination(2776U);
    msg.setDestinationEntity(218U);
    msg.control_src = 12097U;
    msg.control_ent = 230U;
    msg.timeout = 0.1142540103741102;
    msg.loiter_radius = 0.44923489273015793;
    msg.altitude_interval = 0.025179276816434504;

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
    msg.setTimeStamp(0.383188822785569);
    msg.setSource(22944U);
    msg.setSourceEntity(5U);
    msg.setDestination(18173U);
    msg.setDestinationEntity(5U);
    msg.control_src = 11212U;
    msg.control_ent = 204U;
    msg.timeout = 0.7518043030717428;
    msg.loiter_radius = 0.9496706536805859;
    msg.altitude_interval = 0.6761249141289895;

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
    msg.setTimeStamp(0.18103389779015922);
    msg.setSource(47184U);
    msg.setSourceEntity(247U);
    msg.setDestination(4462U);
    msg.setDestinationEntity(159U);
    msg.flags = 252U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.26863449142572104;
    tmp_msg_0.speed_units = 10U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.15303187853242284;
    tmp_msg_1.z_units = 231U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6829037960146378;
    msg.lon = 0.6862572879740202;
    msg.radius = 0.40643417945315785;

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
    msg.setTimeStamp(0.16641456093692542);
    msg.setSource(46825U);
    msg.setSourceEntity(42U);
    msg.setDestination(19890U);
    msg.setDestinationEntity(187U);
    msg.flags = 162U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.46079323207245115;
    tmp_msg_0.speed_units = 159U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6911329993014953;
    tmp_msg_1.z_units = 220U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.426622317737682;
    msg.lon = 0.5359202394124646;
    msg.radius = 0.4149394429538247;

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
    msg.setTimeStamp(0.5090611471614976);
    msg.setSource(35242U);
    msg.setSourceEntity(45U);
    msg.setDestination(35658U);
    msg.setDestinationEntity(97U);
    msg.flags = 172U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9398819981719425;
    tmp_msg_0.speed_units = 119U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7340188016813413;
    tmp_msg_1.z_units = 116U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9331687415483125;
    msg.lon = 0.1008684100802727;
    msg.radius = 0.16133404705537457;

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
    msg.setTimeStamp(0.349634085162431);
    msg.setSource(63933U);
    msg.setSourceEntity(83U);
    msg.setDestination(27285U);
    msg.setDestinationEntity(190U);
    msg.control_src = 35201U;
    msg.control_ent = 13U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 124U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.554587262235663;
    tmp_tmp_msg_0_0.speed_units = 38U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.681456215666625;
    tmp_tmp_msg_0_1.z_units = 109U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.26841731776555666;
    tmp_msg_0.lon = 0.9927961385146896;
    tmp_msg_0.radius = 0.8664115164184396;
    msg.reference.set(tmp_msg_0);
    msg.state = 152U;
    msg.proximity = 4U;

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
    msg.setTimeStamp(0.22262563662757562);
    msg.setSource(36008U);
    msg.setSourceEntity(73U);
    msg.setDestination(36199U);
    msg.setDestinationEntity(250U);
    msg.control_src = 65353U;
    msg.control_ent = 31U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 21U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8951592210583283;
    tmp_tmp_msg_0_0.speed_units = 106U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.45116212526798927;
    tmp_tmp_msg_0_1.z_units = 143U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3096395018554735;
    tmp_msg_0.lon = 0.7638772949544178;
    tmp_msg_0.radius = 0.1681627731383586;
    msg.reference.set(tmp_msg_0);
    msg.state = 150U;
    msg.proximity = 227U;

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
    msg.setTimeStamp(0.8203149126539027);
    msg.setSource(2933U);
    msg.setSourceEntity(177U);
    msg.setDestination(14465U);
    msg.setDestinationEntity(114U);
    msg.control_src = 62652U;
    msg.control_ent = 23U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 8U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.21843106160108539;
    tmp_tmp_msg_0_0.speed_units = 105U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6107841299248998;
    tmp_tmp_msg_0_1.z_units = 242U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0012295739489336377;
    tmp_msg_0.lon = 0.9436481177394426;
    tmp_msg_0.radius = 0.35166588725946735;
    msg.reference.set(tmp_msg_0);
    msg.state = 136U;
    msg.proximity = 134U;

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
    msg.setTimeStamp(0.02421410181426986);
    msg.setSource(49387U);
    msg.setSourceEntity(194U);
    msg.setDestination(59084U);
    msg.setDestinationEntity(226U);
    msg.ax_cmd = 0.7695238361107197;
    msg.ay_cmd = 0.21222636231621872;
    msg.az_cmd = 0.9189840929049631;
    msg.ax_des = 0.3886013855982007;
    msg.ay_des = 0.4988547135839775;
    msg.az_des = 0.32152436944511253;
    msg.virt_err_x = 0.16290311747529973;
    msg.virt_err_y = 0.10955069679919016;
    msg.virt_err_z = 0.22827374427842329;
    msg.surf_fdbk_x = 0.9014621560440395;
    msg.surf_fdbk_y = 0.6326608522912693;
    msg.surf_fdbk_z = 0.0909645670221817;
    msg.surf_unkn_x = 0.6226425118667673;
    msg.surf_unkn_y = 0.09678013226369553;
    msg.surf_unkn_z = 0.031096582017236418;
    msg.ss_x = 0.9683692834416212;
    msg.ss_y = 0.6065639716372433;
    msg.ss_z = 0.19602209325685827;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QGFAODSAZURJCGMJOCBKIOBYHNBLDDHZAKKGXNKFLMZGRVXXKTMFGFTEAJUIGLZFNEBJOPTIQFWKDXVWBNJLERNPSRHYKWEPSGPYVCWUARMVBTWUCYQIHIWSVGVZVHMPXLXAOQYXUFAEUPOCTMBSJSBHLCQBIZWPUCRNQDXCTPLSUJZDQCZIHVMAELRNNITMEZT");
    tmp_msg_0.dist = 0.6070256356570359;
    tmp_msg_0.err = 0.23043242105191364;
    tmp_msg_0.ctrl_imp = 0.013740457744070067;
    tmp_msg_0.rel_dir_x = 0.30731252166165834;
    tmp_msg_0.rel_dir_y = 0.021653028895097792;
    tmp_msg_0.rel_dir_z = 0.2776826757350922;
    tmp_msg_0.err_x = 0.28835003390793124;
    tmp_msg_0.err_y = 0.28714296653956983;
    tmp_msg_0.err_z = 0.974442840051496;
    tmp_msg_0.rf_err_x = 0.46926126937629953;
    tmp_msg_0.rf_err_y = 0.4836893074374756;
    tmp_msg_0.rf_err_z = 0.6453648901488487;
    tmp_msg_0.rf_err_vx = 0.6623746162250724;
    tmp_msg_0.rf_err_vy = 0.8810067502789146;
    tmp_msg_0.rf_err_vz = 0.11717776848558858;
    tmp_msg_0.ss_x = 0.2541738076926976;
    tmp_msg_0.ss_y = 0.812896724363112;
    tmp_msg_0.ss_z = 0.5785897846089055;
    tmp_msg_0.virt_err_x = 0.02555935989933178;
    tmp_msg_0.virt_err_y = 0.5480822896246201;
    tmp_msg_0.virt_err_z = 0.5973155205220717;
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
    msg.setTimeStamp(0.05971559011011762);
    msg.setSource(19094U);
    msg.setSourceEntity(150U);
    msg.setDestination(5759U);
    msg.setDestinationEntity(220U);
    msg.ax_cmd = 0.0776532171731138;
    msg.ay_cmd = 0.21089030726341662;
    msg.az_cmd = 0.1812971323182555;
    msg.ax_des = 0.14770843177057902;
    msg.ay_des = 0.7911683051046375;
    msg.az_des = 0.10545665408234883;
    msg.virt_err_x = 0.26502134107750563;
    msg.virt_err_y = 0.8996192187131443;
    msg.virt_err_z = 0.4253040457388789;
    msg.surf_fdbk_x = 0.37797297027746624;
    msg.surf_fdbk_y = 0.8974014391783341;
    msg.surf_fdbk_z = 0.9433348266748449;
    msg.surf_unkn_x = 0.6320378854311269;
    msg.surf_unkn_y = 0.22429096177559826;
    msg.surf_unkn_z = 0.06120507624076521;
    msg.ss_x = 0.9176927769598644;
    msg.ss_y = 0.8191493547428402;
    msg.ss_z = 0.19060533356491305;

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
    msg.setTimeStamp(0.06730042190225538);
    msg.setSource(8026U);
    msg.setSourceEntity(1U);
    msg.setDestination(8306U);
    msg.setDestinationEntity(214U);
    msg.ax_cmd = 0.9062742356312786;
    msg.ay_cmd = 0.3510845236003374;
    msg.az_cmd = 0.15584877503197503;
    msg.ax_des = 0.7870873896779077;
    msg.ay_des = 0.39601093945298793;
    msg.az_des = 0.4339543885826529;
    msg.virt_err_x = 0.47791515475574065;
    msg.virt_err_y = 0.7498070973257153;
    msg.virt_err_z = 0.10294904791121773;
    msg.surf_fdbk_x = 0.7598146611026235;
    msg.surf_fdbk_y = 0.8414917892199005;
    msg.surf_fdbk_z = 0.7849846175260261;
    msg.surf_unkn_x = 0.08671686505237763;
    msg.surf_unkn_y = 0.38517097106630627;
    msg.surf_unkn_z = 0.21752571543337362;
    msg.ss_x = 0.798566718990653;
    msg.ss_y = 0.4453079162361917;
    msg.ss_z = 0.44016575834198224;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XLEWLAXRUDAFEOMWVMISGGNAHUZBIXZAEJKTKCMZJMKPKSTHFYQWFBXYMLQHSNRQELMGRDDETAIWVACYVLRIGSENJYKPXWIRXGSQTPPSZBETPKMBQNCHOUUIPDJJCWGOUYTZUSTBEJJVBNQYKTAMLIFCRQYHHFHQWAPFPNGWLOEDCRDO");
    tmp_msg_0.dist = 0.5420798501749976;
    tmp_msg_0.err = 0.09617698223223237;
    tmp_msg_0.ctrl_imp = 0.5707556867971784;
    tmp_msg_0.rel_dir_x = 0.2990905023312862;
    tmp_msg_0.rel_dir_y = 0.8775279793648154;
    tmp_msg_0.rel_dir_z = 0.07523018540102344;
    tmp_msg_0.err_x = 0.7954204056867469;
    tmp_msg_0.err_y = 0.32845709497973874;
    tmp_msg_0.err_z = 0.44090572843209863;
    tmp_msg_0.rf_err_x = 0.06682341338280129;
    tmp_msg_0.rf_err_y = 0.8279409850671057;
    tmp_msg_0.rf_err_z = 0.7706338200559855;
    tmp_msg_0.rf_err_vx = 0.9033111797207594;
    tmp_msg_0.rf_err_vy = 0.37169993329450246;
    tmp_msg_0.rf_err_vz = 0.9276758346643349;
    tmp_msg_0.ss_x = 0.18551479974889817;
    tmp_msg_0.ss_y = 0.8124774301427442;
    tmp_msg_0.ss_z = 0.07686112796801092;
    tmp_msg_0.virt_err_x = 0.026300179661129963;
    tmp_msg_0.virt_err_y = 0.5140366737975992;
    tmp_msg_0.virt_err_z = 0.5832091120071432;
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
    msg.setTimeStamp(0.40030229937215267);
    msg.setSource(15151U);
    msg.setSourceEntity(182U);
    msg.setDestination(21829U);
    msg.setDestinationEntity(207U);
    msg.s_id.assign("YFFPWIAOHPWWGFBCFYJCWPIBJTPUGGGIYSVICWFNOLFLZNXBEXLWDLZKLMIEYHOKONPCDRAAXKTQZEVJUEUWXHAHIMKBBYZRRUNQQGWQAQAJHZXMQJMBUKYZSIYQGOKECFAXCDKAHDSOTEQGBEINNRVJZZVZMVVTHIKPXCNDEONNOZCLPDOCTBSRIJMURFKBEVQUASYVHYHSGWRJLEKUUUXLRJJLP");
    msg.dist = 0.456473036109622;
    msg.err = 0.0754235434829742;
    msg.ctrl_imp = 0.23778702776623584;
    msg.rel_dir_x = 0.6178663604464812;
    msg.rel_dir_y = 0.5062067457777768;
    msg.rel_dir_z = 0.7131236507529152;
    msg.err_x = 0.12682852503635622;
    msg.err_y = 0.8848611496409339;
    msg.err_z = 0.008781080921069773;
    msg.rf_err_x = 0.3305429423948024;
    msg.rf_err_y = 0.9867939554570523;
    msg.rf_err_z = 0.292133600709126;
    msg.rf_err_vx = 0.7477221656810898;
    msg.rf_err_vy = 0.5859333499711525;
    msg.rf_err_vz = 0.25223554367969325;
    msg.ss_x = 0.3747105539474377;
    msg.ss_y = 0.5350848250178405;
    msg.ss_z = 0.3051899901641091;
    msg.virt_err_x = 0.2208469790228802;
    msg.virt_err_y = 0.3897437215272258;
    msg.virt_err_z = 0.9207471597905319;

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
    msg.setTimeStamp(0.9637280119813761);
    msg.setSource(38045U);
    msg.setSourceEntity(83U);
    msg.setDestination(55092U);
    msg.setDestinationEntity(192U);
    msg.s_id.assign("PFRLPDEQFIHGXJBHNKJYWFV");
    msg.dist = 0.19175982776547917;
    msg.err = 0.880399685545935;
    msg.ctrl_imp = 0.5703898061897519;
    msg.rel_dir_x = 0.4601260940130891;
    msg.rel_dir_y = 0.1135194740908001;
    msg.rel_dir_z = 0.2456421882755493;
    msg.err_x = 0.323240227958822;
    msg.err_y = 0.04557536683076069;
    msg.err_z = 0.5724980294479807;
    msg.rf_err_x = 0.42252058580144225;
    msg.rf_err_y = 0.4384739165179691;
    msg.rf_err_z = 0.030791353245020248;
    msg.rf_err_vx = 0.9775431210980917;
    msg.rf_err_vy = 0.9463228880508342;
    msg.rf_err_vz = 0.4225471124796081;
    msg.ss_x = 0.09101868245338418;
    msg.ss_y = 0.9618728595000345;
    msg.ss_z = 0.8807963299900446;
    msg.virt_err_x = 0.3563911608017285;
    msg.virt_err_y = 0.7165880184679018;
    msg.virt_err_z = 0.44527427528525876;

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
    msg.setTimeStamp(0.18798579473401889);
    msg.setSource(48626U);
    msg.setSourceEntity(202U);
    msg.setDestination(35144U);
    msg.setDestinationEntity(28U);
    msg.s_id.assign("QEBKQCPSJKAFDFFDSLECDWZZGOKMIIWBTCLVPBLXNRRGUPVLREOGTINZMTFMOMCNJMZTXIPDASDAEUAKHILTKNOEQCKWHHWWWJAWDHECZJKEYXIYZTZOGFHLSTYYWDJSXUMXGJHMXEHQSJBRFOFIABCOXARPPBQMKPCEBJPVSAEWMACRUJVYQUNMYGTFPVHBPGRNVNYHRQKFBQNTSUVSZBUYSRLIXLG");
    msg.dist = 0.4260025162418821;
    msg.err = 0.48930847906225095;
    msg.ctrl_imp = 0.9478343940311243;
    msg.rel_dir_x = 0.008122552775852387;
    msg.rel_dir_y = 0.278397789235854;
    msg.rel_dir_z = 0.6160520297400871;
    msg.err_x = 0.1283226617797376;
    msg.err_y = 0.4804243974828677;
    msg.err_z = 0.8923407841882938;
    msg.rf_err_x = 0.7272948761128913;
    msg.rf_err_y = 0.5530895877039378;
    msg.rf_err_z = 0.7293513776689093;
    msg.rf_err_vx = 0.44532874967038083;
    msg.rf_err_vy = 0.18217489803674836;
    msg.rf_err_vz = 0.6702128543537417;
    msg.ss_x = 0.4073704609513069;
    msg.ss_y = 0.9629930550381801;
    msg.ss_z = 0.15590243102415935;
    msg.virt_err_x = 0.5035858673867631;
    msg.virt_err_y = 0.4856377996896636;
    msg.virt_err_z = 0.9570167759716361;

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
    msg.setTimeStamp(0.43028902308924877);
    msg.setSource(40075U);
    msg.setSourceEntity(29U);
    msg.setDestination(12357U);
    msg.setDestinationEntity(247U);
    msg.timeout = 60734U;
    msg.rpm = 0.7383718278472199;
    msg.direction = 3U;
    msg.custom.assign("PGNFJXCFXEUEULWFVJQT");

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
    msg.setTimeStamp(0.20778812478884823);
    msg.setSource(51472U);
    msg.setSourceEntity(143U);
    msg.setDestination(36768U);
    msg.setDestinationEntity(73U);
    msg.timeout = 21218U;
    msg.rpm = 0.7206718345703625;
    msg.direction = 77U;
    msg.custom.assign("FWQIGDIOESOLITBFAOHCNVRAADMNYTTFNNYBZRFWFVZAWOWPVEJAMMFEPWNOFAYDMIZWKPQLPXSHAZPXRMPYBPWRIDAZXVSROTNLFGUIVEVJIENNLSCXDHRCIQCXJCGSQJBDPMBZDEUGHJYKLWONPBOQKKTWU");

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
    msg.setTimeStamp(0.6536121196780605);
    msg.setSource(17839U);
    msg.setSourceEntity(217U);
    msg.setDestination(35638U);
    msg.setDestinationEntity(199U);
    msg.timeout = 35242U;
    msg.rpm = 0.8929381784744581;
    msg.direction = 151U;
    msg.custom.assign("EZJBWZZSODAXEDKOPYTSNCYAKNLFUJANJCXUHTZLDFLRYBQBRWJYUJWITQPFUWZQBCQJDGNPOVNG");

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
    msg.setTimeStamp(0.888212810221586);
    msg.setSource(42294U);
    msg.setSourceEntity(130U);
    msg.setDestination(7767U);
    msg.setDestinationEntity(14U);
    msg.formation_name.assign("WOQJONGGHPXQTKRUAKLHJCOCCVSFZHMPICTASTIWDSAUJNHTOI");
    msg.type = 207U;
    msg.op = 205U;
    msg.group_name.assign("MEFMLUZEZMVRABPOGKFWAFPPESJCJDOHTICHXMKQLXLNPCYTFLQNQTLNMMUFNTC");
    msg.plan_id.assign("ANODQKNAEIENQPRMIGUQTENBGWGPPMSIBWKXNEUUZIWSSQJKADXTAENSVEHTPAVMQGHLDJDYULLNRFHSVJCZPKGJVKBYLQMDRXXUXBVFOCOFYIJYBUZXZI");
    msg.description.assign("ZRRZSEUQWYHGNORARP");
    msg.reference_frame = 199U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21488U;
    tmp_msg_0.off_x = 0.817887315886397;
    tmp_msg_0.off_y = 0.22653710822635853;
    tmp_msg_0.off_z = 0.6341398396568977;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0020097082977981184;
    msg.leader_speed_min = 0.5286223367129614;
    msg.leader_speed_max = 0.6465001000760772;
    msg.leader_alt_min = 0.6739631073174931;
    msg.leader_alt_max = 0.7187201202531651;
    msg.pos_sim_err_lim = 0.8669159695003121;
    msg.pos_sim_err_wrn = 0.7857096593136529;
    msg.pos_sim_err_timeout = 60890U;
    msg.converg_max = 0.6247465891829849;
    msg.converg_timeout = 56849U;
    msg.comms_timeout = 1381U;
    msg.turb_lim = 0.9592073617040716;
    msg.custom.assign("UBKBQARFFKYNMUGIJVRBVLCBGMYPCIRJYHLDEQDJWSOWDSJGZSIWYCNJVRBTHOVIQO");

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
    msg.setTimeStamp(0.8097565687120784);
    msg.setSource(20409U);
    msg.setSourceEntity(39U);
    msg.setDestination(51449U);
    msg.setDestinationEntity(52U);
    msg.formation_name.assign("AXDNLNZXZOJMQOAWYDIIHZYFBKZYSYVTJKVEURMFYXVUQHEKVENOSKFOPJWFJIQJJNZEALXMIEPIDLPQHQURLWDKLZRTBVPKWUDDCCHUQIVMABMQKPLWJXSNDNFSYEGQADHY");
    msg.type = 14U;
    msg.op = 246U;
    msg.group_name.assign("EZAORPQJSXIFEQKXJYUVXGAHDZLBIPGQ");
    msg.plan_id.assign("LPPHZXWIHIJRJUQNRSLLOVUJKNFPXNPXVCXYWHSETDZOEZNTKFCCNMKPFGSWVIBXBTHLBBYMKPBDHOCAVLYEYGLFGODDPGBMUQECYWQIKHOGDQTBYREQZSTXLQUIFKYIOIYUWTCHJUANUJAVAXDWQYIVNUVQMDWCCTGRJYFGVQWARAPISZEBEJOZNKONQDFEFCWLLKS");
    msg.description.assign("LZJDENZHIDWCVICCQKLEASQUKPJVPPLAIOXSZIBRKWTROZBCWHHRGNISCKFAFWSRVBEMUTZPPOVDNHKOZZAE");
    msg.reference_frame = 72U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20347U;
    tmp_msg_0.off_x = 0.36926957154572804;
    tmp_msg_0.off_y = 0.7275021446236456;
    tmp_msg_0.off_z = 0.4387404056228348;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7920015426905904;
    msg.leader_speed_min = 0.2851160009292273;
    msg.leader_speed_max = 0.5455180615220303;
    msg.leader_alt_min = 0.7354224919037253;
    msg.leader_alt_max = 0.39752329073838444;
    msg.pos_sim_err_lim = 0.8448164523143993;
    msg.pos_sim_err_wrn = 0.171321978195336;
    msg.pos_sim_err_timeout = 26106U;
    msg.converg_max = 0.21350953708690856;
    msg.converg_timeout = 39301U;
    msg.comms_timeout = 8683U;
    msg.turb_lim = 0.503481916346196;
    msg.custom.assign("TYSCUGIKOJEJASQNLDANLVRORNISXQTLNWZGXRRLWJWPMJXSSMGAOCHIHNMBLQBFWHXURROTVKOPGKZGTUHBJDUCBVLCHBYFAFVCASQPFSUOQGJPLFYYHDIQE");

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
    msg.setTimeStamp(0.556598736195158);
    msg.setSource(46109U);
    msg.setSourceEntity(203U);
    msg.setDestination(18310U);
    msg.setDestinationEntity(183U);
    msg.formation_name.assign("QZDOXEGVZSDPQTHYVANPFUNDBQFQUTUDGVOJIXVCLFUVRKZMPLJSFRHIRUGPHPZNXIBXECNIUOINFTTYONGBCWCQVSJATSAEUQJMZRUMBCDASVLJRFRFLYESYLGHQASOECKGQMGBWLLMJLJNTYAGMZFXJWHMIYBUDYKWWWNVCXPRGOTDCMKIDPX");
    msg.type = 135U;
    msg.op = 227U;
    msg.group_name.assign("EVFIPIDAMPVEQWOGNWLGCMQKMKYRRTUZXMBBNFKWZRXDMEEWVMGHZXLEAYNFIPOMLUTEXLRYANTUCNT");
    msg.plan_id.assign("OMMOFWJMJDKBOZKNJRYPPQQMSCCNYLSHQYNDWAMXPHQNGOATWXSGQWRDIYKFBZYDQWZCMDWNSJZYAUADUIOGBKKPCNGAPVPVGOAIEWJLOSFJVEQRWNZETRRFCBKUE");
    msg.description.assign("HSLMIHEVWHNHKGIHEP");
    msg.reference_frame = 236U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9117U;
    tmp_msg_0.off_x = 0.9181830866098473;
    tmp_msg_0.off_y = 0.504090929023351;
    tmp_msg_0.off_z = 0.2763543319006335;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7087122376739761;
    msg.leader_speed_min = 0.6849113818556074;
    msg.leader_speed_max = 0.7913872058456772;
    msg.leader_alt_min = 0.45576694233782356;
    msg.leader_alt_max = 0.3938818084743998;
    msg.pos_sim_err_lim = 0.6627496527823338;
    msg.pos_sim_err_wrn = 0.7697038239662459;
    msg.pos_sim_err_timeout = 17678U;
    msg.converg_max = 0.5256227357339048;
    msg.converg_timeout = 26613U;
    msg.comms_timeout = 19555U;
    msg.turb_lim = 0.154681779916913;
    msg.custom.assign("LSMCENEPRKBFAKJSIMEFUGKGIDSTJZWOCOLAIIHRYUPRYKJDNHDSYYXOTBRGHVXPKTLALVUSCCGYUFCZJVZIBADXWOEQF");

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
    msg.setTimeStamp(0.6600637113768936);
    msg.setSource(64191U);
    msg.setSourceEntity(194U);
    msg.setDestination(19272U);
    msg.setDestinationEntity(150U);
    msg.timeout = 22246U;
    msg.lat = 0.8357558537849561;
    msg.lon = 0.4894759175361997;
    msg.z = 0.04526062048743629;
    msg.z_units = 181U;
    msg.speed = 0.21292751450460135;
    msg.speed_units = 76U;
    msg.custom.assign("AMQFAMTQTYXRGXTWXGNVSTYXFSDORQJXZETQVMIDERUZJFFZRNIVPAHT");

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
    msg.setTimeStamp(0.6439694665000789);
    msg.setSource(32899U);
    msg.setSourceEntity(103U);
    msg.setDestination(11550U);
    msg.setDestinationEntity(135U);
    msg.timeout = 59112U;
    msg.lat = 0.37025762185687394;
    msg.lon = 0.7012661448827417;
    msg.z = 0.33569660174787197;
    msg.z_units = 94U;
    msg.speed = 0.8030475482226536;
    msg.speed_units = 162U;
    msg.custom.assign("XOTUEESRKUFHWYMABBZHOEDQVCOLHBTZRZKDXCFBDAQXPPMNDCRTYBNCIOPFXGTQHVJSRVYOIYVIIAMPSMNWDJIDWYMEASLYYHIBFUXEONSTRWSSDAMEJORMMUIGTJDMNZHKWXGQQWRQFHJWKWJFLQGFPHZNVGQOLLNHVUIENKKV");

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
    msg.setTimeStamp(0.6544956362100436);
    msg.setSource(5067U);
    msg.setSourceEntity(4U);
    msg.setDestination(21661U);
    msg.setDestinationEntity(88U);
    msg.timeout = 41449U;
    msg.lat = 0.863467278810618;
    msg.lon = 0.4044713587897314;
    msg.z = 0.5449052041219079;
    msg.z_units = 56U;
    msg.speed = 0.5301009650992382;
    msg.speed_units = 70U;
    msg.custom.assign("TAJFCRUWDQGUUGHHNQZIVMNSGEMGNMQKFOVXUYVNCIBOONPEUXQLLNGSOZNAVSOQSZIJBALEMDBEDWRBJMHLOCLCYJPKCAWLZMWRKXNTIETEATWTUSLIWHITQHHBDXQXAZPBHGSMXKCTDHTJPIQKCWUHAVPCUPDOMGTXFGZYJDPGXNFBUBLFYZGPHSMVCRBVCIVAEID");

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
    msg.setTimeStamp(0.5152486006081182);
    msg.setSource(37174U);
    msg.setSourceEntity(45U);
    msg.setDestination(19376U);
    msg.setDestinationEntity(254U);
    msg.timeout = 18079U;
    msg.lat = 0.2769208337538068;
    msg.lon = 0.9425076828267501;
    msg.z = 0.14224359918272667;
    msg.z_units = 23U;
    msg.speed = 0.24346496449289423;
    msg.speed_units = 143U;
    msg.custom.assign("SZLPAYOTGDCYVCAHPGQTDBHVWAFDVURLHVYCCRHNXFNWGQDZFSJJUUONDEQHGWSKJKKHVGPNIFOTIVYFBCCZQZEEGSPIJMLMANJWRFUSAFIYNYDFGCKBUINSSQDMIQRTRLLUIDSXUQRKSIXMPOMXXRHAJEIALMSWXCNZVQOCQZLKTMYTHJZ");

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
    msg.setTimeStamp(0.27455320619082635);
    msg.setSource(52700U);
    msg.setSourceEntity(89U);
    msg.setDestination(32276U);
    msg.setDestinationEntity(139U);
    msg.timeout = 39247U;
    msg.lat = 0.18052323053737107;
    msg.lon = 0.6965613872818719;
    msg.z = 0.5923131854883742;
    msg.z_units = 184U;
    msg.speed = 0.7857568619907885;
    msg.speed_units = 169U;
    msg.custom.assign("YYLRYYFBTLHSAAGWHXEWEVDIQIQVZIGDZLQHVNGMLPRRVZLOOAONCETIHQQWAKOBGCOUSWGHVEJINOKNNMMXDNMTYXWGFRVPEJRPETYTMZTNVBJXJOFJPEJSSKNK");

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
    msg.setTimeStamp(0.8737900257801028);
    msg.setSource(7676U);
    msg.setSourceEntity(134U);
    msg.setDestination(20908U);
    msg.setDestinationEntity(36U);
    msg.timeout = 37475U;
    msg.lat = 0.7267118159776986;
    msg.lon = 0.09132256284505536;
    msg.z = 0.07348336531262745;
    msg.z_units = 212U;
    msg.speed = 0.07933715501954774;
    msg.speed_units = 179U;
    msg.custom.assign("QSGFVHCSHYZBQCPHCTWNAJDCZUDLYXNXVZRHTICESBNJADIGHYIOUPELSZCDPQTRDAG");

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
    msg.setTimeStamp(0.981720892771849);
    msg.setSource(15192U);
    msg.setSourceEntity(177U);
    msg.setDestination(59910U);
    msg.setDestinationEntity(159U);
    msg.arrival_time = 0.22362005823625775;
    msg.lat = 0.5582519203933589;
    msg.lon = 0.25388618629506343;
    msg.z = 0.4358112485617376;
    msg.z_units = 22U;
    msg.travel_z = 0.30750095248352083;
    msg.travel_z_units = 243U;
    msg.delayed = 170U;

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
    msg.setTimeStamp(0.10597780092736442);
    msg.setSource(14153U);
    msg.setSourceEntity(42U);
    msg.setDestination(50059U);
    msg.setDestinationEntity(138U);
    msg.arrival_time = 0.7893862054860749;
    msg.lat = 0.9094367625177382;
    msg.lon = 0.8311031959433126;
    msg.z = 0.7259561705289304;
    msg.z_units = 100U;
    msg.travel_z = 0.6491340789973592;
    msg.travel_z_units = 0U;
    msg.delayed = 31U;

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
    msg.setTimeStamp(0.6199604341477744);
    msg.setSource(10069U);
    msg.setSourceEntity(102U);
    msg.setDestination(59062U);
    msg.setDestinationEntity(65U);
    msg.arrival_time = 0.6271964405460364;
    msg.lat = 0.5387802726565035;
    msg.lon = 0.22339775297526732;
    msg.z = 0.01246132753312712;
    msg.z_units = 49U;
    msg.travel_z = 0.5206423134990076;
    msg.travel_z_units = 135U;
    msg.delayed = 136U;

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
    msg.setTimeStamp(0.39699286960110647);
    msg.setSource(56014U);
    msg.setSourceEntity(65U);
    msg.setDestination(18667U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.5557328189060203;
    msg.lon = 0.5761022361163182;
    msg.z = 0.7257924456472648;
    msg.z_units = 243U;
    msg.speed = 0.3282984690493159;
    msg.speed_units = 104U;
    msg.bearing = 0.9309430500836388;
    msg.cross_angle = 0.45944033294888076;
    msg.width = 0.18244028208366547;
    msg.length = 0.8801884605168616;
    msg.coff = 102U;
    msg.angaperture = 0.7196530461734458;
    msg.range = 23639U;
    msg.overlap = 96U;
    msg.flags = 34U;
    msg.custom.assign("JDSZMSMVGAMHZSGKHKADYGNVSQMIGVQXUJPVUIJPBJGBBNWRAFURIAQPNCQFBNBKNHTYTIC");

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
    msg.setTimeStamp(0.04312609966422376);
    msg.setSource(40647U);
    msg.setSourceEntity(207U);
    msg.setDestination(13153U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.2842911386135136;
    msg.lon = 0.3959595619537375;
    msg.z = 0.9657836201533256;
    msg.z_units = 120U;
    msg.speed = 0.24702729639996301;
    msg.speed_units = 19U;
    msg.bearing = 0.3899556838366314;
    msg.cross_angle = 0.32429264212981723;
    msg.width = 0.40016309646716164;
    msg.length = 0.6735766962173364;
    msg.coff = 181U;
    msg.angaperture = 0.318571163444764;
    msg.range = 65245U;
    msg.overlap = 182U;
    msg.flags = 91U;
    msg.custom.assign("FTEKWIJTQFPSMG");

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
    msg.setTimeStamp(0.6040332006561061);
    msg.setSource(62349U);
    msg.setSourceEntity(142U);
    msg.setDestination(35186U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.8134001661886843;
    msg.lon = 0.9577719820827343;
    msg.z = 0.8387218493385536;
    msg.z_units = 231U;
    msg.speed = 0.2523970746028844;
    msg.speed_units = 170U;
    msg.bearing = 0.31961688149277445;
    msg.cross_angle = 0.9217207604007067;
    msg.width = 0.3814120703789423;
    msg.length = 0.8282344426437114;
    msg.coff = 81U;
    msg.angaperture = 0.6193454017778247;
    msg.range = 23741U;
    msg.overlap = 108U;
    msg.flags = 177U;
    msg.custom.assign("ARSWAZACLHQYQOBZBCZMHXWWCVEDEWZYTHOUBHOZRMHLDDJFHEENBTSJZANVBSLTTOESSVRJRIEIWANTYGTXPUVPFGCXUXQ");

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
    msg.setTimeStamp(0.04888761704849254);
    msg.setSource(37190U);
    msg.setSourceEntity(68U);
    msg.setDestination(21570U);
    msg.setDestinationEntity(58U);
    msg.timeout = 49356U;
    msg.lat = 0.8264781377428565;
    msg.lon = 0.5297918764040176;
    msg.z = 0.7082835255864184;
    msg.z_units = 115U;
    msg.speed = 0.13516779997744954;
    msg.speed_units = 46U;
    msg.syringe0 = 119U;
    msg.syringe1 = 143U;
    msg.syringe2 = 95U;
    msg.custom.assign("LYWVUIDXNYZXNUIWDPIVQUIMVMQIVPHVQFGTOSAKQWHIJNKOIZMNRFUTEEYTK");

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
    msg.setTimeStamp(0.9900268594274308);
    msg.setSource(52628U);
    msg.setSourceEntity(139U);
    msg.setDestination(16049U);
    msg.setDestinationEntity(49U);
    msg.timeout = 63662U;
    msg.lat = 0.1714270211778518;
    msg.lon = 0.3065823673079523;
    msg.z = 0.9370784632242669;
    msg.z_units = 40U;
    msg.speed = 0.354602061650118;
    msg.speed_units = 183U;
    msg.syringe0 = 203U;
    msg.syringe1 = 216U;
    msg.syringe2 = 74U;
    msg.custom.assign("OOSGFEVLAGEXYDOSUPBFFERMJHMBDVYVQYKAAVINQWSJOKBGXBEXLFQAEGXAJSZFXOCDPCOUDIYUTOUVWLSSJSAMTYMBNRQXHAHCLBQHHEYSDNBNKAXCRMWJQDDBPTIRNBKCWMGHPULGHNOIZLTHINZWXIRCODGWPWZVFCTSZPNCYIVMQPKTW");

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
    msg.setTimeStamp(0.28979293818069984);
    msg.setSource(64458U);
    msg.setSourceEntity(120U);
    msg.setDestination(49020U);
    msg.setDestinationEntity(140U);
    msg.timeout = 27866U;
    msg.lat = 0.6682678725707972;
    msg.lon = 0.11810712525735456;
    msg.z = 0.8572623261147981;
    msg.z_units = 196U;
    msg.speed = 0.40653277621237327;
    msg.speed_units = 46U;
    msg.syringe0 = 16U;
    msg.syringe1 = 160U;
    msg.syringe2 = 158U;
    msg.custom.assign("BHOHWJMSHSM");

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
    msg.setTimeStamp(0.44403347573080476);
    msg.setSource(34016U);
    msg.setSourceEntity(111U);
    msg.setDestination(59447U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.34289109406936924);
    msg.setSource(54495U);
    msg.setSourceEntity(16U);
    msg.setDestination(37235U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.3077474737627599);
    msg.setSource(9502U);
    msg.setSourceEntity(20U);
    msg.setDestination(23280U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.6823549967621391);
    msg.setSource(64063U);
    msg.setSourceEntity(183U);
    msg.setDestination(3852U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.46278388613507027;
    msg.lon = 0.678211190050952;
    msg.z = 0.39182329424206674;
    msg.z_units = 112U;
    msg.speed = 0.6646316339034385;
    msg.speed_units = 1U;
    msg.takeoff_pitch = 0.39745447583733384;
    msg.custom.assign("YQNWCWZXKUSEAWISWHUWAGBHG");

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
    msg.setTimeStamp(0.5238499403090319);
    msg.setSource(47169U);
    msg.setSourceEntity(151U);
    msg.setDestination(62111U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.3512005080230839;
    msg.lon = 0.6634522952294004;
    msg.z = 0.17464479265950694;
    msg.z_units = 47U;
    msg.speed = 0.9490123662578255;
    msg.speed_units = 220U;
    msg.takeoff_pitch = 0.39949899274393863;
    msg.custom.assign("RLWCZTZHSVWKCOKNCAQAAFTYSLKWZTJRSZYRZRBWYVUTWBENAHIVMUOQSBCSFPTTVPXHSDECZJGMKRVBAHUDPUDJNLDWIDQGLIGSIHPMMKFOPBZYEFZBWGYKEHYANVOTCPEKXFGVZRLYIMDLQGGXUVXDOHMXFYWFA");

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
    msg.setTimeStamp(0.36284796177748824);
    msg.setSource(56005U);
    msg.setSourceEntity(73U);
    msg.setDestination(38492U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.8543905186841236;
    msg.lon = 0.6672654951263758;
    msg.z = 0.19789988848727103;
    msg.z_units = 128U;
    msg.speed = 0.29974549747906554;
    msg.speed_units = 9U;
    msg.takeoff_pitch = 0.18324035084378776;
    msg.custom.assign("PPXXEJGPBFFAZGUOSPHXLLNULJXKYRWZAABEXPCHMEADUFJRMJVAPLYMTMPOQEPVZFIGBTWHKNKNGAZIUJDNEIJNMWZGOETWRSOSWIBNRSVTECIACEZRT");

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
    msg.setTimeStamp(0.46353460696925464);
    msg.setSource(64097U);
    msg.setSourceEntity(224U);
    msg.setDestination(9133U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.48808464274660945;
    msg.lon = 0.8628029769763104;
    msg.z = 0.6064915466905978;
    msg.z_units = 47U;
    msg.speed = 0.08304173433160789;
    msg.speed_units = 197U;
    msg.abort_z = 0.0961231778058087;
    msg.bearing = 0.17521445373213185;
    msg.glide_slope = 93U;
    msg.glide_slope_alt = 0.8677107115124078;
    msg.custom.assign("FYQNSGZZRDVBMRXLUSVPSOMHHGHXNSBWXHAGVERCWDYVETZPLGFVCXJRCYHGMRXIAJIYZABZNAKTMEJFUPPLBKSZYSTKWBFJTQZBPDUMDCBXXJWVAKPXY");

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
    msg.setTimeStamp(0.5528158945504013);
    msg.setSource(10602U);
    msg.setSourceEntity(6U);
    msg.setDestination(39678U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.0562067230764276;
    msg.lon = 0.17872672215684415;
    msg.z = 0.3641477678533458;
    msg.z_units = 235U;
    msg.speed = 0.0637404689300155;
    msg.speed_units = 87U;
    msg.abort_z = 0.9710142978337726;
    msg.bearing = 0.15467797404669914;
    msg.glide_slope = 8U;
    msg.glide_slope_alt = 0.7825054621425217;
    msg.custom.assign("DJMQCFKYINENTTFEFRPABHHXFUDIZFWSTENEMHLXEKQDABLRZPWGSNLJNVLBJXCADKVCRZOZBQBUBSXKSPYCSPOWHYUWPNANPQRQACKZQZRPIGASEGQTMJZLDKNISFGMTOWVXCYWIDLTMAXBTAHPQIMGVLJOV");

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
    msg.setTimeStamp(0.8528802980599333);
    msg.setSource(49184U);
    msg.setSourceEntity(58U);
    msg.setDestination(57675U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.5579797659075268;
    msg.lon = 0.8483873522001751;
    msg.z = 0.1760028948882537;
    msg.z_units = 236U;
    msg.speed = 0.7833214319278856;
    msg.speed_units = 46U;
    msg.abort_z = 0.9315252258535439;
    msg.bearing = 0.11106719639933671;
    msg.glide_slope = 53U;
    msg.glide_slope_alt = 0.8821639042515287;
    msg.custom.assign("RHXNAHRSSBYIYEOGUWHDDOIFIHXZDNTCFQITSRKDJZPXWZFXTJQFNXBGGPMASUAITNEGXJSVWCRNXYPQXAJIK");

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
    msg.setTimeStamp(0.8537777504237438);
    msg.setSource(17284U);
    msg.setSourceEntity(75U);
    msg.setDestination(62731U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.8965813873171419;
    msg.lon = 0.3238774056256669;
    msg.speed = 0.29772196869610545;
    msg.speed_units = 213U;
    msg.limits = 213U;
    msg.max_depth = 0.37998472976185826;
    msg.min_alt = 0.5638489202629737;
    msg.time_limit = 0.5002287735559959;
    msg.controller.assign("JMZRPBMVHJGPCOYVQXOCKCCFUGHNXYEXKKVSTMHXLJDXUNCMONMIKLCPJVCVBVQZPHONEAJLXYZJRGTBATFITSSDGNOWESLJTSYDMCEFPLVBUMWQRQYUUJEGRBXCJHIHOKWFOFMDZIRGTEZSWANEFVAEWFNYECUSDZBNRMTKIBYVJBXEDNXKRGLRVHGWUSYUGUQLQWPZZOPNFLARKWPYHHIBAADGDLMWKDSIDFI");
    msg.custom.assign("GRCTUFOMBTJJUFINXUSWRWYHXBMCQXWSJZAMPBWVYNPTVSMPPXGCWKNXJQQMEGAAJFETOMRRDMVFSOUGELASYZEDPDEKNPRRVE");

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
    msg.setTimeStamp(0.9901917563636268);
    msg.setSource(62344U);
    msg.setSourceEntity(10U);
    msg.setDestination(2130U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.04590352769953576;
    msg.lon = 0.4813243432651315;
    msg.speed = 0.4745887528540286;
    msg.speed_units = 38U;
    msg.limits = 232U;
    msg.max_depth = 0.05489311346117509;
    msg.min_alt = 0.6177692654922541;
    msg.time_limit = 0.8712748686253602;
    msg.controller.assign("BQKPKDVDXROSFHXYWKGICCJOUKQDDBELQGDUISYGHZONLKZCDVEVTYMCMMFLXPQPIUUHRTPACXTSXUVEMSTZAMQOPSCZUIETVKLHTFAYBIHDGCHRJLMHNBLZRCJOVQKZORWBFECJWFDSUKUNATFXFNPGMXHLLURVGFEAGWYMLDAPIZLJWOSIWXWWH");
    msg.custom.assign("UBQCKLWUMLIPRNLZVLXUNSCHPACBNGASOKPSEMQPYKDKPYRJHNCDTUHVV");

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
    msg.setTimeStamp(0.6777218196918624);
    msg.setSource(9681U);
    msg.setSourceEntity(164U);
    msg.setDestination(19058U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.024205077719410828;
    msg.lon = 0.506153650828829;
    msg.speed = 0.2483399342196423;
    msg.speed_units = 83U;
    msg.limits = 200U;
    msg.max_depth = 0.03850262163729823;
    msg.min_alt = 0.08529275113628487;
    msg.time_limit = 0.746972798213118;
    msg.controller.assign("JHCLTHYCUKGISPZHDAHWGFFLZEMEORYLOJEUSABOBKRYVVZZJTOSQNTASHIGSOFXUNNMTMADDQNWUMXWRMOBPTAVSQACZGJJHLZEKVNBGVGVMLKCWBIYKIJWJZURXADEKUAXODKAYSMHQILIZTQRUCFSVMNNEVCBQUTLAEFQLPOPCRX");
    msg.custom.assign("BOPOWNKRHKUJLODJEUGYBNYYSIKJQQCFRMYCTFUDWEFTUEZCIMGSLPNPJCPNNTYTVMOOTHGZAZMDFCPIUKRSSJGEHESXGMYLYHIXSWXVHAFBSGCIXF");

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
    msg.setTimeStamp(0.8308242356631657);
    msg.setSource(6728U);
    msg.setSourceEntity(147U);
    msg.setDestination(64711U);
    msg.setDestinationEntity(219U);
    msg.target.assign("UJGSQURPAVFIBLUSNZFQIAJKDMNWQEKMRNETDOORWXEYUMWIGPAWCMXGLMCZLJBMTZFFMEONCBDVVUQDHCPUJZNLGOTMMRDXKIKSYDBHYVJ");
    msg.max_speed = 0.6527657998835953;
    msg.speed_units = 171U;
    msg.lat = 0.42272225634922767;
    msg.lon = 0.708018231322294;
    msg.z = 0.8303287043401949;
    msg.z_units = 219U;
    msg.custom.assign("LEUGKEHXAHFKEWCPXBPPCTICBMONXHFVZKHCCOZPFTSIZMSROSAORYYBJBJRXMFIRMRZXGQGNJZWMQFYFQRDEVCLOLVWFIAUDHWNMELGJMQVSNQZEEKLTXIPDCBOJAJDVODDBPCDUSQPKTKQNSDWMKWTITYDUZYJLWAVJEZTIFOHNUNVJZMHBGGSAYUBURIXKASYHLYAMKWNNTXIDONBVAZYCWHGQPUTVLEOVRJGBPPFHQSYKLRLFQACWR");

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
    msg.setTimeStamp(0.37165877936250913);
    msg.setSource(14909U);
    msg.setSourceEntity(27U);
    msg.setDestination(57427U);
    msg.setDestinationEntity(221U);
    msg.target.assign("NCGBPMOXYRQTFFRSOQEWHOTXQZSUOIRLFOKGLUDZQHAKKCNRPUCGUWYQBECGJESHYDZYLGYZDXLWLGPZKUVMQXEFOPVJSWVWRHIVFDCETMHPHSWZGWMAJPRQNIZPSCHPVBJYUNYIFYXBPFANAXVGCTZIONJAHGYUTLVYCBKBSDMZNASWJQDOUVSXXBKRMIVELFVFABLISQX");
    msg.max_speed = 0.008983863014459526;
    msg.speed_units = 183U;
    msg.lat = 0.7775242934053268;
    msg.lon = 0.7401341810226597;
    msg.z = 0.6867768264927906;
    msg.z_units = 236U;
    msg.custom.assign("GSXSQAJUGPOZKYQADVIDVDKGOGEHGPXEQMUXSXRBBPQOTOZJHCIYYLVBMTHTCWDSOPFP");

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
    msg.setTimeStamp(0.211870521851114);
    msg.setSource(23768U);
    msg.setSourceEntity(238U);
    msg.setDestination(51480U);
    msg.setDestinationEntity(27U);
    msg.target.assign("YFINXJDQXYAZMCWFJMFZR");
    msg.max_speed = 0.34888419893322486;
    msg.speed_units = 46U;
    msg.lat = 0.6456184230826583;
    msg.lon = 0.21953364120121144;
    msg.z = 0.8586898348489956;
    msg.z_units = 18U;
    msg.custom.assign("OCNZHMEJIDUFEKUEPKJSGVISMQSMBPPQZHVRNNSYQVRKCBUPDBBMUUQRFZIMKHUKJERJTBHPOWAYFIJWDTAOASXKOTLGHXMKXQGXAUBCEXGOEZYYFIDSIPTRVOZZHDDJHLZBVYLZCEEPKBVXSTRLUCNGIKQVPNHFTAVFSAHTDGXGQENYWEBTCRMVNNLCRYWHZPTIXXBYXFYSFQAJFQJUCLVWIOGAOOGRJWTLDGZO");

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
    msg.setTimeStamp(0.8285372735637374);
    msg.setSource(37812U);
    msg.setSourceEntity(94U);
    msg.setDestination(50552U);
    msg.setDestinationEntity(192U);
    msg.timeout = 23749U;
    msg.lat = 0.10257379660438148;
    msg.lon = 0.8705058395339345;
    msg.speed = 0.1279270922882153;
    msg.speed_units = 164U;
    msg.custom.assign("DCMMBYKFSVBTZNWVMIPGIVUJPFZAZOJLBIGJKSOGMOFJNFWHRQQIYMVRMPCTGCRXZTLEYBHOSBAETGWCRLDESMQXASPPPNJPRIEGONKZUFQYPOUWQMOKYPXHDWFLTINDBACGFHENYDAIXMLHQBULAQZUCLSIRTGTWBSXESNIFOVNZUZROCCKTWXJXEBMTHDKCVVW");

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
    msg.setTimeStamp(0.5332483912740461);
    msg.setSource(61425U);
    msg.setSourceEntity(148U);
    msg.setDestination(22827U);
    msg.setDestinationEntity(221U);
    msg.timeout = 40608U;
    msg.lat = 0.6105951168398961;
    msg.lon = 0.9678980975938709;
    msg.speed = 0.9519281117718744;
    msg.speed_units = 85U;
    msg.custom.assign("PHBZCTMUNYHVBVRAVLKASJFVAPRNQISGDZORZSBSTLDOEMIUIIDYBUWPASAELUWHOQJVWZNOEPAQZGKUXVJATCNHJIJDSFMARTLHIMBCTKGC");

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
    msg.setTimeStamp(0.48045776622323566);
    msg.setSource(7658U);
    msg.setSourceEntity(190U);
    msg.setDestination(28616U);
    msg.setDestinationEntity(228U);
    msg.timeout = 49321U;
    msg.lat = 0.9355762481031482;
    msg.lon = 0.5946867861410854;
    msg.speed = 0.28047472708535304;
    msg.speed_units = 113U;
    msg.custom.assign("CBAMLOTEHKJTFCONMVKJJXVMFYYXVDCKHTFUTTYL");

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
    msg.setTimeStamp(0.09540522184327738);
    msg.setSource(56599U);
    msg.setSourceEntity(26U);
    msg.setDestination(55103U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.29467179659353615;
    msg.lon = 0.007031780521008946;
    msg.z = 0.14643365036176925;
    msg.z_units = 60U;
    msg.radius = 0.46392043461573207;
    msg.duration = 4326U;
    msg.speed = 0.7510346675203853;
    msg.speed_units = 227U;
    msg.popup_period = 7838U;
    msg.popup_duration = 45920U;
    msg.flags = 95U;
    msg.custom.assign("MWPKZRVOFALWCIOBPYAMUJDEHKPENNACDNPBTPLEQIVWGKZKVZDSYKOIQIVSTBWUTFWGGZRHLRXOWFDFGHNQJHDAJNESPQGQKTCHMYKXAREXXQALUFILIRJQXRYESKBKIWIWOXPUDWVVCQSLTSTKPUJUNCSYMLSVHBCOEGCPYNBGJTMOBDYAUESRPOGMLGFNHVHWOXDRJZAJAFXMZMRVRZMUCESBXAQZHMNDOYEFBJ");

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
    msg.setTimeStamp(0.11803233687596115);
    msg.setSource(33466U);
    msg.setSourceEntity(33U);
    msg.setDestination(43899U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.569028550347782;
    msg.lon = 0.7162282825523116;
    msg.z = 0.5702972618302378;
    msg.z_units = 223U;
    msg.radius = 0.8810866741522679;
    msg.duration = 22033U;
    msg.speed = 0.7435992912655247;
    msg.speed_units = 205U;
    msg.popup_period = 53905U;
    msg.popup_duration = 52666U;
    msg.flags = 42U;
    msg.custom.assign("VTBGTVBNRKNVPNXWEKQNUMEZRGWONWEKFSUKSCMICBJSMPOHTGYLBXSAZJTOQSAAELIPCYZXUJBFCCRBQJMEWTCCUDMPGXGTNOXPYVRJZKKIYDVDIBKQBQKKJLOBFOKRJFHIADISYHCGHBSJHLHUGNXEMZSFDD");

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
    msg.setTimeStamp(0.3218344009620534);
    msg.setSource(59870U);
    msg.setSourceEntity(17U);
    msg.setDestination(49754U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.6708732230464095;
    msg.lon = 0.12002403141169837;
    msg.z = 0.18401377056232393;
    msg.z_units = 178U;
    msg.radius = 0.33242772948510124;
    msg.duration = 61973U;
    msg.speed = 0.2031197133515894;
    msg.speed_units = 233U;
    msg.popup_period = 21770U;
    msg.popup_duration = 20549U;
    msg.flags = 18U;
    msg.custom.assign("UGXWYUJHJJOKAFFPCJRFZCIMEOKDPWWXSGMJYFKYAENZPDWZQQGEGFMRDITTZVZVBMQADZVIXOCUUEUYTLPBIDUHLOQRARPHNBSSDVNEBTVZHQZYKWIXYVSYGAJLMYKILTNPXGTWBQPZPUBINQJVEXNLUJYGEXRNSMSIIPBASLDCWRCCNOBRWHCNSRMLHKGMCDOAHTVSOYROTFJXKDJGLNFLBXMHOAHFIOUSHEXARUTGPFE");

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
    msg.setTimeStamp(0.8633648377337914);
    msg.setSource(40830U);
    msg.setSourceEntity(215U);
    msg.setDestination(24438U);
    msg.setDestinationEntity(3U);
    msg.timeout = 29273U;
    msg.lat = 0.6596802179535793;
    msg.lon = 0.725340327812277;
    msg.z = 0.3996094510160325;
    msg.z_units = 207U;
    msg.speed = 0.26335819473936517;
    msg.speed_units = 173U;
    msg.bearing = 0.9094811493854369;
    msg.width = 0.3764356058091358;
    msg.direction = 148U;
    msg.custom.assign("PKCLXZAPKBMJPZRIRVNOMOJVLMICIUCYMMODKBAQMHFHBMATFHSYUDWDHTHTSDKCATUPSXFLNHBCLVQUPRLNGM");

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
    msg.setTimeStamp(0.4565474531621947);
    msg.setSource(54758U);
    msg.setSourceEntity(75U);
    msg.setDestination(17649U);
    msg.setDestinationEntity(218U);
    msg.timeout = 50740U;
    msg.lat = 0.7200210011745855;
    msg.lon = 0.006637226134858065;
    msg.z = 0.36761488281617516;
    msg.z_units = 26U;
    msg.speed = 0.38101190565832976;
    msg.speed_units = 23U;
    msg.bearing = 0.9745091957436439;
    msg.width = 0.9263275864841825;
    msg.direction = 158U;
    msg.custom.assign("HIMCHGYDYUKMFZFBHAWJQRMXPLAOERVONNXHMJTDLGPRSECMKOHTLUYSWWCFOPYOBXCPKPGFVQVUUVGTXURESTQNKSIJGLCWTTEYGMHNPHHZPKXZCCZRRKDDVZWVNWUMVYASSEJWWYTCZXLBJBYNISJUQMNENIJFIWRVQQMTXRIIDFFUSAEOAGCTOKPBBGBLNIQSDIKTDOROZEBWULLFDGEHBHOKAFKYPQJMGEJFAJC");

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
    msg.setTimeStamp(0.4139685891896331);
    msg.setSource(36218U);
    msg.setSourceEntity(38U);
    msg.setDestination(38802U);
    msg.setDestinationEntity(39U);
    msg.timeout = 41449U;
    msg.lat = 0.05068148057921984;
    msg.lon = 0.6583296372063234;
    msg.z = 0.552227223898239;
    msg.z_units = 212U;
    msg.speed = 0.5211401607567335;
    msg.speed_units = 52U;
    msg.bearing = 0.39891318574687895;
    msg.width = 0.6332719720041567;
    msg.direction = 196U;
    msg.custom.assign("IYZEMXQPGDVDDWKKNXYOWZPDHXUCHEVEPEHUFPTIJNGKNXRNQCAPNQDGOHTFEFFSGMAOCGXCVMJCRBEW");

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
    msg.setTimeStamp(0.47624358850430015);
    msg.setSource(18000U);
    msg.setSourceEntity(46U);
    msg.setDestination(56751U);
    msg.setDestinationEntity(169U);
    msg.op_mode = 27U;
    msg.error_count = 75U;
    msg.error_ents.assign("EULIYIFRESKAQRISRXTVCABFTXQTSFWVUNZEUYBTMXLGFPXNEYNIBPMKXHJHAV");
    msg.maneuver_type = 55938U;
    msg.maneuver_stime = 0.6340178702356135;
    msg.maneuver_eta = 64797U;
    msg.control_loops = 2610129423U;
    msg.flags = 33U;
    msg.last_error.assign("OAZHBLQKTNEGZLTEJOVFPANUEUFAKSJLKKMPRVCCRNTIFIAIGGVHPWBKBSZYSFRENCTHYUTJZGDXEHYKAONGMKVQSZILMRYUOCRXPYXSOEQITZXWVNRDHPFSGUMNQZPDGWYYJDWPMQHXLGQAISERRBDXEVWMSCTXYHWFZWLPI");
    msg.last_error_time = 0.5592811697599406;

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
    msg.setTimeStamp(0.047718060532970674);
    msg.setSource(42440U);
    msg.setSourceEntity(19U);
    msg.setDestination(9007U);
    msg.setDestinationEntity(157U);
    msg.op_mode = 204U;
    msg.error_count = 242U;
    msg.error_ents.assign("RHLFYRFLJUACOXYZNPCROTVLUSDMDIRNWQBTLLPVNGAIHJZQEQTBGMQZNVXOGTUOLLZVIYMNPJBEPRKKBFVDSJNCSHZXXPTDDQZQIUMGVLMCVFXPJHFAEIQAWSGIFXHPOAMCFTKGFMDBKCKPDNZFJVHPUAZUCKTPYYLRKSQYXABSXEWHMDOQCVGUJBJEGCWXWKHIDUAWNSBXDUEYCWYOTTHGYRN");
    msg.maneuver_type = 30307U;
    msg.maneuver_stime = 0.17798370713362888;
    msg.maneuver_eta = 45938U;
    msg.control_loops = 4092068240U;
    msg.flags = 149U;
    msg.last_error.assign("ARNCFBKRVBEPFZAMRWUJCOEBIZNVHNAGRIUCKMNDVQIDDQVWNJRGRYXQSMDFTTWLDBTKSACCIUVSWIOZXDFJNAKJMUSQAVAUKPGFBMXPYPJKVJVHPUQLSACDQONPHYEZLHMEMNTYXGKXZYCTL");
    msg.last_error_time = 0.3428977615104042;

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
    msg.setTimeStamp(0.01603164492598652);
    msg.setSource(50648U);
    msg.setSourceEntity(15U);
    msg.setDestination(32729U);
    msg.setDestinationEntity(116U);
    msg.op_mode = 135U;
    msg.error_count = 76U;
    msg.error_ents.assign("PGULNMEEGGZ");
    msg.maneuver_type = 8590U;
    msg.maneuver_stime = 0.8593342565426442;
    msg.maneuver_eta = 46938U;
    msg.control_loops = 466891440U;
    msg.flags = 64U;
    msg.last_error.assign("RAMSEEHVPNTXKUTOELIPQNNBIBXZAYLYRTJOVLCICRDMSRJOSNWTDGTJWZYGPUXECGNBLGAXRYCIADUEFSZMFXNVCRSTXKYOQLBOPUSCGNCDDBUQZTEXBDRTVZWYWJVKUPOJGTIBXBFOZAPFUMYHVHOSSJZFDQQMFGHGHLGHKMKAIQKEERVVPBECOQLURVLIIKAGCLSFQPQMADKAWHIZHJMKSAXYYFUWPQTRHHNWZFNMWPDJMUFJWYXB");
    msg.last_error_time = 0.8764680491690976;

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
    msg.setTimeStamp(0.24600703543244318);
    msg.setSource(20572U);
    msg.setSourceEntity(208U);
    msg.setDestination(45347U);
    msg.setDestinationEntity(220U);
    msg.type = 253U;
    msg.request_id = 976U;
    msg.command = 154U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5818081193761078;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 44371U;
    tmp_msg_0.custom.assign("MSBOQAJSNFOWHLMAWIQOJESJHLDLGHKUNWKY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19448U;
    msg.info.assign("JGMXPRVDLFKKNBANCCYHLUGRNDVANJEPVXCYJYLCLBUQOWIHAIFCJRMWMUNJRRDZQQGRCDYQBVISIFCOYKYDJTGBHPTVHVRWMFAOROEKHTU");

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
    msg.setTimeStamp(0.17161198758677898);
    msg.setSource(34889U);
    msg.setSourceEntity(127U);
    msg.setDestination(23514U);
    msg.setDestinationEntity(174U);
    msg.type = 58U;
    msg.request_id = 42911U;
    msg.command = 195U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 8716U;
    tmp_msg_0.lat = 0.05987766148260054;
    tmp_msg_0.lon = 0.6761852809815677;
    tmp_msg_0.z = 0.8884466952310345;
    tmp_msg_0.z_units = 19U;
    tmp_msg_0.duration = 8701U;
    tmp_msg_0.speed = 0.18337468233782195;
    tmp_msg_0.speed_units = 57U;
    tmp_msg_0.type = 252U;
    tmp_msg_0.radius = 0.6763341170174008;
    tmp_msg_0.length = 0.07915974724997565;
    tmp_msg_0.bearing = 0.47966157215361915;
    tmp_msg_0.direction = 57U;
    tmp_msg_0.custom.assign("VVQYYOGBGUXNJZKEEKQCJYBJCPHLANXKUFODIWBTDLYBFIPRUGRMQKXKZLWDIOACKBUQRMQACUVUSCPZAYMWZRHWWDDDNGNCIZAEMJGBBVEEPTLSTCJNPDAMIYVGPWGPPWFEOZNNMEVLZHRNQZTZWLAOBFLNZRSOFVMULHAUSDHRVBWJSMSTMOEW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62691U;
    msg.info.assign("IUFJEVLRRPYTCRDUIOMIXWUHBQVNTZOFSJSPQKQWTUWLVGEETIRJIGGBGFMGS");

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
    msg.setTimeStamp(0.6664281896261179);
    msg.setSource(9774U);
    msg.setSourceEntity(85U);
    msg.setDestination(41701U);
    msg.setDestinationEntity(5U);
    msg.type = 68U;
    msg.request_id = 65169U;
    msg.command = 117U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 53841U;
    tmp_msg_0.flags = 2U;
    tmp_msg_0.lat = 0.689085063396631;
    tmp_msg_0.lon = 0.8269181528268218;
    tmp_msg_0.start_z = 0.9612695457265944;
    tmp_msg_0.start_z_units = 114U;
    tmp_msg_0.end_z = 0.4178203350013041;
    tmp_msg_0.end_z_units = 20U;
    tmp_msg_0.radius = 0.3592972939902772;
    tmp_msg_0.speed = 0.47787016589480225;
    tmp_msg_0.speed_units = 101U;
    tmp_msg_0.custom.assign("AFYVSBJUBOLSQGSAZELNLGKWEAUNWOABIHJZVTOHSTZOKQPUPLXZRXYRVXJUDBVVPUATPVMVDZIJCBMNKQKTFPUARQBDJRDSPKLXGZMORWAYSBFDRHBHAICSDFFMOCHQUJPNLDZYITTGIEXYFMQDUCSCAHEOXLUIPIQOYBSWRFLWKEDTVPOZHCKFEGMNTIZXRCZGMEUCBEF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64676U;
    msg.info.assign("RILDMXSULNVUNJOGRBXSAAPJCESWHPCXZWJYVIYNDJPXAUGNHUXBKHSCZUQTUZRFACWOTLTRZJBSKBBEWIYFJVMLYLEWESADTEBVTGFJNVHOSGQHWRKIDLZRYRMFDHNWYIXWZTUVANDGDZVGTIVQISPZBANQBTJOELJKPPKXWMFYAXYROOMSVGFNICTYCKQJGYTFBMQHFILRBIFHQOMKULRGMLQDEHEKEUOZXS");

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
    msg.setTimeStamp(0.7120559232072259);
    msg.setSource(20632U);
    msg.setSourceEntity(136U);
    msg.setDestination(45530U);
    msg.setDestinationEntity(12U);
    msg.command = 45U;
    msg.entities.assign("QVXKUUCHDRJCAQWOVXPMJAWJQNCYTAAUFYHMTIIWYQQOCBQGXPNEDTNLGUUYDUSRIGOPZMELCJGEZDGFMEXDAZQNTOFAIRYBRORZOOJGKPPXMEXEFYPGHLGWKIKBCTSNKFIWZYWIVTFDPVJDMTEWZSFCOYXNBDHHNNQQBPX");

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
    msg.setTimeStamp(0.9113055669096926);
    msg.setSource(5231U);
    msg.setSourceEntity(54U);
    msg.setDestination(33072U);
    msg.setDestinationEntity(42U);
    msg.command = 119U;
    msg.entities.assign("DUBZQUMJDADSQHTGATULCVJAVXWRSQURNNHJHWEYCGMFZSSRJBGULLNKIYTSDMROGMYLABVK");

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
    msg.setTimeStamp(0.8134476727768366);
    msg.setSource(20091U);
    msg.setSourceEntity(134U);
    msg.setDestination(49896U);
    msg.setDestinationEntity(47U);
    msg.command = 61U;
    msg.entities.assign("NXOBPRFABBWITBLLLCSVOCXHGULVKXDYGABFGPFFVNMASTD");

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
    msg.setTimeStamp(0.9450790427167135);
    msg.setSource(19661U);
    msg.setSourceEntity(174U);
    msg.setDestination(5383U);
    msg.setDestinationEntity(239U);
    msg.mcount = 17U;
    msg.mnames.assign("IBLQGGFCLTVYKHPAGPFVLFQPPWJJWHEQSREDSLPBOLGSTDHBDEAUZVTIYYRERTVVAZMAJSVNNKKIU");
    msg.ecount = 125U;
    msg.enames.assign("LCGVDXFKHELGYTTQDKEHYCZJVUPYHPRALRJKSCNBFIIGHVSXKRIYBMZTEVVFSNFZMBWHJGXKOOEPRICYJUXSVXCWKWICVDBOQI");
    msg.ccount = 251U;
    msg.cnames.assign("LYYKXESHBTYOWMNWXVGQDHFJYMFCFTZLERVCNUNKTIVCMDATIHITAOZAMOUSFRLCDJJNTMERAPMJIENUXPJYXHDPWXAKWKZGGQOUMAPGJYAIVHFSDSINYLPLDZVFDRUFJBWQFVUQGCRBRFHHQLRAGWSXMEDZYVGVXTSZPOBAVCSQTRMUESHGZWYZNKKKWPLCGMXL");
    msg.last_error.assign("HBSUMTBJDERTGJPJMWJJZAPYUGIIBKYCVEKJTCYLNKOLOCQIRIDQOXFHDEXGEWMRJDYNEDUVFLQTAOWYGUBPTXLFNKLHGZXAQYQQNQGXWPPRKRKMMRILATEITFHWHPSXWSAZUKZFYBNBMHLVZONWJEGAKMSAVZCZGUNKBQ");
    msg.last_error_time = 0.3315008893211696;

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
    msg.setTimeStamp(0.1195915281490394);
    msg.setSource(50422U);
    msg.setSourceEntity(60U);
    msg.setDestination(54438U);
    msg.setDestinationEntity(199U);
    msg.mcount = 241U;
    msg.mnames.assign("LADWBNJFRAFAPXUUDAHWQEOGIULUDKAQKWFILMXNPVJCJPHHLNNUSQRPDHSIDXCAKJSIJBVEWAOMIEDXRCTEMZRYGCOASNFDITFNFNHPRKHOOJNKUJQGLIQNULMKZMJBPYYQEWUZGHMYSAVMCVBSSQDKUVLZCZKIDGWKXMHSKEBETBTOCWRZPOVSBGYNYRTIIRZVWLBOGFJQQTYXXL");
    msg.ecount = 61U;
    msg.enames.assign("QHLSIWNCWLXOYSNRURQHOVPEIWSIYYIFMJIBHNGLRMQQJPRDWFIJTKBZVCDSMCUFVDKHDAMRKOKUNAGUEOMMGPRQYLFHUEWEYJZCBVGEBXCTKHBBQZXJTXGZMCLHKDHEJSALRJSANZQUXEDPPOBMTQCFWMTVXIESILGDFUSYTYXCDOEFYALFDLXPAYHACPGAWUPPWASAOFMZJR");
    msg.ccount = 21U;
    msg.cnames.assign("LGECVQRFAXKNQNUJDUCCUDAVNFAPQQPJOQLAVYXQGOBAHWASTIDYDLMHMAOXJVMAEPGHJBFMPGGTIVABUTRZJTSXOJCHSCXPRYNWIHJMUTHECFZVKFNCURMWVKCHSSZXTGBYONEEWYESRHGFQDKJDLYVMIWEIFNNKSUFDYSCXLROQZEOOIZBIHUKPLJNUWCDFLBVRQIEWTXLSZMIOARKVREIFTZKBBXYKGWPPZGMYZDXWBBRPSPJLQWZG");
    msg.last_error.assign("FMZXAZUGOOZPOFEIZHABWCOHJLMMPMBYIUPBFCWINVQIHJUQDGDBXMLD");
    msg.last_error_time = 0.7351245539081974;

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
    msg.setTimeStamp(0.5308861003204747);
    msg.setSource(54101U);
    msg.setSourceEntity(15U);
    msg.setDestination(16473U);
    msg.setDestinationEntity(116U);
    msg.mcount = 199U;
    msg.mnames.assign("UMZXMPCJETDYTEEATHUYBGHBVZKRYQBNWSLILPSKSMIFTWQJSWCSUDBQIGHLIHHPOZNJWROXIDKNVJDXTKQNVQWRFCFGDOZGNMSVOWXZYQALINPMDZUUNJQLSZRZJCYYJBCMDVXWSVNJEZQOAAEEBILXKYLPEKHRGKGBEEUFACMBKUQPQOACMATONPUOHRLXKCR");
    msg.ecount = 13U;
    msg.enames.assign("HTYJMSHVUMEKCUSJMOCNNSINWFKOTZERVTSIAXHRJCZZBPKRVPIXVYXBPKRUYFSLGWFIOZZRXYGLDJVBQPCKITTUDPGNPXQUNIYJGCCOFQXHSXPJTHEUQSWBBJVMGTOAINZOCDLIBRZYWDBXLMFAQFOFFHAGMNUURPUKXRRGBHGJEQQLJEQTSNEVWCLEKWMMJFDKNU");
    msg.ccount = 165U;
    msg.cnames.assign("MBQTWTIJSVPRUCNHUMTDBQYDZONRIROTTKQVVSHVQJUSOXYEZPSPVDBZHTVWIMDLJLEFUZQCLCZLYNHBUAMLVPHBJBNZJOPAIHVTAWWKJFKGJAXENYEHUAMOTWOZSPWRCBIYHALGGEQLNDKKFRLYSNPFXZXUXFDJRGQ");
    msg.last_error.assign("MQVJIOGOYLIR");
    msg.last_error_time = 0.8270854243082699;

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
    msg.setTimeStamp(0.18142211642794082);
    msg.setSource(53772U);
    msg.setSourceEntity(38U);
    msg.setDestination(8752U);
    msg.setDestinationEntity(169U);
    msg.mask = 21U;
    msg.max_depth = 0.9335024292212096;
    msg.min_altitude = 0.5790929443708346;
    msg.max_altitude = 0.7881632201449593;
    msg.min_speed = 0.8668085047357826;
    msg.max_speed = 0.6665809860115521;
    msg.max_vrate = 0.058328806507838116;
    msg.lat = 0.8491398323427941;
    msg.lon = 0.470049348126361;
    msg.orientation = 0.15752349870871962;
    msg.width = 0.49712433583720594;
    msg.length = 0.02406294282870025;

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
    msg.setTimeStamp(0.029523310046870033);
    msg.setSource(56334U);
    msg.setSourceEntity(164U);
    msg.setDestination(65236U);
    msg.setDestinationEntity(91U);
    msg.mask = 4U;
    msg.max_depth = 0.11156406711007694;
    msg.min_altitude = 0.5385814903989382;
    msg.max_altitude = 0.9582873468239654;
    msg.min_speed = 0.21329443489310462;
    msg.max_speed = 0.04549205646498944;
    msg.max_vrate = 0.4399278317212746;
    msg.lat = 0.8531317518725703;
    msg.lon = 0.15269393530018438;
    msg.orientation = 0.5752454712312812;
    msg.width = 0.3497634616532407;
    msg.length = 0.7352232575219213;

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
    msg.setTimeStamp(0.18502850069552512);
    msg.setSource(59383U);
    msg.setSourceEntity(72U);
    msg.setDestination(47985U);
    msg.setDestinationEntity(34U);
    msg.mask = 59U;
    msg.max_depth = 0.761464619227752;
    msg.min_altitude = 0.3667596935377162;
    msg.max_altitude = 0.6782474902959055;
    msg.min_speed = 0.5632360882595657;
    msg.max_speed = 0.3956591215525369;
    msg.max_vrate = 0.9776229582927453;
    msg.lat = 0.07318247352990492;
    msg.lon = 0.6262299517053781;
    msg.orientation = 0.47704994019040725;
    msg.width = 0.6841449706451732;
    msg.length = 0.08712433085301607;

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
    msg.setTimeStamp(0.9985200344475222);
    msg.setSource(41467U);
    msg.setSourceEntity(171U);
    msg.setDestination(56361U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.0935712723159734);
    msg.setSource(54164U);
    msg.setSourceEntity(24U);
    msg.setDestination(47685U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.2785659699348051);
    msg.setSource(50427U);
    msg.setSourceEntity(14U);
    msg.setDestination(54033U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.42720054786355566);
    msg.setSource(27123U);
    msg.setSourceEntity(132U);
    msg.setDestination(47609U);
    msg.setDestinationEntity(104U);
    msg.duration = 39512U;

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
    msg.setTimeStamp(0.7660983998135578);
    msg.setSource(3115U);
    msg.setSourceEntity(111U);
    msg.setDestination(45201U);
    msg.setDestinationEntity(35U);
    msg.duration = 31223U;

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
    msg.setTimeStamp(0.9514381932149626);
    msg.setSource(4656U);
    msg.setSourceEntity(159U);
    msg.setDestination(4503U);
    msg.setDestinationEntity(37U);
    msg.duration = 26405U;

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
    msg.setTimeStamp(0.6004465118951381);
    msg.setSource(12636U);
    msg.setSourceEntity(95U);
    msg.setDestination(49482U);
    msg.setDestinationEntity(153U);
    msg.enable = 123U;
    msg.mask = 1240110685U;
    msg.scope_ref = 3820728300U;

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
    msg.setTimeStamp(0.7186813542524885);
    msg.setSource(63030U);
    msg.setSourceEntity(106U);
    msg.setDestination(65341U);
    msg.setDestinationEntity(96U);
    msg.enable = 28U;
    msg.mask = 3720522595U;
    msg.scope_ref = 936711465U;

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
    msg.setTimeStamp(0.36469042715512634);
    msg.setSource(63267U);
    msg.setSourceEntity(186U);
    msg.setDestination(49014U);
    msg.setDestinationEntity(144U);
    msg.enable = 122U;
    msg.mask = 532059781U;
    msg.scope_ref = 1141054396U;

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
    msg.setTimeStamp(0.7813869096232093);
    msg.setSource(25559U);
    msg.setSourceEntity(158U);
    msg.setDestination(14467U);
    msg.setDestinationEntity(138U);
    msg.medium = 204U;

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
    msg.setTimeStamp(0.1639809611305737);
    msg.setSource(64245U);
    msg.setSourceEntity(57U);
    msg.setDestination(53513U);
    msg.setDestinationEntity(25U);
    msg.medium = 102U;

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
    msg.setTimeStamp(0.06215120836800614);
    msg.setSource(33610U);
    msg.setSourceEntity(163U);
    msg.setDestination(13653U);
    msg.setDestinationEntity(249U);
    msg.medium = 42U;

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
    msg.setTimeStamp(0.5479083517885616);
    msg.setSource(1870U);
    msg.setSourceEntity(94U);
    msg.setDestination(22496U);
    msg.setDestinationEntity(72U);
    msg.value = 0.5359125443097805;
    msg.type = 114U;

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
    msg.setTimeStamp(0.005633882343046515);
    msg.setSource(6270U);
    msg.setSourceEntity(228U);
    msg.setDestination(22698U);
    msg.setDestinationEntity(78U);
    msg.value = 0.8099394659873371;
    msg.type = 84U;

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
    msg.setTimeStamp(0.6537779488547908);
    msg.setSource(31533U);
    msg.setSourceEntity(104U);
    msg.setDestination(44259U);
    msg.setDestinationEntity(170U);
    msg.value = 0.13051811828668025;
    msg.type = 65U;

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
    msg.setTimeStamp(0.8339690830822591);
    msg.setSource(64323U);
    msg.setSourceEntity(218U);
    msg.setDestination(20786U);
    msg.setDestinationEntity(139U);
    msg.possimerr = 0.0184742451017903;
    msg.converg = 0.05147126584657946;
    msg.turbulence = 0.7035451944855391;
    msg.possimmon = 88U;
    msg.commmon = 144U;
    msg.convergmon = 122U;

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
    msg.setTimeStamp(0.8348529975406231);
    msg.setSource(14004U);
    msg.setSourceEntity(167U);
    msg.setDestination(29504U);
    msg.setDestinationEntity(8U);
    msg.possimerr = 0.7128215918495759;
    msg.converg = 0.9990391403033414;
    msg.turbulence = 0.6420250389149037;
    msg.possimmon = 229U;
    msg.commmon = 180U;
    msg.convergmon = 213U;

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
    msg.setTimeStamp(0.34611608347992373);
    msg.setSource(49039U);
    msg.setSourceEntity(139U);
    msg.setDestination(37581U);
    msg.setDestinationEntity(7U);
    msg.possimerr = 0.6944820317431889;
    msg.converg = 0.01763592664073277;
    msg.turbulence = 0.7242740377643935;
    msg.possimmon = 1U;
    msg.commmon = 59U;
    msg.convergmon = 188U;

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
    msg.setTimeStamp(0.33149847107024377);
    msg.setSource(25331U);
    msg.setSourceEntity(174U);
    msg.setDestination(11417U);
    msg.setDestinationEntity(71U);
    msg.autonomy = 112U;
    msg.mode.assign("EUVBXTJPRMYLKBQGFHCCYOYQLMFAPQOXIAETACBQTCDSVZGMZHZAGTIVKVHUUUPPUOHMYMLJOKIXSPJYHDDNRKLHNISPQDKORACTMJIZJWANOQBLRXIAMIEIZXBVSFQFFBSMWLREWNAHEUEQGOAXXTDNLFXYWLXPMJCBKEKDNYEVWYRPBRNDNDBKYJWHFSHDEJVSRHVICBDRKWZPEVTTZGMSTZUFUZNGFWSFXCVGONRKLWWOTLJSUUCGGIQZOG");

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
    msg.setTimeStamp(0.3790094150669042);
    msg.setSource(31687U);
    msg.setSourceEntity(252U);
    msg.setDestination(30801U);
    msg.setDestinationEntity(203U);
    msg.autonomy = 248U;
    msg.mode.assign("MQUWVUGBJKSHWLDALUFTFIXZFDYWMUMBJYESSQFSXQKPYMDJQPMDALWHHDRWIPALDRIXWNEOFNEQJTCROAFGKCPSICJGWLRQCJEIHTDGVLEYFEPRMMUFNIJHKLAYZOWRGDOYUBKT");

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
    msg.setTimeStamp(0.5837848949498713);
    msg.setSource(39086U);
    msg.setSourceEntity(59U);
    msg.setDestination(58209U);
    msg.setDestinationEntity(201U);
    msg.autonomy = 221U;
    msg.mode.assign("XAQLCQYLVRHHRXWOBPZASKQWZRVCWFOOPMYOKYDSPZIESBDNZFNQRXTDLUCFSSERIHWPIQTP");

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
    msg.setTimeStamp(0.21999297661051487);
    msg.setSource(43163U);
    msg.setSourceEntity(49U);
    msg.setDestination(26991U);
    msg.setDestinationEntity(47U);
    msg.type = 221U;
    msg.op = 161U;
    msg.possimerr = 0.569587378969295;
    msg.converg = 0.10346333476035363;
    msg.turbulence = 0.6734398409108052;
    msg.possimmon = 192U;
    msg.commmon = 119U;
    msg.convergmon = 194U;

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
    msg.setTimeStamp(0.8439179021969385);
    msg.setSource(2155U);
    msg.setSourceEntity(223U);
    msg.setDestination(53942U);
    msg.setDestinationEntity(34U);
    msg.type = 23U;
    msg.op = 53U;
    msg.possimerr = 0.08845032496838967;
    msg.converg = 0.3200952236033556;
    msg.turbulence = 0.36466526323258364;
    msg.possimmon = 124U;
    msg.commmon = 138U;
    msg.convergmon = 35U;

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
    msg.setTimeStamp(0.2802552784300427);
    msg.setSource(24949U);
    msg.setSourceEntity(18U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(98U);
    msg.type = 92U;
    msg.op = 252U;
    msg.possimerr = 0.8549752844043638;
    msg.converg = 0.49860489146987885;
    msg.turbulence = 0.1491505908299856;
    msg.possimmon = 193U;
    msg.commmon = 144U;
    msg.convergmon = 185U;

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
    msg.setTimeStamp(0.9260306743155156);
    msg.setSource(19186U);
    msg.setSourceEntity(142U);
    msg.setDestination(41418U);
    msg.setDestinationEntity(45U);
    msg.op = 214U;
    msg.comm_interface = 69U;
    msg.period = 64615U;
    msg.sys_dst.assign("NPTAGOCYAEBDJCHNNETUSNPBWMPDYWUGEFVLDOAHSKGHOIDBWFJZBBWWYSZMPDLUIYTOGQMTPXWKPXZYUNGR");

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
    msg.setTimeStamp(0.3162656583431199);
    msg.setSource(28382U);
    msg.setSourceEntity(140U);
    msg.setDestination(9190U);
    msg.setDestinationEntity(40U);
    msg.op = 182U;
    msg.comm_interface = 25U;
    msg.period = 40362U;
    msg.sys_dst.assign("YFSHGQCWIKNNINDBGKJ");

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
    msg.setTimeStamp(0.5155713443113364);
    msg.setSource(35653U);
    msg.setSourceEntity(237U);
    msg.setDestination(13799U);
    msg.setDestinationEntity(196U);
    msg.op = 38U;
    msg.comm_interface = 116U;
    msg.period = 64643U;
    msg.sys_dst.assign("CTGZCKRPPWWTNFBAHNNVHOTUZWAIYZVOLMHGOLNIJWKZKFPCFLIHFALKKBPUUCVMMRZGMXWWRGPGXBDKGVQEAZYPXOQJVHSONDESUWAULDQADRYOTLKXTYXXTIUEGZFPBCOKJHUCBDKSFDIJSPBMJRQVQUHSLZZOYTQBUFHCDAEPMDQSQXYMDSROILQNAEKZHYBLISEGUTOIJMTXIGAJESXJWARTVWXHCMBEVNFFLE");

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
    msg.setTimeStamp(0.8265710194139013);
    msg.setSource(56180U);
    msg.setSourceEntity(82U);
    msg.setDestination(10815U);
    msg.setDestinationEntity(236U);
    msg.stime = 1064665530U;
    msg.latitude = 0.04689709969660483;
    msg.longitude = 0.8009511741349316;
    msg.altitude = 50664U;
    msg.depth = 11423U;
    msg.heading = 28053U;
    msg.speed = -32103;
    msg.fuel = 7;
    msg.exec_state = -43;
    msg.plan_checksum = 10731U;

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
    msg.setTimeStamp(0.31207903155047445);
    msg.setSource(64282U);
    msg.setSourceEntity(181U);
    msg.setDestination(14748U);
    msg.setDestinationEntity(83U);
    msg.stime = 2635406261U;
    msg.latitude = 0.2531677757796048;
    msg.longitude = 0.8041238864812159;
    msg.altitude = 1424U;
    msg.depth = 9200U;
    msg.heading = 27104U;
    msg.speed = -13185;
    msg.fuel = 50;
    msg.exec_state = 56;
    msg.plan_checksum = 40207U;

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
    msg.setTimeStamp(0.6803344270708959);
    msg.setSource(30018U);
    msg.setSourceEntity(154U);
    msg.setDestination(464U);
    msg.setDestinationEntity(147U);
    msg.stime = 2128667497U;
    msg.latitude = 0.6309399335956828;
    msg.longitude = 0.2378006985434642;
    msg.altitude = 15324U;
    msg.depth = 28623U;
    msg.heading = 51868U;
    msg.speed = -11487;
    msg.fuel = -95;
    msg.exec_state = -38;
    msg.plan_checksum = 59711U;

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
    msg.setTimeStamp(0.6124358294443359);
    msg.setSource(34596U);
    msg.setSourceEntity(18U);
    msg.setDestination(43568U);
    msg.setDestinationEntity(163U);
    msg.req_id = 12008U;
    msg.comm_mean = 98U;
    msg.destination.assign("UEYSIEOHPXUAJXIKZKQVRZXDJIVHDMTTAJPVSTRFIHLARPGLOUZGABCTDKLBLHVQIGZEZUYPDWWTYNDAYMESLTYZBROYUKBQJYSCLWXJOVFEHUPRXXBHPIDGZZUEEFFUERNFVTFHIKDXWGBCGMQWFSXNQAGOALZUKSNRCCHMUBIPWKWRNGHOCOGSNTMBANXIEKKONVFBTGQMHYMIFZSTOQRLVVRLSWCDCXNOPLKC");
    msg.deadline = 0.4861280714123679;
    msg.data_mode = 74U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6906360897236988;
    tmp_msg_0.base_lon = 0.21217267974706155;
    tmp_msg_0.base_time = 0.2804350975609722;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 44752U;
    tmp_tmp_msg_0_0.destination = 13117U;
    tmp_tmp_msg_0_0.timeout = 0.7560075437818984;
    IMC::DesiredHeadingRate tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.9848516968252096;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VVSJGNQOQFIXDQRBODLVHCEIHLWJSPPPLABU");
    const char tmp_msg_1[] = {119, -19, 99, -3, -73, 47, 40, -92, 123, 85, -73, -73, 55, -31, 66, -103, -64, -112, -40, 78, -73, 25, 114, 116, 99, 5, 116, 44, 44, -55, 68, -75, -22, -87, -90, -33, 23, -45, 5, -83, -111, 66, 78, 0};
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
    msg.setTimeStamp(0.42810605304087657);
    msg.setSource(32403U);
    msg.setSourceEntity(10U);
    msg.setDestination(12494U);
    msg.setDestinationEntity(134U);
    msg.req_id = 63327U;
    msg.comm_mean = 86U;
    msg.destination.assign("ZRWRHKZPVMULDXXLCQLONTHHMZMERBINEFBBXVVPGWYGMSNPSIKMXENJELHUGFVQLCJWTAWGIFBDXRFBOCDKKOUTZEQHVBZVCGUYTYSKRKDICIYOJQOHAMVBFRSJWPOUNAJAJUDLWFTJAQYXEEGWWVG");
    msg.deadline = 0.6852977486952456;
    msg.data_mode = 240U;
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("BXNGXTZVNKHLRCAIMEIDBVMUXSUCDKTOGMAJRWSLXIFJHVTFOPGTRMZYPZZMSKLPZFIDUUMDESRHTKVDLRBHBYCGGVSTMOORVINAICHYECKROFCZAUMHYNYKUJDBZEFSNOBBFDDNKXJGHJEMZNGLKWQLGIENWIWTLPUYPAIJXCYTWJDFPPBCPXHOPVASSUFNNLTWYLQYXJQQDAGVSZHVMLFKRERQQQTKWEQQBAAZVQI");
    tmp_msg_0.timeout = 63086U;
    tmp_msg_0.contents.assign("DCRZMFOKOQXGFPJXRRKBNJTFMXDFWPKJUDASNCVOVDOSXBGCAZGHWDEQTBNPGEUGSRFKHVOHCGNPFLRTPAGFGBAJDTUYISUAXJCTJVGWQUZQIZJQDIFYWOTHMNHJHINKYVQUAANXVIIGILUOXYEEBCFSFCDXSXEEKKCAEZLZVNYCQRIMKYLQLHOALWSYEMWZVBQHRQHWWCJSKZBRXPNARPJHVOWKLOSPRZDUMBLYTIVEEU");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KGQLLOAQUNQBQBFHYRHVZGEEAWMFPHCPWCUVMFXGYXFETUVSBNWKVJIWISQMSTBKOZHXNYICILMR");
    const char tmp_msg_1[] = {24, -33, 87, 69, -40, -18, -95, -11, 23, -92, 117, 80, -51, -116, -80, -30, -113, 25, 61, 13, 101, -40, -1, 66};
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
    msg.setTimeStamp(0.4332334284214582);
    msg.setSource(11625U);
    msg.setSourceEntity(13U);
    msg.setDestination(7328U);
    msg.setDestinationEntity(144U);
    msg.req_id = 7772U;
    msg.comm_mean = 208U;
    msg.destination.assign("WBQFHTAXDWICBIEMJLKQSZXWTCZPRLVMARHMVIKYLWPDQNOMOWDSKRBQCROUJRAVRODWYEQCEDTCAWKDBGBUFTHDRPEAGWFGKWGNAZTNESZAEODYUOLCNXMRBSPLIFVASMHBKOTTUQPGQGFJKYMXBAIETUDGBSYMXYNHYDZPMQKXLRBMIHJLJZPJFJQOCCYVFSSUGLTOAJEJHZXOVHTESCZUUNHNLUKFQNIXYKZXGEFCUINIPPFLJYSVH");
    msg.deadline = 0.5105885056024368;
    msg.data_mode = 50U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8885618589089148;
    tmp_msg_0.y = 0.24900757407347018;
    tmp_msg_0.z = 0.6431014323769957;
    tmp_msg_0.t = 0.2310034262697198;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KDKZTZKMINYTXXABZWOKHFSCQBHAWBBCLRHUVICCCQWXVDPLNZHLLJEHLHRNQPVVHCNRWWXUAQUMFUEGUAEHUXAOYMAYMJJETQVVYFYAOKGOJGI");
    const char tmp_msg_1[] = {-46, 113, -95, -12, 109, -124, 109, 57, 56, -36, -6, -24, -52, 99, -99, -122, -109, -111, -107, 20, -84, -76, 67, 43, 40, -67, -44, 63, -101, -54, 57, -35, 23, -14, 46, -15, 14, 60, 49, -86, 111, -47, -80, 41, 14, 103, -34, -105, 120, 125, 84, 92, 40, 12, -63, -119, 83, 17, 75, -128, -82, -49, 8, -82, 118, -112, -41, 93, -36, -27, -53, -45, -34, -39, 102, 56, -43, -105, 52, -92, -120, 39, -24, 3, -8, 32, -20, -21, -67, 28, 16, -71, -73, -78, -104, 24, -53, 11, 14, 55, -47, -121, -8, 34, -114, -34, -9, -22, -72, 117, 109, -97, -111, 106, -16, -55, 60, -37, -85, 63, 0, 124, 98, -124, -117, 66, -97, 96, 15, -91, -4, -2, 100, 6, -34, -91, -30, -39, 30, -94, 37, 66, 120, -69, -81, -117, -29, -53, -23, -96, -41, 9, -6, -21, -39, 105, 116, -56, 51, 94, -128, -22, -79, -29, 118, 79, -14, -46, -17, -58, -63, -71, -110, 114, 95, -20, 71, 126, 109, -86, 56, 23, -20, -75, -73, -41};
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
    msg.setTimeStamp(0.9893799232953727);
    msg.setSource(24186U);
    msg.setSourceEntity(25U);
    msg.setDestination(55186U);
    msg.setDestinationEntity(38U);
    msg.req_id = 44728U;
    msg.status = 1U;
    msg.info.assign("UUCPUKETCWC");

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
    msg.setTimeStamp(0.8159185017654357);
    msg.setSource(19659U);
    msg.setSourceEntity(64U);
    msg.setDestination(51986U);
    msg.setDestinationEntity(250U);
    msg.req_id = 48793U;
    msg.status = 129U;
    msg.info.assign("EOQIPRUYLLFCDTHJKDGWROHHOSNKFKWERJTAWOYJYMGHPGTPVBMMMTINIQCDBZFJKVFQQSBXTORYCUBWRLTHUBPSTGEPWHSB");

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
    msg.setTimeStamp(0.29627331600048756);
    msg.setSource(23643U);
    msg.setSourceEntity(77U);
    msg.setDestination(22081U);
    msg.setDestinationEntity(232U);
    msg.req_id = 17411U;
    msg.status = 109U;
    msg.info.assign("AYVUUIPCLVVHRTRZKNBYTZYGGPZFWNMJILRPJVMPNXAPNBQQTJNVOMJDSFJQFSHBEPKNDBLVOXJITLUFTMLBRANBYUEROKBVBVGLDGAWDFPOYHTETJTHCGAAHDZSMRKQYMWXUMWIYWXXOMKXVUECHUYDZKROQLOKFEFZSGAJKQKSONAZZAXGPWDIHPUZREWXECUFRSVDQDTPECWOELAZ");

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
    msg.setTimeStamp(0.9570587871189699);
    msg.setSource(29863U);
    msg.setSourceEntity(65U);
    msg.setDestination(636U);
    msg.setDestinationEntity(75U);
    msg.req_id = 33454U;
    msg.destination.assign("NUDTGILJXEXWLPBOSBFPDMOZZWMKSPBIMSSRCPMMEKLHTORWLBZMKYJUNOXYKOHIWFINUZWV");
    msg.timeout = 0.5466995294219663;
    msg.sms_text.assign("VOTAPFLTEPSEROXIWAMUVQLNNEKDCRKZSRBDJOUZOJAYJFKUIDAYKHIZXLSXFBURWELRTMONLQHTJKPCVWDQAMXHCMHTAKKHZCEHMFVLZBAOIHADMUGZBTLFEBWGYGZXTVUQOPSQIARBLTWGYXXIOQDFBZLPETGHQQGYJGPSRVVPJHBWMYAUKSE");

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
    msg.setTimeStamp(0.855662368607286);
    msg.setSource(28980U);
    msg.setSourceEntity(9U);
    msg.setDestination(36030U);
    msg.setDestinationEntity(172U);
    msg.req_id = 48557U;
    msg.destination.assign("INKBYLKXAZZTIMOBTQUCITEYXYKAWKGCUQAXCVRWPHLMGXRPNMPOSATVECCLLESYSDPEPNREUGZXCYRIKIWEYNPUGDMHOMKZYLUJMHABEHQTOCIGDVXSHAXBPMEERFSGLFOVMZBMUFJFDSJQLPQCRVZDXSWZETKFRMNHVBQLWAQWNCYDBJRGQZ");
    msg.timeout = 0.9105063464625858;
    msg.sms_text.assign("IHWXIMTKLFTBLHBNBLOAGYNKWWAENNDA");

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
    msg.setTimeStamp(0.4071216683372306);
    msg.setSource(44370U);
    msg.setSourceEntity(111U);
    msg.setDestination(45066U);
    msg.setDestinationEntity(185U);
    msg.req_id = 16218U;
    msg.destination.assign("RWITVVALQJXJWWTOJDBTXKMFJSYPAHFNMGUBYGKLVHOBRDCDBNSJIGTVEIUXPPOEFWWLICEDGDAWKAVSOMHFCSBKODRAJPAAQVXPCTKEIOVFYMNUMZSQLRIYWESCJQAYEHLXRYZBGJZVIHKNNTDVTGDDVPXIROCQCPBCTTWQYUQBCFPQQMLXKBZSNUCBEZGHHZWNOJUUGNINWEHUFKGPMRMZOUKY");
    msg.timeout = 0.027597581769365997;
    msg.sms_text.assign("WRARSQBARAYLNRELQVHHCEOOAZITAKKVPYNBESFAWNLFGWMWGKGBPAJHGCPEJYGVMFZCRJZSTIMAHEYLKUQUIVLPCTXCUC");

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
    msg.setTimeStamp(0.542371732333377);
    msg.setSource(36931U);
    msg.setSourceEntity(134U);
    msg.setDestination(40743U);
    msg.setDestinationEntity(154U);
    msg.req_id = 6421U;
    msg.status = 107U;
    msg.info.assign("CMSMNLKUROULNZL");

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
    msg.setTimeStamp(0.8859019622611091);
    msg.setSource(60694U);
    msg.setSourceEntity(128U);
    msg.setDestination(6729U);
    msg.setDestinationEntity(87U);
    msg.req_id = 42627U;
    msg.status = 165U;
    msg.info.assign("GICUGJQDXDXIOCXTJONQWJSJYDOPMQF");

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
    msg.setTimeStamp(0.8715146829310296);
    msg.setSource(51674U);
    msg.setSourceEntity(247U);
    msg.setDestination(54548U);
    msg.setDestinationEntity(136U);
    msg.req_id = 55954U;
    msg.status = 172U;
    msg.info.assign("LUKNRGANBLRPFKVCNMSFHSIKAXCLNQDAONBMUXVAAWWEHFKXCXGQNKCPUOLLHFTVAOSJXTBMMIZQOURYEJBZPFNJSBOHKGCMSVZLSDDDQWIQEHHEJSLVFMZAADREAKLPGED");

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
    msg.setTimeStamp(0.9593697877255395);
    msg.setSource(15114U);
    msg.setSourceEntity(170U);
    msg.setDestination(27222U);
    msg.setDestinationEntity(231U);
    msg.state = 208U;

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
    msg.setTimeStamp(0.941921131353568);
    msg.setSource(47027U);
    msg.setSourceEntity(144U);
    msg.setDestination(32027U);
    msg.setDestinationEntity(197U);
    msg.state = 168U;

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
    msg.setTimeStamp(0.1098660111829729);
    msg.setSource(14051U);
    msg.setSourceEntity(16U);
    msg.setDestination(47841U);
    msg.setDestinationEntity(183U);
    msg.state = 94U;

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
    msg.setTimeStamp(0.018012007129468266);
    msg.setSource(16819U);
    msg.setSourceEntity(88U);
    msg.setDestination(22292U);
    msg.setDestinationEntity(44U);
    msg.state = 158U;

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
    msg.setTimeStamp(0.7928671686038831);
    msg.setSource(43435U);
    msg.setSourceEntity(63U);
    msg.setDestination(26721U);
    msg.setDestinationEntity(139U);
    msg.state = 182U;

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
    msg.setTimeStamp(0.0139174424521189);
    msg.setSource(58878U);
    msg.setSourceEntity(241U);
    msg.setDestination(44844U);
    msg.setDestinationEntity(29U);
    msg.state = 230U;

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
    msg.setTimeStamp(0.9052402559119153);
    msg.setSource(24760U);
    msg.setSourceEntity(149U);
    msg.setDestination(20851U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.09978902193385575);
    msg.setSource(9444U);
    msg.setSourceEntity(174U);
    msg.setDestination(16582U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.02450514590118591);
    msg.setSource(16277U);
    msg.setSourceEntity(66U);
    msg.setDestination(24321U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.634561361723934);
    msg.setSource(60169U);
    msg.setSourceEntity(169U);
    msg.setDestination(32885U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("OJGPGONYTGBYMXMUNKRPIKBRSRYTQUTYNFJRWPSNRHSBVEZSFLJXACLLRMXFJPLW");
    msg.description.assign("JZZTZDOATNOISIMKCWKBTDPYZJQGQOSGRVATSKBWVRADQXQYHEQFIODGSALAXKIFGSOFHQPKGKPBKZMQNUXBMZBKPXICWTDCCKIJBWYROIHPSUWRHAULLFVYGFRAWBFXCWTGVDMIND");
    msg.vnamespace.assign("QJYURNRGMCNHDAPYODWYXKNJCVXVDCJK");
    msg.start_man_id.assign("JAQTODGVXFBCIZEUJCBKVSRTIMMARWONMOXDJKWAKIHXIPOFGUBYHOMIAFJYUUCVVHGCBQFSWXSVVXEVPWAHQQGTKXPZIZSJAWCSQUSNIONEMZZEHYGAWTPKOLRDDQPNCYQJJRKXNESVCDKGUZFETSPTILQHYIQRLUDUBXZWAKPPRDYRWRZLBMGVTBOHLAOQRYLJSLXFYRSNTMFYFNMTNDNJWCNYCZHLBMIUHZTWPKCFLPG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KQMRIGALIUYCFHDPSUVXDEXEDRQYUFWV");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 15513U;
    tmp_tmp_msg_0_0.lat = 0.5223218491177093;
    tmp_tmp_msg_0_0.lon = 0.35782610075846055;
    tmp_tmp_msg_0_0.z = 0.7696622370652597;
    tmp_tmp_msg_0_0.z_units = 221U;
    tmp_tmp_msg_0_0.amplitude = 0.4055253184279336;
    tmp_tmp_msg_0_0.pitch = 0.0397542810278988;
    tmp_tmp_msg_0_0.speed = 0.6737321318996534;
    tmp_tmp_msg_0_0.speed_units = 151U;
    tmp_tmp_msg_0_0.custom.assign("ZXTKMERFJJRQGDDDLVKUFIOIHXKWXOFFGTYCGLNWXIBLIUAZQYJTBAQIUSTMESQEXSZOXMSPBXIGYNDAREGGFULXSAIJNGHZVNCHLMBQTJAENERWWTJQJNBREQFQIAYOPQHOCUKZWCVNFPZLYKAFPPTLYUMPPLNRHCDZO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PowerOperation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 138U;
    tmp_tmp_msg_0_1.time_remain = 0.5633215149649416;
    tmp_tmp_msg_0_1.sched_time = 0.5160028986344881;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::SonarData tmp_msg_1;
    tmp_msg_1.type = 236U;
    tmp_msg_1.frequency = 3544883577U;
    tmp_msg_1.min_range = 18855U;
    tmp_msg_1.max_range = 36435U;
    tmp_msg_1.bits_per_point = 26U;
    tmp_msg_1.scale_factor = 0.9274389962778744;
    IMC::BeamConfig tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beam_width = 0.574255593030532;
    tmp_tmp_msg_1_0.beam_height = 0.3774277307667543;
    tmp_msg_1.beam_config.push_back(tmp_tmp_msg_1_0);
    const char tmp_tmp_msg_1_1[] = {-59, -101, -78, -11, -63, 35, -37, -90, -42, -86, 79, -81, 110, -4, 19, 24, -19, 0, 36, -89, -38, -5, -74, 106, -57, 87, 23, -107, 82, -93, 71, -88, -128, 121, 106, -119, -31, -38, -1, 120, -101, -22, 56, -11, -104, 60, -107, -65, 54, -96, 9, 103, -6, 112, -89, -2, -67, -63, 64, -104, -123, 53, 31, 12, -109, -53, 65, -33, -112, -53, 97, -30, 36, 72, -3, -26, 95, 58, -71, -22, 117, 39, 114, 111, -6, -107, 34, 8, -76, -50, 103, 26, -15, 103, -16, 114, -55, 94, -69, 1, 24, -95, 9, -13, 116, -43, -85, -99, -71, 28, 10, -52, 51, 117, 102};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_1, tmp_tmp_msg_1_1 + sizeof(tmp_tmp_msg_1_1));
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.4428913256078568);
    msg.setSource(30280U);
    msg.setSourceEntity(225U);
    msg.setDestination(8916U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("VCHCQKIGDUVZFUZSERAHMUNOLBSQOJQZAPPPKUPENKICQDSQQJSHPCGICKYHUKFWHRMRIFQZZWXDOJYVPDYBEPJXQVXXGOLWDLRZKQKPANGMBIDINAAOAWYGLYTKMBLTOINUBMIWEFBLYMATWTUYWNZNRYXKLSUSZTERFBFOYLGZFAJOMHGEZVSTESPTGCRDQERWFXNGHXAJJXVDBFHEUIPJSWMDXTXBKORTIUCDCLMCNVJRWBVGJCVEN");
    msg.description.assign("ZWEGYBLAQEVBB");
    msg.vnamespace.assign("JQCQBRWQYQDMJEBIGAJNPDIVJVGVVYKGSEUNLWFJYZNTGUDBSKSIPCOTPRALYQXPHUHSZUSHBQCNAWMCCFPN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EXWBIRBHNDDAUPEFSNVZPHYTDQUWJJOQRAIYJTSHYXUCCICXXWRQKLMGPWBYBHKFISMYFKOPOUOKTFOWDXZBOUVBRTTRUVJLOKGDUVTNACUQHBBMJJZTOTYMHFNAKVQKTL");
    tmp_msg_0.value.assign("VASKUGTOZFXXT");
    tmp_msg_0.type = 2U;
    tmp_msg_0.access = 176U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZTNNJHLVEZZJPRADQXHKNYCTOPDIDIQWICEXVXUEIWLEYQSDCGHBNBKGHNRKHFYRMXVGMXEYDRDTTSCGFZQGSOYJCUQIOBQKSFLDLMPLBEBRSVJJJMTUUXTWRFNBEAVELODMJXANSZVYHBQCEOVULWFSZVFUAQMAFXMOUNWBIHTRGBOQGHAPARWLPIEPNWXFL");
    IMC::MsgList tmp_msg_1;
    IMC::UsblFixExtended tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.target.assign("TFUFHPNFIWZVALTWMSBUEIPCCBFPLCXKKNKQJDHRAHYIM");
    tmp_tmp_msg_1_0.lat = 0.1599799079914459;
    tmp_tmp_msg_1_0.lon = 0.7903493181889163;
    tmp_tmp_msg_1_0.z_units = 170U;
    tmp_tmp_msg_1_0.z = 0.9210927294485821;
    tmp_tmp_msg_1_0.accuracy = 0.9092031814719144;
    tmp_msg_1.msgs.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.5210784421013023);
    msg.setSource(22184U);
    msg.setSourceEntity(122U);
    msg.setDestination(18500U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("MNGVKSLZJQRARNIJERYSYXRSLKTFPTNNIILCSOZGNRZKXJKTUPVSWUWSMHBOCHTXYAUWHMEDXYWLUQLCBDTEWP");
    msg.description.assign("QAULZRXXHHOXPZAAQJOXJMVYRLYHRJJHVDRGPAFGVPNGTCUTCLOHQTEOYKDGFHRNJLZWKUMEXGOCZFBPXIZYZATKSGACCILYRNEVASWZW");
    msg.vnamespace.assign("TYADWEXILEFCJQOLVEBMLWJMYLQISUQSBPZFEPLKUSFNCFPSDOKMTNWHGCXWWWUTFJVJHNUTDKKTDYBNSWUOJUZOVXAYLYXLINRBEKJIBYZXOSGARVVABACPNGXTTIWWOGFPMKRXIAXZVHJJBGNCCDTUQMILQDQPESPYRXPZOEAXQHKKOFMUCMPMNARKGOMMGZDRANRJFCZTBCYUAISZVRNTHDYZJUCGOBFHD");
    msg.start_man_id.assign("SCIDNLHMPVQXAKNZKVJOZWSFRVVSYOUWMWONKGBFJPXRIVQTVSZBACGLSNXDCFOOUCGIRKYJUMPHZDOBGFNNFEJJMLPPTFXTXQJXCJRYKGWDULZNDHJCEBEOZIPAIUDZHBIHOQXTTMAZKOUPUFPQGJVBRHWBKERGWWYDLQNYQMLHRIFDSGTSVPWNSBSICRZBTMPKFEAXGVYEVRTKALXDEZAKRHOSLGLJIICLBUMUYCE");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 83U;
    tmp_msg_0.x = 0.5670840185734886;
    tmp_msg_0.y = 0.8253953393963805;
    tmp_msg_0.z = 0.1049391577022718;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.01466143153846211);
    msg.setSource(49079U);
    msg.setSourceEntity(46U);
    msg.setDestination(16385U);
    msg.setDestinationEntity(84U);
    msg.maneuver_id.assign("IGMXULNHFPOBRBBLFYUOQAKNWYWJEDBZSJF");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 2283U;
    tmp_msg_0.lat = 0.7524635884596397;
    tmp_msg_0.lon = 0.6188573585040638;
    tmp_msg_0.z = 0.7055940435622111;
    tmp_msg_0.z_units = 204U;
    tmp_msg_0.pitch = 0.047770189086563164;
    tmp_msg_0.amplitude = 0.7903268678079629;
    tmp_msg_0.duration = 61738U;
    tmp_msg_0.speed = 0.7684928337726469;
    tmp_msg_0.speed_units = 143U;
    tmp_msg_0.radius = 0.5282564042702085;
    tmp_msg_0.direction = 178U;
    tmp_msg_0.custom.assign("JDCGGONCXBXRUAKGSEGHYOSRNHPYWWUOZINVCQEIALJTIDMDQJOQEMALOLREAJRKPTCZTIHDCVTMHVNGSFCUATZBA");
    msg.data.set(tmp_msg_0);
    IMC::DissolvedOxygen tmp_msg_1;
    tmp_msg_1.value = 0.03690127277773192;
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
    msg.setTimeStamp(0.9500391233717463);
    msg.setSource(59124U);
    msg.setSourceEntity(136U);
    msg.setDestination(30410U);
    msg.setDestinationEntity(14U);
    msg.maneuver_id.assign("OHBRUHSHTZUBDFTVHJRQAHYJDYKWGDUZYWNVRPJOIUKARZ");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 10274U;
    tmp_msg_0.lat = 0.8478426804703728;
    tmp_msg_0.lon = 0.2868051203913532;
    tmp_msg_0.z = 0.36507152899927875;
    tmp_msg_0.z_units = 160U;
    tmp_msg_0.duration = 5225U;
    tmp_msg_0.speed = 0.9275657689089446;
    tmp_msg_0.speed_units = 91U;
    tmp_msg_0.type = 97U;
    tmp_msg_0.radius = 0.5199154101523504;
    tmp_msg_0.length = 0.5004940674789516;
    tmp_msg_0.bearing = 0.9204939521024125;
    tmp_msg_0.direction = 70U;
    tmp_msg_0.custom.assign("QMVZJLBEDATFGROJTSXJSCXQBZODOWVQGDUWNPCRTKAGCT");
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
    msg.setTimeStamp(0.5538929735638866);
    msg.setSource(7198U);
    msg.setSourceEntity(134U);
    msg.setDestination(22429U);
    msg.setDestinationEntity(184U);
    msg.maneuver_id.assign("STJPVYHGFRTYAFSNHICNDBOXJNCESBDZMYTMVINDHONJFIBQPUUYDLWDQMRBDJGADVZPQWSKUBXQXDQYVOOHNQLKMEVPHOGPMJIQEYGXGBLFBFWTWROCPIZLADGBLSKVMTOKERRXEUCVLSKKTWVSFMWLOWTWEZMAUBOJKIULNACRKCJRFZGDZBPAGFAGWRHIAILTNKRTAHUELZNPEWHVSROUXEVNYCPUMZYYEGHHQQFUCXKMS");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 38225U;
    tmp_msg_0.custom.assign("MJRGVLZDBNLGPATEPUQHWEFFAHQMEUBKUBVJTKOQGWLRAWCIFUZKWAXIRTLXICGXYZEDORDYIRSNVLPJPMVOKQAGZKCAEUUWJYXMJSZGHOBLIFA");
    msg.data.set(tmp_msg_0);
    IMC::Acceleration tmp_msg_1;
    tmp_msg_1.time = 0.9125884131580695;
    tmp_msg_1.x = 0.30446396655728347;
    tmp_msg_1.y = 0.14732215738591858;
    tmp_msg_1.z = 0.8146454970214247;
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
    msg.setTimeStamp(0.6563634987953999);
    msg.setSource(32698U);
    msg.setSourceEntity(152U);
    msg.setDestination(8796U);
    msg.setDestinationEntity(89U);
    msg.source_man.assign("XDLWEUYJCZJWDWZNAOKGNADNPGVKNLDJTWFJRHPURSIILRKVYUOEAVTDMOTSFRTBFCIISJIZWDNLVEYGMWGLRYOAGMZALUMTBFNUCKQGXXQZYRIPVXYQOKLPFEUBQESJCUXVHQCCYBPKAUXOMRMXNYHKSNMYSPPYIIFCQIHNBFWQHLZXJVEHCOGBRZTPAZWDFEOAJQSVKQTMDBDKGBPGHEVXHPWZBTTGALRHWOVMSEJIBRNSSFCUZTDX");
    msg.dest_man.assign("ERFZSKBRIPFQGVGDRNUPBFBWERVQBJIXUVVTHUQEXNSAYDMXLESZWCYGNAVMHHLGMZULXOGOTSEINCMOXUFKPNFOBPNYPKTEHTHUVSTYJTNAGDSZIUZOWMRUASTXKIOQPTYIBKY");
    msg.conditions.assign("LBHAURGKZBTOFTPHTTPSAYQPAVHJNLKLQLGZDSQKPRUNQLOBGBMMVHOSNZIEYELCZBEETHPVIBJRHKVIWDKMSJFTYBGLNGCSNMFXVVWHSTEJCWDPJDFI");

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
    msg.setTimeStamp(0.47213374050423784);
    msg.setSource(52646U);
    msg.setSourceEntity(35U);
    msg.setDestination(51395U);
    msg.setDestinationEntity(57U);
    msg.source_man.assign("ANBMWEVZAEVNNNEQGOWPSHHTQLNICXIURB");
    msg.dest_man.assign("VTJEIZHXZGOTNETPBPSJKKWJSPJYBXUVZZHQDZBVQKIZXAZJTHLUBIOMDEWRWFHQPAEOASVNSBUKFXDEMFTEPXBAMGPDLQKCXLLGLUICOGJWCJMDLRKKRIWRCQGGOBHWXEUZAJVBQAHMGRVZLGQQONSDUCNRNCIARYEVDNPKSYFFFTAFXIEDWUHIREGFOSVFHTHBHUSMLCMVYPBCKTGOYUNPYNNPCQROFJW");
    msg.conditions.assign("ZYPNCTCRSVNRDQWWOVNPPWGBBKUQFVDTQWAAFXGMKIRIAILFAJQ");

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
    msg.setTimeStamp(0.21920723350202753);
    msg.setSource(28299U);
    msg.setSourceEntity(181U);
    msg.setDestination(25055U);
    msg.setDestinationEntity(249U);
    msg.source_man.assign("ZCTDIMWWUOEMRDRVKFKUSXABCODGFYESEOJOXJBBWEKQTXJMQAPCETLTBJKJPRMZTXUQVWEJGPAMNFILUEYAYCRZMYZNGZGCRHTQZOIHUKMTXKCVKJXPYGERYPDIGNZFNDWQQNUFLYWHCIPZISWLFLUANMVVOLKSTSAWXJTLIKQBOODCJZSARBHGFTV");
    msg.dest_man.assign("MIZXHCZMIAQKWKDQJVMCJRDUAJOSVCBLAASZJMJHSEBODSYNJEDSYMXHXBNEBPUSBILNOPNGRAGUYFLLXTFQEANDILRWAVZZTYELRTPNKUUENYJXNMLEKPPFKVMEWCYTDHQUEXRPCOOTWKQFAQPAFCDBKNORFGZFCOFXZKIFBDDJYPWIIBRIZLXHHTOPSTVCBTSQUGZISHWRNJXRWLGO");
    msg.conditions.assign("BCUPRNJASZILXVPQYTWCNVQBDVCYLRMSAQETJZSGTHPSPWETZWCFPJRXFGUJDFBRDNDULZURJPBCTTAZAYYWJKYRDPXDKXZABWVKMOGZVSLXELHBQKMLJUUOWEUFOHPQIOISNAHBEMGWLWDQKCDMLGXJGOYFTVLXHIUIRJZUNAAXFDVKIAWGDEP");

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
    msg.setTimeStamp(0.6667731162495981);
    msg.setSource(42784U);
    msg.setSourceEntity(179U);
    msg.setDestination(42780U);
    msg.setDestinationEntity(102U);
    msg.command = 24U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HHJDHIMUJERKZGKJEMTVISYJGGSYXNRZCTVWTOJZNEOETYMXKRFBVQPSACDZXPETLHAKWIKSLSNGFTFBFOMQJH");
    tmp_msg_0.description.assign("JWXRSXQRISASNZFZSSTFCVKTEUULTHBKCHXBZPYWMYQAODNNIEFJCREPPNQUGZHHYXBDQGHXIENEXRVZCLCOKNXUFAJLJRAJMZHBJPTJNTWUCUJAPIQKGSUOLDKIFCXROMDOMEISBUHKRWPRWYSLHPVIOKNBTOEGQFXHYWVUGTRLOTCBCWNQZZZBYWQPIVLFHLDFVYGDAUPMBSLQGRAEKVMWJAOMZKFPSDTTGNDKDMJFIAXCIBGDWEM");
    tmp_msg_0.vnamespace.assign("XDPAKBCUZHWSVWGUKOUJHXDVKCWZXFDEJWFLJJMQLQIHWMREKAZIMLNKOOADSQWRJVTMBNQHZCUOPNVTZMUQC");
    tmp_msg_0.start_man_id.assign("FWIVIEEULEWNMOQMNMFLSQCKCACGLUTPYCJLHSREBUOCLRAQXWLIDHOLVJBAKIEDYGGZFGTBZHGHPSBMDKWUQUSWYWRTZLMUIXHGTQBMPDHJEVCINIZZUDAYDBWKQEFVOBXCZARUKACSUFKFJTVFJZSRRSXNTRQPJBDYVGNBTPGPUPJQXFXDAOIPYXSQQTOYOKNWEDCANXOVHKZPSIMVLJHMESMFTCXRFRRGLJVOV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BFTNJFBZEZERPCEZOENDTKFDMGKGOCDTSWZBTYQOVBEYUGKVYMRDATKRRKJPMIGMGUEOHQTHNFTCRKVQJIQAMDJTULEUSCVIREHXQDYIRNMANIOIDXKBXZLDJLSXJJUNAWKVZQSTKYPSLPLGAYNHVVACWZBWNFIODUCO");
    IMC::ImageTracking tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("TGQGPXYOFONHWQAWBJCRLCDNEWIJTZKVNUOCXTVBUGTUOYEKLVSJLLBOPRAAYHUFTZHOCAHZEAAXBSZZEZVWJDKDWW");
    tmp_tmp_msg_0_1.dest_man.assign("QISBNCNXNDAGOAOCOELOSZHOLZXOVWNUKSAGIJLYMDBWGFDYWASKZQJJVSWLVPCEXGPICEEGJTYNSGVWFWRFJNYXFQSBNOLVNOKUQTMGDKRQDBCZIRMBRIPQRSVBBPUHU");
    tmp_tmp_msg_0_1.conditions.assign("LNDJCJVBTPWKDMBBVZGYXLSMWMKNRQUBRKKUEQKNOTTSUBARRZPJCMXHQCIRDGSAVVXIPNPECHVFWQVAJGHWHPVUQPZCXPGMVROTXTCXDFXSCCOKABDTHRGBYBFEEUJMGHLLOKTPJYNWNFGNWAUESZIFSOITZMWKYONGXDWLAIZFUEINYHXYBQCWBSQUIUELEFHEJZIPOFJSDSVKZGVPTDWMLJYLTSACOARFALIJYNIFYMOZHDGARKUQ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LblConfig tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 112U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.884962105401519);
    msg.setSource(17783U);
    msg.setSourceEntity(138U);
    msg.setDestination(11840U);
    msg.setDestinationEntity(16U);
    msg.command = 248U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IZPJZERJGTPELSIAEYXLYXWOVRIFBURZUEKMBHMSCCAZCKQISDLGCDGAWVCIYBCCWVQKUQXJEXWIIXJTJZQWGVSFEVHQGKYBLBWMWJTGOVRSJAPXITDSZRKHLDQVKDXHGODYAIJBNXHNONDAOPCUWFFRKTGNYTFYMAOSSKEBCMXOTNDTTUEGQFNNAUOBHUZLFNJRBKPMDZYGHWMBUXCAURNVYMFMZPMTSQOH");
    tmp_msg_0.description.assign("YTSAEDUGWHEHDEAXWSEBUOGWGIJEMMOJSZVHRFMQELRYIZPPBTWLVWCPUGRYFLUNOCQOHMIKXIQVJGPKGSPHZVLXLNQTATRYNHNILPXBSCFNMIQQDJ");
    tmp_msg_0.vnamespace.assign("HVJIETBBMYZSVLAUGNWUZQWQSJJXBYRHFICYFTMBTOQWFEGQUAZXKHMDISURYWGBLTDEMQPIOZBDWZMXKJJAIAMRIVZHRKHVZCFGVAGYEOSNQOPELMCLXBYMDNSFWLICXOJEKEYPMWANTFYSGKTUGXOFUCLYFGOKDHZVARNCQLRESUSLZCJQPETBWRVWOXPXNJIECDHFKHGKDKPRSNDWDTLOIURPLPXFUVJTAQDCTQIAVVNBKB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZIMWAQTPYUPAJQXXZPEWYYVFIXIMBKKCZCBTETPQBZZRQMHPQJCLAEYTHQLYTEHOMGUHNSFMMRQZVNVKXUVEJOELJNAODASTLNWLTVYZTYRDEUFOUFPROVGZIXPKARVTIBFQIUBSRKXOJWBSQOSJKJCCXUZWMDRNRMOGANHVSLGSUDGYLJZCNHVLTDIKFEGBANCJIFYCNHDBCFBLWBG");
    tmp_tmp_msg_0_0.value.assign("NXBLUHQVIMUCDIULDDVDFTJEPGBNLTJHPRJZCRQSNFMLOPWQJGILQRSOMSJFTYPBKRNNXBCSCGVQGG");
    tmp_tmp_msg_0_0.type = 99U;
    tmp_tmp_msg_0_0.access = 177U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CJIVZDPSBFHLXLJGEQQOCYBOIVEHZIYBSLYDWOWLWOHVZRMQ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JHOTMPUHQTYOCBFZDWCWNISVDYLEJNCGLILBKQRIDKQPOODVGZEMWRGPGVBAKHMKWNXDXMUG");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 8798U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("YQOGVXBHLMCUIOAIVZEOWYQFCVAGTZZJSWOPJPHKBMXSIFCUASSZXOCNCLAOURPIVTJAKBRNKEWTNCQNXBVMPRJIELREGLJOMBIYCDGZFVXUGVTWHOPJGDGEBZNTMHTGCDKDLSGQQTWLPHNYZQDDRTMNKPSSFBVXAAEUKDPTBZEQMUJW");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("HKUHEMPEHCDKQDWZVCLWCQIGLUPXQBNUWOQCZBDAEMJJALIGEOTTT");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::RemoteSensorInfo tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id.assign("GYQMAATYWIIL");
    tmp_tmp_msg_0_2.sensor_class.assign("AQKGLYPJFBVMVSMNRDZEHUMOZQODFQKKEUZFKRSCPGCVUXRJUMNUYPKHCEOVTKMCRYVLQBGSNQAWLHMIOTNBXPSUHWKVUDMRTNHRLECXDPUJHHEYLFPLSOYRFJBZQAMVSJWJYDAWFDPUSNDFJTIBDEKGGWXWNAJETQIZIOXALJWGCXDOVGVZBXDLXVIUFYMIASWTEYTNBPIXZGKAWGBCCOTCHRAQYOFCZWSTZQOLERQZESPBNYGMHX");
    tmp_tmp_msg_0_2.lat = 0.576180554637281;
    tmp_tmp_msg_0_2.lon = 0.08570021769206848;
    tmp_tmp_msg_0_2.alt = 0.14869750133829596;
    tmp_tmp_msg_0_2.heading = 0.5982951988248243;
    tmp_tmp_msg_0_2.data.assign("EGTJKQVZXJOPIHUCTRSLEFANBZLGKSLAXAHKJDFQCRQXBFGGRHNPWIDUWURVKEMCXDYOJWXLBYBBUFWUOPSZWZFJPIPWQAVDONVXKOEDHGNWESSKFPEJJLULMIAESMEMTSCQJFOKYVCSMDPMVREQSKTGMGNOCYCBCZAGOFQZPHCUXAYIQOLNZNXBIWXLRGFTVNBBNOYIHMBQHITLHCHNTYZRTSWLITFVRXITDUGHQWDUUV");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::EntityList tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 70U;
    tmp_tmp_msg_0_3.list.assign("PRWNSMBGKRJINPTPGBHSOIETOFSULDSPLSXDLQJUZCONBTZICBOTYGIBSJQUKCAGGSOLXYFIAUEEJMGWLVFVHJDLBGTNAFFDXXZQUFJRAVZVYJHSYJMAKLXYUFOCZZMRFXDDEWURPGMEVZTPQJPEQIMHZKKBCQKLXQDEAXTACVCRYNLMJYWGMNNWUVYINZCFOEAIAK");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.6318748453698407);
    msg.setSource(28092U);
    msg.setSourceEntity(23U);
    msg.setDestination(14796U);
    msg.setDestinationEntity(120U);
    msg.command = 23U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GDHDZMNRLRNSLFYMOGGDXBDXJLGTXXHHPUFHHWISHYNJMMHAOZDFUTOPNVBRZCQTHQIIMZZYBZSGCQRJYYVYLRKOJXWFPVLVVBQKKESPSLSBMNNPAQYSM");
    tmp_msg_0.description.assign("MZTQCKSJKQPIFPEPNSWGUIWBWYVFSYJRICQBJAEJWDJRYZGBFKXYCCIDKFHQTKPXVVMJOSBRXWLAUJPPEHDZFNHAXGXMSGPLRIZWFFTYIJQCJDBHMHOYWUHGUFLYAXBWMDTVKHRLXSRE");
    tmp_msg_0.vnamespace.assign("CEQFIFVLRFGLOKYJKOCNGGSCWOXSAFTEINHQBFPZIHNNAFVCAZQLMNWVATHAMIXPHCABJDPFHJRUECCSYMKBSDPUKJDVTHRGRVANSXKBHPZEMCQLVWVU");
    tmp_msg_0.start_man_id.assign("DLTNBHJBKVTNAZUSRUCJBISZFQCDLDPJPHLTIXWTCAAWLKCPEDGBLEKTOQVDFLYNYPMOJKRYRMAGJMGVLZCONUAIZFNEEWHKZLNFIWMYIUBHYWZFOXAQYMYZPAIBURFZLGVPEOVEORJHMSCZFPVTHEBGBXSPHGJQSIJRKAOXZOUCSFKGNKDUUDKIJEUKAWCLHRDRTTOWVRXG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NQNLFDLKBPZXAARLVZTOCRNAEOPATXYRHERYJMXGIHIOINBDCZPTSMKGCAKQQDKGFJUTVQVGFTIPGKKSAROCIXBCDYUXVEWDTYMSWCVNYZMNYYRBRMQUGJOBTLQPZMESEWLMKSVOWNQPLSSIQZWEBYBFZJXHDDTWUNDJUOCQDFWBPVGKXBAIJJHNSIUMAWVZHFLWKGOULETVSJIRMCFYQYEIHPPOXFLFPRMUZGXOUBA");
    IMC::FollowPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("OQEEMJHBQVEMUUQJDQFWZNZFTONNMUSZUAWOWXMYDAQEMCERLTWYBQOUYSPABLCZFHLJSQCXBFYADTMIYLOWXWDZIAXZAXJUEHFIRIIUGXPHVPBKVKKRXJRXKDNCBVAMPIQBBHBTDZJGCGCNSWRJWLKJJGVVGLUWKNLFYDEPNTOOSCYHKAPKIMANIQVGXPAYPMDGGFUDWTGVZNSTOVEVFRXF");
    tmp_tmp_tmp_msg_0_0_0.max_speed = 0.4836382293642493;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 107U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.022534074721541786;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8250064489539216;
    tmp_tmp_tmp_msg_0_0_0.z = 0.304330888135385;
    tmp_tmp_tmp_msg_0_0_0.z_units = 74U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("PTFEQIFGHQASCVJHMSMPY");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HBENKRROALWVXYWVEYTBZQCOATNIOCCVBHTTPRSZLMRNJOIMAXPPBTLLLXCAILDV");
    tmp_tmp_msg_0_1.dest_man.assign("YZHOMABXDIULPLIBQRIEJOQJRYVUYQUMOWTFXJRZLCVCZQSLQJAOGSIWGFKVXOTAMUHHPLXZANZTN");
    tmp_tmp_msg_0_1.conditions.assign("WVEISZBIXCPMBWOLUBDHDZEMXGNENVQUSTPZELADXYBLLHGOPKFCJUZBSPKXQQLJUUMOTHXPPAMBOXKDIPALFCRSCRFVDOJMCGVFYIVQOOQHCTTESIWJKUDWWZWJVLGKZWSRQKFATRTYMN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PlanControlState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 59U;
    tmp_tmp_msg_0_2.plan_id.assign("EKUCTLMYZUSZZLFACEPWMMKLUTHPPMLBKRRUDQVLWQKQBDHDEJEVXRWOZMSQPWGNREITFUALREVPOAISBFGQDIOVTRQJONXGJGOKYEYNFNTWZGDICCTUVNMOLTS");
    tmp_tmp_msg_0_2.plan_eta = 1071227065;
    tmp_tmp_msg_0_2.plan_progress = 0.3378584657125039;
    tmp_tmp_msg_0_2.man_id.assign("EMVCGHIFABTXTLGPVHMZRWGKKFPFFXHMXDQWDQYDJIWLSJDHWQBWNARYANSILSRBCECNBSZCNFJIBQUQSKVNLQUCWXUHDYVFZRITOXIORNSTSGLDVMDAMOVRGYVKQCNGOIYYAURYVSCOHMARHJJZWDWIFYNXUJUWPJTNQGONTLVLTTDLOJRKXEYFMTUSZEZOXHEZEDAWBMPPGCYBUPAQK");
    tmp_tmp_msg_0_2.man_type = 48055U;
    tmp_tmp_msg_0_2.man_eta = 393305486;
    tmp_tmp_msg_0_2.last_outcome = 165U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.7462793937867129);
    msg.setSource(5190U);
    msg.setSourceEntity(195U);
    msg.setDestination(46731U);
    msg.setDestinationEntity(99U);
    msg.state = 105U;
    msg.plan_id.assign("QBGRFZHBWLDECZEELBJIPNXLICHFVPVNSOLDGQLABNUBIACKDYEIDFHDJQRMRUTIHXCVHRRANFKFXTYEJKOYWKJXPFQUDPGIDOODEOCAHVYKWNPTFHOTU");
    msg.comm_level = 163U;

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
    msg.setTimeStamp(0.46964038446803136);
    msg.setSource(48072U);
    msg.setSourceEntity(228U);
    msg.setDestination(45547U);
    msg.setDestinationEntity(254U);
    msg.state = 200U;
    msg.plan_id.assign("OSZGEVPDSBOYEFDZTXTVXTIECQVVYRZZDBAMKBHIFHITWOGOJMUXUYNCVPIZPKOUAELVZYEDBYYWFXNCBZLBXHAXLUCRNSJGDPQRHHWKYDGFPJQKGCCFJKQVIRKMXANQTWVRQSZFASSETNRMPGQNJLS");
    msg.comm_level = 233U;

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
    msg.setTimeStamp(0.2406339576579859);
    msg.setSource(34657U);
    msg.setSourceEntity(187U);
    msg.setDestination(19583U);
    msg.setDestinationEntity(204U);
    msg.state = 63U;
    msg.plan_id.assign("NQQPGFTYSNDGHEGUWJDOQHIGVOWELPVOUNRWXXKHXLSLNBRNAKGINPMFZATZYKZUKYPSJNTIFVPFAICZPNFKOUEQUZFAZXAGSZKWJMMMSEQVWYLRGODMKWXTPUJTXOJAJDWFJIQDTDDHZXEIOQVULLUAVPSQVFEIFRBIHJVWCKEKUWRHYRLOTFIEBHXVTRXUWCCJZMINEOHBOBRLCAB");
    msg.comm_level = 146U;

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
    msg.setTimeStamp(0.3964503581382245);
    msg.setSource(39263U);
    msg.setSourceEntity(11U);
    msg.setDestination(23559U);
    msg.setDestinationEntity(208U);
    msg.type = 224U;
    msg.op = 234U;
    msg.request_id = 33611U;
    msg.plan_id.assign("IKJFPQYFZZZNKRPFFAQYPXHCRYDUJJXRLDKAUVURFCPMZTPIFZRTUJYNVGSAOHUNWBMEBEHADXTJXYNXIWGBEGESMMIULANPYGBLUETQIGGPHDPYZHWIOTHFPWSSZKSCEEFAFKOMORNUDZGOMMIXEEWMVOTETVNSZLVONSHDBTDOKDXCMIKMJPAYWJARLXRKKNVQHQLLWJODWDWQCHCLGSBLCX");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 27U;
    tmp_msg_0.eta = 45135U;
    tmp_msg_0.info.assign("ZNHSTTDYSEDPLISKPJRHBDIVDSWTVLFNYQABQUZPHYTTTHRLCJEAIPYJKWOPGADAFOYBNWFWE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JDZYZSVQEMCOXTVGZUHNKEBGYIYGFPOSQDFLLNGQTMCMOEQOQAUWAUHVXNEUBSNPABYYIFDGFQUBVCTUGXVPDCCXIDZNOIVKFHDLZFSNMHTORNZPCJGBLRJRSEHTPORYLXQLYMXZODWKIVGPMSHJKFSKECFWHRFJVRM");

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
    msg.setTimeStamp(0.0590752123920838);
    msg.setSource(24145U);
    msg.setSourceEntity(159U);
    msg.setDestination(6857U);
    msg.setDestinationEntity(117U);
    msg.type = 134U;
    msg.op = 205U;
    msg.request_id = 60872U;
    msg.plan_id.assign("PQRABSARPMWUEITAGTFPTFOGEZOSMPPOUVOSMLUISKYLQLWPOFXBXMCJAAQDQTFBMVDTWNGKYNTHTVXQNSLTJZWNHNJHXRSGGDFZSZELVEZLZC");
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.8077888760328306;
    tmp_msg_0.temperature = 0.14153564929968032;
    tmp_msg_0.depth = 0.9419392710791485;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZCXBXVGTJOQIUOKNGICOULTEFNQYGBDNZUIFKVEPZSMNFQSAFWFLILSEFCZGNHRWYFXRPIBAREJWQDULFNMJKOVDGTPGATATXCMHZGBRKXTBVYUGJYVPIOHWZRYSKMOEEJBPSSRQKQLYPOEAEPUBPRIJSMYLBIIALNCDJDVJWXLEJTMNVKNSZAKHYUWAOKRQDXXRGGDXWWCWVKSSOCTHLU");

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
    msg.setTimeStamp(0.22177359519736073);
    msg.setSource(27213U);
    msg.setSourceEntity(32U);
    msg.setDestination(29235U);
    msg.setDestinationEntity(168U);
    msg.type = 154U;
    msg.op = 95U;
    msg.request_id = 62589U;
    msg.plan_id.assign("ONWBAFGUJHDFACTZDCMGJSXWMNVPUYDIRSWYOVNCHJQPRKBUGYTPAGZMFCAXQMKPCFTWWGFXFWPGMUZSTCSMAWGVRRFHBGFTWYORXTXILKSAVMBFPNNIBTBUEKCQSJQVLHDPQVOPDCCDNFTCNKTZGOTZAALZQNDXQLKIIZHWOBSLJBYLBHZHXESSIKKBQNSHMPIVHVMEERZYARULRDXVOXOYKO");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 67U;
    tmp_msg_0.angle = 0.16536684678858327;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PENLOIIBPZWNNPFPMQTBSZLWOFUMVAJNLVPNYYCLRSJWQJVJKBIQHXKSJDIDD");

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
    msg.setTimeStamp(0.05897687535509355);
    msg.setSource(20888U);
    msg.setSourceEntity(183U);
    msg.setDestination(64191U);
    msg.setDestinationEntity(178U);
    msg.plan_count = 26923U;
    msg.plan_size = 3202667885U;
    msg.change_time = 0.5550705692327221;
    msg.change_sid = 21368U;
    msg.change_sname.assign("SHFZSIYOMQEOMZGRPXGCNOLQRRJZCNHRQRETNKMXWUSCXSKDGZZPLHMFTWBBNWIQVOGFNTZAITCBNJOSHRLRUXYFCKIFCZVMVTSTWRQJDHRBYXPKUUZKQILUNYEOEDWVMFVCAOCJUTFZUFIZXYMQDWFBSIRLJJBBHWCAAKUETHXUIOMKGVPVDHMPWXLUOSEOANBBWWIFJTGADXAEBQSVDGXDYYYMYSH");
    const char tmp_msg_0[] = {-44, -71, 48, -46, -75, 43, -122, -54, 74, 99, -86, -47, -2, -30, -103, -13, 61, -59};
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
    msg.setTimeStamp(0.6184992195125043);
    msg.setSource(12864U);
    msg.setSourceEntity(196U);
    msg.setDestination(17765U);
    msg.setDestinationEntity(90U);
    msg.plan_count = 27371U;
    msg.plan_size = 2990962460U;
    msg.change_time = 0.6550705383266248;
    msg.change_sid = 42328U;
    msg.change_sname.assign("NPXBOHOMWTDCSBECXTQLXPIMRBFOZYCDBGHGTYMAMFKCZAEJQUWSLFVAJWEWLBUIFDLTRMRANMAZDWSRH");
    const char tmp_msg_0[] = {-12, -113, -20, 90, -38, 75, -110, 48, 93, 112, -22, -37, 113, -73, -6, 5, -77, 113, -34, 117, 8, -69, 0, -105, 16, 72, 65, 118, 18, -6, 58, -116, -33, 118, 123, -72, -12, 58, 110, -92, 57, 82, 40, -4, 14, -29, -121, 123, 28, -98, -5, -69, -97, -49, -67, 121, -36, 108, 34, -69, -71, -22, -83, 20, -38, 28, -60, -83, 113, 73, -41, 49, -81, -13, -63, -5, 47, -127, -22, -6, -56, -65, 11, -125, -14, -111, -8, -102, -114, -115, 123, -35, -49, 58, 11, -3, -91, 89, 67, -70, -14, -29, 14, 26, -34, 1, 65, 122, -35, 62, -56, 36, -36, 94, 113, 108, -124, 39, -40, 59, -121, 117, 64, -48, -98, 39, 12, -18, 23, -63, 117, -128, -111, 63, 85, 109, -110, 28, -115, -33, 13, 49, 122, 3, -72, 83, -54, 13, -53, 52, -99, -5, -95, 67, -64, 105, -9, 91, -56, -52, -87, -46, 126, -83, -114, -88, 112, 66, -63, 87, -52, 71, 1, 112, 68, -59, -29, 20, 56, -5, -121, -67, 57, 37, 32, -51, 58, 11, 24, -41, 5, -55, 114, -88, -7, 15, 19, 99, 104, 39, 38, -4, 39, 57, 9, -79, 47, -99, 126, -56, -107, 1, 42, -42, -105, -40, -43, -11, 101, -84, 100, 48, 85, -52, 32, -70, -35, -7};
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
    msg.setTimeStamp(0.7172507142195423);
    msg.setSource(54799U);
    msg.setSourceEntity(133U);
    msg.setDestination(20744U);
    msg.setDestinationEntity(97U);
    msg.plan_count = 40112U;
    msg.plan_size = 972681267U;
    msg.change_time = 0.7446877230804954;
    msg.change_sid = 23338U;
    msg.change_sname.assign("HVCQCISRVAWUDNSNCMZSDIUAWKMSDOJQXLV");
    const char tmp_msg_0[] = {-21, -56, -59, 101, -77, -120, 36, -47, 126, 80, 81, -128, -27, -22, 74, 11, 50, -89, -49, -45, 126, 81, 43, 97, 32, 14, -84, -128, 14, 39, -113, -46, 66, -73, 120, 90, 113, 88, -40, -52, 97, 60, 45, -100, -12, 56, 56, 63, -88, 29, -102, 106, 94, -59, -102, 96, -101, 101, -26, -25, 19, 87, 115, -35, 31, 13, -7, -54, -113, -103, 99, -79, -3, 90, -126, -32, -74, 24, -107, -51, -116, -76, -98, -121, -3, 111, -57, -24, 62, -15, -85, 40, -13, -1, 78, -34, 115, 57, -91, -106, 19, 6, -89, -7, 87, -77, -68, 4, -84, 103, -100, 3, -74, -37, 7, 71, 70, 32, -30, 117, -41, 35, 17};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.6361874485687828);
    msg.setSource(33062U);
    msg.setSourceEntity(65U);
    msg.setDestination(45924U);
    msg.setDestinationEntity(238U);
    msg.plan_id.assign("PZDMOGGRKRJADQDBUFAQFFHLZOEKBMKSGFBDUPOFCQVZOMHTMDWTJZDTNMTYVXQODUPEOFUXWCTHAQSFCNQVCMWGGVXLYI");
    msg.plan_size = 60778U;
    msg.change_time = 0.7099743270118345;
    msg.change_sid = 31090U;
    msg.change_sname.assign("IBVDVUOMRQXIYZHVZOBCYYYDTHAWZJXOZJPFFGUPTMKCJBBXWZXCUXMGEOEYRTHVIDLMUPRDCDIQNTQYUCIFQEFVQJLMQPRAHSNWGGYRIBPREWWSZKRHLBCHTLBAMEKUSMXFCJLKGMXVEULSTZVDQNJIOCAUISISRIACSQMOGDPLKFSGFUAQDLZXFAROVHKNONDTSPJFLJVOWMTSKVOKHJ");
    const char tmp_msg_0[] = {-87, -44, 15, -52, 6, -116, 122, -70, -53, -87, -2, -108, -36, 102, 61, 111, -8, -127, -16, -87, 105, 37, -27, 126, -68, 100, -81, 29, -106, 122, 54, 60, 92, -80, -113, -38, 27, -128, -51, 58, 106, -4, 103, 48, 37, 2, 9, -13, 97, -115, 33, 65, -11, 43, 114, 29, 27, 119, 40, -108, 126, 60, 60, -60, -19, -69, 63, -39, 40, -10, -25, -127, 25, -10, -80, 76, -100, 37, 81, 106, -82, -113, -96, 118, 106, -38, -13, -17, -37, 114, 6, -67, 108, -89, -25, 27, -113, -46, -19, 126, 5, -55, -108, 109};
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
    msg.setTimeStamp(0.994058099277353);
    msg.setSource(64615U);
    msg.setSourceEntity(186U);
    msg.setDestination(7825U);
    msg.setDestinationEntity(137U);
    msg.plan_id.assign("RZXVSPYIMYIUJBHWYP");
    msg.plan_size = 62143U;
    msg.change_time = 0.2784721631613115;
    msg.change_sid = 21488U;
    msg.change_sname.assign("LEJFPQRIPPFBMEOXCYSUMZPBEHJIELMZQGHOQRQVKPUGJYYCRTBAGYHNYSNKRXSDZTKHBDRCHUQDNWEOORZGZVCQHTEDIMMLSNWSUZFDXMTRQRJOQXTLUVNKLPIAUYBJANZNUBJMHGWJJGSKEWZRTAXJBSWSQXLFACIBVMYFDXDDUPBICIGHEOJONEKINTVVCFAGZWHCKFBGOHTYVOWVWNWSAKUGMLZTQWFSATDCPDOIIMUEFKRXCLLV");
    const char tmp_msg_0[] = {-100, 93, -85, -3, 65, 47, 45, 6, 20, 113, -104, 58, 82, 83, -76, 91, 86, 61, -18, -103, -108, 69, -38, -102, 116, 111, 35, -77, -17, 72, 4, -102, 51, 98, -6, 52, -97, 3, -29, 49, -121, 107, -116, -32, 68, -29, 98, -34, -15, -17, 42, 26, 77, 68, -59, 37, -92, 46, 51, 49, 40, -100, -53, 116, 13, -45, -55, 46, 117, -85, -54, 71, -69, -117, 59, 66, 35, 93, 110, 17, 20, 114, -79, 70, 46, 65, 3, -106, -124, -102, 9, -23, 86, -96, -58, 58, 28, 112, 118, 35, 93, -69, -50, -127, 61, 87, 85, -71, 73, -88, 34, -64, 48, -65, -19, 77, 103, -122, 96, 123, 51, -86, 9, -57, -23, 81, 107, 116, 104, -57, 95, 72, -36, 114, -72, 29, -100, 11, 16, 119, -124, 6, -123, -98, -8, -124, 112, -29, 6, 84, 112, 0, 90, -85, 106, 21, -100, -84, 106, 110, -60, 107, -35, -22, 80, 16, -49, -69, 24, -71, 48, 45, 1, 110, 45, 119, -50, 2, -68, -82, 29, 105, 104, -30, -8, 95, -68, 87, 9, -72, -33, -11, -21, -4, -109, 26, -3, -60, 74, -22, -82, -89, -128, -68, -71, -58, -66, -64, 124, -110, 121, -67, -4, 27, -112, 23, 43, -128, 6, 84, 20, -48};
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
    msg.setTimeStamp(0.9326197071731673);
    msg.setSource(8253U);
    msg.setSourceEntity(62U);
    msg.setDestination(49917U);
    msg.setDestinationEntity(95U);
    msg.plan_id.assign("RODVABVWNETRJNCPYTYVYUBUOQRHCCHFHOAKKPLAVBKXPGVSJIIENWJTTMDQXGJQHCZRUOKZBGWJMHJ");
    msg.plan_size = 38694U;
    msg.change_time = 0.9918552691052116;
    msg.change_sid = 10374U;
    msg.change_sname.assign("HECETKFQBDFAMIKAJWLZWBDOFGJEILFRBOAJCLYUPXSQVQYTBKLNRTOYQAACNUXILPAUZGRYQZOGPZXXOTZDAKWYLTBRMDNJUFSBIUKLDXIPNJOVIGGDSMPXOGHIGPHJZPATKQQXRRRYJVKXYHHMEJZMFR");
    const char tmp_msg_0[] = {59, -73, -47, 76, -86, -70, 111, 7, -80, 68, 123, 14, -65, -92, 34, 65, -48, 68, -11, 110, -113, 93, -127, -120, -76, -36, 74, 71};
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
    msg.setTimeStamp(0.5161562184701426);
    msg.setSource(13823U);
    msg.setSourceEntity(45U);
    msg.setDestination(614U);
    msg.setDestinationEntity(59U);
    msg.type = 29U;
    msg.op = 27U;
    msg.request_id = 37302U;
    msg.plan_id.assign("LOGPKABHJXFTDQZXHPZ");
    msg.flags = 8380U;
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {114, -42, -99, 51, 39, -105, -38, 12, 85, -108, 80, 90, -36, -42, -30, 41, 111, 25, 29, -21, -34, -103, -32, 93, 79, 65, -43, 89, -58, -27, -55, -103, -101, 11, -114, 56, -36, 98, -115, 21, -98, -46, 32, -94, 123, 99, -27, -45, 20, -81, 106, -110, -67, -117, -28, -78, 121, -28, -125, 112, -63, 72, -100, -44, 111, -91, 109, 28, -28, 43, -80, 91, -88, -51, 69, -94, 79, 96, 102, -35, 19, 88, -62, 52, 5, -8, 70, -35, 104, 49, -96, 25, -115, 56, -59, -82, -20, 51, 49, -60, -119, 80, -60, -66, -105, 58, 94, 27, -35, -99, -95, -126, 16, 37, 72, -25, -19, 98, -44, 9, -50, 43, -43, -88, 45, -71, -29, -34, 90, 74, -76, 94, 64, -43, 118, -63, 94, -94, 1, -34, 84, 4, 6, -75, -118, -66, 3, 108, -15, 21, 77, -82, -123, -74, 25, -78, -58, 125, 102, -10, 69, -126, 69, 42, 94, -9, 109, -126, -21, -22, -27, -5, -117, 88, 12, 26, 23, 5, -78, -122, -40, -35, -114, 62, 59, 102, -101, 100, -121, 44, 71, -120, 118, 1, -60, -106, 125, 126, 28, -21, 126, 71, -64, -103, 40, 47, 55, -20, -67, -101, 98, -57, 12, 81, -16, -10, -74, 10, -38, 62, -124, -102, -27, 40, 86, -54, -32, 7, 94, -106, 117, -62, -120, 30, -95, -41, -29, 34, -39, -71, -24};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RUWILEOLSYRIKLIJBQAVMUVMZAJPVEPKKHVTNQDSELSQZKGFZDXIRDWWCZSGFGDFXOENJVAVHYHWQGQSTRZUMGZRRXGOWPETCCWAHDJSUBDKFMAGMSEKCMQAZBNULAXQFXNGBZXGIWECLRJOSVUUNOAULBHSPCNJXYBDEKHLJHVMDHFITVLRTXUJCQBEUPPYDNINOTAHWCTYTFWPKPTFQKEXFKBVSCYCILOMOHZWYAYFB");

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
    msg.setTimeStamp(0.18500174046886475);
    msg.setSource(28335U);
    msg.setSourceEntity(254U);
    msg.setDestination(13717U);
    msg.setDestinationEntity(114U);
    msg.type = 131U;
    msg.op = 212U;
    msg.request_id = 6396U;
    msg.plan_id.assign("ECQDQOIOEEJFVMLYJBNIPMFTROUSTKDUWTGKRIHMFRZLSJZXVMKFRGFXULYNGZHSPLFMKQEIBDSRZYAJNWFBSXGYUNONJZWLSKDJGPVSETKCAJAELDGGACCEEUAEQRC");
    msg.flags = 38025U;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 20249U;
    tmp_msg_0.status = 206U;
    tmp_msg_0.text.assign("NVNYBBGAXNJSMWEYQXBGAFOTSMIPVZFTVLQLEZWTCQFRCYRRQMZHMQWURTGICPTPIDWUMZKTXRRVJGLICSQYTZSZCIRJJLGKBKQUVFGFHUHZTBAYGIPAODXYENCHIYKZTNKPUFDGEEUWOMILSAV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZLBIAOLQZRHYTNOLPFOBEDSUITKKGTENVQFOGGKYZDLAVZBGHGFZXLMEDQEDBMTHUVZACONJDIQBGFRJGZMMPVXYXYSDDNJDJXUPOONQTCITQIUWTVKUIRENCGKOUQSQCIZZDCMURPTENAMHVKPGXPKYVTJEPWRFWKBLCPQHXDRMQKHRAIRIMJBCVSKXW");

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
    msg.setTimeStamp(0.5358358404774388);
    msg.setSource(5964U);
    msg.setSourceEntity(214U);
    msg.setDestination(7880U);
    msg.setDestinationEntity(223U);
    msg.type = 220U;
    msg.op = 208U;
    msg.request_id = 57665U;
    msg.plan_id.assign("OVXMWMCBXBQYRCKDJJULIOLFALLFVHTDVNJNFEGKXIFTUSQ");
    msg.flags = 55426U;
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.09997536185873845;
    tmp_msg_0.converg = 0.604599521567544;
    tmp_msg_0.turbulence = 0.8567783776335893;
    tmp_msg_0.possimmon = 4U;
    tmp_msg_0.commmon = 89U;
    tmp_msg_0.convergmon = 240U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QEXVIYNCKGUYZSMHUELGJERHAVUGBULCGJFMAVDRFEPSOHWMASYOIDQVDPWEETCOMWPPYZTRWIQINRZUVMQFKLIBYMQHXLYIKTJYOWUFERQDWTPXFELEBGDTFNAPKOYDJJONZAHBTFTJCZLNSLGOBEWIWXFXMTOAUNZURBJHXBAGOLDKCVWBYJNTNSRLYQCPFPVWLIRXPZ");

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
    msg.setTimeStamp(0.9573256694398501);
    msg.setSource(5538U);
    msg.setSourceEntity(209U);
    msg.setDestination(28747U);
    msg.setDestinationEntity(154U);
    msg.state = 215U;
    msg.plan_id.assign("TNLJWNBQGESPRPLJKAMZDDIGSJRRQBHMLEHPCPPHNWVSMPPHBAZYIQXZDEVBCGXLGMURIWMRRZRUXVDOUOMULTKYNCWAEQIEXDEINOCZHXCTMBSBIYHDLAAFORDJGUGFBQNHYKJULAUMOJIQOUFAKE");
    msg.plan_eta = -1529959765;
    msg.plan_progress = 0.3469045519086904;
    msg.man_id.assign("UNBCVUGGZNYXKWGELRWDDLQTGTRQWCQUSECGYJMMZUHJSMKNFJFIPIMCTLAHSDBKJHLVFTJMWPEWWUIYBJRSNZSLNQZTCXXEHTCORNZNQISEILBMYVRKYFUFDPJCVTMTHUGHMVRDZOLCEKXJFGLPHHAABYTPFQKUDBOAKAOZMVWOOAXPIDPJHAQKXFNKPXNVUVRGFELEGPKZZISVYNCDIQURVOSWAAEHOCYQAOREB");
    msg.man_type = 438U;
    msg.man_eta = 1377347810;
    msg.last_outcome = 235U;

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
    msg.setTimeStamp(0.815471579317827);
    msg.setSource(64452U);
    msg.setSourceEntity(158U);
    msg.setDestination(10075U);
    msg.setDestinationEntity(183U);
    msg.state = 219U;
    msg.plan_id.assign("IJSXJGLXNBXUPQTZOUTVRDARXQKOSFVMBIUJWZYARSEDCMAWCZUJOISKRHAMGZVHWYRZDORTLIEHEHAOGHBCIPDAHIWZSQGELOFXLBDFFLZYBTSFYZUFMATAORPKRAZVUQQVIJDHNFNLUEQGXMKBGNNPYKKLNCVVTFTETBJCUTBDNSHZPWFXPVKEJKVFPBPIXDXOYVGYYJMDCOXQNMQTGLHCCBHNKCPSQGOIEKUSEM");
    msg.plan_eta = -920036167;
    msg.plan_progress = 0.32241935309766745;
    msg.man_id.assign("BYDSSHJFCRHVDSKHARLXGKXOLYSHCFUJTHKQOFHMYJALYWGTWZKOJPCWEEKOXPZVIQSPYAFNZZUOMXTBMIKEGRUIQCYIMAOCMCWLPNYROTVLOJDRBQPZTLYLERLHAHKEAZVMIJEGDOWIPZHNWHXSIANJCXDFVB");
    msg.man_type = 42162U;
    msg.man_eta = -369591961;
    msg.last_outcome = 112U;

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
    msg.setTimeStamp(0.7116365230299585);
    msg.setSource(61935U);
    msg.setSourceEntity(134U);
    msg.setDestination(64721U);
    msg.setDestinationEntity(89U);
    msg.state = 183U;
    msg.plan_id.assign("CBTHQHWGKZULUXCPAGBXGKCNDYHAESWIUPEQGIZFZMKSPIYADUMRRLMMVOABZDCUSDXTEGJTASOTRHIICKHPIXUDMTQAHOLAZEXSKWHVNEFEZVWKMKVTITOGLUYDBNBYHFRXUJFUDWQOQRYWMTNFXZYMKVJLUPRPBJSMBGVQZWVWTOPWLGGQJNAXDSSJEVEFPTKKLRLQHSFLVYRCICZGVYBJEFCJLEXPN");
    msg.plan_eta = -1182883353;
    msg.plan_progress = 0.527956376685419;
    msg.man_id.assign("OYIJVLXNNMJWHWBFOZSLQDUWCKIHUKWEOGBCVNELORVWAOMGRUHCXMZXZGYDNCVPIUZULVRENSPPAWBQESQXXXLRJGBEYRZFOVZCKAPTXNFYIGAUQZUMYSTYQJDIIICBEXHSHJKHHKWNKZTVAFZKPLBBEMGYNKPHVLSDOIUDQHCQDCRNVTASKJAUCYAGRUGXZWLAFTFGYIDIM");
    msg.man_type = 12164U;
    msg.man_eta = -1708743493;
    msg.last_outcome = 73U;

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
    msg.setTimeStamp(0.39336013055866637);
    msg.setSource(17093U);
    msg.setSourceEntity(209U);
    msg.setDestination(43520U);
    msg.setDestinationEntity(213U);
    msg.name.assign("ZWXTHETNVETQBGKMDVXQOQQUJGDPJQXUGPRJSIBTPZEMILCWYZPKOSJABHCALDEXWEHHLQUXOTTLWUPDIQSPNNFNXBVJFAIVMFVLGYFWWLWERDIKZZIAQYRRBXJKZFSGYSGVZXNUDOILAAEFPORHDEKESVHTOTQIGYHVXMHYMSUWLKCAEWDUYBRYSCVAJNOFCFRNNLTRCZVBJGBJ");
    msg.value.assign("OFSLZVAVELCQDWZSZQ");
    msg.type = 103U;
    msg.access = 189U;

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
    msg.setTimeStamp(0.5638200038837807);
    msg.setSource(35947U);
    msg.setSourceEntity(55U);
    msg.setDestination(27454U);
    msg.setDestinationEntity(129U);
    msg.name.assign("ZWFNLUCFEFBAMCZUGMQJRLXZFVKTNHVLROPGFMNJOMPICBWEOOQGDSKWPKYMVIROUNBINLFPSQXUETGJTZWSAEFMSJTBTJCRRLXDJOXBYMPSVQQTCAHLJQFUSFYMFDNCLSYXCJPDYRIZYVHXIGBVVXACBMMSRPIKOAUPWLXAWLTOYKTHHWIZKUSGGDHZQVUDGEHDHWAK");
    msg.value.assign("ANXENPBWXFXUBMLWLQHJMNGZJNXSSGJTJQHJCFUPQDEYCTHUFYRCAWSWGDJOBPITPXSLQCKSEPNHMRKKNMATVYIYOEVGAOPZRLUDCQMTKLZAFVGYOALRRIORNJASZHIKFVUEKNBBIBUZQMNIXLZJVWZMPPLFDSAWKPWJFZQETOEHKIBTANJKOUHSUVBSLTGHMEVLVBGDYSGTYHXAEVCFWUX");
    msg.type = 239U;
    msg.access = 210U;

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
    msg.setTimeStamp(0.221532977919502);
    msg.setSource(27251U);
    msg.setSourceEntity(201U);
    msg.setDestination(55276U);
    msg.setDestinationEntity(145U);
    msg.name.assign("AUOBZNBIMJXFZLMLEQUIWCMLYGEVASNRWQFVPLUGRQKVEJYGCUPCXDJLTQNANHKCAXYBYBDKZVSGGJXKJWOVOKMEUSFKZTAXRCIDQTHUWNGULZYQAFTXIHJWEECNMBDIZGGRYHSPUASNQRTQDKINBFIXWDHOYFVVCDXDPHWMTCA");
    msg.value.assign("ALYXIZFDJENKHWZVBICCVFBRKEZQPSDTOMMMRHLKEFORZEEVGHZATWMZDRGGMKFZYKQWOCNBYMTCJYFHQLMDOAVWGNJKYLAHWGRTBYSUQKPZVVHAAECIDUQKUOFPBJXWVTILBDONBSPOSSQRXMINIVCUWMZNLCGAPHAGGEDPDUOQWSNXXLDXYFEQRIYHOXHJPSJSCSGPBWWTRXNLJUNAUFVFYPIBORZETYKVURHLXSEDQJBXUMT");
    msg.type = 35U;
    msg.access = 245U;

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
    msg.setTimeStamp(0.053848318184225974);
    msg.setSource(5479U);
    msg.setSourceEntity(131U);
    msg.setDestination(23231U);
    msg.setDestinationEntity(183U);
    msg.cmd = 249U;
    msg.op = 57U;
    msg.plan_id.assign("LYXPERICPZDCUTBIDFGRBLDNZGHUMSCKAAOCIPWNSYRPJBE");
    msg.params.assign("UQLCLCDXLOKDNFWTKIIIYKZGNOAIXHQPWMYEVCAQMRWHTHJ");

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
    msg.setTimeStamp(0.7249312925322374);
    msg.setSource(46943U);
    msg.setSourceEntity(227U);
    msg.setDestination(40487U);
    msg.setDestinationEntity(116U);
    msg.cmd = 0U;
    msg.op = 20U;
    msg.plan_id.assign("OKQAQTGHUGNCQWRXFINSJNPHSJIKQTHTBDWWUYSOBRDTC");
    msg.params.assign("EJHNYNEEMLCAQYFDRWNJBKFEPNYFUYBMTHQDAHABMTZTGRWKUQSLGHHBXKILXNPIDGPFXYWJDLVYRRWYDMIEYXAPVSJLKLAGEFWMOKZJLOPJGZHIIOZUCDPECUDFZVHIBBUBOQLXTCVUDTEQSZLOSNWXBQKDSAOTVEPVGFWSMMCASMXTGAETQNUKYC");

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
    msg.setTimeStamp(0.737020425665619);
    msg.setSource(44776U);
    msg.setSourceEntity(53U);
    msg.setDestination(16495U);
    msg.setDestinationEntity(47U);
    msg.cmd = 97U;
    msg.op = 231U;
    msg.plan_id.assign("IODMXQLJQCDZBBOEZUGLEDSKRCAEJOLWTTASSYZVIGNFECKPKHSQYSXLVHTYIWPJMAHEOIFZUXPRQZNWLKUDVDXCDMVBSBTG");
    msg.params.assign("ISRXWPLZQHHYZOBZPHOIKLKCSBXEWODGRFBBGIUEYDREPWPNRQDAA");

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
    msg.setTimeStamp(0.9749646098669525);
    msg.setSource(31840U);
    msg.setSourceEntity(197U);
    msg.setDestination(20900U);
    msg.setDestinationEntity(145U);
    msg.group_name.assign("OKQMOLYRYECEHGLQUBTJCBLLSXTYRWCHNVGDXWOXPSCXXCRKDJBEFFDOMHPMAMKZQZAWRIWIIPTPDCIKWJGYUXJHBVXQOLRIQIZNEISGAOJISGEZRYNZM");
    msg.op = 11U;
    msg.lat = 0.012879915231397754;
    msg.lon = 0.9793382262680007;
    msg.height = 0.9593802733823176;
    msg.x = 0.9354670291646667;
    msg.y = 0.7928194682032966;
    msg.z = 0.7592186600474433;
    msg.phi = 0.42475032460635154;
    msg.theta = 0.54380070521875;
    msg.psi = 0.5906649613705526;
    msg.vx = 0.11238789441749908;
    msg.vy = 0.4351948078351088;
    msg.vz = 0.5780564492815813;
    msg.p = 0.2835019932141809;
    msg.q = 0.1238032345030412;
    msg.r = 0.29224394271212606;
    msg.svx = 0.9999036976352521;
    msg.svy = 0.2567884422516873;
    msg.svz = 0.16889460802763867;

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
    msg.setTimeStamp(0.7217420252503237);
    msg.setSource(48293U);
    msg.setSourceEntity(199U);
    msg.setDestination(46317U);
    msg.setDestinationEntity(151U);
    msg.group_name.assign("KQDVFWQKZREVGEFAUWASYKDNGLHJIZOHUJZMCXBVNOLJPXDLDEOJBMTUQXSSIBVCMWHLABJNQXKJECLXHJRYHXACNURWLUEZSOIXGPSTWKHIMCCBUHWMFMGYVNVFFIKNMNQSZYRXGPTLKURFDRDS");
    msg.op = 19U;
    msg.lat = 0.7726446553876473;
    msg.lon = 0.3557676849386344;
    msg.height = 0.7098951875873164;
    msg.x = 0.611746900104844;
    msg.y = 0.8824829723511931;
    msg.z = 0.527394167959369;
    msg.phi = 0.09846729344253413;
    msg.theta = 0.35535008209507246;
    msg.psi = 0.5521922936545302;
    msg.vx = 0.2961792435422994;
    msg.vy = 0.1798673253875357;
    msg.vz = 0.6575946395629534;
    msg.p = 0.3389275171133035;
    msg.q = 0.4990028348589166;
    msg.r = 0.007618137724360596;
    msg.svx = 0.8600727560556627;
    msg.svy = 0.6125446593884847;
    msg.svz = 0.5521784045645461;

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
    msg.setTimeStamp(0.7328383640979647);
    msg.setSource(15475U);
    msg.setSourceEntity(225U);
    msg.setDestination(55374U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("YDBRKFXTKBNMAVXNEEHEQPWCXSUDJBTXCLBTOQWSNLZCWPHLQEYSSKROGFNQHBJCILVIQYVCMGKGPCXFJZVMPRALPIDKYMUPLYJAJVVAT");
    msg.op = 253U;
    msg.lat = 0.6255555206187426;
    msg.lon = 0.10818828203787711;
    msg.height = 0.5349726739026414;
    msg.x = 0.21838098581953513;
    msg.y = 0.34800969990962227;
    msg.z = 0.19464664197742387;
    msg.phi = 0.051197781699943934;
    msg.theta = 0.07831459721779677;
    msg.psi = 0.5666280295610849;
    msg.vx = 0.34054660661685576;
    msg.vy = 0.2904347015324983;
    msg.vz = 0.01367110593724119;
    msg.p = 0.7932191824050053;
    msg.q = 0.4329481448217164;
    msg.r = 0.6281744023974578;
    msg.svx = 0.23822711703143318;
    msg.svy = 0.120071084511578;
    msg.svz = 0.5174630466729282;

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
    msg.setTimeStamp(0.9906459761070534);
    msg.setSource(57144U);
    msg.setSourceEntity(222U);
    msg.setDestination(20102U);
    msg.setDestinationEntity(170U);
    msg.plan_id.assign("XTAIBKNWHJNFZXKTRHOSUAVTWVEPKIIJXGRHGKCJOXWOBPVAHQHAXGDHKXZZGWZBCTBDJNMANSRFGIUDXEPVIFNOILRBBDFMQYEEMWTIPCLJCLSWGPFKSBMYIQNVUWAGBOWHRUKVCDYSYGQQBHYPBKYLRMXRMEHJZJTVJTOVYGPOCCPEYWKNDLUSMSQNDDLPZIUMZOTAURARURNLEKVGUOMJNFDUETEYCFLXVP");
    msg.type = 200U;
    msg.properties = 254U;
    msg.durations.assign("EILMXNABAUCWASHPLGVTYARXXQXPUHLTZGQWMJYBBHPAYAONMYSOXUHOKBARLHHBSFAIJR");
    msg.distances.assign("KFVMGTHAQZISPKDLEKTASOCUNTVNRQPMVNVBQLACUHFBGMJQBEJRYHIUQTIVTUTYFMSRDYMTNWPROZVOBYWGWDMDQFBCXKXPBWWQZWX");
    msg.actions.assign("ZAGELLUXEHOAMVTSDERDLVAKLSHLJQXZKIFDJNOTOPVGYFEZUUUICTXENPWQRFZEEPFKMTIMDPWBQKZYPINMYVVJGIQVSPBJRASCNLZEDRLDABWTNPJRYYOKSWCAAXCS");
    msg.fuel.assign("UKLHMIHQRAJPOTULB");

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
    msg.setTimeStamp(0.09216995844018949);
    msg.setSource(5130U);
    msg.setSourceEntity(253U);
    msg.setDestination(48370U);
    msg.setDestinationEntity(180U);
    msg.plan_id.assign("DKQPSLPKHJVLEYOFUQQRABSCSMKUPVLWWQQIOMMGEKDZTWIEJEFTSXDOVDNUWPNZDLHGBGRHRVUEZCAVTEBCXHZWTYAFTBZAWTIEFQJSPLCZMNLRKFTPVHZBXZSXJBICXXUNKNSPNNSRCNGHLUJKYBSLRY");
    msg.type = 37U;
    msg.properties = 212U;
    msg.durations.assign("BUGLIUGNTUWZQWNFEBRGDNYCOKPDWQVYRBTUKKIAHFTWNZCWTBMXMETAWDXJALZJUUXWTPPKMLVHJJMCKNSSSREDNKHRJOZVZOGHSZFLJPCITIMQLMAFBRXZENHQVTIPRPFMXKVOOZXYOSPXFEGSTGGVIBHYIMMKFYEWWUBSULMSAQNDNQDHAJHOAGRECCEJPRXDODSFZQCXAFJYHQAKVHVLGFKXWJDLZYGUCUOEQYSBDPVYBILRYEITCAQOPL");
    msg.distances.assign("MDGWHZPSIHOJPKGQURAJOOKYCDRTJAWVODWKTZNNAOLZLNZGZQIMNRMDCSXUASXVUZQQXDFXRYLXDKGEPCXSQVFJP");
    msg.actions.assign("WWMLEYIZNTMXBXOROUD");
    msg.fuel.assign("KIOIHHEXNVKQKMEBMHMOYJPVLPSEOIBCOPAPUGLJPKCFFMSHXGTEQYBVK");

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
    msg.setTimeStamp(0.5574398010051688);
    msg.setSource(60258U);
    msg.setSourceEntity(80U);
    msg.setDestination(12009U);
    msg.setDestinationEntity(51U);
    msg.plan_id.assign("GEVDSGTBQYVNYITOMRRICWBXPLVJBCDQGTDFSTJGAVMXEMOLEHWUGCPTIIGIXFIDKHGNJYBOFUAPYQLKDFZODGMOAULNHHEHCRWHJYOEBQRKQEVRIYWZHMWRRLASBNMXUXAVSEOLRXPVDZZSVJZNKNNFCHSAPYDFDIZUTSCEGOSQYBVTPFOAYIUZUHVLYZBRXMEECJSUPJQQMKFPJAPFZBFMKNCCMQWXSBCPXTJKZUK");
    msg.type = 148U;
    msg.properties = 186U;
    msg.durations.assign("EGSFGINMMFDYPIBFBVROETGKQEUITIZUDMJSBWRZHCQOELHWGJLNYATRCABCWWVSMGYTIONBDECXHJZFVJTUJDXQHZFVKPCSIRMASKUUTXVNYPRVIYDEQPUOJUEODWXMPJDOWNEA");
    msg.distances.assign("OGYTEUYNGMTBHISMFTPARDQEPIIAYYEIUBQOAGJGWOBZVUEMGBYXIWULFKQCUZBEYUXNCBUHQNMHWODZAWFOXIHWWXREUKVRSBWXOZAJOTVJGRDKTSSXDIQDMJTIPNRRKMXVEJKVBCLZWMTCATCQNXZVKGJPSBLHWAKDPHPNZUFNLGIFQRAOICCAAECPTJZPFLGOVLHJBJQHLUFKDNSLRVYZDOS");
    msg.actions.assign("YDGMAFSWWSAFXPGHULZHJIATKSIBKNLVHFCFVDODTIVOLATUONQZFAZDCZKLVNJCQREASMRGPHSWFJGPYKUFMRYOMGFUJKUXTDLYEBPWRAKLTBXKJEIEF");
    msg.fuel.assign("PJDENTKGMOEOHGFDSNTSBNVHOXJXYGJLFCRZOVAZUDHZVYLQOFMNZRNHFKCSBEWXVDAXJVBNADFTPVPKBCAUFHHRCKNYLXGOELKUGINCSMEISKLKAXDPMYWCGAWDFGOZWJCYMDJATGLEXBLRYHJYOPWUVIIFWCQMKIZQUPTBMAJRTBYCMFRTQPTQTYEEWVIDPUXWUEXLSRUHPPXQURZIZLRZMSCIOMOBKNQHAEVBQNJIYVLKHWQWGSRSDBT");

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
    msg.setTimeStamp(0.5677876557815061);
    msg.setSource(41299U);
    msg.setSourceEntity(15U);
    msg.setDestination(60643U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.7950223195801863;
    msg.lon = 0.7180751751054514;
    msg.depth = 0.817615320487053;
    msg.roll = 0.14287889383653496;
    msg.pitch = 0.8998423692263147;
    msg.yaw = 0.7453022909262229;
    msg.rcp_time = 0.05125464023916759;
    msg.sid.assign("GOHGYUMDUPSFSXUDJRYYTTRCUTXOHNDSZVMNSNRRHBFBQEVCBBUVRYDGDJSACDEIKUKRQQJLIKMWBUGPZGFXVGXMABVZUGOTLDVBNJPEULAKJYIGKWMHQPEVERJOVLEYLPPNPTFATNOXXVCBFZKKFDNHPQTARSZCCVJOMHIBWLZAFFKGSQIAPLLAXNTDZOLHE");
    msg.s_type = 11U;

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
    msg.setTimeStamp(0.06622906162733078);
    msg.setSource(51479U);
    msg.setSourceEntity(160U);
    msg.setDestination(10973U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.7364584583338736;
    msg.lon = 0.4608206738228615;
    msg.depth = 0.9286354344765608;
    msg.roll = 0.7740452153722984;
    msg.pitch = 0.977015905558887;
    msg.yaw = 0.3239675125519754;
    msg.rcp_time = 0.5109661415595482;
    msg.sid.assign("ZFBXTCOKWUCTXHBNNCPSLZBUXZYTHFJVQROUWGMKLMDSEIDZSCQGVEDDJTBVQLORQKTERBJFDKQSPGNVAJRXZHPMNAYNBPLGCZIWYUAPWYZIUDFOJIXHKTGEOAVRREQLAVJNSJPWSMQCXSNPKKSGFAOIKEDBTLLFADZXYRCEBYARDUMSIKHFEORLTYCWMBEUAYMTQXEOMZXMHOMVUHFXIKYWGHUVHOLNUJGVCVHQNQPGPZSJRDFYFNPAW");
    msg.s_type = 184U;

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
    msg.setTimeStamp(0.8593531285740759);
    msg.setSource(13759U);
    msg.setSourceEntity(207U);
    msg.setDestination(44932U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.012488303620175056;
    msg.lon = 0.21947092484035458;
    msg.depth = 0.6197608245840373;
    msg.roll = 0.7453841135702236;
    msg.pitch = 0.7108367398416486;
    msg.yaw = 0.1125359960059582;
    msg.rcp_time = 0.15596164051362738;
    msg.sid.assign("ACGPJIAZONQBMKKTEYQTWDXBBGLFHBVZOZNBISYRUEXMKMDOMYJBNRVHHBZFJWTNDWYSCYPWBZRUJURMZSQVAHXAEMKLIVAEYNOQRWIJUNDGMOXUZOM");
    msg.s_type = 2U;

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
    msg.setTimeStamp(0.006949961147382666);
    msg.setSource(11833U);
    msg.setSourceEntity(87U);
    msg.setDestination(5678U);
    msg.setDestinationEntity(88U);
    msg.id.assign("MDHNZYEOUVTAYVRXQHODJLSNSVAWDDOALUUOHLSAQCLYTCWBUZQJIETPMFKFUMYIPHWOTGNFBNQKROBRGCTPDZECHRTOICPIDFBVUZEXSQSANAYXWMCDDHBDYKKBPZICIXEERRO");
    msg.sensor_class.assign("OFRYTABYGTNVKPYDHFGFQCIKBIOTCSKWGQDOBOKPFXPMNBWPVCJGAXRYNPIAYKXUDAXGNALRXXDLCHUQTTLXMHJEAGUOOCLWKQUBXWLZOK");
    msg.lat = 0.8172708159064617;
    msg.lon = 0.8695080506796473;
    msg.alt = 0.5009534242303734;
    msg.heading = 0.33014923159229304;
    msg.data.assign("WODZUDJCZYXUHHADGWBWIDSHOURTAQDYIJEVFZLITBOLERTZUBIHYJPLXDONPITRGZFYFMSKCVSDJHAXUIIMLXTNCWHWKDFIVVUMRRZXGNZSMAWYJETPTMOSPUPRQRFHDJCQJOLTIQVQECXFJJFEMVLBPQENQBBXSGVOGKTLBNPOKGKFYPA");

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
    msg.setTimeStamp(0.134782536671049);
    msg.setSource(16307U);
    msg.setSourceEntity(47U);
    msg.setDestination(30377U);
    msg.setDestinationEntity(204U);
    msg.id.assign("ZHHEKVAAJUZLVVMVTIAWCSKJTHEQTTOOOWSEAXXSQXBDKHLCIBGDBAHBCJQKDEOBZSPHEYGBKYXICRMFXQMDWRQBWMMRFEPYFZPUTOLUERNGIS");
    msg.sensor_class.assign("DCUZHZNTNAAZMNQQSKDLBXKRYPVHYHTWYLYXQCLXKHDKFYNLKKEZXIIXUQIAUXSXRPCMTIKZICHCOSTOMKBCGSPFBFPLGRUIEONHWGYJFRBARWOGCDLFVEHCBDVVASEBJHDSUEWRYCUIMLDUGPZVFYMSDLJMWDOUEJANA");
    msg.lat = 0.6970942902952622;
    msg.lon = 0.882015357330587;
    msg.alt = 0.9155782596608755;
    msg.heading = 0.45248805460115804;
    msg.data.assign("SRVIGBESLEKTJICQNMBMFNDHOOSYECCFWXZGCQLAVLOMHOYTTLPTKZULWXNAUEUFCMORNGVPVWPYUGV");

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
    msg.setTimeStamp(0.8505171870777064);
    msg.setSource(19505U);
    msg.setSourceEntity(104U);
    msg.setDestination(47264U);
    msg.setDestinationEntity(26U);
    msg.id.assign("OMLOSBLDXWCPRPKCLJDIHHIYXRGFDZFVLUOFAPKQUGRBDLYWNNUGOSJSAFVFQZSXPALJGFQMYPJRP");
    msg.sensor_class.assign("ROABDPRRSGYVVOBCKZWZCYEGKULUVXMNMZTJCJTGELBOLAIVRFMNKIMZKVFFGMXCULSYUBNKPNBAWIGHYHSECNIFNCYUWMZPASQTPLCUWQOAGLGQABOYTWXIJJORYKNREDSUAOSGCXQIMTFVJLXRIQHXAYKWZEHPDHUTOTFDPHYQ");
    msg.lat = 0.5790465079489211;
    msg.lon = 0.8140722103187426;
    msg.alt = 0.47145898933841335;
    msg.heading = 0.9368539856755704;
    msg.data.assign("LVTRZKSGWDURJTOLVEUSDR");

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
    msg.setTimeStamp(0.9909933344416616);
    msg.setSource(35854U);
    msg.setSourceEntity(40U);
    msg.setDestination(26642U);
    msg.setDestinationEntity(65U);
    msg.id.assign("IBZVGOOWSPMWVLPBQAVYVIDBNOQIYLLASWWZAOCLRNFPTFZREUCWRDIEEZMXVLVIXMGLEFESXJOCQNIUMFKCCJBXKYKHHJYFSLDMQPDNXVSURFPDOABUHXKJMEBAOKLUDRFHIVNPBQFTUYYLEMBZWTCWUISCQYQRHOITLQZRSQKWJTAROWZMTCKGJHYGCGNRGZAPOGQTKVSISMBYUZXPJNEPNXJEDH");

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
    msg.setTimeStamp(0.30857381340223167);
    msg.setSource(38617U);
    msg.setSourceEntity(245U);
    msg.setDestination(53646U);
    msg.setDestinationEntity(10U);
    msg.id.assign("LVPFPGJZWIPPFXTPNNDVOFWTJCWWXADEBHUFDIBZSOZMBIPAQXHQTZNRZMNCECTBZKTNYCOLIQGZMGERGHOYBW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PZQGLCNFHAJOYXTIZJGRJTYAXGFUQDCBPNLKVMYQTYRNROKUYBBNXZDPWTQWBRVBCIVZIXFUKUBDZDDFIEJIGWSVAKVTFKCJPKEHTAESDLWTPDOIXRHCQOJMIRMCFAYFFZT");
    tmp_msg_0.feature_type = 2U;
    tmp_msg_0.rgb_red = 211U;
    tmp_msg_0.rgb_green = 159U;
    tmp_msg_0.rgb_blue = 23U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.45403603109459423;
    tmp_tmp_msg_0_0.lon = 0.44979002498770115;
    tmp_tmp_msg_0_0.alt = 0.8384969361107495;
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
    msg.setTimeStamp(0.6824994569684342);
    msg.setSource(19926U);
    msg.setSourceEntity(254U);
    msg.setDestination(9938U);
    msg.setDestinationEntity(232U);
    msg.id.assign("IAWFNLKBXPUDQGNJNHPVAVVZOHGIZFPSUKFBNYLXPULEVRAUOWHNRVHCCCTGMFIMDYPOJVBQPQZYWQSLXVFEDXWIKTLWBPXKTPTHBJQVDKBDMWKSNMKHUKMAGYLCQFOEEBFQNXJMFALBAWQACNRXRWRTQDDLSJRSZRAWEOIJCJEKTRSJBRCEJHYRMGTEXTLV");

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
    msg.setTimeStamp(0.027977646478265394);
    msg.setSource(59801U);
    msg.setSourceEntity(112U);
    msg.setDestination(18792U);
    msg.setDestinationEntity(117U);
    msg.id.assign("FEZQFOPWFYMQAXGAZPMZRORLJRLVKFMIEGKSPORPDIXMATARPCTVWILXJJSHWZNTMYSSEDLMEARTEJNSGAIRGSRQHXBEXQFWJIHOYCOKMTUMXCEGOOWPCWQLUXGBKDHBZYLVVELEJQFWPUUNIIBYZWCBPRIWQHUZNYLKTVHKHADBVDRFPKBXJCIENHUYYCHVSVGCUMSYTKSDUNXSAQBYUOONZFKWIGCDBDZ");
    msg.feature_type = 124U;
    msg.rgb_red = 113U;
    msg.rgb_green = 41U;
    msg.rgb_blue = 56U;

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
    msg.setTimeStamp(0.03797038075925141);
    msg.setSource(9879U);
    msg.setSourceEntity(124U);
    msg.setDestination(29804U);
    msg.setDestinationEntity(114U);
    msg.id.assign("CVVJKLBTLGJSKFVTIHSCGHNYGNUXWEEXCVPIBKELMYHATEUNORDEMUHDQIPPGXRUWGZCQSWMVIMCBBXXKTDVXUEXNUOINODZEJMNMCTRTIGXBMFJMSOTYQJQSDFKIHHVJO");
    msg.feature_type = 181U;
    msg.rgb_red = 187U;
    msg.rgb_green = 9U;
    msg.rgb_blue = 166U;

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
    msg.setTimeStamp(0.498191418066821);
    msg.setSource(35202U);
    msg.setSourceEntity(76U);
    msg.setDestination(27526U);
    msg.setDestinationEntity(181U);
    msg.id.assign("YOLUFLPFXAZSXWIMDBCVDRCJKBJMDNXPBBFWZBF");
    msg.feature_type = 7U;
    msg.rgb_red = 12U;
    msg.rgb_green = 236U;
    msg.rgb_blue = 118U;

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
    msg.setTimeStamp(0.16423592442448398);
    msg.setSource(32762U);
    msg.setSourceEntity(56U);
    msg.setDestination(55501U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.48095395920796646;
    msg.lon = 0.9752098657322238;
    msg.alt = 0.5370591067373887;

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
    msg.setTimeStamp(0.1797042199036435);
    msg.setSource(64950U);
    msg.setSourceEntity(254U);
    msg.setDestination(39372U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.4324821018817795;
    msg.lon = 0.11427518884340893;
    msg.alt = 0.321204409953729;

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
    msg.setTimeStamp(0.2632184462366709);
    msg.setSource(57409U);
    msg.setSourceEntity(8U);
    msg.setDestination(23754U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.2805774333812544;
    msg.lon = 0.9228450458500699;
    msg.alt = 0.26390807474289635;

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
    msg.setTimeStamp(0.24350914416738378);
    msg.setSource(51366U);
    msg.setSourceEntity(37U);
    msg.setDestination(41584U);
    msg.setDestinationEntity(40U);
    msg.type = 43U;
    msg.id.assign("UZBOPEVTPOWYNESYTRXEHMFABOVVFUOGUWZGHKEIHXIQOZFSVNKWKOPBILFXTMYQEERQDMAXREMPAEWLABUMJTEWTLBFBNSXGHATLIWSVICFZTXSUHJBVQXMKGJPUDPHBDJAMFZPRGRKALQGEWN");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 124U;
    tmp_msg_0.angle = 0.7356895922124496;
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
    msg.setTimeStamp(0.33542774224382355);
    msg.setSource(45887U);
    msg.setSourceEntity(51U);
    msg.setDestination(10297U);
    msg.setDestinationEntity(89U);
    msg.type = 141U;
    msg.id.assign("XFQWLKRDIUPZEMXXLIHBDOEDIYHDMMHFCFWMVLFBZTJMWONNHITEFNTUGZSUSAIVRSNPGUEYVJYHJZNCTPSUCZGVPGMAYAKXSPEUWTQBNWBCRZWVBMNLJTAZHFKWYRBQGOOKRVDRWNPNGFQZIKLAPJLQJB");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 13710U;
    tmp_msg_0.value = 190U;
    tmp_msg_0.error.assign("ZEBWOMNXMIPFAPQVWZVWUNMJMMHMFHXUDPAOOUIUQKCEEVTDSYYXLGROSYJCBFXXJMGIKTVKUMUHXTINZYAOSLYKKOWJEYSIGPMPDWCLTXVZBUYKDFEBNIG");
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
    msg.setTimeStamp(0.8193876254780614);
    msg.setSource(14699U);
    msg.setSourceEntity(139U);
    msg.setDestination(39102U);
    msg.setDestinationEntity(154U);
    msg.type = 143U;
    msg.id.assign("DVPUJQPBLKTQTZBJYXCYAUGTNPSFNVOAFBZONNKADJAFLLBVOLDXIZPETXGREXGTIYMNGWISTRUHKIRSTQSYFSQNNURXKVTDRQOBJRWJCRCJH");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 253U;
    tmp_msg_0.range = 0.8856928147327245;
    tmp_msg_0.acceptance = 253U;
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
    msg.setTimeStamp(0.16799594946764485);
    msg.setSource(19107U);
    msg.setSourceEntity(68U);
    msg.setDestination(59944U);
    msg.setDestinationEntity(240U);
    msg.localname.assign("COLDIFICFBGSAPNKWPWQJLRBNFIXHHPZFNSMMTZZBKAWZZYIOFGPTRATCOIJEXABENFXLDVSHLFKVVUBGRLXGVVDDOYQXPYDWPRQBWSTVKTTJFNLJMDKYNPCLUYUIHVZQPUUEUVUGUROPWZDSHQNBAJAWXIBCQKQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MAXQZGXHYFAZJSNDCMZWZQTNJNRQQRRRJDUCONOUK");
    tmp_msg_0.sys_type = 117U;
    tmp_msg_0.owner = 27835U;
    tmp_msg_0.lat = 0.4349648282402305;
    tmp_msg_0.lon = 0.8024605494420693;
    tmp_msg_0.height = 0.8821843590042572;
    tmp_msg_0.services.assign("BKQHMILPRPWGRFQELNJTISEBJGQMMAZTEQMPSCZYGTKTQYOZVPSHZDLBLMSHDARTDIMYZLVLIYBBAGFJUPFHKDRLGWPWHXNKBLJJLAXCF");
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
    msg.setTimeStamp(0.8166918820354842);
    msg.setSource(47703U);
    msg.setSourceEntity(139U);
    msg.setDestination(22327U);
    msg.setDestinationEntity(209U);
    msg.localname.assign("RRNHXHZFSUISBZTOPZQJOGIQJVYBELKCXVAEPYWPWXQIJKUBXXMTAMIXCNBKJQLKPYGLCHCWSEDGOUCZOEUIXNHKHUDBEXJVQUFKDKZRQTGZTJSHEBRDSHKNHRVGVZTOAEPFLVYEXIMLXEWGYCNAWGWAMCVAVRYYKYQMJEODARILFQHBFDGWYQBWCRJCBLSSNVJVWLDPTBORFRANUJDOIMSAY");

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
    msg.setTimeStamp(0.5942270448100468);
    msg.setSource(56999U);
    msg.setSourceEntity(66U);
    msg.setDestination(63766U);
    msg.setDestinationEntity(196U);
    msg.localname.assign("FZWXTWTUSQWKILWUDPMHQJPEGDQECZSTALTRGBOYYEVMKGFAPNVVFQQFKLDFVHZJROHAIKRIWAOPYXSCEBAQQYILRIBLGMORPTLDCZSEAHIOYUVNJHXWC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LFTUIXLAZWYSWKGDJQDRQQRCPOUGPQANMHJIGXWXMQYNSUNLVYEXNCBKHYYRJLGFOFZQBTOSAGJWCEECXYVFYZHPHPRJCBBRWDHVFVYLIPXPSGMNMFOXJUPTQGZLOCDDLRSEEVGBFKZDEWHHKMD");
    tmp_msg_0.sys_type = 6U;
    tmp_msg_0.owner = 9462U;
    tmp_msg_0.lat = 0.4218697699220344;
    tmp_msg_0.lon = 0.33909825650415426;
    tmp_msg_0.height = 0.1766125436341861;
    tmp_msg_0.services.assign("OTFZJNFYUEAILRKTYCAVFFEUBZAARHEAZINZQAUCUXYXOMRIMDLAFDOVCGWUWKOPDXFNPJXKJITTOSKQCJCQEEWVQSNSEEHWQOGIEOTPXJMQUMQYUPDPCDQLAGUHTJGRGTFRILSLLLBXVONUFMPIZHNKDQLTGYRWXNDPLBBSYBVTHVTSJMGYCEZVWFGXLKPIVXSMRRXWJJUBDCYAZZWOSSRHPDGV");
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
    msg.setTimeStamp(0.8301622559995968);
    msg.setSource(61641U);
    msg.setSourceEntity(5U);
    msg.setDestination(22747U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("DFXQLIYEUBVWYZHZFTQYCNBSONWQVKGEEMGXBHCHVDSULXMVIOEMJUODIEBAXRKTWCYNQLYEVEIFKXHTOPZBNAGRBFA");
    msg.predicate.assign("FKRMUGWLAOUNEGICFYHXXBZYCIPVMNVLURLYVPDHLMEEOXVXOKXRGUAQQWOPTQHXASDBDSJCBJXZIRORNCTXGNSLPFWSIJSGADILWJBJSQDPIQADUSNFEQZKBUUCGMKTAXZIIYPEJIYCAKBH");
    msg.attributes.assign("WOIFNHCYBCYNATDVFINPXRZNIDISUSZAJWDVSCRTKESXUPMOXBRBOPURRFAGTATAJFUJGBJODKPCZHAYNLQDEAETBPKWUGGVSZEYN");

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
    msg.setTimeStamp(0.09565214804145439);
    msg.setSource(64800U);
    msg.setSourceEntity(20U);
    msg.setDestination(64929U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("NYUYAVIRKFITINRVHFOAJHFNEUZRNNCTTUXEXUKCUMUMHZINPROYEUAUXYJGVJTAHFBPKNYBMTOREWZLHGZDFQJVRGYMRVBAUODTFAMLQPDSPIQQMQWGABSHQSG");
    msg.predicate.assign("VMRTJGYKQFOBEKGADWMILFUTJMRXVYZJKWAQLEJZGGHFZHBOTNJWPZQCGWQRRJMYDKFDMVSWUJESIKFIQXOINXFDYTUNPTFATMESIWYADUUHBXBJAWEMJDKFPVTAPDRSYHSYBIQNMVCZLCNVPGMCE");
    msg.attributes.assign("ICAXCATZWRZCSOUJVDOLIRKDMPZXAXVAVTMBOGAKQEGQZKQPYLHZQBPPEHNBXSSOUYQNQISLHTMRNBAPYEULITGOCVMRKHNQJHJEDHTZBNNOJYDJKXYTMNANYMPVLSVTUVWTDFELSWEFIOCFGOXWYWGZZUBMLCRUCKXUVUZJOYFTFKMCRJBDPFXRBRWLIQHWJBDYFXSFWLTIDJHQBGWIQVNWCXGR");

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
    msg.setTimeStamp(0.07775876388295311);
    msg.setSource(13751U);
    msg.setSourceEntity(176U);
    msg.setDestination(6498U);
    msg.setDestinationEntity(20U);
    msg.timeline.assign("KHAOJMZLVAPJEUCUXBBMGPTZDUMUEWZZHYBEYFNNUIUORSEWXISDVWRPLLJKWKSNKIBCQHQQTKTRTZOJDFNXCVBRUNLMVMPODAUSRDTIGOGPCKQXEOEIWATPSJIDLCVIJWMDHQNCHJRFTPGJXFYAZG");
    msg.predicate.assign("PSRKGOQUGBLZKOQAJFXLPZJCGORMZRRFUAYDSTSN");
    msg.attributes.assign("SFYVBTQDUXECMWHSXWFUEXOQGLXKDVDEIOIAIJILLYRFPSVQWFJLPXFZWNQGMUKFCSOWJPDRBACNZZJAUXRAAQULTNHMBZXVQOHPLJFPVCIBWIXWRACNWAHIHYRTGVKOYCESKDRKLMXNFZHRUWZECVGZXESLSSSCKYTUFNMJMKESAUVYGYPGHUDHOYPCGNTWUYIJNBKTDALTPLERBBOHOJMDMBZ");

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
    msg.setTimeStamp(0.24527316267569366);
    msg.setSource(16874U);
    msg.setSourceEntity(235U);
    msg.setDestination(32002U);
    msg.setDestinationEntity(10U);
    msg.command = 230U;
    msg.goal_id.assign("MZQIUEGZLXWZXDQXXLBCFKHWSWPWJVNUAJSTXGMARPUWKGPVVFJHEZXJCOGYSLETJHKAECNZNYQEBNQHENWAQKUYICQTWBBUQROMROGQVJURZLLKLHAFRMESCPFRIGAUPOIUVPPLYNYGJTYAPTZXDBPWNEFLMZYNZDYMUHOEDRLMBRBDVYCQDMKFRETBHSJNMBSVVFXKVBFGDKATLODTWHTIZQCISGXCDSCOWIKOJANYRMAODHHGTKJX");
    msg.goal_xml.assign("BYXRMYWPIMJWCBBZDRVAZDDXQMKUYIFJQENTIMXOJDOFGPRJJDAWJZXPTYPLCQUNCJRKHKOLVHDHLZPNGMTENUZZCBFLMASENSHHDGLYIAWIOCDRTEKNGOGZEOJCVMWSLKUKOLEPICBY");

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
    msg.setTimeStamp(0.04613295497531267);
    msg.setSource(46408U);
    msg.setSourceEntity(203U);
    msg.setDestination(64830U);
    msg.setDestinationEntity(135U);
    msg.command = 118U;
    msg.goal_id.assign("GYHTWQHLWVXXQLLLTXDIHWITBYETADZJQDOJKRSRRAUVOABLHWVSEIGBPWZTCTOIYQDJFBMXKNXEGZLVPISAZUVNBFWQZDUSEPYREFOGSYWLGGSFCVUGFFDQZQDXWYBQQDZAAIMNGKHODKLJJSFJYWCREIYXWHERBOTCUUUPSNEBCFRMMROKCJMVVPKBRCXTDJUMHVAOOYGPNBNNULRIMMJHKASN");
    msg.goal_xml.assign("QLTAVPOXKHTOIQZYSENAHICKEQEMQRBSHOHXDCYJTSKPRCIJJJAETUAICPNYWLKHVXGRMCDMESGNEKLOZLFYMCCQGGFJNRAYYLVWUGMUJGRAESFBOPP");

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
    msg.setTimeStamp(0.3608453351321248);
    msg.setSource(17942U);
    msg.setSourceEntity(45U);
    msg.setDestination(35083U);
    msg.setDestinationEntity(145U);
    msg.command = 97U;
    msg.goal_id.assign("ZJIAEENRLTEEMBJKNYCJJPFTEGGHFQSXHXUGTWUOONMDHIDYVZZXTXMKWPGTPYJPFHSVZCZWCXLSMKSNPTQSFSNCKHTUPAYBATZKVLULIZEYWLDKQFVBMFDHOWPTWKXKDURQNZJIWDBJSFGRECYPCPRFDQEOVJUXYAZKQMOGCOGOURICHQWYKSOXQLFVZGRHVDQUBLABMADWXAOIUSENHUNRCLNPATBIECRAYOWBVGMXVJAJRIGRVHQNLFBY");
    msg.goal_xml.assign("MTINMOVCQYXDODBIHMBPKIXRLGVTHBXBWEYCVQQPGHGPDIDAUAGEPHQEOZZEGWVPYGYVZWFXTGYRLSPSBMFUVMSJYLBJNFKWLDDLJMZVMIYVAOAQARDJUQQUURWZTFCKICENSFENFXYTGCQTUWJSALKRZKOALTRORTESJTZHNPBZPRKWZLNJQMLKJHJUVDFPVXBAISETZOXFDBILFN");

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
    msg.setTimeStamp(0.6650587968939394);
    msg.setSource(64228U);
    msg.setSourceEntity(90U);
    msg.setDestination(50358U);
    msg.setDestinationEntity(25U);
    msg.op = 68U;
    msg.goal_id.assign("IQTFXBNAXSTSPUROTJLZIUONVTIAMXFJWMQOVGTCKIECNZJULSODYGACKOXMCSYOBRSUGRGEDXAUYZJFILJGSXINFVECZJZJECRYJBAKVKOMSVKCQQFDAAWYDKGPBGQBZOZXBQLBFPDPPICMYHZUQRLUZWMIPXDECHPKGKCRMFVWIFFXJEBHHYVWHNYDNTOZDNKQWWHQA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ICCLRKRQHGYAVIWTVURPOHULQNZGMBXCJBDWNKNRAVYWS");
    tmp_msg_0.predicate.assign("VTLQHKYBQKJDROBFSIYKTFKOFKKUAYBMWHDOLNMITNUQHVBLSJCBLLOWPRPPCXVKYFXGWGPXBDJDDACQINWHJMZIFCGVQYOPOIWGSXPJTHMHDUREDRLZEKZKTEIAOGDLTWRSVNRXELXXSMNIRAQGEHFSQSTURFDRUZENYCCJUWQZGTOEAMNBZKCAAL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SBLXUNPWYQTFVHWJOXZQGXSZGBOEHQJCIJWHKYFJVMMUSJYDRGNUDXASWTNUKPRL");
    tmp_tmp_msg_0_0.attr_type = 242U;
    tmp_tmp_msg_0_0.min.assign("WEBMLXRAECWXJUSBPZOCUTMHDHERDNJPMHAFBDNLYWESFDKZHJCIIXUMPYAVSWNFRRATKVSNVNUVG");
    tmp_tmp_msg_0_0.max.assign("COCVDWGMXVVWSWLLJHUKCCGFKWRTOBGYEOPOZKYBLBZ");
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
    msg.setTimeStamp(0.5387445615379475);
    msg.setSource(9194U);
    msg.setSourceEntity(181U);
    msg.setDestination(46506U);
    msg.setDestinationEntity(89U);
    msg.op = 119U;
    msg.goal_id.assign("HXZESDOLCSVQGTEDPQCIABODYHAJNPBUISWSTFUEJZHEBWCYEKZTLZDRWNZQJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KYHKNPUJNBDDUZBPTVMQSFLOEMCJUVNNBVWXKYJDXOHDCBEVAUWHXPJJYVKCFCVTAMPZISUMSBIGZGIJDCSOYPXABUHLWEVOOAKNRICDIKZRNEDLZKLTFSEGWRLNDSXTQEIVATTHSPQRFBXZBLOPFRAJUQFXWCZHCQEREGRSMBYWOSTGDITVXNQPXUGHMZVFATHIOFNDTOYSF");
    tmp_msg_0.predicate.assign("UHDZNEHHMZAZRBJWCNKHSRERKYUOYNXLQBPPEHYPIIWAVRCFWOTLXOWFXKLHMQKXQCTAARYZJJHUSTPUJTSTZQYCLESSWFJTDSODGLVEJENGBPGEXFCRFSKIMBPIHLTKRJVIGMYERPBPNGNCXLUQWCZQBAYVDVOGDVWOQBQSCXBFYNVKPQGHMHATSIWDXMWTXAMIFCRQNZJKOEOGMFXBIKL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GKMSATHNYSMHPYBFIYQCDHVKEXZVTJBLDBGIHWUMRNUTOAEMEWCWONBORUEJXLRWVMKRXPSTRSSLZKMWTDNIFCGVDJDTOAODOPUVPAAZFRXQLEOLZCVBCQLVTXXIQJPGMLNIKDQUVTSYYZWYFQMEYKKIZNYRDUFGEJJIOGUNTVBAHWRZBPEQJMENIYCIFZXFHDWBASJKKQHPAQV");
    tmp_tmp_msg_0_0.attr_type = 85U;
    tmp_tmp_msg_0_0.min.assign("LAPDDQUAHDRQLTCOIJSHBIVCENDKTSIBWJMUMOGQULYWDAXUAIYHMXVCJWXLIJFVMQFVMQWGBYYFCTGBOGKPVYGHWXALRQEFWLKNAPFMMI");
    tmp_tmp_msg_0_0.max.assign("GIENVLPXRTAGEMNMRUSUXQSVLGYBZWGBPXQCKEAMIFQAJRWJPRDMQZCOHQVVGFKDAFAXSWIVJEHSUZDMUCADYXHFPTTPDWPJTTEWCQWOJIBJSIQIBDTKECYXOX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6396728120338318);
    msg.setSource(26521U);
    msg.setSourceEntity(101U);
    msg.setDestination(57795U);
    msg.setDestinationEntity(84U);
    msg.op = 248U;
    msg.goal_id.assign("AIDHIHNVTGZCOSLYWKSMWPNMESQJNYJGRHMBWWFRCGZCCMQUEMJUOEMLPHPVFFBEDFELDSTRTIBQBOKBFVCALVXKPLQNZIDIYHYBMGGTOLFIBSHMSQACXCAQTDQWYVYREKADEPQPPBTXOLXBGWTEYUDNWSJUKWESXCGZZJTRTZQUHASHXAQKMJAWXFTOVFNIXULRIVANZIMOZYU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KNSYZETFQQEWIHMNNTPGLMEJLJEIOYXMKNFSJIHKECHIQUWCVUAJUBKRUMNSQDMBPLVSYZZZDWERWHAMRDKTWLYNDXJVLBYMQPCIPEHJAGHOSADPSIKMEZGTKUYMJCFOGUQVCXTFROWZXNCLRUFOGGSCXUHMWDTOEQTOFDIUKZTWXGXGNVLYSRYLHYVPAFQBEWAAKPKFCHXPZOPO");
    tmp_msg_0.predicate.assign("VNMBRPSXWJCPTZCEQHEXSVWDEDQTUGTRSLHBWATVZOYBYFIFCMKQJGXEBWODPJERMCZRHXAJRQLSXLMSUBGBDROQIAVFNGNUHGHPPSYYGBJASZVTTZRCYFGWPAWDRMZBODZJZJVVLPQMICCLHSLIGIMYXVUAXTIAIHIOJFURZDCNDBNFKSAWKLUOFETRFFUKKQNXIHZDMHFNJNTOYUNUYJVAOXMEUQDKKSPK");
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
    msg.setTimeStamp(0.2840367115773016);
    msg.setSource(12758U);
    msg.setSourceEntity(41U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(6U);
    msg.name.assign("JIYANGOPSAKKHNILVBBMUAZYUFBDWWAGGKGNTWDEVKLDAQVIBTRBMBSRTTOXXCMQCAUPQLEPVNSPUOKTQUQACEKZSZYUVJWFDHVUCARIXHRGJFDEGZNFHVHXOOLEZHSYRUYKPXDFFAIQOGQZJMGICKHBMTLLEYO");
    msg.attr_type = 214U;
    msg.min.assign("NXNDALOOGFFNMUVMUSAQOHXBRWBARCTSLJPFOMYFZGGHLZMDMIPEVAGPKTMBNUGGGCEKEXMPNLGVXQAJUATWVKZRYICRUYVXLASXJJWDFKJVNHMEVIUBICXMHWNCYNHDHEAQWGZRKWOPKBPIDUAC");
    msg.max.assign("YPXZMOOURHDKSLZOCXHERATPDBIKRJFYHCBPOLARNBIJZCDNLOYQYQKUBUQQTUMFWLPTJQAQZWQPFVDEDEBNHHNAVERKUVQAOVMKKMTGNIAJICADGAIXZZCEJBFRGTDRTBCNSPCUOTQYTGLOGMSNIIAEJUIGPYSLWXYEMDVWFPLRWKSXWFRZIERHTHCZXWDMQFGZXHFKFLVGYJUSXYVEOMGSJSNPCTSNOBNMWJLVFIK");

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
    msg.setTimeStamp(0.7584272058778478);
    msg.setSource(20546U);
    msg.setSourceEntity(48U);
    msg.setDestination(31073U);
    msg.setDestinationEntity(253U);
    msg.name.assign("AUOTZWBLEAEXTKPAOWFXRFULNQPHDSMVTLYWAOBODFEHOIYHGPRWHLORQNIDNJPNSVNNJJNWVKUJZBSCKFHHGGNYUSZJYVWTIKOGCRBRCIEBXGEPUKVCVEPXXEQDVXDJTYMJEFBVIKGTIDSYSFNZAODIAWMHTYUNVHPGEFMTKADRIKTQRAXZTLKMRXCLYJHL");
    msg.attr_type = 147U;
    msg.min.assign("ZUVBIJLRZGYJKXXVRSJGWQQVMIISCNO");
    msg.max.assign("HSLRBRXTQVEUJBGFXWOVOSYEPWRHZDKCAHTNWNSGEOEEI");

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
    msg.setTimeStamp(0.19953484282806377);
    msg.setSource(31388U);
    msg.setSourceEntity(104U);
    msg.setDestination(14654U);
    msg.setDestinationEntity(195U);
    msg.name.assign("CLETITZPBDIQZEIPJOXYZRHOQACQEQGAMNOMVLAJHHLSZQAZJPIBKTGKDXQPMDJPABAYNCSYSRVSCXVKKCEZQICTNLCYDCDFJ");
    msg.attr_type = 191U;
    msg.min.assign("VAMKXXQGFPDXPO");
    msg.max.assign("WAUSRXJNHTICTWGIHIAMNDFIUOLYIENXIJFGCEEHWJZORMEQRJZXHFSHPGDHLJYATEMYUTDLBTPNPOVQBFPPIOBLWVBFYVNWNTTYYQZURISXCHOGRQQKVL");

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
    msg.setTimeStamp(0.49283483055119315);
    msg.setSource(51377U);
    msg.setSourceEntity(15U);
    msg.setDestination(29490U);
    msg.setDestinationEntity(233U);
    msg.timeline.assign("KEPAIYDUOEGRVOXNQUMIVUAKLLEWNBMLFEGRWLKKWJHPYACXVJJEMOCWZSIVVTGQGPRFQUMCKGDJVHWLXEZUCBRRDSOXFSAXFFAPSPKLGFTBPIHTBNNDHWNZPITFBCH");
    msg.predicate.assign("XVVHFAURJWLNBCDTGRTLTIREAYUTRJESABWHPUYQQMZNTDDQCGADUHMYJRUNNVLKVVJLBVMSSXTYEHRSHACJBEZLRFOXFMEVINIPORDHFMZMDAYZTPZWXFCEKYXBSLGQBQPPZOYVSJSKFQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OHYOHIDEXEHGVTGDSAZHIJLYQAEGWVBWHSNTJWISNDPNZTYJIPVQTMUBCLZWFUELNFCFFFHYQYP");
    tmp_msg_0.attr_type = 238U;
    tmp_msg_0.min.assign("WXORMVHBTSKGDEAKTVBMYQUWJBDXNQGNSIQFPRVYRELUCEFXPKUJUIERVBHDIEZYULKAZBCXWPMGNUTGEJ");
    tmp_msg_0.max.assign("ZNBBAKITRRWQGTGPSLJHFLBZMNSJQSHRMMDW");
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
    msg.setTimeStamp(0.9324549282800338);
    msg.setSource(30819U);
    msg.setSourceEntity(68U);
    msg.setDestination(47167U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("CPOZBMALPEOUYKILOOEVSQANDAJQNMIMDDZJVTFGTVAEXPKVRYNAVLTVXYJKGDCTSTZFSDQLIAMMWYJEPFGKORZRJJHUVXBYKHSUXGENHFOIFLVLFURLMRIAQCCTKWKNNGWMLNIVNCBPPTZWSPOWTEYBSDFNHBBMJIXPOWTCQDRUIWGLCHGQWGBXXNKSOJIFXMXTYKKZYRUCASRU");
    msg.predicate.assign("GSDPZRCYQLCBSIPQMCWKRXKDJDGAWIMIOBGTXJFAMRLNGUZRHWYADKJEXAXYYWZCMFTEAHAZOOBF");

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
    msg.setTimeStamp(0.3121250609520466);
    msg.setSource(55832U);
    msg.setSourceEntity(1U);
    msg.setDestination(59783U);
    msg.setDestinationEntity(130U);
    msg.timeline.assign("XMKPNZHEMPLDUNNTTGCYBPIMKLSCIKGQZLZUGDRRSZUIMIWONCPBTSMEGXTHWQKIBGQCOOJYHDUOENYUVADKVEYFYJPPPALUFEFAZNULIDRFKXHBLGGECWTPENALCFICOXHWRBIFNLZVNIQCXWLSQAWOSADGOBMKVQJPOVSTSQROVKBSZYWJQKFYUVTFMXHCJVDSZDZARMJABLHABXWFJGVRSBRUMEMQHW");
    msg.predicate.assign("KOZLUODUBBGSNBFAQWBYVRWSESPJNFLHWMTWIKNKLYZTDQGNILUQEPMPUBSHBXAPKICYGZCBXGIKXUXOWJSJATKVZNROVIJPOWNWTCHYEFYGXIMXDJJFPCVFNZIATDMTUEHPPBRYMFCLCOHONGWSZHWMMYTBRLVEYUPNULOBCSXCQHIMWTOHMDXO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LOQGLUSBDPQRSEMDRNCTPJYLJGZPCIEFEBAZBHRVIDCRWAOJHCTJFVYYBGWVTMKFSOQMCLTNZCSDRIHZUIGFDIMKHFVQLYTJYWMYCJKEAYGFEVEHUXZCUVUBHNQVXMBITTBXOIWSMALZOGKKSMARWBIHNPFHMQGROQKP");
    tmp_msg_0.attr_type = 83U;
    tmp_msg_0.min.assign("FVSSWTRMNDPUJBBIDULBIIZAU");
    tmp_msg_0.max.assign("OEDGTHPXHXMCEWPZTEHFZJEAUKTLOKPETCDKHEBYRZOXHTAGNMMLQTVSD");
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
    msg.setTimeStamp(0.9134978312535817);
    msg.setSource(23798U);
    msg.setSourceEntity(206U);
    msg.setDestination(13899U);
    msg.setDestinationEntity(36U);
    msg.reactor.assign("FPURKQUJGJMMPJHRFMPONZCSVLCYJTVDGBXANISVNLXNSMXHUGIMKFDFDZDPTCERNJCGWTTUHRMLFIBOJWLRWSMZHEIOBC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZWRXWPEVDZBZPYCVJRBAGDVBEIIWIWOHVOWFLLEKXOCUNPUBRMPQCBACAHTJTGRIUDQLOZIKOSLGJGGUHLLRJTSLYNXFEYIWKVFEHJIGKDGYRJUXRSMSOOJVXGHENCDMCTANVRHEZDNQZKLBDQUTTEQBXFOYTQFSRSKQZMLHNKSSOTJUJQKDHADSE");
    tmp_msg_0.predicate.assign("MCRNFVBEUNJRYDWWJNGKHDKFWRMIUMFBAJGAKGEACLOMOXSXODPXSLTWHPNDLQGALIAQVNBMUHQRCNCXTOMKFQIYUHXSHDQBAXTSKOGMNFUPOCABSDPRADPDQVNIBIGCVYLTFRLPPJZKUJNOEOXGHVCNZCYILSYZZFZUWRFMTYBXEZY");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.29899937805765464);
    msg.setSource(20391U);
    msg.setSourceEntity(160U);
    msg.setDestination(40221U);
    msg.setDestinationEntity(137U);
    msg.reactor.assign("USJKKBEZBGHFNPRROJOWGIJIORYTEJRZBPWURZXSEDHKOXVDPAIJKOJZJQKPWSFPUQKETRZXGWWBGVIJUPDSWHTITIMCXYBGZRNEHGUYANSNCCBBQXLSGKZASNRZKQACQROAFPSHEAEXHYCLYCKUPXOWHWLMQEQCOUQVJXAFBVGPFTIWUEGNLTDVDSMHYLAVMQJCXLVFLYLFDOAZVISCMTGBBMYKMLTZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JEYWERWESENDAHMIBLITPUQVQOFYXTXIZDECWUHGRVWAPJLYKTYJIJEVANFRHAATSSQMPFXHTAPKZIFUIKQWYPGSRJDRWOXZOXWLQABDUCKGYSOKUDIPZELBHPSFSGQEJMRNFFYKFKAGCRDQZUMXWCHOBKRJRNGVGLNDBBVCCQNBIXMVNSVT");
    tmp_msg_0.predicate.assign("KRUBDAODHJNDEKYATSQQLIVVXOPWXDTPERKEOQVTBKZWCADXHKRMCBCLJLWQWSTBBAWSIXCXTFFDATYTFSFVMENC");
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
    msg.setTimeStamp(0.44723014140977047);
    msg.setSource(53387U);
    msg.setSourceEntity(92U);
    msg.setDestination(20658U);
    msg.setDestinationEntity(214U);
    msg.reactor.assign("YUAUIIJODOXQEJBAZPIIOSVWLPSJIYYZWXBZNXKHVHFLCQSCALDNRQWVDSSJZARDSYPDPHJCYPSEKPHULWUXILIQUJRUVEDQFXCALBCUTYGNAMXTZEGNCHAEMJFFKVXBDSVXSKTQYCDNLMLIRTBOFOBFBRPHXGTKOAHREYEWFZMYSXGZFFUGLNBQWIMCKFLABGPGTQROQGHQVNDTKOVMIOJGJPATEEHWNUWR");

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
    msg.setTimeStamp(0.684103199492427);
    msg.setSource(33453U);
    msg.setSourceEntity(175U);
    msg.setDestination(18259U);
    msg.setDestinationEntity(183U);
    msg.topic.assign("HXOLXVMACQLOZBQCOTMXHOYCOAHAHKI");
    msg.data.assign("GWQXNZHMEGVDJALQYGYGRVSUDOZRFZZTFULFKSIVGWUDAIZOAPEZQFPVHUGBOMGDPEJLMDIJXCEBJSWXVLSOCQFLQXLLJNDHCCTQQBNEJCEXFTWPKBRTNNOGOZANMBTNAKDRKPVEFUHIYTKRPFXBPBLEXCRINCYDKTHJSICXWEQVNSHKJMOWHHUFSB");

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
    msg.setTimeStamp(0.8424416870844615);
    msg.setSource(34045U);
    msg.setSourceEntity(206U);
    msg.setDestination(63973U);
    msg.setDestinationEntity(129U);
    msg.topic.assign("ICNGTMWDTAJRISAEVWEXKXHYTVNPWGFQNBZSIJAUDLPKVFPWRIRJYXDWUDXAVQHWHNGYQTMTESCJLJYIPEQKJHQUNUWOYFGJBFFBPACRBJDGIEZMRCGT");
    msg.data.assign("ZTTIECFJJNPAWFIWRBHNVMYIDLKMSSQLDVZHCSJOAPZAOBOLUGKNUKOERBBQSTKXHFFSVMZVQSTFKZDZHANPBCNLRCBYDGJGJRTJXKFCRMCCWJYRGBOHBDQVVPIEZMPIXYUUDODXMYURIMUYPOGJWBTEFDETJNHXQAAIWXGAZYUEQSSWLHEXRKDUPEQYYKLW");

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
    msg.setTimeStamp(0.9888976723944769);
    msg.setSource(30419U);
    msg.setSourceEntity(111U);
    msg.setDestination(1594U);
    msg.setDestinationEntity(59U);
    msg.topic.assign("FNQYPMVDAPREGCTQATXJFIHZCBFXNVNEPWXUMHTGYFDAGZKJEWRZVZHCOYDOXYSOAHEXOLTJWNOEIAEUIXMHGRNWGCIKOCGODKXOPPIAIIASBGKBFZPRNVJMPDHBJQVVUYSJ");
    msg.data.assign("FQMOIFNSOSXCTUMRGKDKLRTKQAFZFWMSXHVJVBLIQNVRNNSHSZYPDJLRYLICBHKQURPKXUVFTGEDDXVGSAFXUWJICUQOTNUATVAHOGSGBHZGDVXXUWWLTGFETMMNIYFQHMNHNZYAWDMPBOJYSAEQIOUHYMMPLWEWBCPECMTXCBSZZCVLORKKCJPZWEIEGOEDCBRFPKQFJZABLYJCTZHPDE");

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
    msg.setTimeStamp(0.3020154898436479);
    msg.setSource(34533U);
    msg.setSourceEntity(133U);
    msg.setDestination(3907U);
    msg.setDestinationEntity(23U);
    msg.frameid = 138U;
    const char tmp_msg_0[] = {57, -30, -125, -90, 10, 63, -33, 65, 7, 21, -99, 45, 20, -28, -29, -70, 67, -88, 6, -122, 41, 2, 113, 125, -127, -82, 45, 110, 22, -21, 28, -122, 55, -43, 61, -105, -109, 6, -34, -119, 77, 35, 54, 43, 66, -85, 97, -77, 8, 52, 19, -84, 18, 86, 100, 97, 91, -35, 74, 77, 13, 37, -75, -76, -59, -92, 122, -93, 1, 22, -79, -66, 106, -118, 126, 43, -68, 104, 8, 35, 120, 73, -62, -77, 91, -37, -14, -108, 89, 88, 8, -80, 98, 125, 3, 91, -25, 119, -26, -40, 11, -6, -24, -8, 10, -24, -50, -50, 40, 8, 114, 51, -67, 4, 61, 40, 89, -12, 60, -80};
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
    msg.setTimeStamp(0.5062267060367294);
    msg.setSource(64188U);
    msg.setSourceEntity(223U);
    msg.setDestination(53822U);
    msg.setDestinationEntity(92U);
    msg.frameid = 167U;
    const char tmp_msg_0[] = {-56, -98, -17, 35, 87, -70, -19, 89, 73, -75, -18, -71, 98, 77, -98, -107, -47, 4, 97, -16, 39, 115, -77, 81, 81, -102, -14, -109, 67, 67, 14, 73, -18, 66, -60, -108, 0, 20, 27, 74, -18, 59, 29, 107};
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
    msg.setTimeStamp(0.7652253648782018);
    msg.setSource(32721U);
    msg.setSourceEntity(196U);
    msg.setDestination(41678U);
    msg.setDestinationEntity(101U);
    msg.frameid = 216U;
    const char tmp_msg_0[] = {53, 22, -100, 17, 51, 53, 90, 1, -71, 86, -26, 126, -100, -12, 21, 120, -117, 35, 86, 77, -38, 31, -21, -110, -104, -4, -71, 58, 29, 26, -67, -14, 68, -104, 125, -97, -21, -98, 7, 47, -73, 76, -119, 116, -24, 85, 42, 4, -117, 12, -94, 31, 126, 91, -82, 49, -8, -101, 53, 18, -114, -23, 116, 58, -49, -47, -79, 75, -120, 40, 62, -87, -16, 19, -39, -2, -103, 100, 7, -17, 62, 111, 10, 11, 85, 57, 57, 59, -98, 122, 105, 1, 111, -57, -19, 49, 109, 122, 27, 108, -98, -15, -9, -61, -103, -1, 79, -76, 37, 125, 10, -12, 38, -21, -108, -77, 61, 113, 117, 44, 43, 26, -35, 57, -95};
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
    msg.setTimeStamp(0.3490113682049273);
    msg.setSource(12165U);
    msg.setSourceEntity(195U);
    msg.setDestination(59402U);
    msg.setDestinationEntity(47U);
    msg.fps = 191U;
    msg.quality = 91U;
    msg.reps = 83U;
    msg.tsize = 211U;

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
    msg.setTimeStamp(0.6617247775108546);
    msg.setSource(28714U);
    msg.setSourceEntity(203U);
    msg.setDestination(37726U);
    msg.setDestinationEntity(112U);
    msg.fps = 131U;
    msg.quality = 87U;
    msg.reps = 44U;
    msg.tsize = 181U;

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
    msg.setTimeStamp(0.3653715020437156);
    msg.setSource(30861U);
    msg.setSourceEntity(3U);
    msg.setDestination(2934U);
    msg.setDestinationEntity(134U);
    msg.fps = 12U;
    msg.quality = 59U;
    msg.reps = 12U;
    msg.tsize = 113U;

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
    msg.setTimeStamp(0.9780899823908198);
    msg.setSource(50754U);
    msg.setSourceEntity(183U);
    msg.setDestination(1554U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.6243140111625803;
    msg.lon = 0.9661667363611702;
    msg.depth = 119U;
    msg.speed = 0.8718655252411746;
    msg.psi = 0.38592938723488446;

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
    msg.setTimeStamp(0.5533389950764442);
    msg.setSource(9336U);
    msg.setSourceEntity(36U);
    msg.setDestination(44720U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.5108980300312375;
    msg.lon = 0.11058030384325157;
    msg.depth = 163U;
    msg.speed = 0.1338590106385441;
    msg.psi = 0.9516529687940654;

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
    msg.setTimeStamp(0.02804298698885821);
    msg.setSource(37310U);
    msg.setSourceEntity(27U);
    msg.setDestination(61238U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.13340501703633356;
    msg.lon = 0.8267303747711109;
    msg.depth = 156U;
    msg.speed = 0.26756419574640455;
    msg.psi = 0.3675100355184693;

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
    msg.setTimeStamp(0.348943524526934);
    msg.setSource(65243U);
    msg.setSourceEntity(62U);
    msg.setDestination(47000U);
    msg.setDestinationEntity(41U);
    msg.label.assign("MDVWSJVEAHKXCLCERXAZKIWNFTQXXVGMRWBQFJLENUWHHZZOUWDGDBDDGRFCEYUOIPTRHGGDSOIABPTFLHCDLRSPUGYEBTOPMJAKAFLJYWQIEVARPJTBDPYJBUPUSEIMKJMHDIKYRQZVKJSXZUCOIHCSRCGOQWNYNTXMONFVKFYQXVPZELXQYLAEMCCFA");
    msg.lat = 0.3428065170057757;
    msg.lon = 0.014210546547748226;
    msg.z = 0.614972962682014;
    msg.z_units = 188U;
    msg.cog = 0.07104003751220944;
    msg.sog = 0.8414758520965303;

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
    msg.setTimeStamp(0.6096026115142603);
    msg.setSource(51451U);
    msg.setSourceEntity(144U);
    msg.setDestination(21781U);
    msg.setDestinationEntity(140U);
    msg.label.assign("XDELAGWPPWUOBNKXMZQRQSMZIXUTQEVWYVZSXLGADQFNZHSCYJHFDIVVCGAYIVONKEKJOOIZTWWMGYNJBOTRPCVNPTQMPKUNSTK");
    msg.lat = 0.6874906529158401;
    msg.lon = 0.4134962155586964;
    msg.z = 0.40845805961001314;
    msg.z_units = 161U;
    msg.cog = 0.30663798916078144;
    msg.sog = 0.07781972144375082;

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
    msg.setTimeStamp(0.5323774436981039);
    msg.setSource(40898U);
    msg.setSourceEntity(4U);
    msg.setDestination(28625U);
    msg.setDestinationEntity(115U);
    msg.label.assign("KTOUQSUGDMGBALJNMDCGPSKPGZOTEVZYVPLOTBBIEDYNTPRVVTQOWREYZVWGFFYRUTYNJCGNHRICTUFISIRINKYRAEBXXVLWHRLNNQSWSOQGVLUPXKMLKJSXZBPPXIZEXZABAUEQWBRZYENDBFWSODFDD");
    msg.lat = 0.12649045530331438;
    msg.lon = 0.15379296386091101;
    msg.z = 0.695147101277674;
    msg.z_units = 128U;
    msg.cog = 0.6479376211737345;
    msg.sog = 0.11683674840833802;

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
    msg.setTimeStamp(0.23248585143801892);
    msg.setSource(53423U);
    msg.setSourceEntity(222U);
    msg.setDestination(40391U);
    msg.setDestinationEntity(133U);
    msg.name.assign("QETLJYPFRBUTELXWIPCKGGSVKQKWDNDBUOTWGGCYJRSTJJBW");
    msg.value.assign("BVWFSHXVSUZXOJBCNZJCHRHGDWIPYMPBCLMNSAFOSUFXLVQNBKBKMTRL");

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
    msg.setTimeStamp(0.12556696719192995);
    msg.setSource(59543U);
    msg.setSourceEntity(237U);
    msg.setDestination(33770U);
    msg.setDestinationEntity(58U);
    msg.name.assign("RWEYUDKFLWWATNDDJFPIBOYKAHLCVGVEAIEZOZYEDUEPMNMHPJSTGIBEGTSQNVKLZCKGJCUABXEPCIPTTFRNQCXJODA");
    msg.value.assign("ZVQGSITBNSDLVSWZEQLQXTJFJCICJKTREDXYPXDWOXQDHBJBEBHNDANGYUJKSZRMNLRTEEOIHTKLCUIMPFDZGRZAGWZQYOLMGTH");

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
    msg.setTimeStamp(0.5792406710726904);
    msg.setSource(58390U);
    msg.setSourceEntity(106U);
    msg.setDestination(26996U);
    msg.setDestinationEntity(112U);
    msg.name.assign("VALSBNDFOAUZVJXTNIBMVQHLLSGAQTMHSHULIPEIYFEZFXBQVKOHNKHTVZQRAETTMONSFPQTWPXDZUAFKKYCBFWNXFM");
    msg.value.assign("BDCNEAJVPYVZKCVQOXAZRPYKFNOWVGGIFNLSYFBSWLNFTQGVTBLWPTAZEJTMASSLSBBOHCIDVSPVJAXEHBHEFOFYDNDULXFUMHKWCRWUQEWXKUCEOYLFBQZUNMZZUTMSRIQJMZCJPIOBDVPYAMAGRGIYDMDJUZNTMMRYPAINPGKQHQI");

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
    msg.setTimeStamp(0.4192953962369428);
    msg.setSource(6755U);
    msg.setSourceEntity(148U);
    msg.setDestination(7341U);
    msg.setDestinationEntity(122U);
    msg.name.assign("DKNVSDONCFZMGIEQAFSHDNTTCNYXGHQSQQTUEXADMDBZTOVAERRYYVGBDWFCXOVUJXVBMBWJKR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IFEZMYOKQMYBD");
    tmp_msg_0.value.assign("HFTTWVQTLHRJKUXSDUAPMUKWADMBKCJOIDYRCODXSZMVULGAVIJCUNFYTRGYCWIUKARONPESZZGMNQSJPHXFOZOGQRFJHNSHPEDFHXSZVXEFGBXENTFRIKOBQWLIGCWEMLEBTTEZRLZRWDNVQWZQYUCKEQLVVHNLYCMPSQRTJVLTDCKBYIUQESIZZYUMCGNIOYPXOLVXXJADXMBFJIOMPPHEIKMHAOYPCADSRHBN");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.08541566940018963);
    msg.setSource(42922U);
    msg.setSourceEntity(20U);
    msg.setDestination(46969U);
    msg.setDestinationEntity(72U);
    msg.name.assign("SDEQRWTVZIHKTSOXMCMOCCZIJNWPTANWENPWBEYJFCZJQGVVHSQVNOOPBDHLQUZPXJXBJLYWCOMZFGKRPULREXNVUQGFESICFVJBYUMDKALJDXNYCKMOKCRLXGTFVTFWNGYFIBIRQPJGDRZSHYIRTPMHRH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CNIOEFNUIUGNQPXWIVDFNTUBHXHSZPEJMEUZHCZEZWTHKAMPBENSJWGNGVJADZQLDOCTODRGKBFPETRKPLQKUTXTFINBTKYRGHWQGXMDYNLAOYJSZYNMGQCUCOMQFRXXTMRLSJUBWFLSPJPOYCOYRWRZVB");
    tmp_msg_0.value.assign("HFRDEEDRJLSDGJLQDOFOOUPXMYEQUANWSLDI");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.43887423256474045);
    msg.setSource(51051U);
    msg.setSourceEntity(84U);
    msg.setDestination(39035U);
    msg.setDestinationEntity(76U);
    msg.name.assign("SWBXFQYQAFOUPNXUNTDBWIGTPMFGNWCGGUTZNKPPWYZKMQAEPZOAGROQUKEMIFMDUERKVKPRZPMMBWZWLHILVJHZRBRRATVUTMDSBQRONXEHDGJGZGQCPFWAECNKLZCYDYIYBNATFGXXOJYYETJHTRFUXLBUNLIDKMYVVEODJXUWJESFPFXLQKISKMRCEVQONTCCUXSIWRYG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZAOGHDVGNUGNHLFRAVMYDBIYDLDJXVTVXKJZXRZVYZENEFQQTLAPPWQTKUYYLKQRUJSDURIQUFLOCVMBLQSXQXZSRJIZBCBCRAIEFTWIFDXGVKJFDBZEOAWHFJJPOLSJPEXODKGOKWWLXYUOCMFIKPITCHEZAASUSBRGWNMPZMNCLBOPHKMCSHGNPYFNIECWXICAHAMYDKJQY");
    tmp_msg_0.value.assign("KUPFVHVPHDRKCGALNTCARDTWYZNFNGBRQGJKBLNIIPRYYYMHMRWYCYZZOPLHBTCQULJWSXXKHAVEV");
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
    msg.setTimeStamp(0.9480380125537536);
    msg.setSource(5934U);
    msg.setSourceEntity(38U);
    msg.setDestination(6901U);
    msg.setDestinationEntity(152U);
    msg.name.assign("UIUPOOHRCYJGWWPGKAQICYKNECBUBCMTEHQVQNMECPFNUANBOHHSXQXHDWOLMFWRRNGLLXDVDTGEEIXOJLPSDVDVSZHFAMBUFTURWRAMCTXDXLBPVAQKSSZILABLVJMZFIBQCVEGTNSWFHROY");
    msg.visibility.assign("IWMNVBETDMLLUMHGYUWGUKWOIPVGWPXHUBFHVYINMFHZDBSTJWLMXDEXAPSMDHVEBLLFVLZJFNDLQQRCOBVYQYZQJHOZTXGEZEATKREWOVODFNGHIIEGPPUOFDQYRPFTXCPSJACMTRSTOHMNGJJTCYYSCABMJKAXCTUXOSGPGJELKNZYORPQDCKVSQWBBLNHOJUNKCETVRZKS");
    msg.scope.assign("XMDAWEUCWBYRAHAJZTKVTLPLSWNDXMOUNQLYCPFYLFKVNUIZAOALHKYQCZNMIQBNWSHIZYVXBZRISZATFFPXWQGFBMFCEBRJHOOGWPGGCQFAYPNGPXCEYFMWJSBNZYEGLBKXITHLPDIXOVZEUODBDFLGVATVLIMHHIUOVRNTBAERHCZSQCEHVUTKEJVDSSQNKRDUYHUOQP");

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
    msg.setTimeStamp(0.23182259393720184);
    msg.setSource(11977U);
    msg.setSourceEntity(108U);
    msg.setDestination(30891U);
    msg.setDestinationEntity(124U);
    msg.name.assign("JCXAONKVSXBIHUAFSQLHVB");
    msg.visibility.assign("KBSBNPMBROSNAVLATFIMTLVIQGOXSBNJATPSPHJCNLAFGYPMTYEPJNWHTYNVRKAGHWJSUSXOLJHQULRBWLAQOAIKUOFCMCDGFROBFRMEQRMJUCZXJQXYZBXGDEIWVHDGBWGSFSEAWFRDIKNDEZPISPE");
    msg.scope.assign("CFFFZCQXKSKGZBSWRVDVUUXEXVPYPWHSEDRBKJNBPLEYBRPTDNTYGHDXDXIJTID");

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
    msg.setTimeStamp(0.5369946198796676);
    msg.setSource(34026U);
    msg.setSourceEntity(49U);
    msg.setDestination(45270U);
    msg.setDestinationEntity(234U);
    msg.name.assign("KELKFPJUEXCCJDJSYRSPCEIQSDMSAZVGKRAKHLLOIZOUXJSAYLLAXBOTWWZVPNURXEMYYUKRFTUMVLHBCOJRWONMYLXVJZQXQSIXHWCTHCGQQPNCNAWAMFFPFEBJBUFIPEOLHYDCKZIBHGUJVRTRNQWRESRFJYKQDMVBSPDCSABFGWIEQZOVKIVNWXWLZVFDGNH");
    msg.visibility.assign("ELZEDLFPJWBSVATITCGIPUFGXWLQUZKTUIFSKDEPNVWTBKLSHBQKQYDQROOWZFGDKOPSWDGXORGJJKGTMRNRFOVAFDCZLBMQWPVMXZWITVKSPQZAQJRKVAFZOXCJZREHVNRFBYHEEPLOHBIMAIUFIMHVXMGYEJHCELHOYHQVMNSXNRJUGWUDUZVANRAYECBPSJFIECQJK");
    msg.scope.assign("EKYODVBTEPGHKHMAUHJEZPRHJBYUMAVCXVZNAQJTKOFGQBNXCMZTQWDGCZUQQUPMEKODPMRPHIVSIOYQWNZAQXSDVBULVLBXNFORTIRMEXYIVJYTXPEUGGLUBSCXETAJKFMWAHSGLZOCBZFSANYKDKVPBNGTACBFYG");

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
    msg.setTimeStamp(0.19813454265138364);
    msg.setSource(6714U);
    msg.setSourceEntity(101U);
    msg.setDestination(3490U);
    msg.setDestinationEntity(116U);
    msg.name.assign("EOGYWDEFFJCVPKUMCDEGGTNXMHARSTDWYZOHFTVAPALMYNYPFNDIARWUQFWKGDKQLNPJSYMHZASXNVVIYMLGCENDJEPLZBMAQXICGSMETXQJPOHMODILBBFGPSLGJIEXXFUAIZORIIJUAWDRSQHVGDURXUZZBWYBYOIQFBTZZNVHLRJWQUTKOTTWRPKUCWKTLVKLUCJXKOBMHRV");

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
    msg.setTimeStamp(0.40779571328560493);
    msg.setSource(14531U);
    msg.setSourceEntity(59U);
    msg.setDestination(4573U);
    msg.setDestinationEntity(209U);
    msg.name.assign("XZVIVRRFYJAWHKQWMQECJNSTFOGUEGZLIETRWPBXDMWNNXINGSQAUAFOZCJOYHXYCBUYEEMSLVRIUZPPNWOYNVNW");

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
    msg.setTimeStamp(0.276986302805851);
    msg.setSource(57043U);
    msg.setSourceEntity(35U);
    msg.setDestination(31595U);
    msg.setDestinationEntity(188U);
    msg.name.assign("KIKZOROKYHKMZPSLZILFJMR");

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
    msg.setTimeStamp(0.6369517230257025);
    msg.setSource(42630U);
    msg.setSourceEntity(181U);
    msg.setDestination(37553U);
    msg.setDestinationEntity(71U);
    msg.name.assign("VYMPIGCYJSXKJRGHIATWJNNAKBSFJSGIQESDDARCNXLZQRZIYTZHFZPHRBAMGWGDEDKHPTXSULQQHVFUCTTFSBGYOLXZYICUOMGCQKYCLFHQDOWBURMGEEQRCMFVOAGPKMXHXKYZREYXJPITSWWOWFEZJRBZARFNUBHKIVBTNPDGVODOCYFEDMAZNMMQIXVOUJBQJULEPEDXRANAAVMNCPBQOLFCNI");

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
    msg.setTimeStamp(0.5237353095857948);
    msg.setSource(49208U);
    msg.setSourceEntity(44U);
    msg.setDestination(41227U);
    msg.setDestinationEntity(207U);
    msg.name.assign("ZUVDVWPZDFMLOWSWABOTECSCNQCSEBWDXSFAXLQTZBCOYJNKKYFHODZFIQRCOXFGPXPWPTVARHRZQCBHMGVIVTJYUJDUHPAZ");

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
    msg.setTimeStamp(0.5209734279396534);
    msg.setSource(14992U);
    msg.setSourceEntity(117U);
    msg.setDestination(41997U);
    msg.setDestinationEntity(221U);
    msg.name.assign("VPUDZTIVIFFRGUCAQZMCXZAOTAPWFIUKPJAJDLQDGXHEFSGBUPNQFIUYEGTNCCAJ");

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
    msg.setTimeStamp(0.18346699840922032);
    msg.setSource(26512U);
    msg.setSourceEntity(92U);
    msg.setDestination(23674U);
    msg.setDestinationEntity(153U);
    msg.timeout = 2494450826U;

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
    msg.setTimeStamp(0.13032990206135864);
    msg.setSource(51431U);
    msg.setSourceEntity(214U);
    msg.setDestination(9491U);
    msg.setDestinationEntity(75U);
    msg.timeout = 70777188U;

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
    msg.setTimeStamp(0.03302230381089022);
    msg.setSource(25457U);
    msg.setSourceEntity(107U);
    msg.setDestination(55811U);
    msg.setDestinationEntity(118U);
    msg.timeout = 2609529950U;

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
    msg.setTimeStamp(0.9263852884172431);
    msg.setSource(23611U);
    msg.setSourceEntity(180U);
    msg.setDestination(43851U);
    msg.setDestinationEntity(239U);
    msg.sessid = 916821555U;

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
    msg.setTimeStamp(0.7531564081128302);
    msg.setSource(50555U);
    msg.setSourceEntity(109U);
    msg.setDestination(49786U);
    msg.setDestinationEntity(37U);
    msg.sessid = 1305752531U;

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
    msg.setTimeStamp(0.8073399919649026);
    msg.setSource(53166U);
    msg.setSourceEntity(19U);
    msg.setDestination(33231U);
    msg.setDestinationEntity(103U);
    msg.sessid = 3710798876U;

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
    msg.setTimeStamp(0.7980732737640359);
    msg.setSource(25999U);
    msg.setSourceEntity(159U);
    msg.setDestination(61435U);
    msg.setDestinationEntity(63U);
    msg.sessid = 628384272U;
    msg.messages.assign("CJNIPRPMCLJWEVUKUKZZWKFSHALYXWHISBXICFDFMZ");

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
    msg.setTimeStamp(0.5920603198424649);
    msg.setSource(11531U);
    msg.setSourceEntity(235U);
    msg.setDestination(18084U);
    msg.setDestinationEntity(178U);
    msg.sessid = 1522226742U;
    msg.messages.assign("KQHYCKOEPKGENPIBHJRUBW");

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
    msg.setTimeStamp(0.5573017291374616);
    msg.setSource(21348U);
    msg.setSourceEntity(165U);
    msg.setDestination(16158U);
    msg.setDestinationEntity(150U);
    msg.sessid = 3547867085U;
    msg.messages.assign("OMVCQLRSBLNWCAUERUIJDYHRIYLRWJFDUZQMRTYEKIGLUSAOFHBKYZZCZNESAQHBBDZRRZTELHEKPAJBFMJBITGOAGHLWFGNDAMLOXXJESEMTKURSMNXYATVPZHNCOXQNOFUCHOVDHXFOQBCGTTDAWWVJSFSMILEKHZUMPDXFGKKPKLS");

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
    msg.setTimeStamp(0.7282443105827083);
    msg.setSource(55136U);
    msg.setSourceEntity(142U);
    msg.setDestination(36805U);
    msg.setDestinationEntity(11U);
    msg.sessid = 3360892289U;

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
    msg.setTimeStamp(0.1090020551342149);
    msg.setSource(57315U);
    msg.setSourceEntity(239U);
    msg.setDestination(38395U);
    msg.setDestinationEntity(252U);
    msg.sessid = 3038886466U;

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
    msg.setTimeStamp(0.0011782181845260142);
    msg.setSource(15604U);
    msg.setSourceEntity(102U);
    msg.setDestination(21732U);
    msg.setDestinationEntity(130U);
    msg.sessid = 356724051U;

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
    msg.setTimeStamp(0.9529003468819159);
    msg.setSource(23471U);
    msg.setSourceEntity(155U);
    msg.setDestination(49484U);
    msg.setDestinationEntity(157U);
    msg.sessid = 2400402223U;
    msg.status = 26U;

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
    msg.setTimeStamp(0.31669774807061934);
    msg.setSource(13590U);
    msg.setSourceEntity(155U);
    msg.setDestination(17330U);
    msg.setDestinationEntity(54U);
    msg.sessid = 614501577U;
    msg.status = 195U;

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
    msg.setTimeStamp(0.33863070255331174);
    msg.setSource(33942U);
    msg.setSourceEntity(175U);
    msg.setDestination(8906U);
    msg.setDestinationEntity(144U);
    msg.sessid = 463095450U;
    msg.status = 207U;

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
    msg.setTimeStamp(0.8337062143896691);
    msg.setSource(41306U);
    msg.setSourceEntity(217U);
    msg.setDestination(36882U);
    msg.setDestinationEntity(97U);
    msg.name.assign("XDPHQAASPOTQLYWOXBZKPJHJBKXQAHJQURLTRJZFZRKVZSWPEZDYJEXNOTRABUMHYFKDUTADMFRFNVOKRCWMLDIOWONUTPKYOBSSERCSFIVUKLNVSVGWTLWTDUTBNVDLFZYQBTWPUUVJDABYUHLGGVIWJMPHOMXKIGREGJGQVCSBIIOEILA");

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
    msg.setTimeStamp(0.8049363651542246);
    msg.setSource(46836U);
    msg.setSourceEntity(76U);
    msg.setDestination(49621U);
    msg.setDestinationEntity(43U);
    msg.name.assign("QQSHOBBIGSCEIFAIDP");

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
    msg.setTimeStamp(0.3777792822777889);
    msg.setSource(45051U);
    msg.setSourceEntity(227U);
    msg.setDestination(57447U);
    msg.setDestinationEntity(189U);
    msg.name.assign("MXLQOIDFZMUOEOHGOZANGRFACGHYCARSIYNFLCACTFQIJHPFIOBTILREDHARAVFKFXTWUHRPTUNSGPYOQORKOSWQZEDLSSQXKYSCQNKRUDJMZNBBLHJCQGXPSPRWNFCVTJUXHVKJTYAZEVKMTHYIBBTBVYWSXGDCEDWIGJLSJ");

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
    msg.setTimeStamp(0.9868707329433392);
    msg.setSource(58420U);
    msg.setSourceEntity(41U);
    msg.setDestination(40627U);
    msg.setDestinationEntity(7U);
    msg.name.assign("HZKSHNHEBMAVASYWWLGRWGUAFHYZREIZPUMRENUCPMESKRSQILDCPJMLQSDUCBHTRKFOPEKXYJZGRXIAOWZTBHZKFPQNOHLSCGTEIARJBNWCYZEQUXUVFKQ");

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
    msg.setTimeStamp(0.28592054676773326);
    msg.setSource(7837U);
    msg.setSourceEntity(124U);
    msg.setDestination(42826U);
    msg.setDestinationEntity(185U);
    msg.name.assign("VTFPZOIAUUNXMIALJWMPNTGWFMFCQTBTFRSCWBTZHYDTXKQJQRZESCZLFMRIQYPMAYCXGRPSNEWLUXGHEVJWHRQOWHEUBIYGKCSYDTYOKSQHDGXVORQINBWEUXRHBIGGKTFIKVANBRL");

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
    msg.setTimeStamp(0.4622205314828416);
    msg.setSource(13979U);
    msg.setSourceEntity(73U);
    msg.setDestination(46333U);
    msg.setDestinationEntity(54U);
    msg.name.assign("MLUHVWNYIDRWPFYQUWQTYAHSBVGDMBRAWCBDENQPQYKECPMRFVXZEFTTPSOMRSQMKVKDHSEONKICLWFUKGMHQPBLOXWGGLTKEEDZCVHKONUNKXGWUXXUPTRYSRVHFJXBCAOUFXPDORXQBFIGQCCJZLBUJIJHAELBMYTFPCBMESSPJNCUNFLCIJZORZVNARDDYTRAGVHIJVOILSDZMJHKTVWIYGZHKIBUNSAEYXJAZLGQXWTQDWA");

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
    msg.setTimeStamp(0.05765829982079029);
    msg.setSource(53487U);
    msg.setSourceEntity(210U);
    msg.setDestination(11801U);
    msg.setDestinationEntity(124U);
    msg.type = 133U;
    msg.error.assign("ZZSHQLHRWCGAREYUXGHOMXJAUKMLFFGCOECAGNJERBPNVSLQJWFKTMJNSETEPOHLTOBDLZMVWGZKBZHHBJVQUBVDUQIPIMHJDXQLPMSJORPGMHRUYUAKOYOESXMCIDKTPFWZX");

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
    msg.setTimeStamp(0.24039007312699334);
    msg.setSource(27396U);
    msg.setSourceEntity(67U);
    msg.setDestination(32629U);
    msg.setDestinationEntity(123U);
    msg.type = 243U;
    msg.error.assign("NXRKYFACSMKOUIHBDQUFBBQIHNWLPFWARBFMQNGJDOHBDULXTPE");

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
    msg.setTimeStamp(0.41490158895396656);
    msg.setSource(5543U);
    msg.setSourceEntity(217U);
    msg.setDestination(17327U);
    msg.setDestinationEntity(237U);
    msg.type = 70U;
    msg.error.assign("ILTFPNGBJAFYQOAZPHKTMFHXKBDJZBWGGUQBYPESLXUPKCHAMOAZA");

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
    msg.setTimeStamp(0.1265530736004623);
    msg.setSource(25202U);
    msg.setSourceEntity(179U);
    msg.setDestination(32095U);
    msg.setDestinationEntity(29U);
    msg.seq = 51632U;
    msg.sys_dst.assign("XNBMJWLSHVJFIKCDKXCOSXWQGIQGAYVBYZFKSKGUWNNJPIXCMLTSUYAQFABOTZTFZFREVDWQXRQENSVMKJHESTHJVAJVXRRLVXTUDRQGYAQKJQLVRNYFYHMPMZXTEOEGIMGANKHDYIPFSWRBDZBEYYRAEUNUHHUPOWCAIPZTKAFKNCUBAOXZELDOWPHZMIZTHQNOSOBCPIVBFSYOJTIPBGMOJZVML");
    msg.flags = 170U;
    const char tmp_msg_0[] = {-30, -80, -108, 105, -18, -5, -75, -47, 88, -51, 59, -91, 83, -33, -116, 118, 99, 58, -61, -55, 47, -52, 61, 27, -69, -118, -42, -54, 27, 2, -82, 80, 91, -66, -126, 60, -98, -57, -6, -85, -68, 56};
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
    msg.setTimeStamp(0.2758077781139505);
    msg.setSource(24736U);
    msg.setSourceEntity(62U);
    msg.setDestination(11203U);
    msg.setDestinationEntity(210U);
    msg.seq = 49632U;
    msg.sys_dst.assign("BJWOMPJXZHXRDDERSFXCHQVHOLPNGWEHNRTRIBKEKIDSMWZLXWHOVGZXDINJTLAPZHYNTTKOYPCBROMUUJSCUGZCQUGPJWSERUFEMHPEPYDQBWMOUZVFCKCEZBYLTVFIBDWAAQGKKVJBOYUYAFTNIMZTGVXHJAHZVXSYXYGCNHJARONDMYEAKLSFJFWKQBFRYBRJMVWLMTFCDDFQPPSCMZQUIRQKQLGXTSVGCTANULSGNEXLV");
    msg.flags = 14U;
    const char tmp_msg_0[] = {-44, -92, -2, -56, 63, -87, 27, 83, -64, -21, -24, -7, 31, -42, -93, 35, -54, 14, 40, -55, 118, -115, 54, -26, -6, -123, 121, -53, -71, 7, -84, -37, 95, 69, 57, 77, 92, 63, 123, -122, 42, -88, -69, -109, 64, -91, 117, -76, -80, 10, 96, -20, -128, -89, 109, -3, 12, -35, -25, -79, -20, 5, 115, -65, -119, -41, 102, -101, -12, 126, -46, -30, -80, -20, 90, 67, 13, 39, -48, 106, -85, -113, -75, 56, -36, -20, 118, 27, 37, -94, -77, -25, -95, -78, -62, 51, 113, -126, 25, 102, 7, -66, 28, -34, 35, 81, 52, 6, -70, -66, 57, -77, -75, 31, -107, -118, -42, -108, -34, -65, -128, -8, -37, 6, -14, 83, 54, 2, 120, -60, 83, -108, 94, -27, 56, 32, -102, -112, 85, -32, -70, -74, -14, -88, -128, -58, 51, 72, 56, 70, -68, -70, 105, -103, 114, -79, -64, 116, -67, 76, -94, 46, 91, 53, -103, -98, -44, -60, -76, -14, -30, -69, -4, -37, 5, 105, 106, -12, 71, 107, -106, 110, 109, 1, -126, -79, 47, -11, -60, 11, 104, 81, -124, 123, 32, -5, 118, 36, 92, 119, 100, 6, 97, -4, 39, -32, -84, -9, 80};
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
    msg.setTimeStamp(0.1491153571136956);
    msg.setSource(6265U);
    msg.setSourceEntity(18U);
    msg.setDestination(2369U);
    msg.setDestinationEntity(162U);
    msg.seq = 8593U;
    msg.sys_dst.assign("OAVPOHGWZZTTHXAGRARWOTGCLIUYLSAJPMXONMQLXUUIXVAKPSTHXVCDYHMUWCDWBIKPNHZGESVERKNXXNYLHVUYONRACCXPVIOAKGSBQZTZPNCRLERGCBQFXZTHFSJNEGEHDEWCMNLYNQMBFQUZFWDBGAJFFBIHFFDBPMKJWQDSQJTEICTLMZRRQUWJMLMQVPBIJKFSVJOIOKIDZEZVPWDYLSALUCQAWUTYPSBMVYHFGGKYJ");
    msg.flags = 175U;
    const char tmp_msg_0[] = {-40, 2, -82, 95, -64, -127, 121, -7, 43, -120, 20, 82, 116, 8, -96, -75, -33, 33, -77, -43, -119, 23, -94, 95, 80, 27, -34, 97, 55, -25, -126, -112, -23, -116, -36, 30, -123, 119, -18, -97, 36, 45, -127, -92, 28, 79, 17, -2, 84, 107, -110, -83, 40, 102, 58, 62, -35, 35, -85, 35, -116, -86, 96, 11, 13, 43, 101, 31, -99, 36, 105, 98, 54, 83, -64, 17, 34, 12, -85, -36, -100, -33, 97, -7, 65, -118, 100, -46, -42, 91, -48, 51, 60, -48, 5, 8, -54, 51, 68, -98, 82, 43, 4, 17, 10, 5, 111, -20, 96, 122, 63, 97, -45, 113, 116, 2, -35, 98, -96, -98, -34, -51, -128, 70, -97, 116, -25, 123, 5, -48, -26, -47, 117, 40, -69, 98, 37, 104, 83, 22, 60, 106, -103, 93, -118, 101, 124, 7, -97, 60, 20, 53, -11, 47, 80, 119, -87, 92, -69, 57, -103, 116, 116, -119, -43, -83, 22};
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
    msg.setTimeStamp(0.8295506142018831);
    msg.setSource(39444U);
    msg.setSourceEntity(3U);
    msg.setDestination(18131U);
    msg.setDestinationEntity(167U);
    msg.sys_src.assign("EFYEADAWXE");
    msg.sys_dst.assign("HMPRZWCLKHMDJTITSQWBNNACWBYPXCVDNHJUHCNJLDOKXVWSMFMFYDZCKPLYYQFQZERNWJFKQUQTQKQZKVXTAWLSMZUXGMLOSKWJBPIOJTRVIIUTHPUGCMIKFBLDEESEUUSHRAKBVTYGOQIBSIDIADAOGOAWSOCUJTCGOYCEPLXRAPNYGUZEWLZTREFVHASDYGQFERVZPREFBLGVSZYJXV");
    msg.flags = 24U;
    const char tmp_msg_0[] = {-76, -90, -115, -75, 120, 115, -1, 31, 5, 120, 80, 46, -109, -26, -83, -9, -108, -10, 73, -68, -126, 81, 90, 79, -127, 69, 91, 113, 101, 80, 51, -118, -112, -9, 47, -62, -22, 51, -121, 47, 51, 20, 84, 93, -112, -75, -84, -30, -111, -128, 80, -127, 106, 97, 48, -18, -43, 119, -19, -125, 123, -60, -87, 36, -67, 102, 68, -71, 18, 72, -87, -26, 7, 51, -66, 61, 83, -86, -115, 120, -100, -58, -118, 47, 69, 78, -17, 39, -15, -60, -79, -110, -122, -92, 41, -103, 63, 66, 11, -32, -92, 36, 120, 8, -111, -59, 76, 76, -43, -53, -97, -49, 12, 91, -18, 126, -99, -81, -23, 63, -111, 111, 31, -39, 22, -73, 16, -75, 45, 32, -74, -18, -128, -13, 67, 25, -50, 75, 26, 77, 14, -76, -89, -23, 3, -79, -5, 67, 44, -31, -10, -54, 80, -24, 12, -102, 89, 27, -100, -125, -65, -112, 84, 84, 40, 10, -70, 25, 61, -104, 99, 106, 107, -98, 124, 28, -83, -87, -1, 61, 69, -121, 98, -84, 36, 81, -7, -16, 88, 35, 41, -60, 37, 126, -74, 1, -15, -119, 66, 11, 111, -77, -66, -101, -13, 48, 64, 38, -101, -98, -54, 85, 30, -125, 114, -77, 20, 119};
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
    msg.setTimeStamp(0.43971143867002493);
    msg.setSource(16155U);
    msg.setSourceEntity(122U);
    msg.setDestination(36514U);
    msg.setDestinationEntity(124U);
    msg.sys_src.assign("NMUIYYLNWHVZACSYVGYAQJBODFPSUTNMSUEOZTQSEXJPGTSNGRYEEMBHJULAXBQMQQWKNKUKOYOWKDWCGEHSOWRWEIARQDRELJXPLQCDNFPIXLVDVHXEDROFMYMIGCQGZBVKUVFWTMZZTPRSWVJLGHNSVXCFJLCOZICLZPZHTOJDKAPXITHYNQRWOYUEMGKZPJBUHCQDHRKUSVFCJG");
    msg.sys_dst.assign("PXINMBIYZAIFHNOGMWIHAYDJVZRJGVNPEPVWQDQUQIVMRBYPCBEEDQNUTRIFHTZXTYFIOREANMUMDZAVKTNDALNSKTLVHGXGUGWDHTWVHZERZUOXRCCQFWMFCEPXHFBCCUZTUJQKOBCYTSPKWRKAXMJQJLLSSULPCNBFKOSZIYJGBQRDXPOGYLGSSSBDNASOHYKA");
    msg.flags = 127U;
    const char tmp_msg_0[] = {-83, 5, -128, -58, -52, -30, -5, -32, 84, -85, 108, 110, -96, -27, -78, 91, 44, -3, 58, 50, -65, -104, 113, 38, -115, -2, 68, 35, 33, -72};
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
    msg.setTimeStamp(0.18527997397708718);
    msg.setSource(9902U);
    msg.setSourceEntity(54U);
    msg.setDestination(10904U);
    msg.setDestinationEntity(58U);
    msg.sys_src.assign("WZEGTIECDXGUHVMWWSAPNKNQFFAXSGODQBTEJATARZNUKZCZJFEAFUMUMVYASWCVIISUXSHLFPLZWVPKITZOCRRJSNDSQNMHJYESZCXHXBLPIIEEJQKYVGMYHMNLMIWUCHEROGVSXEFYPHLZRJBJLLVILCARTRGTWVIVDBQFHQBGWUYZIHAOQCTDHRPFOYDXNCKWPNBMFWGJOLYTNJDBDKPBOOAUXBVSKDQPETONJMQOYRXAPRDFGG");
    msg.sys_dst.assign("NXZUXGXQYEBTMOPCKLGEUZTSMZLUBIEGQUEVOGSNDFVNKIMWNFDFMCLNJKIPHFFQXALCBWUTNCRLDODZLYB");
    msg.flags = 243U;
    const char tmp_msg_0[] = {-67, -119, -93, -3, -50, -72, -124, -61, -51, 99, 99, 1, -66, 54, -48, -123, 74, -47, 54, 32, -123, 5, 123, 46, 51, -17, -37, -5, -73, -70, -128, -45, 19, 63, 100, -35, -55, -15, 87, 81, -10, 47, -115, -51, 113, -45, 86, 37, -93, -77, -63, -31, 95, 117, -115, 103, -52, -72, 42, 28, -72, 81, -45, 114, 92, -78, 31, -32, -37, -23, 85, 93, -56, -58, 115, -4, -15, 30, -43, -101, -98, -60, -109};
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
    msg.setTimeStamp(0.05845755881290082);
    msg.setSource(33117U);
    msg.setSourceEntity(210U);
    msg.setDestination(57413U);
    msg.setDestinationEntity(116U);
    msg.seq = 56396U;
    msg.value = 209U;
    msg.error.assign("GOAUGNTZURIRVRNUWDDFGUEJXHVHCAKWXILIIBWHYQJPFUKRGDVIGCNCKEDCBOEJWJOUSHMLVKKQSLCWLVOZCQALTNBWSMRAXCKBYIROBHXFOSLHEPBMGZCFTVRPFYMVGPTYANSQZSURPPVXCYETGAIHIXQRQDMGBMP");

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
    msg.setTimeStamp(0.9424941413313193);
    msg.setSource(59714U);
    msg.setSourceEntity(92U);
    msg.setDestination(27795U);
    msg.setDestinationEntity(172U);
    msg.seq = 1036U;
    msg.value = 231U;
    msg.error.assign("LKYRGEUBBUXVLPDAZJBMRCJZLRPRSQNTPXFEINLGDVKZIGRQTZUHANLIYTGSLCHINBYFWQMMIUGQJWVHQKAENRXWECOBTUDOJNHAMSABKQCDBGHLCONZSQ");

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
    msg.setTimeStamp(0.25160364121745027);
    msg.setSource(176U);
    msg.setSourceEntity(61U);
    msg.setDestination(5533U);
    msg.setDestinationEntity(54U);
    msg.seq = 46743U;
    msg.value = 246U;
    msg.error.assign("BLEJZDFQPOFZTWGQPPECGUSTTVYBPKLNMIXESIWKOVXHOLHWFMCNRB");

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
    msg.setTimeStamp(0.3962161973589793);
    msg.setSource(32809U);
    msg.setSourceEntity(1U);
    msg.setDestination(17837U);
    msg.setDestinationEntity(118U);
    msg.seq = 58056U;
    msg.sys.assign("LDNXKEOMGZTCSPAQMRAWOCZHEJBCCFNBQEYRQGTGZOEKRULZTCRDFWFTBOS");
    msg.value = 0.1154588103062264;

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
    msg.setTimeStamp(0.06399584342165632);
    msg.setSource(3101U);
    msg.setSourceEntity(227U);
    msg.setDestination(7161U);
    msg.setDestinationEntity(171U);
    msg.seq = 35580U;
    msg.sys.assign("ZGLELBNDRWQSMBRNMLVNJJOUE");
    msg.value = 0.8136267530532727;

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
    msg.setTimeStamp(0.5745781802573638);
    msg.setSource(54020U);
    msg.setSourceEntity(195U);
    msg.setDestination(65151U);
    msg.setDestinationEntity(53U);
    msg.seq = 1460U;
    msg.sys.assign("JGQZQYVSIQZTLFBXSPASDONPLVGYGNNWSMPAUDQJPHYWXTWHGOZMPEKCFCGBXCEDGAPRFIUYTFAVAMQHNJSKZMTRIJWHJFCINFJPIAWOFXKBBOAMEMOZGKMHXQSUJSCYAXPKZRYTCORKPKHYAOPBRBTRLMNJYDEGKLXZEDZTKOUIYHVUDNQZVTQWEBQLWAHRBJSJTLCDVRBIWLFMVEGSDFXGXHUUVQORFXCBNUNVRTLHCI");
    msg.value = 0.43197492085094513;

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
    msg.setTimeStamp(0.8920032000441841);
    msg.setSource(43428U);
    msg.setSourceEntity(212U);
    msg.setDestination(30514U);
    msg.setDestinationEntity(245U);
    msg.action = 9U;
    msg.longain = 0.302134839288428;
    msg.latgain = 0.7320787424045926;
    msg.bondthick = 4281591694U;
    msg.leadgain = 0.19887157406108869;
    msg.deconflgain = 0.7643399916414008;

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
    msg.setTimeStamp(0.7251966291520305);
    msg.setSource(11085U);
    msg.setSourceEntity(156U);
    msg.setDestination(48978U);
    msg.setDestinationEntity(68U);
    msg.action = 13U;
    msg.longain = 0.4780825550285349;
    msg.latgain = 0.39384090662074134;
    msg.bondthick = 524156708U;
    msg.leadgain = 0.9152894018233079;
    msg.deconflgain = 0.7252629995959188;

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
    msg.setTimeStamp(0.39451150832674786);
    msg.setSource(48219U);
    msg.setSourceEntity(109U);
    msg.setDestination(18608U);
    msg.setDestinationEntity(145U);
    msg.action = 119U;
    msg.longain = 0.24611576990000616;
    msg.latgain = 0.33782494176894373;
    msg.bondthick = 3596926335U;
    msg.leadgain = 0.7791857438073853;
    msg.deconflgain = 0.2539521776174455;

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
    msg.setTimeStamp(0.7713569865737989);
    msg.setSource(21144U);
    msg.setSourceEntity(103U);
    msg.setDestination(61641U);
    msg.setDestinationEntity(27U);
    msg.err_mean = 0.9605547742709496;
    msg.dist_min_abs = 0.019433037815849485;
    msg.dist_min_mean = 0.24500651967714238;

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
    msg.setTimeStamp(0.8196700041301835);
    msg.setSource(61649U);
    msg.setSourceEntity(207U);
    msg.setDestination(24111U);
    msg.setDestinationEntity(243U);
    msg.err_mean = 0.6564630519192726;
    msg.dist_min_abs = 0.8042821788128484;
    msg.dist_min_mean = 0.27440815855725587;

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
    msg.setTimeStamp(0.2731497740468283);
    msg.setSource(20144U);
    msg.setSourceEntity(50U);
    msg.setDestination(61445U);
    msg.setDestinationEntity(57U);
    msg.err_mean = 0.4763332866215363;
    msg.dist_min_abs = 0.8018989315041308;
    msg.dist_min_mean = 0.9816802470167092;

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
    msg.setTimeStamp(0.646027440055081);
    msg.setSource(4473U);
    msg.setSourceEntity(57U);
    msg.setDestination(54905U);
    msg.setDestinationEntity(225U);
    msg.action = 178U;
    msg.lon_gain = 0.07681206361139659;
    msg.lat_gain = 0.3204747464578803;
    msg.bond_thick = 0.8688237518094616;
    msg.lead_gain = 0.3344217091724767;
    msg.deconfl_gain = 0.6572819566114636;
    msg.accel_switch_gain = 0.5362266841626616;
    msg.safe_dist = 0.15599916878491815;
    msg.deconflict_offset = 0.7567355640077886;
    msg.accel_safe_margin = 0.9183753910326022;
    msg.accel_lim_x = 0.9243405790677279;

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
    msg.setTimeStamp(0.9199555990144022);
    msg.setSource(44655U);
    msg.setSourceEntity(35U);
    msg.setDestination(51341U);
    msg.setDestinationEntity(106U);
    msg.action = 191U;
    msg.lon_gain = 0.3818457833915193;
    msg.lat_gain = 0.35374592725343135;
    msg.bond_thick = 0.46577967129485565;
    msg.lead_gain = 0.10883064353865946;
    msg.deconfl_gain = 0.3881846368435259;
    msg.accel_switch_gain = 0.527531583296107;
    msg.safe_dist = 0.03298717646566873;
    msg.deconflict_offset = 0.8093415908249098;
    msg.accel_safe_margin = 0.9011047700891014;
    msg.accel_lim_x = 0.21503759778418163;

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
    msg.setTimeStamp(0.6086000846153007);
    msg.setSource(65100U);
    msg.setSourceEntity(71U);
    msg.setDestination(37092U);
    msg.setDestinationEntity(162U);
    msg.action = 86U;
    msg.lon_gain = 0.19002460662478604;
    msg.lat_gain = 0.1364002324921556;
    msg.bond_thick = 0.32083021688911395;
    msg.lead_gain = 0.6270261753449909;
    msg.deconfl_gain = 0.8351857439397028;
    msg.accel_switch_gain = 0.3777035558427644;
    msg.safe_dist = 0.6430286292230882;
    msg.deconflict_offset = 0.7580339884074155;
    msg.accel_safe_margin = 0.4787815929051087;
    msg.accel_lim_x = 0.48163889500969026;

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
    msg.setTimeStamp(0.8264409710086839);
    msg.setSource(13594U);
    msg.setSourceEntity(14U);
    msg.setDestination(36955U);
    msg.setDestinationEntity(182U);
    msg.type = 203U;
    msg.op = 254U;
    msg.err_mean = 0.8139037175101524;
    msg.dist_min_abs = 0.9369036254958583;
    msg.dist_min_mean = 0.9482183445464116;
    msg.roll_rate_mean = 0.6764488795567843;
    msg.time = 0.24392893037636765;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 165U;
    tmp_msg_0.lon_gain = 0.7627007496285751;
    tmp_msg_0.lat_gain = 0.3061204121759371;
    tmp_msg_0.bond_thick = 0.5239677520502455;
    tmp_msg_0.lead_gain = 0.9391270237027769;
    tmp_msg_0.deconfl_gain = 0.19663142680676826;
    tmp_msg_0.accel_switch_gain = 0.7223351617392348;
    tmp_msg_0.safe_dist = 0.4658298714851846;
    tmp_msg_0.deconflict_offset = 0.5558624617038883;
    tmp_msg_0.accel_safe_margin = 0.8121476409292929;
    tmp_msg_0.accel_lim_x = 0.026010644111695624;
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
    msg.setTimeStamp(0.630397765914929);
    msg.setSource(1258U);
    msg.setSourceEntity(135U);
    msg.setDestination(6487U);
    msg.setDestinationEntity(151U);
    msg.type = 210U;
    msg.op = 180U;
    msg.err_mean = 0.9190140743022256;
    msg.dist_min_abs = 0.022908076449982495;
    msg.dist_min_mean = 0.8433618463835252;
    msg.roll_rate_mean = 0.5046623580367778;
    msg.time = 0.37451359515251903;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 97U;
    tmp_msg_0.lon_gain = 0.17570801095119348;
    tmp_msg_0.lat_gain = 0.7611807319608062;
    tmp_msg_0.bond_thick = 0.8095222670681662;
    tmp_msg_0.lead_gain = 0.8474138340437826;
    tmp_msg_0.deconfl_gain = 0.26728214072864054;
    tmp_msg_0.accel_switch_gain = 0.027629892160491054;
    tmp_msg_0.safe_dist = 0.9600576827452508;
    tmp_msg_0.deconflict_offset = 0.594190465856745;
    tmp_msg_0.accel_safe_margin = 0.7372414069350649;
    tmp_msg_0.accel_lim_x = 0.46452578425050617;
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
    msg.setTimeStamp(0.6182970207161241);
    msg.setSource(24950U);
    msg.setSourceEntity(154U);
    msg.setDestination(55389U);
    msg.setDestinationEntity(76U);
    msg.type = 76U;
    msg.op = 120U;
    msg.err_mean = 0.3000199650864013;
    msg.dist_min_abs = 0.26268139683435976;
    msg.dist_min_mean = 0.7393680337912628;
    msg.roll_rate_mean = 0.7008666727741075;
    msg.time = 0.693022455678259;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 120U;
    tmp_msg_0.lon_gain = 0.11511896303952673;
    tmp_msg_0.lat_gain = 0.1042940131782536;
    tmp_msg_0.bond_thick = 0.41625569893831493;
    tmp_msg_0.lead_gain = 0.6558784224258882;
    tmp_msg_0.deconfl_gain = 0.061024009611696184;
    tmp_msg_0.accel_switch_gain = 0.7745969498293646;
    tmp_msg_0.safe_dist = 0.7951381013290817;
    tmp_msg_0.deconflict_offset = 0.6030408277477712;
    tmp_msg_0.accel_safe_margin = 0.24258419611602422;
    tmp_msg_0.accel_lim_x = 0.18859520657027162;
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
    msg.setTimeStamp(0.13312267648392784);
    msg.setSource(15014U);
    msg.setSourceEntity(5U);
    msg.setDestination(18418U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.6534408866904501;
    msg.lon = 0.7010871497863604;
    msg.eta = 3448378085U;
    msg.duration = 14059U;

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
    msg.setTimeStamp(0.9282164362363609);
    msg.setSource(57540U);
    msg.setSourceEntity(48U);
    msg.setDestination(41950U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.13785651762646678;
    msg.lon = 0.9560096202189364;
    msg.eta = 734586269U;
    msg.duration = 40850U;

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
    msg.setTimeStamp(0.8989175354525405);
    msg.setSource(4537U);
    msg.setSourceEntity(90U);
    msg.setDestination(21180U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.25089326661992595;
    msg.lon = 0.23750870465240703;
    msg.eta = 2038993153U;
    msg.duration = 33642U;

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
    msg.setTimeStamp(0.023330494810165914);
    msg.setSource(42684U);
    msg.setSourceEntity(80U);
    msg.setDestination(43940U);
    msg.setDestinationEntity(2U);
    msg.plan_id = 7531U;

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
    msg.setTimeStamp(0.7511523166760026);
    msg.setSource(28469U);
    msg.setSourceEntity(23U);
    msg.setDestination(25282U);
    msg.setDestinationEntity(248U);
    msg.plan_id = 52266U;

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
    msg.setTimeStamp(0.5628683196039563);
    msg.setSource(32548U);
    msg.setSourceEntity(165U);
    msg.setDestination(8988U);
    msg.setDestinationEntity(127U);
    msg.plan_id = 56557U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.5266107571164167;
    tmp_msg_0.lon = 0.30630861637648377;
    tmp_msg_0.eta = 4011230583U;
    tmp_msg_0.duration = 52855U;
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
    msg.setTimeStamp(0.4994989190781043);
    msg.setSource(25905U);
    msg.setSourceEntity(222U);
    msg.setDestination(10680U);
    msg.setDestinationEntity(74U);
    msg.type = 134U;
    msg.command = 4U;
    msg.settings.assign("VABLHGCUOVACYZGSPQRULRCFMAILUGWORBBCDZMETOCSMOOLVOWDJHGSEIWARJYHWOZGLIQKSMMFOYYGIYCKOMXNEMEVDJWZQBHPTWZFLDBTUHS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 2004U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6082227062272183;
    tmp_tmp_msg_0_0.lon = 0.24893510322373746;
    tmp_tmp_msg_0_0.eta = 3942226616U;
    tmp_tmp_msg_0_0.duration = 19744U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UPGTOTACCLSJZJLFZBRXVTQNHUWWVHJHNHGBKMEQIAZFGNBWKBBRNFWAFGZVKJSNEUXAVCLWLXILKOTGWFGZLBDRXMEHYHSGCXCVRLXUGHDXPPAKHOSZDSXTNMDUHRUYOOPOYJNSLIAWMAXDBPZQZYSPYTTQTQZTVMEMVYHIOGEPRYKMKW");

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
    msg.setTimeStamp(0.8216013958677563);
    msg.setSource(19431U);
    msg.setSourceEntity(33U);
    msg.setDestination(8908U);
    msg.setDestinationEntity(209U);
    msg.type = 14U;
    msg.command = 106U;
    msg.settings.assign("RUDLOCKNSFKFREEVBY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 42483U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("MDCFKIZVVLUQHMXHHLUQPZWSKFHEEJCTRNDARUJNLBDVVMYQSAUSTCWIRKZLIFFBLJRYLPPWIMNQVETYNNRIOUXXQQCPUMWGPHDFAVKCUTUFLZXYAWGTNOBWEYSSKQOSYZGDGAJ");

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
    msg.setTimeStamp(0.5381831707636103);
    msg.setSource(60333U);
    msg.setSourceEntity(241U);
    msg.setDestination(31820U);
    msg.setDestinationEntity(108U);
    msg.type = 177U;
    msg.command = 107U;
    msg.settings.assign("GTXIKAILFVAONFGQTQHIOBFEFWHNNZARNPBEUTXCHLJKQRDPPXOJXNJGDHTCXGNIVOECELRNMOBFYTULDIWIRQOUKELYJBVPRSQWVOVRZGSCYXUXWMJBKYKGYZKITYYDOCHDWHIMUKAZVXCLYUWRKAZKSQBSTXKYYPQLFZMROZAVDMBZQWULMBSPMIEJUFVCISESLRVAAJTGWJRBWP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19565U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NLIHYFIGUEGQPFKOUDJTHGHNLNJPDROERXKDXRVNVFPPFX");

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
    msg.setTimeStamp(0.3121733387547436);
    msg.setSource(59852U);
    msg.setSourceEntity(159U);
    msg.setDestination(4315U);
    msg.setDestinationEntity(74U);
    msg.state = 226U;
    msg.plan_id = 58402U;
    msg.wpt_id = 150U;
    msg.settings_chk = 35235U;

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
    msg.setTimeStamp(0.9355401485056692);
    msg.setSource(42262U);
    msg.setSourceEntity(82U);
    msg.setDestination(21433U);
    msg.setDestinationEntity(27U);
    msg.state = 174U;
    msg.plan_id = 59044U;
    msg.wpt_id = 58U;
    msg.settings_chk = 35230U;

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
    msg.setTimeStamp(0.35338290586448606);
    msg.setSource(57058U);
    msg.setSourceEntity(64U);
    msg.setDestination(7602U);
    msg.setDestinationEntity(32U);
    msg.state = 82U;
    msg.plan_id = 42185U;
    msg.wpt_id = 184U;
    msg.settings_chk = 28520U;

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
    msg.setTimeStamp(0.11494753699980964);
    msg.setSource(1944U);
    msg.setSourceEntity(79U);
    msg.setDestination(49681U);
    msg.setDestinationEntity(85U);
    msg.uid = 48U;
    msg.frag_number = 157U;
    msg.num_frags = 218U;
    const char tmp_msg_0[] = {61, 54, -13, -33, 28, -103, -26, 125, 72, -62, 59, -84, -90, -38, -11, 37, 31, -88, -61, -120, 20, 30, -1, 75, -62, -106, 11, -56, 106, -109, -108, -69, 25, -15, -40, 13, 1, 51, 4, -25, -97, -30, 100, -37, -54, -127, 121, 104, 9, -12, -103, -64, 55, 85, -90, 58, 83, 53, -57, 6, -42, -104, -105, -78, 115, -69, 71, -55, 113, -31, -54, -25, -20, -73, -40, -58, 87, -40, -17, 84, 50, 36, -31, 44, -121, -21, -44, 51, 3, 39, -79, 49, -64, -84, -18, 85, -73, -42, 88, 2, -81, -102, -19, 35, 57, 83, -114, -53, -115, 18, -13, -30, -51, 117, -85, 43, 44, -114, 70, -127, 21, 33, 110, -17, -108, 30, -54, -105, -112, 30, -14, 108, -89, -14, -69, -6, -26, 17, 33, -71, 36, -115, 93, -104, 31, -69, -74, -47, 73, 29};
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
    msg.setTimeStamp(0.07139073341428592);
    msg.setSource(54639U);
    msg.setSourceEntity(77U);
    msg.setDestination(61021U);
    msg.setDestinationEntity(171U);
    msg.uid = 129U;
    msg.frag_number = 120U;
    msg.num_frags = 77U;
    const char tmp_msg_0[] = {2, 44, 24, -14, -39, -125, 24, 53, -15, -73, -73, -119, -92, -123, 83, 61, 119, -65, 33, -107, -12, -105, -24, -19, 94, -9, -88, -96, 57, 44, -52, 98, -68, 88, -62, -36, 30, -59, -65, -95, -42, 104, 55, -96, -19, -11, 11, 97, -106, -97, 17, 89, 62, 12, -15, -75, 16, 31, -53, -113, -118, 57, -38, -24, 42, 51, -70, 53, -110, -73, -5, -2, 42, 76, -77, -124, -92, 115, 3, -103, 64, 7, -126, 52, 53, 4, 8, -127, 48, 43, 51, 2, -82, -104, 5, 8, 28, 102, 108, 79, -78, -28, -5, 85, 120, 101, 49, 0, 25, -122, 15, 110, 29, 82, -17, 94, 98, -12, -84, -21, 90, 101, -26, 51, -51, 91, 104, 95, 114, -69, -91, 58, 40, -111, -100, 27, -109, 13, -86, 124, -23, 50, 44, 82};
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
    msg.setTimeStamp(0.39380540829320443);
    msg.setSource(29750U);
    msg.setSourceEntity(0U);
    msg.setDestination(55631U);
    msg.setDestinationEntity(197U);
    msg.uid = 190U;
    msg.frag_number = 70U;
    msg.num_frags = 25U;
    const char tmp_msg_0[] = {-59, -59, 111, 3, 66, -95, -38, 0, 57, 23, 75, -116, -54, 16, -12, -45, 28, 123, -15, 50, -98, 91, 95, -111, 36, -89, 40, 17, -56, 123, 78, -5, 88, 102, 69, -32, 13, -8, 85, -116, 42, 3, 98, 29, 58, -17, -39, 57, -116, 36, 27, 43, 73, 66, -20, -7, -3, 48, -76, 45, 46, 110, -39, -67, 87, 62, 84, -4, 12, 111, 98, -82, -6, -104, 75, 51, 37, 102, -43, 79, 0, -13, -25, 19, -49, 110, -20, -59, 104, -81, -23, 59, 121, 62, -87, -122, 10, -88, -45, 110, 14, 84, 91, -8, -88, 120, 116, 126, -81, -23, -42, 84, -68, -100, -115, -10, -78, -117, -95, -93, 61, -35, -74, -88, -90, 64, 48, -100, -50, -86, -124, 113, 83, -17, -100, 116, -100, 113, -124, 59, 56, 89, -10, -5, 27, 114, 90, -102, -89, -41, -59, -76, -96, -10, -90, -94, 88, 26, -86, 110, 86, -61, 45, 108, -58, 39, 106, 77, 91, 109, -119, 79, 95, -23, 100, 87, -77, -82, -123, 27, -83, -87, -10, -87, -51, 14, 86, -56, -12, 85, -95, 78, -32, -77, -121, -123, -52, 99, 16, -118, 91, -27, -32, 118, 77, 81, 90, -16, -94, 30, 52, -103, -2, -18, -85, 46, -70, 111, 34, 105, 118, -81, 25, 46, -25, -41, -76, -21, -70, -127, 23, -27, -94, -34, -91};
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
    msg.setTimeStamp(0.5092878494081323);
    msg.setSource(56548U);
    msg.setSourceEntity(155U);
    msg.setDestination(48122U);
    msg.setDestinationEntity(229U);
    msg.content_type.assign("LEWHIFAKRSSUPZJFUXTQMJEFDKIVMNPIYHFJGIHCABTMVNYJTFYXXEOSYUROJPCTQJBXAGABBXWVQQKOEQSRHBYDAAGZ");
    const char tmp_msg_0[] = {111, -103, 13, 60, 9, -46, -87, -91, -120, 81, -111, -94, 13, 61, 91, 73, 108, 46, 24, 115, -26, 119, -83, -116, -55, 77, -52, 85, -37, 112, -44, 37, -78, -98, 93, 29, -78, -1, 43, 60, -47, 21, 100, -35, 56, -26, -25, 7, -89, -19, 2, 31, -6, -11, -15, -19, 18, -34, -21, 58, 67, -50, 8, -111, -99, 92, 4, 33, -63, -33, 104, -85, -122, -37, 33, -38, 25, -82, -90, -97, 19, -86, 108, -111, 99, 39, 33, 61, -105, 79, -24, -101, -77, -9, 126, -50, -35, 106, 86, -116, 74, 28, 49, 85, -7, -28, 50, -40, -33, 33, -38, 46, 64, 99, 106, -55, 11, 68, 87, -8, 59, 32, -25, 14, -58, -54, 79, 35, -120, 104, 45, 9, -35, -88, -20, -98, -103, 30, 87, -16, -32, 6, 7, -50, -45, -103, 79, -114, 29, 94, 92, 36, -128, -116, 109, -125, -68, -43, 88, -74, -91, -30, -67, 5, 29, -103, -119, 51, 115, -100, -92, 116, 119, 85, -101, -119, 101, 105, -116, -119, -30, 22, -11, -26, -100, -53, 54, 80, -71, 94, -117, 99, 123, 103, -105, 110, 87, -79, -44, 113, -121, 103, -53, 67, 37, -127, 70, 18, 83, 84, -89, -117, -106, -122, 18, 29, 42, 66, -100, -69, 90, -23, 18, -83, -119, 105, 108, -109, -88, -91, 72, 13, -114, 72};
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
    msg.setTimeStamp(0.7682104822835758);
    msg.setSource(40584U);
    msg.setSourceEntity(85U);
    msg.setDestination(38409U);
    msg.setDestinationEntity(178U);
    msg.content_type.assign("UPMRVENIKCAUOYVXZDRUWVAEUDTWXVXYCAFIUKAPTQSGBPWOYMZNSOIKLMJUCAOEUTJOTJIIDMSRRGENJXVHUYFDOHZJNCHZCHFPZJSZGFSLXGGDWQQ");
    const char tmp_msg_0[] = {-65, 59, -73, -20, 67, 41, 39, 112, 120, -104, 97, 22, 91, -54, 100, -45, 78, 108, -30, -83, -29, -126, -3, -80, -45, 19, -29, 22, 16, 107, 107, -101, 23, -110, -56, -45, -103, -78, -2, -83, 36, -57, -24, -83, 97, 38, 92, 28, -12, -124, 99, 31, -54, -43, -64, 50, 85, -51, 70, -39, 25, -102, 25, -60, -105, -81, 100, -71, 20, 55, -67, 112, -20, -71, 87, -93, 78, -31, -68, 121, 119, 126, -2, -47, -53, -97, 85, -41, -6, 94, 11, 32, 88, 26, 98, 91, -28, -58, 50, -76, -57, 73, 126, -118, -2, -84, 71, -99, -1, 36, 12, -89, 56, -85, -91, -65, -23, -121, -118, -18, 69, 71, -75, 22, 8, 100, 103};
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
    msg.setTimeStamp(0.5521548253065608);
    msg.setSource(28885U);
    msg.setSourceEntity(46U);
    msg.setDestination(15618U);
    msg.setDestinationEntity(211U);
    msg.content_type.assign("BUEYNJHYDPSTNPWYNYIOCGHVXTHXB");
    const char tmp_msg_0[] = {55, -69, 58, 47, -88, 95, -35, -69, -83, 10, 90, 41, -19, -110, -123, 18, -99, -101, 106, 61, 8, 117, 65, 31, 5, -34, -126, -78, -40, 16, 71, 58, 35, 11, 85, -55, 74, 66, -11, -99, -13, -27, -67, 93, -16, 46, 29, -119, -41, -104, 61, -49, -48, 53, 106, -25, -77, 126, -93, -107, -117, -107, 54, 38, -61, 81, 11, 67, -34, -29, -49, 50, 65, 28, -36, 28, -109, 72, 25, 48, 107, 47, -78, 34, -5, 7, 46, 35, -96, -102, -19, -32, -88, 123, -29, 111, -21, 66, -118, -74, 24, -36, 33, -45, -6, -64, -123, -47, -53, 33, 24, 28, 98, -57, -113, -28, 125, -24, -17, -5, 114, -33, 90, -122, -32, -102, 45, -108, 119, 81, -49, -19, -39, 24, -113, 88, 54, 9, 30, -5, 17, -24, 44, 116, 47, 59, 100, 88, 18, -45, -18, 18, 51, -118, 92, -43, 117, 75, 41, 40, 107, 113, -94, -26, 26, 15, -16, 112, 24, -75, 104, -109, -25, 19, -97, -48, -51, -119, 28, -2, -13, -3, 106, -12, 39, 63, -114, 3, 16, -23, 50, 126, 99, 93, 68, -35, 42, 68, 20, -29, -116, 35, 14};
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
    msg.setTimeStamp(0.5737917478331294);
    msg.setSource(14155U);
    msg.setSourceEntity(57U);
    msg.setDestination(51593U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.0608776923147587);
    msg.setSource(8293U);
    msg.setSourceEntity(248U);
    msg.setDestination(60572U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.9103492082799997);
    msg.setSource(31857U);
    msg.setSourceEntity(159U);
    msg.setDestination(22844U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.383270363891125);
    msg.setSource(25861U);
    msg.setSourceEntity(108U);
    msg.setDestination(1478U);
    msg.setDestinationEntity(113U);
    msg.target = 13539U;
    msg.bearing = 0.6471894037374876;
    msg.elevation = 0.5363420291529705;

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
    msg.setTimeStamp(0.65982680016617);
    msg.setSource(36007U);
    msg.setSourceEntity(66U);
    msg.setDestination(38810U);
    msg.setDestinationEntity(78U);
    msg.target = 9382U;
    msg.bearing = 0.7305361835533055;
    msg.elevation = 0.8414947636535365;

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
    msg.setTimeStamp(0.40527312457930775);
    msg.setSource(41614U);
    msg.setSourceEntity(123U);
    msg.setDestination(55305U);
    msg.setDestinationEntity(23U);
    msg.target = 58658U;
    msg.bearing = 0.3793589076211904;
    msg.elevation = 0.4512916614946929;

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
    msg.setTimeStamp(0.5340399893173503);
    msg.setSource(38124U);
    msg.setSourceEntity(123U);
    msg.setDestination(64182U);
    msg.setDestinationEntity(190U);
    msg.target = 14354U;
    msg.x = 0.0887014975067566;
    msg.y = 0.35115821773000255;
    msg.z = 0.09053995689664485;

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
    msg.setTimeStamp(0.988981336380047);
    msg.setSource(52553U);
    msg.setSourceEntity(184U);
    msg.setDestination(44008U);
    msg.setDestinationEntity(76U);
    msg.target = 43771U;
    msg.x = 0.38167882262922204;
    msg.y = 0.9251813719939005;
    msg.z = 0.8511653448115233;

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
    msg.setTimeStamp(0.7714195322431068);
    msg.setSource(45023U);
    msg.setSourceEntity(192U);
    msg.setDestination(37692U);
    msg.setDestinationEntity(203U);
    msg.target = 772U;
    msg.x = 0.5022208395946767;
    msg.y = 0.4243477885319712;
    msg.z = 0.9527087177083373;

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
    msg.setTimeStamp(0.9552437000196209);
    msg.setSource(50381U);
    msg.setSourceEntity(173U);
    msg.setDestination(43377U);
    msg.setDestinationEntity(16U);
    msg.target = 50166U;
    msg.lat = 0.7313698848306591;
    msg.lon = 0.7198315475266028;
    msg.z_units = 40U;
    msg.z = 0.25571583110707863;

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
    msg.setTimeStamp(0.6751579576711634);
    msg.setSource(6361U);
    msg.setSourceEntity(244U);
    msg.setDestination(33903U);
    msg.setDestinationEntity(251U);
    msg.target = 28923U;
    msg.lat = 0.6336260276230644;
    msg.lon = 0.5031450488280376;
    msg.z_units = 189U;
    msg.z = 0.08656420857979052;

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
    msg.setTimeStamp(0.021349744867209752);
    msg.setSource(61560U);
    msg.setSourceEntity(65U);
    msg.setDestination(42215U);
    msg.setDestinationEntity(246U);
    msg.target = 26874U;
    msg.lat = 0.91586541976649;
    msg.lon = 0.011960502966873565;
    msg.z_units = 168U;
    msg.z = 0.6344234882559054;

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
    msg.setTimeStamp(0.4287802192239729);
    msg.setSource(34048U);
    msg.setSourceEntity(146U);
    msg.setDestination(60517U);
    msg.setDestinationEntity(190U);
    msg.locale.assign("JUMJMFBXLWNXEMPRLWGH");
    const char tmp_msg_0[] = {-51, 21, -4, 20, -52, -112, 77, 95, -24, -25, -40, -111, -83, -59, -5, -72, 35, -81, -58, -72, -26, -97, 67, 41, -77, 60, 64, -123, 60, -66, -69, 75, 100, 41, 42};
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
    msg.setTimeStamp(0.08257289743507612);
    msg.setSource(483U);
    msg.setSourceEntity(220U);
    msg.setDestination(62409U);
    msg.setDestinationEntity(84U);
    msg.locale.assign("ZYYMMSQCGCHDVTFZDFUOIUBQKNHOVVPYLFBMGZENZTUOHOAHQXJDVILRN");
    const char tmp_msg_0[] = {-15, -89, 9, -69, 64, 38, 107, 12, 7, -50, -92, 58, 6, 48, -102, 29, -21, 115, 52, -27, 45, 63, 80, 120, -114, -50, 85, 47, -86, -77, -18, 42, 66, -101, -55, -63, 74, 31, 99, 35, -78, -57, -99, 65, 15, -113, -76, -71, 85, 83, -97, -128, 13, 100, 1, 12, 69, 36, -53, 109, -108, -7, -12, -83, -123, 39, -27, -82, -102, -40, -19, 44, 39, 47, 35, -122, 26, -55, 78, 104, 51, 54, 49, -6, 11, -17, 122};
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
    msg.setTimeStamp(0.30110564902137604);
    msg.setSource(41338U);
    msg.setSourceEntity(94U);
    msg.setDestination(44043U);
    msg.setDestinationEntity(27U);
    msg.locale.assign("JBSKNUMPAXPTWNXBQEWISACQGVFCBOMUTAYAOTFIGJYRZDMJHHZVOFMRCA");
    const char tmp_msg_0[] = {-125, 79, -117, -104, -42, 106, -47, 32, -33, -84, 16, -77, 105, 49, -48, 80, 84, -48, 64, 108, 29, -51, -102, 113, -29, 8, 119, 43, -82, -115, -9, -61, 106, -54, 20, 92, -96, -58, 83, -101, 49, -105, -80, -52, -65, -55, 70, 44, 104, 101, 10, 19, 104, 68, -21, -107, 107, -6, -5, -28, -33, 15, 27, 50, -26, -30, 74, 118, 8, 24, -54, 71, 32, -27, -74, 86, -46, -90, 51, 42, 2, 35, -94, -62, -39, -51, 101, 110, 23, 93, -7, -80, 125, 62, -98, -37, 102, -15, 59, -30, 47, 62, 27, 110, 37, -76, 118, -117, -4, 120, 39, -120, 118, -57, -29, 16, 59, -37, -86, 69, -83, -15, 3};
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
    msg.setTimeStamp(0.505693656478419);
    msg.setSource(40493U);
    msg.setSourceEntity(102U);
    msg.setDestination(812U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.23550152366137034);
    msg.setSource(37804U);
    msg.setSourceEntity(222U);
    msg.setDestination(17823U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.6105297148841579);
    msg.setSource(21241U);
    msg.setSourceEntity(51U);
    msg.setDestination(41143U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.28777244856608997);
    msg.setSource(11060U);
    msg.setSourceEntity(210U);
    msg.setDestination(57828U);
    msg.setDestinationEntity(25U);
    msg.camid = 138U;
    msg.x = 43636U;
    msg.y = 14713U;

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
    msg.setTimeStamp(0.44569819447712344);
    msg.setSource(44915U);
    msg.setSourceEntity(146U);
    msg.setDestination(46590U);
    msg.setDestinationEntity(22U);
    msg.camid = 142U;
    msg.x = 35575U;
    msg.y = 27232U;

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
    msg.setTimeStamp(0.9746474253249683);
    msg.setSource(36294U);
    msg.setSourceEntity(86U);
    msg.setDestination(25168U);
    msg.setDestinationEntity(109U);
    msg.camid = 211U;
    msg.x = 62539U;
    msg.y = 31820U;

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
    msg.setTimeStamp(0.016120521293773393);
    msg.setSource(17131U);
    msg.setSourceEntity(135U);
    msg.setDestination(12471U);
    msg.setDestinationEntity(61U);
    msg.camid = 155U;
    msg.x = 60331U;
    msg.y = 48042U;

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
    msg.setTimeStamp(0.19390873773836015);
    msg.setSource(61746U);
    msg.setSourceEntity(32U);
    msg.setDestination(60774U);
    msg.setDestinationEntity(192U);
    msg.camid = 162U;
    msg.x = 54550U;
    msg.y = 41297U;

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
    msg.setTimeStamp(0.38436270936548755);
    msg.setSource(4471U);
    msg.setSourceEntity(235U);
    msg.setDestination(2678U);
    msg.setDestinationEntity(216U);
    msg.camid = 233U;
    msg.x = 63046U;
    msg.y = 27846U;

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
    msg.setTimeStamp(0.21864583728493558);
    msg.setSource(1346U);
    msg.setSourceEntity(36U);
    msg.setDestination(4640U);
    msg.setDestinationEntity(88U);
    msg.tracking = 102U;
    msg.lat = 0.1209045584065398;
    msg.lon = 0.4057070324929306;
    msg.x = 0.3578109651126208;
    msg.y = 0.4540812076760712;
    msg.z = 0.8960865191772791;

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
    msg.setTimeStamp(0.4381964822849449);
    msg.setSource(13378U);
    msg.setSourceEntity(70U);
    msg.setDestination(52208U);
    msg.setDestinationEntity(83U);
    msg.tracking = 168U;
    msg.lat = 0.8189881620341007;
    msg.lon = 0.3190468910101597;
    msg.x = 0.9166384073650861;
    msg.y = 0.17943296222229965;
    msg.z = 0.15199040876892378;

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
    msg.setTimeStamp(0.5679976556776408);
    msg.setSource(7399U);
    msg.setSourceEntity(82U);
    msg.setDestination(45906U);
    msg.setDestinationEntity(143U);
    msg.tracking = 88U;
    msg.lat = 0.9539271677252603;
    msg.lon = 0.23157453282492713;
    msg.x = 0.9866798284325002;
    msg.y = 0.034970907796959994;
    msg.z = 0.7884065925555951;

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
    msg.setTimeStamp(0.21698891396542663);
    msg.setSource(35778U);
    msg.setSourceEntity(226U);
    msg.setDestination(29379U);
    msg.setDestinationEntity(14U);
    msg.target.assign("TGKFNJNRTLCVQAZPRJJWXACYOHHBPMGEKCCRQLBKMGPVISFEYJOAQDVGINPBGAOHQAUFBXVDFIIZXWOELXFUIMNHBTHKUTOITZDSQRDQMTRJSBNKNUJENUTDFAMNXHHPTBRPEBCKOCVREXXMYMKSFYMMGSXTSWZIRYXHFWGVZZPYODOLLBJEVULKFVRVKISAAATDWGMNJZWULOLSVDUNQYGJHHGFRSZPDCCYYQLWYDQUWE");
    msg.lbearing = 0.6946534207931685;
    msg.lelevation = 0.10068392060963716;
    msg.bearing = 0.33324843195045295;
    msg.elevation = 0.5322285222545556;
    msg.phi = 0.669162340725774;
    msg.theta = 0.3031656959502541;
    msg.psi = 0.6414057273157474;
    msg.accuracy = 0.2546513562632199;

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
    msg.setTimeStamp(0.46280201872196214);
    msg.setSource(3334U);
    msg.setSourceEntity(24U);
    msg.setDestination(64906U);
    msg.setDestinationEntity(215U);
    msg.target.assign("DVZLAUKNPTYFASGJXBJMZULNTFWKAPWAOGERFMMZRSYBCTEBOXGQTFNJWCEHYBDQGXMNYVMTBNKHWCXPHOIWSKNAMOQYKCOTJLADHUYJOFHANEMQPOFSSNZPVCXVPLCGUHZKALDMTOYCIJGKVJIKISNUHWZYORLDIPCXJLUFABJTWDGHDLQESSLUTVLPQEFZEUHVFBCZBIDJRRZVEXIEBGQAFXQSXNWTRRXYMDYIKQRGUPDWGCRMBVIOHWP");
    msg.lbearing = 0.8051639613245927;
    msg.lelevation = 0.07713255912069517;
    msg.bearing = 0.22089245076434516;
    msg.elevation = 0.5574610306232509;
    msg.phi = 0.9420932230369157;
    msg.theta = 0.6382436527789036;
    msg.psi = 0.10830220528239087;
    msg.accuracy = 0.5109172268857892;

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
    msg.setTimeStamp(0.026948252936294548);
    msg.setSource(31314U);
    msg.setSourceEntity(89U);
    msg.setDestination(4288U);
    msg.setDestinationEntity(60U);
    msg.target.assign("WVITEJZMQLCGDEUOUYIBNPSLTSEYZUHWABHPIOZNJAIQVPPSDTMUNANCRTRVPBQZM");
    msg.lbearing = 0.727443973510997;
    msg.lelevation = 0.9722170429214841;
    msg.bearing = 0.8733880973598908;
    msg.elevation = 0.42030839736574666;
    msg.phi = 0.768513954462731;
    msg.theta = 0.5650131774654232;
    msg.psi = 0.24699446240403178;
    msg.accuracy = 0.546557132430147;

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
    msg.setTimeStamp(0.6334664092967203);
    msg.setSource(52759U);
    msg.setSourceEntity(137U);
    msg.setDestination(12052U);
    msg.setDestinationEntity(229U);
    msg.target.assign("YKOYVJQGHAKEJJWIPBWTLSCIULLAUXPVBTYHBXOOYFCWMOSHBNUCDVYCQWZEDLGPXFGKAVW");
    msg.x = 0.4961473660266119;
    msg.y = 0.10850280764872855;
    msg.z = 0.8899632211516827;
    msg.n = 0.013991901564290643;
    msg.e = 0.12197827402353434;
    msg.d = 0.6667410968245442;
    msg.phi = 0.5386936853699659;
    msg.theta = 0.1648361676286988;
    msg.psi = 0.5082371917836895;
    msg.accuracy = 0.2790841342058372;

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
    msg.setTimeStamp(0.13066348358551017);
    msg.setSource(49470U);
    msg.setSourceEntity(129U);
    msg.setDestination(22631U);
    msg.setDestinationEntity(90U);
    msg.target.assign("VRCBVXPXWFWMMQAYANSJLOWVLTXBTNOEQIJDUSEANZRYSUUIUEBQIMPKFBFJNZLCPDIDQBFDVYXKATOUCIWGXEXBFIGYTBTKYRRNHRGZATGRMJDFWFOMLWMLOHINRHJFUYBMCEOKSTDOUDPHEWZEYVPQJQYNZAPMCZZXBOHVXKTSESSPMCKLGWKHQHHPTGUCRZQYL");
    msg.x = 0.1939048942411643;
    msg.y = 0.16283596212914486;
    msg.z = 0.47874478368921913;
    msg.n = 0.6757890772821727;
    msg.e = 0.7656542395407056;
    msg.d = 0.5920986144012359;
    msg.phi = 0.9636217428447714;
    msg.theta = 0.8677960536319291;
    msg.psi = 0.11745282808248081;
    msg.accuracy = 0.7046734125025446;

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
    msg.setTimeStamp(0.5923708454410952);
    msg.setSource(31056U);
    msg.setSourceEntity(58U);
    msg.setDestination(12425U);
    msg.setDestinationEntity(16U);
    msg.target.assign("MSBIVJGNYCUCOJHLYGQHKSRPELZFRGRDLBGGMFTJATIWZGFFXJVJDNSMXAIMQSYOQEQQNMNITIDUTIRKFNEMRWAAWWRNBHVNTRLAQTDPOSOOGIESZMCB");
    msg.x = 0.6679255667643049;
    msg.y = 0.5360275161647661;
    msg.z = 0.6520619447006538;
    msg.n = 0.8112893382232385;
    msg.e = 0.38288227737369185;
    msg.d = 0.23148248069036237;
    msg.phi = 0.101410202248576;
    msg.theta = 0.3922994146209945;
    msg.psi = 0.7517720700108851;
    msg.accuracy = 0.7308863731085908;

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
    msg.setTimeStamp(0.44520500700805976);
    msg.setSource(27355U);
    msg.setSourceEntity(158U);
    msg.setDestination(65456U);
    msg.setDestinationEntity(59U);
    msg.target.assign("NWXLZYTFTWUYXFPAQKYGMAVAEZREMPBRAQOCSVWPXSOSFPBNRCFEGXBGNYMGHQTWFSKITJDQTSIXCELJKZPOIQICQQDLDJEUKUYQTGSWWRBSQOSOYRPZZACUFHUHSPEMZKVNADYMIW");
    msg.lat = 0.016526959209320458;
    msg.lon = 0.35050844236990897;
    msg.z_units = 13U;
    msg.z = 0.9341702197191505;
    msg.accuracy = 0.6838971614236163;

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
    msg.setTimeStamp(0.8044123204236202);
    msg.setSource(48849U);
    msg.setSourceEntity(150U);
    msg.setDestination(18428U);
    msg.setDestinationEntity(62U);
    msg.target.assign("HFRYDNYSLNOJMTQCWBQMAPDAGDTXDVBESAUPAZPUFBHIHGNYZZMWVCCKESCHJBQDXJCVKGUIJLYINLITPGXZCTQKRXNKDUIQF");
    msg.lat = 0.005953583080679836;
    msg.lon = 0.7743301960129071;
    msg.z_units = 32U;
    msg.z = 0.6952790640913422;
    msg.accuracy = 0.23965818300862107;

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
    msg.setTimeStamp(0.2897994915524733);
    msg.setSource(58665U);
    msg.setSourceEntity(32U);
    msg.setDestination(21950U);
    msg.setDestinationEntity(100U);
    msg.target.assign("UAMZUTDCPKQ");
    msg.lat = 0.1826825330530234;
    msg.lon = 0.7055789015212627;
    msg.z_units = 42U;
    msg.z = 0.3308111955129328;
    msg.accuracy = 0.9337642716230882;

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
    msg.setTimeStamp(0.24392555510426617);
    msg.setSource(17135U);
    msg.setSourceEntity(207U);
    msg.setDestination(63997U);
    msg.setDestinationEntity(128U);
    msg.name.assign("ZGQIZLRMBSWUHSTNLQSDZFXXMOQWIZPFEBWMCRURLQVIJIXKCGLBABLGXKFQDUGYTUIZYFERIYOVHGXSTBHANGZVXXNHRSKOBEGNPCNCPENALMFEHZ");
    msg.lat = 0.6221902619235714;
    msg.lon = 0.4876736776240873;
    msg.z = 0.7849380885214218;
    msg.z_units = 100U;

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
    msg.setTimeStamp(0.8794764550424082);
    msg.setSource(39687U);
    msg.setSourceEntity(26U);
    msg.setDestination(9716U);
    msg.setDestinationEntity(53U);
    msg.name.assign("CTKGGTSWUJCDSJTNMYJIWCJSBHKXMACCMKVDRYRPBMSUHVDXWGGAKDEYHYOZBDMJNNLJCUTRLIFAVTQBJVDVZLSPGTWIQBUCULPHZPVSFZQXBUZOOOZTIDFSWMECQWYCNZSZQYUHOGKQAVHPNSVIRJQNWCYKFGINXDAFWVRTBERXUPXLLDADMIEKUXRJLTBNEUXAHFHEFOLKOGPYXOAWAXNRIMORHZKITONZ");
    msg.lat = 0.36272742056795715;
    msg.lon = 0.7665745357930047;
    msg.z = 0.21503281070406577;
    msg.z_units = 246U;

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
    msg.setTimeStamp(0.7351230382036106);
    msg.setSource(20761U);
    msg.setSourceEntity(84U);
    msg.setDestination(17335U);
    msg.setDestinationEntity(175U);
    msg.name.assign("WOKVJLIEDNFLDZURBNZAXGAHBCSKNIFTEZIPDOKVVUSVETTVAXWGEGEAHYFSMWHOPZQLEQDAEFNNFRRXMCUXKYRAAMZQIDHDECBWXIISQHOGGMXMGPSQVYKAAJBEATODUYBSILICGZUJPRJNDYLRXYQHJU");
    msg.lat = 0.9463368285262895;
    msg.lon = 0.6942660767852886;
    msg.z = 0.2265292276897558;
    msg.z_units = 75U;

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
    msg.setTimeStamp(0.7301667395393129);
    msg.setSource(10547U);
    msg.setSourceEntity(61U);
    msg.setDestination(47223U);
    msg.setDestinationEntity(243U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.4756443894624304);
    msg.setSource(50406U);
    msg.setSourceEntity(137U);
    msg.setDestination(45068U);
    msg.setDestinationEntity(31U);
    msg.op = 118U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FSHOEHGYBBCDVRM");
    tmp_msg_0.lat = 0.4058508961692594;
    tmp_msg_0.lon = 0.9939150618862301;
    tmp_msg_0.z = 0.20440356908628732;
    tmp_msg_0.z_units = 145U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5029597755171039);
    msg.setSource(59955U);
    msg.setSourceEntity(183U);
    msg.setDestination(6668U);
    msg.setDestinationEntity(26U);
    msg.op = 135U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FDTHNLYZSARTKWIKBACRLVJYFXOPBKEUXDCRBZATBMYOZN");
    tmp_msg_0.lat = 0.13099541843609674;
    tmp_msg_0.lon = 0.7348919890799305;
    tmp_msg_0.z = 0.006722802768813652;
    tmp_msg_0.z_units = 43U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.39228576312879915);
    msg.setSource(41853U);
    msg.setSourceEntity(24U);
    msg.setDestination(57111U);
    msg.setDestinationEntity(213U);
    msg.value = 0.30379065105032044;
    msg.type = 238U;

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
    msg.setTimeStamp(0.3785661344307053);
    msg.setSource(44082U);
    msg.setSourceEntity(102U);
    msg.setDestination(47653U);
    msg.setDestinationEntity(178U);
    msg.value = 0.04013982951649353;
    msg.type = 32U;

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
    msg.setTimeStamp(0.061692876614474756);
    msg.setSource(4240U);
    msg.setSourceEntity(14U);
    msg.setDestination(63030U);
    msg.setDestinationEntity(159U);
    msg.value = 0.7639576889289351;
    msg.type = 179U;

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
    msg.setTimeStamp(0.4788820358667062);
    msg.setSource(56026U);
    msg.setSourceEntity(177U);
    msg.setDestination(38846U);
    msg.setDestinationEntity(244U);
    msg.value = 0.8542599806466795;

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
    msg.setTimeStamp(0.038557213866352136);
    msg.setSource(29940U);
    msg.setSourceEntity(35U);
    msg.setDestination(52055U);
    msg.setDestinationEntity(178U);
    msg.value = 0.360855885869073;

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
    msg.setTimeStamp(0.24696051150821896);
    msg.setSource(11196U);
    msg.setSourceEntity(88U);
    msg.setDestination(10001U);
    msg.setDestinationEntity(68U);
    msg.value = 0.6730617610580144;

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
    msg.setTimeStamp(0.1263850720110422);
    msg.setSource(62188U);
    msg.setSourceEntity(118U);
    msg.setDestination(49895U);
    msg.setDestinationEntity(87U);
    msg.timestamp_last_service = 0.8244301540799451;
    msg.time_next_service = 0.8553226019368818;
    msg.time_motor_next_service = 0.7862134106004642;
    msg.time_idle_ground = 0.13664858777044397;
    msg.time_idle_air = 0.6255805753735325;
    msg.time_idle_water = 0.5650494225313906;
    msg.time_idle_underwater = 0.5403250664332032;
    msg.time_idle_unknown = 0.5523438300714963;
    msg.time_motor_ground = 0.4117132982423757;
    msg.time_motor_air = 0.7959289192345254;
    msg.time_motor_water = 0.9597487059736034;
    msg.time_motor_underwater = 0.20566093211926684;
    msg.time_motor_unknown = 0.16087431404599406;
    msg.rpm_min = -18080;
    msg.rpm_max = -24167;
    msg.depth_max = 0.027803546598349382;

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
    msg.setTimeStamp(0.1443479717026962);
    msg.setSource(39596U);
    msg.setSourceEntity(63U);
    msg.setDestination(5633U);
    msg.setDestinationEntity(126U);
    msg.timestamp_last_service = 0.9022841522685655;
    msg.time_next_service = 0.6528280909085784;
    msg.time_motor_next_service = 0.9445208293642487;
    msg.time_idle_ground = 0.7260086864585251;
    msg.time_idle_air = 0.38829721832452024;
    msg.time_idle_water = 0.09614133679725168;
    msg.time_idle_underwater = 0.5270875310129536;
    msg.time_idle_unknown = 0.07444882373220574;
    msg.time_motor_ground = 0.5586094094436909;
    msg.time_motor_air = 0.64076024892781;
    msg.time_motor_water = 0.24411047918247553;
    msg.time_motor_underwater = 0.3181741814346023;
    msg.time_motor_unknown = 0.9802418719794299;
    msg.rpm_min = 14724;
    msg.rpm_max = 17294;
    msg.depth_max = 0.8108493476680844;

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
    msg.setTimeStamp(0.23791270009212606);
    msg.setSource(2256U);
    msg.setSourceEntity(61U);
    msg.setDestination(30412U);
    msg.setDestinationEntity(2U);
    msg.timestamp_last_service = 0.6558606282752404;
    msg.time_next_service = 0.18162078455840014;
    msg.time_motor_next_service = 0.23768760251707766;
    msg.time_idle_ground = 0.19506681834702755;
    msg.time_idle_air = 0.7259925449109979;
    msg.time_idle_water = 0.2542923246194406;
    msg.time_idle_underwater = 0.5434813739700924;
    msg.time_idle_unknown = 0.6838812888154215;
    msg.time_motor_ground = 0.5314710868905904;
    msg.time_motor_air = 0.5591319585660236;
    msg.time_motor_water = 0.7691712402578676;
    msg.time_motor_underwater = 0.07154456956835609;
    msg.time_motor_unknown = 0.2228330001469423;
    msg.rpm_min = 11285;
    msg.rpm_max = 18114;
    msg.depth_max = 0.17300769188348397;

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
    msg.setTimeStamp(0.5050891793429407);
    msg.setSource(30759U);
    msg.setSourceEntity(173U);
    msg.setDestination(62734U);
    msg.setDestinationEntity(51U);
    msg.severity = 34U;
    msg.text.assign("YVIWFTPHQVCYBNPHCZQQPSEWEOCDFAYTOGAHGRXTIGVWMZEJBFONTAIDYOMRNNJC");

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
    msg.setTimeStamp(0.574322415999037);
    msg.setSource(12181U);
    msg.setSourceEntity(111U);
    msg.setDestination(13658U);
    msg.setDestinationEntity(16U);
    msg.severity = 155U;
    msg.text.assign("XEBAMXUHNZZDTBCTKXMRGMAOOMWXYHCTXGXSQUJUFUYMPBFWIQLUWLOXCYQXKENAIVZMTWFWPOSOQQFLWSQKMLEQRWTSKSFZRNLEORRUPDNUJEGYHGUZZKVAMKPINVMULIGYECYLQCHLWVRFAPFDGLNFCRDBFSSDFKHIOQMVHHJTBZNYEXYBWHTEANTERYREPYOGINQHDDAJTBKBIIDVJCPJNAZSKAVJOCBXVDTVHDBAJCPGRGPSZIVG");

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
    msg.setTimeStamp(0.020742735823066294);
    msg.setSource(40441U);
    msg.setSourceEntity(52U);
    msg.setDestination(11723U);
    msg.setDestinationEntity(75U);
    msg.severity = 38U;
    msg.text.assign("LIEIUOQJTAVLPHQYZNSBTHCWMTDJVSYRXWGXXECOWGHORCNANYWXKEQPYQIZCVOSFUCSNNWAQXIPRVBSGYMCUSDDMMBTVMOUEXFMCBWGDJZHNRFJBKDPBASBZCHKJAIETMWUBLJQXZTHLZSPHRQDFXWONGLIUYVMBPGEKRAYY");

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
    msg.setTimeStamp(0.7921016066613595);
    msg.setSource(55847U);
    msg.setSourceEntity(146U);
    msg.setDestination(14439U);
    msg.setDestinationEntity(98U);
    msg.channel = -32;
    msg.value = 102761353;
    msg.gain = 115U;

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
    msg.setTimeStamp(0.7850591369661519);
    msg.setSource(48671U);
    msg.setSourceEntity(71U);
    msg.setDestination(15348U);
    msg.setDestinationEntity(197U);
    msg.channel = 111;
    msg.value = -1777993324;
    msg.gain = 245U;

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
    msg.setTimeStamp(0.38840747610992166);
    msg.setSource(23679U);
    msg.setSourceEntity(159U);
    msg.setDestination(41563U);
    msg.setDestinationEntity(104U);
    msg.channel = 4;
    msg.value = -1510235476;
    msg.gain = 48U;

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
    msg.setTimeStamp(0.40888825689803243);
    msg.setSource(14781U);
    msg.setSourceEntity(139U);
    msg.setDestination(2192U);
    msg.setDestinationEntity(137U);
    msg.ch01 = 0.6412249581684833;
    msg.ch02 = 0.9180653645011336;
    msg.ch03 = 0.028980744363098276;
    msg.ch04 = 0.1488123709123078;
    msg.ch05 = 0.17595933069428882;
    msg.ch06 = 0.34921803559801934;
    msg.ch07 = 0.877593217587574;
    msg.ch08 = 0.816265747751265;
    msg.ch09 = 0.6186572468519289;
    msg.ch10 = 0.19179221868334206;
    msg.ch11 = 0.42870734134528266;
    msg.ch12 = 0.6598045493956214;
    msg.ch13 = 0.43451587827360294;
    msg.ch14 = 0.7769714332016396;
    msg.ch15 = 0.643997514752268;
    msg.ch16 = 0.24869704683004912;

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
    msg.setTimeStamp(0.796018447913999);
    msg.setSource(47350U);
    msg.setSourceEntity(123U);
    msg.setDestination(44438U);
    msg.setDestinationEntity(118U);
    msg.ch01 = 0.20461403369866504;
    msg.ch02 = 0.6857126066141424;
    msg.ch03 = 0.5908305234839005;
    msg.ch04 = 0.04229929594370618;
    msg.ch05 = 0.5456079663050678;
    msg.ch06 = 0.6516964449083148;
    msg.ch07 = 0.5053780737176791;
    msg.ch08 = 0.26627212059655025;
    msg.ch09 = 0.9890813944419565;
    msg.ch10 = 0.8382403987856124;
    msg.ch11 = 0.5580828151177752;
    msg.ch12 = 0.33582690305592144;
    msg.ch13 = 0.9854257724212768;
    msg.ch14 = 0.5998241579192373;
    msg.ch15 = 0.38715118699078277;
    msg.ch16 = 0.7823085583447738;

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
    msg.setTimeStamp(0.280216661660192);
    msg.setSource(32967U);
    msg.setSourceEntity(72U);
    msg.setDestination(41020U);
    msg.setDestinationEntity(210U);
    msg.ch01 = 0.777062216054737;
    msg.ch02 = 0.6458489682572938;
    msg.ch03 = 0.16515472480656568;
    msg.ch04 = 0.8007178527561382;
    msg.ch05 = 0.7443762491595023;
    msg.ch06 = 0.49837986697265335;
    msg.ch07 = 0.7690214032779462;
    msg.ch08 = 0.644163471434505;
    msg.ch09 = 0.4524293566777601;
    msg.ch10 = 0.7463348979356934;
    msg.ch11 = 0.6602315580912816;
    msg.ch12 = 0.23038733587415294;
    msg.ch13 = 0.4930819185514158;
    msg.ch14 = 0.4022406755058796;
    msg.ch15 = 0.6020074416670591;
    msg.ch16 = 0.19892383401276603;

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
    IMC::Thrust msg;
    msg.setTimeStamp(0.5699887346896445);
    msg.setSource(4623U);
    msg.setSourceEntity(126U);
    msg.setDestination(15425U);
    msg.setDestinationEntity(164U);
    msg.value = 0.9483109341129611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Thrust #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Thrust msg;
    msg.setTimeStamp(0.822528950257051);
    msg.setSource(18436U);
    msg.setSourceEntity(118U);
    msg.setDestination(2456U);
    msg.setDestinationEntity(11U);
    msg.value = 0.668730372955523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Thrust #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Thrust msg;
    msg.setTimeStamp(0.08890575752343943);
    msg.setSource(5536U);
    msg.setSourceEntity(222U);
    msg.setDestination(21069U);
    msg.setDestinationEntity(236U);
    msg.value = 0.4020222306141342;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Thrust #2", msg == *msg_d);
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
    msg.setTimeStamp(0.11280794139403938);
    msg.setSource(444U);
    msg.setSourceEntity(225U);
    msg.setDestination(7858U);
    msg.setDestinationEntity(100U);
    msg.value = 0.8623151388579514;

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
    msg.setTimeStamp(0.13314711001216295);
    msg.setSource(4294U);
    msg.setSourceEntity(63U);
    msg.setDestination(28942U);
    msg.setDestinationEntity(233U);
    msg.value = 0.27993131804325744;

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
    msg.setTimeStamp(0.9545964114544032);
    msg.setSource(62898U);
    msg.setSourceEntity(222U);
    msg.setDestination(22860U);
    msg.setDestinationEntity(232U);
    msg.value = 0.6051225644981708;

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
