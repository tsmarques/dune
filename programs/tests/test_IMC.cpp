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
// IMC XML MD5: 27766c007581e5df157a3b42843137b8                            *
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
    msg.setTimeStamp(0.8601675957844457);
    msg.setSource(9561U);
    msg.setSourceEntity(106U);
    msg.setDestination(40472U);
    msg.setDestinationEntity(15U);
    msg.state = 148U;
    msg.flags = 52U;
    msg.description.assign("QBSTTGGORAMQQACPSBFPDRKMYTNLFHNTTLSJRJCYCERLOAYFDBIVOTVJRNZHFWMPINERUBYEZQPNBPIGMRXWKSOVWSXHVCZIUTMHAXXYORZYXYILMUHJWZSLQJUEYLIAUXXVVKDYQAJFWWDMRHJFTPLECGIBDOJZNVSQPBNFPJCEHRHMGNKUCGKNWYBTGVSBUAFEHLQ");

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
    msg.setTimeStamp(0.42404868195438317);
    msg.setSource(4090U);
    msg.setSourceEntity(238U);
    msg.setDestination(53905U);
    msg.setDestinationEntity(224U);
    msg.state = 35U;
    msg.flags = 185U;
    msg.description.assign("KBBCFFNWKURKDWUTKFHQPXNTSORSRVMTEWHGIFIOBTYVSGJSLWHYJFJBZKDUXLNZEVPDQECRNUDOULLSGSANMQZWVGTAKEAMOHKJGLJQXCFDCBJBMJJYDCMACGZRDLWIBFXSVAXEQLYQJFPWKVWCXYGUAEEHOCZVOPTVXJG");

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
    msg.setTimeStamp(0.313810698760576);
    msg.setSource(54714U);
    msg.setSourceEntity(121U);
    msg.setDestination(25315U);
    msg.setDestinationEntity(118U);
    msg.state = 97U;
    msg.flags = 200U;
    msg.description.assign("WLAOUUXLIAFMRHQYXYREKQP");

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
    msg.setTimeStamp(0.8526579589045844);
    msg.setSource(55991U);
    msg.setSourceEntity(12U);
    msg.setDestination(52382U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.4175193994175963);
    msg.setSource(12210U);
    msg.setSourceEntity(193U);
    msg.setDestination(52137U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.4752925898085246);
    msg.setSource(37608U);
    msg.setSourceEntity(5U);
    msg.setDestination(59964U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.46873295005906124);
    msg.setSource(44288U);
    msg.setSourceEntity(153U);
    msg.setDestination(25622U);
    msg.setDestinationEntity(249U);
    msg.id = 154U;
    msg.label.assign("VCGLNVZMZRLEANZQEQJQKNCJICSCUMYXWBSAWPBBWDHKILUEHOYEXKYBRKZWCTVNJGFLFUJURGDYXHNQOEHROUHIWBJRTOTGPHVFGSXDOPTGMCSDFFOIJGAJ");
    msg.component.assign("SGFWBXTSQBNUCKUJAGQHHLKJGSIUFPLIM");
    msg.act_time = 20793U;
    msg.deact_time = 20821U;

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
    msg.setTimeStamp(0.6187280626755356);
    msg.setSource(13580U);
    msg.setSourceEntity(21U);
    msg.setDestination(15133U);
    msg.setDestinationEntity(45U);
    msg.id = 178U;
    msg.label.assign("TSDUSNBVAWBHVOKRWMXMYAZTQAVGRTFOXXSZKDNJXSEGUNTJHATMMDQKIETXBPWZMSEYPRJYIRZQTVICRUVIZYQPAKAHBWCPIMSQCJIUXFNAUFWFVDXKSQSWFKLVLKJWGVLBYKILOPFFUBCBHNHZYOSUFJXQKDWERBNCBLOFLUORJXEUJECZLVZFNYDGTHAIIMPNNGCOXDOSNIODETGVOQGLHHRPEUZPGRYWG");
    msg.component.assign("GFEECJTDYOKQNNYQAWUPNHIMKCXKVPNSOTXMBIORDRJIHTTCMMFMPEZTBFAVMKOHCZNSFOQCFLBIWWJIUPANEBFVGUJAWBQBYYQERJADADIWBKVCASSMENYISFMFYQOVTJUVKRWDQEIVSLGPSDBZTNNUSHETZMOQLDBLDCIGGRYZKAUFNXDTLG");
    msg.act_time = 34730U;
    msg.deact_time = 10608U;

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
    msg.setTimeStamp(0.45412352681604806);
    msg.setSource(43505U);
    msg.setSourceEntity(51U);
    msg.setDestination(3785U);
    msg.setDestinationEntity(225U);
    msg.id = 16U;
    msg.label.assign("LRSEYDRIXVLOASKNLAQOYMATSRKNYZNHUYFAMOMQGZBYXXUGPFGZSBAFTNHHCMIUUBKEZMHWOQRVWEWGIOVPQJCKWGJVGWYISSTLALJECTKTOUVUSBIEBXBJUNFTGMRBJDPDCUGXPGXPLWZHDKRETPOQVPJBZYYRPHHCCXDNKIJUYBIVKEXEIQWACDSRCTMQMFCJKYMIANUXQWGIHVAWSCLQOPDFRFNAJSKTHPXLFFLBZNHVEODJZTWQLMNFO");
    msg.component.assign("SUUTADKYBSZYBIAWKMQQFDZTRBXNZNEIMFGPVXMTCVOXSSEJCFBPRLQVMWSUOKBMVQCGRGHYYQIIRHPQNROOMYOQUBNTKLIDDQCCSWMLJZRWDEEFZJOXESLDKGPFOECTHBHQKHWUYCSPRKGJRILWUFCGBRVTEJQHWWKMUVWDVJTGYJLVF");
    msg.act_time = 10627U;
    msg.deact_time = 4649U;

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
    msg.setTimeStamp(0.17914808077927935);
    msg.setSource(29357U);
    msg.setSourceEntity(16U);
    msg.setDestination(20499U);
    msg.setDestinationEntity(202U);
    msg.id = 14U;

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
    msg.setTimeStamp(0.9828744312157351);
    msg.setSource(39367U);
    msg.setSourceEntity(74U);
    msg.setDestination(47807U);
    msg.setDestinationEntity(74U);
    msg.id = 101U;

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
    msg.setTimeStamp(0.2892968320174354);
    msg.setSource(58481U);
    msg.setSourceEntity(153U);
    msg.setDestination(24296U);
    msg.setDestinationEntity(24U);
    msg.id = 181U;

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
    msg.setTimeStamp(0.4106228374657024);
    msg.setSource(50935U);
    msg.setSourceEntity(240U);
    msg.setDestination(25233U);
    msg.setDestinationEntity(252U);
    msg.op = 103U;
    msg.list.assign("OWZTAPIPJERXIEAJWLVDKRJEJTXXEHZTYNUWBIEDOZTQFDXYOYCHCRNNUCUPIFIIRFFFSVPWOVNSMHSDXZDUKMAUCKVFVSDSXKZGNRJRLEQNZGCANGAGBYSNDLMVGXCYPWVHGBEHQHYYYCPJLRLEAABQNKBZZXLQYSLLSRGIIWOFUXSGZIVHLHORJWQTKGOO");

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
    msg.setTimeStamp(0.017647974898758467);
    msg.setSource(24219U);
    msg.setSourceEntity(93U);
    msg.setDestination(26606U);
    msg.setDestinationEntity(201U);
    msg.op = 244U;
    msg.list.assign("OXOWFKJDBGXILIUWFMYHEIWQCICSASKSLECVFHHBSILPMSQACCRIURXZNUOLKZYQTPATCD");

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
    msg.setTimeStamp(0.4260760416648418);
    msg.setSource(31268U);
    msg.setSourceEntity(151U);
    msg.setDestination(28059U);
    msg.setDestinationEntity(22U);
    msg.op = 86U;
    msg.list.assign("YSISTPAPFGTUQEHHVYITWQFPOSWTAXBHVWANNUNFSMCIJLIVLWGRLFVEDQQKTYIXYMHMYCDREDJAXBDKPJOCTZKAUNNDENZJMMYJ");

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
    msg.setTimeStamp(0.619685886995702);
    msg.setSource(4148U);
    msg.setSourceEntity(225U);
    msg.setDestination(9746U);
    msg.setDestinationEntity(77U);
    msg.value = 124U;

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
    msg.setTimeStamp(0.9907215293291136);
    msg.setSource(46426U);
    msg.setSourceEntity(237U);
    msg.setDestination(62548U);
    msg.setDestinationEntity(209U);
    msg.value = 90U;

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
    msg.setTimeStamp(0.07455678658522458);
    msg.setSource(27361U);
    msg.setSourceEntity(251U);
    msg.setDestination(31975U);
    msg.setDestinationEntity(142U);
    msg.value = 242U;

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
    msg.setTimeStamp(0.3156772865246932);
    msg.setSource(16979U);
    msg.setSourceEntity(156U);
    msg.setDestination(42357U);
    msg.setDestinationEntity(31U);
    msg.consumer.assign("RRGAHSQFBCPIDUZYSQPBTTCQBCBMJTZDILOHOOKZXOJGGRXGFCYVNNTQZGPTDNSDQOTTXKPSFDYWQKKBEZVMKHVIIEAXADLDAWDCWYFOLMBGVCUSUSLHAOSTRLNLDQYXXVIJVXWMBWPHGHPZLPKNNJBNKRQYGXIEZEWIAJUUUWMDCOJUAMYP");
    msg.message_id = 20193U;

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
    msg.setTimeStamp(0.7744025182575243);
    msg.setSource(48973U);
    msg.setSourceEntity(97U);
    msg.setDestination(35741U);
    msg.setDestinationEntity(140U);
    msg.consumer.assign("WYZRYFMXGMQCDEHPDHFGSQUFLSFTOKZPNNHDJDACOJCEQTKLFCJUXGBHFUQHGROACTNKTZXIXXYKUEVNZLVYKSYWPIZPJJVPCQEDMWDBSEW");
    msg.message_id = 14257U;

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
    msg.setTimeStamp(0.1060756137420561);
    msg.setSource(61600U);
    msg.setSourceEntity(216U);
    msg.setDestination(49086U);
    msg.setDestinationEntity(224U);
    msg.consumer.assign("IDXCYLUFAZFVYEAAEQUGULROOKALNHXEAIKYCADATPLLVMDGOQHRAJZCMOFSJDAPFTQJFWTZUERKPBSXBCNDVBQNSQHNIKVQOGISOFCNZBRGHGEANMPHJWCXSKNRUSWHZIGQHTPYETZMYBUFDSPJGERPKHLBJXVECDUHXEXDRVVKICXYXWWYJTKUMOJYMIBCGGPYPPLNOUWTLRZRNJ");
    msg.message_id = 36066U;

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
    msg.setTimeStamp(0.3289570252136367);
    msg.setSource(3119U);
    msg.setSourceEntity(75U);
    msg.setDestination(48017U);
    msg.setDestinationEntity(50U);
    msg.type = 159U;

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
    msg.setTimeStamp(0.3199747713274024);
    msg.setSource(46591U);
    msg.setSourceEntity(233U);
    msg.setDestination(14765U);
    msg.setDestinationEntity(230U);
    msg.type = 53U;

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
    msg.setTimeStamp(0.9148993462337691);
    msg.setSource(14241U);
    msg.setSourceEntity(121U);
    msg.setDestination(49023U);
    msg.setDestinationEntity(175U);
    msg.type = 95U;

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
    msg.setTimeStamp(0.5402441932858685);
    msg.setSource(14870U);
    msg.setSourceEntity(47U);
    msg.setDestination(2203U);
    msg.setDestinationEntity(123U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.9110986180884854);
    msg.setSource(41769U);
    msg.setSourceEntity(40U);
    msg.setDestination(31070U);
    msg.setDestinationEntity(4U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.7057084483681492);
    msg.setSource(13990U);
    msg.setSourceEntity(8U);
    msg.setDestination(49492U);
    msg.setDestinationEntity(197U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.7603605190064927);
    msg.setSource(34814U);
    msg.setSourceEntity(233U);
    msg.setDestination(21838U);
    msg.setDestinationEntity(161U);
    msg.total_steps = 191U;
    msg.step_number = 81U;
    msg.step.assign("SIWCNUYXWGXBDRGTADSSLQSBNCKGJCMHOYMBNNYWDGJRQBTWTQQOUSSOVHCEKMKDEJUVXFCEYFWGQXXXATZYRLZFOHNLRSKXIKDHKBFKWNCFMPPNJETTBAHPVPBIJPB");
    msg.flags = 27U;

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
    msg.setTimeStamp(0.03510143087088802);
    msg.setSource(51716U);
    msg.setSourceEntity(61U);
    msg.setDestination(29292U);
    msg.setDestinationEntity(216U);
    msg.total_steps = 68U;
    msg.step_number = 8U;
    msg.step.assign("ZYEHPXKPFMTISZKEPFBWHQKLKMXTKYBEXDNPGDQGNPARCTNOYNHYCNWLBSWWYEHYDFJPODHDAHKFBKCZG");
    msg.flags = 0U;

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
    msg.setTimeStamp(0.43412781738358686);
    msg.setSource(5095U);
    msg.setSourceEntity(24U);
    msg.setDestination(64509U);
    msg.setDestinationEntity(67U);
    msg.total_steps = 228U;
    msg.step_number = 126U;
    msg.step.assign("XUVDABRIDSIRWBRMNWDLWMCQHVNJEPV");
    msg.flags = 227U;

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
    msg.setTimeStamp(0.03229775460652162);
    msg.setSource(62079U);
    msg.setSourceEntity(234U);
    msg.setDestination(46823U);
    msg.setDestinationEntity(4U);
    msg.state = 40U;
    msg.error.assign("SCIUSXQEOBGHWNXHSHKZFTDWYGOLKVGSSDBTNZXYHFUWEJQLNQMFMVRUACIUHLAKJJGMJFJDFEBQFCHAWCPSLGR");

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
    msg.setTimeStamp(0.26282330460112335);
    msg.setSource(974U);
    msg.setSourceEntity(236U);
    msg.setDestination(30448U);
    msg.setDestinationEntity(203U);
    msg.state = 41U;
    msg.error.assign("ZMJFAEQACZSVPSNEKHCZLZSQBCBUDJSQASDPDJDXSPNERFUHHNHNCWMHRQGCKOPWIBLBXXJJIKVLNXIGHEEWZJNSZYMXFFWQYPN");

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
    msg.setTimeStamp(0.07998316407475392);
    msg.setSource(60106U);
    msg.setSourceEntity(105U);
    msg.setDestination(36601U);
    msg.setDestinationEntity(126U);
    msg.state = 138U;
    msg.error.assign("AZKCVNWYJLQRYCPZO");

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
    msg.setTimeStamp(0.7231597338161743);
    msg.setSource(57697U);
    msg.setSourceEntity(202U);
    msg.setDestination(25142U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.025402184606582834);
    msg.setSource(26302U);
    msg.setSourceEntity(122U);
    msg.setDestination(5395U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.510954816206024);
    msg.setSource(10976U);
    msg.setSourceEntity(162U);
    msg.setDestination(38192U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.7810119886100366);
    msg.setSource(62491U);
    msg.setSourceEntity(201U);
    msg.setDestination(44560U);
    msg.setDestinationEntity(105U);
    msg.op = 252U;
    msg.speed_min = 0.8895405861472183;
    msg.speed_max = 0.7187362217104444;
    msg.long_accel = 0.7233985390006871;
    msg.alt_max_msl = 0.7707154761313092;
    msg.dive_fraction_max = 0.48705424732926494;
    msg.climb_fraction_max = 0.7239998674550885;
    msg.bank_max = 0.2965728784093602;
    msg.p_max = 0.05029781772511144;
    msg.pitch_min = 0.8020246277106163;
    msg.pitch_max = 0.9496257022196494;
    msg.q_max = 0.9276437431954201;
    msg.g_min = 0.6274876562619283;
    msg.g_max = 0.4280440030979962;
    msg.g_lat_max = 0.9971993799834192;
    msg.rpm_min = 0.5288966748028914;
    msg.rpm_max = 0.2783576159921052;
    msg.rpm_rate_max = 0.15711971650284373;

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
    msg.setTimeStamp(0.07481393074493947);
    msg.setSource(2643U);
    msg.setSourceEntity(69U);
    msg.setDestination(24675U);
    msg.setDestinationEntity(65U);
    msg.op = 142U;
    msg.speed_min = 0.03234751437667838;
    msg.speed_max = 0.06470684492380274;
    msg.long_accel = 0.6805494702915645;
    msg.alt_max_msl = 0.029921429719986792;
    msg.dive_fraction_max = 0.6129345161095697;
    msg.climb_fraction_max = 0.3051181577890817;
    msg.bank_max = 0.3707005282214645;
    msg.p_max = 0.837119461509275;
    msg.pitch_min = 0.13871660888819304;
    msg.pitch_max = 0.45586908352194355;
    msg.q_max = 0.2069014787382728;
    msg.g_min = 0.8144761881853023;
    msg.g_max = 0.48267084787851333;
    msg.g_lat_max = 0.26161260205194636;
    msg.rpm_min = 0.7835001680760137;
    msg.rpm_max = 0.1774810293961797;
    msg.rpm_rate_max = 0.5132858569947453;

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
    msg.setTimeStamp(0.7496780675484974);
    msg.setSource(7603U);
    msg.setSourceEntity(174U);
    msg.setDestination(14009U);
    msg.setDestinationEntity(9U);
    msg.op = 242U;
    msg.speed_min = 0.6059593259060094;
    msg.speed_max = 0.8752323320152336;
    msg.long_accel = 0.43321067686025705;
    msg.alt_max_msl = 0.2413471326183736;
    msg.dive_fraction_max = 0.7542067336892145;
    msg.climb_fraction_max = 0.6278216367872319;
    msg.bank_max = 0.13850965081126676;
    msg.p_max = 0.8872393637183978;
    msg.pitch_min = 0.5064182004549274;
    msg.pitch_max = 0.16423214814459797;
    msg.q_max = 0.3493996371540957;
    msg.g_min = 0.9382320880783679;
    msg.g_max = 0.14883428764807582;
    msg.g_lat_max = 0.009149900809946376;
    msg.rpm_min = 0.2520012275189798;
    msg.rpm_max = 0.9092064653381396;
    msg.rpm_rate_max = 0.4576616268413747;

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
    msg.setTimeStamp(0.23976357229502643);
    msg.setSource(54319U);
    msg.setSourceEntity(73U);
    msg.setDestination(19697U);
    msg.setDestinationEntity(211U);
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 81U;
    tmp_msg_0.step_number = 51U;
    tmp_msg_0.step.assign("UYJMIKQPCXHENPYVIQZYZQRGLNOXUXZAPDSDNSFRJTXDYYFLOLOZORJAWDAXKLTDOIB");
    tmp_msg_0.flags = 146U;
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
    msg.setTimeStamp(0.3316633574050071);
    msg.setSource(57324U);
    msg.setSourceEntity(58U);
    msg.setDestination(61245U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.8022920924812912);
    msg.setSource(22825U);
    msg.setSourceEntity(74U);
    msg.setDestination(33889U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.9982539139870541);
    msg.setSource(2031U);
    msg.setSourceEntity(174U);
    msg.setDestination(51121U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.6504839797106167;
    msg.lon = 0.5488745423295032;
    msg.height = 0.22402055674026977;
    msg.x = 0.07215071304135279;
    msg.y = 0.762687222484946;
    msg.z = 0.38486102485975837;
    msg.phi = 0.28866696196666086;
    msg.theta = 0.9185813071519687;
    msg.psi = 0.7525227227546268;
    msg.u = 0.7500279824936762;
    msg.v = 0.05563805832585356;
    msg.w = 0.31618137585477857;
    msg.p = 0.8338950124372393;
    msg.q = 0.9192114570323837;
    msg.r = 0.08091690795290951;
    msg.svx = 0.8434937118820327;
    msg.svy = 0.2334350820015927;
    msg.svz = 0.779730545785983;

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
    msg.setTimeStamp(0.39448045102364115);
    msg.setSource(33U);
    msg.setSourceEntity(183U);
    msg.setDestination(36814U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.9892140604130332;
    msg.lon = 0.7035105761606012;
    msg.height = 0.9206501709047921;
    msg.x = 0.003769922304034168;
    msg.y = 0.23117670583345662;
    msg.z = 0.20726119168525947;
    msg.phi = 0.11856339635682;
    msg.theta = 0.5211166026324977;
    msg.psi = 0.2617264510786619;
    msg.u = 0.9719057648023097;
    msg.v = 0.7232384274712389;
    msg.w = 0.6811155151397913;
    msg.p = 0.20857254512295087;
    msg.q = 0.41196283308103565;
    msg.r = 0.1478988656718443;
    msg.svx = 0.7575959884033909;
    msg.svy = 0.2947362771116332;
    msg.svz = 0.37763094998090585;

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
    msg.setTimeStamp(0.8755817381678854);
    msg.setSource(33040U);
    msg.setSourceEntity(138U);
    msg.setDestination(4986U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.07340284379757023;
    msg.lon = 0.7101867981419693;
    msg.height = 0.04527097385418932;
    msg.x = 0.9682484195146877;
    msg.y = 0.15050138691893733;
    msg.z = 0.05068903270330838;
    msg.phi = 0.02293182560977547;
    msg.theta = 0.5445319473549901;
    msg.psi = 0.8357750084545462;
    msg.u = 0.05358566848468782;
    msg.v = 0.7593491476179348;
    msg.w = 0.6774960123896738;
    msg.p = 0.09676313192870256;
    msg.q = 0.49833752302995316;
    msg.r = 0.8150469936846766;
    msg.svx = 0.8575656285356742;
    msg.svy = 0.3958199810190759;
    msg.svz = 0.6008680268222504;

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
    msg.setTimeStamp(0.494538388214546);
    msg.setSource(27738U);
    msg.setSourceEntity(219U);
    msg.setDestination(10442U);
    msg.setDestinationEntity(62U);
    msg.op = 28U;
    msg.entities.assign("JEJAZGXYZBLEGMXVVAZRLLUOKPOMJVBREYQBGPZCJKYSESZFNRJLCIDQBZVSRDXNYHMCWYKOQGEMSBXMKWBLTRBQHUFYWFGJZTTLIMCLUHINXHEKDZZDPAHAPXANNIOVCBBYPCCISXGVHLJWPSITNSSDJDKUWQXAKKFTDFKPDNMUWFFSPGEFKVGQNQLATCWUOVPGIEXRYXUHAZEDYOOMIBGOQHOQJCVFRFJSYMTUIHWOTWUVM");

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
    msg.setTimeStamp(0.06806280866466252);
    msg.setSource(25001U);
    msg.setSourceEntity(117U);
    msg.setDestination(56971U);
    msg.setDestinationEntity(242U);
    msg.op = 87U;
    msg.entities.assign("LHKAHNZQMNWRZZPNUIUKXZQTEKBJAVACXNSCJIPXJHMGUNOOLEZXEUWEITDOTRFCTIZKYWTBYRYBFMJDEVGWOPAPWRLFI");

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
    msg.setTimeStamp(0.5794256240663966);
    msg.setSource(64744U);
    msg.setSourceEntity(237U);
    msg.setDestination(31670U);
    msg.setDestinationEntity(18U);
    msg.op = 85U;
    msg.entities.assign("WLRQWXXYARGETYLGDQTHGKJKSICVLAROSQTHQJZQXKSMBCEMKVTJPPZOKNPLWBIYJKBFVSAWYYWNZGXDDJAFLVMEZBVVUCSVFFGTXMPNDZEIHZFRCDNEWFFUBIMLYIOPFTREATOQ");

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
    msg.setTimeStamp(0.14414186161066456);
    msg.setSource(32323U);
    msg.setSourceEntity(102U);
    msg.setDestination(62900U);
    msg.setDestinationEntity(156U);
    msg.type = 89U;
    msg.speed = 34330U;
    const char tmp_msg_0[] = {-43, -36, -49, 74, -126, 103, -56, 39, 42, 66, 94, 74, 30, 42, 123, 91, -33, 3, -4, 111, -85, 55, 99, 37, 92, -87, 105, 58, -83, -70, 79, -107, -37, -88, 105, 33, -128, 91, -111, -113, -27, -96, 64, -100, 104, 56, -105, -104, 101, -44, 27, 14, -25, 35, 12, -33, 55, -94, 103, -94, -33, 41, 115, -3, 65, -2, -19, -89, -38, 45, -98, -33, -88, 103, 32, -63, -97, -97, 123, -105, 17, 16, -38, 45, 33, 98, 101, 93, -50, 48};
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
    msg.setTimeStamp(0.6460124953521026);
    msg.setSource(9006U);
    msg.setSourceEntity(118U);
    msg.setDestination(2640U);
    msg.setDestinationEntity(193U);
    msg.type = 253U;
    msg.speed = 12085U;
    const char tmp_msg_0[] = {116, -60, -97, 27, -4, 40, -115, 57, -34, -51, 114, -22, -32, 16, 103, -121, -15, -50, -20, 19, 30, 69, -73, 106, -66, 114, 111, 66, 79, 8, 79, 93, 63, 102, -55, -91, 67, -89, -80, -22, -11, -111, -37, 67, 73, 27, 24, 56, 23, -116, 61, -29, -1, 121, 33, -111, -32, 105, 39, 39, 101, -110, -49, -108, -99, 102, -89, 2, 12, -13, -31, -3, 16, -28, 18, 30, 109, 104, 45, 92, 83, -103, 81, -38, 60, 104, -35, -37, 96, 46, -87, -104, 24, 8, 24, -71, 62, -42, 125, -83, -118, -92, -94, 116, -61, 105, -68, -42, 17, 122, -85, 101, -101, -128, -7, -111, 104, 32, 50, 50, 27, 50, -91, 65, -38, -33, 29, -64, 95, -1, -114, 93, 28, -94, -96, 89, 87, -16, -121, 20, 82, -107, 87, 57, -80, -72, -80, 0, -33, 26, -85, -103, -64, 55, -38, 105, -113, -128, 102, -40, -21, -5, -112, -27, -34, 59, -36, 100, 97, 4, 91, 119, -19, 49, 118, -126, 0, 78, -128, -68, 81, 10, -27, 116, -6, 39, -17, 11, -114, 122, 116, -124, -42, 79, 29, -127, -37, -84, 100, 25, 52, -1, 98, -85, -13, 114, 64, 45, -52, 109, -3, -87, 65, -12, -82, -47, -55, -26, -65, -59, 63};
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
    msg.setTimeStamp(0.18330797853106473);
    msg.setSource(55330U);
    msg.setSourceEntity(9U);
    msg.setDestination(32166U);
    msg.setDestinationEntity(39U);
    msg.type = 60U;
    msg.speed = 694U;
    const char tmp_msg_0[] = {126, 52, -2, 68, 59, 72, 93, -44, 83, 65, 120, -35, 70, 32, 67, -58, -27, -105, -94, 118, -99, -112, -14, 26, 56, 93, -73, 21, 82, -103, 48, -35, 25, -53, -61, -74, 91, 38, 62, -11, 119, 46, 67, 81, 47, 103, 116, -55, -1, -100, -37, 115, 68, -99, -46, 87, 34, 80, -120, 108, -78, -60, -15, -48, -81, 64, 32, -101, -95, 122, -35, 125, -11, -38, 23, 98, 19, 19, 8, -87, 2, 42, 99, -126, -56, -26, 63, -10, -22, 31, 92, 2, 112, 103, 105, 65, 18, -51, 62, 122, 103, 59, 117, -7, 24, -89, -128, -106, 116, -23, -126, 18, -109, 107, 124, 61, -89, -35, -66, 102, 113, 2, -126, 30, 123, 56, -10, 61, -122, 51, -67, 65, 63, 41, -91, -92, -21, 71, 97, -89, -1, 20, -64, -22, -69, -22, -58, 53, -48, -103, 64, -119, 86, 1, 62, -34, -87, -100, -51, 77, 82, -28, -119, -68, 123, 125, -38, 94, 1, 116, -26, 116, -77, 33, -35, 108, -26, 28, 50, -127, -108, -90, -84, 109, 88, -31, -31, -119, -21, 86, 63, -120, 75, -17, 122, -66, -48, -111, 80, -90, 39, -117, -91, 50, 70, -20, 46, 70, 83, -53, -57, 5, -50, -94, 46, 86, -99, 54, 113, 110, 125, 106, -122, -17, 76, 54, -40, 32, 72, 96, -81};
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
    msg.setTimeStamp(0.7991075962121329);
    msg.setSource(14360U);
    msg.setSourceEntity(148U);
    msg.setDestination(47922U);
    msg.setDestinationEntity(187U);
    msg.op = 64U;
    msg.tas2acc_pgain = 0.02501347939797638;
    msg.bank2p_pgain = 0.8164323012017485;

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
    msg.setTimeStamp(0.9537613203490293);
    msg.setSource(14851U);
    msg.setSourceEntity(210U);
    msg.setDestination(56290U);
    msg.setDestinationEntity(71U);
    msg.op = 119U;
    msg.tas2acc_pgain = 0.6688314601499414;
    msg.bank2p_pgain = 0.48991089327481596;

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
    msg.setTimeStamp(0.0591157760696458);
    msg.setSource(42309U);
    msg.setSourceEntity(60U);
    msg.setDestination(32458U);
    msg.setDestinationEntity(244U);
    msg.op = 92U;
    msg.tas2acc_pgain = 0.4187610621913066;
    msg.bank2p_pgain = 0.7756398200712644;

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
    msg.setTimeStamp(0.02060052405444135);
    msg.setSource(40911U);
    msg.setSourceEntity(236U);
    msg.setDestination(23004U);
    msg.setDestinationEntity(242U);
    msg.available = 437180751U;
    msg.value = 222U;

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
    msg.setTimeStamp(0.09676323529639597);
    msg.setSource(5926U);
    msg.setSourceEntity(58U);
    msg.setDestination(37003U);
    msg.setDestinationEntity(133U);
    msg.available = 1225547140U;
    msg.value = 220U;

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
    msg.setTimeStamp(0.989140355839541);
    msg.setSource(30584U);
    msg.setSourceEntity(110U);
    msg.setDestination(9871U);
    msg.setDestinationEntity(108U);
    msg.available = 686930614U;
    msg.value = 250U;

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
    msg.setTimeStamp(0.38262574262469595);
    msg.setSource(9266U);
    msg.setSourceEntity(120U);
    msg.setDestination(15597U);
    msg.setDestinationEntity(61U);
    msg.op = 128U;
    msg.snapshot.assign("CFXRAFDHUBJ");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 230U;
    tmp_msg_0.time_remain = 0.8412734830864708;
    tmp_msg_0.sched_time = 0.33468548619731353;
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
    msg.setTimeStamp(0.510605303274117);
    msg.setSource(55821U);
    msg.setSourceEntity(90U);
    msg.setDestination(59001U);
    msg.setDestinationEntity(85U);
    msg.op = 160U;
    msg.snapshot.assign("RBXGRIMGJQQOEMSUUCVOPASNENFFBHQJICFLQLKZLIHDQSWZZL");
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 203U;
    tmp_msg_0.period = 1965337812U;
    tmp_msg_0.duty_cycle = 3488382350U;
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
    msg.setTimeStamp(0.7102318360795181);
    msg.setSource(35476U);
    msg.setSourceEntity(136U);
    msg.setDestination(54634U);
    msg.setDestinationEntity(80U);
    msg.op = 237U;
    msg.snapshot.assign("EFAVUUPVYWWNXNMSJKGVEQVRJACXSSODTBXUXOADKVCEOSV");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 26923U;
    tmp_msg_0.lat = 0.6417544102782323;
    tmp_msg_0.lon = 0.7515708265501924;
    tmp_msg_0.z = 0.1058704499517602;
    tmp_msg_0.z_units = 151U;
    tmp_msg_0.speed = 0.7321769330651552;
    tmp_msg_0.speed_units = 52U;
    tmp_msg_0.bearing = 0.9051054651350071;
    tmp_msg_0.cross_angle = 0.9026208285694935;
    tmp_msg_0.width = 0.6711298701531785;
    tmp_msg_0.length = 0.4756739533684273;
    tmp_msg_0.hstep = 0.43015195835365205;
    tmp_msg_0.coff = 44U;
    tmp_msg_0.alternation = 164U;
    tmp_msg_0.flags = 214U;
    tmp_msg_0.custom.assign("LBRICZAZAKOEJFQTZZIRYVCHYLXDPRSGEPFGYOBLCXUESDXYVRXOVGHMKZMOXSRPTNDGTWZKJQINMBGKRVMFDWACTQINBLPUBMTLNSOYHMMNDJJCIVE");
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
    msg.setTimeStamp(0.5550588641472433);
    msg.setSource(41957U);
    msg.setSourceEntity(233U);
    msg.setDestination(19316U);
    msg.setDestinationEntity(59U);
    msg.op = 51U;
    msg.name.assign("IHQAAGXGBBBLFOZGQDAYIHBPRIVKSGDG");

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
    msg.setTimeStamp(0.26704390700443403);
    msg.setSource(55417U);
    msg.setSourceEntity(56U);
    msg.setDestination(60893U);
    msg.setDestinationEntity(128U);
    msg.op = 35U;
    msg.name.assign("QQZVQXPOICPSEMDTNTVWCLBNYHUJRDWKGFOEJOJMISAKSWQXGGFYHWVKHOQGREXRPDAEURVXZWSEPIOCHYOZXWSIRMISJZVQVITBLTLZGYFPMRYIUYHLFJPNVALKZOHWJRQFLUQHUPYOKTNUZQJNQZTGDMBSYEADBOIPCCDKKSURDNJTVMRALVPFGKJHTDFNEWHVXXPCJTB");

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
    msg.setTimeStamp(0.16323136609746935);
    msg.setSource(44627U);
    msg.setSourceEntity(38U);
    msg.setDestination(20335U);
    msg.setDestinationEntity(158U);
    msg.op = 179U;
    msg.name.assign("MXMGMIMFYEBRNQGLNHYXQWWLTLQCBDEOZRHEIHSUVPSDTTYFKAOBTRNLGJNXPXGXCUOJVUDPIOYJYPRCMJZAHNATQFPYIAGRFPLTCKOUFGJHDSHBDQIQVJVOBKEHYPWGFDETILECNEXZUNXFMWRPLZMACVZDUYTYETAOVJKRJARZIDSJHFCORKEXSEBMMZKNWUZWGHIHKWUMQQVCSFLPNNCPOWBADLUGZIUXQKBYRKWXZG");

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
    msg.setTimeStamp(0.8348158252960267);
    msg.setSource(59332U);
    msg.setSourceEntity(231U);
    msg.setDestination(16889U);
    msg.setDestinationEntity(158U);
    msg.type = 86U;
    msg.htime = 0.008919754213362663;
    msg.context.assign("GTUNLVTZOFLVHGBRKLXPGSEFMFKNIURJIY");
    msg.text.assign("ATNEMZBUOKLERCJINQUODVZHDIILXWMLKDNCCFZPEQHMDJOEPXQRAAHBLIFSNYZGKAOSZVHQRITQIMFQWWYULGSVBZDVDNDUPEXQTSRSKZAMLOJFTMNEWBJBFUNKVGRTVCYMOWRJHIGGVTWWPUUSEVXFXSEFPIWATQHACZYQZNAHMVKXJISSPAFBYYPCKRLX");

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
    msg.setTimeStamp(0.08733271595663428);
    msg.setSource(23715U);
    msg.setSourceEntity(16U);
    msg.setDestination(3114U);
    msg.setDestinationEntity(107U);
    msg.type = 69U;
    msg.htime = 0.03236780250543381;
    msg.context.assign("IEZKFNUQBZUYDWOIHXVLQRKFLVJYNJTTYWOHFUFRHPPBCOJSJHYTPFSJXVCRFIPDGGIGABHPHDPCQXTEKBBFWUCAJBMKTHKIWNTAENOFWERMMGSQLZYDIPJMLOFMTNYXZBZTYSLRKHBWCPUMVRIIOOKQXAPWCBGJNMVNMCQGIECLSDUEOIKRAWEVJUGMVSYULUTLQVRYRFGOGJGQAVLRZAYUQZXSXXZAOCNDQSWWANHDZDSDBEHTVXPZX");
    msg.text.assign("USVTZRHGJPXIRATWCEWCSZFPPCGNXUPYQCSRBGCWTNMEQSJQEUBYLOVTWPQCXYLNHKOFMBYRDWJEGFHEMNDUAFHGV");

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
    msg.setTimeStamp(0.9079472155674209);
    msg.setSource(18499U);
    msg.setSourceEntity(58U);
    msg.setDestination(47017U);
    msg.setDestinationEntity(58U);
    msg.type = 108U;
    msg.htime = 0.19490112558233819;
    msg.context.assign("KVPJSJCEFLRMKVHSUKKNUFHHIATTRUTRDWNVMWVLQOCGXLCYZZSHJRGTDJMKQVLYRATLPIAEZJMUQQBCWXFJGYKIAOWYMAQUEUDCUKBHTBPEAMRTPWVPXZWPWYAWQLNRXEOHZMOERUGOKYROYDFJDBNSAAFVCBCTFIXPEZDGFBIQDNDIXSVPCOFGNSGSZGLEQKUOAMUVZJHLLIXW");
    msg.text.assign("IFYEFIPAGONCESGHUMIZTYBCKHIHXVJMGJURURXOCIZVWAODABVCPDNPZTLARZLOMNZQVEUWXZKXDDARYJWYXKKVYTMFFRPKIKWXGYBHQQTVNGIBPLYOEWHZULYQSCLCJTAJHTRCTQLBQJUFLMCLENYSXAMMOOHRQITSYDRJFFEIASDKSDKSFCGQTDXLOBNPSVHHMQHEGSWI");

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
    msg.setTimeStamp(0.6067854156960375);
    msg.setSource(19311U);
    msg.setSourceEntity(67U);
    msg.setDestination(35110U);
    msg.setDestinationEntity(64U);
    msg.command = 141U;
    msg.htime = 0.8390645254783995;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 9U;
    tmp_msg_0.htime = 0.24815028090341618;
    tmp_msg_0.context.assign("GVCVXDAEMXZZXFREZYUEHRMWXMLPPPKQWIPZAYZHJCROBMILJGWAQIIQGURAABEXTVBHLODTMZKVWVUFMPZMKANYMEUTZJSBDDNRQAFROKVXQTKLILPNYQSQLCCUPOLPIJHBYTDORNZWTSJYWDGSNJSTQKNOILDANVEYDBTYBFBYTXNEGMFFHCJCOXHSPFSVCWZSEPYQEIJHUKHGKEVFCLVUBGUSXCOJ");
    tmp_msg_0.text.assign("VAWKSXAMWVNFVXBUNRALPZQGJWHDYQWIHYUMOIHRRORRFODPTKJIXJYESJXYMRQUSTUMPTJLEGUIVGHBSILWORYQXHCMJSXNKBJVEGOLWCAMOZEXIFEJUBTDCZNVPFDHZQTPWIUHZJQJNXFYYFMGHGUAKPWZZNCILAQBKFGIENCZBPVVSLGNKPWNTKQUXSRDRBWALEAMOGGTCECYFYOLFNSCRVDOLSEKZMSAXLMBKTODTAKDHDVIZQBH");
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
    msg.setTimeStamp(0.060755339281913456);
    msg.setSource(45897U);
    msg.setSourceEntity(44U);
    msg.setDestination(9388U);
    msg.setDestinationEntity(232U);
    msg.command = 12U;
    msg.htime = 0.2014467481004414;

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
    msg.setTimeStamp(0.8837455559764765);
    msg.setSource(53276U);
    msg.setSourceEntity(152U);
    msg.setDestination(557U);
    msg.setDestinationEntity(204U);
    msg.command = 198U;
    msg.htime = 0.23066314265000576;

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
    msg.setTimeStamp(0.795223597693326);
    msg.setSource(26535U);
    msg.setSourceEntity(65U);
    msg.setDestination(25338U);
    msg.setDestinationEntity(170U);
    msg.op = 199U;
    msg.file.assign("YYEEKYMQVAJTQVZFPTRYMLUCLUVWBOOQNAJXWGSOWGDGHPQBMHVAOLNNAMMQMXDVJBRSJGJJAVYTOHNZVVFLPUYRBEXEOMCUTMIIWTRDUBPQYGQXDZFXFPPLKEZOHXISHFFQKPUZMLFBDOPCAGNNDDPWRZXTWBSLUKJKBDHDHNKRSWKJXRMWSILCFOKEGXNIEZFIGERIOHWYFDC");

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
    msg.setTimeStamp(0.8321265259509412);
    msg.setSource(2132U);
    msg.setSourceEntity(37U);
    msg.setDestination(45569U);
    msg.setDestinationEntity(5U);
    msg.op = 188U;
    msg.file.assign("KYQAESESJYRLCDRZDLNVJYZOKYERMRSFCBYYVCMCLKSBNJEFLDCFEZBLQHTNZDMUPLFXARRTXPSZSTBCDIUIOISJAWNNFOOQHVMTZSUIWHKMLFPEBXPRXIJYIAABXIHWFOVLNXYVWQQZWG");

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
    msg.setTimeStamp(0.46338960747644264);
    msg.setSource(13805U);
    msg.setSourceEntity(94U);
    msg.setDestination(47434U);
    msg.setDestinationEntity(23U);
    msg.op = 123U;
    msg.file.assign("CGDFEDNWTGPSDXYMEDIOUTBH");

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
    msg.setTimeStamp(0.741626528860388);
    msg.setSource(27182U);
    msg.setSourceEntity(20U);
    msg.setDestination(27786U);
    msg.setDestinationEntity(165U);
    msg.op = 85U;
    msg.clock = 0.6576405314882338;
    msg.tz = -58;

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
    msg.setTimeStamp(0.7097733552125078);
    msg.setSource(31616U);
    msg.setSourceEntity(201U);
    msg.setDestination(36003U);
    msg.setDestinationEntity(216U);
    msg.op = 143U;
    msg.clock = 0.6569573209692904;
    msg.tz = -81;

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
    msg.setTimeStamp(0.22347692713770495);
    msg.setSource(3171U);
    msg.setSourceEntity(124U);
    msg.setDestination(56334U);
    msg.setDestinationEntity(194U);
    msg.op = 229U;
    msg.clock = 0.20835798684895623;
    msg.tz = -37;

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
    msg.setTimeStamp(0.2287120200882644);
    msg.setSource(55296U);
    msg.setSourceEntity(133U);
    msg.setDestination(41959U);
    msg.setDestinationEntity(77U);
    msg.conductivity = 0.9928984543528651;
    msg.temperature = 0.4052559740213856;
    msg.depth = 0.19958158215132926;

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
    msg.setTimeStamp(0.8603413398130949);
    msg.setSource(56614U);
    msg.setSourceEntity(233U);
    msg.setDestination(55619U);
    msg.setDestinationEntity(251U);
    msg.conductivity = 0.5375711549729193;
    msg.temperature = 0.3975486961572332;
    msg.depth = 0.6662713746180219;

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
    msg.setTimeStamp(0.9220357054538734);
    msg.setSource(31938U);
    msg.setSourceEntity(226U);
    msg.setDestination(5638U);
    msg.setDestinationEntity(104U);
    msg.conductivity = 0.040135078076931174;
    msg.temperature = 0.8421491399174036;
    msg.depth = 0.5288336543797311;

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
    msg.setTimeStamp(0.40348276664850125);
    msg.setSource(24441U);
    msg.setSourceEntity(236U);
    msg.setDestination(6426U);
    msg.setDestinationEntity(208U);
    msg.altitude = 0.9299723762779174;
    msg.roll = 2388U;
    msg.pitch = 29807U;
    msg.yaw = 64466U;
    msg.speed = -26171;

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
    msg.setTimeStamp(0.1549404416842548);
    msg.setSource(25738U);
    msg.setSourceEntity(10U);
    msg.setDestination(2716U);
    msg.setDestinationEntity(26U);
    msg.altitude = 0.8670419579410562;
    msg.roll = 19351U;
    msg.pitch = 38644U;
    msg.yaw = 10254U;
    msg.speed = 5340;

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
    msg.setTimeStamp(0.14893314579804584);
    msg.setSource(51300U);
    msg.setSourceEntity(29U);
    msg.setDestination(42364U);
    msg.setDestinationEntity(112U);
    msg.altitude = 0.09789857997515494;
    msg.roll = 53655U;
    msg.pitch = 45264U;
    msg.yaw = 37144U;
    msg.speed = 6791;

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
    msg.setTimeStamp(0.957980277192044);
    msg.setSource(24255U);
    msg.setSourceEntity(253U);
    msg.setDestination(43294U);
    msg.setDestinationEntity(143U);
    msg.altitude = 0.2280583477547603;
    msg.width = 0.7120190867856406;
    msg.length = 0.43599269107185024;
    msg.bearing = 0.10661388587116294;
    msg.pxl = 8862;
    msg.encoding = 77U;
    const char tmp_msg_0[] = {-85, 41, -2, -92, -15, 26, -4, 117, 106, -66, 69, -66, 99, 82, -37, -108, 53, -7, -60, -84, -1};
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
    msg.setTimeStamp(0.5891226370162919);
    msg.setSource(55687U);
    msg.setSourceEntity(48U);
    msg.setDestination(28265U);
    msg.setDestinationEntity(183U);
    msg.altitude = 0.4519015519763938;
    msg.width = 0.3470424674566892;
    msg.length = 0.2528601059635104;
    msg.bearing = 0.5560563666764081;
    msg.pxl = 4580;
    msg.encoding = 249U;
    const char tmp_msg_0[] = {47, -62, 17, -2, -27, -23, -44, -82, -44, -7, 34, -73, -11, 102, 39, 96, 108, -86, 91, 63, 111, -102, -2, -38, 55, -66, 1, 96, -48, 71, 119, 23, 78, -115, -127, -11, 98, -34, -5, -84, 115, -19, -2, -48, -19, -3, 32, -102, -79, 64, -112, 114, -19, 102, -30, 64, 121, 109, -19, -105, -118, 115, 33, -68, -29, -55, 43, -42, 77, 64, 21, 66, 96, -65, -124, -89, 102, 92, 29, -94, 30, -72, -6, -48, 125, -47, -23, -99, 29, 53, 90, 115, -67, 121, -126, -67, -44, 5, -30, 0, 11, 65, -124, -128, -70, -114, -55, -48, -46, 79, -108, -15, 121, 34, -75, 16, 88, 50, 100, -123, -27, -42, -61, 68, -1, -87, 27, 87, 83, -95, -61, -19, 116, -115, -23, -19, 84, -125, 126, -22, 66, 65, 26, 108, -104, -104, 8, 51};
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
    msg.setTimeStamp(0.6071984450780593);
    msg.setSource(47906U);
    msg.setSourceEntity(197U);
    msg.setDestination(65447U);
    msg.setDestinationEntity(163U);
    msg.altitude = 0.1077945959095662;
    msg.width = 0.3152170884771681;
    msg.length = 0.27252702359408953;
    msg.bearing = 0.28338751011993646;
    msg.pxl = -32585;
    msg.encoding = 185U;
    const char tmp_msg_0[] = {-82, 61, -99, 123, 96, -107, 79, -18, 98, -117, 19, -110, -123, 43, -30, -66, 84, -103, 108, 75, -57, -26, -106, -125, 89, -40, 104, -10, 78, -62, -87, 116, 1, 20, 51, -29, 92, 26, 95, -114, 73, 89, 23, 59, 28, -30, 14, -91, 52, -45, -20, 62, -11, -109, -11, -120, -10, 7, -43, 111, 112, -109, -89, -46, 82, 121, -60, -36, 89, -74, -37, 82, -26, -104, 91, -8, 101, 10, 53, -13, -14, -77, -70, 1, -56, 104, 53, 35, 26, 21, 47, -88, -20, -95, -116, -77, -17, 22};
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
    msg.setTimeStamp(0.8914142731097195);
    msg.setSource(52727U);
    msg.setSourceEntity(222U);
    msg.setDestination(5912U);
    msg.setDestinationEntity(249U);
    msg.text.assign("CUEGIWXSWZBRXFMZAPSJ");
    msg.type = 7U;

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
    msg.setTimeStamp(0.4226540620137764);
    msg.setSource(48614U);
    msg.setSourceEntity(232U);
    msg.setDestination(21924U);
    msg.setDestinationEntity(151U);
    msg.text.assign("FBOIEFJTGKCPXSCZYWAKCOIIGYJFPKICXSXKTFLKOKXYWZVPNFHHJMHNVWTZSMHZYLMWRNOTLUYJSXZPTGRHXRRWATCZPMERFCCCFZQSAUDNVIFVDNJEATGEYUQGIQUHMIWBTGXZKTNYBKLPAUHON");
    msg.type = 239U;

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
    msg.setTimeStamp(0.17144779426598122);
    msg.setSource(29146U);
    msg.setSourceEntity(217U);
    msg.setDestination(14839U);
    msg.setDestinationEntity(64U);
    msg.text.assign("TBQPYUKEKNBSJRGVRROERLMUCTZLMDKHGOIEOTXZMIAQOYURVGDOPFPJVCDSGSMDMJKSIZYUHIVNVSAJDBZVTAICHZXWNJNEZZCIAGWCLPWNJQXQLHTPEVKNFK");
    msg.type = 33U;

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
    msg.setTimeStamp(0.23904604127372475);
    msg.setSource(15791U);
    msg.setSourceEntity(36U);
    msg.setDestination(33240U);
    msg.setDestinationEntity(140U);
    msg.parameter = 70U;
    msg.numsamples = 165U;
    msg.lat = 0.09233987393845611;
    msg.lon = 0.006727602216731965;

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
    msg.setTimeStamp(0.651648221725708);
    msg.setSource(64755U);
    msg.setSourceEntity(149U);
    msg.setDestination(1896U);
    msg.setDestinationEntity(153U);
    msg.parameter = 175U;
    msg.numsamples = 51U;
    msg.lat = 0.8226938077503184;
    msg.lon = 0.391365194689572;

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
    msg.setTimeStamp(0.3271200587732873);
    msg.setSource(54245U);
    msg.setSourceEntity(252U);
    msg.setDestination(25303U);
    msg.setDestinationEntity(212U);
    msg.parameter = 224U;
    msg.numsamples = 252U;
    msg.lat = 0.5286826147680095;
    msg.lon = 0.4791906885592748;

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
    msg.setTimeStamp(0.7121239222998835);
    msg.setSource(12808U);
    msg.setSourceEntity(9U);
    msg.setDestination(50090U);
    msg.setDestinationEntity(156U);
    msg.depth = 39190U;
    msg.avg = 0.04492965460247178;

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
    msg.setTimeStamp(0.597672067961836);
    msg.setSource(7056U);
    msg.setSourceEntity(233U);
    msg.setDestination(22405U);
    msg.setDestinationEntity(46U);
    msg.depth = 65441U;
    msg.avg = 0.4222973041088329;

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
    msg.setTimeStamp(0.14298897880646888);
    msg.setSource(19240U);
    msg.setSourceEntity(231U);
    msg.setDestination(56884U);
    msg.setDestinationEntity(61U);
    msg.depth = 9247U;
    msg.avg = 0.5907519321887682;

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
    msg.setTimeStamp(0.3852999754777793);
    msg.setSource(30901U);
    msg.setSourceEntity(140U);
    msg.setDestination(38615U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.13174029171681245);
    msg.setSource(10334U);
    msg.setSourceEntity(115U);
    msg.setDestination(5468U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.5771439755060778);
    msg.setSource(12685U);
    msg.setSourceEntity(78U);
    msg.setDestination(35370U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.2442074261217454);
    msg.setSource(616U);
    msg.setSourceEntity(87U);
    msg.setDestination(39082U);
    msg.setDestinationEntity(174U);
    msg.sys_name.assign("VCDCTRSTOCVNBBDPZWHIYUBOBEUOOQQTSHPJRUWQGMDTWGLPQMSRNFBWNXCMKMGMFILZSPEVMNXZSQJOGXMEVAUKFYNPHXZFQJXKOZZDREQMTIYRJZINHFDYWWPHFLAGBEKIWDKDUEZHABNSQFLURUVQUVTEJAZXLTLYCGBXKYTBAPJSKVYJGNLWEUCPCYOKJIACTSIGJYHOLZ");
    msg.sys_type = 150U;
    msg.owner = 26379U;
    msg.lat = 0.9549153147564944;
    msg.lon = 0.4650899779166511;
    msg.height = 0.5125790009180272;
    msg.services.assign("MJHZNGXSYDTUEITHUOERXELAETLPCSDCMWORZBFHUQAOIBPISWOAYIXITNEHAXXBDKNBZRNHJHRTZTSMGMARJYNSPKMWYQFLKQFPEADLVHQMYMFAOWWDUOSJSCWERVUZXOYLKFSICRQFGDIKKBZDVMVXSDCYECSCDIGUWNHUVVPJBCQFC");

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
    msg.setTimeStamp(0.7413048911560938);
    msg.setSource(37490U);
    msg.setSourceEntity(131U);
    msg.setDestination(56559U);
    msg.setDestinationEntity(201U);
    msg.sys_name.assign("NOXQMPFGONOMNAWEUEUXAANHUMCCHMLSVVKNXAWBYIORQYCOZMFZDLXJEUH");
    msg.sys_type = 202U;
    msg.owner = 30124U;
    msg.lat = 0.4059533947856351;
    msg.lon = 0.58707227680229;
    msg.height = 0.4693850681909151;
    msg.services.assign("NLQIXOLDVFDZUPFXNKEPBCMWJUSIBAFSRSJTKFSZNWVKTGMUYVXTBADZACHYYRYRUZIAPVZPIKEPCZVZOKWWUJVZEORMMMBCKKUCLPVOXRXHGGBFHTLKOEHRHILTTDSWSNAVBBAJOCIAWPYGIHCMLFESFLVHWSJFAXRJETZQHSOALQOGBKHDWJYTQDFFKUTWXDHQNYDPQUCLMZCQUEGIOIYIJYMPSXRMGMUJNGDQNNQNJRDGWBEQLG");

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
    msg.setTimeStamp(0.0871856903891638);
    msg.setSource(52636U);
    msg.setSourceEntity(223U);
    msg.setDestination(59299U);
    msg.setDestinationEntity(54U);
    msg.sys_name.assign("RXWEGDCTZKQCQLPBTBBATAWTUVLKNRTBEILRHSDFUBXCKTAMZOHTRXDCFNKQLRVQUFHJOSIGDMHCTFEGHVSYWEVEONIFEJMJTREQIPIVHXFB");
    msg.sys_type = 161U;
    msg.owner = 34197U;
    msg.lat = 0.06677592680201139;
    msg.lon = 0.4032382617276383;
    msg.height = 0.7560748895848056;
    msg.services.assign("SZMMKOSBNYKMKCXVPRMNUJMLXAOMOMLHZKTWPSVRBAQUNXPAQLHUIWF");

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
    msg.setTimeStamp(0.3309499347440127);
    msg.setSource(40323U);
    msg.setSourceEntity(24U);
    msg.setDestination(20301U);
    msg.setDestinationEntity(229U);
    msg.service.assign("MGKHYZVQFDJXTEINJHMNUIEHMDTAXBWOKBYJXGVGXDBCCVGBSXMRPYUJUNYFFDOTKYNOROEUMBKHQDLLMLVGSNVOSCCPZRNFIXRTGNBCKTPAAIYZ");
    msg.service_type = 207U;

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
    msg.setTimeStamp(0.3256443560926052);
    msg.setSource(13934U);
    msg.setSourceEntity(127U);
    msg.setDestination(62571U);
    msg.setDestinationEntity(115U);
    msg.service.assign("RKVHMONHNOJPSCBAQILGEYHSPBJAHMXRVRMJKMSZKPLVJDIFQYKJZEIOQDJSKWVNIOX");
    msg.service_type = 64U;

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
    msg.setTimeStamp(0.7939844985315535);
    msg.setSource(43957U);
    msg.setSourceEntity(177U);
    msg.setDestination(38213U);
    msg.setDestinationEntity(41U);
    msg.service.assign("GNHEKZROJDKJDNSDIMTTAKGMYYOZXEUXJVBHKHUHUYKOPLWVRYXDQVWNCVXBIUZTDMZWPAYCJRBJRZRFQILLLHHHFVAEREHUERFNHYFDFNCTSBSOCTPCLKQCBSGELASZIFQFLVWSAYINL");
    msg.service_type = 44U;

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
    msg.setTimeStamp(0.3774280745138455);
    msg.setSource(62925U);
    msg.setSourceEntity(105U);
    msg.setDestination(38433U);
    msg.setDestinationEntity(140U);
    msg.value = 0.6713459280586112;

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
    msg.setTimeStamp(0.2633582404332302);
    msg.setSource(46800U);
    msg.setSourceEntity(150U);
    msg.setDestination(63474U);
    msg.setDestinationEntity(66U);
    msg.value = 0.1670322638812901;

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
    msg.setTimeStamp(0.03319740264376281);
    msg.setSource(3131U);
    msg.setSourceEntity(252U);
    msg.setDestination(53210U);
    msg.setDestinationEntity(48U);
    msg.value = 0.7457352822367541;

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
    msg.setTimeStamp(0.9170573898659928);
    msg.setSource(33285U);
    msg.setSourceEntity(130U);
    msg.setDestination(34084U);
    msg.setDestinationEntity(95U);
    msg.value = 0.008991380518414971;

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
    msg.setTimeStamp(0.17032157083099753);
    msg.setSource(21315U);
    msg.setSourceEntity(140U);
    msg.setDestination(43609U);
    msg.setDestinationEntity(149U);
    msg.value = 0.6827231582680617;

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
    msg.setTimeStamp(0.7645498583621209);
    msg.setSource(39562U);
    msg.setSourceEntity(46U);
    msg.setDestination(11531U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5484544257285545;

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
    msg.setTimeStamp(0.3176900845059173);
    msg.setSource(41216U);
    msg.setSourceEntity(209U);
    msg.setDestination(50241U);
    msg.setDestinationEntity(242U);
    msg.value = 0.8029400426150023;

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
    msg.setTimeStamp(0.2501514837353649);
    msg.setSource(39690U);
    msg.setSourceEntity(124U);
    msg.setDestination(46531U);
    msg.setDestinationEntity(30U);
    msg.value = 0.5518115429263081;

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
    msg.setTimeStamp(0.24099685765753676);
    msg.setSource(61970U);
    msg.setSourceEntity(202U);
    msg.setDestination(39671U);
    msg.setDestinationEntity(6U);
    msg.value = 0.8734022073117119;

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
    msg.setTimeStamp(0.3059028635894231);
    msg.setSource(13210U);
    msg.setSourceEntity(112U);
    msg.setDestination(25886U);
    msg.setDestinationEntity(137U);
    msg.number.assign("KMOURDWHIWVZGJCVABPLLENCRGQHKOSQQBPYGXHUMAHRQOVBZSYFXZFNZJEIVMLDALNIJHSZKEWUVZIROHFWYOZXGDTFTBXMGXWEFVWSOAECPESELKWCCVHCJISZSSTNTKTBDNHIAHYFQUULOCPYJJGOBTGURQMDD");
    msg.timeout = 16597U;
    msg.contents.assign("CJSPCTUIKBFSLODUYYOAONDSMZKUTJBJVBIIWMFA");

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
    msg.setTimeStamp(0.49567844202494316);
    msg.setSource(19388U);
    msg.setSourceEntity(220U);
    msg.setDestination(13058U);
    msg.setDestinationEntity(88U);
    msg.number.assign("KWECXEMBJXYMHISTSQISXXCLHUNABHQABYNJLDZDYANWTIUNSNPFCZDPOCNAVLQKPGOKMHSXVOCDCFQXMJIMTMWXYGZLEBKUPNXBFXVBIZNAGKYSL");
    msg.timeout = 42210U;
    msg.contents.assign("EVOQURTEKRLEVVWEDUHZA");

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
    msg.setTimeStamp(0.6997023993164586);
    msg.setSource(18422U);
    msg.setSourceEntity(0U);
    msg.setDestination(39986U);
    msg.setDestinationEntity(66U);
    msg.number.assign("XSBLXDGGORXQHNSLRLLLLGPNSVMXKPEENDTMWXWDDAABRZJAMTPUZLMYEIGYBFVVCIZCGNZJAVQDIAKZHBESQIPOJPHFXBNPTHKATGXOEDFQBEVKQQIZVTHSNRKYTMJTCKTAREYZHHOVSGSFROHCUDXRUVFUVIBMO");
    msg.timeout = 60852U;
    msg.contents.assign("JKZUKQKGNNITCCIJJOMHBOPYVYSIERRNDPOICQAJYFXGSWSQVOMQKWAECVAASMVBCCHTQRIJWYCSZKXFZAEKMHNMOFQKUTJGWOTLXJ");

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
    msg.setTimeStamp(0.4291461052995076);
    msg.setSource(64283U);
    msg.setSourceEntity(125U);
    msg.setDestination(46705U);
    msg.setDestinationEntity(11U);
    msg.seq = 1363900065U;
    msg.destination.assign("WURGQHVYRXZHPBQXXLJBDKJXEDDHHOLTMXUWDBDCOTROTGDZZIMMNLREOKWSTSPANEPPZAYUKOJUJMDIOTWZMHLZUAKTNFAVIDQDICXCEQFVSBSJGQPRIEAKYAWBYGFRAXUAXTOJULAITPNIHRIYMUEFBJHWWYOJJCMNLOCFKLBZMSNEMWBKCKKF");
    msg.timeout = 7413U;
    const char tmp_msg_0[] = {73, -86, 44, 14, 110, 123, -113, -90, 54, -98, -114, 122, 81, -64, -117, 78, 37, 15, -11, -30, -69, 21, 84, -118, 54, 13, 52, 41, -46, 51, 74, -43, 103, -72, -22, 59, -113, -26, 107, 110, 5, 27, 78, -89, -52, -10, 10, -65, 66, 118, -32, -73, -99, 40, -42, 54, -66, -120, 42, -37, 2, 49, 83, 37, -34, -34, -92, 112, 20, -4, 8, 13, -99, -43, -37, 51, -100, 61, 70, 18, -106, -83, -40, 13, 90, 74, 29, -91, 33, 99, -106, 2, 28, 54, -68, -41, -41, -40, 25, -32, 60, -107, 91, 104, -80, 124, 94, 5, 103, 109, -116, -115, 20, 21, 38, 38, -120, -55, 119, 94, 58, -59, -126, -2, 33, 36, -14, 12, 88, -3, 14, 107, 105, 68, 45, -123, -98, 16, 72, 5, 116, 80, -41, -115, 19, 26, -27, -35, -32, -120, -107, -33, -84, -97, -87, -29, -101};
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
    msg.setTimeStamp(0.4410679166465068);
    msg.setSource(25197U);
    msg.setSourceEntity(229U);
    msg.setDestination(22454U);
    msg.setDestinationEntity(18U);
    msg.seq = 425434770U;
    msg.destination.assign("QHMIPWYTMKGTRBXQSTNKGIOYEARTNTVJONJZFMFFFJQTIWXPZYSB");
    msg.timeout = 50656U;
    const char tmp_msg_0[] = {-53, 41, 101, 18, 45, -78, -45, 62, -85, 41, 5, -104, -12, -90, 7, -73, 82, 117, -84, 12, 44, 27, 20, -62, 47, 29, -54, -46, 37, -96, -48, -47, 7, -65, -65, 73, -5, 2, 115, 56, 109, -36, -62, 64, 0, -49, -75, -49, 100, 104, -84, 106, 23, 24, 54, -74, 3, -113, -63, -99, 92, -121, 17, 90, 58, 23, -32, -26, 33, -6, -43, 72, 106, 100, -33, 99, 73, 31, 19, -47, -94, -57, 46, 105, -21, 123, 113, 13, -101, -117, 115, -20, 20};
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
    msg.setTimeStamp(0.858849531455835);
    msg.setSource(58759U);
    msg.setSourceEntity(237U);
    msg.setDestination(50352U);
    msg.setDestinationEntity(134U);
    msg.seq = 1839259790U;
    msg.destination.assign("CSEZNXKADGSIBRPTTAUDIPNTHJJKLHVLTBWXGQKMHFOLOHCRJBG");
    msg.timeout = 5292U;
    const char tmp_msg_0[] = {70, 88, 58, 116, -124, 76, -57, -111, -102, -2, -17, -25, -35, -94, 5, 40, -23, -80, 24, -28, 103, -62, -74, -2, -36, -41, -48, 108, 57, 17, -102, -30, 74, 23, -107, 77, -102, 80, 104, -50, 76, 44, -19, -22, 24, 119, -81, -81, 37, 60, 108, -46, -88, -46, 75, 4, 45, 68, -123, 92, -54, -21, -47, 44, -61, 82, -116, 64, -49, -45, 34, 59, 12, 63, -35, 37, -4, 49, -122, 49, -113, 47, -104, -38, 88, 44, -110, 91, -21, 32, 119, 98, -67, -49, -95, -100, 115, -84, 3, 75, -128, 94, -34, 99, 77, 103, 123, 52, -49, 3, 10, -41, -120, 9, -65, -110, -7, 44, 17, 88, -92, -85, -41, -52, -25, -101, -9, -101, 57, 41, -101, -94, -69, -10, 0, 36, -92, 52, -117, 78, -71, 88, -122, 69, -98, 90, -4, -87, -79, 60, 104, 120, -122, -43, 25, 98, 33, 25, -60, -78, 124, 2, 45};
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
    msg.setTimeStamp(0.6773439466915391);
    msg.setSource(47470U);
    msg.setSourceEntity(35U);
    msg.setDestination(3441U);
    msg.setDestinationEntity(162U);
    msg.source.assign("KTSPEXJBWFGPKYNTQAQVTJ");
    const char tmp_msg_0[] = {99, -16, 78, -121, 120, 97, -16, -4, -42, -126, -87, 102, 36, -120, -24, 84, -108, -58, 71, 25, 41, -3, 31, 10, -92, 21, 23, 48, 66, 72, -123, -27, -88, 6, -124, -119, 39, 30, 67, -71, 99, 95, 5, 48, -22, -112, 84, -55, -54, -19, 29, -87, -83, 91, 114, 37, -39, 78, -9, 39, 25, 7, -50, 65, 124, -76, 33, 74, 54, -75, -64, 69, 85, -11, -85, -29, -122, -106, 112, -26, -54, -37, 125, 92, -94, 61, -83, -72, -3, -50, -6, -103, 11, -31, 0, 65, 24, 102, -93, -37, 119, 66, -66, 15, 45, 22, 90, -5, -82, -65, -74, -13, -83, 66, 33, 64, 79, -13, 7, -58, 72, 87, -110, 59, 113, 13, 56, -18, 43, 18, 70, -2, -41, -84, -100, 92, 11, 79, -63, -24, 33, 18, 75, -30, 45, -94, 46, 53, -120, -14, -112, 1, 96, 20, -24, -120, -52, 34, 111, 55, -99, -112, -28, -1, 39, -89, -21, -55, 11, 32, -97, 51, -66, -75, -95, -45, -32, -56, 51, 86, -91, 46, 32, -27, 100, -125, 100, -88, -72, 102, 100, 78, 30, -60, 123, 41, 126, 0, 9, 106, 68, -72, -10, -54, -54, 8, 20, -113, 105, -58, -118, -48, -24, 38, 54, -44, -47, 117, 56, 24, -63, -108, 113, 62, 54, -75, 73, 65};
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
    msg.setTimeStamp(0.7165184557218899);
    msg.setSource(41058U);
    msg.setSourceEntity(254U);
    msg.setDestination(41901U);
    msg.setDestinationEntity(59U);
    msg.source.assign("AAWTBYNCBTFCICBYCZNEITREYVDUVBSWDNJBXKTBLQNNHXSXQVKUOIRBELYSJZPDOGEFFQCEJARFLKIWGPASKPJMJLOUIMNLIDQVXRRFJMQPOAIKUDZMCZFPRERTWXZIAGRHVKYOMLUFOOVHGVRAIFQOBLEZCXZMFUG");
    const char tmp_msg_0[] = {-23, 118, 96, -48, -71, -21, -70, -28, -75, 109, 90, -86, -84, 68, -34, 81, -115, -51, -19, 125, 45, -14, 113, -60, 35, 86, 12, 32, 125, 120, -16, 51, 120, 62, 112, 25, -65, 10, -54, 76, 99, 20};
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
    msg.setTimeStamp(0.13992943894625887);
    msg.setSource(50193U);
    msg.setSourceEntity(231U);
    msg.setDestination(6502U);
    msg.setDestinationEntity(180U);
    msg.source.assign("FQCUUILQRYEYAZKNPGVFSWVWORNVGYKTDYXCEXHVKIHYOBYMLUBGAHCUZVKQZTRKTSCFWKJYNLXOZLDSOCSRNFBHFKIIWAMDPLPQRUYGUDASRWJYPKXVEVCBOISMGACEPFVABGHXWRNMMEOUUOEMWBNTNDROTDNJSSKEPQZRIZJXSMZXTJBUGRHQKVHQHXLZHTLFMTJBDDWLXCNWAPFYTQZQPWDAAICGZJCXUVOIGPENSLFBMIHFJQJD");
    const char tmp_msg_0[] = {82, -22, 16, -73, -77, -90, 94, -111, -120, 43, -33, -71, 27, 12, 40, 70, 99, 96, 36, 78, -38, -83, -109, -116, -77, -84, 83, -99, -123, -92, -85, -121, -102, -19, -57, -52, -12, 25, 126, -56, -84, 16, 96, -95, 36, -52, 31, 124, -79, 63, 63, -12, 59, -34, 56, 70, -95, 119, 86, -54, 94, -58, -84, 5, -89, -85, 69, -14, 80, 17, 41, 121, -9};
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
    msg.setTimeStamp(0.1706519297489416);
    msg.setSource(15052U);
    msg.setSourceEntity(252U);
    msg.setDestination(16883U);
    msg.setDestinationEntity(133U);
    msg.seq = 328513345U;
    msg.state = 84U;
    msg.error.assign("TBZDJVZBYUGBRCKEYACFABHNJBAMG");

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
    msg.setTimeStamp(0.7141756326653587);
    msg.setSource(57444U);
    msg.setSourceEntity(107U);
    msg.setDestination(30684U);
    msg.setDestinationEntity(243U);
    msg.seq = 1518328708U;
    msg.state = 57U;
    msg.error.assign("FIKUXKGLNEVPOHAAPTLXZOKUXUNHAODVOJFBYFQFDOQYRZPNVJUFYYBKSUTMNBPWDUXHZSNMUGQMFWC");

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
    msg.setTimeStamp(0.7542962700783052);
    msg.setSource(31156U);
    msg.setSourceEntity(59U);
    msg.setDestination(40090U);
    msg.setDestinationEntity(239U);
    msg.seq = 4188357687U;
    msg.state = 184U;
    msg.error.assign("HCTZFPOENOOTHBXMMBHCMRVKELFHSLDPXJDAGOJSVDBGEPNBZJEUGANPVBIZLJLHZAKWWORTSPIHYVYQJBXUWVHWMZSGQFZVKTBJKHTGRFWNTRUFIRFCCEQALBXRYNMTJZNJSVYVDKZAE");

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
    msg.setTimeStamp(0.7935414151329652);
    msg.setSource(38104U);
    msg.setSourceEntity(118U);
    msg.setDestination(17861U);
    msg.setDestinationEntity(151U);
    msg.origin.assign("FVFJUUGTNQCESIZLIYXXVBMHQQGRMMQDPZCFHBEHJWYKYBFFKVKZEGJIEXACVYSYAORYGUKRWEWWNTTULTLNWVUYXPLPBKBVMWHJOEDVFLOTSAMLBSLQBTHEK");
    msg.text.assign("YENOLMLFGTZVXEERCJTPBPXQYSOYUUUAZN");

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
    msg.setTimeStamp(0.7404346857073084);
    msg.setSource(57443U);
    msg.setSourceEntity(203U);
    msg.setDestination(8676U);
    msg.setDestinationEntity(218U);
    msg.origin.assign("RNSVJTSBMJLNPRKPAXZOIZTZJ");
    msg.text.assign("MZFDXQHZNRCBWFOMUDGYWRYHIDJAYWCAMEKSPOCBYRORQHMFXOMPLBRQRYVVNYWRMSTHYFHQVKBGPMTAGGIAKAGHZTVYPQWAHBKDSXRVZEQMRSREENELBVSDBGBFJIWTUDZKCFLH");

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
    msg.setTimeStamp(0.5713840164739575);
    msg.setSource(20590U);
    msg.setSourceEntity(179U);
    msg.setDestination(32647U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("WPJJIQGLCATXSCBYQFPVSSJFNIBOITXMGZXKYVQELQAUEONKHMJLULEBPRNEQUBQSZYNRTXMUWDDDCDRAUZYMHAXZXHQBBGJKVZNCPRRWWMKIPSEBGLXJENYLISNKFLLGPISAVB");
    msg.text.assign("EJCNRUOMYSOHWYQPWZAODBHNTBHWFLHXINJZWDXXLSLJIYIDMMD");

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
    msg.setTimeStamp(0.429024360303895);
    msg.setSource(10200U);
    msg.setSourceEntity(35U);
    msg.setDestination(4740U);
    msg.setDestinationEntity(141U);
    msg.origin.assign("WEFTRQPAHOZNPNYZSHBTNSROPBENJJCPLZPAOZULYDGHDJAAMPYDAMOUSFVQXDMIORLQNFZBWQZOCWAOJTPKMVPUAFHIZQIIVSXGNDRHKPGEBDXZSCVSWFGKVVXSEBMEBAABCVEMGGIMSXUYEUIFCHCTEGMNRYTMHULAYRJMCFYCQUTTDCDJBTRIQJFYYPBWNQQFUJXXIEKNKXKZENLTBXWKFHIVUVXSOGVKROWJCRHYD");
    msg.htime = 0.7525412961474488;
    msg.lat = 0.058826190037011616;
    msg.lon = 0.026458098201316727;
    const char tmp_msg_0[] = {-63, 30, -47, 97, -54, -39, -102, -73, 60, 99, 110, 39, 62, -54, -14, 102, -44, -96, -2, -123, -45, 56, 59, 8, -53, -76, 69, 61, -69, 99, 105, 63, 109, 109, 25, -24, -33, 96, -26, 0, 30, 84, 28, 115, 103, 93, -88, 121, 18, 111, -2, 6, -51, -49, 0, 106, 25, -67, -3, -55, 35, 0, -64, -10, 83, 5, -83, 33, -109, -59, -23, 42, -71, 65, -97, 46, 83, 95, -68, 35, 34, -126, -70, 12, 40, -112, -9, -97, 94, 89, -89, -2, 82, -3, -73, -111, 75, 18, 63, 97, 126, -58, -22, -60, 115, 13, 99, -35, 74, 103, -89, -75, -105, 102, 114, -87, -3, 58, -21, 86, 87, -96, 98, 91, 6, 6, 49, -113, 12, -10, 39, 56, -103, 42, 123, -67, 104, 44};
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
    msg.setTimeStamp(0.6699216404844078);
    msg.setSource(22609U);
    msg.setSourceEntity(219U);
    msg.setDestination(57864U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("XOSKSXZXVEPIMTUMRYBCAGWVDCNOENXJCWJHKIMTQZHDQIYQKTKSXWSDVECJUVHLBRMTBUAGHJAOBPGZLVVYYTDRFNUBPJERMCKFYFONYOJDGVFTUMUTPPDBIZMSRFSGSIQIHLWLWHFZYAPHRCGARUUKXKKZYPJVBUUDZYY");
    msg.htime = 0.42657349424681623;
    msg.lat = 0.7402593137995789;
    msg.lon = 0.8870758230180332;
    const char tmp_msg_0[] = {-9, -108, -61, 84, -46, -48, 63, 72, 50, 119, 16, 2, 71, -3, 69, 63};
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
    msg.setTimeStamp(0.24220843263317626);
    msg.setSource(3056U);
    msg.setSourceEntity(1U);
    msg.setDestination(30428U);
    msg.setDestinationEntity(60U);
    msg.origin.assign("ULDASTODHVENXUJQSGXCLEGCRMYHIKPIVAKTFGJLMQWKRJYXXNMQKJRTTRKOODZJDFNQLKVXYKKISAYPGSASBRZF");
    msg.htime = 0.36488818732603345;
    msg.lat = 0.34824271573347343;
    msg.lon = 0.8702051722906436;
    const char tmp_msg_0[] = {42, -54, 64, -123, -50, -20, 125, -85, 28, 6, 117, -75, -27, 92, -119, 7, -64, -63, -119, 117, -79, 56, -50, -38, 68, 97};
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
    msg.setTimeStamp(0.35205811831074774);
    msg.setSource(46506U);
    msg.setSourceEntity(187U);
    msg.setDestination(64315U);
    msg.setDestinationEntity(195U);
    msg.req_id = 24145U;
    msg.ttl = 55616U;
    msg.destination.assign("YORQFLEUBHZMAJULAJQM");
    const char tmp_msg_0[] = {11, 81, -23, 22, -77, -64, 103, -112, -97, 63, -15, 24, 31, 47, -83, 9, 108, -120, -105, 123, -71, 95, -82, 58, 121, 79, -33, -119, 32, 11, -30, -22, -20, -62, 118, 100, -90, -114, 57, 113, 124, -42, 126, -122, -6, 93, -96, 49, 67, -44, -23, 38, 40, -51, 17, -46, -97, 5, 54, 55, 39, 114, -63, -8, -106, -29, 62, 74, -99, 58, 93, -116, 37, -85, 72, 14, 41, -8, 20, -1, 32, -19, 8, 106, -81, 70, -53, -32, 68, 116, 14, -28, 6, 121, 48, -76, -86, 12, 48, 26, -68, -72, 86, 90, -6, 67, 111, -120, -67, 66, -113, -71, 104, -124, 73, -120, -50, -21, -35, 101, -34, 64, -55, -107, -40, 11, 33, -127, 54, 48, 40, 26, 98, 55, 74, 32, 59, 106, 103, 40, 108, -56, -23, -107, 16, 90, -6, -105, -16, 91, 94, -62, -127, -113, 44, 125, 72, 23, 93, 28, -29, -123, -9, 95, 113, 0, -81, 50, -71, 68, -128, 49, -43, 76, -128, -127, 32, -103, -113, -79, 43, 55, -43, 51, -87, -53, 41, -70, -31, 67, 87, 34, 14, -105, -48, 68, -34, 46};
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
    msg.setTimeStamp(0.21120307190652232);
    msg.setSource(22786U);
    msg.setSourceEntity(46U);
    msg.setDestination(37103U);
    msg.setDestinationEntity(177U);
    msg.req_id = 39484U;
    msg.ttl = 45473U;
    msg.destination.assign("XKBBKKHUEOBYRJTHSXATIFJSAXSRZVWVVKEBMWJDNOCANSWNFTDIQLSCD");
    const char tmp_msg_0[] = {113, 21, -59, -22, 111, -6, -63, 51, 104, 62, -114, 24, 83, 113, 77, 4, -83, -104, 25, 22, -2, 84, 49, 26, -113, 37, 64, 21, 56, 4, -92, -16, -116, 51, 112, -26, -25, -35, -116, -115, -50, -55, -15, -50, 67, -14, 41, 53, 19, -118, 113, 41, -5, 6, 37, -57, 39, -59, -26, 72, -96, -120, 24, 91, -50, 59, 66, -87, 43, 105, 47, -81, -7, -117, 119, -77, 16, -120, -48, 0, -5, 95, -111, 34, -3, 108, 43, 56, 106, -46, -108, 18, 63, 91, 97, -29, -63, -94, 92, 36, 119, 44, 12, 16, -116, 4, 33, -97, -28, 56, -32, -46, -92, 83, 11, -118, -36, 18, -116, -128, 58, 98, -49, 13, 104, -22, 66, -2, -85, -120, -43, 99, -15, 28, 83, -42, -11, 9, 113, 70, -95, -124, 34, 121, -24, 96, -99, 60, -104, 78, -50, -96, -98, -111, -24, -67, -102};
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
    msg.setTimeStamp(0.09016116524918494);
    msg.setSource(9082U);
    msg.setSourceEntity(77U);
    msg.setDestination(44036U);
    msg.setDestinationEntity(157U);
    msg.req_id = 53250U;
    msg.ttl = 30691U;
    msg.destination.assign("CGPUMBENEXHYBH");
    const char tmp_msg_0[] = {-12, -75, -69, -110, -124, -76, -84, 58, 38, 74, 0, 74, 79, -46, 11, -118, 91, 90, -77, 78, -66, -85, -78, 14, -109, -112, -40, -115, 39, -50, -126, 91, -67, -60, 105, 34, 94, -66, -5, -54, -71, 72, -48, -3, 117, 37, -100, -28, 63, -121, -45, -116, -118, -109, 80, -101, -116, 42, 46, 10, -22, 30, 117, 0, 42, 112, -117, -12, -44, -128, -78, -48, 29, -107, -30, -45, -58, -16, 62, 90, -20, -89, 22, 4, -13, -53, 54, -4, -63, 34, 86, -122, 110, 61};
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
    msg.setTimeStamp(0.2190796348674131);
    msg.setSource(45096U);
    msg.setSourceEntity(195U);
    msg.setDestination(509U);
    msg.setDestinationEntity(229U);
    msg.req_id = 17001U;
    msg.status = 225U;
    msg.text.assign("CZQSBRRLLHGIOMGQJGFQACXAVHOXBANJNUPPDKZZBPRYIWTSKSYDELGBAZVUOMNIBFMDEHLRYKYRYKVLNPSUUZEBWCTQWOSMYVQWBJHEGWDQKMIFJUVWDZICTVCSWCMNKRHLDKBPJBICXIA");

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
    msg.setTimeStamp(0.45385327450855595);
    msg.setSource(2063U);
    msg.setSourceEntity(186U);
    msg.setDestination(32403U);
    msg.setDestinationEntity(123U);
    msg.req_id = 46082U;
    msg.status = 16U;
    msg.text.assign("KLHMHQSCZFGCIZIYKLBYHMDDGQWSE");

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
    msg.setTimeStamp(0.7970545279755296);
    msg.setSource(50283U);
    msg.setSourceEntity(27U);
    msg.setDestination(46188U);
    msg.setDestinationEntity(7U);
    msg.req_id = 25836U;
    msg.status = 93U;
    msg.text.assign("WGHCUMDGVIMAUNSDZCDOXICZIPBQFZEUPRHRBBEGXDRWEUUYNYKGQPEGHQJKSUTRETJTHIOYELAMCFWVONAFGZEVXWJHAJEGFYPEBLYKIQYHMWFXKGJUXAKQPIIARNALVNWPXDOBSPZOLFLBNGDVYBNJUCSRWTGSMPZTYXWMTXKFOSZKRQTCNAFCMK");

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
    msg.setTimeStamp(0.29867877897091444);
    msg.setSource(31805U);
    msg.setSourceEntity(73U);
    msg.setDestination(33181U);
    msg.setDestinationEntity(75U);
    msg.group_name.assign("WDUAADGPULOOZRGQNNCWLCKZJTKNOPRXQJOTMAAKTOGYMEBAAOCZYKJIBHWUVSLGJFSFYIXRPAVJTWFBEWURODTXRVGVBBGECFVYSKXEHZNFVSKRNXIULPJDHKISTFPWBQCNUENUFMNDHZIEVLCHZGMCCJVAZJQWEBJPKZEPICKZQLSQDRHE");
    msg.links = 343433088U;

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
    msg.setTimeStamp(0.4631822388838355);
    msg.setSource(47783U);
    msg.setSourceEntity(9U);
    msg.setDestination(6516U);
    msg.setDestinationEntity(35U);
    msg.group_name.assign("AQPPUFJCZJREXVBMTUFGQGLWAKUMRIAWKMHDAIGTPDEMYYUMVSXXPBD");
    msg.links = 2984812937U;

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
    msg.setTimeStamp(0.17332659751905977);
    msg.setSource(24529U);
    msg.setSourceEntity(117U);
    msg.setDestination(55926U);
    msg.setDestinationEntity(167U);
    msg.group_name.assign("BHVEHPUXSFJODCUANMMVZFCFBWRDSIIRBETIUKFIIXIAJAXKWNCZVPQHLVAXMOQVNLJFRMCHFZEKTDDFVPEGPZECKSWJ");
    msg.links = 3794446082U;

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
    msg.setTimeStamp(0.32963762765419846);
    msg.setSource(23718U);
    msg.setSourceEntity(53U);
    msg.setDestination(51142U);
    msg.setDestinationEntity(62U);
    msg.groupname.assign("SKJXETWADSVVNPOZZPSPNQDYNNQMTBAUJPKLRWNTLIVQVJBEZWFSPFFMBGUCYWFUMVEPVLDHXWHERFEWUVQEZDXBKIAMPXXWTZTBOQUYLYZVLFCASYJYHISGAUMCXNYMJYSOJEGWDHDHPRIVBFCYRKSFOBSPKEHLAHXLXGAMRGQHQOIMJQNTLZDIJWHAZCXYGPRORAMURQJMQVUOZFSCEBBWTEDAULNJGBRKHNTLDOKKKOCCIIGXIGTKOCZ");
    msg.action = 197U;
    msg.grouplist.assign("FEDEJJSHHTBFKRDUVUJKMOUTJBWFXCXAMWOWQYLH");

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
    msg.setTimeStamp(0.8653680230807068);
    msg.setSource(28864U);
    msg.setSourceEntity(33U);
    msg.setDestination(288U);
    msg.setDestinationEntity(171U);
    msg.groupname.assign("WZDHOPUWRTXFHRFALVZIGEGUSLATPFAYOXEQLJPGCTQFPJDCUKBHWNKETFPYZNYJHVGGSCUVYDMMLMTRBDSRZUXTCEKSOAAPRBGAKMZXYWMKGJBUUCRJEVKKQEQMZXFYMODDCQVMUNTRONEHHNOSOTYLLQAQBRSRDNAGNIJSBCVKAIYPIWEYBNHGLJFJVLPPHZBMBYWWNTZ");
    msg.action = 197U;
    msg.grouplist.assign("LOGVSCZNDCHZEIRHHRHQNAFINMOYSGSJYINENZAMSMUUVCCLATPWKYJTBMTYXJBQZURGXXQGKWUCYJUQMFYXOTNSOHDNAMTK");

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
    msg.setTimeStamp(0.0909487059052776);
    msg.setSource(11867U);
    msg.setSourceEntity(252U);
    msg.setDestination(27972U);
    msg.setDestinationEntity(26U);
    msg.groupname.assign("JYBAONEIWXNWHJLAYWBSZSDYCHXXXDGZQUMHFQZKSZGPSTXXPCJAOZGJPTOKVVKTDHVYVTFFFCAQOWMPDHEIMEHASHIPWGANNEUEEDJBNVRGYUTBTMXLBULWNXBFGUASREOEVDMDFARRQRKSRCYIPZGLCMWNKPBNOLWEIEUSVDNHPQVKRIHACJZSGNZJBHDDYUKYFBIUCMOGKVLFRFCMWMUYAXIQOBLPZPROCUKJQQ");
    msg.action = 145U;
    msg.grouplist.assign("TGODJWPYQNNLZBTMYWOQMVOBXYVSLTXEGTZOGVFZAMFGHUGCOIMKF");

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
    msg.setTimeStamp(0.589180969980536);
    msg.setSource(42953U);
    msg.setSourceEntity(136U);
    msg.setDestination(854U);
    msg.setDestinationEntity(129U);
    msg.value = 0.08530441736811001;
    msg.sys_src = 22469U;

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
    msg.setTimeStamp(0.10443145461292946);
    msg.setSource(53267U);
    msg.setSourceEntity(233U);
    msg.setDestination(55416U);
    msg.setDestinationEntity(170U);
    msg.value = 0.397113266233473;
    msg.sys_src = 18647U;

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
    msg.setTimeStamp(0.3372398778412026);
    msg.setSource(21246U);
    msg.setSourceEntity(108U);
    msg.setDestination(62302U);
    msg.setDestinationEntity(250U);
    msg.value = 0.2016683343445499;
    msg.sys_src = 43224U;

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
    msg.setTimeStamp(0.7934018841410471);
    msg.setSource(50141U);
    msg.setSourceEntity(135U);
    msg.setDestination(46519U);
    msg.setDestinationEntity(221U);
    msg.value = 0.7288797693899163;
    msg.units = 37U;

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
    msg.setTimeStamp(0.5794531182539991);
    msg.setSource(26425U);
    msg.setSourceEntity(185U);
    msg.setDestination(49662U);
    msg.setDestinationEntity(115U);
    msg.value = 0.9028460925363861;
    msg.units = 123U;

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
    msg.setTimeStamp(0.11599224602465119);
    msg.setSource(18228U);
    msg.setSourceEntity(150U);
    msg.setDestination(48709U);
    msg.setDestinationEntity(128U);
    msg.value = 0.13397163741892226;
    msg.units = 23U;

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
    msg.setTimeStamp(0.2920390740237303);
    msg.setSource(62980U);
    msg.setSourceEntity(161U);
    msg.setDestination(9582U);
    msg.setDestinationEntity(3U);
    msg.base_lat = 0.7742891170947968;
    msg.base_lon = 0.1681292375819402;
    msg.base_time = 0.9396819773259604;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 25481U;
    tmp_msg_0.priority = -113;
    tmp_msg_0.x = -22586;
    tmp_msg_0.y = 22594;
    tmp_msg_0.z = -26602;
    tmp_msg_0.t = 27367;
    IMC::Target tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.label.assign("VVFJKBPWURIRJMDLLNDRMWZXATCNOBSQWFHUIXBCTPSDOPHVZTAUBDMQBMZG");
    tmp_tmp_msg_0_0.lat = 0.06696018971922901;
    tmp_tmp_msg_0_0.lon = 0.466337696116235;
    tmp_tmp_msg_0_0.z = 0.43144676331464804;
    tmp_tmp_msg_0_0.z_units = 75U;
    tmp_tmp_msg_0_0.cog = 0.15523879528701445;
    tmp_tmp_msg_0_0.sog = 0.12971429627530318;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5004106273571916);
    msg.setSource(434U);
    msg.setSourceEntity(199U);
    msg.setDestination(52985U);
    msg.setDestinationEntity(23U);
    msg.base_lat = 0.18734603510713443;
    msg.base_lon = 0.9155353407848046;
    msg.base_time = 0.9385549887132341;

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
    msg.setTimeStamp(0.5486012889628307);
    msg.setSource(16841U);
    msg.setSourceEntity(62U);
    msg.setDestination(54861U);
    msg.setDestinationEntity(149U);
    msg.base_lat = 0.4587961326714868;
    msg.base_lon = 0.9786877294364354;
    msg.base_time = 0.191416770510346;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 55718U;
    tmp_msg_0.destination = 55021U;
    tmp_msg_0.timeout = 0.2313063808865221;
    IMC::Current tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1057237951195561;
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
    msg.setTimeStamp(0.6475241693520174);
    msg.setSource(22018U);
    msg.setSourceEntity(20U);
    msg.setDestination(34877U);
    msg.setDestinationEntity(102U);
    msg.base_lat = 0.2917074279162496;
    msg.base_lon = 0.9803964490585708;
    msg.base_time = 0.847892461157674;
    const char tmp_msg_0[] = {97, -86, 37, 41, -47, -3, 48, -52, 42, -6, 5, 6, 109, 100, 2, 66, -99, -71, -114, 103, -61, 60, -111, -116, 26, 87, 10, 82, -86, 109, 114, 62, -1, 78, 41, -61, -58, -35, -1, -89, 93, 80, -78, -22, -128, -75, 51, 43, -105, -118, 67, -77, 46, -31, -74, -91, 40, 91, -70, -47, 13, 36, 29, -14, -120, 69, 62, 112, -40, 111, 41, -69, -65, -32, -33, 49, 80, -29, -108, -54, 79, -35, -72, 9, -66, -70, -108, 109, -17, 100, -6, -70, -103, 32, 68, -91, -3, 24, 0, -118, 52, 116, 102, 75, -76, 19, 38, -108, -22, -126, 112, -52, -39, 76, 76, -109, 105, -70, 55, 82, 117, -32, 118, -68, -69, 96, -81, 95, 70, 81, 24, 18, 29, 6, -51, -54, -46, 1, -118, -107, -113, 69, 51, 59, -74, 115, -62, -37, -8, -77, 126, -36, -122, 51, -84, -53, 37, 104, 115, -18, 18, -35, 36, -15, -70, 21, -33, -88, -42, 89, -21, -4, 12, 108, 98, -36, -113, 50, 37, 12, 44, 114, 64, 102, 87, 71, -66, 80, -9, 118, -75, 104, -88, 37, 18, -67, -42, -70, -104, -99, 109, 4, -80, 59, -99, 89, 35, -60, -52, -89, -9, -80, -56, -108, 113, -8, -84, 15, 83, -18, 4, -60, 27, 5, 76, -114, 74, -24, -103, -41};
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
    msg.setTimeStamp(0.7538725992854695);
    msg.setSource(2571U);
    msg.setSourceEntity(140U);
    msg.setDestination(56757U);
    msg.setDestinationEntity(145U);
    msg.base_lat = 0.6009999040637067;
    msg.base_lon = 0.599503867623924;
    msg.base_time = 0.27199533692568245;
    const char tmp_msg_0[] = {-124, -12, 106, 18, 125, -38, 9, -125, 65, -15, 115, -91, -60, -87, 38, 65, 99, -20, -60, -83, 18, 110, 11, 24, -45, -19, 13, 58, 78, 63, -81, 27, -5, -100, -87, -84, -32, -103, 2, 25, 5, -58, -79, -4, -86, -96, -94, 65, 96, 116, 88, 39, 33, 75, 117, 103, -39, -78, 48, 85, -77, 77, 126, 60, -114, -44, -56, -70, 41, 40, 115, 37, -30, 28, 107, 49, -108, -73, 16, 23, -35, 24, -53, 40, 120, -104};
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
    msg.setTimeStamp(0.9480327280184591);
    msg.setSource(32535U);
    msg.setSourceEntity(55U);
    msg.setDestination(27223U);
    msg.setDestinationEntity(163U);
    msg.base_lat = 0.5539794147234735;
    msg.base_lon = 0.7007826224742325;
    msg.base_time = 0.7745469024244637;
    const char tmp_msg_0[] = {-76, 100, 111, 15, 34, -8, -76, -114, 93, -61, -101, -19, -117, -81, -128, -1, 44, -38, -94, -20, -53, 105, 35, 69, 77, -14, 86, -48, -19, -88, -82, -16, -119, 49, 67, -36, 67, -124, 42, -5, -16, -69, 41, 119, 15, -75, 118, -79, -14, -81, 29, -25, 91, -67, 1, 17, 76, 23, 18, 69, 10, 32, -119, 35, 96, 40, -84, 92, 108, -107, 61, -44, 104, 52, 119, 81, -100, 33, -119, -100, -119, 118, 32, 88, -1, 85, -49, -96, -128, 29, 64, 104, 91, 47, -27, 95, 63, -10, 80, -57, -104, 122, -98, 47, 80, 73, -126, 47, 84, 15, 109, 90, 114, -47, 88, 88, 97, -32, 71, -92, -81, 98, 61, -35, 9, -14, 120, 8, -110, -87, 48, 84, -104, 70, -97, 69, 100, 35, -118, -89, 40, -91, 48, -76, -8, -77, -82, -57, -82, 93, 21, -20, 84, 115, -59, 35, -109, -102, 118, -35, -78, 94, -65, -47, 122, 28, -65, -107, -123, 12, -18, -80, 113, -9, -66, -67, 88, 63, 108, -81};
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
    msg.setTimeStamp(0.5230760959308205);
    msg.setSource(6073U);
    msg.setSourceEntity(247U);
    msg.setDestination(49480U);
    msg.setDestinationEntity(12U);
    msg.sys_id = 21634U;
    msg.priority = 35;
    msg.x = -13133;
    msg.y = -4726;
    msg.z = -9673;
    msg.t = 6955;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ONCBHIQBWXIAAHZCNYXQCWHQOXKPNPTJNZDAZJPJTSBDCQEOZAQBXJARHITHPOFFBFVZHHHLIERGJLWYZDVLYOLYKRDKWVJVMXMITKLOOSYNETDAYGXXXVZDKGTWBSDAPYIUMGICKPSWEUUCWAJMOZDHREGPKFTLQZCSJKULUCNISIFAMDFTNCQUVDCYSV");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UFMBDACLQUXCHJBHJRWEECFQEISPKSBRGEEYFNSFRWTZNPPLUZNCQ");
    tmp_tmp_msg_0_0.value.assign("EMRGHSIUUHRGPJPSCVEVKNBQAXMSXXMIHRLKOSEJLXUXVWCZACNDLYOTDBDQRUKLFTERTNMVYOQRFQYUKUBOVLMZZLMKHHWEJKNFQXGOOPBWCFWPATTCRWUGFOZNSGLCBYTYJEMVWJKGQMBAZHTIEICUDPIPQJYFQOFWPNAWYBSICQOJDHO");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4990153626572289);
    msg.setSource(35923U);
    msg.setSourceEntity(83U);
    msg.setDestination(38587U);
    msg.setDestinationEntity(30U);
    msg.sys_id = 26947U;
    msg.priority = -104;
    msg.x = 6907;
    msg.y = -31076;
    msg.z = -404;
    msg.t = 30038;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.8997148234063446;
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
    msg.setTimeStamp(0.6994391252774815);
    msg.setSource(7974U);
    msg.setSourceEntity(4U);
    msg.setDestination(44820U);
    msg.setDestinationEntity(81U);
    msg.sys_id = 52568U;
    msg.priority = -29;
    msg.x = -13575;
    msg.y = 30204;
    msg.z = 7256;
    msg.t = 2268;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 207U;
    tmp_msg_0.numsamples = 149U;
    tmp_msg_0.lat = 0.4726314807186589;
    tmp_msg_0.lon = 0.16474023158716866;
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
    msg.setTimeStamp(0.9486931098608203);
    msg.setSource(51734U);
    msg.setSourceEntity(199U);
    msg.setDestination(62997U);
    msg.setDestinationEntity(118U);
    msg.req_id = 65229U;
    msg.type = 96U;
    msg.max_size = 11131U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3315424477983444;
    tmp_msg_0.base_lon = 0.6960610169201855;
    tmp_msg_0.base_time = 0.5226639204321896;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 13811U;
    tmp_tmp_msg_0_0.priority = -96;
    tmp_tmp_msg_0_0.x = 8808;
    tmp_tmp_msg_0_0.y = 1186;
    tmp_tmp_msg_0_0.z = -5633;
    tmp_tmp_msg_0_0.t = 19222;
    IMC::ControlLoops tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.enable = 239U;
    tmp_tmp_tmp_msg_0_0_0.mask = 1029194508U;
    tmp_tmp_tmp_msg_0_0_0.scope_ref = 472367059U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.07025452624525075);
    msg.setSource(64897U);
    msg.setSourceEntity(88U);
    msg.setDestination(63891U);
    msg.setDestinationEntity(187U);
    msg.req_id = 31901U;
    msg.type = 97U;
    msg.max_size = 34926U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.18280735474762155;
    tmp_msg_0.base_lon = 0.39690343776253256;
    tmp_msg_0.base_time = 0.19245279022732342;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 7260U;
    tmp_tmp_msg_0_0.priority = 99;
    tmp_tmp_msg_0_0.x = -7672;
    tmp_tmp_msg_0_0.y = 29480;
    tmp_tmp_msg_0_0.z = 9150;
    tmp_tmp_msg_0_0.t = 10141;
    IMC::FormationState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 24U;
    tmp_tmp_tmp_msg_0_0_0.op = 164U;
    tmp_tmp_tmp_msg_0_0_0.possimerr = 0.9166622525647846;
    tmp_tmp_tmp_msg_0_0_0.converg = 0.30839333381706335;
    tmp_tmp_tmp_msg_0_0_0.turbulence = 0.49365687325504015;
    tmp_tmp_tmp_msg_0_0_0.possimmon = 205U;
    tmp_tmp_tmp_msg_0_0_0.commmon = 240U;
    tmp_tmp_tmp_msg_0_0_0.convergmon = 200U;
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
    msg.setTimeStamp(0.7931146519387332);
    msg.setSource(3673U);
    msg.setSourceEntity(37U);
    msg.setDestination(32899U);
    msg.setDestinationEntity(214U);
    msg.req_id = 16791U;
    msg.type = 18U;
    msg.max_size = 46719U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6017057850323325;
    tmp_msg_0.base_lon = 0.5259333365255123;
    tmp_msg_0.base_time = 0.39245454334196095;
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
    msg.setTimeStamp(0.8456456492260936);
    msg.setSource(62721U);
    msg.setSourceEntity(165U);
    msg.setDestination(38488U);
    msg.setDestinationEntity(119U);
    msg.original_source = 16805U;
    msg.destination = 27642U;
    msg.timeout = 0.23492550400920975;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 11U;
    tmp_msg_0.htime = 0.36610290252274225;
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
    msg.setTimeStamp(0.299725640787453);
    msg.setSource(40034U);
    msg.setSourceEntity(146U);
    msg.setDestination(39259U);
    msg.setDestinationEntity(207U);
    msg.original_source = 55488U;
    msg.destination = 8563U;
    msg.timeout = 0.6533101786712735;
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("RTTBNAPETQCQWOPSABVWUSFLLABFTFLXFHUGEIOAPYXXIHJVMOZNKTIOYLNXUASRHWADCJEJKNAOVKZYUFOKWRDHED");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("SORRUEVPBIPPRVQHXVJWCNLPIGZTCNFYSUOS");
    tmp_tmp_msg_0_0.feature_type = 74U;
    tmp_tmp_msg_0_0.rgb_red = 148U;
    tmp_tmp_msg_0_0.rgb_green = 218U;
    tmp_tmp_msg_0_0.rgb_blue = 81U;
    tmp_msg_0.features.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8333245797453928);
    msg.setSource(62995U);
    msg.setSourceEntity(216U);
    msg.setDestination(15883U);
    msg.setDestinationEntity(152U);
    msg.original_source = 20398U;
    msg.destination = 33215U;
    msg.timeout = 0.9512701542301041;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.6176294344874007;
    tmp_msg_0.y = 0.9843739548140501;
    tmp_msg_0.z = 0.1721864119886357;
    tmp_msg_0.phi = 0.6181109390044288;
    tmp_msg_0.theta = 0.3382922696761126;
    tmp_msg_0.psi = 0.31592291099652736;
    tmp_msg_0.p = 0.8506209580472718;
    tmp_msg_0.q = 0.4791937306457288;
    tmp_msg_0.r = 0.2490156045908304;
    tmp_msg_0.u = 0.7715294322962202;
    tmp_msg_0.v = 0.06587801077991617;
    tmp_msg_0.w = 0.8032358641196006;
    tmp_msg_0.bias_psi = 0.48669741967564695;
    tmp_msg_0.bias_r = 0.7664383589517898;
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
    msg.setTimeStamp(0.2380479003442285);
    msg.setSource(31120U);
    msg.setSourceEntity(251U);
    msg.setDestination(8591U);
    msg.setDestinationEntity(101U);
    msg.type = 176U;
    msg.comm_interface = 43808U;
    msg.model = 16010U;
    msg.list.assign("UJAXQFTWAYQPYUEVZVREUFCHVEFPKXKIPBWKCFPHSTDYIBPCFJHYSUOTPRTQAONDVVJQWLCMYROCIQEMFTPDBWWHKEDKGYLNVBQOJHGZRZKNYHDDRADRNSKQXRWEGAWSNNXLUMETAIXTLDWGMPYOFBOHCZEBHZLIQGUOZTQMVUOINBX");

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
    msg.setTimeStamp(0.8662528760885964);
    msg.setSource(61517U);
    msg.setSourceEntity(236U);
    msg.setDestination(17307U);
    msg.setDestinationEntity(219U);
    msg.type = 57U;
    msg.comm_interface = 63100U;
    msg.model = 59130U;
    msg.list.assign("OHKVAWHSKGCHUYCPPWINOKTVCOLUALBMVMAFFJAIXOIXKGJMYGPPSQQRWCWS");

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
    msg.setTimeStamp(0.4936204173251967);
    msg.setSource(18813U);
    msg.setSourceEntity(222U);
    msg.setDestination(56190U);
    msg.setDestinationEntity(138U);
    msg.type = 42U;
    msg.comm_interface = 48390U;
    msg.model = 62401U;
    msg.list.assign("KFLFUDMOGNLULJKADJXSJQIQQKRYWWAODCOVVRZDZTVRBWXWGYSCQJRJAITCEDAKZHAPFMGSYSKMJMTEPERZOGXPKHJGLEHEFNDEROCJXYZVWULBVUEIMTNHDNXZWECNDMROIYCHZBIZGBMLUAIYSRBVCNSINM");

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
    msg.setTimeStamp(0.547813497442547);
    msg.setSource(8203U);
    msg.setSourceEntity(14U);
    msg.setDestination(22763U);
    msg.setDestinationEntity(30U);
    msg.type = 67U;
    msg.req_id = 2150648031U;
    msg.ttl = 4846U;
    msg.code = 129U;
    msg.destination.assign("WTBCRSCOABLSSNMYHXQURPIOZ");
    msg.source.assign("MUECRYIDRIRVHVWJLDQYVXJFKZBTQVPVTFJISLNAUQVYDXALMAEGWKANNKTITDBSXCUQXMXYHGXGKEYQOGHUDZZPGHAVNPDZFFCTMUUGNF");
    msg.acknowledge = 12U;
    msg.status = 188U;
    const char tmp_msg_0[] = {116, 48, -87, 87, 62, -65, -128, -102, 112, 67, -34, -96, -47, 10, -76, 92, -10, -41, 51, -103, -27, 123, -104, -45, -23, -16, -17, 87, -70, -32, 8, -123, 50, -61, -11, -113, 54, -80, -76, -108, 4, 42, 118, -49, -7, -117, -12, 28, 69, -12, 98, 88, -100, -39, -27, -85, -51, 126, -42, -65, -81, -27, 95, 27, 105, -11};
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
    msg.setTimeStamp(0.5625300566380081);
    msg.setSource(25070U);
    msg.setSourceEntity(51U);
    msg.setDestination(31724U);
    msg.setDestinationEntity(50U);
    msg.type = 34U;
    msg.req_id = 613337981U;
    msg.ttl = 52123U;
    msg.code = 4U;
    msg.destination.assign("ZRHSPNSGPNDMBRDKFCRXCQAZVXZVZJATZTBJRVXBYQCPVKLQIVLDCTOFBUXROIUBCQLGAUKZFEEOKXPEXYJPSEHTNLGBITURSELIJWYBFWTYNVDCPMRHVLMCWHDWISKFAEQMLDDDOTUMDOSSGMKKRUYZAHFORWOWMHRYWPJQNXSBQJHTCNEJFIGNHBIUKIJXGYNDLHGEXYWUOWFOZMQMIVKQQYAMXZAVULFAHAVSWPBEJGOISNUPKCGANT");
    msg.source.assign("OEQVXRYDRWMTADJKGHGQEYBBUEAFLDAHBXYVZCUGWJPNHNIJKBNZFBAKCOKOMKSTNNJGAZOSTXXRRQCQAEENMSTFVVHADYXII");
    msg.acknowledge = 207U;
    msg.status = 188U;
    const char tmp_msg_0[] = {92, 122, 34, -94, -31, 111, 13, -117, -128, -13, 14, 54, -103, -86, 118, 56, -20, 35, -25, -22, -5, 112, 67, -53, 12, 121, 95, -57, -42, -48, -52, -124, -45, 57, -59, -122, 27, -101, 77, -78, -1, -25, -3, -6, -99, 113, -61, 122, 119, -106, -65, -56, -75, 23, 29, -7, -16, 124, 63, -69, -101, -25, 5, -56, -58, -81, 28, -111, -118, 14, -52, -102, -58, 55, -16, -53, -57, 63, -16, 10, 92, -54, 43, 61, -37, 68, 33, -29, 108, -55, -58, -69, -111, 50, 7, -85, 43, -12, -117, 107, 110, 49, 12, 96, 96, -104, 11, 100, 90, 6, 35, 86, -87, -127, -57, -79, -116};
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
    msg.setTimeStamp(0.40437080640781187);
    msg.setSource(32418U);
    msg.setSourceEntity(249U);
    msg.setDestination(31375U);
    msg.setDestinationEntity(52U);
    msg.type = 22U;
    msg.req_id = 2571949433U;
    msg.ttl = 29713U;
    msg.code = 116U;
    msg.destination.assign("HUYSVAODVMXOHIDYMTYCXCJZGZUSPSQKOJFMXJYLQTQNCURTQFEFXMBYGHEUUOTCKWLMTQEPPZPHSHEFANXDSRARIAHAVNZXFD");
    msg.source.assign("WEJPFWTVSCFSPLMMQOJRENWGARSRIJQDIMOWRHXHEKOFSNGLBRDZADZTFTYEXCVKKWDMAPLNXVUVCAKSAMKPFLUXXXDGOPTVLXMTWHUSQSQFCEMUJLCICXOPEVJWNYGIBPIOBGNDZKQURBSCPIUBJNYLCJDRYZCUNGIKFQNAZBGZRW");
    msg.acknowledge = 41U;
    msg.status = 193U;
    const char tmp_msg_0[] = {103, -9, 50, 30, -81, -94, -58, 95, -32, -97, -126, -106, -113, -83, 9, 106, -19, 118, -82, -112, 85, -70, -96, -27, -13, 105, -124, 42, 25, 72, 126, -64, -21, -6, -83, -37, -81, 22, 91, 51, -52, 64, -82, 10, 97, -112, -75, -31, -117, 37, -4, 32, -109, 117, -125, -66, 97, 112, 48, -59, -81, 59, 50, 88, 64, 84, -4, -56, 112, -63, 85, 38, 93, 6, -120, -3, -114, 66, -23, 57, 43, -90, 88, 34, -22, 77, 57, -37, 17, 125, 26, 20, -96, -104, -43, 16, -98, -30, -15, -55, -9, -108, -97, 124, -53, 75, 53, 55, -15, -20, 49, 56, 115, 14, -8, -46, -106, 87, -40, -38, 57, 28, -88, 70, -15, -35, -64, 0, 66, -56, -123, -120, -41, 118, 1, 29, 29, -124, 102, -109, 59, -115, 68, 79, -87, -96, 60, -79, -51, -45, 82, 92, 31, -1, -117, 56, 60, 14, 96, 100, 24, -69, -76, -54, -102, 38, -6, -62, -44, 101, 23, 115, -8, -1, 101, -26, 80, -70, 121, 37, 109, -120, -126, -46, 113, -102, -125, 124, -1, -78, -47, -73, 102, 18, -5, -27, 59, 106, -101, -64, 57, 71, 89};
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
    msg.setTimeStamp(0.11348830297634849);
    msg.setSource(22328U);
    msg.setSourceEntity(195U);
    msg.setDestination(57506U);
    msg.setDestinationEntity(93U);
    msg.id = 87U;
    msg.range = 0.5152847146203081;

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
    msg.setTimeStamp(0.861937653689874);
    msg.setSource(40618U);
    msg.setSourceEntity(16U);
    msg.setDestination(48304U);
    msg.setDestinationEntity(80U);
    msg.id = 175U;
    msg.range = 0.04900601879796951;

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
    msg.setTimeStamp(0.03465557673698205);
    msg.setSource(60485U);
    msg.setSourceEntity(212U);
    msg.setDestination(59151U);
    msg.setDestinationEntity(106U);
    msg.id = 215U;
    msg.range = 0.39285619644587877;

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
    msg.setTimeStamp(0.29891557305679184);
    msg.setSource(5652U);
    msg.setSourceEntity(16U);
    msg.setDestination(19289U);
    msg.setDestinationEntity(133U);
    msg.beacon.assign("PUGJIZAJFSCKPAEFYMHPAQWDVZWTE");
    msg.lat = 0.6595417248984473;
    msg.lon = 0.47804523616049976;
    msg.depth = 0.08500524314332691;
    msg.query_channel = 210U;
    msg.reply_channel = 120U;
    msg.transponder_delay = 236U;

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
    msg.setTimeStamp(0.1867760359852345);
    msg.setSource(34790U);
    msg.setSourceEntity(226U);
    msg.setDestination(47615U);
    msg.setDestinationEntity(22U);
    msg.beacon.assign("VWHNCISMHCUQQOXBQPBIULR");
    msg.lat = 0.06525492276288913;
    msg.lon = 0.08228532674695621;
    msg.depth = 0.30574001595848677;
    msg.query_channel = 149U;
    msg.reply_channel = 71U;
    msg.transponder_delay = 91U;

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
    msg.setTimeStamp(0.29630466986389703);
    msg.setSource(39206U);
    msg.setSourceEntity(77U);
    msg.setDestination(34235U);
    msg.setDestinationEntity(61U);
    msg.beacon.assign("QZECBFWDONZYVITHOMTPUXCDLCBMSPOPXKDUKQGSLIGRJMCNZFGNWDVVDTSSTKYJVLDIVRXQBCKCOFPMMKQFOPWLUFMEIEWFBXHGTHMUVNVOZEWUAYLXAPNDVPSJGVNAWLYBHCIJRXZERBOAZNQJDCRHGIARLDJKGTNKYNCZJXOSGUWS");
    msg.lat = 0.5054795389076578;
    msg.lon = 0.7922550572499482;
    msg.depth = 0.9394180582010996;
    msg.query_channel = 217U;
    msg.reply_channel = 197U;
    msg.transponder_delay = 167U;

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
    msg.setTimeStamp(0.5403925357097693);
    msg.setSource(9489U);
    msg.setSourceEntity(92U);
    msg.setDestination(55799U);
    msg.setDestinationEntity(24U);
    msg.op = 101U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XRQNBHMDTKSEKLGIDPSYOMARGXCMHXWJJPLTJFZEKTZCRDJWLZJAKACKTRUXFEGNNXIRSLQIRFEEKNNUVFZRSFNJPINFBOAMLMTYHQWXOLNZIEKWFPXFYSHRHCOYBIQNGUUDVVYDFKMJVVTQBVARWAIABHBVHIKZOCBGTZMCVPQVUHCUBSTWBQSHVYWMDPOYTWUAPPJDBODQDGUJLGEGGNSD");
    tmp_msg_0.lat = 0.5013812849704637;
    tmp_msg_0.lon = 0.9529459458934091;
    tmp_msg_0.depth = 0.0268893384367217;
    tmp_msg_0.query_channel = 23U;
    tmp_msg_0.reply_channel = 239U;
    tmp_msg_0.transponder_delay = 167U;
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
    msg.setTimeStamp(0.8843894914472928);
    msg.setSource(15790U);
    msg.setSourceEntity(72U);
    msg.setDestination(13609U);
    msg.setDestinationEntity(195U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.9738330151694565);
    msg.setSource(19325U);
    msg.setSourceEntity(145U);
    msg.setDestination(12621U);
    msg.setDestinationEntity(62U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.8222399221089444);
    msg.setSource(17410U);
    msg.setSourceEntity(74U);
    msg.setDestination(11565U);
    msg.setDestinationEntity(131U);
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 3U;
    tmp_msg_0.angle = 0.5951106539204124;
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
    msg.setTimeStamp(0.38449808521435747);
    msg.setSource(44011U);
    msg.setSourceEntity(23U);
    msg.setDestination(22177U);
    msg.setDestinationEntity(225U);
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.19359137800592585;
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
    msg.setTimeStamp(0.1988730877743039);
    msg.setSource(12557U);
    msg.setSourceEntity(96U);
    msg.setDestination(37835U);
    msg.setDestinationEntity(103U);
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.26182917607469924;
    tmp_msg_0.base_lon = 0.5705755604096759;
    tmp_msg_0.base_time = 0.08119642604214239;
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
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.7699370827918854);
    msg.setSource(15659U);
    msg.setSourceEntity(35U);
    msg.setDestination(29481U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.0821953660739092;
    msg.lon = 0.869531474889951;
    msg.depth = 0.1330085616483766;
    msg.sentence.assign("HUJOHTMPSEVBYXDALQNKGCCPUILIHYYUUBGDEGCYNPFPXEFTBBAWSRDZRSZWMKMHDILNTDTLCMOJJZMURFTWEUWVYZNBSHLSEPRINDTKZKQPZEQIQZWFLJMOISCUXPYJODBZSLMNSAWKXALVVAYBXQEHBXNGYV");
    msg.txtime = 0.5589107778354538;
    msg.modem_type.assign("YMSOGHNMBUITXXXCOULVSKACZQBTDAPLBUVDGDQJNVJRUVRFQPHPJTLHNHLJJ");
    msg.sys_src.assign("OYPAPVTDOTCMRIELJZIOLQMWUTEHUGBYWGQJFEHWYNLVLOVOFSLPADAMKSWBBIGNNYOQTKPGINJCFEQHRACHFSRYQDDBZZPMLMENYCXCNECTSATGRVRQBKXRWMDCLOZUIVAGDVOEOUGWFZWIIKYBEAQUXUJXIDJSTJQNXLRVMZRMSJKNLQFHAVHAYPKJHXBGFCFDTHJQUCNOVFRBEGWXTEPXBIZKKHZVAZFCSPSXUDPRSWDXMK");
    msg.seq = 50702U;
    msg.sys_dst.assign("VZEOZOGQRUUMEUCAGXGYHJODBIOSGNUZBODWALMXMYNGCYFTSETYDQWJEYFFRDJXJPDDFHYBVINOPCZTUAMUKRLJRUBEHPKMZGOFJUXLTRDSQCZKKTHWZKBXERH");
    msg.flags = 250U;
    const char tmp_msg_0[] = {82, 36, 64, 74, -69, 121, -81, 16, -104, -14, 26, -28, -46, -75, 31, 31, 35, 57, 35, -111, -101, -73, -13, -59, -7, 61, -56, -74, -59, -108, 29, -58, 123, -72, 34, -71, 96, 49, 89, 116, 13, 4, 65, -112, 11, -42, 117, 42, 2, -55, -31, -10, -77, 40, 34, -99, 119, -63, 68};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.868576254038084);
    msg.setSource(8127U);
    msg.setSourceEntity(100U);
    msg.setDestination(39791U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.19648602368075163;
    msg.lon = 0.6409875844405258;
    msg.depth = 0.1372750224169349;
    msg.sentence.assign("ULFSQYHOPLODAEAQGYNLOBOSEAVDNFVLBAUSIWZQFLKOJEAFWNGAKSLOMENWPGIHTSLJRUAKBWSVGUGIPRXJTEMIDRHCDPBFCMVNGDDVMHJYXYJNIRINPXVZFUPXAMKSTNSPBHKUXMUECMBQITFWXCNCCBGRADXEJFOSTMLSCTZVYKV");
    msg.txtime = 0.958946868036476;
    msg.modem_type.assign("FBBJNYXDDNISSHTKHKXBNUEXBLKWIKMQZMQCKYDPFHQCVWYYUQRLDJEWJYOYZTKVSWSWULWHCSILUTONYMOJVIDOIXURPJKFRFAFEDLIASMZNZDCMDTXTPOFBRURARJVTIDWETCZHSGQZIOMQBZWJWGVEBZYAHNKSOPHRBSGRJCTCDPEJAFNYBUVEAGPQIXVNM");
    msg.sys_src.assign("PFORRUGPOJNOSBOUWUUSAWBHMPOQXYCHCLISZURQSZVYBHEYVGLNMFVEOSMZKZUJHSJIONYTDLKAZMPQGEATXFMZNKHUVPYNIHQIJAIAVUFMKSEPQYTDJDRATNUYFAXBGTXICWFOWCZMCKNPLBNLJHYQOEWJECYDMDVKBWODJZIQLLTAAMRCEVBSTZDGBPRICPTRBWHDJVXNKKEETLNXWFCWVQDQXPQARHGXHFGKFMGY");
    msg.seq = 3830U;
    msg.sys_dst.assign("BFRYZEYHVZUCPBUZPIWXTNAXNYRSUFQLLAMCJYVUQNNANXTHVZLFPEFEDGGCHCOWPFGVWIJTEPOEOKLDSDJFZARLJPXKRDBHFCVPJCXEIAJDSTUMYODJIOTEBQYSNHNDFRUOQKISPKOMJFZMEBMJZRRVIORPGICZCASEBNGKHVAHDSDKRWUAHWWYTBGKQKQJETXQUWWMYXGYYKVHNFVQCVQLGBIMPXQWLOXRWCOTIAMLUDZUZGSK");
    msg.flags = 136U;
    const char tmp_msg_0[] = {87, -12, -106, 87, 43, -66, 29, 64, 82, -94, 106, 41, -9, -76, 98, -88, -72, -67, 97, 91, 28, -108, -101, -19, -62, 77, 37, 11, 37, 110, 109, 84, -120, 69, -48, -106, 102, -56, 24, 73, -67, -68, 84, -44, -90, 8, 124, 118, 85, -70, 107, -37, 90, 98, -55, 111, -57, 26, -92, -68, -22, -108, 121, -98, -31, -34, -56, 11, 46, 109, -101, -101, 57, -17, 32, -47, -58, -94, 40, -112, 91, -9, -112, -76, -82, -106, 105, 54, -82, 120, -22, -120, 49, 36, 108, -24, -36, -75, -127, -72, -19, -107, 72, 96, -106, -100, 29, 30, 22, 92, -92, 125, -125, -30, 121, -26, -36, 81, -28, 77, -60, -13, 116, 33, 95, -69, 46, -82, -65, 75, -118, 72, -63, -107, 115, -105, -125, -120, 112, -110, 10, -8, -121, 124, -35, -40, -22, -87, -112, 10, -62, 32, 24, -105, -58, -5, 81, -14, 47, -123, -43, 93, 82, 52, 40, -120, -115, -87, 120, -45, -105, 60, 14, 16, -77, 2};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.6405191435903521);
    msg.setSource(54702U);
    msg.setSourceEntity(138U);
    msg.setDestination(29286U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.2730594345749663;
    msg.lon = 0.5239673525754055;
    msg.depth = 0.008185695791455339;
    msg.sentence.assign("XEOEHCCIGWPFSUAFTMYJOSJKOLCHDGVQWFLAJJVENTBAXOPYXPKVTNOBHQATEDBWASHBMQUIBGWTVNJUIPOJIYUYCUMLCPBNDQPCDREBZZMBFMKDDNQZKGVTHXERHGRECRRNDYOZQVDXPRSLTCRWFLTTFIWPCNBSJSGZAIZFNPGMMUEYXYFSFKGVAKJHGXAREIWZOLSFTQVKEONMXZBYUWCYRQVSXUQNGLKVHJILMMLXHKDQLJYPUDUAS");
    msg.txtime = 0.5850275299985558;
    msg.modem_type.assign("XLGYFULFDSDUWCKTPSLABVEEWWDAQRSBDPVAZXOONOEENYHCUFDWWHNWTZZWTKSTHZIXJELRMVRLH");
    msg.sys_src.assign("OXJJKKZMXWDQOUEGIZZDMJFNFIEMWMLUSVVSNPYWCTIGSOZOGKHPAVGYQIPHIXOHFRXCGMCNLFWUTQGS");
    msg.seq = 62047U;
    msg.sys_dst.assign("NBSYAQNGRKFKWICFMCSHUVLQORCQMIBNSNDPYGID");
    msg.flags = 158U;
    const char tmp_msg_0[] = {116, -7, 13, -26, -21, 78, 15, 27, 115, -50, 35, -28, -15, -24, -19, -53, 121, -24, -74, -82, -77, -59, 10, 104, 115, 109, 102, -54, 19, -85, 17, -80, -29, -88, -7, -11, 44, 79, 78, 12, 30, -48, -78, -5, 9, -27, -22, 23, 48, 97, 60, 114, -88, 93, -67, 24, 48, 103, -49, 100, 81, 58, 52, -119, -21, -127, 40, 102, 99, -86, -68, -80, 45, -104, 43, -70, -17, 75, 112, 31, 44, 60, 112, 44, 94, 3, -76, 51, 28, 19, -112, -78, 55, 12, 73, -18, -66, 57, -14, -22, 73, 13, 71, -26, -79, -102, -82, -68, 123, -121, 52, 42, 83, -108, 61, -123, 18, -3, -77, 37, -30, -94, -31, 32, 46, -83, 117, -8, -24, -27, -90, -71, 69, 55, -39, 39, 79, -54, 102, -116, -113, 45, -9, -80, 57, 51, 1, -52, -126, 88, 106, 2, -120, 108, -126, -115, -122, -87, 72, 53, -120, 14, 81, -118, 115, 67, 74, -115, 99, 1, 34, -21, -18, -65, -36, 112, 14, 26, 53, -2, 21, 17, -74, -114, 117, 82, -120, 19, 90, 18, -57, -112, 94, -13, 9, 69, 96, -127, 54, 40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.4057107028228004);
    msg.setSource(5190U);
    msg.setSourceEntity(251U);
    msg.setDestination(13719U);
    msg.setDestinationEntity(3U);
    msg.op = 65U;
    msg.system.assign("UJTDQCHPVUPAJAMEOAMIANGWUEZYBYWBOZQFZVVYMGIHIKCYWTRKQIUNYMHTOCUDNHTDHWHEVSZMFSCYUQSLVKQTSLJXZJXDFPSWZOROCETXPQGHZMEWIJHECLISURTDNUXYLEFXAPPODPNITADKRGFG");
    msg.range = 0.6435870291888239;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UNYIFBIMHPUSFXSAYICYKAGZFVHUMAKXETWMJNZMURNFTVFJSTBOERJPUZRXNKSCDWLWIMWCYOOBPLRUXNRNPFQVSQZMDPKCJODCCLRKVLTGXYETAVWQPERKYXOQLQZTPIUJLWBJXGZEMVPTTSBAFOHZYHBCAOAVUWSLGRHBUCKBKLTMQREHXMQZGGIGXDXDSHSWBAGCJIYDGPOQYLNNDDFLZHPI");
    tmp_msg_0.dist = 0.8538256684294212;
    tmp_msg_0.err = 0.7426366474875629;
    tmp_msg_0.ctrl_imp = 0.9286825481860765;
    tmp_msg_0.rel_dir_x = 0.8447687978802024;
    tmp_msg_0.rel_dir_y = 0.8105068629059788;
    tmp_msg_0.rel_dir_z = 0.7926031599922346;
    tmp_msg_0.err_x = 0.38488810705774323;
    tmp_msg_0.err_y = 0.5746242555719895;
    tmp_msg_0.err_z = 0.2604244669423864;
    tmp_msg_0.rf_err_x = 0.28230434946750305;
    tmp_msg_0.rf_err_y = 0.047636525638354854;
    tmp_msg_0.rf_err_z = 0.15465951093964947;
    tmp_msg_0.rf_err_vx = 0.5202441679133639;
    tmp_msg_0.rf_err_vy = 0.8383894836712067;
    tmp_msg_0.rf_err_vz = 0.7182497735363199;
    tmp_msg_0.ss_x = 0.2009677782225342;
    tmp_msg_0.ss_y = 0.013517931628439506;
    tmp_msg_0.ss_z = 0.1822087530778278;
    tmp_msg_0.virt_err_x = 0.2808895451695319;
    tmp_msg_0.virt_err_y = 0.6370402718059233;
    tmp_msg_0.virt_err_z = 0.26090191085806236;
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
    msg.setTimeStamp(0.9604537428852917);
    msg.setSource(29632U);
    msg.setSourceEntity(69U);
    msg.setDestination(8577U);
    msg.setDestinationEntity(140U);
    msg.op = 88U;
    msg.system.assign("IDIERBFVBTFQVVYZAMASYWHNCRGNWVWLJCHYPFKQVEURYAOEDOKZEGUNIXLRPXXWQGMVGFWWCHNYNIBDBEZIBKUQXFTLPUIJCOQQPTCOADJRTVMJDBOPFHKJLDSDZFATMOTSXWNCKCZAUGPJGMVTCALASEKHHTYBDIRSXAXLLMXNIO");
    msg.range = 0.832673957231299;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 31293U;
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
    msg.setTimeStamp(0.0856123077473031);
    msg.setSource(8019U);
    msg.setSourceEntity(143U);
    msg.setDestination(55908U);
    msg.setDestinationEntity(103U);
    msg.op = 115U;
    msg.system.assign("GEEJSOZVDUKYMSHGGGSEVNDPUPCLXNRNXLHAAATXIJHNEDBIVVGTPQATXMBUMOAJSPZUKAAJYGXTAZDSLBBMWLNQFBFSLXHFZJLRNDYUCIPUFRUCEONVKDNXRJFHPWIZIJJKUBCWIHRECEKQLKWEFUSORSGMMDDMYSHLYITMOODXEFCYFQMRKHYVQGTXZSBBKVOTGTAIYVVBOPZR");
    msg.range = 0.40246417589058237;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("XBACPGLQOPZGNZRZYMOIDAWJJRITBWBHAOVSFSLZFQHCULSTSRXDHLGUBLUQXTUQRPWAFMBRMLNGNZOINEKLAEZFEKAISKYTHTFMSVMNBMFCKRS");
    tmp_msg_0.state = 67U;
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
    msg.setTimeStamp(0.27027803110260185);
    msg.setSource(10762U);
    msg.setSourceEntity(214U);
    msg.setDestination(56974U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.4058840236520782);
    msg.setSource(21822U);
    msg.setSourceEntity(103U);
    msg.setDestination(577U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.8149984567186486);
    msg.setSource(4704U);
    msg.setSourceEntity(143U);
    msg.setDestination(40542U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.984146112231524);
    msg.setSource(49833U);
    msg.setSourceEntity(183U);
    msg.setDestination(64530U);
    msg.setDestinationEntity(100U);
    msg.list.assign("HFBJESGOXPKNGMDVWRWRLEVSWRCHVDCXPKRLXEYJUEIEZPYXZOHWTQSBOFKNFGVBSBUHTRAAUDCUUMAMSLOMWLCHZGQKZJEYDTQMSFLBFIQAHRUSDFNXXAWAHYSXPRJZZQITADRNMYKITS");

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
    msg.setTimeStamp(0.19548498691025895);
    msg.setSource(46088U);
    msg.setSourceEntity(179U);
    msg.setDestination(23875U);
    msg.setDestinationEntity(205U);
    msg.list.assign("LVMKYHSOEODUKFFHXXCHIAENGXTPWKFFPFQEQTIGMJYDNNPKDAQTFVNNMZKJOXVMKUQGDZSEEUSBOTJHVSOCIIQBBQTUIFFQEGXJRPWQDXICJZWIRSUSIHRKUJCDRTSHAAALVUATGJVYBOVTFAMWNDCGBYYXXWLPKRMLRCJINTYJVYDBEZRWFGBSSDMYAEBYMVCAILPMGOXGNLK");

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
    msg.setTimeStamp(0.18260736333828476);
    msg.setSource(2503U);
    msg.setSourceEntity(113U);
    msg.setDestination(21690U);
    msg.setDestinationEntity(133U);
    msg.list.assign("HXWSLOERNEAEQIAJLXZYZEVYSKBEWOOSMFIDAORLCBRVLJJMBINGVLPXIIUDZCNQTGRQHIBRXLKFUWQKNMWFTNGBMCKYSCRGQHFFRPBTOTEDDOPDQZFBZKDPKTQQGUWELCLULWWXYAXTGVDGHLUJUHGTQPUWWSNVECBVFZACONXJMIJAQHXZTVPRKSTMNAOZDNUMGCZIHXOFACVDJCPKPPET");

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
    msg.setTimeStamp(0.19996845956159726);
    msg.setSource(47018U);
    msg.setSourceEntity(59U);
    msg.setDestination(56701U);
    msg.setDestinationEntity(92U);
    msg.peer.assign("WRNBEXLCPQHAHKKIDGIYWCRZZMBSPFSEBZIYTJIYFTFIFXIOFPP");
    msg.rssi = 0.2597614454027998;
    msg.integrity = 16698U;

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
    msg.setTimeStamp(0.3372322627527954);
    msg.setSource(64176U);
    msg.setSourceEntity(212U);
    msg.setDestination(1634U);
    msg.setDestinationEntity(89U);
    msg.peer.assign("VAIRPQUHIUOEWWOVMVSIOJXKGGBMUJJRIBNDJGHMXIEOQCPCRQDTTQVXPSZRUXFDGNCUYJWXGLPCBADCQFOPYQFQFTHZZSDSFALJOYABMQUKYOUWX");
    msg.rssi = 0.005696357966083476;
    msg.integrity = 40723U;

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
    msg.setTimeStamp(0.9556727605874413);
    msg.setSource(40888U);
    msg.setSourceEntity(26U);
    msg.setDestination(7860U);
    msg.setDestinationEntity(232U);
    msg.peer.assign("ROQDPUUKEFQWMDCIMGNQGDPRZKWCQGXTLZRORKNSOTYYBHYPQZDJKWDUPYXXSAMKQCTQUZWSMMYIROFUVEBBUFEAYFNNNHLLFJUFPFGBXFAAHTEGJBSTXDSHIJORCQZOYMOVMKSXNLPPKKYRYHVTMUUCASLTRDVBQJSDMNOVMBWLJBRLNWICGAIQTWZCEXFDOXWZHEBFCSOIGWHGLELPIHIKHAHINRVVEDJNVUX");
    msg.rssi = 0.11036694217360687;
    msg.integrity = 42285U;

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
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.659651596454908);
    msg.setSource(2730U);
    msg.setSourceEntity(106U);
    msg.setDestination(49696U);
    msg.setDestinationEntity(185U);
    msg.req_id = 15943U;
    msg.destination.assign("IPCONRVEYZBWXNJNKSXZFVCBYNNJJHWNXDRTZNAEQEFWGSAXOVMELPIAOYWTPRQDGVYQJGKOTKIHRJPSAUETEHIWRVMLOTQQAQDYJCODLPCZUOVEXRNSTLF");
    msg.timeout = 0.7772310432474235;
    msg.range = 0.8333923872539747;
    msg.type = 124U;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6291766554924315;
    tmp_tmp_msg_0_0.lon = 0.8536289995096058;
    tmp_tmp_msg_0_0.height = 0.8846712426193164;
    tmp_tmp_msg_0_0.x = 0.9147514789764174;
    tmp_tmp_msg_0_0.y = 0.3802278155815465;
    tmp_tmp_msg_0_0.z = 0.35826971613236647;
    tmp_tmp_msg_0_0.phi = 0.8368290979346952;
    tmp_tmp_msg_0_0.theta = 0.510494684505339;
    tmp_tmp_msg_0_0.psi = 0.18891072987669544;
    tmp_tmp_msg_0_0.u = 0.8391933437387143;
    tmp_tmp_msg_0_0.v = 0.8154869935335443;
    tmp_tmp_msg_0_0.w = 0.47214183692993716;
    tmp_tmp_msg_0_0.vx = 0.8109887026252067;
    tmp_tmp_msg_0_0.vy = 0.1264254215804803;
    tmp_tmp_msg_0_0.vz = 0.3478420539997221;
    tmp_tmp_msg_0_0.p = 0.4882120304808094;
    tmp_tmp_msg_0_0.q = 0.5651847334910705;
    tmp_tmp_msg_0_0.r = 0.9312232369770527;
    tmp_tmp_msg_0_0.depth = 0.3362314363961797;
    tmp_tmp_msg_0_0.alt = 0.23434423476556543;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 19U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.00715974503299166);
    msg.setSource(38178U);
    msg.setSourceEntity(194U);
    msg.setDestination(65063U);
    msg.setDestinationEntity(225U);
    msg.req_id = 54518U;
    msg.destination.assign("DWSPRYHZUZGUINRMNFBYQMBVZKEHZITIOPMLWYKNKKQVACUEJJNPTSZXYXMDZGVUBXRCNRVYJOAODADECTMFLITQSRWAL");
    msg.timeout = 0.8388044245545943;
    msg.range = 0.17731691761177582;
    msg.type = 107U;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("TDXHHBWIEEGHNJGINWSNEIHBVBQJHXKDAADFNRAJGVYFACRKMFARAFRXWMXTLUQCDQMOECYZWGAUCHKPPXYUVJPUDIRWSIBKXVWQRPGPYTLWCOLOLUVPIKQZGLZOVTISEKNJSFRLUYSOUJFDSCTVURKBQJLKMTPZMIIUZOCHZARGBBCQQZYGKEDVPMMHDOLEIETHJVMQZYFAGXSFCTRTYQYDBNJSSOWNEAVPYXCODNFZZWNNWHMB");
    tmp_msg_0.plan_size = 9029U;
    tmp_msg_0.change_time = 0.5025236223073137;
    tmp_msg_0.change_sid = 26503U;
    tmp_msg_0.change_sname.assign("FOUGOYOVGOHLDWPKEHLBPFYJUATSBDBHJLRTCODOECSEZSIXZQZXL");
    const char tmp_tmp_msg_0_0[] = {-84, 96, -121, 52, 64, -110, 6, 23, -87, 28, -20, -68, 16, -31, -127, 37, 59, 116, 124, 18, 42, -57, 77, -70, -78, 5, -118, -82, -5, 108, -103, 3, -39, 32, 56, -42, -32, 118, 16, -42, 69, 17, -21, 9, 96, 9, 92, 68, -9, -2, -104, 110, -70, -29, 56, -119, 76, -83, -105, -25, 91, -78, -67, 5, -16, 82, 74, -14, -106, 57, -65, -94, -54, -103, 125, 97, -47, -28, -105, 71, 100, -80, -61, -63, 14, 63, -104, 93, -115, 34, 29, 119, 121, -95, 120, 114, -20, 121, 43, 114, 100, 114, 91, 48, 22, 112, 111, -47, 118, 22, 26, 27, 5, 119, -50, 92, -35, 97, -124, 104, -16, 110, -77, -1, -114, -77, -23, -35, 116, -57, -90, 60, -69, 122, 82, -102, 85, 78, 121, -112, -50, 70, -58, 77, 98, -97, -42, 68, 72, 17, 102, 57, 52, 31, -41, -59, -78, 91, 60, 74, -117, -39, 14, 109, 36, 119, -57, 52, -23, -55, -88, 121, 66, 19, -33, -70, -93, 40, -121, -99, 63, -64, -46, -24, -31, 16, -92, 80, -36, 41, -80, -13, 61, 87, -95, -89, 35, -44, 64, -77, 27, -2, 99, -70, 49, -127, -103, 62, -75, 85, 74, 75, -117, -21, -66, -126, 75, -102, -48, 5, -118, -103, 104, 46, -94};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.5198078619423521);
    msg.setSource(48423U);
    msg.setSourceEntity(89U);
    msg.setDestination(50961U);
    msg.setDestinationEntity(41U);
    msg.req_id = 15256U;
    msg.destination.assign("EXBHUOXEHGMXKVKKYDFYGFBMPIRTRAAOXLWDAJXGMPOWCLGHAKWDVEQSCRNMLBLRRVZITNEGBJFOVZGFSHHVGPQIYANYZSLTWWJBJWSNSFUDMFYWJKFVUPYATUASPJSDPEOSDTAJQICLZNTQYMHSHNJUBCZIRDTQGIVHOJOVYLZEULXEHFMCNHPWCIXRDTXWQZEVQKCQZBYTRMNVEZEADQAPTIBXSRBKUPINBXOMRFCWU");
    msg.timeout = 0.5702138414867586;
    msg.range = 0.9775204906127631;
    msg.type = 94U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 130U;
    tmp_msg_0.op = 247U;
    tmp_msg_0.plan_id.assign("OOEYZJIJXSPTGKANKQTDKVGQUTXUABKQSDEMPQYXBSSZLHTFMNLCWJPWPRSMWBYPCAYDYVWZWMWHFCEEHNXDAOURVCEIIHVVMZAPIDNUETOUFLITSTCBKMMLTJLKMFZRHCUQQKRHFOXIOWZHBNGZDBVTLINZJBKZIYURLCN");
    tmp_msg_0.params.assign("DMXSUEEVJKNCERHWXAQMFJGNVQMVWISNWZQDKUPOMFBXHFBRPKICTJYROWWKDVRNKAAMKSLGZACIUJKGDMMYESEBLQCMQDEUYNUAVPZINHGXWZQALRKNISFZOILDVOSPXLJIIYEWXOEKXNZTULBWHBTGCXHJTRLBMYGY");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.003767889031221716);
    msg.setSource(3820U);
    msg.setSourceEntity(94U);
    msg.setDestination(12888U);
    msg.setDestinationEntity(152U);
    msg.req_id = 4590U;
    msg.type = 197U;
    msg.status = 8U;
    msg.info.assign("JJTAOHXRXCTYHKGEDGOZMSVNXBSNHTETZSDUHYALRWEKACRGZLVXLXLMHUAFWGASJVFJLFWKVOWTAMTZVVOQYTDZIEWBOYIWEVCKSVXCLZUJLPLFADPX");
    msg.range = 0.8977891934606458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.22369686900550978);
    msg.setSource(10127U);
    msg.setSourceEntity(90U);
    msg.setDestination(63879U);
    msg.setDestinationEntity(201U);
    msg.req_id = 46863U;
    msg.type = 100U;
    msg.status = 148U;
    msg.info.assign("XIZPVHIRWKFJIIDTQBPNRGHXSKOHNEBBVWZMKUYLUAZUPBFLPZTZHVRAXRVTOYGUQXTXDWEAOHVQTEEOLJAJSNWNLO");
    msg.range = 0.6383113697106046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.7188348024858906);
    msg.setSource(9912U);
    msg.setSourceEntity(76U);
    msg.setDestination(52992U);
    msg.setDestinationEntity(162U);
    msg.req_id = 40742U;
    msg.type = 172U;
    msg.status = 216U;
    msg.info.assign("BJZTAWBISDNJSXQIFZBGCPZYEOGUALXZDLHBGCMUCMDWXNOZPPJORCHQLVKYMQRCFHBIFUEPGMDNSRNDWUKHIHFUTEHLXWFOFKKDMOPMOXNXZHQLRYKXHVZDMOYPXUNPEVNYBFMEXSTKGLVASCL");
    msg.range = 0.48316236474214314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.9413583058655409);
    msg.setSource(49258U);
    msg.setSourceEntity(33U);
    msg.setDestination(51444U);
    msg.setDestinationEntity(25U);
    msg.system.assign("UOXXQFZLASYQUANEVIXIZUUGZGRSBGZXXDCNXTHKECJJDEHAKHYVSPRDLEINVIHUOTLQCJRNRFPKYNJVOZOXCJRBRZNTILUTNYJBHPTWQLEYPGCMMOBYGOYKVCFJITHHTMYOGMFAXIVEZADDWWNYPJBCFTBRQSCAFGUSRZWEA");
    msg.op = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.40994960979564343);
    msg.setSource(9365U);
    msg.setSourceEntity(56U);
    msg.setDestination(62728U);
    msg.setDestinationEntity(60U);
    msg.system.assign("OJSBAQMIQYJUIXEGQ");
    msg.op = 222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.13873779252076168);
    msg.setSource(36419U);
    msg.setSourceEntity(74U);
    msg.setDestination(44252U);
    msg.setDestinationEntity(136U);
    msg.system.assign("UJEZZRQPLNYYBTQPLQDJDTYPXMMCHWOJPNIBDSVBPRQZOICXEVEZBMVDFOKUVPFAFTIWRCBMWFMDCGEBLYMYBPOZCHEXCNAGRBUIWBTNZYSIXCXMNLAKCVARFQNXNSOXTPKEFKTHQQEHUUSMLSTDYYMHOKXUNKPIFZSEQBVOJARSDANMSAEHNLDVCGOJWGLZWUKJHIETVDWTF");
    msg.op = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6393993575941603);
    msg.setSource(15254U);
    msg.setSourceEntity(175U);
    msg.setDestination(40324U);
    msg.setDestinationEntity(55U);
    msg.value = 13636;

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
    msg.setTimeStamp(0.7788284298747624);
    msg.setSource(48504U);
    msg.setSourceEntity(7U);
    msg.setDestination(44304U);
    msg.setDestinationEntity(112U);
    msg.value = 14899;

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
    msg.setTimeStamp(0.056311366617431524);
    msg.setSource(23527U);
    msg.setSourceEntity(190U);
    msg.setDestination(61983U);
    msg.setDestinationEntity(212U);
    msg.value = 17127;

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
    msg.setTimeStamp(0.2572092522469196);
    msg.setSource(1325U);
    msg.setSourceEntity(101U);
    msg.setDestination(3595U);
    msg.setDestinationEntity(35U);
    msg.value = 0.5071845411145551;

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
    msg.setTimeStamp(0.07365037647024952);
    msg.setSource(36354U);
    msg.setSourceEntity(148U);
    msg.setDestination(38074U);
    msg.setDestinationEntity(80U);
    msg.value = 0.5130477859391571;

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
    msg.setTimeStamp(0.7412581675967943);
    msg.setSource(2238U);
    msg.setSourceEntity(82U);
    msg.setDestination(15221U);
    msg.setDestinationEntity(109U);
    msg.value = 0.02113911605056551;

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
    msg.setTimeStamp(0.044622092950720615);
    msg.setSource(31679U);
    msg.setSourceEntity(210U);
    msg.setDestination(25737U);
    msg.setDestinationEntity(165U);
    msg.value = 0.11329169408631701;

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
    msg.setTimeStamp(0.6873288899746873);
    msg.setSource(54836U);
    msg.setSourceEntity(78U);
    msg.setDestination(7873U);
    msg.setDestinationEntity(199U);
    msg.value = 0.5160106024228639;

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
    msg.setTimeStamp(0.994100082915345);
    msg.setSource(48549U);
    msg.setSourceEntity(110U);
    msg.setDestination(23952U);
    msg.setDestinationEntity(0U);
    msg.value = 0.9023167691453273;

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
    msg.setTimeStamp(0.9617543346768779);
    msg.setSource(31860U);
    msg.setSourceEntity(138U);
    msg.setDestination(45592U);
    msg.setDestinationEntity(162U);
    msg.validity = 3798U;
    msg.type = 100U;
    msg.utc_year = 46280U;
    msg.utc_month = 144U;
    msg.utc_day = 124U;
    msg.utc_time = 0.7911569872108458;
    msg.lat = 0.6178018829913497;
    msg.lon = 0.10737008730761599;
    msg.height = 0.3842570143207392;
    msg.satellites = 159U;
    msg.cog = 0.5662806389713548;
    msg.sog = 0.20072558637774007;
    msg.hdop = 0.4288250705351142;
    msg.vdop = 0.8380579603622984;
    msg.hacc = 0.5177672660178618;
    msg.vacc = 0.23815931082020747;

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
    msg.setTimeStamp(0.1334804947444671);
    msg.setSource(31424U);
    msg.setSourceEntity(131U);
    msg.setDestination(56702U);
    msg.setDestinationEntity(59U);
    msg.validity = 43468U;
    msg.type = 251U;
    msg.utc_year = 14502U;
    msg.utc_month = 21U;
    msg.utc_day = 54U;
    msg.utc_time = 0.709802261014761;
    msg.lat = 0.007651491930525056;
    msg.lon = 0.7996356739419865;
    msg.height = 0.45089503585724;
    msg.satellites = 88U;
    msg.cog = 0.6442171856364403;
    msg.sog = 0.5589016650609372;
    msg.hdop = 0.8328457369929657;
    msg.vdop = 0.3780542239866067;
    msg.hacc = 0.10794856842652523;
    msg.vacc = 0.2718439031533746;

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
    msg.setTimeStamp(0.1724712178434401);
    msg.setSource(63520U);
    msg.setSourceEntity(153U);
    msg.setDestination(60231U);
    msg.setDestinationEntity(60U);
    msg.validity = 9196U;
    msg.type = 180U;
    msg.utc_year = 63467U;
    msg.utc_month = 142U;
    msg.utc_day = 82U;
    msg.utc_time = 0.022396094320178195;
    msg.lat = 0.2909249189411697;
    msg.lon = 0.594161748316161;
    msg.height = 0.48344747753509365;
    msg.satellites = 147U;
    msg.cog = 0.9435416918213179;
    msg.sog = 0.9248465334326217;
    msg.hdop = 0.044126156688073626;
    msg.vdop = 0.3144491795442508;
    msg.hacc = 0.1345783618202292;
    msg.vacc = 0.9640056924970226;

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
    msg.setTimeStamp(0.3767767688986319);
    msg.setSource(36022U);
    msg.setSourceEntity(116U);
    msg.setDestination(14028U);
    msg.setDestinationEntity(211U);
    msg.time = 0.5573355354155477;
    msg.phi = 0.9049982937460782;
    msg.theta = 0.08106328929139017;
    msg.psi = 0.5057832810680144;
    msg.psi_magnetic = 0.12770273105153673;

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
    msg.setTimeStamp(0.8097411936499258);
    msg.setSource(61316U);
    msg.setSourceEntity(125U);
    msg.setDestination(43737U);
    msg.setDestinationEntity(77U);
    msg.time = 0.5822755105790959;
    msg.phi = 0.027368904432904295;
    msg.theta = 0.23641288115921943;
    msg.psi = 0.4002438096340927;
    msg.psi_magnetic = 0.06487403492719657;

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
    msg.setTimeStamp(0.11133579579259645);
    msg.setSource(44809U);
    msg.setSourceEntity(219U);
    msg.setDestination(31214U);
    msg.setDestinationEntity(219U);
    msg.time = 0.22455251576380786;
    msg.phi = 0.012077082491265934;
    msg.theta = 0.8744485476887056;
    msg.psi = 0.45753693918100324;
    msg.psi_magnetic = 0.13252124090547546;

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
    msg.setTimeStamp(0.9105257666860843);
    msg.setSource(57645U);
    msg.setSourceEntity(196U);
    msg.setDestination(46761U);
    msg.setDestinationEntity(158U);
    msg.time = 0.5378109813808849;
    msg.x = 0.8045304469433853;
    msg.y = 0.18981138192756264;
    msg.z = 0.3332247405096651;
    msg.timestep = 0.8048378261810295;

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
    msg.setTimeStamp(0.0761812148102633);
    msg.setSource(18391U);
    msg.setSourceEntity(125U);
    msg.setDestination(55376U);
    msg.setDestinationEntity(107U);
    msg.time = 0.9409535809505287;
    msg.x = 0.022921594632377307;
    msg.y = 0.4651806307110432;
    msg.z = 0.08537263561349873;
    msg.timestep = 0.9235676906226882;

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
    msg.setTimeStamp(0.6515927478797494);
    msg.setSource(45711U);
    msg.setSourceEntity(130U);
    msg.setDestination(10907U);
    msg.setDestinationEntity(22U);
    msg.time = 0.5729054168559711;
    msg.x = 0.38738768025411185;
    msg.y = 0.37818847272872047;
    msg.z = 0.2581813967382013;
    msg.timestep = 0.7717783950888679;

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
    msg.setTimeStamp(0.03269901628634919);
    msg.setSource(24939U);
    msg.setSourceEntity(217U);
    msg.setDestination(8887U);
    msg.setDestinationEntity(142U);
    msg.time = 0.8537743265977471;
    msg.x = 0.3022013147023994;
    msg.y = 0.3258913938620933;
    msg.z = 0.31325265480048536;

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
    msg.setTimeStamp(0.3148237567482244);
    msg.setSource(18871U);
    msg.setSourceEntity(155U);
    msg.setDestination(9507U);
    msg.setDestinationEntity(133U);
    msg.time = 0.7201402209708301;
    msg.x = 0.8676655016889622;
    msg.y = 0.30854560524142804;
    msg.z = 0.4300349786280505;

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
    msg.setTimeStamp(0.08438562003247407);
    msg.setSource(11979U);
    msg.setSourceEntity(46U);
    msg.setDestination(44859U);
    msg.setDestinationEntity(189U);
    msg.time = 0.22597098068499555;
    msg.x = 0.7676408851117249;
    msg.y = 0.6384595647410206;
    msg.z = 0.9593410793159688;

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
    msg.setTimeStamp(0.7697668553612701);
    msg.setSource(56253U);
    msg.setSourceEntity(211U);
    msg.setDestination(37629U);
    msg.setDestinationEntity(42U);
    msg.time = 0.39436464605579913;
    msg.x = 0.025109172320872175;
    msg.y = 0.48818768861179485;
    msg.z = 0.6564314197617733;

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
    msg.setTimeStamp(0.09439220538695237);
    msg.setSource(62997U);
    msg.setSourceEntity(60U);
    msg.setDestination(25371U);
    msg.setDestinationEntity(128U);
    msg.time = 0.8391028601670347;
    msg.x = 0.2836448936574192;
    msg.y = 0.16468466607093835;
    msg.z = 0.7219950559840569;

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
    msg.setTimeStamp(0.7887144121991227);
    msg.setSource(39194U);
    msg.setSourceEntity(14U);
    msg.setDestination(5653U);
    msg.setDestinationEntity(138U);
    msg.time = 0.8971998850783193;
    msg.x = 0.2514666358855492;
    msg.y = 0.303604416420055;
    msg.z = 0.9005710766221168;

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
    msg.setTimeStamp(0.6528622085782793);
    msg.setSource(51274U);
    msg.setSourceEntity(0U);
    msg.setDestination(35430U);
    msg.setDestinationEntity(9U);
    msg.time = 0.817979631994892;
    msg.x = 0.13670265125955106;
    msg.y = 0.4006585206221046;
    msg.z = 0.09083363685679646;

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
    msg.setTimeStamp(0.8406889002564992);
    msg.setSource(41820U);
    msg.setSourceEntity(240U);
    msg.setDestination(59577U);
    msg.setDestinationEntity(158U);
    msg.time = 0.4819494117338158;
    msg.x = 0.5742539165890588;
    msg.y = 0.5552909359404273;
    msg.z = 0.1662281881597102;

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
    msg.setTimeStamp(0.33126448003289355);
    msg.setSource(1049U);
    msg.setSourceEntity(25U);
    msg.setDestination(13637U);
    msg.setDestinationEntity(226U);
    msg.time = 0.07653937562856372;
    msg.x = 0.15965607494986678;
    msg.y = 0.295595943211291;
    msg.z = 0.45046763378357;

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
    msg.setTimeStamp(0.4285266988185332);
    msg.setSource(1798U);
    msg.setSourceEntity(249U);
    msg.setDestination(19106U);
    msg.setDestinationEntity(15U);
    msg.validity = 254U;
    msg.x = 0.8281589848714502;
    msg.y = 0.21073030902260403;
    msg.z = 0.9538966132211103;

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
    msg.setTimeStamp(0.03728121880060742);
    msg.setSource(51009U);
    msg.setSourceEntity(9U);
    msg.setDestination(43944U);
    msg.setDestinationEntity(249U);
    msg.validity = 72U;
    msg.x = 0.047376699984122195;
    msg.y = 0.20592066346251536;
    msg.z = 0.843733677465664;

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
    msg.setTimeStamp(0.03797485593624972);
    msg.setSource(57139U);
    msg.setSourceEntity(227U);
    msg.setDestination(401U);
    msg.setDestinationEntity(201U);
    msg.validity = 23U;
    msg.x = 0.7710334809596406;
    msg.y = 0.4591820975062034;
    msg.z = 0.047652785956518895;

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
    msg.setTimeStamp(0.6095083894890055);
    msg.setSource(47305U);
    msg.setSourceEntity(228U);
    msg.setDestination(58401U);
    msg.setDestinationEntity(234U);
    msg.validity = 71U;
    msg.x = 0.1462674954089518;
    msg.y = 0.522782616707649;
    msg.z = 0.13927583968721458;

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
    msg.setTimeStamp(0.33823186921866166);
    msg.setSource(34313U);
    msg.setSourceEntity(130U);
    msg.setDestination(11596U);
    msg.setDestinationEntity(16U);
    msg.validity = 72U;
    msg.x = 0.9431455590989526;
    msg.y = 0.1003503423194324;
    msg.z = 0.05835901543021038;

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
    msg.setTimeStamp(0.29954560439885325);
    msg.setSource(42056U);
    msg.setSourceEntity(174U);
    msg.setDestination(8699U);
    msg.setDestinationEntity(123U);
    msg.validity = 72U;
    msg.x = 0.5651142164684694;
    msg.y = 0.27444320336320926;
    msg.z = 0.42513302599084435;

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
    msg.setTimeStamp(0.8303294441330105);
    msg.setSource(35615U);
    msg.setSourceEntity(231U);
    msg.setDestination(932U);
    msg.setDestinationEntity(174U);
    msg.time = 0.2806936591957211;
    msg.x = 0.423761635069428;
    msg.y = 0.6854861512545105;
    msg.z = 0.07154744464523144;

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
    msg.setTimeStamp(0.10251865050280928);
    msg.setSource(33717U);
    msg.setSourceEntity(87U);
    msg.setDestination(64076U);
    msg.setDestinationEntity(74U);
    msg.time = 0.4160211711673186;
    msg.x = 0.6670965240326283;
    msg.y = 0.11579270005144471;
    msg.z = 0.6739718764856145;

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
    msg.setTimeStamp(0.9791653484714273);
    msg.setSource(63389U);
    msg.setSourceEntity(2U);
    msg.setDestination(41757U);
    msg.setDestinationEntity(240U);
    msg.time = 0.6457038553086228;
    msg.x = 0.8233070853283415;
    msg.y = 0.1454652550412695;
    msg.z = 0.23746813258527066;

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
    msg.setTimeStamp(0.6736604050713545);
    msg.setSource(5744U);
    msg.setSourceEntity(144U);
    msg.setDestination(1719U);
    msg.setDestinationEntity(120U);
    msg.validity = 245U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.17957158423072683;
    tmp_msg_0.beam_height = 0.9330315880401088;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.41608018679205194;

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
    msg.setTimeStamp(0.46719017603868707);
    msg.setSource(51389U);
    msg.setSourceEntity(101U);
    msg.setDestination(29126U);
    msg.setDestinationEntity(231U);
    msg.validity = 35U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.23773724708582622;
    tmp_msg_0.y = 0.4221800901598347;
    tmp_msg_0.z = 0.9469237216693949;
    tmp_msg_0.phi = 0.28331504986233824;
    tmp_msg_0.theta = 0.6852343783786685;
    tmp_msg_0.psi = 0.42887256210142066;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8790213945157015;
    tmp_msg_1.beam_height = 0.4146880398350573;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8052622785618365;

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
    msg.setTimeStamp(0.13608469458425643);
    msg.setSource(51236U);
    msg.setSourceEntity(94U);
    msg.setDestination(30901U);
    msg.setDestinationEntity(195U);
    msg.validity = 73U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.418938987158071;
    tmp_msg_0.y = 0.06169142506219005;
    tmp_msg_0.z = 0.09199191457084999;
    tmp_msg_0.phi = 0.42141138642107334;
    tmp_msg_0.theta = 0.29748984654847166;
    tmp_msg_0.psi = 0.4296405411537033;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.11082484791273395;
    tmp_msg_1.beam_height = 0.061916982675657706;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5708493050313049;

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
    msg.setTimeStamp(0.6013974704156104);
    msg.setSource(28602U);
    msg.setSourceEntity(211U);
    msg.setDestination(18859U);
    msg.setDestinationEntity(35U);
    msg.value = 0.7090888108103514;

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
    msg.setTimeStamp(0.2820345303193641);
    msg.setSource(50493U);
    msg.setSourceEntity(160U);
    msg.setDestination(27505U);
    msg.setDestinationEntity(88U);
    msg.value = 0.8254555828791578;

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
    msg.setTimeStamp(0.7306806783500541);
    msg.setSource(30393U);
    msg.setSourceEntity(208U);
    msg.setDestination(3661U);
    msg.setDestinationEntity(112U);
    msg.value = 0.2348080156185124;

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
    msg.setTimeStamp(0.7570339590640627);
    msg.setSource(9677U);
    msg.setSourceEntity(154U);
    msg.setDestination(25090U);
    msg.setDestinationEntity(250U);
    msg.value = 0.027354192184130044;

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
    msg.setTimeStamp(0.04499954841116094);
    msg.setSource(63919U);
    msg.setSourceEntity(75U);
    msg.setDestination(20582U);
    msg.setDestinationEntity(108U);
    msg.value = 0.15824081832044623;

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
    msg.setTimeStamp(0.07588740698393359);
    msg.setSource(5855U);
    msg.setSourceEntity(82U);
    msg.setDestination(58201U);
    msg.setDestinationEntity(78U);
    msg.value = 0.27061436646378734;

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
    msg.setTimeStamp(0.17650625580686552);
    msg.setSource(28551U);
    msg.setSourceEntity(220U);
    msg.setDestination(53196U);
    msg.setDestinationEntity(163U);
    msg.value = 0.7324899376177688;

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
    msg.setTimeStamp(0.12385586021679518);
    msg.setSource(50776U);
    msg.setSourceEntity(74U);
    msg.setDestination(51005U);
    msg.setDestinationEntity(242U);
    msg.value = 0.8034708862589648;

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
    msg.setTimeStamp(0.3561475566961996);
    msg.setSource(29482U);
    msg.setSourceEntity(88U);
    msg.setDestination(1947U);
    msg.setDestinationEntity(133U);
    msg.value = 0.879126972367352;

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
    msg.setTimeStamp(0.051493142393866154);
    msg.setSource(7938U);
    msg.setSourceEntity(5U);
    msg.setDestination(264U);
    msg.setDestinationEntity(76U);
    msg.value = 0.07651862587223257;

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
    msg.setTimeStamp(0.2642303090524214);
    msg.setSource(52496U);
    msg.setSourceEntity(200U);
    msg.setDestination(53952U);
    msg.setDestinationEntity(29U);
    msg.value = 0.6880787762243464;

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
    msg.setTimeStamp(0.8613331443584797);
    msg.setSource(26796U);
    msg.setSourceEntity(58U);
    msg.setDestination(63947U);
    msg.setDestinationEntity(223U);
    msg.value = 0.31614331445248267;

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
    msg.setTimeStamp(0.7903457379097514);
    msg.setSource(32445U);
    msg.setSourceEntity(21U);
    msg.setDestination(15701U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9629718779257789;

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
    msg.setTimeStamp(0.09804125619924398);
    msg.setSource(38231U);
    msg.setSourceEntity(155U);
    msg.setDestination(59976U);
    msg.setDestinationEntity(162U);
    msg.value = 0.3363041775594994;

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
    msg.setTimeStamp(0.007155963079577221);
    msg.setSource(1380U);
    msg.setSourceEntity(103U);
    msg.setDestination(703U);
    msg.setDestinationEntity(52U);
    msg.value = 0.1492102972373227;

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
    msg.setTimeStamp(0.2646180959688659);
    msg.setSource(58774U);
    msg.setSourceEntity(190U);
    msg.setDestination(21616U);
    msg.setDestinationEntity(141U);
    msg.value = 0.22427816480638108;

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
    msg.setTimeStamp(0.5302321067053285);
    msg.setSource(32397U);
    msg.setSourceEntity(224U);
    msg.setDestination(11872U);
    msg.setDestinationEntity(139U);
    msg.value = 0.5364391776868861;

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
    msg.setTimeStamp(0.09470216169863055);
    msg.setSource(57896U);
    msg.setSourceEntity(92U);
    msg.setDestination(4234U);
    msg.setDestinationEntity(49U);
    msg.value = 0.12107083721521172;

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
    msg.setTimeStamp(0.0029648904473745796);
    msg.setSource(19684U);
    msg.setSourceEntity(44U);
    msg.setDestination(35246U);
    msg.setDestinationEntity(213U);
    msg.value = 0.3211382648139758;

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
    msg.setTimeStamp(0.6949848218097288);
    msg.setSource(31180U);
    msg.setSourceEntity(157U);
    msg.setDestination(5965U);
    msg.setDestinationEntity(100U);
    msg.value = 0.5909909403705426;

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
    msg.setTimeStamp(0.848879169630669);
    msg.setSource(13612U);
    msg.setSourceEntity(171U);
    msg.setDestination(59844U);
    msg.setDestinationEntity(40U);
    msg.value = 0.07514813235870499;

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
    msg.setTimeStamp(0.8890270006113573);
    msg.setSource(59678U);
    msg.setSourceEntity(78U);
    msg.setDestination(3772U);
    msg.setDestinationEntity(192U);
    msg.value = 0.08847936998370409;

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
    msg.setTimeStamp(0.48567827073161285);
    msg.setSource(18708U);
    msg.setSourceEntity(193U);
    msg.setDestination(25346U);
    msg.setDestinationEntity(57U);
    msg.value = 0.5011489331250244;

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
    msg.setTimeStamp(0.8658172454241368);
    msg.setSource(369U);
    msg.setSourceEntity(123U);
    msg.setDestination(7663U);
    msg.setDestinationEntity(82U);
    msg.value = 0.8745114761613253;

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
    msg.setTimeStamp(0.6598045973930047);
    msg.setSource(52400U);
    msg.setSourceEntity(19U);
    msg.setDestination(64932U);
    msg.setDestinationEntity(248U);
    msg.direction = 0.7561760587069434;
    msg.speed = 0.8627797757916018;
    msg.turbulence = 0.6677332924209884;

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
    msg.setTimeStamp(0.1388164824377619);
    msg.setSource(54808U);
    msg.setSourceEntity(13U);
    msg.setDestination(34160U);
    msg.setDestinationEntity(142U);
    msg.direction = 0.428782218629461;
    msg.speed = 0.045935286184858315;
    msg.turbulence = 0.5081220167506809;

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
    msg.setTimeStamp(0.18834189718165317);
    msg.setSource(22781U);
    msg.setSourceEntity(240U);
    msg.setDestination(22612U);
    msg.setDestinationEntity(205U);
    msg.direction = 0.531347709643417;
    msg.speed = 0.24495975490324617;
    msg.turbulence = 0.5630116396000311;

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
    msg.setTimeStamp(0.9106744153302555);
    msg.setSource(4693U);
    msg.setSourceEntity(39U);
    msg.setDestination(51350U);
    msg.setDestinationEntity(217U);
    msg.value = 0.37544051754868435;

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
    msg.setTimeStamp(0.8760399955514228);
    msg.setSource(15797U);
    msg.setSourceEntity(199U);
    msg.setDestination(4714U);
    msg.setDestinationEntity(240U);
    msg.value = 0.448378319116551;

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
    msg.setTimeStamp(0.9489265634357004);
    msg.setSource(52628U);
    msg.setSourceEntity(58U);
    msg.setDestination(44610U);
    msg.setDestinationEntity(145U);
    msg.value = 0.9005085557830107;

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
    msg.setTimeStamp(0.6854452938736739);
    msg.setSource(52832U);
    msg.setSourceEntity(34U);
    msg.setDestination(54167U);
    msg.setDestinationEntity(209U);
    msg.value.assign("XZVRNLMPAFNFNDHTEQCLCDYXHAUPCEEDGGZTYGRHQIFJBDKJKFRJUNRWSONTBJPCUQXRKXUSNFGMWXOTKVGSILVEOYVYPHHCOSIPVQWQBZELBCLZHVMHDVRJNXIWYASCQMIEKWILLMWCLFAPIBLJSXOTZAIUNGAPJEBDHTDGESNBQKSTGETBXMOVUDVYDAMHOPG");

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
    msg.setTimeStamp(0.9721184811583031);
    msg.setSource(23999U);
    msg.setSourceEntity(173U);
    msg.setDestination(39958U);
    msg.setDestinationEntity(80U);
    msg.value.assign("FZOPHTBKYUOXAOQERZYTCABPUFWXIDSZLOCAGEOMFMIBEFGJGWCIKTCQXLLDBDPVQZLTIKBXTMRRRVODSYCLYYUVHHRKQOPPTWMJYJTRURNMIHXLAHHYVBSIVMGVVRJAWVSJKKWDWNPCSTNFUPERSSDTSHVZBUJGQQAOCQBZIEHZNLUMEFAGELFOPKEMNBWQDHRGTCXNXJJKLCUCPQEIWZBFXNIEKMDKANIVPUNZDZQDG");

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
    msg.setTimeStamp(0.3680788772011844);
    msg.setSource(61998U);
    msg.setSourceEntity(134U);
    msg.setDestination(3178U);
    msg.setDestinationEntity(232U);
    msg.value.assign("YRNQEUWYOBRYHUREDOSBSVCEDHIUVALHJSJOZOTQVGYMLQNRSZQXMVOBSEEGVGFXDSAZKWMGKLNPKMZUOQATLMXHUXYHKNKNFUPBLGYCCOSZUQZLXKMNMXCJMCCBAEWGWYHRWPPFRQNIRFISUNTDTVDTFXABIBJXLEJIFGLQKEADJ");

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
    msg.setTimeStamp(0.7891282300293808);
    msg.setSource(36245U);
    msg.setSourceEntity(154U);
    msg.setDestination(39201U);
    msg.setDestinationEntity(18U);
    const char tmp_msg_0[] = {12, 11, -121, -65, -15, 9, 58, 46, 52, -89, 96, -15, -75, -24, 119, 93, -8, 85, 2, -78, 31, 7, -36, 78, 119, 5, 14, -50, -82, 87, -37, 120, -47, -53, -80, -121, 58, -34, -11, -13, 38, -113, -121, -59, -97, -84, -80, 5, 56, -84, 77, -28, 108, -63, 90, -38, 66, 11, 103, 3, 2, 8, 53, -8, 3, 110, 74, 105, -62, -81, -51, 74, -45, -43, -16, -21, 39, -19, 5, 29, 78, 68, -20, -34, 65, -54, -31, 17, -14, 121, -106, 79, 69, 65, -74, 35, -70, -71, 91, 4, -11, -38, -15, 40, 96, 97, 61, 117, -36, 68, -111, -91, 87, -31, -101, -105, 29, 46, -70, -105, 71, 62, 38, -114, 103, -90, -26, 122, -116, -85, -19, -70, 13, 98, 121, 20, -127, -65, 112, 1, 53, 48, -23, -81, 22, -51, -37, 43, -47, -56, -26, 86, 45, 65, -114, 25, -11, -13, 42, 77, -26, -61, 44, 73, -29, 23, 91, 120, 28, -108, 62, -86, -28, -18, 62, -110, 94, -4, -56, 109, 5, -47, 27, -7, 111, -95, 10, -126, -85, -85, -105, -5, -59, -108, 82, -123, 95, 10, -114, -126, 62, -86, 119, 64, 106, 64, -41, 74, 94, 32, -18, 45, -110, 94, -115, 28, -34, -71, -38, -80, -28, -107, 55, 76, -62, -83, 91, 17, 2, -23, 69, -81, -28, 45, 68, -97, -84, -99, 59, -72};
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
    msg.setTimeStamp(0.3773697391532643);
    msg.setSource(47128U);
    msg.setSourceEntity(28U);
    msg.setDestination(63927U);
    msg.setDestinationEntity(60U);
    const char tmp_msg_0[] = {-118, 105, -115, -39, 66, -3, 63, -82, 13, 34, 75, -66, 125, -86, -70, -81, 74, -98, -12, -67, -79, 93};
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
    msg.setTimeStamp(0.4993107315501555);
    msg.setSource(19623U);
    msg.setSourceEntity(228U);
    msg.setDestination(25472U);
    msg.setDestinationEntity(132U);
    const char tmp_msg_0[] = {-51, -8, -110, 33, 49, 38, -4, 120, 88, 111, -54, 14, 91, 113, -125, 33, 62, -44, 36, -119, -47, -6, 60, -103, -14, 26, 11, 30, 70, 32, -88, 29, 40, 49, 16, -37, -117, -98, -77, 95, 74, 65, -44, -121, 112, -25, 106, 99, -17, -24, -105, 32, -12, 55, 10, 5, 54, 92, -62, -37, -42, 18, 119, 43, 84, -36, -49, -87, 18, -41, -66, 117, -59, -17, -80, -6, 8, -98, 126, 60, -24, 82, 104, -91, -36, -69, 125, -75, -25, 43, 119, -13, -57, 63, 91, 2, -13, -64, -111, -82, -9, 52, -98, -88, -41, 30, 85, 27, -52, 100, 31, -34, -60, 118, -51, 68, -7, 14, -79, -15, 53, 66, -40, 79, -100, 84, 75, -82, 43};
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
    msg.setTimeStamp(0.499651590519708);
    msg.setSource(26114U);
    msg.setSourceEntity(106U);
    msg.setDestination(64486U);
    msg.setDestinationEntity(116U);
    msg.x = 0.05772740639227747;
    msg.y = 0.0899778866403409;
    msg.z = 0.8102906325738674;

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
    msg.setTimeStamp(0.21883577832643486);
    msg.setSource(25725U);
    msg.setSourceEntity(19U);
    msg.setDestination(56049U);
    msg.setDestinationEntity(191U);
    msg.x = 0.32163487045714256;
    msg.y = 0.44895626184890314;
    msg.z = 0.4030189853817474;

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
    msg.setTimeStamp(0.6600180744590233);
    msg.setSource(8037U);
    msg.setSourceEntity(8U);
    msg.setDestination(20114U);
    msg.setDestinationEntity(194U);
    msg.x = 0.7127485437017493;
    msg.y = 0.6283660136887657;
    msg.z = 0.5629326278499348;

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
    msg.setTimeStamp(0.44279508227925013);
    msg.setSource(64468U);
    msg.setSourceEntity(100U);
    msg.setDestination(34028U);
    msg.setDestinationEntity(137U);
    msg.type = 195U;
    msg.frequency = 3054647943U;
    msg.min_range = 52893U;
    msg.max_range = 56285U;
    msg.bits_per_point = 150U;
    msg.scale_factor = 0.4010327647774765;
    const char tmp_msg_0[] = {78, -85, 97, -30, 98, 118, -32, 115, 92, 94, 57, 8, 8, -87, 89, 21, -23, 118, 23, -102, 85, -97, 77, -96, -109, -23, -107, -109, 19, -78, 43, -104, -63, 70, -123, 21, 32, 118, 100, -39, 65, -120, -75, -100, 106, -124, 44, 92, 25, -40, -124, 24, 43, 70, 0, 93, -87, -15, 93, 89, -95, -70, 119, -63, -55, -10, 48, 1, 39, -35, 41, -26, 56, 54, 7, -13, 34, 111, -54, 18, 99, -115, -37, 104, 7, 70, 102, -37, 10, -96, 70, -71, 106, -10, 66, -125, 110, 23, -2, 48, 39, 73, 65, 108, 87, -63, -51, -34, 22, 99, -108, 50, -92, 114, 103, 106, 19, 107, -26, 64, -66, 26, -64, 118, -28, 80, 103, 90, 108, 18, 63, -22, -71, 12, 103, -84, -72, 19, -106, 84, -63, -40, -35, 13, -100, -55, -33, 121, 97, -49, -66, 3, -6, 24, 48, 105, -2, -77, -55, 54, -8, 36, -121, -51, -87, -8, 62, -104, 86, 79, -32, -95, -38, -8, -116, -62, 82, 7, 78, -97, 69, -75, 39, 77};
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
    msg.setTimeStamp(0.49942561496708837);
    msg.setSource(48970U);
    msg.setSourceEntity(9U);
    msg.setDestination(15078U);
    msg.setDestinationEntity(61U);
    msg.type = 232U;
    msg.frequency = 2627529589U;
    msg.min_range = 20477U;
    msg.max_range = 56493U;
    msg.bits_per_point = 240U;
    msg.scale_factor = 0.16511664745589727;
    const char tmp_msg_0[] = {109, -74, -18, -18, 102, 126, 37, 59, 126, -65, 37, -97, -78, -47, -127, -86, 89, -30, -119, -63, 106, 79, -59, 89, 13, 12, 112, -8, -81, 42, 18, 37, -4, 8, 107, 33, 111, 116, 22, 98, -16, 65, 62, 59, -112, 122, 102, -69, -120, -13, -106, -55, 73, 16, -48, 50, -73, -79, 4, 97, -103, 40, 0, 33, -119, 71, 15, -43, -115, 80, 84, -50, -113, -120, 50, 109, 30, 9, -14, -85, 16, 11, 81, 16, 23, 45, 22, 121, -64, 0, 92, 29, 51, 29, -84, -53, 80, -109, 55, 3, -71, 126, -60, -15, -41, 36, 82, 4, -111, -1, -58, -39, -82, 50, -20, -13, -61, 88, -60, -18, 68, -45, -127, -63, 111, 81, 30, -91, -23, 2, 110, 48, 53, 13, 48, 30, -42, -96, -117, -63, 39, -83, -85, 61, -87, 37, 43, -26, 24, 104, 11, 56, -60, -39, -94, 99, 42, -60, 68, 38, -81, -100, -106, -40, 32, -84, -67, -75, 76, 8, -17, 15, 42, 4, -36, -63, -14, 23, 18, 49, -75, 80, -96, -120};
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
    msg.setTimeStamp(0.40792715576825955);
    msg.setSource(56748U);
    msg.setSourceEntity(15U);
    msg.setDestination(23733U);
    msg.setDestinationEntity(117U);
    msg.type = 242U;
    msg.frequency = 1580774799U;
    msg.min_range = 24332U;
    msg.max_range = 3411U;
    msg.bits_per_point = 93U;
    msg.scale_factor = 0.42700935573133314;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8474613780023509;
    tmp_msg_0.beam_height = 0.8271838765398731;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-97, -112, 10, -37, 18, 73, 74, -78, -96, -2, -14, 50, 34, -115, 100, -29, -111, 33, -123, 76, 98, 52, -10, -128, 12, -27, -7, -22, -72, 25, 66, 123, -26, -32, 122, 63, 70, -15, 33, 13, 74, -56, 21, 38, 112, 73, -104, 90, -107, -35, -85};
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
    msg.setTimeStamp(0.5870464030312866);
    msg.setSource(28987U);
    msg.setSourceEntity(148U);
    msg.setDestination(24923U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.3857827876974993);
    msg.setSource(27332U);
    msg.setSourceEntity(149U);
    msg.setDestination(32896U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.023484147058996485);
    msg.setSource(61405U);
    msg.setSourceEntity(55U);
    msg.setDestination(15642U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.17590824594788979);
    msg.setSource(38551U);
    msg.setSourceEntity(114U);
    msg.setDestination(12964U);
    msg.setDestinationEntity(83U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.6844230682320964);
    msg.setSource(58486U);
    msg.setSourceEntity(27U);
    msg.setDestination(33213U);
    msg.setDestinationEntity(242U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.8377308866742949);
    msg.setSource(28056U);
    msg.setSourceEntity(94U);
    msg.setDestination(37843U);
    msg.setDestinationEntity(2U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.5823493233342859);
    msg.setSource(51000U);
    msg.setSourceEntity(12U);
    msg.setDestination(53391U);
    msg.setDestinationEntity(138U);
    msg.value = 0.15204015286825212;
    msg.confidence = 0.9387114935732692;
    msg.opmodes.assign("VWUVAFMROYTMFSROGZTGJXWJZEHILJRNQEBEBSXPGVZKXBZTHAOOBNRJGIGKQYUCLOCTIYVLGCSLWDQMQJTNYWSXPLBFONIQMVFWGDPPYCEAYSQTDKELNRHPZXCMFSRXMYSCWZUDBVVNUUZDSOWDXCEUFQFKIKAGBKUXFMOXWJNQDTERMRPWLTAJPZHF");

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
    msg.setTimeStamp(0.7183956624890394);
    msg.setSource(28985U);
    msg.setSourceEntity(79U);
    msg.setDestination(21219U);
    msg.setDestinationEntity(77U);
    msg.value = 0.36927970519946873;
    msg.confidence = 0.260675887182823;
    msg.opmodes.assign("EDUSBFUCXFFGDYCSFWWYPZRKWIYFKCNQMOKZGAWVGOOXJAEQXLPHHZHPTDGLBOAI");

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
    msg.setTimeStamp(0.5652960846598734);
    msg.setSource(8665U);
    msg.setSourceEntity(94U);
    msg.setDestination(39048U);
    msg.setDestinationEntity(123U);
    msg.value = 0.3141961465876568;
    msg.confidence = 0.29449317956091914;
    msg.opmodes.assign("XQTPAIZKNKHWBKNRAJ");

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
    msg.setTimeStamp(0.5272931341547762);
    msg.setSource(9596U);
    msg.setSourceEntity(176U);
    msg.setDestination(16351U);
    msg.setDestinationEntity(176U);
    msg.itow = 903827328U;
    msg.lat = 0.3134719225592165;
    msg.lon = 0.9242682669466599;
    msg.height_ell = 0.09778714827405155;
    msg.height_sea = 0.5146408096148519;
    msg.hacc = 0.854328499818261;
    msg.vacc = 0.08639834125172807;
    msg.vel_n = 0.7249860914154431;
    msg.vel_e = 0.738923533741462;
    msg.vel_d = 0.03367979382590991;
    msg.speed = 0.6379891390579799;
    msg.gspeed = 0.9592555605043057;
    msg.heading = 0.2454262412201228;
    msg.sacc = 0.5213087528812937;
    msg.cacc = 0.21372362306339465;

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
    msg.setTimeStamp(0.5519651144396205);
    msg.setSource(1886U);
    msg.setSourceEntity(181U);
    msg.setDestination(10177U);
    msg.setDestinationEntity(183U);
    msg.itow = 603451092U;
    msg.lat = 0.9148501049831068;
    msg.lon = 0.259802705942601;
    msg.height_ell = 0.08553458740458197;
    msg.height_sea = 0.17244097639984624;
    msg.hacc = 0.2207110604901138;
    msg.vacc = 0.280912455912694;
    msg.vel_n = 0.8667975882055678;
    msg.vel_e = 0.6325792160388714;
    msg.vel_d = 0.4016192358169084;
    msg.speed = 0.9178160336993187;
    msg.gspeed = 0.23843617489102575;
    msg.heading = 0.9809295781234411;
    msg.sacc = 0.4762928875577922;
    msg.cacc = 0.43791025377711446;

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
    msg.setTimeStamp(0.8225479264442875);
    msg.setSource(64638U);
    msg.setSourceEntity(156U);
    msg.setDestination(12435U);
    msg.setDestinationEntity(92U);
    msg.itow = 766325105U;
    msg.lat = 0.7814752430761385;
    msg.lon = 0.9905081819791083;
    msg.height_ell = 0.7517449282678929;
    msg.height_sea = 0.06848560085593425;
    msg.hacc = 0.034288724098143764;
    msg.vacc = 0.6197265558426527;
    msg.vel_n = 0.2354948151328664;
    msg.vel_e = 0.45512286608798247;
    msg.vel_d = 0.8499981839791247;
    msg.speed = 0.31197785024860725;
    msg.gspeed = 0.4934893464235798;
    msg.heading = 0.44066275895753826;
    msg.sacc = 0.8905456788855624;
    msg.cacc = 0.1724543318180649;

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
    msg.setTimeStamp(0.5267086317032437);
    msg.setSource(19862U);
    msg.setSourceEntity(9U);
    msg.setDestination(12760U);
    msg.setDestinationEntity(194U);
    msg.id = 175U;
    msg.value = 0.1780494818506274;

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
    msg.setTimeStamp(0.9103294375893944);
    msg.setSource(52899U);
    msg.setSourceEntity(55U);
    msg.setDestination(59420U);
    msg.setDestinationEntity(225U);
    msg.id = 54U;
    msg.value = 0.16012759270343746;

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
    msg.setTimeStamp(0.24333323286809694);
    msg.setSource(63782U);
    msg.setSourceEntity(23U);
    msg.setDestination(37407U);
    msg.setDestinationEntity(79U);
    msg.id = 184U;
    msg.value = 0.04440165633993365;

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
    msg.setTimeStamp(0.247358430842329);
    msg.setSource(26311U);
    msg.setSourceEntity(210U);
    msg.setDestination(2336U);
    msg.setDestinationEntity(103U);
    msg.x = 0.83673672440288;
    msg.y = 0.6000187883081215;
    msg.z = 0.10812975630358956;
    msg.phi = 0.2530702045338221;
    msg.theta = 0.23456936693205344;
    msg.psi = 0.6722370288505604;

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
    msg.setTimeStamp(0.3324075024889561);
    msg.setSource(33474U);
    msg.setSourceEntity(110U);
    msg.setDestination(50620U);
    msg.setDestinationEntity(1U);
    msg.x = 0.665907770088945;
    msg.y = 0.408007415178792;
    msg.z = 0.5778956591795329;
    msg.phi = 0.1448288359688754;
    msg.theta = 0.13195419192359936;
    msg.psi = 0.28010238128900755;

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
    msg.setTimeStamp(0.1458603769531055);
    msg.setSource(8181U);
    msg.setSourceEntity(238U);
    msg.setDestination(34712U);
    msg.setDestinationEntity(152U);
    msg.x = 0.1014151214246114;
    msg.y = 0.574585853712377;
    msg.z = 0.8305781489132995;
    msg.phi = 0.6141423561468942;
    msg.theta = 0.8665943346097003;
    msg.psi = 0.7256528036341071;

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
    msg.setTimeStamp(0.5433510397042179);
    msg.setSource(369U);
    msg.setSourceEntity(29U);
    msg.setDestination(55080U);
    msg.setDestinationEntity(168U);
    msg.beam_width = 0.6013825264214737;
    msg.beam_height = 0.6108723392887787;

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
    msg.setTimeStamp(0.08955511052322385);
    msg.setSource(47387U);
    msg.setSourceEntity(86U);
    msg.setDestination(62970U);
    msg.setDestinationEntity(105U);
    msg.beam_width = 0.4524169135567718;
    msg.beam_height = 0.6114502496006355;

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
    msg.setTimeStamp(0.504330543488789);
    msg.setSource(9661U);
    msg.setSourceEntity(46U);
    msg.setDestination(5435U);
    msg.setDestinationEntity(2U);
    msg.beam_width = 0.5641678237920924;
    msg.beam_height = 0.5647821450540212;

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
    msg.setTimeStamp(0.9723555258476589);
    msg.setSource(51442U);
    msg.setSourceEntity(209U);
    msg.setDestination(64196U);
    msg.setDestinationEntity(86U);
    msg.sane = 94U;

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
    msg.setTimeStamp(0.5870711497020689);
    msg.setSource(49167U);
    msg.setSourceEntity(226U);
    msg.setDestination(5291U);
    msg.setDestinationEntity(8U);
    msg.sane = 144U;

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
    msg.setTimeStamp(0.18974772108810534);
    msg.setSource(3255U);
    msg.setSourceEntity(46U);
    msg.setDestination(21550U);
    msg.setDestinationEntity(12U);
    msg.sane = 185U;

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
    msg.setTimeStamp(0.3235426932158033);
    msg.setSource(19036U);
    msg.setSourceEntity(174U);
    msg.setDestination(20439U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6099240611247496;

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
    msg.setTimeStamp(0.35049580133088787);
    msg.setSource(49521U);
    msg.setSourceEntity(91U);
    msg.setDestination(21610U);
    msg.setDestinationEntity(76U);
    msg.value = 0.5339222668064212;

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
    msg.setTimeStamp(0.7939898953637596);
    msg.setSource(63684U);
    msg.setSourceEntity(216U);
    msg.setDestination(29657U);
    msg.setDestinationEntity(175U);
    msg.value = 0.10123052197965554;

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
    msg.setTimeStamp(0.18544992312816233);
    msg.setSource(5637U);
    msg.setSourceEntity(123U);
    msg.setDestination(47270U);
    msg.setDestinationEntity(250U);
    msg.value = 0.6991523904831568;

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
    msg.setTimeStamp(0.44277325040888194);
    msg.setSource(11749U);
    msg.setSourceEntity(114U);
    msg.setDestination(46855U);
    msg.setDestinationEntity(103U);
    msg.value = 0.3755940670270226;

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
    msg.setTimeStamp(0.730654155668281);
    msg.setSource(37526U);
    msg.setSourceEntity(59U);
    msg.setDestination(18774U);
    msg.setDestinationEntity(48U);
    msg.value = 0.6171509305017078;

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
    msg.setTimeStamp(0.07917352345847428);
    msg.setSource(52002U);
    msg.setSourceEntity(53U);
    msg.setDestination(13000U);
    msg.setDestinationEntity(66U);
    msg.value = 0.35604054848642097;

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
    msg.setTimeStamp(0.048810148403476084);
    msg.setSource(9643U);
    msg.setSourceEntity(229U);
    msg.setDestination(57851U);
    msg.setDestinationEntity(157U);
    msg.value = 0.5583445497034394;

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
    msg.setTimeStamp(0.9870599877035698);
    msg.setSource(713U);
    msg.setSourceEntity(151U);
    msg.setDestination(30822U);
    msg.setDestinationEntity(105U);
    msg.value = 0.2756702126934758;

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
    msg.setTimeStamp(0.5797766515777768);
    msg.setSource(48447U);
    msg.setSourceEntity(95U);
    msg.setDestination(2468U);
    msg.setDestinationEntity(207U);
    msg.value = 0.22127186230277185;

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
    msg.setTimeStamp(0.6263827930675232);
    msg.setSource(5887U);
    msg.setSourceEntity(33U);
    msg.setDestination(63504U);
    msg.setDestinationEntity(189U);
    msg.value = 0.8432276451270598;

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
    msg.setTimeStamp(0.6527048407033744);
    msg.setSource(59793U);
    msg.setSourceEntity(63U);
    msg.setDestination(32977U);
    msg.setDestinationEntity(142U);
    msg.value = 0.7539874495204566;

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
    msg.setTimeStamp(0.4836505661010212);
    msg.setSource(2019U);
    msg.setSourceEntity(231U);
    msg.setDestination(47168U);
    msg.setDestinationEntity(3U);
    msg.value = 0.23485996504267637;

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
    msg.setTimeStamp(0.31264237471093925);
    msg.setSource(56676U);
    msg.setSourceEntity(146U);
    msg.setDestination(44907U);
    msg.setDestinationEntity(72U);
    msg.value = 0.4613102426817772;

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
    msg.setTimeStamp(0.23003077922625137);
    msg.setSource(43648U);
    msg.setSourceEntity(187U);
    msg.setDestination(24023U);
    msg.setDestinationEntity(0U);
    msg.value = 0.6961109239184505;

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
    msg.setTimeStamp(0.1920859839050093);
    msg.setSource(41085U);
    msg.setSourceEntity(122U);
    msg.setDestination(25612U);
    msg.setDestinationEntity(0U);
    msg.value = 0.5605662349183218;

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
    msg.setTimeStamp(0.13693182744547794);
    msg.setSource(64762U);
    msg.setSourceEntity(122U);
    msg.setDestination(46833U);
    msg.setDestinationEntity(196U);
    msg.value = 0.49664093678094967;

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
    msg.setTimeStamp(0.9892293633153101);
    msg.setSource(7494U);
    msg.setSourceEntity(112U);
    msg.setDestination(27238U);
    msg.setDestinationEntity(7U);
    msg.value = 0.19544099495593636;

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
    msg.setTimeStamp(0.17431257281502088);
    msg.setSource(16364U);
    msg.setSourceEntity(119U);
    msg.setDestination(28896U);
    msg.setDestinationEntity(181U);
    msg.value = 0.2990451302557475;

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
    msg.setTimeStamp(0.8548847207934412);
    msg.setSource(43310U);
    msg.setSourceEntity(123U);
    msg.setDestination(32223U);
    msg.setDestinationEntity(183U);
    msg.value = 0.018420646140469343;

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
    msg.setTimeStamp(0.24021444458587482);
    msg.setSource(17890U);
    msg.setSourceEntity(3U);
    msg.setDestination(25160U);
    msg.setDestinationEntity(95U);
    msg.value = 0.4795445413132601;

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
    msg.setTimeStamp(0.12533827542670428);
    msg.setSource(3852U);
    msg.setSourceEntity(83U);
    msg.setDestination(29293U);
    msg.setDestinationEntity(178U);
    msg.value = 0.548922986629611;

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
    msg.setTimeStamp(0.09890440641644116);
    msg.setSource(4878U);
    msg.setSourceEntity(249U);
    msg.setDestination(57358U);
    msg.setDestinationEntity(230U);
    msg.value = 0.4079787837564145;

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
    msg.setTimeStamp(0.36504485243121254);
    msg.setSource(20326U);
    msg.setSourceEntity(20U);
    msg.setDestination(13329U);
    msg.setDestinationEntity(30U);
    msg.value = 0.22439910849457523;

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
    msg.setTimeStamp(0.2782987636927461);
    msg.setSource(48795U);
    msg.setSourceEntity(97U);
    msg.setDestination(50062U);
    msg.setDestinationEntity(173U);
    msg.validity = 4548U;
    msg.type = 204U;
    msg.tow = 4121531346U;
    msg.base_lat = 0.4017755998666672;
    msg.base_lon = 0.14562254781339035;
    msg.base_height = 0.46922326903859335;
    msg.n = 0.7695138822819338;
    msg.e = 0.921115512766434;
    msg.d = 0.3015096890371354;
    msg.v_n = 0.7204275561679545;
    msg.v_e = 0.07283946075381609;
    msg.v_d = 0.16599528134096897;
    msg.satellites = 95U;
    msg.iar_hyp = 51071U;
    msg.iar_ratio = 0.591801723904093;

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
    msg.setTimeStamp(0.9384176539120477);
    msg.setSource(17620U);
    msg.setSourceEntity(253U);
    msg.setDestination(10530U);
    msg.setDestinationEntity(86U);
    msg.validity = 52993U;
    msg.type = 235U;
    msg.tow = 190961174U;
    msg.base_lat = 0.7288580530164066;
    msg.base_lon = 0.7698620182650974;
    msg.base_height = 0.8180544887362369;
    msg.n = 0.03161627633990993;
    msg.e = 0.2044221166277128;
    msg.d = 0.8502453809829543;
    msg.v_n = 0.7957225248282879;
    msg.v_e = 0.6531606704885579;
    msg.v_d = 0.819191426101496;
    msg.satellites = 204U;
    msg.iar_hyp = 53437U;
    msg.iar_ratio = 0.180635401368471;

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
    msg.setTimeStamp(0.30207331415033467);
    msg.setSource(47139U);
    msg.setSourceEntity(5U);
    msg.setDestination(3955U);
    msg.setDestinationEntity(247U);
    msg.validity = 31121U;
    msg.type = 97U;
    msg.tow = 4184845930U;
    msg.base_lat = 0.40057228609114637;
    msg.base_lon = 0.9436320701899061;
    msg.base_height = 0.5333119094947156;
    msg.n = 0.21451959176573598;
    msg.e = 0.7757909825472389;
    msg.d = 0.6718661816879989;
    msg.v_n = 0.7368416819361704;
    msg.v_e = 0.8872173081685438;
    msg.v_d = 0.6231500263571553;
    msg.satellites = 253U;
    msg.iar_hyp = 54924U;
    msg.iar_ratio = 0.09088729227169812;

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
    msg.setTimeStamp(0.34600925311446873);
    msg.setSource(62188U);
    msg.setSourceEntity(222U);
    msg.setDestination(4741U);
    msg.setDestinationEntity(102U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7165794726357176;
    tmp_msg_0.lon = 0.1823015051736777;
    tmp_msg_0.height = 0.3462592871877509;
    tmp_msg_0.x = 0.543342557166108;
    tmp_msg_0.y = 0.04109601289517273;
    tmp_msg_0.z = 0.4840955233495764;
    tmp_msg_0.phi = 0.670540512842912;
    tmp_msg_0.theta = 0.4907658410949888;
    tmp_msg_0.psi = 0.17155085586809316;
    tmp_msg_0.u = 0.47026322854955727;
    tmp_msg_0.v = 0.13856022542130186;
    tmp_msg_0.w = 0.2374931242399173;
    tmp_msg_0.vx = 0.6041386050736314;
    tmp_msg_0.vy = 0.04490738129011962;
    tmp_msg_0.vz = 0.4476289359151907;
    tmp_msg_0.p = 0.0005319741631946151;
    tmp_msg_0.q = 0.3760047819251928;
    tmp_msg_0.r = 0.3171031604289889;
    tmp_msg_0.depth = 0.21678624056563045;
    tmp_msg_0.alt = 0.18696170844313476;
    msg.state.set(tmp_msg_0);
    msg.type = 129U;

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
    msg.setTimeStamp(0.893890913721646);
    msg.setSource(38758U);
    msg.setSourceEntity(53U);
    msg.setDestination(50978U);
    msg.setDestinationEntity(175U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6018758124345589;
    tmp_msg_0.lon = 0.4869309286559027;
    tmp_msg_0.height = 0.6833727116826834;
    tmp_msg_0.x = 0.9643237521275851;
    tmp_msg_0.y = 0.20410827216920435;
    tmp_msg_0.z = 0.7232959762036802;
    tmp_msg_0.phi = 0.5715965548718032;
    tmp_msg_0.theta = 0.8894448386846664;
    tmp_msg_0.psi = 0.8837205839508709;
    tmp_msg_0.u = 0.7010646441129524;
    tmp_msg_0.v = 0.49348069361810476;
    tmp_msg_0.w = 0.9158672024013085;
    tmp_msg_0.vx = 0.34395394848454997;
    tmp_msg_0.vy = 0.8199223500595607;
    tmp_msg_0.vz = 0.9390066614221211;
    tmp_msg_0.p = 0.515285130346835;
    tmp_msg_0.q = 0.4154315103606433;
    tmp_msg_0.r = 0.8247792546941902;
    tmp_msg_0.depth = 0.4924713798768202;
    tmp_msg_0.alt = 0.1453297204366658;
    msg.state.set(tmp_msg_0);
    msg.type = 138U;

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
    msg.setTimeStamp(0.957332570256698);
    msg.setSource(14781U);
    msg.setSourceEntity(130U);
    msg.setDestination(58520U);
    msg.setDestinationEntity(79U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2524967556934391;
    tmp_msg_0.lon = 0.5824415270001573;
    tmp_msg_0.height = 0.05107337506208143;
    tmp_msg_0.x = 0.9440029177205554;
    tmp_msg_0.y = 0.9234130559147836;
    tmp_msg_0.z = 0.6349293425069568;
    tmp_msg_0.phi = 0.08330066736879127;
    tmp_msg_0.theta = 0.6814736501520062;
    tmp_msg_0.psi = 0.9490113680159652;
    tmp_msg_0.u = 0.22715205480576584;
    tmp_msg_0.v = 0.26975164011855535;
    tmp_msg_0.w = 0.4862900667274298;
    tmp_msg_0.vx = 0.7394532579120328;
    tmp_msg_0.vy = 0.5079425941926379;
    tmp_msg_0.vz = 0.7139206177360607;
    tmp_msg_0.p = 0.43688671082708963;
    tmp_msg_0.q = 0.6496083917721115;
    tmp_msg_0.r = 0.7925050671457549;
    tmp_msg_0.depth = 0.2838979856538215;
    tmp_msg_0.alt = 0.18756825179090697;
    msg.state.set(tmp_msg_0);
    msg.type = 65U;

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
    msg.setTimeStamp(0.568575761694652);
    msg.setSource(8066U);
    msg.setSourceEntity(71U);
    msg.setDestination(27597U);
    msg.setDestinationEntity(183U);
    msg.value = 0.7659284519310287;

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
    msg.setTimeStamp(0.29253061800290914);
    msg.setSource(14456U);
    msg.setSourceEntity(184U);
    msg.setDestination(14435U);
    msg.setDestinationEntity(207U);
    msg.value = 0.23088719865398633;

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
    msg.setTimeStamp(0.7612180457894144);
    msg.setSource(51913U);
    msg.setSourceEntity(81U);
    msg.setDestination(49534U);
    msg.setDestinationEntity(7U);
    msg.value = 0.34137609524088086;

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
    msg.setTimeStamp(0.7238486919610969);
    msg.setSource(4010U);
    msg.setSourceEntity(80U);
    msg.setDestination(51516U);
    msg.setDestinationEntity(140U);
    msg.value = 0.009050721405378437;

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
    msg.setTimeStamp(0.991062486514526);
    msg.setSource(47193U);
    msg.setSourceEntity(97U);
    msg.setDestination(33221U);
    msg.setDestinationEntity(104U);
    msg.value = 0.7612138021310413;

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
    msg.setTimeStamp(0.29504485259654867);
    msg.setSource(58988U);
    msg.setSourceEntity(134U);
    msg.setDestination(31413U);
    msg.setDestinationEntity(19U);
    msg.value = 0.3322845378594552;

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
    msg.setTimeStamp(0.40113186304055826);
    msg.setSource(15567U);
    msg.setSourceEntity(246U);
    msg.setDestination(15597U);
    msg.setDestinationEntity(16U);
    msg.value = 0.399220670463708;

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
    msg.setTimeStamp(0.6106302395368517);
    msg.setSource(42310U);
    msg.setSourceEntity(82U);
    msg.setDestination(18861U);
    msg.setDestinationEntity(50U);
    msg.value = 0.1005100859913719;

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
    msg.setTimeStamp(0.12342029818732092);
    msg.setSource(65245U);
    msg.setSourceEntity(250U);
    msg.setDestination(48936U);
    msg.setDestinationEntity(13U);
    msg.value = 0.7855259550271967;

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
    msg.setTimeStamp(0.6387556844453024);
    msg.setSource(37261U);
    msg.setSourceEntity(101U);
    msg.setDestination(14892U);
    msg.setDestinationEntity(176U);
    msg.value = 0.09334665010867937;

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
    msg.setTimeStamp(0.14650835084421376);
    msg.setSource(42335U);
    msg.setSourceEntity(134U);
    msg.setDestination(36381U);
    msg.setDestinationEntity(39U);
    msg.value = 0.8367185163177348;

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
    msg.setTimeStamp(0.2856021803416181);
    msg.setSource(193U);
    msg.setSourceEntity(234U);
    msg.setDestination(53776U);
    msg.setDestinationEntity(117U);
    msg.value = 0.059172912826745416;

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
    msg.setTimeStamp(0.9817968563419708);
    msg.setSource(40925U);
    msg.setSourceEntity(219U);
    msg.setDestination(10831U);
    msg.setDestinationEntity(44U);
    msg.value = 0.9796651392565213;

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
    msg.setTimeStamp(0.5133345449981205);
    msg.setSource(3382U);
    msg.setSourceEntity(44U);
    msg.setDestination(18282U);
    msg.setDestinationEntity(79U);
    msg.value = 0.8061315165380377;

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
    msg.setTimeStamp(0.8446420153695876);
    msg.setSource(44486U);
    msg.setSourceEntity(134U);
    msg.setDestination(8951U);
    msg.setDestinationEntity(173U);
    msg.value = 0.0919123718605599;

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
    msg.setTimeStamp(0.791299155116244);
    msg.setSource(31165U);
    msg.setSourceEntity(125U);
    msg.setDestination(14394U);
    msg.setDestinationEntity(233U);
    msg.id = 101U;
    msg.zoom = 226U;
    msg.action = 150U;

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
    msg.setTimeStamp(0.391723184333292);
    msg.setSource(61144U);
    msg.setSourceEntity(177U);
    msg.setDestination(43666U);
    msg.setDestinationEntity(210U);
    msg.id = 42U;
    msg.zoom = 65U;
    msg.action = 135U;

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
    msg.setTimeStamp(0.22275521417777333);
    msg.setSource(9270U);
    msg.setSourceEntity(206U);
    msg.setDestination(8668U);
    msg.setDestinationEntity(215U);
    msg.id = 162U;
    msg.zoom = 144U;
    msg.action = 187U;

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
    msg.setTimeStamp(0.3670481099381987);
    msg.setSource(37590U);
    msg.setSourceEntity(228U);
    msg.setDestination(25288U);
    msg.setDestinationEntity(227U);
    msg.id = 243U;
    msg.value = 0.32061732792895026;

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
    msg.setTimeStamp(0.31557990320326446);
    msg.setSource(42885U);
    msg.setSourceEntity(225U);
    msg.setDestination(22803U);
    msg.setDestinationEntity(193U);
    msg.id = 121U;
    msg.value = 0.890523012651374;

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
    msg.setTimeStamp(0.3393847384377783);
    msg.setSource(28026U);
    msg.setSourceEntity(68U);
    msg.setDestination(57115U);
    msg.setDestinationEntity(118U);
    msg.id = 141U;
    msg.value = 0.24651450314207446;

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
    msg.setTimeStamp(0.4908204099136857);
    msg.setSource(58030U);
    msg.setSourceEntity(22U);
    msg.setDestination(27098U);
    msg.setDestinationEntity(202U);
    msg.id = 17U;
    msg.value = 0.7202833365989083;

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
    msg.setTimeStamp(0.7265208009991588);
    msg.setSource(31426U);
    msg.setSourceEntity(173U);
    msg.setDestination(54641U);
    msg.setDestinationEntity(248U);
    msg.id = 27U;
    msg.value = 0.7702306721692895;

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
    msg.setTimeStamp(0.3022409144380107);
    msg.setSource(49366U);
    msg.setSourceEntity(6U);
    msg.setDestination(34214U);
    msg.setDestinationEntity(211U);
    msg.id = 140U;
    msg.value = 0.1822427325136613;

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
    msg.setTimeStamp(0.3131943667546818);
    msg.setSource(49658U);
    msg.setSourceEntity(193U);
    msg.setDestination(5696U);
    msg.setDestinationEntity(45U);
    msg.id = 206U;
    msg.angle = 0.2909475280380319;

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
    msg.setTimeStamp(0.4055901813913608);
    msg.setSource(56262U);
    msg.setSourceEntity(7U);
    msg.setDestination(13170U);
    msg.setDestinationEntity(148U);
    msg.id = 47U;
    msg.angle = 0.4203843556076766;

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
    msg.setTimeStamp(0.625538799385169);
    msg.setSource(39198U);
    msg.setSourceEntity(170U);
    msg.setDestination(52310U);
    msg.setDestinationEntity(46U);
    msg.id = 10U;
    msg.angle = 0.1433525067528938;

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
    msg.setTimeStamp(0.09406856007521913);
    msg.setSource(3731U);
    msg.setSourceEntity(187U);
    msg.setDestination(51707U);
    msg.setDestinationEntity(175U);
    msg.op = 133U;
    msg.actions.assign("KVTQXJHTCBNOGRWKQSAMJEUKQADTKEBGYUDTLYKCIETMPWFRYGMHRFFBOUJOPCIRWHDSLLDSUGENZMTHQHEYVSGXKNEUVZYGOZMONIJXHUMFJCABZIJQISNIZQKOTGAVSKPTARPRVZMUAHYXPYDOVVWFDSTMLSAXBJJPHIXCAPNYDBXWRHEZMCWZSWGNTCARWDQCNNXZRVXVYOEUPQUB");

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
    msg.setTimeStamp(0.5356795032662388);
    msg.setSource(11355U);
    msg.setSourceEntity(204U);
    msg.setDestination(31573U);
    msg.setDestinationEntity(203U);
    msg.op = 10U;
    msg.actions.assign("LLQKOKHYKZRLXOOCYYPVHPEWUMYJQAUWUUGNAEZGYOGPRFJBVUDQSXQAYMKJBQMJNFRDMNTIKWQTVQFSDXRDOEZSKULTRZHAZOIXIRBCUOLFWBFJHVNIDLZLCTBAMKFTGBTBGHCNJDYZAIJSNHLTQEXWNMEWRCZPVTAOZGNKXPGIPHTHIMBVFSSKGMSWUIEVJPELOPYECCSUEXODIDEUHDLCIQCWWPGTJXXFHBQFDXA");

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
    msg.setTimeStamp(0.9142884267550557);
    msg.setSource(12388U);
    msg.setSourceEntity(62U);
    msg.setDestination(21459U);
    msg.setDestinationEntity(78U);
    msg.op = 163U;
    msg.actions.assign("NZZIZNAXQQADSVELO");

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
    msg.setTimeStamp(0.15636101585667783);
    msg.setSource(51292U);
    msg.setSourceEntity(240U);
    msg.setDestination(55973U);
    msg.setDestinationEntity(3U);
    msg.actions.assign("SLNZBMOITVPDFIGIRBHDVFZWIGFJXOMNENHLDTWWMORUJIGNTKNKUGQMPRRWAPMKSJMCXQKAVKYQGXWDXWQULOZLXTBEBYWCBVWRRIPCABNQNSBLJYBYCHLUXNXZKMZZNEAAPFMQCIGPAHDRSZCCYSGATVKIJLHUJI");

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
    msg.setTimeStamp(0.4874698060371856);
    msg.setSource(64088U);
    msg.setSourceEntity(77U);
    msg.setDestination(3122U);
    msg.setDestinationEntity(200U);
    msg.actions.assign("EOQYYFNTEOATMWPQVFXVPINFLFRDGHAESTGG");

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
    msg.setTimeStamp(0.31308251308865787);
    msg.setSource(32995U);
    msg.setSourceEntity(246U);
    msg.setDestination(16330U);
    msg.setDestinationEntity(59U);
    msg.actions.assign("SCEBVHGXRGCQJSLRPXQPFTMLJYIEMICNBGBEMU");

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
    msg.setTimeStamp(0.0009833019347117444);
    msg.setSource(24895U);
    msg.setSourceEntity(210U);
    msg.setDestination(50407U);
    msg.setDestinationEntity(37U);
    msg.button = 117U;
    msg.value = 62U;

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
    msg.setTimeStamp(0.9173993910751933);
    msg.setSource(17589U);
    msg.setSourceEntity(101U);
    msg.setDestination(13077U);
    msg.setDestinationEntity(184U);
    msg.button = 41U;
    msg.value = 76U;

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
    msg.setTimeStamp(0.06526286382409052);
    msg.setSource(23218U);
    msg.setSourceEntity(39U);
    msg.setDestination(22065U);
    msg.setDestinationEntity(180U);
    msg.button = 241U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.6368810108789638);
    msg.setSource(34494U);
    msg.setSourceEntity(184U);
    msg.setDestination(22286U);
    msg.setDestinationEntity(30U);
    msg.op = 227U;
    msg.text.assign("AKYLQWJAWXSFVTFLZLJUCMNSLIOYWSEJCOWGTRXJFDRXGHJNMEMGGEHDDQPRVNONLZLSDWGVFICKEHPKMAPTDAOVDEUMIINGEYCNHCYXUKGOZPXADICFVUQ");

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
    msg.setTimeStamp(0.5576126919826977);
    msg.setSource(32176U);
    msg.setSourceEntity(147U);
    msg.setDestination(40883U);
    msg.setDestinationEntity(132U);
    msg.op = 141U;
    msg.text.assign("KIMAUTYPTLVQIHPESCPBGLHNZPLENXJMTRSJKVPMBYJQKYECJNOLHIZATNESAHSXCZGGJCDGAOVCRLLHSNFCXWYUYDABFDZFOPRUQSID");

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
    msg.setTimeStamp(0.6454979236648655);
    msg.setSource(28452U);
    msg.setSourceEntity(94U);
    msg.setDestination(2106U);
    msg.setDestinationEntity(24U);
    msg.op = 80U;
    msg.text.assign("SXVAKDCBLGGLUFFUXEYGRVYDNRLBTUCZCQJIDNBJMJEDDHCMUNIFKLYGZNPIXWQHBHZAWNUPTGNJZUQGEYRCBVUFWFKTDLSUXPRQESHXPQENYSVZSEHIIYABXVLNLDQCMBKHEMWSFRQOPMQPXRJZYWUDDBAISKAILZCFOTZVMDQMOTOSTEM");

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
    msg.setTimeStamp(0.8759100196012702);
    msg.setSource(36660U);
    msg.setSourceEntity(20U);
    msg.setDestination(40405U);
    msg.setDestinationEntity(100U);
    msg.op = 99U;
    msg.time_remain = 0.9300725222798674;
    msg.sched_time = 0.12645300674811566;

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
    msg.setTimeStamp(0.6367774106827492);
    msg.setSource(5552U);
    msg.setSourceEntity(92U);
    msg.setDestination(27036U);
    msg.setDestinationEntity(181U);
    msg.op = 13U;
    msg.time_remain = 0.48577415470100016;
    msg.sched_time = 0.46699128968491666;

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
    msg.setTimeStamp(0.09508709945807725);
    msg.setSource(18840U);
    msg.setSourceEntity(122U);
    msg.setDestination(25048U);
    msg.setDestinationEntity(116U);
    msg.op = 156U;
    msg.time_remain = 0.7972723825836768;
    msg.sched_time = 0.6431156940354537;

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
    msg.setTimeStamp(0.4242374255284035);
    msg.setSource(23915U);
    msg.setSourceEntity(210U);
    msg.setDestination(5948U);
    msg.setDestinationEntity(75U);
    msg.name.assign("QILDQUIPDBNYILHNPOYAIGAHJFTIUGYWZDZBGRPVSWDKFLMSALNKZAGFGVR");
    msg.op = 222U;
    msg.sched_time = 0.27149542918040814;

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
    msg.setTimeStamp(0.3730742224593907);
    msg.setSource(43623U);
    msg.setSourceEntity(139U);
    msg.setDestination(33049U);
    msg.setDestinationEntity(70U);
    msg.name.assign("YMWAHLAHFSRRZTHWPFCEUIESCNWDUYFYRLVNGXQBKHEQUDZFIEQHSWOMKQVRIROXKVNARILOXSMGZKDFPWIBNJGYTVYOMZCCLZZNVOWQFANBUBJIXWYHTGITXPGAFTPJVFEYNBATZVTMTDLZJRWEDAUGQBO");
    msg.op = 123U;
    msg.sched_time = 0.4447593443750395;

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
    msg.setTimeStamp(0.07985345696161905);
    msg.setSource(58659U);
    msg.setSourceEntity(132U);
    msg.setDestination(29307U);
    msg.setDestinationEntity(141U);
    msg.name.assign("OTVESEJWBMWZPBVMFPRBJDEBHLDVKKHNDHGHPTGZYBKSQXWWHQUNRXJEICIEXMQULZPTPYQZXRHQSSMIYRVEBQNXDSUKOWBZQLKJWRVFFUADAONALMDGTFUCXCTALFDALNJRCBIFPNTJ");
    msg.op = 169U;
    msg.sched_time = 0.6396892919177588;

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
    msg.setTimeStamp(0.7880326689228957);
    msg.setSource(33690U);
    msg.setSourceEntity(99U);
    msg.setDestination(14901U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.08926814469704258);
    msg.setSource(64362U);
    msg.setSourceEntity(146U);
    msg.setDestination(19039U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.43538394722096085);
    msg.setSource(35571U);
    msg.setSourceEntity(232U);
    msg.setDestination(43584U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.43408368144642195);
    msg.setSource(55715U);
    msg.setSourceEntity(145U);
    msg.setDestination(31899U);
    msg.setDestinationEntity(183U);
    msg.name.assign("XQKGWETEGQXFEMVOXMZLFMIKMNYJQYWNHFVYLDBSLDLHKYLPUSNJEBDOAKZLHFKUZFQMIRYCYRHXTKFLIJJNHGEJTZKQWDBKQDMGQCOLGSUERRCABXSOHDQTHUPSUXERXMNVFDPZTXEGTBRPWKCJNQVSSBJVFTVYECMDIHMWPCZXBYRNZIIBZ");
    msg.state = 228U;

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
    msg.setTimeStamp(0.4365364556405319);
    msg.setSource(19293U);
    msg.setSourceEntity(194U);
    msg.setDestination(28578U);
    msg.setDestinationEntity(231U);
    msg.name.assign("NCOARGPGMLDZHPVWGFMVFEIFNAMAYFPAJDOHKLUMSYEVBBWUHSVHLXMXTVOSYFWLAYTSUJIGHEHPPBONICNMUAIGFQTTXQXKBKCKQPWJSVYROYZQWRLYGNKRXCDTLHIWCNDQDEBYDWXKAEMLDTHLGOBJPVSEFTJCSZHXOFQXQVXVCJKZGWUIZQBRYZWUSYKOONCEJLNGDTZUJZUIPBMOIBRAVSAQTDZMBSEKDGTFUFHPJIANRULQR");
    msg.state = 61U;

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
    msg.setTimeStamp(0.9532648519292181);
    msg.setSource(41488U);
    msg.setSourceEntity(185U);
    msg.setDestination(37286U);
    msg.setDestinationEntity(197U);
    msg.name.assign("BXRYLBPDKGZKSDESAOEJWWBWRQDNLOKLFOKRNFPRZLEZTWAUYCTDIQEKFUXUVGYXAXHIISHAFHCCGYTGQUFCBABKFQOEWRHJVZFGNSRFEJVQSPHXMTBOOHYPKHSNOCCGTESULIMVMXGPWWMQNMQRLWLNTPTBQ");
    msg.state = 121U;

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
    msg.setTimeStamp(0.35107538670821303);
    msg.setSource(48234U);
    msg.setSourceEntity(27U);
    msg.setDestination(8697U);
    msg.setDestinationEntity(60U);
    msg.name.assign("HPBIBSGTZODYJWLEDDUDNOEKSWRPSUUBDAQZMJLRBRNKPDINEZHEGLHUJXCKPIFAMVCCKXNLR");
    msg.value = 227U;

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
    msg.setTimeStamp(0.18568719240435339);
    msg.setSource(31998U);
    msg.setSourceEntity(29U);
    msg.setDestination(31644U);
    msg.setDestinationEntity(120U);
    msg.name.assign("BXRPGDGLEUQVBKOXVIISKTOZKFIOOKJTOSECKUUQQJTLLVFRZDYLDBSUHJLBMGYHPWIGCWHLESAUYUZYFXBEHPRHEEYPKQTHRCIOFBZJDNLNJAFFHTQZFZKFRAHSCRMWJACDCEOPJZNTJHQWFGVMYN");
    msg.value = 83U;

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
    msg.setTimeStamp(0.3589266201339568);
    msg.setSource(9696U);
    msg.setSourceEntity(85U);
    msg.setDestination(28149U);
    msg.setDestinationEntity(150U);
    msg.name.assign("OXZBAUEQVBBBTFHXCGVYKTDEQOTKQIAQMRDLHCFJDWZBUGBZLLSPKQFNA");
    msg.value = 18U;

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
    msg.setTimeStamp(0.11645473311587862);
    msg.setSource(64477U);
    msg.setSourceEntity(32U);
    msg.setDestination(39539U);
    msg.setDestinationEntity(145U);
    msg.name.assign("IGXBVTLUJKRDWONESODKZUWKQTKQFRHTFLPBDREGVLVJSXVCOAQAFGIYGXXVAHNJ");

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
    msg.setTimeStamp(0.3874587737500941);
    msg.setSource(56102U);
    msg.setSourceEntity(115U);
    msg.setDestination(30817U);
    msg.setDestinationEntity(242U);
    msg.name.assign("JPVYCQIYOJBMLTILQROXNNDKXZHGQZJOISENPFDWFSFKGWHCYAJMYUGHTKHOTUSGLENQGEVMWZVIBIKPEWFXJHCAXCBDDFDWSAVNKEZXJRROZNZSJPJYCHCQGUIGVIOTPBOMKUFTBLAKBKYADZWXVWAEIUDCBQRVMXUKYEPTEJFLNFUXOJSLNVSRSMPQHGOKYMLCXMVWPUNYSGEWZRRNAWHAURIGD");

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
    msg.setTimeStamp(0.9738307776998749);
    msg.setSource(52022U);
    msg.setSourceEntity(219U);
    msg.setDestination(12881U);
    msg.setDestinationEntity(50U);
    msg.name.assign("CQXYGFYBWCDIGTQLTPFPLUWOUZRSGANLOQHDMAJTDNKCCOYTJLACMFRZCUSVQXMRBVEXQPUUYJQFIHLZPFOTWAMSBEFEHIRSBXNJVSEPZKWIR");

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
    msg.setTimeStamp(0.5160693541689717);
    msg.setSource(52350U);
    msg.setSourceEntity(16U);
    msg.setDestination(20626U);
    msg.setDestinationEntity(53U);
    msg.name.assign("ZBQWXFJPACBVOWSXNWLRGOCOXFONQLMRYMGPLNAEQOCDRJHPTBHLEPUHSDKQCBFUMVWNBJRKDKHYCRQIJNELHKESTPYOTCTGLGVEEJIECSGDMXBRPQKBAKCMEBAISHKPVUGSUFDHJZWBFSYYXVTZIUTKGARIOAZYRDGRAPAATXNZTQVZFNFWMOCKO");
    msg.value = 242U;

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
    msg.setTimeStamp(0.6014172929992672);
    msg.setSource(65205U);
    msg.setSourceEntity(231U);
    msg.setDestination(64297U);
    msg.setDestinationEntity(107U);
    msg.name.assign("ZGCHMGSBUBOQDWOIZXTTDKSJFLYVLZPNMVZGPBYAGYQXOVJZIOPJYGQRNMHDVLUHURFKFRZALFGDPEJJPIIDBEHQEPOQYJSPEZFXWCYACNREZSXXDJTGKBSTRBOBKETCCKPNNFMRMHWMMIANUADDHLKYTVZWCQIULWFZWVRLEYSLSJMBIOCUAVBTAEFHHWCPGXUTJPEXMKXLKCSQOABDOUKJILTVHYOC");
    msg.value = 112U;

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
    msg.setTimeStamp(0.47590538555495143);
    msg.setSource(6894U);
    msg.setSourceEntity(151U);
    msg.setDestination(11524U);
    msg.setDestinationEntity(116U);
    msg.name.assign("SEBFAQKKNPSGPRBYTLKBLVASBOFNCAFQVPIFHLCWRZMXDUOLWKUBZXZAYNWZVZJVMFSWQXJUWYSRSQCJVNWBHTERZHBOYLPBKINUHRCZUQSCFTSGYMGHRKGBQUVHVAMACMTGXRORUFIMGYSGKUCDMNKMFUTGPDSEZNDCTNJJOAPPZIVMKCLOLQJTTE");
    msg.value = 188U;

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
    msg.setTimeStamp(0.13276814167380668);
    msg.setSource(20424U);
    msg.setSourceEntity(12U);
    msg.setDestination(37624U);
    msg.setDestinationEntity(6U);
    msg.id = 161U;
    msg.period = 4064739461U;
    msg.duty_cycle = 3138762382U;

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
    msg.setTimeStamp(0.614165177789921);
    msg.setSource(30686U);
    msg.setSourceEntity(83U);
    msg.setDestination(8920U);
    msg.setDestinationEntity(120U);
    msg.id = 232U;
    msg.period = 3609670616U;
    msg.duty_cycle = 1084742045U;

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
    msg.setTimeStamp(0.054565112301319885);
    msg.setSource(62195U);
    msg.setSourceEntity(127U);
    msg.setDestination(52688U);
    msg.setDestinationEntity(116U);
    msg.id = 191U;
    msg.period = 2768607754U;
    msg.duty_cycle = 1024903078U;

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
    msg.setTimeStamp(0.051274126832545286);
    msg.setSource(29641U);
    msg.setSourceEntity(16U);
    msg.setDestination(43107U);
    msg.setDestinationEntity(131U);
    msg.id = 147U;
    msg.period = 3963660022U;
    msg.duty_cycle = 2092500847U;

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
    msg.setTimeStamp(0.8157024064735924);
    msg.setSource(1509U);
    msg.setSourceEntity(219U);
    msg.setDestination(23669U);
    msg.setDestinationEntity(124U);
    msg.id = 53U;
    msg.period = 3675912692U;
    msg.duty_cycle = 4228535888U;

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
    msg.setTimeStamp(0.3537198890218667);
    msg.setSource(1951U);
    msg.setSourceEntity(102U);
    msg.setDestination(1402U);
    msg.setDestinationEntity(29U);
    msg.id = 72U;
    msg.period = 2740335609U;
    msg.duty_cycle = 1422951850U;

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
    msg.setTimeStamp(0.7582402768171526);
    msg.setSource(58564U);
    msg.setSourceEntity(44U);
    msg.setDestination(4794U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.7484233035364067;
    msg.lon = 0.25477534542332636;
    msg.height = 0.18786713431001345;
    msg.x = 0.6772377469635308;
    msg.y = 0.4076997640243618;
    msg.z = 0.1319439084776023;
    msg.phi = 0.7233473649253435;
    msg.theta = 0.5545881512982337;
    msg.psi = 0.5933193668736481;
    msg.u = 0.6533429374392133;
    msg.v = 0.1175233223118417;
    msg.w = 0.13702681558959917;
    msg.vx = 0.37479308901975306;
    msg.vy = 0.024224526417015668;
    msg.vz = 0.0888788849924711;
    msg.p = 0.16961772817651888;
    msg.q = 0.015176957647403455;
    msg.r = 0.4061807980254355;
    msg.depth = 0.019456258425707418;
    msg.alt = 0.47688273767674205;

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
    msg.setTimeStamp(0.3308260708491969);
    msg.setSource(21969U);
    msg.setSourceEntity(104U);
    msg.setDestination(26564U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.34661860912452547;
    msg.lon = 0.9305587739046217;
    msg.height = 0.9290265628627973;
    msg.x = 0.7853769531773472;
    msg.y = 0.7121515386516237;
    msg.z = 0.040927055743102514;
    msg.phi = 0.7240561023168163;
    msg.theta = 0.31261382334620613;
    msg.psi = 0.8781634006118401;
    msg.u = 0.732208916346648;
    msg.v = 0.5808709434597622;
    msg.w = 0.2295697840244988;
    msg.vx = 0.3402425115842391;
    msg.vy = 0.7532607646352292;
    msg.vz = 0.3230308083342225;
    msg.p = 0.057677378493155795;
    msg.q = 0.206062269676078;
    msg.r = 0.7868902600546039;
    msg.depth = 0.16403965707345436;
    msg.alt = 0.7182377020557739;

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
    msg.setTimeStamp(0.06117449161972366);
    msg.setSource(43352U);
    msg.setSourceEntity(94U);
    msg.setDestination(62763U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.3336545160148271;
    msg.lon = 0.40131035434966666;
    msg.height = 0.08863361316456608;
    msg.x = 0.7937742638896614;
    msg.y = 0.8516259802005113;
    msg.z = 0.019744104709277566;
    msg.phi = 0.10015642141480774;
    msg.theta = 0.3855054629752215;
    msg.psi = 0.8424105678055522;
    msg.u = 0.9917668885404441;
    msg.v = 0.23465467010648533;
    msg.w = 0.703882014853401;
    msg.vx = 0.5827920028030155;
    msg.vy = 0.4936589091718464;
    msg.vz = 0.7969616530568763;
    msg.p = 0.6086879329152479;
    msg.q = 0.7841340359451899;
    msg.r = 0.17276376763070822;
    msg.depth = 0.8044365620521124;
    msg.alt = 0.9063108963895442;

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
    msg.setTimeStamp(0.34105559221358783);
    msg.setSource(15759U);
    msg.setSourceEntity(242U);
    msg.setDestination(64528U);
    msg.setDestinationEntity(48U);
    msg.x = 0.8118792816332678;
    msg.y = 0.9531818556453273;
    msg.z = 0.22032248949530409;

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
    msg.setTimeStamp(0.3276294272137137);
    msg.setSource(50630U);
    msg.setSourceEntity(7U);
    msg.setDestination(3656U);
    msg.setDestinationEntity(217U);
    msg.x = 0.5749537350870383;
    msg.y = 0.471931828248059;
    msg.z = 0.3357414403305936;

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
    msg.setTimeStamp(0.25352572030560927);
    msg.setSource(28074U);
    msg.setSourceEntity(144U);
    msg.setDestination(44652U);
    msg.setDestinationEntity(233U);
    msg.x = 0.3521267415621724;
    msg.y = 0.850856612402288;
    msg.z = 0.31262484724626294;

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
    msg.setTimeStamp(0.8456550979892697);
    msg.setSource(42986U);
    msg.setSourceEntity(142U);
    msg.setDestination(63945U);
    msg.setDestinationEntity(221U);
    msg.value = 0.512240581478988;

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
    msg.setTimeStamp(0.03774543168064981);
    msg.setSource(22740U);
    msg.setSourceEntity(208U);
    msg.setDestination(24623U);
    msg.setDestinationEntity(148U);
    msg.value = 0.5224478751276547;

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
    msg.setTimeStamp(0.7617269725732357);
    msg.setSource(44046U);
    msg.setSourceEntity(59U);
    msg.setDestination(41278U);
    msg.setDestinationEntity(35U);
    msg.value = 0.26230572880369707;

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
    msg.setTimeStamp(0.8476669496972488);
    msg.setSource(35258U);
    msg.setSourceEntity(235U);
    msg.setDestination(24794U);
    msg.setDestinationEntity(254U);
    msg.value = 0.351570791652423;

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
    msg.setTimeStamp(0.48451668845013707);
    msg.setSource(63663U);
    msg.setSourceEntity(79U);
    msg.setDestination(19439U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7351160945228321;

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
    msg.setTimeStamp(0.9069980916138247);
    msg.setSource(41829U);
    msg.setSourceEntity(51U);
    msg.setDestination(61664U);
    msg.setDestinationEntity(252U);
    msg.value = 0.7724647008174145;

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
    msg.setTimeStamp(0.28075124158494047);
    msg.setSource(24187U);
    msg.setSourceEntity(202U);
    msg.setDestination(63139U);
    msg.setDestinationEntity(241U);
    msg.x = 0.771538583839427;
    msg.y = 0.918265547827527;
    msg.z = 0.6105005885718517;
    msg.phi = 0.4710684248049566;
    msg.theta = 0.5214289056390677;
    msg.psi = 0.9556075241884717;
    msg.p = 0.3046383591905618;
    msg.q = 0.2969170103773803;
    msg.r = 0.3819034630033401;
    msg.u = 0.9757199952641901;
    msg.v = 0.975146164376674;
    msg.w = 0.8749633401567147;
    msg.bias_psi = 0.06875685632419914;
    msg.bias_r = 0.572257061849168;

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
    msg.setTimeStamp(0.25958124312009734);
    msg.setSource(52920U);
    msg.setSourceEntity(18U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(177U);
    msg.x = 0.14037571113491498;
    msg.y = 0.9715806899752205;
    msg.z = 0.9138187237232825;
    msg.phi = 0.4024120463172187;
    msg.theta = 0.9752599510856244;
    msg.psi = 0.02603056744363097;
    msg.p = 0.0891145233330305;
    msg.q = 0.47490902125708534;
    msg.r = 0.9458399728375069;
    msg.u = 0.13121286936498566;
    msg.v = 0.9189683030586198;
    msg.w = 0.3899621687889403;
    msg.bias_psi = 0.30162107881159117;
    msg.bias_r = 0.27834972887434506;

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
    msg.setTimeStamp(0.8823907451623552);
    msg.setSource(56964U);
    msg.setSourceEntity(22U);
    msg.setDestination(3394U);
    msg.setDestinationEntity(165U);
    msg.x = 0.03276848516019992;
    msg.y = 0.15720282575299582;
    msg.z = 0.6500294389726853;
    msg.phi = 0.6917650706034429;
    msg.theta = 0.7114986928626588;
    msg.psi = 0.9789963296181513;
    msg.p = 0.054792069678684;
    msg.q = 0.5411216203291408;
    msg.r = 0.09693049643666185;
    msg.u = 0.8240389880600681;
    msg.v = 0.8491598798777923;
    msg.w = 0.8097785144902704;
    msg.bias_psi = 0.9973020671649252;
    msg.bias_r = 0.5196761151795682;

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
    msg.setTimeStamp(0.9359834728098213);
    msg.setSource(18161U);
    msg.setSourceEntity(71U);
    msg.setDestination(55018U);
    msg.setDestinationEntity(105U);
    msg.bias_psi = 0.3911623362167004;
    msg.bias_r = 0.9748126374414299;
    msg.cog = 0.555019163077169;
    msg.cyaw = 0.9980948967807618;
    msg.lbl_rej_level = 0.713700195977274;
    msg.gps_rej_level = 0.3836459427229445;
    msg.custom_x = 0.061088083289531414;
    msg.custom_y = 0.9289624475829537;
    msg.custom_z = 0.39403812253566306;

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
    msg.setTimeStamp(0.3873112858610095);
    msg.setSource(55145U);
    msg.setSourceEntity(173U);
    msg.setDestination(43020U);
    msg.setDestinationEntity(178U);
    msg.bias_psi = 0.6511283877457792;
    msg.bias_r = 0.4576406858722819;
    msg.cog = 0.14487408593697326;
    msg.cyaw = 0.3173023789160162;
    msg.lbl_rej_level = 0.13938544408844156;
    msg.gps_rej_level = 0.1735476640104079;
    msg.custom_x = 0.27757474710351837;
    msg.custom_y = 0.5771913591661123;
    msg.custom_z = 0.9644228958490729;

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
    msg.setTimeStamp(0.9984017208021932);
    msg.setSource(36199U);
    msg.setSourceEntity(170U);
    msg.setDestination(4859U);
    msg.setDestinationEntity(4U);
    msg.bias_psi = 0.5872468982700555;
    msg.bias_r = 0.7099580020346002;
    msg.cog = 0.5074461189042677;
    msg.cyaw = 0.23465784168988657;
    msg.lbl_rej_level = 0.1933652752265309;
    msg.gps_rej_level = 0.569896482660676;
    msg.custom_x = 0.2626163942408736;
    msg.custom_y = 0.8454078626691013;
    msg.custom_z = 0.8207937419899521;

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
    msg.setTimeStamp(0.8901203332306725);
    msg.setSource(64106U);
    msg.setSourceEntity(237U);
    msg.setDestination(33304U);
    msg.setDestinationEntity(29U);
    msg.utc_time = 0.12693143077589386;
    msg.reason = 94U;

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
    msg.setTimeStamp(0.8666598551565305);
    msg.setSource(21974U);
    msg.setSourceEntity(96U);
    msg.setDestination(17159U);
    msg.setDestinationEntity(131U);
    msg.utc_time = 0.37391769828524735;
    msg.reason = 80U;

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
    msg.setTimeStamp(0.2593847963001724);
    msg.setSource(64625U);
    msg.setSourceEntity(12U);
    msg.setDestination(21015U);
    msg.setDestinationEntity(26U);
    msg.utc_time = 0.8373069635328143;
    msg.reason = 23U;

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
    msg.setTimeStamp(0.0539870766255125);
    msg.setSource(53428U);
    msg.setSourceEntity(112U);
    msg.setDestination(39495U);
    msg.setDestinationEntity(198U);
    msg.id = 16U;
    msg.range = 0.9670888834239745;
    msg.acceptance = 40U;

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
    msg.setTimeStamp(0.3974025778155935);
    msg.setSource(46138U);
    msg.setSourceEntity(238U);
    msg.setDestination(2743U);
    msg.setDestinationEntity(22U);
    msg.id = 199U;
    msg.range = 0.9591850213255715;
    msg.acceptance = 140U;

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
    msg.setTimeStamp(0.4443807354805369);
    msg.setSource(36476U);
    msg.setSourceEntity(57U);
    msg.setDestination(35216U);
    msg.setDestinationEntity(112U);
    msg.id = 112U;
    msg.range = 0.7506616055935591;
    msg.acceptance = 194U;

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
    msg.setTimeStamp(0.38137978925694127);
    msg.setSource(12187U);
    msg.setSourceEntity(192U);
    msg.setDestination(62425U);
    msg.setDestinationEntity(124U);
    msg.type = 230U;
    msg.reason = 110U;
    msg.value = 0.12456895556494729;
    msg.timestep = 0.010020332808641785;

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
    msg.setTimeStamp(0.8614928855213012);
    msg.setSource(7920U);
    msg.setSourceEntity(102U);
    msg.setDestination(1466U);
    msg.setDestinationEntity(176U);
    msg.type = 215U;
    msg.reason = 95U;
    msg.value = 0.6546177590828776;
    msg.timestep = 0.7561860564743064;

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
    msg.setTimeStamp(0.18764805004034002);
    msg.setSource(2752U);
    msg.setSourceEntity(204U);
    msg.setDestination(56247U);
    msg.setDestinationEntity(212U);
    msg.type = 151U;
    msg.reason = 217U;
    msg.value = 0.49743748540319754;
    msg.timestep = 0.9019818604576512;

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
    msg.setTimeStamp(0.5930909542989912);
    msg.setSource(46474U);
    msg.setSourceEntity(49U);
    msg.setDestination(19183U);
    msg.setDestinationEntity(97U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KJKIHBVPTWZMTGEXDSBLYCTDJHVNIUXMVXZLYVSOBYQQVRCUYXRDKFKZJQBWSADHCUFJGWFZLRTWAFCUYOMAFPAQ");
    tmp_msg_0.lat = 0.691136268129994;
    tmp_msg_0.lon = 0.512323981094999;
    tmp_msg_0.depth = 0.2531249380666618;
    tmp_msg_0.query_channel = 111U;
    tmp_msg_0.reply_channel = 51U;
    tmp_msg_0.transponder_delay = 2U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4695727051297227;
    msg.y = 0.06137200602733561;
    msg.var_x = 0.8745208270047579;
    msg.var_y = 0.014196481734000455;
    msg.distance = 0.5552551151277173;

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
    msg.setTimeStamp(0.6993040828295799);
    msg.setSource(5413U);
    msg.setSourceEntity(11U);
    msg.setDestination(40380U);
    msg.setDestinationEntity(186U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OPOHDLSFATXWKXVYAGXXUEBQMGIGA");
    tmp_msg_0.lat = 0.9312840123017284;
    tmp_msg_0.lon = 0.29091184864798914;
    tmp_msg_0.depth = 0.37542066571949684;
    tmp_msg_0.query_channel = 91U;
    tmp_msg_0.reply_channel = 13U;
    tmp_msg_0.transponder_delay = 208U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.1912886943135913;
    msg.y = 0.15354322271059972;
    msg.var_x = 0.784204517778944;
    msg.var_y = 0.34025122783024175;
    msg.distance = 0.18900395480374876;

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
    msg.setTimeStamp(0.7990591966345325);
    msg.setSource(59807U);
    msg.setSourceEntity(170U);
    msg.setDestination(258U);
    msg.setDestinationEntity(165U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UYZSYADUZHJEMMOOJGOYTJYMXEYBUYIVABPFDHWVFPONHKHUUCLHBLSLQYONPRKVODXLF");
    tmp_msg_0.lat = 0.12255919648163971;
    tmp_msg_0.lon = 0.6034948699962882;
    tmp_msg_0.depth = 0.6775122926053605;
    tmp_msg_0.query_channel = 206U;
    tmp_msg_0.reply_channel = 33U;
    tmp_msg_0.transponder_delay = 188U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4710237668544367;
    msg.y = 0.7637577416316083;
    msg.var_x = 0.34858135552588276;
    msg.var_y = 0.5385539755395491;
    msg.distance = 0.5576759420217061;

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
    msg.setTimeStamp(0.9447935541917848);
    msg.setSource(36691U);
    msg.setSourceEntity(67U);
    msg.setDestination(49313U);
    msg.setDestinationEntity(172U);
    msg.state = 66U;

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
    msg.setTimeStamp(0.24147905846679107);
    msg.setSource(10732U);
    msg.setSourceEntity(91U);
    msg.setDestination(44022U);
    msg.setDestinationEntity(56U);
    msg.state = 175U;

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
    msg.setTimeStamp(0.839808040926278);
    msg.setSource(9477U);
    msg.setSourceEntity(215U);
    msg.setDestination(52773U);
    msg.setDestinationEntity(46U);
    msg.state = 239U;

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
    msg.setTimeStamp(0.8832098428190883);
    msg.setSource(33681U);
    msg.setSourceEntity(182U);
    msg.setDestination(55538U);
    msg.setDestinationEntity(58U);
    msg.x = 0.9368714495254103;
    msg.y = 0.3806658576592663;
    msg.z = 0.7219688406249971;

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
    msg.setTimeStamp(0.40491397687533004);
    msg.setSource(65010U);
    msg.setSourceEntity(236U);
    msg.setDestination(49763U);
    msg.setDestinationEntity(29U);
    msg.x = 0.14648541038523488;
    msg.y = 0.47146971241431446;
    msg.z = 0.22154478540579858;

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
    msg.setTimeStamp(0.42703578166435807);
    msg.setSource(40849U);
    msg.setSourceEntity(171U);
    msg.setDestination(10965U);
    msg.setDestinationEntity(30U);
    msg.x = 0.5320708272644206;
    msg.y = 0.7261875390594589;
    msg.z = 0.27120025409013315;

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
    msg.setTimeStamp(0.561641932104247);
    msg.setSource(34907U);
    msg.setSourceEntity(14U);
    msg.setDestination(64646U);
    msg.setDestinationEntity(99U);
    msg.va = 0.6118340421309328;
    msg.aoa = 0.7813624127648551;
    msg.ssa = 0.6124629178552427;

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
    msg.setTimeStamp(0.483502030909719);
    msg.setSource(38523U);
    msg.setSourceEntity(143U);
    msg.setDestination(16031U);
    msg.setDestinationEntity(168U);
    msg.va = 0.42442606592895593;
    msg.aoa = 0.3648568153536603;
    msg.ssa = 0.05838900966543081;

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
    msg.setTimeStamp(0.05277320302827193);
    msg.setSource(1335U);
    msg.setSourceEntity(13U);
    msg.setDestination(48674U);
    msg.setDestinationEntity(117U);
    msg.va = 0.5722588644334003;
    msg.aoa = 0.7498662611488504;
    msg.ssa = 0.8559988278952909;

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
    msg.setTimeStamp(0.10799778506227131);
    msg.setSource(19330U);
    msg.setSourceEntity(8U);
    msg.setDestination(26108U);
    msg.setDestinationEntity(16U);
    msg.value = 0.19815105637835684;

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
    msg.setTimeStamp(0.6073997780395469);
    msg.setSource(7833U);
    msg.setSourceEntity(214U);
    msg.setDestination(16715U);
    msg.setDestinationEntity(150U);
    msg.value = 0.33591839445056215;

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
    msg.setTimeStamp(0.8694246338178787);
    msg.setSource(15975U);
    msg.setSourceEntity(103U);
    msg.setDestination(20211U);
    msg.setDestinationEntity(240U);
    msg.value = 0.049952818576902036;

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
    msg.setTimeStamp(0.3475892910689029);
    msg.setSource(56838U);
    msg.setSourceEntity(137U);
    msg.setDestination(54242U);
    msg.setDestinationEntity(112U);
    msg.value = 0.8952924794123654;
    msg.z_units = 231U;

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
    msg.setTimeStamp(0.2329702549160646);
    msg.setSource(5702U);
    msg.setSourceEntity(64U);
    msg.setDestination(13698U);
    msg.setDestinationEntity(53U);
    msg.value = 0.057028893396468994;
    msg.z_units = 78U;

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
    msg.setTimeStamp(0.8557940601715658);
    msg.setSource(3498U);
    msg.setSourceEntity(138U);
    msg.setDestination(26234U);
    msg.setDestinationEntity(159U);
    msg.value = 0.05643393701963828;
    msg.z_units = 100U;

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
    msg.setTimeStamp(0.8049785395939223);
    msg.setSource(2218U);
    msg.setSourceEntity(26U);
    msg.setDestination(63735U);
    msg.setDestinationEntity(64U);
    msg.value = 0.9448261925977599;
    msg.speed_units = 167U;

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
    msg.setTimeStamp(0.3199526166376082);
    msg.setSource(56205U);
    msg.setSourceEntity(4U);
    msg.setDestination(20611U);
    msg.setDestinationEntity(94U);
    msg.value = 0.12390815989770798;
    msg.speed_units = 113U;

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
    msg.setTimeStamp(0.4762218168502593);
    msg.setSource(28398U);
    msg.setSourceEntity(45U);
    msg.setDestination(51989U);
    msg.setDestinationEntity(249U);
    msg.value = 0.6205634506709911;
    msg.speed_units = 180U;

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
    msg.setTimeStamp(0.5190303324520152);
    msg.setSource(47711U);
    msg.setSourceEntity(245U);
    msg.setDestination(58153U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7552291407413364;

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
    msg.setTimeStamp(0.3993924260806132);
    msg.setSource(35329U);
    msg.setSourceEntity(155U);
    msg.setDestination(2241U);
    msg.setDestinationEntity(148U);
    msg.value = 0.9695110010865153;

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
    msg.setTimeStamp(0.9733927110500644);
    msg.setSource(44028U);
    msg.setSourceEntity(237U);
    msg.setDestination(20352U);
    msg.setDestinationEntity(135U);
    msg.value = 0.3966199468920759;

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
    msg.setTimeStamp(0.25661589904938);
    msg.setSource(34785U);
    msg.setSourceEntity(199U);
    msg.setDestination(23998U);
    msg.setDestinationEntity(113U);
    msg.value = 0.41156148378571344;

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
    msg.setTimeStamp(0.5738428481950362);
    msg.setSource(53548U);
    msg.setSourceEntity(180U);
    msg.setDestination(21965U);
    msg.setDestinationEntity(56U);
    msg.value = 0.33508959815248496;

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
    msg.setTimeStamp(0.22453218970602118);
    msg.setSource(36086U);
    msg.setSourceEntity(126U);
    msg.setDestination(39031U);
    msg.setDestinationEntity(200U);
    msg.value = 0.6643841934990153;

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
    msg.setTimeStamp(0.7202530423732251);
    msg.setSource(26257U);
    msg.setSourceEntity(181U);
    msg.setDestination(7690U);
    msg.setDestinationEntity(87U);
    msg.value = 0.9965583636027869;

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
    msg.setTimeStamp(0.24611284899123598);
    msg.setSource(19734U);
    msg.setSourceEntity(197U);
    msg.setDestination(60477U);
    msg.setDestinationEntity(11U);
    msg.value = 0.45808807202184654;

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
    msg.setTimeStamp(0.22614373434889812);
    msg.setSource(19794U);
    msg.setSourceEntity(138U);
    msg.setDestination(57406U);
    msg.setDestinationEntity(167U);
    msg.value = 0.9724589988122768;

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
    msg.setTimeStamp(0.5118170020873739);
    msg.setSource(40479U);
    msg.setSourceEntity(59U);
    msg.setDestination(17529U);
    msg.setDestinationEntity(233U);
    msg.path_ref = 4067956398U;
    msg.start_lat = 0.9020847940769107;
    msg.start_lon = 0.4504913002473532;
    msg.start_z = 0.8084828434108834;
    msg.start_z_units = 171U;
    msg.end_lat = 0.14925389860383576;
    msg.end_lon = 0.8550004697518248;
    msg.end_z = 0.15742007803813218;
    msg.end_z_units = 91U;
    msg.speed = 0.4222325645813101;
    msg.speed_units = 235U;
    msg.lradius = 0.9869234467301143;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.24337586267764766);
    msg.setSource(1960U);
    msg.setSourceEntity(67U);
    msg.setDestination(46632U);
    msg.setDestinationEntity(236U);
    msg.path_ref = 799163831U;
    msg.start_lat = 0.8458739648307272;
    msg.start_lon = 0.3770575535386096;
    msg.start_z = 0.6205015876030467;
    msg.start_z_units = 224U;
    msg.end_lat = 0.8289060442457722;
    msg.end_lon = 0.486886183778346;
    msg.end_z = 0.9281136751892035;
    msg.end_z_units = 36U;
    msg.speed = 0.4268084499619639;
    msg.speed_units = 162U;
    msg.lradius = 0.2726906169843636;
    msg.flags = 152U;

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
    msg.setTimeStamp(0.489865379777047);
    msg.setSource(64665U);
    msg.setSourceEntity(209U);
    msg.setDestination(16628U);
    msg.setDestinationEntity(136U);
    msg.path_ref = 2464427390U;
    msg.start_lat = 0.059801899823721194;
    msg.start_lon = 0.2998347140187516;
    msg.start_z = 0.12439543154618438;
    msg.start_z_units = 81U;
    msg.end_lat = 0.26342932099355243;
    msg.end_lon = 0.4110801036813936;
    msg.end_z = 0.9010225811313677;
    msg.end_z_units = 97U;
    msg.speed = 0.630511747547746;
    msg.speed_units = 238U;
    msg.lradius = 0.4195109859683248;
    msg.flags = 67U;

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
    msg.setTimeStamp(0.13455707199426892);
    msg.setSource(48703U);
    msg.setSourceEntity(11U);
    msg.setDestination(10550U);
    msg.setDestinationEntity(178U);
    msg.x = 0.32987063511511894;
    msg.y = 0.9633304012817395;
    msg.z = 0.9364259313570988;
    msg.k = 0.34095520783258015;
    msg.m = 0.6623231470205313;
    msg.n = 0.9445116800339748;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.12352306808584756);
    msg.setSource(30690U);
    msg.setSourceEntity(165U);
    msg.setDestination(6326U);
    msg.setDestinationEntity(107U);
    msg.x = 0.43162115119724176;
    msg.y = 0.8610449203448991;
    msg.z = 0.401567014299017;
    msg.k = 0.9881030060266284;
    msg.m = 0.06411072945488028;
    msg.n = 0.12080887263617357;
    msg.flags = 79U;

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
    msg.setTimeStamp(0.5275792528839701);
    msg.setSource(51572U);
    msg.setSourceEntity(74U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(108U);
    msg.x = 0.8321085809493887;
    msg.y = 0.4071446872613129;
    msg.z = 0.8175049130544525;
    msg.k = 0.7380770243776985;
    msg.m = 0.333617764770187;
    msg.n = 0.8342877575025738;
    msg.flags = 37U;

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
    msg.setTimeStamp(0.19584456417569818);
    msg.setSource(27937U);
    msg.setSourceEntity(15U);
    msg.setDestination(26431U);
    msg.setDestinationEntity(3U);
    msg.value = 0.7315902320048043;

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
    msg.setTimeStamp(0.6950158064941665);
    msg.setSource(35093U);
    msg.setSourceEntity(235U);
    msg.setDestination(28877U);
    msg.setDestinationEntity(63U);
    msg.value = 0.21590349701702904;

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
    msg.setTimeStamp(0.11382173469771961);
    msg.setSource(57387U);
    msg.setSourceEntity(46U);
    msg.setDestination(54406U);
    msg.setDestinationEntity(0U);
    msg.value = 0.9217609466985274;

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
    msg.setTimeStamp(0.451077495567625);
    msg.setSource(18552U);
    msg.setSourceEntity(114U);
    msg.setDestination(7022U);
    msg.setDestinationEntity(205U);
    msg.u = 0.21008443275300992;
    msg.v = 0.6749236641881969;
    msg.w = 0.8386398770998761;
    msg.p = 0.6834468895651481;
    msg.q = 0.17031298491636826;
    msg.r = 0.31789024450826875;
    msg.flags = 6U;

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
    msg.setTimeStamp(0.09826479767237084);
    msg.setSource(20642U);
    msg.setSourceEntity(254U);
    msg.setDestination(42909U);
    msg.setDestinationEntity(174U);
    msg.u = 0.6079469655691531;
    msg.v = 0.3835375222499584;
    msg.w = 0.2409190746348855;
    msg.p = 0.37017638651062423;
    msg.q = 0.45696839238072484;
    msg.r = 0.6007866636521537;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.32850186902856204);
    msg.setSource(41856U);
    msg.setSourceEntity(80U);
    msg.setDestination(52173U);
    msg.setDestinationEntity(223U);
    msg.u = 0.19038186468914164;
    msg.v = 0.0749540902712238;
    msg.w = 0.6208555036887047;
    msg.p = 0.5935554828729361;
    msg.q = 0.09705447798562072;
    msg.r = 0.9093688840428625;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.05964291709359448);
    msg.setSource(35769U);
    msg.setSourceEntity(169U);
    msg.setDestination(53309U);
    msg.setDestinationEntity(241U);
    msg.path_ref = 849150479U;
    msg.start_lat = 0.18813998112649866;
    msg.start_lon = 0.8018441418056852;
    msg.start_z = 0.731331852019923;
    msg.start_z_units = 105U;
    msg.end_lat = 0.7010657692134615;
    msg.end_lon = 0.3649634140490672;
    msg.end_z = 0.5221471968952397;
    msg.end_z_units = 214U;
    msg.lradius = 0.13324481216252482;
    msg.flags = 43U;
    msg.x = 0.32891580056061964;
    msg.y = 0.18810259002486662;
    msg.z = 0.1707586299928303;
    msg.vx = 0.40785586998830936;
    msg.vy = 0.15053966952535358;
    msg.vz = 0.020469100442483068;
    msg.course_error = 0.2778258101465024;
    msg.eta = 47794U;

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
    msg.setTimeStamp(0.7934415342672675);
    msg.setSource(14266U);
    msg.setSourceEntity(108U);
    msg.setDestination(42233U);
    msg.setDestinationEntity(107U);
    msg.path_ref = 4085600928U;
    msg.start_lat = 0.08597005870371699;
    msg.start_lon = 0.2302542378184721;
    msg.start_z = 0.7089676449834168;
    msg.start_z_units = 1U;
    msg.end_lat = 0.8769005684572023;
    msg.end_lon = 0.14158439553129465;
    msg.end_z = 0.17860913235857845;
    msg.end_z_units = 60U;
    msg.lradius = 0.03343734373977314;
    msg.flags = 198U;
    msg.x = 0.8582121631780281;
    msg.y = 0.08746602927243285;
    msg.z = 0.6418988083636956;
    msg.vx = 0.4468256184033278;
    msg.vy = 0.4552245698401721;
    msg.vz = 0.9027884681051938;
    msg.course_error = 0.22491566099488192;
    msg.eta = 56554U;

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
    msg.setTimeStamp(0.4723051938073475);
    msg.setSource(35109U);
    msg.setSourceEntity(227U);
    msg.setDestination(37245U);
    msg.setDestinationEntity(127U);
    msg.path_ref = 3617467354U;
    msg.start_lat = 0.5966345658434361;
    msg.start_lon = 0.02527462348767029;
    msg.start_z = 0.6484368431482627;
    msg.start_z_units = 115U;
    msg.end_lat = 0.23586889249059406;
    msg.end_lon = 0.8446792540757874;
    msg.end_z = 0.6555340338084179;
    msg.end_z_units = 119U;
    msg.lradius = 0.9009047270790783;
    msg.flags = 194U;
    msg.x = 0.4063534881273214;
    msg.y = 0.27286994540402043;
    msg.z = 0.721369377131711;
    msg.vx = 0.5394637525071851;
    msg.vy = 0.9971196496664815;
    msg.vz = 0.5053652998928122;
    msg.course_error = 0.7971159836867596;
    msg.eta = 61243U;

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
    msg.setTimeStamp(0.750050503643477);
    msg.setSource(1652U);
    msg.setSourceEntity(4U);
    msg.setDestination(56620U);
    msg.setDestinationEntity(248U);
    msg.k = 0.7417194652491379;
    msg.m = 0.3176811403090376;
    msg.n = 0.6858500161140644;

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
    msg.setTimeStamp(0.13631504373878123);
    msg.setSource(57469U);
    msg.setSourceEntity(127U);
    msg.setDestination(4519U);
    msg.setDestinationEntity(238U);
    msg.k = 0.43628496344582346;
    msg.m = 0.3398336427922981;
    msg.n = 0.3413133241856756;

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
    msg.setTimeStamp(0.8007330076061911);
    msg.setSource(17001U);
    msg.setSourceEntity(173U);
    msg.setDestination(35713U);
    msg.setDestinationEntity(227U);
    msg.k = 0.9306997732505368;
    msg.m = 0.8971422022131088;
    msg.n = 0.10498625534537664;

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
    msg.setTimeStamp(0.45476182164908996);
    msg.setSource(37637U);
    msg.setSourceEntity(134U);
    msg.setDestination(36899U);
    msg.setDestinationEntity(76U);
    msg.p = 0.7183776542036937;
    msg.i = 0.584985210205651;
    msg.d = 0.6239040934924066;
    msg.a = 0.05711453048818582;

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
    msg.setTimeStamp(0.012546433554625813);
    msg.setSource(21827U);
    msg.setSourceEntity(211U);
    msg.setDestination(430U);
    msg.setDestinationEntity(15U);
    msg.p = 0.9601260600623186;
    msg.i = 0.6679608830227607;
    msg.d = 0.45805515993548607;
    msg.a = 0.05761860820618547;

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
    msg.setTimeStamp(0.7065064750328525);
    msg.setSource(34444U);
    msg.setSourceEntity(219U);
    msg.setDestination(25485U);
    msg.setDestinationEntity(64U);
    msg.p = 0.5880972871831659;
    msg.i = 0.30132512646940535;
    msg.d = 0.23933374516813533;
    msg.a = 0.9079762193509774;

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
    msg.setTimeStamp(0.10638121457480654);
    msg.setSource(64485U);
    msg.setSourceEntity(222U);
    msg.setDestination(48132U);
    msg.setDestinationEntity(103U);
    msg.op = 27U;

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
    msg.setTimeStamp(0.5688670156178945);
    msg.setSource(37069U);
    msg.setSourceEntity(178U);
    msg.setDestination(12130U);
    msg.setDestinationEntity(82U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.5087966424684581);
    msg.setSource(35903U);
    msg.setSourceEntity(76U);
    msg.setDestination(15428U);
    msg.setDestinationEntity(52U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.9596551364330969);
    msg.setSource(52883U);
    msg.setSourceEntity(29U);
    msg.setDestination(14580U);
    msg.setDestinationEntity(42U);
    msg.x = 0.07675534866554123;
    msg.y = 0.3442434612919043;
    msg.z = 0.3912231698222429;
    msg.vx = 0.6430641008503177;
    msg.vy = 0.2881009282305681;
    msg.vz = 0.5244377950122363;
    msg.ax = 0.2726410121440055;
    msg.ay = 0.805465985825421;
    msg.az = 0.1689908480535084;
    msg.flags = 43895U;

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
    msg.setTimeStamp(0.29883768558691626);
    msg.setSource(34359U);
    msg.setSourceEntity(123U);
    msg.setDestination(941U);
    msg.setDestinationEntity(1U);
    msg.x = 0.24742487264058843;
    msg.y = 0.47381736921530615;
    msg.z = 0.9921751845149412;
    msg.vx = 0.8219810210401369;
    msg.vy = 0.6313556249247702;
    msg.vz = 0.2770120687659552;
    msg.ax = 0.6910625616050149;
    msg.ay = 0.13782370364286078;
    msg.az = 0.3594581911671991;
    msg.flags = 58594U;

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
    msg.setTimeStamp(0.938680093375991);
    msg.setSource(20193U);
    msg.setSourceEntity(224U);
    msg.setDestination(14952U);
    msg.setDestinationEntity(181U);
    msg.x = 0.8784254829902456;
    msg.y = 0.38322893811392944;
    msg.z = 0.2419788977207198;
    msg.vx = 0.1849585148452838;
    msg.vy = 0.9508895892960254;
    msg.vz = 0.5874256731776011;
    msg.ax = 0.5385804906603915;
    msg.ay = 0.4093358414982903;
    msg.az = 0.08867097622781694;
    msg.flags = 51451U;

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
    msg.setTimeStamp(0.7949683444420745);
    msg.setSource(35360U);
    msg.setSourceEntity(112U);
    msg.setDestination(30852U);
    msg.setDestinationEntity(2U);
    msg.value = 0.25815483987633225;

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
    msg.setTimeStamp(0.8610258095143956);
    msg.setSource(167U);
    msg.setSourceEntity(72U);
    msg.setDestination(54073U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8214977159424786;

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
    msg.setTimeStamp(0.7068621792700035);
    msg.setSource(25977U);
    msg.setSourceEntity(249U);
    msg.setDestination(24259U);
    msg.setDestinationEntity(58U);
    msg.value = 0.05681465042130862;

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
    msg.setTimeStamp(0.12459442726843462);
    msg.setSource(49263U);
    msg.setSourceEntity(40U);
    msg.setDestination(55078U);
    msg.setDestinationEntity(217U);
    msg.timeout = 22299U;
    msg.lat = 0.7721673779450269;
    msg.lon = 0.922275488821721;
    msg.z = 0.5127475229107127;
    msg.z_units = 141U;
    msg.speed = 0.7829332344917348;
    msg.speed_units = 113U;
    msg.roll = 0.12801511185906456;
    msg.pitch = 0.8910416400342267;
    msg.yaw = 0.11482413263986302;
    msg.custom.assign("DAOIKXJHFLKXWGKGGFCHWUAQOLQLCTIEVIESYOTQBYJVWQXVQSSRPZKWZBRRGYENSLCMFVQGOALGPHVXUYWPWNKRBRXOFCVDFHKYUVIEOFXERCYMRUAXCPYIBJGTGTTNVSEOMDFI");

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
    msg.setTimeStamp(0.34102742151523924);
    msg.setSource(36239U);
    msg.setSourceEntity(77U);
    msg.setDestination(17239U);
    msg.setDestinationEntity(200U);
    msg.timeout = 7315U;
    msg.lat = 0.9432863225228024;
    msg.lon = 0.31816794867381193;
    msg.z = 0.8433517719932222;
    msg.z_units = 230U;
    msg.speed = 0.26165442917772097;
    msg.speed_units = 197U;
    msg.roll = 0.7324311981353899;
    msg.pitch = 0.2436466305086763;
    msg.yaw = 0.930720369779945;
    msg.custom.assign("LBMCIHHRYJKEEMAAPXSVIYPGJDRYKTWGAZLF");

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
    msg.setTimeStamp(0.27432177049799833);
    msg.setSource(25217U);
    msg.setSourceEntity(151U);
    msg.setDestination(25853U);
    msg.setDestinationEntity(235U);
    msg.timeout = 17985U;
    msg.lat = 0.9534360539895439;
    msg.lon = 0.5877688069450706;
    msg.z = 0.43049660531487044;
    msg.z_units = 43U;
    msg.speed = 0.34263872665496087;
    msg.speed_units = 10U;
    msg.roll = 0.7292416668007953;
    msg.pitch = 0.6571767984296124;
    msg.yaw = 0.752191371087761;
    msg.custom.assign("NJAJYEQXWWREKATRITKYJLZWCHYKCKSYFHMFXZQGTWAOOJPUQHZTTJGBNVXYYRBAQNDSRMGSEHDCKIFVCHCTEOXRFEPGJNLQOASEKLQKRXNGYWEGMAIMSITDZUJHQTMUKLBSYKIBVGLCFNOZMZGBSLMPV");

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
    msg.setTimeStamp(0.9421386944206835);
    msg.setSource(4930U);
    msg.setSourceEntity(177U);
    msg.setDestination(11403U);
    msg.setDestinationEntity(102U);
    msg.timeout = 20784U;
    msg.lat = 0.47964654748215285;
    msg.lon = 0.8822530774830284;
    msg.z = 0.41388910011263025;
    msg.z_units = 236U;
    msg.speed = 0.49256149812404204;
    msg.speed_units = 184U;
    msg.duration = 37080U;
    msg.radius = 0.4163461879507564;
    msg.flags = 38U;
    msg.custom.assign("CYNFWXIBHUOCBEQBRBZFATMVHWCQEOCGQYYOFGMCJEULNNUOVKZUWMIXATLQHPCRXWOBWYPYSOVTTBPDZXGXJLZGRSAIGUGKDONNPZTHELY");

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
    msg.setTimeStamp(0.32652353005360224);
    msg.setSource(33742U);
    msg.setSourceEntity(247U);
    msg.setDestination(37709U);
    msg.setDestinationEntity(216U);
    msg.timeout = 60452U;
    msg.lat = 0.14473039618973071;
    msg.lon = 0.5142443266134181;
    msg.z = 0.846301704976373;
    msg.z_units = 99U;
    msg.speed = 0.36136600186963963;
    msg.speed_units = 2U;
    msg.duration = 36814U;
    msg.radius = 0.48560419609423133;
    msg.flags = 183U;
    msg.custom.assign("ORNUIGZETXPNHLTVBQECFOPEEATVEJGVZJPCTGSJHZBSQKBMYOYHETKCKINKXINWWAFLJMZWFHAENJ");

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
    msg.setTimeStamp(0.9913604355002857);
    msg.setSource(34855U);
    msg.setSourceEntity(74U);
    msg.setDestination(65319U);
    msg.setDestinationEntity(51U);
    msg.timeout = 17696U;
    msg.lat = 0.10207869128437319;
    msg.lon = 0.8541576907518904;
    msg.z = 0.1511068930867746;
    msg.z_units = 122U;
    msg.speed = 0.5251807527229722;
    msg.speed_units = 79U;
    msg.duration = 59620U;
    msg.radius = 0.8600800039649676;
    msg.flags = 165U;
    msg.custom.assign("CNTWDBZJJUQUPQJOOHDPOFGOSIIYNEXMPHXDXFSWQNAWZUIWGXCFMKLBHIGKCPLFQJYURUBICNYVTVGDNQLMNCMFVARMPFFLQMSWDXAABEQFCVLGCHYLARTKIPKKRDLZWHTMBMQRRWTQF");

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
    msg.setTimeStamp(0.7372086309630093);
    msg.setSource(21264U);
    msg.setSourceEntity(118U);
    msg.setDestination(19117U);
    msg.setDestinationEntity(237U);
    msg.custom.assign("RNQZEOCMOZRIRHGSGPDQABTGVXDPRUBWNGPUBOILCAETHUWIVYFXCJQAXUG");

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
    msg.setTimeStamp(0.7064624878984307);
    msg.setSource(17344U);
    msg.setSourceEntity(185U);
    msg.setDestination(22094U);
    msg.setDestinationEntity(41U);
    msg.custom.assign("RRSOFBZEHMWGPTWVWYOVZIBAZIIEMTYVRXPVZCJSYKJAKRMTNKHNVXYYQZRKTPCASPXGQLNPYBFQUXATQQIDHJFPTIJNDYAUYWGOUEWDFFRTHDRGFAVIBUPWJT");

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
    msg.setTimeStamp(0.6329518422081901);
    msg.setSource(32955U);
    msg.setSourceEntity(31U);
    msg.setDestination(38765U);
    msg.setDestinationEntity(142U);
    msg.custom.assign("DLIUIKBPMWLQAZSCLTTHSRMLJJBFMPVPORKHZUNLPFAWTSYSCRPEHJPXVQYWUDCAGWXSBCXDTGSS");

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
    msg.setTimeStamp(0.6144803170934838);
    msg.setSource(40631U);
    msg.setSourceEntity(141U);
    msg.setDestination(35487U);
    msg.setDestinationEntity(231U);
    msg.timeout = 36607U;
    msg.lat = 0.10959476064413054;
    msg.lon = 0.04283494671642629;
    msg.z = 0.2616777840776042;
    msg.z_units = 146U;
    msg.duration = 7799U;
    msg.speed = 0.27172113240327156;
    msg.speed_units = 22U;
    msg.type = 93U;
    msg.radius = 0.013218847960967839;
    msg.length = 0.8026750435193225;
    msg.bearing = 0.25610682504450344;
    msg.direction = 179U;
    msg.custom.assign("DHRZCKEOAVIXVVIDAZNFBIQTSDSFWATJOFAEOTNKLUCTUAMWASFJYBFTUYTHPQYHIGSCCQXFIXPMXRSOYHHJJXSQQNYIMPBQGJQQXKPBUOZBEAOMKXUDGZQCOIKMWJQWETGWPDNUNBCMMAJPRUEHNUGTLYVLKDFMDRZCVBOLVBF");

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
    msg.setTimeStamp(0.8659521058371666);
    msg.setSource(21569U);
    msg.setSourceEntity(81U);
    msg.setDestination(18914U);
    msg.setDestinationEntity(66U);
    msg.timeout = 65007U;
    msg.lat = 0.016594889887710962;
    msg.lon = 0.0075533816938869736;
    msg.z = 0.020068271978475605;
    msg.z_units = 46U;
    msg.duration = 104U;
    msg.speed = 0.638144860976078;
    msg.speed_units = 148U;
    msg.type = 1U;
    msg.radius = 0.4869561894711617;
    msg.length = 0.5324088702515407;
    msg.bearing = 0.5460284862440772;
    msg.direction = 151U;
    msg.custom.assign("MAUTSYJCBBZETAQTPFLXNURCOYWSUHZCTWBQKIMSTXGFPRIUIHYDQMEHBJEZRFELIAKBNZFBNGVEJXKADNOSMLQIBELTJWEPDFTQKVUGKGUKIMQJKGURHJYFUVGLKMILWCVHO");

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
    msg.setTimeStamp(0.46365962367019753);
    msg.setSource(6524U);
    msg.setSourceEntity(109U);
    msg.setDestination(2958U);
    msg.setDestinationEntity(67U);
    msg.timeout = 14967U;
    msg.lat = 0.12853607908181508;
    msg.lon = 0.6662109833520476;
    msg.z = 0.4377675583872964;
    msg.z_units = 20U;
    msg.duration = 11373U;
    msg.speed = 0.7177335023639172;
    msg.speed_units = 105U;
    msg.type = 84U;
    msg.radius = 0.5309852131595788;
    msg.length = 0.7861901151325907;
    msg.bearing = 0.6693186810060816;
    msg.direction = 93U;
    msg.custom.assign("CREYFHEDUEUSQYZTJZZBWHPOGXKXELSOKCMDVGWOEYBGRJTOSHHMFBWXMGVRLHYLVJDNJURTOIULXKYZTMDQLRFDHVVASGLVSRTXIBSINNDMGXIDATOAECIFZFPQOBWTDRHUBBAKMKZLUMUINQ");

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
    msg.setTimeStamp(0.32651448289268503);
    msg.setSource(56403U);
    msg.setSourceEntity(110U);
    msg.setDestination(6075U);
    msg.setDestinationEntity(224U);
    msg.duration = 57321U;
    msg.custom.assign("QYPTLITTAVRVKCAHSCBMWLYQMDJDWXJCXWZUCLK");

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
    msg.setTimeStamp(0.8725238768488547);
    msg.setSource(55947U);
    msg.setSourceEntity(44U);
    msg.setDestination(49293U);
    msg.setDestinationEntity(137U);
    msg.duration = 15457U;
    msg.custom.assign("WXFKZXSJHIRGNQUHGVOIHPHEQWLWMRAJZKGPRCKBDYNEUICWISPPNZGVRHBMNGZKDZKXKESIFZXDDSDURWALITEBJBEQDABMVIHSQZZWSRIBYLNFOFQHYFNDAJOCSJDQLPCTLTVMCXCJFJXMOUMRJINTTWVYZENXPYUAYUBCCE");

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
    msg.setTimeStamp(0.9248404437964083);
    msg.setSource(35807U);
    msg.setSourceEntity(98U);
    msg.setDestination(29386U);
    msg.setDestinationEntity(172U);
    msg.duration = 20777U;
    msg.custom.assign("LSVBMKOHNVPZZEHDWLBIMBPPETBOOXKOZLQZTHRKYFWQUCJAOTCF");

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
    msg.setTimeStamp(0.8227988403169773);
    msg.setSource(30455U);
    msg.setSourceEntity(111U);
    msg.setDestination(9620U);
    msg.setDestinationEntity(167U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.2622173614759671;
    msg.control.set(tmp_msg_0);
    msg.duration = 45327U;
    msg.custom.assign("ZJSBDSLAVNNOKIRAADCPTKPDMWXLZHQNEFTUVOPEWNSVQPQSKBOBAGGMYTOUERZFAGIENRQMTVJSKSEMHAYDZOJLUYUWASFORVQHRVLHJVXNXGGPTOCFHJFXISLNCPKTRTVLAWXJGB");

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
    msg.setTimeStamp(0.07187849962996529);
    msg.setSource(55344U);
    msg.setSourceEntity(104U);
    msg.setDestination(34454U);
    msg.setDestinationEntity(186U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.6150617405369863;
    msg.control.set(tmp_msg_0);
    msg.duration = 30483U;
    msg.custom.assign("LFHAEEUQIZRSMCJHUNXRINKPD");

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
    msg.setTimeStamp(0.6134526595567239);
    msg.setSource(7933U);
    msg.setSourceEntity(184U);
    msg.setDestination(54109U);
    msg.setDestinationEntity(186U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.7960302443247737;
    msg.control.set(tmp_msg_0);
    msg.duration = 49788U;
    msg.custom.assign("TRHKEWUTRROIMLJVEAMHBFAVDTRZGYOUCOTVWUOPDKKNJASCDVZKDBPOXXGGHIANCLRVJEZRBNLZJBJYPKVWQJLLUGXNHTNAUARDDGFCNWCAVFFQGHCBQZMIEQZLKYQXUQQRNQBSEMYLKAWBSYOFNPTSGWSHWTHDTILLLGMXJDYJCCHCNXYEE");

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
    msg.setTimeStamp(0.8334611287145224);
    msg.setSource(64504U);
    msg.setSourceEntity(104U);
    msg.setDestination(65099U);
    msg.setDestinationEntity(58U);
    msg.timeout = 47320U;
    msg.lat = 0.5444224023346746;
    msg.lon = 0.1140934920436113;
    msg.z = 0.8203421465785093;
    msg.z_units = 70U;
    msg.speed = 0.26851078997931754;
    msg.speed_units = 13U;
    msg.bearing = 0.4375841837947896;
    msg.cross_angle = 0.6270550978259328;
    msg.width = 0.167659033897804;
    msg.length = 0.06438712749242015;
    msg.hstep = 0.8880480031525899;
    msg.coff = 81U;
    msg.alternation = 110U;
    msg.flags = 28U;
    msg.custom.assign("TMHQVTXCSNZASCZAWTYGTNAEMYBFPESSFGHBIDUUKKFUVJONDMVDHMGABVTQIDCCQINWEJPGIGWLJXSDGEYFWJTHUXNAONEBKJRPLXEYLVFXSLRNOJICOZYBZTLCMTFPNPKBLHLRIHMIJOHKGSKDEKFWRHOTVYNOUWVQJDFBYZXJBRVQLGGCDLDUPXBUMIFYLUAPHNVQXIXWWUKMH");

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
    msg.setTimeStamp(0.20930116802673981);
    msg.setSource(34738U);
    msg.setSourceEntity(168U);
    msg.setDestination(19398U);
    msg.setDestinationEntity(238U);
    msg.timeout = 57644U;
    msg.lat = 0.0856409742108254;
    msg.lon = 0.7034062062853723;
    msg.z = 0.6531438196272759;
    msg.z_units = 171U;
    msg.speed = 0.5419045101440181;
    msg.speed_units = 238U;
    msg.bearing = 0.8041016588423252;
    msg.cross_angle = 0.3470259162414283;
    msg.width = 0.3252289090048224;
    msg.length = 0.8803948999141927;
    msg.hstep = 0.8809946755550503;
    msg.coff = 66U;
    msg.alternation = 3U;
    msg.flags = 189U;
    msg.custom.assign("DKMFMPLFFNXPGPYANOZVZCQTNVKRTZPSDLBPMLJCRFLNTUFDRSWHIPUOSDUOCBIAVHMBXSSJHVTYKPZYGILANETEUWZKSIVJSDRCLAEEGGUAHJVMNYQAKUYFQIXILVVAXCTBPIYXMJQMXFGQWYTHBOCLHFACMTDCRONOZOGEFSAEOCRGYHXZCDLKZROQKFZDUTEHWUUGMPSRJBBEJJJDIOBYWKWLMEIRWGWGNQXQKDS");

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
    msg.setTimeStamp(0.01974464881829563);
    msg.setSource(34901U);
    msg.setSourceEntity(146U);
    msg.setDestination(34298U);
    msg.setDestinationEntity(199U);
    msg.timeout = 25310U;
    msg.lat = 0.17473516823607516;
    msg.lon = 0.47164103498417476;
    msg.z = 0.45729395998961164;
    msg.z_units = 153U;
    msg.speed = 0.18633373506608386;
    msg.speed_units = 48U;
    msg.bearing = 0.3870069160271222;
    msg.cross_angle = 0.23971867705477024;
    msg.width = 0.1566199715209622;
    msg.length = 0.13444315711914512;
    msg.hstep = 0.4615405383057858;
    msg.coff = 33U;
    msg.alternation = 113U;
    msg.flags = 217U;
    msg.custom.assign("YLJHNMOXPROHDWSNQRDBKBEVPICYHOUEWPRTPETNLZTIKBMAQSHQEKWMYPDZUVXOKAJHVQWLYFQWIVFECXCFULFRPXUDKQINHDIBOJZGRFGBKUCGCHEAFXYYDALBTEVGZTTXKFTHXWRHGZLDALCCUIWCVBXV");

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
    msg.setTimeStamp(0.9653498715399639);
    msg.setSource(9668U);
    msg.setSourceEntity(75U);
    msg.setDestination(45775U);
    msg.setDestinationEntity(231U);
    msg.timeout = 46668U;
    msg.lat = 0.5829596547481747;
    msg.lon = 0.6284045984678138;
    msg.z = 0.3324627697874172;
    msg.z_units = 127U;
    msg.speed = 0.5752431957667594;
    msg.speed_units = 137U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5147609039150821;
    tmp_msg_0.y = 0.7034997994066569;
    tmp_msg_0.z = 0.10472249992974558;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PTEQSBMGRPXFBKIFYAWTAVYNGISOBRLHWOQJZWMSMHRCBDCSOKWXSPDGNXAMJJVQTTKDIK");

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
    msg.setTimeStamp(0.3843573496067859);
    msg.setSource(14570U);
    msg.setSourceEntity(203U);
    msg.setDestination(43647U);
    msg.setDestinationEntity(66U);
    msg.timeout = 55328U;
    msg.lat = 0.844668101394285;
    msg.lon = 0.22833259625465974;
    msg.z = 0.5634865975630374;
    msg.z_units = 246U;
    msg.speed = 0.9820646856442615;
    msg.speed_units = 17U;
    msg.custom.assign("WCCCASFQTWJNPQNZCSHDTDIQRBTVRAXRLGBJORESVHPRLIOWGUQXQOFVLSYOKPZPLKXMX");

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
    msg.setTimeStamp(0.7367862066929822);
    msg.setSource(27004U);
    msg.setSourceEntity(128U);
    msg.setDestination(52383U);
    msg.setDestinationEntity(53U);
    msg.timeout = 63801U;
    msg.lat = 0.49171702472951495;
    msg.lon = 0.4355986498018577;
    msg.z = 0.22858475853556537;
    msg.z_units = 109U;
    msg.speed = 0.3559375931917297;
    msg.speed_units = 231U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.3368699649212219;
    tmp_msg_0.y = 0.9245705098225675;
    tmp_msg_0.z = 0.4476492053475768;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ARSUDLTWDYMFSQAXYXOLPDEBXXXGCPCHCSKDKNOENBKOKSWYLZTCTAYNZKRQYOPXDLOVRPMHUPAQGVWUGRSNHSPJNTEEVIPODNPKWZRWBKAJHFTIGGHLVZEAGSJQVMSKBQZCAUHIAEVJFHWCDSNFZMVQQJ");

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
    msg.setTimeStamp(0.9705238161326337);
    msg.setSource(8721U);
    msg.setSourceEntity(82U);
    msg.setDestination(58748U);
    msg.setDestinationEntity(134U);
    msg.x = 0.10560113593286957;
    msg.y = 0.15748935561546507;
    msg.z = 0.6087492198176695;

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
    msg.setTimeStamp(0.7854101084221902);
    msg.setSource(39738U);
    msg.setSourceEntity(28U);
    msg.setDestination(41885U);
    msg.setDestinationEntity(94U);
    msg.x = 0.9633329904609506;
    msg.y = 0.00022151679138693314;
    msg.z = 0.7352991068259097;

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
    msg.setTimeStamp(0.9272384152461556);
    msg.setSource(15096U);
    msg.setSourceEntity(57U);
    msg.setDestination(63986U);
    msg.setDestinationEntity(185U);
    msg.x = 0.056990687964344144;
    msg.y = 0.29547716040377114;
    msg.z = 0.6456679950398159;

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
    msg.setTimeStamp(0.46295181676584873);
    msg.setSource(39101U);
    msg.setSourceEntity(7U);
    msg.setDestination(52410U);
    msg.setDestinationEntity(142U);
    msg.timeout = 49233U;
    msg.lat = 0.5038933197063701;
    msg.lon = 0.5955613466013073;
    msg.z = 0.932633513468031;
    msg.z_units = 213U;
    msg.amplitude = 0.3480698599362865;
    msg.pitch = 0.29205927540786636;
    msg.speed = 0.5023263601874022;
    msg.speed_units = 183U;
    msg.custom.assign("UMAWGSYMGLQQDBEXONLZVLKVFBXJJHKMNTFQUUMXATUGTZKGIJIFTFLIARJPAMCPKCPSNSCLKGUHJCIEWLWXPGBLRPKROWRADIHFBJZHPSKFZIBXBNVORSTOFVHDQDHHMZVGRSXEVBFUCLMRTOKYXEUEMYYOYWHBOFPCZIPIYCYPCTKNQWTETDUNASVJVBDARKOLVYGWGSYMGCJNENVJPHXWEZQDFARIQOQ");

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
    msg.setTimeStamp(0.9511521693594696);
    msg.setSource(64108U);
    msg.setSourceEntity(202U);
    msg.setDestination(29628U);
    msg.setDestinationEntity(45U);
    msg.timeout = 6891U;
    msg.lat = 0.5808740427369676;
    msg.lon = 0.5509667700899776;
    msg.z = 0.8707697432010426;
    msg.z_units = 147U;
    msg.amplitude = 0.26085806089561925;
    msg.pitch = 0.2848699086739368;
    msg.speed = 0.17981324409663157;
    msg.speed_units = 226U;
    msg.custom.assign("MSNYXRDMSFVYRCVIUWTPFOHOWLTTUVNHWWMGWSEVZRKAJAHDRJHFLZAWHDEVOBGSHEIOTBCDKGUYQYLMPNCMZLGTRYFZDNXFJVXRVIXURZXYCQGXLEPUMEONORJBHSYL");

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
    msg.setTimeStamp(0.07653509403103598);
    msg.setSource(51424U);
    msg.setSourceEntity(214U);
    msg.setDestination(53347U);
    msg.setDestinationEntity(95U);
    msg.timeout = 37272U;
    msg.lat = 0.9015155039492455;
    msg.lon = 0.03426896692932602;
    msg.z = 0.6204148826063025;
    msg.z_units = 82U;
    msg.amplitude = 0.6426438831518643;
    msg.pitch = 0.3284832962953318;
    msg.speed = 0.8164472118759906;
    msg.speed_units = 80U;
    msg.custom.assign("HUBEXPXTJRKQFBUPRWZLFUTYOKAONXGFCZRTSTPKGNAXBIGOHJWNVSBMYJJZMXGQOCABEFZRFUHQVEEIPSWUVDDPHIXWHUQNULNHRVJPSAZYYMCVWXQAISVCNKRIMKMQZCWGXPTBXGBEQUNQFDIZLKECYWDHDMVGVKUOV");

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
    msg.setTimeStamp(0.31070018831722546);
    msg.setSource(43326U);
    msg.setSourceEntity(53U);
    msg.setDestination(53385U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.3391346595776311);
    msg.setSource(25672U);
    msg.setSourceEntity(129U);
    msg.setDestination(11722U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.4879235615251305);
    msg.setSource(63817U);
    msg.setSourceEntity(47U);
    msg.setDestination(64587U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.41273734278624297);
    msg.setSource(28610U);
    msg.setSourceEntity(177U);
    msg.setDestination(34778U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.46637576621751997;
    msg.lon = 0.5047120625204358;
    msg.z = 0.7811535207332636;
    msg.z_units = 173U;
    msg.radius = 0.8613000697398394;
    msg.duration = 26266U;
    msg.speed = 0.0037780255503186977;
    msg.speed_units = 38U;
    msg.custom.assign("MNFRYMHTEXWG");

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
    msg.setTimeStamp(0.6021744860107203);
    msg.setSource(53355U);
    msg.setSourceEntity(187U);
    msg.setDestination(9697U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.05732935076477519;
    msg.lon = 0.33123201879431174;
    msg.z = 0.7191830282592113;
    msg.z_units = 20U;
    msg.radius = 0.1423937353545376;
    msg.duration = 18919U;
    msg.speed = 0.45346159961371146;
    msg.speed_units = 117U;
    msg.custom.assign("OEPACZWHIKTDVKSPPAHQSSLLOQYGHDBRZOAGTLMDZIUQQCEPWFUUYAYEBHFFPKVMYVYCFRIJSZBOCSGCWOJSVDXOEMUZLLHIXEAUCWXAINKJTRBZXHFWRLERRVMQZEZACXYKYUFDWRVSDCUXPATJVBSJNFPNKQFJTMRQNVEXSNNJKGUINGVOWRABODOWQOWHDITXTXJMICGBKMDCTPULGQLPGDBYNMJJ");

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
    msg.setTimeStamp(0.2762521146440464);
    msg.setSource(15819U);
    msg.setSourceEntity(30U);
    msg.setDestination(62247U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.804435993803181;
    msg.lon = 0.652611301954617;
    msg.z = 0.8262740400153613;
    msg.z_units = 185U;
    msg.radius = 0.778727240944002;
    msg.duration = 13734U;
    msg.speed = 0.9498221233973478;
    msg.speed_units = 129U;
    msg.custom.assign("KPNAGEVXWTZXCTSQGPYHIDOFBBMITLHMFZELOUZFPMGXWJUCSIPIDMNGZQQEDDWODUXJXBYDENRNHLYDMKBBTOTRQPZZQNRJMLVFHWEUBHGHVVEOJEQLRPQYFPKFTVCIJGSSG");

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
    msg.setTimeStamp(0.94981889060477);
    msg.setSource(41733U);
    msg.setSourceEntity(17U);
    msg.setDestination(35169U);
    msg.setDestinationEntity(226U);
    msg.timeout = 38471U;
    msg.flags = 179U;
    msg.lat = 0.9955425027101392;
    msg.lon = 0.5431747550975033;
    msg.start_z = 0.09375506168138548;
    msg.start_z_units = 43U;
    msg.end_z = 0.22907411852415394;
    msg.end_z_units = 26U;
    msg.radius = 0.25847520365198384;
    msg.speed = 0.5216243866847013;
    msg.speed_units = 62U;
    msg.custom.assign("GNKAZJDYEHXLQLPBMJTJQSDAIBDZWXQGDYGHIIYVUMSSXZUTISBCGJ");

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
    msg.setTimeStamp(0.5616104782517927);
    msg.setSource(51324U);
    msg.setSourceEntity(79U);
    msg.setDestination(13160U);
    msg.setDestinationEntity(65U);
    msg.timeout = 607U;
    msg.flags = 4U;
    msg.lat = 0.8734793681722162;
    msg.lon = 0.3124170626629653;
    msg.start_z = 0.3534615668620681;
    msg.start_z_units = 186U;
    msg.end_z = 0.8320362246923051;
    msg.end_z_units = 169U;
    msg.radius = 0.3044608357284405;
    msg.speed = 0.16508642510761462;
    msg.speed_units = 74U;
    msg.custom.assign("UUXLEWTJXEJGMRONWAJYFAXOAVSSKLADGFTBXQEQFVTCMVKDJIVPFHIRKHUTECEZSBRBBMHPSGCAWCLVOGMHQDBMSEFRQXCNNZCRMCOTQBDPQJUITDEZSLIDVYGNKANNERQEXWSAVRQWPNTLXUSXXFUXCYWQKEZYKZNJHRCNYMZWP");

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
    msg.setTimeStamp(0.8664944000599157);
    msg.setSource(40476U);
    msg.setSourceEntity(178U);
    msg.setDestination(61824U);
    msg.setDestinationEntity(153U);
    msg.timeout = 26891U;
    msg.flags = 120U;
    msg.lat = 0.9438317277806353;
    msg.lon = 0.3841490476227496;
    msg.start_z = 0.2366273681847405;
    msg.start_z_units = 230U;
    msg.end_z = 0.15632756088260968;
    msg.end_z_units = 174U;
    msg.radius = 0.07815706152987434;
    msg.speed = 0.14776660630735916;
    msg.speed_units = 137U;
    msg.custom.assign("POQBFORCRYFSRQGBIHGGJOKTLMUSOJPZWPZWVODZHTXBDCZNLHHTRNTQQGXPNHOUAIWJVLIMXPNUVJIRDAUYMDZGGVBXSGLKEYVZFBQZSFQHWFDLLPTMYEQXDSNNAQUFRNUEDLBFJYKJUWYUYOEUWMTNIMYSLICKHXTCGXJXWBCPIKSJHJKBFDVAHPXQUZDEZZDVCRABVTMSEELPWIAKGPCEYTIQHVWFNLEMACOKKNGASFCYACMOES");

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
    msg.setTimeStamp(0.6484975021111475);
    msg.setSource(9381U);
    msg.setSourceEntity(46U);
    msg.setDestination(53618U);
    msg.setDestinationEntity(147U);
    msg.timeout = 872U;
    msg.lat = 0.9828283681086553;
    msg.lon = 0.5991083546731675;
    msg.z = 0.4211024217263809;
    msg.z_units = 13U;
    msg.speed = 0.9378212364319333;
    msg.speed_units = 226U;
    msg.custom.assign("AORBCULVHVCEZDYYTUBWLWMEZGIZNIDBAHZYJDKPTGKACSMRYKEVHPPUZGXSRLGIIQHCNGSYQUTDYHZMEOLYITRWFOWFIYFTDACCRVRWKQXFDPMJNSLBFBBSKEJSQLVQIYHXBAOOCF");

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
    msg.setTimeStamp(0.2200190722640365);
    msg.setSource(44650U);
    msg.setSourceEntity(190U);
    msg.setDestination(25102U);
    msg.setDestinationEntity(252U);
    msg.timeout = 21550U;
    msg.lat = 0.3958217803928108;
    msg.lon = 0.39576222518705406;
    msg.z = 0.43676832528828957;
    msg.z_units = 154U;
    msg.speed = 0.07352978942478516;
    msg.speed_units = 24U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.10625828241970148;
    tmp_msg_0.y = 0.5616072416428628;
    tmp_msg_0.z = 0.049669613454420114;
    tmp_msg_0.t = 0.05928457530846831;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TBRGWLODUHBTLKAZUQDRUJVHZDQEWJIKFADGJLVBUTSPYTSQVXKTVFRJFAJKZRWGSTPEHPCISWSGTLAHHOHZGXFZRQRCXSHKIWJIEUODVNBCMLCVBZUZMDJLITHSMOAUSZUGLWJXQDNNYXF");

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
    msg.setTimeStamp(0.6188511461494254);
    msg.setSource(18846U);
    msg.setSourceEntity(151U);
    msg.setDestination(3331U);
    msg.setDestinationEntity(204U);
    msg.timeout = 58067U;
    msg.lat = 0.49886286916927036;
    msg.lon = 0.314163350793509;
    msg.z = 0.4151324205593825;
    msg.z_units = 118U;
    msg.speed = 0.09318444795401737;
    msg.speed_units = 201U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.20073841406150206;
    tmp_msg_0.y = 0.5816714390289623;
    tmp_msg_0.z = 0.9120837274739375;
    tmp_msg_0.t = 0.1597057633596518;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JJDTWEGODHMAEVPCBPMWOBNACFBVEVLQVPVKAMOOHCLQMXQDTVMTUPFIQUCDKLZSXUONKRBTBWJTUDPLKJDBTZJXYCITKZFZEOQSDLESOASAVBESAKNWWSAPRGGUFDRCDRRSUWZHMVIEGENLNIDYUVOMNVNAHJWPYETKGIAULKMXYGWBZHRFHQYAGXSUYXYXTZYKPKSHNEORZ");

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
    msg.setTimeStamp(0.8271327633844513);
    msg.setSource(32763U);
    msg.setSourceEntity(215U);
    msg.setDestination(32052U);
    msg.setDestinationEntity(97U);
    msg.x = 0.09379928461298681;
    msg.y = 0.46177714115800383;
    msg.z = 0.47922704210334044;
    msg.t = 0.30851311082736366;

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
    msg.setTimeStamp(0.5195797170439673);
    msg.setSource(10857U);
    msg.setSourceEntity(143U);
    msg.setDestination(17829U);
    msg.setDestinationEntity(177U);
    msg.x = 0.39719126863802945;
    msg.y = 0.9244223175616041;
    msg.z = 0.33103520297773315;
    msg.t = 0.7168229609580248;

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
    msg.setTimeStamp(0.49980163624854745);
    msg.setSource(43721U);
    msg.setSourceEntity(62U);
    msg.setDestination(19597U);
    msg.setDestinationEntity(63U);
    msg.x = 0.5574537507180679;
    msg.y = 0.889699478149757;
    msg.z = 0.9869862043862847;
    msg.t = 0.5178974893453223;

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
    msg.setTimeStamp(0.27646811199635435);
    msg.setSource(37954U);
    msg.setSourceEntity(245U);
    msg.setDestination(52306U);
    msg.setDestinationEntity(124U);
    msg.timeout = 39672U;
    msg.name.assign("BWJMNVWNHUSJBEOJSYQYDSOVYAJHBPHAEVUBZBEAGZIPXIBWGCSNJKHDTMQKZLADXXRQCFFCAULWDYNCYJCIEXNLNOYEFRJUPHBULUKXLTDMQRLVWFRSHVPJHRLUTAITLWYOYOCMCGUGFN");
    msg.custom.assign("BOKDRDDXPMLAZVAUFQUSWZNZXCLARHLJKMWPQRKVQX");

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
    msg.setTimeStamp(0.6263418344491417);
    msg.setSource(21U);
    msg.setSourceEntity(60U);
    msg.setDestination(43032U);
    msg.setDestinationEntity(71U);
    msg.timeout = 18355U;
    msg.name.assign("MPMWQYHOPMUGRWGTFCEN");
    msg.custom.assign("HFEJQMJUBYKKSHQPHYTIDQFZVVRXJKRESQHJNYVACSUTGTORJBMOLHTOAECNNDQXHYZSBXMGLUEKIOJLDUQRBDUXTVKSBIIULXRYIVAOKNIDGCTEKEEMJRCLRTKSXFEHGDINWJDQTCZIZLWZVRFMQAFCOUVCBHPXFPLEYUUPPZGZPDNLUFKWGJGYPPFBTFKWBQDOSNXMDWMMPOWCZB");

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
    msg.setTimeStamp(0.9256931953076862);
    msg.setSource(63786U);
    msg.setSourceEntity(151U);
    msg.setDestination(60250U);
    msg.setDestinationEntity(9U);
    msg.timeout = 16914U;
    msg.name.assign("WTHTJBEUQKVVRIZFYHWCXNJTDAJWUHHLXVXTSXUPUDHOVRUEEHJUECODGTNRVJQPMELYGJGMDZMNFXUIYWOWTTCPOZMFPUAIEOKAHRSFSFKARGQJGBPUBKBEWCPJQOYNACDIBECCMZPIIMILIRTGJTGBMLJLSSSNYHFMXOYBFRQHFKBELRZVYIGWFDQOKLNVKDAXCKYZGCNRQXTZVSPRKKAZLODFBWOBW");
    msg.custom.assign("YFNQCCLYPMENBWNOZHVSOPMJGTUJNKMF");

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
    msg.setTimeStamp(0.8792799705522184);
    msg.setSource(6247U);
    msg.setSourceEntity(196U);
    msg.setDestination(34352U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.7057519104648917;
    msg.lon = 0.022356109184798578;
    msg.z = 0.836153169437664;
    msg.z_units = 43U;
    msg.speed = 0.8096458949315796;
    msg.speed_units = 185U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4654528590136513;
    tmp_msg_0.y = 0.9656500232745561;
    tmp_msg_0.z = 0.36514301341044175;
    tmp_msg_0.t = 0.4322384638932709;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 5540U;
    tmp_msg_1.off_x = 0.4114146682077088;
    tmp_msg_1.off_y = 0.3704791006699544;
    tmp_msg_1.off_z = 0.8306141723736205;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.30496406370393236;
    msg.custom.assign("YJKGCPXDICYNFSHFVSSTUMODIHXPOPIGMQSJKKJDQUYWSVBEFATRXAOZFHWCDKTYIXXEVFMDPXKBUVTLCLPWTVFKZMLOUNZTSKRWCHCFROZOENQRDQJUIXBQLRRAANAEGPXGYTETHLCIPJRONWVVMLOLWDEJBOBWMJTPQYUYGCBBQYMSAGRBDFAMDQHVLNKHPGEQNEWUZXMIVJPAZNIJGWCAYSUZSUGIMBZVDOHKQBISNKHEL");

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
    msg.setTimeStamp(0.72285110666071);
    msg.setSource(21286U);
    msg.setSourceEntity(197U);
    msg.setDestination(58324U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.6089102102577204;
    msg.lon = 0.017278611163451307;
    msg.z = 0.36812713846323086;
    msg.z_units = 197U;
    msg.speed = 0.6043313275200372;
    msg.speed_units = 85U;
    msg.start_time = 0.6653163413853173;
    msg.custom.assign("DEOWHAQFZWPLZRHRVDRVGIWXLAZHMMJXBGHYQJUAWYUFZBZBIJKUNJFOGMTLUTVNCRWXPHJQCRBQSQXPFZEWFTWVOSODXSICYXYYASNJDUMVEDJFEKLLWGKQGXIIVELPLYXKSITPSHBRYVGPZKPEHI");

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
    msg.setTimeStamp(0.23002125418047648);
    msg.setSource(25091U);
    msg.setSourceEntity(82U);
    msg.setDestination(46050U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.5546783054256578;
    msg.lon = 0.5056880212442667;
    msg.z = 0.22045499081993392;
    msg.z_units = 2U;
    msg.speed = 0.9304021009475789;
    msg.speed_units = 214U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.03143358106299132;
    tmp_msg_0.y = 0.12792234824346604;
    tmp_msg_0.z = 0.010331924336276277;
    tmp_msg_0.t = 0.9733943910329351;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6141488895353802;
    msg.custom.assign("GDJQCISFQWCZRWYEEADJGQXTUQAVJGKPZLMNIJZWPVUGCRTYJTPMRTAGITEQFOXUOISLDLIXODXBKJPBNCYVKPYMUKZNHIOAUDSNJAGDSLVVQFHGBMTYUZZYDCZWHYVCFCTKW");

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
    msg.setTimeStamp(0.24132582786756718);
    msg.setSource(58457U);
    msg.setSourceEntity(107U);
    msg.setDestination(2360U);
    msg.setDestinationEntity(162U);
    msg.vid = 5932U;
    msg.off_x = 0.2156550691979816;
    msg.off_y = 0.16522689095297594;
    msg.off_z = 0.7348721762830852;

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
    msg.setTimeStamp(0.9258001297207535);
    msg.setSource(65225U);
    msg.setSourceEntity(236U);
    msg.setDestination(38528U);
    msg.setDestinationEntity(31U);
    msg.vid = 60838U;
    msg.off_x = 0.995207955883643;
    msg.off_y = 0.9578476655281339;
    msg.off_z = 0.10431843711879696;

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
    msg.setTimeStamp(0.01985994991032447);
    msg.setSource(26998U);
    msg.setSourceEntity(143U);
    msg.setDestination(39175U);
    msg.setDestinationEntity(205U);
    msg.vid = 38014U;
    msg.off_x = 0.04460620261465653;
    msg.off_y = 0.14670384752006493;
    msg.off_z = 0.19768719384465983;

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
    msg.setTimeStamp(0.5809097809451373);
    msg.setSource(40355U);
    msg.setSourceEntity(83U);
    msg.setDestination(57162U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.4301291081251041);
    msg.setSource(15786U);
    msg.setSourceEntity(52U);
    msg.setDestination(1353U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.2315400337297947);
    msg.setSource(7549U);
    msg.setSourceEntity(29U);
    msg.setDestination(22309U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.8835745614731348);
    msg.setSource(47309U);
    msg.setSourceEntity(50U);
    msg.setDestination(29554U);
    msg.setDestinationEntity(133U);
    msg.mid = 31349U;

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
    msg.setTimeStamp(0.3607352947730702);
    msg.setSource(48846U);
    msg.setSourceEntity(131U);
    msg.setDestination(35943U);
    msg.setDestinationEntity(41U);
    msg.mid = 20991U;

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
    msg.setTimeStamp(0.3071806780830566);
    msg.setSource(10497U);
    msg.setSourceEntity(204U);
    msg.setDestination(42718U);
    msg.setDestinationEntity(232U);
    msg.mid = 54058U;

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
    msg.setTimeStamp(0.7092288636971741);
    msg.setSource(20656U);
    msg.setSourceEntity(28U);
    msg.setDestination(14428U);
    msg.setDestinationEntity(149U);
    msg.state = 66U;
    msg.eta = 52984U;
    msg.info.assign("XPYQOLHWAWLMTCXISGOZKQBBPZFWXBHRMCIEVDRWNDHNIVGUHAKKRYF");

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
    msg.setTimeStamp(0.4331465901477102);
    msg.setSource(12683U);
    msg.setSourceEntity(21U);
    msg.setDestination(32840U);
    msg.setDestinationEntity(120U);
    msg.state = 105U;
    msg.eta = 3221U;
    msg.info.assign("VDGNSHLNJYUDUNIKXDLYWGPBYTORJTMUAOOKTFCVYSRMWVNKBZTIBABRJCWWUZSFZREQQBAXANAKXHTOUVZXRXIGXGILULLEJDPVVDZHTQECQOEIIBNULHIGGQYCYZARPOCAPEJDFXZKFJNNKMELBITQHLQPMJBHPNVSUWCG");

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
    msg.setTimeStamp(0.20739740167696297);
    msg.setSource(23181U);
    msg.setSourceEntity(25U);
    msg.setDestination(22649U);
    msg.setDestinationEntity(51U);
    msg.state = 34U;
    msg.eta = 40845U;
    msg.info.assign("EMXGOVYUETFVSCBJRNFZHJIRQFQTWXGAOVANWUIMYOSZXQRKPDPOOENBVFXPUECNSTLCRJVAMQXEOZDRYKCQGRDIXKHDRCNUQMPIELGSSYLTOMROOPGUWCLVDWEVOSZHATPBNUTKSKFFLRBHXTHERGQJHZXIAJLDVAYDBQGZJFMVIUIBKANILWLUWWKJYHGQJBYYHYHBMSXUGMKWGCDPZTAFDNNCYEPZUPHT");

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
    msg.setTimeStamp(0.268589062532406);
    msg.setSource(3451U);
    msg.setSourceEntity(223U);
    msg.setDestination(52754U);
    msg.setDestinationEntity(169U);
    msg.system = 44416U;
    msg.duration = 42605U;
    msg.speed = 0.902522716212237;
    msg.speed_units = 169U;
    msg.x = 0.40524175449684774;
    msg.y = 0.6537987794455922;
    msg.z = 0.07370854049910724;
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
    msg.setTimeStamp(0.9517988828898313);
    msg.setSource(42361U);
    msg.setSourceEntity(67U);
    msg.setDestination(19107U);
    msg.setDestinationEntity(33U);
    msg.system = 28877U;
    msg.duration = 23474U;
    msg.speed = 0.47818867017147926;
    msg.speed_units = 197U;
    msg.x = 0.9988682585472866;
    msg.y = 0.14254197003305336;
    msg.z = 0.8356488867401032;
    msg.z_units = 185U;

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
    msg.setTimeStamp(0.009078250287007483);
    msg.setSource(12359U);
    msg.setSourceEntity(249U);
    msg.setDestination(38881U);
    msg.setDestinationEntity(201U);
    msg.system = 14997U;
    msg.duration = 20638U;
    msg.speed = 0.4055347023839093;
    msg.speed_units = 118U;
    msg.x = 0.7578726448033657;
    msg.y = 0.635225618483547;
    msg.z = 0.9463053532427304;
    msg.z_units = 146U;

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
    msg.setTimeStamp(0.9433932454927657);
    msg.setSource(32149U);
    msg.setSourceEntity(33U);
    msg.setDestination(19888U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.3512933194410197;
    msg.lon = 0.6802126814389953;
    msg.speed = 0.7238153917489842;
    msg.speed_units = 212U;
    msg.duration = 19253U;
    msg.sys_a = 19174U;
    msg.sys_b = 18248U;
    msg.move_threshold = 0.05685619845240086;

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
    msg.setTimeStamp(0.11412570384570864);
    msg.setSource(5626U);
    msg.setSourceEntity(214U);
    msg.setDestination(50197U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.884528262641305;
    msg.lon = 0.23511787988048194;
    msg.speed = 0.9364022825075657;
    msg.speed_units = 239U;
    msg.duration = 49421U;
    msg.sys_a = 16796U;
    msg.sys_b = 16793U;
    msg.move_threshold = 0.8466621011119007;

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
    msg.setTimeStamp(0.4554711244359677);
    msg.setSource(53761U);
    msg.setSourceEntity(223U);
    msg.setDestination(60293U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.4205426872169141;
    msg.lon = 0.28717739873067016;
    msg.speed = 0.09256658995950384;
    msg.speed_units = 241U;
    msg.duration = 58388U;
    msg.sys_a = 57867U;
    msg.sys_b = 19919U;
    msg.move_threshold = 0.43369882375127644;

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
    msg.setTimeStamp(0.9063031699879729);
    msg.setSource(31673U);
    msg.setSourceEntity(50U);
    msg.setDestination(56754U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.32886259568042986;
    msg.lon = 0.05820652984532704;
    msg.z = 0.7832046039503537;
    msg.z_units = 233U;
    msg.speed = 0.46593344799927117;
    msg.speed_units = 179U;
    msg.custom.assign("VJYXLWPKNOAEYVFSYPTUHLEUIVGPTKKZRIKAMWVWWKKZVABGVDSQEHLBTIAMZMJSLTOFMNCGQHYDGMIMFBUMBDPONFPJDXNSIEEJVJCUGJZISHXYDWLWEPULQU");

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
    msg.setTimeStamp(0.4013367010622595);
    msg.setSource(15724U);
    msg.setSourceEntity(73U);
    msg.setDestination(1824U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.5291149758711085;
    msg.lon = 0.8166169453759827;
    msg.z = 0.4332263289475694;
    msg.z_units = 94U;
    msg.speed = 0.8260263011196453;
    msg.speed_units = 175U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.709236799133776;
    tmp_msg_0.lon = 0.3109174731295803;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZOYDKENJMRVAHPLGDLVEPDGGFETOXXKIUWXOPQCJ");

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
    msg.setTimeStamp(0.5046231891857414);
    msg.setSource(46478U);
    msg.setSourceEntity(43U);
    msg.setDestination(62137U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.03375820385003492;
    msg.lon = 0.13153013153178994;
    msg.z = 0.3301752514875206;
    msg.z_units = 64U;
    msg.speed = 0.28308042602125427;
    msg.speed_units = 46U;
    msg.custom.assign("RKBAQYSOKZHUDTPBOZIIELPMVOOAADPXSBUHFLLAARYWKUXWQEMFGWSYPKFVRLJNVJDGFAIRCGQMUFMSSHYXLBWWYRTDJNL");

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
    msg.setTimeStamp(0.4133143299081429);
    msg.setSource(21179U);
    msg.setSourceEntity(131U);
    msg.setDestination(31063U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.40787843906800214;
    msg.lon = 0.35895301035858085;

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
    msg.setTimeStamp(0.11609604192120915);
    msg.setSource(28872U);
    msg.setSourceEntity(48U);
    msg.setDestination(16801U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.7909203125878782;
    msg.lon = 0.33304750758522284;

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
    msg.setTimeStamp(0.2272586543976176);
    msg.setSource(40593U);
    msg.setSourceEntity(75U);
    msg.setDestination(35748U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.6411502826587082;
    msg.lon = 0.7217282882136282;

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
    msg.setTimeStamp(0.05585089510369756);
    msg.setSource(54472U);
    msg.setSourceEntity(175U);
    msg.setDestination(58360U);
    msg.setDestinationEntity(129U);
    msg.timeout = 23515U;
    msg.lat = 0.029776396400728933;
    msg.lon = 0.052877268397926835;
    msg.z = 0.24782752700003297;
    msg.z_units = 62U;
    msg.pitch = 0.0016992252896206317;
    msg.amplitude = 0.2817468992822687;
    msg.duration = 23693U;
    msg.speed = 0.2919413692447844;
    msg.speed_units = 223U;
    msg.radius = 0.004766383919589057;
    msg.direction = 49U;
    msg.custom.assign("PSCUAWVLIIXEGYGLYZDPSJBRJQIBEEFZCEQQCCVXAHKNIXBVQYJUEXPEVFKCMFWBYPSZNLDLTXHWRJOOJQPGMTDAZMQCHOTASNGIXEHFTISXTMUQLVQITYFOJNGKMWXSVSYLLKMCIYMZAUXWOBPPRFHUKCDPDHFUVZBJPONNBGWHBJVJHAUHGNKMRVHXZNUQUTVKYKAKDAREIDBTYFWODOOKSGTQZGEWRGLSNSPR");

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
    msg.setTimeStamp(0.16306052429690354);
    msg.setSource(453U);
    msg.setSourceEntity(26U);
    msg.setDestination(25505U);
    msg.setDestinationEntity(236U);
    msg.timeout = 26567U;
    msg.lat = 0.11561768025966268;
    msg.lon = 0.29613341892354506;
    msg.z = 0.17958090031755292;
    msg.z_units = 245U;
    msg.pitch = 0.1021593690434669;
    msg.amplitude = 0.3762726657228187;
    msg.duration = 15254U;
    msg.speed = 0.4080956105223207;
    msg.speed_units = 33U;
    msg.radius = 0.8472129787281297;
    msg.direction = 203U;
    msg.custom.assign("YBWSEKQBGEZTTSXMKWQPPMWIOGMNHYZAWSPFAUFRKTJQDQHSUZXJFHDVWZDOTQDUCIDORHQZZJDHTCIYLURMVTCMGPVABDAPZPOGZUEOBXVPAUFYGLYQHIIEOEEIUYSZIXLGMB");

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
    msg.setTimeStamp(0.961608934061514);
    msg.setSource(45243U);
    msg.setSourceEntity(212U);
    msg.setDestination(53475U);
    msg.setDestinationEntity(168U);
    msg.timeout = 22925U;
    msg.lat = 0.12089812274715839;
    msg.lon = 0.7023361006542916;
    msg.z = 0.5294232994287432;
    msg.z_units = 249U;
    msg.pitch = 0.8157021091595478;
    msg.amplitude = 0.7491811820751929;
    msg.duration = 1807U;
    msg.speed = 0.2589846106668072;
    msg.speed_units = 216U;
    msg.radius = 0.18846157756109905;
    msg.direction = 253U;
    msg.custom.assign("UBBCEGIDUMFKTAATSBFWKAJIPXFLUEAGUIPFOZOUCSMKNFUHWVKOIIDOFUYJETHZEZRYQRPSQFRIYRSAPIQZAWYOVDPTWFYNWMVRLWLWBKLXMMJZYAGBPUXJILXBJMOUYHEGHXNQGKCSWXDNCSTVJSSSAGTTZXJMXQEZHAWR");

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
    msg.setTimeStamp(0.6053561569928394);
    msg.setSource(28396U);
    msg.setSourceEntity(234U);
    msg.setDestination(5159U);
    msg.setDestinationEntity(146U);
    msg.formation_name.assign("SWVIMMXCOUEZSGJTHNGTTUQLSCDBBVZXCUFTOKGFMBBQJOHAYVNGASIZGCEANWAAKHCVFOLZYQIGJLHDUXEZPGLSDMUYSAZCZJYKJAMWEOXOMFPXGRUHVMIKBKK");
    msg.reference_frame = 188U;
    msg.custom.assign("WGFZVFGRCNVMXSAKYPEUSZYUSDWOMONZTIQKDJFAUCAEAROXKIZNSSRYIPPACJYHMRFDSSLHRFUWLKWBXCEMHNXBNBLJUVJGGJTGFGTWIFAEPIBTYLQQCZZIGDYVAAQFNHBQYTRPFAOBWPCMTYXMNINLPUGKHEFJCYQCVRMDXDWHTLK");

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
    msg.setTimeStamp(0.5750400143578336);
    msg.setSource(10479U);
    msg.setSourceEntity(73U);
    msg.setDestination(42425U);
    msg.setDestinationEntity(212U);
    msg.formation_name.assign("HDQXZPJHSJSMRZOSLLZOVQJ");
    msg.reference_frame = 209U;
    msg.custom.assign("EQVSMGGVDLXERYBMAYWSUHPQWBJEACUJAPMICJYGKTFDLKXTWLZKNJW");

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
    msg.setTimeStamp(0.986166744424227);
    msg.setSource(7002U);
    msg.setSourceEntity(2U);
    msg.setDestination(6663U);
    msg.setDestinationEntity(124U);
    msg.formation_name.assign("ZKSXYUCPRINOGHRSTGWYEDFRGZZQZBOLORZTQPTMFJPEHWZGUHPKSIGRHDHCPNMSSZLCDGTVDUBJTZPINKACERWIUAEJWELVKQQVNGJWVBZJBMQJNTIOETHXJXKDSACXUSAZCOHWAOLLXPUYVGPXEMAI");
    msg.reference_frame = 205U;
    msg.custom.assign("OEFMTRDCAXUDI");

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
    msg.setTimeStamp(0.28864020216129727);
    msg.setSource(49867U);
    msg.setSourceEntity(253U);
    msg.setDestination(3870U);
    msg.setDestinationEntity(188U);
    msg.group_name.assign("BRCTZHLGHHLELUDSTUARTRNZDINSYSAWYNGMNUQJMWCZUWYAOVITKFVKXVUAEKKQPPAFJHQZNZJXZOKLHIKOWPSOXEVSJFMKSMYFRYITRLVJIUEBFBXYIRXBQCSMRXAWUNUXONVDZJQWFZICDVBDFMHZJEWQKRQCNTDMPOTQHBJPMEYWSLIXEMUALOVGTDEBMTSNLPIXLHVAOOKBAGDDPJWGCGNJHYPICHEBAQTLOCGZWRSE");
    msg.formation_name.assign("GBHODBNIQFQAFNPDAVBZEURHZLAFXCHDEY");
    msg.plan_id.assign("FEZBTDWFQKMWNDZABEAITBYJKTFOFYIWSHQPWLPMCZZRPGGOHOCXTZ");
    msg.description.assign("HZYFOQRMWUIPZUGJWPKORAUXSMREHJNHJFWTKKFXVNKVQWQUQXZPMGFMUZHVJFOXPOKHEEYMHLJYYNLXUCO");
    msg.leader_speed = 0.2663539759181478;
    msg.leader_bank_lim = 0.33306476282917097;
    msg.pos_sim_err_lim = 0.24339188616304486;
    msg.pos_sim_err_wrn = 0.6224282815158134;
    msg.pos_sim_err_timeout = 53335U;
    msg.converg_max = 0.48715367567355394;
    msg.converg_timeout = 31697U;
    msg.comms_timeout = 59799U;
    msg.turb_lim = 0.44957995950464236;
    msg.custom.assign("ICVPCSNMJUWUBSBDZNTYTKVRZPZDIGTGQGARXKRURDQGMHKOEQBPCNKAPZIAETAGPKIMMEWNDSOFPFSRDPFCKOLNCINKASXSDZGQZXFPJQAHBEIXXCVHSYKJIBGAQWXMHCTOVZPJMLNUFBWQLMVDEIWGULYCCTLLBYRQVFJOTYULE");

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
    msg.setTimeStamp(0.8828825750093674);
    msg.setSource(23662U);
    msg.setSourceEntity(254U);
    msg.setDestination(37709U);
    msg.setDestinationEntity(40U);
    msg.group_name.assign("RADTVYLMVLWNYATHVVOBHRIOBJZILMVFXGTPUUCHJRLHUGBQMLQPHGASSSIVLRCROMXEJQWEWEUTINIZBCKJPUSGKTZWGEZXRQBZXBTAENYDAOSEYXZGQQFMUCI");
    msg.formation_name.assign("UBEOYTEHDBSMJMCBMBLDAORKKDQNGSMIUVRJPRWUXYDJFYRPFRAJCJQSPCEHFNGXLJTMZNVIBIEETOLUZMANCFHYNNKOMFKBD");
    msg.plan_id.assign("IPFXAIZTSNZOAQUJIRSISGELYSHIFPYXVSCDDNBNRNZALVOWNPRFTAHKUZQKWMBWCNOXULPGAFTMWQDVCDVWCBJBYUVAKMDMJPYGZFMLHHRQCHYFNELYJTKTXBWZEDEOLTVWZDRGSM");
    msg.description.assign("BOQVONLUKXL");
    msg.leader_speed = 0.9457204917082891;
    msg.leader_bank_lim = 0.8056447940015694;
    msg.pos_sim_err_lim = 0.4640334414751415;
    msg.pos_sim_err_wrn = 0.0846530184513421;
    msg.pos_sim_err_timeout = 60753U;
    msg.converg_max = 0.9089413799998911;
    msg.converg_timeout = 38981U;
    msg.comms_timeout = 61798U;
    msg.turb_lim = 0.8964227321340533;
    msg.custom.assign("DFVGZFAFADDCIPZTJIWXLTXFMGOECSGIEYQEKPEKBKTLRPRMYDWWXMZNRURBQQJGWCMUNDXPJZBLYGQQWQNWWHKOREDHAXEAUJYUOJLCXAKNLOOAEVSRCANSPPDPMKUFZN");

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
    msg.setTimeStamp(0.052850045967037906);
    msg.setSource(28138U);
    msg.setSourceEntity(44U);
    msg.setDestination(36587U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("GICDQMACSOBZGUXNAOWFGTWXDDBNDUSHUQRPDWUOIIJGZJHJPNXUBMXYQOZCLWTJGIPCJCJTMBHHCRMVASPQHABSLWRINPWSMOHDQTBYEUOKSRLXELVZFEJYDPKAJUAWPNZORNKYYQQFRVNUFEZTIPPKBS");
    msg.formation_name.assign("IIHFDQQWRGFEWNTMBSLFCGDAEIOTPMJHSBRTXBWIKFAX");
    msg.plan_id.assign("APSQYYRMMKDBQGECECSSDLPOMFCCBFADFSGYVBKCBRUGQWKVXZSHMVNJUWLLNPTXHEIWQFJUYVXVLTHLJVQUYZNGXROZFKWFSXXEOWAQYAUYDKCTRATWPMTPEIQ");
    msg.description.assign("STFOWRWETALXTOZOVDEQEFKHEUPCALXKBTIDNFOWXKWS");
    msg.leader_speed = 0.7198274601349272;
    msg.leader_bank_lim = 0.29528611246318515;
    msg.pos_sim_err_lim = 0.5554869758881128;
    msg.pos_sim_err_wrn = 0.8568527189359569;
    msg.pos_sim_err_timeout = 27121U;
    msg.converg_max = 0.45701128923792456;
    msg.converg_timeout = 6941U;
    msg.comms_timeout = 14628U;
    msg.turb_lim = 0.9812124945547828;
    msg.custom.assign("SIMIBAJLRCRVWFELIXFJJJHNIFHWCMHJDSZTVUMHOPNVPXWZPLBNJHJWYADYVVEQZSUXHMENOKWWBKSDKAAXJPOCLOLEEQBTYUUGBOLYFDDTQQAHDG");

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
    msg.setTimeStamp(0.5315308213658696);
    msg.setSource(48592U);
    msg.setSourceEntity(144U);
    msg.setDestination(58388U);
    msg.setDestinationEntity(209U);
    msg.control_src = 43243U;
    msg.control_ent = 105U;
    msg.timeout = 0.9829244847138052;
    msg.loiter_radius = 0.787076378862913;
    msg.altitude_interval = 0.7835911890030862;

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
    msg.setTimeStamp(0.12738496765406881);
    msg.setSource(63166U);
    msg.setSourceEntity(55U);
    msg.setDestination(55743U);
    msg.setDestinationEntity(241U);
    msg.control_src = 32432U;
    msg.control_ent = 82U;
    msg.timeout = 0.966596683434967;
    msg.loiter_radius = 0.6374059669678538;
    msg.altitude_interval = 0.09570529971146247;

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
    msg.setTimeStamp(0.3358936805747731);
    msg.setSource(24992U);
    msg.setSourceEntity(179U);
    msg.setDestination(57354U);
    msg.setDestinationEntity(10U);
    msg.control_src = 5061U;
    msg.control_ent = 32U;
    msg.timeout = 0.727286317200448;
    msg.loiter_radius = 0.2938295966992681;
    msg.altitude_interval = 0.6662662928445772;

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
    msg.setTimeStamp(0.23460464404522152);
    msg.setSource(24795U);
    msg.setSourceEntity(55U);
    msg.setDestination(12609U);
    msg.setDestinationEntity(11U);
    msg.flags = 212U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9172685866822102;
    tmp_msg_0.speed_units = 154U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.08656422721204471;
    tmp_msg_1.z_units = 92U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6436998572931553;
    msg.lon = 0.10962534649534617;
    msg.radius = 0.8533913763888906;

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
    msg.setTimeStamp(0.02253420889177382);
    msg.setSource(47407U);
    msg.setSourceEntity(248U);
    msg.setDestination(60651U);
    msg.setDestinationEntity(10U);
    msg.flags = 162U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.22727867315207573;
    tmp_msg_0.speed_units = 140U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.77830940906827;
    tmp_msg_1.z_units = 106U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.36121528679368375;
    msg.lon = 0.5922941430970863;
    msg.radius = 0.023097128339054196;

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
    msg.setTimeStamp(0.9287958631971904);
    msg.setSource(57849U);
    msg.setSourceEntity(31U);
    msg.setDestination(29860U);
    msg.setDestinationEntity(63U);
    msg.flags = 44U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7476145175750077;
    tmp_msg_0.speed_units = 187U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.859519356543377;
    tmp_msg_1.z_units = 215U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9163228265939263;
    msg.lon = 0.1565151196564517;
    msg.radius = 0.8405220088069678;

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
    msg.setTimeStamp(0.7280358745782418);
    msg.setSource(52327U);
    msg.setSourceEntity(159U);
    msg.setDestination(6092U);
    msg.setDestinationEntity(98U);
    msg.control_src = 63625U;
    msg.control_ent = 246U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 230U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7270697373272673;
    tmp_tmp_msg_0_0.speed_units = 233U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.04612359499723939;
    tmp_tmp_msg_0_1.z_units = 105U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9553289449027355;
    tmp_msg_0.lon = 0.10575528911667964;
    tmp_msg_0.radius = 0.06579216395914489;
    msg.reference.set(tmp_msg_0);
    msg.state = 236U;
    msg.proximity = 146U;

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
    msg.setTimeStamp(0.8568673339366261);
    msg.setSource(59951U);
    msg.setSourceEntity(131U);
    msg.setDestination(10395U);
    msg.setDestinationEntity(172U);
    msg.control_src = 47019U;
    msg.control_ent = 66U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 89U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.49976745814827694;
    tmp_tmp_msg_0_0.speed_units = 167U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2324908775815986;
    tmp_tmp_msg_0_1.z_units = 228U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.09357785237270388;
    tmp_msg_0.lon = 0.8418407370314595;
    tmp_msg_0.radius = 0.14048086141882665;
    msg.reference.set(tmp_msg_0);
    msg.state = 158U;
    msg.proximity = 21U;

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
    msg.setTimeStamp(0.7615045967472786);
    msg.setSource(42604U);
    msg.setSourceEntity(55U);
    msg.setDestination(33335U);
    msg.setDestinationEntity(120U);
    msg.control_src = 17827U;
    msg.control_ent = 203U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 106U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2321502171318135;
    tmp_tmp_msg_0_0.speed_units = 18U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.32955509610470957;
    tmp_tmp_msg_0_1.z_units = 122U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9198720465337726;
    tmp_msg_0.lon = 0.7551198959633133;
    tmp_msg_0.radius = 0.35857657786994035;
    msg.reference.set(tmp_msg_0);
    msg.state = 249U;
    msg.proximity = 228U;

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
    msg.setTimeStamp(0.6436487136936916);
    msg.setSource(4533U);
    msg.setSourceEntity(157U);
    msg.setDestination(41503U);
    msg.setDestinationEntity(213U);
    msg.ax_cmd = 0.1867411610553975;
    msg.ay_cmd = 0.4315096943257274;
    msg.az_cmd = 0.7474389801840733;
    msg.ax_des = 0.32035309999886885;
    msg.ay_des = 0.7305196166626292;
    msg.az_des = 0.2294903252170737;
    msg.virt_err_x = 0.7173864172253425;
    msg.virt_err_y = 0.5813837380979718;
    msg.virt_err_z = 0.13846864960843497;
    msg.surf_fdbk_x = 0.9511376136224164;
    msg.surf_fdbk_y = 0.1514232938991239;
    msg.surf_fdbk_z = 0.573929249114451;
    msg.surf_unkn_x = 0.9240954794167263;
    msg.surf_unkn_y = 0.7332036526486904;
    msg.surf_unkn_z = 0.01666885370631055;
    msg.ss_x = 0.16303343356912603;
    msg.ss_y = 0.07954215452655455;
    msg.ss_z = 0.8811081755086112;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CGSNLDXOJFYRZSPFSGIDWFBJFHPMAXKOSMWMBYCKUDTRMISXACPJNRVDHMVQYDUOYFYNPLYTVBTSWZJXJKVHWCRAQHQREZGECENGGLXPOIHCKZJFTEIYLKXIZJEHWNIQFOGKMVX");
    tmp_msg_0.dist = 0.84108065220232;
    tmp_msg_0.err = 0.6455641447586437;
    tmp_msg_0.ctrl_imp = 0.6819063823887942;
    tmp_msg_0.rel_dir_x = 0.1784697140178616;
    tmp_msg_0.rel_dir_y = 0.9994500205116915;
    tmp_msg_0.rel_dir_z = 0.6634335221571239;
    tmp_msg_0.err_x = 0.1311152281338841;
    tmp_msg_0.err_y = 0.8205143745546402;
    tmp_msg_0.err_z = 0.3723885548089839;
    tmp_msg_0.rf_err_x = 0.48926826150930813;
    tmp_msg_0.rf_err_y = 0.13800325165734917;
    tmp_msg_0.rf_err_z = 0.6987093998289542;
    tmp_msg_0.rf_err_vx = 0.6026427106897234;
    tmp_msg_0.rf_err_vy = 0.40252163760817017;
    tmp_msg_0.rf_err_vz = 0.82011495441444;
    tmp_msg_0.ss_x = 0.260123493990438;
    tmp_msg_0.ss_y = 0.9673325681057225;
    tmp_msg_0.ss_z = 0.4291222539087275;
    tmp_msg_0.virt_err_x = 0.34717456072029795;
    tmp_msg_0.virt_err_y = 0.9223727817047345;
    tmp_msg_0.virt_err_z = 0.49504286974934586;
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
    msg.setTimeStamp(0.6429728351144737);
    msg.setSource(52769U);
    msg.setSourceEntity(64U);
    msg.setDestination(47975U);
    msg.setDestinationEntity(97U);
    msg.ax_cmd = 0.7196027962476753;
    msg.ay_cmd = 0.7026964471004321;
    msg.az_cmd = 0.0018873062656143968;
    msg.ax_des = 0.2129249557123808;
    msg.ay_des = 0.5851316273470546;
    msg.az_des = 0.31757772814887797;
    msg.virt_err_x = 0.856147439733262;
    msg.virt_err_y = 0.4025568604237809;
    msg.virt_err_z = 0.45039898549656676;
    msg.surf_fdbk_x = 0.46847606880159853;
    msg.surf_fdbk_y = 0.7589955118732927;
    msg.surf_fdbk_z = 0.44623395866390214;
    msg.surf_unkn_x = 0.9632218364950302;
    msg.surf_unkn_y = 0.41327187793492737;
    msg.surf_unkn_z = 0.24880309693913494;
    msg.ss_x = 0.8777937905667228;
    msg.ss_y = 0.653722477879707;
    msg.ss_z = 0.8171539683324541;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WJSHEGDWUZVGISMNYCQPCBDDLAWIXSKBZEPEFNXJZSJKPFPNCIRBTRTQKIRZDTKQESEGSOSJUJBPIHMCCVYTJWGHUGBRKVHDLWXDNTZFYZICKXSQIJTBKUVEHIHZPTGVQMZNRQNVADIR");
    tmp_msg_0.dist = 0.7929595945635318;
    tmp_msg_0.err = 0.8979697779009749;
    tmp_msg_0.ctrl_imp = 0.34352135312111143;
    tmp_msg_0.rel_dir_x = 0.688121924192707;
    tmp_msg_0.rel_dir_y = 0.3565936446053538;
    tmp_msg_0.rel_dir_z = 0.637542082397686;
    tmp_msg_0.err_x = 0.9509113069021229;
    tmp_msg_0.err_y = 0.08125121599738505;
    tmp_msg_0.err_z = 0.676126503300211;
    tmp_msg_0.rf_err_x = 0.9712561561737375;
    tmp_msg_0.rf_err_y = 0.15954706810104702;
    tmp_msg_0.rf_err_z = 0.6609081359235401;
    tmp_msg_0.rf_err_vx = 0.9686465826282392;
    tmp_msg_0.rf_err_vy = 0.9139182413543906;
    tmp_msg_0.rf_err_vz = 0.05347268783317605;
    tmp_msg_0.ss_x = 0.8828401039504806;
    tmp_msg_0.ss_y = 0.47317006996747424;
    tmp_msg_0.ss_z = 0.1503460555596805;
    tmp_msg_0.virt_err_x = 0.4213738638496144;
    tmp_msg_0.virt_err_y = 0.7450108153975634;
    tmp_msg_0.virt_err_z = 0.6294548403547412;
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
    msg.setTimeStamp(0.7329696943042082);
    msg.setSource(31495U);
    msg.setSourceEntity(208U);
    msg.setDestination(45932U);
    msg.setDestinationEntity(212U);
    msg.ax_cmd = 0.4428527549704442;
    msg.ay_cmd = 0.8746958167540511;
    msg.az_cmd = 0.18235621123313372;
    msg.ax_des = 0.5796868511391728;
    msg.ay_des = 0.4417835135563195;
    msg.az_des = 0.28036774782032214;
    msg.virt_err_x = 0.23498880071487604;
    msg.virt_err_y = 0.2517674388817185;
    msg.virt_err_z = 0.35024058969609806;
    msg.surf_fdbk_x = 0.754244136589391;
    msg.surf_fdbk_y = 0.6352384221049571;
    msg.surf_fdbk_z = 0.0036620923119234927;
    msg.surf_unkn_x = 0.633271779241649;
    msg.surf_unkn_y = 0.04349757414700173;
    msg.surf_unkn_z = 0.759832116488887;
    msg.ss_x = 0.8218230911240184;
    msg.ss_y = 0.1858463446171611;
    msg.ss_z = 0.3721470546731859;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DAJNXFNGTCHEYGFZSUOSVRZIJMGBKHHZVSEVOZLGGKUNXGPTBNXGODYEAKTMVGQHEVDNBJJSOSURYIPATZOMCCJCKRIUOWRINXJWRRTSWBKURIZMCWSNKGQGMQMULNWARMYMLXZZHLZETMDAQNYWUOFORLWEDVSLIBAIKYEVJ");
    tmp_msg_0.dist = 0.4725381957952133;
    tmp_msg_0.err = 0.7799881160147872;
    tmp_msg_0.ctrl_imp = 0.22255477250822542;
    tmp_msg_0.rel_dir_x = 0.4845895950652419;
    tmp_msg_0.rel_dir_y = 0.8184135527330233;
    tmp_msg_0.rel_dir_z = 0.5533687998091419;
    tmp_msg_0.err_x = 0.44421411674505173;
    tmp_msg_0.err_y = 0.8118916877069687;
    tmp_msg_0.err_z = 0.11623380842305231;
    tmp_msg_0.rf_err_x = 0.6143537857554721;
    tmp_msg_0.rf_err_y = 0.4798462976102058;
    tmp_msg_0.rf_err_z = 0.7366349207515646;
    tmp_msg_0.rf_err_vx = 0.02615877728337035;
    tmp_msg_0.rf_err_vy = 0.24604404177713435;
    tmp_msg_0.rf_err_vz = 0.017765096893044063;
    tmp_msg_0.ss_x = 0.48188171002034497;
    tmp_msg_0.ss_y = 0.07344491297893385;
    tmp_msg_0.ss_z = 0.8901971219633922;
    tmp_msg_0.virt_err_x = 0.9948238556960664;
    tmp_msg_0.virt_err_y = 0.6281419646360996;
    tmp_msg_0.virt_err_z = 0.7936297600982681;
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
    msg.setTimeStamp(0.34415462407624353);
    msg.setSource(37084U);
    msg.setSourceEntity(151U);
    msg.setDestination(29664U);
    msg.setDestinationEntity(121U);
    msg.s_id.assign("MVDMFYCEJMXQIFUDBLQNWNWGHGRWKBFEPCIDAVLDCJFMXUREEKZTNZHPEJOBVKSMKBAXEG");
    msg.dist = 0.5338701030406334;
    msg.err = 0.6807249609602946;
    msg.ctrl_imp = 0.20753713138149676;
    msg.rel_dir_x = 0.007340509367141701;
    msg.rel_dir_y = 0.029191126350499474;
    msg.rel_dir_z = 0.8351499335770095;
    msg.err_x = 0.6074330965894552;
    msg.err_y = 0.2010190715592849;
    msg.err_z = 0.0925054118827543;
    msg.rf_err_x = 0.5929278746091577;
    msg.rf_err_y = 0.9926139541866765;
    msg.rf_err_z = 0.35924689062940984;
    msg.rf_err_vx = 0.2992244862174658;
    msg.rf_err_vy = 0.578750516696462;
    msg.rf_err_vz = 0.3801700112861057;
    msg.ss_x = 0.3246729485859595;
    msg.ss_y = 0.5681510219307478;
    msg.ss_z = 0.976073157515098;
    msg.virt_err_x = 0.8707823288159787;
    msg.virt_err_y = 0.7370995965831847;
    msg.virt_err_z = 0.04837031193425345;

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
    msg.setTimeStamp(0.4658267690956538);
    msg.setSource(39098U);
    msg.setSourceEntity(188U);
    msg.setDestination(25007U);
    msg.setDestinationEntity(143U);
    msg.s_id.assign("PBTFHTONNIPCLZCN");
    msg.dist = 0.6115548177704175;
    msg.err = 0.1460648943104743;
    msg.ctrl_imp = 0.10684066595043795;
    msg.rel_dir_x = 0.8226797783014062;
    msg.rel_dir_y = 0.9752652606055802;
    msg.rel_dir_z = 0.03440428436278209;
    msg.err_x = 0.4789802831501304;
    msg.err_y = 0.07617738036353372;
    msg.err_z = 0.8858805758044739;
    msg.rf_err_x = 0.8853075220903825;
    msg.rf_err_y = 0.9414389163014264;
    msg.rf_err_z = 0.7965036777644182;
    msg.rf_err_vx = 0.80945173838741;
    msg.rf_err_vy = 0.7868303198183422;
    msg.rf_err_vz = 0.3232621801777561;
    msg.ss_x = 0.9004014909535295;
    msg.ss_y = 0.7040828357235087;
    msg.ss_z = 0.9067294060615125;
    msg.virt_err_x = 0.5801992713479786;
    msg.virt_err_y = 0.6862627522839844;
    msg.virt_err_z = 0.0059283214344365565;

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
    msg.setTimeStamp(0.5439291414764605);
    msg.setSource(9645U);
    msg.setSourceEntity(57U);
    msg.setDestination(43221U);
    msg.setDestinationEntity(128U);
    msg.s_id.assign("KFHIPDZKSXXUNNVIJRZBFLUXVBIGPDRLAHSKMTPHVOKXNQLWZSTSZCOVOUTQONEJOGZUVFZJNWFXQOUIZETYPCOBBICIHUR");
    msg.dist = 0.24147067064702354;
    msg.err = 0.936690806525136;
    msg.ctrl_imp = 0.9487519263832319;
    msg.rel_dir_x = 0.22360182666128936;
    msg.rel_dir_y = 0.16995896399058164;
    msg.rel_dir_z = 0.13972612916344496;
    msg.err_x = 0.079625544308631;
    msg.err_y = 0.9927320791395405;
    msg.err_z = 0.4295968692146861;
    msg.rf_err_x = 0.7062304664189307;
    msg.rf_err_y = 0.4154398816623872;
    msg.rf_err_z = 0.8029297865700108;
    msg.rf_err_vx = 0.60881789013126;
    msg.rf_err_vy = 0.05420809047405817;
    msg.rf_err_vz = 0.9878370504067822;
    msg.ss_x = 0.195065901628247;
    msg.ss_y = 0.9919283083390225;
    msg.ss_z = 0.03557623205322136;
    msg.virt_err_x = 0.0359487223101046;
    msg.virt_err_y = 0.3565246411942774;
    msg.virt_err_z = 0.48165231510310136;

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
    msg.setTimeStamp(0.7061098757676069);
    msg.setSource(1892U);
    msg.setSourceEntity(129U);
    msg.setDestination(38229U);
    msg.setDestinationEntity(167U);
    msg.timeout = 22297U;
    msg.rpm = 0.7590636419257661;
    msg.direction = 71U;
    msg.custom.assign("NVECYOOSFNVLRLRZPXXEKIVKESZNTGHIORQDTO");

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
    msg.setTimeStamp(0.10778003206690889);
    msg.setSource(40178U);
    msg.setSourceEntity(234U);
    msg.setDestination(25032U);
    msg.setDestinationEntity(66U);
    msg.timeout = 2771U;
    msg.rpm = 0.9763676765912704;
    msg.direction = 158U;
    msg.custom.assign("FUWYNWFPLWYHP");

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
    msg.setTimeStamp(0.7261034167684933);
    msg.setSource(49101U);
    msg.setSourceEntity(110U);
    msg.setDestination(47177U);
    msg.setDestinationEntity(27U);
    msg.timeout = 38783U;
    msg.rpm = 0.5862479255547186;
    msg.direction = 4U;
    msg.custom.assign("EKXCWSBAUXOVWWPQQYWIVGWEIDAQWOXPABJKFKEGNHSOYQBRTBTESXQGKBVW");

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
    msg.setTimeStamp(0.9300202120628852);
    msg.setSource(61018U);
    msg.setSourceEntity(46U);
    msg.setDestination(57103U);
    msg.setDestinationEntity(104U);
    msg.formation_name.assign("ZCTHKYZJYBZXTJTKVMFOFEPASUIPZWEFTKLQGSZEUOZEQBFMUALXZYCFOOSUDOLLXKPCTJAURSXJEJDTVGTBAWKCNIFULTTBGRNDVXOAWNHVRKLVMGPCVMPIKANRCQQJIYASLXXFMUBABJLSPCTPMHRHH");
    msg.type = 85U;
    msg.op = 135U;
    msg.group_name.assign("YJZKWNAKEAUQBCKFBGIUPAZZZOKRVRMOGSCEMDCTQQFDSDHLGIQKUKHBLMDZIOXWWCDWHXSRRBUTASBYLQZJMHJSOOLAFIEAYYBMCJXXBWXMWTBPJAP");
    msg.plan_id.assign("JPZJBZKSESHHQXGQJTRIGMQIVEMWGTHMVOWNTSSKBPFAIWEXTRRFNWMENUSPUHCYPCGRDVYZJSYKEIQLLLCJDTOWHCHAUPSPLTDALSRQIHDUXPOXDBDVNYHRAXAIZVDFZJPOERIXTUBWXZJWKHGFUIYWCZNEBDMMMYVFUQKUXKNRPODVHFOCJKCZOJTOAYEZXQFLQRKUMRNBAQMIEAPNTSNUSVLXCCFWEAWCZMBVONLFBLVKQAYJG");
    msg.description.assign("VBSTVHRQYDJNQLRPRVHFIVGCQLLZNSDPNGCEGWMEJSTKMJYDZEVULQQTEHOBZKKXERBABGNOWQTEUUYVJZMDUQWXLCSBO");
    msg.reference_frame = 28U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11087U;
    tmp_msg_0.off_x = 0.43518716356353493;
    tmp_msg_0.off_y = 0.8939663042670877;
    tmp_msg_0.off_z = 0.7011615481892263;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.31077910573214507;
    msg.leader_speed_min = 0.8171086243422802;
    msg.leader_speed_max = 0.40947972633079466;
    msg.leader_alt_min = 0.8300409473820154;
    msg.leader_alt_max = 0.6402827506133548;
    msg.pos_sim_err_lim = 0.6414977907986256;
    msg.pos_sim_err_wrn = 0.3454055829746062;
    msg.pos_sim_err_timeout = 37232U;
    msg.converg_max = 0.8333810661070066;
    msg.converg_timeout = 42120U;
    msg.comms_timeout = 53823U;
    msg.turb_lim = 0.56954898954402;
    msg.custom.assign("BUDLHCERQSPPIWCOCZTDLXWEBHIIFAAIPUYYXVEZBKSNUFUTYBWIVHEMSSLWUKFOVNCQBJZWFS");

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
    msg.setTimeStamp(0.7070291573395825);
    msg.setSource(6094U);
    msg.setSourceEntity(239U);
    msg.setDestination(5019U);
    msg.setDestinationEntity(33U);
    msg.formation_name.assign("LZZWLRFVBFHGUPUCHCDRXNAVZGZFKVKMFEMZVVZLCLJOICQKPIHFTXXPWWQYBDFBGAPUSQOTPNXYJWENUPVHSQTKDNTUODCURCQOJVKRDYELMFEILKJCRZTLBDTAMEFYMYAJXGJXYGDYSXNRIBINESQRASZWXQLIBZDVTTPJNGQKPNEKATRHGHDJ");
    msg.type = 63U;
    msg.op = 64U;
    msg.group_name.assign("VCAQQBCTFOLRNAVPZGPEUFQZGJGMDNVNQKADBTWNHSHPZUTRITYEHTKVGDQIJEZSEJGBXTERSMEAHAIEWJHKPISDZHMUNRINVMUKXLMCGTJMMLRKBLPERLADYXSOHR");
    msg.plan_id.assign("HQDNIIKCKLQAOTMZXUHAAPVLEGLTMKJELFITXBBUOHGNROROYRCGZNNVKHZLBOKXPMHUSXIWMJZBBMQLJDTQWMZYFFIXSQSNHZDECCORGZUAJD");
    msg.description.assign("TKXWROGCLQSFPLAMKAIQRAOSPZOISCXNFWNLEUOVKGCXGFPDLIJRLOOFVJVXGHCMJUALCBHRYMZWHVIBHPHUDMBSTJNELEWUQTYSNPGYJQDFXBZESMBSPYLYFXVNENUCFXPQTSBECRDAGBRUQFMKUVYGDMARNEWZZYDEGOEJIWZKBHXYIZDULRNBBTTNASZXEYPFKCFRQGOKTTMQJLIOGUUQVVCAWVAJJWNJMSHWTKIAZMZD");
    msg.reference_frame = 21U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42987U;
    tmp_msg_0.off_x = 0.3813564049706989;
    tmp_msg_0.off_y = 0.5372599982720678;
    tmp_msg_0.off_z = 0.31236421202238107;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.49311274463739163;
    msg.leader_speed_min = 0.4490918064994113;
    msg.leader_speed_max = 0.9701216846891854;
    msg.leader_alt_min = 0.40414478352381467;
    msg.leader_alt_max = 0.0832263144816493;
    msg.pos_sim_err_lim = 0.5572600139168077;
    msg.pos_sim_err_wrn = 0.3350164554536521;
    msg.pos_sim_err_timeout = 13321U;
    msg.converg_max = 0.5530703694173618;
    msg.converg_timeout = 47087U;
    msg.comms_timeout = 38229U;
    msg.turb_lim = 0.7435936796767619;
    msg.custom.assign("TQHGWTLFOUZSTEQCOMMQKYVYSJENVCRZIGVONQQVCFXQULOURDYRYLSRIPZXIZLDWNSYSHJDMQXJQVXZWXARMBBCUYFUALFE");

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
    msg.setTimeStamp(0.04525145156673149);
    msg.setSource(1173U);
    msg.setSourceEntity(47U);
    msg.setDestination(29902U);
    msg.setDestinationEntity(157U);
    msg.formation_name.assign("XZBYZKTLRFOZEKXZVEXTNKQNUJNAFKTDGUVCDMHJCICJLNANPILBCDYHTMBQGNRHHVTUXZUDIKHDRZPFYLHZRMJECASPQJVPUWGGKQKFVAQQFNDGWYTOO");
    msg.type = 210U;
    msg.op = 114U;
    msg.group_name.assign("QZSBOZGQXGOCDABUGJEUFHFMRHEOWJRFEKWNSSRGCEPUPEXNHYERDKOYOURDXILIYHVTWWGEWIKXDXNSLECDWQOYALQYKVQLDWOKGCJJPNAHJWYKRUTHLYMIQLDTNSRPFZ");
    msg.plan_id.assign("PLXEOIGQDTYKKZWINVGLQVMIOAFZZEDGGWAVWIRLIHJAKTJSSYTBVFGXFKXIZMCPPSECSNBQTFNZYCCBRNOYMDNGOD");
    msg.description.assign("CIHKBMKGAQEFKVLFHDJSCCQSGHDANEHUHTFPHIXIQ");
    msg.reference_frame = 129U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1186U;
    tmp_msg_0.off_x = 0.21925047729664826;
    tmp_msg_0.off_y = 0.537661581978521;
    tmp_msg_0.off_z = 0.5316665912441026;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.45662520773187276;
    msg.leader_speed_min = 0.8919723970597424;
    msg.leader_speed_max = 0.937558006784938;
    msg.leader_alt_min = 0.3063324642972588;
    msg.leader_alt_max = 0.05387747325542547;
    msg.pos_sim_err_lim = 0.45596462055159914;
    msg.pos_sim_err_wrn = 0.39535256988615763;
    msg.pos_sim_err_timeout = 39257U;
    msg.converg_max = 0.2137362326986476;
    msg.converg_timeout = 1751U;
    msg.comms_timeout = 56025U;
    msg.turb_lim = 0.9123616681479929;
    msg.custom.assign("DVSYMPSKZKIFDVGZWJXWIWHPOWDKBBJWZSLCZJULQSOHNMPXPVDQHNLRXVXRPURKKMNOEUDUYEMGFAWPEBLEWLIUYBHRQJYBYNGXDTSSDYFEIKOLFBKUTADOXHIUHLMFVULEGOPFHMFTIARVDYQJCUSRCQICGFKKNIFJEWMUOXHQTNBJTTWGGSKEJCODJRMGQQXCPTYTLAHTNGLBYPZCQVZCYAJCEVQGXNXFWAZMNVSIIZZANHAR");

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
    msg.setTimeStamp(0.561383712354843);
    msg.setSource(16713U);
    msg.setSourceEntity(181U);
    msg.setDestination(21938U);
    msg.setDestinationEntity(214U);
    msg.timeout = 47707U;
    msg.lat = 0.5171270725912868;
    msg.lon = 0.4621869903220369;
    msg.z = 0.7693316717491132;
    msg.z_units = 88U;
    msg.speed = 0.07503268241693972;
    msg.speed_units = 47U;
    msg.custom.assign("JXVKRUHACQJOZLTWPVOVASTCCHBXNRQIYCKLSNZYGBRSQHGEMNJPMESKEUQJYQCBYWYGXOKSFAWTNECXZMGBUIGLXBJOZCASDBROGTMQVMHPFFEFISSORJUOHBKCIVTUWDWUQMBVYNVWYFTGELASDUZAVCBTJNFZDNYZGPDEUZHHXLETRRIFPGINGTXLBP");

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
    msg.setTimeStamp(0.7477644211224466);
    msg.setSource(53553U);
    msg.setSourceEntity(89U);
    msg.setDestination(61341U);
    msg.setDestinationEntity(117U);
    msg.timeout = 18151U;
    msg.lat = 0.044374849040108466;
    msg.lon = 0.5756152212700928;
    msg.z = 0.7299291581269154;
    msg.z_units = 212U;
    msg.speed = 0.2921606965180328;
    msg.speed_units = 22U;
    msg.custom.assign("DJIRCLNGRYADDFVPTXNXWYFSLXKCFVXISSBMZKZNSTXEAN");

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
    msg.setTimeStamp(0.05717554840422756);
    msg.setSource(30806U);
    msg.setSourceEntity(158U);
    msg.setDestination(20291U);
    msg.setDestinationEntity(44U);
    msg.timeout = 18890U;
    msg.lat = 0.05101662447386801;
    msg.lon = 0.9457958529237401;
    msg.z = 0.6306446700236149;
    msg.z_units = 254U;
    msg.speed = 0.43772007290530257;
    msg.speed_units = 238U;
    msg.custom.assign("MXESGPYBVPYTDZFFOOHZDQQSYJWNYECTWITDUBPJFDSGLULVZGJURQINDURQHXHSPESGCEHJSRBWRAILXUOHEAJTXWQAMMIDMAUCTDIJ");

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
    msg.setTimeStamp(0.09566752925817201);
    msg.setSource(4695U);
    msg.setSourceEntity(76U);
    msg.setDestination(40923U);
    msg.setDestinationEntity(122U);
    msg.timeout = 3879U;
    msg.lat = 0.7613930045804306;
    msg.lon = 0.5006166822775425;
    msg.z = 0.6028220177927514;
    msg.z_units = 86U;
    msg.speed = 0.6335419043469463;
    msg.speed_units = 51U;
    msg.custom.assign("VTJAZTYMIJND");

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
    msg.setTimeStamp(0.5437024583497697);
    msg.setSource(51847U);
    msg.setSourceEntity(46U);
    msg.setDestination(30617U);
    msg.setDestinationEntity(224U);
    msg.timeout = 27699U;
    msg.lat = 0.264566953443941;
    msg.lon = 0.6756990430831111;
    msg.z = 0.20076842575100318;
    msg.z_units = 222U;
    msg.speed = 0.9362814915255205;
    msg.speed_units = 201U;
    msg.custom.assign("XKDPBXHDKIBXAEEEMMPJJPOENLFKRJUYCYYVUSVPWYDHMSWWSAHKQLIEVHZWQ");

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
    msg.setTimeStamp(0.09474017394563106);
    msg.setSource(20436U);
    msg.setSourceEntity(59U);
    msg.setDestination(41313U);
    msg.setDestinationEntity(254U);
    msg.timeout = 18176U;
    msg.lat = 0.6247217334378987;
    msg.lon = 0.8193764632795038;
    msg.z = 0.19907192879976376;
    msg.z_units = 176U;
    msg.speed = 0.2923195176727923;
    msg.speed_units = 127U;
    msg.custom.assign("RUDJUGWTUTWZMDVRQGMCRPEOSVQNEOSRKSFJVYFJMSBHEOWIEDMAYYNFDZTRIIYQDXHMUVQTSKCNPVKEKRXTYAAKZRCGGMONWKZCCSWFXZJPSCVG");

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
    msg.setTimeStamp(0.90991934599033);
    msg.setSource(55492U);
    msg.setSourceEntity(81U);
    msg.setDestination(52115U);
    msg.setDestinationEntity(81U);
    msg.arrival_time = 0.8275790382213498;
    msg.lat = 0.19142979318839415;
    msg.lon = 0.7539510100562726;
    msg.z = 0.5620331723357849;
    msg.z_units = 232U;
    msg.travel_z = 0.38430261984020064;
    msg.travel_z_units = 214U;
    msg.delayed = 112U;

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
    msg.setTimeStamp(0.6479776776759545);
    msg.setSource(55392U);
    msg.setSourceEntity(83U);
    msg.setDestination(3500U);
    msg.setDestinationEntity(83U);
    msg.arrival_time = 0.7210486895922261;
    msg.lat = 0.2937014160658419;
    msg.lon = 0.052964989926262196;
    msg.z = 0.4030099538295535;
    msg.z_units = 96U;
    msg.travel_z = 0.38869531299866666;
    msg.travel_z_units = 203U;
    msg.delayed = 102U;

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
    msg.setTimeStamp(0.7944026890646907);
    msg.setSource(55508U);
    msg.setSourceEntity(121U);
    msg.setDestination(11338U);
    msg.setDestinationEntity(207U);
    msg.arrival_time = 0.24579984041193792;
    msg.lat = 0.7827826405823062;
    msg.lon = 0.27271785948009564;
    msg.z = 0.07555248989797447;
    msg.z_units = 169U;
    msg.travel_z = 0.5662373632614801;
    msg.travel_z_units = 58U;
    msg.delayed = 253U;

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
    msg.setTimeStamp(0.6350409449240932);
    msg.setSource(62693U);
    msg.setSourceEntity(85U);
    msg.setDestination(22501U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.8679824850050513;
    msg.lon = 0.9942970210088278;
    msg.z = 0.3251489439229156;
    msg.z_units = 111U;
    msg.speed = 0.06810276782258395;
    msg.speed_units = 214U;
    msg.bearing = 0.7192366508544139;
    msg.cross_angle = 0.1280168718974073;
    msg.width = 0.8993381818518977;
    msg.length = 0.1681207792528896;
    msg.coff = 62U;
    msg.angaperture = 0.5410703988856864;
    msg.range = 29800U;
    msg.overlap = 250U;
    msg.flags = 250U;
    msg.custom.assign("JSEHUADNYXALQVFZFXFSQTEOZLPIIPOQHUYUSZGHCYQWLDZSRXCRVSMSDXTXQNWOTGTWEWFRBAKPBVEVQMMPFKNUDEHCPMADVP");

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
    msg.setTimeStamp(0.7752046576226882);
    msg.setSource(42756U);
    msg.setSourceEntity(191U);
    msg.setDestination(49344U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.68284544763682;
    msg.lon = 0.6642164045261907;
    msg.z = 0.4924371131337527;
    msg.z_units = 127U;
    msg.speed = 0.2615837204957838;
    msg.speed_units = 80U;
    msg.bearing = 0.04828603049157887;
    msg.cross_angle = 0.058585146428023815;
    msg.width = 0.13819107711897616;
    msg.length = 0.9491718183125615;
    msg.coff = 148U;
    msg.angaperture = 0.32275057407361607;
    msg.range = 23262U;
    msg.overlap = 232U;
    msg.flags = 253U;
    msg.custom.assign("HKTUVETLWJIPDKWYCMGGACSZRAXVFYEHNSQYLJQBNNXGPYQYNUNBNHCUEQDLS");

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
    msg.setTimeStamp(0.24690415293634727);
    msg.setSource(2460U);
    msg.setSourceEntity(198U);
    msg.setDestination(5U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.9800129568832745;
    msg.lon = 0.3934140644404238;
    msg.z = 0.6652048745977256;
    msg.z_units = 120U;
    msg.speed = 0.9870876251130062;
    msg.speed_units = 66U;
    msg.bearing = 0.7912110137464193;
    msg.cross_angle = 0.7799604790227336;
    msg.width = 0.695809910754027;
    msg.length = 0.1731354404353047;
    msg.coff = 237U;
    msg.angaperture = 0.7707101094421434;
    msg.range = 54271U;
    msg.overlap = 22U;
    msg.flags = 17U;
    msg.custom.assign("PCQWPVTUVIKXVFIRTHZSGGNBUMQAWMCVFYLETXBWUTWNEYLHEBRNVFYLMCVJAJJTFRQAVIONADFRGQTKDNMSXUELGOKEKOPRZNWGDZYEBRUILCRPSBODPOXKMGEJPTZJBPXXVYPFKFMKFYWZAUQUVCCLCNFEZJLARQBESZZOBSFXDOIJMWSNYHTLKDIEYLD");

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
    msg.setTimeStamp(0.4095565819711827);
    msg.setSource(25807U);
    msg.setSourceEntity(45U);
    msg.setDestination(53523U);
    msg.setDestinationEntity(216U);
    msg.timeout = 35640U;
    msg.lat = 0.5960546123436872;
    msg.lon = 0.8664907310271325;
    msg.z = 0.8836901975739883;
    msg.z_units = 71U;
    msg.speed = 0.7425743479515546;
    msg.speed_units = 146U;
    msg.syringe0 = 171U;
    msg.syringe1 = 189U;
    msg.syringe2 = 165U;
    msg.custom.assign("POQVPPEIHLWLIJNEPZCIZXZHWQTDHJSFBTMKMATDUYFCSBVFDDCFCIGOKERKCXFLJEZPSSJKSNYZSOHMPJQZLYPDCMGUUYUJQELBBBRGIIIQWIRSWKJNVHGTXAKDBANUNBRHFEYOYKHRLHJWLEXYWUUWOLCVTWVAGFMRQVKATQVZDRLXMYEOIEZOKFCTAZXDKAPNVTGFQCQSDMAVOARBVJNW");

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
    msg.setTimeStamp(0.6524061000558186);
    msg.setSource(17408U);
    msg.setSourceEntity(3U);
    msg.setDestination(16508U);
    msg.setDestinationEntity(224U);
    msg.timeout = 47495U;
    msg.lat = 0.7375241973595181;
    msg.lon = 0.7734634895642998;
    msg.z = 0.625839955788526;
    msg.z_units = 21U;
    msg.speed = 0.16037082721404605;
    msg.speed_units = 229U;
    msg.syringe0 = 155U;
    msg.syringe1 = 72U;
    msg.syringe2 = 164U;
    msg.custom.assign("NOQYSPWSIAPVZURSLQWXXLYJPAXGWFBDVTGCPULRWZLYJUDKLHCBFJVVYUBPOAXQPEYRZGYTIAEMTVDETXVVDSQBGULEMTIKEOZQPWDYHDNAWYMSKHKTDKRICAZRIGSXLJZWQOTMLJXHIOFEBNECRGWBJVDIUMSHXDZDHURKMQUWNEBAFHSQFKSTFHGHULCZN");

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
    msg.setTimeStamp(0.9568484038714493);
    msg.setSource(46054U);
    msg.setSourceEntity(46U);
    msg.setDestination(1921U);
    msg.setDestinationEntity(72U);
    msg.timeout = 64017U;
    msg.lat = 0.10223998819707758;
    msg.lon = 0.05478941165008977;
    msg.z = 0.16871071078505773;
    msg.z_units = 177U;
    msg.speed = 0.8482697554142649;
    msg.speed_units = 63U;
    msg.syringe0 = 62U;
    msg.syringe1 = 54U;
    msg.syringe2 = 83U;
    msg.custom.assign("ORWTNRFEXIWQPHGWJSPYMINYPCVUKBZOSIXTADFCAWEYNWPVAHSZFHCGITVRUZCHGSBCDRTYZMFAAKJYCKVANJYLBRWYSGDMLFAFXTDXEIVOBBEYQQUOQOVJHTWFEOCWGZUIYKUTFIFZVPSSRJQLEJTDKSIEUUUPMOJHXJIYPZZLPHBCMPERBZRIGPEQMQTKNWJBZHUFNQMDEALLVVBSDHOAKRGTGJKVLD");

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
    msg.setTimeStamp(0.9726244346106874);
    msg.setSource(9949U);
    msg.setSourceEntity(120U);
    msg.setDestination(49554U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.005007409950967157);
    msg.setSource(5448U);
    msg.setSourceEntity(69U);
    msg.setDestination(37209U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.9681820591449214);
    msg.setSource(4858U);
    msg.setSourceEntity(202U);
    msg.setDestination(49631U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.6311616674168142);
    msg.setSource(26960U);
    msg.setSourceEntity(21U);
    msg.setDestination(39838U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.7557739850815949;
    msg.lon = 0.5266098336681538;
    msg.z = 0.4349045226028062;
    msg.z_units = 139U;
    msg.speed = 0.16746639020693332;
    msg.speed_units = 59U;
    msg.takeoff_pitch = 0.7579873733529069;
    msg.custom.assign("EMMJTYZBLHHRECFKQWYFVVUQAKOAFDZSEYDRPSIYKJBNFESXAJMXHMAULQEETOFJLUJDPZQIBLWHLLILPPTCNDUCOHVABPNIENRZTCNHBHOXVMRCGPOFIKBZRRDWDYWSJQGISGZUOECBSTWRLQVLQBNRTGBCWMZTRJGPVTSYZMCUSKCQSWXIJVEK");

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
    msg.setTimeStamp(0.6213742609599919);
    msg.setSource(17696U);
    msg.setSourceEntity(50U);
    msg.setDestination(59406U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.5928528683741089;
    msg.lon = 0.6028302622522782;
    msg.z = 0.48693398469346305;
    msg.z_units = 46U;
    msg.speed = 0.55348496533902;
    msg.speed_units = 212U;
    msg.takeoff_pitch = 0.45471618227572796;
    msg.custom.assign("OLDCHIVQYWWMKTKTXSXQFSPYEBNZDGZDWGRSSKUGLSGZMLQXHVJWBOIWDNZXAOVAOSZFOLWIPUYSENVOGMCNKIIPYJZUYFXUWNLQPXQMENEVPHGQBCFKVDAGHJKFTQOZPTCWDTTUXEMQRNZCWCGUBQHMKSDRR");

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
    msg.setTimeStamp(0.42529802898526814);
    msg.setSource(37097U);
    msg.setSourceEntity(23U);
    msg.setDestination(63101U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.33014031292118917;
    msg.lon = 0.0023641073240228128;
    msg.z = 0.8456484555730609;
    msg.z_units = 160U;
    msg.speed = 0.6821459663961356;
    msg.speed_units = 17U;
    msg.takeoff_pitch = 0.3153364813716444;
    msg.custom.assign("VTDVRRYBOWMDIJCHOXPHZEQGDTNMWKAHLPMYKJWEEZKRSWNZVYCAIKOVVGSSEGREXFNWUYWKSTDGWZOBSACUWVKBQBGFDFYXXDHLJFZLTHKUAATQZPUEAGQTHZMMDUXQNMRGIJUQVPHNNOYLKRNOFJIOJHKPQXSRAHDHQNABPSYTJPCEILVRRSXLFPKMUMYBT");

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
    msg.setTimeStamp(0.9345822640773135);
    msg.setSource(16602U);
    msg.setSourceEntity(59U);
    msg.setDestination(46247U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.8699401581283801;
    msg.lon = 0.9261992247254532;
    msg.z = 0.03661735308721803;
    msg.z_units = 63U;
    msg.speed = 0.9657401819429267;
    msg.speed_units = 218U;
    msg.abort_z = 0.7032180204521057;
    msg.bearing = 0.8320148107719042;
    msg.glide_slope = 107U;
    msg.glide_slope_alt = 0.6562734894449561;
    msg.custom.assign("TUWQOWRXYRSECJYU");

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
    msg.setTimeStamp(0.6039421169336728);
    msg.setSource(20273U);
    msg.setSourceEntity(93U);
    msg.setDestination(13754U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.03128410964592476;
    msg.lon = 0.7613162207929106;
    msg.z = 0.3202851851681593;
    msg.z_units = 25U;
    msg.speed = 0.02440805239902022;
    msg.speed_units = 41U;
    msg.abort_z = 0.6909172604598344;
    msg.bearing = 0.36858107061943157;
    msg.glide_slope = 94U;
    msg.glide_slope_alt = 0.9435767127818017;
    msg.custom.assign("WAEZZZMRJRCVOTNNNLJOZSFWVFYDQRMKNVZZKEEHAPONRIQSNBIBLYYWFFJHUHGIBNRGQPAGQBKOOAJCCMJSGSKYAQLLIMGUBPDVDTTJMMKWX");

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
    msg.setTimeStamp(0.9746132324266862);
    msg.setSource(37797U);
    msg.setSourceEntity(145U);
    msg.setDestination(1222U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.0710360947035803;
    msg.lon = 0.7968626093895614;
    msg.z = 0.7024895590174771;
    msg.z_units = 101U;
    msg.speed = 0.43591251845591206;
    msg.speed_units = 224U;
    msg.abort_z = 0.7995152250006687;
    msg.bearing = 0.3031979175553676;
    msg.glide_slope = 9U;
    msg.glide_slope_alt = 0.3115097281758292;
    msg.custom.assign("RGIWUVBQTMIUOPOJNJIEEUDOZXXJNTWOHKHZFGHLZYSZCAAIFCMCUEXSHQWLLCZJYNBHKNF");

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
    msg.setTimeStamp(0.3678370622978152);
    msg.setSource(41106U);
    msg.setSourceEntity(132U);
    msg.setDestination(61152U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.8837205976226735;
    msg.lon = 0.8482140753768388;
    msg.speed = 0.128084852574483;
    msg.speed_units = 167U;
    msg.limits = 169U;
    msg.max_depth = 0.3983209458916126;
    msg.min_alt = 0.8379030557407229;
    msg.time_limit = 0.08052082637596092;
    msg.controller.assign("ZHWUMDQOPVGBXTJESBDCERQBISVZEOYBTXIXIGUSCPLVOHJFVMDECRIQBHPDLPVNEOMPLKMAOGHWNARNQYZYXRXWZJZTJONCCKGULGJRBESTSLTZGDYBFUTXTDNPRSBWYSOFQOFVUGMELIVXINAPMNKAOMYQMLFQIRICKFWMYWMKNJRIHUURXWNXRBEDYQYCKCQTFDSLSTAZPCWAGHKZJLPWKXUKUFJHVTGHIVZAHD");
    msg.custom.assign("GNRJRFIZYMZLLKTJVYSHQZDUFLHGJZJVCQJNDQXBVESZIFAELTIOGFPIWCDKNYGUBCAWEPRWJXATHWCEVQCDCHKYBOYURLUEJHBNDNYMWBITKCTDSJBGELMWGMXNKVUPGLNVXOPMWODLMPDVQMROPRUOSMAYUJXQQVHSIQQLGNUSKIMUWAAEIFAKSZCYBCGGXBZPBNRUTZEXDJYAROPTOTOBPPXFREZFHHHTAFISNYHKQFDAEM");

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
    msg.setTimeStamp(0.5960215643048523);
    msg.setSource(36968U);
    msg.setSourceEntity(20U);
    msg.setDestination(20806U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.18546092395915081;
    msg.lon = 0.8795895216615522;
    msg.speed = 0.2567211627825776;
    msg.speed_units = 189U;
    msg.limits = 78U;
    msg.max_depth = 0.6756169428475582;
    msg.min_alt = 0.8140164012291052;
    msg.time_limit = 0.4315062095256086;
    msg.controller.assign("SNNCKYGJOUJQBOOPVMSFEAUFOQWFUOWAMLBJHJDULTJSCCPYMSXYFZLFMKDXEBSGFHJOQXXEQBIWCHBGWQRBAYONJLRDXATPQWANGYUWVIFIHGPOPPCILKQHQMMAFULYKTXXPNTAIYEDSTGITZPSNVOURDHERNDNSBRLRVZWKHFGZWVMKRUIWIKKLOZAUCACXQRHCSWEPDPJXVLGMG");
    msg.custom.assign("ZNCCFIBKZTWTILTREZHMVQYTZFDGYMVBIOGKYHMBMVAZHXYUUIAELXXLNDYQZPUXJXWCAXTIHJUWKYDERBBSNHHPJQCJBYDKSJPCSIHXMCIMWGSSAPXQGVWJVDNUSLDR");

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
    msg.setTimeStamp(0.6237466983188719);
    msg.setSource(19307U);
    msg.setSourceEntity(169U);
    msg.setDestination(16233U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.2514950740112595;
    msg.lon = 0.9359790530009293;
    msg.speed = 0.7859725050816473;
    msg.speed_units = 224U;
    msg.limits = 228U;
    msg.max_depth = 0.9077385176018088;
    msg.min_alt = 0.17834257440346268;
    msg.time_limit = 0.3318067034120382;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.07859589554039659;
    tmp_msg_0.lon = 0.8889487323913292;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("NRNMYPCLCBKSVILBUEGYXIORZRSXUDKEZSIJSOVLQOONUVHGILCJEJJMCWIFYPOSQQBAWHFANQUPKIMGNEIBHLXWXLXTFUKARBWVXHTORAYTDVJDWJZBRJTCHXCLDXZHGRFWWROUUMDHLISAFKSQBFTROCAONVOYPCXVUDWANKZBZHVFREQVJEPAKDAQIZEMSCKTPWSPNPJKMG");
    msg.custom.assign("ZEGMSXOWBHPAPZZOEIWSJPRHUKVPFCIVBLCSSGKNTDSFAIBCXGQHSVLEUQIIZWUGMUKICDCRYTPRBOFWUJNZKWSPBIYTGEHXTHROHYUNXONLJAZYCTXMMBCDNXFDNULJTZRENFTCVDKAWKPKOQLGHFDQWAACAYNQM");

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
    msg.setTimeStamp(0.9868824262893142);
    msg.setSource(53459U);
    msg.setSourceEntity(66U);
    msg.setDestination(40431U);
    msg.setDestinationEntity(230U);
    msg.target.assign("ZJKTVSIQSAFQVYHHDFZCMOZHCPXKUOUZKLGFNUWCWTOLWMDQONXTEHGSOTVPUYDBMOIFGPGJECXUNQWRBEPHDLYRDIWPCIPJVUMSHMBTSTFPMDQRMARLIFAXXYQZGDMRIHTUFCXRKIARDOEGPTJHBVYXVAGZEBJIXOBOPDLBVKDNKHLQZPALXUEYLWEA");
    msg.max_speed = 0.8798980764385503;
    msg.speed_units = 94U;
    msg.lat = 0.3271265281133916;
    msg.lon = 0.08723441130057974;
    msg.z = 0.0899563838376859;
    msg.z_units = 91U;
    msg.custom.assign("XBGZMPKLVREQLKHRZMISUFCJTIZSWLNPPAWDEGZ");

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
    msg.setTimeStamp(0.8371631497597543);
    msg.setSource(3037U);
    msg.setSourceEntity(200U);
    msg.setDestination(39267U);
    msg.setDestinationEntity(62U);
    msg.target.assign("VRLMUKOJNCPFTLEGWIXJPKOIGTAANVBCZNJQPAZYGUQOBZVUFRNZFPNQCPGMJYBROCQZLJLOBCHTKTAQLGIYJNXFFRUAHKRHNCFBTISTFVUYVPLYSZ");
    msg.max_speed = 0.3375716251011365;
    msg.speed_units = 235U;
    msg.lat = 0.5727714326713984;
    msg.lon = 0.40628463056185804;
    msg.z = 0.2633980185465845;
    msg.z_units = 212U;
    msg.custom.assign("HBKPPBFRTBMXPDGGKCIBUDNXDYJUHMWAYPMBJWKZXVICGFJIVOUEQGSLIQFMMPYBFZXPLNOAULZRVJVFLGHLJUHZHHURWDACMWRQJOIIUCWHEDWDAUYCXWDIQEFNYQXAMUAWAAKXEVSEPEMZFBYZGKLNVS");

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
    msg.setTimeStamp(0.7023309109952929);
    msg.setSource(7131U);
    msg.setSourceEntity(166U);
    msg.setDestination(11936U);
    msg.setDestinationEntity(51U);
    msg.target.assign("TFMBVLVANRCRESWHYZVDXFPIGBQLVJZCNCGQAQBJMOSUKHRJWINUDYZIKKQLVZENDAFGWZYYQSTYUGQXBEEZISFXDSYLPERUEFMOWDULXFMBDPEKMTBBVBWKKPGYVEKP");
    msg.max_speed = 0.29078553024749454;
    msg.speed_units = 68U;
    msg.lat = 0.10510141373048254;
    msg.lon = 0.011468121217471205;
    msg.z = 0.3999353543817581;
    msg.z_units = 118U;
    msg.custom.assign("VUMOPXFJSUAUBMJGPASCHIQVYGRPYUKFDHETWJVQSHBHJRASBZKFLXVSVXTNZPQWIQQVINQMEYMFLNDBEIWADYOXKQBKKXSCEWNNTWLEPHVYLCSUYDDWAICWQNYIRXWGABHYLDDSQF");

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
    msg.setTimeStamp(0.62234322437741);
    msg.setSource(58098U);
    msg.setSourceEntity(38U);
    msg.setDestination(58783U);
    msg.setDestinationEntity(85U);
    msg.timeout = 52962U;
    msg.lat = 0.913152113058811;
    msg.lon = 0.32933336810311686;
    msg.speed = 0.778727555261244;
    msg.speed_units = 141U;
    msg.custom.assign("LWCEADNSGJGIXOFQGYTOEEFAPNIKKVDOMCBRQTKBRHCNFTKYBPOXJNSFBXVYZYBXEEZDBWFXDPUIQKEWHRZTOQSONSMLTVYVUM");

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
    msg.setTimeStamp(0.2301496345366445);
    msg.setSource(61518U);
    msg.setSourceEntity(196U);
    msg.setDestination(32022U);
    msg.setDestinationEntity(231U);
    msg.timeout = 29019U;
    msg.lat = 0.20289981392823486;
    msg.lon = 0.2719941484012184;
    msg.speed = 0.8597460274640137;
    msg.speed_units = 95U;
    msg.custom.assign("AKGMVUGSNZZPGJIWMODEAXLL");

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
    msg.setTimeStamp(0.36446145834954535);
    msg.setSource(58448U);
    msg.setSourceEntity(89U);
    msg.setDestination(26580U);
    msg.setDestinationEntity(31U);
    msg.timeout = 58349U;
    msg.lat = 0.32395367531339225;
    msg.lon = 0.06926625769469252;
    msg.speed = 0.6926835371751997;
    msg.speed_units = 186U;
    msg.custom.assign("UOOJBNHDSHKLVVULWSCIDRXMKFEWOQZQEUJYWBJJBJQXYUSAICCFMZUJSTGYKWARSJAMWMYQNHOQPRMITITMSFOPYXECFERDVHXVDDAVOXRPVMOULWFMXSPINHZKSAFPZMWYETDACQBBVOBUEDTJTEQGYYKQRYFXTKZKAJVLOLNRIXFVNGHXILPLPLGGLRPQJNMZSDHWRQSK");

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
    msg.setTimeStamp(0.8568256215881365);
    msg.setSource(36341U);
    msg.setSourceEntity(227U);
    msg.setDestination(8648U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.39766071390600355;
    msg.lon = 0.017332661020256768;
    msg.z = 0.6046212983518731;
    msg.z_units = 196U;
    msg.radius = 0.492382880764375;
    msg.duration = 49943U;
    msg.speed = 0.9333507961166415;
    msg.speed_units = 5U;
    msg.popup_period = 29470U;
    msg.popup_duration = 24606U;
    msg.flags = 190U;
    msg.custom.assign("RXCIPZMFARTPWFREXZPHTUOKHQUZCSFIFGISKAZOMKDGHJPQXCCASLRKOYGPJLDWPNSWTDKBEYEGMRRJFGYLFNQTUUVODXSKOPQHTUVVTJMANZTKWANMYCXXH");

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
    msg.setTimeStamp(0.16866196525431854);
    msg.setSource(36352U);
    msg.setSourceEntity(128U);
    msg.setDestination(47281U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.7661888248379182;
    msg.lon = 0.45541020857204795;
    msg.z = 0.4601888579373843;
    msg.z_units = 65U;
    msg.radius = 0.04374850988565371;
    msg.duration = 37991U;
    msg.speed = 0.19571474014140833;
    msg.speed_units = 16U;
    msg.popup_period = 6323U;
    msg.popup_duration = 50762U;
    msg.flags = 109U;
    msg.custom.assign("YDIPUYWFPASXHNVXCQTBSWWCONRYYJGOIITKILSYPFILDKZNZKWZEXRLVRPDDPTXKEAOMWEMSXHXNQCBUPYFGYNPMLFBCJFDOCACDWMKLTCFQFXBFAFCXKDNHTIDRXARUBBGNQUBBPTQEINHUOHLSZEUGQEKSQHPRZMUJDJVECBOYKSAERCSULMOBFXRJ");

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
    msg.setTimeStamp(0.874468702766402);
    msg.setSource(36983U);
    msg.setSourceEntity(150U);
    msg.setDestination(44747U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.25318450859088204;
    msg.lon = 0.7003907571355276;
    msg.z = 0.9753073914824211;
    msg.z_units = 162U;
    msg.radius = 0.4091777778704526;
    msg.duration = 51254U;
    msg.speed = 0.05556050205159446;
    msg.speed_units = 138U;
    msg.popup_period = 9313U;
    msg.popup_duration = 62413U;
    msg.flags = 43U;
    msg.custom.assign("UIDUNZKCYHBJNTXKVFVF");

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
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.2844309195787573);
    msg.setSource(479U);
    msg.setSourceEntity(94U);
    msg.setDestination(3236U);
    msg.setDestinationEntity(108U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.44292522368190024);
    msg.setSource(57309U);
    msg.setSourceEntity(216U);
    msg.setDestination(27342U);
    msg.setDestinationEntity(206U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.06936171983236972);
    msg.setSource(18251U);
    msg.setSourceEntity(194U);
    msg.setDestination(9387U);
    msg.setDestinationEntity(92U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8549003137185935);
    msg.setSource(62044U);
    msg.setSourceEntity(76U);
    msg.setDestination(30795U);
    msg.setDestinationEntity(111U);
    msg.timeout = 59721U;
    msg.lat = 0.6620057694372864;
    msg.lon = 0.7647704971991006;
    msg.z = 0.7987089468648438;
    msg.z_units = 211U;
    msg.speed = 0.6408243674046058;
    msg.speed_units = 209U;
    msg.bearing = 0.3875695280242605;
    msg.width = 0.7775897205006855;
    msg.direction = 222U;
    msg.custom.assign("SUMGPQRONSQOZVSAIMXUKNUBMJXBPDEZEPMLQNNJNEDVUIUCIVOIVXRDNJE");

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
    msg.setTimeStamp(0.5736794204527185);
    msg.setSource(60231U);
    msg.setSourceEntity(239U);
    msg.setDestination(28708U);
    msg.setDestinationEntity(117U);
    msg.timeout = 36706U;
    msg.lat = 0.34731692839179373;
    msg.lon = 0.5383432148542554;
    msg.z = 0.37705638276000386;
    msg.z_units = 254U;
    msg.speed = 0.6242899497797717;
    msg.speed_units = 21U;
    msg.bearing = 0.4448837387142577;
    msg.width = 0.7062159763929537;
    msg.direction = 147U;
    msg.custom.assign("ZLHEKFBXDWYDJZVGVMPXPXLDSQUQDGYEPIIQEJTXMFGYBBHCHBDKVTQUTOJJYIEWMFHXILAVTTNURPAJJQNANEZEZPOMNN");

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
    msg.setTimeStamp(0.9267323882323821);
    msg.setSource(48739U);
    msg.setSourceEntity(169U);
    msg.setDestination(44801U);
    msg.setDestinationEntity(94U);
    msg.timeout = 65136U;
    msg.lat = 0.7044781938719664;
    msg.lon = 0.13689953290464596;
    msg.z = 0.0996887145972214;
    msg.z_units = 27U;
    msg.speed = 0.36127752836257854;
    msg.speed_units = 119U;
    msg.bearing = 0.21486093009318485;
    msg.width = 0.026601505490437605;
    msg.direction = 197U;
    msg.custom.assign("CVLDGZVYOKPPSQBEMZIQKEGGJIMIIPHEWYNOLKXXFTJFYIFSMYZVRMZLGTKKXCLLEWUPOXFGHJBTS");

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
    msg.setTimeStamp(0.475735771138715);
    msg.setSource(11691U);
    msg.setSourceEntity(244U);
    msg.setDestination(6169U);
    msg.setDestinationEntity(203U);
    msg.op_mode = 215U;
    msg.error_count = 204U;
    msg.error_ents.assign("UCUDKTIXDGBWAJDFKSUEYZFAFDCGXHFXHOSKRHJJLRXBJKRVOULLRTBTCGHLFNKXYGPCYMSZUGMQOVVHHELJMDPUXBLERWOITQYCRTANGNWHLPQIZYWVAUQOPBAZIGYZPHIVWHSEZKIPBSTONMWLMAGPVJXPSEMNWFJXQSZIDJDLGLOKORNAEMQBKKENCRTVEUZZ");
    msg.maneuver_type = 62958U;
    msg.maneuver_stime = 0.4219393691719737;
    msg.maneuver_eta = 50660U;
    msg.control_loops = 1819676502U;
    msg.flags = 56U;
    msg.last_error.assign("QPJAXHIQCNSKMXNEBHVHEVUCRECCLSRGYSYDEFUQKYGTCVRVZNDSISWQZTTFKPSWYGGQSTDTPAQBUWPZXTKVXRNIHCIEFMEYUAFAGOFBUJPNKJQIOYSXLLUXZKYHAKQKZOFFMYUWMXSLIKWBENIOJXNPZJVWYSHLUPEAAVIDVPDVZGOMACN");
    msg.last_error_time = 0.6105586602483751;

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
    msg.setTimeStamp(0.12331734075342937);
    msg.setSource(28405U);
    msg.setSourceEntity(61U);
    msg.setDestination(20568U);
    msg.setDestinationEntity(158U);
    msg.op_mode = 232U;
    msg.error_count = 147U;
    msg.error_ents.assign("EJPAWZKTEDYRPSZDDKKRAEFAZIFDYMNYYREWGVQLUCXVPGGVCHOAWSNQSEGWYPMHYLZBHFMXBHCZTKMLXOKEMGNAVGAMECUWGVXQTQVZWQKPBBNBYLBWQGXZURPSOXMOMKUKDPXBGQDHJOJOFKPISNIMLTVIXSUIUUILVJQDJXCYSTEHZDBDLPJRPHQTFCOMJABDTHRHFL");
    msg.maneuver_type = 8240U;
    msg.maneuver_stime = 0.6668569709959479;
    msg.maneuver_eta = 59454U;
    msg.control_loops = 3377268722U;
    msg.flags = 120U;
    msg.last_error.assign("ERKPWWFHOSXAUZZUPZAKYMVBEFGIBBRQVGGNUYDCJRDTNEZYFVCBCDORIZHMHGZZSYCCQSVLWRLXJGMWKGAVLVDOLQGOJEMNELFNHHNABWTHAJUIWDFWPTYGRSFPQASLHAYVSXLQIOQKDXENLUYRKJSDGJIMPXDSXJYOTPTQKMTOKDJMDBBYUTHKBNXYSHUWHMENAREXMWVLQXZRUZXJQI");
    msg.last_error_time = 0.5214980776205882;

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
    msg.setTimeStamp(0.29655077738116287);
    msg.setSource(40153U);
    msg.setSourceEntity(94U);
    msg.setDestination(50715U);
    msg.setDestinationEntity(35U);
    msg.op_mode = 72U;
    msg.error_count = 85U;
    msg.error_ents.assign("GBNBBOOZEYBJDYKHQHRFXUDZYPWUPGKLXSFKFOJSBWUWJSZZQISTFKMVAHBHPXKHCHJYCLTGVVRLYMKLEKUUXCRRPLZQRKTMTNNIAYCILGMBNSMQVVBQRMQZFWTPDZEITEOSIOTGTUNWSZCDLJEDBORCRYNFVEUAQLUJNOCCQJPEHPIVZLKCJYXRPCKNABSUAMGWIOYQ");
    msg.maneuver_type = 3789U;
    msg.maneuver_stime = 0.7060737990771451;
    msg.maneuver_eta = 37415U;
    msg.control_loops = 3052803983U;
    msg.flags = 67U;
    msg.last_error.assign("GDHWBEBYOJLAODVHJRDFNQYNPHPASQVMSMMQUGMQUMAULMBAHEKQEFTSEWESCECNVMEYQPKOWIQFGTSZDKRSNHYGVDUPKZHCPJPSDLIVEOBTFUURSFFJBOWH");
    msg.last_error_time = 0.40235522304202154;

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
    msg.setTimeStamp(0.9711536039333063);
    msg.setSource(47821U);
    msg.setSourceEntity(196U);
    msg.setDestination(49387U);
    msg.setDestinationEntity(65U);
    msg.type = 107U;
    msg.request_id = 17761U;
    msg.command = 131U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 42813U;
    tmp_msg_0.rpm = 0.654205906680323;
    tmp_msg_0.direction = 22U;
    tmp_msg_0.custom.assign("RMOGZBKPYYGLHYYI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 11998U;
    msg.info.assign("DQZNCKUBRCCAQBJVCSIMXQEZROJMLUAIXPVVPGRHINWOAFSDPHAZJUIZJTRYBZSKFOFXSNLHMUENTFOCOMKZPQNCOBTWYMFYXAEBYWEAXVMVDGYJYTAMYHBSLTSRTOQOEQPSHTWDZORPSGMHGYOWKGUGDPTUIYIFXLENVHUFNGULJBBMDDSFESFBWLFKNPLLPLVJQQHEHIKN");

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
    msg.setTimeStamp(0.4630571779040653);
    msg.setSource(34676U);
    msg.setSourceEntity(230U);
    msg.setDestination(11858U);
    msg.setDestinationEntity(63U);
    msg.type = 51U;
    msg.request_id = 60525U;
    msg.command = 229U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("KHXVEKLYTVIFFJWLOFDYVCOGUZYLSCTULVHPJTBFXCMNXZKOMEWQZOIXGBPQQPGAMCXMLDCDTEEPBJQPYPCGRHRJTOANLJEQGTRUUGTUHKTRMQDLZXZGHNJQJVNCNUOYSTADFWEABMSSUICRFKWATVVDIS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43854U;
    msg.info.assign("BRSRJOVMVPXMRDKETZDQTBSITFFITXAPJMQDPWAKCVGZVDOHSZWYHAYHWPJQNUDHJXXRKOVECCKZHSIYCSELMWZBYFMTZKJDQGOUJXJVWNXBFLPOCINFKKFJHICWGIVMNYGBITRLVA");

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
    msg.setTimeStamp(0.8645825697692574);
    msg.setSource(49698U);
    msg.setSourceEntity(240U);
    msg.setDestination(44370U);
    msg.setDestinationEntity(223U);
    msg.type = 106U;
    msg.request_id = 47334U;
    msg.command = 223U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.9356758988866252;
    tmp_msg_0.lon = 0.29726739557899695;
    tmp_msg_0.z = 0.23954581948514297;
    tmp_msg_0.z_units = 238U;
    tmp_msg_0.speed = 0.7052060260925591;
    tmp_msg_0.speed_units = 193U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8779896686657548;
    tmp_tmp_msg_0_0.lon = 0.8982466556375536;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("QBPJJVZGYPLGNTBFCXCDPIHDCAFLZDJTOGBWSUSFXRACDUYWLTBQYXONPQEKLWAWSFUDJLIFBPOYNMCVWSQTXTLCMHETRBIPZZPUUYSRMIPRDWRRYAZIOVNGAUEMGXIUIIKSQCYGHOELNNTDVLHAX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64819U;
    msg.info.assign("GGXBCDSRCVVGQWGSZCMIGJHRJFJZUQDCODBEYNJOWRCLHBYZBIYOUTYXSLDGEBXUQLJSHKMFKQTXAZBMBMAHVNFHTSQHZZFWXTLNAGLAXMVDNMVLY");

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
    msg.setTimeStamp(0.8178694257378302);
    msg.setSource(58159U);
    msg.setSourceEntity(186U);
    msg.setDestination(49375U);
    msg.setDestinationEntity(111U);
    msg.command = 242U;
    msg.entities.assign("MFNESCVZPCCDGUVQYIMPTZEWFWSIGIBJBPKEZHXSMEPMOOZZZCDGPIZSBSLNYQHBWRTMHHXEFPGGCKBJLLORTJWSURYEAYUXCOOMULMKALKRHSNLYQJKADJABCQBV");

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
    msg.setTimeStamp(0.6585847321611223);
    msg.setSource(51720U);
    msg.setSourceEntity(61U);
    msg.setDestination(20122U);
    msg.setDestinationEntity(118U);
    msg.command = 127U;
    msg.entities.assign("ZYRUOXNKWZTJQTXVPLIHFGUUELZACOYWZFIPVNGMAUPZVIEOZSTLUSYFINDJGUJABXRLKSEDENYWRDZHPEGRLBJKDWEDFPICDRLNEHMPHEIQWOONCWQLQFHOJOMYDTKAMYPCYAFCPHVVJDATGSQSRYTQGHEBJWTWXSFSWPXTMFKGMOMVFUQQKXIWSXHVKBSNLNR");

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
    msg.setTimeStamp(0.8168917062038346);
    msg.setSource(6914U);
    msg.setSourceEntity(222U);
    msg.setDestination(32049U);
    msg.setDestinationEntity(87U);
    msg.command = 33U;
    msg.entities.assign("VQCNGDGVMBZATYYVMBPJVCERNBRBNCCOQXWNPVNEQUJRURAAJCGMTZTDWUJCGZOSJAGKGWJSFLJWUFMAJWEYEPXLQCPGHHMLHUSUQYSBPYENMXZRXKIEQBQJLIWKQDDTIYXRPIVLGTLRNMHUMZSACXDIJHNFQ");

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
    msg.setTimeStamp(0.54836938650261);
    msg.setSource(24608U);
    msg.setSourceEntity(66U);
    msg.setDestination(26332U);
    msg.setDestinationEntity(2U);
    msg.mcount = 21U;
    msg.mnames.assign("KAPIRIBVEYRXSVNWIIUZRUURZCJSTKTCHWBLLQQQVMWFHCXXIHPUXEHNQNKVROFIXCTLBQYWMUHYPZCOTQHWEXILPSPYJQVDZCENPUDFAAUAMMGYXAWSOORTRAKGCGUIHYKMZPBBMAJYRDJRFEZXDFZWKFYCJHVQHFLONLOWDAIGTGX");
    msg.ecount = 150U;
    msg.enames.assign("ELWBQRNSQICUMLPXWYZKHQYWMOCIIQHLCPBLMDMZFPNNOSCQJRFTASIJDWUMEGZVETOIAYZADLAOWCPTFPOQCEARPAHMWOVBXRSFMPFEXAZGYGSEHQOWRKXSZFTGOYQIJBCEGNJYZBHVLIVFUBGJTDEXWGUHYTVHDHSRORYGKNUMEPZFQCJAJWVDNUTKDLXKBSTZETIIQRHXURNVDTUASB");
    msg.ccount = 210U;
    msg.cnames.assign("FKSCUUZOGAAOAZKJBOIXKDCNLJNYZQNMUHAPW");
    msg.last_error.assign("JDFFNORUQJGXWHZKWRVHECDGVYJWBITZBFWZXTCVKFHHYNRAQCGJNVOKDFSIMNNHSUDPJYOQPQBCMPPSMUMMKONTSOYOVZCLGXIAXUPTDZTNLNEXTBKEUMBWWQOUVAMOCZMLJHROMAIEXFQSXQTLXBZIDBIFINBVLUCUGVOZSRBDCGHDASDCSKWQGLYAWJREPKPLL");
    msg.last_error_time = 0.8027634046269311;

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
    msg.setTimeStamp(0.6063335950046592);
    msg.setSource(8920U);
    msg.setSourceEntity(249U);
    msg.setDestination(47037U);
    msg.setDestinationEntity(190U);
    msg.mcount = 201U;
    msg.mnames.assign("YMKJVNYKHYIYCESMBKLDFWUFMOJUEXQAPTWRISPVHVXSLBFNPYLSSWOCVTFBZDFPQHZXJQTSQLDGCCGCUXUAOXIJTJXAUDUNCEWNWOWTPMYNAIUPEQFMBVUNVHDRTOGVDLGHHLKYWGOKSRZA");
    msg.ecount = 14U;
    msg.enames.assign("LDMYEQIVJDMQUCVFJTAJLXUFZBRNSQLPCHMRQANFVMBTTBGSKLJFWNXYZSFTLBEGMGEOLBQUHUUTQGDNYXEFSEGBPOMYZPAFBRZSVQRYOZLJOUSBZCGWDQOXPBDYWWUXVPHWRCQITNICNTTPHZRVIYHNPIJFJQZE");
    msg.ccount = 128U;
    msg.cnames.assign("IDMYHPUGNCQDLEUSGJRVJHWKXYPMVYAIQBEORYQXXKWYSVVKNDHIBKSXNFWGMDCPJDKTCZCHXAWZYJTQERYBHBROOMVWVFSFHPBVLMIASOZUPTVF");
    msg.last_error.assign("XCRPPZFORVQMALCUQQVWTECBMZDQFUYJNURDYYPNWCQVNHSFSYFCXMJBMTKBXWYOGRIJYVVIOXUHTDDIZYHLZMHEGSOHNFYDNKPWSPGBJZWCSVXCGBELNUHAJBBILZIPZEAOYIATGAZVGAGVDLKTFLKJXGRWFBTXZKKEEMQJNUDFEGSSAEQRHDLHRIUQLOJJFMMUKAPHIIANENXYSTTTEQORKDOMWBPS");
    msg.last_error_time = 0.9556609781712301;

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
    msg.setTimeStamp(0.5216790999701634);
    msg.setSource(10690U);
    msg.setSourceEntity(228U);
    msg.setDestination(34928U);
    msg.setDestinationEntity(192U);
    msg.mcount = 42U;
    msg.mnames.assign("XKQIQNJYHPNHEUKVJAJUGZSXLVZXEDDKKVBIPEMRJYOPCYBBCWCDNXBPGNNPLMWSGVGLESBRAHATAZZZNDCATDTMSKBORFXXSHNYD");
    msg.ecount = 91U;
    msg.enames.assign("WJMQLMPZPDAFPVOBYDVYTKKIJNPEGOSWUQBRUFARLQIHVFWIRLSVMXZKISTLCQLGUOYVPEMACPXANMBXCZTCETTFDADHBAZJETGTGKCVURSHXCPWNUGJHOJGMYHLXDDKXSSKIFOSHUUWDOAXOYBPZACIGJJRCTFPZZRTYWFTDYIRVCDKLRSNXDBIZAHLQNUKQMXUQQGJWQJZNOHJZBIOBFWEKBESBWPVILMNHEKXN");
    msg.ccount = 226U;
    msg.cnames.assign("CRVTGMOACRZTGJOZXQYZDFNZACNWIEDTKQFLCPEAXIPWVPEDSGVYYEXVPMOOFARKCGOPEZQWLFYRRZBKWKTHSKXBJKLYAZUMYEBHDLYXHIRFUVORBEBKPPMHSFBR");
    msg.last_error.assign("YIZLIVBAJSCCEEVZQRRTIMAJPHNSRUUHHTZJBCTOFDIBTRNIINQPMEPCMFUWFXLUKSKOLLHTJQSEJSFGDIRMOXDEDXRVJBNBXLVCLRTPKRBSOUCTUCFEKHQ");
    msg.last_error_time = 0.6684404918174809;

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
    msg.setTimeStamp(0.20046275288763749);
    msg.setSource(14818U);
    msg.setSourceEntity(238U);
    msg.setDestination(40243U);
    msg.setDestinationEntity(142U);
    msg.mask = 50U;
    msg.max_depth = 0.09877781567020238;
    msg.min_altitude = 0.2507993851170166;
    msg.max_altitude = 0.7179145905163032;
    msg.min_speed = 0.6908956498551467;
    msg.max_speed = 0.7270762055697957;
    msg.max_vrate = 0.3378409303946399;
    msg.lat = 0.7452418036136055;
    msg.lon = 0.04985964110452079;
    msg.orientation = 0.1712218169240023;
    msg.width = 0.12171814477014387;
    msg.length = 0.15676353177027913;

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
    msg.setTimeStamp(0.4956892953455765);
    msg.setSource(18058U);
    msg.setSourceEntity(151U);
    msg.setDestination(32145U);
    msg.setDestinationEntity(89U);
    msg.mask = 226U;
    msg.max_depth = 0.7310057754721684;
    msg.min_altitude = 0.02527761126171124;
    msg.max_altitude = 0.17948251558725425;
    msg.min_speed = 0.27272148068161484;
    msg.max_speed = 0.5043562085068573;
    msg.max_vrate = 0.30967689822745015;
    msg.lat = 0.8984864154221257;
    msg.lon = 0.16473159811853244;
    msg.orientation = 0.5125702883762004;
    msg.width = 0.13358440246329417;
    msg.length = 0.3804535394908972;

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
    msg.setTimeStamp(0.7409220289753606);
    msg.setSource(12571U);
    msg.setSourceEntity(245U);
    msg.setDestination(28438U);
    msg.setDestinationEntity(51U);
    msg.mask = 203U;
    msg.max_depth = 0.9744378758446297;
    msg.min_altitude = 0.48931520287791064;
    msg.max_altitude = 0.7685525582101647;
    msg.min_speed = 0.06964272812226069;
    msg.max_speed = 0.2700972405424059;
    msg.max_vrate = 0.9819138333321193;
    msg.lat = 0.3518389863460706;
    msg.lon = 0.27939461188225956;
    msg.orientation = 0.919333110151233;
    msg.width = 0.16289029783692033;
    msg.length = 0.18997108749783287;

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
    msg.setTimeStamp(0.1521533623451049);
    msg.setSource(15506U);
    msg.setSourceEntity(210U);
    msg.setDestination(5583U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.24834986947583237);
    msg.setSource(58682U);
    msg.setSourceEntity(39U);
    msg.setDestination(27910U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.4080822449495082);
    msg.setSource(37887U);
    msg.setSourceEntity(109U);
    msg.setDestination(33225U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.8237630463095506);
    msg.setSource(44528U);
    msg.setSourceEntity(144U);
    msg.setDestination(12459U);
    msg.setDestinationEntity(62U);
    msg.duration = 22166U;

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
    msg.setTimeStamp(0.6504103891665212);
    msg.setSource(19750U);
    msg.setSourceEntity(87U);
    msg.setDestination(63977U);
    msg.setDestinationEntity(56U);
    msg.duration = 56454U;

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
    msg.setTimeStamp(0.2717093785200728);
    msg.setSource(55842U);
    msg.setSourceEntity(237U);
    msg.setDestination(64376U);
    msg.setDestinationEntity(229U);
    msg.duration = 3336U;

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
    msg.setTimeStamp(0.33417762942448903);
    msg.setSource(10329U);
    msg.setSourceEntity(235U);
    msg.setDestination(31302U);
    msg.setDestinationEntity(175U);
    msg.enable = 45U;
    msg.mask = 1344722353U;
    msg.scope_ref = 2057262898U;

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
    msg.setTimeStamp(0.8824101385517559);
    msg.setSource(46948U);
    msg.setSourceEntity(199U);
    msg.setDestination(24707U);
    msg.setDestinationEntity(20U);
    msg.enable = 164U;
    msg.mask = 4129275527U;
    msg.scope_ref = 2838530893U;

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
    msg.setTimeStamp(0.8514675099446971);
    msg.setSource(53326U);
    msg.setSourceEntity(25U);
    msg.setDestination(29156U);
    msg.setDestinationEntity(163U);
    msg.enable = 2U;
    msg.mask = 1357735618U;
    msg.scope_ref = 1213502432U;

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
    msg.setTimeStamp(0.7289748346266892);
    msg.setSource(17756U);
    msg.setSourceEntity(171U);
    msg.setDestination(33759U);
    msg.setDestinationEntity(188U);
    msg.medium = 211U;

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
    msg.setTimeStamp(0.8687309598503492);
    msg.setSource(52911U);
    msg.setSourceEntity(231U);
    msg.setDestination(15839U);
    msg.setDestinationEntity(198U);
    msg.medium = 207U;

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
    msg.setTimeStamp(0.4989258609791385);
    msg.setSource(41095U);
    msg.setSourceEntity(178U);
    msg.setDestination(1826U);
    msg.setDestinationEntity(215U);
    msg.medium = 60U;

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
    msg.setTimeStamp(0.029524180698982994);
    msg.setSource(27527U);
    msg.setSourceEntity(70U);
    msg.setDestination(58042U);
    msg.setDestinationEntity(173U);
    msg.value = 0.6716517123329756;
    msg.type = 0U;

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
    msg.setTimeStamp(0.11194835934921821);
    msg.setSource(59581U);
    msg.setSourceEntity(172U);
    msg.setDestination(4570U);
    msg.setDestinationEntity(179U);
    msg.value = 0.5842338643413065;
    msg.type = 187U;

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
    msg.setTimeStamp(0.7955206415521778);
    msg.setSource(44914U);
    msg.setSourceEntity(226U);
    msg.setDestination(56052U);
    msg.setDestinationEntity(53U);
    msg.value = 0.20759533142324427;
    msg.type = 195U;

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
    msg.setTimeStamp(0.9779358119881348);
    msg.setSource(4370U);
    msg.setSourceEntity(59U);
    msg.setDestination(35542U);
    msg.setDestinationEntity(248U);
    msg.possimerr = 0.3923493377613765;
    msg.converg = 0.9267886290989623;
    msg.turbulence = 0.9526852438611068;
    msg.possimmon = 194U;
    msg.commmon = 110U;
    msg.convergmon = 79U;

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
    msg.setTimeStamp(0.2640569341856567);
    msg.setSource(43250U);
    msg.setSourceEntity(160U);
    msg.setDestination(37958U);
    msg.setDestinationEntity(70U);
    msg.possimerr = 0.6216189740614306;
    msg.converg = 0.24290436865829912;
    msg.turbulence = 0.20584261045890473;
    msg.possimmon = 243U;
    msg.commmon = 143U;
    msg.convergmon = 150U;

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
    msg.setTimeStamp(0.6194578332492972);
    msg.setSource(20223U);
    msg.setSourceEntity(33U);
    msg.setDestination(53448U);
    msg.setDestinationEntity(235U);
    msg.possimerr = 0.07915742258660052;
    msg.converg = 0.3818357851868128;
    msg.turbulence = 0.3087490270708666;
    msg.possimmon = 153U;
    msg.commmon = 65U;
    msg.convergmon = 229U;

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
    msg.setTimeStamp(0.5311658838235418);
    msg.setSource(63761U);
    msg.setSourceEntity(43U);
    msg.setDestination(5934U);
    msg.setDestinationEntity(68U);
    msg.autonomy = 207U;
    msg.mode.assign("ZHDQSWOCWFNDIHNSXLFCLPMYARHXDCZGRRVPSETRJRETTJVXTPWYAOCEZHYTEDWUTYLPIFQUPBGADNVBOFUNTGEHCGHXGMYOLTJVEBAUPKGTJAYSABWMRTIOKVFBCGXXKUQNUWNOXHJWHVGZACDQNQHVCMWMSQPIKDLGIUBBIOZDKYSBEWLMZXFCRP");

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
    msg.setTimeStamp(0.23716574520107359);
    msg.setSource(7364U);
    msg.setSourceEntity(62U);
    msg.setDestination(13319U);
    msg.setDestinationEntity(64U);
    msg.autonomy = 174U;
    msg.mode.assign("PERWUHBWZLVJDHRZNASWANOFGOWCDPYLRDIXOSMFHIVCFUSDRRCJJSZQJKQPFMEYKJRYKNTLZGDTMUFEZPPPXWIVA");

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
    msg.setTimeStamp(0.5542998461793476);
    msg.setSource(20342U);
    msg.setSourceEntity(169U);
    msg.setDestination(16476U);
    msg.setDestinationEntity(146U);
    msg.autonomy = 208U;
    msg.mode.assign("JHJXZRYSFDEJIBPOFHBAAAAEAYIYMIMKRYNZETXLLVEGFFQBZTEJXVMPJVUZJQUPKZJKNOUHVWHHIFCMTRTCUCDWHGAXS");

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
    msg.setTimeStamp(0.4160174192041701);
    msg.setSource(9961U);
    msg.setSourceEntity(185U);
    msg.setDestination(38611U);
    msg.setDestinationEntity(169U);
    msg.type = 202U;
    msg.op = 178U;
    msg.possimerr = 0.300865071131305;
    msg.converg = 0.2728409555245912;
    msg.turbulence = 0.3475012668888926;
    msg.possimmon = 96U;
    msg.commmon = 94U;
    msg.convergmon = 169U;

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
    msg.setTimeStamp(0.259478408240454);
    msg.setSource(30938U);
    msg.setSourceEntity(183U);
    msg.setDestination(22099U);
    msg.setDestinationEntity(67U);
    msg.type = 77U;
    msg.op = 1U;
    msg.possimerr = 0.9776713424107843;
    msg.converg = 0.025145782062519495;
    msg.turbulence = 0.3456482958536541;
    msg.possimmon = 26U;
    msg.commmon = 100U;
    msg.convergmon = 19U;

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
    msg.setTimeStamp(0.7515920048611353);
    msg.setSource(37414U);
    msg.setSourceEntity(87U);
    msg.setDestination(19019U);
    msg.setDestinationEntity(138U);
    msg.type = 235U;
    msg.op = 7U;
    msg.possimerr = 0.18145327529974398;
    msg.converg = 0.7615159222896317;
    msg.turbulence = 0.41153132207537135;
    msg.possimmon = 191U;
    msg.commmon = 172U;
    msg.convergmon = 71U;

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
    msg.setTimeStamp(0.7112718858261932);
    msg.setSource(45781U);
    msg.setSourceEntity(155U);
    msg.setDestination(21996U);
    msg.setDestinationEntity(41U);
    msg.op = 5U;
    msg.comm_interface = 243U;
    msg.period = 26305U;
    msg.sys_dst.assign("VHZUWYRNZIGFROZCVCUHDPJGMUSGNKPARSQZHEILXLEAWHIKCPLPPESPCSZEEFDIMCTYWGRYMWLODRKKZHBRKDTJXHDJQCOFWQBLUFANMVYKWUTAWYUBGEXRSBLRUHA");

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
    msg.setTimeStamp(0.7607140508324841);
    msg.setSource(56267U);
    msg.setSourceEntity(188U);
    msg.setDestination(60794U);
    msg.setDestinationEntity(57U);
    msg.op = 19U;
    msg.comm_interface = 59U;
    msg.period = 57821U;
    msg.sys_dst.assign("SNPZULRHDMTUVGORPKJLBWRFSXWCJAOYOHXDEIOCVYIXQONYTNJJCGYVQXEPAYMMEAEFFMKVWDULCKIAHBUULCMBGZKLTQAWTI");

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
    msg.setTimeStamp(0.5932907260069158);
    msg.setSource(46817U);
    msg.setSourceEntity(237U);
    msg.setDestination(19316U);
    msg.setDestinationEntity(71U);
    msg.op = 135U;
    msg.comm_interface = 209U;
    msg.period = 43665U;
    msg.sys_dst.assign("YSJRTMXDMQRKCZUFSZPNACBDVTDRHABAGEUSXXIKZOJMUNGCO");

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
    msg.setTimeStamp(0.16142771244212029);
    msg.setSource(41097U);
    msg.setSourceEntity(242U);
    msg.setDestination(17816U);
    msg.setDestinationEntity(87U);
    msg.stime = 2356218031U;
    msg.latitude = 0.874191848932328;
    msg.longitude = 0.7392677158315955;
    msg.altitude = 12408U;
    msg.depth = 10987U;
    msg.heading = 57299U;
    msg.speed = 17751;
    msg.fuel = 66;
    msg.exec_state = 92;
    msg.plan_checksum = 2592U;

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
    msg.setTimeStamp(0.4058085887177838);
    msg.setSource(8119U);
    msg.setSourceEntity(64U);
    msg.setDestination(47565U);
    msg.setDestinationEntity(123U);
    msg.stime = 1791734355U;
    msg.latitude = 0.055371667611767705;
    msg.longitude = 0.5745674448636021;
    msg.altitude = 31721U;
    msg.depth = 62301U;
    msg.heading = 32183U;
    msg.speed = -24868;
    msg.fuel = -40;
    msg.exec_state = -97;
    msg.plan_checksum = 63178U;

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
    msg.setTimeStamp(0.9196187214422906);
    msg.setSource(31578U);
    msg.setSourceEntity(96U);
    msg.setDestination(12634U);
    msg.setDestinationEntity(26U);
    msg.stime = 3712663789U;
    msg.latitude = 0.32308101742248585;
    msg.longitude = 0.2714769984183044;
    msg.altitude = 14328U;
    msg.depth = 5429U;
    msg.heading = 39831U;
    msg.speed = 1695;
    msg.fuel = -61;
    msg.exec_state = 84;
    msg.plan_checksum = 60059U;

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
    msg.setTimeStamp(0.9739307611899863);
    msg.setSource(43447U);
    msg.setSourceEntity(128U);
    msg.setDestination(40294U);
    msg.setDestinationEntity(123U);
    msg.req_id = 32523U;
    msg.comm_mean = 80U;
    msg.destination.assign("DMUDVOFDOKBHEOLWBHEEMFNYIEZWNMNNQTUXVTCXQMM");
    msg.deadline = 0.696602770232426;
    msg.range = 0.8406768065294254;
    msg.data_mode = 171U;
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 96U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KXKYCVIEIYEQMYXYWLSUAPASAIYAEZQDFVILWZSFGSRFCFDNKRJVCNGHELOVLVPOWCBQWJGSTLRYCMFACQKTLHHNUPPBRLBDXTVZETUXJVPBOLBEFVMRMGOGQPPUWSHUAQUSXMCHOTODJMXPKOFHKTZDA");
    const char tmp_msg_1[] = {-80, -2, -93, 26, -35, 124, 84, -113, 32, 80, -127, -86, 29, -81, -91, 95, 18, -10, -117};
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
    msg.setTimeStamp(0.27799005909505037);
    msg.setSource(22073U);
    msg.setSourceEntity(107U);
    msg.setDestination(52358U);
    msg.setDestinationEntity(48U);
    msg.req_id = 13232U;
    msg.comm_mean = 26U;
    msg.destination.assign("RXBDACCONIWQPFDFYHQQNJHAJBZMTVIFRLODTFSGHZTHCDYXSUOTKIRQSXEFOKICSZZVXDFWKNJQZ");
    msg.deadline = 0.7588682067049805;
    msg.range = 0.5923154899881392;
    msg.data_mode = 193U;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("PEFJTZDMXKSPJUUFMNOYAHVJYZDEQSASVKOWLXXCIVEVUSRAFAMXUAIITRHPWQHTTRKARFNCPJZZGSLRLJBDPPCTAZMMEIWOCTBDDHNVIZXHZQGOFKJHGXOYRAELKNNQFZIYXPNXOYJBYLTWIUSNKLLLRECHNSXKCMIEBYICVDDEOUGWBQTHWUGJRHLFTGKWQRYDYSLMBBVEKGVGSCCNZJZFNTMSDQFW");
    tmp_msg_0.plan_size = 21866U;
    tmp_msg_0.change_time = 0.8173888271037248;
    tmp_msg_0.change_sid = 18082U;
    tmp_msg_0.change_sname.assign("GEKVWSJIBNNYHGRRDKJQKRNKOFGHYKIDMFPAHMNVEVZHUOKTGQKBWIBUJLWDKJQWFLFDWITVTGEJRZLOUBCYLUIMQNSSUSLTPDXZYPZIOALQEQYKSBJLLYPCMWGAFTUOTIVNZPAMZSGRJHOBMVATPMCHRCQPALWZCCBEEXOXFXXGNXAQCDGTYXQNFVVLKPTYZWNHDENPUDRXOZJIXUBOFJC");
    const char tmp_tmp_msg_0_0[] = {-103, -52, -1, -82, -113, 54, 45, -108, 53, 86, 105};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZQXOMAFNCVNJDCZDYCVGCQZNIEKIQXTDRATXYNHPPJWIPEZAOJUSBMEEEXSPKLCGHKQREBNGPGTYSIYIJBHWGUTAWLIAYVURZETHFOFTIPJUVSHMJGEGJKAMDWJFOQKKLYTMUNXRUYJZKBOVFZVMWIRIHPXBVLSRDLDLZMGFQFKCNHGBTDKVGBATFLRXOFNKSZAYDMQLPSOCWLHCAHU");
    const char tmp_msg_1[] = {79, 13, 23, -36, 90, -112, -128, 104, 66, -75, -75, -68, -10, 30, -56, -10, -72, 59, -65, 121, -6, 35, 20, 73, 20, 10, -69, 23, 111, 20, -127, -31, -118, -59, 88, 66, 37, -26, -80, -6, -93, -51, -70, -32, -45, -85, -15, -62, 32, 93, 78, -126, -46, -107, -26, -38, 46, -22, -22, 103, -13, -83, 125, 86, 63, 14, -112, -81, 10, -114, -91, 57, 46, 110, -58, -59, -41, 12, 90, -96, -113, 116, 6, 117, -7, -65, 28, -50, -128, 94, -42, -50, -67, -2, 2, 67, -45, -98, 81, 111, 54, -78, 100, 101, 80, 105, -34, 0, 20, 81, -107, -51, -44, -52, 74, 103, -79, 90, 61, -94, -11, -103, -82, 35, -62, 52, -94, 83, 11, 76, 38, -31, 45, 110, -97, -88, -8, -73, 69, 68, 122, -124, 42, 32, -61, 70, -96, -98, -88, 124, -47, 65, -121, 78, -82, -109, 59, 20, 37, -92, 82, -74, -101, -33, 42, -83, 26, 26, -112, 46, 86, 87, -97, 32, 33, -60, -74, 86, -58, -56, 15, -117, -12, -105, 35, 34, 5, -94, -122, 117, 41, 6, -57, -89, 91, -35, 34, -38, -125, 97, 4, 36, -81, -108, -21, -78, 72, 37, -71, 85, -98, -57, -101, 18, 48, 111, 83, 101, -50, -49, -120, 54, 118, 43, 21, 102, 96, 102, 35, 104, 106, -67, -85};
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
    msg.setTimeStamp(0.9251295338883735);
    msg.setSource(47417U);
    msg.setSourceEntity(119U);
    msg.setDestination(54702U);
    msg.setDestinationEntity(56U);
    msg.req_id = 39548U;
    msg.comm_mean = 213U;
    msg.destination.assign("UGBNSPTUSZZEUBNMJUDSZCVFLCRGPIPVEMFCSPIGCASYLLTPGPNXAFGTHQENKASMAJLWQODWXHKI");
    msg.deadline = 0.3115773023073518;
    msg.range = 0.267548058775126;
    msg.data_mode = 213U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.045980809198365225;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LUAIPFLDTDLVMNXJZQWTCHNVCRR");
    const char tmp_msg_1[] = {-97, 125, 51, -35, -73, 50, -24, 110, 82, -118, -44, -94, -124, 22, 91, -4, 110, -105, 21, -126, 92, 81, -76, 88, -107, -55, -93, 112, -120, 104, -67, 67, 73, 113, -102, -90, 3, 108, -15, -13, 38, 31, 102, -45, 111, -71, 46, 31, -99, 107, -58, -126, -36, -25, -48, 41, 106, 53, -20, 44, -124, -14, 27, 60, -15, -27, -122, 50, -90, 109, 0, -15, 88, 78, -117, 16, 41};
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
    msg.setTimeStamp(0.6287586142169714);
    msg.setSource(38670U);
    msg.setSourceEntity(51U);
    msg.setDestination(24095U);
    msg.setDestinationEntity(147U);
    msg.req_id = 34542U;
    msg.status = 35U;
    msg.range = 0.36379336205962776;
    msg.info.assign("OPIKMEYTBOBXHRTWJOFWKSFZXANVHRCEUCQGUPQBTWPHWTCTCKRENMSHFSGYWLIOYRXZDCDQDJWLJHDLAFXUHQDKYMLJXPVYKZFRSKOVNWEMPFRID");

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
    msg.setTimeStamp(0.07046595386257815);
    msg.setSource(51668U);
    msg.setSourceEntity(241U);
    msg.setDestination(38267U);
    msg.setDestinationEntity(233U);
    msg.req_id = 32436U;
    msg.status = 99U;
    msg.range = 0.7526564497780711;
    msg.info.assign("DIGCHZZWTCWQLCUWXBUTNWUBPIUZUKEHGZXDFZIKPRDBXLXVRDIFUATGDQBZSKJXXQHFFPPDLQLYWQSBECANTTKC");

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
    msg.setTimeStamp(0.8557053030676894);
    msg.setSource(9485U);
    msg.setSourceEntity(85U);
    msg.setDestination(37735U);
    msg.setDestinationEntity(130U);
    msg.req_id = 14657U;
    msg.status = 27U;
    msg.range = 0.4493023389360008;
    msg.info.assign("DGGSVOQRMYBMEODCHQ");

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
    msg.setTimeStamp(0.5779977480729542);
    msg.setSource(60053U);
    msg.setSourceEntity(211U);
    msg.setDestination(62180U);
    msg.setDestinationEntity(18U);
    msg.req_id = 62783U;
    msg.destination.assign("ONNIVCAJWZSMYHOGBIUYMAPQSFRKTKSGTLUPQMNXUYORERMRKOHBKJLHXZHYDNNYGGVEKPLOXRDALCXTYXQSLBEZCOUQBRFPDBUZTDVGZXSTVPNMLPNSFFAXJWMTIKIJUEZMKHEFIJZRRSGPPOCSANGXIGIFOULDMEZDAVANZWWPWCBWTUFDGUVIQHSEHVCDORYMULHQOEVWCD");
    msg.timeout = 0.7059728794745018;
    msg.sms_text.assign("OXBFBXOTGFANSLJSSNDQEPZNNFRQVVBJHHBROJQPSVILHWCMAK");

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
    msg.setTimeStamp(0.0012338720123598046);
    msg.setSource(1100U);
    msg.setSourceEntity(173U);
    msg.setDestination(65291U);
    msg.setDestinationEntity(168U);
    msg.req_id = 44603U;
    msg.destination.assign("ORARUGVSAPTJTHBOFEXDTIVIWXKOSASTQLPKGRDA");
    msg.timeout = 0.025741456247120875;
    msg.sms_text.assign("FMRQXVJFOIQVAVUZWHSBGOMOEACCVNJQRKVYMLXYPCXYFDSTDJYOPPFQMUFCESTKPDJPAHAHFQOALKRFDNQYINTEEMDCLEWNXKRPHICGDBIWKHCNISKTGZDYHDFWCVTSGBERPYUUCXQNZOLGXBZSHBEWBFMXEDHALQJGTZIJWBIVSPNJZKJIUGFHYQZJKAUXTOVUM");

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
    msg.setTimeStamp(0.3611574171220985);
    msg.setSource(28054U);
    msg.setSourceEntity(245U);
    msg.setDestination(35890U);
    msg.setDestinationEntity(226U);
    msg.req_id = 48118U;
    msg.destination.assign("AZIVPUFYEAXISBDXXTJYUGTWRZDGZNGCXUZXLFMRABKMFTTYPQDVWMIKQENFYBWNENBRS");
    msg.timeout = 0.5881449495072187;
    msg.sms_text.assign("BJPXFXTWZTNGCZDOWLCZHFULCFRQZPSOTD");

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
    msg.setTimeStamp(0.29476472801014686);
    msg.setSource(13519U);
    msg.setSourceEntity(179U);
    msg.setDestination(3046U);
    msg.setDestinationEntity(94U);
    msg.req_id = 64479U;
    msg.status = 246U;
    msg.info.assign("BDGHXNXVLVLFVREBDQPFXNIQYAAGQJGPBBKMEQNRHROWODMPUVYTIDJFYOPWMTALZYIPZTLTHPKTZFSZLIGNVUBAJDNOFCVZSWYMUQIEZHMADZCBBCWRECEXNUUDUZSKVMNRVJWEUNWKYLRCSMCFUPISJPLGJENQESEHOHFJRYKQSTSXFIBXRZWKGMIMYVA");

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
    msg.setTimeStamp(0.12881500274363444);
    msg.setSource(36707U);
    msg.setSourceEntity(215U);
    msg.setDestination(11678U);
    msg.setDestinationEntity(103U);
    msg.req_id = 44418U;
    msg.status = 87U;
    msg.info.assign("NXBPPIDKNUYLZKUNPMTSRQWTMRDJFTOGRNPVELEKXPGNPUNXYPQGEHWJPIE");

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
    msg.setTimeStamp(0.7487666799870425);
    msg.setSource(1343U);
    msg.setSourceEntity(238U);
    msg.setDestination(11442U);
    msg.setDestinationEntity(174U);
    msg.req_id = 57883U;
    msg.status = 144U;
    msg.info.assign("BRIGEMGLOTAZDX");

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
    msg.setTimeStamp(0.7002868364460625);
    msg.setSource(29275U);
    msg.setSourceEntity(133U);
    msg.setDestination(49834U);
    msg.setDestinationEntity(235U);
    msg.state = 167U;

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
    msg.setTimeStamp(0.2848900520276476);
    msg.setSource(57549U);
    msg.setSourceEntity(160U);
    msg.setDestination(19890U);
    msg.setDestinationEntity(77U);
    msg.state = 39U;

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
    msg.setTimeStamp(0.4714184518515294);
    msg.setSource(7959U);
    msg.setSourceEntity(98U);
    msg.setDestination(38717U);
    msg.setDestinationEntity(156U);
    msg.state = 184U;

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
    msg.setTimeStamp(0.42760674201257165);
    msg.setSource(64771U);
    msg.setSourceEntity(156U);
    msg.setDestination(26101U);
    msg.setDestinationEntity(232U);
    msg.state = 162U;

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
    msg.setTimeStamp(0.7775138005042693);
    msg.setSource(61097U);
    msg.setSourceEntity(128U);
    msg.setDestination(24292U);
    msg.setDestinationEntity(218U);
    msg.state = 32U;

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
    msg.setTimeStamp(0.09981099409963501);
    msg.setSource(16273U);
    msg.setSourceEntity(219U);
    msg.setDestination(35593U);
    msg.setDestinationEntity(69U);
    msg.state = 97U;

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
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.9912499372629845);
    msg.setSource(54637U);
    msg.setSourceEntity(151U);
    msg.setDestination(51502U);
    msg.setDestinationEntity(80U);
    msg.req_id = 59206U;
    msg.destination.assign("ZJUFYQHAQNFFCYVVYKHJKRBVATQGPPFCJHHGXCRXRLFSFJAKOMLIFEFKWOQGDEBGXQTZWWYYGYNTOVLWNOVTHIJKWSDNMUUEHQKILTGIJGOQKHOUDMNPMFCCRXOAPRWXGZNJAEZVGTWZUYJMJLZVMSCIIKNQFCLOXWSNJYBZBAGRRPWKSSDQDRXIBIVXSLULVEEPHUYMIEXDSCUZDWCDEHASBKPZXD");
    msg.timeout = 0.592911022311918;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.6318332938582125;
    tmp_msg_0.lon = 0.20765745498039778;
    tmp_msg_0.z = 0.0025839898369046654;
    tmp_msg_0.z_units = 209U;
    tmp_msg_0.radius = 0.624994576550013;
    tmp_msg_0.duration = 35068U;
    tmp_msg_0.speed = 0.6695084603374875;
    tmp_msg_0.speed_units = 135U;
    tmp_msg_0.popup_period = 49506U;
    tmp_msg_0.popup_duration = 5606U;
    tmp_msg_0.flags = 244U;
    tmp_msg_0.custom.assign("RLTOPYUGTLKJUPXKBRQHWLPFJUMRIWTKYBORBIGVBAGQZUDHPYFEFDZKXALEQPSWMAIGSHERLEHXVLFZVVMWTBNLDACBUZJUMZONCIYHSGYXQKJKPOIUSONSTFDNBKMDVDWJBUPFHETETGNCNQWYMHURFEQSJDOVGQCKIJ");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.43181633578147327);
    msg.setSource(5249U);
    msg.setSourceEntity(64U);
    msg.setDestination(61415U);
    msg.setDestinationEntity(132U);
    msg.req_id = 64685U;
    msg.destination.assign("QZGTLWIPWMJHRZADNYFPBHXVGFEUUJEQEXQAKFGOEIFNMSCVZCZDUPSVNSTHXOCAXKTSHRMACOZTRVDLKBOAZTCCFPQHJQQIRDMZFSTQVNBVNPCTGDKVVNLHRWCBUVHXYJOXGHIGSUUAHQKFFEYFOBWSEJLXQPVAEJGLYLNJLNNYYOWRBUOIPKXWGJSQWMILZKPNCYZDUZTLFKSBODBDTWJRMEGUEMMABYEOCXKLTUIAYIIRWD");
    msg.timeout = 0.9810922920447536;
    IMC::Abort tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.2819951270786363);
    msg.setSource(16077U);
    msg.setSourceEntity(67U);
    msg.setDestination(36906U);
    msg.setDestinationEntity(136U);
    msg.req_id = 51330U;
    msg.destination.assign("XVDLRIKPHMMZWAYDRELWPCTFZABEBETLVSRKYQGABYHJCUKNIXZGJNQYEUSRFTHKPCPIOYOYQVSVEGAPMWWYFZRKGMRMTHMEUKVJBMICHFQDYASVZAJEQIHOCXDNTIRBJHLKLXUASSGTFUIQWGLEOUXODVNWBQDKOIPSYBUZDPQVPNNODWTAEFFGCCSPDJCUWXCRMAZAFGZFLHFQXNLWUJQUJDXOEKVTBMVL");
    msg.timeout = 0.45752664104264895;
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 186U;
    tmp_msg_0.ncells = 216U;
    tmp_msg_0.coord_sys = 111U;
    IMC::CurrentProfileCell tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cell_position = 0.5924973040227954;
    IMC::ADCPBeam tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vel = 0.41050990022322154;
    tmp_tmp_tmp_msg_0_0_0.amp = 0.1090547208587076;
    tmp_tmp_tmp_msg_0_0_0.cor = 38U;
    tmp_tmp_msg_0_0.beams.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.profile.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.5598498042612293);
    msg.setSource(6011U);
    msg.setSourceEntity(68U);
    msg.setDestination(24756U);
    msg.setDestinationEntity(3U);
    msg.req_id = 28385U;
    msg.status = 161U;
    msg.info.assign("YVTGWJBYLTYBDUTTJJMZSXLPEHPAHCPFNDNLLMPWPSVCIZQFKIOCEURNVGBAOJRYJUZSISCCKGVENLXREAHJWUJXYUXKNBDYVMGZYSTPONGGBCXSFITBVUSZRAHHWMBOFLDAIDXXRJCSDVIKQMQXIRFIVPQUDR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.1458009028527122);
    msg.setSource(37064U);
    msg.setSourceEntity(81U);
    msg.setDestination(38154U);
    msg.setDestinationEntity(212U);
    msg.req_id = 54786U;
    msg.status = 248U;
    msg.info.assign("GVIYDPNQYHVFRMTJEZUDYROUUVSHSHLNYXLRIVPMZUXXCQDVARXQDTRMRYCTJESJZGMFIAIFGLWSRBUGTDAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.8279197739079664);
    msg.setSource(55663U);
    msg.setSourceEntity(68U);
    msg.setDestination(60242U);
    msg.setDestinationEntity(38U);
    msg.req_id = 17408U;
    msg.status = 143U;
    msg.info.assign("ANLOALGVKOPRBFYKQRPCQLNXCRMTGFSIRSGGQBIPXOOUFUDDAHZAZYYPKCPWBKFTFYZLYIIKSMDLEAUPOQVUJZTKZTNSVECNMYTZEXRWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.0006926928882624583);
    msg.setSource(47763U);
    msg.setSourceEntity(207U);
    msg.setDestination(39856U);
    msg.setDestinationEntity(223U);
    msg.name.assign("MWAVINFTMXDGMPIOJZBDCVEABSGFRRXCJKCGVQJLCGAFZLSKOPEUNXIEQTPHL");
    msg.report_time = 0.5547276345319037;
    msg.medium = 99U;
    msg.lat = 0.957309223128443;
    msg.lon = 0.9504516326865502;
    msg.depth = 0.23873643938681055;
    msg.alt = 0.8648142850976294;
    msg.sog = 0.35117931904726174;
    msg.cog = 0.1806232966900363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.002157012265338043);
    msg.setSource(23126U);
    msg.setSourceEntity(97U);
    msg.setDestination(43502U);
    msg.setDestinationEntity(220U);
    msg.name.assign("KIBEUKVKLUSTULZAGHXHR");
    msg.report_time = 0.8836954334299191;
    msg.medium = 174U;
    msg.lat = 0.05555411093430551;
    msg.lon = 0.5839779736966648;
    msg.depth = 0.1507053641732502;
    msg.alt = 0.7216028573251527;
    msg.sog = 0.6407216639910306;
    msg.cog = 0.34832491506888363;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 76U;
    tmp_msg_0.lon_gain = 0.8705794749782702;
    tmp_msg_0.lat_gain = 0.8871604975272791;
    tmp_msg_0.bond_thick = 0.5259449241265512;
    tmp_msg_0.lead_gain = 0.8040108761709172;
    tmp_msg_0.deconfl_gain = 0.5975209694993064;
    tmp_msg_0.accel_switch_gain = 0.43972217866190744;
    tmp_msg_0.safe_dist = 0.42852182680461237;
    tmp_msg_0.deconflict_offset = 0.03345991959805117;
    tmp_msg_0.accel_safe_margin = 0.16567352441886196;
    tmp_msg_0.accel_lim_x = 0.14023224568415116;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.41288851598879917);
    msg.setSource(53685U);
    msg.setSourceEntity(187U);
    msg.setDestination(32254U);
    msg.setDestinationEntity(204U);
    msg.name.assign("PHXIPYGSAFPSRRDGQQKBWYBKPNCAJEJFYIPRZLHHNAMNPHHRNABXLQHCDIHYWMDCBWMXNHKUEAVYYJYTUUUMNGZLMDWGJPBXTIXZAQRXZKQ");
    msg.report_time = 0.5813201760247848;
    msg.medium = 72U;
    msg.lat = 0.20228726828802002;
    msg.lon = 0.7976455992349679;
    msg.depth = 0.45276184635467775;
    msg.alt = 0.5783451996573721;
    msg.sog = 0.5908423135440265;
    msg.cog = 0.21319948692966562;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 83U;
    tmp_msg_0.comm_interface = 22U;
    tmp_msg_0.period = 36850U;
    tmp_msg_0.sys_dst.assign("WLBCJWDHAAVHUDJYKSYPICFXKTLSRRLFUBETRLVHRSJJZUOPUNCUPINMHNWASBYGCDBIXGSOKITVTQAGGGTOFSENHKQNFUDQMYGFTAEQAKXHIRGTNAXGMMKYIARCTDZQJSQBDEOQVVMBWDHUVYBJKEOIPPVOOSFGLXXYWBQXXZRQLSZDEALUJSKRHFFONCBOPPHVWCIKPEYVCXWMOJDVMUNCNZGEBFRNWZYZHQ");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8718063785219893);
    msg.setSource(56861U);
    msg.setSourceEntity(60U);
    msg.setDestination(51597U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.8279590899443393);
    msg.setSource(55629U);
    msg.setSourceEntity(246U);
    msg.setDestination(63964U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.1501705370197982);
    msg.setSource(52716U);
    msg.setSourceEntity(172U);
    msg.setDestination(31526U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.026856316353890852);
    msg.setSource(15600U);
    msg.setSourceEntity(177U);
    msg.setDestination(19748U);
    msg.setDestinationEntity(211U);
    msg.plan_id.assign("FUVGIWWSHOKPSRFAADBPTXVYOJQRDGZZTRVZBFXNCJCAYMBLRWFAIEXJZAUVOIKFUCCRZBDXCLPNGLBQZOTIMSXUTIMUCHPVVEFYXQ");
    msg.description.assign("BGODHTVPCQXWCVRLOUVRKVSGEKJIWMQFXVQBVOLORVIJXZRHHEMQQMPZKCKONPYHFZTNZONJZYSRCWXTEYKPJEZPNLRJWDFSTGUFYAUSIYLZVEDRDIOFHPUBSTTHXBDBPNXLCMEOLLFEPMACRSYPKUCIYILAAJXBQFWZIGFOQWVSIBGGEICCKFLHBPFNADDJSETHJDLDUTEUWXSKWG");
    msg.vnamespace.assign("SKWAYOKXLPPWXSTGUJTJXMIGJOVZTTVBUGYLASNDKAYJLZWUXPKBHVZEQHIZTC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UOJJJHXPZKUTGYJOWPYQXPGWPDZWFPFXGFXIEKRSXYZPDORCEJJHUERVXHUOMBZKR");
    tmp_msg_0.value.assign("DWATECFGXITKNUUPVPBQAOXPQGWALURRHECPHUCYGWCSSLTIPBKPTKNGIWKUKZWNLDNYZOXZQNBZSRAIJDYMXWSNJHTHDYRBQTBGASRKIXDGJYQFELHUFFVDSQLHCEUOOZAXUWHYJZSFMLODRRIYFELBVYVNXYMTJFINHGFODLGGCOVELNKJCRMFBKUGZYDACMMOSXBWQJMNJKOLQRUMZXHIPMVZVEI");
    tmp_msg_0.type = 168U;
    tmp_msg_0.access = 210U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MVUHWQGJZAKSRBFSAXTUMBMECFLTGYUZFEDDNMQQDZEEXPBDTQCVHJUYEKXUWRERYAZFRWTQRJOJZXVXIZOBHTJOPPMXBVJHOPLBAVPYEGICLTGSDQZNKUHHMYLHDJJQZICSKXWYWIVCRXHCYK");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("OLFGYGBMHPVDAANFOKCSZWXJDHMFCAZSQRLVVVPVEQTBWKIFAOFVWGRZMDXATXKLHINUNOIWOYYUBMPTCMJTADFDHCQISEVYODQNBKZSWKZXXLCBEMVRYCEJLAVTEPPIBPXGREUQAQPKRLKNBDCBHYEEHUQUJSXICGWOVDXNGZYAOYPHBRMNTHWZIMOYOFAUKNDUSLLGXITWFJJFCQSRKJQZYRSPTJSZUHZGNULMQSEUFCWXIBHRMJJD");
    tmp_msg_1.dest_man.assign("PVKIHXZVSRPQLVROYZOCHBYZEETMUIJBIVANBUKHVQGZZEUCTFARSPGQJMIFNNJWRIQUTGWHCRSOTRONOCWZAZKKMGWKSKSQARJCDVDDSZVHWWAL");
    tmp_msg_1.conditions.assign("TQHPFTZIHXUAYBQHZOIONLDFOPUIXRZVAMECJAGSKVDOCMLDMTARNFPQFSTSPCSFQGGWDBYLQBQPZKVWAKRFBOMIBCKJZLIZYGTLVNRXTRSCYKYVMXAFQWCPQNTCPSDQYJUANETUOJURLNBWZRBXUMJERIEEZAEUGSHXJWHGYLHOKGVN");
    msg.transitions.push_back(tmp_msg_1);
    IMC::PowerChannelState tmp_msg_2;
    tmp_msg_2.name.assign("UETZPRQYNQLGYZYVBHGACKAUMVKMUYOWDFMREFRQIWLXRIHLFRBVODVDOEUAWVNFMRZJTXJWYPXKGWKCSNHMTCKMAQIX");
    tmp_msg_2.state = 79U;
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
    msg.setTimeStamp(0.8763840529095611);
    msg.setSource(53275U);
    msg.setSourceEntity(73U);
    msg.setDestination(61310U);
    msg.setDestinationEntity(233U);
    msg.plan_id.assign("KUIVWOXVYAVSEOGLKTXMXDHIMLTDSNTEYWTOJYYZFYQIXCGKBPZVUFVZDOXRIGNPGDLVUBJPEXJJJUCBCWFITWPGQO");
    msg.description.assign("KFMPCUBORKGOEZFRMOLAMJLJTAICCNAFSNFAHOSEDVPVULGUBJJC");
    msg.vnamespace.assign("OBLSKQRJTHTCNYZCODFCANZWEZJYQWXZPUXQSBIWOBFVYNIDYOUTDBHYOQMETGTMACMAGDYOOSWTEHUALGLLGUJBDEZRFXNDYAZTFXACIFMFDIVPUBFVHHWLIXCDPRTLLGPNBJMWRSVCFSIINWSCKX");
    msg.start_man_id.assign("QNJHHMYLZVSNUFZORQBCESWIQXEYGBYYWNUXXAVFJHETATWOOKDOMIOUULSYIDRJFFALXTDJQEYKSAPOUKCBQTMGXHDNSQDBLAQDVHVNTCRWKHPFFEMPOIRUOJSNSMQNHMIZHMQRFUVCSUNPIFT");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 212U;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7492462575833791);
    msg.setSource(43481U);
    msg.setSourceEntity(6U);
    msg.setDestination(22544U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("KEODYYBMPRXDLRRCJDXCAYIOMCPLJUYOFZTNOVJCSCOFGXIHAZG");
    msg.description.assign("XXLXKEJWNQTYIEVAARCITVEL");
    msg.vnamespace.assign("FQVFBDVXLLOGQDZSBVOYIFSGKPKFNVIPEZJPVTNUFSZWHYPOSDELEBKCSQUCSUANTYMBVXEHHYOYENTDCZKDAHLEPYTYJRYDKOFGQITCNMAULIBQFRMFEAMPAQKUTWNBATWSREWWZOBTJGLRKGCWXXGBSVCDBNRYOUGAXTUHIJSQECIPZURKZWPXGXZHWQMNIMGSZE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OCOCPMPMOWMVNKDWLZQ");
    tmp_msg_0.value.assign("IRXWJEAHWOSCITITFVUSMLYGKYFDGCQQJBLXWKGMOIIOSFFJZMCVBGXEONHQGJAHUMWFBACSYIWPNRPZIFJQATKOEPPYUSMARZJDPPHUCZNLOJNATNB");
    tmp_msg_0.type = 180U;
    tmp_msg_0.access = 97U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZCLODIQDAZMFKKLGKHPHLMWFNKWDOTEGUQJGSINNYXFEFDAVVUOXZXNEVILYOBNMEGBWBZKDQKXH");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("VAFAXBZHVDXWJELBTVEKWOPBJKTAJBRSIYWMLNQQWXHFOAODWDYCCMDPEITSEXXPLJVNYPPEATGZNJZENAMIPZQSULUCECXGFNJCSFZPYLANSQHOJFXIPTBIMBCNAOWFMMMRHRQVVFOGMLSOGCIWJOYZDDGPUUVEAUVCTKIWRWRMVU");
    tmp_msg_1.dest_man.assign("PXIHGBEXAHKNNWJEYWNIIYCVFQBRWIBYUGFHZPEXNYKSATIDNGLLBOIUHXSVZDIO");
    tmp_msg_1.conditions.assign("QTVSACAXYKPYKGKLIYTYXJGGDLLCPUMXWFQSXIHGTRJETJQMQMFXKAPVLFWTWRCVGADOFXZIRIJDUSIRDEYRNLN");
    msg.transitions.push_back(tmp_msg_1);
    IMC::UsblFix tmp_msg_2;
    tmp_msg_2.target = 50073U;
    tmp_msg_2.lat = 0.435002764530225;
    tmp_msg_2.lon = 0.9494085917693239;
    tmp_msg_2.z_units = 192U;
    tmp_msg_2.z = 0.2915240948037692;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.08373007728793713);
    msg.setSource(41209U);
    msg.setSourceEntity(194U);
    msg.setDestination(13439U);
    msg.setDestinationEntity(37U);
    msg.maneuver_id.assign("JEEWOSSOIXMBOMTIETHKCQDNVUUJDYTAIGGKXZKCNHSHFOHFNPERSXWRLLSXOGTPHWACIRQZNDNHWTGKGJRXOGYXNUFRWUZYAFAYRPQJGJSTHEDIIBQYUKKJYEIMDUYFSZXYPKJHMVVVPEBDXDWWBUQKZGVWRCPXSQMLABALQCVQGVBRSBLTUZVMNSJUPORWMOC");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 16639U;
    tmp_msg_0.name.assign("UFJIPVVKBBGJLRTVPTYXHEUGUJMYXIPEJMBQGXLQOVJAOTLKTBXBCOYSNPDQKBWFICYMCLZNEHNTYTSHIWTAFWHZRHPNCNVFZMFCGVHBPLETSSWJTGEUYMARWWRWMDDJIB");
    tmp_msg_0.custom.assign("TJNONVMOLLQKTWFNXOFSSCZJAFBZWQMWLSHYZDDAOTCJOUPPGXCRIPNHDAVZPQRLRBMZIHJHQBFOXJGGYXREHWOCRUTMKLAWYAXJJPKCIQKMVDPIHUGLUSFSGFVNRPCQIWMAMESVDOJXCHUMEGNFATYQXTICGRMMXIIVSKRTLEXEPZUDQCPBBDWFHRBYLOKXEYDSVFSRWKTISKBHQUANTNQCKWUABYGIHDVYGNZEVULTKVYJFZZNGEWZEADEYU");
    msg.data.set(tmp_msg_0);
    IMC::DesiredThrottle tmp_msg_1;
    tmp_msg_1.value = 0.22772108551759607;
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
    msg.setTimeStamp(0.5320093912300907);
    msg.setSource(31194U);
    msg.setSourceEntity(254U);
    msg.setDestination(53235U);
    msg.setDestinationEntity(77U);
    msg.maneuver_id.assign("OMMDNTLCUQHDIKAJZCKPUBQQFLWPMMIKLYKPYIRXPQUHFESHMBSONDOAHVXNMWWIOTLBVVXHOISAVGNFNJDERWYUKLVQLUZFOXJZJHSOURCSWCRPXEUCTTAXYPBAYPNEBEBYLSRHKTEVDYQIEUBBFFZLDXINLSFIEGBYJVKAHQSGACDFJTIRHNCGJEYGBDVTLAGZIZCDZQTGJXZVSWHMAWSACMPPEWTCPM");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.1463770071790208;
    tmp_msg_0.lon = 0.21865971587923938;
    tmp_msg_0.speed = 0.6706919296155301;
    tmp_msg_0.speed_units = 144U;
    tmp_msg_0.limits = 135U;
    tmp_msg_0.max_depth = 0.6275748301036969;
    tmp_msg_0.min_alt = 0.7315678759639928;
    tmp_msg_0.time_limit = 0.4445935153360985;
    tmp_msg_0.controller.assign("NRDPRUXKNKTKWNJAFQHSSSWYHZKMOBYNCLHWFHGLPZNAHBHMJRJXZVERWAAODBOWIUBZUZKXCVQLCCDUYJUWVZBEVDDLLAYGFFEBGTOSCNKYJIEIIOIYEGWKBMQJNHGROMYSJVINRCUQXPLTTGTVRFOVTFQPJM");
    tmp_msg_0.custom.assign("PDISMJDGZGWPDAFOILZWZKFFWKVHCVRNQWVXPIFEDTS");
    msg.data.set(tmp_msg_0);
    IMC::SessionStatus tmp_msg_1;
    tmp_msg_1.sessid = 2458475636U;
    tmp_msg_1.status = 47U;
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
    msg.setTimeStamp(0.5570905583439114);
    msg.setSource(60591U);
    msg.setSourceEntity(182U);
    msg.setDestination(15860U);
    msg.setDestinationEntity(177U);
    msg.maneuver_id.assign("ZIPIOFHPZCUAOOSZFMWJQGPBKSVBBQWHEXLNJTFRYAQYUAZWRMTDXMHINYOQTIGWVHCULKQSBQFZNNEH");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 59221U;
    tmp_msg_0.lat = 0.06871401603721172;
    tmp_msg_0.lon = 0.913506479652059;
    tmp_msg_0.z = 0.36360447039484234;
    tmp_msg_0.z_units = 199U;
    tmp_msg_0.speed = 0.04551059407461566;
    tmp_msg_0.speed_units = 74U;
    tmp_msg_0.custom.assign("JFMIHROTLAROKTRFRBDSONQQXMLWETZHFVQLPZKYBZOALFTVPRTYZKECQYNRDPTVGNUDPJMFVPGJGWUYHZHMUCDAKYQFKYNA");
    msg.data.set(tmp_msg_0);
    IMC::CameraZoom tmp_msg_1;
    tmp_msg_1.id = 78U;
    tmp_msg_1.zoom = 28U;
    tmp_msg_1.action = 195U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleFormationParticipant tmp_msg_2;
    tmp_msg_2.vid = 39427U;
    tmp_msg_2.off_x = 0.6250558337957561;
    tmp_msg_2.off_y = 0.13708105355658806;
    tmp_msg_2.off_z = 0.01273720637739284;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.3840489634227471);
    msg.setSource(27450U);
    msg.setSourceEntity(246U);
    msg.setDestination(13125U);
    msg.setDestinationEntity(175U);
    msg.source_man.assign("DVERLMSNXONKUBBHESDHKVNNVRZNUYXMJTWCKFWCLJTGZLWZENQGFDPACQZBKEVTAMKTXZZYPNXWMFCPGOFTETRJUVZWEYGXIAGHAHFIHITAWUHBQAWMSRISOU");
    msg.dest_man.assign("QUNISXJXBIOAPDOAVKVQZPRTQZXPSOTLETMRDEZWDRKPFZUALYFAKNLQPFDHKMCIWQCRUOQWYOUPJNFNTSVZUSXDGXEFKRRIJGNHAWPMDOUSFJTHRXGMWYYSFLWXAGYGAYJVBXCENYHNYMPBASDGYIJHCCJXDEVTFCZIHAESEUAZULNWQBMOHJHLEVOQBRRM");
    msg.conditions.assign("NWEFJMLHLCSIWKPVNMIADVRIIFBBCPKRMJDWVGPRMKQCNSJGYTTDZNJAZ");

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
    msg.setTimeStamp(0.16984120517300316);
    msg.setSource(2632U);
    msg.setSourceEntity(247U);
    msg.setDestination(37034U);
    msg.setDestinationEntity(107U);
    msg.source_man.assign("DWAHZGOWJBWIHOQNYDHCQ");
    msg.dest_man.assign("QUQPGDMPTZSGJCNYWMZPJRBCBMASIKNGXKWUUBFKYXJPAUDNVFLIESYRGUECIYJVHVQIQQJJWBICPRKCCPZZTVIKCXBOIOLPUYTAGLBKNSGDVKTTETHUFQRSLLHRFREJDQDCWQEXSH");
    msg.conditions.assign("AZDBTQEPMAEWMMJNAZIFNLVRXLJIXUMDLXTIHISYORDJSBGONVMLVMABUWXARBTXKJWCFHIHMTOUZKQZWZPYVLCYKGEXSEQEUTONJWYWDKLDFSBPKEFISJCSYZXUYOLGOUGQJQPNYOVLWLFXVUOPDJJRLDSNRAINTCVFWQVYECBKAEJYSTQASHCQKRMPCHDOHTVDAGS");

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
    msg.setTimeStamp(0.4372859763619015);
    msg.setSource(385U);
    msg.setSourceEntity(163U);
    msg.setDestination(47152U);
    msg.setDestinationEntity(1U);
    msg.source_man.assign("KINMYTOMDRBOKDDBWMX");
    msg.dest_man.assign("KBYBHZVZUBUKQKGGMQJNCVSFIBBOOMSQALIYWXIWSQADFXXVDRTLFIAKNMLGCTWVYSPADTZOLXSYFCLRBNGWPGQMCWXJTPLFPCHIAYJNYSGVNKXIKTTWQBSHXSPCOJFUHYYVUYDJMUDXJEEFGBRLJOHVDTGEPQETCIMWKKMAORPXSQWTFNWZORGZRBDFPIAEZUKFHORDUHOLJLVPSMACNPTMC");
    msg.conditions.assign("EQBRPSOMBMNYDFVRRXWMCGHXVSDRKPKJTLYFEFNPQGQXBYPWXACWJNQHNSWIVPSJCUNYRZMBZAAKYCBGEFTALEXOHVJTPGSYXOTRBSYIFODJVNXOLILOIVVXXDWLKNDHHMHMPGCAGTUCYHLUFWJDCEZHPBUIAULLDOXASBTCTOEQFBSEFPKKVQYZJTRNKIMRTGGUIUOREUQZQZGMRLIKMMPDJHAUWZFAZKN");

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
    msg.setTimeStamp(0.776072480157221);
    msg.setSource(45957U);
    msg.setSourceEntity(144U);
    msg.setDestination(32192U);
    msg.setDestinationEntity(161U);
    msg.command = 133U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JOWEFGERBCACQWYELLLHMXFOJAULHFSNEXAYWYPRYSVRJORRPSDXTLBXMUSYIIEYFAGNMQXTDJCDLPELZIQEVEFVDSKTTBCGRHPWBLKSKOMAHVHIMPADNPCONPJTEAJPNMWD");
    tmp_msg_0.description.assign("RXENKBFFDFXULRKIYKUGTYRFHQJACSSQQFROEVMFZZABAMJMOPDIOSGETJBBHXWDZFPAUXSNBVAKOIWEIMZHLLJUYPDMTPSYQWHIDZLZIXVSVPLZGKVRFGWMPBYKQAWLHBXJCXUKBNTQOJEMMGGOVST");
    tmp_msg_0.vnamespace.assign("QILTEKWTBJTDKUOZPIXXZZYQXBBGSQVJFLTYLQAMCRBMFVWSRFARMSCKNARJVAZNDUYDLFPUUJDEEXZRYRDHINYKHDSLAIBWLSTCQPSALDYVRGSBJZQSNFHJWTQEOMAZEPHX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GRJOFGVBHTNKQJDOKCRGLBSJWUXRKLKBQUROCGIZEEOFTBJRQGWISVAQXKPZSRCNBXIFMSQGEAZOAUUVA");
    tmp_tmp_msg_0_0.value.assign("AJMRUKECZPGZKTGWBNZSFFNVAFXPLDYVZSIVFTKMRHHVXFSWXEQICOEKOFSSTAHLCMKBTSDUZBYPBSNDWVCFHXGNHAVQTLKAPJNAHGZOCCLDIVEWCXRJUXYMFWQOXTJR");
    tmp_tmp_msg_0_0.type = 10U;
    tmp_tmp_msg_0_0.access = 88U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TTTZMFQRKWNJOGQRSCGTNIQUPFDRAIVVDU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("LQBUKNXLWQVQUAIUNPYOTWXYGNAUXXBCDERPKGJMEZIOQBIYXLNGPVKAEHXMNTCDGOIKGTCEUHERSTBJHSDQQIEQDBCMVYMK");
    IMC::FollowPoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.target.assign("AQHNLEQNCGURZINQGZPXMRRVDQIBMCBHUVNWCGNWDKFXYOUTUIITWEVOAVJBVQHJKAWOSGEPCLWBMQJKYKZHYFLDZJDXHVIJIZ");
    tmp_tmp_tmp_msg_0_1_0.max_speed = 0.06591651289517608;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 224U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.3888869078886147;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9581118545684412;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5812314913642145;
    tmp_tmp_tmp_msg_0_1_0.z_units = 197U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("QLXOAGFCSEBTJLFTRMGLAHERPKRGQHMKGIQEEMPDYTBURRSPUCZGYQSPIDCVFMZCZQEXKZBAMAVBZDOZBNXATNKWTKCHWXXFQRQRDPIZAFOPGNHCDKFCZITQZSAVILOULPKEEBHSVTIXOJNHBDYXNVQMPSVINJPUAXKHCJKXGUJGMIBNDNJPOASMNLJWLOTBWHWFLWFRJWSOIRFVYTUJVYSTZDDOULYUHMBCA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::BeamConfig tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.beam_width = 0.2635456844031102;
    tmp_tmp_tmp_msg_0_1_1.beam_height = 0.6534775592761157;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.8549994265829446);
    msg.setSource(20231U);
    msg.setSourceEntity(93U);
    msg.setDestination(44247U);
    msg.setDestinationEntity(137U);
    msg.command = 123U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JYYCVQBOATEZQDOGUKHRUSITPYJHZAHBIVHRQPXOFGWARVGHMNGTBIWNPXHEBWYAWLEUTGKFMKCLBWGGFCSSAFFQXTMWWJYJNUQHUYTIVCOTQSUUSNXYDJBRWKRVNIQSQCAQJLOXOVHPADRZIYZMYUEIXISEZSVGKYDEZLMNGXOORZSNTEEKHPLJHAERMVURPLMUZMLNCADLDBKVXNWBXFSMKVFCZPMIGOXQJJPJCLCDRKFDTPAPELO");
    tmp_msg_0.description.assign("XQSHAZWAOEQBXAMWQLII");
    tmp_msg_0.vnamespace.assign("CJWCCHCBQEHFPEDFEKAKKTNWRFXJWJDVWSPKISUDQDUQOLTBQGAFBUPAEXAHHDDMALGHUYPZOHNJVYLRWWGTTHRPCZJPYLZREEBUMWVNTLBZLX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AILXFMYMGTAFFORVSEUBSUXLJETBTCNQWWEYPAGYSITJPUOUHQVMGIFZHNIWZAOGFYAOQJNFHWRHMPCZPSGYDCKRMSOUNGTVTZHAVMJGKXKUIPRWHGPYQDBEEDSDOLXAVEYHZKDXBKJKLGLYNQKCFQJCNFRCZVEBPVVEBOHIAQVUXBKOXRNDVDWMWWZDLGFJOPNBKZIJPOLHEJUTAXHDMRQBWNJCZYZCLRDBIA");
    tmp_tmp_msg_0_0.value.assign("USQKZRZIAHKVVFYNJCHQVFEAOPMMSULKNAIIZRBOTFBBUXOMXCJTSHOWYPGPKNUMDMHCZPBZRIYMQTYPUUEFFAQWPZQXDNNGCHHMOEWFEFBCOKZRXRXAPAGQAMTHDCD");
    tmp_tmp_msg_0_0.type = 245U;
    tmp_tmp_msg_0_0.access = 113U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EOOIPVRFLDHLWWTCAKPEROECKJDGLENBLZMCUAQIRKXARDQEEYMNWZJMRGTBMDAQOOFRPJQJWZFBJFJYVOGJHZOIHMNIDKBSNULXWYHNAVKTHUZUIHWDXUWTUCVFEGPFEGTQQJLSSAOALCGSRFKGKXPVSBNSFZTYYUVCCYCEKFWDOIFXHQQRGLUXTZVLXSATHYKUDQMQJVCMHYNIYJWRSPOURXBMXNTBPTIKBI");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("GQGCFQUGCZPPPBLMHDZWJGQQGHSJLCXYRIITWAKLSRXGPYCTWJYUFUXPEYPWOJXGHKOHIQZAGDDYUBNPXYAOFRQFMMPNJRENDWCPHUBWVRNORAKIIYBKFLVBHFW");
    tmp_tmp_msg_0_1.dest_man.assign("ALUGTXZLIQZRSAKCZGYBRFFHSZRGVNOOPMRSZSYCQRQFDJOKXLPRUWHXF");
    tmp_tmp_msg_0_1.conditions.assign("QNGTTPURKZEAOPEVQHVSGNORYAMYLYLUMGXACOMGMBTONFJJMABPEYFRLQJJDWORDZKIGUSGEWCKDHFJHNOWYXMRXSQWTFWSXSYCMFFBZQNQCLLKTZRRELJHKWNJQIZYAPTHSAVQITCWUBZFDPERVBVJFPMXENPDEOYRIITZMVGBVUBABUKIGDDLHEUKBBYIGPCUCEVLAWVXNKJSNZCQLIOHPCMDZDFTKPCD");
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
    msg.setTimeStamp(0.2807735013638072);
    msg.setSource(60812U);
    msg.setSourceEntity(197U);
    msg.setDestination(6820U);
    msg.setDestinationEntity(250U);
    msg.command = 116U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DFTJERUPFOJWRUZRZIKKMILAHKRFXXNQUVYEPGOTDVOBSTZNJVYSWYOOBKLGCWXDLTFBTLTAQSOEWJRNCGHYPVEHDLJXSVJZHUOMUXDAGBTGFYYSLHMWQPKZWVGLCXNUFFHURHZGABTAPZWSMHTFUQGHREKXMYJALWQUNWIFJIEVPICDV");
    tmp_msg_0.description.assign("JLZEWDKUHRRKSWGTJGEOLRASXPUZJUSATDHCVDNGDKBYPX");
    tmp_msg_0.vnamespace.assign("CCKDWTAOEXLHOWVGHJNBGNGRAJMBVQQYXADBISAPXSEAUXVFMBQZYWLRIXFNLSTNRWK");
    tmp_msg_0.start_man_id.assign("NSDZMBFXNCLLSTJQTYVGGEEASCRCKCKWQTHIWHFUUDSBZIPBXUCDCEPYXETPZHPOFDHOZDVAUIACNWATOAHKQRCCAHYJGEXLGJUYQPCXRIWRSBAIFQEZGYXBJMTPBOSNWNFWKYLASEGPOTIGGUBWFVVSQRQRRQOPE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("XNQPOTDSVAPQCGWMTFQMHZJRNUAKOXFGDSSUTKQZYEFIMNAYBYVWVUVEJGCOODYYUAMVNRVKZYIQVGLZBSOGPAZMLHFVZWEBMNJFCSQUZYJLIYCUSXUWGDBDOPNKRTJSFPZGJ");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.07290834777822142;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.18625054370910066;
    tmp_tmp_tmp_msg_0_0_0.z = 0.17508896201408386;
    tmp_tmp_tmp_msg_0_0_0.z_units = 145U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.7981861431993991;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 147U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.9301251170423623;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.47613262586676475;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.32122496309997783;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.5070417183055147;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.vid = 57937U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_x = 0.3947429755072879;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_y = 0.7557815291482444;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_z = 0.2865797750608877;
    tmp_tmp_tmp_msg_0_0_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.6199386406832268;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FWHCSGFIBOOAALRPJUHKSIBUPDOXOTDNIYCHTSLEQDFPFOVSHTNKHCNOMDTZKWXVVPXRKZZIXBIJBNHMZZAVLPQFRL");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SmsState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.seq = 1366415971U;
    tmp_tmp_tmp_msg_0_0_1.state = 236U;
    tmp_tmp_tmp_msg_0_0_1.error.assign("GQQELSMANHARMVTSWXNKJXTZOVAODYXSTRQJEMNLFPMFNQCWDBKUOJIXRIEPABPILQTLGTDGDWVBWANQMUSEEWQLIBPAYBEQDZUIGWGKVXHUJOVZCUWPZZSJLPVBCVFRYIDHOCHWXICZSWXFRNZENUNTPXYRBMR");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::DesiredRoll tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.value = 0.5709060352740499;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Throttle tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8624922581574056;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.10256854803589577);
    msg.setSource(31664U);
    msg.setSourceEntity(2U);
    msg.setDestination(13517U);
    msg.setDestinationEntity(80U);
    msg.state = 178U;
    msg.plan_id.assign("TSQOBWNJNOYYXQSCKGFGXTIVHUNYPUCNRVJMAQQOQHJPVVCXDAAXJHUOGRQVJZAMCYIKMVJBXFVALCWPUTLPAFRCEWIKPLFEOHXZZVBZFTEUXYMEXBCIGZCHBDGMSDBMWWPRDDIEVAEDAENHHKOFKERTBYRYEMXWQUTHNKW");
    msg.comm_level = 156U;

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
    msg.setTimeStamp(0.23538603283533688);
    msg.setSource(23521U);
    msg.setSourceEntity(25U);
    msg.setDestination(25494U);
    msg.setDestinationEntity(246U);
    msg.state = 103U;
    msg.plan_id.assign("IRZZCEGQOBGWWJOSPXFYXPAYAFDOFPZSPROVTDAAYMLSMWPHEVFUWUGLYJQXRLQKZNMRWPBXEGWXHABBNKTDMBYITWKZUMDQXDVJAHTQXLKEKTFBBFCPCVUHUGXCTZJYMJRFXAOGKUREIVSJBGICONBKRIEKFHYAUKBEHAYLLRKGCSONVEHNOWWQHSNNXQEOZRLVMELGQU");
    msg.comm_level = 45U;

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
    msg.setTimeStamp(0.6327017768088364);
    msg.setSource(2408U);
    msg.setSourceEntity(136U);
    msg.setDestination(45883U);
    msg.setDestinationEntity(48U);
    msg.state = 188U;
    msg.plan_id.assign("BHDEGJQHXLOUJJISUOOYTRLNTZVSTBQTEPPOOIMLUUXSMMCLCDPFGPPZMKQDZBBDFAUDFOKUYSQIXJFGMSHGWYIMAZMSCNXEYHQHRHDTFXBTQEBARAOWVSGXSNZYOLEVJGCQSUYRWBQVTVKKVIPFQEYFCBPBLKWUWZVJNLVRWYEMAFZAOAYWXHLZHPMPKVJCN");
    msg.comm_level = 196U;

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
    msg.setTimeStamp(0.5186784296059772);
    msg.setSource(35436U);
    msg.setSourceEntity(107U);
    msg.setDestination(44003U);
    msg.setDestinationEntity(166U);
    msg.type = 197U;
    msg.op = 235U;
    msg.request_id = 4435U;
    msg.plan_id.assign("LEZRMBRXPSYXOFSDAQNGTXZXJKJVGVYKBOQQITXKRAJFZDITNPSYDDXGCSTUWTQFVRWPENKQCHMILSCRDFFCYLUHYEIBNMGKBGRUFVNDZEHSPBWWVNVTRLCAUBSBYWWZNGDUPBOLAMAJTQBZJIAWDFHCKQEEOZTMIYRPESLLJQOIHGGIUAQODXYJFROVGVPEMCKEYRGCUISUYHMPKUSVFQKOETIWJBZHXMCDTFUKNPXOLZAWAPZOHVJWJHN");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 39U;
    tmp_msg_0.value = 0.8715022141143328;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BOQSKRLYRUSBWXEHBKSKCGGFTHQHTJQKMBHBCTGHZMZHAQRGOWAXYNOWAXTIGJZQQLQIKNXNQMMOWJBDSEMWKUTHBOZYNPNLSWCMOSXVZRLFBMCIVUESEOUMJUSYSPPJJDFYPC");

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
    msg.setTimeStamp(0.7852895160490291);
    msg.setSource(60586U);
    msg.setSourceEntity(180U);
    msg.setDestination(318U);
    msg.setDestinationEntity(251U);
    msg.type = 48U;
    msg.op = 67U;
    msg.request_id = 32797U;
    msg.plan_id.assign("XLRKXKQFRAOEFHUGKXIRADAGJWMXZHB");
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 35345U;
    tmp_msg_0.status = 25U;
    tmp_msg_0.info.assign("BFNVLJUXETWVFAAKRCDUBICTBDTSYSEFPOJLKOVNLXCTYNHJDONTHVUWOGPFPZBGCWNKUGPKTOUQMHRXCXVVYURJPOGTKZTADIYXVCDMBOBEAIIJNSPTJOUXPMGFWSRTZVYFHFMBWLZHELKZBOSGYLIDHAVQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VAAGXLHDWZRFQFHEYAQEVNRTJYKXPLCDUINJVFXSGYZGFPNECUFVPSGNZKDCDMALTAIPLRKMUBJQBSGXJBIFBFAONRASZJOTCTUQPTUMQQQKWRKCDUHWPAOBZRTUPTMPJIBOJMRWGUTEHZSLEYHMEVWVOJVJRLZWCAWWZXXXXVKKYOEFRNASLMDHMBNXWVFKNHHOYCYGUKILMMKUDIYTIBDCNBPGZDOPCYRJDOLLIZQE");

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
    msg.setTimeStamp(0.31885359216890996);
    msg.setSource(42590U);
    msg.setSourceEntity(158U);
    msg.setDestination(56775U);
    msg.setDestinationEntity(45U);
    msg.type = 171U;
    msg.op = 108U;
    msg.request_id = 26285U;
    msg.plan_id.assign("WUFMVABQLFHFCKLVOSJIPXCBALNTIOZDIFOKTGWCYHJCURHZFKRKKAPHKWRSEHFKEAMCCLQBPMCXYGKQXSTTAUNBONWDPGYGGYJCOGMFEROVPULYQXIGTZVQWXTTZKJNNUOWVIMXVWFSBGYARDMLZELHAMEHISZIDUGSIJXFPNJHOEVXV");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("XLSVILBUGKKAKAAWTNZFLTWPVUIWVERPGTLEKJGWCYICZFBYOIBIOOCIBLUQYHARUMPENPSYDPGXFXOCRQXZLAECJEJRVUXASXGIQNZTHXHZSMUKQEDECTQGFJZPQNYAAJPQTZTMMNDYZFGRMLSJKCBASUWUILBRMMCPRSEHZMKHVHYDFVTKEVJXHXEKIBKFIBS");
    tmp_msg_0.max_speed = 0.13406987487218835;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.lat = 0.6757697294755431;
    tmp_msg_0.lon = 0.45655165377553186;
    tmp_msg_0.z = 0.16408565223951876;
    tmp_msg_0.z_units = 15U;
    tmp_msg_0.custom.assign("BVDTSMZNIDUPFXPNYWUPQFKOPWDXCDAGZMUNSVBFJYSZCRUQKOSPVETJONEJXWDWSVHJPYDHGCETPALQQFILWLKFVDRKQRHEEEKRHYILUMVBZCBTKLHRCRBDIKTSGFVYEYIEINORSSWPVWMGALZJGNWXOZNLMDMRYQOHCLSJNXZFAKGIUMORICZXUGPCNVFODVFJKIEGNAAQMSFZZHXRXIUQTAOHYMTEAUACWLWHBQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ROEMSUKYYQAGHKODUTJYBUWVVTAGJWRVMZYDKDFBTROMQIDCGHYPTBOUEWQVGENGGIJNKMBMRQKUWOZXPZMWBVWCQKKBDNDEZLLOZUECNFGPXFGFIEJXIME");

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
    msg.setTimeStamp(0.3961498100561821);
    msg.setSource(35093U);
    msg.setSourceEntity(68U);
    msg.setDestination(58454U);
    msg.setDestinationEntity(80U);
    msg.plan_count = 36137U;
    msg.plan_size = 3396453680U;
    msg.change_time = 0.9895375877254488;
    msg.change_sid = 28047U;
    msg.change_sname.assign("SZJRPNGMCWXGBQNOZ");
    const char tmp_msg_0[] = {79, -11, 1, 111, -31, 35, 118, -120, -37, -106, 111, -92, -106, 96, 125, 4, -48, 122, -114, 82, -82, 100, 100, -103, 42, 28, -12, 57, 35, -109, 85, -3, 95, -121, -25, 23, 41, -41, 116, 25, -24, -124, -91, 70, -80, 64, 116, 78, -115, -38, 4, -114, -98, 114, -34, -21, -51, -69, -109, -67, -6, -49, 37, -48, 69, 118, -50, 31, -75, 60, 57, -16, 48, 24, -124, -95, 57, -124, -24, 73, 119, -81, 48, 51, -113, 85, -66, 14, 111, -87, -20, -95, -17, 70, -88, -118, -81, -90, -96, 88, -91, 61, 14, -105, 105, 64, 52, -61, 60, -39, 52, -87, -2, -104, -93, -109, -93, 65, -81, 39, -18, -108, 118, -66, -124, 23, -96, 59, 90, -88, -69, -64, -71, 66, -90, 59, 107, 63, 88, -62, -114, -91, 108, 33, 126, -55, -71, 12, -82, 38, -47, 73, 40, 63, 0, 86, -85, 37, -19, -74, 80, -96, -48, -102, -95, 50, 56, -21, 110, -84, -86, 77, 120, 51, 63, -92, 125, -88, 73, 101, 81, -105, 45, 36, -121, 71, 44, 81, -22, 18, 103, 108, 107, 17, -113, 123, 124, 107, 68, -86, -15, 123, -60, 13, -108, -65, -9, -12, -115, -90, 117, -52, -24, 99, -37, -88, -55, 79, 95, 25, 18, -118, -77, 17, 88, -25, 122, 78, 47, -61, -59, 52, -31, 31, -19, 96, -64, 60, 77, -22, 73, 8, 33, -8, -66};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EHPAXPGGXVCOAGPTVQWLOZKICTNHQSUEAKPLKVBATDYSPQWWFEJTIULXJSNTYHEBGOZSAVHIAUSRNJTNPUMMOCFMMYAJIQRVAHFGRZYSDTWYFKSHFMOMSROWIGKVNHKPICZGDNZBXNQSDBUJOBVJYBGVCBDZEXWRNFGWYDTQCKDBEWRPLCFZLDPAZYZICCJHUCMYULERDEWXIDQQKIJMYUFOEGBLHMFPXQJHJESXOBUMZLKXRLUTRVRVQOFLKN");
    tmp_msg_1.plan_size = 17908U;
    tmp_msg_1.change_time = 0.03148924143004572;
    tmp_msg_1.change_sid = 40091U;
    tmp_msg_1.change_sname.assign("AOTKWTIMGXXLKUJZEHWIGAUHDOXJFISJWVPFRPAAGVSZICPFYVKPEWJPLMSHXXNWUTCNGEKZBVBOOVZIAGIPGATALNCRLHAARNTUCVQIQWQQKVWVTREBRDRZYRHUBYXHUSQFJPZCHKXOGHTSQWLJDEMCMJE");
    const char tmp_tmp_msg_1_0[] = {93, -97, -59, -76, -110, 63, 37, 86, 27, -127, 12, -92, -42, 121, 109, -104, 1, -24, 124, -47, -108, -126, -120, -116, 25, -109, -26, 80, 8, -21, -68, 107, 86, -74, 12, 47, -8, 85, 16, 63, 36, -3, -10, 122, -5, 36, -67, -101, 118, 1, -81, -109, 91, -29, -34, -9, -45, -75, -57, -124, -42, -64, 2, 46, -126, -20, 49, -106, 123, 75, -37, 29, 95, -124, 41, 46, -21, 83, -56, 58, 63, 36, 32, 125, -20, 122, -127, 123, 97, -17, -34, 119, 112, -125, -85, 15, -8, 76, -100, -3, 122, -99, 64, 31, -110, 35, -87, 8, -67, 41, 53, -123, -126, -103, 56, -84, 60, 115, -96, -46, -72, -84, -81, 118, 48, -70, 77, 116, 75, 27, 115, -57, 49, -74, 95, 66, -85, 43, -17, 68, 68, -120, -80, -121, -31, -71, -102, -20, 49, -124, 18, -71, -120, -106, -117, 78, -126, -32, 124, 7, -121, -36, -40, -102, 13, 108, 20, 49, -86, -95};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.33478724260032866);
    msg.setSource(37794U);
    msg.setSourceEntity(116U);
    msg.setDestination(63726U);
    msg.setDestinationEntity(153U);
    msg.plan_count = 54309U;
    msg.plan_size = 1220141190U;
    msg.change_time = 0.17889252213404616;
    msg.change_sid = 3342U;
    msg.change_sname.assign("LEBLLIUAEXTLGPASBXKVSEZGOYLXTRANRMFCPRMEDWRUIZYB");
    const char tmp_msg_0[] = {-74, -92, -21, 124, -106, -96, -52, -98, 41, 8, -43, -116, -100, 103, -71, -97, 39, -15, -1, 13, 125, 70, -83, 30, 69, -10, 23, -107, 113, -117, -39, 126, -11, -61, -23, -6, 61, 34, 26, 0, -47, -114, -39, 110, -96, 50, -80, 19, 89, 62, -38, -36, -87, 84, -121, 54, -71, -56, -85, -20, -26, -56, -128, -21, -104, 79, -66, 36, 3, -108, 102, 72, 56, 92, 115, -62, 124, -99, 65, 29, 110, 49, 73, -81, 79, -70, 82, 48, 44, 24, 95, 70, -28, 59, -79, 116, 87, 23, -7, -73, -29, 78, -63, -24, -123, -8, -5, 114, 57, 14, -104, -13, -117, 106, -45, -60, -25, 110, -4, 93, 125, 45, 119, -43, -1, 12, 111, -123, -37, 40, 62, 1, -86, 26, 47, -42, -13, -51, 74, 80, 62, 76, -39, 117, -52, 9, -73, -79, 112, -83, 25, 123, 105, 19, 102, 103, 58, 57, -104, 121, -62, 93, -14, -107, 92, -90, 103, -111, -58, -47, 120, 108, -33, 23, -102, 38, -19, -44, -64, 126, 123, -54, -50, -65, 107, -39, 12, -75, -55, -4, 76, 65, -94, 111, 104, -48, -90, -38, 94, -1, -90, -3, 30, 115, 13, 12, -55, 43, 13, -41, 24, 104, 107, 91, -31, 45, 52, -8, -45, 56, 106, 14, -3, -106, -87, -111, -60, -39, 66, 9, -128, 46, -126, -98, -118, 122, -72, 88, -52, -71, 53, -64, -84, 103, 86, 104, -60, 18, 1, 12, -82, 23, -102};
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
    msg.setTimeStamp(0.4164573271599318);
    msg.setSource(57212U);
    msg.setSourceEntity(42U);
    msg.setDestination(2565U);
    msg.setDestinationEntity(50U);
    msg.plan_count = 15822U;
    msg.plan_size = 1367595525U;
    msg.change_time = 0.7029221157622974;
    msg.change_sid = 2431U;
    msg.change_sname.assign("GOJJAZUHQWHIKQHPYCBGYKFPWENVMSNWBTMDGBNIOMJATPQNTVLFQVDSUPQQXUQTLHFHFRXFBVPIEMCBRTLZRDIKLHXQIZOPOKYNAIIXLEWUJVWJGNXCNKRTUSXSXWTFXLSYSCVLPYCATOCRVOIKGOVDFWXTRDSB");
    const char tmp_msg_0[] = {11, -86, -118, 94, -126, -11, -73, -110, 99, -35, 80, -114, -99, 3, 34, 108, 116, 101, 64, 109, 32, 90, -79, -72, 71, -24, 18, -38, -123, 101, -62, -20, -25, -18, -19};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NEFEOGMEOXBIDDOVYVHNTEXNUZZSALWQVOCRQJRCNGDBF");
    tmp_msg_1.plan_size = 23831U;
    tmp_msg_1.change_time = 0.042805188761143254;
    tmp_msg_1.change_sid = 28647U;
    tmp_msg_1.change_sname.assign("TIWJLONZZAJKCQEOXRGIXHTXODLWFKSIFYNPZSHJRXADECELOQEONDJVPDRQKREGIWNLGBRVMFZQJYMYSVEK");
    const char tmp_tmp_msg_1_0[] = {-47, -74, -58, 68, -91, 112, -114, 79, 14, -68, -33, -20, 25, -66, -7, 72, -3, -113, 18, -56, -31, 2, -105, -16, -28, 92, 24, 96, 124, 107, -8, -87, -2, 23, -101, 65, -83, 20, -57, -56, 8, -31, 106, 91, -71, -65, 86, 12, -14, -83, -120, -28, -117, 95, -74, 106, -32, -99, -88, -105, 112, -123, -57, 67, 95, 28, 77, 111, 2, 101, 60, 106, 19, 10, 60, -94, -112, 39, -17, 22, -35, -98, 101, -111, 18, 52, -86, -66, 9, 54, -76, 41, 15, 44, -76, -41, -10, -43, 31, -54, -9, 22, 8, -82, -102, 58, -64, -42, 123, -94, -47, -118, -109, -53, -35, 89, -17, 103, -50, -42, 10, -93, -89, 110, 15, -113, -26, -109, -6, -13, 6, -47, 57, 68, -15, -72, -10, 85, 83, -128, -68, -67, 118, -35, 114, -56, -98, -42, 35, 67, 95, 1, 36, 75, 45, 17, -90, 18, -1, -52, 102, -16, 121, 38, -59, -35, -45, -83, 3, 102, 51, -38, 5, -45, 8, -13, -82, 55, -2, -81, 103, 115, 65, 97, -89, -53, -25, 93, 59, 32, 54};
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
    msg.setTimeStamp(0.6019727546047557);
    msg.setSource(17405U);
    msg.setSourceEntity(67U);
    msg.setDestination(30402U);
    msg.setDestinationEntity(196U);
    msg.plan_id.assign("AFMLKVXYDRGPMKXGPAPQEZIJQDJRPSKEQSXPJUCHPCCUMQKDECXHFLRQBPYCISMVFYGTHFWSTUEGNYTYZHTSZIXWFEHGJNQRNAENAZPIMTLCLNOBDKGVGMFLKTSYDBXEWLZAHMXOVRAHPWLSIYUIBKLCUTVPNZIUHBNFJRHAWRKVRMIFOJTCOZABQXBULQICKDWIDMGLNU");
    msg.plan_size = 222U;
    msg.change_time = 0.6413055649715443;
    msg.change_sid = 41314U;
    msg.change_sname.assign("UZGUTXTPFACAUIBIBZOPGXHEMOUQBRUMPNPWCPVBFVNWYUFLIDA");
    const char tmp_msg_0[] = {-127, 62, -1, -125, 33, 23, -127, -98, -28, -62, -125, -4, -71, -100, 55, -100, 81, -113, -3, -128, 120, 92, -105, -20, 81, -82, -73, 33, 71, 40, -55, 71, -114, -5, 56, 25, -89, -120, -62, -72, 58, 38, 65, 122, -3, -128, -46, -106, 30, -58, -56, -14, 40, 56, 98, 106};
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
    msg.setTimeStamp(0.5461249886286872);
    msg.setSource(33563U);
    msg.setSourceEntity(156U);
    msg.setDestination(39971U);
    msg.setDestinationEntity(122U);
    msg.plan_id.assign("YHKDDBJUQAWSKMNEQFZNYCJXCJAAVWEVNFMQXYPKBBMHSSDVAVROGWNWGRMCVXZMIHOUBYDWEQSGZIJTCBLZEJLFQTTFGUEDOBHLZRPGNFEQITKBHNHXDCFMGSONOXTUHOBJQEWRFRAIOVRANXRJFQCPKIARVUITJDLPHUDPSTUXPHQGLSVOTWCVIWAGWYFCZPGZIBZWAQKUISAMKDLZIOKRXYGOLEEPMVSXDSPRMYTKHFECKYYZYTJX");
    msg.plan_size = 18789U;
    msg.change_time = 0.4907428912187103;
    msg.change_sid = 62002U;
    msg.change_sname.assign("PIXVKXOSOZMZPZWNWYZCJMJKQHVGYTXFGNITYSYDCULJGMNDSILBQYWBKIBQVCMULXCQRVSGQAWPJFVZAKFYYUEOVGOIFLFFXPNCVHMRLWJWPOEWGZZGFTLPEGRFXXPMHDKBEFSNQHZVKIE");
    const char tmp_msg_0[] = {-71, 5, 100, 40, -20, -44, -12, -66, -15, -101, 60, -65, 32, 106, -104, -2, -41, 109, -112, 12, -94, -67, 4, 42, -114, -40, -83, 76, -37, 40, 47, 115, -95, 6, -79, -65, 65, 55, 105, -77, -15, -84, 90, 117, -102, 46, -79};
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
    msg.setTimeStamp(0.2627503163070237);
    msg.setSource(1134U);
    msg.setSourceEntity(203U);
    msg.setDestination(12981U);
    msg.setDestinationEntity(93U);
    msg.plan_id.assign("XZMPMFSTPDHPFEZYAOCMLYFRYAWOHDPSGSHIUYAFKLOBHYCMBRZEYJTTXKHEOKUKIBINFL");
    msg.plan_size = 22496U;
    msg.change_time = 0.06958612510888407;
    msg.change_sid = 19082U;
    msg.change_sname.assign("VXKUNPGJCSXNVNNDIPCQGQGDOGGMWBLWTLPXZZRZPXHSSGZSFDBYMTOQPLHZLOYQBETYCMHAMAWJHUKUHYSVKNBKFUWDRAIRGRUCUZQEOUARTYBHVECKDVJMIBLTYCTBSVYWXADTANJUOYVBIEHNZLQGFZNKMESYCWFOFVFOGNQBCWIHPHOIOJINMCJZIXEKFMEFDEXJPWQMFPILTKAVRRXOJGIPVARDBKPCRQKZR");
    const char tmp_msg_0[] = {35, 17, -124, 21, 88, 51, 102, -120, -6, 64, -58, 65, -99, 120, -38, -104, 107, 89, 79, 101, -107, 103, -21, 5, -107, 106, -57, 120, 1, 82, -66, -113, -1, -68, -96, -42, 2, 109, -110, 120, 111, -36, -27, 64, 122, 100, 95, 126, -99, -71, -93, -50, 103, 4, 60, -116, -76, -40, 45, -89, 10, -77, 117, 7, 0, -91, 45, 55, 17, 96, -15, 107, -91, 69, 77, 40, 43, 95, 59, 8, -62, -59, 18, 26, -56, 103, 53, -21, -26, -48, 49, 31, 26};
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
    msg.setTimeStamp(0.2687576446894562);
    msg.setSource(59958U);
    msg.setSourceEntity(234U);
    msg.setDestination(61591U);
    msg.setDestinationEntity(79U);
    msg.type = 1U;
    msg.op = 38U;
    msg.request_id = 55206U;
    msg.plan_id.assign("IQFTGMUSGGJTMFOJGKPSPXZGIWGHSMXGBCUELNEUFHEAHBNTSWQCNCJTYJXIRPCIVEKHLKNZOQJWAXXNHIEOKKRPZHLVCVIKHVHMQETTLULXAVYRYDKHFUZIWODSVXPDRUAROQGOMRWODWFSETRDIULYSVNRSVJORJACOOTYLWZBDWWKBDYYUJQNQDJFPIEGZFXLSYPFSFEDRUAANXPBDVBQMZLMWAMHBQAZTMXLBIBEPZCGPAYQJKV");
    msg.flags = 63994U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 32126U;
    tmp_msg_0.lat = 0.844961683148314;
    tmp_msg_0.lon = 0.5093453374286506;
    tmp_msg_0.z = 0.76796211873458;
    tmp_msg_0.z_units = 67U;
    tmp_msg_0.speed = 0.8617336469324741;
    tmp_msg_0.speed_units = 254U;
    tmp_msg_0.custom.assign("FZAINRTADPAEGZXUBRYNMTKKYQCZHEDVUXZDUWCHVTYOSLWTANFTWPUCOWTBNJFRFONGGXXASLCKRYJOBJJRFFQSJDXZHAHCMJPKVSLONNNPQJMEGGGEEOWOMAUPQGJKKVSOVFIMCBCNIWLQASCHQVIDSIMFJFZSKWREPULGBAURBHIYSZLYMIQXKAHZLGBOSERD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DXMKHPFOQJXTYZRNZVFRWHNDNQWWAWIEWKAOEHDXFTVHZXCDMVVKIWHLGCEMLAPYEDLLVTQKCLXPXJVGFCDOKABSOKSGPGBPAUPNVBFQJZXSOWJYAYLIUIBQREJGBMLQMUCZNKZGXJNOZDPARZRYXMBOARMPDISOTCIGQUCRWAEBWOYYIDLCWKUZATURCSHLENYBTEUYZMHRBOIPPFIFSTQIFGSNQL");

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
    msg.setTimeStamp(0.6247170519051484);
    msg.setSource(12039U);
    msg.setSourceEntity(131U);
    msg.setDestination(59752U);
    msg.setDestinationEntity(163U);
    msg.type = 17U;
    msg.op = 201U;
    msg.request_id = 49125U;
    msg.plan_id.assign("WLAWPNLOCKRTASKPGSVTZPRSNKNIFMYUEYCNGEFTSVFVIFAXCUHCHAZMFWKSBMYPGXVHZRUKAWFIPEMHXKQUBJBXZQRCSAOCJDQLBYRGNZCOSZKISVHUQBSBRQTIZUVCLUZYHMYJVMPDXDXH");
    msg.flags = 20360U;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XYVGBJYTCFOYHRABBMQQUQLMTMGVSCVOUSKNNXGXZMFJYXGFNYKQKZKRZMZSCPHAVMUPAJEDLPHAJJLLEBRCHCWIXFRNICFTIAPAGDDWGNEGNAHDSNOUQKXZVRIPEZLMTDHOMJPNBBTECFPJOWRYPWPFSZRUOQEIRHBCTBAYTUQCJLOXZFDYESGLDLJJGAIYEPEVIUNSDHWRWIZXDKKXVUBBVOQZWKSVSMHEWCQATOSQNYHFRUOTMIDTWVULI");
    tmp_msg_0.sys_type = 221U;
    tmp_msg_0.owner = 52762U;
    tmp_msg_0.lat = 0.441630271269991;
    tmp_msg_0.lon = 0.33032207862935026;
    tmp_msg_0.height = 0.6008872388204145;
    tmp_msg_0.services.assign("EREFGVPCOYJBHBTSRJTV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HGFVZVRJETWIOVNDLYICDSZBQVN");

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
    msg.setTimeStamp(0.9791898380411788);
    msg.setSource(19860U);
    msg.setSourceEntity(48U);
    msg.setDestination(64717U);
    msg.setDestinationEntity(185U);
    msg.type = 88U;
    msg.op = 94U;
    msg.request_id = 40612U;
    msg.plan_id.assign("SHGAEOAMYWPMDKQVHXVKSVGUPUTAMRQYEZXXRFFZKHBLAN");
    msg.flags = 13092U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 32578U;
    tmp_msg_0.control_ent = 31U;
    tmp_msg_0.timeout = 0.7289329753703193;
    tmp_msg_0.loiter_radius = 0.8189348854169697;
    tmp_msg_0.altitude_interval = 0.6349555229272307;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QELBGVSIOECZAUCGZAADHFDPF");

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
    msg.setTimeStamp(0.6841206169588538);
    msg.setSource(47513U);
    msg.setSourceEntity(160U);
    msg.setDestination(36705U);
    msg.setDestinationEntity(132U);
    msg.state = 62U;
    msg.plan_id.assign("INYSTRYRRSDCKLZETILBCUKPCWVZGJBPPEKRNXIHHAAXQLFVNUIZMHFTWMDTOGLDYXQBWCYYGJPDDMPSXAKRBOHROOZDCRVR");
    msg.plan_eta = -1708200071;
    msg.plan_progress = 0.417353570492236;
    msg.man_id.assign("FKNPHXKKGHRRIJPSZROFHWYGALMEIVYKRBDSTOYPPCAEMNUWCBIVSMTQMFEHUUTEWYEBELVLDJQCGZWOUWSHKVJRBBN");
    msg.man_type = 5860U;
    msg.man_eta = -435971890;
    msg.last_outcome = 132U;

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
    msg.setTimeStamp(0.6600782961484684);
    msg.setSource(51749U);
    msg.setSourceEntity(242U);
    msg.setDestination(38386U);
    msg.setDestinationEntity(225U);
    msg.state = 198U;
    msg.plan_id.assign("NWHTQKFQDUSPWKRYZTOLNCNZACXPJSGAGGLCHRHSPSKAYAVBDKAYUVDXMJPQEQOBMUSJBNBNLIZAQLVEYOOLTUCKICOPMIBERYQXTZICGPEMUAFZUUFVNENADHGBWKOVWACVQPADIOSHHWLMFXCHM");
    msg.plan_eta = 250334636;
    msg.plan_progress = 0.17203653650724327;
    msg.man_id.assign("YJXWOBIZAOZCXDEXPYTIXNHVGPEOOXMVNOLOLVHMWDDOKSPGIZWGCRCEBRAEXERTJLWFNDSAZATQUCOJKXBFMYRLVPRUXXYKCJILVFMVMWKEJNURENKHUKUSREZVTFWMPSQYSSYDWQQYZGHSCQUDCBWMM");
    msg.man_type = 24315U;
    msg.man_eta = 2081631755;
    msg.last_outcome = 121U;

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
    msg.setTimeStamp(0.40080075875576826);
    msg.setSource(8308U);
    msg.setSourceEntity(135U);
    msg.setDestination(56828U);
    msg.setDestinationEntity(26U);
    msg.state = 11U;
    msg.plan_id.assign("ZPFACWRIPJNORMOYTRBKCSFCWNHNNCWQNXXLWGZQLEJWTYLRISIDYCTBSSABPEKGQQURFUMLZRGUJEYFMYRZIMEXXFXQYQSRGWPDXEGJPEXGHAEPHUJHLQAZVNTKIDIQGPDDBUEZZCJDIUSDUSBMOHFMLTK");
    msg.plan_eta = -478990413;
    msg.plan_progress = 0.5687704129826356;
    msg.man_id.assign("UCHUENYTNWODKPVMDJMDDVQZVHWKBTFEMVRBOBRLNZBVXGEHLGNAAMWAUHBNHROFDORCLUKBVYQZNDIIGTSCFJXICNGOHVPYZXGFVBFQUQYUCJALFIILALCTSESJXJMTRQIIARSJD");
    msg.man_type = 43558U;
    msg.man_eta = -142342812;
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
    msg.setTimeStamp(0.017222385476540314);
    msg.setSource(58752U);
    msg.setSourceEntity(156U);
    msg.setDestination(63516U);
    msg.setDestinationEntity(201U);
    msg.name.assign("WUYUVFDEXLQVQZNXYMEGGXIPQVDJSBDNNRCQWFOTXTBZZOLYECFLITEFRHJWSHAGMFM");
    msg.value.assign("DIJMUTYBSQPOAEXRDECNJSTUIDKNJIMQOOYLWYZVBABZZKPSHXOFNTBYZKQYKFUXFCBAVQMJJNEAQJHOEXFDMVQQLLDT");
    msg.type = 1U;
    msg.access = 193U;

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
    msg.setTimeStamp(0.5733661673251557);
    msg.setSource(17269U);
    msg.setSourceEntity(156U);
    msg.setDestination(7617U);
    msg.setDestinationEntity(39U);
    msg.name.assign("NGLBOQCJVGBHTPGTMKXZDBWEWJTHOTLZODSFRNYGADBLATTYTDRQNBPNDVUCVZIJCBNKYEYRKFUZVZRFEUNQKJMJTOANIGAAADXPUJERHYJGRFUVVUXPQSDNELUPZYGDNSQJTEKLACKQLCBKGTFCK");
    msg.value.assign("KVOVVVQKWSDFQDFOBXQNWNMJLAXWWOFXNXIYOBRCHYGVJKTZLTRMZKMFJSUAEJMEEORKJYDPDOKEKADIQIOVHWCXTYMTIEMVFCVGYSRIUJPPLBPQQDTLRQCELUDSHXBUVMMNTZFCRAMUSPRNGDULELZONRQHBKPNX");
    msg.type = 152U;
    msg.access = 81U;

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
    msg.setTimeStamp(0.899273891462517);
    msg.setSource(43183U);
    msg.setSourceEntity(19U);
    msg.setDestination(30437U);
    msg.setDestinationEntity(161U);
    msg.name.assign("JOFGPXNUEVPAKGURKRISRMJIJPCYQESVKAKLMQWXCHKCPYZBICJGTWZYGMCBITUYYARFXBXSLXOHOZQNNKICCSPSXJQBG");
    msg.value.assign("LQXYBXXCGHKBEZSNRPORIBLCHSPYYLUJNIIXZVIMTEKWDEDTZZVHNEHOMIOJMWDEKCZWQCOECXZPKGCQSDVSHDPAISLIKGRDYGPJTEYTFACUABEZMAMDZFUTRTJJVUUYVQFFTJVHFNGPKZKIGSIKLPAMYHNRSQXJUGDALJOGDKXHTSWYTMMLNNO");
    msg.type = 41U;
    msg.access = 59U;

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
    msg.setTimeStamp(0.3136709410127908);
    msg.setSource(16282U);
    msg.setSourceEntity(170U);
    msg.setDestination(28487U);
    msg.setDestinationEntity(49U);
    msg.cmd = 22U;
    msg.op = 104U;
    msg.plan_id.assign("JVWCRVIARXGQBNQKRAUOWOIXOEQVZMGSFXQDSTKTTWQKPGPWKMWVXLMGJHTITHYGT");
    msg.params.assign("EPXRBLGVNNUQWOGVQMBVHAHCDOWMSRXSWCKYJUMZWLEHFJAOVFGEJIGYVXAHFJQCAPVRPJECGXYVUHZLHFUOABIKYATIYZRBQXKRXMWUBNZOTIGCLRYQWWSZWKJSPEDXZAPAAUDCSILUJFKYURNECJDYYPKZRFFUQIBYXCKSBJQN");

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
    msg.setTimeStamp(0.20410490427408512);
    msg.setSource(13437U);
    msg.setSourceEntity(87U);
    msg.setDestination(24035U);
    msg.setDestinationEntity(194U);
    msg.cmd = 110U;
    msg.op = 150U;
    msg.plan_id.assign("ESAJVEIXNPZVKZCGMAFHJNXCAAWROKQYVMFQWXZJVNQKVXUIBUHRDEBWHYWAZRFEPKDMQGVMYLLGCWESJOWVJEYWVQCJDSXCMYSSDWYFKHF");
    msg.params.assign("XELTVJSOQLIILQZMWBFCHWXTZSXTNEFQEBJFUTPPWIHMYBDGFUZKYUGAUWEZNMOJAIQPPVNEMSUTRGMPWBLSCJSQPXBLCZEBXRIXFRQYGAJBWCJTPVHIKYFDPSDZDBWHDLTDUHROMWNALGKFAZDUZAVJSGZOUUCLZKTFONVQPQXCEAXDVCQCTYPYXHKNVJHDNFLCOINBTIYIKOVXAHCGMGAKOQRMJWYNEIFGHKKRGWNYYRKJEMU");

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
    msg.setTimeStamp(0.6714885599711383);
    msg.setSource(27210U);
    msg.setSourceEntity(217U);
    msg.setDestination(26733U);
    msg.setDestinationEntity(174U);
    msg.cmd = 95U;
    msg.op = 81U;
    msg.plan_id.assign("OXRZMOBPDYBGJCCXQKFNRU");
    msg.params.assign("WOTAOTNCAJFTSBTUZHWVGHULYPXCQMPQORNNTMWYRIKXRDCKUKLVTEVFSRHWZYSUIWAGUGKEDLZBOLJBEBPJYHZRAIBEMPLOHAJRSFIQACQDCOZMVKLURUPJEQJPMCAWDXUXQYGSVRKSIXFXRIBQEOHKZBHJYEZIOMSCZDFPINSBYAQ");

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
    msg.setTimeStamp(0.1755629512353606);
    msg.setSource(60534U);
    msg.setSourceEntity(33U);
    msg.setDestination(34794U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("CIRRZCHFSUPNYOIDAIBOGDPQWIFHFVPPODSAVMYAWOGZSYPHKUPQHCCLFYJTWLXPTJENMVWSGAVXQVEKQBOWKYWCLHZOUEJSIRHKFKWOGLFEZINMTVUQEXZYOBVUUZKRTDRJIIJGPTTWTZDJXEVASTXYMFLQZOOUXHGVBPBDCFRMBXEBDMZMMBPCJNQLHYNJKNDLBAEMEKSIDMWHSRW");
    msg.op = 66U;
    msg.lat = 0.2438953917070652;
    msg.lon = 0.7090090839603713;
    msg.height = 0.7263637249556834;
    msg.x = 0.5491132842603729;
    msg.y = 0.6714389232211059;
    msg.z = 0.47484981015417027;
    msg.phi = 0.6573904470948451;
    msg.theta = 0.06803951697222754;
    msg.psi = 0.999855169799473;
    msg.vx = 0.07463839729646904;
    msg.vy = 0.9501079077562548;
    msg.vz = 0.9952018497359042;
    msg.p = 0.9819607349827367;
    msg.q = 0.8985958718314915;
    msg.r = 0.5221048141189387;
    msg.svx = 0.09740529879840576;
    msg.svy = 0.811454206980244;
    msg.svz = 0.24347703536135545;

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
    msg.setTimeStamp(0.45305051651367223);
    msg.setSource(49116U);
    msg.setSourceEntity(42U);
    msg.setDestination(29212U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("LMEDCFKHWRLLAYINOHRDTUJYLUHSUVIXQKSVCZQFSIQVSGRZUUKYIVAODXKBMHMXBQIARYFGPKSCODXEUHDFBZFXVTHVZZEVFQXAYEEFACTV");
    msg.op = 247U;
    msg.lat = 0.5538967104704748;
    msg.lon = 0.5598261230662165;
    msg.height = 0.23698874822290994;
    msg.x = 0.13001391814240615;
    msg.y = 0.6968239771179949;
    msg.z = 0.3517665420890267;
    msg.phi = 0.7950897599916235;
    msg.theta = 0.5488213348469042;
    msg.psi = 0.6076870010478999;
    msg.vx = 0.21245908511930822;
    msg.vy = 0.5730232920197964;
    msg.vz = 0.05511464620143092;
    msg.p = 0.3085230732838028;
    msg.q = 0.2787444193457682;
    msg.r = 0.08818048431816561;
    msg.svx = 0.8216447237601625;
    msg.svy = 0.5311353279330739;
    msg.svz = 0.08860866347271401;

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
    msg.setTimeStamp(0.7980501998659604);
    msg.setSource(53009U);
    msg.setSourceEntity(96U);
    msg.setDestination(48839U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("FEDRVDSWZTGWNKACPMIUUQIMMNUMPRPMCCWRYHZMWWOYGVGQOCULXZSRAVOGRVDEASKSFRJHABLXZBHTBDCZKDJMQBNYNVJIONHDCSIIHBESFWQABIUGWEGASQOFFTUVOYDYIKTKJNLOTODKVRJXZPKBLJDYQPXSXZCKAPUHILYZDTEH");
    msg.op = 55U;
    msg.lat = 0.7406848404702326;
    msg.lon = 0.7272341792630272;
    msg.height = 0.6913564521512566;
    msg.x = 0.17736993044569782;
    msg.y = 0.36812721506621937;
    msg.z = 0.4500863930793171;
    msg.phi = 0.0087369158107784;
    msg.theta = 0.8161216729231929;
    msg.psi = 0.42964845999221857;
    msg.vx = 0.7886740617163144;
    msg.vy = 0.9518122265823536;
    msg.vz = 0.4979116264610659;
    msg.p = 0.6983351210034063;
    msg.q = 0.007728318584500959;
    msg.r = 0.9834884243512843;
    msg.svx = 0.6085545039690875;
    msg.svy = 0.8704847954294604;
    msg.svz = 0.8328775072687465;

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
    msg.setTimeStamp(0.13613498969746607);
    msg.setSource(39972U);
    msg.setSourceEntity(38U);
    msg.setDestination(49721U);
    msg.setDestinationEntity(125U);
    msg.plan_id.assign("WATXPGTNUWUKFINVHJVGLYEKYPTTHRC");
    msg.type = 98U;
    msg.properties = 238U;
    msg.durations.assign("GDLHGYJDFNSQMAJGKPRNMJAREHLTCTEBYDLXWPTZPPIECESVKQLJIVTSLXBFKPBQQUQQWXCFISURIMGHISCVQO");
    msg.distances.assign("HRYSXOGVWHDOGPWRJXCFHJLBIYEUFQIGXLMXFIZRLFQUWUJTQKCAMPQPARTINDYKPQCPPZHUDMTZUEBQSOJXGTAAUADQSSLLSVVEZYDJJTRGVKBWHZMWWZPIEDHEKZBMNGHMNATYWVIBVMMCPRJCQCNOUSXKUTRXCZDRWVVOFLBEEJIGUYZBBCOZOOCITWPNUTLGAYKOIRHXFYPXNNHYQHVDJSDR");
    msg.actions.assign("MSGBRTVCZGDIQIPIACXEGDXSGWNPZCWYEXQTNVSAIXMLKPGLZMHDZPCECJBKKZMJNUJTSODMXBBKUSEQCFGEILOMMYR");
    msg.fuel.assign("ILEAOQZHHIEOHARSULSULNVYEJQBNUJWMBFYERKBFIRRVELVGGNHUQQJAXUSCVIAZAYXGTYZYNWPYZZEFDROYGSBPNMCPKDADBUHEOLQRHUKGGGJATGLYTWKJDXGSXPVLLTKZVPFPVDFFMSAIIHTFNZDQXSRQCHUJTTQMMSIVUKDBOAQPKDNTROYXVOZJQCDPCHMJBZATEWFWFMRICOBUKSIKLDZWOOERNTXMXWCHBBCW");

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
    msg.setTimeStamp(0.4716243594974019);
    msg.setSource(24818U);
    msg.setSourceEntity(180U);
    msg.setDestination(31056U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("WGSARJZYMHXWBJJWPFXECFAKCFAMQQXMYJUHADOSKKYTHGUMUIHWFH");
    msg.type = 122U;
    msg.properties = 36U;
    msg.durations.assign("SJWXPOSRUEPQCIQGUGNZJJYQMZGRDECLDCFG");
    msg.distances.assign("DXJDMFIPXSWLPVHEYQCULGEINAKGUJPNYMZISVBNTVDMXAQIMIWLFITDFHFRKOHOSVXZREDPCICBCSVIUNOEACDXFZVSBHYOHUHGDGUTKLKCPLWLKUADQNOSZDUEME");
    msg.actions.assign("OMHXTOJXMDHIIUWWBEHNENHHQHQSFSZANQWLNVAMCBGZLYIVVJTROIPGEWJTIPWZPARKYHDPPBAGUZIJSBVVUVXPKUFTCECWMDLMDKFQHQVXORFJVWZUSBXBQFRTGTKOUDJQKIZKCEUCYOATBLDGZMXQIBNYCTTFNSCOIALVASRYLJZLYXENRRG");
    msg.fuel.assign("FGYJTZTCSEBEDGACZLGAAOQIXTRFQXDKHGRMHQSMQYJVPQYEHXGWWJMDOTZEPQTNEDSLYGHPTFALFWSHNBLCIUOSUUDAIYHDOJABWKAUQKEMTGWBNIFFNWCNROFFJJMZBCKQEPKUEZLXVMGWCPIWHYXYZVBKRUIFLHHIUCBCNKVOOETVBSCRBKPBRLZ");

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
    msg.setTimeStamp(0.9779190311768757);
    msg.setSource(27006U);
    msg.setSourceEntity(94U);
    msg.setDestination(25585U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("ZFMVYLFUOCDSRGBVCYPPOFDTGCCZWNFDUJRSQNAJQHOGSGRBSMZCZDEWOWIDEMCNMLNAKBRYOENGJPHFWDRZGTKMWOJFYZSWQTBFUAQTMQTMRKWIISFIBMXERNE");
    msg.type = 108U;
    msg.properties = 100U;
    msg.durations.assign("QQVQVKRIMDSHTBCNEEOJKPEVOYIFMJUAVESIYXBVDKOZGZZAITHMRMEHRLHJOIRVYOCZZEJUFMWTLXLQPRSPUZKASPFJYBLCQVIKCUHNRNYAQFWMBWRBCPVLBBFXXLHCKDREBTAGWUJDDYDZTEOONNEDZYCJPATDHSPBXDQEOWKGMXOQTNGCIZGFKNXUIQGTWMVJTNFKZWLFYRSJXRCSWXPIOUGHMLSDXMTLUUKWSPWFUGNGHIGYPA");
    msg.distances.assign("TPOYSOUZLANJBVUMQBFLKILTNEKOMHTPXEHCGVBXJZZLFTQIAYYZONAKXLBXMUQHFKKWPNZOMY");
    msg.actions.assign("FZRWPDPMKEJSEYECVAQLAZRKSBNLHBDAQKSBDOZOPTKVFIRUYWUTDPINNMQBUSFJGJSRPHELAWMTWTMYCUXMJLZPTTZRYXWPOBOKAYLJGASMHJYNIDVKOCLPYEUUSGZUDBXXICNWCWGAMRHBPCMHCJOGWCJSDSOQIGZAQPGKDVBBCZOUAFROEUOTVDUGJJI");
    msg.fuel.assign("XINQLQENVCAMBCSNDAEFIWCBJWYNNKFMWCYFURAQZBSJQNVYBBNSYSOWVQSOESMHOTLHHUQAPXASMRGRMUZCXTXZPKIDERBLDVDXETZKGPJRQCNGORDUJIJOHGFJPMWNOFTWSDHISIQDWEMYXARQGLYGWZVMJEBZGWFOUCDZKPPKJHUTJBLQIOVCDTCFGXFBEVEPDPNKIHYZTLTAERAUKJLXFYMPRYMUI");

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
    msg.setTimeStamp(0.9470913019908564);
    msg.setSource(55186U);
    msg.setSourceEntity(3U);
    msg.setDestination(22141U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.08846048618581848;
    msg.lon = 0.36144820511997366;
    msg.depth = 0.9719888303216427;
    msg.roll = 0.6621974849656258;
    msg.pitch = 0.3195123180586411;
    msg.yaw = 0.9881183919819626;
    msg.rcp_time = 0.7500777564389723;
    msg.sid.assign("WIKUOQRUPDHYRAPRENPQOWHBXAVSONDEZLORPGCXVEVAJ");
    msg.s_type = 242U;

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
    msg.setTimeStamp(0.8864328054063914);
    msg.setSource(54859U);
    msg.setSourceEntity(237U);
    msg.setDestination(6143U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.4706751537559213;
    msg.lon = 0.7431408555023439;
    msg.depth = 0.32713960604228476;
    msg.roll = 0.7829566624244764;
    msg.pitch = 0.038932976225867444;
    msg.yaw = 0.39327202668362415;
    msg.rcp_time = 0.6373230641217408;
    msg.sid.assign("WMSGVPINUMRBVQCLYUIFBVTTHBDIFXXEFAARNQDVCGVZJBMQMCERJKJPBUMTNWPPHQQCCCLHREIAGWTAWTUFNONRYYDIAYWKCIHOBSZZCWCBYXLDYJIHOARGQEHONTXAKUWAUIZO");
    msg.s_type = 164U;

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
    msg.setTimeStamp(0.670710500267255);
    msg.setSource(37870U);
    msg.setSourceEntity(108U);
    msg.setDestination(5298U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.10608937197947266;
    msg.lon = 0.028739764896386744;
    msg.depth = 0.5433555383048944;
    msg.roll = 0.6644888052544763;
    msg.pitch = 0.25214496953386256;
    msg.yaw = 0.542732936564241;
    msg.rcp_time = 0.06236829482274309;
    msg.sid.assign("ACZAKEVPKLIIDUDWABHEG");
    msg.s_type = 85U;

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
    msg.setTimeStamp(0.5130592613526543);
    msg.setSource(2333U);
    msg.setSourceEntity(108U);
    msg.setDestination(17266U);
    msg.setDestinationEntity(149U);
    msg.id.assign("ERILVGXBWCNGKGFHRGNZCFKJZDYVRXTLHTVZFHJGWQUDNDYQKPYADVUWQNNMFVHOHXPLXMYEJAFBAJPYPSSVKIIVBGSEHCJSBTMOAOXWRMWKQNBQTIPPLBOKQOUTTQLBBOWXFHMAZMEZDPLSOQEHLTMRFJCSXCJVWUJDYWRCIFYRXGMEZZRSUMIWDEUNUOCPNIVUDMEAIOSTCQSEYIUATBPESLKWCLKQGGNVJOI");
    msg.sensor_class.assign("UWJMJCFOKKUVFSNGXZJBXMQUEAHXSVGSYVPEXHBOLPIMEOVSWIPCABPULWDDPCJHNHYTKCUJYY");
    msg.lat = 0.5898227158477175;
    msg.lon = 0.603687720248308;
    msg.alt = 0.35831266502095227;
    msg.heading = 0.3873402602006072;
    msg.data.assign("IXIZVTIALFMEEOYVCMKQHASTMRPKXUVDRZHWGNFYKZWFHKTDXDIQPXQUNUQGWIDWEQRZIELPNWYDXTVGBRFALOMEJOQVJJUBLGXWCIXRBFGTYTHJSL");

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
    msg.setTimeStamp(0.13021554439752392);
    msg.setSource(5660U);
    msg.setSourceEntity(37U);
    msg.setDestination(49283U);
    msg.setDestinationEntity(135U);
    msg.id.assign("LDUOIUZBYJQLYVZMNZYLQXAOLGGVTSZUPJUAJBWDUSHQEIHMIEGOOAQYGMTEKRQFMXFHNNFDCGPMSWQGECLXTHBFPVZSIAXBDJWXSOGQFJXJANRPAIKGTIDHVWTRWNTHKW");
    msg.sensor_class.assign("HVTKRCRTIJDZQIQOJSWOOBXPITYERJARPLBSAQEXOSXWONMUVBVQUYCTFHBAIUSVWIHCPVSMFBMNGLFHFCRZUJWUDYMIENSAMJKKDXXQYLPVGJZLINMGBEXMIDSHCHGUXDFWLWAZHNBUCETNTDVZFPZANTXQWLPSFHMYVBSGAZXLGEY");
    msg.lat = 0.7158021223695261;
    msg.lon = 0.8756359227145235;
    msg.alt = 0.42983006646723654;
    msg.heading = 0.5933386631826312;
    msg.data.assign("FJIKNVUCAVIQYARPHMPBTSESUGABLKIAGQDHUXVYDXKWOOEVNTRGDKVDEFLWXLFPEGEJJDBMKLRUIHAHGDTCXOQNYYLPRDCJRYDMZAHCSQWFNVJTHZHXTXFOLZPJMVSOHGQZWZQES");

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
    msg.setTimeStamp(0.3328809141296035);
    msg.setSource(17145U);
    msg.setSourceEntity(252U);
    msg.setDestination(38482U);
    msg.setDestinationEntity(218U);
    msg.id.assign("WMDVELZYFZPUNVROZTYYGRBCTGJGHZBSDLFAIBWQROINFGKKETKCLCCXFGNNBYSWVXQKXULCQMNDCZSZXUZAESRTXYDHUXAVBYMLCHGQIUBFKUIH");
    msg.sensor_class.assign("MCFYALPPDIPCIPNNDOEZQXBHOERFQGFXVVZZASBMWRAJWIJNCJNFRBMWMAEJUDAUMRGZDRUETNXIWGPHCHIIUWXDIOSFEFMDHOGBTAVUXCJVLLEXYSUEORTO");
    msg.lat = 0.22384660956253488;
    msg.lon = 0.5962215766304517;
    msg.alt = 0.9395959079593461;
    msg.heading = 0.4084860451388054;
    msg.data.assign("SAXULZJGNPUPFTHSFDMCKTLKSUHZAFAKLTUKTQOLMJZTRIXTHYKFYAPHNZIKJXBEOVIGHAHXYBZSWIXLYMVDJERGGEWRIUMMRIFWVYXNEPYTNWIOOGXXVSLWPXETMAKGTFYWYQDNBCCNZEHRDQWZIVOJWIXNPDEAOABFCHQKVDROGZDCMSNQGCWQHDBSJ");

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
    msg.setTimeStamp(0.033437193125405495);
    msg.setSource(31651U);
    msg.setSourceEntity(222U);
    msg.setDestination(41765U);
    msg.setDestinationEntity(116U);
    msg.id.assign("NGJKEFHPKXNGJUSJTAZHYITGZLCRIPLWIVMLPWZUMSYCCYURZNMRBTSSAIDHQNMLKHYCEAEKNTULSHDDXYYSXKRJTWBPZKBGLGIGWFZBQWBFRAIMINVGJYQNJJPZCOWOADBALSEDRPZLBEOGAOCJLNTZQLORXVVWGJDXSTMJXEDWMAUVPIFMOFWQXUPTHHCHQFDUVPUNBFMRHBTQXFVRCMYIKPYESYZRXVONVHBEQDUFVUTECCWQSKDKF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BUYKBJLZTYJEPPDGPJCNVRFQJHOEAQDDYIPQVTQIAXDMTXELKTVPNJAUIGYAKOFGMMHSUZOXFJRAQQPBTDYDRBRKGPRPORTLGXBYMXCXOVCSVRFGWIMGWMTLGECZUYSNXSHZVQEMLEKLOUAZKXVZBFUGNRZOESXWCWTCKMNFHAINQVEZONFIHFDDYEMBCNDTGVSISSXB");
    tmp_msg_0.feature_type = 29U;
    tmp_msg_0.rgb_red = 150U;
    tmp_msg_0.rgb_green = 219U;
    tmp_msg_0.rgb_blue = 35U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5811557860848403;
    tmp_tmp_msg_0_0.lon = 0.8976215634884793;
    tmp_tmp_msg_0_0.alt = 0.4161435768516851;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6831542854146727);
    msg.setSource(10612U);
    msg.setSourceEntity(5U);
    msg.setDestination(10106U);
    msg.setDestinationEntity(44U);
    msg.id.assign("RPANVPUSLLDCPOLMJHAOFTFYVRHEQJKLENRAUUBXVBABCFWSKBYIRCRUBZIMIKXEFLHJDVNPM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TVHSGPOBWVVVIEIJWHJBDXACVNVNNKZJYQDYJCTSBUUQMIGJBOQGOLSSOXIKLQFXBUDUZCMLQXWIQWBAZQRGWZGJIFVOTOJSDONHMLRDLISRPBYWVRQCUUIFAFOCLLYYYOKTSZXAMBRNENCUQAHXKRMYCUMCXTDSJKMLGI");
    tmp_msg_0.feature_type = 49U;
    tmp_msg_0.rgb_red = 89U;
    tmp_msg_0.rgb_green = 99U;
    tmp_msg_0.rgb_blue = 97U;
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
    msg.setTimeStamp(0.33839368725850794);
    msg.setSource(26851U);
    msg.setSourceEntity(58U);
    msg.setDestination(55148U);
    msg.setDestinationEntity(34U);
    msg.id.assign("ESSXMQJKYQQIASSZUMGINNPVCBHITYMHJBUXQGVNVRRG");

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
    msg.setTimeStamp(0.24399811230019064);
    msg.setSource(64488U);
    msg.setSourceEntity(107U);
    msg.setDestination(19559U);
    msg.setDestinationEntity(147U);
    msg.id.assign("NEWYADVBGUNRZFINBYFDHBEXWUNMBDGWTKMYVAPBOJBVSMYTQLRIPIXGZYUTZHIHDMWHIWLCNXXRVMNVJTYK");
    msg.feature_type = 53U;
    msg.rgb_red = 96U;
    msg.rgb_green = 53U;
    msg.rgb_blue = 247U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8828541341800565;
    tmp_msg_0.lon = 0.8572753737790905;
    tmp_msg_0.alt = 0.019781848445771688;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9819457903572002);
    msg.setSource(64336U);
    msg.setSourceEntity(242U);
    msg.setDestination(41811U);
    msg.setDestinationEntity(8U);
    msg.id.assign("UQTIEGUBXGMEMSMZBRLRDXKIVGJVNSXK");
    msg.feature_type = 153U;
    msg.rgb_red = 217U;
    msg.rgb_green = 225U;
    msg.rgb_blue = 246U;

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
    msg.setTimeStamp(0.2971686528832902);
    msg.setSource(17635U);
    msg.setSourceEntity(37U);
    msg.setDestination(36629U);
    msg.setDestinationEntity(123U);
    msg.id.assign("BXNIOJMWLTQACLPLBJTAJAADDDVVSPQLGMNDRRHBDLZTEOCTWRFFHXXCGBAWKLEEQITKYHNDRHJMEWIJSNQOGWBKEAMXKZJKURDCMFSILHQDPWYPMHOIZEXCS");
    msg.feature_type = 207U;
    msg.rgb_red = 207U;
    msg.rgb_green = 32U;
    msg.rgb_blue = 19U;

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
    msg.setTimeStamp(0.46098748064783657);
    msg.setSource(54943U);
    msg.setSourceEntity(210U);
    msg.setDestination(58186U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.6532691295404109;
    msg.lon = 0.5119625839431068;
    msg.alt = 0.09154942334864935;

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
    msg.setTimeStamp(0.8235881495844973);
    msg.setSource(6089U);
    msg.setSourceEntity(73U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.10644876556591143;
    msg.lon = 0.9143218190623422;
    msg.alt = 0.47526077862792915;

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
    msg.setTimeStamp(0.731474420875286);
    msg.setSource(4223U);
    msg.setSourceEntity(49U);
    msg.setDestination(35501U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.13414868326146845;
    msg.lon = 0.021088826108920156;
    msg.alt = 0.010055204353283997;

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
    msg.setTimeStamp(0.07866942491051998);
    msg.setSource(32295U);
    msg.setSourceEntity(72U);
    msg.setDestination(60404U);
    msg.setDestinationEntity(178U);
    msg.type = 194U;
    msg.id.assign("PDKKCTUCEIFPDKRTHNIBURWLLASXJDNBNWHMBEZCYXOUPJQOJBULTONSVLTHZFXRKHIWHWFMFXXUVAHDONJICABEGALZCAVMPRTTMEISXOYRNUGHYRKQPUACYIKPFALEAHBCZZMZZFQTTDYJFZUMAILPSMRQMFRQGKGJWXXOLVSJZUQYCEZAOFFMWJQSOKVWQXPTRKPERBVOWDEBJIOYVLSXUGDNSDVGYBCDKNNVYGSMDWG");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.5673809164965019;
    tmp_msg_0.i = 0.6131010543164287;
    tmp_msg_0.d = 0.8254797194978571;
    tmp_msg_0.a = 0.1119099686745646;
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
    msg.setTimeStamp(0.08562245003371693);
    msg.setSource(42786U);
    msg.setSourceEntity(181U);
    msg.setDestination(51986U);
    msg.setDestinationEntity(23U);
    msg.type = 23U;
    msg.id.assign("HVMEOBXLDSSIKHNBVDGDOLESAMASLVXITECJJUMBGMDUQIICYFLCJJZEKXFYBRPCXCDTMUVTZHLHPQBTKZBBEZFPWKWOAUCLBOQKBGCFNUMRLIGZORTTWNMYPAXATEYDFPJFZAXSTIUFQJCYIWPHSHUXCSZYLWQENVVXBGFYQIHRVEQVWAXOHPNAZQJ");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.703202745637595;
    tmp_msg_0.confidence = 0.23606209071687223;
    tmp_msg_0.opmodes.assign("VYRRFHMZVXYUDVXONUUZKKMGGEXKRJHIXBAGMYHYQQNWQBAJRBTELFCXQTHYJIMEFVGWUDESCRSPBDZMOXZYWJCMTZVXBJALRUZEXTTSDHAYWGFHWLVWJWWLASPLNYQUOBTSDDNHBMMKZVAPIGSZBXAIOMKTKPZZIAUCTEHKNCPUOHRJPFTFCEXCYOELVFFNGLBQPQURPDEIIWONPGWOUQJSDGBFEICOYVVRKQADCL");
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
    msg.setTimeStamp(0.9874281818975393);
    msg.setSource(33182U);
    msg.setSourceEntity(134U);
    msg.setDestination(28021U);
    msg.setDestinationEntity(203U);
    msg.type = 88U;
    msg.id.assign("BKVWQSNKTPDZVFMGWMDZSTLMITOOHQIRNVMVFJSYKWGHYULOEMBNUNRICXHWNJXVCQHZZNQXGCWGHTFQSDQQTQTZXMPDPFXCIORGXXREJDYFYRWGYXSJIPDABRYBXUUBRUIWSGDU");
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 860087431U;
    tmp_msg_0.status = 27U;
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
    msg.setTimeStamp(0.580775170592593);
    msg.setSource(63818U);
    msg.setSourceEntity(112U);
    msg.setDestination(38815U);
    msg.setDestinationEntity(168U);
    msg.localname.assign("IOPZCQYMXRVDLHQPYNKKQCGUJJODKECDHZWTXRKIKBYQAPQGBHKCICLWSYPPHFVLOHJVAWXVKKJPMZDIUOQAOYSBDZRAYZJGGMCJQCCLNTEUUYHIXDTELBBIVYRYN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EVHBXOBMVHWBJOLCUTYRUXSBWHLBYVFSDXHLY");
    tmp_msg_0.sys_type = 119U;
    tmp_msg_0.owner = 64543U;
    tmp_msg_0.lat = 0.7284039277775267;
    tmp_msg_0.lon = 0.45070960213239075;
    tmp_msg_0.height = 0.6559479032188663;
    tmp_msg_0.services.assign("XCJPKOBASOYSAWPAPECDSALIQZBYZLIJFBNXGHKCSEBKOVVYVGUDSLCTIGKOMDBMSFFDFCYWXDWUEIQNCKXTIBZOECLGCQXQPYTHJRGMJLJRNUGRODUFFDVVLLANYKQUWGMUUTHQEIRWXYFRMJIZFIHHRFJVASVPXPRPCTBOATGVGLKUJEHYBYEKTNSZWDEAXDTNAF");
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
    msg.setTimeStamp(0.5421067363570184);
    msg.setSource(62081U);
    msg.setSourceEntity(20U);
    msg.setDestination(19927U);
    msg.setDestinationEntity(156U);
    msg.localname.assign("XPVFJVHFLUZNWUXJJLUHJRBIAHZGAQMQWMCMYFLQUNCNWWGQGAFXDTNTVOZUPVCZMGBUSBQHNECBXHIIUB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LTGUWBONZFAMCIDBXUBHKFFSXJHDEIUFFPLBCSOGCNMHNMTZVIUPTXXLPKHZUPABLEGHUPWZWAVLSCCHKHAOJVPMXEZDYKDSANYWTTRNKNMPYKOOBJEGOEYDZQIXSYHNUBECCRLALONRAYVRRGCQDTJFAVJIFUYQ");
    tmp_msg_0.sys_type = 122U;
    tmp_msg_0.owner = 60936U;
    tmp_msg_0.lat = 0.26491929884306875;
    tmp_msg_0.lon = 0.860648452164976;
    tmp_msg_0.height = 0.38385691378560904;
    tmp_msg_0.services.assign("NMQUDPYMMMWIJHEVTZHZDIUSTIJPHCUEXGCABZWQADOVYWOXNFDGBWEPJYEKQFVFZUPRNQTLDSGVUOAWANLTWIYZLLZGQISHTEXBHKESBLDAAVMDBMKFBD");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.07774440986053077);
    msg.setSource(48298U);
    msg.setSourceEntity(231U);
    msg.setDestination(32327U);
    msg.setDestinationEntity(11U);
    msg.localname.assign("GVFCLIUTUZBCSEOZQJATKJYPNFJLVVWEBECUODWDABMLKRCTNXXCEVYFIJQHGUQNBJJTLKEZWSWYOIJTDFVZHAM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PODKPGIZRSZKCJMX");
    tmp_msg_0.sys_type = 2U;
    tmp_msg_0.owner = 60662U;
    tmp_msg_0.lat = 0.8239835417744276;
    tmp_msg_0.lon = 0.42056349923602465;
    tmp_msg_0.height = 0.04659141885712237;
    tmp_msg_0.services.assign("ULXBNGFEVGOJBVYOSRFRDXHSJTUJNBSDGGWPRCLAJWLZQLSFPJYGNQJGFYNCMXJGYOSFYONMTEQUWRUVEYKZQLXCRWNXZPQTBRWKRUBB");
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
    msg.setTimeStamp(0.6875485073202782);
    msg.setSource(26202U);
    msg.setSourceEntity(229U);
    msg.setDestination(64025U);
    msg.setDestinationEntity(251U);
    msg.timeline.assign("VSOZPRBIGPWQLNEOBLTNFLIKLMQQMXDCXPQZGHHCTDDBRMJVOIIHFJMPDCZXRCMTHESSSLXSZGNNARTFWHUWFLKO");
    msg.predicate.assign("TQXBYLPNPDLLSGVXIHTEZUIPCEFHLKSDDNQXGSSBJKYGFFYKFGVHUSJHIKWHLAHVXAVNZDEBXBYVBALOKAWISVTJLJHPDORBZMHKQKHQRVRPWEZDLJUXDFWCEYAQUQCKNMOJNIURZBMGCEMGDIMIFPUYRGLCC");
    msg.attributes.assign("WGFXJGELDCRGCXVRTWDPEPAPYNZMZVMZUFCSYTKTSCFDDSPUCWHCUZXVVKPUOFNKIXMLBQXKLNZSHXHGSTPRJJKHOCMIIBEUJGCIFAHUKGBHRNZEEOBDXKPQTWWBMADTDTOQIMLFOMPKAIUNUQTVPZBFSXDY");

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
    msg.setTimeStamp(0.4028041193453198);
    msg.setSource(17978U);
    msg.setSourceEntity(230U);
    msg.setDestination(55538U);
    msg.setDestinationEntity(190U);
    msg.timeline.assign("HUTRCLVKMHKUZGIHFACHBCBDZZAZDZUSQANMTKSHNLMYDQNREOTJNGQELPCAIWUXCRXYTAUXTVCWMQAEDAEVVLEBNGJSRSSBSYPZQXJOEJXOJDYDIFKBIJYHPIGXRHDSNMBUGZKFLFFTGRDWVNWIFIFRWPAZPQRFMXRCLYMMUSHQOWOJXKKWMIKOWXCJGYHPBYBVBQPOCXEECTBLGEMLQVGPWSGODVJIAZU");
    msg.predicate.assign("QBZHZWPALYAEVVUPCFSEHMHZDNKXRZQTCPVIIJZDTBGKEBRYELKITQWILKDBMUUYGYUGWTHFGFKMFCKTOIJAEYHAOQWUZEVQXEYJSMIMKNLWCRXFZJNWGYDQMDPZX");
    msg.attributes.assign("AIPZCJWEYCNGIDUCXEJTITROPUZSUDCSJZGTVPDTYPAMVWBBKEHPGRYOJIPKLTZNDDRUYFAMGQLWYPFQRZGJUINHELVKMLHATIEMZNJQGEBWLZKVYFSGWCHBCGGZXNXHKJOTILKNTCLMCED");

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
    msg.setTimeStamp(0.9429539086085743);
    msg.setSource(21091U);
    msg.setSourceEntity(87U);
    msg.setDestination(58320U);
    msg.setDestinationEntity(91U);
    msg.timeline.assign("UKPMBKYMFDGXNZPBYYRBIVRVVRXEKVSJTERQMDVLXGXEEYRDAFAJJKVPHQPVRFR");
    msg.predicate.assign("SFHKTCADULO");
    msg.attributes.assign("QNLLEPOEBCUGRKSSFXHEALIIKLHVDXWNPZVETBQRUWBABMJQODFYYZYTPAFYNPRBODGPBBEMRLVXAQKXMVKIHYVSGGQMZHZVAXOZWLRIXTCFJNTQPHAEIWGGSDUEZYNLFWNYQSRGAYMLOQUFIFMHKZFXBZEVYZCJQFADTVDITNMPXKTIWWPESWCBHUSTSJCNSCOJQGAGNMBLUKZC");

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
    msg.setTimeStamp(0.38968253759394833);
    msg.setSource(871U);
    msg.setSourceEntity(163U);
    msg.setDestination(32179U);
    msg.setDestinationEntity(160U);
    msg.command = 135U;
    msg.goal_id.assign("NQTNKXYVDZSFQAUOHORPYVAVTPYXDGRWMINOWZOWAGYOMBFKHKCVQQRFWCUIMNZFJCJVKBNKEVSSAIMCBTTQLGZYRXXIPCCOBSADGGWDDYJZDEFORKIBRMOTDLECPPVZBHLQPXBNYPYHCEIJRKHUUJTHVAKQRHTPWZVPORJEZSGAMHSTDIP");
    msg.goal_xml.assign("DVBHWZKNWBLAXUNFRAQHREMDDHYDJAJCEUEMTCKSRQTXNPRZIZEOHQGUAUNARPOHQSESGYFFMKSGUTFXJZCHOCKVYXZOYMRILDUZJJFRPWLWPDWSWEMTYVKKIXLJDKZKYTDOIBMWFJLIFEVRJXOFOOUJRLNSIUWTQMQTVBXXACCIVBGNFVGPVYSNHVSBNAVBYESKWAMQCMPHINGPXERQNKGWUIXLBHZPETPMLBUYPDJHQOICZF");

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
    msg.setTimeStamp(0.25297896357075655);
    msg.setSource(63138U);
    msg.setSourceEntity(150U);
    msg.setDestination(28390U);
    msg.setDestinationEntity(183U);
    msg.command = 236U;
    msg.goal_id.assign("PQFEVHSVSYCKV");
    msg.goal_xml.assign("NXSLZQDMIMIEGYNIRBXMVQIPUBHWRYLBSWCUOEQNFVMMVSZAT");

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
    msg.setTimeStamp(0.6908797701656181);
    msg.setSource(48967U);
    msg.setSourceEntity(206U);
    msg.setDestination(1061U);
    msg.setDestinationEntity(240U);
    msg.command = 172U;
    msg.goal_id.assign("YDADGXSXWNPDGUNZMJBWILCJCIVLEACLYONREWFURLSTAVHJKXDFIVDLFIZMTMJKEGTWIMJWAZBETENPDXROHEFNQUFNIQNJQROPUFTRDSCYNZOHLGZBSXUISMFTKKROSYKGMEAYHVLTQTXZGERDBGUPOBCRHYWMHCQAZHUPNUQXZZKSMKOUCXBIH");
    msg.goal_xml.assign("PVOTDTRIIZUBQPAGBXERVQZHTFSDBTTZKBKOZAFEWZYGRLEDOKHCPBIBQWUTVBUKRPNRJSSIQILVFCRQTJLCGLHWDCXZIWTNWKYVOGPPADIAZSHYNWNUVYNZTCVAAPULUYMWRXXPFTCALCILZWEFRCYUODGJSUFXNQXMFEJGSMWIULPMDSKHGQVMEQXNAFHYRVEQ");

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
    msg.setTimeStamp(0.8508194386406874);
    msg.setSource(64502U);
    msg.setSourceEntity(120U);
    msg.setDestination(39004U);
    msg.setDestinationEntity(233U);
    msg.op = 178U;
    msg.goal_id.assign("PROPOLAMQLYRZBAODTBUPIHUVVTQZHYLQSLHUVCVUZVJRIJDURCNCZKOCSYMDTUMJQFGHDZIKZYTLNISYQTARMPXIQTWFRCTSUP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QHLKMQIVWXOLPYFHZTSPVLOKLJIT");
    tmp_msg_0.predicate.assign("HGJNEVUHQSSSZGSUACMVYQMRUJGVCNOXFRTDYPMSXSIZIRQDVV");
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
    msg.setTimeStamp(0.46204676763379005);
    msg.setSource(15415U);
    msg.setSourceEntity(153U);
    msg.setDestination(35339U);
    msg.setDestinationEntity(101U);
    msg.op = 152U;
    msg.goal_id.assign("ZYARKGPBOYJMYQUDHESGKJZFLAPQKLIIDBYAANAISWWSZWDKSF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EMYZHYEIPMGSAFGNXWGZZVRITUJYJDPHWCRTIWAFYMCYREQNACDECPNACSSCOCJOEKGJBIPQBFOHOCVSSTXAUKVYOKMPLKBJIGVKDJFQJZYQMNIBUROYHYSDXXVGXUILDLGQMVZTFOLT");
    tmp_msg_0.predicate.assign("JYPGHHMXFZJMZYTRYMDPBXXEFKBCUNLQHYSQFGJKOMAPVYVXUBJCCBPFQPGPQYURTQFASIJKRVHQITRNQWAVXLEJPYEAGPLOBOZEGCHGMNZZAZMLQHLTLMSCKWGVWVCXOIICXZXTRFZYNROZEIKFHQRUWRQ");
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
    msg.setTimeStamp(0.35950015966284654);
    msg.setSource(12617U);
    msg.setSourceEntity(178U);
    msg.setDestination(49131U);
    msg.setDestinationEntity(14U);
    msg.op = 68U;
    msg.goal_id.assign("KOKOZHTUPBJCHIWZESVWLWGSWPYCYAEFNEIKAQJAVKIGZOHJTAMXYFQMMGUXCWSEVDBSBBLLKPORNRTZDYVNGLKAYBAYWTRSPCGDLLUSVJZNIMBQJMFZFJLSUQOTPEQAKUDBPENTMCGNHEUXMZTQJQIVMYZIRNIUXJFMGXPHLCNDEDLFMGVNCODCKYFVHGSSDVPOCUAAXWUYBZDNIRHRFWVLWHBKQQXDQHRIRB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EJHSSPTYWCKVSSBEZLNLHTHAURRQYANJDIZYQXXVTPGSRBGXFLOMUIMHUPHYFCWVBOUNKCVMNVEKHENXVQRQGXSIREAWVQDZJHEDEIAUCKAPJDIQYAWPOKGXVMTIZZVGCAFAYCLVEWNPDSCLWNFDZXTC");
    tmp_msg_0.predicate.assign("AWIXUDHBMRJCWDYHPTYNUXUWGITBQQBQETBIGLSOICZI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VDCVUHJBFCTRDHFHWGZAXERMEYZLITVZHOHKSJSYVVPUTTCMAKBQMBZEEOPGNJGOUOSTDRXPGNWOJQPQPITNCAYPLWRUYWQVSKDRFVPQAEQOPCWRMBANCJMGSVEFCATOLQSIXWXRBAYRSYSMXIWOLKWGQBWGFXIXUZYXXHHBBOLUZJIRKLBACANQZMDGPLNUTHJGJWKDUFKIEGINVYUSRHKNDTFFMVKYAHTIDMDNUEFCEJZIPKLLLMZDFJS");
    tmp_tmp_msg_0_0.attr_type = 119U;
    tmp_tmp_msg_0_0.min.assign("SRKALAOYGLVXGRRJ");
    tmp_tmp_msg_0_0.max.assign("HSXBNRCNIKSEYADXINMJVGCXSBWNFRCXPVBDDPDEBXSHCOGCMOTFBPQFVABYVOMPLMJESWYKHKJVUPMFYWQMGYNZZIUAYPCYOVBYDLWLQAQGOGETWQULEXLFRJJCDKRICWCLQHFYPAEIWELTKPIOMMDGDTOSQJJVPBEREWXFJSVISTDLQGCIRGZXUVFLZMUOXGHUQHAIRXHOABOZSMUSKYKWKRUUT");
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
    msg.setTimeStamp(0.6880151353576744);
    msg.setSource(58237U);
    msg.setSourceEntity(149U);
    msg.setDestination(48982U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ZECNLKEXYDHOFVJXBYCNLRYXKUDBRGEMPAEMHHNTSTZNKLWVNVBOVPFTGRBUHCYUVPBXVPISSNZKQIAMPABDWWIFAJG");
    msg.attr_type = 217U;
    msg.min.assign("ZONJPENKJAHGTDBQBPSEILFTC");
    msg.max.assign("RHJKPMLLXMFCVWMFTJKKRXBHSKUJCYUFVSXMMSIEBUGOFTQLBDGDFNLYSMCNRQWQVOPDERTXZNICDGLHHINDKEAHPRGNEVDFFAIHSBDILTIGLBTJDEGSYYEEDQEZZ");

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
    msg.setTimeStamp(0.020718881679275603);
    msg.setSource(34942U);
    msg.setSourceEntity(150U);
    msg.setDestination(22895U);
    msg.setDestinationEntity(19U);
    msg.name.assign("DHRUNALENMJONZAJCTVDUSOPZWGYVESJVXCYGOHLVLDPDFDAUHYYMTZN");
    msg.attr_type = 116U;
    msg.min.assign("MUDMSRRFOFHFJMJVZHHQDMIFVCIXOBRGYQFHFSOQHTTWKUDMONGTTNIVWJXUSOXRAQZMBOKREZDYGUVCTDUCYKCNJLJKTLGAPXNUBETCAHFBCKYIWALYXGJGTOWYIYYQIVNYKELOLDEWAEFPVNNDMBAMIWZGESCNXQXGCZBJKTPKRBULBSPAEMSVATPOVXEFNSVJZDCRUOGHWCUNQIRZHV");
    msg.max.assign("XIKKNDZOXDLTJDAHGGQINLKKZCBOUOQCYKONOUFUIADAGOSNPRDPASEVXQMVUTWHXJVATPHETURNTLMUVVFEWRSCSERGEUWVSWFOTDNBFFSJVZMNYWTYPFXL");

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
    msg.setTimeStamp(0.504812379571895);
    msg.setSource(44347U);
    msg.setSourceEntity(100U);
    msg.setDestination(21906U);
    msg.setDestinationEntity(178U);
    msg.name.assign("LGPTYIVINAYSWIDWNHUMJIJZFGRJDFABZJNHKSHLQSGOWDNRKWPLVSYOVKCAEVOXOBNOMUSFIXCILRSETQBNTFCPQJNGEKUTCKZVYGFJQLJRHVEPAVMMPUFZMCTHWJWYWCRHPARSNVYSCMZZAIDAPYSGBWDJXGGGUUWMMBTZROVLQKBCUUILUFXEOTPIEXTEBXHDOKEFECNETISVAKBLWQMKRFXHLFZBAYKZZGXDROXQRDPOYYDJ");
    msg.attr_type = 98U;
    msg.min.assign("ZHQDIJUFGVYSPAFYKMDLVGVAGNDAIXGGMCTWXKNSSCPAUSETCJWJGEAMCZIDTNMWEFRMAYYBCPOUDKOUAL");
    msg.max.assign("TRNERCSJWJUWIMLESYDABQTZMYDHRZXVZNXZCLFHWRZKRLJJNAQXOIKIUCZPEVBCUVEMKAZYVATNKSGMPTXTHOQHLGNOFRUAUKNBCMUQZIBDUELPLHQBWIFPPXLIGAJTQDODJMAJOEDKYYSVIOLNPCXTVMMQKGTIDFLUBMUFXFKEGFXSGFNANYJOPYKBKBYVHHBSRQCWIYWQVGNCXWDPHVOEOWWWGHHZPYRZJGCORRTIFMUPDB");

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
    msg.setTimeStamp(0.29748428348923883);
    msg.setSource(36835U);
    msg.setSourceEntity(161U);
    msg.setDestination(36527U);
    msg.setDestinationEntity(166U);
    msg.timeline.assign("QHAEOQFEOSITVJDXLNNPZLJWRYSTRAZXKQASVKNAEWNYMPISXGCBKUHQUBRCRXZNQWAWZFBAPKHTPKLNDDITLHFYPDUKJXBMHERXYOZGHVDPBESVQMEMICHRCQMGVAUTIAIQJZCSVWFOWDJLNCRWXCDBUILOGYDNOIRSZGNYEOFSXUTHZSSAVFMUIBVQLRUJCNJTGZYCYDKGGKIOKFPYMTPJLKVXMLRVWDFPTHHMWEMFJBBZFYWXO");
    msg.predicate.assign("IEZADUBEPNFENGZVCHQHACJZZYWLVOLJXXCKPPBMTITGFOQVIISNHKNEDVSXIWJRWXBGKMIQAEGFBJPACYRVSAUTKBAFZYLCTRPASWXZQKLDPUJOLQTSKULZAJKENBWWUSHOKMHMQIYVFMDUBYHDKRMBSDACGNMQXPFOVVYERDYIXZRJTVSWFEZTOAUF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XDDBLWFJSHSOSJRKLLVJBLTOWMNTMABFJEHZELFOYPWAMZWXIBPTDCVQUAEWDGQUAJQHKUMGICUQINFQKNBVHPDPGXXKAURKCSNMSLUDOYMH");
    tmp_msg_0.attr_type = 163U;
    tmp_msg_0.min.assign("GBNJTJWQYGXZMIRPXIOSEMKHSKXZIDCFNVGWO");
    tmp_msg_0.max.assign("PNINDJSKPKDKRTRYLUTAGXRKQQFBFYJHUSUUWVUMX");
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
    msg.setTimeStamp(0.22552808284934334);
    msg.setSource(51659U);
    msg.setSourceEntity(231U);
    msg.setDestination(10367U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("CZKOTSLKJIXTYXTGETXCVPQZIBIPCVQONEPFUXFOSVDFZGWRPVARWMWCDCVANHBIOFDMDVYIUEINBZCKBSDUAZWJ");
    msg.predicate.assign("QZHKCUCVVNRFYFNXTPNFBNZJGFIJJPGXXNWUCMAKRORQCGSPQHWKZDMTQCWJKZMYPJDMCWKLKNESUHRGVOWZPQVLIRUSFCAVAOBVHWFISYYEIWRUGXBBAENZHFQPDWFDHSBNVRUGHODXTTHKSVHZYBRZHRGDGPTMSBWETSDLUBAQYNLLAYUFOZLPJYYILXLMMORJQCTGEOTGMXOODDSWX");

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
    msg.setTimeStamp(0.3856410388630912);
    msg.setSource(24294U);
    msg.setSourceEntity(48U);
    msg.setDestination(19402U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("WYJFZIJCRDNRNUKGTZXYFIEVUTJHBMAPJHPEDLAIMWKTSNIGNDLFNBLQLHOBODAOFGQFYBRVMRCOMNKPWHWPGVSGUXGXSRCIQZEXXOBRUSINVLJZAFHDQZURJQZWWVECAYCMEFYXMOSQZYTVHZVOVYLCXDPERTGYJSPQETBQOEKGJQUVLUKRVPADNYFKWMBJYEIKLRAKBNILZGXHTNQWWBDTOCSFUOKMZSPUISTCDHDHMCXT");
    msg.predicate.assign("VEPNGXMTYXETBPRQYQMOZOFQQMJLXAHBXLUXLQYLWRNVXNWCTEXNBVKKLUCIWGJUWCRZIEAIEDMCOUCBKIOOPEHYKJMITAQGOGPHTDCVWTEVVAUZUFTSRSFFMEYJVLJGYRJDLDZENBFJHUPSUZFMQXZMBFKWSPKBOPPKXZABMASAFQQIQGYKAJVCCHWRGRGSEANFNHDJSCAOBCKIZGHNFHDZRYUHIURPPJDTD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EJFZZUMOLEPYKEPQLNYIUVFRIUCHQPYN");
    tmp_msg_0.attr_type = 17U;
    tmp_msg_0.min.assign("ESBDJZZFIJZPJBELQDZCJGDZELIMXYYLFHZVTWQBBTJSFSPRIFYPQNUNIAQOCKJGKUSGVSVCXOUALCIHCNJHXPHMDEPFVMETFFDPDTBAKXQRUHWXQUBCMDVYGHHRGFVMZBWKDLSUWWFSINNYLACPKGLEQRLZMMXEACUWGATMGKHVIRKEFIEOHDZJWNXNTJRQUGUONVBYXRYORKOSYSQOTHRMKYAAWNVRDOMTOIPPASUXENCVT");
    tmp_msg_0.max.assign("NQVYMCVTIFPLGJGHROKISRTZCIWRZQJFZXOPJYSDNYBPXDCWBIRRNXBHVSTVSISMNYCLMNECFOXIBAMWBESUTSJHNQLJJGQHDXOJUVKVGCXZUBQJELD");
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
    msg.setTimeStamp(0.2901104625923385);
    msg.setSource(42304U);
    msg.setSourceEntity(187U);
    msg.setDestination(43980U);
    msg.setDestinationEntity(163U);
    msg.reactor.assign("GIZNOYJHCCMLXLKTJOBSTCTSKAGLAFUEMNXZISEHZHAQLESSOGTQNHPXRJZCJFWKBWLMVNUSFYUHQGJZVPCHPPZAFIFNHWYVYEDTMKDWXJULSJUUBVXDVDNERDXZIYYPBZWBPIUEGQLKT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SYOFRMFVRTLZCWYUREGD");
    tmp_msg_0.predicate.assign("VZHSPSUDGMOFRTJRHXYBOBVDENXJOLVHGBHKLWUDWGDYGADZTSIWEMQTSZWKKAIUCMRZXZDDUFQKPSBVBUPRLCWTBFWPEJCFMOQEFOFCLORZOJMLRYTBNIGAXNQTALVC");
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
    msg.setTimeStamp(0.9402604473467664);
    msg.setSource(2670U);
    msg.setSourceEntity(4U);
    msg.setDestination(11901U);
    msg.setDestinationEntity(60U);
    msg.reactor.assign("YLIJFLWTPATXGMUTJDBIOEHSJWGBCROLRVMEVFDSCDQCRHKZLQQYFHFAQCSTDKPVWJSSGDLTXNZOKOHWKEJNBEOVLNZCHIYBCAFLLGGXBKKNNITQWXKGUIEUJKFVSXRPMHFZDQSRXVOOFQMVISRLHRNEYAWRGBTEPCZRNNJZWIBUQGPAAWBTFAECHZKTOJVGIDNUHYCZKYCUO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WRKOFZFTYDOXTUEWGAZYLFQBIOCODXGXSMHVLBVGPIKFBYVEYMPTBAHJWPKXEVDSQHZEXUYVHHENIAXLBRFZUASFBNQULQDICJXQ");
    tmp_msg_0.predicate.assign("LUMXVEKWIWMPHXGCAPQEFTOAXYPQKRYWVMDTDCBTLPUVVMESJECJIGTHOHMIEKCARFSZMTDPBUHPJYVYWGZGZYKNXJKSNWODXOQLLFTEINETBPZGIZOWGFXBAKWAPZQTZLDQVHGFRFMQFUYOICLSQBKAENMBULNDOAZSQVHVKXZIZWLNBRSUDQWHOQNDJHGYSIRURVIHEAOGEKHTKRNCYSUMC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GXLTBJSCNJZLZSUOMQJBQCQOZTYGGJOVDBMRMERDTDOJFVABHWSYNGZRMLNAPZWIVALFTHDVNFTSFC");
    tmp_tmp_msg_0_0.attr_type = 11U;
    tmp_tmp_msg_0_0.min.assign("CUJGQQNGRTUGNDZTIOGJRJUMOZLEOMYSLSVAKJEITGVQYIQJFKJCKRMPGHASZLPOPDXQEWGCWZOXCVAOQBZSYXXNWE");
    tmp_tmp_msg_0_0.max.assign("ETEWYLGCDRXJGQJAJZQMAIKKIKFOWBAIHPCGERMYHJYXMUTRMQPZNGUCZJXMZVFADOFASQMQBCJKVTSEQIWYTSDLGYLMLGYGDBARVXMBDLFTHDGEARHLLAIBAKEZDIJFIWPXRRGSXUPZPSISQZNKFNBYHDVWCVHNZXSLFOTKUKCXPVHOPUNKVOYSHPBKQVHMNETSPTOELWDUFYYSFVBGCFRPWIRUJDBJQONCAQCONRZMZVCLNW");
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
    msg.setTimeStamp(0.5864542990777832);
    msg.setSource(41004U);
    msg.setSourceEntity(61U);
    msg.setDestination(19108U);
    msg.setDestinationEntity(0U);
    msg.reactor.assign("IWDQWOHNSEUQPWHYYZCCRSWJDLHYVETKJNQRWRZLALRDSAGLRREOKSOHIXJTFPZPQFEMNYWZVCDBAYGEKBVQHKLWUVHXSKEWOJJEGJQNXQBMEUCLUNZVVEBNKGOEUJMQXDACMIFJISFCBMCORTPAVDGIGPMGTSXDAIUFHKPMXOPBCMBFZF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HDFGHYKEQWDAVVRRSOSSINSPYDCXWYXBGMRNSWBIHCTGPXAIWQTAFZSFNPXEMLSTBAIVXXBLGPPVJAKURPHCDUMJYCCEWFCMKOOPZYNKOLLZXQZVVLDOEQOTDRLJERJBMECNBIHYGAOSGIXOQHUPZMDPZHFMPDNWUFGJZMGEGLEQYR");
    tmp_msg_0.predicate.assign("ZDTSXWXPOFWXVSJBFZMIPJWULHZYJEZKBGMFQEUHEOLCZISJVPQPVBJLTNYXLOEQBCEGWPZPDTOCPVGPUTKQFBQCVTJBRUETKMUYXHUVOIHSMHAYRRLNQYRXRIVDFMWXINGGYWKPKXAIDNNHUYETLZKJCAUOGDTTJNKTX");
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
    msg.setTimeStamp(0.3644770441570069);
    msg.setSource(11184U);
    msg.setSourceEntity(136U);
    msg.setDestination(5864U);
    msg.setDestinationEntity(191U);
    msg.topic.assign("UINKPUPGHORZMJUWAXBDNWZRRJHLQMECVBUVVJBKQBAZAJRQTYNBUGGUPJHEQVQYAIXEGLFCPKTFDHUYSDVLNGKWSTYFUSNNVWOWKZSRGMEQZIPAXPXMNJHGRQIZLRICYKLMCBDCVSRYATPJYVQZBEOFHNLWCRMDNZTXPMQO");
    msg.data.assign("IICQWNBXMDYJWLUOMSGIXSERBHTMWIYGJNXTKPRSZZAWLVWRVALCYADZPPKEZICDQOHXMBSTOJDRQFHBVGFDQZEKTMBYATWXUCCKQOJAEHASTGBJKUQLYPTUHPPPGLOEYSIFOINSVULANAESQSFVYE");

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
    msg.setTimeStamp(0.9822771240733615);
    msg.setSource(46570U);
    msg.setSourceEntity(235U);
    msg.setDestination(54207U);
    msg.setDestinationEntity(23U);
    msg.topic.assign("KXGSBEGJODSDAMKACZIMQBFFJOPLXBKOERJSNWFGAMXLXMJMQTNCHTCSNMUUZGEQXNYAGLSTHOXLKDUDVBDIYTUZKVDFZJOQPKXXVWYGIDMWSEORFWEQLUYTWGHSSYHPNYNHYKHQZTZHCAHKPZMCOEDVAEEICUNMUBRUYUIRTVLRBVIBCCNPQJWVZOZLFJJPZILUDTGWVGIYBNKLOQFRVFIG");
    msg.data.assign("DGDVQKTYDRPAVNRXWAMDFNARTEBOBRZDLQKMEWOTTXCJCPQZQGQUTNZUJVURHIWWGHUSUFAYPUNSYRUZJGBHVLWNXLEIQROVIHFGZGFHSMIBKOPXKGVFMPXSALCQRZQLSHJEHOBBEFOWLMPCYWPJZJDABCDHHPVY");

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
    msg.setTimeStamp(0.6357296645329887);
    msg.setSource(12781U);
    msg.setSourceEntity(45U);
    msg.setDestination(30723U);
    msg.setDestinationEntity(242U);
    msg.topic.assign("EPKJJHNNQSTAETECGLZAZJISLOMRFHCXHIWBCZBJCOWKRNUQMFIVKYPIGWKPQOLULWGKWPTPRXCMSVBYCBHKPUFJJOQBGNVDDFSTQJQXIUXCOEEMFHIFMLEJYWGYJEZZFAFDHKAKIBRLDLDUVCYJZBRUQRN");
    msg.data.assign("YZRBTCSBKSTQFIILWUTBSSPBHNFYEVDXAAEPXGWFAYFJFICLSXRDQYDCOAVVKYMAZSYHKCQNBPQMDZWXLRAPNGVMIREOTKJUVBWGWHRANURFMDQIBVFPDLSHTYJDZHPIZLJCCWTDIXOYCXGXQOYMBPNQI");

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
    msg.setTimeStamp(0.07272911565732898);
    msg.setSource(57637U);
    msg.setSourceEntity(131U);
    msg.setDestination(42801U);
    msg.setDestinationEntity(232U);
    msg.frameid = 103U;
    const char tmp_msg_0[] = {15, 34, -112, -118, -4, -47, 26, 105, -5, -109, -100, 62, -29, -15, -6, 40, 73, 113, -3, 98, -2, -54, 53, 6, -86, 97, -70, -29, 20, -43, 95, 40, -49, 7, 104, 37, 110, -118, 38, -17, -36, 14, 124, 18, 34, 30, -47, 109, 46, -37, 122, -19, 11, 19, 111, -59, 29, 104, 64, -7, 108, 123, 87, 57, -21, -36, -118, 40, -79, -36, 71, 3, 26, -4, -25, -103, -64, -123, 13, 73, -107, -86, -11, 2, 89, -92, 21, -47, -14, -35, 88, -11, -79, -110, 37, -104, -6, 72, -1, -68, -44, -17, 43, -40, -75, -57, 55, -16, -126, 51, -18, 124, 75, -113, -16, -71, -53, 28, -101, -121, 105, -30, -34, -116, -22, 74, 123, -88, 3, 45, 107, -6, -109, -30, 104, 54, 101, -81, -37, 25, 51, -87, 87, -125, 110, 110, -59, -73, -35, -79, -39, -36, -119, -83, 100, 40, 57, 30, 28, -31, -9, 71};
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
    msg.setTimeStamp(0.9485828457279627);
    msg.setSource(38776U);
    msg.setSourceEntity(4U);
    msg.setDestination(30863U);
    msg.setDestinationEntity(98U);
    msg.frameid = 199U;
    const char tmp_msg_0[] = {34, 109, -81, -32, -63, -95, -87, -2, -105, -71, -2, 11, 34, -124, 123, -29, -78, 81, -102, -10, 17, -109, -3, -94, -128, 87, 41, 14, 55, 21, -62, -48, -23, -76, -54, -2, -80, -112, 97, -11, -59, 120, -103, -87, 74, -101, 36, 69, -18, 27, -50, -14, 49, -18, -35, 76, -102, 98, 109, -26, -19, -65, 11, 79, 69, -33, 126, -87, 30, 33, -20, 37, 109, 95, -41, 109, 25, 126, 104, 115, -2, -24, 73, 74, -92, 11, 72, 115, 16, -5, 31, 103, -83, -57, 56, 99, 105, 47, -94, -30, -75, 41, 72, 6, -60, 5, -98, 107, -24, -101, -17, -34, 49, -73, -104, -114, -107, -75, 76, 46, -117, -20, -98, 116, 84, -19, 1, 123, 44, 12, -61, -28, -88, 89, 114, 37, -108, -15, -116, -54, 24, 93, -54, -14, -120, -126, 104, -42, -52, 64, 11, 24, -74, -91, 101, 123, -11, 8, 99, -115, -16, -14, 113, -96, 55, 33, -119, -29, -88, -33, 111, -17, 30, -59, -12, -11, -114, -107, 91, 104, -81, -104, 61, -106, -125, -103, -63, 125, -77, -88, 94, 100, -85, -22, -4, 11, 10, -122, -10, -25, -24};
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
    msg.setTimeStamp(0.43754183894891974);
    msg.setSource(2663U);
    msg.setSourceEntity(171U);
    msg.setDestination(34892U);
    msg.setDestinationEntity(237U);
    msg.frameid = 161U;
    const char tmp_msg_0[] = {28, -27, 121, 40, -85, -44, 71, 21, -29, 33, 39, 114, 123, 14, -65, -33, 2, 56, -87, -28, -40, -58, -18, 0, -9, -127, 35, -11, -109, 56, 105, 33, 51, -108, 45, -66, 74, -40, -53, -77, 118, 33, 9, 51, 6, 32, 69, -26, 66, 108, -99, 125, 5, -104, -22, 12, 98, -22, -11, 110, 3, -87, 120, -54, 9, 4, -8, 0, 116, 1, -41, -123, -88, -43, 12, -78, 101, 102, 48, 108, 109, -73, 2, -34, 44, 1, -91, -97, 101, 117, -53, 30, 10, -90, 80, -81, -42, -68, 106, 102, -108, 39, 59, -96, 13, -83, -49, 40, -79, 8, 7, 108, -17, 119, -44, 13, 56, 34, 4, -107, -109, 119, -123, 64, -64, 61, 53, 125, 79, -74, 20, -120, 20, -114, 85, 37, -86, 54, -66, -114, 124, 55, 117, 115, -70, 16, -89, -6, 58, -20, 92, -86, -15, -126, 40, 124, 23, -123, -109, -2, -20, 82, -67, 115};
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
    msg.setTimeStamp(0.37364484861193936);
    msg.setSource(4066U);
    msg.setSourceEntity(160U);
    msg.setDestination(7325U);
    msg.setDestinationEntity(84U);
    msg.fps = 18U;
    msg.quality = 96U;
    msg.reps = 32U;
    msg.tsize = 119U;

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
    msg.setTimeStamp(0.7132067325837406);
    msg.setSource(32566U);
    msg.setSourceEntity(244U);
    msg.setDestination(29414U);
    msg.setDestinationEntity(9U);
    msg.fps = 107U;
    msg.quality = 197U;
    msg.reps = 106U;
    msg.tsize = 129U;

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
    msg.setTimeStamp(0.48547832563043836);
    msg.setSource(51823U);
    msg.setSourceEntity(95U);
    msg.setDestination(32865U);
    msg.setDestinationEntity(143U);
    msg.fps = 91U;
    msg.quality = 77U;
    msg.reps = 50U;
    msg.tsize = 33U;

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
    msg.setTimeStamp(0.24458423519910089);
    msg.setSource(6589U);
    msg.setSourceEntity(247U);
    msg.setDestination(59406U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.20589422353533093;
    msg.lon = 0.9626459417784519;
    msg.depth = 224U;
    msg.speed = 0.012653936687435419;
    msg.psi = 0.5154915076587179;

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
    msg.setTimeStamp(0.8966379935744224);
    msg.setSource(56589U);
    msg.setSourceEntity(97U);
    msg.setDestination(14021U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.10583737496307366;
    msg.lon = 0.21384972552401216;
    msg.depth = 171U;
    msg.speed = 0.8619946085724616;
    msg.psi = 0.1590848324269386;

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
    msg.setTimeStamp(0.18562144851708873);
    msg.setSource(12713U);
    msg.setSourceEntity(162U);
    msg.setDestination(38133U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.3898155317730747;
    msg.lon = 0.3813283606673288;
    msg.depth = 40U;
    msg.speed = 0.4147033708001816;
    msg.psi = 0.7696268243132367;

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
    msg.setTimeStamp(0.3519829525643541);
    msg.setSource(40712U);
    msg.setSourceEntity(5U);
    msg.setDestination(43524U);
    msg.setDestinationEntity(140U);
    msg.label.assign("JIYBIQRCKNOAGKEYOZNSGEDDKGFYWPNNCWTLCL");
    msg.lat = 0.9748625954521436;
    msg.lon = 0.1418366951466591;
    msg.z = 0.495729737372281;
    msg.z_units = 171U;
    msg.cog = 0.5317796719384233;
    msg.sog = 0.3447775097542849;

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
    msg.setTimeStamp(0.035100587071750566);
    msg.setSource(4677U);
    msg.setSourceEntity(135U);
    msg.setDestination(24471U);
    msg.setDestinationEntity(85U);
    msg.label.assign("UZZMJKAHWCHMPWKNORZGHWPJAOMVZNJDLBMGFVXQYZQZQVTMXBNOGCGXLIFKBUPHWHRCSRVCBTCCXILKJBSTJNDQWWFQWVOMSSKKYTQIQHAKKYBUBDRLCWGIHSODSOWGLAGLDEPHJXFFXSDXYRPYNZTQOCAVGROEEDZHLJFJSVRHAPGEZQAEJWYEIDEVUICUMPEQNSZUSKFNVB");
    msg.lat = 0.2424556664190286;
    msg.lon = 0.0235177741790914;
    msg.z = 0.6530342427514313;
    msg.z_units = 102U;
    msg.cog = 0.1962580357508148;
    msg.sog = 0.38400988692049653;

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
    msg.setTimeStamp(0.8698946884514759);
    msg.setSource(64886U);
    msg.setSourceEntity(35U);
    msg.setDestination(65228U);
    msg.setDestinationEntity(34U);
    msg.label.assign("MHXSJEAJOBJKYPJIRUODUVMRDVZYCNAJPYOXOPVHSENUCQWABVCPSTOWFZXKIXGQTWRTRCQLOCNB");
    msg.lat = 0.3666993594142125;
    msg.lon = 0.17594715506099512;
    msg.z = 0.8074658696373492;
    msg.z_units = 72U;
    msg.cog = 0.962370410222404;
    msg.sog = 0.5998638225513496;

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
    msg.setTimeStamp(0.8359715568462254);
    msg.setSource(44998U);
    msg.setSourceEntity(95U);
    msg.setDestination(3027U);
    msg.setDestinationEntity(156U);
    msg.name.assign("ZJKVPLHKXNYLADUTUSXHCODQPSZUWMHMWCJLQLYZXNDVJAZUIMCQLBFSTXOCEBMFNVTWGWWERFRHSBUKSGUVDQAEYZNNWYEYTVTKQVKPBSVDNIOKJUASZBPZYSATDF");
    msg.value.assign("NXRQLBONXACVYGHCLFGDBKCWDKVJSMZSIMYSOIYFJAOFPTUXLBYQFDXDFSCARLOVWQWYKIMAVWOHVIRXLGQSJNITCQQJYLQSQIAEVCPEWGWBATDECFUEZCZBREMPWHPCVKNPSKDDPYPHUAVAGFUHMZUELAJGGGTZULDKYWZJPWRZITMHXXTKEDQTYXJHLRVBHTBDO");

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
    msg.setTimeStamp(0.9402992498739967);
    msg.setSource(17000U);
    msg.setSourceEntity(206U);
    msg.setDestination(22117U);
    msg.setDestinationEntity(210U);
    msg.name.assign("WWMYBXDLWIWSEDOAYSVCDZACQODJJWCKXMZLNWDNBFELOZOYMUVUFVBJBERVWCHNGRVUTYHKGPDHUPQMIEKQCERLZ");
    msg.value.assign("WMIIWZXIGHJWOYDKDILFAWEQNYJBAHPBVRMFQQKSLTXUFDWUBGRCDXREODBUUYABTSZSTJLHTHIVJEFZZVKVMAVBKRETB");

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
    msg.setTimeStamp(0.622965104374865);
    msg.setSource(40678U);
    msg.setSourceEntity(94U);
    msg.setDestination(35160U);
    msg.setDestinationEntity(14U);
    msg.name.assign("QIVVGEPBZDVQZKMASLIAOQTCZDABHJPOQPBQJMVRXVLVIPAYCGRBAEEZZBLPKRCIDAFTJHCEUGCOSUOJXKCZMHULKYWTXRSWYWAEHSVEPGFJLVZIQDFMSPGYNJJLLVPJRVZIFLRNFQXZOTITFMWSFTKKRNNGTPNZGEUUDCESHRXIOYCSWNMMBKLAXNWYMBHUSBXUDFMIKXBKUNYBUFQJCQJEHWNDWUODTDHYRYOACDTP");
    msg.value.assign("IXXWJJGXYNNFYTRGZWEFVUYDQCSYIBTTQVZKVZPGQBTUDXJFJNMVTYQICYMFAMZYDYGMTZPWUGIRCPHENETUFFDDQNBKOHTONPCCJVGKFOEOUZVJVMHVQULSLBAPEDAQBMPMSAIINDEJEKACRRKAWPSTSKGIDCZOWWNLOWHTJBCHAPPSJLBBCMSZMOSHIOLJIYLXRLORIVGECRRSUMB");

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
    msg.setTimeStamp(0.23921780012538396);
    msg.setSource(6145U);
    msg.setSourceEntity(158U);
    msg.setDestination(47069U);
    msg.setDestinationEntity(244U);
    msg.name.assign("WZTITJSRLPXQPJTXASXNGJEVOWXFDKKPWBDHKWCNPRGVGAOUTAGYYRVNESJATOEXUBGOUU");

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
    msg.setTimeStamp(0.10056151645975286);
    msg.setSource(57582U);
    msg.setSourceEntity(2U);
    msg.setDestination(3647U);
    msg.setDestinationEntity(101U);
    msg.name.assign("CDRLLNQRFJPWDVZQVVXYJEPZWCBGACLRENUFMGGTMLKLPBBIOZDDBSTBJKQXAJGOBXTQSVU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ITYVEQUCOXISMUTYODEMGHBNISBDQKLAIUUSBYDUFRQSCJOHGDXWXFZUXKQKRPEETKHZZHNVYZMINDVGNQJMNEZTGLFBZIPCJJULTRJZWFMTTPSRJQTBSKVAAACPCSGRGLFBTDVYCUOBAEDMRYDOMXWIZEUXAYVJKFRKXJCOQOHTLOLWXSNBHFXFHZFMENKOASPVCLPEPWH");
    tmp_msg_0.value.assign("CRNYHCEUERLFJKJZAHYVWCCIMNODPOCMCABZQXGQGKDZYRAOYXVLOCJMDTKJKDGZMKPIWMZUBBSVASDXVOQLWUQYOPZBOHOITFZRSTTWYFJMZLTXUBUHILRDTXKHFBGFUHBFXPUQUANPAGJEIJDWPETPLXVISJXOHIMLTEEGNDAFJQELNCAPYKVHNSNTQGGEMTWYIWMRFIOASDEVVNRPBNSVUZ");
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
    msg.setTimeStamp(0.06326612454778269);
    msg.setSource(27095U);
    msg.setSourceEntity(178U);
    msg.setDestination(51566U);
    msg.setDestinationEntity(164U);
    msg.name.assign("CJMVXNUVAOIIULZZHUCBKMOXEKPBETTRFKQDLQLMTHFFSJKIHHVGDOGOTJFNYJCFRGFLPNAVNGKBEXFUTWHBZVSIZVWMKECXJSPJEYWPBIUSREONWVICPDTMNGSNYRUIWTYOBXCZMWYKYHXOGLQZHDURUVUZTYMSWVBWZQWPIRJKJBMOWMDAFODCUCGHZLJGNVXRIQNGQDDIAYPPHSAOBAXKN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JGTFIWVNTRCRBEHCTXQMARAFOOYKCIMKBHRQCIMUXXSQPT");
    tmp_msg_0.value.assign("BVBFFATJIQQTGSICLJUCXJCOSVMOOUHBWONYNOJBSEIBTPYLYKMIDXNEPSXGMWDXYVDZGJGEUUKGZRBCYIVHGOTEQPSEVQQMYPAXVHYQUFNROKFFPAQNIDBRGHQZYKMLCSTHNFCTTEGEJMITNWXPYDHILMNVLJIRWODTUTPOMAXVCBM");
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
    msg.setTimeStamp(0.33160990716366556);
    msg.setSource(29743U);
    msg.setSourceEntity(221U);
    msg.setDestination(41629U);
    msg.setDestinationEntity(29U);
    msg.name.assign("BIRSTOSCRKIRGNBLCSPGPBLWUKZREMHLIJHYCNQOVITTSHFVAIKUKBNTRMHKDYDFPVOJDTJWZZNKGYUNYHABAPTFWCFRCAXQGTMZHXWONSUAMAZOYQQYDRWHLVGFDPWBUEOLXOFJJISWIVNUIEBMMGFJZAZDDHIUETXJGE");
    msg.visibility.assign("QEOZKAUJIDJFORXNXVCBVODVRFNRUACYHGTZZQEPHYTMFHJTKFDUSFHBGITPTPMTUTWSDXJZFMEPDNTBZCXNVOVYCFMJHNWWKLVEPEWO");
    msg.scope.assign("OEYCGLBKSXNWNSOBGPMTVUWOTMK");

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
    msg.setTimeStamp(0.3652266243219843);
    msg.setSource(11682U);
    msg.setSourceEntity(34U);
    msg.setDestination(18960U);
    msg.setDestinationEntity(69U);
    msg.name.assign("PCDBDSSKLJXXGQEMAOHFBUAXPBWVZUBAGVIKTGOPNSXJWMMQGGNFXZWOLIYUJXWLQBMXVCFFDAOPDKBHHSEVGCITQXYOJPYPYMKYICOOZYKFLRZWJRTMKJFRHJDCCKPKDDGVWLTAVKEVNIIZGWR");
    msg.visibility.assign("TAVMDGMIQDQATUIZDICREBHAJPEKAPARLBCTSWEGBVXPNIJJIILXPUEOXQWHJIMHFWGFDVOLCMCMKSALRLLVJOXKBHKVOLPGRODEWKDCXAPYNXMTTPQCUKQIZYZSWMEXEZAVEQVKPUGNWZNAFUYZSUHRDPLHHRWMDHRXBBNXZUTSWFSLQMHYVBBJIJJRNJZCUFNZPUBGOFEKIQDTBSKZMGUGTVYOYNWAKYHRS");
    msg.scope.assign("OFGVCZAMACIRPXKUQVYPSXHIOCTEJYSYZKFLDNTHKSOCAXWNHBCEIBDJFFNGYYOIPXNWYADJLNTSLOIBALDFQLHHEHZJREZMPGYOXJUMQGPZUJMKQDWSDDUMWRSNMNIKTOXMPAVIBPZTTGZLEESRHVVBWCSGHJKRZJGWUNURARVOIO");

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
    msg.setTimeStamp(0.8240998765254656);
    msg.setSource(21270U);
    msg.setSourceEntity(8U);
    msg.setDestination(64469U);
    msg.setDestinationEntity(61U);
    msg.name.assign("FMVUVYZRJVDUGEYBIBIWXLTSDOUQKZTNYMWTXLQDFKCCMGHPPAUGK");
    msg.visibility.assign("IQQDKOOCHTYFSLZJYGGVXGJVWTKDORVNYCMEKAHNIZYSXBAARROLFVDTOGSKMZAOBHNGHMEUFJPWPFUNDTMCJGHDMRHWFBJNOSIYOBYPJPJRQFHPTV");
    msg.scope.assign("YKLHGWBTIPZPDWNWBNNMSYJDOGZVSQCUAIJOBIFEOLFWSTCVSJVJXNVAHTZKNYMTOVXDHWZOXFWECBMQKFORCSLYPTXPXEMSDVBIMDKUWABXRLNDXAQHETKWKXYBEF");

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
    msg.setTimeStamp(0.6079105735717014);
    msg.setSource(10029U);
    msg.setSourceEntity(159U);
    msg.setDestination(27092U);
    msg.setDestinationEntity(16U);
    msg.name.assign("RLMWQHQZTUVPYOJKG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QWJXFVJSCICEOWLCZKSVLNVJSWUALUNUXOAMYGHPETFQYPSQIMKLNLBRADLOWEQQYNIJDLPWNMNPHROZQPZFFCXKXEUCBBWMOIMSVFFOEHZMCDTEDVYJGZGPWAFRXSBVOFGSVZEANY");
    tmp_msg_0.value.assign("KEWTJBMRSDKHPJQQDBKWNZNJDTHEREKXTJBKUDAPWYXOUFXYNEKHGRVPAYCFQYVUBCUSXSLESHDQSONQDRSANMGGYXCIHVPUHSREQKRCOCATLJGWEZXJVAZLUZMMVNAIUQD");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.03655800531956699);
    msg.setSource(61589U);
    msg.setSourceEntity(161U);
    msg.setDestination(42677U);
    msg.setDestinationEntity(2U);
    msg.name.assign("KKSXDCLXPUYOKDHRHVNDWJELXMCKLYLNPXUZHZAMRJQMGYWHYZXIHENVXTBUKUARCVHBCABVFOQIQQREIJWULTCZBBBSFFMGTNHKZRVZAZIIMFXWGNPVIMEJHKLVGMXVAUEMSSAZWEIJNSFZRFVPBCGYDYAW");

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
    msg.setTimeStamp(0.4651816906433329);
    msg.setSource(16949U);
    msg.setSourceEntity(56U);
    msg.setDestination(29042U);
    msg.setDestinationEntity(10U);
    msg.name.assign("PAOUIZPWHMJQXQKCQMWBSAQUYGODZPVXDVBGZJIWBMNKVLLIFUEMXLRJNSZWWJOXTKCDEYRSTHFZOPULORGYRYXBKVDMKRXCNJIZMCLFGHSGYAVYTDMFDCNLJISNKIHYZUUH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RQDFHWXXFEPOYR");
    tmp_msg_0.value.assign("FDENTKJCQQXMEQPTKWBALYSVIOEBBLTCWAEMNUSAKKFZMZXXYPLRVCLFZGKKWTHDJUWLNOGTBOCLATMJMYYPUZNIDAIAHFMOVQAJJQEGGUUWVIEUOJFTBSHRXHCNOILVCDHRFNFDCBELRHYJRSBOXPKXGWSYHWIPZQRHPPVHADWLQNYPNCTBIYVWQOTZXZIDKVSGCWSXSOLQVZPBNDTJUURXGCZMRGFUQMEHEJSMYVXRIFKBIKJMNURZGAEPS");
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
    msg.setTimeStamp(0.9149993124750793);
    msg.setSource(54476U);
    msg.setSourceEntity(13U);
    msg.setDestination(41817U);
    msg.setDestinationEntity(98U);
    msg.name.assign("QTJZSPCOKTSVRFCUCFJRXSZDLWGLERXAXKHNTWMDHBENMOBMBPFUPDKKXEKBYVDVLLYIEFYITBIIVNQBRUXGMHHYJPVUHCXFOBAGOQAENGOWDQZIVCSWZVXPNCIZULGFDKJKVTOOKBTCCHOJSULPRYHPMAOJUGWKTTLWANDNSEGUDIXUNZHPQTYXNZPLMWGVZHYYPAEIEGZECJDTASJBEAALFVRQZMJ");

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
    msg.setTimeStamp(0.4011326214467459);
    msg.setSource(52024U);
    msg.setSourceEntity(128U);
    msg.setDestination(49514U);
    msg.setDestinationEntity(178U);
    msg.name.assign("YCLWUJMIAZGLXPUXKEOQOFMXQGAJVATJSEBNTKUHXSVHGES");

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
    msg.setTimeStamp(0.30127917424253847);
    msg.setSource(25387U);
    msg.setSourceEntity(248U);
    msg.setDestination(48991U);
    msg.setDestinationEntity(134U);
    msg.name.assign("QOIWKPZFQBGDNBIUWAMWRDPVBHYERLVOJGZJTTESOZXTLJCGCJCPPNNQZASOYGKLNZLNOYCANIUZXYDHHUKRBQPRDXOWKKZLOMDCVHDBYIXLXPLJTEUXNMSEFMWJIWJ");

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
    msg.setTimeStamp(0.2924001897311954);
    msg.setSource(31420U);
    msg.setSourceEntity(10U);
    msg.setDestination(9278U);
    msg.setDestinationEntity(85U);
    msg.timeout = 2248426480U;

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
    msg.setTimeStamp(0.1096929983376751);
    msg.setSource(64664U);
    msg.setSourceEntity(214U);
    msg.setDestination(42985U);
    msg.setDestinationEntity(140U);
    msg.timeout = 2977674693U;

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
    msg.setTimeStamp(0.9856504533519644);
    msg.setSource(31025U);
    msg.setSourceEntity(164U);
    msg.setDestination(19792U);
    msg.setDestinationEntity(254U);
    msg.timeout = 3845589974U;

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
    msg.setTimeStamp(0.5887728397117754);
    msg.setSource(48522U);
    msg.setSourceEntity(161U);
    msg.setDestination(26365U);
    msg.setDestinationEntity(198U);
    msg.sessid = 2730136439U;

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
    msg.setTimeStamp(0.16546278781756318);
    msg.setSource(8299U);
    msg.setSourceEntity(54U);
    msg.setDestination(35320U);
    msg.setDestinationEntity(248U);
    msg.sessid = 286585667U;

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
    msg.setTimeStamp(0.7805143267006351);
    msg.setSource(14563U);
    msg.setSourceEntity(96U);
    msg.setDestination(24977U);
    msg.setDestinationEntity(207U);
    msg.sessid = 2196750731U;

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
    msg.setTimeStamp(0.7739896375519763);
    msg.setSource(4127U);
    msg.setSourceEntity(142U);
    msg.setDestination(45247U);
    msg.setDestinationEntity(219U);
    msg.sessid = 2582166035U;
    msg.messages.assign("QDQTSBLTNLQANNZIENCWNIXGKHWJCZDIJEPNPSNMQUEJUOMFLUEXSBPMXRHQJGYKNSBBZXWGYIAKVOHHDCDTYVIXRJKUCDGXVFIRXAQEOBLHUWYPQASKSFOVKVPYSNHMFBZXQ");

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
    msg.setTimeStamp(0.5113095958184334);
    msg.setSource(24796U);
    msg.setSourceEntity(242U);
    msg.setDestination(12108U);
    msg.setDestinationEntity(172U);
    msg.sessid = 2756258095U;
    msg.messages.assign("MFSIVEPVQVRREOUWJCWKDRSCAGWIZNTNJVLKPBCJBNVRFCEQOHZXVC");

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
    msg.setTimeStamp(0.6609192688545088);
    msg.setSource(7879U);
    msg.setSourceEntity(137U);
    msg.setDestination(51796U);
    msg.setDestinationEntity(27U);
    msg.sessid = 268046536U;
    msg.messages.assign("WLKGSGTNCYIVMRXNUHJZUKYGFFCYLGEVADSTLMMDMIFGPUKZNDZATFBRMZMXEXQDENYFFUTKMPYGGFGTAJJJHCMRXOIKLISACVTUPCQTJQHEGIPNBSJUDFDQILBOFQJINNVSWXQHRXWWSPJKZODTXOZEGNAAPWPSLXHHOLA");

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
    msg.setTimeStamp(0.08953990566338854);
    msg.setSource(31106U);
    msg.setSourceEntity(94U);
    msg.setDestination(36812U);
    msg.setDestinationEntity(110U);
    msg.sessid = 1876535276U;

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
    msg.setTimeStamp(0.9500809882245627);
    msg.setSource(2793U);
    msg.setSourceEntity(197U);
    msg.setDestination(15694U);
    msg.setDestinationEntity(73U);
    msg.sessid = 2753120795U;

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
    msg.setTimeStamp(0.8502550206210671);
    msg.setSource(47801U);
    msg.setSourceEntity(230U);
    msg.setDestination(21718U);
    msg.setDestinationEntity(81U);
    msg.sessid = 2520485455U;

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
    msg.setTimeStamp(8.557616168658466e-05);
    msg.setSource(1357U);
    msg.setSourceEntity(136U);
    msg.setDestination(23550U);
    msg.setDestinationEntity(192U);
    msg.sessid = 449732814U;
    msg.status = 106U;

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
    msg.setTimeStamp(0.7678666352586762);
    msg.setSource(54414U);
    msg.setSourceEntity(176U);
    msg.setDestination(5657U);
    msg.setDestinationEntity(11U);
    msg.sessid = 2911960688U;
    msg.status = 25U;

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
    msg.setTimeStamp(0.0273305685268721);
    msg.setSource(2577U);
    msg.setSourceEntity(44U);
    msg.setDestination(19715U);
    msg.setDestinationEntity(218U);
    msg.sessid = 1321158215U;
    msg.status = 80U;

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
    msg.setTimeStamp(0.9388821377943929);
    msg.setSource(53676U);
    msg.setSourceEntity(103U);
    msg.setDestination(7308U);
    msg.setDestinationEntity(126U);
    msg.name.assign("HYUSCSWKWQEOYTKZZYFKSBPRJZQBVWDDILXABEAXDKKHHDQZPZBUVKRKDSRPMLIONTYUOTRNBUMIFVHEQCPBNFJTJDHAQCUMXPYEHEJXWUXAC");

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
    msg.setTimeStamp(0.09108049953957464);
    msg.setSource(5551U);
    msg.setSourceEntity(201U);
    msg.setDestination(681U);
    msg.setDestinationEntity(122U);
    msg.name.assign("LTGPTTLTAAHHZOZQOQMFWBRGABDIDFYZPJLNZCQCMSS");

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
    msg.setTimeStamp(0.10947824410208673);
    msg.setSource(16559U);
    msg.setSourceEntity(178U);
    msg.setDestination(13285U);
    msg.setDestinationEntity(97U);
    msg.name.assign("GWEVJAATSTBPRLUVPEEZAGWUPPLKPNOQDKVIMDAGIXWXGLXCZQJJLRHVONGQENTEWSVSJONMLFZZZZCXLBKHSRAYXOAYHCRQELNMBNPBCLOBYMHEAXGIQSXIKDIFSUJMOVSTVIFZFSFRINTCYUX");

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
    msg.setTimeStamp(0.24393742151923137);
    msg.setSource(42369U);
    msg.setSourceEntity(98U);
    msg.setDestination(22737U);
    msg.setDestinationEntity(8U);
    msg.name.assign("MZPZHQOVXADGOXQFWXMIWEVIHBQGCRENZWKAGMYFHUKAILYTJDSENZPJKLRLDTJGSEMTZQB");

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
    msg.setTimeStamp(0.6755444862631268);
    msg.setSource(5768U);
    msg.setSourceEntity(45U);
    msg.setDestination(17311U);
    msg.setDestinationEntity(170U);
    msg.name.assign("AHLDSIKRJGIGGEXAVIVKZPILBODTIRNRVNCTYBQWIFOXOJTJVZSEQNMLVHSUPKJEYHXENYGMWOUJUBHRIXFGJVGPABBZBUECWVYLXOPYNPGXFSUZFHZSZPILRPIEMXHTRUBBMMCOKAYHVTDHQRWLKQFYXCEZDDWKFDWCMMNUSZVRZLCMOFDXYQOJSLRKLQPBKQCZGWY");

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
    msg.setTimeStamp(0.08807062034878);
    msg.setSource(34743U);
    msg.setSourceEntity(134U);
    msg.setDestination(31635U);
    msg.setDestinationEntity(61U);
    msg.name.assign("DDODIAWAPCXGYW");

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
    msg.setTimeStamp(0.009130459733702412);
    msg.setSource(38334U);
    msg.setSourceEntity(18U);
    msg.setDestination(42042U);
    msg.setDestinationEntity(90U);
    msg.type = 41U;
    msg.error.assign("KATSLMDJJRETZPVHMDMDYNBZRBDLKWNQAQYTCTFCNUPJSBJWTDHAVIQJXKYOGYZIEHLSDFYXZIAPJJLBTVILZXYDYF");

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
    msg.setTimeStamp(0.6789168422930179);
    msg.setSource(43065U);
    msg.setSourceEntity(141U);
    msg.setDestination(44683U);
    msg.setDestinationEntity(212U);
    msg.type = 31U;
    msg.error.assign("JOBJDOUGFMKQALZNGWVUPQTZIQMEIPDOAPDMGUWDYAKXXFCFIZBBTVXCZSHBXSPGAEORMKGPITYSTDRBCQGDLDXECCKHNWDOEKNHUSAVFVOMCQEBKNAGBFEKWSYWBDHCJUKWRTQFBTYHHTWEZLJVFJUYZSSHRRUKITMJUCVVUOFQZEYIZPNPRFKNJYMLDIGVXLPWURXYICZWJJS");

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
    msg.setTimeStamp(0.7393771166873808);
    msg.setSource(21768U);
    msg.setSourceEntity(195U);
    msg.setDestination(45259U);
    msg.setDestinationEntity(239U);
    msg.type = 246U;
    msg.error.assign("AJIGBYDRZBFNTVQQNORAOJXNEYSHJMEEYDNZOMUJIIAXOENLXYEOCAXALQIXURDMMKQKAIFXZHHBJOCHPWKPDLJHJZIOSUVCNXFHVETYKQYSEYTBGK");

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
    msg.setTimeStamp(0.29615604962426767);
    msg.setSource(57832U);
    msg.setSourceEntity(198U);
    msg.setDestination(1970U);
    msg.setDestinationEntity(150U);
    msg.seq = 45311U;
    msg.sys_dst.assign("JURWBQOANIUOXCSHZEZGXEKUHMPPVXTATLEJVUHEIFJ");
    msg.flags = 42U;
    const char tmp_msg_0[] = {-98, -102, -78, 84, 76, -126, -9, -18, 81, -7, -6, 64, 5, 42, -78, 53, -100, 117, -100, -2, 38, 61, -114, 48, -121, 42, 86, -34, -17, 30, -15, -93, -46, -57, -98, -31, 111, -109, -92, 38, -35, -102, -97, 68, 58, -82, 83, -37, 114, 119, 113, -99, 7, -10, 104};
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
    msg.setTimeStamp(0.7554772044742878);
    msg.setSource(53961U);
    msg.setSourceEntity(248U);
    msg.setDestination(39637U);
    msg.setDestinationEntity(161U);
    msg.seq = 37343U;
    msg.sys_dst.assign("KSLHNOVZEABJGMMSRXXYGLARVOYPAGCWBLPZXFXSVNHJAEFAZBTHZPELFMFFNPKWQXYXNJLXJORHVNUDJQYTNMEVICEJOLDLSIIGCUIXLQNZICSSRVFZOAHSGUC");
    msg.flags = 140U;
    const char tmp_msg_0[] = {12, 50, -122, -61, -80, -36, 14, 56, -66, -47, -68, 5, 14, -116, -44, -127, -22, -112, -55, 79, -8, -113, -88, 39, -30, -43, -86, -120, 56, 65, 38, -115, -108, 68, 9, 37, -64, -59, -29, 96, 92, -61, 83, -4, 30, -45, 18, 78, -6, 115, -61, -97, 52, -78, -31, -76};
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
    msg.setTimeStamp(0.503775697237128);
    msg.setSource(26496U);
    msg.setSourceEntity(42U);
    msg.setDestination(59380U);
    msg.setDestinationEntity(152U);
    msg.seq = 48899U;
    msg.sys_dst.assign("MXTNGOPHAZMTKABANVDMPICGLNWISLJILHHJZYOCCNDHCNTDEBRWAUXNOHDSVTAVRWHKJRURFTDUCZPZWEEEGSGEPIYSYQOEAVYFUQKIACMHGOOKMFUBFDWAQEJQHQLWXVOHCQZ");
    msg.flags = 244U;
    const char tmp_msg_0[] = {56, -68, 74, 99, -54, -94, -88, -65, 90, -10, 69, -91, -117, 100, 113, 125, -52, -92, -92, -121, 80, 28, 6, 94, 65, 90, -42, -20, -79, 97, 56, 82, -124, -112, -59, 31, -128, 123, 122, 96, -33, 100, 123, 19, -86, 67, -84, -34, 73, -48, 24, 48, -47, 32, -29, 25, -81, 91, -67, -105, 106, -10, -9, 80, -31, 82, -115, -18, -122, -46, 105, 62, -59, -38, -94, -124, -22, 62, 101, -72, -59, 11, 88, 27, 93, 63, -52, 58, 74, 71, 99, 22, 73, -101, -49, -38, -32, -99, 98, 118, 10, -88, 10, -19, -33, 102, -54, 19, 94, 0, 57, -102, 88, 125, 78, 18, -50, 72, -51, -104, -86, -99, -60, 58, -43, -52, 113, -66, 68, -29, 11, 112, -43, 94, -43, -71, -84, 45, -69, 4, 59, 101, -102, -54, 3, -105, -113, 1, 45, -50, 85, 92, -36, -23, 7, 71, -20, -16, 56, 92, 98, -26, -39, -21, -3, 117, -30, -21, -39, 67, -63, 84, 10, -102, -16, -91, -45, -69, 102, 9, -64, 23, -77, 22, 108, 85, 27, 46, 113, -67, 115, 84, 87, 48, -8, 83, -24, -90, 15, 89, 69, 33, -9, 98, 93, -56, 126, 73, -28, -58, -4, 107, 126, -80, -97, -104, -80, -64, 49, -23, -12, 4, -5, 98, -41, -28, 119, -76};
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
    msg.setTimeStamp(0.32547332535246054);
    msg.setSource(47451U);
    msg.setSourceEntity(193U);
    msg.setDestination(17278U);
    msg.setDestinationEntity(184U);
    msg.sys_src.assign("ZKQWNZLIESSTWRJSXFCVWBNUCRLCKPKZYGUTDNRRDBVUOGIXOMMRQQVVFFJMDFMHXXBGZIMUKCAUQYSYGPLKXQZDKYHYJIEDUJPOZSUOHPSPXNJLUNGEHTDAZFELWOCMTNNZCGXVMESXSMROJZCSWDEVWVBUYABTHWNWLKLAHBJNGRRQSAFNPTQIPAHCHBWLIJAFBAVTDBGPITLAEOVOPMRQXEGIFBQTRHCPGDJAXCFVZ");
    msg.sys_dst.assign("VGSLFYCLCUDIVQDHTPNWMTEXSFJITQWGEMABFRZBQXBUMPRPTIPETDOGDKZKWMFGNWDGOHFSRUIBKNNJGHELLZROQIPHVYTPMMXHDACYXCWSCKLWVKUSNIYZCRHUOWVHLYAGTFBDFJIWFJTARBSOSIWREFJVJKNSGAPBJAX");
    msg.flags = 171U;
    const char tmp_msg_0[] = {98, -64, 69, -90, 83, 18, 106, 104, -15, -90, 105, -96, 41, -97, 116, -117, 122, -74, 126, -77, 56, 64, 69, -24, 16, -26, 72, 106, -120, -112, -36, 30, 77, 80, 111, 32, 94, 22, 107, -13, -69, -33, -12, 110, 30, 60, 106, -73, -66, -15, -9, 109, 24, 13, 13, 20, -47, 89, -110, -22, -9, -29, -126, -34, 3, -3, 3, -37, 58, 76, 81, -83, 41, 103, 38, -83, -69, -35, -17, -74, 104, -99, -126, -79, 45, -78, -24, 22, -3, -103, 81, -123, -104, 114, -80, 102, 30, -113, -87, 66, -58, 111, -84, 86, -80, -45, 0, -4, 53, -81, -80, 104, -102, 66, 92, -80, -122, -75, -36, -24, -58, -71, 11, 1, -29, -57, -55, 33, -91, 50, -29, 73, -95, -111, 35, 29, -73, -29, 72, -96, -51, 23, 56, -52, -22, 79, -6, 62, -41, 105, -123, 8, -104, 101, 94, 33, -28, 120, 56, 83, 37, -52, -106, 29, 94, 125, -80, 68, 64, -80, -116, -59, 26, 29, -121, -125, 78, 96, -107, 116, -124, -4, -110, -46, -73, -74, -120, 77, -65, -25, 13, 6, -1, -68, 73, -43, -110, 41, -32, 25, 114, -1};
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
    msg.setTimeStamp(0.5685736918704554);
    msg.setSource(7632U);
    msg.setSourceEntity(143U);
    msg.setDestination(48945U);
    msg.setDestinationEntity(86U);
    msg.sys_src.assign("TYTUZAFWIMBESKQFEQLTHYODFJTHBMBUGOTIEIEVWRARSOBPEXCYXLOYKRIPXJGQMFJJFUOVCHILJNUAJNLXMJYQCUSHIOBYVPCNKUOPFPBUKLWRNWIKCSPCBBFJPYRWGDRDTKQHNCEBHIUHHCYQZTUWANFZVAWZ");
    msg.sys_dst.assign("RJNYDXNPWDNALEJEBNBVIVBRXTPXGTKPJRSFQTRYXJFTCDIHNIFFKPGWDBUKORKMWSMWZST");
    msg.flags = 74U;
    const char tmp_msg_0[] = {51, 61, -79, 98, -28, -23, 0, -71, 61, 65, 40, -15, 46, 103, 30, -76, -38, -79, -83, 6, -5, -122, 29, -89, 86, -54, 91, -96, 99, -34, -114, -22, -83, 52, 102, -23, 126, 79, -44, -124, -40, 55, 36, -34, 90, -29, -97, -112, 46, -29, -46, -114, 58, 101, -38, 125, -23, 28, -120};
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
    msg.setTimeStamp(0.3797624030113862);
    msg.setSource(28064U);
    msg.setSourceEntity(127U);
    msg.setDestination(33104U);
    msg.setDestinationEntity(8U);
    msg.sys_src.assign("UXXPJBRODJNFCVBVWUDOSCANVYEWHWIHZZOEIGTPTNBYZHYTMLOJPDNKLFGEYWLOMZBQQEQXHGELQLKAPNBQZV");
    msg.sys_dst.assign("LFEMCLEBDTXBAXAKUWQOGKFYCCAYCUNFZZQLRNWDEMVSSLYZXFUNRAJXRGZXXOJMKMZZHNKUTVQVVOPJCWYBGAXJ");
    msg.flags = 122U;
    const char tmp_msg_0[] = {-105, -124, -112, 89, 57, -84, 87, -17, 52, 29, 62, 77, -113, 71, -8, 20, -118, 10, -79, -86, 121, 119, 36, -66, -42, 102, 111, -71, 31, -110, -47, 75, -1, -15, -55, 123, 53, 88, -41, 19, -101, 12, -53, -115, 114, -67, 5, -101, -65, 23, 70, 89, 77, 21, 117, -84, -40, -35, -61, -91, 10, -27, 18, 92, 43, 1, 18, -82, 18, 105, -64, -126, 4, 125, 90, 14, -123, -10, 3, 54, 14, 43, -118, -114, -52, 28, -74, 20, 83, 11, 48, -90, -117, 84, 53, -73, 105, 86, -47, -53, -48, 45, 67, 65, 18, 111, -39, -56, 67, -74, -25, 121, 32, -73, 65, 116, 105, 94, -16, 101, 11, 44, 100, -24, -98, 119, 52, 121, 107, 101, -38, -65, 116, -37, 114, 29, -94, -74, 97, -121, -33, -38, -44, -62, 34, 34, 124, 110, -3, -64, -60, 78, -64, -123, -11, 11, 78, -90, -57, -77, 106, 95, 5, -1, 39, 114, 88, -106, 123, 108, -36, 5, 43, -35, -101, -41, 92, -110, 95, 111, -26, -103, 68, 10, -97, -62, 21, 77, -43, 3, 13, -48, 73, 115, 90, -79, 48, -42, 7, 121, -41, -127, 100, -40, -35, 55, 29, 30, 7, 125, -100, -91, -35, -34, -118, -111, 83, -82, 51, 111, 117, 0, -35, -21, -103, -114, -103, -59, 68, -52, -89, 14, 123, 60, -31, -79, 19, 3, -33, 103, 11, -40, 94, -6, 124, -44, 70, 51, 45, 122};
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
    msg.setTimeStamp(0.5262262118892924);
    msg.setSource(15860U);
    msg.setSourceEntity(43U);
    msg.setDestination(54297U);
    msg.setDestinationEntity(9U);
    msg.seq = 56481U;
    msg.value = 115U;
    msg.error.assign("FFNGXEDDVPQMSOBXNUQYCIHPAEBRYVGQXMRYQFOVKKGUDXUZHHJIPOUFLLRGXSGEHQZCRAMRBHKUXBUSOUJLMLCNMBFTHFXFOQYPPSLLSEVDCROPIZVZAAFLNYWVJBKEUJJKRRNXZTEPTJIHNYPMNKFKWTUQFQZJQIIMABOJIANDTHLGVCAWCWTCLGOEMYIZYJBWSTSKQLOWHVTMKGKSDMDTIZGUWNW");

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
    msg.setTimeStamp(0.10056403286189797);
    msg.setSource(63034U);
    msg.setSourceEntity(147U);
    msg.setDestination(26246U);
    msg.setDestinationEntity(108U);
    msg.seq = 1222U;
    msg.value = 17U;
    msg.error.assign("VZIHRQTYGQWNAIFPBPPFADUQIHVWDATNKMCTEAHWQJJDUJDBBUWCOLNGRUCOBUELMUYMIHZFUNKLDZTFQUMDCGBLKIIEOLRIJZMSZMACLNWOEEEFPXYYTNHYVTGJRFVKQXGZLSFXJXYQBKAQVVWRHCGBZKBASWSNXMOYRWJAVHIFADJPSCBQHSBUEEYGSXVPNUEDCQKOLOLMXJMWR");

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
    msg.setTimeStamp(0.7645300290764845);
    msg.setSource(5966U);
    msg.setSourceEntity(29U);
    msg.setDestination(353U);
    msg.setDestinationEntity(157U);
    msg.seq = 38847U;
    msg.value = 201U;
    msg.error.assign("SMEXDPUNLODQZWWXWFXTPAILKMFQGRAIVSPESIEDWOXMNJCIFS");

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
    msg.setTimeStamp(0.8384994317221244);
    msg.setSource(31734U);
    msg.setSourceEntity(88U);
    msg.setDestination(18732U);
    msg.setDestinationEntity(164U);
    msg.seq = 27198U;
    msg.sys.assign("DDMANVBKXDHSIPHSUNPFEGAJNHXAPCOHZUS");
    msg.value = 0.057689236352647555;

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
    msg.setTimeStamp(0.9227757719534619);
    msg.setSource(41677U);
    msg.setSourceEntity(242U);
    msg.setDestination(36588U);
    msg.setDestinationEntity(0U);
    msg.seq = 48621U;
    msg.sys.assign("TCXWDUTWFHAUYDJOOOVZPHJKJQKWSUBGVP");
    msg.value = 0.851993534300415;

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
    msg.setTimeStamp(0.8118686557140108);
    msg.setSource(56176U);
    msg.setSourceEntity(71U);
    msg.setDestination(22558U);
    msg.setDestinationEntity(186U);
    msg.seq = 45214U;
    msg.sys.assign("YVUJCQNQFDOGDXOILMNASOJHLGYDEQHNCVFHUUKLHNTZRIUOJDGLDIYURENCASQAOBIBXSGWIWBCPRBOUOHYHXJUKSZVABKUQMDIWFYMAEJEWLENDYOQISFLVEUTCZASXJKYQAVFPUOZKCTTPMJTQRHKSECYXMPRVEAOZQKRKWCPGHAMXPVBTWANMVPNEZKCJGGEPBGFITLDPRRFTXYHZBYLWSHNBZGCJNRFMDIVTXWFRWPKZSZMLXLQVWXGBI");
    msg.value = 0.8951529586417184;

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
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.8484340928727092);
    msg.setSource(6651U);
    msg.setSourceEntity(130U);
    msg.setDestination(48030U);
    msg.setDestinationEntity(40U);
    msg.seq = 57225U;
    msg.sys_dst.assign("URKVTQSEGRDOVXDKNRYQPAVZDLOGTNGDJNPMFIQUVHTTAQJMPHRJTFXZNVQLIMRVAACZXSWFYEQSZYLGDRWOBHKLNLDUZNWUGACMKYOWSHJYSCCUZGJICLSOFISHW");
    msg.timeout = 0.08896426431218163;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.0011858672162889938);
    msg.setSource(8150U);
    msg.setSourceEntity(20U);
    msg.setDestination(2416U);
    msg.setDestinationEntity(138U);
    msg.seq = 25417U;
    msg.sys_dst.assign("STPFCYGKLIQZEAUOSLINTRKCRIWWCCUWUZEUVOXFBIDURYKARTILBAUFBESCEJEJAQHMDVEZYPXQBWQSSPKUDTTOHYQFILNHNCZFKPWLXMEZLSNIDDWXJJSJZDXJZBBCVKMPHOFYOAXDNFAOBCMSGGGHIAMVTVRTKFYN");
    msg.timeout = 0.34064464730270794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.3519985503983598);
    msg.setSource(52455U);
    msg.setSourceEntity(230U);
    msg.setDestination(63826U);
    msg.setDestinationEntity(165U);
    msg.seq = 9679U;
    msg.sys_dst.assign("JFMIDMMYBDJZRXIXDDVBFNFPNGUSQZKCAXROQILWDBIKFXCUQINGBTJJCPPHJYDPHVSDGZJLEBZROUMKHNSWJTGGPCLKXQKWATLANIRXWXTEPFUQTOKMEOMCARPLNRBXYAVN");
    msg.timeout = 0.7096012726535413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3250884574512748);
    msg.setSource(14557U);
    msg.setSourceEntity(203U);
    msg.setDestination(21025U);
    msg.setDestinationEntity(168U);
    msg.action = 143U;
    msg.longain = 0.9210450674156514;
    msg.latgain = 0.8116935602613242;
    msg.bondthick = 4256905436U;
    msg.leadgain = 0.42719981652253136;
    msg.deconflgain = 0.02570826582604202;

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
    msg.setTimeStamp(0.8179800318152046);
    msg.setSource(14657U);
    msg.setSourceEntity(118U);
    msg.setDestination(1731U);
    msg.setDestinationEntity(2U);
    msg.action = 44U;
    msg.longain = 0.41801911884333454;
    msg.latgain = 0.4633671562819699;
    msg.bondthick = 2327663223U;
    msg.leadgain = 0.63732649519635;
    msg.deconflgain = 0.9136172904232215;

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
    msg.setTimeStamp(0.26862120976667614);
    msg.setSource(33481U);
    msg.setSourceEntity(89U);
    msg.setDestination(24623U);
    msg.setDestinationEntity(123U);
    msg.action = 156U;
    msg.longain = 0.7093538720394337;
    msg.latgain = 0.24652915109192952;
    msg.bondthick = 3110951702U;
    msg.leadgain = 0.6482877838484739;
    msg.deconflgain = 0.7587255496181787;

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
    msg.setTimeStamp(0.8802345820783428);
    msg.setSource(35242U);
    msg.setSourceEntity(138U);
    msg.setDestination(147U);
    msg.setDestinationEntity(182U);
    msg.err_mean = 0.9499728819624447;
    msg.dist_min_abs = 0.9913622642077999;
    msg.dist_min_mean = 0.4236749261471884;

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
    msg.setTimeStamp(0.4051675158068946);
    msg.setSource(34982U);
    msg.setSourceEntity(241U);
    msg.setDestination(57029U);
    msg.setDestinationEntity(115U);
    msg.err_mean = 0.22566387380297792;
    msg.dist_min_abs = 0.4879839598942527;
    msg.dist_min_mean = 0.8285289546821472;

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
    msg.setTimeStamp(0.04480997001910014);
    msg.setSource(56006U);
    msg.setSourceEntity(235U);
    msg.setDestination(30243U);
    msg.setDestinationEntity(66U);
    msg.err_mean = 0.3474961514347167;
    msg.dist_min_abs = 0.8830140449368115;
    msg.dist_min_mean = 0.8180982548519761;

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
    msg.setTimeStamp(0.10449664095651534);
    msg.setSource(36306U);
    msg.setSourceEntity(172U);
    msg.setDestination(15393U);
    msg.setDestinationEntity(223U);
    msg.action = 61U;
    msg.lon_gain = 0.5641428088442924;
    msg.lat_gain = 0.036132895384045405;
    msg.bond_thick = 0.7652982072816839;
    msg.lead_gain = 0.8084603341935834;
    msg.deconfl_gain = 0.9127066506526303;
    msg.accel_switch_gain = 0.24995443676572138;
    msg.safe_dist = 0.7125396729234549;
    msg.deconflict_offset = 0.31016215127568725;
    msg.accel_safe_margin = 0.36315279620260477;
    msg.accel_lim_x = 0.35226451948656023;

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
    msg.setTimeStamp(0.7133353818000151);
    msg.setSource(10139U);
    msg.setSourceEntity(39U);
    msg.setDestination(54541U);
    msg.setDestinationEntity(45U);
    msg.action = 157U;
    msg.lon_gain = 0.6678497526407404;
    msg.lat_gain = 0.21005325492258287;
    msg.bond_thick = 0.2863621728992135;
    msg.lead_gain = 0.874722931356328;
    msg.deconfl_gain = 0.1577213657289146;
    msg.accel_switch_gain = 0.12861576440404277;
    msg.safe_dist = 0.4658354391119074;
    msg.deconflict_offset = 0.4673708767086243;
    msg.accel_safe_margin = 0.5746260707239467;
    msg.accel_lim_x = 0.7786631995059695;

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
    msg.setTimeStamp(0.7422612686239999);
    msg.setSource(15189U);
    msg.setSourceEntity(220U);
    msg.setDestination(3622U);
    msg.setDestinationEntity(118U);
    msg.action = 229U;
    msg.lon_gain = 0.33349603642812464;
    msg.lat_gain = 0.6075991217116122;
    msg.bond_thick = 0.09333536502813888;
    msg.lead_gain = 0.2929866776056024;
    msg.deconfl_gain = 0.3993609024158863;
    msg.accel_switch_gain = 0.7494807998601932;
    msg.safe_dist = 0.596249202946642;
    msg.deconflict_offset = 0.43676351547332926;
    msg.accel_safe_margin = 0.026405939359224084;
    msg.accel_lim_x = 0.5310393515375146;

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
    msg.setTimeStamp(0.4777082570682426);
    msg.setSource(8419U);
    msg.setSourceEntity(197U);
    msg.setDestination(60049U);
    msg.setDestinationEntity(117U);
    msg.type = 171U;
    msg.op = 130U;
    msg.err_mean = 0.32099100315421947;
    msg.dist_min_abs = 0.8132351018064717;
    msg.dist_min_mean = 0.6300515700636284;
    msg.roll_rate_mean = 0.5480783439535979;
    msg.time = 0.18359508733461505;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 90U;
    tmp_msg_0.lon_gain = 0.23816878828008015;
    tmp_msg_0.lat_gain = 0.32259511620248915;
    tmp_msg_0.bond_thick = 0.4266826357407604;
    tmp_msg_0.lead_gain = 0.8539676463096671;
    tmp_msg_0.deconfl_gain = 0.48948177705395457;
    tmp_msg_0.accel_switch_gain = 0.5011884383858582;
    tmp_msg_0.safe_dist = 0.40793377431265176;
    tmp_msg_0.deconflict_offset = 0.7144321484796431;
    tmp_msg_0.accel_safe_margin = 0.8651947695869837;
    tmp_msg_0.accel_lim_x = 0.8359117991602945;
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
    msg.setTimeStamp(0.3075860262420289);
    msg.setSource(43288U);
    msg.setSourceEntity(162U);
    msg.setDestination(30417U);
    msg.setDestinationEntity(163U);
    msg.type = 250U;
    msg.op = 195U;
    msg.err_mean = 0.5197363846937574;
    msg.dist_min_abs = 0.3842847310029024;
    msg.dist_min_mean = 0.18497471054619474;
    msg.roll_rate_mean = 0.5328518449963593;
    msg.time = 0.6650404589759044;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 36U;
    tmp_msg_0.lon_gain = 0.7010883693579121;
    tmp_msg_0.lat_gain = 0.06018130112449094;
    tmp_msg_0.bond_thick = 0.3892715834977364;
    tmp_msg_0.lead_gain = 0.4655095737872912;
    tmp_msg_0.deconfl_gain = 0.3850055347603789;
    tmp_msg_0.accel_switch_gain = 0.9024993309696445;
    tmp_msg_0.safe_dist = 0.9249465077986455;
    tmp_msg_0.deconflict_offset = 0.7711165441420492;
    tmp_msg_0.accel_safe_margin = 0.17471306029461198;
    tmp_msg_0.accel_lim_x = 0.7998792573696673;
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
    msg.setTimeStamp(0.659451381358194);
    msg.setSource(60852U);
    msg.setSourceEntity(151U);
    msg.setDestination(10132U);
    msg.setDestinationEntity(203U);
    msg.type = 245U;
    msg.op = 103U;
    msg.err_mean = 0.2667780794229647;
    msg.dist_min_abs = 0.9705861082601362;
    msg.dist_min_mean = 0.5706507952926341;
    msg.roll_rate_mean = 0.8132094713179393;
    msg.time = 0.07992679743788378;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 188U;
    tmp_msg_0.lon_gain = 0.1675251621467989;
    tmp_msg_0.lat_gain = 0.15109243438905728;
    tmp_msg_0.bond_thick = 0.5522337099553243;
    tmp_msg_0.lead_gain = 0.33500800189271907;
    tmp_msg_0.deconfl_gain = 0.16163173397138175;
    tmp_msg_0.accel_switch_gain = 0.09687940993446986;
    tmp_msg_0.safe_dist = 0.44765180170869534;
    tmp_msg_0.deconflict_offset = 0.5784579560708077;
    tmp_msg_0.accel_safe_margin = 0.3958974023942765;
    tmp_msg_0.accel_lim_x = 0.3833397564185942;
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
    msg.setTimeStamp(0.7919228665770144);
    msg.setSource(54664U);
    msg.setSourceEntity(27U);
    msg.setDestination(18822U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.7747671694258739;
    msg.lon = 0.15246507029983114;
    msg.eta = 678088038U;
    msg.duration = 30025U;

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
    msg.setTimeStamp(0.5817669415938758);
    msg.setSource(41840U);
    msg.setSourceEntity(79U);
    msg.setDestination(63316U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.9684831433889342;
    msg.lon = 0.17585697867316408;
    msg.eta = 4124970174U;
    msg.duration = 51198U;

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
    msg.setTimeStamp(0.24746643153163728);
    msg.setSource(57071U);
    msg.setSourceEntity(180U);
    msg.setDestination(26977U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.5209042714314196;
    msg.lon = 0.04905325313397424;
    msg.eta = 2383398983U;
    msg.duration = 29355U;

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
    msg.setTimeStamp(0.5056670469682568);
    msg.setSource(4688U);
    msg.setSourceEntity(47U);
    msg.setDestination(62839U);
    msg.setDestinationEntity(47U);
    msg.plan_id = 41323U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.334258644653999;
    tmp_msg_0.lon = 0.5948475952749281;
    tmp_msg_0.eta = 1887630041U;
    tmp_msg_0.duration = 62751U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9347354851016739);
    msg.setSource(43285U);
    msg.setSourceEntity(189U);
    msg.setDestination(632U);
    msg.setDestinationEntity(173U);
    msg.plan_id = 39636U;

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
    msg.setTimeStamp(0.043237022312856865);
    msg.setSource(51626U);
    msg.setSourceEntity(115U);
    msg.setDestination(24302U);
    msg.setDestinationEntity(48U);
    msg.plan_id = 33692U;

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
    msg.setTimeStamp(0.009322236116860783);
    msg.setSource(55802U);
    msg.setSourceEntity(38U);
    msg.setDestination(60991U);
    msg.setDestinationEntity(159U);
    msg.type = 15U;
    msg.command = 167U;
    msg.settings.assign("VKKXKRIJITJUGKMJHGYQPRBOZXOOEXZWMCFGBOFELULGIAHAXCYVWHBSNUPNRZSAETYOBDKXEGWFLRDBTNVFQVYB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 37150U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.22364694646222016;
    tmp_tmp_msg_0_0.lon = 0.5078262223688453;
    tmp_tmp_msg_0_0.eta = 2692849837U;
    tmp_tmp_msg_0_0.duration = 17441U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JAFPGWVWVTQEAKLHXSAMNTZSBAGHLRFPKGJNGIXQJRQJDGDWVIFJYYDVJLDJCQTMXWSTXTFNLRKKU");

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
    msg.setTimeStamp(0.8647816741446999);
    msg.setSource(64131U);
    msg.setSourceEntity(49U);
    msg.setDestination(25434U);
    msg.setDestinationEntity(195U);
    msg.type = 42U;
    msg.command = 91U;
    msg.settings.assign("RENOFEBVORTWQWGQPEWICQWWRAUMEKYVQBPNDGINZYSKMNDQATDFUBOYDMUHKUMPIGIMLTSAYCJGXVLJZXGXSOCPSKSYLKJSZDJUEZJHCVADYDGWBKMATWJEARBBZSMALFEGVSQYQTQLOVWLFPNUGHXAHECVOWRTUXNS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11691U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("HWMRXNYASXBAIQQM");

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
    msg.setTimeStamp(0.05805620804889988);
    msg.setSource(21712U);
    msg.setSourceEntity(52U);
    msg.setDestination(33060U);
    msg.setDestinationEntity(57U);
    msg.type = 158U;
    msg.command = 176U;
    msg.settings.assign("RIHGIIVROKJHFQPJYKNLVUUVZZSYVPGNHQVEOMHJWYWKSRKYFALJLOAEHDDCYWOEATXBSINULOQGPNFFLDRNQBMCGYKJEPZTTVXMABSTOQDPXEVILAIXCPJWCXCKQUPRMSKGWFEINJETDWZQHONWCZFBMFUCCYTHNTOQAAXBKCZT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 12135U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5900229967260601;
    tmp_tmp_msg_0_0.lon = 0.17929536933849965;
    tmp_tmp_msg_0_0.eta = 2099605549U;
    tmp_tmp_msg_0_0.duration = 38096U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YLCLQOZPOFNQZOHJVPDDPUJWPMWYVDGVAXCMDABFLMCQDKWFRWNQCJZTUFBMLCOHODUQMNEBVEIOBSGYTPHOHRLMDZAAXGZYGKMXPZXVAYNMGQFRJTVALIXHQBPSKMSITRIPFERFHOCJEXUSTINUZBQDUHZYASWITSRJZZWKIP");

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
    msg.setTimeStamp(0.5862924442965668);
    msg.setSource(30087U);
    msg.setSourceEntity(209U);
    msg.setDestination(34505U);
    msg.setDestinationEntity(118U);
    msg.state = 194U;
    msg.plan_id = 10595U;
    msg.wpt_id = 66U;
    msg.settings_chk = 28685U;

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
    msg.setTimeStamp(0.8023160326916262);
    msg.setSource(28391U);
    msg.setSourceEntity(67U);
    msg.setDestination(29798U);
    msg.setDestinationEntity(41U);
    msg.state = 69U;
    msg.plan_id = 40448U;
    msg.wpt_id = 30U;
    msg.settings_chk = 55075U;

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
    msg.setTimeStamp(0.5724421174676403);
    msg.setSource(23128U);
    msg.setSourceEntity(62U);
    msg.setDestination(243U);
    msg.setDestinationEntity(39U);
    msg.state = 65U;
    msg.plan_id = 33252U;
    msg.wpt_id = 240U;
    msg.settings_chk = 20869U;

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
    msg.setTimeStamp(0.6310624019440695);
    msg.setSource(43690U);
    msg.setSourceEntity(154U);
    msg.setDestination(37968U);
    msg.setDestinationEntity(106U);
    msg.uid = 75U;
    msg.frag_number = 141U;
    msg.num_frags = 137U;
    const char tmp_msg_0[] = {-111, 52, 53, -78, -79, 37, -44, 114, -69, -97, -39, -13, 67, 80, 53, 82, 31, 6, -35, 77, 94, 47, 87, -40, 14, -27, 72, 111, 41, 106, -94, -79, 12, 80, 19, 13, 102, 27, 6, -47, 67, -4, -79, -31, -126, -88, -34, 84, 88, 64, 71, -7, -41, -92, 17, 90, 38, -4, -73, -19, -32, 56, 55, -25, 41, -65, -122, 86, -124, 123, -50, 104, -76, 76, -32, -51, -124, 30, 3, -102, -75, 68, -46, 51, -18, 1, -96, 25, 5, 79, -118, -2, 84, -79, 89, -92, 69, 87, 17, 71, -23, -95, -57, -38, 77, -49, -127, -73, -116, 46, -103, 17, -95, -115, 37, -126, -3, 70, 98, -78, -3, -64, -51, -94, 33, 86, 35, -110, 117, -99, -2, -12, 20, 72, 43, 19, 47, 70, -77, 121, 49, 114, -82, 53, -74, -123, -20, 9, 81, 79, 86, -57, -99, 104, 88, 126, 64, -122, -26, -75, -30, -14, 10, -6, 99, -113, 11, -122, 48, -6, -3, 45, 57, -111, -49, 41, 29, 103, 35};
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
    msg.setTimeStamp(0.14860276018156215);
    msg.setSource(1760U);
    msg.setSourceEntity(147U);
    msg.setDestination(11186U);
    msg.setDestinationEntity(27U);
    msg.uid = 70U;
    msg.frag_number = 145U;
    msg.num_frags = 125U;
    const char tmp_msg_0[] = {14, 108, -35, -24, 118, 68, 37, 12, -120, 54, 5, -51, -66, 16, -103, -97, -91, -84, -67, 37, 106, -88, -41, -18, -97, -36, 103, -76, 19, 81, -31, -76, -50, 43, -75, 90, -1, -4, 110, -17, -78, 76, 56, 28, 8, 121, 122, -95, -72, -18, 32, 40, -7, -109, 7, -73, -66, 108, 60, 78, 56, -71, 79, 109, 85, 43, 48, 92, 10, -74, 96, 94, 22, -48, 108, 119, -66, -92, -43, -75, -66, 113, -78, -8};
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
    msg.setTimeStamp(0.09371929785987143);
    msg.setSource(26405U);
    msg.setSourceEntity(72U);
    msg.setDestination(45917U);
    msg.setDestinationEntity(15U);
    msg.uid = 213U;
    msg.frag_number = 162U;
    msg.num_frags = 126U;
    const char tmp_msg_0[] = {-114, -22, -70, 41, -60, -118, 100, -68, -21, 9, -96, -125, 105, 65, -121, -119, -49, 97, 61, 34, -5, 115, -128, 79, 73, -82, 125, -119, -84, -84, 70, 69, -35, 26, -12, -56, -79, 119, -8, -86, -107, 60, -79, -90, -120, -37, 110, 100, 60, 29, -14, -108, 23, -102, -110, 19, 3, -128, 77, 39, 110, 63, 30, 98, -50, 123, -68, 87, 82, -102, -76, 106, 107, 39, -78, -86, 93, 84, 41, -76, -105, -78, 90, -80, 8, -117, -110, 62, -49};
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
    msg.setTimeStamp(0.4750801144063337);
    msg.setSource(57459U);
    msg.setSourceEntity(72U);
    msg.setDestination(24733U);
    msg.setDestinationEntity(226U);
    msg.content_type.assign("ZSEKASNWUXNUGVPJMGXBDLDWDYAUFVYHZPJRVXQGGLQUOKOLAJHHKYMDBHCMINSPIBFQRZSROOWKBKUTUWCYPYYSQZJTKVFNPJNIYSHCSWOFLXDEERIEJGLFKSRINWSVDLQZBBGVPHMROKTDETMFXMZCJXNTLWDPIQVCNIWEZCVQOAOHTBGALJAIUFYCZYEEFCVWKJOERZEQZXAXDTOBHIHFDFXHNPALAISLACQPNBCXGTGPG");
    const char tmp_msg_0[] = {25, -92, -70, 82, -113, 67, 96, 64, 79, 59, -53, 65, 51, -56, -104};
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
    msg.setTimeStamp(0.3427687606848542);
    msg.setSource(30288U);
    msg.setSourceEntity(237U);
    msg.setDestination(8568U);
    msg.setDestinationEntity(155U);
    msg.content_type.assign("FMICIHQMGFYRVOZOTJLKMKVHZPYCRXDBXJATPOCTVSJINKQJEREUMESJUDCCYWNYKJUGIYBZOUKJAUPVYSSEQGHDCTRDLMRSJLBMFXFMGVFASEEGAPZYNXFCTZZATAVOCYRMPBOWLQQOQNTXLEAPPBBFDKUWNWCWPSYTZSUIGADIKVMUSVWGHIUVHWDPZXGQ");
    const char tmp_msg_0[] = {-75, -108, 65, -9, 49, -98, 89, -64, -127, -4, 119, -67, 80, 13, 88, -5, -81, 90, 59, -70, 8, -15, -101, -34, 82, 36, 21, -1, -80, 14, 103, -87, 95, 61, 48, 73, 38, -118, -11, 39, -56, 64, -37, 64, -78, 63, -11, -28, -15, -20, 64, 49, 20, -69, -34, 66, -11, 115, -76, -77, -12, -34, 97, -7, -57, -55, -88, 111, 106, 119, 51, -39, -3, 58, 56, 109, -97, -101, 49, 99, -54, 73, 37, 68, -26, -61, -26, 74, -52, 21, -70, 52, 53, -76, -127, 5, 29, 38, -104, 126, -120, -119, 104, -71, 88, 24, -45, 50, 77, -12, -103, -99, -30, -44, -114, -78, 55, 112, 7, 21, 97, -120, -100, -41, -45, -5, 98, -106, -42, -44, 69, -113, 20, -107, -117, 32, 1, -73, -55, -2, 53, 110, -109, 7, 80, -47, 78, -85, 61, 113, -13, -57};
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
    msg.setTimeStamp(0.09494934268998934);
    msg.setSource(35148U);
    msg.setSourceEntity(28U);
    msg.setDestination(30191U);
    msg.setDestinationEntity(8U);
    msg.content_type.assign("JGREIVYLPYKUKGSWDVBOCVHFLPSHNAMCPZASDJYR");
    const char tmp_msg_0[] = {19, 85, 121, 40, -55, 54, 44, -20, 50, 44, -63, 49, -94, -91, 4, -3, 15, -68, 26, -23, 65, 25, 36, 6, -57, -72, 119, -7, -105, -4, -28, -47, 4, -92, 125, 55, 109, 73, -4, -88, 100, -101, 88, 5, -50, -96, -110, 1, 0, -57, -82, 84, -107, 26, -92, -84, 26, 3, -71, 33, -10, -13, 13, 91, 121, 65, -56, -45, 53, -18, 21, -70, 114, -45, -27, -31, 27, 25, -49, -91, -83, 100, -38, 40, 111, -84, 21, 48, 64, 17, -122, 48, -55, 107, 89, -41, -123, -60, -64, -87, 53, 12, -60, -125, 101, -34, -12, 112, -107, -107, -42, 22, 13, 33, -125, -39, -29, 55, 26, 72, -43, -60, 36, -69, 114, -123, 12, -76, 56, 57, 70, 34, 55, -69, -120, -15, 5, -85, 84, 0, -74, -6, -87, -112, -120, -3, -120, -33, -9};
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
    msg.setTimeStamp(0.4832183955041691);
    msg.setSource(3511U);
    msg.setSourceEntity(226U);
    msg.setDestination(50882U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.9193990789767701);
    msg.setSource(1337U);
    msg.setSourceEntity(125U);
    msg.setDestination(11894U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.9238030187689343);
    msg.setSource(276U);
    msg.setSourceEntity(206U);
    msg.setDestination(53956U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.6229582799329189);
    msg.setSource(52830U);
    msg.setSourceEntity(179U);
    msg.setDestination(57926U);
    msg.setDestinationEntity(233U);
    msg.target = 47850U;
    msg.bearing = 0.7066564051168291;
    msg.elevation = 0.01047487460343799;

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
    msg.setTimeStamp(0.11674500804824317);
    msg.setSource(2630U);
    msg.setSourceEntity(109U);
    msg.setDestination(36074U);
    msg.setDestinationEntity(105U);
    msg.target = 59039U;
    msg.bearing = 0.825522775804597;
    msg.elevation = 0.7248627858589923;

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
    msg.setTimeStamp(0.40820424824134316);
    msg.setSource(6180U);
    msg.setSourceEntity(85U);
    msg.setDestination(19870U);
    msg.setDestinationEntity(116U);
    msg.target = 25095U;
    msg.bearing = 0.5552111385450711;
    msg.elevation = 0.8758065418019515;

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
    msg.setTimeStamp(0.7167892793198791);
    msg.setSource(40012U);
    msg.setSourceEntity(136U);
    msg.setDestination(38205U);
    msg.setDestinationEntity(74U);
    msg.target = 41128U;
    msg.x = 0.22048763489113876;
    msg.y = 0.14480436027708998;
    msg.z = 0.7474195958162507;

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
    msg.setTimeStamp(0.8668810742867874);
    msg.setSource(9824U);
    msg.setSourceEntity(100U);
    msg.setDestination(37738U);
    msg.setDestinationEntity(83U);
    msg.target = 8367U;
    msg.x = 0.7261951511244586;
    msg.y = 0.3765812891547553;
    msg.z = 0.9008612743210277;

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
    msg.setTimeStamp(0.7746197608708639);
    msg.setSource(37939U);
    msg.setSourceEntity(136U);
    msg.setDestination(20905U);
    msg.setDestinationEntity(145U);
    msg.target = 26956U;
    msg.x = 0.36253915372664547;
    msg.y = 0.756695941251284;
    msg.z = 0.8927268741978879;

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
    msg.setTimeStamp(0.7306539250114034);
    msg.setSource(12114U);
    msg.setSourceEntity(139U);
    msg.setDestination(36106U);
    msg.setDestinationEntity(148U);
    msg.target = 181U;
    msg.lat = 0.1371885893110497;
    msg.lon = 0.2532954520943409;
    msg.z_units = 7U;
    msg.z = 0.5669888953280772;

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
    msg.setTimeStamp(0.7527556418712764);
    msg.setSource(34258U);
    msg.setSourceEntity(93U);
    msg.setDestination(35051U);
    msg.setDestinationEntity(64U);
    msg.target = 57619U;
    msg.lat = 0.3131346499622726;
    msg.lon = 0.024869104392276853;
    msg.z_units = 111U;
    msg.z = 0.508783240822474;

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
    msg.setTimeStamp(0.9480657021376336);
    msg.setSource(8187U);
    msg.setSourceEntity(41U);
    msg.setDestination(53606U);
    msg.setDestinationEntity(26U);
    msg.target = 33802U;
    msg.lat = 0.6752488074551262;
    msg.lon = 0.055142713504712115;
    msg.z_units = 226U;
    msg.z = 0.6978996856086687;

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
    msg.setTimeStamp(0.8097930083315293);
    msg.setSource(46359U);
    msg.setSourceEntity(63U);
    msg.setDestination(64253U);
    msg.setDestinationEntity(80U);
    msg.locale.assign("RYDGZMZLNGDQBB");
    const char tmp_msg_0[] = {43, 31, 106, -34, 42, -110, 74, -113, -7, 17, 106, -122, 114, -117, 43, -2, -99, -111, 81, -36, 40, -59, 113, -59, 117, 53, 36, 32, -34, -84, 81, -68, -109, 55, -125, -102, -28, -80, -32, 47, 78, 53, -76, 78, 72, 45, -110, -14, 89, -48, -87, 126, 94, 70, -122, 2, -32, 33, 80, 106, 62, 90, -36, -105, -104, 84, 107, 107, -40, -97, 90, -45, 7, 121, -10, -68, -73, -42, 5, -106, 85, 52, 70, 67, -72, -10, 69, -72, -21, 78, 51, -5, 7, -68, 41, 113, 63, -108, -15, 105, 13, 113, -79, -104, -63, 3, -104, -29, 87, -50, 46, -30, 71, 20, 126, -67, 99, 1, 74, 38, -70, -118, -94, 87, 69, 49, -117, -26, -106, -103, 63, -100, -2, -57, -9, 94};
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
    msg.setTimeStamp(0.24227071278751566);
    msg.setSource(21073U);
    msg.setSourceEntity(95U);
    msg.setDestination(34812U);
    msg.setDestinationEntity(210U);
    msg.locale.assign("CSZHAXQUKNVFQNZMDLMUQCZBPATJCRZYFKNAJRZYOHAVSLMUEJOOWPGKIGDU");
    const char tmp_msg_0[] = {-30, -94, -50, 51, 62, 79, 67, 89, -61, -122, -98, 42, 33, -35, -124, 78, -84, 82, 47, 92, 50, -36, -29, -119, -109, 5, -20, 48, 67, -40, -84, -92, -11, 105, 41, 16, 79, 104, 9, -88, 4, -57, -58, 10, 26, -110, 98, 39, 33, 107, 66, 81, -101, 112, -116, 89, -98, -65, -87, -3, 109, 28, -118, -115, -71, -81, 81, -95, 9, -2, 67, 27, -67, 90, -86, -63, 10, 22, 6, -80, 10, 0, 116, -47, 17, 117, 9, -16, 118, 123, 87, -85, 71, 106, -13, -90, -122, -123, 53, -80, 124, 62, -66, 77, 97, -110, -126, 104, 80, -111};
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
    msg.setTimeStamp(0.45377526709403215);
    msg.setSource(38352U);
    msg.setSourceEntity(217U);
    msg.setDestination(60552U);
    msg.setDestinationEntity(175U);
    msg.locale.assign("CBGDNFAZDBAQRBISLGPRJBHPSSKYFIXUPJTNOZQDIELRWAXANNCKRPYJMTZHYFHRVUPVVBBU");
    const char tmp_msg_0[] = {-21, -18, -2, -67, 64, -112, 120, -71, -12, -118, -67, -112, 28, -94, -106, -48, -33, -97, -119, -81, -33, -54, 61, 99, 99, -96, -45, -48, -83, -64, 102, -24, -37, -36, 12, 120, 44, 25, -74, -51, 60, -126, 38, 1, -33, 27, -113, -8, 75, -72, -23, 14, -128, -2, 104, 33, -120, -80, -62, -59, -30, 101, 47, -101, -59, 89, -95, 111, -107, 123, -118, -20, 105, -124, 61, 116, 35, -75, 10, 10, -79, -97, -35, 78, 64, -30, 72, -14, 65, 72, 8, -103, -30, -118, 102, 93, -53, -62, -56, -69, 69, -50, -24, -114, -112, 14, 123, -109, -2, 7, 71, 25, 36, -95, -121, 22, 115, -83, 38, 73, 83, 35, 108, -57, -10, -65, -20, -67, 29, -32, -110, 23, -37, -98, -11, 78, 1, 75, -82, -41, -21, 87, 68, 113, -75, -13, -93, 67, -121, 106, 49, 37, 93, -89, 116, 74, 79, -22, -24, 51, -120, -77, -50, -6, -127, -89, 98, 116, 47, 93, 84, -59, -54, -94, -93, 21, 5, 102, -22, -41, 109, -113, 122, 12, -128, 85, 44, 100, -51, -5, -19, 85, -86, 52, -51, -78, 29, -103, -95, 98, 119, -89, -46, 115, 103, -79, -43, 6, 104, -57, 7, -50, -3, 95, 23};
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
    msg.setTimeStamp(0.3950928901999624);
    msg.setSource(52999U);
    msg.setSourceEntity(48U);
    msg.setDestination(998U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.8782520682411644);
    msg.setSource(7700U);
    msg.setSourceEntity(18U);
    msg.setDestination(25927U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.30647808215220607);
    msg.setSource(7660U);
    msg.setSourceEntity(40U);
    msg.setDestination(40788U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.9201733571130961);
    msg.setSource(36074U);
    msg.setSourceEntity(203U);
    msg.setDestination(63306U);
    msg.setDestinationEntity(152U);
    msg.camid = 60U;
    msg.x = 44642U;
    msg.y = 59735U;

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
    msg.setTimeStamp(0.6933693837732825);
    msg.setSource(56493U);
    msg.setSourceEntity(249U);
    msg.setDestination(34118U);
    msg.setDestinationEntity(103U);
    msg.camid = 70U;
    msg.x = 44923U;
    msg.y = 52316U;

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
    msg.setTimeStamp(0.9745818687068706);
    msg.setSource(5956U);
    msg.setSourceEntity(21U);
    msg.setDestination(21007U);
    msg.setDestinationEntity(33U);
    msg.camid = 169U;
    msg.x = 35868U;
    msg.y = 20001U;

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
    msg.setTimeStamp(0.36469504911213213);
    msg.setSource(33231U);
    msg.setSourceEntity(2U);
    msg.setDestination(17134U);
    msg.setDestinationEntity(73U);
    msg.camid = 209U;
    msg.x = 32335U;
    msg.y = 36312U;

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
    msg.setTimeStamp(0.17044955646049442);
    msg.setSource(11097U);
    msg.setSourceEntity(123U);
    msg.setDestination(42091U);
    msg.setDestinationEntity(15U);
    msg.camid = 194U;
    msg.x = 32285U;
    msg.y = 16169U;

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
    msg.setTimeStamp(0.6294794480445576);
    msg.setSource(25350U);
    msg.setSourceEntity(129U);
    msg.setDestination(37651U);
    msg.setDestinationEntity(149U);
    msg.camid = 250U;
    msg.x = 41945U;
    msg.y = 3116U;

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
    msg.setTimeStamp(0.701763563786396);
    msg.setSource(33326U);
    msg.setSourceEntity(180U);
    msg.setDestination(37912U);
    msg.setDestinationEntity(145U);
    msg.tracking = 93U;
    msg.lat = 0.10319445045196263;
    msg.lon = 0.540245844556679;
    msg.x = 0.30061044523689073;
    msg.y = 0.5296788405750223;
    msg.z = 0.03502045588312963;

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
    msg.setTimeStamp(0.060547634909087544);
    msg.setSource(14383U);
    msg.setSourceEntity(55U);
    msg.setDestination(20459U);
    msg.setDestinationEntity(233U);
    msg.tracking = 227U;
    msg.lat = 0.601021340116082;
    msg.lon = 0.8431025369856083;
    msg.x = 0.5112707877066524;
    msg.y = 0.7300950536103908;
    msg.z = 0.5405763064823523;

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
    msg.setTimeStamp(0.5019217571205855);
    msg.setSource(499U);
    msg.setSourceEntity(167U);
    msg.setDestination(49686U);
    msg.setDestinationEntity(29U);
    msg.tracking = 235U;
    msg.lat = 0.08255588181566431;
    msg.lon = 0.05969400981859918;
    msg.x = 0.3294450577116089;
    msg.y = 0.3933475827626044;
    msg.z = 0.16691740317891346;

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
    msg.setTimeStamp(0.23091902826436295);
    msg.setSource(21157U);
    msg.setSourceEntity(125U);
    msg.setDestination(18555U);
    msg.setDestinationEntity(101U);
    msg.target.assign("NHKQVSNZGUFKQXBKFSJFNKXPSTHQOZOSVWTVCOYXNWEXJFIELKBFPKLUMHYWIGXQTBGMTPMDAADDDJDYUYOZMXXPQILFQICMJSTDQESHGSZVEUAXWKMJTMRGOUWFGGYGCNAJWFYLJYRLFHDKNCACYMLZJCOMAZSGPWIAKEPOLCEUIJAIOYRRVWRYCIASLRBVTBEQUEQZVXHDRVPBRHTWBNUGKPNCQOBCLDVXJNOETHLSZRM");
    msg.lbearing = 0.9519805452995376;
    msg.lelevation = 0.6653173620795331;
    msg.bearing = 0.5938646496306518;
    msg.elevation = 0.6841684018209349;
    msg.phi = 0.38421294980996246;
    msg.theta = 0.20734313196846843;
    msg.psi = 0.6207442787397675;
    msg.accuracy = 0.316375052493416;

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
    msg.setTimeStamp(0.19762345097595935);
    msg.setSource(37000U);
    msg.setSourceEntity(16U);
    msg.setDestination(25378U);
    msg.setDestinationEntity(233U);
    msg.target.assign("GZYWYBFFSYLGNQADCABUCCZSNMWUTSIVUNFJAMOKEDQGYITZOFTAQIONRDYBHPZWCLSGTGGANESYKJXOLKSSWIYYICHDMWCPCXZDOWFZPKKURYKTEOLOPPVDTVTRNJEXIHVSVXHTHZVDJIHWETPBAMUFBWJNJASQVUKKZDXJQHEMITFWBGVXRRHMDBXFYVGOZCXCNJNJXARKOUQQGVPJBPBELCPFRQHUFZLUEMMAQWGKLIQMIMRXE");
    msg.lbearing = 0.8239483922760226;
    msg.lelevation = 0.395917261707304;
    msg.bearing = 0.46404895536769053;
    msg.elevation = 0.7438215761303091;
    msg.phi = 0.08358028629446579;
    msg.theta = 0.8769193160031278;
    msg.psi = 0.6333032366371347;
    msg.accuracy = 0.6789578638017859;

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
    msg.setTimeStamp(0.519753637941537);
    msg.setSource(59378U);
    msg.setSourceEntity(57U);
    msg.setDestination(47717U);
    msg.setDestinationEntity(223U);
    msg.target.assign("MGTZHNOJIAUBLDFQQQRKHZLVFTDUSUQMOPBLKXYPKWFTLCGVDTHMDIRABRAADFJBHNQAIPXEBEMFRGZNGHBHEWKBJVFOSNRJSRIEPDRTYJWSYZOZKCLOXTYKCZTIGXVYWKSHOJVWOQMSUPUXCFCJLEU");
    msg.lbearing = 0.8988899135365425;
    msg.lelevation = 0.962093232331472;
    msg.bearing = 0.757642692075619;
    msg.elevation = 0.1829924091879962;
    msg.phi = 0.6924652814154355;
    msg.theta = 0.8295042007809474;
    msg.psi = 0.04981095202163366;
    msg.accuracy = 0.24075557985550355;

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
    msg.setTimeStamp(0.4065333089371549);
    msg.setSource(37112U);
    msg.setSourceEntity(31U);
    msg.setDestination(55641U);
    msg.setDestinationEntity(179U);
    msg.target.assign("OOEJNBJUENRUGGXNKDJGWMQSRDQTPWZITEPXKVTPWBUQGVEXYFFVAFEWK");
    msg.x = 0.595293935156723;
    msg.y = 0.7624579389137925;
    msg.z = 0.4938311966998148;
    msg.n = 0.20033711709527813;
    msg.e = 0.9704916132983463;
    msg.d = 0.5307034726127833;
    msg.phi = 0.6522278710283165;
    msg.theta = 0.6320320677532837;
    msg.psi = 0.5585349019407447;
    msg.accuracy = 0.5934996100713184;

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
    msg.setTimeStamp(0.4099242140432735);
    msg.setSource(32866U);
    msg.setSourceEntity(33U);
    msg.setDestination(29177U);
    msg.setDestinationEntity(165U);
    msg.target.assign("BNLNIEHSKRJUCFUBIWVQFXRRNJZMLFXFFKIPUYIZWZIBVOOABCAGNKPRLHIWASZTPTTGZVSTXZZQUFTEKAEXQHQQZYJWCHGNGYNO");
    msg.x = 0.8601855618710054;
    msg.y = 0.9470414994323124;
    msg.z = 0.5179248835160787;
    msg.n = 0.206928523608641;
    msg.e = 0.19250528215413176;
    msg.d = 0.48735031320718736;
    msg.phi = 0.09871421799401969;
    msg.theta = 0.9951162939206115;
    msg.psi = 0.1433320401587307;
    msg.accuracy = 0.7859622796092273;

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
    msg.setTimeStamp(0.8946010574042146);
    msg.setSource(21012U);
    msg.setSourceEntity(229U);
    msg.setDestination(36317U);
    msg.setDestinationEntity(166U);
    msg.target.assign("XGGUHQBCJKHKNADUXRVJYVPRAQTYRMEZUZPHSLFQKJTJSQXQYIPWEGVZFIXBDMOEIJECTUBGHAIYQZMWAAGFBHTLXWDVOVHSJYZOSDPWPRMNTAZTVMKFZWRYCFSLTRYCOFCWUKISECUPVOWINBVNGSDNUZKARMMTLZLHOXQKRCTVAWYXYDXQRNGEAPSWFGMLYMURDBDLGL");
    msg.x = 0.25119293194407244;
    msg.y = 0.004119776006294429;
    msg.z = 0.24540502128268704;
    msg.n = 0.5393167136266012;
    msg.e = 0.3555093730462786;
    msg.d = 0.7121840323353001;
    msg.phi = 0.46362946416119666;
    msg.theta = 0.10982661156033369;
    msg.psi = 0.8641940331723287;
    msg.accuracy = 0.024518654965083764;

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
    msg.setTimeStamp(0.5250268764888155);
    msg.setSource(16785U);
    msg.setSourceEntity(224U);
    msg.setDestination(36769U);
    msg.setDestinationEntity(34U);
    msg.target.assign("QIUJIHVOYKPOKXZGPBKTVYFMSORFFBDNPEJJVYFKTIBOJLKYLRBBXDLNTGLMYKWBXZGGOINYPCNEXTLZJAFQWJDSBMWDFNDCHXVLPCZD");
    msg.lat = 0.565932332152635;
    msg.lon = 0.8867134516041224;
    msg.z_units = 154U;
    msg.z = 0.8321808605132154;
    msg.accuracy = 0.3347644804037365;

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
    msg.setTimeStamp(0.9287538161358361);
    msg.setSource(46068U);
    msg.setSourceEntity(24U);
    msg.setDestination(54783U);
    msg.setDestinationEntity(69U);
    msg.target.assign("HKSOWOLQRCFDWWJSHDFXHSTRYFTUGBCJNLSUUIOZWQBAKRDRCMMMAZNGCUVKEGPLIGDNLBNIHOWEIYVKKTSDMXFPJDIADBLCRITPTGKXQNSATCOADXAHEWKPOMEGKVGFHSIIOCJBBNUCEZWJRQFQQRAJBUFKFNEGSZAYZZRQOYVLMBHFNVMATOXYATIOQLPVUKIZJLCJWWESUZPPDDQESNYVZRXVWGGMEYJMPLFHUYXXXRHENCYHPJB");
    msg.lat = 0.8944883422667066;
    msg.lon = 0.9530260782713516;
    msg.z_units = 73U;
    msg.z = 0.8838842556689137;
    msg.accuracy = 0.2345707615774265;

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
    msg.setTimeStamp(0.41156435470949815);
    msg.setSource(33402U);
    msg.setSourceEntity(80U);
    msg.setDestination(32334U);
    msg.setDestinationEntity(183U);
    msg.target.assign("XTOUQFRAYKOGRMSAYQYKUDTXHIQORUFADLDXPUJNLWMENQEGLKDGCGSIIUDROEGLTDZVSGZIEOJSFUFCCCMVONBBZVPTTPFLZZHPNTEYSFJOUPMZUBBNXOAQVPWMKSAEJRIPCEQPVHJJSZGYWTA");
    msg.lat = 0.9144007864335895;
    msg.lon = 0.6188080650742764;
    msg.z_units = 186U;
    msg.z = 0.8985039052843926;
    msg.accuracy = 0.7278099261423558;

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
    msg.setTimeStamp(0.9743422698939599);
    msg.setSource(7042U);
    msg.setSourceEntity(107U);
    msg.setDestination(63425U);
    msg.setDestinationEntity(197U);
    msg.name.assign("FXYIPBPZEAZPBGLWPANFFOCSCZHEWLMXUJFYSGSMAXIMGTDRBPOPKJFKUVUYKWDNDYLCQVJRSGR");
    msg.lat = 0.407657445029601;
    msg.lon = 0.9561551112446149;
    msg.z = 0.5128829571893837;
    msg.z_units = 109U;

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
    msg.setTimeStamp(0.926771157793362);
    msg.setSource(2421U);
    msg.setSourceEntity(39U);
    msg.setDestination(57545U);
    msg.setDestinationEntity(20U);
    msg.name.assign("LLHFBUFSFMLVILHAVAUCPDONCTHJLBPQQJEKVJFYGBDTPGJKTMMVZMBUVPKZTNTUYPYO");
    msg.lat = 0.9877514218582549;
    msg.lon = 0.14446103245156772;
    msg.z = 0.6055290877937087;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.8777932434513128);
    msg.setSource(9869U);
    msg.setSourceEntity(157U);
    msg.setDestination(46447U);
    msg.setDestinationEntity(9U);
    msg.name.assign("RUQERIAJHPWRBWSPGAYXIHEDFEBXJLQTCTKSYZDUYX");
    msg.lat = 0.27148696141510653;
    msg.lon = 0.037203995847797655;
    msg.z = 0.9877266391466771;
    msg.z_units = 213U;

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
    msg.setTimeStamp(0.029422976046634686);
    msg.setSource(26528U);
    msg.setSourceEntity(145U);
    msg.setDestination(24188U);
    msg.setDestinationEntity(201U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.38433217112247364);
    msg.setSource(27550U);
    msg.setSourceEntity(210U);
    msg.setDestination(14917U);
    msg.setDestinationEntity(120U);
    msg.op = 191U;

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
    msg.setTimeStamp(0.4421984096587961);
    msg.setSource(24769U);
    msg.setSourceEntity(204U);
    msg.setDestination(5609U);
    msg.setDestinationEntity(96U);
    msg.op = 55U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EXRWYXULMKIDVSAQZKHDSVIQGBLQPCUOKFXFIMQGEJYWBPABUAJFNNDHLMCSDQHSOWXDJZNKTTIVCKUGUGEOVTDXYEXXTKFVKNHIVISINJFHRRHTALBSRFFNPPMAPTTRLYPGOLCVQXUTOMVQYROIDFYBYEZLBABHONCKZTUMDBAZSZRZDESVRFJSWCHGGDMAEGWPUWNJZLEMHPZPJKROEEWNSAKTCQLYNWCROFQAYMCBIJMYUCPQGJZ");
    tmp_msg_0.lat = 0.00027438557394410257;
    tmp_msg_0.lon = 0.3045736021844784;
    tmp_msg_0.z = 0.9703722815309185;
    tmp_msg_0.z_units = 211U;
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
    msg.setTimeStamp(0.4116875069563226);
    msg.setSource(65391U);
    msg.setSourceEntity(222U);
    msg.setDestination(50165U);
    msg.setDestinationEntity(149U);
    msg.value = 0.4352297987591289;
    msg.type = 93U;

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
    msg.setTimeStamp(0.19913998399331767);
    msg.setSource(41195U);
    msg.setSourceEntity(106U);
    msg.setDestination(16210U);
    msg.setDestinationEntity(41U);
    msg.value = 0.873261841484932;
    msg.type = 254U;

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
    msg.setTimeStamp(0.349383618653176);
    msg.setSource(41729U);
    msg.setSourceEntity(23U);
    msg.setDestination(48915U);
    msg.setDestinationEntity(204U);
    msg.value = 0.16750332932565426;
    msg.type = 159U;

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
    msg.setTimeStamp(0.2922005109729222);
    msg.setSource(30791U);
    msg.setSourceEntity(81U);
    msg.setDestination(45868U);
    msg.setDestinationEntity(13U);
    msg.value = 0.5041650870574867;

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
    msg.setTimeStamp(0.7719585767340402);
    msg.setSource(55895U);
    msg.setSourceEntity(160U);
    msg.setDestination(47803U);
    msg.setDestinationEntity(60U);
    msg.value = 0.9235348218040069;

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
    msg.setTimeStamp(0.9795452193776831);
    msg.setSource(53997U);
    msg.setSourceEntity(38U);
    msg.setDestination(24735U);
    msg.setDestinationEntity(65U);
    msg.value = 0.2265719469289269;

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
    msg.setTimeStamp(0.6006329055058368);
    msg.setSource(13894U);
    msg.setSourceEntity(238U);
    msg.setDestination(53009U);
    msg.setDestinationEntity(5U);
    msg.timestamp_last_service = 0.6048657232916373;
    msg.time_next_service = 0.08186787197276113;
    msg.time_motor_next_service = 0.07621557804931811;
    msg.time_idle_ground = 0.10726133113394098;
    msg.time_idle_air = 0.7415761353595484;
    msg.time_idle_water = 0.0017747255235184278;
    msg.time_idle_underwater = 0.06508403516732464;
    msg.time_idle_unknown = 0.3611456175473233;
    msg.time_motor_ground = 0.46097119541994835;
    msg.time_motor_air = 0.49746467080858103;
    msg.time_motor_water = 0.9784446849123469;
    msg.time_motor_underwater = 0.7362956225914684;
    msg.time_motor_unknown = 0.11330083384102851;
    msg.rpm_min = -12597;
    msg.rpm_max = -2526;
    msg.depth_max = 0.5931061608583533;

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
    msg.setTimeStamp(0.8524934270743967);
    msg.setSource(52358U);
    msg.setSourceEntity(191U);
    msg.setDestination(5645U);
    msg.setDestinationEntity(217U);
    msg.timestamp_last_service = 0.3438400684177032;
    msg.time_next_service = 0.11933019023395874;
    msg.time_motor_next_service = 0.6883365788564382;
    msg.time_idle_ground = 0.6039016489577611;
    msg.time_idle_air = 0.7820106850974385;
    msg.time_idle_water = 0.9999324607822596;
    msg.time_idle_underwater = 0.639472455673294;
    msg.time_idle_unknown = 0.369589416711141;
    msg.time_motor_ground = 0.3449510982655911;
    msg.time_motor_air = 0.2102481269914942;
    msg.time_motor_water = 0.42509968734129533;
    msg.time_motor_underwater = 0.8499701518609876;
    msg.time_motor_unknown = 0.25760981075653244;
    msg.rpm_min = 27159;
    msg.rpm_max = 20157;
    msg.depth_max = 0.7151025799521336;

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
    msg.setTimeStamp(0.5671582901918625);
    msg.setSource(36728U);
    msg.setSourceEntity(0U);
    msg.setDestination(26516U);
    msg.setDestinationEntity(28U);
    msg.timestamp_last_service = 0.3081688795832688;
    msg.time_next_service = 0.9549529347058302;
    msg.time_motor_next_service = 0.6016989606297862;
    msg.time_idle_ground = 0.7577045998889359;
    msg.time_idle_air = 0.21636635425649609;
    msg.time_idle_water = 0.7429324621233386;
    msg.time_idle_underwater = 0.4889370190690572;
    msg.time_idle_unknown = 0.9837706874719222;
    msg.time_motor_ground = 0.5401858683374936;
    msg.time_motor_air = 0.5005943600103032;
    msg.time_motor_water = 0.43777233805502636;
    msg.time_motor_underwater = 0.80107923040886;
    msg.time_motor_unknown = 0.03970997668207199;
    msg.rpm_min = -24273;
    msg.rpm_max = -26817;
    msg.depth_max = 0.46308605665407065;

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
    msg.setTimeStamp(0.4601001561876198);
    msg.setSource(1844U);
    msg.setSourceEntity(1U);
    msg.setDestination(47840U);
    msg.setDestinationEntity(91U);
    msg.severity = 130U;
    msg.text.assign("TBDANKTHUEYYMPESFQILFVUJRTVBIHYOBTDHUUJPJSCALQHBZNMZYVSPEWXYIFMOQKUHGWARRJ");

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
    msg.setTimeStamp(0.46815107045416204);
    msg.setSource(15331U);
    msg.setSourceEntity(196U);
    msg.setDestination(4802U);
    msg.setDestinationEntity(124U);
    msg.severity = 14U;
    msg.text.assign("GWMLMWITMLUSSHWCVXBFRROBHMIRSIXYFHEWHWAFVFDWGB");

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
    msg.setTimeStamp(0.5316290462227208);
    msg.setSource(54536U);
    msg.setSourceEntity(108U);
    msg.setDestination(35557U);
    msg.setDestinationEntity(149U);
    msg.severity = 77U;
    msg.text.assign("UTWWZKHJEMTVCTURIUXQUYRQLSSIACTNGZIYGQCFXLTMARYXEJEBHYNTSYRBVXNVQKQOCECNXWRDKMZBDPFFWOVVKSUBSQLFLIERGMQBIPVKTVZXWMMDIRLHBYOKOWZG");

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
    msg.setTimeStamp(0.008640559704758854);
    msg.setSource(25311U);
    msg.setSourceEntity(15U);
    msg.setDestination(55893U);
    msg.setDestinationEntity(216U);
    msg.channel = -125;
    msg.value = -1711746957;
    msg.gain = 203U;

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
    msg.setTimeStamp(0.4518523278977845);
    msg.setSource(28833U);
    msg.setSourceEntity(92U);
    msg.setDestination(42071U);
    msg.setDestinationEntity(238U);
    msg.channel = 103;
    msg.value = 1468191140;
    msg.gain = 66U;

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
    msg.setTimeStamp(0.9012159247343772);
    msg.setSource(2879U);
    msg.setSourceEntity(127U);
    msg.setDestination(12754U);
    msg.setDestinationEntity(115U);
    msg.channel = 104;
    msg.value = 899730510;
    msg.gain = 39U;

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
    msg.setTimeStamp(0.7828219662708479);
    msg.setSource(64911U);
    msg.setSourceEntity(252U);
    msg.setDestination(9379U);
    msg.setDestinationEntity(54U);
    msg.ch01 = 0.6363904589772514;
    msg.ch02 = 0.6139855728821991;
    msg.ch03 = 0.12506788792321988;
    msg.ch04 = 0.6696361634967607;
    msg.ch05 = 0.7943369736199131;
    msg.ch06 = 0.5329043802861536;
    msg.ch07 = 0.27905703131550363;
    msg.ch08 = 0.8811827668665114;
    msg.ch09 = 0.9276236771428102;
    msg.ch10 = 0.09867478964233978;
    msg.ch11 = 0.8620448563810725;
    msg.ch12 = 0.886489485058457;
    msg.ch13 = 0.09407080638393606;
    msg.ch14 = 0.18768572542399287;
    msg.ch15 = 0.5095904542292479;
    msg.ch16 = 0.24065604842550958;

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
    msg.setTimeStamp(0.5723890648052119);
    msg.setSource(31683U);
    msg.setSourceEntity(201U);
    msg.setDestination(37741U);
    msg.setDestinationEntity(247U);
    msg.ch01 = 0.9262384634827359;
    msg.ch02 = 0.6405801203472663;
    msg.ch03 = 0.7772290729623454;
    msg.ch04 = 0.9563877330236258;
    msg.ch05 = 0.1890651026620378;
    msg.ch06 = 0.9302581057421329;
    msg.ch07 = 0.6347553941886309;
    msg.ch08 = 0.5174498006989293;
    msg.ch09 = 0.21280448416780362;
    msg.ch10 = 0.9436897740559965;
    msg.ch11 = 0.48773112598810653;
    msg.ch12 = 0.002998457087882711;
    msg.ch13 = 0.8266478626276407;
    msg.ch14 = 0.9213578694115823;
    msg.ch15 = 0.6110943242449173;
    msg.ch16 = 0.5776037363900052;

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
    msg.setTimeStamp(0.3782607381005856);
    msg.setSource(55987U);
    msg.setSourceEntity(183U);
    msg.setDestination(5261U);
    msg.setDestinationEntity(170U);
    msg.ch01 = 0.8601579902888952;
    msg.ch02 = 0.19681233921427133;
    msg.ch03 = 0.9919067076911341;
    msg.ch04 = 0.9976304530857604;
    msg.ch05 = 0.3782515612237838;
    msg.ch06 = 0.5841434216329165;
    msg.ch07 = 0.6690814014968549;
    msg.ch08 = 0.637513858228318;
    msg.ch09 = 0.09321814375251614;
    msg.ch10 = 0.9639690048904193;
    msg.ch11 = 0.47574243924150883;
    msg.ch12 = 0.08103006885402309;
    msg.ch13 = 0.736131233317212;
    msg.ch14 = 0.09303124345080915;
    msg.ch15 = 0.8257692643387761;
    msg.ch16 = 0.08203441352554308;

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
    IMC::HomePosition msg;
    msg.setTimeStamp(0.096542159884485);
    msg.setSource(7716U);
    msg.setSourceEntity(41U);
    msg.setDestination(12615U);
    msg.setDestinationEntity(87U);
    msg.op = 147U;
    msg.lat = 0.08784153409321815;
    msg.lon = 0.5329930176176738;
    msg.height = 0.5376786294382101;
    msg.depth = 0.7408951271800553;
    msg.alt = 0.9810362205341899;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.9499218379484223);
    msg.setSource(45606U);
    msg.setSourceEntity(45U);
    msg.setDestination(42519U);
    msg.setDestinationEntity(124U);
    msg.op = 207U;
    msg.lat = 0.2513310963905555;
    msg.lon = 0.24458087037699816;
    msg.height = 0.5694248604966109;
    msg.depth = 0.7241250292237651;
    msg.alt = 0.6218523679187038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.329135018041121);
    msg.setSource(64472U);
    msg.setSourceEntity(173U);
    msg.setDestination(48475U);
    msg.setDestinationEntity(131U);
    msg.op = 192U;
    msg.lat = 0.42191018193987084;
    msg.lon = 0.9076944316371167;
    msg.height = 0.9466106975052286;
    msg.depth = 0.601800642016748;
    msg.alt = 0.4133174135970368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.26855192138305084);
    msg.setSource(18980U);
    msg.setSourceEntity(137U);
    msg.setDestination(15781U);
    msg.setDestinationEntity(181U);
    msg.nbeams = 69U;
    msg.ncells = 84U;
    msg.coord_sys = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.7673153117276313);
    msg.setSource(32015U);
    msg.setSourceEntity(98U);
    msg.setDestination(46482U);
    msg.setDestinationEntity(16U);
    msg.nbeams = 190U;
    msg.ncells = 198U;
    msg.coord_sys = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.8649298690036671);
    msg.setSource(22020U);
    msg.setSourceEntity(249U);
    msg.setDestination(3132U);
    msg.setDestinationEntity(130U);
    msg.nbeams = 159U;
    msg.ncells = 150U;
    msg.coord_sys = 141U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.8424135411413486;
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.08460144493387423);
    msg.setSource(53377U);
    msg.setSourceEntity(234U);
    msg.setDestination(9199U);
    msg.setDestinationEntity(63U);
    msg.cell_position = 0.27571165959035515;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.3686651932929569;
    tmp_msg_0.amp = 0.6393818161502174;
    tmp_msg_0.cor = 20U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.5491465475942839);
    msg.setSource(18096U);
    msg.setSourceEntity(164U);
    msg.setDestination(58344U);
    msg.setDestinationEntity(66U);
    msg.cell_position = 0.05587165190617571;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.22331204968211749);
    msg.setSource(33908U);
    msg.setSourceEntity(243U);
    msg.setDestination(34700U);
    msg.setDestinationEntity(89U);
    msg.cell_position = 0.47594115214406907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.06459085716077761);
    msg.setSource(22748U);
    msg.setSourceEntity(58U);
    msg.setDestination(48387U);
    msg.setDestinationEntity(177U);
    msg.vel = 0.5708346422928611;
    msg.amp = 0.11179701475445092;
    msg.cor = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.32941622200161447);
    msg.setSource(59597U);
    msg.setSourceEntity(71U);
    msg.setDestination(4851U);
    msg.setDestinationEntity(88U);
    msg.vel = 0.27766451332175424;
    msg.amp = 0.012343587010996804;
    msg.cor = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.00770043055721259);
    msg.setSource(29941U);
    msg.setSourceEntity(114U);
    msg.setDestination(51714U);
    msg.setDestinationEntity(82U);
    msg.vel = 0.016450550572691625;
    msg.amp = 0.06105737096070718;
    msg.cor = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.33428667409858914);
    msg.setSource(61696U);
    msg.setSourceEntity(173U);
    msg.setDestination(22057U);
    msg.setDestinationEntity(73U);
    msg.name.assign("ZMOPBSJCZYUNKUYKEMGHNAMFZWYVHCIZQUBAIRCGQJYLJLOWSISRXBAGMMOECTTPDVQNNVUVXLDJHDFTNTQDKIVDIWLNDKYWHHRYGDROCVQPOTOMGWPFUUIGBDHJZPPLRLZBMVNRRJWEGJYIPXCPHAKEORAWWIBXIPQCOH");
    msg.value = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.6761577896563312);
    msg.setSource(4577U);
    msg.setSourceEntity(190U);
    msg.setDestination(20648U);
    msg.setDestinationEntity(186U);
    msg.name.assign("GRSTSHXGZORRPMBEHHMUJOEBWWWVSYTYRSGWDZLAAXKRKCFFFYDDJNZKDXYWGAPPEMDIXPTYCTTJGRWKR");
    msg.value = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.205198859591037);
    msg.setSource(54735U);
    msg.setSourceEntity(43U);
    msg.setDestination(6445U);
    msg.setDestinationEntity(188U);
    msg.name.assign("BCFEMOSUTKYXKIMCMLPLPOJQFDDYQAODIFHFPKBJPQXTZOVQAGOUPNMZQJOWIHENF");
    msg.value = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.14172966693561206);
    msg.setSource(41824U);
    msg.setSourceEntity(238U);
    msg.setDestination(21384U);
    msg.setDestinationEntity(126U);
    msg.name.assign("GNDYLQXRMKJEWCVFSXOOXWBCBEUIBUFDJCPULLMODOMVZRWAGGEJAETPKKOSGDYTMDXGYNTDPEAZRYRSXIUPJQNUNPPINZGOWJDSJCOUWIDEBSJOCXVBOTIQDXHRKNTHMKHRMARYHVQEGVXQKBNIZMCMLZDNAWPARAKCXINFL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.601743974007255);
    msg.setSource(22053U);
    msg.setSourceEntity(114U);
    msg.setDestination(26809U);
    msg.setDestinationEntity(185U);
    msg.name.assign("DMRDCWGOVBWOSZUZBCMFHAWKGJRBQZOBWIBAEKBTVUVHPEJUYNTAIAFFMNFPEWPFRRXKWFNNIHKNMJNUEGRJQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.8243953734736675);
    msg.setSource(28188U);
    msg.setSourceEntity(200U);
    msg.setDestination(30145U);
    msg.setDestinationEntity(82U);
    msg.name.assign("DXXYELGBQUJBUQXHYBOSQPPTFHKKUCDRFWNQPFPQMHDIXPMDBRNIBTTRSZTLWCZOOPFSUPGESTSHJJVREUQGVCNNBJZCRMQJDVXZTMKMOUJWNEKOVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.3746246520380201);
    msg.setSource(63745U);
    msg.setSourceEntity(104U);
    msg.setDestination(8797U);
    msg.setDestinationEntity(27U);
    msg.name.assign("JOCFYSLFUTPIBPMMFTUABLDFBOMZTONYLHJWCWLSWKLRSJXKNPAJKXTBGQSVZDCIETZNNHUPNAHTCIOIPCDNTSRGQMQJEBSVVHPHQGDCAENVYDKRIIHYHTA");
    msg.value = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.7998710855918643);
    msg.setSource(33024U);
    msg.setSourceEntity(95U);
    msg.setDestination(9676U);
    msg.setDestinationEntity(39U);
    msg.name.assign("RWEZRJKZSXDLGPIBMWXWXJKBBFGQZDYVUYQSAKTSSRBPEBDICFXYXGTTVQUHNNTNOCVUPRGHQJXQLGMZFMQALOCUVSMYEYAYCWMGJFHNPRHVPQNDAUIVWJNIJMXDIHWANRKCMCSDZVHHKGXJAAJXPULSGLKPEWRFLMHATBKITUEWISOBCVEYNMP");
    msg.value = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.6908732392928775);
    msg.setSource(53804U);
    msg.setSourceEntity(191U);
    msg.setDestination(9113U);
    msg.setDestinationEntity(91U);
    msg.name.assign("NHQDAXTGNQEZHRRQTOSZVKLCGVORVPRFALKYGZJAZQFZEWEFJYAMBZIJKUNAVYDOVMCKQWXGHQAQPYSXFZKCLWTBZBSKMJJARPFLZGNFGMOISLTSEWFUIYMVNWIVLUVAOFOXDJIRWPGHPLPQ");
    msg.value = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.8985886034963523);
    msg.setSource(20837U);
    msg.setSourceEntity(141U);
    msg.setDestination(25151U);
    msg.setDestinationEntity(82U);
    msg.value = 0.6447320923544774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.687531476275768);
    msg.setSource(22709U);
    msg.setSourceEntity(55U);
    msg.setDestination(23019U);
    msg.setDestinationEntity(103U);
    msg.value = 0.7476027088059185;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.9695643701737638);
    msg.setSource(12849U);
    msg.setSourceEntity(167U);
    msg.setDestination(36159U);
    msg.setDestinationEntity(150U);
    msg.value = 0.5571993903693487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.4022938705869845);
    msg.setSource(1720U);
    msg.setSourceEntity(216U);
    msg.setDestination(25120U);
    msg.setDestinationEntity(253U);
    msg.value = 0.6118402147527247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.2447891120184439);
    msg.setSource(23660U);
    msg.setSourceEntity(16U);
    msg.setDestination(54544U);
    msg.setDestinationEntity(138U);
    msg.value = 0.09615503193478092;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.6758597646035727);
    msg.setSource(25498U);
    msg.setSourceEntity(40U);
    msg.setDestination(57795U);
    msg.setDestinationEntity(226U);
    msg.value = 0.6349557875187383;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7147371840361615);
    msg.setSource(55653U);
    msg.setSourceEntity(45U);
    msg.setDestination(12626U);
    msg.setDestinationEntity(218U);
    msg.value = 0.06537934107935084;

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
    msg.setTimeStamp(0.6671531666176239);
    msg.setSource(15904U);
    msg.setSourceEntity(84U);
    msg.setDestination(44635U);
    msg.setDestinationEntity(151U);
    msg.value = 0.11264854861016849;

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
    msg.setTimeStamp(0.40919060060864476);
    msg.setSource(7713U);
    msg.setSourceEntity(60U);
    msg.setDestination(20352U);
    msg.setDestinationEntity(35U);
    msg.value = 0.557852875094219;

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

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.3211072856293624);
    msg.setSource(44106U);
    msg.setSourceEntity(66U);
    msg.setDestination(21446U);
    msg.setDestinationEntity(50U);
    msg.restriction = 164U;
    msg.reason.assign("RQSSOPUYACOYZVFWRHDEXCKSSGCWAWZZRJBQPYUOHLJMAYRBXKZDJRBIGJEBYVAKZNMUGKCDFWRKDCDQPPULLPIERFJKXHLEZTKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.9158294849716929);
    msg.setSource(25090U);
    msg.setSourceEntity(208U);
    msg.setDestination(61486U);
    msg.setDestinationEntity(193U);
    msg.restriction = 172U;
    msg.reason.assign("FYJBWYZKUEXKIPSGNBDIXMYEQGWPMXLUPOABJEMOFDCQMRDCNCBTKESOJQBDBILXSGSUPZDOAQTNZYYJKMJAMVSHMERLASQULATRSJMNNKEKTWRVRIOHNZHEWXCFQPXVYULZFDTVPSWXUWHXSFRMVBBGZCQZAFLULHHHUNMAJGTCPWIORVGTFAFCVKBFOQZEUOPJFCYRICTPDGLVKIRHWXGJONXJBDPIANKAGVCQQGIDHYDYUIWE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.18975113284577938);
    msg.setSource(10414U);
    msg.setSourceEntity(204U);
    msg.setDestination(15943U);
    msg.setDestinationEntity(213U);
    msg.restriction = 59U;
    msg.reason.assign("KIPOTEUOJZEWZOROFKDGYLXODVZXHZTNYDOAWKRVHDXOFQIPLWSETLPKIRTSMEDVMVRKCAPBQTNKFLHESGNIUMATIRASILYCFQMKJKXVVFAAEZQGFBURUVFRGYOZEJPMHGCHJUWOHTSCBFBXGJULRPTJIBMWIHJVLPYNHVGMZWHWNSZIQYAYMBSXSWSDBUCIBJSUJLNJDRXQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3665709012741081);
    msg.setSource(10963U);
    msg.setSourceEntity(187U);
    msg.setDestination(16703U);
    msg.setDestinationEntity(129U);
    msg.type = 89U;

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
    msg.setTimeStamp(0.665199762973825);
    msg.setSource(51657U);
    msg.setSourceEntity(153U);
    msg.setDestination(6996U);
    msg.setDestinationEntity(20U);
    msg.type = 139U;

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
    msg.setTimeStamp(0.7202460890626705);
    msg.setSource(1192U);
    msg.setSourceEntity(131U);
    msg.setDestination(30735U);
    msg.setDestinationEntity(203U);
    msg.type = 19U;

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
    IMC::Scalar msg;
    msg.setTimeStamp(0.1437859661248415);
    msg.setSource(34895U);
    msg.setSourceEntity(125U);
    msg.setDestination(33646U);
    msg.setDestinationEntity(39U);
    msg.value = 0.18277016434885107;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Scalar #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Scalar msg;
    msg.setTimeStamp(0.15207610324772503);
    msg.setSource(55727U);
    msg.setSourceEntity(78U);
    msg.setDestination(3724U);
    msg.setDestinationEntity(85U);
    msg.value = 0.36919411855682327;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Scalar #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Scalar msg;
    msg.setTimeStamp(0.35191083773235066);
    msg.setSource(2333U);
    msg.setSourceEntity(220U);
    msg.setDestination(27596U);
    msg.setDestinationEntity(177U);
    msg.value = 0.8055591860834289;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Scalar #2", msg == *msg_d);
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
