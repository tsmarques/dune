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
// IMC XML MD5: b591a5cb787735a9548494ef95065bdf                            *
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
    msg.setTimeStamp(0.7403466129042582);
    msg.setSource(63528U);
    msg.setSourceEntity(5U);
    msg.setDestination(52418U);
    msg.setDestinationEntity(155U);
    msg.state = 58U;
    msg.flags = 126U;
    msg.description.assign("PWCJVDBMKJQNYSUOHEJUBRPELNMJLWZEIQHDQIFMTNNULTBQWHKZUOLMTUCYWDXCAFPGEODJKAOGSXFJGLTFXQNLQYJXVNPKGSKCHPLNBTDNTZFXIXZJOUPOEIVYSUHAHNIERMTOVRLDFGWCMMARFKXJYYSVIXLRHBZPEGBQKS");

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
    msg.setTimeStamp(0.06977057025471578);
    msg.setSource(47417U);
    msg.setSourceEntity(86U);
    msg.setDestination(59204U);
    msg.setDestinationEntity(181U);
    msg.state = 171U;
    msg.flags = 113U;
    msg.description.assign("JLGHHGWRHUPBASLCWMBGYRSNXPYXJUAZNAIXVQAGVABNMCMBKDOWTEDYKXRBUNXRRKNTAZUZJWXZMDWSDILTIDAKYQCCVANZEXIHTJJQJTSUEFGMIRDIIWBDJSNVCDQQDCXTKDJZWKLVXRFVPLIZHOBTJLSLBQZPCEOQGMOSPVOSFOHECZUPKCISNFPHYQBRJRWGPHBEVYYZFPGMLTUTFGRKWEAUKVXNOHFLQ");

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
    msg.setTimeStamp(0.3608987655292788);
    msg.setSource(31751U);
    msg.setSourceEntity(152U);
    msg.setDestination(33369U);
    msg.setDestinationEntity(21U);
    msg.state = 163U;
    msg.flags = 94U;
    msg.description.assign("ILRJKDLMKZNMTFFETSPOAKFPWBHWEGOQNITJYGLQXJLIIIBHAIBMVUCSUHYEVQOXFLIXMWWEDDJQEGTPTXZTVBSEWSGYNJGYRBCWAPASCIOJXPMYSRKGPAHYSPPLBYOADPAXLGFSAMECKKACUNABFCLVNRDQQZNJHFQZOJCCEKMZHTSYRHUUDFRCBWIJONHMXWZJDXXDEDBFVSOVQVGZKWBVU");

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
    msg.setTimeStamp(0.47068497214618965);
    msg.setSource(14446U);
    msg.setSourceEntity(126U);
    msg.setDestination(56145U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.6940382555921552);
    msg.setSource(1394U);
    msg.setSourceEntity(214U);
    msg.setDestination(42099U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.40942952652207554);
    msg.setSource(29606U);
    msg.setSourceEntity(211U);
    msg.setDestination(24754U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.25026268829921516);
    msg.setSource(62433U);
    msg.setSourceEntity(102U);
    msg.setDestination(9938U);
    msg.setDestinationEntity(64U);
    msg.id = 136U;
    msg.label.assign("XDMJQXXIXNCCFQAOOSSVJXDDSPKRQWBVOQGOMOLWRIUGTXLYFYTPPEUCMA");
    msg.component.assign("DANXFRLCHOQBBXOQQYYGVFDGKIUZNQIRUFTFMABKRUSKGMEXKYNIDANRZJJZHFTEDWHPZGDZAPJGVTHSXEOPALKJHJMZCCKEKYYEJDYWWIOGYLIPKQMNVXYCVXFSWSZQWON");
    msg.act_time = 27417U;
    msg.deact_time = 56451U;

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
    msg.setTimeStamp(0.06248150654984075);
    msg.setSource(22123U);
    msg.setSourceEntity(253U);
    msg.setDestination(24685U);
    msg.setDestinationEntity(140U);
    msg.id = 79U;
    msg.label.assign("EWRSCBVYNQURDSXBWIFAZHXUABJJUPQCUZVLYUGDCZAETCLLHBMFGJUGEPAGHONWKOIKPQGFPHVKBYJCRFRMCZASJINXDTWKSEODJVMZPIIODVEMGYMODLOLYVSFTXSYQKAIDTZW");
    msg.component.assign("LGQRLEOBTOYMMUNKRIHCODYFVSELDFHZFIOAPEFZQPARJSQJTNWDOVEAGKGYNWBCWIOQJTMELZPNKEJRWOBCIHHWLZZFGZXZQVCMNCJZYYCRLXIKVRPUIRMBXUMLLTAUEBTBPTNFSJNRDHURCYSIGPYHQMKWCDAIAXQSGOBDGVDDSHHNMNBXUGEUUMZKOZVDGFXUJOATJBCPHWTGSVEAWVNYIQWWP");
    msg.act_time = 64895U;
    msg.deact_time = 56877U;

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
    msg.setTimeStamp(0.7656056129332607);
    msg.setSource(48591U);
    msg.setSourceEntity(39U);
    msg.setDestination(36521U);
    msg.setDestinationEntity(107U);
    msg.id = 254U;
    msg.label.assign("UWQKKLTHQHGJPRMIAIGZWQBLFNOTVGRRXM");
    msg.component.assign("CLADIEFFWKGETITYHBFZZHMGBQNWXDUCRSILRLLHBNGIA");
    msg.act_time = 31557U;
    msg.deact_time = 11923U;

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
    msg.setTimeStamp(0.002873075595613339);
    msg.setSource(52891U);
    msg.setSourceEntity(69U);
    msg.setDestination(39426U);
    msg.setDestinationEntity(157U);
    msg.id = 11U;

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
    msg.setTimeStamp(0.19529045570415737);
    msg.setSource(1358U);
    msg.setSourceEntity(80U);
    msg.setDestination(37613U);
    msg.setDestinationEntity(60U);
    msg.id = 230U;

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
    msg.setTimeStamp(0.5453499585182755);
    msg.setSource(32764U);
    msg.setSourceEntity(224U);
    msg.setDestination(31692U);
    msg.setDestinationEntity(30U);
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
    msg.setTimeStamp(0.1611131386250042);
    msg.setSource(7668U);
    msg.setSourceEntity(226U);
    msg.setDestination(41270U);
    msg.setDestinationEntity(23U);
    msg.op = 97U;
    msg.list.assign("ASIWAEAJPSJWMIQFFWWXFJSHOPYTOIQZXHTIKBEHBLKPX");

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
    msg.setTimeStamp(0.9586959248414698);
    msg.setSource(11734U);
    msg.setSourceEntity(60U);
    msg.setDestination(27005U);
    msg.setDestinationEntity(169U);
    msg.op = 191U;
    msg.list.assign("RHJCBQRSWOHKIKNTOFNZIGPWYQMOBFLNDBWKSYXOESRMHMIYHNKEQHGEICSCVOTVJVMSZXUVGXQFNHCIZPHJJVAZGLTUPJSDOFRGUMONHJCMYTIWPRSAKUFNAZLWIVLIE");

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
    msg.setTimeStamp(0.3371694412270775);
    msg.setSource(34459U);
    msg.setSourceEntity(138U);
    msg.setDestination(63030U);
    msg.setDestinationEntity(16U);
    msg.op = 39U;
    msg.list.assign("PBULTURAYDJNVUPLRTQPKBQFSMDWHKQOONIEDJBCRXPSZYIIEGFRCUGYZTOIXXBVEJNDONX");

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
    msg.setTimeStamp(0.4458267652745669);
    msg.setSource(55459U);
    msg.setSourceEntity(243U);
    msg.setDestination(14282U);
    msg.setDestinationEntity(244U);
    msg.value = 231U;

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
    msg.setTimeStamp(0.25892655116082064);
    msg.setSource(31341U);
    msg.setSourceEntity(6U);
    msg.setDestination(63635U);
    msg.setDestinationEntity(14U);
    msg.value = 40U;

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
    msg.setTimeStamp(0.6059727147759261);
    msg.setSource(15824U);
    msg.setSourceEntity(117U);
    msg.setDestination(7232U);
    msg.setDestinationEntity(233U);
    msg.value = 93U;

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
    msg.setTimeStamp(0.3125441211499014);
    msg.setSource(44445U);
    msg.setSourceEntity(17U);
    msg.setDestination(35410U);
    msg.setDestinationEntity(235U);
    msg.consumer.assign("URJKJLFNBBMPJTVUYMFJTRZGROWGVMSIOOLVYGXMKBQZYAEMDXMGHQHIBURIPKWXXOFQLWCEUPWXPCETCUKVHYRPXOGVNSOFTDWGNVQAHZQXFCVSPSLXEUZBQQOLJASNBJOWVYFSNQFIDHUPPAKIKBNLXJSHRMLEVZXJHTUTWYAMSGEAITLKDYSDDBYMVNHDYJDBTWIDRZARUWZIOCNT");
    msg.message_id = 3721U;

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
    msg.setTimeStamp(0.12823915381743745);
    msg.setSource(28303U);
    msg.setSourceEntity(229U);
    msg.setDestination(5443U);
    msg.setDestinationEntity(208U);
    msg.consumer.assign("AHMVSJUWVQTXBXAVYIZVUXGXBFGRVJSEWEP");
    msg.message_id = 44931U;

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
    msg.setTimeStamp(0.620656908649249);
    msg.setSource(59960U);
    msg.setSourceEntity(27U);
    msg.setDestination(55521U);
    msg.setDestinationEntity(108U);
    msg.consumer.assign("BEKWBSCHDQSTUJNXAROWAGBYRFGXULKHUYTCDPSUCHMOORXMNFPVDZVLREHDVKCLJYPLJBKXZIRBIQZCGKCTCNAVQLBLAQKVPOPZYWIYWTEZQUYPZCBTOBIMLWV");
    msg.message_id = 38974U;

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
    msg.setTimeStamp(0.6557096524142294);
    msg.setSource(35558U);
    msg.setSourceEntity(116U);
    msg.setDestination(16944U);
    msg.setDestinationEntity(68U);
    msg.type = 69U;

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
    msg.setTimeStamp(0.19897018802021338);
    msg.setSource(55114U);
    msg.setSourceEntity(10U);
    msg.setDestination(41680U);
    msg.setDestinationEntity(219U);
    msg.type = 158U;

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
    msg.setTimeStamp(0.5535180439074249);
    msg.setSource(36703U);
    msg.setSourceEntity(6U);
    msg.setDestination(56925U);
    msg.setDestinationEntity(10U);
    msg.type = 98U;

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
    msg.setTimeStamp(0.2128947674006807);
    msg.setSource(17748U);
    msg.setSourceEntity(99U);
    msg.setDestination(25045U);
    msg.setDestinationEntity(217U);
    msg.op = 117U;

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
    msg.setTimeStamp(0.5643110653992527);
    msg.setSource(6185U);
    msg.setSourceEntity(12U);
    msg.setDestination(36153U);
    msg.setDestinationEntity(145U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.6939331850031044);
    msg.setSource(54333U);
    msg.setSourceEntity(157U);
    msg.setDestination(40433U);
    msg.setDestinationEntity(81U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.9157812346697617);
    msg.setSource(19422U);
    msg.setSourceEntity(18U);
    msg.setDestination(1966U);
    msg.setDestinationEntity(244U);
    msg.total_steps = 186U;
    msg.step_number = 104U;
    msg.step.assign("NJQLWZIPKDCCHVBRMWDZAGPNOTUCQTWFXLMFVKHUIQXEGHYTUSXFXTZZIVYRFPQDWRGSOJKIJQMQEITDXRTBBMAISVODCRIAMCJJUXFXNREVXBEGWYMBSREDIGTZKFYLHNZPYVOGJVSHLKUHWSQULBBKGJAVRUXJDHNDEHVGNMNZSMAHPOBAIQKOYPLHQWAAANEFXCROCCWTPLZROOKYYYLFC");
    msg.flags = 237U;

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
    msg.setTimeStamp(0.7622808950281522);
    msg.setSource(51770U);
    msg.setSourceEntity(171U);
    msg.setDestination(2268U);
    msg.setDestinationEntity(154U);
    msg.total_steps = 12U;
    msg.step_number = 170U;
    msg.step.assign("SIYHOKVCMIXOXVWFWWCKFAPTGDCBNITCYMEDUNNLAEDNDFBFEBOKTRUCWZSJKDSCZSRTJYPYPXPWQLEQUYCCVZJSCYZSOOFILEUVBJYKGFAROLRJTNWPVKOLAXANGHMXINGIVMNJIBLAQERMMRWWVQZHPCLUTFQAIYESQBGGKZRFFHWSSWOIKJJUIPYSJHRYKTEODXLPDVZAXUBZNQUHBU");
    msg.flags = 178U;

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
    msg.setTimeStamp(0.1864783240192054);
    msg.setSource(43009U);
    msg.setSourceEntity(216U);
    msg.setDestination(44140U);
    msg.setDestinationEntity(47U);
    msg.total_steps = 189U;
    msg.step_number = 244U;
    msg.step.assign("WMYSXIGHGJJOBZGMJBVQQLDUKNQ");
    msg.flags = 26U;

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
    msg.setTimeStamp(0.5627713656416874);
    msg.setSource(40882U);
    msg.setSourceEntity(47U);
    msg.setDestination(11948U);
    msg.setDestinationEntity(75U);
    msg.state = 222U;
    msg.error.assign("YXCUCPZQTUJWJMXPZACDKSZQKHEHHFMLRWFUTJUEGGJTZBUONINHVALHPGHXDMMYNCEVRSVDSDJDHQFQSTZERMNJFYXNWPTCVQRBSMALNLMSQUTEAUAYWREOOGHFSHMPXIHIAYSVPLVJOUDNXKYOARCJGDVYOKWDCLKSQUGYLEZAFZYENKVBQINLXGRGJXIFPWGJLRQAKXIGBIVKETIWCRNFOZDTBIWBXTTEOBBZFWPCAVPOLBFDQK");

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
    msg.setTimeStamp(0.43965375171134047);
    msg.setSource(10113U);
    msg.setSourceEntity(0U);
    msg.setDestination(11939U);
    msg.setDestinationEntity(18U);
    msg.state = 187U;
    msg.error.assign("IMEQACOOZKAFFPWWEGMCTNHSIHWSDYYHWBWSGPBRJUIQUZUXTSDBAVCFJRENBKLEBUEOLNRGBOTRTGWSGCIXOQIQDZFJZZVFVUHFIZKNCVOIJYZIMOVUBHVFATNYLXJSRKARLKBYAUAJXMVZLQQUGNDQQPEPYEXYTJLDIPWHMONFCDKQPJHXTLYAKWXXYRZZPWKTUGCSFMD");

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
    msg.setTimeStamp(0.41295218137935186);
    msg.setSource(26285U);
    msg.setSourceEntity(151U);
    msg.setDestination(2686U);
    msg.setDestinationEntity(98U);
    msg.state = 56U;
    msg.error.assign("TTFRWLSONFICEUFSLAJORAGXAUNAQHYYSCQAUEMMMCNNGAQETGBBSPZDIXSMQNBHIOWCLBBREDIYKHLMUJCHAIVVVFTHTJOERWUWIAWRGFQYQFZZVFHHGLKQMDDLVQEWPUWHIMYZYCKKYPNXJEQDKVOGOFJNPUBRJBEFTRMVNEWDDXNATUKUPIPZZOUY");

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
    msg.setTimeStamp(0.3052395686318333);
    msg.setSource(38686U);
    msg.setSourceEntity(247U);
    msg.setDestination(44521U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.6436480606816338);
    msg.setSource(9184U);
    msg.setSourceEntity(215U);
    msg.setDestination(942U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.7523831017509249);
    msg.setSource(49895U);
    msg.setSourceEntity(133U);
    msg.setDestination(41744U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.2895030038389559);
    msg.setSource(18162U);
    msg.setSourceEntity(74U);
    msg.setDestination(13489U);
    msg.setDestinationEntity(107U);
    msg.op = 29U;
    msg.speed_min = 0.4773186323252464;
    msg.speed_max = 0.2969859531306691;
    msg.long_accel = 0.5026627197506028;
    msg.alt_max_msl = 0.855231546067838;
    msg.dive_fraction_max = 0.30229901356947075;
    msg.climb_fraction_max = 0.7417036928048274;
    msg.bank_max = 0.43108687947648405;
    msg.p_max = 0.7699344105333379;
    msg.pitch_min = 0.7591718343993654;
    msg.pitch_max = 0.1064278428587292;
    msg.q_max = 0.28976975215942125;
    msg.g_min = 0.2833880591917025;
    msg.g_max = 0.8425750353314938;
    msg.g_lat_max = 0.8262071636598363;
    msg.rpm_min = 0.3801702119626498;
    msg.rpm_max = 0.9149815987588754;
    msg.rpm_rate_max = 0.46142458177249235;

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
    msg.setTimeStamp(0.6482263165633713);
    msg.setSource(58562U);
    msg.setSourceEntity(11U);
    msg.setDestination(2966U);
    msg.setDestinationEntity(158U);
    msg.op = 117U;
    msg.speed_min = 0.40086251737316736;
    msg.speed_max = 0.42665363381077137;
    msg.long_accel = 0.33710344901467015;
    msg.alt_max_msl = 0.18560026696985354;
    msg.dive_fraction_max = 0.9184414906709598;
    msg.climb_fraction_max = 0.11250545253923672;
    msg.bank_max = 0.06238685512117115;
    msg.p_max = 0.7327930033382711;
    msg.pitch_min = 0.17413527950568142;
    msg.pitch_max = 0.4046927431187597;
    msg.q_max = 0.8038822420373404;
    msg.g_min = 0.7754644334546793;
    msg.g_max = 0.3978949728167799;
    msg.g_lat_max = 0.5599516750801031;
    msg.rpm_min = 0.2901684280084531;
    msg.rpm_max = 0.7838343496374377;
    msg.rpm_rate_max = 0.7150352774296865;

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
    msg.setTimeStamp(0.2825293080905408);
    msg.setSource(2402U);
    msg.setSourceEntity(103U);
    msg.setDestination(20770U);
    msg.setDestinationEntity(213U);
    msg.op = 201U;
    msg.speed_min = 0.4251749727993137;
    msg.speed_max = 0.6440001657097179;
    msg.long_accel = 0.33899019910347883;
    msg.alt_max_msl = 0.32919635203641107;
    msg.dive_fraction_max = 0.49167043979487;
    msg.climb_fraction_max = 0.6498748983807816;
    msg.bank_max = 0.5609318198196427;
    msg.p_max = 0.5524155917434965;
    msg.pitch_min = 0.32367037203705484;
    msg.pitch_max = 0.4108298831936603;
    msg.q_max = 0.565838145720239;
    msg.g_min = 0.7727607180235341;
    msg.g_max = 0.2655891577835241;
    msg.g_lat_max = 0.6341377329482694;
    msg.rpm_min = 0.6889495182949514;
    msg.rpm_max = 0.5918036973567329;
    msg.rpm_rate_max = 0.12520484970706092;

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
    msg.setTimeStamp(0.9546151965903599);
    msg.setSource(24758U);
    msg.setSourceEntity(137U);
    msg.setDestination(29516U);
    msg.setDestinationEntity(153U);
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 77U;
    tmp_msg_0.value = 0.36379120716042757;
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
    msg.setTimeStamp(0.1095379896584);
    msg.setSource(38578U);
    msg.setSourceEntity(61U);
    msg.setDestination(56241U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.766720222819076);
    msg.setSource(52609U);
    msg.setSourceEntity(199U);
    msg.setDestination(41800U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.5168846221081886);
    msg.setSource(28157U);
    msg.setSourceEntity(222U);
    msg.setDestination(54709U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.44705820120132855;
    msg.lon = 0.012781288043292927;
    msg.height = 0.8408581655674128;
    msg.x = 0.30545686794141713;
    msg.y = 0.9711426861876111;
    msg.z = 0.9113723613581913;
    msg.phi = 0.7787234178683056;
    msg.theta = 0.12810722600953872;
    msg.psi = 0.5563685818788375;
    msg.u = 0.39750491579724423;
    msg.v = 0.16448262000354752;
    msg.w = 0.26084752651659227;
    msg.p = 0.44942084473000643;
    msg.q = 0.5594520097672515;
    msg.r = 0.40292749676344664;
    msg.svx = 0.15778420102178803;
    msg.svy = 0.5468562712083018;
    msg.svz = 0.1148123685677519;

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
    msg.setTimeStamp(0.4862946687471027);
    msg.setSource(13982U);
    msg.setSourceEntity(188U);
    msg.setDestination(26253U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.7582912496774594;
    msg.lon = 0.6004887953388222;
    msg.height = 0.4738383155072543;
    msg.x = 0.8479730402313189;
    msg.y = 0.108206906559417;
    msg.z = 0.023628074859850745;
    msg.phi = 0.8506766205973875;
    msg.theta = 0.189411321739143;
    msg.psi = 0.2177739309413539;
    msg.u = 0.880198245579921;
    msg.v = 0.3911733951365459;
    msg.w = 0.4102263055849519;
    msg.p = 0.8736485448696609;
    msg.q = 0.19263953251875665;
    msg.r = 0.016485696694475527;
    msg.svx = 0.01788981460304695;
    msg.svy = 0.7014054623767579;
    msg.svz = 0.01384598091724698;

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
    msg.setTimeStamp(0.04825345979545759);
    msg.setSource(1678U);
    msg.setSourceEntity(127U);
    msg.setDestination(56845U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.6423024310479274;
    msg.lon = 0.02946122310875543;
    msg.height = 0.38686495804097465;
    msg.x = 0.5927350215890289;
    msg.y = 0.2140612934884194;
    msg.z = 0.08488126391342865;
    msg.phi = 0.19835004362204922;
    msg.theta = 0.038882039830829274;
    msg.psi = 0.7234374142301211;
    msg.u = 0.481861440939352;
    msg.v = 0.4082627696876914;
    msg.w = 0.8697417662543374;
    msg.p = 0.832081212428061;
    msg.q = 0.8065290152350415;
    msg.r = 0.4949898795959532;
    msg.svx = 0.5392194324938077;
    msg.svy = 0.2429518631581663;
    msg.svz = 0.5799091772423635;

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
    msg.setTimeStamp(0.8349401331243974);
    msg.setSource(11704U);
    msg.setSourceEntity(172U);
    msg.setDestination(54259U);
    msg.setDestinationEntity(26U);
    msg.op = 61U;
    msg.entities.assign("SCLZEZNZKBGSXVJAUTATQLBGARAOODPXJDLQRMAIPCRLYMELNXNHFFMWTWOCESXLSLCEDIYZYDRWHCPLKCQUPANPEEKQSXKBJTUNAIZHTBRGWDNIRVYXVOBJRQLTDGQKFNXGZIUSQPQZCWMESHWYRVINVOSYDJZXMNGMBFWXDFTCQAJKCZTHIVPLHOEFJAVMHRFMOYUSBSYBWIUTI");

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
    msg.setTimeStamp(0.10745752417793097);
    msg.setSource(21166U);
    msg.setSourceEntity(254U);
    msg.setDestination(14051U);
    msg.setDestinationEntity(170U);
    msg.op = 129U;
    msg.entities.assign("EHBREECFUPQ");

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
    msg.setTimeStamp(0.8872122629336847);
    msg.setSource(61495U);
    msg.setSourceEntity(29U);
    msg.setDestination(34851U);
    msg.setDestinationEntity(58U);
    msg.op = 80U;
    msg.entities.assign("GBYSTMAWVIAORYVRPYFFIZEYMQXVHYNBGBXJQFMIWPYVDIUSPLNNWLIDLOMWQSAOOTNTRRMNERKNZYPHWTCUPDMCQDTBECXECAFOZFRDBJTIXHPXVCRLKKGRTSQXXWIZAJJYYPX");

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
    msg.setTimeStamp(0.14078344820665545);
    msg.setSource(21124U);
    msg.setSourceEntity(238U);
    msg.setDestination(26896U);
    msg.setDestinationEntity(18U);
    msg.type = 115U;
    msg.speed = 40138U;
    const char tmp_msg_0[] = {113, 56, 94, -99, 95, -93, -24, -123, -47, 60, -34, -119, -1, -28, -29, -107, 71, 92, -70, 39, 81, -14, 35, 40, -94, 23, -42, -15, 67, 7, -95, -60, 85, 73, -93, -13, 65, 70, 9, -41, 74, 12, 61, 120, -98, -16, -25, -53, 123, 81, -83, 117, -19, 117, 116, -105, -8, 95, -127, 65, 87, 72, 12, 17, 57, -74, -71, 85, -32, 37, 83, 114, -48, -104, -115, -116, -7, -112, -15, -45, -55, 80, -12, 23, -48, 32, 37, -21, -25, 66, -53, -26, -64, 66, -119, -123, -91, 78, 53, -84, -12, 79, 108, 48, 79, -70, 45, -89, 33, 53, 84, -84, 120, -124, -115, -125, -76, 59, -96, 1, 18, 104, 73, 110, 71, -17, -44, 105, 87, -95, 114, 82, -78, 66, -25, -97, 17, -54, -95, -115, -15, -103, 99, 108, 87, -78, 25, 103, 25, 123, 88, 62, 12, -118};
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
    msg.setTimeStamp(0.800371709824423);
    msg.setSource(64639U);
    msg.setSourceEntity(239U);
    msg.setDestination(136U);
    msg.setDestinationEntity(188U);
    msg.type = 252U;
    msg.speed = 40714U;
    const char tmp_msg_0[] = {-19, 73, -115, -19, 95, 110, -72, -85, 46, -30, 47, -58, -102, -94, 53, -7, -56, 20, -76, -114, 63, -80, -13, -77, 71, -96, -1, 0, 49, 92, 82, 63, 32, -57, 109, 20, 108, 80, 68, 61, -69, 66, 68, -14, -7, 78, -43, -42, 57, -58, -27, -126, -128, 45, -59, -30, -15, 13, -95, -69, -67, -32, 83, 113, 112, 70, -86, -118, -111, 29, -106, -84, -79, 63, -52, -68, 71, 84, -29, 94, 110, -26, 18, -7, -30, 119, 97, 112, -79, -7, -8, 84, -7, -89, -86, 94, -14, -99, 58, -21};
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
    msg.setTimeStamp(0.35339319532052194);
    msg.setSource(47538U);
    msg.setSourceEntity(216U);
    msg.setDestination(53512U);
    msg.setDestinationEntity(192U);
    msg.type = 194U;
    msg.speed = 59793U;
    const char tmp_msg_0[] = {48, -35, -70, 47, -114, 76, 16, -109, 21, -71, 109, 68, 65, -78, -103, -128, -56, -121, -53, 124, -44, -40, -28, -41, 76, -28, -46, -19, 79, -9, -4, -53, -40, -32, -113, 6, 4, -37, -16, 44, 31, 93, 60, 119, 65, 58, 83, 16, 2, -47, -92, 19, 48, -69, 103, -47, -94, 101, 118, 26, 15, -70, 0, -11, -128, -27, -59, -86, -20, 32, -110, 69, 0, 19, 9, -74, -40, -91, 57, -16, -28, -13, -78, 54, -25, 49, 112, -50, -9, 22, 67, -40, 73, -44, 123, 126, -3, 16, 36, -126, -116, -107, -8, -77, -7, -47, 85, 83, 55, -90, 118, 75};
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
    msg.setTimeStamp(0.6670268904083905);
    msg.setSource(51133U);
    msg.setSourceEntity(146U);
    msg.setDestination(57839U);
    msg.setDestinationEntity(223U);
    msg.op = 70U;
    msg.tas2acc_pgain = 0.6901575639342872;
    msg.bank2p_pgain = 0.6344635885006642;

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
    msg.setTimeStamp(0.2813065013849164);
    msg.setSource(6203U);
    msg.setSourceEntity(219U);
    msg.setDestination(43348U);
    msg.setDestinationEntity(232U);
    msg.op = 118U;
    msg.tas2acc_pgain = 0.7640044650886839;
    msg.bank2p_pgain = 0.8256874739213791;

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
    msg.setTimeStamp(0.052508631947657536);
    msg.setSource(19796U);
    msg.setSourceEntity(134U);
    msg.setDestination(10146U);
    msg.setDestinationEntity(151U);
    msg.op = 204U;
    msg.tas2acc_pgain = 0.49449945404589;
    msg.bank2p_pgain = 0.39472381129139644;

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
    msg.setTimeStamp(0.29115766657638675);
    msg.setSource(25660U);
    msg.setSourceEntity(224U);
    msg.setDestination(34950U);
    msg.setDestinationEntity(185U);
    msg.available = 1899117288U;
    msg.value = 196U;

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
    msg.setTimeStamp(0.7219070643128663);
    msg.setSource(33759U);
    msg.setSourceEntity(222U);
    msg.setDestination(44069U);
    msg.setDestinationEntity(6U);
    msg.available = 112458223U;
    msg.value = 107U;

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
    msg.setTimeStamp(0.9702789704618892);
    msg.setSource(63361U);
    msg.setSourceEntity(83U);
    msg.setDestination(4778U);
    msg.setDestinationEntity(199U);
    msg.available = 1402115132U;
    msg.value = 92U;

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
    msg.setTimeStamp(0.06172585177099277);
    msg.setSource(46425U);
    msg.setSourceEntity(79U);
    msg.setDestination(57882U);
    msg.setDestinationEntity(113U);
    msg.op = 242U;
    msg.snapshot.assign("FMZFBAXOENGNTDTXSDCHRPPMHUENMYLZJSSMSTFEPTODIWQCNYIUUADWODRTWLFOHZMYHIDUTFMPUGNSQBVCERYYCAXOVXSBIEILQIXBAYPHFVEZHRCOMAFHDSKWNWRXYGPCJQFVFJCXKJMXQBGXKPLGPQZGYSITRBNCELLCFBGVDN");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 28692U;
    tmp_msg_0.lat = 0.1564226161845378;
    tmp_msg_0.lon = 0.446673663734503;
    tmp_msg_0.z = 0.2912053765232956;
    tmp_msg_0.z_units = 199U;
    tmp_msg_0.amplitude = 0.10969711308537944;
    tmp_msg_0.pitch = 0.6900790617636542;
    tmp_msg_0.speed = 0.060480688139637806;
    tmp_msg_0.speed_units = 105U;
    tmp_msg_0.custom.assign("KGIUEPYFRWAVNSWHVHACGABUNHCLGLEKVUTEDMELGEMBRPKWOBRZDVEAMUPDBQIGRXVWDRCYCMZBFPTASOVYMYL");
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
    msg.setTimeStamp(0.6363619008327002);
    msg.setSource(41261U);
    msg.setSourceEntity(111U);
    msg.setDestination(25048U);
    msg.setDestinationEntity(181U);
    msg.op = 173U;
    msg.snapshot.assign("HPBRACBROKQJRZYDA");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.5931920658111164;
    tmp_msg_0.v = 0.11341041407398134;
    tmp_msg_0.w = 0.3129523053328078;
    tmp_msg_0.p = 0.5933695017467036;
    tmp_msg_0.q = 0.8409510623066537;
    tmp_msg_0.r = 0.9609621786038897;
    tmp_msg_0.flags = 44U;
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
    msg.setTimeStamp(0.16846745431493093);
    msg.setSource(30402U);
    msg.setSourceEntity(190U);
    msg.setDestination(47090U);
    msg.setDestinationEntity(147U);
    msg.op = 214U;
    msg.snapshot.assign("JJICMAOXCLUPKUQKNQJJIXANKHQTZMJFMUUZTLXDGESBZVCAMTVODPBQPOITRATGVPFKXYARPTHJAYHTEPPSLCBGSUYWQLVVKEFUCFJORWU");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.335058946600872;
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
    msg.setTimeStamp(0.8889639032320845);
    msg.setSource(28220U);
    msg.setSourceEntity(111U);
    msg.setDestination(13982U);
    msg.setDestinationEntity(85U);
    msg.op = 86U;
    msg.name.assign("LLVWVJUMXOFSYUIEMENSGEZQCVKIQFEJIPOQEXDFNOH");

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
    msg.setTimeStamp(0.2025797968759836);
    msg.setSource(11747U);
    msg.setSourceEntity(20U);
    msg.setDestination(23415U);
    msg.setDestinationEntity(168U);
    msg.op = 93U;
    msg.name.assign("KHSEUAGIEXNCCPCJTVVDQNYCQYWRPSEZBZGQANOJRWRURXRPUXMNKXDBYUMRTVIIGICYSEIAFWZPMYFXRAMOXZBGFVEIFRSHIWOESDFDNTDOWLGFUGBHJZTOWNHNWUBLKSLULAOOJVFVILBU");

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
    msg.setTimeStamp(0.02857817460585843);
    msg.setSource(15087U);
    msg.setSourceEntity(50U);
    msg.setDestination(60667U);
    msg.setDestinationEntity(107U);
    msg.op = 61U;
    msg.name.assign("EKAGWPHDNOCYQFQVMCTMDUXWCAMHDHTUPOKDQSJFENRUYEAXEDZFYQXDNRSFRCTTRDFZ");

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
    msg.setTimeStamp(0.6666711801081797);
    msg.setSource(51839U);
    msg.setSourceEntity(0U);
    msg.setDestination(3971U);
    msg.setDestinationEntity(113U);
    msg.type = 160U;
    msg.htime = 0.9663989567536446;
    msg.context.assign("HKRPJWNQXPZZCQJMXRIUJFFEYOBQIOVQWSDQLFGRSUOSOSRVFIQAOUXUXZDSEPEPJBKLZEDFKPBWKZTGKHDUIBEKGRKFHGVRHUMBGXZTZWDMCYMNBXZCTEJ");
    msg.text.assign("RQXMMEYVMXUYWULSZMISGCKFTVIPRLDIZVQVUXYCBXDPLDOFALOAWWZPVOYETFWMSGFSPOBDQIZAKHYTFSKRTMCPYEILRZRNQVICAFZEZDUUOAGNGSBFXILABVPJK");

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
    msg.setTimeStamp(0.4414032272982006);
    msg.setSource(14784U);
    msg.setSourceEntity(64U);
    msg.setDestination(50868U);
    msg.setDestinationEntity(48U);
    msg.type = 30U;
    msg.htime = 0.34840459967159976;
    msg.context.assign("QIEAAZVLBBYZYZPIAVEPPPTQUXJDUJSLBVHMSLFEBPJCTZWKJVFQIRORTMSMFHKUJQWRM");
    msg.text.assign("GWVGXZNJYTCERBNRVAODCNZMNDMHUFACRUEXRIYHJYQKD");

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
    msg.setTimeStamp(0.7237450750639326);
    msg.setSource(8349U);
    msg.setSourceEntity(182U);
    msg.setDestination(6595U);
    msg.setDestinationEntity(60U);
    msg.type = 43U;
    msg.htime = 0.2883962006370522;
    msg.context.assign("QTPXWWLDRGKFNCOUZDVMIAOS");
    msg.text.assign("MCJXFSSXLGMYTORANTYWQZOZEYYNXPHHIPUSHOCAMFEOPMZMVKUHFIBEVBCCRMVIJPVDRYRMELWGTGQGTVKJFFVHIPQYUBMBHSXROJXBTRDXOVRIPKNRMOATTECLXJNZAUCKXTUHFGDKLMPDKFTUZXAESJSVRUBWDKDPNLHDBSWQFWGCOLLSSWANJICQEAKWRYECCNEBHWWLDYGLLIFGIXZFPWTSGYANAINQBVUUVOZEKDQZBQJJIDQ");

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
    msg.setTimeStamp(0.11648319154110487);
    msg.setSource(40514U);
    msg.setSourceEntity(189U);
    msg.setDestination(62602U);
    msg.setDestinationEntity(168U);
    msg.command = 181U;
    msg.htime = 0.3540989892920784;

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
    msg.setTimeStamp(0.7265748884182548);
    msg.setSource(40262U);
    msg.setSourceEntity(141U);
    msg.setDestination(33425U);
    msg.setDestinationEntity(130U);
    msg.command = 162U;
    msg.htime = 0.9629804261168033;

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
    msg.setTimeStamp(0.4400350469287939);
    msg.setSource(18836U);
    msg.setSourceEntity(26U);
    msg.setDestination(10991U);
    msg.setDestinationEntity(162U);
    msg.command = 119U;
    msg.htime = 0.20587768120473304;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 248U;
    tmp_msg_0.htime = 0.6343461755039913;
    tmp_msg_0.context.assign("YTKHBMVTTGULIHCAQEFLIXKXVPBWGBXMAWIRHZHPTJEUQNYFORUCIUODSFDJO");
    tmp_msg_0.text.assign("VKSKPMMGDJKQBGXZULYCQTQHZKWUQXOMSTAAOBFCNVPSJLJMBKUVTRZXIZDUMULREXYVDYYWGBMPXIQZIGPXTNJSACPOJRNAWRIEWRFLIMHIRIFAANSHCIZROLKKHAQNWAMKRIGFYTLEHUEPOCNWNELEFEFHOPZZBRBCPDBFOHYSUFGTSPYIAJA");
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
    msg.setTimeStamp(0.2462292309230174);
    msg.setSource(46499U);
    msg.setSourceEntity(167U);
    msg.setDestination(12491U);
    msg.setDestinationEntity(171U);
    msg.op = 222U;
    msg.file.assign("IULXSCAJNEZBDOPLHVCTAPCSANXFQBHAPZCFKIXWMQDDPQUOMGPHZYWFOLUSJXAGLCMWTORWNAFVNHNKXIFMGAKTLVIYCUDERMGFOHSYIGHKIYTDINDMGXQRWEBEZGVQAONFSNEISYURKHVQWHOOWQPRODJYKWRLKREZJQUUVTGCSQECJTBVKIMHAXDWKRBVPSZULUNLZSEPKFCSXUQVBYXGADMLJZMZBEJWTNPXZYIJVDTROR");

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
    msg.setTimeStamp(0.15250583702443543);
    msg.setSource(23129U);
    msg.setSourceEntity(232U);
    msg.setDestination(5923U);
    msg.setDestinationEntity(66U);
    msg.op = 117U;
    msg.file.assign("IYJQPMUCSGTLKBERIXJZTRGWYQADMKYKTFQKNIRBUHFLTPXWPFJHHOLAWDPAQUETKXPVSOO");

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
    msg.setTimeStamp(0.4810250113769322);
    msg.setSource(26363U);
    msg.setSourceEntity(53U);
    msg.setDestination(49481U);
    msg.setDestinationEntity(111U);
    msg.op = 240U;
    msg.file.assign("LDZXVLISIUEMKFSNLIOVAVUABVNYPNDXLWJTIGLKGSKOJJPVCBZPQAYJFINZUHDWIJBJHOBUGPKQYBMXRPFXTBEUWODRQCWNEDWTVPRPJUQZFRIYUWENFQZOADHLKAKMVDBA");

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
    msg.setTimeStamp(0.1900302707916941);
    msg.setSource(48820U);
    msg.setSourceEntity(80U);
    msg.setDestination(27557U);
    msg.setDestinationEntity(176U);
    msg.op = 139U;
    msg.clock = 0.216094637268877;
    msg.tz = 66;

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
    msg.setTimeStamp(0.6701270022431991);
    msg.setSource(3829U);
    msg.setSourceEntity(70U);
    msg.setDestination(52148U);
    msg.setDestinationEntity(4U);
    msg.op = 184U;
    msg.clock = 0.7055610808235825;
    msg.tz = 122;

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
    msg.setTimeStamp(0.5942748055728146);
    msg.setSource(16392U);
    msg.setSourceEntity(239U);
    msg.setDestination(10391U);
    msg.setDestinationEntity(50U);
    msg.op = 94U;
    msg.clock = 0.5351288073698846;
    msg.tz = -58;

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
    msg.setTimeStamp(0.842691392582477);
    msg.setSource(44260U);
    msg.setSourceEntity(249U);
    msg.setDestination(24866U);
    msg.setDestinationEntity(49U);
    msg.conductivity = 0.25296378463002434;
    msg.temperature = 0.1003289523032026;
    msg.depth = 0.9100679967853356;

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
    msg.setTimeStamp(0.1591284928499993);
    msg.setSource(910U);
    msg.setSourceEntity(112U);
    msg.setDestination(7669U);
    msg.setDestinationEntity(29U);
    msg.conductivity = 0.6127274926415278;
    msg.temperature = 0.6060051495071029;
    msg.depth = 0.876813611448886;

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
    msg.setTimeStamp(0.23077256227472764);
    msg.setSource(29440U);
    msg.setSourceEntity(101U);
    msg.setDestination(32398U);
    msg.setDestinationEntity(230U);
    msg.conductivity = 0.08369679167446453;
    msg.temperature = 0.06088435235674705;
    msg.depth = 0.8698002368228583;

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
    msg.setTimeStamp(0.6547290790743938);
    msg.setSource(38084U);
    msg.setSourceEntity(122U);
    msg.setDestination(62073U);
    msg.setDestinationEntity(153U);
    msg.altitude = 0.6803819509582417;
    msg.roll = 49597U;
    msg.pitch = 7613U;
    msg.yaw = 64075U;
    msg.speed = 14229;

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
    msg.setTimeStamp(0.043535991449072164);
    msg.setSource(41685U);
    msg.setSourceEntity(158U);
    msg.setDestination(25299U);
    msg.setDestinationEntity(99U);
    msg.altitude = 0.5589675930953835;
    msg.roll = 46717U;
    msg.pitch = 63592U;
    msg.yaw = 807U;
    msg.speed = -10773;

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
    msg.setTimeStamp(0.33918991655592157);
    msg.setSource(10136U);
    msg.setSourceEntity(219U);
    msg.setDestination(11810U);
    msg.setDestinationEntity(184U);
    msg.altitude = 0.8629049177158079;
    msg.roll = 39626U;
    msg.pitch = 62836U;
    msg.yaw = 7460U;
    msg.speed = 21739;

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
    msg.setTimeStamp(0.10050782542644032);
    msg.setSource(21053U);
    msg.setSourceEntity(100U);
    msg.setDestination(33401U);
    msg.setDestinationEntity(73U);
    msg.altitude = 0.6423496427997097;
    msg.width = 0.6497080751697855;
    msg.length = 0.4366585021474789;
    msg.bearing = 0.53837523933494;
    msg.pxl = -13283;
    msg.encoding = 173U;
    const char tmp_msg_0[] = {64, 38, -2, -104, -20, -112, 41, -82, 14, 125, -111, -78, 24, -128, -36, 60, 60, -7, 47, -63, -117, -68, 14, -80, -111, -124, 93, 110, -115, 60, -92, -94, 1, -58, -104, -124, 25, 31, -96, -49, -71, -2, 126, 75, -42, -125, 81, 112, -104, 7, 37, -32, -84, 75, -119, 109, -71, -25, 75, -25, -102, -28, -23, 89, 114, 41, -93, 106, -60, 85, -15, -97, 46, 121, -2, -121, -75, -78, 125, 11, -35, 59, -42, -70, 44, -103, 108, 73, 26, -9, -32, 23, 71, 6, -49, 105, 102, 84, -50, -73, 20, -118, -122, -75, 34, 21, -31, -84, -83, -81, 54, -4, 74, -121, 87, 100, -36, 81, -34, 2, -2, 55, 1, 17, 51, 48, 114, -28, 90, -73, 72, 18, 117, -114, 38, -52, -31, 83, 115, 123, -33, -91, 111, -74, -100, -5, 19, 6, 88, 124, -77, 63, 54, 22, 110, 67, 90, 49, -78, 17, 15, -49, -110, -27, 5, -46, -47, -44, 83, -9, 22, 120, 98, 102, 48, 122, 73, -41, -92, 17, 99, -120, 79, 113, 24, 53, -119, 38, -44, 80, 26, -75, 54, 83, -10, 40, 41, -73, -74, -99, -11, 114, 98, -30, -11, 102, -9, -3, -88, 124, -32, 67, -105, -22, -2, -107, -14, 99, 118, 124, 28, 115, 70, 65, -90, 54, 72, -44, -67};
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
    msg.setTimeStamp(0.3219933523835865);
    msg.setSource(63369U);
    msg.setSourceEntity(177U);
    msg.setDestination(27453U);
    msg.setDestinationEntity(170U);
    msg.altitude = 0.64055653725432;
    msg.width = 0.6644989844411856;
    msg.length = 0.1499827683799101;
    msg.bearing = 0.5317548765875789;
    msg.pxl = 22341;
    msg.encoding = 199U;
    const char tmp_msg_0[] = {117, 117, -25, 82, 69, 49, -115, 120, -111, -48, 19, 45, -104, -38, -12, -42, 85, 125, 64, 31, -8, -103, 114, 77, -44, -111, 51, 39, -58, 40, -30, -18, -125, 29, -54, 41, -17, 74, -93, -69, -31, 95, 44, 124, 84, -24, 64, -67, 86, 89, -40, -88, -121, -10, -6, -98, 109, -45, -81, -32, -127, 5, -5, -64, 39, -8, 47, 51, 33, -74, 105, -64, -45, 35, -124, -103, 49, -27, -111, 9, -104, 3, -15, -24, 120, -80, -9, -97};
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
    msg.setTimeStamp(0.2356667629007131);
    msg.setSource(10397U);
    msg.setSourceEntity(105U);
    msg.setDestination(330U);
    msg.setDestinationEntity(232U);
    msg.altitude = 0.42866348684892897;
    msg.width = 0.8451330590784375;
    msg.length = 0.40452855294892576;
    msg.bearing = 0.34810850875374755;
    msg.pxl = 28653;
    msg.encoding = 7U;
    const char tmp_msg_0[] = {21, -97, -9, -121, -23, -102, -28, 31, -88, 109, 62, -113, -123, -63, -118, 118, 113, -22, 122, 15, 100, -49, -109, 34, 26, -74, -92, -106, -90, 3, 74, -59, -46, 48, 52, -61, 88, -53, -69, -32, -96, 85, -94, 108, -55, -46, 8, 108, 45, -30, 31, -72, 121, -1, -19, 16, 98, 36, -58, 116, -44, -108, 69, -83, -56, 28, -125, -109, -95, 54, 105, 31, -36, -76, -104, -123, 105, 103, -75, 19, 5, -96, 9, 100, 36, 121, 80, 115, 57, -89, 39, 55, 4, -123};
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
    msg.setTimeStamp(0.7561694523058486);
    msg.setSource(62718U);
    msg.setSourceEntity(213U);
    msg.setDestination(13942U);
    msg.setDestinationEntity(246U);
    msg.text.assign("WBMKVHHLYUOQZVRKFVJQJVCFHRVYGULCWWSNDDGBIVSFBHVERSNPADMTETCAWXWOIAXDNZCQPIIYYZNLSEWSRUHLFKJTPOLFVNRRXUOACKJAPYQAUOQMCTEZSEYJSUCITBKBENKHEYRRTNVJMRFPMJXNFADGXXMPGFUPQMKZBQZGOEGYUZTLKAZWXHAHSTNTOSJEXM");
    msg.type = 98U;

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
    msg.setTimeStamp(0.8459803569010016);
    msg.setSource(39312U);
    msg.setSourceEntity(12U);
    msg.setDestination(27343U);
    msg.setDestinationEntity(245U);
    msg.text.assign("CKBOUARXBIFIKKSIIPLKURSMBGVRWTFNEDAOOZNRATDXZQZWJRTTYUJUTPNSITNSKCLNQHLDUITYCJLCUMHJQXSWSRHXIUKGEBIWNUGSGD");
    msg.type = 93U;

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
    msg.setTimeStamp(0.06945670155505923);
    msg.setSource(51982U);
    msg.setSourceEntity(33U);
    msg.setDestination(50370U);
    msg.setDestinationEntity(72U);
    msg.text.assign("VKVTRIRBABYWM");
    msg.type = 194U;

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
    msg.setTimeStamp(0.3888508936540216);
    msg.setSource(31881U);
    msg.setSourceEntity(19U);
    msg.setDestination(34998U);
    msg.setDestinationEntity(14U);
    msg.parameter = 154U;
    msg.numsamples = 240U;
    msg.lat = 0.6952157248865546;
    msg.lon = 0.9024834401982539;

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
    msg.setTimeStamp(0.9966410900924612);
    msg.setSource(48595U);
    msg.setSourceEntity(154U);
    msg.setDestination(61255U);
    msg.setDestinationEntity(149U);
    msg.parameter = 64U;
    msg.numsamples = 36U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 6164U;
    tmp_msg_0.avg = 0.10403299728733162;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7348143619251412;
    msg.lon = 0.31541557796577413;

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
    msg.setTimeStamp(0.6472552698512205);
    msg.setSource(60778U);
    msg.setSourceEntity(82U);
    msg.setDestination(22969U);
    msg.setDestinationEntity(206U);
    msg.parameter = 59U;
    msg.numsamples = 41U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 29667U;
    tmp_msg_0.avg = 0.9508995408015861;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.03619468425533745;
    msg.lon = 0.5955983849572933;

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
    msg.setTimeStamp(0.24038211483663396);
    msg.setSource(58632U);
    msg.setSourceEntity(2U);
    msg.setDestination(16847U);
    msg.setDestinationEntity(92U);
    msg.depth = 9163U;
    msg.avg = 0.4729930862587438;

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
    msg.setTimeStamp(0.8855851381300186);
    msg.setSource(57356U);
    msg.setSourceEntity(253U);
    msg.setDestination(64951U);
    msg.setDestinationEntity(246U);
    msg.depth = 21960U;
    msg.avg = 0.8475768287135875;

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
    msg.setTimeStamp(0.6367625147085183);
    msg.setSource(44933U);
    msg.setSourceEntity(148U);
    msg.setDestination(59158U);
    msg.setDestinationEntity(53U);
    msg.depth = 35382U;
    msg.avg = 0.6675797470671542;

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
    msg.setTimeStamp(0.02410412849296073);
    msg.setSource(20065U);
    msg.setSourceEntity(241U);
    msg.setDestination(31727U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.7295651975661868);
    msg.setSource(7373U);
    msg.setSourceEntity(222U);
    msg.setDestination(21070U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.49444750996022635);
    msg.setSource(43855U);
    msg.setSourceEntity(254U);
    msg.setDestination(12487U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.2976002501542586);
    msg.setSource(45687U);
    msg.setSourceEntity(96U);
    msg.setDestination(36084U);
    msg.setDestinationEntity(175U);
    msg.sys_name.assign("DCXUWBMOJQQHXMPUVWANSBLIGTNBFVADCEWAZUYTRLOJUBMPQKQKBQKGOXIEZSXFQHZVNKHDVDFHDWTMFGOOYLPMPRTVKGLJYEVNUEONSQLKIZNYZVZMYCLRGSIMAYCCPTMGSUCSAWFSPPHNRHHJDDALQGVRXFUXYPQZXNEWCSXH");
    msg.sys_type = 93U;
    msg.owner = 47981U;
    msg.lat = 0.9873788027140035;
    msg.lon = 0.9775442306769159;
    msg.height = 0.4101701995517465;
    msg.services.assign("VMBGWYSROPINWEOJDMGDCAITRRBFGOIJDCFXQSVFXZGBYTCADHEQADHUUCORPZHYEJYDAOMPAQGFPYNXEDEMRMAPRISZVU");

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
    msg.setTimeStamp(0.9420361146899505);
    msg.setSource(54030U);
    msg.setSourceEntity(51U);
    msg.setDestination(19543U);
    msg.setDestinationEntity(96U);
    msg.sys_name.assign("RRCGNEUXSQFRVIVGLLDQCOLKWKMFZPDZJMNHYDXXWZWKNWUASJJBCCN");
    msg.sys_type = 122U;
    msg.owner = 9392U;
    msg.lat = 0.4280344551302897;
    msg.lon = 0.9097562632453479;
    msg.height = 0.8538973180829127;
    msg.services.assign("UNFIXOAGEJOHBHWEPLCIAJSXJXMDVFXYGRIKFQPMJZPVQVDRZDPQDGTJWPAUMYXJHLZZNOIKYOLGLFWRYFNTFRAUDCPBEQAZLUPAOZRYTRSQUCCONDHZZPOMRMHCMVANWCIHHUIBERAFPBEWX");

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
    msg.setTimeStamp(0.1703014363041665);
    msg.setSource(16508U);
    msg.setSourceEntity(37U);
    msg.setDestination(50457U);
    msg.setDestinationEntity(139U);
    msg.sys_name.assign("XCLUEIUYVWJQZNMSZAECUUIQJE");
    msg.sys_type = 134U;
    msg.owner = 13777U;
    msg.lat = 0.5136025727933059;
    msg.lon = 0.07620187170616155;
    msg.height = 0.019236738831475142;
    msg.services.assign("LAWOBJXAXPEVIYUJMLXZJHXJOFMYGSOWOPWWXKIEZIUTCKRPFJQGHDGTMQMYUOENCHTAJDF");

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
    msg.setTimeStamp(0.7341042034532392);
    msg.setSource(40737U);
    msg.setSourceEntity(11U);
    msg.setDestination(23068U);
    msg.setDestinationEntity(47U);
    msg.service.assign("TTYWPUYZRDBRKNVJSKQYXGGFXWXQFCTMMZSPJVIKHKDITNJHVLENPKXIIVVFOVNAIJQQANDEAGAWEHSWJBDCOTLZFSSRTXTQAKPHQNZOBEBTHFFGPEPCNZDGNNLYWJPJSXMORZUALPEVTHRCABFWWYPCBCUK");
    msg.service_type = 244U;

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
    msg.setTimeStamp(0.05456455545902694);
    msg.setSource(32544U);
    msg.setSourceEntity(245U);
    msg.setDestination(55815U);
    msg.setDestinationEntity(133U);
    msg.service.assign("CVKANZFHNBETKGWVJXSELRKPJKLXPBVSYCYCUCURGYU");
    msg.service_type = 250U;

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
    msg.setTimeStamp(0.8282928375817968);
    msg.setSource(9577U);
    msg.setSourceEntity(109U);
    msg.setDestination(36754U);
    msg.setDestinationEntity(248U);
    msg.service.assign("TPKFQAYUPGEAWCTGATMUPYVMHYPQDLXJSVMOIYKZUOKEAEKVNQRBFMSTLQLGLSHWQMGMNLWCRWABBIWPNREJELZENWXPPTGSAJYZYOBZLLIKZDZAQRBEYNC");
    msg.service_type = 168U;

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
    msg.setTimeStamp(0.34539408511668157);
    msg.setSource(11990U);
    msg.setSourceEntity(254U);
    msg.setDestination(34854U);
    msg.setDestinationEntity(185U);
    msg.value = 0.47115810562225346;

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
    msg.setTimeStamp(0.45941156383434223);
    msg.setSource(53259U);
    msg.setSourceEntity(180U);
    msg.setDestination(55056U);
    msg.setDestinationEntity(250U);
    msg.value = 0.16014609733606788;

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
    msg.setTimeStamp(0.45300535597275504);
    msg.setSource(41429U);
    msg.setSourceEntity(8U);
    msg.setDestination(1904U);
    msg.setDestinationEntity(70U);
    msg.value = 0.424146851612781;

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
    msg.setTimeStamp(0.3406580645072006);
    msg.setSource(43421U);
    msg.setSourceEntity(213U);
    msg.setDestination(34933U);
    msg.setDestinationEntity(201U);
    msg.value = 0.8085653000720017;

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
    msg.setTimeStamp(0.34530004218198573);
    msg.setSource(22629U);
    msg.setSourceEntity(168U);
    msg.setDestination(38225U);
    msg.setDestinationEntity(225U);
    msg.value = 0.9206787009176988;

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
    msg.setTimeStamp(0.6891821036508158);
    msg.setSource(3315U);
    msg.setSourceEntity(69U);
    msg.setDestination(46983U);
    msg.setDestinationEntity(240U);
    msg.value = 0.08253662025978514;

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
    msg.setTimeStamp(0.6678736779249708);
    msg.setSource(926U);
    msg.setSourceEntity(27U);
    msg.setDestination(26545U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9169047367435713;

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
    msg.setTimeStamp(0.27257514631762636);
    msg.setSource(19173U);
    msg.setSourceEntity(223U);
    msg.setDestination(26213U);
    msg.setDestinationEntity(168U);
    msg.value = 0.7408031441810133;

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
    msg.setTimeStamp(0.3914986696877959);
    msg.setSource(34149U);
    msg.setSourceEntity(186U);
    msg.setDestination(32197U);
    msg.setDestinationEntity(114U);
    msg.value = 0.33035791208596066;

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
    msg.setTimeStamp(0.6589080006140657);
    msg.setSource(3852U);
    msg.setSourceEntity(6U);
    msg.setDestination(42371U);
    msg.setDestinationEntity(6U);
    msg.number.assign("GJABNWIJZMZRORNXASXOJRUFKWZLIMLDYAWRT");
    msg.timeout = 8769U;
    msg.contents.assign("FTZDIAYSDERGRQC");

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
    msg.setTimeStamp(0.2848693573538209);
    msg.setSource(23441U);
    msg.setSourceEntity(135U);
    msg.setDestination(64488U);
    msg.setDestinationEntity(160U);
    msg.number.assign("YQUBVUDUMHVQWRIRWMUAKKEZNKZPWCPTGCLOHPYHJNAYNZAVSMRLGTJTNSGTSKCQWKHBFHFCMXJRYYGMDKVPQWAMOKHPRXDRUGZRTSMSBJDGNXZLLBJZXZXHCKDREWUXTIDIBABSWETGLJYTZPVSTILPNDVOOUPXEFFIBOPGLYDKHGHYBAOVLQOMNFZQAAWJRCFFJJESIGSNCQEBDODZXEAOVTYFMCWINRYQOQCIIXIVXNUFLQPWEFVKU");
    msg.timeout = 4711U;
    msg.contents.assign("AJGQJPYASXKFBEFORXDLNFNMJMNMVOZLEUEZVWMUSIFKCKQZPVPVGYCAQYTHLDZQXDBZHDYMRFCSBDTRHPBKWQIRIMCRAHBJSKTGZGLPOXZOWXSQOGLFKEHBJPNFNFIVVVHNHWXBSENZAFMTGAIDSRNTOTPYIQBVOYYICUPPCOHSPENYGXWKCVKKBAALXUALZJZJWTUIRCV");

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
    msg.setTimeStamp(0.5314414248735534);
    msg.setSource(49727U);
    msg.setSourceEntity(98U);
    msg.setDestination(65501U);
    msg.setDestinationEntity(147U);
    msg.number.assign("JKZRGWECNSXOYKUCYSXMHWZXOOWOKZFVSISAPTKOUVZFEIRGZSYMAKAKWTFYKNHWPLYSQDDNPOTCNTJQDKR");
    msg.timeout = 310U;
    msg.contents.assign("OJGRYTDGJPWLVPIYUPSVGKXMUADELADRJTKLDIQHJBSGAMKVYZEFBJWHLBUUBRDHXQTOO");

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
    msg.setTimeStamp(0.9183785077174216);
    msg.setSource(62994U);
    msg.setSourceEntity(100U);
    msg.setDestination(805U);
    msg.setDestinationEntity(29U);
    msg.seq = 1528774807U;
    msg.destination.assign("NJSKSJPZAEDMTQPHGWUJMUXZXPNLJNSIATIBUECOJWZQAWGSYSMEJCHCBSYFLKXUVRDGQETENLPFOQFOODEYCMVLMYZFBHMBVKPXFHZUSVMKNVKUXQPAITCBOCFMZHLGYICPNDHRTJICKKYRRJRSQBLFCKINDOTLHPESYJZZXDLWVCIIOBQMDSWKGPAWLG");
    msg.timeout = 28880U;
    const char tmp_msg_0[] = {102, 84, 74, -24, -123, 9, 34, -11, -96, -37, -72, 66, 89, -23, -64, -116, 98, 20, -64, -58, -9, -118, 53, 49, -46, 44, 87, 49, -112, -4, -121};
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
    msg.setTimeStamp(0.16950971825563999);
    msg.setSource(39133U);
    msg.setSourceEntity(117U);
    msg.setDestination(21890U);
    msg.setDestinationEntity(30U);
    msg.seq = 3882974122U;
    msg.destination.assign("QEVJAVCQPQPDQIGCCJUESLPGSJYFUNUKWJXANGOWZURIDNQHNLXHFJOBW");
    msg.timeout = 6269U;
    const char tmp_msg_0[] = {-99, 82, 11, -128, -76, 103, 9, -98, -45, 9, -75, 49, -59, 109, -58, 18, -3, -11, 1, -45, 101, 46, 80, 7, 123, -100, -123, 31, 104, 110, -36, -71, 61, -35, -12, -18, 23, -111, 119, 41, 106, 65, -46, 44, 125, 101, -85, 19, 47, 90, 95, -20, 88, -111, 117, -9, -70, 32, 31, -112, 36, 115, -88, 2, -12, -70, 126, 44, -95, 13, -125, -87, 93, -63, 11, -46, -76, -87, -62};
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
    msg.setTimeStamp(0.610556540373165);
    msg.setSource(31866U);
    msg.setSourceEntity(104U);
    msg.setDestination(27908U);
    msg.setDestinationEntity(214U);
    msg.seq = 405306750U;
    msg.destination.assign("KVAIYBDBMFKBCWVWTCCDEXGWJXLUYTXTTQEPDUWJOOFPGXBJOWTNZDTFDERXHXTIOPPDZNHVKMJFEZUZCWSMKGLRPMGMSNPPVOYVNQSJIUHVKYZITPTLRXSMQBCDSJVQAQMUAGWBYNSFFLQZYHARBBZUZIDHMAQFLGHSRNGLRONEFULBH");
    msg.timeout = 32246U;
    const char tmp_msg_0[] = {-80, 108, 95, -6, -35, 14, 19, -89, -56, 29, 97, 15, 93, 13, 45, -81, 18, -106, 26, 56, -98, 1, 123, -73, 106, 11, 41, 14, 96, 23, 22, -64, -12, 14, 104, -80, 98, -2, 30, 66, 57, 113, 121, -93, -25, -102, 80, -99, -122, 62, 9, 49, -84, 27, -51, -74, 84, 30, 58, -36, -37, 4, -34, 23, -124, -19, 58, -62, 25, 67, -66};
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
    msg.setTimeStamp(0.4214639416294873);
    msg.setSource(64084U);
    msg.setSourceEntity(193U);
    msg.setDestination(11071U);
    msg.setDestinationEntity(9U);
    msg.source.assign("YHHDJIBDKSSLLSRUYQBYGPVRHQEOEADPZVXJYYBTJESQNGBFBWRPFCGTCIJRDAIIGLKCFBNRUJDRSSZQUEJNVNWGLWXNBPQIOAAZWAPDRKWXHLVPCNKI");
    const char tmp_msg_0[] = {26, 76, -98, 57, -91, 11, 70, 105, 38, 15, 21, 43, 89, 88, -126, 22, 42, 115, 93, 32, -113, 118, 96, 74, 35, -66, -10, -109, 81, -94, -122, 88, -95, 19, -23, -124, 58, -117, 96, -58, -34, -46, -61, -16, -85, -59, -42, 88, 47, 90, -106, 126, -47, 91, 26, -90, 84, 96, -124, -25, -15, 0, -126, -121, 126, 63, -24, 114, -8, -68, 104, -128, 37, -17, 31, 95, 103, -116, 35, 11, 61, 45, 83, 7, 67, 14, 122, -77, 120, -34, -96, -100, -84, -94, 95, -89, 11, 66, 30, 96, -87, -45, -62, -32, 115, 0, -2, -36, -9, 4, 17, 88, 32, -31, -30, -5, -78, -112, -36, 118, 54, -128, -89, 13, 70, 2, 41, 25, -77, 119, -7, 58, 76, 29, 111, -37, -51, -118, -113, -74, 116, 123, 79, -28, -122, -36, -99, -72, 42, 39, 63, 36, 83, -7, -30, 38, 107, 113, -103, -93, -82, 81, 26, -38, 72, -91, -93, 70, 112, -46, 121, -106, -6, 28, -28, -114, 38, -37, -12, 6, 57, 34, -115, -20, -18, 2, 111, -85, 37, 6, 86, -58, 28, 93, 109, 89, 11};
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
    msg.setTimeStamp(0.4259374508875249);
    msg.setSource(29770U);
    msg.setSourceEntity(231U);
    msg.setDestination(11368U);
    msg.setDestinationEntity(228U);
    msg.source.assign("HZWCNBNUTMYAXMJYQVXAGUTELVHAZZTEGARJXSFFUWQJBAFPIAGVCTPYZKBNXFQWSOGGTWMYCOEVZIFKUDEYPRXYELHQMQEBWCIOOJUXHGZJUMNGFHWXZPWRIREVJORPDBKYCSLCILMJ");
    const char tmp_msg_0[] = {117, -119, 49, 39, -115, -94, 15, -104, 82, -4, 76, 46, 116, 10, 9, 83, 41, -33, -45, 2, -1, -89, -38, 49, -127, -49, 38, 50, 67, 1, -72, 24, 105, 33, -8, 111, 110, 54, -2, 99, 51, 6, 71, 0, 48, -67, 107, 62, 113, -108, 88, 52, -128, 74, 118, 123, -127, -9, -16, 112, 29, -125, -19, -11, -75, 125, -119, 123, -56, 60, -68, 104, 29, -97, -41, 82, 97, 66, -40, 37, 57, -87, 26, 120, 113, -43, 101, 39, 112, 70, -94, -31, -126, 59, -22, -43, -86, 23, -120, -44, -13, 54, 54, -54, 47, -114, -8, 23, -75, 84, -1, -29, -118, 121, 74, 36, 45, -79, -29, -35, 115, -97, -74, -8, 113, -10, 120, -64, -64, -105, 58, 79, -56, -87, 122, -5, -28, -125, -99, -125, 20, 124, -109, -69, 121, 63, 85, -118, 120, -77, 67, -33, -124, 57, 63, 72, 105, 11, 27, -53, 86, 24, -91, 41, -128, -116, 119, -76, -15, 43, 64, -81, -78, 105, -44, 118, -106, 7, 38, 33, 36, 17};
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
    msg.setTimeStamp(0.8612086479021535);
    msg.setSource(30221U);
    msg.setSourceEntity(4U);
    msg.setDestination(28713U);
    msg.setDestinationEntity(106U);
    msg.source.assign("PAZVBHFSUCVXQVPZNPUMUUEYPLZJOGBRNIKBMOINLDFOGLLBHKZPETYGFEHRZFYADPSURNIFYJGVIKAELJCWYLTCOCITRSANMOCSFDSJKAEKWQKHENXVCXSOJXFNXNLACJCGSYEPQWWDWAZMIWLYWDNGAYIZVIHDBQHHWNCBOA");
    const char tmp_msg_0[] = {28, 120, 113, 30, -126, 106, -43, 82, -31, -105, 45, -32, 105, 90, 116, -72, 13, -16, -88, -34, 118, 40, 79, 97, -4, -20, -1, 31, -53, -128, 16, 76, -106, -79, -45, -43, -112, -115, -11, 60, -115, 79, 40, 14, -125, 0, -69, -122, -14, 7, 37, 121, -126, -78, -20, -1, 120, 15, 6, -122, 57, -5, 30, -112, 99, 35, -80, -57, 31, -64, -54, -106, 96, 81, -51, -4, -87, 76, 64, 105, -70, -55, 99, -74, 32, 27, 65, 76, -36, -25, -7, 56, 94, 24, -5, 42, -78, 68, -5, -44, 102, 23, 57, -34, -71, 8, -7, -65, 41, -28, -17, 21, 42, 121, 110, 109, -128, -108, 119, 87, -3, -110, 63, 30, -41, 85, 84, -20, -41, -1, -13, -87, -20, 124, 31, -101};
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
    msg.setTimeStamp(0.2920751226727907);
    msg.setSource(52727U);
    msg.setSourceEntity(88U);
    msg.setDestination(24745U);
    msg.setDestinationEntity(140U);
    msg.seq = 1208896094U;
    msg.state = 223U;
    msg.error.assign("EEVEHJOGJYGIWXFTUIUZXAEANGUNVOYFK");

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
    msg.setTimeStamp(0.373923597115875);
    msg.setSource(65390U);
    msg.setSourceEntity(187U);
    msg.setDestination(28185U);
    msg.setDestinationEntity(219U);
    msg.seq = 1582643895U;
    msg.state = 211U;
    msg.error.assign("NYHZQWOTEQCXQQKFPTICGDFCPNEFBMFUPKRQTYCVVMIORAFDGSLKZJMTUZQTTWAUHOYZLROFHCCSWBXUNRQBSSNCVWJIRPOLJYKHDYVVXNSCJEZUFLODJHZKSYCSGZBEJNYGGFLFPXYWUOBIDMPTUJHXATDAJAPRRKJZHGXCAXQRLXKRMIUBFISNBLKATPISSQMVPENHTGGDROXWZVNWDAYXPEMW");

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
    msg.setTimeStamp(0.4610082883191362);
    msg.setSource(36564U);
    msg.setSourceEntity(26U);
    msg.setDestination(51937U);
    msg.setDestinationEntity(202U);
    msg.seq = 1882936147U;
    msg.state = 161U;
    msg.error.assign("YFLTQCEKKOXDGXZFGXLQAVPWODXTKBKYYUJZMRQCACGOJETZPNUFPYJXGLMKLRGOOPUJAYQWVNETWESFHONMZHSIDVEOBZIKMDCUAANCSGYBRIZZKACXZDCSJMPTFBREYMVFWQWUJNHIIDEITSMOSBZ");

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
    msg.setTimeStamp(0.20225784726403007);
    msg.setSource(3897U);
    msg.setSourceEntity(20U);
    msg.setDestination(13228U);
    msg.setDestinationEntity(233U);
    msg.origin.assign("FNBRDJYMYXQVUXCVORQITSQPGA");
    msg.text.assign("BFAKPWLFWMUGLHXCWNSYDANOXHPQQREJINJIZBSPPMDPHQKLVZGBAJTX");

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
    msg.setTimeStamp(0.658747602512382);
    msg.setSource(21536U);
    msg.setSourceEntity(250U);
    msg.setDestination(33310U);
    msg.setDestinationEntity(59U);
    msg.origin.assign("MYDJDWKIFJBWQHCFSRQSHLDGGNMOZKYEAVOTPMXALFSELRXQHPFJRVIEEIAQCKSAMSVLHEBZPFLYUZBUDKVZNOITOAVISOGUKXPAJPDPQNCPJFCFXOUKGDOZUUZXKOYTYDSHXZWNNAAHMIVUJPYTEWGXGEWOUZGXLKRFVZQBWPJVFBQXGJYDYGRBQTTSAICHUAZXUVLLJCJWWERBERWLNNKTGWBYHMVMMOMFCKHNNIDRCCQIS");
    msg.text.assign("AMZKVGSEUQJBHLIYYQXDLYNFCEYJNGBOXMDJICBNKJZQTTICHWXWO");

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
    msg.setTimeStamp(0.5072999364767038);
    msg.setSource(21787U);
    msg.setSourceEntity(178U);
    msg.setDestination(25491U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("OEVDEOBFTDQNDDBDJLEVIKWHQOGHWJUZMLCMYVCLOJVCQUCHMPTJ");
    msg.text.assign("KNQKWJTIYVHZPKLOALSGMXLWCXAISJUQBYIWTSVGERMHWFAQQTLFQJAMTBSGZWXJQNPGOECLGSPTIABTIMPFSNFIUCXUVRMPEPVMDYWSFJUOJAUDPURBXVBOYORLRCRKVZNRZZOAUHMNTNEPQHICXJISRWIDXEYRJNKHZKXGYDHGUDMFKYBQQVHGXAVASMIKFCJTDDLJZVHWOEL");

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
    msg.setTimeStamp(0.4937496640398439);
    msg.setSource(17056U);
    msg.setSourceEntity(162U);
    msg.setDestination(12496U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("FVSPDEBLRCAWBEDZYEXLKFTMXWPQKXASLVHVQDRGGGCYTOBAZSNNPIJWRQFNKJJVRRQFIWZDKEYDQVORSEXDYORPULOTLTENNUHC");
    msg.htime = 0.5638822381080909;
    msg.lat = 0.9285613645757466;
    msg.lon = 0.6185772112590885;
    const char tmp_msg_0[] = {123, 7, 121, -55, 31, 37, 47, 41, 109, -3, 74, 71, 110, 34, -105, 11, -119, -14, 125, -105, 13, -105, 122, 7, 108, 4, -46, 26, -107, -54, 71, 86, 113, -90, 50, 75, -76, 113, 4, 106, -25, 86, 55, -43, 88, -121, 114, 20, 116, -31, -114, -117, 122, 39, 55, -85, 115, 79, 60, 67, -64, -79, -112, 84, 87, 77, 86, 5, -17, -120, -7, -40, 61, -31, -39, -100, -84, 113, -103, -77, 98, -104, 23, -81, 114, -19, 88, 65, -21, 109, -85, 35, -76, -99, 4, 0, 36, -125, -98, -76, 95, 0};
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
    msg.setTimeStamp(0.5145335370942646);
    msg.setSource(26799U);
    msg.setSourceEntity(63U);
    msg.setDestination(51525U);
    msg.setDestinationEntity(8U);
    msg.origin.assign("XXHCQQZHZDILEFVZSNKAWCMHXJGREPMSXFYINLPEWPSFWYFLVPNBLBEWHEPQSGTZCYUT");
    msg.htime = 0.9401843829563173;
    msg.lat = 0.05049598764404584;
    msg.lon = 0.39932235426186125;
    const char tmp_msg_0[] = {-123, -80, 63, 111, -82, -45, 71, 56, 62, 5, -16, 35, 109, 106, -123, 126, 45, -47, -46, 67, 85, 65, -91, 93, 10, 53, -109, 113, 65, 102, 116, 70, 120, -57, 116, -20, -1, 50, -65, -5, 48, -100, -41, -110, -91, -4, -63, -125, 80, 18, -17, -3, -15, -6, -112, -10, -52, -44, -48, 18, -44, 110, 76, -102, 54, 56, -4, -29, -83, 47, 97, -50, 61, -64, 45, 76, 1, -15, -94, -22, 40, 101, 11, 115, 120, -117, -26, 54, 39, 52, 125, -71, 80, -10, -50, -14, 80, -19, -10, -24, -29, -22, -9, -25, 35, -22, 14, 13, 96, -29, 104, 112, 57, -94, -45, -79, -124, -108, 60, -31, -52, -52, 67, 116, -34, 76, 52, -17, -114, -62, 32, 124, 125, -74, -31, 94, -17, 89, 4, -3, 7, -107, 1, -105, -97, 18, 74, -113, -99, 43, -74, -119, -71, 44, -37, 45, 69, 37, 52, -93, 69, 95, -121, 14, -61, 124, -78, -77, -14, 35, 26, -89, -110, 50, 51, 0, -113, 101, 85, -119, -63, -64, -12, 69, -94, -69, -20};
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
    msg.setTimeStamp(0.5906209121547696);
    msg.setSource(39757U);
    msg.setSourceEntity(218U);
    msg.setDestination(25937U);
    msg.setDestinationEntity(160U);
    msg.origin.assign("GFFWEMTWITJCWULZEQRQIVYDHYOKXDVPHTMTSQRXWYOZGZFVDEBVKGYSIRMDXNFUHWEXKVAVCLYACLPIFVNAAHZJAUDSIPTSZRLHJNMXXCVPFANYTWOKRGEQBMEQPOBUKSXXNOUZQQEKRMAFLKHHFWCRRSWVBNYIZLJPGBICDGTDZBFDBKYUMIXLPIPVOAGKORJJSJQUJGLWDFGWJDOTSQCPMYLNZECB");
    msg.htime = 0.5982954185956528;
    msg.lat = 0.6187122283444189;
    msg.lon = 0.76640006614684;
    const char tmp_msg_0[] = {-69, 45, -57, -10, 110, -92, 82, 17, 69, 92, -127, -83, -99, -122, 55, -15, 20, 120, -119, -51, 51, -43, -124, -36, 105, -5, 49, -117, -119, 73, -46, -81, 56, 92, 97, 38, 32, 118, -53, 66, -76, -86, 107, -72, 124, -52, -31, -128, 126, 36, -35, -57, -105, 72, 80, 82, 21, -112, -98, 10, 38, -84, -126, 120, -90, -113, 55, -69, 35, -96, -30, 79, -84, -58, -79, -45, -102, -124, 23, 125, 85, 101, -66, -74, 15, 125, 112, -66, 88, 76, 1, 54, 30, -9, 38, -94, 21, 106, 85, 20, 109, 69, -122, 3, 87, -72, -102, 37, 24, -8};
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
    msg.setTimeStamp(0.5827588533682926);
    msg.setSource(61378U);
    msg.setSourceEntity(75U);
    msg.setDestination(58691U);
    msg.setDestinationEntity(71U);
    msg.req_id = 4755U;
    msg.ttl = 18248U;
    msg.destination.assign("TVDAOXDCFSFQOBUWUGRYPWHRGFZODBZTSTTRUXIMYUSJTHBLKHAALEKERINOHKQWZKCPMHIIOQQXHNKLKPYZQEONCRJWKQQXRDAARTJYXWLLOPVSMGPAYJWYHMSFWTQLRVSSMWJVBDJVLHWLBAESQYCVGMMMUEBGJNFDM");
    const char tmp_msg_0[] = {49, -100, -10, -90, -46, 55, 79, -14, -23, -25, -10, -96, 110, -6, 9, 44, -99, 65, 50, 36, 52, -81, -108, -51, -124, 43, -81, 83, 3, 80, -95, 50, -91, -44, -74, -24, -14, 83, -114, 108, -34, 31, -13, 124, 63, -115, -108, 24, 15, -84, -121, -17, 85, 66, -54, -89, -61, 47, 47, -23, 32, -68};
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
    msg.setTimeStamp(0.2750018686131671);
    msg.setSource(58735U);
    msg.setSourceEntity(17U);
    msg.setDestination(53546U);
    msg.setDestinationEntity(251U);
    msg.req_id = 37603U;
    msg.ttl = 36572U;
    msg.destination.assign("CWZDYGHDAQVYTGTUZWZNMABTLOREOXMKOPQMLQAUR");
    const char tmp_msg_0[] = {-10, 52, 64, 91, -55, 89, -97, -19, 45, -76, -64, -56, -120, 85, 42, -56, -35, -1, -27, 113, -120, -1, 6, 86, 74, -21, -38, -78, -60, -20, 78, 91, -70, -118, 120, 28, -37, -109, -25, 85, 6, 107, -115, 57, -122, 16, 57, 20, -31, -48, -68, -26, 23, -83, 33, -11, -37, -112, 126, -99, 80, 64, -26, 102, 36, -30, -5, 60, 56, 105, -45, -95, -118, 107, -41, -54, 8, 110, 70, 77, 67, 118, 111, 123, 117, 57, 102, 116, 66, 66, 38, -57, -30, 70, -84, -55, -124, 13, -36, 59, 52, 10, 10, 111, 95, -12, 16, -110, 104, -39, -112, 9, -59, -20, 98, -94, 94, 0, -83, -94, 49, 113, 31, -61, 43, -113, 31, 120, 93, -56, 49, 16, -38, 71, -49, 23, 18, 101, -47, 87, -59, 67, 52, 122, 13, 79, 71, -21, -62, -74, 71, 53, -55, 107, 38, 26, -83, 100, 91, -98, 105, 46, -57, 98, -47, 64, 110, 7, -39, 126, -13, 54, -68, 7, -85, -10, 36, -82, -103, 7, -52, -36, 25, -116, 67, -12, 58, 114, 91};
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
    msg.setTimeStamp(0.23886824633129722);
    msg.setSource(23024U);
    msg.setSourceEntity(203U);
    msg.setDestination(24023U);
    msg.setDestinationEntity(45U);
    msg.req_id = 15584U;
    msg.ttl = 41378U;
    msg.destination.assign("EZTFACAWMDBCHFATITCNPQJKMXSUZQJUVCLLXDGCZDKVRJKAROWDBYWBJYRNZHUFGEGXZYLGSLZMZTDMWQURQVBACOEDSIKYVIGKQOTVRBHPTMLMRNYNOHRSWPOSLDCNQATEXHWFZSQGEBCVBFDUQWGOVPFOCHJAPYNTSHONXHALBIPKX");
    const char tmp_msg_0[] = {-58, 59, -119, 30, 57, 112, 14, 76, 50, 23, 111, -11, -112, -83, 103, 10, 106, -127, 103, 20, -51, 40, 49, 58, -88, -29, 77, 21, 52, 69, -16, 5, -53, 51, -78, 112, -92, -106, 93, 22, -4, 2, 27, -9, -18, -40, 31, 82, 2, -59, -17, 114, 105, -66, -84, -9, 39, -39, 27, 82, 9, 13, -112, -67, 64, -31, -120, -91, 88, 47, 115, -100, -33, -7, 24, -126, -104, -118, 92, -64, -17, 53, -23, 58, -124, 104, -33, -80, 44, -54, -111, -1, 103, -125, -100, 48, -58, -71, 18, -78, 23, -92, 109, -111, 4, 76, 97, -94, 123, -106, 72, 59, 107, 25, 36, -49, 112, 43, -106, 95, 25, 108, 10, -56, 122, 25, 57, -44, -67, 40, 27, -60, 2, -62, 21, -8, 50, 96, 26, 9, -60, -82, -101, 104, -63, 0, -93, -75, 105, 92, -41, 105, -67, 41, 112, -128, 114, 57, -125, 25, -2, 19, -122, 44, -42, -57, 124, 18, -89, 108, -89, 23, 57, 117, -9, -35, 51, 114, 45, -115, -102, -122, 83, 49, 5, -111, 17, 25, 80, -87, 71, 7, 56, 86, -58, -97, 52, 117, -82, 118, 65, -14, 86, 44, 93, 80, -26, 63, 112, 124, -12, 35, 92, -81, 115, 9, -3, -63, 31, 111, 74, 103, 56, 90, -126, 29, 65, -33, -66};
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
    msg.setTimeStamp(0.7797952678955158);
    msg.setSource(8252U);
    msg.setSourceEntity(98U);
    msg.setDestination(56538U);
    msg.setDestinationEntity(21U);
    msg.req_id = 33397U;
    msg.status = 173U;
    msg.text.assign("CKADOLIYKWMPZFSHVNFPEAOLPTKVKMVMUWATZKBXTIBPJCVSPTICNCIHYRAA");

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
    msg.setTimeStamp(0.7547842377651182);
    msg.setSource(44513U);
    msg.setSourceEntity(203U);
    msg.setDestination(33121U);
    msg.setDestinationEntity(57U);
    msg.req_id = 11246U;
    msg.status = 220U;
    msg.text.assign("OUIBOEDWZZHRGCFNUIRERZSGASYQXJTOQSMFFCRIZPOGOLUTVCPHJCPIJYBPJGNCTTJFPDLNKJKEFOMGFQJKGLCQYVIEMTCYEBZCZESTSBALLKXKKINRAUVQBFUDPDIZMBZDDPQDFDXVUOLXNPEYV");

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
    msg.setTimeStamp(0.2620330472154173);
    msg.setSource(37634U);
    msg.setSourceEntity(116U);
    msg.setDestination(18092U);
    msg.setDestinationEntity(88U);
    msg.req_id = 42054U;
    msg.status = 101U;
    msg.text.assign("YISYYESQBFPAGFRNRKMRZAOQZNDZRXSVZQ");

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
    msg.setTimeStamp(0.9128803660635643);
    msg.setSource(44460U);
    msg.setSourceEntity(191U);
    msg.setDestination(36243U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("PJBFSQYJQREPXZIBJGQOVGHKCDKFPVEHXKKTYYFPBHATINEKNIKPNR");
    msg.links = 1252686070U;

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
    msg.setTimeStamp(0.9459242407146504);
    msg.setSource(60261U);
    msg.setSourceEntity(154U);
    msg.setDestination(29303U);
    msg.setDestinationEntity(16U);
    msg.group_name.assign("GBSFMYGSIVOHQJDYNOHEADFCTNZUVPITJKYSVBTINEPVMAQVCRNSWXIDQQGMDKGGIAOTBLVLWCDWXZKAUCSFUPPBIMUYXREAPETASHELOBRXUPJAKFEKOUWLDFQLAXTBIWMZKBKDGISGHRYBZOJYGZRHRNW");
    msg.links = 763465628U;

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
    msg.setTimeStamp(0.8332060725848938);
    msg.setSource(13400U);
    msg.setSourceEntity(66U);
    msg.setDestination(60079U);
    msg.setDestinationEntity(35U);
    msg.group_name.assign("KGKIUHRYMJRUKJDIRPGYIFBFQNVLSPEKLJAOGOBZPWQERJNZXUOKSPJMQCWLTWLEYQTGFWZTWDTRVMMXIVYUQACNLRYXAZCOKVLWZMXUBDZHQKNPXIJERUFYUGCJHKBHFMSBQAOXROZVQAITVLMTSCXDOCOFYESGDEPVNJHHWMSALDTAWUACNVBQYBSGCPIHAZNDNEGFAVJBNWXOXOFZDIZHTBTPTNLHPKDECP");
    msg.links = 2255482639U;

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
    msg.setTimeStamp(0.09406588325277421);
    msg.setSource(23623U);
    msg.setSourceEntity(15U);
    msg.setDestination(61053U);
    msg.setDestinationEntity(138U);
    msg.groupname.assign("ZUUHSGQYWJAVUJIFMCJYVOFWFUYKKRLTZCDGJEMVHAODVFIOGBYPJZRLZPHRLUNMCEBBYCPUONLKJOIEFPNEYBANXVDZSPGDUWXQUTPAAPDGBAD");
    msg.action = 62U;
    msg.grouplist.assign("IPKIIKBXAHDNBXJROWYQIQCQNDTSFMIGJZSMOFDZMISGMEMJXXXWHDITFGFKVCNDMFXSTRRCFOZNWQWHFAGUFWYZCVZINCENPKBXXETTKSKWYJQKRRETSHNNKLDARDHSPRBNVUHMKVKYGWLZWPP");

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
    msg.setTimeStamp(0.3280047925800508);
    msg.setSource(24153U);
    msg.setSourceEntity(213U);
    msg.setDestination(46061U);
    msg.setDestinationEntity(60U);
    msg.groupname.assign("SBSUNPOWMGAVSINDAXKYEGVGTLUMMQNAIWFZNUTAAXHQBBDLKKQSIOAHPIUFLTUILWVKSCMEWVHDVM");
    msg.action = 18U;
    msg.grouplist.assign("HJCCUNMBNBSAFNUXNDUCRP");

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
    msg.setTimeStamp(0.017980087731126693);
    msg.setSource(36048U);
    msg.setSourceEntity(95U);
    msg.setDestination(24320U);
    msg.setDestinationEntity(203U);
    msg.groupname.assign("ZZYSGSBWIZPIKNFUFPWOVEVKEPABOPPHQATNOCUUMUKJZYWSHDBXGOITYDCAHAETCUHUHQSZTYJYBSRXEWWEJZRWLRBPRRGLKLFOPAMKERPVXDKAGGKBJJSDCMKLCXPLSFDYDHTGQYVJZAQVTJNMWUONGIYELFVMAOZXSJKMNXZVKEYCDWLLRBHPADQMQBLXNWGUGIWCXBTNIEMQMTNSLCOQIEHRDFHOUJFIQRJTGD");
    msg.action = 194U;
    msg.grouplist.assign("NLHNRIGHHHDKKTYTEFCTVWPEOZMQCVVVVJWOZKSIBYRZPUQWQRIJXSAJQOBAMFUHROSKGERLJUGCQMDPKXFPBMFUABJUVQAFWBNIWW");

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
    msg.setTimeStamp(0.21634813531892905);
    msg.setSource(17102U);
    msg.setSourceEntity(5U);
    msg.setDestination(56934U);
    msg.setDestinationEntity(228U);
    msg.value = 0.11478596991940082;
    msg.sys_src = 56861U;

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
    msg.setTimeStamp(0.7977916107464598);
    msg.setSource(2244U);
    msg.setSourceEntity(160U);
    msg.setDestination(9979U);
    msg.setDestinationEntity(249U);
    msg.value = 0.5409871967056653;
    msg.sys_src = 24822U;

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
    msg.setTimeStamp(0.9329997195805322);
    msg.setSource(63243U);
    msg.setSourceEntity(185U);
    msg.setDestination(58530U);
    msg.setDestinationEntity(209U);
    msg.value = 0.21748727126460288;
    msg.sys_src = 7610U;

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
    msg.setTimeStamp(0.8986009617866961);
    msg.setSource(31262U);
    msg.setSourceEntity(137U);
    msg.setDestination(54186U);
    msg.setDestinationEntity(214U);
    msg.value = 0.014232681981821482;
    msg.units = 73U;

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
    msg.setTimeStamp(0.051524567992680015);
    msg.setSource(24685U);
    msg.setSourceEntity(16U);
    msg.setDestination(62070U);
    msg.setDestinationEntity(148U);
    msg.value = 0.7083486122155976;
    msg.units = 58U;

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
    msg.setTimeStamp(0.32759881667326296);
    msg.setSource(57230U);
    msg.setSourceEntity(245U);
    msg.setDestination(63108U);
    msg.setDestinationEntity(244U);
    msg.value = 0.7315430925562136;
    msg.units = 25U;

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
    msg.setTimeStamp(0.7222748166306506);
    msg.setSource(10063U);
    msg.setSourceEntity(102U);
    msg.setDestination(5520U);
    msg.setDestinationEntity(10U);
    msg.base_lat = 0.352456531472657;
    msg.base_lon = 0.9774954230326832;
    msg.base_time = 0.6072222620677324;

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
    msg.setTimeStamp(0.9452788527768624);
    msg.setSource(21718U);
    msg.setSourceEntity(77U);
    msg.setDestination(18322U);
    msg.setDestinationEntity(45U);
    msg.base_lat = 0.4848410148596163;
    msg.base_lon = 0.22695860186353367;
    msg.base_time = 0.8979490740820205;

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
    msg.setTimeStamp(0.22819789917214017);
    msg.setSource(17612U);
    msg.setSourceEntity(144U);
    msg.setDestination(42652U);
    msg.setDestinationEntity(31U);
    msg.base_lat = 0.02660862773439865;
    msg.base_lon = 0.5971816108669582;
    msg.base_time = 0.3423766610319283;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 4111U;
    tmp_msg_0.destination = 41666U;
    tmp_msg_0.timeout = 0.5366317763418206;
    IMC::ReportControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 126U;
    tmp_tmp_msg_0_0.comm_interface = 43U;
    tmp_tmp_msg_0_0.period = 20957U;
    tmp_tmp_msg_0_0.sys_dst.assign("XYJKKAZGIVNAGIW");
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
    msg.setTimeStamp(0.016407737739968398);
    msg.setSource(15952U);
    msg.setSourceEntity(61U);
    msg.setDestination(47645U);
    msg.setDestinationEntity(85U);
    msg.base_lat = 0.35738843206543325;
    msg.base_lon = 0.0002773125619496275;
    msg.base_time = 0.8991821692692957;
    const char tmp_msg_0[] = {-62, 0, 88, -101, -17, 65, 30, 43, -57, -1, 71, 106, 63, -66, 44, 72, -123, -126, -54, 117, 55, -36, 34, -93, -98, -88, -12, -82, -111, 61, -112, 126, 6, -50, -91, 109, -25, 86, 89, 120, 76, 17, -5, 119, -56, 119, -102, -102, -106, -34, 21, 58, -87, 106, 14, -116, -5, -116, 4, -117, -27, 77, 43, -109, -84, -117, 77, -125, 122, 75, 21, -53, -33, 101, -41, -55, 93, 39, 75, 42, -94, 119, 109, -70, 58, -22, 117, 60, -54, -13, 78, 122, 35, -47, -102, 114, 18, 96, 57, -50, -116, 17, 112, 31, -83, 108, -29, 118, 7, -63};
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
    msg.setTimeStamp(0.06135349643273713);
    msg.setSource(3486U);
    msg.setSourceEntity(89U);
    msg.setDestination(61714U);
    msg.setDestinationEntity(19U);
    msg.base_lat = 0.9264996878544921;
    msg.base_lon = 0.09296613768881157;
    msg.base_time = 0.05544562818948551;
    const char tmp_msg_0[] = {37, 88, -43, -39, 84, -110, -2, 94, 3, -60, -111, -10, -61, 124, 108, -126, 49, -10, -15, 62, -126, 13, -118, -7, -128, -92, -80, -88, 46, 62, 78, -4, 59, -119, 63, 99, 72, 29, 56, -102, -21, 107, 117, -23, -12, -32, -17, -106, -77, -54, 108, 115, -19, 48, -10, 71, 36, 82, 38, -91, -70, -26, -49, 121, 112, 4, 111, 63, -128, -124, -25, -31, -103, -59, 43, 117, -65, 14, -44, -6, 45, -96, 122, -11, -67, 49, 125, 96, -104, -125, 9, -25, -81, 89, -50, -62, -27, 78, 53, -73, 102, -85, 113, 99, 48, 79, -48, -44, -69};
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
    msg.setTimeStamp(0.24078793671886145);
    msg.setSource(60575U);
    msg.setSourceEntity(110U);
    msg.setDestination(65151U);
    msg.setDestinationEntity(8U);
    msg.base_lat = 0.00416015696355132;
    msg.base_lon = 0.5517682928067247;
    msg.base_time = 0.14403655462549625;
    const char tmp_msg_0[] = {108, 122, -34, 62, -37, 24, -54, 11, 82, 4, 62, -63, 83, -37, -123, 81, 69, 27, -120, -69, 17, -51, 10, 58, 50, -64, 103, -101, -39, 43, -95, -114, 104, -40, 118, -54, -60, -3, -53, -116, -16, 123, -3, -30, -8, 57, -66, 121, -28, -66, -123, 78, -46, -83, -91, 65, -16, -22, 11, -35, -79, 80, 51, -5, 64, 81, 90, 105, -58, -69, 86, 86, 100, 16, -125, -80, 51, -1, 98, 88, -4, -87, 114, -12, -3, 79, -9, 48, -10, 25, 82, -71, -9, -32, -45, -113, 78, 118, 83, 126, 117, -12, -73, -49, 98, 82, -120, 13, 29, -70, 60, 20, -10, -2, 66, -121, -62, 37, -18, -84, 32, 7, 41, 6, -109, 25, -22, 110, -61, 4, -35, 6, -93, 118, 59, 88, 70, -62, 5, -86, -21, 19, 119, 113, -80, 80, -125, -121, 124, 82, -103, 93, 45, -110, -31, 32, -82, 47, 126, -65, 86, -83, -122, 60, -65, -103, 99, 1, -44, 17, -25, 37, -127, -25, 59, 26, -49, 122, 24, -47, 67, 99, -20, 95, -90, 0, 64, -5, 50, 108, -103, -13, 15, 44, 84, 8, -90, -80, 104, -23, 122, 104, -63, 19, -34, -88, 60, -12, 25, 7, 25, -22, -102, -78};
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
    msg.setTimeStamp(0.6563811086359411);
    msg.setSource(27001U);
    msg.setSourceEntity(122U);
    msg.setDestination(1276U);
    msg.setDestinationEntity(146U);
    msg.sys_id = 20636U;
    msg.priority = 105;
    msg.x = -3900;
    msg.y = 14762;
    msg.z = -15721;
    msg.t = 30333;
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 61U;
    tmp_msg_0.command = 241U;
    tmp_msg_0.settings.assign("LYYOEZWWXIYPPQTCKSLVMATQZXGLEMSQXFCDFUTWCIRVAWFVKLXOGOOSYOPRDSZCUWKHJGQFBMWDJSVFUMCCHTNIUPJHVRYUATBLRJXXUDRTCJVQKZOLFNIGXNEAWGBLBEMRHESONAWURIBTHYFDUFNSNAKHKPZIAOAZMSAGDPQSKVVWPTHXKBLX");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 11508U;
    IMC::SoiWaypoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.29614848381441294;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.36524001111651005;
    tmp_tmp_tmp_msg_0_0_0.eta = 3588018205U;
    tmp_tmp_tmp_msg_0_0_0.duration = 13750U;
    tmp_tmp_msg_0_0.waypoints.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("IVQTTCPMCWADJQMNWBESPXRCMCFGCYSKYBLVHIOVMUQPWZXDEHKORSLDOABJSNIFTKZOUZZRMYBOW");
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
    msg.setTimeStamp(0.3325492688759416);
    msg.setSource(37300U);
    msg.setSourceEntity(67U);
    msg.setDestination(52807U);
    msg.setDestinationEntity(103U);
    msg.sys_id = 7297U;
    msg.priority = -72;
    msg.x = -25513;
    msg.y = -21000;
    msg.z = 3062;
    msg.t = -11025;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.7323021805261796;
    tmp_msg_0.i = 0.294123053557928;
    tmp_msg_0.d = 0.7589605812160397;
    tmp_msg_0.a = 0.8026436922901136;
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
    msg.setTimeStamp(0.008044562723806603);
    msg.setSource(57406U);
    msg.setSourceEntity(252U);
    msg.setDestination(21878U);
    msg.setDestinationEntity(34U);
    msg.sys_id = 4269U;
    msg.priority = 109;
    msg.x = -26422;
    msg.y = -21969;
    msg.z = 13383;
    msg.t = -10600;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 63062U;
    tmp_msg_0.sys.assign("JUPGBRDCWDVSKXYRQDFRHAYQTATHQFGFDBJRLIWIWZVPQCCNKNJSIDLMLBZKHCKHOAAMYUMVQSHAPZNZVNPXVIQ");
    tmp_msg_0.value = 0.5170854299978697;
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
    msg.setTimeStamp(0.3485654029884644);
    msg.setSource(19518U);
    msg.setSourceEntity(221U);
    msg.setDestination(11760U);
    msg.setDestinationEntity(101U);
    msg.req_id = 41479U;
    msg.type = 155U;
    msg.max_size = 14820U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.304338937286707;
    tmp_msg_0.base_lon = 0.9751798784047778;
    tmp_msg_0.base_time = 0.9576568264639229;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 11545U;
    tmp_tmp_msg_0_0.priority = -26;
    tmp_tmp_msg_0_0.x = -30024;
    tmp_tmp_msg_0_0.y = 20029;
    tmp_tmp_msg_0_0.z = 22226;
    tmp_tmp_msg_0_0.t = -8402;
    IMC::SessionStatus tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sessid = 1625922236U;
    tmp_tmp_tmp_msg_0_0_0.status = 88U;
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
    msg.setTimeStamp(0.9443343725599221);
    msg.setSource(11187U);
    msg.setSourceEntity(204U);
    msg.setDestination(22729U);
    msg.setDestinationEntity(200U);
    msg.req_id = 61598U;
    msg.type = 208U;
    msg.max_size = 18585U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3511290196430754;
    tmp_msg_0.base_lon = 0.5715185790229171;
    tmp_msg_0.base_time = 0.4164695212857701;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 20880U;
    tmp_tmp_msg_0_0.priority = -114;
    tmp_tmp_msg_0_0.x = -9466;
    tmp_tmp_msg_0_0.y = -32739;
    tmp_tmp_msg_0_0.z = -8086;
    tmp_tmp_msg_0_0.t = -1517;
    IMC::UsblModem tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("SHKEDBZUOFQSPYBGVPSNGCUYOZQSYAMJRKJNCLIWYNSNODWTFKVLFWHUVVAUZOOUQIWNEJQQWBVGXYLXDKEIYXOVGUSDNTFAMAATZJSSHJIGEPEPSMRMXFSKXRJAVZBUTKELTJFIXGDEUBXGCBCNPONCLOMNTQHDYVZLMBMGTMDJGFPBJHHYHIRAQCHZATCYHDLRFLZOZMWKCRARWRHQPKDPCTXBEQAIITWUXWG");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.22241808336762514;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.014481257020573901;
    tmp_tmp_tmp_msg_0_0_0.z = 0.15102338603512544;
    tmp_tmp_tmp_msg_0_0_0.z_units = 95U;
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
    msg.setTimeStamp(0.6247817635288454);
    msg.setSource(21431U);
    msg.setSourceEntity(246U);
    msg.setDestination(3029U);
    msg.setDestinationEntity(11U);
    msg.req_id = 58531U;
    msg.type = 123U;
    msg.max_size = 41862U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.838678518342875;
    tmp_msg_0.base_lon = 0.17817177665639228;
    tmp_msg_0.base_time = 0.1152058159559386;
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
    msg.setTimeStamp(0.3228884958923637);
    msg.setSource(41005U);
    msg.setSourceEntity(72U);
    msg.setDestination(11673U);
    msg.setDestinationEntity(109U);
    msg.original_source = 63323U;
    msg.destination = 43442U;
    msg.timeout = 0.46308620759453833;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.48336449601197107);
    msg.setSource(47532U);
    msg.setSourceEntity(251U);
    msg.setDestination(6064U);
    msg.setDestinationEntity(220U);
    msg.original_source = 26115U;
    msg.destination = 5548U;
    msg.timeout = 0.39339219476857834;
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.539275460642466;
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
    msg.setTimeStamp(0.4796767465438059);
    msg.setSource(20754U);
    msg.setSourceEntity(239U);
    msg.setDestination(26904U);
    msg.setDestinationEntity(5U);
    msg.original_source = 44742U;
    msg.destination = 1771U;
    msg.timeout = 0.3632675587429004;
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.5386429048530644;
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
    msg.setTimeStamp(0.5988621458671406);
    msg.setSource(41507U);
    msg.setSourceEntity(69U);
    msg.setDestination(48952U);
    msg.setDestinationEntity(29U);
    msg.type = 124U;
    msg.comm_interface = 40921U;
    msg.model = 6582U;
    msg.list.assign("DFYOUTCXTVUDLJ");

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
    msg.setTimeStamp(0.024174739312171956);
    msg.setSource(41664U);
    msg.setSourceEntity(47U);
    msg.setDestination(13322U);
    msg.setDestinationEntity(175U);
    msg.type = 145U;
    msg.comm_interface = 49658U;
    msg.model = 40604U;
    msg.list.assign("SXBYSQLPKXVRGYIRMOXCETDAFHXWAMZLAGNTLQNLDHZYJZZABQTNFWZRMVNQFOWETDKRPINDTLHFLQKWWBOUOSXCWZDCEOVWQVMSLHKJUFYYFBPWHOYZISTHVBCGMEPIAHEEGBQQHKXVUNMQTWSPJIIBBHUJDIGCNGAJYKOEDUYYTGEJACXFOCROZPSRUG");

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
    msg.setTimeStamp(0.6639797911551236);
    msg.setSource(31871U);
    msg.setSourceEntity(132U);
    msg.setDestination(6239U);
    msg.setDestinationEntity(188U);
    msg.type = 133U;
    msg.comm_interface = 56905U;
    msg.model = 24466U;
    msg.list.assign("EJHTMUXTFKJFVYOGVCYDZASVBVFTUISGHNPQRHBYWUNEBWSEGOETKHRJMIVIYCMXPYOYLKWSFMVOADJKKQRMOWSIILMZBABLZLOLLUSBKZIXMUZVQLYMVFIPTWGGFJBPS");

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
    msg.setTimeStamp(0.3291185141389813);
    msg.setSource(10249U);
    msg.setSourceEntity(21U);
    msg.setDestination(44513U);
    msg.setDestinationEntity(104U);
    msg.type = 83U;
    msg.req_id = 433494878U;
    msg.ttl = 51304U;
    msg.code = 205U;
    msg.destination.assign("VOKGISKDLDEPOOCMKCFYJGYXBFWSTCSADXCLUDNSWELBYXTHBZHFHOLFMMGQZESIRAUTHBADIBLZRJBNMLXQZEBDVAOYVZBTYGARUJJEOPEUORKDPXXNZGHQCIUCRVWSHPWYTQTQXUEDPQAWMJQSEPOYTYGZMPNHZNYIWBAJPSJLNLSKKKENIUFQBAQSGPJYWRCHTJFLIRFHWKIWCRVLJFVXOCDVMVIKFKUZAMVIZOGGAVCRGPQNT");
    msg.source.assign("YTDZZYMTGVBWQFCWSNAVLQNMTSGCFUZEXLGMMXCYHTPOSXQYKJRPDGDUWEZMCMCNVNVSPDHHJAQHANVFUVSYGXTCAFGNTUXRXLCFCDQCSFAIJBWRHZOBUSDPPHPILNGDRBGISBWMJUMLOUAUJGRPFPBHVOJLDEEQOO");
    msg.acknowledge = 218U;
    msg.status = 237U;
    const char tmp_msg_0[] = {-61, 88, 77, 32, -91, 74, -36, -82, 34, 75, -84, -57, -74, 97, -99, -61, 51, -106, 4, -67, 89, -83, 26, -80, -18, -53, -39, 30, 57, 13, -55, 55, 74, 99, -19, 102, -66, 63, 124, -51, -28, -92, 78, 101, -21, -40, -16, 75, 66, 89, 26, -64, -25, -67, 81, 120, 110, 67, -25, -41, 104, -48, -77, -92, -22, 65, 55, 101, -9, 102, -11, 95, -116, 45, 111, -82, 42, -7, -16, 68, 23, -113, 45, 5, 44, 35, -122, -36, 82, -110, 113, -65, 29, 18, -120, 72, -17, 4, -92, -41, -10, -13, -28, 99, 63, -70, -20, -99, 41, 80, -123, 1, 50, 75, -117, 39, 89, 119, -52, -77, -93, -127, 39, -98, 115, 82, 45, 29, -49, 39, -22, -86, -87, -51, -123, -111, -85, 11, 103, 84, 46, -75, -29, -4, -40, 54, 74, -87, -18, -123, 83, -19, 98, -20, -22, -112, 9, -4, 58, -9, -126, -35, -27, 111, 59, 37, 0, 27, -58, -42, 60, -44, -2, -113, 61, -37, 78, -60, -109, -110, 110, 77, 94, -124, -120, -80, 62, -115, -127, 28, -68, 101, -98, 47, 80, 69, -92, 22, -28, -62, -120, 54, -71, 25, -63, 13, -32, -14, 115, -43, -103, 112, 123, -22, 45, -114, 59, 63, 70, -23, -125, 2, -49, 20, -68, 30, -37, 65, 0};
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
    msg.setTimeStamp(0.93108049654798);
    msg.setSource(36124U);
    msg.setSourceEntity(135U);
    msg.setDestination(60723U);
    msg.setDestinationEntity(147U);
    msg.type = 88U;
    msg.req_id = 3573547997U;
    msg.ttl = 17810U;
    msg.code = 125U;
    msg.destination.assign("MGTSEEYJIJLNNJCTAZKUPLGFWGUJSKCQKSFBQDQVSCOIMHRHGXVKUPUIMOLUVLLJFNLAQQFKXYPCSABUBNZIBMLAYXQMOFWEZDOIYLJVTSCDDKYCTGTNPEZHLALCEXNHVYFYWQIWYTUBRWADOFVURODICBGPZIOUDJRRXZEBXNYNGWPQSUKOHCJCRTTIFGRAXARVZQKEIHHVPHZXHYOKRMDPBTSGWBWMMSEQRPVNBEXSHAWJONTXEPZW");
    msg.source.assign("AZRKDCOVNKXTPQYNMGMACQTYPELJYDIVWKNCELZXCH");
    msg.acknowledge = 89U;
    msg.status = 18U;
    const char tmp_msg_0[] = {-117, -108, 18, 69, -30, 100, 10, -6, -99, 118, 20, -100, -97, 18, 6, 49, -56, -122, 41, -52, 12, -12, -39, -106, 116, 55, -20, 62, 95, 1, 18, 109, 39, 105};
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
    msg.setTimeStamp(0.6269113248381978);
    msg.setSource(63306U);
    msg.setSourceEntity(40U);
    msg.setDestination(20119U);
    msg.setDestinationEntity(193U);
    msg.type = 103U;
    msg.req_id = 2775627657U;
    msg.ttl = 5744U;
    msg.code = 73U;
    msg.destination.assign("RKVVFRQZBBRIIKYKLPRNRRDQHWEOIOCDTFPMHZEUTGYLCQSIETNATSOIJPDCUOSDGZYGDWPOIJJQTMSXMNVLAHAHEWXNON");
    msg.source.assign("LZJRKCLQXJSSRAYPQYWLCXBQMVJDYEFBZHQGNYPUVKBAWLDSHOPXIXOWDERTNKFLWOHOIJKDEZWMYVUTKUZGXUQWFEJZFTJUFNSGVBBZSRQJTIDMXMASXAGCJDCNLEASGMCVIZTYPRYCZHOCVAGFFBIMZHDHZ");
    msg.acknowledge = 190U;
    msg.status = 138U;
    const char tmp_msg_0[] = {12, -74, -86, -108, 7, -87, 50, -106, -29, 97, -12, -6, -93, 95, 80, -32, -118, 106, 54, -84, 40, -94, 45, -101, -122, 118, -42, -80, 59, -42, 13, -83, -9, -47, -50, -9, 16, -55, -117, 63, 66, 27, -93, 14, -105, -58, -66, 1, 19, 85, 123, 95, -25, -126, 115, -43, 33, -16, -127, -81, 74, -5, 3, 17, -3, -59, 36, -38, 73, 92, 5, -34, 7, 95, 45, -94, 110, -79, 73, 98, 119, 70, 87, -24, -87, -114, -19, -103, -123, -29, -110, 49, -43, -24, 93, -69, -67, -79, -35, 107, -30, 28, 14, 22, -95, -43, -34, 85, -5, -67, 11, 10, 28, 12, 29, -28, -67, 44, -108, -104, 83, -50, 39, -105, 44, -3, 19, 18, 72, -84, -104, -86, -45, 50, 99, 72, -36, -6, -105, 123, 61, 79, -103, -127, -39, 48, -123, 1, -54, 108, 91, 16, 64, 117, -121, -115, 84, -38, -79, 9, 72, 108, -128, 67, 8, -31, 56, 51, 64, 109, 84, 50, -64, -77, -70, 110, -62, -109, 119, -47, -102, 47, 23, 116, -68, 113, 29, -103, -67, 38, -103, -66, -72, -112, -52, -78, -116, 64, 61, 54, 72};
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
    msg.setTimeStamp(0.47674825078152516);
    msg.setSource(21320U);
    msg.setSourceEntity(23U);
    msg.setDestination(4447U);
    msg.setDestinationEntity(230U);
    msg.id = 29U;
    msg.range = 0.3574300141662755;

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
    msg.setTimeStamp(0.41583707162410877);
    msg.setSource(52535U);
    msg.setSourceEntity(43U);
    msg.setDestination(27333U);
    msg.setDestinationEntity(34U);
    msg.id = 75U;
    msg.range = 0.04675768788700729;

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
    msg.setTimeStamp(0.48557175606320835);
    msg.setSource(21880U);
    msg.setSourceEntity(224U);
    msg.setDestination(20474U);
    msg.setDestinationEntity(71U);
    msg.id = 32U;
    msg.range = 0.645233887225842;

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
    msg.setTimeStamp(0.1608568762559779);
    msg.setSource(61341U);
    msg.setSourceEntity(128U);
    msg.setDestination(57754U);
    msg.setDestinationEntity(147U);
    msg.beacon.assign("IUAWTYPLDMKKBIEICXFBSQDMFWCVSOGJEASDDRZLOZIECZTMPIAVEADRVVQNLIYMFVGRAPFYBONXTHBKXDMHMKERLZZWDVDYBSISKBEGGCSTUQQLXNWROKEOYSIJIOKNTXW");
    msg.lat = 0.7112966440075901;
    msg.lon = 0.679669621296589;
    msg.depth = 0.1227693942386271;
    msg.query_channel = 55U;
    msg.reply_channel = 160U;
    msg.transponder_delay = 89U;

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
    msg.setTimeStamp(0.12109483545111488);
    msg.setSource(30200U);
    msg.setSourceEntity(221U);
    msg.setDestination(14247U);
    msg.setDestinationEntity(158U);
    msg.beacon.assign("YJNETPSUXMLERDAQULRYSQSALDK");
    msg.lat = 0.38346322026274715;
    msg.lon = 0.112171483648286;
    msg.depth = 0.1893885299755118;
    msg.query_channel = 54U;
    msg.reply_channel = 239U;
    msg.transponder_delay = 208U;

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
    msg.setTimeStamp(0.3679409637233324);
    msg.setSource(5303U);
    msg.setSourceEntity(120U);
    msg.setDestination(6347U);
    msg.setDestinationEntity(229U);
    msg.beacon.assign("MGISLRPQRPNWPCLVYJQBESTRQVQJAAMSUXVSVCDXJOJOYTTHWVANGWTSQVAVNJCBDGOKRDEXTFHCUTUAKAVUMRSPHZNYHHHWWNZRARJOWOKIUMTDMYQCDJEOBIFUDIBUHBDNUGGFQCKACSLKXSXGZK");
    msg.lat = 0.14861543012713374;
    msg.lon = 0.2881162982412355;
    msg.depth = 0.27913947744002665;
    msg.query_channel = 163U;
    msg.reply_channel = 20U;
    msg.transponder_delay = 219U;

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
    msg.setTimeStamp(0.6938919704524796);
    msg.setSource(56238U);
    msg.setSourceEntity(130U);
    msg.setDestination(5440U);
    msg.setDestinationEntity(68U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.8949653814597429);
    msg.setSource(35859U);
    msg.setSourceEntity(184U);
    msg.setDestination(15899U);
    msg.setDestinationEntity(251U);
    msg.op = 122U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VNUZTYCTMVKKCYGOIER");
    tmp_msg_0.lat = 0.4254151390448483;
    tmp_msg_0.lon = 0.8704938532619386;
    tmp_msg_0.depth = 0.73223918696193;
    tmp_msg_0.query_channel = 100U;
    tmp_msg_0.reply_channel = 191U;
    tmp_msg_0.transponder_delay = 236U;
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
    msg.setTimeStamp(0.7308985105101643);
    msg.setSource(55391U);
    msg.setSourceEntity(191U);
    msg.setDestination(11646U);
    msg.setDestinationEntity(217U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.3685276169414947);
    msg.setSource(29112U);
    msg.setSourceEntity(99U);
    msg.setDestination(2164U);
    msg.setDestinationEntity(53U);
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.4920115503196689;
    tmp_msg_0.x = 0.661505245656149;
    tmp_msg_0.y = 0.9212436782875146;
    tmp_msg_0.z = 0.13169651822600603;
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
    msg.setTimeStamp(0.5369618473934062);
    msg.setSource(54156U);
    msg.setSourceEntity(61U);
    msg.setDestination(21571U);
    msg.setDestinationEntity(187U);
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.29330739922479343;
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
    msg.setTimeStamp(0.9642920036039234);
    msg.setSource(3713U);
    msg.setSourceEntity(176U);
    msg.setDestination(33715U);
    msg.setDestinationEntity(20U);
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.7084350187504818;
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
    msg.setTimeStamp(0.8658854984319554);
    msg.setSource(64234U);
    msg.setSourceEntity(194U);
    msg.setDestination(2055U);
    msg.setDestinationEntity(89U);
    msg.op = 139U;
    msg.system.assign("TCZCERPALQDJ");
    msg.range = 0.8874503063133914;
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.4783839431638697;
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
    msg.setTimeStamp(0.1460410066866824);
    msg.setSource(25023U);
    msg.setSourceEntity(111U);
    msg.setDestination(1042U);
    msg.setDestinationEntity(187U);
    msg.op = 142U;
    msg.system.assign("AJYQDMTRHTEFCTEOWEMBNMAEFJXSMNGKKYKRKBJLZECQPXMYGHQSUZSLAWLYWXZXZHDKAOIBQBJWLIRSTZHHPXDFCXNHFLNFISWZVRDGCNJYXUELLKUVDOCYAVZCLQKUSFDVJVUSWQSHOEFJRTV");
    msg.range = 0.43049381369841544;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("NAXGISPFBJDKTQYLNGTZUQYWXMEFBHZLLCUSUEWNCEUGHMMCZAWPOXNKIYUTQAHCHJFGKWHXRPA");
    const char tmp_tmp_msg_0_0[] = {-46, -58, 50, 99, 31, -31, -117, 103, -1, 86, 12, 69, 43, -85, 33, 27, -32, 42, 51, -36, 75, -53, -124, 2, 55, -55, 61, 41, -97, -53, 69, 101, 93, -110, 81, 121, -122, 54, 61, 69, 80, -87, -86, -109, -95, -96, -105, 34, -44, -93, -103, -128, 12, 70, 47, 82, -37, 33, 38, -66, 56, 52, 42, -48, -51, 114, 8, -7, -65, 21, 42, -64, 88, 90, 106, -86, 40, -106, -115, 13, 98, 90, 17, 43, 45, -31, 46, 15, -71, 31, 19, -38};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.6202672431374561);
    msg.setSource(51802U);
    msg.setSourceEntity(241U);
    msg.setDestination(60858U);
    msg.setDestinationEntity(175U);
    msg.op = 92U;
    msg.system.assign("NGPATXSWYQNLQOOSUUMLEFRARSKYFWWAIFWMVIVLLPAHIPRNEJRUVVVWDHFGDWPEFSQIYKMOSWIPOTNVRXECYMDOYGSIOHZEVNFZFAQXUVLJXCSKXBOTEAJAWGJMZQHKEZMNIQHIXMNWRTFBUFKXJKCHEUDYBGTRUPMKCBDJGHQDATODHCANYXHVGZCCYDNXIEQPTJBRULLSJGKATWBCKGTQOLZQPZD");
    msg.range = 0.7905982703089773;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("FWUWNQZDQMCJAVUCOGFBDAJZIRTSYSXOINWTASYE");
    tmp_msg_0.lbearing = 0.03686109067825405;
    tmp_msg_0.lelevation = 0.7902780465649192;
    tmp_msg_0.bearing = 0.2563453552565317;
    tmp_msg_0.elevation = 0.8844073504875907;
    tmp_msg_0.phi = 0.11861511226011756;
    tmp_msg_0.theta = 0.46239400670794384;
    tmp_msg_0.psi = 0.8176126740932856;
    tmp_msg_0.accuracy = 0.8398639029389204;
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
    msg.setTimeStamp(0.5821317496679767);
    msg.setSource(12423U);
    msg.setSourceEntity(224U);
    msg.setDestination(51621U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.3260595628998214);
    msg.setSource(25083U);
    msg.setSourceEntity(130U);
    msg.setDestination(18404U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.7033344048285763);
    msg.setSource(9572U);
    msg.setSourceEntity(36U);
    msg.setDestination(34247U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.253836906696725);
    msg.setSource(46198U);
    msg.setSourceEntity(131U);
    msg.setDestination(62984U);
    msg.setDestinationEntity(90U);
    msg.list.assign("VEUJLEZRVZGOVMOXRNIVXJFJDYPHMCGDERQBINLJXRRBKFMZQ");

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
    msg.setTimeStamp(0.7748618628027967);
    msg.setSource(31248U);
    msg.setSourceEntity(61U);
    msg.setDestination(63838U);
    msg.setDestinationEntity(214U);
    msg.list.assign("AMJXQUVGCGZPYMYDDUKOGNVIEVZTRWRKHYGWQLARECXXCOTPHWJCAOMMDNWRNGFEHGXEUQCAMSYEXWNOWDAOHJHYLKLFSISAIJULZCIJZNBJYPCZDEKOFSWNPBFQIPLMTKIBIJXYKLBWTXEUCGDJBAFJTOSIAV");

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
    msg.setTimeStamp(0.1592850961251424);
    msg.setSource(5801U);
    msg.setSourceEntity(217U);
    msg.setDestination(42144U);
    msg.setDestinationEntity(18U);
    msg.list.assign("BROYQJFPHUTIYPYTSQPCRLECNWZQOMMFDUMXVYFKHTCSGDYSWEPVUQILIKNNYLJRHKBZOHEAXMWNKUSIJLPSYUOBWTARXCEJTXAXAGFTUCPLVTBFRNNKZEQQZLMASQRIKOEDSVWFRVOVDAVAWGDIETNAXBEGYUHDKMDCXEQCJLVOB");

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
    msg.setTimeStamp(0.39340750973547456);
    msg.setSource(15629U);
    msg.setSourceEntity(104U);
    msg.setDestination(41012U);
    msg.setDestinationEntity(6U);
    msg.peer.assign("MOEOCEZSTPPQXUOOFPMUXDGXRTBLACQWSYHRIBBISQFCQCWEKCWJPDHAKRDVUGCNIHWVLPSLCHMHRIYF");
    msg.rssi = 0.6153681383971297;
    msg.integrity = 34569U;

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
    msg.setTimeStamp(0.3529298545375382);
    msg.setSource(50527U);
    msg.setSourceEntity(106U);
    msg.setDestination(26780U);
    msg.setDestinationEntity(166U);
    msg.peer.assign("RUMBPBNZDDFBSKMWVREVFFMNWEEXEBBHMSOTSJPQTUEIRNOHZYLTEVJGFDOQYIPWMANCAPQIHMDAKATXQIVGYZITZCOVXFFACOIBRHJLHEDULYNDZJBNYVROTPHIBQDYXOVSMSUGERSLTKYHUTJCWNUKWLLZQGEXOKPKMVKRWQFODXMCMFACJAYGHNPJHNIUZGB");
    msg.rssi = 0.6768037661757811;
    msg.integrity = 5931U;

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
    msg.setTimeStamp(0.19027112038335492);
    msg.setSource(12091U);
    msg.setSourceEntity(38U);
    msg.setDestination(43029U);
    msg.setDestinationEntity(13U);
    msg.peer.assign("YCTPLXNRHNFZKFLWAPIFEQBYTMFGFNJTWEIYDAXQZXJHELVMEMGXFZSWONBXEWHNVAUDCFOXCXXQUMSKRPVRBOBTDKIGSGPTDUTOPZVKNDECRFCVSANSBRAEVOWAWTKRUYGIGJHMYVKISHHAFMPCGOJDHJLKNZLYAUJXLTHBRZJIFDZB");
    msg.rssi = 0.06301777538953302;
    msg.integrity = 48576U;

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
    msg.setTimeStamp(0.3557309202767558);
    msg.setSource(42108U);
    msg.setSourceEntity(69U);
    msg.setDestination(39162U);
    msg.setDestinationEntity(162U);
    msg.value = 23050;

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
    msg.setTimeStamp(0.6917216344386204);
    msg.setSource(29269U);
    msg.setSourceEntity(200U);
    msg.setDestination(42681U);
    msg.setDestinationEntity(121U);
    msg.value = -4669;

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
    msg.setTimeStamp(0.5075189811177141);
    msg.setSource(10205U);
    msg.setSourceEntity(52U);
    msg.setDestination(61027U);
    msg.setDestinationEntity(45U);
    msg.value = -21029;

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
    msg.setTimeStamp(0.822799179283877);
    msg.setSource(65066U);
    msg.setSourceEntity(29U);
    msg.setDestination(32574U);
    msg.setDestinationEntity(101U);
    msg.value = 0.21024275359414357;

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
    msg.setTimeStamp(0.45530403885319737);
    msg.setSource(37771U);
    msg.setSourceEntity(26U);
    msg.setDestination(16422U);
    msg.setDestinationEntity(175U);
    msg.value = 0.43622274173984543;

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
    msg.setTimeStamp(0.6058613345669105);
    msg.setSource(59581U);
    msg.setSourceEntity(11U);
    msg.setDestination(29055U);
    msg.setDestinationEntity(54U);
    msg.value = 0.2532639988213856;

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
    msg.setTimeStamp(0.9581506559194956);
    msg.setSource(28170U);
    msg.setSourceEntity(242U);
    msg.setDestination(52536U);
    msg.setDestinationEntity(17U);
    msg.value = 0.11225208737123948;

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
    msg.setTimeStamp(0.6133621995079814);
    msg.setSource(5992U);
    msg.setSourceEntity(27U);
    msg.setDestination(31944U);
    msg.setDestinationEntity(146U);
    msg.value = 0.5327249733772922;

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
    msg.setTimeStamp(0.9214105671187542);
    msg.setSource(12111U);
    msg.setSourceEntity(204U);
    msg.setDestination(21175U);
    msg.setDestinationEntity(44U);
    msg.value = 0.511852450622409;

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
    msg.setTimeStamp(0.572910570376073);
    msg.setSource(35292U);
    msg.setSourceEntity(226U);
    msg.setDestination(24439U);
    msg.setDestinationEntity(129U);
    msg.validity = 26831U;
    msg.type = 163U;
    msg.utc_year = 51896U;
    msg.utc_month = 237U;
    msg.utc_day = 98U;
    msg.utc_time = 0.33284063876730907;
    msg.lat = 0.058767905153550015;
    msg.lon = 0.8713309547367885;
    msg.height = 0.6450381797542084;
    msg.satellites = 189U;
    msg.cog = 0.9792312220806358;
    msg.sog = 0.3772319002223128;
    msg.hdop = 0.525064133164478;
    msg.vdop = 0.8802847449890149;
    msg.hacc = 0.3551842039191724;
    msg.vacc = 0.4688247688741052;

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
    msg.setTimeStamp(0.341099373015884);
    msg.setSource(35916U);
    msg.setSourceEntity(5U);
    msg.setDestination(12856U);
    msg.setDestinationEntity(140U);
    msg.validity = 56158U;
    msg.type = 220U;
    msg.utc_year = 23518U;
    msg.utc_month = 201U;
    msg.utc_day = 201U;
    msg.utc_time = 0.9549634454233233;
    msg.lat = 0.795878552592164;
    msg.lon = 0.305348903830006;
    msg.height = 0.8981956551005892;
    msg.satellites = 251U;
    msg.cog = 0.5504937797019328;
    msg.sog = 0.9376060147452903;
    msg.hdop = 0.015247890109003848;
    msg.vdop = 0.7275334429420692;
    msg.hacc = 0.33770729998103355;
    msg.vacc = 0.08363531822084136;

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
    msg.setTimeStamp(0.511480908370051);
    msg.setSource(50752U);
    msg.setSourceEntity(20U);
    msg.setDestination(34784U);
    msg.setDestinationEntity(12U);
    msg.validity = 13411U;
    msg.type = 252U;
    msg.utc_year = 19503U;
    msg.utc_month = 103U;
    msg.utc_day = 119U;
    msg.utc_time = 0.3114419842486952;
    msg.lat = 0.37489072537716983;
    msg.lon = 0.5635075305347221;
    msg.height = 0.42478115652487813;
    msg.satellites = 40U;
    msg.cog = 0.880658692815981;
    msg.sog = 0.6303345324018498;
    msg.hdop = 0.5265075341492383;
    msg.vdop = 0.5326257151858909;
    msg.hacc = 0.5551104528473289;
    msg.vacc = 0.8046991045640368;

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
    msg.setTimeStamp(0.34451153548471547);
    msg.setSource(55640U);
    msg.setSourceEntity(207U);
    msg.setDestination(32645U);
    msg.setDestinationEntity(47U);
    msg.time = 0.17102971192840755;
    msg.phi = 0.40154491205275067;
    msg.theta = 0.15461303032145846;
    msg.psi = 0.02133692012539945;
    msg.psi_magnetic = 0.9482777389549386;

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
    msg.setTimeStamp(0.7929929471816434);
    msg.setSource(41264U);
    msg.setSourceEntity(193U);
    msg.setDestination(2911U);
    msg.setDestinationEntity(215U);
    msg.time = 0.18694116817691697;
    msg.phi = 0.06548880241108057;
    msg.theta = 0.9378337789251788;
    msg.psi = 0.08153943156640098;
    msg.psi_magnetic = 0.3444631299757299;

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
    msg.setTimeStamp(0.5196108898560694);
    msg.setSource(60448U);
    msg.setSourceEntity(160U);
    msg.setDestination(2873U);
    msg.setDestinationEntity(169U);
    msg.time = 0.7447802958048985;
    msg.phi = 0.5646938025950182;
    msg.theta = 0.01134977029070372;
    msg.psi = 0.12144448924949924;
    msg.psi_magnetic = 0.25353387831198815;

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
    msg.setTimeStamp(0.23323169668249877);
    msg.setSource(42545U);
    msg.setSourceEntity(213U);
    msg.setDestination(15136U);
    msg.setDestinationEntity(171U);
    msg.time = 0.8966951198461176;
    msg.x = 0.4028750883525082;
    msg.y = 0.8407885722818129;
    msg.z = 0.34511894960240075;
    msg.timestep = 0.2774947666509583;

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
    msg.setTimeStamp(0.1589099957757132);
    msg.setSource(6860U);
    msg.setSourceEntity(85U);
    msg.setDestination(60854U);
    msg.setDestinationEntity(216U);
    msg.time = 0.6057972143421395;
    msg.x = 0.43021030142648553;
    msg.y = 0.18855852478371105;
    msg.z = 0.9654798498331646;
    msg.timestep = 0.32846912986952836;

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
    msg.setTimeStamp(0.10175516362253212);
    msg.setSource(47177U);
    msg.setSourceEntity(182U);
    msg.setDestination(43493U);
    msg.setDestinationEntity(9U);
    msg.time = 0.7743544951270454;
    msg.x = 0.07526082481546215;
    msg.y = 0.2680641687235441;
    msg.z = 0.7587460840524077;
    msg.timestep = 0.5948550149370206;

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
    msg.setTimeStamp(0.28777839847009057);
    msg.setSource(24620U);
    msg.setSourceEntity(138U);
    msg.setDestination(25844U);
    msg.setDestinationEntity(4U);
    msg.time = 0.07454753548284399;
    msg.x = 0.6267479354613454;
    msg.y = 0.3336087495283744;
    msg.z = 0.2808303820196991;

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
    msg.setTimeStamp(0.6906561359978209);
    msg.setSource(35095U);
    msg.setSourceEntity(210U);
    msg.setDestination(20646U);
    msg.setDestinationEntity(212U);
    msg.time = 0.8522712104760491;
    msg.x = 0.9056712042527164;
    msg.y = 0.8474844530170897;
    msg.z = 0.037470970352346145;

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
    msg.setTimeStamp(0.6527398028374309);
    msg.setSource(642U);
    msg.setSourceEntity(247U);
    msg.setDestination(48706U);
    msg.setDestinationEntity(120U);
    msg.time = 0.6663207889557523;
    msg.x = 0.5758534449517423;
    msg.y = 0.9272894583652598;
    msg.z = 0.6577874013503763;

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
    msg.setTimeStamp(0.3580179441921254);
    msg.setSource(26357U);
    msg.setSourceEntity(6U);
    msg.setDestination(35517U);
    msg.setDestinationEntity(219U);
    msg.time = 0.36393717839373196;
    msg.x = 0.5050282056520654;
    msg.y = 0.38113095401931707;
    msg.z = 0.801235828977959;

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
    msg.setTimeStamp(0.1344815774397603);
    msg.setSource(38863U);
    msg.setSourceEntity(109U);
    msg.setDestination(57152U);
    msg.setDestinationEntity(253U);
    msg.time = 0.9688068870336142;
    msg.x = 0.5128371684495124;
    msg.y = 0.6253840469585649;
    msg.z = 0.7310779922123544;

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
    msg.setTimeStamp(0.11131002347130736);
    msg.setSource(58372U);
    msg.setSourceEntity(71U);
    msg.setDestination(49275U);
    msg.setDestinationEntity(92U);
    msg.time = 0.7851242407550355;
    msg.x = 0.15733157238241036;
    msg.y = 0.18960378438888426;
    msg.z = 0.4618809061050416;

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
    msg.setTimeStamp(0.5590160625917345);
    msg.setSource(61313U);
    msg.setSourceEntity(72U);
    msg.setDestination(18215U);
    msg.setDestinationEntity(59U);
    msg.time = 0.6366102658026134;
    msg.x = 0.7796534469837647;
    msg.y = 0.43931605156936615;
    msg.z = 0.13539660205081872;

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
    msg.setTimeStamp(0.9818087699440898);
    msg.setSource(47871U);
    msg.setSourceEntity(95U);
    msg.setDestination(30609U);
    msg.setDestinationEntity(241U);
    msg.time = 0.27085848193490003;
    msg.x = 0.811108855236522;
    msg.y = 0.2312865506919718;
    msg.z = 0.8686793915232585;

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
    msg.setTimeStamp(0.7133777442941518);
    msg.setSource(36555U);
    msg.setSourceEntity(118U);
    msg.setDestination(40269U);
    msg.setDestinationEntity(250U);
    msg.time = 0.8221981886948923;
    msg.x = 0.4657158731905313;
    msg.y = 0.3714437637197693;
    msg.z = 0.7700767515399274;

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
    msg.setTimeStamp(0.5173721345472002);
    msg.setSource(4986U);
    msg.setSourceEntity(109U);
    msg.setDestination(53756U);
    msg.setDestinationEntity(137U);
    msg.validity = 218U;
    msg.x = 0.2079092593430133;
    msg.y = 0.703208620968346;
    msg.z = 0.02371904927090296;

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
    msg.setTimeStamp(0.15701528730445646);
    msg.setSource(30940U);
    msg.setSourceEntity(61U);
    msg.setDestination(54846U);
    msg.setDestinationEntity(57U);
    msg.validity = 65U;
    msg.x = 0.14064489593372098;
    msg.y = 0.3177757325834719;
    msg.z = 0.13602788385773812;

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
    msg.setTimeStamp(0.667237145999106);
    msg.setSource(54285U);
    msg.setSourceEntity(206U);
    msg.setDestination(3961U);
    msg.setDestinationEntity(250U);
    msg.validity = 175U;
    msg.x = 0.3064981607551409;
    msg.y = 0.5029519340428288;
    msg.z = 0.911425209739794;

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
    msg.setTimeStamp(0.8352973597641175);
    msg.setSource(42078U);
    msg.setSourceEntity(112U);
    msg.setDestination(15663U);
    msg.setDestinationEntity(41U);
    msg.validity = 78U;
    msg.x = 0.8657118741956411;
    msg.y = 0.8255278904563729;
    msg.z = 0.8038902988989722;

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
    msg.setTimeStamp(0.3550416921216899);
    msg.setSource(14914U);
    msg.setSourceEntity(26U);
    msg.setDestination(38434U);
    msg.setDestinationEntity(171U);
    msg.validity = 78U;
    msg.x = 0.5593873722041718;
    msg.y = 0.27532713171565204;
    msg.z = 0.3782670892950495;

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
    msg.setTimeStamp(0.6204350970674842);
    msg.setSource(29593U);
    msg.setSourceEntity(10U);
    msg.setDestination(25682U);
    msg.setDestinationEntity(32U);
    msg.validity = 8U;
    msg.x = 0.6524084360706464;
    msg.y = 0.5280819956277065;
    msg.z = 0.2841101323415408;

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
    msg.setTimeStamp(0.12828212111110748);
    msg.setSource(59053U);
    msg.setSourceEntity(137U);
    msg.setDestination(14944U);
    msg.setDestinationEntity(151U);
    msg.time = 0.21650277264601137;
    msg.x = 0.5661149176212971;
    msg.y = 0.9531000857145265;
    msg.z = 0.7873063924161732;

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
    msg.setTimeStamp(0.5179462487064163);
    msg.setSource(16924U);
    msg.setSourceEntity(231U);
    msg.setDestination(31508U);
    msg.setDestinationEntity(10U);
    msg.time = 0.005099317072429943;
    msg.x = 0.2428594017916631;
    msg.y = 0.7860609828703199;
    msg.z = 0.17664182551476637;

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
    msg.setTimeStamp(0.29819712991032166);
    msg.setSource(52708U);
    msg.setSourceEntity(69U);
    msg.setDestination(11246U);
    msg.setDestinationEntity(24U);
    msg.time = 0.15277327445234934;
    msg.x = 0.23581653240842415;
    msg.y = 0.8716092669675177;
    msg.z = 0.514348956861162;

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
    msg.setTimeStamp(0.6775215855012394);
    msg.setSource(36590U);
    msg.setSourceEntity(84U);
    msg.setDestination(48167U);
    msg.setDestinationEntity(73U);
    msg.validity = 233U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.32017616797932635;
    tmp_msg_0.beam_height = 0.5975041135322511;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.09230031069115296;

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
    msg.setTimeStamp(0.408892818974922);
    msg.setSource(45359U);
    msg.setSourceEntity(197U);
    msg.setDestination(32081U);
    msg.setDestinationEntity(1U);
    msg.validity = 79U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2658946670648882;
    tmp_msg_0.y = 0.7374832327458053;
    tmp_msg_0.z = 0.11652686628095321;
    tmp_msg_0.phi = 0.2767953660270003;
    tmp_msg_0.theta = 0.7303684052004706;
    tmp_msg_0.psi = 0.816242741437397;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.3377306623374633;
    tmp_msg_1.beam_height = 0.11983276822366751;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.08490326422229566;

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
    msg.setTimeStamp(0.5458953626942099);
    msg.setSource(21800U);
    msg.setSourceEntity(0U);
    msg.setDestination(6157U);
    msg.setDestinationEntity(80U);
    msg.validity = 160U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5640744624043503;
    tmp_msg_0.y = 0.63767358745346;
    tmp_msg_0.z = 0.1497570956214591;
    tmp_msg_0.phi = 0.7423832003881292;
    tmp_msg_0.theta = 0.6178950761754122;
    tmp_msg_0.psi = 0.6910841739138551;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5991273456326143;

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
    msg.setTimeStamp(0.730215993309736);
    msg.setSource(36654U);
    msg.setSourceEntity(71U);
    msg.setDestination(31714U);
    msg.setDestinationEntity(177U);
    msg.value = 0.16584536460395682;

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
    msg.setTimeStamp(0.9009880632516463);
    msg.setSource(24839U);
    msg.setSourceEntity(125U);
    msg.setDestination(63404U);
    msg.setDestinationEntity(120U);
    msg.value = 0.6195440107552789;

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
    msg.setTimeStamp(0.79441827274223);
    msg.setSource(29798U);
    msg.setSourceEntity(247U);
    msg.setDestination(38377U);
    msg.setDestinationEntity(176U);
    msg.value = 0.1383519824019699;

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
    msg.setTimeStamp(0.816687842167486);
    msg.setSource(10298U);
    msg.setSourceEntity(155U);
    msg.setDestination(7138U);
    msg.setDestinationEntity(57U);
    msg.value = 0.04515547578299739;

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
    msg.setTimeStamp(0.9053146910038116);
    msg.setSource(44948U);
    msg.setSourceEntity(165U);
    msg.setDestination(35114U);
    msg.setDestinationEntity(69U);
    msg.value = 0.045955535772978506;

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
    msg.setTimeStamp(0.8427314191338219);
    msg.setSource(15246U);
    msg.setSourceEntity(111U);
    msg.setDestination(32035U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8906940662865727;

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
    msg.setTimeStamp(0.6588932628195544);
    msg.setSource(46967U);
    msg.setSourceEntity(93U);
    msg.setDestination(47260U);
    msg.setDestinationEntity(43U);
    msg.value = 0.49918004861284715;

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
    msg.setTimeStamp(0.47726242514034767);
    msg.setSource(20696U);
    msg.setSourceEntity(250U);
    msg.setDestination(27861U);
    msg.setDestinationEntity(185U);
    msg.value = 0.7126160076046179;

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
    msg.setTimeStamp(0.654533761329724);
    msg.setSource(28191U);
    msg.setSourceEntity(214U);
    msg.setDestination(59460U);
    msg.setDestinationEntity(155U);
    msg.value = 0.6796739918056929;

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
    msg.setTimeStamp(0.6873068974031934);
    msg.setSource(17224U);
    msg.setSourceEntity(29U);
    msg.setDestination(21634U);
    msg.setDestinationEntity(169U);
    msg.value = 0.9474204417808998;

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
    msg.setTimeStamp(0.4368426094590131);
    msg.setSource(18948U);
    msg.setSourceEntity(143U);
    msg.setDestination(25718U);
    msg.setDestinationEntity(105U);
    msg.value = 0.0756788527539477;

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
    msg.setTimeStamp(0.9660223350448736);
    msg.setSource(38491U);
    msg.setSourceEntity(112U);
    msg.setDestination(37933U);
    msg.setDestinationEntity(194U);
    msg.value = 0.017495623985699815;

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
    msg.setTimeStamp(0.8652250589576707);
    msg.setSource(54017U);
    msg.setSourceEntity(130U);
    msg.setDestination(58087U);
    msg.setDestinationEntity(114U);
    msg.value = 0.6532055524735074;

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
    msg.setTimeStamp(0.41562423670512605);
    msg.setSource(28530U);
    msg.setSourceEntity(37U);
    msg.setDestination(35357U);
    msg.setDestinationEntity(65U);
    msg.value = 0.7138045735556782;

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
    msg.setTimeStamp(0.14412636406596224);
    msg.setSource(62513U);
    msg.setSourceEntity(230U);
    msg.setDestination(46314U);
    msg.setDestinationEntity(103U);
    msg.value = 0.7009025540054232;

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
    msg.setTimeStamp(0.5836638206323327);
    msg.setSource(23291U);
    msg.setSourceEntity(196U);
    msg.setDestination(61421U);
    msg.setDestinationEntity(121U);
    msg.value = 0.4432650248583553;

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
    msg.setTimeStamp(0.5249720463774865);
    msg.setSource(37126U);
    msg.setSourceEntity(199U);
    msg.setDestination(36032U);
    msg.setDestinationEntity(65U);
    msg.value = 0.2923125347715012;

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
    msg.setTimeStamp(0.8488543583534047);
    msg.setSource(33685U);
    msg.setSourceEntity(137U);
    msg.setDestination(55793U);
    msg.setDestinationEntity(57U);
    msg.value = 0.3196093802641986;

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
    msg.setTimeStamp(0.099130772010243);
    msg.setSource(14387U);
    msg.setSourceEntity(70U);
    msg.setDestination(11879U);
    msg.setDestinationEntity(132U);
    msg.value = 0.5855929394703462;

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
    msg.setTimeStamp(0.4988392488015958);
    msg.setSource(64782U);
    msg.setSourceEntity(71U);
    msg.setDestination(29118U);
    msg.setDestinationEntity(51U);
    msg.value = 0.6078018389209798;

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
    msg.setTimeStamp(0.3051850660751375);
    msg.setSource(10670U);
    msg.setSourceEntity(18U);
    msg.setDestination(14556U);
    msg.setDestinationEntity(171U);
    msg.value = 0.9648902987550625;

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
    msg.setTimeStamp(0.8989302526620345);
    msg.setSource(18989U);
    msg.setSourceEntity(98U);
    msg.setDestination(17213U);
    msg.setDestinationEntity(186U);
    msg.value = 0.20968354921625343;

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
    msg.setTimeStamp(0.17856816690364774);
    msg.setSource(32729U);
    msg.setSourceEntity(94U);
    msg.setDestination(50438U);
    msg.setDestinationEntity(135U);
    msg.value = 0.20070188404737177;

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
    msg.setTimeStamp(0.10073642290703266);
    msg.setSource(47086U);
    msg.setSourceEntity(86U);
    msg.setDestination(36413U);
    msg.setDestinationEntity(235U);
    msg.value = 0.9331279150703721;

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
    msg.setTimeStamp(0.4863354698507353);
    msg.setSource(33474U);
    msg.setSourceEntity(179U);
    msg.setDestination(55164U);
    msg.setDestinationEntity(175U);
    msg.direction = 0.6491362713938434;
    msg.speed = 0.7535990489989852;
    msg.turbulence = 0.27147981690746736;

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
    msg.setTimeStamp(0.06200345419043363);
    msg.setSource(57400U);
    msg.setSourceEntity(122U);
    msg.setDestination(18297U);
    msg.setDestinationEntity(155U);
    msg.direction = 0.7090071838374836;
    msg.speed = 0.44777077942147714;
    msg.turbulence = 0.21298384828392392;

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
    msg.setTimeStamp(0.945535369115973);
    msg.setSource(2659U);
    msg.setSourceEntity(122U);
    msg.setDestination(44348U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.6733506233851806;
    msg.speed = 0.13204781270901977;
    msg.turbulence = 0.5845348570679891;

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
    msg.setTimeStamp(0.862133722690786);
    msg.setSource(28353U);
    msg.setSourceEntity(221U);
    msg.setDestination(31413U);
    msg.setDestinationEntity(217U);
    msg.value = 0.26159384099429484;

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
    msg.setTimeStamp(0.7074394603515662);
    msg.setSource(62418U);
    msg.setSourceEntity(60U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(238U);
    msg.value = 0.7146478742643981;

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
    msg.setTimeStamp(0.5941419651072606);
    msg.setSource(12384U);
    msg.setSourceEntity(23U);
    msg.setDestination(4247U);
    msg.setDestinationEntity(171U);
    msg.value = 0.3989730265169821;

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
    msg.setTimeStamp(0.13503931046435858);
    msg.setSource(931U);
    msg.setSourceEntity(77U);
    msg.setDestination(47132U);
    msg.setDestinationEntity(246U);
    msg.value.assign("WDEYJXTFLWOLRRTXTBPVMHJWYYRZKPOLEATIJEMLPMKPZLVOEHSRWTHOHIFUHDIVIBRGDZPPJANEBUMXXDEZQLSYKKGEAZGCQZNUJU");

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
    msg.setTimeStamp(0.20957774590757994);
    msg.setSource(60600U);
    msg.setSourceEntity(243U);
    msg.setDestination(43019U);
    msg.setDestinationEntity(188U);
    msg.value.assign("AYKRULRNSPEKJIQYTMZMEIIRFIJKHYTFRSVEGEHMBCFILYYGJTHHFQ");

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
    msg.setTimeStamp(0.5320253682406761);
    msg.setSource(15686U);
    msg.setSourceEntity(137U);
    msg.setDestination(15574U);
    msg.setDestinationEntity(218U);
    msg.value.assign("EYBBOVRHHDJLDMFTDRKTCNKYWLMPPRAZTBRUYZMZPLCYEPPETENIUOKAEIYLRPXHGCCINJACGAOSPINFNCWRJPFBYOVTQHRUENKTIQWAWEMEFSLNRKUVZHXCMYOVIGZOUZRGQLCNTXSKBQVLJVSZJSXHBFKXRHXWMGXWOQHALE");

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
    msg.setTimeStamp(0.38040491867513637);
    msg.setSource(65308U);
    msg.setSourceEntity(175U);
    msg.setDestination(26162U);
    msg.setDestinationEntity(53U);
    const char tmp_msg_0[] = {-20, -122, 62, -30, 112, 18, 108, -93, -41, -52, -122, -112, -11, -105, -43, -20, 63, -50, -18, -98, -22, 105, 20, 17, 85, -23, -32, -22, 108, -14, -103, 87, 99, 116, 16, -101, -101, -71, 110, -127, -24, -50, 48, 96, -27, 92, 59, -113, -96, 78, -53, 9, -9, 19, -128, 89, 111, -67, 97, 53, 105, -114, 47, -92, -11, -4, 46, 19, -7, -57, -16, 42, -44, -71, 50, 18, -23, 54, 86, 32, -22, 66, 76, -12, -12, -107, -92, -103, 8, 90, -82, -98, 31, 117, -102, -75, 119, 93, 102, 0, -91, -99, -2, 14, -7, 47, 122, 37, 101, 19, 57, 57, -9, 46, -104, 32, 64, -15, -25, 112, 35, 49, -89, 35, -113, -89, -41, -31, 24, -24, 67, -109, 126, 123, 37, 60, -61, 19, 27, -105, 114, 43, -112, 117, -78, 32, 4, -117, -73, -13, 35, 55, -74, 63, -64, 98, 34, -55, -85, 25, -127, -92, 12, 69, 49, -127, 92, 53, 33, 64, 11, 54, 4, -91, 101, 53, 42, 95, 27, 109, 91, -25, 126, 2, -120, -105, 46, -85, 114, 126, 26, 28, 115, 73, 53, 55, 109, -108, 92, -42, 77, -83, 5, -42, 13, 52, -128, -100, -59, -56, 76, -83, 92, 91, -5, 82, -46, 105, 116, -24, 83, -20, -27};
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
    msg.setTimeStamp(0.7938912738220428);
    msg.setSource(25917U);
    msg.setSourceEntity(125U);
    msg.setDestination(23891U);
    msg.setDestinationEntity(9U);
    const char tmp_msg_0[] = {-25, 18, -108, 29, -105, 100, -6, -10, -12, -21, -54, 92, 101, -12, -106, -56, -94, 19, -47, 92, 80, -82, 105, 47, 25, -118, -39, 55, 56, 38, 10, 94, -24, 102, 51, -72, -69, 41, -49, 124, 120, -30, -100, 4, 36};
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
    msg.setTimeStamp(0.5591619922384307);
    msg.setSource(30755U);
    msg.setSourceEntity(203U);
    msg.setDestination(19132U);
    msg.setDestinationEntity(19U);
    const char tmp_msg_0[] = {40, 108, -75, -49, 51, 47, 95, -66, 109, 0, -55, 96, -6, -22, 73, 93, -78, 102, -104, 96, -18, -110, -22, -28, -70, -8, 29, 4, 43, 23, -116, 82, 74, 40, -112, -44, -77, 28, 82, -107, -19, 26, -6, -7, 68, -57, -74, 20, 96, -16, -110, -22, -26, -98, -57, 79, -105, -42, 117, 122, 111, -119, -25, 35, 106, -123, -18, -71, -46, 10, 100, 12, 34, 20, 60, 105, -66, 123, 89, -106, -93, 11, -111, 62, 78, 59, 114, -67, -66, 31, 85, -99, -5, 14, -56, -52, -92, -81, -102, 79, -26, 113, 30, -9, -52, 7, -20, -47, -52, 57, -82, 10, 116, 94, -37, 31, 28, 18, -63, 24, 51, -49, 118, -76, -23, 66, -7, -97, 88, -118, -61, 11, 115, 82, -115, 100, -58, 60, 36, 68, 74, -101, -72, 6, -97, 15, 1, 93, 103, 2, 61, 35, 7, -46, 3, -100, 120, -63, -98, -54, 69, 43, -15, 81, -12, 4, -74, -38, 3, 71, 54, -53, -57, -35, 109, 40, -83, -15, -117, -3, 22, -115, -58, -52, 76, -114, 44, 75, -108, 121, -93, -89, -18, 105, -9, -58, 120, -1, 65, -92, -68, 94, 68, 7, 30, 105, 124, 59, 35, -7, -4, -118, -38, 24, 96, 56, -15, 27, -104, -50, -67, 92, -12, -108, 104, 54, 119, 123, -36, -27, 98};
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
    msg.setTimeStamp(0.6195464639965674);
    msg.setSource(55099U);
    msg.setSourceEntity(247U);
    msg.setDestination(26733U);
    msg.setDestinationEntity(49U);
    msg.label.assign("VAUTYMPPLZKJLBJJFSWINVSZUKQNEPJMYNZYBEAFDKHSOVZTZIFLQYENWHOGIMUDGHAYECDRSNWDMYRBBHCPQVHEXULILXYSBTCRLWMFQ");
    msg.x = 0.7253059672263535;
    msg.y = 0.15217254147863746;
    msg.z = 0.0276267849572569;

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
    msg.setTimeStamp(0.18975450627880286);
    msg.setSource(56508U);
    msg.setSourceEntity(188U);
    msg.setDestination(31173U);
    msg.setDestinationEntity(180U);
    msg.label.assign("XXHHPSUXHERKXOFMFODQKSOFWDFWTYNPQKLNYPANMWHZPBD");
    msg.x = 0.9073571058175326;
    msg.y = 0.9421898928157307;
    msg.z = 0.6613386165077356;

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
    msg.setTimeStamp(0.7570429805490413);
    msg.setSource(34602U);
    msg.setSourceEntity(140U);
    msg.setDestination(51717U);
    msg.setDestinationEntity(82U);
    msg.label.assign("PETVCBKBEXHZPUVKJOYJTLTYGIRXYWAGKNIYOUCSELVLQRKOZRICLLPBQXRASJYCXWDCEHZLYEVJKKMCJJIXANMQOWAPRFUOEZPHZQBWCZTUXBLQWPJKOWMGD");
    msg.x = 0.046430299850581114;
    msg.y = 0.77133499613697;
    msg.z = 0.6917446061410061;

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
    msg.setTimeStamp(0.6503644092505156);
    msg.setSource(7242U);
    msg.setSourceEntity(101U);
    msg.setDestination(44849U);
    msg.setDestinationEntity(136U);
    msg.type = 79U;
    msg.frequency = 440100719U;
    msg.min_range = 17028U;
    msg.max_range = 20684U;
    msg.bits_per_point = 32U;
    msg.scale_factor = 0.7910979033894963;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.15254266194298838;
    tmp_msg_0.beam_height = 0.6110384137007125;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {125, -92, -46, -98, 104, -59, -126, 110, 46, -100, 4, 23, 114, -89, -115, 83, -105, -7, -68, 6, 36, -6, -30, 18, 37, -114, 110, 120, 111, 15, 67, -39, 87, 50, 13, 110, -104, 51, 30, 89, 107, 61, -119};
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
    msg.setTimeStamp(0.6105546245526541);
    msg.setSource(41888U);
    msg.setSourceEntity(208U);
    msg.setDestination(62318U);
    msg.setDestinationEntity(239U);
    msg.type = 67U;
    msg.frequency = 1029590736U;
    msg.min_range = 45514U;
    msg.max_range = 28046U;
    msg.bits_per_point = 151U;
    msg.scale_factor = 0.44924284744296805;
    const char tmp_msg_0[] = {-108, -32, 64, 102, 28, 108, 75, -10, -30, 6, 78, -31, -53, 19, -83, 33, 50, 0, 73, -4, -49, 22, -108, -98, 31, 59, -71, -106, -110, -10, 6, -6, 89, -108, -38, -83, 4, -50, -104, -10, 7, 118, -53, -88, -52, 36, 111, 62, -32, -51, -49, -54, -60, 48, -62, -15, 79, -120, -74, -30, 75, -87, 68, 104, 42, 32, 72, -111, 5, 103, -58, -48, -63, 9, -106, -42, 79, 108, -38, -17, -83, -30, 84, -92, -59, -29, -123, -109, -34, -99, 102, -121, -119, -104, 35, -39, 96, -44, 26, 34, -81, 41, -85, -70, -127, 38, 80, -36, -56, -19, -14, -41, -75, -94, 63, 26, -5, -80, -67, -27, 21, 115, -32, 29, -104, 124, 58, -20, 35, 117, 36, -75, 58, 57, 81, -44, -94, -117, 38, 5, 100, 74, 33, 93, -23, 99, 81, -63, -7, 105, -74, -114, 1, -114, -92, 89, -114, -45, 34, 80, 48, -76, -46, 20, -3, -25, -95, -12, 26, 75, -128, -49, 96, 59, 122, 14, 93, -46, 117, 76, -106, -16, -79};
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
    msg.setTimeStamp(0.4996232026610907);
    msg.setSource(30654U);
    msg.setSourceEntity(233U);
    msg.setDestination(34741U);
    msg.setDestinationEntity(115U);
    msg.type = 41U;
    msg.frequency = 4184523263U;
    msg.min_range = 59754U;
    msg.max_range = 48121U;
    msg.bits_per_point = 211U;
    msg.scale_factor = 0.4267891766018458;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.932272372790024;
    tmp_msg_0.beam_height = 0.39444949216833436;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {84, 91, -59, 5, 52, 42, -95, 24, 93, 57, -15, 120, 17, -72, -59, -126, -102, 114, -14, 1, -70, -95, 37, 65, -103, -80, 27, -69, 46, -74, -28, 63, -67, -106, 115, 22, -107, -14, 104, -91, 122, 107, -46, 22, -110, -4, 17, -128, -67, 70, -96, -40};
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
    msg.setTimeStamp(0.5819848274171392);
    msg.setSource(28798U);
    msg.setSourceEntity(16U);
    msg.setDestination(34007U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.9162232949606669);
    msg.setSource(4463U);
    msg.setSourceEntity(148U);
    msg.setDestination(37254U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.21762259547314944);
    msg.setSource(13290U);
    msg.setSourceEntity(211U);
    msg.setDestination(8978U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.2158871660701004);
    msg.setSource(48541U);
    msg.setSourceEntity(249U);
    msg.setDestination(22715U);
    msg.setDestinationEntity(66U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.9117048157740308);
    msg.setSource(57830U);
    msg.setSourceEntity(20U);
    msg.setDestination(60842U);
    msg.setDestinationEntity(6U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.9897005567208881);
    msg.setSource(22115U);
    msg.setSourceEntity(21U);
    msg.setDestination(45483U);
    msg.setDestinationEntity(199U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.9225537748271743);
    msg.setSource(33331U);
    msg.setSourceEntity(225U);
    msg.setDestination(8593U);
    msg.setDestinationEntity(193U);
    msg.value = 0.36764441865921205;
    msg.confidence = 0.8784934128704237;
    msg.opmodes.assign("IAJDAAKGMARTHVWRUIQQSGBXPROPENPTULOYVJBXGDJJYATRZWTQOBZWHEKQJAZUZDWRMNTMOCRGCTYLVXFQFHLFSYTVVIAVKOGLQNXFOAIZSKJPYROUJEFWDUBREBHVMTAQCJCEUHIKLGNSYIVMZSPQLHOWFDFOLK");

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
    msg.setTimeStamp(0.20286320630986532);
    msg.setSource(51254U);
    msg.setSourceEntity(123U);
    msg.setDestination(12575U);
    msg.setDestinationEntity(221U);
    msg.value = 0.28933931961582593;
    msg.confidence = 0.19993656556646167;
    msg.opmodes.assign("CSNDAJBZHNAZROEAQSTQLAWMHRUQVXKWWJDWXCMKQHOPGPSVAQKYPGFRDRSBJXAZIGXFMOSMBKFMCDRCNWIHORWOZUVMBDNXBPDBICFQTECOTTEGJKPNWEFAYXIIBKEUZIZLGYDNUIYGDLVKRIPE");

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
    msg.setTimeStamp(0.23875179337269725);
    msg.setSource(3286U);
    msg.setSourceEntity(207U);
    msg.setDestination(9116U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9918181169607506;
    msg.confidence = 0.27106123516125347;
    msg.opmodes.assign("QRQYXHVXQIFFGCKQPMPTJUANZJYTNOTASMONHVLFPFRUFNADUAWSODWUCZELQDRJUXQRCCOQRIRLNBPZFHRHNDGKHLAHDGCIJAMEWQEKUTVVHSEYLAXPGITKWUCTSOWOADKDJGSIMHVGALLZOYKXXJRRGWWLIKCDQOCYSCSLMMVVBPHFYNYIFUXZTBN");

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
    msg.setTimeStamp(0.9153294808209147);
    msg.setSource(62071U);
    msg.setSourceEntity(235U);
    msg.setDestination(18180U);
    msg.setDestinationEntity(242U);
    msg.itow = 2052125789U;
    msg.lat = 0.8466075616967264;
    msg.lon = 0.18917021775505782;
    msg.height_ell = 0.8395210641865068;
    msg.height_sea = 0.8052686287875145;
    msg.hacc = 0.0234898947779687;
    msg.vacc = 0.23887640695767254;
    msg.vel_n = 0.16924212890573065;
    msg.vel_e = 0.45337365323041723;
    msg.vel_d = 0.4376364709278151;
    msg.speed = 0.10015020775321515;
    msg.gspeed = 0.49298895881171945;
    msg.heading = 0.5675227130514933;
    msg.sacc = 0.2642990989341337;
    msg.cacc = 0.04270759554688086;

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
    msg.setTimeStamp(0.7467783235260743);
    msg.setSource(6819U);
    msg.setSourceEntity(99U);
    msg.setDestination(56299U);
    msg.setDestinationEntity(233U);
    msg.itow = 491635458U;
    msg.lat = 0.19135738447352735;
    msg.lon = 0.3073995678284047;
    msg.height_ell = 0.38454683293518566;
    msg.height_sea = 0.2417708670087777;
    msg.hacc = 0.37389560770595676;
    msg.vacc = 0.4604045177814229;
    msg.vel_n = 0.791600216169495;
    msg.vel_e = 0.6938861630378663;
    msg.vel_d = 0.9457702428662351;
    msg.speed = 0.8959784616628099;
    msg.gspeed = 0.29071972944291113;
    msg.heading = 0.34309819087011206;
    msg.sacc = 0.47556519092054106;
    msg.cacc = 0.11311511019712295;

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
    msg.setTimeStamp(0.6450309878999203);
    msg.setSource(6378U);
    msg.setSourceEntity(141U);
    msg.setDestination(5228U);
    msg.setDestinationEntity(160U);
    msg.itow = 1217123006U;
    msg.lat = 0.4858302986177816;
    msg.lon = 0.6086292424082461;
    msg.height_ell = 0.6453071114836874;
    msg.height_sea = 0.8015251645783722;
    msg.hacc = 0.19634380966259402;
    msg.vacc = 0.5080911785558;
    msg.vel_n = 0.4221584068778227;
    msg.vel_e = 0.43632438292677056;
    msg.vel_d = 0.8438286353361579;
    msg.speed = 0.29015435843907067;
    msg.gspeed = 0.6221286969400743;
    msg.heading = 0.7824176856939785;
    msg.sacc = 0.6515779542897464;
    msg.cacc = 0.032657671489016105;

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
    msg.setTimeStamp(0.5982856805013069);
    msg.setSource(16816U);
    msg.setSourceEntity(100U);
    msg.setDestination(61490U);
    msg.setDestinationEntity(98U);
    msg.id = 97U;
    msg.value = 0.6287882427395309;

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
    msg.setTimeStamp(0.5498916859463896);
    msg.setSource(52267U);
    msg.setSourceEntity(168U);
    msg.setDestination(38459U);
    msg.setDestinationEntity(254U);
    msg.id = 206U;
    msg.value = 0.3271069414122273;

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
    msg.setTimeStamp(0.40347047809994263);
    msg.setSource(46685U);
    msg.setSourceEntity(212U);
    msg.setDestination(20046U);
    msg.setDestinationEntity(249U);
    msg.id = 52U;
    msg.value = 0.6588168414731675;

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
    msg.setTimeStamp(0.9055812428445584);
    msg.setSource(14923U);
    msg.setSourceEntity(162U);
    msg.setDestination(24662U);
    msg.setDestinationEntity(69U);
    msg.x = 0.015139504318825159;
    msg.y = 0.5015390922516232;
    msg.z = 0.8099742333406048;
    msg.phi = 0.5086043428061281;
    msg.theta = 0.609081044512047;
    msg.psi = 0.7831267054842073;

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
    msg.setTimeStamp(0.37772768638852494);
    msg.setSource(20559U);
    msg.setSourceEntity(174U);
    msg.setDestination(43860U);
    msg.setDestinationEntity(229U);
    msg.x = 0.24948996419765745;
    msg.y = 0.9594602023151151;
    msg.z = 0.4424014563282018;
    msg.phi = 0.5401901721730146;
    msg.theta = 0.922584005156116;
    msg.psi = 0.2647021642906453;

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
    msg.setTimeStamp(0.6852322208447952);
    msg.setSource(51706U);
    msg.setSourceEntity(150U);
    msg.setDestination(24775U);
    msg.setDestinationEntity(22U);
    msg.x = 0.01563963095199139;
    msg.y = 0.6131395023117507;
    msg.z = 0.02184410761305311;
    msg.phi = 0.3095965196780457;
    msg.theta = 0.2251323006893432;
    msg.psi = 0.3706002519877245;

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
    msg.setTimeStamp(0.7320450129052543);
    msg.setSource(63944U);
    msg.setSourceEntity(196U);
    msg.setDestination(49387U);
    msg.setDestinationEntity(168U);
    msg.beam_width = 0.596807396962576;
    msg.beam_height = 0.24035713640005008;

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
    msg.setTimeStamp(0.2557109736975892);
    msg.setSource(21253U);
    msg.setSourceEntity(163U);
    msg.setDestination(7628U);
    msg.setDestinationEntity(148U);
    msg.beam_width = 0.006879837518642629;
    msg.beam_height = 0.8409218927081362;

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
    msg.setTimeStamp(0.20518716978684803);
    msg.setSource(63813U);
    msg.setSourceEntity(129U);
    msg.setDestination(10046U);
    msg.setDestinationEntity(240U);
    msg.beam_width = 0.15517123641267783;
    msg.beam_height = 0.3660368708436309;

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
    msg.setTimeStamp(0.4290610848879878);
    msg.setSource(41477U);
    msg.setSourceEntity(151U);
    msg.setDestination(46257U);
    msg.setDestinationEntity(141U);
    msg.sane = 42U;

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
    msg.setTimeStamp(0.20412427684659962);
    msg.setSource(5608U);
    msg.setSourceEntity(11U);
    msg.setDestination(64284U);
    msg.setDestinationEntity(93U);
    msg.sane = 254U;

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
    msg.setTimeStamp(0.6698656444203551);
    msg.setSource(3365U);
    msg.setSourceEntity(41U);
    msg.setDestination(3120U);
    msg.setDestinationEntity(100U);
    msg.sane = 163U;

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
    msg.setTimeStamp(0.9691608655384801);
    msg.setSource(47146U);
    msg.setSourceEntity(38U);
    msg.setDestination(35209U);
    msg.setDestinationEntity(136U);
    msg.value = 0.36912357974877885;

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
    msg.setTimeStamp(0.8503076391932872);
    msg.setSource(39057U);
    msg.setSourceEntity(170U);
    msg.setDestination(1367U);
    msg.setDestinationEntity(244U);
    msg.value = 0.2237667163589132;

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
    msg.setTimeStamp(0.018978470058508834);
    msg.setSource(30960U);
    msg.setSourceEntity(219U);
    msg.setDestination(54129U);
    msg.setDestinationEntity(232U);
    msg.value = 0.6726928202095361;

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
    msg.setTimeStamp(0.08623889556875097);
    msg.setSource(14530U);
    msg.setSourceEntity(5U);
    msg.setDestination(51521U);
    msg.setDestinationEntity(149U);
    msg.value = 0.4641546130724009;

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
    msg.setTimeStamp(0.3447889590002241);
    msg.setSource(60319U);
    msg.setSourceEntity(89U);
    msg.setDestination(26846U);
    msg.setDestinationEntity(68U);
    msg.value = 0.4985329094816442;

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
    msg.setTimeStamp(0.6830587298481072);
    msg.setSource(12425U);
    msg.setSourceEntity(149U);
    msg.setDestination(27173U);
    msg.setDestinationEntity(14U);
    msg.value = 0.018585222022901138;

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
    msg.setTimeStamp(0.4451340561120347);
    msg.setSource(47949U);
    msg.setSourceEntity(91U);
    msg.setDestination(31087U);
    msg.setDestinationEntity(125U);
    msg.value = 0.2516343247850401;

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
    msg.setTimeStamp(0.9143743308549312);
    msg.setSource(5914U);
    msg.setSourceEntity(139U);
    msg.setDestination(37444U);
    msg.setDestinationEntity(46U);
    msg.value = 0.26265187932495415;

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
    msg.setTimeStamp(0.20033098143827088);
    msg.setSource(444U);
    msg.setSourceEntity(207U);
    msg.setDestination(9977U);
    msg.setDestinationEntity(218U);
    msg.value = 0.14288010167404053;

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
    msg.setTimeStamp(0.9574193639355963);
    msg.setSource(41172U);
    msg.setSourceEntity(164U);
    msg.setDestination(55255U);
    msg.setDestinationEntity(42U);
    msg.value = 0.8468688803087049;

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
    msg.setTimeStamp(0.6915724894578276);
    msg.setSource(61788U);
    msg.setSourceEntity(30U);
    msg.setDestination(46372U);
    msg.setDestinationEntity(231U);
    msg.value = 0.5518261225950406;

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
    msg.setTimeStamp(0.6170120681566996);
    msg.setSource(6969U);
    msg.setSourceEntity(75U);
    msg.setDestination(17337U);
    msg.setDestinationEntity(63U);
    msg.value = 0.2371366780240569;

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
    msg.setTimeStamp(0.832854954846383);
    msg.setSource(47317U);
    msg.setSourceEntity(79U);
    msg.setDestination(22899U);
    msg.setDestinationEntity(165U);
    msg.value = 0.2589440414674251;

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
    msg.setTimeStamp(0.9940022519025261);
    msg.setSource(32670U);
    msg.setSourceEntity(32U);
    msg.setDestination(11629U);
    msg.setDestinationEntity(10U);
    msg.value = 0.506517855835311;

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
    msg.setTimeStamp(0.8488154411025648);
    msg.setSource(39792U);
    msg.setSourceEntity(111U);
    msg.setDestination(64070U);
    msg.setDestinationEntity(62U);
    msg.value = 0.03691887165588015;

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
    msg.setTimeStamp(0.6726222555266408);
    msg.setSource(50667U);
    msg.setSourceEntity(91U);
    msg.setDestination(60834U);
    msg.setDestinationEntity(145U);
    msg.value = 0.4722205227455004;

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
    msg.setTimeStamp(0.8248147329405208);
    msg.setSource(37221U);
    msg.setSourceEntity(155U);
    msg.setDestination(21008U);
    msg.setDestinationEntity(11U);
    msg.value = 0.04189867177064299;

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
    msg.setTimeStamp(0.5618428119387411);
    msg.setSource(40879U);
    msg.setSourceEntity(139U);
    msg.setDestination(51547U);
    msg.setDestinationEntity(231U);
    msg.value = 0.2325228231880061;

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
    msg.setTimeStamp(0.11974075130736817);
    msg.setSource(46429U);
    msg.setSourceEntity(226U);
    msg.setDestination(29898U);
    msg.setDestinationEntity(223U);
    msg.value = 0.7412314212377867;

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
    msg.setTimeStamp(0.13013312470165594);
    msg.setSource(17266U);
    msg.setSourceEntity(85U);
    msg.setDestination(4272U);
    msg.setDestinationEntity(143U);
    msg.value = 0.05222012687543742;

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
    msg.setTimeStamp(0.5302257512908972);
    msg.setSource(28494U);
    msg.setSourceEntity(90U);
    msg.setDestination(41612U);
    msg.setDestinationEntity(219U);
    msg.value = 0.6787117609028614;

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
    msg.setTimeStamp(0.7007455193425761);
    msg.setSource(48435U);
    msg.setSourceEntity(63U);
    msg.setDestination(32170U);
    msg.setDestinationEntity(231U);
    msg.value = 0.5831438836087455;

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
    msg.setTimeStamp(0.35389533200503576);
    msg.setSource(13403U);
    msg.setSourceEntity(61U);
    msg.setDestination(46403U);
    msg.setDestinationEntity(38U);
    msg.value = 0.3800162490410468;

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
    msg.setTimeStamp(0.8456859797217925);
    msg.setSource(51533U);
    msg.setSourceEntity(208U);
    msg.setDestination(17746U);
    msg.setDestinationEntity(142U);
    msg.value = 0.9320829107248185;

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
    msg.setTimeStamp(0.6231285764141424);
    msg.setSource(18464U);
    msg.setSourceEntity(133U);
    msg.setDestination(4554U);
    msg.setDestinationEntity(149U);
    msg.validity = 24788U;
    msg.type = 9U;
    msg.tow = 2922343353U;
    msg.base_lat = 0.9580877003099469;
    msg.base_lon = 0.6865056119227916;
    msg.base_height = 0.9082986422038705;
    msg.n = 0.20036704274765127;
    msg.e = 0.913460271081601;
    msg.d = 0.14533189204721708;
    msg.v_n = 0.9096869295583556;
    msg.v_e = 0.2696671442557105;
    msg.v_d = 0.9530680293624875;
    msg.satellites = 98U;
    msg.iar_hyp = 63149U;
    msg.iar_ratio = 0.5200902291360143;

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
    msg.setTimeStamp(0.2070484492830027);
    msg.setSource(19389U);
    msg.setSourceEntity(113U);
    msg.setDestination(2705U);
    msg.setDestinationEntity(171U);
    msg.validity = 45474U;
    msg.type = 205U;
    msg.tow = 2574104625U;
    msg.base_lat = 0.22200439545663597;
    msg.base_lon = 0.6613155855018501;
    msg.base_height = 0.9613341156487365;
    msg.n = 0.9837381981313421;
    msg.e = 0.30348697060528607;
    msg.d = 0.17024239161590649;
    msg.v_n = 0.6849255070540506;
    msg.v_e = 0.10430871267137387;
    msg.v_d = 0.10436777478163384;
    msg.satellites = 191U;
    msg.iar_hyp = 4917U;
    msg.iar_ratio = 0.49310124233127584;

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
    msg.setTimeStamp(0.9359096424918149);
    msg.setSource(6542U);
    msg.setSourceEntity(248U);
    msg.setDestination(63595U);
    msg.setDestinationEntity(89U);
    msg.validity = 12380U;
    msg.type = 195U;
    msg.tow = 3643409300U;
    msg.base_lat = 0.07476601028969798;
    msg.base_lon = 0.6561634713857517;
    msg.base_height = 0.37088550735405923;
    msg.n = 0.13006980011783464;
    msg.e = 0.41288656281993963;
    msg.d = 0.7404490642627095;
    msg.v_n = 0.9289137986726502;
    msg.v_e = 0.40993850452573954;
    msg.v_d = 0.5338333988503338;
    msg.satellites = 254U;
    msg.iar_hyp = 49430U;
    msg.iar_ratio = 0.23864367122979968;

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
    msg.setTimeStamp(0.5230692748696264);
    msg.setSource(63513U);
    msg.setSourceEntity(140U);
    msg.setDestination(37924U);
    msg.setDestinationEntity(229U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4358454763816798;
    tmp_msg_0.lon = 0.17848651817215444;
    tmp_msg_0.height = 0.20425260998785622;
    tmp_msg_0.x = 0.5606238022071465;
    tmp_msg_0.y = 0.8220853382819842;
    tmp_msg_0.z = 0.47361813146126963;
    tmp_msg_0.phi = 0.7047335349683355;
    tmp_msg_0.theta = 0.918280818706015;
    tmp_msg_0.psi = 0.08162848417314361;
    tmp_msg_0.u = 0.1808624597266183;
    tmp_msg_0.v = 0.09726858724548837;
    tmp_msg_0.w = 0.3228321326167308;
    tmp_msg_0.vx = 0.7540397310846755;
    tmp_msg_0.vy = 0.8574460969694712;
    tmp_msg_0.vz = 0.1331430611247365;
    tmp_msg_0.p = 0.7351071557090412;
    tmp_msg_0.q = 0.5866539201481142;
    tmp_msg_0.r = 0.042590855614971;
    tmp_msg_0.depth = 0.024934467839593855;
    tmp_msg_0.alt = 0.5085941889258707;
    msg.state.set(tmp_msg_0);
    msg.type = 14U;

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
    msg.setTimeStamp(0.5234379675162184);
    msg.setSource(58978U);
    msg.setSourceEntity(143U);
    msg.setDestination(23645U);
    msg.setDestinationEntity(208U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.17139387848762855;
    tmp_msg_0.lon = 0.38234266150468876;
    tmp_msg_0.height = 0.4217184586401239;
    tmp_msg_0.x = 0.616245672697555;
    tmp_msg_0.y = 0.6180523750787733;
    tmp_msg_0.z = 0.11284535892026792;
    tmp_msg_0.phi = 0.04922097889222876;
    tmp_msg_0.theta = 0.3043690226243877;
    tmp_msg_0.psi = 0.945032048204459;
    tmp_msg_0.u = 0.8853144724054304;
    tmp_msg_0.v = 0.5000031876360327;
    tmp_msg_0.w = 0.663272716818204;
    tmp_msg_0.vx = 0.7084587945003659;
    tmp_msg_0.vy = 0.5657632244742076;
    tmp_msg_0.vz = 0.7873029488802141;
    tmp_msg_0.p = 0.7387945842496846;
    tmp_msg_0.q = 0.42581555458684184;
    tmp_msg_0.r = 0.5181343436322873;
    tmp_msg_0.depth = 0.7287635872258411;
    tmp_msg_0.alt = 0.18670449616943885;
    msg.state.set(tmp_msg_0);
    msg.type = 170U;

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
    msg.setTimeStamp(0.08468949664949721);
    msg.setSource(21667U);
    msg.setSourceEntity(121U);
    msg.setDestination(33547U);
    msg.setDestinationEntity(174U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.40481523170771616;
    tmp_msg_0.lon = 0.448120710480555;
    tmp_msg_0.height = 0.24589003111552876;
    tmp_msg_0.x = 0.22106186728660537;
    tmp_msg_0.y = 0.38589641696854415;
    tmp_msg_0.z = 0.3693674326326001;
    tmp_msg_0.phi = 0.7670282774218576;
    tmp_msg_0.theta = 0.26239558463365975;
    tmp_msg_0.psi = 0.9865185696461733;
    tmp_msg_0.u = 0.9489388953530106;
    tmp_msg_0.v = 0.38012392778534887;
    tmp_msg_0.w = 0.8501114679397948;
    tmp_msg_0.vx = 0.5953288427759359;
    tmp_msg_0.vy = 0.6603663057383302;
    tmp_msg_0.vz = 0.8789469855785014;
    tmp_msg_0.p = 0.26782444543438877;
    tmp_msg_0.q = 0.10695809992156569;
    tmp_msg_0.r = 0.8669366842467979;
    tmp_msg_0.depth = 0.02476656569770208;
    tmp_msg_0.alt = 0.5891354354301804;
    msg.state.set(tmp_msg_0);
    msg.type = 146U;

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
    msg.setTimeStamp(0.5935028511938609);
    msg.setSource(55327U);
    msg.setSourceEntity(24U);
    msg.setDestination(94U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5586296979475273;

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
    msg.setTimeStamp(0.6930295417259446);
    msg.setSource(20532U);
    msg.setSourceEntity(230U);
    msg.setDestination(13808U);
    msg.setDestinationEntity(131U);
    msg.value = 0.7409581817983536;

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
    msg.setTimeStamp(0.3008034608270186);
    msg.setSource(17691U);
    msg.setSourceEntity(83U);
    msg.setDestination(21341U);
    msg.setDestinationEntity(142U);
    msg.value = 0.4219927573071608;

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
    msg.setTimeStamp(0.2656645749992218);
    msg.setSource(23941U);
    msg.setSourceEntity(39U);
    msg.setDestination(50022U);
    msg.setDestinationEntity(162U);
    msg.value = 0.8420324996069506;

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
    msg.setTimeStamp(0.3343850687142429);
    msg.setSource(2827U);
    msg.setSourceEntity(50U);
    msg.setDestination(19255U);
    msg.setDestinationEntity(228U);
    msg.value = 0.35876205191708277;

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
    msg.setTimeStamp(0.1361339256895565);
    msg.setSource(63499U);
    msg.setSourceEntity(248U);
    msg.setDestination(5485U);
    msg.setDestinationEntity(253U);
    msg.value = 0.3727098622003958;

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
    msg.setTimeStamp(0.22352859186169816);
    msg.setSource(65201U);
    msg.setSourceEntity(79U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(37U);
    msg.value = 0.32558799838438646;

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
    msg.setTimeStamp(0.8598768276133669);
    msg.setSource(17957U);
    msg.setSourceEntity(60U);
    msg.setDestination(55251U);
    msg.setDestinationEntity(161U);
    msg.value = 0.2968678067503625;

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
    msg.setTimeStamp(0.4428842026595373);
    msg.setSource(38032U);
    msg.setSourceEntity(53U);
    msg.setDestination(14715U);
    msg.setDestinationEntity(62U);
    msg.value = 0.6629102074809965;

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
    msg.setTimeStamp(0.669962751056877);
    msg.setSource(21918U);
    msg.setSourceEntity(77U);
    msg.setDestination(2781U);
    msg.setDestinationEntity(61U);
    msg.value = 0.1363125156763022;

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
    msg.setTimeStamp(0.49804861282164736);
    msg.setSource(23186U);
    msg.setSourceEntity(181U);
    msg.setDestination(21426U);
    msg.setDestinationEntity(241U);
    msg.value = 0.40004921785943837;

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
    msg.setTimeStamp(0.3582980356876545);
    msg.setSource(47513U);
    msg.setSourceEntity(155U);
    msg.setDestination(51968U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5546979493816232;

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
    msg.setTimeStamp(0.5244962781230791);
    msg.setSource(59894U);
    msg.setSourceEntity(51U);
    msg.setDestination(12349U);
    msg.setDestinationEntity(142U);
    msg.value = 0.13730554440655562;

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
    msg.setTimeStamp(0.13946277755982883);
    msg.setSource(27499U);
    msg.setSourceEntity(209U);
    msg.setDestination(49909U);
    msg.setDestinationEntity(188U);
    msg.value = 0.02048532404349601;

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
    msg.setTimeStamp(0.7318977141620637);
    msg.setSource(3781U);
    msg.setSourceEntity(138U);
    msg.setDestination(16452U);
    msg.setDestinationEntity(51U);
    msg.value = 0.1454428318422003;

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
    msg.setTimeStamp(0.8481088059397488);
    msg.setSource(30126U);
    msg.setSourceEntity(141U);
    msg.setDestination(14438U);
    msg.setDestinationEntity(190U);
    msg.id = 196U;
    msg.zoom = 111U;
    msg.action = 232U;

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
    msg.setTimeStamp(0.9739301818815047);
    msg.setSource(64576U);
    msg.setSourceEntity(153U);
    msg.setDestination(25544U);
    msg.setDestinationEntity(149U);
    msg.id = 112U;
    msg.zoom = 81U;
    msg.action = 105U;

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
    msg.setTimeStamp(0.76019699646568);
    msg.setSource(15150U);
    msg.setSourceEntity(220U);
    msg.setDestination(55186U);
    msg.setDestinationEntity(44U);
    msg.id = 5U;
    msg.zoom = 12U;
    msg.action = 123U;

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
    msg.setTimeStamp(0.6477758638555122);
    msg.setSource(23341U);
    msg.setSourceEntity(154U);
    msg.setDestination(39343U);
    msg.setDestinationEntity(240U);
    msg.id = 136U;
    msg.value = 0.3120351157178145;

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
    msg.setTimeStamp(0.34444343377888065);
    msg.setSource(53875U);
    msg.setSourceEntity(184U);
    msg.setDestination(93U);
    msg.setDestinationEntity(11U);
    msg.id = 173U;
    msg.value = 0.2389401461586883;

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
    msg.setTimeStamp(0.8312322862841963);
    msg.setSource(33757U);
    msg.setSourceEntity(4U);
    msg.setDestination(36424U);
    msg.setDestinationEntity(21U);
    msg.id = 11U;
    msg.value = 0.5753035071396262;

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
    msg.setTimeStamp(0.9393286238049185);
    msg.setSource(60203U);
    msg.setSourceEntity(185U);
    msg.setDestination(49338U);
    msg.setDestinationEntity(83U);
    msg.id = 172U;
    msg.value = 0.9274104309006779;

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
    msg.setTimeStamp(0.2393222925176005);
    msg.setSource(26969U);
    msg.setSourceEntity(197U);
    msg.setDestination(25993U);
    msg.setDestinationEntity(189U);
    msg.id = 15U;
    msg.value = 0.7372781257848335;

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
    msg.setTimeStamp(0.17941954998442455);
    msg.setSource(17971U);
    msg.setSourceEntity(144U);
    msg.setDestination(63513U);
    msg.setDestinationEntity(211U);
    msg.id = 40U;
    msg.value = 0.9009175615105398;

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
    msg.setTimeStamp(0.5582120040316784);
    msg.setSource(45281U);
    msg.setSourceEntity(251U);
    msg.setDestination(9725U);
    msg.setDestinationEntity(107U);
    msg.id = 59U;
    msg.angle = 0.7981478933543062;

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
    msg.setTimeStamp(0.7644290883979318);
    msg.setSource(5864U);
    msg.setSourceEntity(115U);
    msg.setDestination(48236U);
    msg.setDestinationEntity(128U);
    msg.id = 54U;
    msg.angle = 0.2967024366751173;

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
    msg.setTimeStamp(0.4121333630567594);
    msg.setSource(52461U);
    msg.setSourceEntity(80U);
    msg.setDestination(13454U);
    msg.setDestinationEntity(132U);
    msg.id = 253U;
    msg.angle = 0.5147757386264168;

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
    msg.setTimeStamp(0.4813605995660615);
    msg.setSource(59680U);
    msg.setSourceEntity(116U);
    msg.setDestination(22060U);
    msg.setDestinationEntity(110U);
    msg.op = 177U;
    msg.actions.assign("ADPTDGEZMPXDLIICRGOKVQNLGZHOSXYXZYMTGGMTABWNOYEODWJQPSRYBREWKQRSUVMXBSYAHMXLMSDWEIFKWWFEXAHDPBHKJVCDMFUGNQXDJTVRTYZKZSVEKNJMILFNQPRCGABTIGZWBLVHAWIFQIZBEARVYWFANGYFCFICZNORQOXVJHJQSEKQNRSKTPIMHQPDEK");

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
    msg.setTimeStamp(0.28590260022192115);
    msg.setSource(54360U);
    msg.setSourceEntity(229U);
    msg.setDestination(51295U);
    msg.setDestinationEntity(171U);
    msg.op = 225U;
    msg.actions.assign("WRCAUZCQYTIKAXPJMUQGVEJFSBMWFQPGHSYMHSIDWUEUVSBBTKMSXICU");

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
    msg.setTimeStamp(0.05883028858014028);
    msg.setSource(20866U);
    msg.setSourceEntity(81U);
    msg.setDestination(9757U);
    msg.setDestinationEntity(64U);
    msg.op = 192U;
    msg.actions.assign("QWOSDIJUHMALTRWGAVKTBFMCOOKIECWPTFAZAUDJZRHZWTKSRWQERQWXHVNDLBFQMXCFTJPOFKTXLYIMEHTECQPGIOWNZYUOGEIIAQMFXDEPMHBMQBBWUANBURXNZJCJASHLMQPJW");

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
    msg.setTimeStamp(0.504555185566793);
    msg.setSource(47503U);
    msg.setSourceEntity(30U);
    msg.setDestination(54326U);
    msg.setDestinationEntity(135U);
    msg.actions.assign("VRMSDYWNSNEVRBARERVGBMHVEULUZDFVCAQJZUIXTXKFXFGXORWDBTWZIKKFBOEUHGZFMBYYRJDDFSMNAIKHTWCHCKQSZEOZIIQOGHULZRNWXNPQQQBK");

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
    msg.setTimeStamp(0.004046339291268075);
    msg.setSource(55519U);
    msg.setSourceEntity(68U);
    msg.setDestination(731U);
    msg.setDestinationEntity(244U);
    msg.actions.assign("IZLMZSETXSCISFRYZOKAURBGASCPBFOGDXFUFDXNFSPBWDSEUONCZSYCXGQIKGPXBYMPDMLJHRQMLTNGSPUBCIRECCVJGUWTAW");

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
    msg.setTimeStamp(0.0779182320634515);
    msg.setSource(53838U);
    msg.setSourceEntity(227U);
    msg.setDestination(10954U);
    msg.setDestinationEntity(66U);
    msg.actions.assign("SZHLFJAQQYJZCMVGFULNWDSPOPGMEWNJMDKDLAKWZMTKVFTXGIJQRDCTSOSZYYUHTHYPEIVIBTJSOKMYOXUHARGNGTVMUXOXWSRKWUEFMIZRBSLYPSCRGOHNLDVYKUPODITMILWLQBRNFBRWRQQHCIEKANYZONVTUACZMDXEELICKMAXBBFEWUNGZZXXEWHBVFRNU");

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
    msg.setTimeStamp(0.9394130386890546);
    msg.setSource(4712U);
    msg.setSourceEntity(233U);
    msg.setDestination(24427U);
    msg.setDestinationEntity(159U);
    msg.button = 173U;
    msg.value = 93U;

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
    msg.setTimeStamp(0.5746069112596931);
    msg.setSource(39532U);
    msg.setSourceEntity(1U);
    msg.setDestination(14806U);
    msg.setDestinationEntity(196U);
    msg.button = 250U;
    msg.value = 90U;

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
    msg.setTimeStamp(0.7181372386588272);
    msg.setSource(53871U);
    msg.setSourceEntity(252U);
    msg.setDestination(28874U);
    msg.setDestinationEntity(122U);
    msg.button = 4U;
    msg.value = 148U;

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
    msg.setTimeStamp(0.8539064076899952);
    msg.setSource(45170U);
    msg.setSourceEntity(31U);
    msg.setDestination(19986U);
    msg.setDestinationEntity(211U);
    msg.op = 81U;
    msg.text.assign("FEKFSILGLAOVZODALDOVNVYFUMMUZZQBFFUPIKXCONXTOOVYCMWMBFQHNRUTRUJQNAHJYNUOZDRGBCJHXTWKODWOQHCEBZTPHUJQRYIGPTESZNDGGNQMMAPARSMQVHQVBKIJRBXSDAAILGESXKSZAYW");

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
    msg.setTimeStamp(0.3442394394951016);
    msg.setSource(47754U);
    msg.setSourceEntity(243U);
    msg.setDestination(59142U);
    msg.setDestinationEntity(226U);
    msg.op = 0U;
    msg.text.assign("FYGBNDSTIXLQXKGYRNLZWLVWBQQVILIZWQHCYASYRLDHXOUSKKWPFMDYZJGYRKZCSDHXVFCJDADQTGXWFUDMOUMBUGKVFOZCUGETVHZSTTFBKECELRFSWLWTRWBBRKWTIYMGEAEMXBSAPNTRBQCAGRJOVAEPSZQOOUXCMNUHAQVNIPAIPMETYGCXAXQHENEDYINJZHPBCJRAKKWMPDFOVLFIEFJJIHLPTCIJZYDJNHSBUGUXNJLMNOZQ");

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
    msg.setTimeStamp(0.05547458747635825);
    msg.setSource(51416U);
    msg.setSourceEntity(197U);
    msg.setDestination(46633U);
    msg.setDestinationEntity(91U);
    msg.op = 231U;
    msg.text.assign("CYDQRLUIMPFZJJCTKWKSVESHTLCQHGZKJGRHGVHMPPEWXTOZQBLQECUKSARJIMIOWLAPXMMSNVDWBIAFCGVOWGSQVXUGSBNAYZRGZEJBKAESBEUNSZPOFFHJXXUCOKCIFXXXTSLWDDLOOIUWLRUHZYBNDBLQWCKMGFTPJWKTJZMFLFDULQTRNMYCHJEUBTVBMEYAIOEQDVVYQZXMPFTORAPHHZYRGBFUNDKJYYYDNTRDAQEVNSGIIPRICNN");

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
    msg.setTimeStamp(0.050310280273769714);
    msg.setSource(15357U);
    msg.setSourceEntity(172U);
    msg.setDestination(51267U);
    msg.setDestinationEntity(235U);
    msg.op = 96U;
    msg.time_remain = 0.42716752790213486;
    msg.sched_time = 0.6219732583479882;

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
    msg.setTimeStamp(0.899588043122567);
    msg.setSource(16478U);
    msg.setSourceEntity(51U);
    msg.setDestination(21912U);
    msg.setDestinationEntity(25U);
    msg.op = 58U;
    msg.time_remain = 0.8254631221209912;
    msg.sched_time = 0.07091445263070761;

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
    msg.setTimeStamp(0.07780624093447785);
    msg.setSource(57735U);
    msg.setSourceEntity(168U);
    msg.setDestination(26000U);
    msg.setDestinationEntity(30U);
    msg.op = 174U;
    msg.time_remain = 0.5987433372918992;
    msg.sched_time = 0.7998648609725587;

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
    msg.setTimeStamp(0.6042474580606397);
    msg.setSource(54491U);
    msg.setSourceEntity(144U);
    msg.setDestination(32290U);
    msg.setDestinationEntity(6U);
    msg.name.assign("BXTODHEEHLUSMCQLCNWAPAYRNHEBAUFRCMEQIUXRLIXLJZGZFSVJHNNPTEPDXP");
    msg.op = 244U;
    msg.sched_time = 0.13107217934901694;

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
    msg.setTimeStamp(0.35006556613740214);
    msg.setSource(36493U);
    msg.setSourceEntity(86U);
    msg.setDestination(5430U);
    msg.setDestinationEntity(26U);
    msg.name.assign("WLADEGWEJVMENNTXDOVRXYVRBQEMAUOHRNDSFKPUSZQPFFULUSKZFTQICVWGNOWOATHKPICFAFJYBURCJHMCLKTJKGHWMEYRDSKDKTIOEZWFAHKTAOGBSPSNXFTKIQSKAXCMDFSBZQZVJ");
    msg.op = 155U;
    msg.sched_time = 0.03860993003359192;

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
    msg.setTimeStamp(0.7780223864083271);
    msg.setSource(11236U);
    msg.setSourceEntity(158U);
    msg.setDestination(29446U);
    msg.setDestinationEntity(139U);
    msg.name.assign("RHCYNMSCDNBBKRVRCAMEFQMPBUKOZJ");
    msg.op = 32U;
    msg.sched_time = 0.6070263625612615;

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
    msg.setTimeStamp(0.1194623594193922);
    msg.setSource(8194U);
    msg.setSourceEntity(57U);
    msg.setDestination(22549U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.7011532342375705);
    msg.setSource(31509U);
    msg.setSourceEntity(18U);
    msg.setDestination(61461U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.8296944731861723);
    msg.setSource(53420U);
    msg.setSourceEntity(127U);
    msg.setDestination(62936U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.5351211850115756);
    msg.setSource(24832U);
    msg.setSourceEntity(213U);
    msg.setDestination(52001U);
    msg.setDestinationEntity(37U);
    msg.name.assign("EKXYYGSIAYSLFRDXADUKAWKITEHFUUFNZCKVOFJNQLUZGPXXAISEBLOIDBMEXURVKTAWKPXWYKFVFRUVNAOXMCYFQTDDLPTCOVCRMW");
    msg.state = 169U;

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
    msg.setTimeStamp(0.9490846040875921);
    msg.setSource(45412U);
    msg.setSourceEntity(173U);
    msg.setDestination(18934U);
    msg.setDestinationEntity(52U);
    msg.name.assign("UBXYSDRHFVTYSMXUSDKTXRWOWGTZFMMHUCXEDDXQNTTMBLRLIDEQEJXQZNVZJDHQEAGELGOPAYSHIFCOEDPECYGRFWGXUYVCZGDBNNOIQSDTXCGHKZHRJZOLCNAJUNTFJQTAVVWRAFYBHJUYMMSARYZKZVKGTMHPSLYQOWIWSIFFMJPSBNETKPCEXWGGQLMBLUAZOPKSXHZRWAPAJWWRIVUCKLQUFOK");
    msg.state = 243U;

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
    msg.setTimeStamp(0.08992054606949973);
    msg.setSource(1672U);
    msg.setSourceEntity(37U);
    msg.setDestination(6053U);
    msg.setDestinationEntity(86U);
    msg.name.assign("HZIQKNTLJFRUPIWABZXAPZUQRDXOQGHDAUDOJEGCNGNSPSYSRGUGBZJWXEYOSXIVMGCKBUEZYBWPNJNFJMOWBVCQRUGFORTETYBEYTGWKCTAKVVMOJHGMXDOKIDLCJCQKKRKOSWQDYFRAFFFCKWILXSNFWVTPMSTYXBZYGJXBJIUWNLEBQIRPIUPSLAVDAQIDXHELMCKDHM");
    msg.state = 192U;

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
    msg.setTimeStamp(0.49354183835740106);
    msg.setSource(49894U);
    msg.setSourceEntity(250U);
    msg.setDestination(28418U);
    msg.setDestinationEntity(31U);
    msg.name.assign("CUSYEBZHVPQNOTJYOPWQFMROEFEQHMXUWKPQZVNGBRTTEYSOLZGAAVUGWNJVFSXLBHKXOCKSXLNLJBBVYMRSU");
    msg.value = 196U;

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
    msg.setTimeStamp(0.5902700135473253);
    msg.setSource(41922U);
    msg.setSourceEntity(160U);
    msg.setDestination(40324U);
    msg.setDestinationEntity(137U);
    msg.name.assign("XZCNWWUBIPHGHTCYGYROTNISVLMDAEOIKZTKLI");
    msg.value = 43U;

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
    msg.setTimeStamp(0.7341054619486908);
    msg.setSource(17197U);
    msg.setSourceEntity(152U);
    msg.setDestination(64147U);
    msg.setDestinationEntity(1U);
    msg.name.assign("QRRKHCLWTCULSKZRDMJHIVJAANBKQD");
    msg.value = 121U;

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
    msg.setTimeStamp(0.6647677456382123);
    msg.setSource(30149U);
    msg.setSourceEntity(77U);
    msg.setDestination(16253U);
    msg.setDestinationEntity(53U);
    msg.name.assign("JPPHEETGVEPDXIWYAZUFLTEEUSGKAKNYZVALMCMDGPQFIXYVMDW");

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
    msg.setTimeStamp(0.6785821290712675);
    msg.setSource(60400U);
    msg.setSourceEntity(1U);
    msg.setDestination(1967U);
    msg.setDestinationEntity(230U);
    msg.name.assign("NIBXAQOMLNVVBZFOPUEZESQBHDLHUSTYPLXTXWJZUBXMQFDADJGMYTPCXDHCKNNEHLCNITKQJKOKWCXUGXUAYKJBWFJYXQKCSZBIHRRNYLAMWIBSNOFLRTEOPHJMRZZJVLUWUPRATPMFYRADSQJHETACFOJPVZWVKSVFWCWGFRRDPKGYQEAOGMCP");

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
    msg.setTimeStamp(0.8034118895668089);
    msg.setSource(7214U);
    msg.setSourceEntity(229U);
    msg.setDestination(9930U);
    msg.setDestinationEntity(235U);
    msg.name.assign("YMNJHSMOYOWEQFTXDBZRQILVYWYKUVNTVLNKEFORJFAVUEFCCNYUYHAEKSLTBCBYSKJGQTLMTHUDLBMFPABJGNMTGTORCXSFBIANSEAZMCXMKQDBIUNMZGBGMEHDUWQPDJIKSUXAZHIZAIRSKYTPOIRGDRCHGQXGEVOFXYSPABWMAIXZBGTGNWHVFWLCXUWWZUAJOWCDOVHJCJDOTEKPIXRQUQELEPZNXPLSHVJLPFFKRRCQPRSHOQN");

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
    msg.setTimeStamp(0.9220214437884765);
    msg.setSource(46709U);
    msg.setSourceEntity(142U);
    msg.setDestination(41612U);
    msg.setDestinationEntity(55U);
    msg.name.assign("NATILFEZZLLAHAFWURAUPJWAJXMBPDRJCKWAMLFJYISPKKGCZXWXYADFPVZWPGVCLU");
    msg.value = 37U;

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
    msg.setTimeStamp(0.2019176205290344);
    msg.setSource(1154U);
    msg.setSourceEntity(68U);
    msg.setDestination(20664U);
    msg.setDestinationEntity(135U);
    msg.name.assign("AEZKQGZDREEEGDUSAOIJZVAMKYIBZFSMTFXGPHNLJYSHEOOLNSZIHQTPXCZUPDOQNMSWSQHGPFEIIFKSQFWAHRNRFKGBKRWGIAJWOVMHNPXJMEPFVXDLQJAHVRDOWRLNJWBDZTMFVIUWUZOYCGYXTJMBXOISEWAMJDVYTBLKHRUXCQCKDBRAUCSCXUCJDXCOAVPTRBGTUFRBVMPKTFKNWUVBYOASYKQINNZTYXQCNDYLJTPGUVZGLBHEHMY");
    msg.value = 32U;

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
    msg.setTimeStamp(0.3505836181678571);
    msg.setSource(65510U);
    msg.setSourceEntity(183U);
    msg.setDestination(11494U);
    msg.setDestinationEntity(208U);
    msg.name.assign("SRUZDRXFUSLVTTROIJWKPRTXDWPHZBHCWJVZOKNXEFHONWKVUFXEZAMBSQRPPFPHBAEHNOUDZISUYSNATNOAGAMKAOETWEFLJAVDYADLHQGQXLJTBCMKYNSDARHEJXKXVHQJTVTOVHKCCDNIZQWLKCVMJGQLLFSOUGISJNPTIZMKQUBBCIMPDBLVRBYLYYCJBSYWQUUHRIYSQGIZPGGCAMFFWCEZV");
    msg.value = 184U;

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
    msg.setTimeStamp(0.7539655294146403);
    msg.setSource(43167U);
    msg.setSourceEntity(29U);
    msg.setDestination(13708U);
    msg.setDestinationEntity(15U);
    msg.id = 7U;
    msg.period = 414332726U;
    msg.duty_cycle = 1078356818U;

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
    msg.setTimeStamp(0.03133735211529898);
    msg.setSource(20665U);
    msg.setSourceEntity(74U);
    msg.setDestination(55830U);
    msg.setDestinationEntity(149U);
    msg.id = 127U;
    msg.period = 3729081536U;
    msg.duty_cycle = 3433570576U;

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
    msg.setTimeStamp(0.604354805254198);
    msg.setSource(16134U);
    msg.setSourceEntity(43U);
    msg.setDestination(48939U);
    msg.setDestinationEntity(29U);
    msg.id = 69U;
    msg.period = 1434222940U;
    msg.duty_cycle = 2405447832U;

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
    msg.setTimeStamp(0.06607976601459209);
    msg.setSource(39648U);
    msg.setSourceEntity(138U);
    msg.setDestination(52795U);
    msg.setDestinationEntity(4U);
    msg.id = 217U;
    msg.period = 27563959U;
    msg.duty_cycle = 3637171773U;

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
    msg.setTimeStamp(0.9272387078082399);
    msg.setSource(51905U);
    msg.setSourceEntity(74U);
    msg.setDestination(20051U);
    msg.setDestinationEntity(187U);
    msg.id = 164U;
    msg.period = 1949485444U;
    msg.duty_cycle = 28768248U;

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
    msg.setTimeStamp(0.41854147520941043);
    msg.setSource(15700U);
    msg.setSourceEntity(249U);
    msg.setDestination(50193U);
    msg.setDestinationEntity(43U);
    msg.id = 112U;
    msg.period = 726496470U;
    msg.duty_cycle = 1089720714U;

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
    msg.setTimeStamp(0.09415924829372191);
    msg.setSource(47812U);
    msg.setSourceEntity(161U);
    msg.setDestination(31899U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.050943966730001455;
    msg.lon = 0.3115442593520015;
    msg.height = 0.5963944035587811;
    msg.x = 0.908266544530385;
    msg.y = 0.6499883483691905;
    msg.z = 0.8682391940317997;
    msg.phi = 0.3235904936830196;
    msg.theta = 0.05538291898355818;
    msg.psi = 0.5930215862103774;
    msg.u = 0.24129844334551231;
    msg.v = 0.82825881455157;
    msg.w = 0.8226459071604943;
    msg.vx = 0.5210321972207054;
    msg.vy = 0.6618334674558188;
    msg.vz = 0.8651362363259151;
    msg.p = 0.928003432633253;
    msg.q = 0.33061346038424755;
    msg.r = 0.547531331989645;
    msg.depth = 0.09483359160304916;
    msg.alt = 0.5871003407253105;

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
    msg.setTimeStamp(0.5435074170432316);
    msg.setSource(11635U);
    msg.setSourceEntity(191U);
    msg.setDestination(43722U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.09354222840418636;
    msg.lon = 0.30392200419859206;
    msg.height = 0.44542593648297546;
    msg.x = 0.859193150273657;
    msg.y = 0.35204501658167386;
    msg.z = 0.760921718919443;
    msg.phi = 0.9540076392200406;
    msg.theta = 0.1287527602898697;
    msg.psi = 0.26757633771987843;
    msg.u = 0.73366895922921;
    msg.v = 0.6371048704743754;
    msg.w = 0.8071129816360936;
    msg.vx = 0.1405288541053734;
    msg.vy = 0.9259178114790678;
    msg.vz = 0.9433477782577869;
    msg.p = 0.6225590269068886;
    msg.q = 0.46263064934662557;
    msg.r = 0.9292495133676012;
    msg.depth = 0.6380333410882992;
    msg.alt = 0.12526587705951941;

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
    msg.setTimeStamp(0.09284218034833958);
    msg.setSource(48241U);
    msg.setSourceEntity(10U);
    msg.setDestination(24188U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.6967462085914643;
    msg.lon = 0.00984962447571125;
    msg.height = 0.17582749407105258;
    msg.x = 0.027411974080120194;
    msg.y = 0.038380194826499014;
    msg.z = 0.16718003054436037;
    msg.phi = 0.2631363704408817;
    msg.theta = 0.041586637069790156;
    msg.psi = 0.4991083198988526;
    msg.u = 0.8125999546617327;
    msg.v = 0.8500090445556044;
    msg.w = 0.3254518253935649;
    msg.vx = 0.9262972432573372;
    msg.vy = 0.26335711953692775;
    msg.vz = 0.11130769948588481;
    msg.p = 0.8149902580188346;
    msg.q = 0.007940778025481099;
    msg.r = 0.7546416440017021;
    msg.depth = 0.7248957583936149;
    msg.alt = 0.8045720170660188;

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
    msg.setTimeStamp(0.758511436073262);
    msg.setSource(10760U);
    msg.setSourceEntity(155U);
    msg.setDestination(14341U);
    msg.setDestinationEntity(6U);
    msg.x = 0.06648927087046697;
    msg.y = 0.5007136739964009;
    msg.z = 0.2352118687753667;

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
    msg.setTimeStamp(0.029337749266071134);
    msg.setSource(42669U);
    msg.setSourceEntity(80U);
    msg.setDestination(36691U);
    msg.setDestinationEntity(100U);
    msg.x = 0.33020343351751325;
    msg.y = 0.6049637792441944;
    msg.z = 0.5666581734934428;

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
    msg.setTimeStamp(0.3402070013955889);
    msg.setSource(6694U);
    msg.setSourceEntity(72U);
    msg.setDestination(4009U);
    msg.setDestinationEntity(95U);
    msg.x = 0.5190865309521981;
    msg.y = 0.9545775545235646;
    msg.z = 0.13005553562645022;

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
    msg.setTimeStamp(0.18948954640184923);
    msg.setSource(10759U);
    msg.setSourceEntity(118U);
    msg.setDestination(52817U);
    msg.setDestinationEntity(143U);
    msg.value = 0.17173033797133463;

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
    msg.setTimeStamp(0.7015830456868418);
    msg.setSource(45308U);
    msg.setSourceEntity(212U);
    msg.setDestination(20982U);
    msg.setDestinationEntity(72U);
    msg.value = 0.08802116633476698;

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
    msg.setTimeStamp(0.6239837416323806);
    msg.setSource(60272U);
    msg.setSourceEntity(111U);
    msg.setDestination(41156U);
    msg.setDestinationEntity(2U);
    msg.value = 0.9071219776000724;

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
    msg.setTimeStamp(0.016016683820897715);
    msg.setSource(32407U);
    msg.setSourceEntity(13U);
    msg.setDestination(29643U);
    msg.setDestinationEntity(236U);
    msg.value = 0.8351111271981753;

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
    msg.setTimeStamp(0.6851946081846139);
    msg.setSource(10506U);
    msg.setSourceEntity(188U);
    msg.setDestination(49306U);
    msg.setDestinationEntity(93U);
    msg.value = 0.7523684844292624;

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
    msg.setTimeStamp(0.9073861418158323);
    msg.setSource(15218U);
    msg.setSourceEntity(24U);
    msg.setDestination(38354U);
    msg.setDestinationEntity(161U);
    msg.value = 0.8088870010095628;

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
    msg.setTimeStamp(0.016215276545812674);
    msg.setSource(13647U);
    msg.setSourceEntity(225U);
    msg.setDestination(63994U);
    msg.setDestinationEntity(229U);
    msg.x = 0.03460168406853059;
    msg.y = 0.9638411588037715;
    msg.z = 0.23498667345550572;
    msg.phi = 0.7190417854968686;
    msg.theta = 0.9712269052236647;
    msg.psi = 0.7872822312874074;
    msg.p = 0.3469554543120207;
    msg.q = 0.3191206149934285;
    msg.r = 0.30978342969355455;
    msg.u = 0.050097217499591284;
    msg.v = 0.6845983073137681;
    msg.w = 0.6052354079261798;
    msg.bias_psi = 0.009852534922975775;
    msg.bias_r = 0.7938788145513772;

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
    msg.setTimeStamp(0.9196028489897805);
    msg.setSource(14973U);
    msg.setSourceEntity(187U);
    msg.setDestination(23317U);
    msg.setDestinationEntity(47U);
    msg.x = 0.9602742978536823;
    msg.y = 0.08211766936701637;
    msg.z = 0.5804824176951946;
    msg.phi = 0.3744958922357867;
    msg.theta = 0.12316010789117571;
    msg.psi = 0.47941715640767923;
    msg.p = 0.2738726161445628;
    msg.q = 0.4187211760538704;
    msg.r = 0.2308638359846209;
    msg.u = 0.05804020216979977;
    msg.v = 0.11825080064114868;
    msg.w = 0.251953839146037;
    msg.bias_psi = 0.03641321012559706;
    msg.bias_r = 0.9032896489817487;

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
    msg.setTimeStamp(0.010823088205943243);
    msg.setSource(46864U);
    msg.setSourceEntity(90U);
    msg.setDestination(42284U);
    msg.setDestinationEntity(203U);
    msg.x = 0.5999333938657777;
    msg.y = 0.5786383258783065;
    msg.z = 0.16853721074733485;
    msg.phi = 0.5471258284505003;
    msg.theta = 0.5173435721981676;
    msg.psi = 0.23207029107364785;
    msg.p = 0.7455634071197128;
    msg.q = 0.32348673758758284;
    msg.r = 0.6647297321505876;
    msg.u = 0.2679255998306197;
    msg.v = 0.8502180747191505;
    msg.w = 0.6749961266442862;
    msg.bias_psi = 0.5559100489804989;
    msg.bias_r = 0.06482178385303683;

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
    msg.setTimeStamp(0.14171638527813935);
    msg.setSource(37948U);
    msg.setSourceEntity(187U);
    msg.setDestination(65521U);
    msg.setDestinationEntity(14U);
    msg.bias_psi = 0.2001760556045168;
    msg.bias_r = 0.4355690686429231;
    msg.cog = 0.28730231339183865;
    msg.cyaw = 0.5961364400392068;
    msg.lbl_rej_level = 0.7335526517628588;
    msg.gps_rej_level = 0.1215622300743946;
    msg.custom_x = 0.4048438243141991;
    msg.custom_y = 0.6957134388591888;
    msg.custom_z = 0.951593259122301;

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
    msg.setTimeStamp(0.9383067386973087);
    msg.setSource(57899U);
    msg.setSourceEntity(38U);
    msg.setDestination(2898U);
    msg.setDestinationEntity(180U);
    msg.bias_psi = 0.37308029979589663;
    msg.bias_r = 0.5849529089182933;
    msg.cog = 0.6984224472246329;
    msg.cyaw = 0.7705573461796024;
    msg.lbl_rej_level = 0.20164968443549858;
    msg.gps_rej_level = 0.15770523142029336;
    msg.custom_x = 0.12009758561146189;
    msg.custom_y = 0.6195556110527306;
    msg.custom_z = 0.2567711726068118;

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
    msg.setTimeStamp(0.022175326565817333);
    msg.setSource(24272U);
    msg.setSourceEntity(128U);
    msg.setDestination(52575U);
    msg.setDestinationEntity(117U);
    msg.bias_psi = 0.884993161411791;
    msg.bias_r = 0.47837318877640955;
    msg.cog = 0.0053573023926895;
    msg.cyaw = 0.14620866711757263;
    msg.lbl_rej_level = 0.8161786444737851;
    msg.gps_rej_level = 0.7929614859239748;
    msg.custom_x = 0.7269432011596071;
    msg.custom_y = 0.665184293787796;
    msg.custom_z = 0.5285202292901144;

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
    msg.setTimeStamp(0.6851332115603337);
    msg.setSource(55242U);
    msg.setSourceEntity(219U);
    msg.setDestination(52054U);
    msg.setDestinationEntity(106U);
    msg.utc_time = 0.12300736035487281;
    msg.reason = 131U;

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
    msg.setTimeStamp(0.06835209188961522);
    msg.setSource(39669U);
    msg.setSourceEntity(119U);
    msg.setDestination(17236U);
    msg.setDestinationEntity(71U);
    msg.utc_time = 0.5622234397154177;
    msg.reason = 148U;

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
    msg.setTimeStamp(0.545126521575434);
    msg.setSource(61463U);
    msg.setSourceEntity(190U);
    msg.setDestination(1065U);
    msg.setDestinationEntity(39U);
    msg.utc_time = 0.06040953441481611;
    msg.reason = 187U;

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
    msg.setTimeStamp(0.3722825524299973);
    msg.setSource(30918U);
    msg.setSourceEntity(7U);
    msg.setDestination(64755U);
    msg.setDestinationEntity(167U);
    msg.id = 55U;
    msg.range = 0.588289151872378;
    msg.acceptance = 48U;

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
    msg.setTimeStamp(0.035722194539273056);
    msg.setSource(65529U);
    msg.setSourceEntity(60U);
    msg.setDestination(22774U);
    msg.setDestinationEntity(91U);
    msg.id = 79U;
    msg.range = 0.003519543960391669;
    msg.acceptance = 81U;

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
    msg.setTimeStamp(0.18581589053313108);
    msg.setSource(45784U);
    msg.setSourceEntity(171U);
    msg.setDestination(24788U);
    msg.setDestinationEntity(68U);
    msg.id = 202U;
    msg.range = 0.3817179513215755;
    msg.acceptance = 64U;

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
    msg.setTimeStamp(0.773990378543765);
    msg.setSource(44353U);
    msg.setSourceEntity(18U);
    msg.setDestination(2467U);
    msg.setDestinationEntity(101U);
    msg.type = 132U;
    msg.reason = 129U;
    msg.value = 0.45054144206755087;
    msg.timestep = 0.32122986269748743;

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
    msg.setTimeStamp(0.2826262232951041);
    msg.setSource(6105U);
    msg.setSourceEntity(193U);
    msg.setDestination(56357U);
    msg.setDestinationEntity(242U);
    msg.type = 183U;
    msg.reason = 63U;
    msg.value = 0.2928302146928855;
    msg.timestep = 0.07654040964127984;

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
    msg.setTimeStamp(0.9703646051416095);
    msg.setSource(44459U);
    msg.setSourceEntity(52U);
    msg.setDestination(56474U);
    msg.setDestinationEntity(185U);
    msg.type = 47U;
    msg.reason = 164U;
    msg.value = 0.6894001886447472;
    msg.timestep = 0.3725831116501809;

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
    msg.setTimeStamp(0.5209429231194441);
    msg.setSource(63201U);
    msg.setSourceEntity(3U);
    msg.setDestination(48857U);
    msg.setDestinationEntity(116U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BVTAUILALQNDYIJKCCZXEGNUEAVGQUZRZONCWCWEZFTAOKWVQPLMOUIFMXSOSLCYAQODEKWLDDDSXMPPURFXUSZROEYTDTSMTWOQYJZKRDAIMQCJPBBNBNNCNSUVEYTFFXHSZXPBMOLBOWYZPYNNHWLVEB");
    tmp_msg_0.lat = 0.2728084379974236;
    tmp_msg_0.lon = 0.8348548914109764;
    tmp_msg_0.depth = 0.613625861540243;
    tmp_msg_0.query_channel = 93U;
    tmp_msg_0.reply_channel = 223U;
    tmp_msg_0.transponder_delay = 139U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6307910877633832;
    msg.y = 0.5504238459098761;
    msg.var_x = 0.3455771837914844;
    msg.var_y = 0.3774944202121785;
    msg.distance = 0.09191906035140396;

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
    msg.setTimeStamp(0.3119814539367801);
    msg.setSource(13385U);
    msg.setSourceEntity(157U);
    msg.setDestination(17969U);
    msg.setDestinationEntity(66U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RLQRGAGDJLCCFCWWBGKTDFDNQACVBEULVWXSNSNIQU");
    tmp_msg_0.lat = 0.7506504287363234;
    tmp_msg_0.lon = 0.2852148433770173;
    tmp_msg_0.depth = 0.027443894396177004;
    tmp_msg_0.query_channel = 112U;
    tmp_msg_0.reply_channel = 192U;
    tmp_msg_0.transponder_delay = 235U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6328678794686305;
    msg.y = 0.3915465228670133;
    msg.var_x = 0.23101123090305986;
    msg.var_y = 0.7936271189075631;
    msg.distance = 0.9005584396834405;

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
    msg.setTimeStamp(0.7473218415749837);
    msg.setSource(25364U);
    msg.setSourceEntity(65U);
    msg.setDestination(41917U);
    msg.setDestinationEntity(5U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CMFBOVHYFEWIXLOTWLVOLJTWPLFRJZTDALKZHWXXCVZMRIJUAMRAYSCOSKAZHBLPQDOEBPOMCZDPAYJINVAJRTZXBUTBSBRXGIJVUKMWFNKEHEVUNHEVBHWUXGNGYKZPTWICQYRAKAGJDNDBTTSQPVSGDIENXDDKULSOJREWYPYXAQOBFSSVCMPIKBIUEGVSGQHQYPTODYQCFGQNNUHMNIJUHSLZLMLORUWFTCFXYKGQNWFRZQCEFJ");
    tmp_msg_0.lat = 0.42821353926792094;
    tmp_msg_0.lon = 0.9166103289369735;
    tmp_msg_0.depth = 0.8608586016969629;
    tmp_msg_0.query_channel = 203U;
    tmp_msg_0.reply_channel = 190U;
    tmp_msg_0.transponder_delay = 227U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.11983764705796429;
    msg.y = 0.7432131243059691;
    msg.var_x = 0.32679805702280573;
    msg.var_y = 0.5664683468752469;
    msg.distance = 0.7875800319385226;

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
    msg.setTimeStamp(0.09469747921582006);
    msg.setSource(30612U);
    msg.setSourceEntity(131U);
    msg.setDestination(19372U);
    msg.setDestinationEntity(229U);
    msg.state = 179U;

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
    msg.setTimeStamp(0.6908555034695524);
    msg.setSource(2674U);
    msg.setSourceEntity(118U);
    msg.setDestination(62577U);
    msg.setDestinationEntity(240U);
    msg.state = 216U;

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
    msg.setTimeStamp(0.9921401598456945);
    msg.setSource(26198U);
    msg.setSourceEntity(112U);
    msg.setDestination(58051U);
    msg.setDestinationEntity(100U);
    msg.state = 53U;

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
    msg.setTimeStamp(0.7608122312769222);
    msg.setSource(53029U);
    msg.setSourceEntity(172U);
    msg.setDestination(40846U);
    msg.setDestinationEntity(118U);
    msg.x = 0.22509719626351843;
    msg.y = 0.8387547955969289;
    msg.z = 0.36953608340177924;

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
    msg.setTimeStamp(0.4453657104737535);
    msg.setSource(6143U);
    msg.setSourceEntity(68U);
    msg.setDestination(8557U);
    msg.setDestinationEntity(29U);
    msg.x = 0.3406152936609075;
    msg.y = 0.0610484176584426;
    msg.z = 0.4073775859996347;

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
    msg.setTimeStamp(0.8664454592134232);
    msg.setSource(21476U);
    msg.setSourceEntity(226U);
    msg.setDestination(64389U);
    msg.setDestinationEntity(186U);
    msg.x = 0.45324429863278415;
    msg.y = 0.6871484117559461;
    msg.z = 0.8647171298537564;

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
    msg.setTimeStamp(0.9149451332626475);
    msg.setSource(43800U);
    msg.setSourceEntity(160U);
    msg.setDestination(1379U);
    msg.setDestinationEntity(20U);
    msg.va = 0.12184093094853587;
    msg.aoa = 0.7318505941371608;
    msg.ssa = 0.12087022851354023;

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
    msg.setTimeStamp(0.9755934712987967);
    msg.setSource(28585U);
    msg.setSourceEntity(180U);
    msg.setDestination(33240U);
    msg.setDestinationEntity(228U);
    msg.va = 0.4282113514678092;
    msg.aoa = 0.18808916369181583;
    msg.ssa = 0.504867655286783;

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
    msg.setTimeStamp(0.5819062869120553);
    msg.setSource(18058U);
    msg.setSourceEntity(45U);
    msg.setDestination(61065U);
    msg.setDestinationEntity(201U);
    msg.va = 0.45753142806196945;
    msg.aoa = 0.5208271457569945;
    msg.ssa = 0.9403871136579066;

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
    msg.setTimeStamp(0.6077907444196841);
    msg.setSource(60151U);
    msg.setSourceEntity(143U);
    msg.setDestination(23701U);
    msg.setDestinationEntity(117U);
    msg.value = 0.00933907682356272;

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
    msg.setTimeStamp(0.9519917220041859);
    msg.setSource(22410U);
    msg.setSourceEntity(146U);
    msg.setDestination(51303U);
    msg.setDestinationEntity(238U);
    msg.value = 0.021778113780028585;

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
    msg.setTimeStamp(0.9726003256542014);
    msg.setSource(22569U);
    msg.setSourceEntity(13U);
    msg.setDestination(1073U);
    msg.setDestinationEntity(242U);
    msg.value = 0.4765485545684077;

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
    msg.setTimeStamp(0.6919831296008855);
    msg.setSource(1955U);
    msg.setSourceEntity(63U);
    msg.setDestination(19133U);
    msg.setDestinationEntity(116U);
    msg.value = 0.5643188003402492;
    msg.z_units = 204U;

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
    msg.setTimeStamp(0.20403925983373283);
    msg.setSource(61537U);
    msg.setSourceEntity(254U);
    msg.setDestination(8576U);
    msg.setDestinationEntity(91U);
    msg.value = 0.5471360606894093;
    msg.z_units = 224U;

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
    msg.setTimeStamp(0.15725649418418508);
    msg.setSource(4871U);
    msg.setSourceEntity(121U);
    msg.setDestination(62601U);
    msg.setDestinationEntity(156U);
    msg.value = 0.7800775732109931;
    msg.z_units = 219U;

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
    msg.setTimeStamp(0.10111445590862467);
    msg.setSource(29695U);
    msg.setSourceEntity(250U);
    msg.setDestination(22594U);
    msg.setDestinationEntity(55U);
    msg.value = 0.7094940884630295;
    msg.speed_units = 151U;

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
    msg.setTimeStamp(0.6479786784548853);
    msg.setSource(46958U);
    msg.setSourceEntity(89U);
    msg.setDestination(12060U);
    msg.setDestinationEntity(192U);
    msg.value = 0.603675239797003;
    msg.speed_units = 233U;

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
    msg.setTimeStamp(0.7953607299008071);
    msg.setSource(23045U);
    msg.setSourceEntity(159U);
    msg.setDestination(35820U);
    msg.setDestinationEntity(83U);
    msg.value = 0.30810846797675595;
    msg.speed_units = 247U;

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
    msg.setTimeStamp(0.5134776481820231);
    msg.setSource(36099U);
    msg.setSourceEntity(36U);
    msg.setDestination(6035U);
    msg.setDestinationEntity(31U);
    msg.value = 0.3021580828458924;

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
    msg.setTimeStamp(0.41738972711420197);
    msg.setSource(6698U);
    msg.setSourceEntity(243U);
    msg.setDestination(31064U);
    msg.setDestinationEntity(14U);
    msg.value = 0.9651901484207613;

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
    msg.setTimeStamp(0.770334085164161);
    msg.setSource(64054U);
    msg.setSourceEntity(6U);
    msg.setDestination(36792U);
    msg.setDestinationEntity(237U);
    msg.value = 0.904179513019807;

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
    msg.setTimeStamp(0.4628839373238056);
    msg.setSource(37912U);
    msg.setSourceEntity(123U);
    msg.setDestination(41919U);
    msg.setDestinationEntity(108U);
    msg.value = 0.07955358317359162;

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
    msg.setTimeStamp(0.026512191721873912);
    msg.setSource(8579U);
    msg.setSourceEntity(13U);
    msg.setDestination(55730U);
    msg.setDestinationEntity(186U);
    msg.value = 0.13349146547137636;

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
    msg.setTimeStamp(0.14474284070347399);
    msg.setSource(27667U);
    msg.setSourceEntity(60U);
    msg.setDestination(34235U);
    msg.setDestinationEntity(15U);
    msg.value = 0.019165731077906534;

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
    msg.setTimeStamp(0.39844257767193336);
    msg.setSource(21492U);
    msg.setSourceEntity(62U);
    msg.setDestination(16175U);
    msg.setDestinationEntity(120U);
    msg.value = 0.1348560250404247;

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
    msg.setTimeStamp(0.03825567212346437);
    msg.setSource(13386U);
    msg.setSourceEntity(228U);
    msg.setDestination(8292U);
    msg.setDestinationEntity(169U);
    msg.value = 0.3689890767376023;

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
    msg.setTimeStamp(0.4810609806587687);
    msg.setSource(12849U);
    msg.setSourceEntity(45U);
    msg.setDestination(54334U);
    msg.setDestinationEntity(202U);
    msg.value = 0.2031141403772203;

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
    msg.setTimeStamp(0.13714538753181282);
    msg.setSource(55384U);
    msg.setSourceEntity(95U);
    msg.setDestination(14502U);
    msg.setDestinationEntity(17U);
    msg.path_ref = 1902715254U;
    msg.start_lat = 0.8469782653894222;
    msg.start_lon = 0.011011626839025346;
    msg.start_z = 0.4924912327769173;
    msg.start_z_units = 151U;
    msg.end_lat = 0.28513234873397086;
    msg.end_lon = 0.9388832202888655;
    msg.end_z = 0.7722302675575661;
    msg.end_z_units = 203U;
    msg.speed = 0.3232396648157627;
    msg.speed_units = 147U;
    msg.lradius = 0.7464896378676404;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.012425320524594108);
    msg.setSource(30884U);
    msg.setSourceEntity(114U);
    msg.setDestination(36596U);
    msg.setDestinationEntity(49U);
    msg.path_ref = 3716097171U;
    msg.start_lat = 0.5493371508958032;
    msg.start_lon = 0.09589743023387953;
    msg.start_z = 0.09281663960302988;
    msg.start_z_units = 93U;
    msg.end_lat = 0.1343129189771196;
    msg.end_lon = 0.39297766740536255;
    msg.end_z = 0.13041892570519864;
    msg.end_z_units = 90U;
    msg.speed = 0.7964190806577404;
    msg.speed_units = 1U;
    msg.lradius = 0.725138328143287;
    msg.flags = 178U;

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
    msg.setTimeStamp(0.9816393823572013);
    msg.setSource(21958U);
    msg.setSourceEntity(164U);
    msg.setDestination(64990U);
    msg.setDestinationEntity(183U);
    msg.path_ref = 4245364945U;
    msg.start_lat = 0.6982377114409034;
    msg.start_lon = 0.9482303267452954;
    msg.start_z = 0.481654364065619;
    msg.start_z_units = 254U;
    msg.end_lat = 0.30424830280360016;
    msg.end_lon = 0.38080994240034083;
    msg.end_z = 0.8676158350433196;
    msg.end_z_units = 192U;
    msg.speed = 0.6474640277461894;
    msg.speed_units = 21U;
    msg.lradius = 0.5563297654093825;
    msg.flags = 180U;

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
    msg.setTimeStamp(0.9861129441144394);
    msg.setSource(54837U);
    msg.setSourceEntity(212U);
    msg.setDestination(40764U);
    msg.setDestinationEntity(240U);
    msg.x = 0.7215068272288285;
    msg.y = 0.22877666168794397;
    msg.z = 0.9281166767426733;
    msg.k = 0.5689696735496925;
    msg.m = 0.9394814218842382;
    msg.n = 0.321597963961178;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.15930356774666854);
    msg.setSource(42806U);
    msg.setSourceEntity(55U);
    msg.setDestination(27640U);
    msg.setDestinationEntity(183U);
    msg.x = 0.011742203530000772;
    msg.y = 0.6913519242279847;
    msg.z = 0.6801712553020405;
    msg.k = 0.504613100776778;
    msg.m = 0.012268923988097646;
    msg.n = 0.3632568859197989;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.12164453357767768);
    msg.setSource(44150U);
    msg.setSourceEntity(179U);
    msg.setDestination(45248U);
    msg.setDestinationEntity(94U);
    msg.x = 0.927392961631684;
    msg.y = 0.020012075630778114;
    msg.z = 0.6582143189492857;
    msg.k = 0.09070079707460255;
    msg.m = 0.8541834869255066;
    msg.n = 0.4405661337516493;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.9672377639021837);
    msg.setSource(9172U);
    msg.setSourceEntity(238U);
    msg.setDestination(36430U);
    msg.setDestinationEntity(171U);
    msg.value = 0.9498194356645169;

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
    msg.setTimeStamp(0.8168371364595176);
    msg.setSource(14448U);
    msg.setSourceEntity(12U);
    msg.setDestination(5485U);
    msg.setDestinationEntity(234U);
    msg.value = 0.3184604492386257;

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
    msg.setTimeStamp(0.5630426337838033);
    msg.setSource(18765U);
    msg.setSourceEntity(154U);
    msg.setDestination(14486U);
    msg.setDestinationEntity(65U);
    msg.value = 0.5522986028176263;

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
    msg.setTimeStamp(0.43463903894451394);
    msg.setSource(15025U);
    msg.setSourceEntity(128U);
    msg.setDestination(13788U);
    msg.setDestinationEntity(53U);
    msg.u = 0.028532725038742157;
    msg.v = 0.04909913584582459;
    msg.w = 0.35585124315056815;
    msg.p = 0.4119525969542468;
    msg.q = 0.3639256694201558;
    msg.r = 0.47104014333605737;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.057619384969415766);
    msg.setSource(10680U);
    msg.setSourceEntity(9U);
    msg.setDestination(11060U);
    msg.setDestinationEntity(56U);
    msg.u = 0.04020571217966373;
    msg.v = 0.22501747454459853;
    msg.w = 0.984138750366376;
    msg.p = 0.837555421681742;
    msg.q = 0.350030222125544;
    msg.r = 0.13609421728313753;
    msg.flags = 199U;

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
    msg.setTimeStamp(0.6466852953864344);
    msg.setSource(17579U);
    msg.setSourceEntity(94U);
    msg.setDestination(57160U);
    msg.setDestinationEntity(245U);
    msg.u = 0.20251712725866566;
    msg.v = 0.9763762135578223;
    msg.w = 0.5534107238560162;
    msg.p = 0.5383587741549705;
    msg.q = 0.6888605232937509;
    msg.r = 0.16089827095218723;
    msg.flags = 214U;

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
    msg.setTimeStamp(0.10056249848356136);
    msg.setSource(26437U);
    msg.setSourceEntity(124U);
    msg.setDestination(54020U);
    msg.setDestinationEntity(147U);
    msg.path_ref = 151665094U;
    msg.start_lat = 0.9033516727575065;
    msg.start_lon = 0.7418052123147709;
    msg.start_z = 0.9006279814956641;
    msg.start_z_units = 7U;
    msg.end_lat = 0.9561050602475298;
    msg.end_lon = 0.5099480788820518;
    msg.end_z = 0.8933422620629828;
    msg.end_z_units = 182U;
    msg.lradius = 0.01568205873756956;
    msg.flags = 180U;
    msg.x = 0.6397866969502334;
    msg.y = 0.2575634105675053;
    msg.z = 0.6489456402957211;
    msg.vx = 0.6616874763160973;
    msg.vy = 0.7835715289031824;
    msg.vz = 0.08627786129767312;
    msg.course_error = 0.7454566996525015;
    msg.eta = 51421U;

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
    msg.setTimeStamp(0.2798501584313242);
    msg.setSource(47703U);
    msg.setSourceEntity(178U);
    msg.setDestination(16053U);
    msg.setDestinationEntity(226U);
    msg.path_ref = 3986305761U;
    msg.start_lat = 0.5613268796005791;
    msg.start_lon = 0.2915325139313584;
    msg.start_z = 0.933429537904629;
    msg.start_z_units = 132U;
    msg.end_lat = 0.5156455982081272;
    msg.end_lon = 0.366153286970586;
    msg.end_z = 0.07354386593532636;
    msg.end_z_units = 139U;
    msg.lradius = 0.4676204720636714;
    msg.flags = 228U;
    msg.x = 0.7407571769786939;
    msg.y = 0.5576043237183375;
    msg.z = 0.48859389280001275;
    msg.vx = 0.9690974064477421;
    msg.vy = 0.8004752210168558;
    msg.vz = 0.06001413090584029;
    msg.course_error = 0.04641653834354753;
    msg.eta = 61714U;

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
    msg.setTimeStamp(0.2837167310329113);
    msg.setSource(52912U);
    msg.setSourceEntity(227U);
    msg.setDestination(16817U);
    msg.setDestinationEntity(159U);
    msg.path_ref = 1285955645U;
    msg.start_lat = 0.012442870924001426;
    msg.start_lon = 0.1262594352700137;
    msg.start_z = 0.7535735307952063;
    msg.start_z_units = 110U;
    msg.end_lat = 0.982621173778808;
    msg.end_lon = 0.8378279398343407;
    msg.end_z = 0.44056614152001183;
    msg.end_z_units = 20U;
    msg.lradius = 0.08795171447555461;
    msg.flags = 2U;
    msg.x = 0.1472913867335066;
    msg.y = 0.25370594672117686;
    msg.z = 0.13971730388154835;
    msg.vx = 0.26536215607970803;
    msg.vy = 0.5988291029540906;
    msg.vz = 0.7161661055926534;
    msg.course_error = 0.3783209147873152;
    msg.eta = 15859U;

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
    msg.setTimeStamp(0.23780036054208487);
    msg.setSource(15415U);
    msg.setSourceEntity(116U);
    msg.setDestination(59571U);
    msg.setDestinationEntity(252U);
    msg.k = 0.26443259424333065;
    msg.m = 0.8486085528692011;
    msg.n = 0.4676062194325157;

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
    msg.setTimeStamp(0.5845411616343864);
    msg.setSource(53809U);
    msg.setSourceEntity(181U);
    msg.setDestination(26000U);
    msg.setDestinationEntity(107U);
    msg.k = 0.3228615679279381;
    msg.m = 0.1776241375085471;
    msg.n = 0.10861192917822571;

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
    msg.setTimeStamp(0.33832760866810163);
    msg.setSource(24689U);
    msg.setSourceEntity(164U);
    msg.setDestination(28464U);
    msg.setDestinationEntity(195U);
    msg.k = 0.8561326936402612;
    msg.m = 0.682744017385919;
    msg.n = 0.900143255214871;

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
    msg.setTimeStamp(0.28617021239472906);
    msg.setSource(8962U);
    msg.setSourceEntity(211U);
    msg.setDestination(17040U);
    msg.setDestinationEntity(129U);
    msg.p = 0.8384808566615742;
    msg.i = 0.4947062557255565;
    msg.d = 0.8672029975865949;
    msg.a = 0.6510610683523609;

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
    msg.setTimeStamp(0.6851561913112542);
    msg.setSource(5517U);
    msg.setSourceEntity(7U);
    msg.setDestination(52348U);
    msg.setDestinationEntity(150U);
    msg.p = 0.7383536773762853;
    msg.i = 0.9058411527092487;
    msg.d = 0.6771282147779939;
    msg.a = 0.6301798002602651;

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
    msg.setTimeStamp(0.9268872730684362);
    msg.setSource(7406U);
    msg.setSourceEntity(75U);
    msg.setDestination(32072U);
    msg.setDestinationEntity(68U);
    msg.p = 0.11774612058531075;
    msg.i = 0.009625938573615267;
    msg.d = 0.6263973183219396;
    msg.a = 0.366162302993693;

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
    msg.setTimeStamp(0.06670137909829166);
    msg.setSource(53966U);
    msg.setSourceEntity(10U);
    msg.setDestination(16965U);
    msg.setDestinationEntity(192U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.38080446857751593);
    msg.setSource(7645U);
    msg.setSourceEntity(146U);
    msg.setDestination(232U);
    msg.setDestinationEntity(28U);
    msg.op = 131U;

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
    msg.setTimeStamp(0.16426798199470527);
    msg.setSource(2548U);
    msg.setSourceEntity(132U);
    msg.setDestination(60512U);
    msg.setDestinationEntity(77U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.8851708393006844);
    msg.setSource(35875U);
    msg.setSourceEntity(156U);
    msg.setDestination(40515U);
    msg.setDestinationEntity(159U);
    msg.x = 0.2646348472510437;
    msg.y = 0.6898335973749692;
    msg.z = 0.6442068135676239;
    msg.vx = 0.17735758717464312;
    msg.vy = 0.9790136286356205;
    msg.vz = 0.2653823034657158;
    msg.ax = 0.19254401948114075;
    msg.ay = 0.7300750464295493;
    msg.az = 0.33432167710124805;
    msg.flags = 62287U;

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
    msg.setTimeStamp(0.48867968555511554);
    msg.setSource(2955U);
    msg.setSourceEntity(61U);
    msg.setDestination(50573U);
    msg.setDestinationEntity(81U);
    msg.x = 0.7018125165084228;
    msg.y = 0.036816930942631165;
    msg.z = 0.05357530844575564;
    msg.vx = 0.36487636556874103;
    msg.vy = 0.9680752876064922;
    msg.vz = 0.3506838001486847;
    msg.ax = 0.7814974979642848;
    msg.ay = 0.12060690480777014;
    msg.az = 0.8720085084209295;
    msg.flags = 7680U;

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
    msg.setTimeStamp(0.7896510494914101);
    msg.setSource(33351U);
    msg.setSourceEntity(160U);
    msg.setDestination(32826U);
    msg.setDestinationEntity(156U);
    msg.x = 0.507059124093885;
    msg.y = 0.3831173509724687;
    msg.z = 0.2140073737311199;
    msg.vx = 0.33865947189222256;
    msg.vy = 0.8209826216645114;
    msg.vz = 0.5137308437929448;
    msg.ax = 0.23813686609617923;
    msg.ay = 0.8846233506397191;
    msg.az = 0.7221942165764318;
    msg.flags = 38530U;

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
    msg.setTimeStamp(0.6234583080862123);
    msg.setSource(24107U);
    msg.setSourceEntity(19U);
    msg.setDestination(31617U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8028430820920434;

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
    msg.setTimeStamp(0.2834788307163485);
    msg.setSource(60616U);
    msg.setSourceEntity(149U);
    msg.setDestination(19919U);
    msg.setDestinationEntity(110U);
    msg.value = 0.20954286256478405;

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
    msg.setTimeStamp(0.5757482388473726);
    msg.setSource(47796U);
    msg.setSourceEntity(109U);
    msg.setDestination(23580U);
    msg.setDestinationEntity(104U);
    msg.value = 0.968207673439104;

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
    msg.setTimeStamp(0.014329953513236848);
    msg.setSource(26943U);
    msg.setSourceEntity(13U);
    msg.setDestination(49400U);
    msg.setDestinationEntity(39U);
    msg.timeout = 18403U;
    msg.lat = 0.08116011483768726;
    msg.lon = 0.9755826014860479;
    msg.z = 0.06605700693637029;
    msg.z_units = 246U;
    msg.speed = 0.5947010782809466;
    msg.speed_units = 190U;
    msg.roll = 0.26530748591337805;
    msg.pitch = 0.18197534790254077;
    msg.yaw = 0.383905105597967;
    msg.custom.assign("GWFGWKFXLQIUFPWXWRJGJFSCNBQO");

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
    msg.setTimeStamp(0.1137028240788639);
    msg.setSource(50028U);
    msg.setSourceEntity(120U);
    msg.setDestination(31514U);
    msg.setDestinationEntity(26U);
    msg.timeout = 60786U;
    msg.lat = 0.5014569174514852;
    msg.lon = 0.1339185162047818;
    msg.z = 0.26488004362290685;
    msg.z_units = 36U;
    msg.speed = 0.9599977595174031;
    msg.speed_units = 101U;
    msg.roll = 0.2770229888601724;
    msg.pitch = 0.23367979772518677;
    msg.yaw = 0.15330432469471222;
    msg.custom.assign("UOQUFKCTASHHGOIOWXQCBYCGNZOMJQUCVNGGKDUZWKANLYZLXJTLWQBTZZBOYJNBNJIFFQFVIMNIIDMHDAIQLGBLHVFGGEMCNMDVSSVHXLSRDKJXQZQHSWFPJDZMHEEJRKYGAERXSOWOJBPGRZLTK");

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
    msg.setTimeStamp(0.7482828383783783);
    msg.setSource(42997U);
    msg.setSourceEntity(134U);
    msg.setDestination(57916U);
    msg.setDestinationEntity(70U);
    msg.timeout = 52737U;
    msg.lat = 0.13670926140277795;
    msg.lon = 0.37826834617184935;
    msg.z = 0.44439384805150317;
    msg.z_units = 201U;
    msg.speed = 0.6185890001101927;
    msg.speed_units = 83U;
    msg.roll = 0.692730100525966;
    msg.pitch = 0.035574890523283775;
    msg.yaw = 0.10351969314097198;
    msg.custom.assign("LOSAHIKVVPDMBHMOECRGAMWKCJGGZKPBHCSZDQCPIWGIMCQOJFUWJUDLNR");

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
    msg.setTimeStamp(0.8959573289189159);
    msg.setSource(1868U);
    msg.setSourceEntity(46U);
    msg.setDestination(40454U);
    msg.setDestinationEntity(232U);
    msg.timeout = 15871U;
    msg.lat = 0.43946849008938205;
    msg.lon = 0.8074476720550448;
    msg.z = 0.6987542783265159;
    msg.z_units = 141U;
    msg.speed = 0.24119782508104048;
    msg.speed_units = 180U;
    msg.duration = 31275U;
    msg.radius = 0.03637651627352312;
    msg.flags = 207U;
    msg.custom.assign("PPDVTNOWQYAQUWHVJFXCEABCUZMUGURBKSOUMTMARJTSHLAADUSGXMQVLJKBEGLFFOXBFVZHMEETYQIVPKCYLLOSNCGKRHJUPAYOQEJWWJKEBWRPYRUYWWZYQKKAMIVSUIDJCUMXDXTTRLKHQNHXIPCEQHGZNBTAGESFJFDPICOJONEVLNZDFDGNSGGMKWCSZPILDQBXNLNTKYVAHWOSVBXFX");

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
    msg.setTimeStamp(0.4000054934338336);
    msg.setSource(7720U);
    msg.setSourceEntity(250U);
    msg.setDestination(2932U);
    msg.setDestinationEntity(63U);
    msg.timeout = 60783U;
    msg.lat = 0.9813576993865454;
    msg.lon = 0.6488261468321459;
    msg.z = 0.7831330507040767;
    msg.z_units = 99U;
    msg.speed = 0.2137320297809121;
    msg.speed_units = 61U;
    msg.duration = 61973U;
    msg.radius = 0.7608110191572216;
    msg.flags = 7U;
    msg.custom.assign("IYXCLDLNUJCCYPRNQEQNGATPQPRAZJVVFHWMGPURIGSCBHXTHPRWZSKBPUYJNVUQBIITEDFOXLBDEJTOMUVRGDACLHGFXWAKTFKYEQFQKAGGLEFFWPUAGDJRXGETZICMABSRHSOCTZISYLECEINUVDXOHZOHBOLMAEIQFMXJBQSFVBEYKOMNYNRZNPWZKUNSAGBMDHZXKPQKKWWQNTCFLSBVMCDZODURLYR");

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
    msg.setTimeStamp(0.5130201714935425);
    msg.setSource(58440U);
    msg.setSourceEntity(251U);
    msg.setDestination(32714U);
    msg.setDestinationEntity(203U);
    msg.timeout = 60721U;
    msg.lat = 0.4193465797596647;
    msg.lon = 0.3665959787910742;
    msg.z = 0.20373286797521573;
    msg.z_units = 77U;
    msg.speed = 0.389048702310705;
    msg.speed_units = 189U;
    msg.duration = 42376U;
    msg.radius = 0.5511398582346656;
    msg.flags = 72U;
    msg.custom.assign("HQKCVILNACIFVFIDOYMNMGWOXZKCJRIYDBDTCSBARBUCZCOKLYERPIAYXENAFWTFIKLKXNGFBPLSUOEJUANWCXAQPMUBIXFDWZJRZCQVGUYMBHTHLSZDTPZGMODZLTFWZVHDRHGVFJVMHIVOSYJYFIH");

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
    msg.setTimeStamp(0.6391011185633543);
    msg.setSource(28001U);
    msg.setSourceEntity(62U);
    msg.setDestination(61527U);
    msg.setDestinationEntity(140U);
    msg.custom.assign("CCIABROTZNMYPTPMJMCPBEIWTSPQXSAVGSCZHMTXELWRIXVZQNOMSBSOJXZOZGNDITXFYUAWFVWSZDEQPELUARXYTIKKYYYUERCVPIYNLBAMIEKFUZLAOARRYHBJKTBMLUGNUHUBWEJGOVACDLCWFFVVOIGRJDYJQFKQCSESMZDCBCHYHJBPUXVQTINMNWOPGHMTFLPXFSRHHLTXNWDRKJHBVEP");

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
    msg.setTimeStamp(0.9145780567557511);
    msg.setSource(36465U);
    msg.setSourceEntity(99U);
    msg.setDestination(60546U);
    msg.setDestinationEntity(186U);
    msg.custom.assign("IABXSZFVZCMBWAEJFEQZSOIXISVQTEATDBPRUOPTUWKEZWVSREBLITGDUWLLTSSGKSGHGVGMPXNZCYFPCOKUMNGCJCILKTQGPOYQFGTZMTUPJNRRBVFALJYWENTNMXBKYKKDZCWNOODYFDOQVVGRASFRYLCPGJHCUMWQAZXUJRRIUVVYBOSEHXIMJBEYXDDINILQHRTKHXZEPECMULAIQHARQAXWUHPHZDYBONFNXWQDFJVPHSLLMKAHKYW");

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
    msg.setTimeStamp(0.9531602225165776);
    msg.setSource(26379U);
    msg.setSourceEntity(193U);
    msg.setDestination(5361U);
    msg.setDestinationEntity(249U);
    msg.custom.assign("GYDHORQIHAOMBNZFOHATAJUMFIKOLWBDKT");

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
    msg.setTimeStamp(0.8071852755893424);
    msg.setSource(45914U);
    msg.setSourceEntity(25U);
    msg.setDestination(4429U);
    msg.setDestinationEntity(237U);
    msg.timeout = 26665U;
    msg.lat = 0.8992045826170362;
    msg.lon = 0.31812918355978714;
    msg.z = 0.746492490524214;
    msg.z_units = 151U;
    msg.duration = 4690U;
    msg.speed = 0.2202728145039039;
    msg.speed_units = 198U;
    msg.type = 177U;
    msg.radius = 0.10468583300045031;
    msg.length = 0.9259469941849894;
    msg.bearing = 0.7701993471028972;
    msg.direction = 122U;
    msg.custom.assign("TXNXRWVSUMSHKCFYTITXAGQPRFARDLPGFQGBTFGFWTCEUSWHANHIXBRGXWNUPHLRKIDVGOKNLNDMUMKQTNLIHBXEOYWPVSYNCARPILHTYLLZSMJAFYBAJOCQCCZOUAOQNRMYYSVQVGJSPROZWXJCIMVKLAYSJPHPSDUIBEUZATXFNTOIZTZSCJBNECPJKQDDEHFZWD");

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
    msg.setTimeStamp(0.07183435622064971);
    msg.setSource(63390U);
    msg.setSourceEntity(93U);
    msg.setDestination(8859U);
    msg.setDestinationEntity(27U);
    msg.timeout = 26620U;
    msg.lat = 0.6881012662506477;
    msg.lon = 0.14664151803808434;
    msg.z = 0.20122445391877353;
    msg.z_units = 37U;
    msg.duration = 43065U;
    msg.speed = 0.2883046917887959;
    msg.speed_units = 42U;
    msg.type = 32U;
    msg.radius = 0.40816415733676736;
    msg.length = 0.40366344358268946;
    msg.bearing = 0.799599092100235;
    msg.direction = 247U;
    msg.custom.assign("CGTFSXNRASZGWXMIMDLJAEXWQHMIAKGDMYMRNUCAPWJHCBBTLZSVIXOONIJCDENCKLNFZPEFDKKJFAKMNGRCEEHIBKKXHKNJNYZFNFJMUSMWZIUIHTQLYWHCBUFRCQW");

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
    msg.setTimeStamp(0.6151683679619687);
    msg.setSource(26827U);
    msg.setSourceEntity(41U);
    msg.setDestination(20026U);
    msg.setDestinationEntity(213U);
    msg.timeout = 57736U;
    msg.lat = 0.8783099109612892;
    msg.lon = 0.1862786436188062;
    msg.z = 0.7244478875846454;
    msg.z_units = 80U;
    msg.duration = 65191U;
    msg.speed = 0.9746821321312699;
    msg.speed_units = 77U;
    msg.type = 84U;
    msg.radius = 0.38209110283113046;
    msg.length = 0.09451372666912217;
    msg.bearing = 0.320009875149187;
    msg.direction = 113U;
    msg.custom.assign("DOTMXQPUUZRREDYZHSEKVXWIGGOYLKQJODZRLRHQUGVKILNFCVQUZRQQIFITBBPRBASKEQNNIFFEVKUCMAAYLNGVWUOQNHMWLCEBZPUZTOPRKUVDLNCXBX");

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
    msg.setTimeStamp(0.5543602544778479);
    msg.setSource(26737U);
    msg.setSourceEntity(193U);
    msg.setDestination(9361U);
    msg.setDestinationEntity(103U);
    msg.duration = 33489U;
    msg.custom.assign("LOOJDTNECELFAJWVFQIOREVFHIAIPPHSWBJRHSHQUSBLXMMXYOUYNPBXZMDMR");

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
    msg.setTimeStamp(0.9027669972185036);
    msg.setSource(59279U);
    msg.setSourceEntity(174U);
    msg.setDestination(36953U);
    msg.setDestinationEntity(61U);
    msg.duration = 9869U;
    msg.custom.assign("SRPOBGXPFDIXTJLJWCHXJVKDGFOKIUAISOGEQQYAEYZOPHCHOQZDUOEIAXVGZFVUHZUSKMWVKSMCZMLDGEETVBYROUGLUQLVWDJBWBWFQDSNBWEUPCNXFNMZDQTAHFUBPKAMGWSVNCVSIYMTJMMDLV");

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
    msg.setTimeStamp(0.3825838491008018);
    msg.setSource(10784U);
    msg.setSourceEntity(177U);
    msg.setDestination(61046U);
    msg.setDestinationEntity(52U);
    msg.duration = 3812U;
    msg.custom.assign("OFTOVGSTMFTDZFKHRHCMBWVRQEPCYGKNQVSIPSMJOQORIDYMLUWCCONJZGVDEDAYXUNKMGZBKKLTRYVQHXTMNHZPTJJUOIHHBPTWILEGJXEWXSPNCGAGHDWYRMIUZVYZPX");

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
    msg.setTimeStamp(0.8676746490685773);
    msg.setSource(58451U);
    msg.setSourceEntity(23U);
    msg.setDestination(2967U);
    msg.setDestinationEntity(116U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.38907318558575865;
    msg.control.set(tmp_msg_0);
    msg.duration = 63735U;
    msg.custom.assign("VOFJPHJZAHGGYXDRFGFMAGJFNACUPPGRQQSRJEWTYAHJCBWJAYYCBYVQKWIEULIDPQZSESZWILPENYDEXSCZUIXXEABFBRALBHTKHQOHNVBEOWZQWPOLTPKKRBZYDXWTUOTOCEIFHPCNNWHUCQFXXZIYLMCRZKHSAMMVIQXQNUEMLJGSGJGAZSYJLNJHTVWMUXRKMFGBUVLEMLDXVF");

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
    msg.setTimeStamp(0.3135245499161241);
    msg.setSource(31968U);
    msg.setSourceEntity(99U);
    msg.setDestination(26387U);
    msg.setDestinationEntity(196U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.935733992372939;
    msg.control.set(tmp_msg_0);
    msg.duration = 41871U;
    msg.custom.assign("JONZRAYWLPIUJDDUWWLQPUGOQESQYINSBURMASSNUQMUWLPKBJOQNXRXAGJMXVOUXHFVMCEJDHZPCFXKGPNVSWTINAHCVXGTKZMLKOGARLNKRHDPXSIIUXDBZTHSCJXZKXPYRTESOFZPBMMYYRLJRIZVIUAWAQJSEYGFLB");

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
    msg.setTimeStamp(0.3927978673677799);
    msg.setSource(32439U);
    msg.setSourceEntity(78U);
    msg.setDestination(45177U);
    msg.setDestinationEntity(49U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2601408581U;
    tmp_msg_0.start_lat = 0.5089838510779786;
    tmp_msg_0.start_lon = 0.053097094020268853;
    tmp_msg_0.start_z = 0.18316903891301806;
    tmp_msg_0.start_z_units = 179U;
    tmp_msg_0.end_lat = 0.8212055388915378;
    tmp_msg_0.end_lon = 0.08601671746319905;
    tmp_msg_0.end_z = 0.39880551263472896;
    tmp_msg_0.end_z_units = 115U;
    tmp_msg_0.speed = 0.9209289544447568;
    tmp_msg_0.speed_units = 157U;
    tmp_msg_0.lradius = 0.8249919602253086;
    tmp_msg_0.flags = 161U;
    msg.control.set(tmp_msg_0);
    msg.duration = 24451U;
    msg.custom.assign("HRSMCDGNBQREXMRZNVBNPJHYFEJWIOFSYIFZAAQEJQGWSNPVMIPYUCAYUMKXEQICAWYRGOCLLIJRTXXJINSBULOHXCXZYHUMZFXYISSCXLBKGDBEIHMFWHGTBEVDDDKBPNNGJTKFZXLVZHVCMZHAQTORDBQGKSUNAWUU");

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
    msg.setTimeStamp(0.13389893726395752);
    msg.setSource(38042U);
    msg.setSourceEntity(108U);
    msg.setDestination(51158U);
    msg.setDestinationEntity(73U);
    msg.timeout = 56214U;
    msg.lat = 0.9283114453373146;
    msg.lon = 0.8121493647062233;
    msg.z = 0.2874333172491036;
    msg.z_units = 125U;
    msg.speed = 0.6317382645775557;
    msg.speed_units = 244U;
    msg.bearing = 0.3585128986984778;
    msg.cross_angle = 0.2732099591232341;
    msg.width = 0.5730874052358871;
    msg.length = 0.022867596965373327;
    msg.hstep = 0.09509429747013254;
    msg.coff = 148U;
    msg.alternation = 137U;
    msg.flags = 6U;
    msg.custom.assign("KUYULJXMKQZAPFZBCTAEVZOSDBXQSEOHMYLVHRAGMHRAMVLKSTCGZDXJMOXDJIKEFCGNNSPRRLFTJFAYDXZOPUGWRFNDTJNQUSKLYMNSQQGHIQJUCMJFHBMLXDEWKBXKBOXIPRXSWKVZBETDCAWDWNJLPZWGRPSTGXJUOVOZKUIEHGACUESCIIFTMSEHYWNPGDBHEIQTBIBYHMWFLTITOGYKYPRWFRQRONNHAQLLJPVUVBVOCAYCZVEWVZNYQI");

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
    msg.setTimeStamp(0.38867969013459935);
    msg.setSource(25740U);
    msg.setSourceEntity(177U);
    msg.setDestination(5056U);
    msg.setDestinationEntity(170U);
    msg.timeout = 13934U;
    msg.lat = 0.7668169177549737;
    msg.lon = 0.9014855118795483;
    msg.z = 0.5613758959214237;
    msg.z_units = 64U;
    msg.speed = 0.25945884074197345;
    msg.speed_units = 241U;
    msg.bearing = 0.18411050006895724;
    msg.cross_angle = 0.6769712468656277;
    msg.width = 0.9065987735125468;
    msg.length = 0.20126822066088035;
    msg.hstep = 0.5392000112955527;
    msg.coff = 59U;
    msg.alternation = 54U;
    msg.flags = 178U;
    msg.custom.assign("GYSWKCOURFVZXHENPEJWWABACSVHYYEULIIVFSQMNMGPXSQPFFZUPFJQZZTOGOQWUANOXELTDMOEWXPQTSGMKHGEOGMXWJMZRSDHDLBVDVGVVLRPPEJFWMNTCMRTYQVSZKAJKWBJPBYXNCDXQGHTJQKYAYNABYLDDIEIMKUAZDEHTKBOGPKWA");

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
    msg.setTimeStamp(0.3239009940225587);
    msg.setSource(22978U);
    msg.setSourceEntity(78U);
    msg.setDestination(36013U);
    msg.setDestinationEntity(74U);
    msg.timeout = 46124U;
    msg.lat = 0.2238042229276973;
    msg.lon = 0.2475291302890752;
    msg.z = 0.8773251103195048;
    msg.z_units = 239U;
    msg.speed = 0.39065645368447455;
    msg.speed_units = 237U;
    msg.bearing = 0.13844985604367166;
    msg.cross_angle = 0.9799978795551626;
    msg.width = 0.6919540363196633;
    msg.length = 0.292293271889557;
    msg.hstep = 0.800644434699049;
    msg.coff = 159U;
    msg.alternation = 239U;
    msg.flags = 160U;
    msg.custom.assign("MYQOWEOYWKNBJIFTIVKYRTLLZATRZTRJBGRBREDNLUTQEDSPSAGICWYCIHNUGKFFSCGSSNOVGDIBMQGJDYZAKXTAEFJIDUYVMMPBDPDZOICHCMVAZHXHMEOWAZLIEX");

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
    msg.setTimeStamp(0.7328786940247002);
    msg.setSource(1086U);
    msg.setSourceEntity(161U);
    msg.setDestination(53080U);
    msg.setDestinationEntity(56U);
    msg.timeout = 26841U;
    msg.lat = 0.009028847130105766;
    msg.lon = 0.6857733102064417;
    msg.z = 0.16301430921839866;
    msg.z_units = 57U;
    msg.speed = 0.551163394433472;
    msg.speed_units = 62U;
    msg.custom.assign("BAGYLLEPAEBXFTHNSDOQPRYYHULPLGWIBOENSZQENOQLBMWOXWRZHFSXJKPSMTNMGAGRIQIMUDWQZDEWSIIAEJZGNJUCRQWAXERHLEFXTMYWKRVETPCRBKJJHZKCFBUASBGPANORVPGHTJPHVFVHOURI");

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
    msg.setTimeStamp(0.9825816214908126);
    msg.setSource(36364U);
    msg.setSourceEntity(138U);
    msg.setDestination(14386U);
    msg.setDestinationEntity(115U);
    msg.timeout = 64670U;
    msg.lat = 0.8370611468888454;
    msg.lon = 0.7960502528782231;
    msg.z = 0.7886168999006562;
    msg.z_units = 57U;
    msg.speed = 0.8653051469839306;
    msg.speed_units = 186U;
    msg.custom.assign("HUGWRSIXXDPEDBFPFUDAECKHDEISMIKIRPAJKNLMFXANAULTNZCJIYOOBAECRUAAOMXVOGVEZOXEFMFRLYYYCBWRLLPKWTSBPAQEWNSUCHUEHKLSROMGTNXJZVXZMMXXVGSFGWZKORZQRQWJSBNJSGIGKJTQULLFHUZYLDQGQCABCKTMNYATHBGIPNDJPTWJ");

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
    msg.setTimeStamp(0.7022215548339005);
    msg.setSource(62255U);
    msg.setSourceEntity(250U);
    msg.setDestination(40192U);
    msg.setDestinationEntity(152U);
    msg.timeout = 34967U;
    msg.lat = 0.02573984590486933;
    msg.lon = 0.4104379202047437;
    msg.z = 0.614636046267554;
    msg.z_units = 223U;
    msg.speed = 0.3913441664231493;
    msg.speed_units = 254U;
    msg.custom.assign("EHBLXJVZBAQTCMXDDHQNZLWKZTRUZYIGDKZCCUWTLRFFQTEPLWEXJIOJQOCSKVMMYJKWMIWUMVOUGYATUFBBPDSYALXPWWBWOSCMQOVXBIXOAXNJHVCLFDUKDAFQDIFSAPNOENJSYIVFFSYGJZDMHUBFTWECVJTOHWCMQEYEPNJARPMLGDKCKTIEMBG");

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
    msg.setTimeStamp(0.2220778830180612);
    msg.setSource(9948U);
    msg.setSourceEntity(87U);
    msg.setDestination(15820U);
    msg.setDestinationEntity(2U);
    msg.x = 0.36105949621233224;
    msg.y = 0.20711206320046516;
    msg.z = 0.69654831694918;

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
    msg.setTimeStamp(0.9509268819797831);
    msg.setSource(48493U);
    msg.setSourceEntity(97U);
    msg.setDestination(64263U);
    msg.setDestinationEntity(228U);
    msg.x = 0.3492051053125592;
    msg.y = 0.4892667911213805;
    msg.z = 0.27709368100594556;

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
    msg.setTimeStamp(0.29062831988305693);
    msg.setSource(62872U);
    msg.setSourceEntity(196U);
    msg.setDestination(50421U);
    msg.setDestinationEntity(82U);
    msg.x = 0.06359542120916584;
    msg.y = 0.6155386340346716;
    msg.z = 0.305375490253161;

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
    msg.setTimeStamp(0.7144612492726411);
    msg.setSource(24644U);
    msg.setSourceEntity(124U);
    msg.setDestination(57587U);
    msg.setDestinationEntity(165U);
    msg.timeout = 54858U;
    msg.lat = 0.8988017341657618;
    msg.lon = 0.07047940569281819;
    msg.z = 0.02083601906217536;
    msg.z_units = 207U;
    msg.amplitude = 0.35833383804490504;
    msg.pitch = 0.006530783708046495;
    msg.speed = 0.4159581058136914;
    msg.speed_units = 130U;
    msg.custom.assign("IDOEMKRHTNMBCDQUAHCZMNTTJVFEXBIIIPZQROFZDKGKWOZUGUNACQRIVZMBHQXLMBSJRSKJYSWYEIKMFLLVOOFBOEFJFZJEPSUFOJJMLYCUHLLMXSDXIRDUCRGGKZOWLVASCGEWGCAERXDPGLTAKAYYNXBSUJHQXJPQNNXDFXVICEHUVVWBIPWHYGLMRGGNVNSOPLYAAHZNZWTHTJIFPQPKBQBWAUCYOBSTKVVMPKDCYAYHTEXEQDSTD");

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
    msg.setTimeStamp(0.25375818132994765);
    msg.setSource(44878U);
    msg.setSourceEntity(167U);
    msg.setDestination(8720U);
    msg.setDestinationEntity(32U);
    msg.timeout = 34418U;
    msg.lat = 0.1339617814662022;
    msg.lon = 0.27745379727892916;
    msg.z = 0.9111375082669416;
    msg.z_units = 89U;
    msg.amplitude = 0.8641213536508655;
    msg.pitch = 0.014281789813791801;
    msg.speed = 0.5426840876418392;
    msg.speed_units = 63U;
    msg.custom.assign("VMZXOQFWKDUGELRRCXIQZAYDXSQJNELWIUGZOSQHDEKHAJGMUQDLAFTWCYUPQTXOGVHRHYWNWEDKYZBZQAMVBDYFNUJRPTBCOLLFYFRAVICQDQBNVEICXPUKDNCJOJPAGWJNNQRXRKPSEGNSAUOIKOSTBUYPJISDPMEEGPDALKVFVSVTLWOHBYR");

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
    msg.setTimeStamp(0.8809690308305752);
    msg.setSource(9344U);
    msg.setSourceEntity(196U);
    msg.setDestination(42028U);
    msg.setDestinationEntity(108U);
    msg.timeout = 59115U;
    msg.lat = 0.42727577220313473;
    msg.lon = 0.6281173340857427;
    msg.z = 0.37541501440269254;
    msg.z_units = 17U;
    msg.amplitude = 0.06497386740947486;
    msg.pitch = 0.8462138859000418;
    msg.speed = 0.5956180980435442;
    msg.speed_units = 141U;
    msg.custom.assign("EOAOGLDXEJNZQGGUVFHLGWRZMYWMOPEODNASEBZDDBWPRMYFLRXWNCJDXCDTHIZHVWKKSUSKPKBTSKPVRDZVBVUAPJKYMGTQDNOCULXPRJIIFB");

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
    msg.setTimeStamp(0.6366220777007584);
    msg.setSource(59607U);
    msg.setSourceEntity(219U);
    msg.setDestination(44214U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.2983802548850297);
    msg.setSource(37985U);
    msg.setSourceEntity(238U);
    msg.setDestination(36337U);
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
    msg.setTimeStamp(0.1337662994374479);
    msg.setSource(20280U);
    msg.setSourceEntity(224U);
    msg.setDestination(30631U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.8193310295052691);
    msg.setSource(45307U);
    msg.setSourceEntity(149U);
    msg.setDestination(183U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.3042968414847005;
    msg.lon = 0.8648930378289884;
    msg.z = 0.8181566306055383;
    msg.z_units = 135U;
    msg.radius = 0.4064749638702547;
    msg.duration = 51089U;
    msg.speed = 0.5524106534342174;
    msg.speed_units = 89U;
    msg.custom.assign("ZTUQAKOERNLPGPWOABIPHJJCMRPMUTEFGUKTERTVQHBVCCYYAPJWXSMNJYVZIHSGNUKOUIFWINCKMXDIAIMAICKGHDOSGDTXLRXBJLDWLRVTYUEPQJJOFMLFMQUEYMDJY");

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
    msg.setTimeStamp(0.8247987481867117);
    msg.setSource(11648U);
    msg.setSourceEntity(189U);
    msg.setDestination(1494U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.7985204717881872;
    msg.lon = 0.7104719724425047;
    msg.z = 0.04864245949109702;
    msg.z_units = 71U;
    msg.radius = 0.46282862016204185;
    msg.duration = 27948U;
    msg.speed = 0.878539996749875;
    msg.speed_units = 120U;
    msg.custom.assign("LSUZZYLRFHJQBINDRTGOAXBBGBPTYUKDZLSPJMVQEELENHYWOKHLBXSIAXJPJKWMNPMOZZHIUMOZLFUEPFSYNIFGVCYWC");

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
    msg.setTimeStamp(0.5164086156162337);
    msg.setSource(57152U);
    msg.setSourceEntity(43U);
    msg.setDestination(55240U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.6700639318632897;
    msg.lon = 0.7844495137604602;
    msg.z = 0.19050659286402838;
    msg.z_units = 202U;
    msg.radius = 0.39909127104728825;
    msg.duration = 1444U;
    msg.speed = 0.1687473226841879;
    msg.speed_units = 245U;
    msg.custom.assign("BGXDXYHISOVPHYSHMMOIPXJACAKQBNVJRULTKWNWZBGHYTILGCHGYDKOXBQOGZMLMTBMJKDIUQWETNSW");

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
    msg.setTimeStamp(0.11490851431205829);
    msg.setSource(59845U);
    msg.setSourceEntity(96U);
    msg.setDestination(33942U);
    msg.setDestinationEntity(254U);
    msg.timeout = 54301U;
    msg.flags = 129U;
    msg.lat = 0.4901250229267712;
    msg.lon = 0.7995523972397065;
    msg.start_z = 0.9584720539812599;
    msg.start_z_units = 175U;
    msg.end_z = 0.29702239464128377;
    msg.end_z_units = 136U;
    msg.radius = 0.8629354477579614;
    msg.speed = 0.05630521448620407;
    msg.speed_units = 42U;
    msg.custom.assign("GTUNEFORHJYVEGXWNGROCAAZFUMBLDBUJXMZYHQIAQVGZNCDQDSESWBREG");

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
    msg.setTimeStamp(0.5596128677495589);
    msg.setSource(30976U);
    msg.setSourceEntity(237U);
    msg.setDestination(37158U);
    msg.setDestinationEntity(36U);
    msg.timeout = 620U;
    msg.flags = 233U;
    msg.lat = 0.48378761794022906;
    msg.lon = 0.0983137229491754;
    msg.start_z = 0.3282475639562138;
    msg.start_z_units = 18U;
    msg.end_z = 0.602609091580526;
    msg.end_z_units = 84U;
    msg.radius = 0.8873261084908068;
    msg.speed = 0.5942099400752221;
    msg.speed_units = 247U;
    msg.custom.assign("LGQBCDKYNBWQMGZZDJEVIDEXCFDNDGTNMZJHEKCRAFSJBKKZBUTOFRWVKJZXZWHBLZBONODHTGMVSYECCCQRFKRDRNNWULQHJESINFSHIUMJAHYOHFKCKGEISOMXYTSRJUPDRYJAUUMVLVVBPFXASSPEGQWTMYEQYEXTSXHXQIUIGWABGSROPZCLEKVCXPORYDOWNNXWQCVDGTHMITGAPWLLITL");

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
    msg.setTimeStamp(0.6813676967044056);
    msg.setSource(53615U);
    msg.setSourceEntity(201U);
    msg.setDestination(29634U);
    msg.setDestinationEntity(0U);
    msg.timeout = 46560U;
    msg.flags = 108U;
    msg.lat = 0.08064031149339856;
    msg.lon = 0.6145149845064798;
    msg.start_z = 0.08727484125749418;
    msg.start_z_units = 67U;
    msg.end_z = 0.29160504499544504;
    msg.end_z_units = 223U;
    msg.radius = 0.04693435547508773;
    msg.speed = 0.2121268252794768;
    msg.speed_units = 150U;
    msg.custom.assign("EZSHRGQUHZFJTJOOMGIHTXOSVBYWQEHRNRULZYVSMWMTQZQ");

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
    msg.setTimeStamp(0.7524951375436552);
    msg.setSource(43851U);
    msg.setSourceEntity(172U);
    msg.setDestination(50992U);
    msg.setDestinationEntity(143U);
    msg.timeout = 20255U;
    msg.lat = 0.8374895245229961;
    msg.lon = 0.17013959636016107;
    msg.z = 0.09898408915643364;
    msg.z_units = 147U;
    msg.speed = 0.389293190879504;
    msg.speed_units = 193U;
    msg.custom.assign("UJVCTUNLZBTCLFDMLDCIAKRBTTO");

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
    msg.setTimeStamp(0.9198806783187496);
    msg.setSource(57045U);
    msg.setSourceEntity(195U);
    msg.setDestination(12255U);
    msg.setDestinationEntity(59U);
    msg.timeout = 29407U;
    msg.lat = 0.4858116404135956;
    msg.lon = 0.661855455185897;
    msg.z = 0.5642890854337151;
    msg.z_units = 253U;
    msg.speed = 0.06179917143893887;
    msg.speed_units = 129U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7944923409204371;
    tmp_msg_0.y = 0.46962088414333525;
    tmp_msg_0.z = 0.7775399222682117;
    tmp_msg_0.t = 0.14058983917341528;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EHAOJYKLILZKALGIYVHNYDXXTGGPMGQFXQHZILMXSNSQYYSBPTNXTAILRPGWTPNZOMETQCBGEEY");

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
    msg.setTimeStamp(0.5641917837100735);
    msg.setSource(39559U);
    msg.setSourceEntity(45U);
    msg.setDestination(41467U);
    msg.setDestinationEntity(200U);
    msg.timeout = 53208U;
    msg.lat = 0.42947365325469233;
    msg.lon = 0.6981701314954156;
    msg.z = 0.7565439758822059;
    msg.z_units = 134U;
    msg.speed = 0.03027647872762007;
    msg.speed_units = 55U;
    msg.custom.assign("GETGZGPTJWPNYKPAABEUABZHCWLVTAZYMODCFVADETYSVYMCHRXCGYSGUCSPTGZMANPBZBERMHLURORZJHWXXUTHGXNMBNLKEDISKGHQIABOKWFLJWXBDVOODGPNYNQDSMKTNLPPPMQDXFKOFVIICJSUNPJCZEABXUHORTENUQMYMZLVFDHRFEQYQBWJKSR");

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
    msg.setTimeStamp(0.19109705606569027);
    msg.setSource(59647U);
    msg.setSourceEntity(233U);
    msg.setDestination(17702U);
    msg.setDestinationEntity(202U);
    msg.x = 0.8625112024200396;
    msg.y = 0.8073163149477505;
    msg.z = 0.15136332764943927;
    msg.t = 0.18919466825345677;

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
    msg.setTimeStamp(0.7140340849730981);
    msg.setSource(32759U);
    msg.setSourceEntity(100U);
    msg.setDestination(18705U);
    msg.setDestinationEntity(21U);
    msg.x = 0.7783859244598326;
    msg.y = 0.38814315049170955;
    msg.z = 0.9332146220888811;
    msg.t = 0.8214865103233433;

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
    msg.setTimeStamp(0.17391142644992819);
    msg.setSource(13851U);
    msg.setSourceEntity(228U);
    msg.setDestination(25548U);
    msg.setDestinationEntity(196U);
    msg.x = 0.5287040727797102;
    msg.y = 0.06624744866649934;
    msg.z = 0.16788086371730215;
    msg.t = 0.20025671318507932;

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
    msg.setTimeStamp(0.0125420708258418);
    msg.setSource(34033U);
    msg.setSourceEntity(6U);
    msg.setDestination(25824U);
    msg.setDestinationEntity(147U);
    msg.timeout = 32152U;
    msg.name.assign("MNWRRXCIUHUTRLJQZOWFGHUBSLGKZESQNLIAHDNZTRNGAWOLRMQZCQFCFJLRQWKSQXTLVRBDWJRLZQEAJCBQJSHECYQKVTBHPNBPFXXHHFVZOVGPJEDRMHHMIVASFCACYUTGZMLTOCHSKJSQVMULOAIWPSTZGWWUEKXXICYPXWAZXYYTG");
    msg.custom.assign("CBCQDFTQXEYR");

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
    msg.setTimeStamp(0.14838828808552507);
    msg.setSource(59326U);
    msg.setSourceEntity(12U);
    msg.setDestination(60389U);
    msg.setDestinationEntity(89U);
    msg.timeout = 27755U;
    msg.name.assign("MITWPFCUABGQYGNQACDNKSGOTINUTXHTAIQRVPELFZIJXTFWBKXGHWBTMPNLZXGCUCWAGSIHPHNVPKAJJXEYHWYEHEZSEGSDFRMWTDJAMVRIGVWZDLZEPLWPNJUWCOLJKUOHT");
    msg.custom.assign("DMTQJWGCSRYNLXZXXARLQKWCHNPCYBSIAEFCYD");

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
    msg.setTimeStamp(0.31768103609796705);
    msg.setSource(39843U);
    msg.setSourceEntity(184U);
    msg.setDestination(36310U);
    msg.setDestinationEntity(218U);
    msg.timeout = 54657U;
    msg.name.assign("PBDFCNLWYWMTPWNPOZRQVGRMSBDVQEUPSYCQSRRYEFTIXRPKKFZNLPQMUVZYUKAXSJEYVQNGXZCLAUMYZZOKMOCJIBINLUAOCGJXHVCZTVHENWBXJUFKAPSWGOOCKHNZDCYBOMEVOATHL");
    msg.custom.assign("KZSPSCEPKIVLRUFUIKJMVBWINBLLDCSSBUUENICLEXAGFYVXWAQWQMSZOXQEDHCKMRYTF");

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
    msg.setTimeStamp(0.09134806341192836);
    msg.setSource(27032U);
    msg.setSourceEntity(149U);
    msg.setDestination(37601U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.3874575560540632;
    msg.lon = 0.39447341194592556;
    msg.z = 0.981238916588433;
    msg.z_units = 206U;
    msg.speed = 0.9704598530928795;
    msg.speed_units = 47U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.23817994724316227;
    tmp_msg_0.y = 0.012432838667417512;
    tmp_msg_0.z = 0.4772140463910197;
    tmp_msg_0.t = 0.07904456010957273;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.2959268564429386;
    msg.custom.assign("QHJKFEEZSPDBMQJOIRIGUYRNQKNRJJRDULINUQENUDCHTTCYLSQHZJDTWIWWJXGYMBHPYECSVYPQBXATSENYOYSNKWPNTAOJPDIOCRFAFHELRSILACKZCGUPMMFLWYMAVOTXELBHUBJRRFXZUPDKPBLQQXXVGOECPTZXTAHPJWZVHTEHUMIZMLFUVZXSHWLVAYAVRCZIIKKWOTJGUWMIKQSVGGFNDDONRCBBWMDLFFVOXSAFBNEGKKDSA");

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
    msg.setTimeStamp(0.6140614233780435);
    msg.setSource(13171U);
    msg.setSourceEntity(104U);
    msg.setDestination(20734U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.44414945220509294;
    msg.lon = 0.2891258787600507;
    msg.z = 0.7396886714111337;
    msg.z_units = 61U;
    msg.speed = 0.846993866807872;
    msg.speed_units = 203U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6155932105570333;
    tmp_msg_0.y = 0.7281644607905936;
    tmp_msg_0.z = 0.9381384060852515;
    tmp_msg_0.t = 0.17550342172357813;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 31308U;
    tmp_msg_1.off_x = 0.6465693717226372;
    tmp_msg_1.off_y = 0.6293120069999326;
    tmp_msg_1.off_z = 0.8976575863418547;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6569792440675525;
    msg.custom.assign("HLERECBZDMGWYXQYETIOOTXLMU");

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
    msg.setTimeStamp(0.5732573708453979);
    msg.setSource(2840U);
    msg.setSourceEntity(66U);
    msg.setDestination(13753U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.7757420784380706;
    msg.lon = 0.8690132950253854;
    msg.z = 0.5534683159982476;
    msg.z_units = 131U;
    msg.speed = 0.8036417510502868;
    msg.speed_units = 132U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26329U;
    tmp_msg_0.off_x = 0.8464821197177638;
    tmp_msg_0.off_y = 0.06175042494821903;
    tmp_msg_0.off_z = 0.6378491816716311;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6732472208136653;
    msg.custom.assign("ZGLCSTIPDPGYBQBKXUPORPIJEZDFASHQDL");

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
    msg.setTimeStamp(0.7420257814989881);
    msg.setSource(35601U);
    msg.setSourceEntity(90U);
    msg.setDestination(14075U);
    msg.setDestinationEntity(24U);
    msg.vid = 16864U;
    msg.off_x = 0.21006639997211063;
    msg.off_y = 0.30543105803225823;
    msg.off_z = 0.6441770778243355;

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
    msg.setTimeStamp(0.23081859174492703);
    msg.setSource(46915U);
    msg.setSourceEntity(46U);
    msg.setDestination(45613U);
    msg.setDestinationEntity(51U);
    msg.vid = 5441U;
    msg.off_x = 0.7292881801867124;
    msg.off_y = 0.5352550612313923;
    msg.off_z = 0.8624348930672145;

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
    msg.setTimeStamp(0.597427163775351);
    msg.setSource(3827U);
    msg.setSourceEntity(23U);
    msg.setDestination(43843U);
    msg.setDestinationEntity(230U);
    msg.vid = 56925U;
    msg.off_x = 0.5101868588621497;
    msg.off_y = 0.5322930880246332;
    msg.off_z = 0.3140424637969157;

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
    msg.setTimeStamp(0.2646422680580738);
    msg.setSource(31606U);
    msg.setSourceEntity(33U);
    msg.setDestination(6335U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.7037915715861413);
    msg.setSource(38066U);
    msg.setSourceEntity(183U);
    msg.setDestination(19274U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.6503337790478678);
    msg.setSource(52701U);
    msg.setSourceEntity(214U);
    msg.setDestination(18810U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.4589594777246049);
    msg.setSource(678U);
    msg.setSourceEntity(200U);
    msg.setDestination(60591U);
    msg.setDestinationEntity(91U);
    msg.mid = 51572U;

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
    msg.setTimeStamp(0.9966583472313612);
    msg.setSource(1841U);
    msg.setSourceEntity(231U);
    msg.setDestination(2357U);
    msg.setDestinationEntity(192U);
    msg.mid = 11165U;

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
    msg.setTimeStamp(0.6905928749236903);
    msg.setSource(5123U);
    msg.setSourceEntity(89U);
    msg.setDestination(57308U);
    msg.setDestinationEntity(215U);
    msg.mid = 17122U;

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
    msg.setTimeStamp(0.1825012231247235);
    msg.setSource(29922U);
    msg.setSourceEntity(63U);
    msg.setDestination(35244U);
    msg.setDestinationEntity(92U);
    msg.state = 249U;
    msg.eta = 36268U;
    msg.info.assign("JISHBFPZEJUTCKAENCUJIITUFNGLYNTFVGOKINQVPMXZTPYDCXAFMYPMNWQPDJPLMVFMIYLGNKADSSPLLWNAMFPBDGWAPZGCTREEWQBJDNQZWRHKQUOHAHROEJKCDODEHBTTCBGBSDLQQPXMFHJOXMEVYRFXCRKEIXKODJNUJKWLYLGBWZGZOZVFZSUIXFYVBTSCHTLUWVKXQRTWOZBORRDXIBQYQZMEKSSYACGYEOA");

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
    msg.setTimeStamp(0.40457662489237967);
    msg.setSource(21408U);
    msg.setSourceEntity(52U);
    msg.setDestination(36541U);
    msg.setDestinationEntity(220U);
    msg.state = 194U;
    msg.eta = 49015U;
    msg.info.assign("VVRFNKQNCQHIKQWVPONKSLDUSJDAVXYFWMACEUKWBOOJAXXXPLJDARAZUVLLONHSLZRMLIGWJZZQHJGWNFOVTWQJYUEMBNROHBYMRBHSAKQXXVHDKTYGKZIHUQRHUHPIJCCBWDILZGLWEQBSPIZMLYCRPDANMVEMGEXBADFTPBUMMTDVUTQNNXJQDJTVIXEKRAGSEGI");

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
    msg.setTimeStamp(0.5548037726093377);
    msg.setSource(54222U);
    msg.setSourceEntity(184U);
    msg.setDestination(56094U);
    msg.setDestinationEntity(20U);
    msg.state = 59U;
    msg.eta = 50118U;
    msg.info.assign("JVTWALRMYZXRLCFBOMVINVFPQPCXQRMSDYXHRSQHXVJIBRBEUKIASTVBYFVFIMVNVIHDTGZYXQJEMUCGLXUZPTUTTWGFSRPYUOOKCHEEPXUULGJTAONDUGJKHRHZVPTALDJUBQMFGURLYEIOOKGGTODXSWNLWSOMJSGALRYWQPQOKAZSIDNCVQJCPAIENSYWDHKGZFBZIARLBPNCBZBFQWWQMXENHCFYABHZNEMMWNLTDEJADCCSZPFEOKHI");

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
    msg.setTimeStamp(0.06158748560823446);
    msg.setSource(47627U);
    msg.setSourceEntity(226U);
    msg.setDestination(37235U);
    msg.setDestinationEntity(10U);
    msg.system = 4915U;
    msg.duration = 16098U;
    msg.speed = 0.8434737935269332;
    msg.speed_units = 237U;
    msg.x = 0.4906605536601314;
    msg.y = 0.13445282989483143;
    msg.z = 0.9656813861393122;
    msg.z_units = 103U;

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
    msg.setTimeStamp(0.11206042282635664);
    msg.setSource(58044U);
    msg.setSourceEntity(21U);
    msg.setDestination(23511U);
    msg.setDestinationEntity(114U);
    msg.system = 54926U;
    msg.duration = 58247U;
    msg.speed = 0.16657879648478358;
    msg.speed_units = 225U;
    msg.x = 0.5767188987612127;
    msg.y = 0.5791873669360899;
    msg.z = 0.01252646217650999;
    msg.z_units = 4U;

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
    msg.setTimeStamp(0.3625303096052078);
    msg.setSource(23175U);
    msg.setSourceEntity(220U);
    msg.setDestination(39577U);
    msg.setDestinationEntity(244U);
    msg.system = 60166U;
    msg.duration = 26714U;
    msg.speed = 0.23291746033576688;
    msg.speed_units = 205U;
    msg.x = 0.28575837318927544;
    msg.y = 0.6065387555004379;
    msg.z = 0.7998180870207054;
    msg.z_units = 80U;

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
    msg.setTimeStamp(0.2713852953847118);
    msg.setSource(16811U);
    msg.setSourceEntity(75U);
    msg.setDestination(44718U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.8272282980659748;
    msg.lon = 0.4361917916081437;
    msg.speed = 0.7389336468876703;
    msg.speed_units = 166U;
    msg.duration = 45673U;
    msg.sys_a = 51787U;
    msg.sys_b = 64529U;
    msg.move_threshold = 0.6853669750076086;

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
    msg.setTimeStamp(0.463007179466869);
    msg.setSource(48805U);
    msg.setSourceEntity(72U);
    msg.setDestination(60457U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.13549101089353677;
    msg.lon = 0.09055705277242265;
    msg.speed = 0.6756091806539115;
    msg.speed_units = 169U;
    msg.duration = 12529U;
    msg.sys_a = 4699U;
    msg.sys_b = 57759U;
    msg.move_threshold = 0.5300019027681416;

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
    msg.setTimeStamp(0.8823031302381533);
    msg.setSource(49348U);
    msg.setSourceEntity(130U);
    msg.setDestination(12966U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.8755544992545394;
    msg.lon = 0.34248735955224263;
    msg.speed = 0.585024274708288;
    msg.speed_units = 14U;
    msg.duration = 46198U;
    msg.sys_a = 32838U;
    msg.sys_b = 36692U;
    msg.move_threshold = 0.00019703787133951156;

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
    msg.setTimeStamp(0.3848601309487404);
    msg.setSource(16253U);
    msg.setSourceEntity(248U);
    msg.setDestination(62710U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.3063639612990441;
    msg.lon = 0.3852358610348341;
    msg.z = 0.849364533921622;
    msg.z_units = 102U;
    msg.speed = 0.9515472401356042;
    msg.speed_units = 144U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6586838006989095;
    tmp_msg_0.lon = 0.44771230026142517;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TMLJOEHYWICSWASUNGPMXDXQSHTXGTKVYUBJHGRKLEPFUWQDODQSVRFZECJOOCOJWJMAMDTLNQRHJEGINNLRLKSWZRAHXZGBVWNSFXUIIXZDEIKQBWRAHRKVYUOGTCIGTEOBREGQPQEZXRKGUBSZVUFWXYMOKELCTNNCAWQZDPMOJNAOPXFAIDVFEQSICBPTMFKMVVDYCBTRCIMKGHDIAJXAJHUYSB");

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
    msg.setTimeStamp(0.060385208396876);
    msg.setSource(38399U);
    msg.setSourceEntity(103U);
    msg.setDestination(58911U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.49652703701712664;
    msg.lon = 0.28285486844643803;
    msg.z = 0.2848496609118084;
    msg.z_units = 164U;
    msg.speed = 0.5630834361757573;
    msg.speed_units = 157U;
    msg.custom.assign("ICOFXKSDRNNJWQBLNGAPRAIDTXVXAVJBNDFJZUBSNUATYVWHIMXEVWYJHTFPUHWDQZOLISQXTUPBGXOLENWQWGZUNNYQZFXFDLCYCAISVOTOWSAMHUMVAGMOOAGWSTKEQHLEPOYDUYWDCIXBRQVMFBJSEUQKBWGVGPJIRJQHRPZEDFCXSHMGKBIDJLLTEINULFKYRQF");

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
    msg.setTimeStamp(0.2203192974421906);
    msg.setSource(62258U);
    msg.setSourceEntity(126U);
    msg.setDestination(25322U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.7226252013357848;
    msg.lon = 0.685421633132151;
    msg.z = 0.6162448955891711;
    msg.z_units = 238U;
    msg.speed = 0.549749808333168;
    msg.speed_units = 40U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7219823446748397;
    tmp_msg_0.lon = 0.6735190472201541;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LFEJGZXKEXBQBNVXVVQJUPSAGLDFZNZLRCNZLIKJYHWAYECAIBGHNNJPDLLMTEKQKRWWUZQTJKCGUGXOUIMRELSKUFQUWATMMKIHVMGCHSIWYBQATDRYHIFOLJTTMENGGCDNSPJSSYU");

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
    msg.setTimeStamp(0.9563013655803284);
    msg.setSource(14566U);
    msg.setSourceEntity(176U);
    msg.setDestination(49117U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.624925791966266;
    msg.lon = 0.3043467369350009;

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
    msg.setTimeStamp(0.627194681568556);
    msg.setSource(36288U);
    msg.setSourceEntity(250U);
    msg.setDestination(60410U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.9199714122710286;
    msg.lon = 0.847954925802932;

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
    msg.setTimeStamp(0.8149924527965411);
    msg.setSource(53419U);
    msg.setSourceEntity(168U);
    msg.setDestination(59702U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.85290031098677;
    msg.lon = 0.6538535215325147;

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
    msg.setTimeStamp(0.3288779035101428);
    msg.setSource(22989U);
    msg.setSourceEntity(51U);
    msg.setDestination(22685U);
    msg.setDestinationEntity(18U);
    msg.timeout = 64440U;
    msg.lat = 0.2836639127756706;
    msg.lon = 0.11693026345674118;
    msg.z = 0.47297873536922874;
    msg.z_units = 232U;
    msg.pitch = 0.9363993770871473;
    msg.amplitude = 0.6451564574472255;
    msg.duration = 36728U;
    msg.speed = 0.35524357291481923;
    msg.speed_units = 234U;
    msg.radius = 0.05055757017697304;
    msg.direction = 207U;
    msg.custom.assign("GEKRACKWUHDKCZCVPMGIJPBBYICCGNNHHARQRSXIGXSZOBFBYRIUVLZYYDEDVABUMRMCUGWXFTISEKLLZSQEXYYBIHVPTUIZSMVJALVCPXXHCTCODRNFGXEDAFFTHOFOUTKVXVPHMOWFLWNPIYWPQNJZSPMXYQMTXEJNNJSRRPSTUNDJMKNWGGOYZVOLLAKTZKAWCDHROGEKOTLSLGQWBAQMDQESDJZBNFWBUAVHYJPTIQDEIQOL");

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
    msg.setTimeStamp(0.2449549085884749);
    msg.setSource(28860U);
    msg.setSourceEntity(37U);
    msg.setDestination(10950U);
    msg.setDestinationEntity(197U);
    msg.timeout = 53102U;
    msg.lat = 0.6339254383445961;
    msg.lon = 0.046109929678618045;
    msg.z = 0.7802172505015254;
    msg.z_units = 61U;
    msg.pitch = 0.11147644565922754;
    msg.amplitude = 0.5219289343827449;
    msg.duration = 50344U;
    msg.speed = 0.7304952686607881;
    msg.speed_units = 168U;
    msg.radius = 0.408481343864988;
    msg.direction = 246U;
    msg.custom.assign("KKARFYJCODVPPUGOLVFRFZAOZGFPNQVMKRQPXSZWQOLIVABFXKYKJLEVDHSNTGTLYBSIJGUUQXSTPE");

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
    msg.setTimeStamp(0.749401582916616);
    msg.setSource(59453U);
    msg.setSourceEntity(58U);
    msg.setDestination(27871U);
    msg.setDestinationEntity(15U);
    msg.timeout = 28563U;
    msg.lat = 0.5117426447941394;
    msg.lon = 0.9742559847752067;
    msg.z = 0.622993807898179;
    msg.z_units = 147U;
    msg.pitch = 0.9352587314412008;
    msg.amplitude = 0.46737537774497273;
    msg.duration = 56022U;
    msg.speed = 0.8802524055181418;
    msg.speed_units = 111U;
    msg.radius = 0.6243583685255637;
    msg.direction = 11U;
    msg.custom.assign("GAOYMFQRBDSOAWSAHRGQLNTEWOPPBIWHQDCUJTSNFDCNMHUMTBPIQDFQBLMIIAYUJDYVGNRHKRZRUIXZYRFPDLXBZUMCGKVCHOVOTRTMTGLJASLXJHDFZWYZWCSAEUO");

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
    msg.setTimeStamp(0.8395560041470483);
    msg.setSource(34497U);
    msg.setSourceEntity(191U);
    msg.setDestination(41069U);
    msg.setDestinationEntity(95U);
    msg.formation_name.assign("DTEJLPRVPRXRCFCDJGHIFRZCRHURVOTDYIHYTXIIPPGCUHNLIXCIURGFZJWSNBVBDFSWWBYKRZMMOORGBKCTQPNDSWJRKAEXNKXKNWPSGKNLULSKEMMBFGACVZTQTAOYCEONFYVJDXHNMBHW");
    msg.reference_frame = 7U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44031U;
    tmp_msg_0.off_x = 0.7400109475982531;
    tmp_msg_0.off_y = 0.13652105239174117;
    tmp_msg_0.off_z = 0.9634750172742248;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OAAISCDZJSMBILPWZFXXLNTMHXBNCUDUGQFJJNZRBSGGDTRXEGPVMIZGYOTFHNUFTKOAKJOUIWSXSUPKVIQDLHFCBYWPXBWPZMHGQDWXVQYLTVIPRCTDNUPRWE");

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
    msg.setTimeStamp(0.24680391723094397);
    msg.setSource(39466U);
    msg.setSourceEntity(61U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(2U);
    msg.formation_name.assign("MEEWKRCFMVASTXLQYMSGFHUBERSNWIRHNFUAIVGQTADTVPBZYYCDZAEQMIXOYQVEAOCJPBVPJVGMRFLXKJRQUVIPOJSIANMZWQIRNKPNZTLLHKSACHNNKZCXHGRVBJLEEOWNPJQUBZLHXGOLWDOTTEZBOTSYTZUDKUGSAGYRDHFMWPWBHBFIFYYSXKKAWPDIOCXMHXJUZWSQSEQRNIUMPODOVALRCKUZKWTJHLGFCTDNFYEDCCXVXIPBDQ");
    msg.reference_frame = 249U;
    msg.custom.assign("RWQSKGGWBVPVKTHEDYACSMFJVADORRLNNUABITBXJMMHNJBSWAFHBUFQYFOZQDMOSYGTZWFROVKMIUCTHYFARTPOLRZLTPPQHKEVNDXPYCRSJNMUYLHNKNYMZBXQVCHEWDJNFJISXCKMPATKWQPBFVPIBQUGZLXAQUJLWCDCPWSHDVYMGQERGSIEWICDXIZHZZLGKEDGJRTLDIEBKYFQVOYKUOIAHCXNUATVGBEOWUPXLEIOTFLUJM");

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
    msg.setTimeStamp(0.3055716442607871);
    msg.setSource(45807U);
    msg.setSourceEntity(63U);
    msg.setDestination(58428U);
    msg.setDestinationEntity(114U);
    msg.formation_name.assign("YMKDWKPFMJLVPYLRVEGETXQFDBHETCSXZMCIYMCOJQBWOJBEAMRTITSXQKUFBJGDUSCFPOVDITWQXGNJVVMZUPDKQKEZCIERZQDXPNBXNXGPRJASBEGTGZYWPDHCAOUSXDAVNM");
    msg.reference_frame = 142U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37777U;
    tmp_msg_0.off_x = 0.11727192206738912;
    tmp_msg_0.off_y = 0.6802875059685902;
    tmp_msg_0.off_z = 0.908591325735707;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JUMOYEWKQWPYBGIHQZQWOVGIBSOJAVXGUHNKVEYCFVUXCFTLQLFRNZXODQNFXGKIFMTZILYARQIWSKZPDFKMCHVCWQDHJLRUAYYAUKNFLTKVFAZFHRXAAKDNCOHEEGTTNKRCPQQOSNRZBTVVEJJTVBYZMIQXSMCSZJMOGLERPMWRFLNX");

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
    msg.setTimeStamp(0.9800546766965657);
    msg.setSource(44930U);
    msg.setSourceEntity(120U);
    msg.setDestination(48884U);
    msg.setDestinationEntity(132U);
    msg.group_name.assign("WUAQFNNDZLTGTBBEOIHHQXWQKAEDERZXDHPOMBITMSWTCWZZVKBLLIJNXQCBVNDYLYCINSIPGOKPJSZYUBYQEHLAFYAJQCVPFMGNYRODSMJJDRWGTJKILDLNLZHKUZHXCKYOIFYKAFNTQIWEDXRDEKCNBVOUBBSRJDATTYVVFCIFSJUGWGUUOKUYQVEGEGXGKXZLHPRPMJAIARXHP");
    msg.formation_name.assign("PBSNLAXSPWZHYHBCYBCJQEWNEDZLGGFSZUVBKATCDKQXJGLGIIJVMAUNBH");
    msg.plan_id.assign("VDXJLUNEKAQHYOBRFASAOPLVTCJ");
    msg.description.assign("XVNTQIAHRUOLGCNGKMJZCKIBIWNFMDEMGIDHZDOQYGTKPRWKXYSCXTABXWVUYATRILEAFLEXSWWVDCWSUJGBLHGCBZQLPJTDRTZTRDJWOLALPUUPVZZIHYPDEQSAKFNEMKPVNFHYYRQPAJPFQDMMXPTDESZNCMYI");
    msg.leader_speed = 0.345290088675542;
    msg.leader_bank_lim = 0.0288620228826737;
    msg.pos_sim_err_lim = 0.5432444904204735;
    msg.pos_sim_err_wrn = 0.41271635048490884;
    msg.pos_sim_err_timeout = 63901U;
    msg.converg_max = 0.5506432659377456;
    msg.converg_timeout = 17162U;
    msg.comms_timeout = 17592U;
    msg.turb_lim = 0.5593499080119099;
    msg.custom.assign("PGYXJYDTEFTDSCRSEKDZVRYHVOZXMYLHZNUCJNBGEMPSDARGXNTNMFCJIFMXQYSIEINVTESOFKIKSBWPUAEEHSZRKGPYNVPWLWUMQCUJUBZCW");

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
    msg.setTimeStamp(0.4608906288466228);
    msg.setSource(5507U);
    msg.setSourceEntity(36U);
    msg.setDestination(41191U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("DHMGLUSDAWPIMBEYTTHMEPIOFSIKEWFKELMQFSBPLZQGPZIVZVZNVRAGKBFBXUNXJNVQHNNQTXHWSDCRQYXBMLBTLJVVSGTWKSCDOCXRJKJOGROULAPHXZBNTAKNOVTCIDXONLMHGRDCDWUWEUKEFYQPRZAGJKZIMSDODWUJTUXGLUJDIVBZBTWISAVCQWKORYNFPPQFCGSTAHECVFZEASUCYWZCM");
    msg.formation_name.assign("FJWLODJPQDKTSFGZNQRJLVYOHVOVKSNHLXWHLREZIUHXMYWUJDMQGHSEG");
    msg.plan_id.assign("OOLILOOBDCCJJCX");
    msg.description.assign("YPXARYXQTSMASYKNPNVRMCEAJPDPDRFMMQGGKGEDKQXOCETDTXRPJJXWWEFJVEFTICLMQALHYKWQAOBOIPEEWXZZUYWUNVDVHBNYIJMLZQEGZROQOIMWNANOPLQTCTHIRJPBGFAGUSZVBPMVVUKKJCYDWAFIVPTSZYBOAIQDIRDBWNLSJUHZKSXHUYCQBNFIGUMLSDNKNGXCUGTTVDUCEHKBHOFYJFZRZKUWXLVLMFOCBAXSHSLLJESFIOHR");
    msg.leader_speed = 0.7486468579981707;
    msg.leader_bank_lim = 0.24731391017762305;
    msg.pos_sim_err_lim = 0.5631995452671026;
    msg.pos_sim_err_wrn = 0.5281779714802813;
    msg.pos_sim_err_timeout = 12138U;
    msg.converg_max = 0.327135842614118;
    msg.converg_timeout = 29624U;
    msg.comms_timeout = 5071U;
    msg.turb_lim = 0.045066719840772373;
    msg.custom.assign("SKDDFPCMJOAJMRXCGVBDADQJPYRXJKOBWLOQAHDVNADTEIHMXQWUCYEGONSYMHGBYMIKJTUCIIMBUNBRILFESIDZTXZIBPOASTGYZJJLEEXIAESKZRHKYRKORWQKEWUQMKGLOQDYXGGZWGWJBNFVQNVKNVZZDXLQZKTXPQFFSWQRDEBCBHVAEFMFPCLGLZHUCOFWMTLYVFTSVSOZHBRAVWFTVTMHPLNUCPNNJHIPTCLRUPERHJUSWPU");

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
    msg.setTimeStamp(0.8810992270688702);
    msg.setSource(27119U);
    msg.setSourceEntity(170U);
    msg.setDestination(10574U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("OYNUVAJAMGDZVXKOXQSSTUVGRMANGABBPENSKXQZKDDLJHIHZQGBSHFTUQJIEKFWPEGPREVPDNCLPMRRSXCHYAODFWINEQZJROKYIOETFYNQATFLURYQAMDTLEOJODVEPBVOXNCWYVKJTZWIXIHBYZFVBWURWKHSCSMDGHTOPFZIRBFMQZNWATJBNFLKWKLCGYUTPFJUSCXJWMZGVAXKYIBIGYTQMUHASRLUZVCLUCRLHD");
    msg.formation_name.assign("WNDQDGRXCGMJRSAYLVEZQIULOKFMASFLYBJLPFENPBJTEFKEJFORYAVUYDMXQLLUMACUOGCBSNHPVNVOYDIDROBATTAIMJSDHHQNHUOTWCDSPXUTIRRBYAVAZVBJKZZCODAYRJGEJIEUMWETSOIVQPQFZBUKMLRXKPJBMIFNWIEKPHSNZHGWKMGBFRTVXENIWCXVKHCEWGXHGJFICUPOMYSQGSAZXQWUVKPCNXQZTWWGCNO");
    msg.plan_id.assign("FAACQDGAEJBIPESDLBCKXZFQSCPKYOKMMZPZSAOXYRCLZUWOVEKBWOGYDSGWCMIKUCXJEDVHLRETKQOZFBNXFDIWHHIPIMVCCSHXFIKQETTZPLJJANQBHRHUMLKQTAVDUIWSELFYUDYNVXTESSIMOJNFWBTORBXHRMAAPVGORBOLHLPIEMTZKYQLOGBGIUKCMAGZDVQJYRESCPNRUHLQNYWHZJJUTXRAYQVTGFXFUFWV");
    msg.description.assign("CYGHNBOFRPEHBYJAVYFKJIJWTZBPQMMEMFKMZKLTMGHYSUNUZLPBXXWFXYFWLIGHERJVXOSCNOEEFUEYQUSLDGADCFDLHRMICANXGOKAJGKQZUVXCYFDQEHORGZOZVCPJPPIL");
    msg.leader_speed = 0.40884196924281746;
    msg.leader_bank_lim = 0.12138212719497898;
    msg.pos_sim_err_lim = 0.7102388566855548;
    msg.pos_sim_err_wrn = 0.4959078582158106;
    msg.pos_sim_err_timeout = 28924U;
    msg.converg_max = 0.5733616344481125;
    msg.converg_timeout = 41561U;
    msg.comms_timeout = 45971U;
    msg.turb_lim = 0.1620002347249342;
    msg.custom.assign("HPTFZNLAZBIWUUABSOBUFZRTHNFXQWRWZCLKFQPFLUSDGFNGKQ");

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
    msg.setTimeStamp(0.9507848190214838);
    msg.setSource(11350U);
    msg.setSourceEntity(207U);
    msg.setDestination(41840U);
    msg.setDestinationEntity(192U);
    msg.control_src = 9894U;
    msg.control_ent = 26U;
    msg.timeout = 0.17412549607983596;
    msg.loiter_radius = 0.7826665445449289;
    msg.altitude_interval = 0.9620774911689148;

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
    msg.setTimeStamp(0.2145723545546422);
    msg.setSource(7682U);
    msg.setSourceEntity(130U);
    msg.setDestination(359U);
    msg.setDestinationEntity(138U);
    msg.control_src = 55778U;
    msg.control_ent = 105U;
    msg.timeout = 0.7472418771056166;
    msg.loiter_radius = 0.06864932212943176;
    msg.altitude_interval = 0.4364714295118264;

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
    msg.setTimeStamp(0.08473007725188908);
    msg.setSource(31791U);
    msg.setSourceEntity(150U);
    msg.setDestination(63468U);
    msg.setDestinationEntity(51U);
    msg.control_src = 17099U;
    msg.control_ent = 117U;
    msg.timeout = 0.8063859874238962;
    msg.loiter_radius = 0.5437646713306861;
    msg.altitude_interval = 0.38754291060454793;

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
    msg.setTimeStamp(0.16122606534006478);
    msg.setSource(37257U);
    msg.setSourceEntity(200U);
    msg.setDestination(57473U);
    msg.setDestinationEntity(176U);
    msg.flags = 4U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.30050880754141607;
    tmp_msg_0.speed_units = 180U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9902997647361178;
    tmp_msg_1.z_units = 5U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7997702784575303;
    msg.lon = 0.7646264659069346;
    msg.radius = 0.9508390124065164;

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
    msg.setTimeStamp(0.5023513772409927);
    msg.setSource(11171U);
    msg.setSourceEntity(174U);
    msg.setDestination(43456U);
    msg.setDestinationEntity(85U);
    msg.flags = 149U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7801407819450201;
    tmp_msg_0.speed_units = 126U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2986188333493911;
    tmp_msg_1.z_units = 75U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5381389601428314;
    msg.lon = 0.1264051427967785;
    msg.radius = 0.5454088704321391;

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
    msg.setTimeStamp(0.1828463169987724);
    msg.setSource(64635U);
    msg.setSourceEntity(17U);
    msg.setDestination(63648U);
    msg.setDestinationEntity(196U);
    msg.flags = 142U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5020357933210242;
    tmp_msg_0.speed_units = 89U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5403067977771392;
    tmp_msg_1.z_units = 67U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0566328262321224;
    msg.lon = 0.45363747903062857;
    msg.radius = 0.19564010582147906;

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
    msg.setTimeStamp(0.4726440340714093);
    msg.setSource(29124U);
    msg.setSourceEntity(154U);
    msg.setDestination(26493U);
    msg.setDestinationEntity(33U);
    msg.control_src = 7567U;
    msg.control_ent = 157U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 182U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8935331191612097;
    tmp_tmp_msg_0_0.speed_units = 104U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3388982593241344;
    tmp_tmp_msg_0_1.z_units = 110U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6544742935373458;
    tmp_msg_0.lon = 0.8667926462317799;
    tmp_msg_0.radius = 0.5428385163998194;
    msg.reference.set(tmp_msg_0);
    msg.state = 215U;
    msg.proximity = 119U;

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
    msg.setTimeStamp(0.37336753055557836);
    msg.setSource(62920U);
    msg.setSourceEntity(231U);
    msg.setDestination(31470U);
    msg.setDestinationEntity(64U);
    msg.control_src = 59490U;
    msg.control_ent = 116U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 119U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2458204002225034;
    tmp_tmp_msg_0_0.speed_units = 64U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8580529148085133;
    tmp_tmp_msg_0_1.z_units = 113U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.49346195503853263;
    tmp_msg_0.lon = 0.05297288914959941;
    tmp_msg_0.radius = 0.5505796550010587;
    msg.reference.set(tmp_msg_0);
    msg.state = 28U;
    msg.proximity = 110U;

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
    msg.setTimeStamp(0.34298895124987705);
    msg.setSource(56929U);
    msg.setSourceEntity(107U);
    msg.setDestination(64044U);
    msg.setDestinationEntity(220U);
    msg.control_src = 40282U;
    msg.control_ent = 104U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 172U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4923112452036291;
    tmp_tmp_msg_0_0.speed_units = 26U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7682064048357491;
    tmp_tmp_msg_0_1.z_units = 115U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8786268743025544;
    tmp_msg_0.lon = 0.46398596996004227;
    tmp_msg_0.radius = 0.41497358777876947;
    msg.reference.set(tmp_msg_0);
    msg.state = 242U;
    msg.proximity = 75U;

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
    msg.setTimeStamp(0.6070447775621547);
    msg.setSource(5115U);
    msg.setSourceEntity(16U);
    msg.setDestination(22702U);
    msg.setDestinationEntity(105U);
    msg.ax_cmd = 0.4268481040618818;
    msg.ay_cmd = 0.9826434808016759;
    msg.az_cmd = 0.9205495756898014;
    msg.ax_des = 0.2673359495831663;
    msg.ay_des = 0.8203071262997191;
    msg.az_des = 0.5127048392263832;
    msg.virt_err_x = 0.05150386909590465;
    msg.virt_err_y = 0.8284924484412475;
    msg.virt_err_z = 0.7769103070025435;
    msg.surf_fdbk_x = 0.48243369587016616;
    msg.surf_fdbk_y = 0.14236029283701135;
    msg.surf_fdbk_z = 0.3317119687694521;
    msg.surf_unkn_x = 0.6487962455569106;
    msg.surf_unkn_y = 0.7212449117529347;
    msg.surf_unkn_z = 0.3815466579117991;
    msg.ss_x = 0.987870199381493;
    msg.ss_y = 0.6706547564345903;
    msg.ss_z = 0.3533423319094563;

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
    msg.setTimeStamp(0.1310636771075011);
    msg.setSource(20393U);
    msg.setSourceEntity(176U);
    msg.setDestination(7781U);
    msg.setDestinationEntity(3U);
    msg.ax_cmd = 0.9972596437034866;
    msg.ay_cmd = 0.704727590404054;
    msg.az_cmd = 0.9603901693494102;
    msg.ax_des = 0.45501838476215284;
    msg.ay_des = 0.9302112627677878;
    msg.az_des = 0.7988417552771042;
    msg.virt_err_x = 0.7883434288003981;
    msg.virt_err_y = 0.9728750974550856;
    msg.virt_err_z = 0.7118100686286433;
    msg.surf_fdbk_x = 0.6629225712049848;
    msg.surf_fdbk_y = 0.7556261336600161;
    msg.surf_fdbk_z = 0.20307300232103842;
    msg.surf_unkn_x = 0.6054184240871219;
    msg.surf_unkn_y = 0.9170701814869702;
    msg.surf_unkn_z = 0.35003764214079014;
    msg.ss_x = 0.5772199002938958;
    msg.ss_y = 0.19340188400180247;
    msg.ss_z = 0.23736541924101695;

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
    msg.setTimeStamp(0.86438071979181);
    msg.setSource(1361U);
    msg.setSourceEntity(67U);
    msg.setDestination(32664U);
    msg.setDestinationEntity(244U);
    msg.ax_cmd = 0.7210725914684518;
    msg.ay_cmd = 0.6197731017075038;
    msg.az_cmd = 0.6753694722897321;
    msg.ax_des = 0.9902258027581359;
    msg.ay_des = 0.9613665185034551;
    msg.az_des = 0.872027815676535;
    msg.virt_err_x = 0.22309279201868404;
    msg.virt_err_y = 0.8920607564001627;
    msg.virt_err_z = 0.5673838023433319;
    msg.surf_fdbk_x = 0.5257096669607284;
    msg.surf_fdbk_y = 0.05004950194030844;
    msg.surf_fdbk_z = 0.6376112540528157;
    msg.surf_unkn_x = 0.6287664089936188;
    msg.surf_unkn_y = 0.2152667996674783;
    msg.surf_unkn_z = 0.02200535931949532;
    msg.ss_x = 0.8087255492967171;
    msg.ss_y = 0.43196745778562085;
    msg.ss_z = 0.6629736856403923;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RERDDYFBEJBOIVOYRPGXIBFNLNWSOCLZRJETMHJLCPLFCDYFYCWXIOBVAVDEYVRQHJGHJPZZUEWMYHDVXETWNQULGCAOQAMOZVPVBUQKHQZYZFGGUPWADRETIT");
    tmp_msg_0.dist = 0.4359047710027575;
    tmp_msg_0.err = 0.02267560951480141;
    tmp_msg_0.ctrl_imp = 0.24640542181759206;
    tmp_msg_0.rel_dir_x = 0.8512947509824841;
    tmp_msg_0.rel_dir_y = 0.7564676427368995;
    tmp_msg_0.rel_dir_z = 0.08316543952330857;
    tmp_msg_0.err_x = 0.02987662991993556;
    tmp_msg_0.err_y = 0.2839673386990078;
    tmp_msg_0.err_z = 0.26410086988052284;
    tmp_msg_0.rf_err_x = 0.05002238642022405;
    tmp_msg_0.rf_err_y = 0.9541147941704532;
    tmp_msg_0.rf_err_z = 0.6652721658167479;
    tmp_msg_0.rf_err_vx = 0.7257646630034439;
    tmp_msg_0.rf_err_vy = 0.5300792124371954;
    tmp_msg_0.rf_err_vz = 0.05381475179337425;
    tmp_msg_0.ss_x = 0.06777650567359528;
    tmp_msg_0.ss_y = 0.9910643807404228;
    tmp_msg_0.ss_z = 0.38528969120564793;
    tmp_msg_0.virt_err_x = 0.32720314417417407;
    tmp_msg_0.virt_err_y = 0.9445137724709989;
    tmp_msg_0.virt_err_z = 0.2889556555223143;
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
    msg.setTimeStamp(0.4242326711389107);
    msg.setSource(49758U);
    msg.setSourceEntity(193U);
    msg.setDestination(24182U);
    msg.setDestinationEntity(4U);
    msg.s_id.assign("SJEZCBSNQAQTJZMCVYYLMOPRVBKUBVXNDUNAGKQERTRDTUYBKOBNIYSVRQNCXECQDGIGWLTWXBGGKWITPTCOFHMPEJLWPILPFXMQXOOFMRADFPOSQXQNVZHSILJZDKVRTFWOXCJWKWHPVERTBMSAHRJZEMLCRZDYKEIABUGZLSHYAMTHHBIVLCJJIYHMHPCACGALDXFUOLFUYQDESYFXBHNEUZDKRDFJOWAFKTVIXWNONQVJMWPPG");
    msg.dist = 0.3027390821762562;
    msg.err = 0.1466160128838021;
    msg.ctrl_imp = 0.3974943371525185;
    msg.rel_dir_x = 0.6068616191548967;
    msg.rel_dir_y = 0.8064528104877212;
    msg.rel_dir_z = 0.48802697807519746;
    msg.err_x = 0.3039230038979809;
    msg.err_y = 0.3909893824460198;
    msg.err_z = 0.8954443185323518;
    msg.rf_err_x = 0.6223364059446392;
    msg.rf_err_y = 0.5773194625160284;
    msg.rf_err_z = 0.16565246544280998;
    msg.rf_err_vx = 0.12303259389529708;
    msg.rf_err_vy = 0.20150024958110302;
    msg.rf_err_vz = 0.9422938024992389;
    msg.ss_x = 0.4082262720248525;
    msg.ss_y = 0.33091911749601177;
    msg.ss_z = 0.9601643704570332;
    msg.virt_err_x = 0.8996688955750322;
    msg.virt_err_y = 0.9789846920220058;
    msg.virt_err_z = 0.27963557691733365;

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
    msg.setTimeStamp(0.013143534811637214);
    msg.setSource(45555U);
    msg.setSourceEntity(221U);
    msg.setDestination(18320U);
    msg.setDestinationEntity(21U);
    msg.s_id.assign("LKZTHMTLCFWDXYZGUSFVWIYGNOQIGUHZELXQQTUGDQUATBZJSXWMSKUHNLYNSYQVBYLRMNEGWEXBUDXTPXFOQYLTVAVEHPVDARWDGIGICIOPCXGILQMSEJGMBHRABGWOKSKZHNPLUBEPQBWXQMAHUKIZVPOOC");
    msg.dist = 0.5420922145272095;
    msg.err = 0.1902733354904591;
    msg.ctrl_imp = 0.9162432032487338;
    msg.rel_dir_x = 0.1312007487509662;
    msg.rel_dir_y = 0.3024335777851246;
    msg.rel_dir_z = 0.9329280683149144;
    msg.err_x = 0.8949710790313633;
    msg.err_y = 0.4020365684932825;
    msg.err_z = 0.8483063041136304;
    msg.rf_err_x = 0.04375078673343258;
    msg.rf_err_y = 0.6330016179209592;
    msg.rf_err_z = 0.8918014162966758;
    msg.rf_err_vx = 0.7426051102922583;
    msg.rf_err_vy = 0.3737360964848091;
    msg.rf_err_vz = 0.11745794802423148;
    msg.ss_x = 0.09966012371424438;
    msg.ss_y = 0.8582969504278104;
    msg.ss_z = 0.3698784008229392;
    msg.virt_err_x = 0.35910052963871;
    msg.virt_err_y = 0.5219958858393487;
    msg.virt_err_z = 0.4655123410185007;

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
    msg.setTimeStamp(0.5149952830167784);
    msg.setSource(59672U);
    msg.setSourceEntity(162U);
    msg.setDestination(8521U);
    msg.setDestinationEntity(109U);
    msg.s_id.assign("UBAURMQZRGRJSAWCJCPRTEDLPYTAVFATHTIXCFWMAGFYRQNKCMKIPHVQNNZHSHZQDGGVEVLUWLJXNLPIYJNZSDYWJTIQDQRUEVDYUSHYGCKKOEPPFONDQLVQJJYLUUUTRFFSNAEZAFXOXGQLKLJIZCZOGMIXINBCEXBLZFOGSHEBBMMXOTEISKWPZVWPQS");
    msg.dist = 0.0991213553027992;
    msg.err = 0.6993429043005227;
    msg.ctrl_imp = 0.9385260838934416;
    msg.rel_dir_x = 0.3180403618768929;
    msg.rel_dir_y = 0.28941450533308744;
    msg.rel_dir_z = 0.9691091991236563;
    msg.err_x = 0.40268234487561405;
    msg.err_y = 0.5310295017297174;
    msg.err_z = 0.3012787094257998;
    msg.rf_err_x = 0.8669317402244939;
    msg.rf_err_y = 0.7376069785668788;
    msg.rf_err_z = 0.8951295147906613;
    msg.rf_err_vx = 0.9961428105069484;
    msg.rf_err_vy = 0.5946735687673065;
    msg.rf_err_vz = 0.0939896752552295;
    msg.ss_x = 0.46372550566797466;
    msg.ss_y = 0.9302209629986011;
    msg.ss_z = 0.7111569008459813;
    msg.virt_err_x = 0.9726014620834649;
    msg.virt_err_y = 0.4327472006547407;
    msg.virt_err_z = 0.7245832919331463;

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
    msg.setTimeStamp(0.49679241856346434);
    msg.setSource(513U);
    msg.setSourceEntity(198U);
    msg.setDestination(57522U);
    msg.setDestinationEntity(109U);
    msg.timeout = 1964U;
    msg.rpm = 0.3331500939069354;
    msg.direction = 167U;
    msg.custom.assign("TKTKBRFKNDFGKDSESAQDYESIVPAHNLKOTSAKBBIUUODXMLLVQPTNEIXZOGMDHIVWHODMTFQRYFSLBQSGIQUCAAHEWWNNPUPRPVCFDFOKFGMGCDMGDZYNFEUFHREEZICCXYJLFNWJZYWXSOOXVBUXHRXQIGYLTRVXREYPRCJNLTLWWBCUGODYHJEPLCCYTIMLQGBIJJAOZJQRMSRVQWBNXPBO");

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
    msg.setTimeStamp(0.32329259075724714);
    msg.setSource(57017U);
    msg.setSourceEntity(201U);
    msg.setDestination(44138U);
    msg.setDestinationEntity(131U);
    msg.timeout = 13507U;
    msg.rpm = 0.6744834907491818;
    msg.direction = 32U;
    msg.custom.assign("TLAWBCNNNYHOQTHDBQXEAPELHOZYDRGSOUKHFWXXPKMYVJGUEXYQSWHUEKCQGCFFXAIOSEVLHPFBVGHLDFIESMCUQRRIBKQSFPMPDHAUPIAACNMZFEGJWNBZMDYDJQGMHYBYWOPVBXAZZOVZIWVWKEOEKGTTXZYCAWIBCZKWSVOPLJMTOGGMILRSSBOJKYRZVDQEKPAUTKFJYUBSNSVXWTLIV");

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
    msg.setTimeStamp(0.21859713953200888);
    msg.setSource(7353U);
    msg.setSourceEntity(152U);
    msg.setDestination(11715U);
    msg.setDestinationEntity(197U);
    msg.timeout = 32318U;
    msg.rpm = 0.9217442921300089;
    msg.direction = 58U;
    msg.custom.assign("YQFNIIVBQPFCMHZKVFURWQGKOUHMSKMGYYISBEMLWAYTDGHCUJUMPEGIQVAKXUCAAOPDNOSRCDQYXLIFTFFHHGUVNGRONYIFRULPEKHZZZSQJKRVOTCMBJELWQROMBRJJNPLXGOIJHYZPLAQAQVAUTFXEXPNGENSFJJZEZDPTTGXACFZYBHWDDWBXJLWPTBYULVLQMSIWCHSK");

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
    msg.setTimeStamp(0.5410884421982384);
    msg.setSource(28580U);
    msg.setSourceEntity(168U);
    msg.setDestination(17266U);
    msg.setDestinationEntity(206U);
    msg.formation_name.assign("YTPAOXEIAJGXMGQHBAIIYLDXMMBJSOGUZPNKRULYGPZKAVEOLWYHCKBKLFYIJYXWJZFBEUWQGGJVXSWPOFFNPQZUYNLPTSWXVCQZPBOZPSRE");
    msg.type = 47U;
    msg.op = 189U;
    msg.group_name.assign("DVMDZVFCAKEAFGIKRSKPSKKLARAGDPZUILYODSBHPYURSUBCCHFAGWMZLKRUMCIKXKEWODNACJBQXTWPLVBIMLOFFNTMETYQSNZVCEUCPIMQXAYFOXXQYNWVEFOIQORWODXEOERRKMBJZCENAEJNZPKVFSJQBYWMLHIWGGTUUOFVLXNXAPJTYISCTZQOHJNTTVXPJMH");
    msg.plan_id.assign("PDHNEUTXMGSQZKCCJKYWPSKCGODJMFIUOUBKIYGMSMAJMANJYXZVDZOLGVHE");
    msg.description.assign("CECHFKYLZJAYXWRVMCXYPIBTJEAQBZRPLAAFUKA");
    msg.reference_frame = 212U;
    msg.leader_bank_lim = 0.6445991880720133;
    msg.leader_speed_min = 0.5468165287941285;
    msg.leader_speed_max = 0.9773610921197967;
    msg.leader_alt_min = 0.8764904018206907;
    msg.leader_alt_max = 0.8986334399175603;
    msg.pos_sim_err_lim = 0.5403502085927159;
    msg.pos_sim_err_wrn = 0.06719670297766522;
    msg.pos_sim_err_timeout = 24879U;
    msg.converg_max = 0.9450461271310784;
    msg.converg_timeout = 34031U;
    msg.comms_timeout = 41059U;
    msg.turb_lim = 0.9885657956473276;
    msg.custom.assign("UTEZXCCNFSFLIVSQRVKCGFOGDKBOJKCTVFFBWXPGQANTXXSDRWYNXHDMPTMAVEVKPTHQ");

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
    msg.setTimeStamp(0.42527909170422096);
    msg.setSource(5449U);
    msg.setSourceEntity(247U);
    msg.setDestination(28451U);
    msg.setDestinationEntity(164U);
    msg.formation_name.assign("PBAJGDCJANCVQVFGIQPSPRZPEOCT");
    msg.type = 219U;
    msg.op = 91U;
    msg.group_name.assign("RBWOBUJJKRQWWHPKSHACTFNKKGUCIOMRRDLJAJBTLYYVEZEOFWNFZKZDCLMLXYETDKHJVMVGERQHPTIQEUMBRMVSDFNIZTVUPZAPIYQUIKGOOGNUMYXZHVGZTOXVPNXUJDVHCINDGOCAUMMCQUIZSVSXBLRLXEJWAXCZWIGVFX");
    msg.plan_id.assign("PCWLAGKAWPMIZSVTXRBFVTPRVGUMUEYUROCHNFNTJMGITGFFNYIBED");
    msg.description.assign("SPFWKTMQBDBQVGOFCBKRHYNADPYQRDEKZNWJPOFMXWNHIEMGBARNRMIFJEXGCNHELIVKYFCJSKFHUGQXCRVKXSWYG");
    msg.reference_frame = 195U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35859U;
    tmp_msg_0.off_x = 0.023767836985328028;
    tmp_msg_0.off_y = 0.6584452281706258;
    tmp_msg_0.off_z = 0.6352706077603837;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8181257060335251;
    msg.leader_speed_min = 0.3201110503925181;
    msg.leader_speed_max = 0.09945794351274995;
    msg.leader_alt_min = 0.24464865371408584;
    msg.leader_alt_max = 0.0893589573041329;
    msg.pos_sim_err_lim = 0.6100047817696783;
    msg.pos_sim_err_wrn = 0.33131874548706686;
    msg.pos_sim_err_timeout = 41820U;
    msg.converg_max = 0.9797988326210954;
    msg.converg_timeout = 41055U;
    msg.comms_timeout = 63667U;
    msg.turb_lim = 0.318929149671346;
    msg.custom.assign("GXXNMPZNTLOJJTIILFVBKKHRMZAIYLUSTCOBWVNOSCOETZDUBVBLHBEKEUWDRVKUGRCOQLPPYLUWKTOTSFTOEULJENVTSTDSEBAAIDXQCCGHUEBCVAMBSPMWIIYSHIXQXFKDCWHUAAZYSZERYBJZFXURKKAHMEJQKZVDYLRQNCIZQSWOANHANXGMLGNPPCGFFHVYYRBJMDTZOORYMQNQZWHUFDFASWXQIHJNDMGQDGCJXIRRVPJY");

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
    msg.setTimeStamp(0.6846795792824611);
    msg.setSource(57978U);
    msg.setSourceEntity(145U);
    msg.setDestination(52448U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("VGUVARZCSAWAWHCXOWZBIYOPZWHHYNZOYGUPDDJSAXEIDRRQQVVEHPABUOBVNHUSCHIWOMZKGDXQIPWSMLIMNZTKLBLCJZNBGUVRJYVPTKPKHXFNSHPRTQKLMXVEKLMWUBIQJXYZAIMARGGSDRAJJNCENESBLVYQCKPKNJQOQTFFCJTMQTNRKCPXUNYIWADBCAUPYFSELZDTRELITGXZE");
    msg.type = 68U;
    msg.op = 103U;
    msg.group_name.assign("VBMRSDAFILOXFXIYDMCXVZGHJXEWZUQCRHJWKWHKEYUMOJUFTLDURKPCTZUGKUUZMWPORSYYTNTDXTAIKXQVUZMLIXCZBPTQDBVJNVKIQHKMQ");
    msg.plan_id.assign("FBAPBCXBTKRYPINIXDKUJVTTGJJJXAPEVFHXGNBDFCXRODNSXKKIOKPUUSOZWHYRMZDEYVKLNPJNGSKTMJTLOQRNNWOVVGMQYWPLCQPKAEQAWHCZAUDJUSQDCEFBEUVFEBQORHYGVRFXAHELNAXMJZHZMLGLDSPARMFDRIMEYMOQXMDUUWZONCQSOVAHWIQRLWIDJVIFFTTYCBKWGTOJTSCIEBG");
    msg.description.assign("UZCCZPTFAHXTLNTPROYENKIAXRV");
    msg.reference_frame = 134U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 46776U;
    tmp_msg_0.off_x = 0.9314325274025359;
    tmp_msg_0.off_y = 0.9467328058323311;
    tmp_msg_0.off_z = 0.21279857275247538;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.2747468593562642;
    msg.leader_speed_min = 0.5462907271833337;
    msg.leader_speed_max = 0.5296507605122732;
    msg.leader_alt_min = 0.787872178648215;
    msg.leader_alt_max = 0.6937112267848241;
    msg.pos_sim_err_lim = 0.6204618210888697;
    msg.pos_sim_err_wrn = 0.6147639040839055;
    msg.pos_sim_err_timeout = 62228U;
    msg.converg_max = 0.42413861957656307;
    msg.converg_timeout = 6765U;
    msg.comms_timeout = 38274U;
    msg.turb_lim = 0.3355900755865703;
    msg.custom.assign("TJAIFUIWKKOIYFMLHRAKGXSTDLZHKTGISJXDAWNAREFRPFMXYPLQGZITTUCFRMSVYGHBVEOADMQUMVMKIEOQVOYACCTRWSOEJBPHUSBACEPIVIKJJUXHNUQWEFZWVTPLIADEDSHNOABWCZMZGGTLTCWQWZFNNRRJSHCVDXEOC");

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
    msg.setTimeStamp(0.8564343808299154);
    msg.setSource(13662U);
    msg.setSourceEntity(226U);
    msg.setDestination(20961U);
    msg.setDestinationEntity(67U);
    msg.timeout = 3154U;
    msg.lat = 0.25229516771743943;
    msg.lon = 0.5589419998914441;
    msg.z = 0.5105092477700743;
    msg.z_units = 194U;
    msg.speed = 0.6273570893261563;
    msg.speed_units = 192U;
    msg.custom.assign("QSLNDRBWLAOFNJZCWHBPMWJHJUOGTVL");

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
    msg.setTimeStamp(0.005438514578189668);
    msg.setSource(3174U);
    msg.setSourceEntity(187U);
    msg.setDestination(53500U);
    msg.setDestinationEntity(2U);
    msg.timeout = 65139U;
    msg.lat = 0.7302242881681004;
    msg.lon = 0.3163933574763458;
    msg.z = 0.761968426983501;
    msg.z_units = 58U;
    msg.speed = 0.520850943765854;
    msg.speed_units = 87U;
    msg.custom.assign("FAHWCSGENBXURZRJQFOIIPZHDUYXVJUBRRIEMQDECIQLDJOSGKJLKJHVKUPQTYJWS");

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
    msg.setTimeStamp(0.5405374030000251);
    msg.setSource(3011U);
    msg.setSourceEntity(158U);
    msg.setDestination(56454U);
    msg.setDestinationEntity(66U);
    msg.timeout = 6138U;
    msg.lat = 0.32416007642249123;
    msg.lon = 0.818298547810019;
    msg.z = 0.7263110484087231;
    msg.z_units = 241U;
    msg.speed = 0.9698759525889897;
    msg.speed_units = 187U;
    msg.custom.assign("HIZLWXMTEYFZJZYEUJEBREEVJVCDXKSWTZCBXUVCJLXJNFNMRAUHEYYDKLIYTHDYSGOQBZFBNIGVMGFAMUCBSCUEGVDPWMUTIXMXNLHBSKQISLYZCQODPUJLBUOEWWGHTLBKJDWFBHKCBRGVAAWTZIPXZTDVRGAQSCFMLFPWHNPQDYESADQNNMTHPWMQNATUAOZLSKCJOAIKXFOPIKOGSX");

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
    msg.setTimeStamp(0.04400369690333694);
    msg.setSource(29197U);
    msg.setSourceEntity(190U);
    msg.setDestination(10918U);
    msg.setDestinationEntity(160U);
    msg.timeout = 64363U;
    msg.lat = 0.4828182263777867;
    msg.lon = 0.21379983939966918;
    msg.z = 0.8877243326368136;
    msg.z_units = 129U;
    msg.speed = 0.14119169265265663;
    msg.speed_units = 180U;
    msg.custom.assign("TFIUONBNPQUUAYHJLFNGNTTEXYUTRXDLADKIKAALSOHOZKDEDCFXXLGKTBNRZQJQWDIWQEAHGVAPNVRYPLWVRHQMSSGSPDZFUFBQLXGMFCDOJIZMYHKTLAGXUJRYPECHPBKVPBCRSLCNCY");

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
    msg.setTimeStamp(0.7354923366735117);
    msg.setSource(10895U);
    msg.setSourceEntity(104U);
    msg.setDestination(55335U);
    msg.setDestinationEntity(157U);
    msg.timeout = 36541U;
    msg.lat = 0.8651125436165082;
    msg.lon = 0.8492700231037079;
    msg.z = 0.17186784236088282;
    msg.z_units = 181U;
    msg.speed = 0.7461299675764388;
    msg.speed_units = 246U;
    msg.custom.assign("VZQEBTPVGXHLMKMIGRPSU");

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
    msg.setTimeStamp(0.5445193900061196);
    msg.setSource(53797U);
    msg.setSourceEntity(140U);
    msg.setDestination(53410U);
    msg.setDestinationEntity(89U);
    msg.timeout = 42320U;
    msg.lat = 0.055477106834771917;
    msg.lon = 0.42483309784480483;
    msg.z = 0.6425350611705638;
    msg.z_units = 151U;
    msg.speed = 0.3789766586982536;
    msg.speed_units = 7U;
    msg.custom.assign("ORHBIZQZXDPSBDIUTMCFIJNMEACUXUSGPTOLXGZTLLVKZQYJWTHWANNMVSEMVXBCNRERTCCIJKRWCWBOVQJAPKYFEARBHKGZHDTNJYKQCFCPEKQNYTYODYEVXRAFSXGWOEIIVPNGLHBDIXXUVIAECUKMWSZIUOSULMOFPOUTUXSPSWDDRKJEASGOPHYNFZGBQPLMFREDWNAVQNHFLFCQJGHAKLJLROMKVWXSJBTYD");

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
    msg.setTimeStamp(0.6009033327636829);
    msg.setSource(49573U);
    msg.setSourceEntity(239U);
    msg.setDestination(60441U);
    msg.setDestinationEntity(227U);
    msg.arrival_time = 0.6083336822856098;
    msg.lat = 0.8745401010825694;
    msg.lon = 0.9504041936306531;
    msg.z = 0.21313681261931106;
    msg.z_units = 218U;
    msg.travel_z = 0.29805497495978384;
    msg.travel_z_units = 162U;
    msg.delayed = 167U;

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
    msg.setTimeStamp(0.824882859594893);
    msg.setSource(5542U);
    msg.setSourceEntity(189U);
    msg.setDestination(36428U);
    msg.setDestinationEntity(72U);
    msg.arrival_time = 0.6306021179076489;
    msg.lat = 0.3365221743807084;
    msg.lon = 0.56353650025534;
    msg.z = 0.13953740392390368;
    msg.z_units = 63U;
    msg.travel_z = 0.8346065872283092;
    msg.travel_z_units = 94U;
    msg.delayed = 168U;

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
    msg.setTimeStamp(0.7313342071930189);
    msg.setSource(11194U);
    msg.setSourceEntity(194U);
    msg.setDestination(3006U);
    msg.setDestinationEntity(194U);
    msg.arrival_time = 0.0928686999033369;
    msg.lat = 0.7425902096641073;
    msg.lon = 0.17935689046253922;
    msg.z = 0.9123611136541278;
    msg.z_units = 134U;
    msg.travel_z = 0.8208776891584817;
    msg.travel_z_units = 174U;
    msg.delayed = 238U;

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
    msg.setTimeStamp(0.16388629532803178);
    msg.setSource(23227U);
    msg.setSourceEntity(8U);
    msg.setDestination(51202U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.9783452414022773;
    msg.lon = 0.6844833313979133;
    msg.z = 0.41951268432257416;
    msg.z_units = 108U;
    msg.speed = 0.13343986810228614;
    msg.speed_units = 43U;
    msg.bearing = 0.08543934287744137;
    msg.cross_angle = 0.8686849407903245;
    msg.width = 0.7601835403618121;
    msg.length = 0.5967528544220888;
    msg.coff = 165U;
    msg.angaperture = 0.5874505148005053;
    msg.range = 45930U;
    msg.overlap = 131U;
    msg.flags = 64U;
    msg.custom.assign("UTNDBNZNPROQNGWSDYQWJGKFXIUKVUXGGTGACVIWWTOCDAEAHRIHSBZNSMVQUJWPKHFRXVDYBOMWEAVESDIYMIRPERHQWCQEWHIXQUATAOJURDNIJLUAFBHMSGGAFGMYTJBYUPXUXBGNNPKFLZLDBOYYOKICFBWJVOMSHRLXLSLJVTKZAMMPICNPFDMXBXEECGJAJLYZLVQESVRKCHOCLTQZPITONVZPEQCKHPQKRZFEBKDFWHRTUZZFOSY");

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
    msg.setTimeStamp(0.8050101771763015);
    msg.setSource(16811U);
    msg.setSourceEntity(218U);
    msg.setDestination(14250U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.30716128750097305;
    msg.lon = 0.5245301075196029;
    msg.z = 0.8531223085045452;
    msg.z_units = 166U;
    msg.speed = 0.5364931383383716;
    msg.speed_units = 82U;
    msg.bearing = 0.08351806700877107;
    msg.cross_angle = 0.2484926422924808;
    msg.width = 0.972038039620313;
    msg.length = 0.26465617910389383;
    msg.coff = 76U;
    msg.angaperture = 0.6214491261888857;
    msg.range = 52674U;
    msg.overlap = 68U;
    msg.flags = 32U;
    msg.custom.assign("NFBEDALVAXKJTIVXPPQOASSZLGBNVVUFYKGOWHSTSMXVKDJMPQUQYENCGLABPMPLOGYKAWW");

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
    msg.setTimeStamp(0.3224599998335872);
    msg.setSource(57097U);
    msg.setSourceEntity(60U);
    msg.setDestination(40204U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.46856719077636877;
    msg.lon = 0.5054549943589428;
    msg.z = 0.16462473905906228;
    msg.z_units = 24U;
    msg.speed = 0.5968457442231273;
    msg.speed_units = 10U;
    msg.bearing = 0.9708436764136291;
    msg.cross_angle = 0.634768234509626;
    msg.width = 0.6220731856478249;
    msg.length = 0.10725579430647447;
    msg.coff = 3U;
    msg.angaperture = 0.033067722435226155;
    msg.range = 26564U;
    msg.overlap = 126U;
    msg.flags = 137U;
    msg.custom.assign("GUYRPINUEDJEZVBAILCFOMZPAVJWCSSFDEBMZIAPOSLTZXLKRPRPUOXBCFSFSQTOZYXHRPKVNRUXCYECZJANGMLMKMTKXEZJTDGKWRSMIVTTQVXOWFCGNXKHJNDLUGGNZTQLKPVCEHCFUGTLQWAYVXEFWMYTAOPWNXNMIHFUE");

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
    msg.setTimeStamp(0.25594426892185596);
    msg.setSource(5601U);
    msg.setSourceEntity(25U);
    msg.setDestination(64209U);
    msg.setDestinationEntity(87U);
    msg.timeout = 9460U;
    msg.lat = 0.9291931549829465;
    msg.lon = 0.8935939252334997;
    msg.z = 0.7815015282395396;
    msg.z_units = 50U;
    msg.speed = 0.7682237327892886;
    msg.speed_units = 144U;
    msg.syringe0 = 90U;
    msg.syringe1 = 0U;
    msg.syringe2 = 51U;
    msg.custom.assign("BTZYCTZOJEYBTDJWWOUEUXZJWESIZQBAUVNVSWFRHBAVBOFGPDPDTMUXGNYJABIVLBSOMGGZHUXQHYAXMHWKGNIOVLTSHUFXUEKTRESEROAZVLNFADIMAMGOUKVYAXTQCSDFNJBJGHFOLPIMSDLKPXLEVACWBFKLRTSIOCCHNQPRQXXPRDKJKYCFWYIDYBFOHPRIQVUMQQKSHFUCZGP");

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
    msg.setTimeStamp(0.9404944185363765);
    msg.setSource(23631U);
    msg.setSourceEntity(146U);
    msg.setDestination(30892U);
    msg.setDestinationEntity(165U);
    msg.timeout = 14533U;
    msg.lat = 0.17542575869519916;
    msg.lon = 0.5765448931031076;
    msg.z = 0.40453561459349463;
    msg.z_units = 166U;
    msg.speed = 0.7842199277790014;
    msg.speed_units = 3U;
    msg.syringe0 = 176U;
    msg.syringe1 = 117U;
    msg.syringe2 = 157U;
    msg.custom.assign("YYTUSUKAAKUFLAXMGZURIETECRYYAEYUNPOHMCAZMXSZTXULIJZVCSBKGBAOPGMBJTDHHZFVKZJOCYUCNMICFXRBWQMOWDORSVXGWMVEKXAQBWWBREPZNWLDVG");

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
    msg.setTimeStamp(0.45481087140086696);
    msg.setSource(157U);
    msg.setSourceEntity(39U);
    msg.setDestination(62102U);
    msg.setDestinationEntity(124U);
    msg.timeout = 466U;
    msg.lat = 0.7098715457165726;
    msg.lon = 0.302976547143902;
    msg.z = 0.3893664124535192;
    msg.z_units = 46U;
    msg.speed = 0.9543764590237577;
    msg.speed_units = 212U;
    msg.syringe0 = 231U;
    msg.syringe1 = 54U;
    msg.syringe2 = 174U;
    msg.custom.assign("YXFZPKKIIDNXWWKRYJUHSPSZSEZYUJFAJRCVMYLBXZOWFOTUNVAUCCBGTCEFITDXVOUOENTDPGGYAOCJLZUJPDOSHFQDZLFUUXHWLCQHVXNWTNBHUFBPJSVLMGEGEMZWAENJLYQASHZPMKOYYYHFOGVERQEJCOITAVREXWKDSRCLMTMQDWNYSKDPNKQJLHAZBIBWXORIRTQJDGTNMKVTMGZQILRAKEAIRIBKULGHIVMDASCVPXRFNHPQBM");

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
    msg.setTimeStamp(0.3893289030980961);
    msg.setSource(15980U);
    msg.setSourceEntity(84U);
    msg.setDestination(34503U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.5101704308138464);
    msg.setSource(55566U);
    msg.setSourceEntity(189U);
    msg.setDestination(63293U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.05801674077139651);
    msg.setSource(39558U);
    msg.setSourceEntity(113U);
    msg.setDestination(23189U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.08258591586931496);
    msg.setSource(12710U);
    msg.setSourceEntity(131U);
    msg.setDestination(52602U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.2726684327297163;
    msg.lon = 0.9115752476426181;
    msg.z = 0.7943332749233077;
    msg.z_units = 129U;
    msg.speed = 0.075226131799766;
    msg.speed_units = 188U;
    msg.takeoff_pitch = 0.10286615106581865;
    msg.custom.assign("STPFSLAJQJGGNCHMJKHVSWQYNOCXCKNBMDDMMZADCDIWTUXOTEXIUASRRIIBEPCEULSFAUWLDHZGERGJMKMLMBBXKDQMEICBQRXFYNTJZGSAGTMYVHKJDPBYPLERKPVLAJVKKJYLTOOLQSAQFOFRBXSDOEOXDWJWEQTWQZUUINPFXNEZHOFHHZIOCXRBIYQKYFAZQOCNAYBGUULNCVFWTXRUGVIKTCZYWRNSDBVVAUVVYPEPFPPRTJZGHI");

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
    msg.setTimeStamp(0.9613686641101248);
    msg.setSource(51182U);
    msg.setSourceEntity(187U);
    msg.setDestination(37842U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.20428251183949675;
    msg.lon = 0.7896231875266724;
    msg.z = 0.5274349318864091;
    msg.z_units = 174U;
    msg.speed = 0.07388986302243128;
    msg.speed_units = 48U;
    msg.takeoff_pitch = 0.0639028084944252;
    msg.custom.assign("WPGTZKBCNSLRCUBQEBUXNGLMEZEPSYSKNMLYZUQRRSPGZFKGENKXIXAMBFQLIGTDLBTMBNEEVXWRQBNWEUQHAZXODQRYLIHXYOLAAFBPFWJYJEGTJMUAFCJGFVIHQVLUCDCJRGVPCRHIRPIQSJWZDZXWDCAUTZXIUSJONQVITLDJMNHMSVBSHTPODVOHZFKRDZYUTRIKOFWJWMYLCTVPSGAODHEPOFIKSEPBTYMOCAKVJHAMHXWACQFXODGY");

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
    msg.setTimeStamp(0.8292528444166116);
    msg.setSource(366U);
    msg.setSourceEntity(79U);
    msg.setDestination(3125U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.5300327503939698;
    msg.lon = 0.36981318811141217;
    msg.z = 0.3502960679592274;
    msg.z_units = 42U;
    msg.speed = 0.5158779321797717;
    msg.speed_units = 147U;
    msg.takeoff_pitch = 0.40492328720318993;
    msg.custom.assign("XFXWFHYNZVOVDLGWYNONQGSVMJFCNDHUIVEVAGQICCFPAYCAHZEAUTZRLDILZJBMTOZIURYOYPSUGTHEPAEIAQBPUGMYWHJMTRMLHDDSIKPKFTQMPWLWODXRFFLMUDBBUSINOLPSHNKGJQNCVKATJOQRPTDCXIUYVXWCBRYJEDREKJKZGMBOMWSXH");

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
    msg.setTimeStamp(0.005608421377613748);
    msg.setSource(14189U);
    msg.setSourceEntity(192U);
    msg.setDestination(17294U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.08698996863720654;
    msg.lon = 0.24474593841777925;
    msg.z = 0.5178423872862817;
    msg.z_units = 174U;
    msg.speed = 0.43844382837522367;
    msg.speed_units = 235U;
    msg.abort_z = 0.21540870658789923;
    msg.bearing = 0.8332351471534599;
    msg.glide_slope = 100U;
    msg.glide_slope_alt = 0.9706486116253019;
    msg.custom.assign("LSJQYERRPGSNO");

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
    msg.setTimeStamp(0.9315280091581737);
    msg.setSource(17410U);
    msg.setSourceEntity(107U);
    msg.setDestination(36181U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.9201618285217955;
    msg.lon = 0.23089603691817062;
    msg.z = 0.5800337462238605;
    msg.z_units = 144U;
    msg.speed = 0.05804551980461703;
    msg.speed_units = 29U;
    msg.abort_z = 0.7141840105589186;
    msg.bearing = 0.16501072575710762;
    msg.glide_slope = 18U;
    msg.glide_slope_alt = 0.6893467999673961;
    msg.custom.assign("ELRSQSUIEPGJKWAGWZRHGKVJSWIBGPBYVYBFLNUDJANHWNMLWLUFXAMPYQHURKYTROJKDHFEBBVTFFEDVRTQJCMMRJBTDZXDYIUHZKSLRHJDRVZKYGASAWLFXMZGNVNRGACEKMQOJMWDZOUILG");

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
    msg.setTimeStamp(0.20318973576051302);
    msg.setSource(59179U);
    msg.setSourceEntity(10U);
    msg.setDestination(35796U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.1911152279872147;
    msg.lon = 0.23003354346329574;
    msg.z = 0.6044411826154928;
    msg.z_units = 172U;
    msg.speed = 0.08613007837929032;
    msg.speed_units = 250U;
    msg.abort_z = 0.10142471734790803;
    msg.bearing = 0.24653313868853532;
    msg.glide_slope = 194U;
    msg.glide_slope_alt = 0.5720616537701898;
    msg.custom.assign("WQKYDCIPXPDEGSENUCETMAJOHXNDHUIEJNHWRTYKJPBBQZSHVYWOYCPFBXLZVMFFRTAPQYIJGXVTARXLGMPCTGSOIYYMBBAUOSATUDOGSGPKMHOJRBGNNOEHUWIZMKLQTMALXEFTDDLWJLZRSNXLVTXHQYKNATEOHJKUYFLCPCQCCHHKAWQBRXSDRZZFQQKOBBSZGSRKINVDEVBFOEUUNRCFIIYUJFJDMNVVARWZSJGUWGMWIKXDI");

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
    msg.setTimeStamp(0.3753119955978882);
    msg.setSource(58143U);
    msg.setSourceEntity(183U);
    msg.setDestination(10591U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.9723830846395964;
    msg.lon = 0.22902558488703872;
    msg.speed = 0.3471883801643332;
    msg.speed_units = 126U;
    msg.limits = 20U;
    msg.max_depth = 0.8879508116686804;
    msg.min_alt = 0.6753960028977214;
    msg.time_limit = 0.35418882275344155;
    msg.controller.assign("TKYAVXFUUGVQNUGPIDGMOBDHVKBPTWPSASZQKOFIJQDJPGTVJZFBMNQXVOWHCOOXEVXUEUSHMTGHWSNGPYAPCXRQGLNACYYPYYLHCOVFZZPROETWDKZJCMNVIWAFISYMRWJJFMKLLWJZCMSEMALLIUNIXPAGIHJOZFEIRBUNK");
    msg.custom.assign("UVCINHQRNCSHGYKOFIAJQSYUIHGTGSHKFOGPMBYFGXBYARCDDVMQKUBIZXLYAZXCRPDNUUEGIGDCPNIBRGGHAEQROZLELWOAULKROANJCZQDEOMORQKPSSCOKPWQLVJQKFRQRTWAZYJEZFJTWLUSWKMWSBDBEHTFDA");

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
    msg.setTimeStamp(0.04999521477898716);
    msg.setSource(50423U);
    msg.setSourceEntity(174U);
    msg.setDestination(48183U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.5861640984105433;
    msg.lon = 0.12523882700116273;
    msg.speed = 0.8206164723835242;
    msg.speed_units = 154U;
    msg.limits = 70U;
    msg.max_depth = 0.6795474875229772;
    msg.min_alt = 0.8590502418285471;
    msg.time_limit = 0.009167749070008613;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9700184851396954;
    tmp_msg_0.lon = 0.6138304362241405;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YNVEWXWJNGGDMQJGCGVMZVYHAHSSQNZBUXKHDWYMHCDRSLDOTPARTNTAURQMFXTLWBRINEBZWTBZUROKYOYUOZSXENSLFCHFSMDVQPSSOHZSJXLWYBFBNLPFFKRKFGUZDPEMFEVEYGPVMADMHBTZJQIYPOKCBUCXAHTQPEXIAJSQYRCPNAVIJLCIEHRITJGIDWJTRVNQKOUOQRKMLOCWQKIBUJXPIZCAGKHDNXVMTUOVLPGFIWLAFAJ");
    msg.custom.assign("PQILSNJJFRQKPKZIMQYIEUQXVTLSIUBNRDZSYWLAOHRBCIYGCLCLVEBFDIQIKHGHTSBGQOJZN");

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
    msg.setTimeStamp(0.5734987421907235);
    msg.setSource(36530U);
    msg.setSourceEntity(211U);
    msg.setDestination(59858U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.4781095507284914;
    msg.lon = 0.05074523972142142;
    msg.speed = 0.4404629095710533;
    msg.speed_units = 227U;
    msg.limits = 90U;
    msg.max_depth = 0.8399831133367699;
    msg.min_alt = 0.9122908743195313;
    msg.time_limit = 0.40895073815029825;
    msg.controller.assign("QATFNVXEUWSLGSDPNBXVYKETYJZHEWURBZGQHJMIAAESOOZIKJPCYTKUSBGFCDXPHDJ");
    msg.custom.assign("VWLREAJRNSSMB");

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
    msg.setTimeStamp(0.02471623906147058);
    msg.setSource(60659U);
    msg.setSourceEntity(103U);
    msg.setDestination(59381U);
    msg.setDestinationEntity(254U);
    msg.target.assign("CZUIVAZCUKIEDDNENPSNERNGLUDDDMFOEBGODHWBWKPVFSJZWVLYYMIATAGXRFKFKYPVYTLUZMBOBAPDDBGMOWNLAZXSIHQJAKOXFTOUNRCHJAGEFRMBLTTSQMOMEPGQRFHHJBUFIFLUNZLBUWOQYMRIJAIUWXQPKWAITYEAVCKMKSZQJCXGJWWOQKIBVNKJUTQQEVLCOBFCZHSGRNXECDLPVNIYTPRYZPSPHVXSGVLJSYMJEXZQHTXH");
    msg.max_speed = 0.017377344308611598;
    msg.speed_units = 97U;
    msg.lat = 0.2967855791002444;
    msg.lon = 0.7135624701156827;
    msg.z = 0.26018281791073383;
    msg.z_units = 244U;
    msg.custom.assign("IIHKDNEXYWMJWTROIXGWVNWNOMHYQLUDLJEHGCLDJPFKXJRNFPHTJADQCYCZATKRQYAGMVENRBYVSQWXGBLZMOVVORHALEFDPSHVXLEUFIFENPZZYRNCTMXMJZUHJGEQROGCFBZFIJSJXTEWOHLCIUMKKNBLJFBVSGLWQYCXIBRTKMBQONYKDPGMIZPXDTDLQPZQCZAKSAIWFQBYUWYCKFUNTASSIDHROPCSUBSSAORBVUPETZGDAM");

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
    msg.setTimeStamp(0.6830856033360612);
    msg.setSource(19848U);
    msg.setSourceEntity(168U);
    msg.setDestination(40646U);
    msg.setDestinationEntity(128U);
    msg.target.assign("GKPENIOHCMAXYSGJSUJCMVVKRBSQZIVOIUNCYPIDYCZQEYWAUE");
    msg.max_speed = 0.4807634726271983;
    msg.speed_units = 100U;
    msg.lat = 0.9684135299899215;
    msg.lon = 0.3109505284676488;
    msg.z = 0.8532319183441204;
    msg.z_units = 118U;
    msg.custom.assign("WXFTOXCRDMEPUVZCZGUMOXPWRSIACYPKZRIRITVWLQYWJZBFHAEKGQQJLHJCGTQFSYPIHANSJXRNMFOTHLKHXIAHKYXUITSFUIGQOLUQDSHKBDHZCCAVOMVETLUVWHWGLEBXZJFYGMCFEIDVJKPQPDYNZBQVRNKENLAGKYDZNATCVUBOCGSRRXVEJUIWKPXEMGNABDAYJBDZWPOLJ");

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
    msg.setTimeStamp(0.0003417706581759772);
    msg.setSource(21314U);
    msg.setSourceEntity(20U);
    msg.setDestination(39096U);
    msg.setDestinationEntity(108U);
    msg.target.assign("CWGDULIGWTYFFFAXGVSFGZQRTHIVQJYMXPLLDKMXOPCDAAPBYQLMENUORSMTLOSBQCEFTMTMTWVDIFSEVZOBNMZDGKCLRXHAJOPHEBVLHBKCIXMYBRNEBQLFLBNEGNAGQJHDSMYSAVHCYUOCKIPRWAPUXEVOPDCIERWCJCUIAIDXSKGKWKBVNVRKFEQIZXSJNKEWZXPQNDAHKZRYNURYZGPQVOMPOJGTLTJXYHFJFJWHIZON");
    msg.max_speed = 0.5805882220831408;
    msg.speed_units = 160U;
    msg.lat = 0.797350697031916;
    msg.lon = 0.7149368246722574;
    msg.z = 0.7484341570107378;
    msg.z_units = 175U;
    msg.custom.assign("FXJEHCXIAWQQMREXRTYABJUBBGUPRFIMMKPOLQCNFDTFXCWAMNHXGQSZTEJFBJUKVNLPQIQCWOLEQYTQERMUGYBFSYALRGMRZFGOKSFAVYUZP");

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
    msg.setTimeStamp(0.48040720418078475);
    msg.setSource(21516U);
    msg.setSourceEntity(60U);
    msg.setDestination(12633U);
    msg.setDestinationEntity(200U);
    msg.timeout = 64132U;
    msg.lat = 0.5255712968419313;
    msg.lon = 0.8484095468664232;
    msg.speed = 0.48693010153563643;
    msg.speed_units = 188U;
    msg.custom.assign("RSFPANFOZGWWIXHQNALOZDTBTGBEOZXEOSEUDXEQDHPFORVXMLVQSKBTSMAB");

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
    msg.setTimeStamp(0.384360340009429);
    msg.setSource(2632U);
    msg.setSourceEntity(248U);
    msg.setDestination(33141U);
    msg.setDestinationEntity(82U);
    msg.timeout = 16884U;
    msg.lat = 0.9791039016211739;
    msg.lon = 0.00819848192816608;
    msg.speed = 0.25142415253505235;
    msg.speed_units = 207U;
    msg.custom.assign("FHVFSNQTKZUQJWIXBGZSFHJHUZIORNEUNIHJIAXGCXYXORDOJNDDWSEVUVLAAXVVRUVUZPQN");

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
    msg.setTimeStamp(0.9727580748776137);
    msg.setSource(52401U);
    msg.setSourceEntity(173U);
    msg.setDestination(448U);
    msg.setDestinationEntity(91U);
    msg.timeout = 41925U;
    msg.lat = 0.2765569850065428;
    msg.lon = 0.7756969086386339;
    msg.speed = 0.9010437919899034;
    msg.speed_units = 70U;
    msg.custom.assign("LRRGAMOKHBEYEUGFDEBVHZSZEOWIUZLPVFJMXMPCCWVQCXETXPCKAUDDKTUFGWXOWUPNDJJIQARITKBHINYJRVVGGSBEYXGUTNBSVYEPGDPDBJUNWGDZNIWZUCETRYOXRKHIWOXBMFARJMTQRVNSOVLZIKNTLOH");

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
    msg.setTimeStamp(0.5471763934678415);
    msg.setSource(20096U);
    msg.setSourceEntity(166U);
    msg.setDestination(27646U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.3919413699359756;
    msg.lon = 0.38221903323899276;
    msg.z = 0.4619454161189074;
    msg.z_units = 6U;
    msg.radius = 0.08791242453750214;
    msg.duration = 21452U;
    msg.speed = 0.4937881535727766;
    msg.speed_units = 113U;
    msg.popup_period = 38434U;
    msg.popup_duration = 60540U;
    msg.flags = 142U;
    msg.custom.assign("KDQBYKGJAIWXDWBXTPLFZPHEQPYUPJLCNRPNNXSIZADNOPKZIKGOGP");

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
    msg.setTimeStamp(0.2810256419643663);
    msg.setSource(11599U);
    msg.setSourceEntity(251U);
    msg.setDestination(23095U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.4308964281728451;
    msg.lon = 0.5508943437705763;
    msg.z = 0.8328084038904445;
    msg.z_units = 111U;
    msg.radius = 0.17236981425171072;
    msg.duration = 33839U;
    msg.speed = 0.7148013220002056;
    msg.speed_units = 49U;
    msg.popup_period = 2852U;
    msg.popup_duration = 19146U;
    msg.flags = 249U;
    msg.custom.assign("JHTPNAUBFOVKCCZSGIHAWBBTNDHRTGSUPYRCOKEPZYVUSLNGWYDSFXPGMIKKBOEHZQFCVPAV");

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
    msg.setTimeStamp(0.918710023515887);
    msg.setSource(60912U);
    msg.setSourceEntity(201U);
    msg.setDestination(34299U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.5744927288034457;
    msg.lon = 0.12055046154038285;
    msg.z = 0.19803433873013854;
    msg.z_units = 205U;
    msg.radius = 0.10499692586640774;
    msg.duration = 57074U;
    msg.speed = 0.26275176228287567;
    msg.speed_units = 75U;
    msg.popup_period = 28798U;
    msg.popup_duration = 50404U;
    msg.flags = 242U;
    msg.custom.assign("IUFNSTHKJOLAWSKESOXUNUAGTFXFLERTDGJGCEBBZVVYQKHTGCRLOXBDVTISAVPIQGJQYRMXESZAKGVNZGOYUAMXSNDULZDRRWHMRBQKQDHMTOQZGXQFMUIVAW");

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
    msg.setTimeStamp(0.3275619662234289);
    msg.setSource(13007U);
    msg.setSourceEntity(118U);
    msg.setDestination(26955U);
    msg.setDestinationEntity(49U);
    msg.timeout = 28613U;
    msg.lat = 0.9149064704986095;
    msg.lon = 0.4203318858058205;
    msg.z = 0.4031305362799359;
    msg.z_units = 215U;
    msg.speed = 0.0052784639676911604;
    msg.speed_units = 219U;
    msg.bearing = 0.4892308236498266;
    msg.width = 0.5063079133912411;
    msg.direction = 208U;
    msg.custom.assign("KVUECOHSTQLGUYPWXBCZDNORZHDYQHSSECZUHXHZYQNARUBYGMFWOFJJRVXGEWGLTMWDKTEJPXBEIGLGPWFAXCGMKJPBIWAPUAPAPQSGDFSKQJNLUPIETRBURROFWZLJKYNWWNIDUDVFTQCX");

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
    msg.setTimeStamp(0.5628920885965447);
    msg.setSource(55054U);
    msg.setSourceEntity(28U);
    msg.setDestination(21771U);
    msg.setDestinationEntity(63U);
    msg.timeout = 54972U;
    msg.lat = 0.10167181809689307;
    msg.lon = 0.6865795764181577;
    msg.z = 0.6570636582275003;
    msg.z_units = 78U;
    msg.speed = 0.9876118711948666;
    msg.speed_units = 21U;
    msg.bearing = 0.2657930209562469;
    msg.width = 0.5342608549644062;
    msg.direction = 94U;
    msg.custom.assign("BHDVMTYBQSTJASAFPQJXKCRINCKITXKOOFJMGPZENYGNISHZJCHFS");

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
    msg.setTimeStamp(0.9886136141579269);
    msg.setSource(32966U);
    msg.setSourceEntity(168U);
    msg.setDestination(10232U);
    msg.setDestinationEntity(179U);
    msg.timeout = 61856U;
    msg.lat = 0.16466331991262984;
    msg.lon = 0.8665892477167798;
    msg.z = 0.4530479145245485;
    msg.z_units = 165U;
    msg.speed = 0.6679016758613274;
    msg.speed_units = 197U;
    msg.bearing = 0.5328996529474872;
    msg.width = 0.9378241473048982;
    msg.direction = 183U;
    msg.custom.assign("ITOQPPZPRARJUIKZNUXCDKYBQOIUYSFJMFVHNIPXSACECMEWGVXZGCHUWXSIJDZBKTZWJQVBIONEGDNHHLARRDEWUCBSYLEYSJSICQOGMERBEYGHZMVYMTLPFYTEVXTNHMIBRLWKBONWMWBEFNZZZJKTYUHLAKAXMDYSPFAEUKCDPHLGMTQNRFQJLKDRFXLQSBTSAQPNVJJXTZKUBOGQLNRMKAFVGIWDRQGHVAOSVCOCWWUFPFXAGO");

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
    msg.setTimeStamp(0.7709388741279624);
    msg.setSource(22690U);
    msg.setSourceEntity(13U);
    msg.setDestination(55457U);
    msg.setDestinationEntity(75U);
    msg.op_mode = 33U;
    msg.error_count = 192U;
    msg.error_ents.assign("NEQDYMCMAQBKMFCGEMEEIBEOJBFNCSAFWZDJGYOULHNIOPXAHJKOWSJVCXTEPINZRSCHRUQFVFVLAHAGVOEGMESVJSMQXYNTNXOMUVDLXDKIAHXRAGCFVLCIKPAZPQYNXGQJNZZNBPLHTPRUCQTUUQYFHWWANBYBDTZUFLCYGSLFKVPOWQVLWTWPRTYG");
    msg.maneuver_type = 17251U;
    msg.maneuver_stime = 0.20238397221415882;
    msg.maneuver_eta = 2498U;
    msg.control_loops = 604987635U;
    msg.flags = 108U;
    msg.last_error.assign("THGOAHFOUBFWDVVIQWVVFFOESUKFYZOSNKYOXBAZHVIENGRYCCEAMPLYDVOKKCHSVLMUIQSOGUGFUZTZYVHNQEBINMRLUJKWYOSAIXGJLLZPCBLEWJCPSUGTUMJHXSAOLQLJJHE");
    msg.last_error_time = 0.236924943993986;

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
    msg.setTimeStamp(0.35633505832067547);
    msg.setSource(54810U);
    msg.setSourceEntity(80U);
    msg.setDestination(32651U);
    msg.setDestinationEntity(205U);
    msg.op_mode = 196U;
    msg.error_count = 13U;
    msg.error_ents.assign("IJGMGWHBHENWKPAGDZFUYFPDYSHFHY");
    msg.maneuver_type = 18829U;
    msg.maneuver_stime = 0.7637993535345116;
    msg.maneuver_eta = 48212U;
    msg.control_loops = 2157013403U;
    msg.flags = 141U;
    msg.last_error.assign("RAUGNCPFGXBECQTSNFUBUQIFFLPCLIBCPCBZVOAOEFODAEBTRKIONHUGWLRFCXQMYZFMXQNXKODQZNYJNISFPIWYELHWDGGKKEYGVZGYXHLEURUZQQQLDEJWOZTQSVWMPVBJKITJMFCVYVWYSSAKQPHJABMXIJFIRCWRXLXSSGXNRITAHAPNBZDTJVJDMLYGMUDBLHWEHMRKONURTDOCYHEV");
    msg.last_error_time = 0.5737760231822034;

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
    msg.setTimeStamp(0.8338628925850247);
    msg.setSource(14274U);
    msg.setSourceEntity(148U);
    msg.setDestination(9033U);
    msg.setDestinationEntity(30U);
    msg.op_mode = 127U;
    msg.error_count = 169U;
    msg.error_ents.assign("KUIYAKTPWRHPRCBIHZDXEMFCLJTRLYSILDQPJKFEAENVQQFUOSEYAFM");
    msg.maneuver_type = 20603U;
    msg.maneuver_stime = 0.7902007363228054;
    msg.maneuver_eta = 22684U;
    msg.control_loops = 46108199U;
    msg.flags = 76U;
    msg.last_error.assign("NQTVDZTLKLUOBUXIVXCSGYJOTQMQPYEDSTTUVXWNFMYEJDSEKNBVJHAZJCMQWQATJOEDMGRZFWPSTLHTARMGZRMTSANCOQHOVWVAKAFYWWUHNIBKPJQLSOUENDKOVCIZXPRXSEOFBEHYDIHKLHYVHLLEGJGWGGQRHXPNCIBUVJDXUQUYJPRXEXWICAHSCQMYCC");
    msg.last_error_time = 0.09325369009205198;

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
    msg.setTimeStamp(0.6649807289744241);
    msg.setSource(14402U);
    msg.setSourceEntity(0U);
    msg.setDestination(44881U);
    msg.setDestinationEntity(204U);
    msg.type = 45U;
    msg.request_id = 56807U;
    msg.command = 49U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.0982388455135611;
    tmp_msg_0.lon = 0.5250876944327905;
    tmp_msg_0.z = 0.8027337652816514;
    tmp_msg_0.z_units = 252U;
    tmp_msg_0.speed = 0.9230300626695216;
    tmp_msg_0.speed_units = 254U;
    tmp_msg_0.custom.assign("XXRIBKCAPGXHLETPIQZEIYOAYMSFWHCSHBHSPLOYFGGXECIQZVFIHINNSHNDVUQUHXHJEWAFDHOKVBAODLMTFARPFQJLJEMFRATWPLKEBZYQTSZVTMOZTSNAYWWLVROJJDKSIMWARUEMJCCNSVOUIAWBTRXHQMDVKOJYMUJXGJRDDGWKGLZXRWZFNVQGSCRBJPKLGUUZOCQEPYCKNNR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 29506U;
    msg.info.assign("VZOWBYVCCRQOXIMDNWXRDCAKGFDGYLPSQNXZUQGYVRIPQHQGRPCUFUFVYNOZFUJHGKAEHHMPZOWHLJFYWAZTKLZLPCMNQZIGNJKXHYSLXYRXSJPTFNKDJJXAXHBEVTTDPRCDKLWNMUBKJCSGKMRQBGZANUQSWIMNUCYSLXVITFEOOPOJTEDWJSUUWRHGBCMUA");

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
    msg.setTimeStamp(0.6909468678307223);
    msg.setSource(14844U);
    msg.setSourceEntity(213U);
    msg.setDestination(35541U);
    msg.setDestinationEntity(243U);
    msg.type = 160U;
    msg.request_id = 56641U;
    msg.command = 149U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 17578U;
    tmp_msg_0.lat = 0.5651084984475273;
    tmp_msg_0.lon = 0.3923973784571828;
    tmp_msg_0.z = 0.9532192131415442;
    tmp_msg_0.z_units = 40U;
    tmp_msg_0.speed = 0.45513287892656473;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.duration = 5685U;
    tmp_msg_0.radius = 0.4313050094260664;
    tmp_msg_0.flags = 11U;
    tmp_msg_0.custom.assign("NENBDVNMGOOXKDSPUOIHCRAMUUCWAKFLKUTFQCEGPIFURIGAEYLAIVVMTIXXHTHVVDJPLOTFJSTGPFUZSMXSBMGMGFZKKJJE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32307U;
    msg.info.assign("FIKVGGFAUYOYLLWLBZAUNNIMTKLNQEFMGSHFIKDACOOQOTJCZVHWZHGVRPRYLVWZKYATEJRYCTCHXFPJCZNFDPSUNRGNQTNRGTZLMIDPJXGFYOGGZUEEKTABBMVNEPMUDSRHNYTSUBSOSMQUOIEPEJAEDIPZPQSTQVXLFRLSQSX");

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
    msg.setTimeStamp(0.39000983067047523);
    msg.setSource(9039U);
    msg.setSourceEntity(41U);
    msg.setDestination(61623U);
    msg.setDestinationEntity(28U);
    msg.type = 55U;
    msg.request_id = 11346U;
    msg.command = 172U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 39310U;
    tmp_msg_0.custom.assign("MYEIWHQIKGROBWBNWKJQZKUUMNXVBHXKTUSJQAHWOTZVZAHINEZJUSLRYGMYJLOEMVFXKPGBTSMLCOWVKGEMIRTPAERUJCOTZWCAFSRWIZPYAUOFPCNVHRYPDQDYNITBRCIXCENSQLBYLZQARDUEEIYNBYJKZJJDXXPGGJGDG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53955U;
    msg.info.assign("CXBSVKRAQHTCLLJWDAXMDIEWDILKKJNSTPYAJRABTBISDUECKDWEQNVXFRHZOTVBCHHWZJSIPKTGELZXKFKONRULDMHJEYSBQFIWHHFTDGIIWCXMYGQBZWEPSVQUJFMBYEBNVXGMHSIANJMBDNKTUKRACWAMIVYGQNOWLNOLOGYQVOUFIUJYGSFULARVBMD");

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
    msg.setTimeStamp(0.6989267578054438);
    msg.setSource(42869U);
    msg.setSourceEntity(201U);
    msg.setDestination(2756U);
    msg.setDestinationEntity(21U);
    msg.command = 7U;
    msg.entities.assign("PSTKVGRLKFNCFHHDRYFAVMZPNEGIKDBOUMXIRPJWPGLOHLLGSQUWNIENFRZZXCYADMFSQBZWNZZJVDRVXNPTTDPAAQQADEOOSMITAJRUUBTYGBHROKAMGFNDWFBHWVFOIOHCUMJUHUBHZGLWGK");

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
    msg.setTimeStamp(0.4452312704943566);
    msg.setSource(52587U);
    msg.setSourceEntity(215U);
    msg.setDestination(4489U);
    msg.setDestinationEntity(110U);
    msg.command = 243U;
    msg.entities.assign("MDSFDFPVXLUDSRQQNVLJGWLTUCHTWDRBZFMTOBYQKEAKCEHVBPRZYGGKQPKIWIYWDQUOXBYTAPUCJDEAHESGZRRSVXXDJJNYUSOWSQUOLWBZNNLKWXKIMMRKITDIYBLCXIPFVBMPUPGHBJHFCTNHYSSAATYFJCNGDSOKNUSOEALMXYTNKEOOQRHVCGOYWVACQZFIVLMELRQHBNVMRZJFFWTRJZKJJIGPCEHXIFMZNHAXBALPGVP");

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
    msg.setTimeStamp(0.7771148556612012);
    msg.setSource(36919U);
    msg.setSourceEntity(245U);
    msg.setDestination(63882U);
    msg.setDestinationEntity(191U);
    msg.command = 168U;
    msg.entities.assign("COQYGPDVKVELWYRYDHPKBCXLTCICZGACSGQMFDUYGQLMEEYRMBSTHKUOAFFFVXRROBYXHPNTNILCDWPWDGCGBAMFEPSPQWJQYMYMJXCDSPBHHFTMXORWRZILLERNTZJMQGXJFKNDJVBJTVDNRWJZIXKZWXNKHSSVUIALTKFKACMASHVWUUJNOOVONAUXMOZBYJDONBHEIRWEWKHBEDKGTAPBQZNHFSIRISUZLU");

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
    msg.setTimeStamp(0.7950396190246836);
    msg.setSource(53673U);
    msg.setSourceEntity(186U);
    msg.setDestination(7762U);
    msg.setDestinationEntity(253U);
    msg.mcount = 146U;
    msg.mnames.assign("JNTIBXVZMTPZH");
    msg.ecount = 222U;
    msg.enames.assign("ZKPJZSAHVHNXXRWINVMLMHIQGQQQNDTUNKPGYAHBAQPQKBOBGRQHUNXQRDREETTBCZZPUPCYWPSRXRAVINUEIHSNMSVYXIKZEYOWPCCRFYZIKLWBLWTOGPV");
    msg.ccount = 43U;
    msg.cnames.assign("SVXDPQIBTJJSZJERFBHFAGYCJOGIEKLRJPRGTWGMUNABDRKQDRSLKAIBAMPLCGPKCUTZWYHQEVECKUSZXBIYMAWNPZNMZMQSDGTUVRNPKNSPTXOFLUXBWSVXXFKAFGYWUBYEAHQQGDFWMD");
    msg.last_error.assign("BGQYHDIBONKQPOFPAXCXTPMYCUOLVWRNEXAFCAKPRQYOQOSWPECLICHPUNALCHHRJBVVJUWURETATTWFKNVAQDZKNWZZLGGJVZWHNKGVDHFWURDSANSZXKRMMDHMINCIOGFIXYTJYLVNDIGEPJNWLESF");
    msg.last_error_time = 0.4057463856165363;

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
    msg.setTimeStamp(0.5772129492217627);
    msg.setSource(12475U);
    msg.setSourceEntity(166U);
    msg.setDestination(64456U);
    msg.setDestinationEntity(140U);
    msg.mcount = 168U;
    msg.mnames.assign("ABWRPPMUTPQGCTQRCYLNLTMHMTAVSGKZDGMMJAGRTFADNUYIEXTPKLNTOBGNYYBHHEEZIXQWCUBLFOVIMEKCBZNZXZZXIAWUBVCDZHRYQRJFSUBVNWSGFVHMDHVDFNFINJZOCR");
    msg.ecount = 137U;
    msg.enames.assign("NFWHOSFMAKPWVNUJTXZHYMQZBAKRZDYKHOXTBRBVKLXHKPUSBUOGKAJXHEFHLLIESMBOJX");
    msg.ccount = 206U;
    msg.cnames.assign("OKHTCOIGFGQAEFZTXATLIMYTVFLDCMRVCNSNIAJGFNEH");
    msg.last_error.assign("PVRKSXEDCTKOCNOOBUMIJOTANPJYQGOZGSMTCEIQIUCKAUMPLIYPLYRTNSSPTKTMGAQPGXDIMHWRNUSBPSVINY");
    msg.last_error_time = 0.4957531062957182;

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
    msg.setTimeStamp(0.5431836588971858);
    msg.setSource(4315U);
    msg.setSourceEntity(82U);
    msg.setDestination(63583U);
    msg.setDestinationEntity(240U);
    msg.mcount = 51U;
    msg.mnames.assign("TXJDUUXLPADGCLZIAHEQODQKGNDOCVLVLMJEQMEZHPIBXQQXWGKOZNMBFQWIDS");
    msg.ecount = 155U;
    msg.enames.assign("SEDYVICDFIOKMCRPSZQJIBZLAJHKYJWBTEDZGVQAHZDUNAYPMEXUDABLVSUMTGOWZLUZGKNMPXEEBBVJEYLVWCBVSPWRAFMDFNQRZQBQGNNPLCHGHSRWHSUMJAHTXCQIKANPCMTERITEJIQGAXYSVNWSYWDXZNKHIDOPRYJQOQITVLWVJZBEPNFLMOOFUZFGXYYFOVURKKKXYUTAUJ");
    msg.ccount = 194U;
    msg.cnames.assign("RFHLZPXVDZJYAXKNYPDEKWEOOTCHUMBCRHAOWGOAHWAFCBNTLBSMYQQLLPIZSARCFMLSAFOBRQVJVRKJQDGRTJ");
    msg.last_error.assign("PWQDHJQQUGNCHWEXTISFWFINJQYUASZSXIBHCVONNKKRIOWJTSATEXODLBRRLPLBVZXFVCEWZTCSTZPJGTUQLTVXIKRSEAGVYIWABYMXCKPNPDEUFDYGGYFMHDZZLSILJPYLKWVDAOJMUUQXESCNCHGTEHODFGXKJMHPUV");
    msg.last_error_time = 0.4476125563172808;

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
    msg.setTimeStamp(0.37443367434386043);
    msg.setSource(63905U);
    msg.setSourceEntity(176U);
    msg.setDestination(25444U);
    msg.setDestinationEntity(168U);
    msg.mask = 128U;
    msg.max_depth = 0.07914099324247115;
    msg.min_altitude = 0.8120114685101464;
    msg.max_altitude = 0.5800386147648591;
    msg.min_speed = 0.11484429319258838;
    msg.max_speed = 0.9679226763319851;
    msg.max_vrate = 0.381137815765739;
    msg.lat = 0.08687136856627076;
    msg.lon = 0.4175424777942571;
    msg.orientation = 0.39590146216471633;
    msg.width = 0.8279537493537301;
    msg.length = 0.8642424811639076;

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
    msg.setTimeStamp(0.7523804237652602);
    msg.setSource(24314U);
    msg.setSourceEntity(77U);
    msg.setDestination(9706U);
    msg.setDestinationEntity(110U);
    msg.mask = 184U;
    msg.max_depth = 0.8283496711364091;
    msg.min_altitude = 0.3529373936513299;
    msg.max_altitude = 0.2185072399349527;
    msg.min_speed = 0.023154871591364423;
    msg.max_speed = 0.212073169363596;
    msg.max_vrate = 0.9325402893942014;
    msg.lat = 0.6669781127067239;
    msg.lon = 0.3023570105426907;
    msg.orientation = 0.4035030758798458;
    msg.width = 0.9651727968092519;
    msg.length = 0.05842169069109149;

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
    msg.setTimeStamp(0.46780917736819017);
    msg.setSource(9067U);
    msg.setSourceEntity(100U);
    msg.setDestination(37105U);
    msg.setDestinationEntity(30U);
    msg.mask = 196U;
    msg.max_depth = 0.47027437328809063;
    msg.min_altitude = 0.717346525476103;
    msg.max_altitude = 0.0008182676157463264;
    msg.min_speed = 0.5727653666637937;
    msg.max_speed = 0.27703535999902085;
    msg.max_vrate = 0.6721309265930294;
    msg.lat = 0.12790308012497398;
    msg.lon = 0.5952289138606129;
    msg.orientation = 0.3972713767720303;
    msg.width = 0.1200244892103628;
    msg.length = 0.5909047711334428;

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
    msg.setTimeStamp(0.4956760357625539);
    msg.setSource(47703U);
    msg.setSourceEntity(135U);
    msg.setDestination(59449U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.040494554124106075);
    msg.setSource(60808U);
    msg.setSourceEntity(109U);
    msg.setDestination(5076U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.17340134784576156);
    msg.setSource(41849U);
    msg.setSourceEntity(121U);
    msg.setDestination(63456U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.9527977709522814);
    msg.setSource(49170U);
    msg.setSourceEntity(100U);
    msg.setDestination(43079U);
    msg.setDestinationEntity(21U);
    msg.duration = 39106U;

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
    msg.setTimeStamp(0.9527122784514676);
    msg.setSource(23248U);
    msg.setSourceEntity(34U);
    msg.setDestination(39168U);
    msg.setDestinationEntity(142U);
    msg.duration = 61813U;

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
    msg.setTimeStamp(0.33453530376043283);
    msg.setSource(60209U);
    msg.setSourceEntity(137U);
    msg.setDestination(55262U);
    msg.setDestinationEntity(204U);
    msg.duration = 1600U;

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
    msg.setTimeStamp(0.6243833562556197);
    msg.setSource(26822U);
    msg.setSourceEntity(231U);
    msg.setDestination(29303U);
    msg.setDestinationEntity(179U);
    msg.enable = 242U;
    msg.mask = 892409688U;
    msg.scope_ref = 3431798132U;

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
    msg.setTimeStamp(0.6880605579847857);
    msg.setSource(5572U);
    msg.setSourceEntity(254U);
    msg.setDestination(30184U);
    msg.setDestinationEntity(69U);
    msg.enable = 3U;
    msg.mask = 3110802893U;
    msg.scope_ref = 3379414429U;

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
    msg.setTimeStamp(0.37628540167090385);
    msg.setSource(2734U);
    msg.setSourceEntity(214U);
    msg.setDestination(63391U);
    msg.setDestinationEntity(35U);
    msg.enable = 131U;
    msg.mask = 1509911259U;
    msg.scope_ref = 3879612802U;

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
    msg.setTimeStamp(0.4241449145136392);
    msg.setSource(40404U);
    msg.setSourceEntity(213U);
    msg.setDestination(241U);
    msg.setDestinationEntity(88U);
    msg.medium = 189U;

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
    msg.setTimeStamp(0.11995270648833145);
    msg.setSource(60304U);
    msg.setSourceEntity(205U);
    msg.setDestination(4260U);
    msg.setDestinationEntity(219U);
    msg.medium = 193U;

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
    msg.setTimeStamp(0.8920423922337906);
    msg.setSource(14627U);
    msg.setSourceEntity(165U);
    msg.setDestination(4857U);
    msg.setDestinationEntity(40U);
    msg.medium = 219U;

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
    msg.setTimeStamp(0.2608228037321809);
    msg.setSource(21233U);
    msg.setSourceEntity(115U);
    msg.setDestination(38447U);
    msg.setDestinationEntity(74U);
    msg.value = 0.6706858434152881;
    msg.type = 48U;

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
    msg.setTimeStamp(0.4990520259230099);
    msg.setSource(16211U);
    msg.setSourceEntity(168U);
    msg.setDestination(14107U);
    msg.setDestinationEntity(179U);
    msg.value = 0.1588984197678346;
    msg.type = 124U;

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
    msg.setTimeStamp(0.6093747532868217);
    msg.setSource(31077U);
    msg.setSourceEntity(146U);
    msg.setDestination(52145U);
    msg.setDestinationEntity(54U);
    msg.value = 0.20833175897492306;
    msg.type = 193U;

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
    msg.setTimeStamp(0.45844688521482213);
    msg.setSource(17580U);
    msg.setSourceEntity(163U);
    msg.setDestination(39478U);
    msg.setDestinationEntity(236U);
    msg.possimerr = 0.19635547397337272;
    msg.converg = 0.09969824000240601;
    msg.turbulence = 0.6819446747200133;
    msg.possimmon = 18U;
    msg.commmon = 91U;
    msg.convergmon = 16U;

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
    msg.setTimeStamp(0.0502122485829396);
    msg.setSource(32412U);
    msg.setSourceEntity(186U);
    msg.setDestination(12408U);
    msg.setDestinationEntity(84U);
    msg.possimerr = 0.0748957254000786;
    msg.converg = 0.41091021430852726;
    msg.turbulence = 0.8636586827352576;
    msg.possimmon = 138U;
    msg.commmon = 168U;
    msg.convergmon = 184U;

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
    msg.setTimeStamp(0.04130712640076872);
    msg.setSource(55515U);
    msg.setSourceEntity(169U);
    msg.setDestination(26588U);
    msg.setDestinationEntity(211U);
    msg.possimerr = 0.24801364687530003;
    msg.converg = 0.3416890776626771;
    msg.turbulence = 0.8505533291757047;
    msg.possimmon = 78U;
    msg.commmon = 111U;
    msg.convergmon = 23U;

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
    msg.setTimeStamp(0.28882425478175255);
    msg.setSource(26797U);
    msg.setSourceEntity(210U);
    msg.setDestination(64541U);
    msg.setDestinationEntity(92U);
    msg.autonomy = 58U;
    msg.mode.assign("PWIEEWSBQRVMBJNTOGMHPEFFEJHPETPZYIXJMMXNYVXVKMLJJLAOICRAADPUMOGFTTXKBEVZJDZXJNDLYNDIVVUBCKYBBPKZLORWPRHUIQUCAFCQOHKJCRQOJECSZTISZDPDTTWNZPSUIKLZULRMFRTAJCKFQBDWOEZIRVLGFAWYYDWNUVVKYQSWUDGVNHA");

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
    msg.setTimeStamp(0.544560281603217);
    msg.setSource(58588U);
    msg.setSourceEntity(70U);
    msg.setDestination(25956U);
    msg.setDestinationEntity(99U);
    msg.autonomy = 81U;
    msg.mode.assign("QTEGOGWZXCNWKXBEECFYXJXMOUIAIRVNOLCIKNSZVCTMXMPNGZWYRJCBFIBOJZBUTPSDPESKIZUYZDSPOLKOCMKLJLCYWWJGPERHHXVLBTHRMBFXPPHBJAFTGMHRGDXTESTULGWNSEDN");

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
    msg.setTimeStamp(0.9090071482344284);
    msg.setSource(15306U);
    msg.setSourceEntity(94U);
    msg.setDestination(33317U);
    msg.setDestinationEntity(241U);
    msg.autonomy = 200U;
    msg.mode.assign("XCFITBTCTOLYFXQJLQIBSKXKPTPNECUCRGESWUDELORIOYAISJVIEGBQJJRCUZFEVAAHFIKIMWGKNLBUGRLQUUZHGTQCNUOWGVWPGABLIVEKMVNDEHXAIANYJFSAUXFWRWPSXSWEYXDNZKHYZFNNVVPETWSMCMFMFHDCAOBKMENPQGDYLGZXBT");

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
    msg.setTimeStamp(0.7701827920231314);
    msg.setSource(13865U);
    msg.setSourceEntity(185U);
    msg.setDestination(32809U);
    msg.setDestinationEntity(39U);
    msg.type = 103U;
    msg.op = 55U;
    msg.possimerr = 0.5935762719443112;
    msg.converg = 0.6462723174693277;
    msg.turbulence = 0.641617099537728;
    msg.possimmon = 12U;
    msg.commmon = 242U;
    msg.convergmon = 202U;

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
    msg.setTimeStamp(0.17640482492742393);
    msg.setSource(16675U);
    msg.setSourceEntity(88U);
    msg.setDestination(10901U);
    msg.setDestinationEntity(127U);
    msg.type = 85U;
    msg.op = 11U;
    msg.possimerr = 0.667685953916852;
    msg.converg = 0.45331680925874784;
    msg.turbulence = 0.666328356374836;
    msg.possimmon = 79U;
    msg.commmon = 116U;
    msg.convergmon = 220U;

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
    msg.setTimeStamp(0.4202070995817435);
    msg.setSource(58195U);
    msg.setSourceEntity(165U);
    msg.setDestination(65451U);
    msg.setDestinationEntity(60U);
    msg.type = 97U;
    msg.op = 26U;
    msg.possimerr = 0.49647433281135767;
    msg.converg = 0.35051439638666637;
    msg.turbulence = 0.4240964636676524;
    msg.possimmon = 92U;
    msg.commmon = 39U;
    msg.convergmon = 6U;

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
    msg.setTimeStamp(0.8912706552470805);
    msg.setSource(19003U);
    msg.setSourceEntity(18U);
    msg.setDestination(37168U);
    msg.setDestinationEntity(233U);
    msg.op = 146U;
    msg.comm_interface = 22U;
    msg.period = 13198U;
    msg.sys_dst.assign("TINEYZRRCTBWSQEKZMNUPVLNUEIVHSJGMBBPKYOOWYQFPIHJMCPWFTLOLINYZXMHAFEASKVYMZAEXKQEGYDQSFTLDIAXWPOBCQMXQIAHEHDBWTCZUZTOWADJUQRNEFCYCPKSANMMRLLGJAKQJGDXRCDYCSJJWJIRBGULIX");

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
    msg.setTimeStamp(0.06924370526202017);
    msg.setSource(17522U);
    msg.setSourceEntity(16U);
    msg.setDestination(1364U);
    msg.setDestinationEntity(28U);
    msg.op = 253U;
    msg.comm_interface = 206U;
    msg.period = 33940U;
    msg.sys_dst.assign("MZWPJDNXBTTERZBBLYTWYHFSXACAGSFPEKEURKLOIMPJOJPIEXJAXOTYIZBSJQUDLVXMDLIKQONUHEGRGFNVQCZSZRJLQRPARHBFVXSWHTKIEKOCHUJMTQCSCSGMFNZJIXDDANOHRVACOIXMQRYYHFUCMDCJLBDRCIGWANOMVAEUDWHDNVQWLBAVGGYZUDXVWFLSHRFLEBQPLOTKBSQGKTZEICFENIZU");

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
    msg.setTimeStamp(0.4169883896800014);
    msg.setSource(63571U);
    msg.setSourceEntity(147U);
    msg.setDestination(35288U);
    msg.setDestinationEntity(191U);
    msg.op = 104U;
    msg.comm_interface = 223U;
    msg.period = 30576U;
    msg.sys_dst.assign("UDBQKUFIPOQPONSSQIHYIHRMJYJPKDGJRMGWPQDTTIWOADKSAMNURIXMFAFXNQPOVNWDFPQSDGHBGHZOVDYAXEEGRBJPJMZHGUNGVKRNTASRPQTZHFXAUKMESZVCKTRVRXZBDQECDJEAFSZBAETCWKWPASZJLOLDYXLCXKEIIYCQZBZLGUCNOXTRUWBLSZEICMHJVKOFUTAYJCBLGNVJXPTLORUFWLUBWIVQBECMYFVHLENW");

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
    msg.setTimeStamp(0.24877908796445758);
    msg.setSource(12647U);
    msg.setSourceEntity(147U);
    msg.setDestination(27532U);
    msg.setDestinationEntity(85U);
    msg.stime = 1175067709U;
    msg.latitude = 0.8787531118717398;
    msg.longitude = 0.3362211774777717;
    msg.altitude = 18242U;
    msg.depth = 59184U;
    msg.heading = 43958U;
    msg.speed = 1574;
    msg.fuel = -86;
    msg.exec_state = -6;
    msg.plan_checksum = 42321U;

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
    msg.setTimeStamp(0.5368877734877622);
    msg.setSource(59518U);
    msg.setSourceEntity(54U);
    msg.setDestination(28009U);
    msg.setDestinationEntity(138U);
    msg.stime = 366874643U;
    msg.latitude = 0.7510248381913349;
    msg.longitude = 0.40650105724727337;
    msg.altitude = 49976U;
    msg.depth = 43725U;
    msg.heading = 42278U;
    msg.speed = 1737;
    msg.fuel = 35;
    msg.exec_state = 48;
    msg.plan_checksum = 32459U;

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
    msg.setTimeStamp(0.556360431207336);
    msg.setSource(22790U);
    msg.setSourceEntity(132U);
    msg.setDestination(15617U);
    msg.setDestinationEntity(249U);
    msg.stime = 90772287U;
    msg.latitude = 0.15458646291762523;
    msg.longitude = 0.8681749440434862;
    msg.altitude = 25512U;
    msg.depth = 913U;
    msg.heading = 58315U;
    msg.speed = -9051;
    msg.fuel = 62;
    msg.exec_state = 124;
    msg.plan_checksum = 43397U;

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
    msg.setTimeStamp(0.41780639048140955);
    msg.setSource(12819U);
    msg.setSourceEntity(100U);
    msg.setDestination(38515U);
    msg.setDestinationEntity(102U);
    msg.req_id = 2100U;
    msg.comm_mean = 156U;
    msg.destination.assign("ISBLKDBEUNXDXMVQCUIVPSTUNUSTFMOUZVFSRMWPFJODEYPODXDENJDWEABKDMWJBFJYFVWIGHHGCOXANCQRDYBGZKXPAXZCTRURMSQULMAPROGHOPINCIHIPBLEFJZELRVZQLKEGVRJYATBAKYHQQAHQUXILHYTREVXBQVGCABMKWJMFMIX");
    msg.deadline = 0.12893094881437772;
    msg.data_mode = 87U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 38452U;
    tmp_msg_0.lat = 0.24530556672559078;
    tmp_msg_0.lon = 0.7843287409703568;
    tmp_msg_0.z = 0.934836801289744;
    tmp_msg_0.z_units = 223U;
    tmp_msg_0.speed = 0.9344623203640386;
    tmp_msg_0.speed_units = 192U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.540264766651298;
    tmp_tmp_msg_0_0.y = 0.8006547280466809;
    tmp_tmp_msg_0_0.z = 0.9874740768639588;
    tmp_tmp_msg_0_0.t = 0.7156877299325204;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("ALURUFQOHUBGEDJCRHSUHPCKTQEPBVJSZJNGZVEAGGSIKKCKZFLSIKCXZQRMDHOZYGFXZOGKAUJLNSOCQYKYOVJTOBCSFWIQNAZIEFMQECSHNJEMKWDICATXWPZPZBVJMAOIWPWKBX");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KLWUTTUHVWZTPJEQHOBHPNSPDABFAONQAHPYXWSLGHCOJKCSOAAMRVFJTDVEXYCUFUKMBZJILEIXZKBVUAMNZRCNXBAKTWWUYNFL");
    const char tmp_msg_1[] = {-111, -91, 75, -89, -13, 84, -32, -36, 78, -31, 65, -92, -126, 36, -27, 80, 5, 107, 58, 90, -109, 84, 68, 88, 109, 17, -24, -104, 42, 114, 85, 45, 25, -78, -120, -84, -72, 7, -44, -102, 102, 75, 46, 19, -78, 89, 104, 118, 73, -101, 99, 37, 55, 15, -33, 15, 16, -27, -34, -39, -7, -13, -51, 17, -16, 55, 119, 115, 98, -8, -28, 29, -53, -105, 108, 52, 97, -76, 69, -74, -90, 46, -51, -11, 21, -52, -36, -31, -53, 61, 1, -7, -55, 16, 100, 11, 104, 103, -12, -66, 91, -54, -111, -54, -14, 25, 73, 28, -109, -117, -2, 44, 94, -113, -67, -47, -44, 6, -63, -98, 19, -85, 52, 99, 61, 58, 104, -3, 17, 0, -105, -63, -47, -97, -89, -22, -102, 78, -11, 7, -109, 8, 4, -28, 85, 91, -121, -18, 55, 70, 58, 0, 71, -112, 88, -75, 94, 10, 36, 104, -90, -78, -117, 114, -104, 48, -13, -67, -95, -87, 115, -24, 36, 45, -126, 79, -73, 64, 106, -17, 34, 34, 9, 116, 33, 33, -25, 11, 13, -65, 54, 97, 65, -72, -40, -95, 53, 126, -8, -75, 102, 38, 91, 19, -7, 41, 117, 77, -36, -47};
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
    msg.setTimeStamp(0.7914497335503389);
    msg.setSource(59584U);
    msg.setSourceEntity(23U);
    msg.setDestination(43608U);
    msg.setDestinationEntity(207U);
    msg.req_id = 8390U;
    msg.comm_mean = 83U;
    msg.destination.assign("YNEXISZJDNTDCJNYYHWZVMQFFETSLJMZJUTOHBHUZZCPXJYVTNNBKLRLDNDFTKITXMJAEUAOVWWDOYDFWYEMBIRPGPYIQMUONBTFPWGSKMDRZCUCEPGCSJKIKBWUDHRYAQSPGVPRUSHVPVXRVQAIOKCWGAWXTZQDMSCQIJMRHTAUFNFXAWXQEALKCPOYLHLGHRVKRERXOHLSGCKZUBUZFNHBFIWBBAIOVIPXEDS");
    msg.deadline = 0.5367399450242707;
    msg.data_mode = 163U;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 1212U;
    tmp_msg_0.plan_size = 1620888066U;
    tmp_msg_0.change_time = 0.18830500258328786;
    tmp_msg_0.change_sid = 44136U;
    tmp_msg_0.change_sname.assign("JQREGNIXNKAB");
    const char tmp_tmp_msg_0_0[] = {84, 113, -23, 101, -58, 115, 23, 19, -65, -31, 19, 97, -10, 117, -66, -104, -23, 120, -35, -28, 88, 78, -117, 56, 27, 66, -56, -45, -36, 40, 103, -82, 56, -23, 72, 57, -32, -118, -22, -53, 70, 12, 79, -33, 65, -22, 78, -84, -65, 105, 40, -35, 90, 105, 103, 11, 126, 42, -83, -117, 47, -5, 96, -121, -46, 29, -43, -111, 34, 45, 61, -115, -121, 118, -73, 122, 60, 116, -43, 68, 75, 0, -88, 58, 62, 47, -58, 29, -103, -83, -123, -102, 20, 48, 125, -32, -46, 19, 96, 35, 6, -69, -119, 68, -1, 61, 80, 32, -121, 55, 12, 33, 45, 30, 94, -89, -21, -122, -66, -115, -84, -89, -70, 70, -76, -38, -102, 104, 73, 99, 115, 46, 69, 26, -15, 32, -82, 8, -39, 25, -93, 119, 102, 4, 47, -39, 30, -114, -4, 108, 68, 0, -113, -30, 38, -20, -61, -38, 29, 123, 30, 123, 108, -41, 24, 0, -85, -15, 28, 12, 86, -5, -108, -50, 37, -65, 63, -125, 76, -69, 45, 112, -24, -99, -44, -56, 103, 9, 87, -5, -99, 60, -11, -25, 0, -104, 74, -127, -58, 31, -111, -73, 21, 49, -128, -56, -68, -23, -13, -78, -90, 120, -61, 18, -100, 119, 67, 63, 122, 100, 39, -17, -104, 43, 93, 2, 125, -117};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MEIOWEPVJBDFZEQYYCQCDCFXJGTAUGAGFWCJWXIVUIDKEAHRKGLN");
    const char tmp_msg_1[] = {49, -16, 26, 77, 119, -120, 52, 41, 13, -128, -27, 99, -108, -47, -76, 116, 91, -128, -77, -120, -114, 105, -12, 51, 41, -87, -59, -24, 58, -112, -33, 94, 120, -76, -116, 34, -47, -76, -68, -40, -57, -76, 78, 62, 34, 110, 13, 64, -98, -25, -37, 1, -7, 45, -35, 4, -76, -93, 20, 31, 4, 80, -26, -105, 45, 4, -119, 19, -62, -53, -73, -124, 69, -121, -6, 9, -95, 4, 111, 60, 24, -74, -35, 14, 80, -106, -4, 10, 70, 35, 29, -86, -78, -47, -114, -28, 116, 10, 37, -55, 45, -8, -53, -38, 31, 126, -63, 108, -86, -116, 48, 83, 29, 4, 25, -35, 1, -50, -36, 23, -101, 19, -58, -35, -7, 47, -20, 114, 123, -104, 56, -90, -91, 4, 100, -110, 99, -69, 97, 63, -83, -125, 76, 41, 101, 14, 112, 67, 119, -38, 53, 74, 83, -97, 21, 83, -71, 96, 71, -6, 7, -101, -81, -27, 8, -127, -75, 77, 113, 44, 65, 102, 41, -38, 20, -56, -7, -105, -23, -56, 59, -31, 86, 103, 18};
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
    msg.setTimeStamp(0.176377714700239);
    msg.setSource(5215U);
    msg.setSourceEntity(240U);
    msg.setDestination(60177U);
    msg.setDestinationEntity(54U);
    msg.req_id = 38061U;
    msg.comm_mean = 237U;
    msg.destination.assign("LESBZGSTVYGHJMCUKKMDUOFGHCDFEGPVJMPEOSZCVPAIZBBPSWLOTAYW");
    msg.deadline = 0.3454073720165515;
    msg.data_mode = 195U;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 108U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("YDULZVWUTWDGUHYQUQCDGKQSVLAXGJHVDZRJFITHTKEZMZBJNKBLNATJNLOJFJWLTKOXUCAELFMINXKRCDCXPJFJUSOBXXKPIVEWQVZMBRAREMAUNAYTRQZJEAYBGJVNYXG");
    tmp_tmp_msg_0_0.description.assign("UAGOKWWTVKSGPDCEWDLBBHENQECPALKLZOLGCGTQJHOCUHDGUHVSHILOKBDWYNXCONTPTBMMINZVDWDUMXATJNWAVRJBRKGXEMFJYHLKRDRBMSUNKERWKFPSYFOMRZREGKGHTZTFRZGABXAYEWBJFNYECIMANUOIQSVJTAPROZIXMFCBDSSTAFQPX");
    tmp_tmp_msg_0_0.vnamespace.assign("OJLMFKZYPTSPIQRUMWXKEZCEGZCKIPVDSWFTWAOBNVUCMTCMKICUFZTLVTJLQRQOMALVRFPPXYXHFNLOWVE");
    tmp_tmp_msg_0_0.start_man_id.assign("FPECAXTBZDBQPQNSXSTLZXARDRGNODWSCHAENYXUQHXUQSMHWPTNXEAHJCZIYFBOUYHSGAKSZKYREILCESUOHNKJEIVYLATUWFDUKGLDRPOULCREXUVPHVRVEKGVTCIVRNKGLIJPFKNWCBAV");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("EXJGNWGUXWJZOYGGAFRMHYCWALVXAEITZTOSAMZZRPYPMFBBOXBCUKSQPQLODNHATKWQMROVAJBCUHAOHYVCIXTLMMFTQKRCMIEFEDDWKCSZWBYPYRUSJMQZSGLNDSFKAVBKRBEVHBZDJHODFNH");
    IMC::Launch tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.timeout = 63120U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.3444097937032875;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.1335442185582475;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.824031747771151;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 123U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.9505664188184458;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 79U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("BGLJRXFPARWXFNGHOZIYUSYJGVZGBHUDNMXFOQQNWMIETBAEETRTYUFCWRUFCCOBALYHHDOJMFQINANGDBSRFQXSVKSMMBBKOQTMAUQCESBWICXPOOGNIEYZIDCUQWILUALZZCYPJCAZJIVEWHKXVYVXETYNPIRJHPMTABSKRTWDKZL");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::Fluorescein tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.2746053957033865;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GZWLISBDXSIOQNMNCFWSDPYVXTDXAECKYHQVLZELMBYPBTLLISJASKAVOOSIXPREUUWBUJSCNTHTSUQCAVVJIMMPEMGOZNYFSDKEXHHIGTYUZJFLIULPUVQWZQWEYYUOGBEWRMOMBZBLUPDDCAVZIYFEBFCMKNGMRUIRGZWRVVN");
    const char tmp_msg_1[] = {-2, 66, 70, -121, -68, 24, 27, -119, 53, -12, 77, -124, -37, -65, 58, -10, -90, -71, 65, -97, 9, -68, -28, 8, 57, 52, -126, -20, -79, 70, 101, 63, 106, -112, -88, 120, -93, 105, 117, 43, -44, 112, 63, -67, -24, -67, -118, -7, -68, 100, -15, -94, 39, -57, -70, 56, 47, 111, 55, 114, 68, -12};
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
    msg.setTimeStamp(0.10536380673530399);
    msg.setSource(55986U);
    msg.setSourceEntity(30U);
    msg.setDestination(34529U);
    msg.setDestinationEntity(85U);
    msg.req_id = 36017U;
    msg.status = 133U;
    msg.info.assign("VDPEBHYNRTSUFXCYGOEHZIAARVJLSRGXYOXDELLHNWIORJJBKMJUVNJOSQMBTSUOPMTOIWQPZLYATCQXQUDQHGQIMYLWKJRJQFLJURVRZPCDLZGNFASQTGKPEBRTGJEROUTDKHQW");

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
    msg.setTimeStamp(0.5025122413969967);
    msg.setSource(41178U);
    msg.setSourceEntity(49U);
    msg.setDestination(28308U);
    msg.setDestinationEntity(28U);
    msg.req_id = 36747U;
    msg.status = 248U;
    msg.info.assign("PYSRQECOZEYZNVINMRTCXEJSTCPBLLLIUHARGRMFKQZGPRQDPJOAVHBWPDIJMWCVAISQKXOMXTIEWNBKZJTWMRMWVOJNGWJKFJTOSQSFYTBGJBDBUJOXWDERVSNBSVFADCTUGGYHIQPURPOWLZBEECUN");

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
    msg.setTimeStamp(0.38217861996577895);
    msg.setSource(41593U);
    msg.setSourceEntity(157U);
    msg.setDestination(41239U);
    msg.setDestinationEntity(228U);
    msg.req_id = 39406U;
    msg.status = 189U;
    msg.info.assign("EMYKFSJROMWFCEKTAGKFGLSSAHJMBUXYQIYNJMJZLZTURKHVFEWHIL");

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
    msg.setTimeStamp(0.41620657046901754);
    msg.setSource(19314U);
    msg.setSourceEntity(7U);
    msg.setDestination(14799U);
    msg.setDestinationEntity(240U);
    msg.req_id = 31866U;
    msg.destination.assign("MTNROCAJUJFMBZBVIJZMXTQUVDZWLLXMQYPKARFPCTHMQSNYMGWGUPFGIOFVDLYHNSGPD");
    msg.timeout = 0.5703997297598826;
    msg.sms_text.assign("EMUVGHXJEZZVKEHPFQXFNXPPIMLDFSXKUGTFHBPBHQRRPUKNTXWYOTRBMVIWETDJKXWSEWUPMHNJBORAQAJSJZOCXQOAVTSYMRZWKLHAXKLDCTGFPOSVABRHBWAIIDUCCHCQMEIZFIRQBGVVOYYTNMDLDCUCFSQGMOZRSAEDTZWNAPQLDSBUGBSILYNFYVQLEISYCAPLJMULRGUZKVBYPKIOXNYLW");

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
    msg.setTimeStamp(0.8107504754650336);
    msg.setSource(17771U);
    msg.setSourceEntity(108U);
    msg.setDestination(8415U);
    msg.setDestinationEntity(177U);
    msg.req_id = 6236U;
    msg.destination.assign("TEYBFBBUMJKYKQUNVOBRPUCODAHNITKFJHTWLPLQZNIPEMBTA");
    msg.timeout = 0.4934992563337167;
    msg.sms_text.assign("GBTSGYMXBXANYHFWJMZRDKPOUUZCXATHLGBBEWMGTOPAWJXPJQDKOKJLCMYTVDNGLJJVFQFOVAZBQSHUMJZRIGUPIERCROKZFPDXMHQCSKMXDUKLYMSNHHKDWMQHILYOIAQECYTOIFNVRAIFNIWEJBFWOQYRYZRLB");

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
    msg.setTimeStamp(0.6978373568907);
    msg.setSource(9007U);
    msg.setSourceEntity(237U);
    msg.setDestination(52631U);
    msg.setDestinationEntity(147U);
    msg.req_id = 27461U;
    msg.destination.assign("FGYEJATDUMFEZBYSZNXYYCQIMLCNOHWKMGPYMFSWWUREUHQWEERRBKBFFLHMJAJWZEKAHRXUYLXONJGVWSPPTCPXXNPMZIWGDOGDAQBVTRFWBBKFUJETNISLCTSHRVVOIZTSNQSHPDMTCPOOVGTPUUBZXCJUKDXPRFAYQIHQGZH");
    msg.timeout = 0.11460505658456455;
    msg.sms_text.assign("QWHJAACZKDVACJVOUTAZGENMIOHG");

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
    msg.setTimeStamp(0.6603765023840045);
    msg.setSource(5063U);
    msg.setSourceEntity(202U);
    msg.setDestination(49877U);
    msg.setDestinationEntity(189U);
    msg.req_id = 49278U;
    msg.status = 35U;
    msg.info.assign("PCSIPLUMDPBEMCPDIVPMXGYRQEESRZFOJWLDQPFLOOHBEWFPNFJJWMKTXZIOJKROIQSFUQBXYHEERAKGNTFIAOSXMYZQIEBHVCNZ");

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
    msg.setTimeStamp(0.7030487954217827);
    msg.setSource(58119U);
    msg.setSourceEntity(7U);
    msg.setDestination(40374U);
    msg.setDestinationEntity(170U);
    msg.req_id = 19496U;
    msg.status = 164U;
    msg.info.assign("ZTEJGROHBVAIYICCQSUAEWHTUONKQTTLUUFHZGRNTJVUW");

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
    msg.setTimeStamp(0.538885320297756);
    msg.setSource(33868U);
    msg.setSourceEntity(243U);
    msg.setDestination(23781U);
    msg.setDestinationEntity(180U);
    msg.req_id = 32299U;
    msg.status = 107U;
    msg.info.assign("OQGWLFPNRGTGBDRLIHUCQJFOMJIEGWBQIZAPJOIHUKWEVPSVTRFYHNLMXERTFEAAXGDNYFUE");

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
    msg.setTimeStamp(0.897344333738694);
    msg.setSource(30957U);
    msg.setSourceEntity(180U);
    msg.setDestination(60849U);
    msg.setDestinationEntity(230U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.3668022216375607);
    msg.setSource(37307U);
    msg.setSourceEntity(15U);
    msg.setDestination(10624U);
    msg.setDestinationEntity(78U);
    msg.state = 85U;

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
    msg.setTimeStamp(0.005151294202602519);
    msg.setSource(53268U);
    msg.setSourceEntity(73U);
    msg.setDestination(35082U);
    msg.setDestinationEntity(2U);
    msg.state = 253U;

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
    msg.setTimeStamp(0.2259044608715115);
    msg.setSource(33460U);
    msg.setSourceEntity(37U);
    msg.setDestination(32689U);
    msg.setDestinationEntity(8U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.4417010223265021);
    msg.setSource(49536U);
    msg.setSourceEntity(235U);
    msg.setDestination(47114U);
    msg.setDestinationEntity(2U);
    msg.state = 220U;

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
    msg.setTimeStamp(0.18012919307069264);
    msg.setSource(19543U);
    msg.setSourceEntity(32U);
    msg.setDestination(8031U);
    msg.setDestinationEntity(94U);
    msg.state = 48U;

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
    msg.setTimeStamp(0.14406011828605347);
    msg.setSource(55627U);
    msg.setSourceEntity(250U);
    msg.setDestination(4885U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.8630671245399251);
    msg.setSource(56247U);
    msg.setSourceEntity(205U);
    msg.setDestination(4296U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.9441351470555128);
    msg.setSource(48649U);
    msg.setSourceEntity(49U);
    msg.setDestination(20065U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.2910794309464487);
    msg.setSource(51946U);
    msg.setSourceEntity(37U);
    msg.setDestination(1749U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("MTHFKZWOODWWJTCGEKNTMBLKPXXFCNDQIFTRNXADBOEIXVBDHUOAYDVGFYSFWMIWHBGVGLEAYNFBZFPRNJBTYHNQAKLCMATBGKZHREOXZCADEUMCCVXMBSYODKHQTVPKQRJEELORGGOFXSSUKUURRLNIVDLTZPHJIKVWYHBPKPPLZTSSGVAORJOYYGCQUJJJDIMLPICAZPHQUWJQ");
    msg.description.assign("QCVEOUIEFRLFZBZJTAXGTXLDCYCMQWXAQLIAOQHEIBDSXKRPWNMQPOZGALBWNNKQGGYIBTNWXNPYSYLTXAPURAKEPROHZAUSCRGCCCSJXUEJOWMGBPOKOSMCRRWGFVIHSLVIDQWFCCUWXAOHSNEAIVWOUSLPXGALTIMYTTTNRFH");
    msg.vnamespace.assign("ACCYJYAIFDFJGNOUNRYOAKGOSJWWFWVIMEXYOGUFN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KTKBXDOHRLGDJILWNBJRLBZAEJOKIOOSPNGXCAQNPKEPWCSZAHFIKHWRWHHOKSAGAZAHXYNVYNSTPZQYNOHURWLDZFNMUWYCTLLWHRZXJGTVAXSZFIGJKVCUMQDKCYDEUQIWKYGGPZPIDEFXSXSOGVNRYQCDNVCIFRWBMTVEFXIUJLUCXJMBGSBMVCUFFBJAGEHMHUQRVUIJPZTTEOPESYLMKAIOATUVEQQRMBOYNPPQCMJBYMDZ");
    tmp_msg_0.value.assign("AUVDHXMBKIYZEWUVNSAVFJPBRBLETFDHEMJFYSLQWYSKBTACLLJJMPBDXESKKPQOCMEQKIGNEZGFLLQPXXCRWNVSVONZDRCHSNNCNGJIVXGTWQJGCIATCMGSYJRJPKDNKVQUYEZSQCTHNUTENDWOAHTGAMSHOHO");
    tmp_msg_0.type = 6U;
    tmp_msg_0.access = 177U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AYIMNIOHHGMMFHQVURAKFXOEFSNAKCOLSKNXNWYXUJUJZCBYAJBPRRFQIVCWDFVZAUUQCGDWLZHFWEPOLTOCXNTNXXXRRP");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ARLKAMWVQTSFYTZRCLMJGSQGZOTCMD");
    IMC::ScheduledGoto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.arrival_time = 0.08262982224760296;
    tmp_tmp_msg_1_0.lat = 0.5762411309393716;
    tmp_tmp_msg_1_0.lon = 0.09890454179410035;
    tmp_tmp_msg_1_0.z = 0.08505746719624985;
    tmp_tmp_msg_1_0.z_units = 32U;
    tmp_tmp_msg_1_0.travel_z = 0.347771799025555;
    tmp_tmp_msg_1_0.travel_z_units = 42U;
    tmp_tmp_msg_1_0.delayed = 134U;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Conductivity tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.2151523040041382;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::VtolState tmp_msg_2;
    tmp_msg_2.state = 92U;
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
    msg.setTimeStamp(0.43529294652136474);
    msg.setSource(44013U);
    msg.setSourceEntity(146U);
    msg.setDestination(27522U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("EQSEYTATIXBQUHMOCM");
    msg.description.assign("VUDODUJXJVLUBRNZSFDVMYXTILYAGUSJBCSWSZHGZGITGVKNEVGKLBEREJPWGEOOFFPDUTAMOVYFNKINMTSCIWSFQXZGRQYQDZKUNTJSXXWNPXZEHXDNYXEUQOICSYLKSRIGCDMRIIBQLWHYHJKOZ");
    msg.vnamespace.assign("OJMWHFDRLQHWAPGERVYUROXOAZRTTGJRGFUZGUFWASYJGWYCBWLSMMWERITXNQBSTBYTEEPVQYUEUDIA");
    msg.start_man_id.assign("UOCWWXJOSKGJNVWLBPIMXBICJDAUVMZQYIJTOOBBFREUUJDDONZMUJBFZNNYEVGDZVYQIUTXYAKRPTQJEJLVFYRPSPOROQAILLKIOLLXMQLKHDFSAIRIBMZZVKTKBCARDPEUFXFKXWESWGCFQTMJXIVHMSAEPCHCVCPWZEJMUXDPHLQAQZGUZSHGTBWYTNRONTRAMQPVGWWXIHGLAWRSZYPOHEESKEDGCTXDCBFDQNY");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("JXGFGAWHUNZDXIQCQTNWMWBHJEKKBPDDTSYYLOLLEESHBCGPWZTVIHEUOXMVORKGOVVXNPCWFTLZIQN");
    tmp_msg_0.dest_man.assign("QCERMJSOCKMDHZIXNMLGIJAGURBQQTKNDRCKXMIIUJWJXFTUSYISSFKQAGDNLZBLWYGULLVBPRDXMNGEGNGKEUUZKHFIXGIDGHPWEWVSOPHDOPKXUCCAVKEYOXTCLFMQDBFJZTNATFUAGPTIECPEZNJQBMSURBMSLQAAVIXWXZVLQCYVMZJJRSIJMYZEYWRB");
    tmp_msg_0.conditions.assign("SVYCNLVEOJFIHGPKMCBOMFUDRFTAWVWNNIEDSWOZYMWRQQFEKGFGEYEFQUSCAKPYOTXFTVQUXIYI");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8951244035147455;
    tmp_tmp_msg_0_0.lon = 0.8153886886419248;
    tmp_tmp_msg_0_0.z = 0.6780903035132537;
    tmp_tmp_msg_0_0.z_units = 136U;
    tmp_tmp_msg_0_0.speed = 0.9081978913518033;
    tmp_tmp_msg_0_0.speed_units = 145U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vid = 12886U;
    tmp_tmp_tmp_msg_0_0_0.off_x = 0.8965896538554773;
    tmp_tmp_tmp_msg_0_0_0.off_y = 0.7218799652011137;
    tmp_tmp_tmp_msg_0_0_0.off_z = 0.7623691916808432;
    tmp_tmp_msg_0_0.participants.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_time = 0.6537432263453112;
    tmp_tmp_msg_0_0.custom.assign("MVGNMECWNPBIQQIKHPRHOYPJDDANDNVSEMRLCYDRAYLFRKBQDNIJHFTXGBXOWLEIVYGCZMSYJYDTZHNOYHACYCXAUWWTVGQIRWVTMGMKFZSKUPGZWCOGXSIFVYWZOPMJLOBAFQHNZLTXSDTLEBQGKBJHCKCWSRIUPEBUCRPHXMTFZAWASJELSBEUFXWJQRJHPQOIEMUSDPIULOFQALNYGKGVRBREOKDDVNPSVFEBZTAVXAUU");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::UamRxRange tmp_msg_1;
    tmp_msg_1.seq = 52855U;
    tmp_msg_1.sys.assign("SNXWUNTAOMLMRUWKGSRKQPEHORMPNFBIZUAMHDJQZTNFJKCHITBCFDUKLDDQYTFBVKBDZFDJSRLPYOHRBIHAHFTZHOGQGVJLXRCPGYNNMTRYUSMJHCNSXNZVWTWXAS");
    tmp_msg_1.value = 0.0681688169896203;
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
    msg.setTimeStamp(0.9332150319740464);
    msg.setSource(24092U);
    msg.setSourceEntity(229U);
    msg.setDestination(50890U);
    msg.setDestinationEntity(245U);
    msg.plan_id.assign("WJEQSJRYYUCULONMTUAUMAYIVHWJNAVQXVTKAYOPMWBGMGNEDDCBZIVCRUKLCXUONUVHSHATOUFPALNXFOSLEQNGBPKSXZGOUYZRHGZEKWIBSBZVTXFMKFWYGRTPMNATYZVIHITIFGVBFJCKFKLBVGQJJJDHAOMPQDOBDQRMOAIXPPWHENDWBXRLKBREOGIWCQWEPMFJSHIQZDFPLYEXSSHRWYTLSGCJXTRTHSNDCKYCLVNCD");
    msg.description.assign("YVJOAKSPXUQIWKAGCDKOVHNPSEVIHQWLU");
    msg.vnamespace.assign("YVGBUZJZSZALTMBPPKDKDXMYJVRGACLFUDEZGIZPSHHZVYKWYUFWVOLPGGXDHOWHQQLCTARIUBNLQOZLQAODDRFHEIJTNDWNMXXNBCOHXKKBWJRWRRSUNSQFLEMRSJCSTRCFEAMHGMCDKKSVDIVPOQAXUIIOYNNSQBBNROXCQXZTJFSAQVCVKUYLQEXYJUKJBCWZJIFAYGFPJUITHHOPEYNINIMBGLGAWMPEA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YGUEPJPIDCKUEGUNIUQNTNERETRIBRJBSRCHZAQHHWBJFVFKZIIBAASMYKPBYQLHNZOL");
    tmp_msg_0.value.assign("YYTCFIDMEIENLDIPSESQKLQZWGGAICBDCGXBPBMVFDLUJJTRPRH");
    tmp_msg_0.type = 196U;
    tmp_msg_0.access = 113U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CNQCZSDSJEVVYHODBQATVNWRCQEFVYPUESQNDTEAMLYVJUDPRWNKYBXTZXLMXPHIFGTPAANFLXIWDZKVBVITMFWUNOMOKDSBCEXBWHGNOLQVMRXIJSJIOCFIJXGAXCTMHZLLHQHGSBILWUXINSRBJPRSOQOWAPRCWKZPEGDKJGEJITTRYMWLRUFWQASPGCIMZUDUPNZLMVCMVZHRXREBHHZKNJCE");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("FQQPZRUVNNOZZBXTQJWMLNCAICUJCZVDESEQRRNVMDHEFMHSGPFFDPPVRMDACOOAGLSGJHOUZTYXNFLSXDZZHGJTJIROIWKOAYOLGBCFTNFBPXRPRASDSTYHIIQNKEXCBEKSMHXRYYUYFGAYSDJQWZELWVWZFGHLOVKLTQQJKAFBJBPPIXMWEGMLELCJDPLKUKDDVUQCTCUHVHNCNIXJMRXYVUSAG");
    tmp_msg_1.dest_man.assign("IHLCYMDFUZJVKSVBKQWQHRULDCFNYWIAVEYVSLGCBFAGYQAGEVLMDDPRBZZPHCIQRYKHYNWOMAMOUZOWHMXPJBGSIJOGUODYTUSQ");
    tmp_msg_1.conditions.assign("GOIFQMAKFCMRTDTUEBRBUTUNRYDIQPFSAZABFLPKKCFXRCYLLPPUCQQPTVGUQKZEAWVXQIAECWKPUIBPPIXEMWNLYVNSYVMVYWOYOJPJNLFJSKYMKLAOOJVLXIIMNBWJWHGSXCNLVVHNXDRSOURSEKQDJAWMAJGTJAMCNINGO");
    msg.transitions.push_back(tmp_msg_1);
    IMC::SessionKeepAlive tmp_msg_2;
    tmp_msg_2.sessid = 1350257960U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::RegisterManeuver tmp_msg_3;
    tmp_msg_3.mid = 31379U;
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
    msg.setTimeStamp(0.4207531707432297);
    msg.setSource(29077U);
    msg.setSourceEntity(216U);
    msg.setDestination(35088U);
    msg.setDestinationEntity(109U);
    msg.maneuver_id.assign("ZHVJNRPNXBHHMEOIGIBALHQAOJSEXTTQCXUOFRQVULSFWKCAOYGKGPW");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("ROSFUTDLYUJXFBTYJVHPWOYRAMGPBXRZAHGQEJYPGZVKHZUGCFGJSIWOSRXXWCGCBILVQSFSESVETXDAERUTUKLDNEWBWKPLCJMUKXMPMKIENASKUXZZKDEDCHPZIYUNTQWXJVUPHKOWFZOB");
    tmp_msg_0.max_speed = 0.3204908032175031;
    tmp_msg_0.speed_units = 199U;
    tmp_msg_0.lat = 0.1571174873219202;
    tmp_msg_0.lon = 0.9134568101838573;
    tmp_msg_0.z = 0.3500431869157049;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.custom.assign("EJQVMGRYPPNQCIQGVMNDNFKEGMUCDPAILFSPJOCSKHJOCHWZROFXMXQZNCOUVMQGQTVPEHUBV");
    msg.data.set(tmp_msg_0);
    IMC::VelocityDelta tmp_msg_1;
    tmp_msg_1.time = 0.8162128053936861;
    tmp_msg_1.x = 0.5038339237371219;
    tmp_msg_1.y = 0.06590148028559717;
    tmp_msg_1.z = 0.10146672621821318;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.23105403474459751);
    msg.setSource(41025U);
    msg.setSourceEntity(115U);
    msg.setDestination(23299U);
    msg.setDestinationEntity(42U);
    msg.maneuver_id.assign("ROHDSNNMQFBNFEQGKRJVCVIGPWYCYWSYHLWXRWXBMYJRKSLAQFNAUYDYMIGHZOOKHGBTAVZVAUYJRLTALQQQPKKLVCFPGEHCNPL");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 46145U;
    tmp_msg_0.lat = 0.018757270504212498;
    tmp_msg_0.lon = 0.6731837994193801;
    tmp_msg_0.z = 0.2652679750785072;
    tmp_msg_0.z_units = 12U;
    tmp_msg_0.speed = 0.5065873531171909;
    tmp_msg_0.speed_units = 172U;
    tmp_msg_0.roll = 0.8791588510844428;
    tmp_msg_0.pitch = 0.14664490468819635;
    tmp_msg_0.yaw = 0.3971975291429116;
    tmp_msg_0.custom.assign("XSIBVXTDUAUTEGMEJXPFBTBIVIJLMYNVWLCZZBRCZLYXYCGPIACGV");
    msg.data.set(tmp_msg_0);
    IMC::SoiWaypoint tmp_msg_1;
    tmp_msg_1.lat = 0.8091519832815685;
    tmp_msg_1.lon = 0.45197643013984035;
    tmp_msg_1.eta = 2101268798U;
    tmp_msg_1.duration = 50036U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::UsblAnglesExtended tmp_msg_2;
    tmp_msg_2.target.assign("TJUIDBOASUYZJRNGZMRENGNYTRBHMPRLEJXZJGNRVHCTZPEONIIGFZELZAURKDPGSMYJBVYQDXXCUKWWSRVNBFTYXDPVYQWSWHSTQOQUCTEWEBYALOXDBFHFUSPNAJPSUBTEOKVAOVMHNWONCKZXNIEKMIWHYYLPOEQDIBK");
    tmp_msg_2.lbearing = 0.4677439866173001;
    tmp_msg_2.lelevation = 0.13138391422994744;
    tmp_msg_2.bearing = 0.7772150440722798;
    tmp_msg_2.elevation = 0.4435196695782033;
    tmp_msg_2.phi = 0.34977791604902386;
    tmp_msg_2.theta = 0.9786024299877417;
    tmp_msg_2.psi = 0.5497016534210679;
    tmp_msg_2.accuracy = 0.20122753795101933;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.3258874295050189);
    msg.setSource(32027U);
    msg.setSourceEntity(17U);
    msg.setDestination(17402U);
    msg.setDestinationEntity(196U);
    msg.maneuver_id.assign("ATAVQFXXKOMIXMEMXWGVYYEUCPFHDKTDILYKZVBNOMCCRFULTXPZKGBBYIOTHGJCQBJZZLRYCHNCWGGBNRUGXKPNBRDMCGUDYLULZIVNFWEJVPSMSSZIAKQMTLDEUWFEPHAXWWPQEOANBGSVVJCSOWPDQRDJTMKMJZLQKFXLOFRNUSKFWRJKNAWVPHWSTXHPITIINNHQHAJSOBBQRALVQPYDTELZZSTHROGOEIUYRUEYJCMQS");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7553010520917458;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 4117U;
    tmp_msg_0.custom.assign("ZBORVHDWSDWTEBACQKUAWAFQGNLXXUNSQYUWLHKMYJBMGHRWLAPYGPVVNUICCTOLAUUZOBBEQDVGKOYVJUNEFRQPBFTSBOXSFHMYAJLKARGMLOUCIZIL");
    msg.data.set(tmp_msg_0);
    IMC::Heartbeat tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Conductivity tmp_msg_2;
    tmp_msg_2.value = 0.15594529951478975;
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
    msg.setTimeStamp(0.07412125839025652);
    msg.setSource(36438U);
    msg.setSourceEntity(150U);
    msg.setDestination(16446U);
    msg.setDestinationEntity(176U);
    msg.source_man.assign("BYPGUTIEUALQMLEEAJWAZLYZTNMDMZIBWHHSYDDJSMVGFEOZFMEKISXIKUHTYQVRFPIKVYLRVLYRMXHONDYWOYLJFLUTDBPFSTBGKNSQXSGNKFHLGBWAHIMAUCXSNZSPSGGPUOCMBNHCWJQKDIWXRIFWMFJUJTRDWOYDKXEJICQEZDRXCXRTQZUZVTOQOXUVNVHQLHAEKOZCWNGWVEY");
    msg.dest_man.assign("IFBZUCNTVCWGLW");
    msg.conditions.assign("UIHXMCJPDEIOCJGADZVRZFCZNTDXSDJOVPAWFOYFIHELENMTUQRXODTMNDSPJHCGQUUZPYXPWYFHCQIIRRUFGJCEWHMFIMVWMPKWTXVNQQKPAGTYRLOVFTQYDFHKSYCRTPVTKBCOTYIAJZNVVLTHALXWIKIUQXSVBKYLPZSRJYUOMNJBAGKASEQUWNKMXSBAZFHYEIERGZZNGXOFHMWAURPEDCOZRBL");
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 50336U;
    tmp_msg_0.type = 250U;
    tmp_msg_0.tow = 3922872243U;
    tmp_msg_0.base_lat = 0.45855497237651077;
    tmp_msg_0.base_lon = 0.012590709328015537;
    tmp_msg_0.base_height = 0.8189805157233057;
    tmp_msg_0.n = 0.5140647162157742;
    tmp_msg_0.e = 0.7737086092892861;
    tmp_msg_0.d = 0.11692954875533956;
    tmp_msg_0.v_n = 0.8806311818826696;
    tmp_msg_0.v_e = 0.939866494460014;
    tmp_msg_0.v_d = 0.8507484475044633;
    tmp_msg_0.satellites = 153U;
    tmp_msg_0.iar_hyp = 23521U;
    tmp_msg_0.iar_ratio = 0.17474568482336061;
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
    msg.setTimeStamp(0.3936140146554663);
    msg.setSource(40235U);
    msg.setSourceEntity(54U);
    msg.setDestination(45959U);
    msg.setDestinationEntity(201U);
    msg.source_man.assign("HJSYYMXWEXXVXHIWLQTDVZEILISOMKFSVBKQFBSARQQJP");
    msg.dest_man.assign("ZFZEROAQYBVNMLR");
    msg.conditions.assign("RNEAGMYCKD");
    IMC::AcousticMessage tmp_msg_0;
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 73U;
    tmp_tmp_msg_0_0.angle = 0.8791087089221062;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.35421778970599993);
    msg.setSource(34396U);
    msg.setSourceEntity(68U);
    msg.setDestination(5030U);
    msg.setDestinationEntity(150U);
    msg.source_man.assign("KAJMUKWQPQKVFLDKHHEIMBYXDWPZYMCAPGBMSAETNDFMQCFIYCUSEMBAYNNQHVVRNUXPVJCTJFVZFTQNKYZGLLRBXQSJJJVOGMSFHPGBIRKLLEWRUAOUZWATDJCIRWGMLAM");
    msg.dest_man.assign("GKPQZJJMLVCYHCRIEVWAJYETRNVYNYKRNPLCDRJENIMXFQMHWCHULEDXAFUGLGLHTNZMDLKDIMBVLBQ");
    msg.conditions.assign("PAQYTTULYCDLPQBCJMCMFVOG");

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
    msg.setTimeStamp(0.5002838382623335);
    msg.setSource(18161U);
    msg.setSourceEntity(170U);
    msg.setDestination(14565U);
    msg.setDestinationEntity(79U);
    msg.command = 53U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WGKXNVHQUMUQIDBFUKRVHZQRDFTXNELVNPFDAQOSLVSKWHDDSXJPRDVWFYMPORITFINRGUIGHXFHDGJQYCIKALXMPOCEAJSJFZXGNHAOCSWGYVWWCZZBMPM");
    tmp_msg_0.description.assign("IHJNFPDDDPMOORZRSYHLIGPSCRDACWDSGMFMAIQMLQPTRXVFLJTGBKOXAYZCGLBXBILNVKTQV");
    tmp_msg_0.vnamespace.assign("ACSIJWENVNCBYTSJUKOJPNLFYFOSYOURTAGVTKXCKXLXOSABHFNVBTRSKXDQUCJMRULWZBHNPZNYFGPAIHBRSKIHGCWMVBIFLWFEPHAKXUIJZTXJNZFMYYYDZDCPUKYAAJEOTTIMWLEMBRTLVGADEYIQDWSLNIGPIRZYKMQVX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OOTZAPKBKXXZCYOCSBLHUGTNEGNOZFVXOSUTRBGJDJBLDCYCLVOIOQRZDLTZYUOHMIHAITXSWMCJAURWWQWTMKDNIEAK");
    tmp_tmp_msg_0_0.value.assign("UFFLNUWOCTVLGCNUBVKMNVOBQFXWCKMWPEEQYGXHGDIGGQULZVHWYXADPXIQTCKKBHXKJESJXPZNZTSOQNXEMHMVMYTWCTACVTNJUZDFUZHDIDMRGDOFKBNIBKONIMGTGRSBLJBDZRRUHWZUOFSREBSIKQFOALFPZZRWDWZYXUTMKVLVIYLDISOCLJNYPWRPJMTCIP");
    tmp_tmp_msg_0_0.type = 56U;
    tmp_tmp_msg_0_0.access = 245U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QZJVRUUTCPQMKUBSPWMAEXMQKSFZTNBJFODVPTHXYCTAAFAQHFDPPXNRRDGLOTJIFRUCGZAYRKARWLVWWHEIEIPWAXVWSQQGZDNVBGOMYEBNLTXRSWEPSSELOJMC");
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
    msg.setTimeStamp(0.4381761810324798);
    msg.setSource(5564U);
    msg.setSourceEntity(203U);
    msg.setDestination(8345U);
    msg.setDestinationEntity(253U);
    msg.command = 166U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JJRIXNXIZWKHDGOGJGWFCYUDDPMNFITCQNLYYXFGYQNXSSOVAUTCKIBZZVBLLCREWJAIPUTKQAEILKFMBBXEYFKOVYJBW");
    tmp_msg_0.description.assign("CPYLZBQVZKVZHTNIAKUJGWYRMQRFVAWLTNKHOMSSUMHVFFWFPKZHDSXDXLGPBFFXZRLLXKBQJTOIUXAJEEQCRPYITUSCJCLLRMPOUGGTJCBQONPGPOYAIWKGTRBRJKJIQGDWHONMRMEE");
    tmp_msg_0.vnamespace.assign("PDMGFZEYBTDXLCCSYASZYXZBWLTTNNVJPXJCLNWEGAYLOXMNACJKRAGRSBYURSJKZUEHFQUSZNMJROMPSQICMUHBTPH");
    tmp_msg_0.start_man_id.assign("YHIKQAGXHHRLOOWCUBDTRZTZDVYGCWXZOQRQNPWJFZALRALOQSQDUAZFRTHETHTGDFGRLCSIVAEMFMNYVRBQITUKSEGMPQIVMEFXEA");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("RYHQJQBQSLPPVVTCEPMBIFMDIBSFNFQRPYNRSLDIDOZTFHTZDOAZWFKWGIWLSJXUNOGN");
    tmp_tmp_msg_0_0.dest_man.assign("FBJCRYJGDMCEXWQLAULQAYWRHCELRBTTELQDIJBKBBYWFOBZVXPBPNZWAOOSEIAALAMIBKLHRM");
    tmp_tmp_msg_0_0.conditions.assign("DIJJZETCSVXYNZIEACQLMNECTHIDOLUFOFJXDSAWIRQLHNYNZIRAKYPLKHQVMMDCVVINYATBRUSILLRIZCJUVOHOUHEXSHCMVKSAEYQZUQDHFJF");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7189383274361776);
    msg.setSource(48424U);
    msg.setSourceEntity(51U);
    msg.setDestination(19345U);
    msg.setDestinationEntity(33U);
    msg.command = 31U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FHRHBVYDQLJETTSVSTFIFTQPJNQPKGVZORNTMOIQNBGDOLYFRIOPTOGBFBXIQXCPCEUKUYOECFWADIXUGSBZAIYSKHDJNDMHGVEBWIOANPXRCZOHEUH");
    tmp_msg_0.description.assign("XNOIDWYKIMZLOBITGSJFMMNCBRMWWLYJTRSEHLJAGYCNZNDQXEBJPIVXWTHMIAFGGIAUMZANSWQDWXZPHNBTBFCCREKTCPRRZJAGEVRVUXLFHDUYQALQEZIEEWBIGEYAAW");
    tmp_msg_0.vnamespace.assign("JQZQPKDIRHACNAXNXAGRBVELGMMSONLLRUWGCEQULHITVXYOKHTVYMMZFVUMEIJZZLKLNDJSEALYPLYGUHARTFWHNFUOEPZXCISA");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HEGABCMWVHEALOTKJIPJYOBTNMFNLEERBDQTAZAZKERFUUUDIXRUIOPACUZHOKWNBTAPDOZBTVSKYXNXDXDJXDKWV");
    tmp_tmp_msg_0_0.value.assign("MQTBARDZDOPUFNVUIPOQXFIWEHGTEKJLSNUVVAHPFJGWRRVBISYBMSQWCAHDQPAHZASAPUJQYDVTSURWIZLCRYGIXJPIUHZWPIKVJUNRT");
    tmp_tmp_msg_0_0.type = 250U;
    tmp_tmp_msg_0_0.access = 104U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BAHIKRVSTAGTVLMRJEBOISDEJJUSKIQZWKBGKRZBPVWJHIWNUQQWAEDCMFZEVPEWSKHJMDPYERGFTNUYDVHLYHNGDFZIOTOSPRQZUBSXDXHRRVSIUUXYKNZPXPTDLSGOVFLQLWYDBLUITPJGCETHCPVOVKJOXZYOHYXAMYKEUDXMQNLBBCQZBKFQNEMRGAFOLNIVCIZMCOOCCTAWHFGMZMFRPWGUXJQMFEQNTPHWAGJLX");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KZTGDAKYTOQRUPCIEWMSMIQLLLQOVYCVXUIUPMDEPTOZKXYBKXFOEPZCANFYXJZFDZHFPTPRWHLTYZTPLCMBNUGAIHKSELRQNSWFKICVVWCXMELEGAWHXWV");
    IMC::Goto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 6328U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.25686087404698443;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.3407035444037837;
    tmp_tmp_tmp_msg_0_1_0.z = 0.433582132840605;
    tmp_tmp_tmp_msg_0_1_0.z_units = 51U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.44530014760476155;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 236U;
    tmp_tmp_tmp_msg_0_1_0.roll = 0.003069528841472491;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.8186081595536909;
    tmp_tmp_tmp_msg_0_1_0.yaw = 0.1293723827269314;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("YIIBEHLQRUWPSUXIDRHMDRJYTSGJUJPTPXAUOSTNKCXBEEOXLLQTWQMBMRVRNVUGANMKSOLNUCUXBINZZIEPXSKSEPQMMLCYGWFFUYCXAOTNOWKCVQWFEUXOCTNGLUQXLHAQADBVWDDSKKKPWBIFREZIJMVNEFVGARYOYXPATBVZPDFTHYWDDRBGZZMHFNBYMOVZC");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::FollowSystem tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.system = 57473U;
    tmp_tmp_tmp_msg_0_1_1.duration = 11920U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.8304104473877713;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 213U;
    tmp_tmp_tmp_msg_0_1_1.x = 0.6553035853361351;
    tmp_tmp_tmp_msg_0_1_1.y = 0.245790669230059;
    tmp_tmp_tmp_msg_0_1_1.z = 0.974545867362058;
    tmp_tmp_tmp_msg_0_1_1.z_units = 126U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("MECQGPFVNBZKMGRWMCECAOYNISDPSVDEAPDXAMZA");
    tmp_tmp_msg_0_2.dest_man.assign("DMGVLIXYNMMYZRKFZSWBTMHUQQEAXJWAJNTG");
    tmp_tmp_msg_0_2.conditions.assign("ZUNZQQUEGXLPTMKAERBIMXJWHQLXHOKTIHWNQGSAAIOOBFRHVVIMXVVDOMBBFOEUGDGGYZBDEYRXYQYZFHULDITYFITBZDVAEWSJCRLQHBNIJATCUD");
    IMC::CameraZoom tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.id = 144U;
    tmp_tmp_tmp_msg_0_2_0.zoom = 251U;
    tmp_tmp_tmp_msg_0_2_0.action = 73U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::ReportedState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.313985878692558;
    tmp_tmp_msg_0_3.lon = 0.3806762786501279;
    tmp_tmp_msg_0_3.depth = 0.700132603395733;
    tmp_tmp_msg_0_3.roll = 0.249799481842237;
    tmp_tmp_msg_0_3.pitch = 0.4589605241997504;
    tmp_tmp_msg_0_3.yaw = 0.07652733065655304;
    tmp_tmp_msg_0_3.rcp_time = 0.44721557088504704;
    tmp_tmp_msg_0_3.sid.assign("XSCXJWDTOLUCEGHLZONBNJPKATVQDYFKPQQCPKRSOGGGCLWJCGZTTKBCITIUNMUWYJOFMQQVYXWYEZFPRVNHJOWWQYKRAHHZQURQALIASTUBXYZVJORFJQSOUDFMVNKZXDTBUSABMBHKEERPNDZURIWX");
    tmp_tmp_msg_0_3.s_type = 33U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::EulerAngles tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.time = 0.6293903652871062;
    tmp_tmp_msg_0_4.phi = 0.39119347061099163;
    tmp_tmp_msg_0_4.theta = 0.4458028900104878;
    tmp_tmp_msg_0_4.psi = 0.833827982092053;
    tmp_tmp_msg_0_4.psi_magnetic = 0.8075767254471902;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.5878470743046909);
    msg.setSource(58732U);
    msg.setSourceEntity(3U);
    msg.setDestination(51569U);
    msg.setDestinationEntity(2U);
    msg.state = 69U;
    msg.plan_id.assign("WGDNHVGILIFPZRUXIZZUNVLSWTNIAKORXKUWHESQKFRIXTVETOAJZYDJYJKGTQLXCKPWQRCXGONWKGOLOSGZIFNUNPYMDUQDCHLRCZBFIOEXAVHYVKNCRPGMJOXQCB");
    msg.comm_level = 61U;

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
    msg.setTimeStamp(0.32916156005543684);
    msg.setSource(45240U);
    msg.setSourceEntity(69U);
    msg.setDestination(25330U);
    msg.setDestinationEntity(49U);
    msg.state = 161U;
    msg.plan_id.assign("AQFUVHHRKWJCNTZZQN");
    msg.comm_level = 5U;

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
    msg.setTimeStamp(0.00902804673544011);
    msg.setSource(1063U);
    msg.setSourceEntity(44U);
    msg.setDestination(52107U);
    msg.setDestinationEntity(219U);
    msg.state = 197U;
    msg.plan_id.assign("JEUBCOWHQALOZBJJXZZTPEYMTTAXXOVPCTVAHYZZYPRNFNZMGJXIZYGBIENMWHCBWYANDCUSONMBUVSFICHXUKFEATTLVYQEFQGXEGRWLGKYIAPMEFJAUHLMICDQHBVLUIBFSDBTYKRTZIRSWQSVXRKXDFKPPCQWKJSJAQQLNGROC");
    msg.comm_level = 219U;

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
    msg.setTimeStamp(0.788633704119562);
    msg.setSource(15759U);
    msg.setSourceEntity(211U);
    msg.setDestination(24487U);
    msg.setDestinationEntity(145U);
    msg.type = 199U;
    msg.op = 138U;
    msg.request_id = 1258U;
    msg.plan_id.assign("CDUIPVZGOGHGUZLLYNHNOWUIJI");
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.16992245899361835;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TJSJPENKRIISQHYXZHVBMVWNIGTZUBIZTMUHBONFQLFQTMUZQNJCAOEROFVOUPLYCUAPQ");

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
    msg.setTimeStamp(0.25645061822252824);
    msg.setSource(12404U);
    msg.setSourceEntity(194U);
    msg.setDestination(42195U);
    msg.setDestinationEntity(67U);
    msg.type = 151U;
    msg.op = 207U;
    msg.request_id = 25270U;
    msg.plan_id.assign("XSKSUSJFXLNYHANSCLFLWZCCNVDMKDCNDHEUOBPLXHRSBHAJLUXJLHXOSRPFYNXVTAQWKWFWTIPKYNXGPIKLZRMFBJPUUECQKPBPZNTIAZWIGQCGDRHWOCDDWIEGWPGITDFEVODPUIMFQJTCMJUSYSYFBOAUMRVWE");
    IMC::TelemetryMsg tmp_msg_0;
    tmp_msg_0.type = 84U;
    tmp_msg_0.req_id = 2387426311U;
    tmp_msg_0.ttl = 37879U;
    tmp_msg_0.code = 29U;
    tmp_msg_0.destination.assign("IOXZKVGQTBDZGXBYFDX");
    tmp_msg_0.source.assign("MDWAQGRUCLYGCXBVSVDLKGHWZOCHHCHTOFXTQXWKYNPWICWXAUZJHQKEDCWLFWBYQRLNEXJMZSKONSPQVZJCNJUBOPMDEFEITCGGRUILANKVZVROXKAWJMLSTSLJLBSQVXMOPYDAABFAYSZHQIZIPLUIOOZGJEPDKNUYQXMNNFBQEWYRDMPEANIOGUBYXNCSABBJIIGVPTTEVJYRLPIKUJZRTKPBHGS");
    tmp_msg_0.acknowledge = 137U;
    tmp_msg_0.status = 130U;
    const char tmp_tmp_msg_0_0[] = {72, -52, 98, -107, 45, -88, -69, 4, 31, 84, 43, 16, -39, 79, -117, -121, 9, -27, -61, -113, -110, 103, 10, -109, 8, -97, -17, 72, 9, -58, -15, -45, -96, 49, 13, 4, -68, -4, -108, -115, -4, -50, -41, -76, 76};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ALAEZJSCLBZKNRSTWMHRXMDCOINJVKWTJRDA");

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
    msg.setTimeStamp(0.32367415962121737);
    msg.setSource(23534U);
    msg.setSourceEntity(147U);
    msg.setDestination(43305U);
    msg.setDestinationEntity(187U);
    msg.type = 3U;
    msg.op = 38U;
    msg.request_id = 28808U;
    msg.plan_id.assign("YTGWLSMCJVLFZQQVRDXMLWVXEPSGCUXQIVMXMRDTAIIZUNVPNBZDSUDLEMGESKHFAPZAKQCQWCVFCKWSXISBWJALJAPHFPQGDNGENRMWGRJAJZKUMOFFATOPHZJJZBMRWOZWJIOCOAKYORMTCITGEBPKKHQOYOQJUNGZSDTIYTEEPIGVPYSHHDFOFHERYNUXOHVBLSDCWSUPLRRBFQJDDYVZNXMUFT");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 71U;
    tmp_msg_0.frequency = 1744559016U;
    tmp_msg_0.min_range = 55825U;
    tmp_msg_0.max_range = 46740U;
    tmp_msg_0.bits_per_point = 116U;
    tmp_msg_0.scale_factor = 0.9830436906904146;
    const char tmp_tmp_msg_0_0[] = {118, -79, -9, 102, -105, 73, -86, -113, -80, -48, -110, 20, 68, 0, 120, -106, -119, 34, 88, 63, -91, -50, 124, -16, 37, -8, -102, -7, 75, -77, -79, -23, 84, 99, -92, 100, -78, -84, -1, -10, -19, 21, -19, -71, -25, -105, -49, 97, -105, 34, -42, -50, -47, -101, -14, 62, -113, 92, -98, 55, -12, -59, 110, -69, -88, -69, -89, -8, -123, -113, 11, 82, -40, -98, 79, 80, 106, -54, -75, -41, -127, 30, -67, -37, 35, -123, -76, 113, 114, -78, 29, -20, -80, -66, -67, 96, -99, 90, 61, 33, 51, -39, -90, -31, -10, -89, 61, 58, 48, 116, -125, 88, 104, 65, -17, -74, 103, -23, 123, -116, 126, -83, -106, -45, -76, -43, -5, 4, -101, -120, 66, 47, -80, -66, -53, -96, 46, -100, -116, -81, -79, -48, 59, -16, -96, -45, -23, 29, -33, 103, -38, -53, 15, 72, 79, 118, -29, 119, 62, 10, -21, -59, 31, -33, -2, -1, 73, -27, -108, 116, -61, -60, 62, -65, 20, 14, -9, 117, 124, -82, -30, 110, 7, -16, -41, 5, 14, 101, 59, 14, 4, 54};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KUQIOSEGISYLQNQAYJWEZKAEYDSFJBXWHOZHTGCJYRFYVLGSWEGPMDXBRHKXQTVWNFNXBUNAXQNAULFOTTLJLLDDCMAPFEFGNQUHCSCWOECNMVEZVKWNAWFKBFDKVDQTXNAKMGAPWJJSGILTMCFAEUUZPXSTHIRDXHPTOROOOYWXMVCJLSPZXMPSCLZIBJSHYTEIONZGOQMR");

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
    msg.setTimeStamp(0.6566100959993632);
    msg.setSource(39681U);
    msg.setSourceEntity(21U);
    msg.setDestination(53371U);
    msg.setDestinationEntity(166U);
    msg.plan_count = 16090U;
    msg.plan_size = 3349082914U;
    msg.change_time = 0.17135005811935944;
    msg.change_sid = 8153U;
    msg.change_sname.assign("IGPLUUDEQHKZQSSYRKPWQNAFYCJIVOXBZJWYXORNIGSEYDMPDBNCVHHXDAGDJECTHVDIWKRGMJFAYHVUNKDKTGOUCKAUHCVNOBYHABQESWAJVJTXCHT");
    const char tmp_msg_0[] = {57, 74, -97, -25, 97, -95, -23, -124, -58, -2, 44, -123, -117, -53, 12, 10, -6, -8, 114, 8, -94, -44, -3, -16, 6, -11, 103, -107, -33, 8, -29, 29, 27, 59, -49, 109, 101, 29, 55, -77, 83, 87, -122, -60, -14, 12, -98, 9, -85, 62, -57, -97, 88, 42, -110, -95, 57, -114, -27, -7, 96, 26, 78, 124, 87, -17, -127, 78, -120, -6, 85, 36, 77, -64, 33, -125, 96, 116, -11, -80, -108, -116, -99, 37, -17, 91, 43, 59, -71, 8, 19, -76, -105, 85, 58, 96, 43, -71, 79, -113, -32, -21, -99, -35};
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
    msg.setTimeStamp(0.4297284415382101);
    msg.setSource(64019U);
    msg.setSourceEntity(125U);
    msg.setDestination(17699U);
    msg.setDestinationEntity(252U);
    msg.plan_count = 33696U;
    msg.plan_size = 2442469077U;
    msg.change_time = 0.3490157574620275;
    msg.change_sid = 58772U;
    msg.change_sname.assign("JDHVNQDXWGZXVUSXRDHTGBZFETPCIY");
    const char tmp_msg_0[] = {-32, 72, 68, -46, -50, 90, 49, 119, -70, -82, -99, 22, -89, -41, 25, -33, 77, 106, -1, -63, -77, 18, 1, -87, 101, 125, 75, 19, 95, -3, 89, -68, -84, -110, -26, -88, -103, -89, 0, 121, -59, 32, 85, -78, 4, -87, -124, 116, -19, 87, -113, -99, -112, -23, -19, 35, 84, 49, -11, 10, 32, -58, 120, 35, 85, -120, -127, -37, 102, 58, -61, 1, -26, -70, 117, 123, 23, 29, 43, -44, -122, -123, 98, 86, 25, -10, -40, 8, 1, -23, -90, 60, -32, 29, 54, 87, -80, -120, -38, 63, -41, -88, -23, 92, -114, -42, -90, 7, 16, -32, -107, -20, 72, -99, 38, 94, 51, -92, -49, 65, -78, 21, -52, 113, -26, -84, -98, -34, 122, 43, -64, 30, 97, -94, 50, 83, 108, 42, -104, 17, -95, 58, -22, 64, 67, -36, 66, 63, 13, 56, 121, -127, 46, -87, 38, -59, 84, 120, 54, -84, -84, -98, 112, 26, -35, 86, 1, -37, -43, 28, 32, 126, -20, -63, 44, -57, 65, 20, -47, 75, -81, 7, -14, -17, 85, -52, -82, 108, 18, -107, 116, 4, -6, -89};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZUNOZFRYTTHUHXEEYYRDBUJNDGZWMTVGKWCDYMNRBABQQVYURLSOSMCZVVVYXOBKZYHXTIIDLIYEVIHWBNQQLFKAIJQDKMSXPHEXAWUNJPLGANPKFXHJFLCPORSKDXOKBEXTVAMHWVPEMWRFCPGCWIZYRODUUZCEQGMPRJGNEZPBALACJOGGM");
    tmp_msg_1.plan_size = 27045U;
    tmp_msg_1.change_time = 0.2391919312315397;
    tmp_msg_1.change_sid = 45343U;
    tmp_msg_1.change_sname.assign("UVAEEUNPYFVLVEKMPLYQQUGOEQLZXKGABQFMFUADFTQKMLHBPBXNWFBCOKSEJUKCCMOYBRJSSORJLYJWTDPWCVVHTWCGFJREJPZTXSGXLXYYFSIGVBIRYMMKHNMQIUNGLYVDAHAJLWVEZSAVEIBPOORICDPNYZKHZBFOHDLHJQBWQJRFUIPUOKTNRZNYIMXFHNZMHGLZDKNIRCCTSDVWAXMSSDKWQWSAJWIRRDQTDA");
    const char tmp_tmp_msg_1_0[] = {50, -114, 47, -82, -121, -7, 117, 71, 45, -17, 20, -32, 119, -15, 34, 43, 4, 103, 96, -98, -119, 122, -61, 83, -72, -119, -86, 31, -68, 3, -94, 120, -60, -92, 58, -22, 86, -35, -83, 114, 110, -24, -58, -120, 57, -100, -123, 94, -23, -95, -3, 111, -23, -80, -116, -58, 115, 57, 3, 103, 58, 117, -120, -32, -19, -91, -100, -11, -77, 8, 76, -104, -50, -99, -48, -52, 47, -53, 125, 125, 3, -75, 54, -86, 2, -123, 22, 79, -39, 88, -65, -12, 91, -89, -72, -21, 12, -66, 96, -90, -1, 29, 103, -53, -49, -84, 99, -124, -5, 22, -83, 7, 82, 23, 77, 52, 11, -5, -110, -19, 28, -71, 94, -70, 26, -128, -110, 47, 42, 39, -54, 8, 72, 104, 78, -126, 117, -1, 45, 102, 114, 84, 23, 55, 21, -34, 99, 60, 120, 62, -14, -118, -46, 72, -64, -59, 67, 45, 10, -110, 108, -124, 86, 38, -94, 107, 119, 83, 35, 66, -5, -77, -126, -117, -108, 22, 43, 2, 99, 92, -102, 116, -54, 11, 20, -109, 109, 92, -55, -44, -55, 74, 53, -120, 117, 57, 102, 8, 108, 57, -49, 79, -53, 113, -16, -6};
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
    msg.setTimeStamp(0.09192170531710764);
    msg.setSource(40378U);
    msg.setSourceEntity(104U);
    msg.setDestination(42274U);
    msg.setDestinationEntity(229U);
    msg.plan_count = 52759U;
    msg.plan_size = 2475317451U;
    msg.change_time = 0.6985790687765437;
    msg.change_sid = 3842U;
    msg.change_sname.assign("HZGVHQGMRYDWZUBPTYNSKECAWDJIVPJRGKXLLKIMLUTXCTFNCEYWAHVPSQFZLEXRMEGDNVSPJYJRMLQFAHOMZWMYUNWRWYPGTFICDIWYKZAPISBXPFOZHNTUZRTQGVOQIBUDJCVKNTJTHFNNFEAVUGXXODAMBHVYBEAOV");
    const char tmp_msg_0[] = {-117, -110, 26, -112, 103, -72, 119, 23, -106, 100, -79, -27, -2, -77, -75, -59, -73, 55, -75, -117, -40, 24, 42, 72, -126, 36, -86, -97, -102, 68, 56, 79, 20, -105, 36, 27, -62, -10, -49, 45, 40, -18, -11, 70, 124, -55, -28, -71, -96, 122, -70, -91, 102, 65, -68, -25, 99, -92, 88, 54, -79, 34, 53, 5, -96, -14, 49, 46, -98, 117, -116, 0, 100, -10, -14, 17, -19, -50, 57, -61, -116, 123, -70, -87, 107, -107, 57, -23, -113, -125, 0, -2, 109, 70, -11, -63, 7, -119, 16, -26, -94, 26, -32, 112, -110, -111, 2, 124, 109, -10, -11, -39, 105, 37, -103, 75, -72, 90, 113, 28, 54, 59, 18, -109, 64, -44, 45, 74, -23, 101, 84, 73, -51, -66, -4, 120, 28, 61, 115, -73, -75, 76, 26, -102, 79, -22, -26, 60, -40, 50, -92, -98, -106, -124, -127, -66, -49, 73, -47, 111, 92, 80, -49, 21, -112, 105, 76, -26, 72, 72, 102, 81, -51, 94, 14, -86, -115, 79, 4, 47, 90, 63, 2, -23, -118, 82, 30, -75, 62, -100, 15, -10, -52, -27, -98, 108, 8, 58, 49, -114, 79, -18, 13, 2, -103, 119, -105, 35, -93, 76, 68, -42, 102, -55, 40, 118, -23, 100, 104, 80, -31, 62, 70, -67, -23, -74, 84, -6, 121, -4, -9, -6, 121, -70, -89, -73, 113, 66, -127, -64, -63, -79, 10, 45, -16, 60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CYLBKZIHNAMKQOCSWRZOMQJDBOXDYVOJLMAESPWBJIROHTGFVPQMXUFEHBKZZGPRTAEBNBFHODLCDUTVTIBAOAFYEPIGQGUXWLTIFVZRUMVHAKSSWILHDTICTMGVJJMX");
    tmp_msg_1.plan_size = 23105U;
    tmp_msg_1.change_time = 0.9822814600772626;
    tmp_msg_1.change_sid = 1021U;
    tmp_msg_1.change_sname.assign("UKHOGNLWULOMWIAGREGBTTBQND");
    const char tmp_tmp_msg_1_0[] = {52, 44, 19, 20, -73, 71, 9, 30, -31, -101, -103, 47, -113, 126, 0, 7, 61, -90, 73, -109, -112, -108, -119, 41, -8, -98, -115, 60, -38, -12};
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
    msg.setTimeStamp(0.6393059543893429);
    msg.setSource(27234U);
    msg.setSourceEntity(189U);
    msg.setDestination(21431U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("PPOAPFZAVZBNDXWUXKETINDEWJJZLRIIZFNKLWJYJLBVMHFKVGESUZBFUOKGVGRLRFTTMZE");
    msg.plan_size = 63768U;
    msg.change_time = 0.2708835209432662;
    msg.change_sid = 10596U;
    msg.change_sname.assign("MZQWTEKKANGCMYWUOULRQZDNCGJBRUGRIGTNQKOGGWOQAYZFWUBINSFQGAOEYFZHJPSVLYXARJNVPWIXLZVMTEWJWIDLTMIOPSUMRPEOBTLZTBDHVJGYFXUXHQKDTEMJXTMSUOHIIEXSLKYBMFSFRXLHFJWROPCQBVJYHEMARPSEVDLSCTJCMOUBKSNPUKZJKECGFODAUFABZWDIRYAYXALC");
    const char tmp_msg_0[] = {21, 123, -80, -128, 125, -19, -39, 57, 19, 46, 108, 106, -86, -73, -56, 18, 104, -43, -33, -73, 24, 8, 88, -50, 80, 8, 109, -117, 123, 35, 23, -64, -97, -14, -76, 73, 126, 111, 101, 112, -66, -39, 121, 5, 59, -50, 4, -26, 47, -19, -43, 7, 49, -113, 71, 89, 117, -48, -127, -13, -36, -37, 95, 29, 47, -89, 35, -71, -68, 86, -13, -115, -53, 63, -25, 30, 99, -89, -5, 95, 47, -106, -128, 62, 51, 79, 94, 17, -101, 14, -92, -69, -71, 103, -90, 87, -46, -91, -8, -80, -20, 87, -58, -72, -75, -125, 50, -12, 44, -19, -100, -61, -74, -95, -92, 111, -89, -20, 80, -90, -98, 74, -33, 64, -66, 35, 68, -122, -91, 123, -60, 86, 3, 99, 69, 78, -45, 74, -76, 108, -103, -31, 76, -96, -93, -118, -43, -8, -67, 111, 121, -112, 51, 76, -57, -16, -102, -16, 107, 74, 7, -127, 20, -122, -84, 88, 23, -38, 109, -18, 106, -123, 39, 55, 43, 115, 0, 0, 102, -113, -13, 95, 82, 100, -45, 52, -38, -51, -107, -106, 107, 58, -14, 26, 24, 68, -88, 76, -125, 22, -1, 19, 26, -88, 5, -109, -54, -118, -107, -45, 83, -22, 17, -16, 28, -56, -103, -18, -106, -94, -121, -92, 20, 67, -99, 23, -43, -22, 2, -34, 99, 104, -34, -44, 11, 36, -7, -20, -72};
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
    msg.setTimeStamp(0.028858271986741735);
    msg.setSource(59787U);
    msg.setSourceEntity(100U);
    msg.setDestination(26452U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("QSVTUOSMQCHEFUAVYNWSROXRDBIZLLFCAMNVCAGENSUXEDTNXLICNFTDBWKQZMRJDNDBKCACBCWDIQRBFTDNPUOPEKFFHTGCAWJGMVIESWOPTMZHUYKJWADHXKOFEJZMCLHJIPHWGJHKU");
    msg.plan_size = 18239U;
    msg.change_time = 0.7676962412602538;
    msg.change_sid = 36085U;
    msg.change_sname.assign("STGVNBEVZPGKRHSMQEJWGPTBXDAOKUKTDCANEPQUJIXOUA");
    const char tmp_msg_0[] = {-42, 67, 87, 87, 122, 43, -57, 4, 8, -43, -110, 0, 126, -73, 94, -60, 53, 4, 19, 108, 33, -29, -117, -38, 104, -87, -78, 17, -78, 95, 58, -67, 45, -113, -126, 10, -56, -78, 29, -39, 69, -125, -124, 0, -66, 88, 51, -95, 79, -31, 96, 59, -61, 35, -29, -102, 7, 66, -20, 78, -67, 108, 95, 44, 91, -119, -28, 81, 9, 112, -54, 28, -60, -119, 50, -90, 116, -115, 97, -60, 123, 37, 76, 41, -3, -97, -23, 124, -127, 30, -75, 106, -64, 52, -117, -37, 86, 121, 28, 77, 4, 46, -76, 100, 79, 29, 79, 89, 29, -65, 114, -26, 4, -103, 110, 118, 59, -92, 119, -24, 122};
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
    msg.setTimeStamp(0.9207293159433994);
    msg.setSource(57074U);
    msg.setSourceEntity(33U);
    msg.setDestination(7189U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("ZGKQPRWJGFTJIHZVQUUTQPBXLBKVLGOQTNAKEZOTMYFRVGOXUNMVCZRXVOHCIKCANSVILXGQ");
    msg.plan_size = 35300U;
    msg.change_time = 0.15574019648815873;
    msg.change_sid = 38479U;
    msg.change_sname.assign("JQOQLEBTCCWJQVUVSPKNTTDNEBHEJPKJJMGMCBUADIXIAGXCJPCGFVATZEUMOEYRUHLSARS");
    const char tmp_msg_0[] = {122, 92, -12, -120, -51, 126, -47, 44, -88, 124, 102, 40, -124, 123, -127, 30, -128, 110, -17, 48, 76, 15, -72, -20, 45, 87, -12, -70, -83, 90, -103, -28, 111, -46, 9, -103, 88, 103, -77, -28, -82, -36, 68, 10, -115, 118, -46, -76, 125, -128, 49, -124, 49, 47, 33, -26, -128, -54, 113, 96, -69, -124, 74, 81, 47, 76, 94, 7, 11, 109, -74, -95, -3, 41, -27, 57, 0, 80, -12, 65, 114, 102, 107, 2, -70, -14, 115, 48, 48, -52, -54, -60, 42, 39, 13, 18, -8, 17, -61, 76, 19, 87, 88, 73, 35, -127, -82, -89, -13, 30, -109, 47, -66, 51, -4, 13, -56, 19, -128, 1, 43, -80, 7, -71, -125, -64, 120, -16, 55, -58, -9, 24, 58, -117, 33, -2, -44, -81, -29, 47, -69, -17, -21, 90, -109, -23, -29, 56, -31, 57, 12, -73, -100, 52, 55, -32, -40, 93, -43, 113, 98, 108, 10, -12, 102, 59, 6, 13, 8, 102, -97, -112, 37, -118, -7, 71, 104, 29, -86, 116, -21, -88, 86, 53, -124, -78, 13, -35, -28};
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
    msg.setTimeStamp(0.6602996799528967);
    msg.setSource(30416U);
    msg.setSourceEntity(149U);
    msg.setDestination(38739U);
    msg.setDestinationEntity(73U);
    msg.type = 1U;
    msg.op = 45U;
    msg.request_id = 64142U;
    msg.plan_id.assign("GESMIKFFAKLNSBKLKLDZQDAMUAHZYKKFNSNGMWQFCSMXEHNTOZJUQCPPLUHXRHUXNSAMTSFWDJOCTAIDQJOOOFLTTJXBXGZQUQWOJYCRJNHRPTXIRYLEFMCGVNLFXEPDAECBXGGZLH");
    msg.flags = 24410U;
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 36815U;
    tmp_msg_0.comm_mean = 213U;
    tmp_msg_0.destination.assign("KLCAOMDQPAQNNLHUGOWIKXIVCBGAWKIMMZAEAFIWPJOLBUSDOMJYWEPONIEJSQIYOFJGTVILHRZGHERETTXZDUAFNEZFYXOYXNRECTWKSRHKDDXTQVPDMYMSVYCAHRVNUZFXHZVDLGVIBJAPUDNFYEHFSCBJZQEFKKPTFBTFGIKPQCLVZCDWCXRUMXJHATACYMSBUGQYDYTSZWUBROQVJWPJNNHRLGBPBEQLWRLSUKMBSTO");
    tmp_msg_0.deadline = 0.021523082288995132;
    tmp_msg_0.data_mode = 89U;
    IMC::UamTxStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 11568U;
    tmp_tmp_msg_0_0.value = 198U;
    tmp_tmp_msg_0_0.error.assign("GTILLJVIMIJTNTWVHLRBLKSQIYUWLZCYHUDWMGLFVSQXSSJCYEDZIYHXCUOWCGLUNPBDCKNVABBQQTAHTWE");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("JNYWNBLTDLOTHRQVBYMRTUOQHUSWKDMKONTDFSUCVYXQRWOILEPYKDSFWKLLRIPXRSWAPGANZXMIJESX");
    const char tmp_tmp_msg_0_1[] = {5, -80, 31, 63, 46, 3, -27, -35, -121, 101, 17, 84, -26, 119, 69, 56, -118, 42, -83, 19, -1, 75, -41, 41, 94, 81, 3, -78, -95, 104, 71, 80, -11, -13, -41, -114, 87, -87, 77, -86, 23, 96, 20, 46, -42, -84, -29, 54, -43, -28, 85, -114, 16, -85, 89, 19, -69, -86, -20, -104, -23, -50, -98, 107, 82, 122, 106, 3, 122, 105, 122, 10, 102, 57, -47, 34, 10, 50, -121, -14, 105, -6, 73, -33, 106, 121, -8, 42, 48, 119, -11, 67, -115, -25, -7, -121, -50, 87, -52, -115, -57, -126, 124, 55, 11, -86, 109, 25, -9, 81, 26, -45, 109, -95, -7, 49, -110, -61, -36, 125, 45, 102, -123, -29, -16, -13, -113, -61, -8, -62, -29, 75, -109, 84, 95, -120, -8, 70};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZRXVXGATKDMLLDQDJQHOMIWRBZTFEUKCYPHYNADNJNYEFCIQVNLCFMYCJRMLTRXVKJQPOBKMGNVAWEXVUKVULAWYTFKZGPZGZQSSOSCJLGSUJOGIBAWUWWKXFBIVPDVBGZEJANPPONAXLKFPIWPFRCLUGYOVRFRXQQLXEUMFQHYRBNXKHCEEPWQJSHHEBEVPZASDQIOINFWWDJARTTDIMCZAHOGMHZYUYTCUBMJEMDIIOBTSHCSGRHKZN");

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
    msg.setTimeStamp(0.6734529489506971);
    msg.setSource(28572U);
    msg.setSourceEntity(30U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(138U);
    msg.type = 138U;
    msg.op = 96U;
    msg.request_id = 24489U;
    msg.plan_id.assign("GOBMFJZWPAZLJMXPCQJXSKTXAVTNFLBSN");
    msg.flags = 47764U;
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.38419626215799585;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GDUVOBHPVKMMAMNKNEBVAQWFLFKVXACJIFLZOLQZOWIBWCCBFICPZYXSLMYRDTAYWICVYSEITZRSXCXTWFUOZGXDLBBAKHIJEPCPTTKVLGRTDFFSLYUUDEJOHYUEAPJGQMWRGEEBESGNSXJKOUFZYRVUCNSDPNJLZHWNOJRFODOVKITMMBSPTRGJWMXAIIQGZYSRQJLTZSIJAGAMHKHDZPBKVLXHHWPKWUBQYNGNH");

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
    msg.setTimeStamp(0.5734965272774402);
    msg.setSource(22610U);
    msg.setSourceEntity(111U);
    msg.setDestination(2860U);
    msg.setDestinationEntity(105U);
    msg.type = 143U;
    msg.op = 54U;
    msg.request_id = 2762U;
    msg.plan_id.assign("QYGALWHWGCSLBMRLNSMQZGHNHCFOPHLLEFVAKJUUREDVSVPJTBUKPDQDCMZTXIVJIRMOTCWQSQJNUWQETKYZXJHQVFBYYOFLXQWOIHHNWCZIRLUBLXMTZHZKBHIVKMCF");
    msg.flags = 52925U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 9927U;
    tmp_msg_0.lat = 0.41655113338485095;
    tmp_msg_0.lon = 0.08767636241568211;
    tmp_msg_0.z = 0.6137044223071727;
    tmp_msg_0.z_units = 156U;
    tmp_msg_0.speed = 0.494236370673654;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.roll = 0.5126205370713744;
    tmp_msg_0.pitch = 0.2973539937758196;
    tmp_msg_0.yaw = 0.7298311472440714;
    tmp_msg_0.custom.assign("DERJHYYZUKGTDXYDMYCGTXCPFHEISWJZHVJDXQBHAKIOPFXOCLSOJBQKWTELRICOTKSPLMMMQEVVLLNJGCXLNVMWUEMSMIYISIOMEFOUTGWTYWFSLQAENRUMJEBGHKRRFGRQHT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CLSZQBRDFBIWCOWBIWDFJUQRHMDDNIVLCIXGPXMLUROHOUXQGNTTJENWFPKOJBMMSLUAEOYZWKDNKUGRJNYJHIGZMZXNVHMOKTOXNSZXSBLQHWCTSAKPMQPKVZKPATCHLYYEDUKEJWZVRFMLFLRBQWOSUEIYPDCAFUILAC");

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
    msg.setTimeStamp(0.28053266624047546);
    msg.setSource(34638U);
    msg.setSourceEntity(123U);
    msg.setDestination(42489U);
    msg.setDestinationEntity(11U);
    msg.state = 11U;
    msg.plan_id.assign("YHHYZGWXPDUIGNDKOJPZFDTBNYWILCVYUXVKHDYZQYEVBOKERPWTYGUWZIDTSFHA");
    msg.plan_eta = -378774069;
    msg.plan_progress = 0.6035616715271852;
    msg.man_id.assign("CURKIAFIFOSJYMSIDACZTWTUBNXSZWLCQKZNWZVYQFQOAQMIUQEFRMUSYEGJDJLEBOKSUYRLVDRECXNVYCROWYDBIGEHBZWIMBQIVPTHYNJDPRZHBJOGEWDCHIYMXCJILRJAEQKOQGTSFLHYUTXZJLAZJCAEWRBWOFZAXNXFKASNNHPPPRBXVPZOULAUMVENLTUXJFNBMPTTKKXGDXOSCHYTHKLSCTVRVAHF");
    msg.man_type = 47377U;
    msg.man_eta = 1634990895;
    msg.last_outcome = 59U;

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
    msg.setTimeStamp(0.2200550333198077);
    msg.setSource(57826U);
    msg.setSourceEntity(194U);
    msg.setDestination(38033U);
    msg.setDestinationEntity(218U);
    msg.state = 254U;
    msg.plan_id.assign("GMDAROQMTQXRIKIQLNBJIPNMHZLIVJUAXHIXDWKVTDFYDOKIFFAYYFTUMKGMSOTWMEARQCDQDTOJEICOSGRBPHANCZRLDVJENYZNSISLUBDLBCCUPY");
    msg.plan_eta = 1588379461;
    msg.plan_progress = 0.4894549128177913;
    msg.man_id.assign("OMAWFQQKDYZKSNSDWBUTUGGDIKKRVCYWPBKGVXFBUYSAFTYCYKBIXENKFTDIBLJCUDWNAOEBVQVABGRYAYMDPQJSCKVMHWHHPAGEYSPXSXJZTOTJTVOLNFRGIZITXJMWWQLZNLILFURLBCYFIEEEHZRUGLEJCACJQMDFGUYVUGNOQIRVWJQLHAANHIGEOZ");
    msg.man_type = 9509U;
    msg.man_eta = 1765766835;
    msg.last_outcome = 87U;

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
    msg.setTimeStamp(0.8739067875190808);
    msg.setSource(56108U);
    msg.setSourceEntity(244U);
    msg.setDestination(13437U);
    msg.setDestinationEntity(131U);
    msg.state = 184U;
    msg.plan_id.assign("WFYYRQEKFOWNMEFDLLIOBLDFFKWFJUMWDDVIXXQJEBYDQZGXGLJUZXMQECAROVMKDOSGPPDIMVZEMYPYTJQGKZENSBTHUMNUWIWEWUBRTUGPMHNHOFWJCNIKGIBABSKOJRMHCRSLVPJPBTAPZSCIXVSREDXUGGHZUGCEYISVJWORAVVFOYULARCU");
    msg.plan_eta = 755151785;
    msg.plan_progress = 0.8887616204722448;
    msg.man_id.assign("OGBHFOKDGWZQWVCQPXWRTNKVVRLTMOFRACIYWBLYQXPTSJWZXSAKTQQMZWYDHLCCZOERNLBIVJJVMBFGIZAEYRDKDJBHYJDCNFVDPTQZHDSOAFEKSMIHXUGEOJECINCDFKUYDCWSLJJNFMTNAPBFU");
    msg.man_type = 11326U;
    msg.man_eta = 1829749649;
    msg.last_outcome = 43U;

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
    msg.setTimeStamp(0.4200502526329667);
    msg.setSource(57492U);
    msg.setSourceEntity(197U);
    msg.setDestination(30414U);
    msg.setDestinationEntity(51U);
    msg.name.assign("HNHPMSRVZQWGACHTRZXJWNCGGCNKRLGUZRDKXINVCLMMIPLWKLLSBKPJTGJQXKUTXPJRTOCOHYYYNYHAQJMEGPXLLIIRVKUCFUTQAZSVHOSYCVLRNYFQNBFEVUDUHIEUZVGPUKZWYKTSDDNQVGTQREATSSXJPFHF");
    msg.value.assign("MBRVEHRXKROZCNFOBSRUAZGFVUQADDVTPAZCHJOIWHSTXZBTPLODGYSGKAILYOZJKYMGLNQTBZSPBUUUZHCDGIRWQKKPOQCYTJDNQQGAQKMZELALVEATLEUICMCIUHWAEM");
    msg.type = 118U;
    msg.access = 236U;

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
    msg.setTimeStamp(0.07508557855299958);
    msg.setSource(35910U);
    msg.setSourceEntity(157U);
    msg.setDestination(49609U);
    msg.setDestinationEntity(241U);
    msg.name.assign("LXXJCYARTMWLCNMKZIFAGPADGXJPFIFIYJXDXWUILYSOTRQQOWJFSVPJETQYUEBTOARFVMGMBIJBTUBZPQGTFCPOVLHWMVUUDGYERZHFIRKEMCGWKO");
    msg.value.assign("JGGKUTMDWIARJOCXFCEDNRGLEZSVBFPOZUKTHHKDPMNKXUBZKLRYGQPTCTLJPPDMDWXAVBGEWCORMNIGKIRTWEUZMIFSPAVOKQEUVAINBHLGDTHHSEPHWCZAUDBFHLYOYWAADMJGVXLUPGQQIXZLAORUJTYVCBIXOJWLSYFURXQANBMPFNZBZVIDKXNLKRJCOQNFBYFEQCXEQVJRFM");
    msg.type = 122U;
    msg.access = 43U;

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
    msg.setTimeStamp(0.13022536346317248);
    msg.setSource(63679U);
    msg.setSourceEntity(184U);
    msg.setDestination(37553U);
    msg.setDestinationEntity(249U);
    msg.name.assign("VFJTTGBEHVUSBFJGDVRIMHLDMCWAPRJQEAWYJNWRAPQJLCCPGHAUDTQZPQYYTZOKZCMMLKHKJLOEEYGVIOSFXTICBKQPSBNIOACNTKMNMDJFHREIBMVUODDCOLVWVENPPSNRIC");
    msg.value.assign("LOXQJTCWRHHQCXJXLQTUCVONMJOHBUGUFNAGFBZRIQZAESWBHPJYXQYANMMZPOJMWSWNBVTEYMFCIKSEVNIZQAFANRPZFKHOTCTVFVARPBIQIUBPCPKSZOTONMSTGSIKLRXUARGJGEDCDLKALJYGIFQDHSVXDKKCYGEEZNCWMYMVRYWHCYEEJXXAZURFTONTDV");
    msg.type = 54U;
    msg.access = 207U;

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
    msg.setTimeStamp(0.04064476108108306);
    msg.setSource(21861U);
    msg.setSourceEntity(232U);
    msg.setDestination(35688U);
    msg.setDestinationEntity(157U);
    msg.cmd = 116U;
    msg.op = 19U;
    msg.plan_id.assign("DMGLZAYFWSAVKTDKMBHBOGQSVVBUUEYWWAFXOPCZBKKNXCDYLIYEBUDIJNKRRGRPEWZQARPIYHTOFXSHENLHTVCCENSTIQOARZJMSSEILOUVUGMNZMJPUSWHUXWZZGDJBIINYWRETNKFAKQFHJHCXMQYHOVPFGNDUTIWRJLZXDQFTDQKLOHKGSFDXRP");
    msg.params.assign("OXJESWFTPJEPDFUUDVRPOYKUVWMEMLAGVEMBDTDRHLYNQPYFOGWTTDAVTBRGLEBSCLCJRXGZXQQSHOLUKMKNLJAAJNDTIWSZJUPYQWQUGTNUNDGBEIBCBACSGQJMRHZICZUYOYMTIUAXNCAAIXXYYF");

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
    msg.setTimeStamp(0.5239318721597975);
    msg.setSource(8724U);
    msg.setSourceEntity(191U);
    msg.setDestination(62168U);
    msg.setDestinationEntity(134U);
    msg.cmd = 13U;
    msg.op = 70U;
    msg.plan_id.assign("DZMZIUKUSHZXYYOJNQQNZTTELUDGHXMUUTWYABSREVPQDCZHXAOFKKMLLNNRIWHRVXWSFMJVBUCPPJLFSGNDHJPLLMBGMCZECFCSEOEHQBNRNPOWJKSOLLVWCQVIIRO");
    msg.params.assign("FZHWTLIVATVURNRDBRUKHPIKZBAHDYMUDAQQSWYRZLUFSBCNBOELWVPHQRWLNEMBJCSXPPANQNUMPMTXPEEASOF");

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
    msg.setTimeStamp(0.8661151054211867);
    msg.setSource(21695U);
    msg.setSourceEntity(26U);
    msg.setDestination(32273U);
    msg.setDestinationEntity(93U);
    msg.cmd = 4U;
    msg.op = 72U;
    msg.plan_id.assign("IRIVSJBVSBCFUJPCDSGRHAYEQLCBBOAGXFXJIVZHNXUFPCNHVYHOVADULGWWJCHWROJKQOZYKZYNMYIXKVMEXALMTRVZTFTPUMQCDICDPSFAKJTYZWOQBWTNNXRCCQLFPBWHGNERLISZMBNBKQGDPDGHEUQMXPLENAIKEIHLRREDPTDGMAZGIYEWPGAOUSUKVKTAFFLBHLUOIOJKWMZVZGSXYKRFNPMSOMULO");
    msg.params.assign("VTJQFLJKZXUPJYNHTDGQYNPBVAQLEFSNIMZUORYASBUVFQIMOVMJDPPBALGDNOKJDQBJORLHEFZCTHEHRUHKTDVVIXBEZYIGLXEAWRXPTRPCEETSOBRICQIZVTRLQLOHLXNFMDMYSUFSWPKXMWGSYCZDBIXANQJQCAXGKWWECZNADTBVUJOCIZYT");

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
    msg.setTimeStamp(0.03216748932017188);
    msg.setSource(47878U);
    msg.setSourceEntity(171U);
    msg.setDestination(63509U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("VRZYQHBSJBEIBLYCCEFCOTZJRKOONSWKENUSSPKRACHGLVCMZJXJTYHYEBTIQWKMFGPZZIBWJXAOLXLHMYMATQLPDHWQVAUTDKDKIWDJUFSXIUVGIWURFQLFFAKJDIEVROHPWIYIPPXLTZWPBRPEHVSMUVNOQXNTCAAEOBLFRDKUMMCVDQRXVNMGDZUITEPXBGVNEWSFC");
    msg.op = 22U;
    msg.lat = 0.9034424445121494;
    msg.lon = 0.6477028606900143;
    msg.height = 0.9301601876684049;
    msg.x = 0.7399407418917481;
    msg.y = 0.13427024101171936;
    msg.z = 0.5066961089358212;
    msg.phi = 0.05968968002362329;
    msg.theta = 0.384240907467017;
    msg.psi = 0.5849504519333623;
    msg.vx = 0.7699753219452009;
    msg.vy = 0.18441256889895252;
    msg.vz = 0.13357874850225193;
    msg.p = 0.5337392779747827;
    msg.q = 0.02117691028270896;
    msg.r = 0.5381500131239024;
    msg.svx = 0.5941714942583016;
    msg.svy = 0.5367286465690126;
    msg.svz = 0.4366625833653832;

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
    msg.setTimeStamp(0.9088968923542894);
    msg.setSource(31557U);
    msg.setSourceEntity(41U);
    msg.setDestination(130U);
    msg.setDestinationEntity(33U);
    msg.group_name.assign("DSVFSHNKABCHMXZPWLJDSRLTJSXHLSXLGWDGJTXOKMEZYFGYDQBINHNOEUMFPIRAWTJHETUJZWMFJXRDMTFUSTOECJMSAVEVYKCXWJJSTEPIKLPAZZCBPORBKDUMAVPMLZNYIRWORWLG");
    msg.op = 109U;
    msg.lat = 0.6794751240996498;
    msg.lon = 0.9066355175539076;
    msg.height = 0.8097938274729195;
    msg.x = 0.30583774971356603;
    msg.y = 0.048526656456981065;
    msg.z = 0.6173875049659301;
    msg.phi = 0.9352004533654703;
    msg.theta = 0.632444767291197;
    msg.psi = 0.9297561526107221;
    msg.vx = 0.9635658261056078;
    msg.vy = 0.009728425452511291;
    msg.vz = 0.7546259808893874;
    msg.p = 0.2092249659406994;
    msg.q = 0.643366906890816;
    msg.r = 0.9802933506254661;
    msg.svx = 0.03407666008103882;
    msg.svy = 0.11639972926969944;
    msg.svz = 0.3972657533981918;

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
    msg.setTimeStamp(0.8812603586641459);
    msg.setSource(46243U);
    msg.setSourceEntity(69U);
    msg.setDestination(31029U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("QGLMGPMNHRRKCPUOBTMVNPBPSTRAGESWUKAENDMXSRBJNJXGDXKYCPGIUIFIKDMABTLEYHTFJUUMPGQQSIOHJNCYEUDLNCKNHIKEOLQIKZOAAQWVLJXMDZNCYVIUAPCDVFHGJYRVLKDOZZVLCYYMQWXKZEOJXWBERAFTBXUGSWRZSTHLHBZXFNWYSIBFORBQRWDSSDCTINCZXMAV");
    msg.op = 242U;
    msg.lat = 0.2680112709013285;
    msg.lon = 0.25003379837292194;
    msg.height = 0.8857679572002505;
    msg.x = 0.11258806043951575;
    msg.y = 0.8666504710697691;
    msg.z = 0.906978074470033;
    msg.phi = 0.4975260843361292;
    msg.theta = 0.8761673428331047;
    msg.psi = 0.0039789889110257715;
    msg.vx = 0.4564781379734093;
    msg.vy = 0.05640500157420936;
    msg.vz = 0.32908856847915924;
    msg.p = 0.7595219956212036;
    msg.q = 0.9682773131465864;
    msg.r = 0.09103775576083328;
    msg.svx = 0.011378597031818094;
    msg.svy = 0.5435270227566574;
    msg.svz = 0.9463064553490667;

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
    msg.setTimeStamp(0.46556894140884586);
    msg.setSource(13166U);
    msg.setSourceEntity(73U);
    msg.setDestination(28749U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("TKXZHJCMLSQGSREKHQYOHWEGAEZMYQZAVIABIBXOSKSVTGPYOATRLISUJSFDKQYDGHENAYGPMNBIDHRNVHPQHJITOMOFEMMSLT");
    msg.type = 140U;
    msg.properties = 202U;
    msg.durations.assign("QAFBDVLTKSYASLOHFNULLKUOQKTDXGQOMFRQYMRNOULNGWMKFJVSBRERLJSDCLACMPHCHHJXJERODPSXHAQIRTXJRROWALPZWJKIKXEFPMGPGKOZLQVBGFUWILXZHTYBGGQNYPAPNPGSUVFIIKHROAMCMXGIYCEVXVEXKDDYSEIUTEWVWDNQTCPBVXNCWZZBGCBDTDJUVZYRDIQBAPIUZCQTAFSSFHHFYJNAJMJMCBWYTZUENEEIZUWOBSW");
    msg.distances.assign("EYDJCWPUUJTAKFQILAHGRGESQQVDWHOMAVWERHVRPGTUPEQHPMLBTYSVHQNVEGQNKXKTCEICMUSRNXLOADGSBSNFZETYCRXAQK");
    msg.actions.assign("WVZXIFFLFJCCXSWKFEK");
    msg.fuel.assign("YSGRZWZNBEUAQERKIQNNLYNHYVDLNBTQWWGGTKFZFDODBMQFTUEPSVVAUJKTWXRORQVMAOWIOEHTSRNCISLJFYYPXGDCXWAFHFYQGHIJPBBDCUURMIOUCTPFGXZKHHCWPUNZAJHVFDFEEBLWTBQCGKOIUOULPUOZJXRYKTA");

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
    msg.setTimeStamp(0.6280057906705381);
    msg.setSource(34047U);
    msg.setSourceEntity(76U);
    msg.setDestination(32921U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("EZACCMSUNYKRZTJFRYHCPLQAKRVANRNGAQXTBOFK");
    msg.type = 233U;
    msg.properties = 144U;
    msg.durations.assign("HZQOUPLYEWYRHDJDSXQVCJQJXPALZCLMCGFZSEHMQYKIGNONYRINPLATBLV");
    msg.distances.assign("WUBPRJINFUTEHYEZUJNIVFXUGWLOIFTSFKPUMOSNCKAPTQMZKCYAOMXRTRISTFUJJUWSMGIQPFDOODG");
    msg.actions.assign("RMBKGVXPQNQCGBZOVGYKNMIMQODEURRRSSVABQHONETPZLTOLHKRDJKGBPPDWZVKWISIZBWHTXXDOFEMEKWXXDSCLKTUDSYU");
    msg.fuel.assign("AAQYWPTWQGVDC");

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
    msg.setTimeStamp(0.340137629573239);
    msg.setSource(21652U);
    msg.setSourceEntity(156U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(31U);
    msg.plan_id.assign("XBXLQPKSBOWMZSSKFWDEJZEQCQCQMOOVNZWQLKHHMCYWTZIEDJXIGYFGERPGMFRLFSAHWIDVUHADZOGZOVJTJFBPKPMFPYALJPCFRNJTVCWZTUJNIYWADJBSTDSZRVULGXXNZWSDGNQKRG");
    msg.type = 132U;
    msg.properties = 230U;
    msg.durations.assign("ANDWQCGKPHUSZBIKTRKSJOHYYOUOQXNKTARLTBHDIJKLATVQRBWUQZATJEDGXFDXWAHIMQGHMXQVGZWJNHFYJWIRKPONEPANEILFFWSHSAOROSMCOZPSLOBIZEFFYPPYCZYEIWFRHQCVIDDIRVUJLG");
    msg.distances.assign("YIHPLJSXDFWRTRZUYJTYALYQLPNXWWOFLGDENFNTMRGWZANFIAWWPTEIYOSXRKCMXGHSHOAMLDDJNVFGHREFRQNXELIQJOQMBDUHHVTONUECGNLMGHEBICUJTPTQAKVGBZUXRUMAFEUYSWDDKPUKOZIQVKCCVVUHIZOCGVLQLSQABJWDLOKAB");
    msg.actions.assign("OGDCNQQZXPEPYVIPGTLSYWOCNZUBHIWGOQGTXAFJEDMSBEYJLCSWRLRMXYFDSEBCXYJDMJFIMSWWUJUWSXQJMQKKTQBQIDDVSIXRIZAUVQLGPCNRREKIHWAZPMKVCMSVHMCYTORAXUIBDZYTLGKCIJRKZTKHEDXKUGDGHAKKHFNNCYHZBOUEFRJVYOXAPZWDFBRUSLUULQPAMTJOGBEEMFNOJHOBGASTVCNEWQFLAONLTNAPRVPPYI");
    msg.fuel.assign("PYJOWONAXWABKBYGPUEPOJWUPQQCESKDPZSEJKHXZUFWIESJTDYMCZQJZTA");

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
    msg.setTimeStamp(0.7363792582395444);
    msg.setSource(11140U);
    msg.setSourceEntity(60U);
    msg.setDestination(6600U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.317450595279851;
    msg.lon = 0.7903183952394192;
    msg.depth = 0.6485712307940301;
    msg.roll = 0.24735459328874654;
    msg.pitch = 0.4836509686192161;
    msg.yaw = 0.5907313863855297;
    msg.rcp_time = 0.16215147359332593;
    msg.sid.assign("XFSRJHIJXQCYPYGNXLDMIOTUADNNVAARSCLVBRVEFELMISELQHDFKEKSRGHYNBRMZEQXZSJHVQBOFNCDWLZSFPIOAVPWQDUJDDWFLGOZKJTUSCPUEETPQBHYDJYWPGJLZWVXPRBVCUKMSABOZHTTIYYHJVNPLOULERYKIOPCODHOCCIWCTFXQOX");
    msg.s_type = 53U;

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
    msg.setTimeStamp(0.10235066342808063);
    msg.setSource(17188U);
    msg.setSourceEntity(38U);
    msg.setDestination(52407U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.9425389825779467;
    msg.lon = 0.40843202355198704;
    msg.depth = 0.44834060700989176;
    msg.roll = 0.9671152587565941;
    msg.pitch = 0.331760826717164;
    msg.yaw = 0.75994923095905;
    msg.rcp_time = 0.6437070597977481;
    msg.sid.assign("PRIRLVYNSMXBSIHGYDIRAVCXDKKGTQZAITJVTNUAMHBLEWBWWWMYNOJLFUHVSFOKTIBMHCGMHDAAGLBULKBVZAVCSLSHGFPTARMR");
    msg.s_type = 189U;

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
    msg.setTimeStamp(0.338015578314355);
    msg.setSource(36271U);
    msg.setSourceEntity(78U);
    msg.setDestination(3810U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.5968141480683761;
    msg.lon = 0.5980286644776369;
    msg.depth = 0.7537524337191573;
    msg.roll = 0.4371407980288844;
    msg.pitch = 0.7194107936779841;
    msg.yaw = 0.8694166667165797;
    msg.rcp_time = 0.6626930950054344;
    msg.sid.assign("PEJVOSBAHVUWFMYRZBTQRMFXEUJOAWOTBSYFHGHRVZKUCFCYPCLNBSCJHVBBCCPESMMYTHDIZTITTIORELONLRXVEVDNUJORNQDDIYQGPDFKXCAEPDGUXGFLZHJNQXBWKQDGMOZAPOKRLWEZQWBNBDAGMWEYTXDLCNVQQIOKJGZAZDXUJUPMBZYNIWGHSISASWYXRTMIAFKMXSPSLHENWFRTLQCKPQIILUHGVUVSGFVTKXWCJAUNYYAPLHK");
    msg.s_type = 19U;

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
    msg.setTimeStamp(0.433699094308745);
    msg.setSource(10751U);
    msg.setSourceEntity(179U);
    msg.setDestination(50471U);
    msg.setDestinationEntity(201U);
    msg.id.assign("ZVXFVRLBAJPNHOJSBYSGYDQBNBO");
    msg.sensor_class.assign("NGBAHACAFZOGKFIEKYZUPBFCYVYHEBQPKDFNQWPXMNRFICIYMCDBEDPCKOPUUQGSXKTERBXEAIZQTAQYXUFWQULOSJJFHOIJDEWJKRJJIYVLUSEGABTJQRYBIQRWVMNBVTOBNXSUNIVMNJUVOCFWUTLNJHRRTHPNGXZKHVWMMOFGRZJWASHQPDAWLKGVICGDSEMOVDRTULZOIHYMBZKGOPQVMMZRWGT");
    msg.lat = 0.13425636072624125;
    msg.lon = 0.8909719540865155;
    msg.alt = 0.12916169613911244;
    msg.heading = 0.011568167014651576;
    msg.data.assign("KJPUNBBQWCIUQLXBWRAVHHNVRTYJLQGDFLHMEDUTRJBAMWNSSOGMYPCAPMDWBWYQMIGDYGVCXXGWTOAPKZOOJEBUIIAUJTTCKDZOFDAJIELSPEWVLJQNXBVFRTKNRCIUCTGSGZLAAPASIISENWNQULYKDEFFQBKVNQMOTCIPYMGGHOXEZSXSSFDZXUNKJVOGVEYWZZVRHPUMEOEZOXZRFZICBPVFUNKRMYMCRKJKYHAXWHTCXP");

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
    msg.setTimeStamp(0.6713621945996309);
    msg.setSource(3535U);
    msg.setSourceEntity(241U);
    msg.setDestination(2315U);
    msg.setDestinationEntity(93U);
    msg.id.assign("ECDQAQJFEGSTUXHMUJLWQSVGPHFEWXITHBCSKLZKSFQWOZNTLZMEKUKTPLBOMQDBWRIKYXXPVDQWTLRHQCKIECNZORAJZMACACJQGLIKKABPQFNFXTIIGWMNPSOLODEAIPXRSFHELGGLZYXNWYYIMNJAFDJGWZMTVUWORKVRDJBCYUVVBAHFAMYRKSRHSBYHN");
    msg.sensor_class.assign("SEQEDLNVFIOCUCYIIHANAZPAFSQUNVPKZVFQVITMPFIBWTZECYVSTOLXQKAHOFADJXQIQRZRVIYDAHRNFCOXQTMTSECAPHCJPLRSLPETYAWDCTTNWVZWAXYNHMGUOSLNJEOHQRXRSYSNYWBKPDXOMBBZCHKKJWGOQLMBDWUYMGGUWYQLSBEFCKGHU");
    msg.lat = 0.6882793624455459;
    msg.lon = 0.22555350370348415;
    msg.alt = 0.357174820464055;
    msg.heading = 0.1337456932838622;
    msg.data.assign("ZIBCDYPZDYDUKXSFZPEFSKLWQJAQHFMPVAAADSHUVGFHFG");

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
    msg.setTimeStamp(0.8062360154307224);
    msg.setSource(12729U);
    msg.setSourceEntity(107U);
    msg.setDestination(48944U);
    msg.setDestinationEntity(96U);
    msg.id.assign("DWHLXADVOPMPAGUPQIJEGZRLMHQQUERPLMZBTSHVSMTWWAABC");
    msg.sensor_class.assign("BHTSZRUOWXQCVAWXFFIEPMHQFLUGZCVDMUXDAFWSQDNFSOSHGWKKAFQRYKOXHZDZPIDY");
    msg.lat = 0.28565577028059475;
    msg.lon = 0.8231717169988381;
    msg.alt = 0.04896072684191255;
    msg.heading = 0.9240672397421374;
    msg.data.assign("COWEJHRSDIFUUAUGDRTAQKFAIEVAOZMDYIYLHBOQLVIBKZYWSOKYCFLDMFCJLUQFHFGNASSLFNFRCWMKJLOBKVVNTMZLNMWQXUDJHCBABWDOUDHESYZGJNJDGXBZLQPSYQGHWRVIKGHBZW");

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
    msg.setTimeStamp(0.1689856081066422);
    msg.setSource(17989U);
    msg.setSourceEntity(169U);
    msg.setDestination(39275U);
    msg.setDestinationEntity(140U);
    msg.id.assign("UNMJGHYFJIHSRRLXIOZ");

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
    msg.setTimeStamp(0.7408168359436551);
    msg.setSource(50831U);
    msg.setSourceEntity(42U);
    msg.setDestination(43680U);
    msg.setDestinationEntity(55U);
    msg.id.assign("THVESYTMMZYJLTMHWASLUPBAGGOIWBUYRBGBGHDMQASUJVWHKPXLLIBEGNOHJQHBEMJQCUILRPHCPSJATUOAFENKKTCQTDKYQNOKEXSYRDZEIWFBSFOMAZWZXDSLCVZIMQLPRHNJZZPNKRFYXNGBCBIFSEOVXZMM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RMESGZRRHXKWTPRHYFBFDJCJGOHUKAVWZJNHPGVARVJFTCWMPPB");
    tmp_msg_0.feature_type = 25U;
    tmp_msg_0.rgb_red = 162U;
    tmp_msg_0.rgb_green = 13U;
    tmp_msg_0.rgb_blue = 97U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7435232647631911;
    tmp_tmp_msg_0_0.lon = 0.20393745546753972;
    tmp_tmp_msg_0_0.alt = 0.8350691392506845;
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
    msg.setTimeStamp(0.3257634060674729);
    msg.setSource(29222U);
    msg.setSourceEntity(92U);
    msg.setDestination(17684U);
    msg.setDestinationEntity(163U);
    msg.id.assign("KUKSEDUDPNXMTEYQAFXMVBWRTPHYOZMNGCWSAOZBBNKJRYXKUAHPHNAKTNPFLVNIYRPLOFVYQPGJWVOWCWSUNFQJUWIGJHDXXLDTDLIJIDDRZUZXBTESYJOQRSBLMOZHCGIHTYTAZCSQKTBRQBVQWAFGZMYMKTWSIRXBUAPOOVCVIVKIEJYIMJFSLCEQUNDDZNBECCRFZGSQJVEEHUDFAEAXGLGXLFAPMCMKMIFHLRUSROJZWNGXQTLPEC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GFMCDJOQDGBNEGPRVDKMPCRUJLJLWZEIERRIMAVTXZYDKNPHFOTHAQLLIPNNOYBKHDEWJEJHGGBKSLRQHACAXXGHIFUJMOSIUNLYOTCQQWWELSKBCCEVASUANYEZPWFWBJTQPXSSOYHXBDTBJVQFCBTXYUAVPWTIGJYIE");
    tmp_msg_0.feature_type = 19U;
    tmp_msg_0.rgb_red = 24U;
    tmp_msg_0.rgb_green = 58U;
    tmp_msg_0.rgb_blue = 165U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6642757358160134;
    tmp_tmp_msg_0_0.lon = 0.07409767086343022;
    tmp_tmp_msg_0_0.alt = 0.2948122684357509;
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
    msg.setTimeStamp(0.467216624349854);
    msg.setSource(60236U);
    msg.setSourceEntity(1U);
    msg.setDestination(6242U);
    msg.setDestinationEntity(136U);
    msg.id.assign("HIDYJIOLUVYLYSXXBXADJUWRVBIOFENPRNQBKCDWQYKGNA");
    msg.feature_type = 105U;
    msg.rgb_red = 175U;
    msg.rgb_green = 223U;
    msg.rgb_blue = 34U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7114787702787665;
    tmp_msg_0.lon = 0.5855651002736818;
    tmp_msg_0.alt = 0.30393225242504984;
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
    msg.setTimeStamp(0.02216641312049694);
    msg.setSource(13019U);
    msg.setSourceEntity(219U);
    msg.setDestination(47370U);
    msg.setDestinationEntity(153U);
    msg.id.assign("DBYLPXTFGLRTHGTEZPNQCGFLREELECBVCEJDXNWKIYTRINCANMPLQKWVAINRTYEFSOQNPSSOHXZDPHJHUATHAAJSKJDXZQURLPXIZUFKBUBWRZHH");
    msg.feature_type = 188U;
    msg.rgb_red = 122U;
    msg.rgb_green = 121U;
    msg.rgb_blue = 153U;

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
    msg.setTimeStamp(0.12289376044453315);
    msg.setSource(50192U);
    msg.setSourceEntity(1U);
    msg.setDestination(6826U);
    msg.setDestinationEntity(199U);
    msg.id.assign("BDRYFPJJONASXNZQLGLCWKMCWNMPXEZMRAVLDYNVLCWSHNVWZOPEESLJBXSWGPWTBDKNUETFMLOMQIFATKUPGAFTKYBAYABQRAFGFDVVLPOEIQIMXCNIIUSPKHTGPLTYKHWHFSOYKDEZHBHZOEXEFPKLTMHUMYRZWIROKMCSTAAWVGFUEUHNQXNZZSCO");
    msg.feature_type = 207U;
    msg.rgb_red = 36U;
    msg.rgb_green = 65U;
    msg.rgb_blue = 50U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3439026374038049;
    tmp_msg_0.lon = 0.6601107711875575;
    tmp_msg_0.alt = 0.3807119619410989;
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
    msg.setTimeStamp(0.9301403869455074);
    msg.setSource(44907U);
    msg.setSourceEntity(113U);
    msg.setDestination(27897U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.18127744265873103;
    msg.lon = 0.005673913709823952;
    msg.alt = 0.9880834663000232;

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
    msg.setTimeStamp(0.7132250709670906);
    msg.setSource(45061U);
    msg.setSourceEntity(128U);
    msg.setDestination(55169U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.9043789138613895;
    msg.lon = 0.29737817413959666;
    msg.alt = 0.6142815893825461;

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
    msg.setTimeStamp(0.10206793683250359);
    msg.setSource(58973U);
    msg.setSourceEntity(48U);
    msg.setDestination(51504U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.8578081985810484;
    msg.lon = 0.234306945750006;
    msg.alt = 0.12107798747411735;

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
    msg.setTimeStamp(0.5768762400044873);
    msg.setSource(46680U);
    msg.setSourceEntity(51U);
    msg.setDestination(45507U);
    msg.setDestinationEntity(118U);
    msg.type = 197U;
    msg.id.assign("WKBZMQWNDNGEGKZJGVKDAIHGJVKMKCRUWAHRQAHUBOYSQMJOOYUYSBGBCQURDZJKMAPICVHKRTNAZIYOLJCFNYTNEZCCOVEZFFFNUZMTWFROLHBMGJLCFGLVYJPISOTVLWIJBSTIOALYJUMSLSIDRNDLEYXAFWUGFEWRNHURDRBPMDXSHZSPUQUPMIPKPFRLQTXNFAKCVITQZTPICPXSVJNQXQBXZOODWGHEHHXYAVEEWMCBPYXEDGA");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13840U;
    tmp_msg_0.off_x = 0.3601394803468201;
    tmp_msg_0.off_y = 0.6009089937846483;
    tmp_msg_0.off_z = 0.5482878403437179;
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
    msg.setTimeStamp(0.09611914104955988);
    msg.setSource(11413U);
    msg.setSourceEntity(189U);
    msg.setDestination(58377U);
    msg.setDestinationEntity(250U);
    msg.type = 119U;
    msg.id.assign("KBQRWGXDANAHSFKRUUIEVJRXSBJJXIQRTZTOQLEIJYXTSQWDOXGCCHFPAKXIQUDJVUZZALMDLMVOPVBHCDYJBORUGMDSGAWGTERSXIMPGOYMTCUWNAYEGXKIZVVYRILNML");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.3928926308309093;
    tmp_msg_0.confidence = 0.23743374225555336;
    tmp_msg_0.opmodes.assign("SPMIIUHOZSGXAOKICVKMHVLSYXNAAFFTNEXZNBKEEYUCTQCPHNQCRFARFVJGOLCZFRDIDYVQSFJSBLJYIZNGYYPJZYAMBHVHDAJMTHIHFPGADNBGFAVARLBPXZXRUZVYKYMZKXTEJXSOVLZCDHIDXGBZGCSBNWICEWVMKERESIURQUREWUOGJDODNHOKORBNDTYKWQQFWQB");
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
    msg.setTimeStamp(0.4081955504263727);
    msg.setSource(24853U);
    msg.setSourceEntity(118U);
    msg.setDestination(39349U);
    msg.setDestinationEntity(115U);
    msg.type = 13U;
    msg.id.assign("CTLBWTGHSJLYACBZIKVUIEBMSBLSBAWCWTAOPIVERKAMHEQLSEFWQIFDPEBXHLJDYGMXSLDSJQUXUVGTYFQHIJCAZQJNZATSTPUYGZUMFJFOYHRULDCFLCGHNPWGHRQXDBUTOIVUIKPOFOSSPAUIJEMHQNXRPGDWOMQKYJVXCHNA");
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("KGUFRZTQKDEWNTNBIHZXWYRMJEQRUNWLVTJQYITWGMLWAYTPPXBENTWYULORLPGYZVONJIGFCEHHEAQYXZVRSCIKERGYZVBHLQRZYCASIKQAAVOICZQPVPJGPAOGPIQSPUHOFBCSOKNJEKZSLOSYVMGIDKFZRTCKBUXMIFFXXUZGLLHTXDBCHUWFFAWBMIEJMJDYBKNAHJMQVANJNLFMDEVXUXAQBHTECCMDCHGPMBTDRSOUFDDWXUWNSOL");
    tmp_msg_0.sensor_class.assign("YBKONXLDGVPCQROHOROJGUHRKEMNLVUTN");
    tmp_msg_0.lat = 0.06837422771544355;
    tmp_msg_0.lon = 0.5356114644705176;
    tmp_msg_0.alt = 0.287597705294408;
    tmp_msg_0.heading = 0.5470975013441651;
    tmp_msg_0.data.assign("OWYYNSRXREQVMAFADKEZXYGGJXOYFHKGFSTLZZRKUSIYQNFGSDVULBNDOMEGPTYJBXMRZWMTVVSJGHTGTJWIYHCMCHDFDQPHHXTLJXNTONCPBEAJYBHUCNBJDVXOMVWXAJWXGCFPEUKASUIFRQOBKGVOISLZESCFDQLXBKUAPCKQHACQRERPRUZSMHJCZEYDWQOQBNYWVL");
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
    msg.setTimeStamp(0.33429269897245184);
    msg.setSource(12157U);
    msg.setSourceEntity(102U);
    msg.setDestination(27369U);
    msg.setDestinationEntity(113U);
    msg.localname.assign("TVUECHASSMNVDIYAUDNKWLP");

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
    msg.setTimeStamp(0.09715011824825004);
    msg.setSource(36658U);
    msg.setSourceEntity(188U);
    msg.setDestination(48491U);
    msg.setDestinationEntity(201U);
    msg.localname.assign("BYFGRAIKLAVUQZRVPFEFCVSCTIBXYQRXIIDNIZWWXVJHYDHZPLVNKADAEPHNAMXYLNBXZDGMDEMBTXTYXCOFYUFSWSHSJVWTHZBQFTDEJGBZRLTDPQGNULTSAFQPFOPQGHUZMTFLSJIJEHCKWNSDWLZERKKIRLKOXBCNERKQW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DAMGTILPASIBAUDBAPZVUYPFMFHXCSYMBBRSIWNQOJLGPJRNECVEPBGXOJSCFBGOZDRLXTRXZFRUZHKZKVTNWBCNBTBZQOLMJTOMUXQWXUMAYLIPETKJYJRCNRKKOFUPZGUWADIBZSEKJLLDQMGCNYCQEINKWDXWVYTVHATFTNKQG");
    tmp_msg_0.sys_type = 215U;
    tmp_msg_0.owner = 51961U;
    tmp_msg_0.lat = 0.37440850083726196;
    tmp_msg_0.lon = 0.9876089075525959;
    tmp_msg_0.height = 0.534487323023143;
    tmp_msg_0.services.assign("EJMFOCTPCEMETVMARSGTUXQSAZIUOJYOPZAEGLDXGFKYRHUNDNOPAKJOVFDIVUXENRNSWHIZFPRXHZTWQKGZIKZKVHFQMSFXYXJNMMQRPXJOEAHEWB");
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
    msg.setTimeStamp(0.8111301629541301);
    msg.setSource(21016U);
    msg.setSourceEntity(141U);
    msg.setDestination(46728U);
    msg.setDestinationEntity(148U);
    msg.localname.assign("DJTDJJNYXQVOPIILOIJOYTUHSCDHCRBRQXXLCITEIMWWEFFGWGBQQLLRG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RWIWMGBXAFSHHKOCKXZOZQECUKPJLLQGIGWBVTTOKWGNQWLRWYUHCBDGACUGLPV");
    tmp_msg_0.sys_type = 92U;
    tmp_msg_0.owner = 55083U;
    tmp_msg_0.lat = 0.7774994028999447;
    tmp_msg_0.lon = 0.5891174370513925;
    tmp_msg_0.height = 0.8014125274527246;
    tmp_msg_0.services.assign("RQEWIUSNMXCSNAKFRPISIFMVJHTIDEQVOLBRGBNAYXVTZQOODJELIEAPRKYUJEUMHUQSPPIJLO");
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
    msg.setTimeStamp(0.039814902020004816);
    msg.setSource(47472U);
    msg.setSourceEntity(128U);
    msg.setDestination(13865U);
    msg.setDestinationEntity(117U);
    msg.timeline.assign("HILDNWMQFPPDNECIAOPKSJUHJCYYHRBVKUTYEYYNMWLFKOJFJXXKNAQSEOIXSATHKDEOZTKWFZWHIAFSKGVWFJTSUBVLX");
    msg.predicate.assign("LOBFSAKMUCOZZJRTKLEIADIMELWZPCCJKCTGIIMXNOPAUCRQYAROOFKGVHHOOJTKTESLSMVPWNCXRPHFPWSRXQBENIGAKFYFVGBYZGDMCYBRNTXHSAVQH");
    msg.attributes.assign("PQEIWUVBOVFRDMALSGWBQLCALIMDDAMFJMGRTHKBECQSFITOKUBUFFGMRFEWOPPHTKYUOQYAJQJKPKTZZPHBICWCNSSJQWPACVTXEYGHTRQTLMXAAHGNNEUSVCOSRZHKDZYEXXILAFJPSOPVUMBYGBGXUIKBCULWVRLDJDYLRWYQNETENACLXSRKEIDFSZYDWDTHFMMGNSKVZUCHNNEWJZJIPQMBXGVZONUXBZAPHLHVFXJK");

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
    msg.setTimeStamp(0.9135273990933003);
    msg.setSource(8895U);
    msg.setSourceEntity(130U);
    msg.setDestination(14634U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("LPKWPCTAIHHTHCNYCTBDMFFWO");
    msg.predicate.assign("JOPSORWDOGTGWTAGYHBVITLRJZIUKUEURXPELHPLXOUFHKIGXSWXVVHKJTJCGUBEEVLRQQIJGFHMZMUJNIAYMDNNVXXBTANSTZLPQXSOVYQZZWMBEYOHTGWDDYLRPYBGABPCFAZSWERSHKSRICUIKSVPJYZZRNAJECBKLLMTKURPCPZOQNN");
    msg.attributes.assign("RJJLVCGHEPKAKYD");

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
    msg.setTimeStamp(0.31852535690439676);
    msg.setSource(27927U);
    msg.setSourceEntity(154U);
    msg.setDestination(59463U);
    msg.setDestinationEntity(148U);
    msg.timeline.assign("XSQRCSILQVMOTBGRFKNPUSJDRNRGXISEFFRZQCPPWDFZMYWCSVMTOJHJMWPFGMYBYEOXMLUGUSNEHATOQIZTBEQIBNRIANDVCPYVUSEJGHRXTMXVVSLCQHBGCLOVPNKNKHL");
    msg.predicate.assign("GOLKSXBIZAQPFKQELHDPWJEVZEQATTPXNFCWWMMOLGTUUQNGYFLGMOZZHPTUXECQHOKHBCAMRFXDIDOGSTHBIGHGPWSUJDBYDVOHLRRRNVYFCFAXAMUEHOZYYDYUPUBNJSSLOTJYLCABJNIBXQJLVSGKLNSW");
    msg.attributes.assign("EDLIERRUKFAHCXLZUTRSWBEONIJTARDVMBITEWVDYVAZOFKIGXQYYBTRSBDWTGHYDNUKRQOCAJVXNNNGWXMVZFAOJZZSZGPHURPXICKHMCXLYWVBQIBMAJQQNYQIZS");

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
    msg.setTimeStamp(0.24767707799878358);
    msg.setSource(44549U);
    msg.setSourceEntity(214U);
    msg.setDestination(49669U);
    msg.setDestinationEntity(215U);
    msg.command = 138U;
    msg.goal_id.assign("WUVGVJODWUECPBFPQOFEKKQTHFIYRXA");
    msg.goal_xml.assign("PZNWFLQXIYZEPMPOVKGSESHNIDEFZGDOBZBUQWFJGFAKFARRUGXVIFLHTFTVUSMUEIQQRZEMXMPWVNJVPBLGNEMYDSETWCQSPZTXDWDRZWJGOKGMBBPWAKJOXHICDZRVZCWSONGVLUHYATQLQNVVNTAHKQFNMTJXXOIEAIWU");

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
    msg.setTimeStamp(0.3703764774860283);
    msg.setSource(32349U);
    msg.setSourceEntity(60U);
    msg.setDestination(27035U);
    msg.setDestinationEntity(138U);
    msg.command = 159U;
    msg.goal_id.assign("AMQVYNOWAKPMXTBREPCFVBQWQIUZHBTSRDHLJATGLJYKFUPHMXMYBQBSWAOHKNUMXWLBJSZWJNACSSXODWQICPKEQYPOFEFPGGXSLINFIALEXNKBMMCCGGIIRFIJZYUDXSRUZNTGZTNKKHJORYQYHDASALUECWVJOOPCTKELRJVIDBYIMPXOEHTUKLUZBWHYZDAFYFNRZTJNUCJKUGXWASVEBPHIETWLSVDCVHNQDRLOPXFGFV");
    msg.goal_xml.assign("ZDNWHGDALWHYKEPAJULEGNQERKTHVLUSRMBQZILRSUMUBCGPZDRGNLZYTVCXTXBGSXOFYRNCBUPHVECIIITDGZAPJXGY");

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
    msg.setTimeStamp(0.38818838433388625);
    msg.setSource(36599U);
    msg.setSourceEntity(20U);
    msg.setDestination(62911U);
    msg.setDestinationEntity(183U);
    msg.command = 69U;
    msg.goal_id.assign("PVRWHADYCEMNZVORDZWDUCDHIQNKSYLDTJJEUXFARBISGMQTYMVVU");
    msg.goal_xml.assign("EQSIXHURCEDBSCUOAMYAFRMPLSSFFUDBPQXAKBIDUVEJMJUHNYFNGK");

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
    msg.setTimeStamp(0.8135599467468374);
    msg.setSource(58743U);
    msg.setSourceEntity(83U);
    msg.setDestination(14548U);
    msg.setDestinationEntity(189U);
    msg.op = 0U;
    msg.goal_id.assign("LZIPSOHAXIBFSLDUKXDFAZOHSELDGTJVHMIGRCQWUSULGDTMAENFRVEXF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HFRFQYPGFKZZNEDAKTWVNUVCEJUYNWTYAXULRZBGMWPJOQKVXJHGQEOEJBDHABYFQKYQHSOJHEKSQNMWHAYVEDZZXNGTAYSULHILOGINSPJWAFYZDXZAL");
    tmp_msg_0.predicate.assign("WKHXTBOWNPMFAEMWCRKKOAVBGFVIQYSVRODVWGVJIFNBZVAHJCMNXNJALRWTAAKBQJEQFXLHMYDXRYGKPTHULWQRWYJQELNEUVTIHISACNDFPVYINRJXXMCIZLUMHNJQKFBRYSRGCWUAKKSTNLPOEEESTEZBGOSUTZEPBUOUDIIDZDFZOYVXSLMYYWSRLQLSMFCBPCBPFAZRYQQMLG");
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
    msg.setTimeStamp(0.11518644505680331);
    msg.setSource(18155U);
    msg.setSourceEntity(223U);
    msg.setDestination(45058U);
    msg.setDestinationEntity(254U);
    msg.op = 11U;
    msg.goal_id.assign("UWVMGEMKDQRQURLG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PNFJRUASOHMBJSKDBRNQESAHUGEOEZIQJCJJQWOBMTXEFGLDYJOJBQWUIITOTWZDRCMPHLMKLNVIMYAEQFCVWQOUGQHXRAGAXBIPZMEBGRIFSQCKJAWEDVNZBLPTDKMWAHXIAUKOASWONDFYYXKFIUQFMHLIFLDJMZRTCPBLCWVHPKSDTNUIZCUPBTGBYSWKLNUFSVOVYEXJAEYHYDRRQPCGTESHRVZZGPCKTNRMGOXXNPXDNVYWCLULHKZ");
    tmp_msg_0.predicate.assign("QYBSBTVTVZTIAGJVWWFZFZCRJZOBFHYUSEUUKVADDLGLBGQNFSETZZPOIHMPPGJJEQYKRBBIWJBQQFETKDRLJGTUWTGJAVWWHSUUFCIPJMXJHUUQGKFZEBQTCVTPTHONMNXAVBZPMZKYMDPXDSXCSLFJGRIOCXHOMKMHNKPIEHYYNXVWUIVNXHAOXWPLIOLVILCCXDLS");
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
    msg.setTimeStamp(0.8726918547315551);
    msg.setSource(57955U);
    msg.setSourceEntity(224U);
    msg.setDestination(26784U);
    msg.setDestinationEntity(120U);
    msg.op = 3U;
    msg.goal_id.assign("MRFZJLOIUHCXVMRJJDAAZPDSHMQMSPBQZFWFEKGMQHCYIPNXJMAP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EKEGADVKRZBSEQNJMKZGWLQDMARWYEMNZMDEOHXJLPXGRNOTPIRVFARVUJDXXGYNZAQFOISYCBRVUIMCWSYLCPEPHJXGRBCDLGFYKOTOBHKF");
    tmp_msg_0.predicate.assign("ECGNBFPLTBDWRHFAJGDATOIQGVSMTWEKJPOQSZEIXJDWLXQNHYSJNOPANVPJBNBTVUIEOUEFDCUTGTCADYPMHGSHZNUMVKUQBQZRDLVBHPQDGGXFGOVIILFIZARHVFMNLCMAWWSIKJJBFRIRXWCRKGMWVAERPRAOYQKO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HZLRWOTAMLSZPDTNRJWBJFLAOGCGWSUETGKTFSSMSEFQRFDQNHYMINVKVZOYNNPXPIHTWQUJZCVUOEDEMMQVIBVMCWHHCTVJGCMVIORFGGUAIABUXABDWAEJGYUJRIIYFKSARXPPWZMLLTYNA");
    tmp_tmp_msg_0_0.attr_type = 23U;
    tmp_tmp_msg_0_0.min.assign("VDEWCVBLDFKSUCGYXMPEXGPNRNKBTJHSMZMNZOMUGWPNIZVTCDQAABLXOONWVCYXPYDZJGDXQUUYJEJOHEHPWKVIYNJAMMGWPOFETRYJGGELKURILSMPKFBAEKCJLRXNEXRZNCHRLXBBIQRDCQHEMRLVTVBPZLGUTFBZYUOQWJYLHSEZYTISSCIWGQTQRHKBDLBGASAIUIFCXOCDNVFOSSZOVMQ");
    tmp_tmp_msg_0_0.max.assign("HLXWOKKHFWFHPIXFERVSTXXBUQXAHKDFRXBINEUTPZBYJTCRYIEPSSDIZADVAHFLKHMMUDQNXJNGOILKZLKYUDRWAQFOFVSKTKOAJGRGSRCEQGLRZUHKAOPLNQATOQVCMLNMCCMJNDMGMEWWATRYZBDBQZPFONDIVIEJLBPGVJOSLJBVZPEHYUWWT");
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
    msg.setTimeStamp(0.9703776843082212);
    msg.setSource(240U);
    msg.setSourceEntity(249U);
    msg.setDestination(137U);
    msg.setDestinationEntity(127U);
    msg.name.assign("GFFAJKPNHYXJQDVGDKVSGDXOOORVZWXEIAKHPHOQIMRSPWLEETODKUUUUGJZT");
    msg.attr_type = 114U;
    msg.min.assign("LLHBXKOTRCYYHGLKYOTXFDEZZVJCQIDZCDHHOXHKHXMRJBGOJJEXCPKCOMNVY");
    msg.max.assign("GMCMHNTUOPFACFTPCSHXKUCRKUHDGXQANNGKBLDLDBIPEJQKWVJSROTZZZRBVZGWSEONENSCOITXZPBIYDIYYJOAYHGWUGEGJGPKYTKESLTXMOZHXJHCSUIRALBXDQKFQVQRTQ");

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
    msg.setTimeStamp(0.6974683687908094);
    msg.setSource(31562U);
    msg.setSourceEntity(43U);
    msg.setDestination(26317U);
    msg.setDestinationEntity(26U);
    msg.name.assign("HQJDOCXJHNAUVNFRDGQKKQYBMNTRUKCIOTEKADLIFVDZBEXXRSGPZURFNUEKVEAXCMXWAHPZGKXJMYBQOFGVOILMFDIZUOFLLVDAERVQIIECMPSUYOOYXLQJNBPDEPAZFTSORSPEAMFKVVJYHDZHJZJYNJWRHLUK");
    msg.attr_type = 73U;
    msg.min.assign("QYSCGKXMERFMZCXOWNXBJXPNFHYCBITNSMLHYHPYFNXAWRPBKOIDVRWLEZMSBZGOKAQUYGXGGSGIEEFEUHQZAFMOUMGJDGICUKCANBHBBOCTXSDURKUXVDNTPQQJALPKLJIFBW");
    msg.max.assign("LWCOILSANZKTPBUKOSSSJRFUJDQAIMXPZNDRUIYTVUKHVTRHDHPUMYANQGAWSXWKPOHKQEIBJPZELJTZYMLMDHXOOCSQVXAVNDIXBBNFXMMTUTZNHOJPEFWLEXTDCIYZKLWBYYBPUUCFQSEADFSFZCGKSRBJZEINLGNRKGQVHEDJRGHEGGVWNUZEGINGXXQATTGWRLFMRFIWRWLJHPPU");

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
    msg.setTimeStamp(0.9347244766897376);
    msg.setSource(18028U);
    msg.setSourceEntity(10U);
    msg.setDestination(60851U);
    msg.setDestinationEntity(145U);
    msg.name.assign("TGLFVYJULYCEIXKRSOASBSMIHNFMCITDMWGQZQKFIUNBQNEYUXRAHXNTLUBPMKGTCQYEGROWFJNSJDLNHZR");
    msg.attr_type = 113U;
    msg.min.assign("SSUGJZHBOQASJTDTFT");
    msg.max.assign("WQRMUAQXLFLOQWWITHZAYGPPNPJKPPDWW");

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
    msg.setTimeStamp(0.7342661269406213);
    msg.setSource(61577U);
    msg.setSourceEntity(133U);
    msg.setDestination(43366U);
    msg.setDestinationEntity(150U);
    msg.timeline.assign("REACZMDFYJVXVKWPNSDEXOZJNCVKHFXKQYMVSDGXPOZGMOXQTUUPJNOZAVFPZKTUGBKWNGEJBVCFOGC");
    msg.predicate.assign("JOHOACTDAPXQGQMCMKUTRNOWDHEMFOKHKVSPZUAQJWGWYAGRESICDUPQNJCVFPPBNJPINWGABBLTRINETUHYHSOAYBMKNLZDRNKDOZRXJLNMDFDXTVEIKQ");

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
    msg.setTimeStamp(0.7049918878368251);
    msg.setSource(21466U);
    msg.setSourceEntity(110U);
    msg.setDestination(41629U);
    msg.setDestinationEntity(174U);
    msg.timeline.assign("LXWDUVZUUGRGCOZPHQWHIVCMMZTXVXUOECXAUJAPYRDCSUIIYFNVOLDQHTDEMKYSRDLPHEGFQNYUQSGZAEJWNOKOHVGJHDKZMAAFAIKNZQTKDRQBRJGTADQ");
    msg.predicate.assign("QSGEXLLKHBYBCBIYRNZEMMIHSXROSBKYAEXXISVPKJXFCOCFFPLWZHXMSHDIOFEIXQMGLDGCAUAIWDMHLEMSARYYPDOHJZUUKYTRACCTUJUAESYLEQGLQBQOXLDVPEHMDJLQPPMFBBZNVFCGQPXUWTT");

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
    msg.setTimeStamp(0.5190934076730569);
    msg.setSource(33073U);
    msg.setSourceEntity(86U);
    msg.setDestination(35578U);
    msg.setDestinationEntity(176U);
    msg.timeline.assign("YSMVEWINWFEPEMVPZZINPKGHZLFXPUDQTRKPHJ");
    msg.predicate.assign("FOCLXITTDRUYIJCNGPPKHWRLWTXXZMMXMCYHMSBFDQQAWDDPJRZAFWJRCBIUZZFLMMGROEEONECBNISCRHQTDQVWTBZIFHGRYOPIXUVBHSGEDRLVRWOKAPCPQUQLBPHZSJOQWMNKYUVWHIZSFTHTYMKUHOSVVIJZNXKXBJINQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OBVWEUUORFKBSDRUNYTHDKHOGHMJMPCKHGHJCLGLRIWJFLCDSAAAJVBHBTSGGNNWXBHWMNITFYRDTROPQLLDJAEUJOMVYMMEIJPXWELJMKFMINOABQ");
    tmp_msg_0.attr_type = 51U;
    tmp_msg_0.min.assign("QYBFHTKJABSSXDZOWJBLIURWJNOEUNYJWCUCTYOEEIFXCUMYLGZERGKVOGXPLDQAHGCWDICBTWFPLKWYVBPJYLWBASMMNRGMVBIUZLCXUHVJXZIYLQHRKINBZXKDZOHNWTKIHREAOESUBZFJBGQZSEOOVXCFKQADQKRGMRWUAWPAGCPXOHS");
    tmp_msg_0.max.assign("ZYLOMQRFASGFBWLEVRUNGDTWOXROBYRYCHDXRYEJMIUBWOVOPAXHPASXYTWNHOMUAZJPCVSQIIAJNIGMGLDMPGLVGMTNNWQJHMQZRGUCWCVZQKPUZJHPIBSGHJJTOWHUGWFCQXDRPUNWQCQ");
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
    msg.setTimeStamp(0.7672108180191217);
    msg.setSource(37284U);
    msg.setSourceEntity(4U);
    msg.setDestination(62427U);
    msg.setDestinationEntity(160U);
    msg.reactor.assign("BZTFNKKZIKOFVBYJWGYGYTYGDGFMKRDXQMTDLY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XBZDHAIUPQLIQDNOYWFIBKMDCYBJRELGDJCGTKBHWWJWJRQSCRUKNOILTVEZZBWPVJGIVMJXYTQQUNXPGXUHTOSIYPFHBJTSNIFFEKVNNFFQYBAPVONZPRJHFSPMHKCEBIGGTLCCWKABVRFWPLUOEQHZMMFDFHDTUOWVJSZXMZXRYMRGVSMLWVZKCWSVEUBAZT");
    tmp_msg_0.predicate.assign("PBGGVYGNWDANAGRYMPCKZUESZRBLMGOILQQWJVAJRMZFOPOZOAXHNEITTYUWRPDRJXYCQVOTIOPQPESEJFTRDWIKKZWCDFNFGZDEFKIIYURQAPGAGYHCMXULNNYCWHULMPKLUJGCSDAIHLEMACDVOAGKJWDUXSRCESETBMUVHJJQXHRCSTBQFSLVVZXBFLMBWSTHDPBIQXFTNFZJHPLMNQCMEVXYIBWKHSVUBEYBHNWIYUROVXTZJNSZKQTOF");
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
    msg.setTimeStamp(0.4641144078482501);
    msg.setSource(7492U);
    msg.setSourceEntity(92U);
    msg.setDestination(12376U);
    msg.setDestinationEntity(85U);
    msg.reactor.assign("CAYJUWLJUPSAZVGEOXQTJSYQJSAKCTXPVTHLYPIJVGBOFEPMHEDIAUFZJNGWWMTYIFOMBMJQZWQRXHDKBRVIFQXSUOXDSIVOZRVEHBJXICNHPMDWSYTWLDOINGVRBZBHKZBVHBYMYVTHQONKUBYJFTZRICEONXEM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MWYESJQVAOGUSIRGVXLWTFTKFQMKWUJDZNZMULPOFZHFNTDSXRZIBMALDUTOBLKJNVOJMXYXDTCPNDYGWPZOOAIYYGCCYGNRPZWIGWDBNHPKZCMCWLEEYZRQGTFRLKJWKBFUECABILQQUEJIDLCBJPEXJTAXSPVNTIIYQHKVVVKBGLEYBFPWUKXXFARXMHRNOKHMCBAJVHVD");
    tmp_msg_0.predicate.assign("ESQZTFRBXRRUQEYLSAUPUHEMMYZRBMXPNASCLPIVALQBMLDMBFIKPYGWSGSRGHPGZFMOVLDOHOWNDJIPIULXJNCZTMXBCGKNLITKJFRZKHSPDSHQVVPAXARHWPOOQMOEPTWZZDYWLNQVEVSXZICVOUWFUKKQCDXYJGJTCIIFCXQVAJNRAOOYYEWZJBKRTTAVHLNFNKVLXEFISTEBBHNXRDUYWDFTUUSACJDHCAWJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HWDKNVZJSHJKCLVRWOJEMHYIDJJGZVHGTPPDYQGVOCBLXCOPIHLZVPEUAMGEXOQSJQIIDBPGRJCYPBABHOYBFUVLXSLYQPIMDWZDKRLLCEIITCLKUUQEUZMZFNAOXZUTHMGWDFSSMQFTDEKBERVHPICCUDBHLVKONWUAFPIZRSTBRYXONEGRTYACNWFMNA");
    tmp_tmp_msg_0_0.attr_type = 209U;
    tmp_tmp_msg_0_0.min.assign("XZZTUAVDMEAPHWYOSDATADSEEYHCZFSPEITFSUKDMJILBC");
    tmp_tmp_msg_0_0.max.assign("RUALMQZCTSHYQNWZHDBKLIG");
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
    msg.setTimeStamp(0.1564546073634907);
    msg.setSource(59593U);
    msg.setSourceEntity(18U);
    msg.setDestination(60132U);
    msg.setDestinationEntity(28U);
    msg.reactor.assign("XCIHWWPSNXIDORFECSGMZMUQVRYHSQPKUQBFJKOHQMKRAVPQJFTXLWPFPABRY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PADDEJDFLZMVZAKPMPWJGWERSOWAOLGJQBGKLGJUMCEJNYVPUPSRLYTFWIBUNFDKOBXHVTFTHWKLIYYJHOZBKZCQXUQBAASOWOQRVHUFNSHPGVEHMXGTSCIGTMLBSUKXOXJNGUTRNZFCLDNNZBFKTQEKSMNJBABFREEODDEIICJMVDVYXQITHXURECWZPCKTXWNAJSSCIQYVIYTFRSYHAQLYPMWHGDPOZC");
    tmp_msg_0.predicate.assign("OGQXFCJYCHZCCXRBMRWYCTIFUFTVAQUMHVYUVCYTBWPHHMAFLOZBMXPVSZHNAPMLRYGZJOUNDVEXWTRLNIRWLYBKUIQKLNYBLCNJRKOTZKDFMGZUKZTWVALFJMSZDCTGHSGNBIVEXUDISFSAOTEOEOIKXAWFGZGESJUDMDASWNVZRE");
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
    msg.setTimeStamp(0.14939036237875658);
    msg.setSource(27636U);
    msg.setSourceEntity(239U);
    msg.setDestination(53117U);
    msg.setDestinationEntity(160U);
    msg.topic.assign("YLDBEKTQKEHXWAJNEERIPUGCSXOSHNXZUOKLRUNVCKSXNSPIHFSPLUBTYRPZKFFXOEQEHUTTJLLCVGNOINFIQYHNIMLZBWQACNFAUWOQPKGTRBYWGAMVJBJVWLYVHHJIDWCJLPIUEUQSHXRDUZ");
    msg.data.assign("OUUXKCAXDEZIMGCTU");

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
    msg.setTimeStamp(0.9280748996330404);
    msg.setSource(61570U);
    msg.setSourceEntity(109U);
    msg.setDestination(58638U);
    msg.setDestinationEntity(27U);
    msg.topic.assign("KIJPCJCVRBYHESMIH");
    msg.data.assign("LDGQAUQMFQZRFTTEHSKDZCYJHNDXOZNOORUFXORPLTEPORZXIKBKLIRKBSLZPMBKWLELPGJKQMYNGIXDTVUJFKSMVUVUEZRIANIQWUONYJKENNTNYVAHWHJWZIMYXEFVYUCARDHVAADPSGYLSGVZCOBCCPAFDJEOQMUXAMBMPVDEWDNGCMKVFBTSSBTFTYILLIFSWTVSPDTJMKWWGLEAXBFXQYERRHBQXCRWNUPIOJAYCSWUHGGJOPBHJ");

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
    msg.setTimeStamp(0.936154254087002);
    msg.setSource(3995U);
    msg.setSourceEntity(170U);
    msg.setDestination(22993U);
    msg.setDestinationEntity(183U);
    msg.topic.assign("GBXLKHJDJEYXVWKXUKESEIXDSLGSDQJQVBJUMVUMBCYVTYQCAHIABUOZRPHGERTEWNXTNDKLRMRFBHPSNDSNJTQBXXCSCQVDIGSEAEIIAWLOIXYDLEUAJRUCFJBWHZTPYWIJZRNGCIKGWSEBMHOPVPFAXOZLZDSIZJGGTPHOCL");
    msg.data.assign("FKIGDOSQJDMJHWSDRWDPDRMEVQFXQLRKOEEVFPIKIGMCPZEBHFLAYPRYXQNWKMRAYOXS");

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
    msg.setTimeStamp(0.45172805877408795);
    msg.setSource(32962U);
    msg.setSourceEntity(238U);
    msg.setDestination(54483U);
    msg.setDestinationEntity(42U);
    msg.frameid = 239U;
    const char tmp_msg_0[] = {-106, -84, 87, -124, -115, 89, -39, -78, 1, -117, 117, 58, 80, -117, 123, 20, -54, 23, -111, 87, -103, -14, -126, -53, -7, -118, -67, 116, 35, 107, 4, -63, -30, -41, -26, 66, 32, -126, -56, -81, 19, 0, -122, -103, 66, 29, 2, -127, -39, -37, -105, -90, 74, 75, -37, 55, -104, 47, 123, -50, -15, -47, -82, 112, -27, 47, 1, -25, 3, -20, -39, 104, 126, 49, 109, -19, -96, 116, 43, -85, -94, -92, -109, 63, -84, -4, 56, 18, 3, -61, -40, -49, 103, 54, -85, -39, 76, -72, 113, -56, -89, 92, -91, 25, -70, 107, 4, 69, 37, 35, -79, -115, -3, 20, -31, 38, 126, -72, -6, -97, 117, -23, -105, 61, 53, 0, 27, -88, -47, 2, 11, -8, 45, -35, 59, -39, 47, 29, 50, 11, 44, 124, -113, -83, -8, 88, 101, -6, -61, -102, 14, 106, -55, -5, 43, 61, -101, -48, 20, -119, -26, 51, 26, -97, 68};
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
    msg.setTimeStamp(0.20093723440015143);
    msg.setSource(910U);
    msg.setSourceEntity(232U);
    msg.setDestination(18290U);
    msg.setDestinationEntity(164U);
    msg.frameid = 38U;
    const char tmp_msg_0[] = {115, 113, 25, -23, -109, 26, 25, 80, -64, 6, -70, 56, 79, 120, -19, -99, 88, 56, 115, 28, 15, -60, -17, 89, 54, 85, 90, 90, 120, -43, -39, 86, -63, -109, 105, -71, 87, 65, -88, -105, -41, -118, -89, 89, -76, 25, -93, 25, 0, -89, 124, 71, -68, -114, 16, -73, -18, -30, -53, -21, 16, -4, 104, 3, 107, 51, -55, 116, -4, 76, -22, 118, 106, -78, -74, -36, 5, -8, -25, 95, 36, 84, 31, 79, 36, -48, 60, -103, -6, -90, -76, -127, -86, -101, -97, -58, -114, 49, 80, -106, 100, -1, 11, 86, 66, -69, -124, 70, 126, -28, 122, -73, -80, -10, -89, 45, -106, -68, -118, -128, -74, 7, -3, 104, 116, -36, 82, -117, -24, 74, -123, 66, -89, 68, 32, 114, 116, -54, -65, -108, 106, -36, -93, 75, 81, -117, 55, -35, -74, -81, 94, -39, 72, 29, 100, 32, -17, -118, -114, -28, 113, 77, -10, -21, 6, -3, 1, -109, 22, -57, -40, -44, -55, 97, 40, -50, 118, -107, -103, 14, 31, 72, 107, 119, 24, -14, 55, -127, -114, -5, 47, 93, -123, 35, 63, -96, 33, -102, -19};
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
    msg.setTimeStamp(0.6101796863303276);
    msg.setSource(18471U);
    msg.setSourceEntity(2U);
    msg.setDestination(42852U);
    msg.setDestinationEntity(218U);
    msg.frameid = 132U;
    const char tmp_msg_0[] = {52, -98, 119, 75, 113, -59, 119, 45, -21, 53, 8, 83, -68, 76, -44, -24, -103, 64, -102, 73, -32, -20, -68, -79, -23, -51, -127, -26, 78, -114, 63, -44, 9, 9, 67, 1, 57, -47, 49, -59, 91, 38, 18, 55, 91, 19, -38, -33, 99, -47, 43, -44, 22, -98, 34, 120, -72, 31, -65, 81, 107, 79, 12, 111, 114, 108, -82, -18, -39, -61, -61, -78, 81, 117, 119, -20, -48, -70, 10, 68, -3, -105, -86, 58, 11, -55, 59, 88, -13, -124, 71, 71, -44, -4, 98, -115, 82, 7, 122, 98, 95, -116, -115, 96, 119, 95, -90, -79, 56, -64, -3, -87, -68, -115, -109, -45, 19};
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
    msg.setTimeStamp(0.06355181157718826);
    msg.setSource(20432U);
    msg.setSourceEntity(34U);
    msg.setDestination(788U);
    msg.setDestinationEntity(174U);
    msg.fps = 32U;
    msg.quality = 108U;
    msg.reps = 87U;
    msg.tsize = 117U;

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
    msg.setTimeStamp(0.3336918124157543);
    msg.setSource(54203U);
    msg.setSourceEntity(87U);
    msg.setDestination(23559U);
    msg.setDestinationEntity(63U);
    msg.fps = 116U;
    msg.quality = 161U;
    msg.reps = 134U;
    msg.tsize = 26U;

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
    msg.setTimeStamp(0.7692305340572732);
    msg.setSource(11097U);
    msg.setSourceEntity(122U);
    msg.setDestination(34789U);
    msg.setDestinationEntity(89U);
    msg.fps = 188U;
    msg.quality = 141U;
    msg.reps = 101U;
    msg.tsize = 218U;

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
    msg.setTimeStamp(0.08508932776985711);
    msg.setSource(34601U);
    msg.setSourceEntity(182U);
    msg.setDestination(34598U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.8086425952333834;
    msg.lon = 0.516782023081369;
    msg.depth = 43U;
    msg.speed = 0.9278621614979061;
    msg.psi = 0.8949908590103145;

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
    msg.setTimeStamp(0.6911146345569067);
    msg.setSource(59960U);
    msg.setSourceEntity(125U);
    msg.setDestination(39609U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.6100263677066846;
    msg.lon = 0.24210032503403545;
    msg.depth = 23U;
    msg.speed = 0.4357329666172495;
    msg.psi = 0.5672618999624156;

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
    msg.setTimeStamp(0.40525439467231517);
    msg.setSource(8164U);
    msg.setSourceEntity(132U);
    msg.setDestination(3780U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.024322549819839945;
    msg.lon = 0.5325284821769478;
    msg.depth = 5U;
    msg.speed = 0.5933066327783924;
    msg.psi = 0.6382966191153114;

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
    msg.setTimeStamp(0.24941788872396597);
    msg.setSource(22891U);
    msg.setSourceEntity(187U);
    msg.setDestination(11338U);
    msg.setDestinationEntity(180U);
    msg.label.assign("FUYSDZXRYBRPLEKTTCKWCTBTZN");
    msg.lat = 0.18622816444285695;
    msg.lon = 0.3243915397866479;
    msg.z = 0.34003928737696687;
    msg.z_units = 131U;
    msg.cog = 0.2665717230283784;
    msg.sog = 0.40481926223662446;

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
    msg.setTimeStamp(0.7854895401108745);
    msg.setSource(31254U);
    msg.setSourceEntity(247U);
    msg.setDestination(29760U);
    msg.setDestinationEntity(202U);
    msg.label.assign("HNZYBMEAYDROMZJPGQ");
    msg.lat = 0.8596497323149294;
    msg.lon = 0.6870817048016411;
    msg.z = 0.4448110338577692;
    msg.z_units = 175U;
    msg.cog = 0.023900165282382924;
    msg.sog = 0.44978470248841185;

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
    msg.setTimeStamp(0.4928072202728263);
    msg.setSource(6271U);
    msg.setSourceEntity(143U);
    msg.setDestination(29976U);
    msg.setDestinationEntity(70U);
    msg.label.assign("JAZJKRCAULMYEHYBZSSFDNSVDJVHFBUEROCUSFKZFQQZQOEZYGEAYBCTLUUDNWMIKCIWIQYWERIMLMWVXIEPDPTMLTHOKUSGLNIVRSMAKWCUOZKRBLIRXTYLLTQFNUMDQGYDWXGOZHXLCSCDPBPTXJLUXCDWXPWJFAJFDFPEHSZHGGVDQBBOEORO");
    msg.lat = 0.48426007748149114;
    msg.lon = 0.05084223333634519;
    msg.z = 0.553327323180708;
    msg.z_units = 177U;
    msg.cog = 0.7204964105207377;
    msg.sog = 0.04816153218621766;

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
    msg.setTimeStamp(0.8558234410093485);
    msg.setSource(4016U);
    msg.setSourceEntity(178U);
    msg.setDestination(62160U);
    msg.setDestinationEntity(4U);
    msg.name.assign("HUQWQHHXAPMVDMYYREOBKWOIZTSFATQGKFEDXJHMPBANBWUTLBHYWIPUUAQGYEBYLSCRXIIRZJRUICRATJIGEPBSCNNPXVYLPDIZNAKZPEVFMQJXDCSMOMGPWZQLKWBIVNZYXKMDQWPXLCKOTFNFKTWYZBGORJTYZMVKDHJUJAOEVLUCNCOJSGPANUHDMDTGREECAFOOSVGWIRXRZLZQFCNECKKFYQMTVDSIDLFHS");
    msg.value.assign("NREXUDDRDVWQFMBWKBQNUZBPRJRYGFFXKVMFJWJGNNETBHTWTCTXTFYERNRJONMJQSLUSZYCRCSZGVBYGPJOMUUFLSAULKMJQWPZKHXGBXFZCAMWELLEWMCSCWTTOVHRTDUKAFEIAWGIETVZNVENDHJKUKPUQHJIHMVQVOSMOMXQYBLNHSPZZQQBAWIYHPXHAOYXCIVGPXSIB");

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
    msg.setTimeStamp(0.6277193439441152);
    msg.setSource(520U);
    msg.setSourceEntity(62U);
    msg.setDestination(21279U);
    msg.setDestinationEntity(140U);
    msg.name.assign("WMIEUYETDZWDBKQONZGQHMOJNDAZWDJTZNVBYXBRXTLCEGBVOGPEUNLOIHDZLAOIAASCAVDSPGQAVVCMQWYIQFWNBXMHFPFBJFQRTRKJZFVUFHJTCOPVCNHHRYXTKUUHUCDQGPTFXKL");
    msg.value.assign("ZHPKKZOZJQICRZBLYBOAXKZIPWOGIQPVOZAAMFNVLWETNBPFYJSCEHEKQHJEDQHOXSGIRBGPXZSJGQZVLMBVIQCAXIOFRKIUEQLXMTCUQAZXWRNLWMTJCFGNMTXLNOMXTXFBBFLPYHGBSEUFPTPSYHDAJQTVJDWUAFFVRVSHPZCI");

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
    msg.setTimeStamp(0.23971097475139347);
    msg.setSource(12659U);
    msg.setSourceEntity(208U);
    msg.setDestination(64424U);
    msg.setDestinationEntity(181U);
    msg.name.assign("TQYOGIXDEKGMTJDRVLGNOQYY");
    msg.value.assign("FMUCLXOPYRMOGLAPWSDJKTXAVJVVVJBZNQYCNMHLWMDHKXCSEFUHTTIQWYQPGZOMFJDGIDSPCHPJEVTTXUBAXDTADUURGSRTACJEPRWYIAEVBTZOKTEYFNFXPKULLISJFPDOQNRLXFCELFIBHWMWKPKKLNIZXSGGOSNWODXSEBQMRHUQHNKAYQKBUZWNIMUZDVBJLFIWJNSCHA");

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
    msg.setTimeStamp(0.18968087967381253);
    msg.setSource(27933U);
    msg.setSourceEntity(234U);
    msg.setDestination(30538U);
    msg.setDestinationEntity(232U);
    msg.name.assign("MEGPJRLQPPP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BLZFWORKKQIZRPVQNHHKUAREDONEZFPOYPZWYWAZMCXBJGUXFJKYCTSXAFJROLPBUWZHNPNCGYKDIQCLFBTUNEVZIQLDIWLJ");
    tmp_msg_0.value.assign("IKPEYSQDDHIVNMPNBAJVYGRBOGHCHZZUSDLIHDWWOYCQCGWDUJYHXUFCSMNEDOBNVMWHUPZTKFAMXJILFJLQTZTJBCJRBVSPTHSXWOYAWRUPJLLBSEJEUCEIORTXLOLWJIGVMHFFNSJCKWDSQBHQEROZDVYKAYORTKMYMRBXTHNFVVZQLICPNKIMGKUSQPKXCKNAGNVWOLQTDFGCUISAUAUGRRBZF");
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
    msg.setTimeStamp(0.7393573279675423);
    msg.setSource(30727U);
    msg.setSourceEntity(26U);
    msg.setDestination(4741U);
    msg.setDestinationEntity(0U);
    msg.name.assign("IWWTDRUNVQRWJQLIJFOMRLWTXCUJEZQNIWLKUUMLZ");

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
    msg.setTimeStamp(0.9612171946411436);
    msg.setSource(54687U);
    msg.setSourceEntity(100U);
    msg.setDestination(3237U);
    msg.setDestinationEntity(220U);
    msg.name.assign("YLWBBGGTTUZCMTMUOYOPCGWSHZHSNHVEDXAWOXAJTPS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BFWLDJXRKBBUMTXCVVECIQUFWOMKGOWVQTEEOOLQOHDAYYSXVLMFUELRBOMICNZKUTOPCISLXEINSXYRPXNHWJEGBJENUQRBLZQQSGVLBCVRTHQHUNSPTDPFFANXOCVRYLLMQKWJEGAQZGNHAICJPKANYLISDGSIA");
    tmp_msg_0.value.assign("QDEVIUZEITIVZTXKEKXPGJAFYOXZXWHATPFVPUMHERVBWCWHKLPEYQNRGBCGGWYNEAJDAYXHCLYFALGNHQBQDLCSTGNZPWXUZAVQIIISSABD");
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
    msg.setTimeStamp(0.28025189635468994);
    msg.setSource(36112U);
    msg.setSourceEntity(173U);
    msg.setDestination(65480U);
    msg.setDestinationEntity(129U);
    msg.name.assign("UXJYJWQXSSDLUTNAGGPEXMOEQPIBTWOCHTRYSRKOZITYOLFOWNVAIKJUQKADMXHBUVJZXVQEQOAYQGSPEZHJQXBFVBJTNGXAITFCFIZKOCKRKJHPUPXZDWHLRQMBMCKESYYINCWWQDNHNNNIDVPDTMNEJHYQUMTGOUISTHMFSBJABFYODFFCMZESNFVWLDIMYSRGJUDGPKUALYGBFPKPCDVZOKHSPAWXLILERRZMRUZLVVXGCTVLEAEHCA");
    msg.visibility.assign("FHTJMOJSPDGVAGFGKOGTSAHPPANYEYQJVYSOBZEIBMXUWTOERCFKEDCMSBKWDEUPTDN");
    msg.scope.assign("ZGZNYDVYURYYDQGZKHGJWSZNUMJGLTRCWXBILMNRCWXMRKMTTYAMXRKHNFLQEZXHNHLE");

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
    msg.setTimeStamp(0.39294613065503825);
    msg.setSource(58797U);
    msg.setSourceEntity(244U);
    msg.setDestination(20338U);
    msg.setDestinationEntity(189U);
    msg.name.assign("JPPLVXLDHPHNHGYAUKMXEVKYZMVUQJKNMLCJODWIQRANVTTRBKRENADZYZBOPAGLTBGPJPCCWBCDTOQWVYUZTDZQDUUDIFLXNVJPSWCEXUMWRZPOBSHULFSMMGBOWIUSHOFXYZCVDIQMHXIWNRKMSXTOMVEYFIKGPWZJFRHAULAHWQFFGINQZLICUKECVKJNTJ");
    msg.visibility.assign("XFCGWBZEMQYSGDXLIGJGXDXMZRMASDZHBQUQTOBHFHLALADLGENVTNFZYUZBYKPZCFQQJWORNAJPZAAVAPXGKCKPNAKMWKEWJOLXLI");
    msg.scope.assign("KMSBZMQTBJZHPPHJYVFYMIPJYPNUUDTHUG");

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
    msg.setTimeStamp(0.3416811267087263);
    msg.setSource(13011U);
    msg.setSourceEntity(82U);
    msg.setDestination(46342U);
    msg.setDestinationEntity(7U);
    msg.name.assign("NDGJFKJVNWWAQSXUQNKGAFZOHOEUVUIUVPICDRSCFORASNN");
    msg.visibility.assign("PQCLITLWSWOTYSPXLOZZCNYBQEEFGEXTZCNAJBRJOQBCSHHNUNHEVQEXJCQAONYHGFIHAYWQPFGLMCJTRRHLTTKIIUSPMAAPNKRWGOOQJFIQYNZWXTVPGJUKGAKVRYKOPUMFSCNJDMPEDMFWUJIABMKLGFGSIIARDOLTSBHGHD");
    msg.scope.assign("NQNATQKESJXRODAQSXBRYPWBUCKZGWQSXLUIIEHDRSLVTBSZTTZXZVOEPIVFLGRCKUFWZMZORWWNHFUWPGYUIIQTEYJAOOGYUNCCSEARFC");

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
    msg.setTimeStamp(0.7338468865337308);
    msg.setSource(51608U);
    msg.setSourceEntity(180U);
    msg.setDestination(31229U);
    msg.setDestinationEntity(80U);
    msg.name.assign("CHHHMEQEBWZSXWG");

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
    msg.setTimeStamp(0.5167239843913001);
    msg.setSource(2308U);
    msg.setSourceEntity(180U);
    msg.setDestination(12797U);
    msg.setDestinationEntity(242U);
    msg.name.assign("XOPLBVQLNNSFCDNGIXUNDYQXTUBGUERNEFCHTDQAKAPMZLZYCPSOBVJAXAXTOFOYUGCYKBBFBKNJFMJWZVZJKWOFVGMDP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UEIGSKHUCDLPAJUVHSXXFXHFSCYEHFCFZWZYAMMIBXZDLIZSKYKZMNIEBVJGJAJTXKRORRTWXCZDYWDQAVEJYELFNBKUONKQTJONBDURDCIQZMVRYLUZLWFVPNNXPWFOAUEBQHQBMYMITEWZDIGGBOFHITJRSASRUAARBSPULGHDSWMREI");
    tmp_msg_0.value.assign("CIGIIWTJJTRLZTAHFPXKCZISOABBZTBMICLUOHELOOFLEPUAURKJVRGLBORCFZXBZNXPCSZDJMJJVDMHBYFTIRINYNDPPU");
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
    msg.setTimeStamp(0.3703765164727286);
    msg.setSource(29737U);
    msg.setSourceEntity(144U);
    msg.setDestination(32117U);
    msg.setDestinationEntity(138U);
    msg.name.assign("FTLDOXCAFRUAVLYMTNEUANGVI");

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
    msg.setTimeStamp(0.29114733635251855);
    msg.setSource(3058U);
    msg.setSourceEntity(244U);
    msg.setDestination(26853U);
    msg.setDestinationEntity(172U);
    msg.name.assign("THRGVDKHSOMVCGJNVZQIUIFHWNTACPUKVPNUYYBHIZTYXJYGPXDEKWTDXPTZZZLFBGRMKTFDCCQRFZBCOP");

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
    msg.setTimeStamp(0.2025878284346878);
    msg.setSource(33680U);
    msg.setSourceEntity(40U);
    msg.setDestination(50221U);
    msg.setDestinationEntity(225U);
    msg.name.assign("OSDHHSHNZZKITKWJBBQOPCYEDQPBFHZZCTLDYR");

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
    msg.setTimeStamp(0.3850373311584404);
    msg.setSource(23913U);
    msg.setSourceEntity(148U);
    msg.setDestination(5412U);
    msg.setDestinationEntity(187U);
    msg.name.assign("AVAZXQTXKBEYLENTZSWKNRDULJRTOUGSXKWQJFKMD");

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
    msg.setTimeStamp(0.39709634251079073);
    msg.setSource(34314U);
    msg.setSourceEntity(51U);
    msg.setDestination(213U);
    msg.setDestinationEntity(212U);
    msg.timeout = 2876841720U;

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
    msg.setTimeStamp(0.47043718562978964);
    msg.setSource(27022U);
    msg.setSourceEntity(122U);
    msg.setDestination(45529U);
    msg.setDestinationEntity(128U);
    msg.timeout = 3923830028U;

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
    msg.setTimeStamp(0.3900758883408213);
    msg.setSource(39671U);
    msg.setSourceEntity(46U);
    msg.setDestination(12493U);
    msg.setDestinationEntity(142U);
    msg.timeout = 2261562319U;

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
    msg.setTimeStamp(0.4906646433078171);
    msg.setSource(12699U);
    msg.setSourceEntity(100U);
    msg.setDestination(54551U);
    msg.setDestinationEntity(40U);
    msg.sessid = 1617904011U;

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
    msg.setTimeStamp(0.8435883700145097);
    msg.setSource(41808U);
    msg.setSourceEntity(219U);
    msg.setDestination(52267U);
    msg.setDestinationEntity(253U);
    msg.sessid = 2257333074U;

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
    msg.setTimeStamp(0.297924745973301);
    msg.setSource(56169U);
    msg.setSourceEntity(166U);
    msg.setDestination(37053U);
    msg.setDestinationEntity(39U);
    msg.sessid = 2692322218U;

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
    msg.setTimeStamp(0.3646320771876075);
    msg.setSource(11185U);
    msg.setSourceEntity(229U);
    msg.setDestination(63641U);
    msg.setDestinationEntity(34U);
    msg.sessid = 993563508U;
    msg.messages.assign("GMRVBKTHADUXWJHLQOYKNQEQHQMSZALQVVEJPRDSHUCKBCPPPQYJRWZEIDLGTGYUDVFIKSXVZBAKHULMLAMSRFYWHUKW");

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
    msg.setTimeStamp(0.4508052850903651);
    msg.setSource(18782U);
    msg.setSourceEntity(153U);
    msg.setDestination(4227U);
    msg.setDestinationEntity(144U);
    msg.sessid = 3437312306U;
    msg.messages.assign("DFYDUPTAWSJKAHLGZXZAHELCYQNDOAAWGPHIOQMKRNWOTWISVKJCYRUUFXRJMZRUPVIPMNBKTFGCVJEFYQNBATPPHAAXKIXEKMIMZOBZLFETRK");

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
    msg.setTimeStamp(0.10991784573813268);
    msg.setSource(5535U);
    msg.setSourceEntity(184U);
    msg.setDestination(709U);
    msg.setDestinationEntity(116U);
    msg.sessid = 947025559U;
    msg.messages.assign("IVBOBCVIMJPPSFJYMWFBVBKUZQMNTWVMEWNZPGPVPDFZKJYXXRIFXAVODNKXVDTGRLMLHBOFIZUGBNACFHGJYDBHAEQLGWJRVTTYPHJORYTOXEUCNRNNRUNYANUDHQUTYOGAPMQAYTZAEKLKQC");

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
    msg.setTimeStamp(0.9449042900077478);
    msg.setSource(40367U);
    msg.setSourceEntity(190U);
    msg.setDestination(59658U);
    msg.setDestinationEntity(43U);
    msg.sessid = 3369774030U;

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
    msg.setTimeStamp(0.7633429089924588);
    msg.setSource(60490U);
    msg.setSourceEntity(123U);
    msg.setDestination(56758U);
    msg.setDestinationEntity(143U);
    msg.sessid = 1429299325U;

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
    msg.setTimeStamp(0.4327344956451594);
    msg.setSource(58504U);
    msg.setSourceEntity(171U);
    msg.setDestination(16944U);
    msg.setDestinationEntity(63U);
    msg.sessid = 3579751559U;

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
    msg.setTimeStamp(0.4961141739791235);
    msg.setSource(32946U);
    msg.setSourceEntity(194U);
    msg.setDestination(15577U);
    msg.setDestinationEntity(35U);
    msg.sessid = 1190432874U;
    msg.status = 38U;

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
    msg.setTimeStamp(0.14932399712279054);
    msg.setSource(51388U);
    msg.setSourceEntity(185U);
    msg.setDestination(25684U);
    msg.setDestinationEntity(141U);
    msg.sessid = 2208893432U;
    msg.status = 124U;

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
    msg.setTimeStamp(0.8195327769292676);
    msg.setSource(566U);
    msg.setSourceEntity(58U);
    msg.setDestination(26057U);
    msg.setDestinationEntity(95U);
    msg.sessid = 3274322763U;
    msg.status = 56U;

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
    msg.setTimeStamp(0.022473510508778105);
    msg.setSource(30587U);
    msg.setSourceEntity(166U);
    msg.setDestination(12727U);
    msg.setDestinationEntity(232U);
    msg.name.assign("DHRWGSJSZJSFLADNTFEWQQXFAYBSDUXSWDWYJTJOFCVRLSBIYNZUESOQZIWOPZZINVPNYEXAPCVIPNHVREHIVEHQUUONAKYBDNIGUZFPPBNGARX");

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
    msg.setTimeStamp(0.9557399641430634);
    msg.setSource(33569U);
    msg.setSourceEntity(208U);
    msg.setDestination(55209U);
    msg.setDestinationEntity(247U);
    msg.name.assign("XDZMWMAHFGWIGIQXRWBJMETRSBZHDSIGJCVUFCTZPGXPLMXZEUBYOKFJWDALZDQSHLAUONQKXCLCQHVAVKYULRREQFGJQMYKNYOQCFZVNOWCKPJGWKPDAYUHOVXEAUSOWYXOYSIWHVUBMMTXTVMTSRWYMCXVDVTYHFZPDJISPNNEPMTAJOKJFBGQJFRQYVEDGOERGNISLWFSLZDKTIPCSR");

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
    msg.setTimeStamp(0.7811722231181124);
    msg.setSource(36571U);
    msg.setSourceEntity(61U);
    msg.setDestination(31338U);
    msg.setDestinationEntity(202U);
    msg.name.assign("JWLENJSICKOFADYKNCFCSNPJOOYVQTQZFPPGESPCHITQEE");

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
    msg.setTimeStamp(0.5036372015569778);
    msg.setSource(20880U);
    msg.setSourceEntity(43U);
    msg.setDestination(20446U);
    msg.setDestinationEntity(188U);
    msg.name.assign("SQTSPXYZPHHIVNOXQENQYPCEXBFYJGBKGOBSQLGBDOOLRVTFBAQWHJCDFUAVKQWPXARRRGSJAVKDMRWDFKTVQQMISSLPTZRWULJUZGNBZCRUTJZEODFOYWVAXHNGCMRTWDLDSLJ");

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
    msg.setTimeStamp(0.16512912780752953);
    msg.setSource(47298U);
    msg.setSourceEntity(1U);
    msg.setDestination(16221U);
    msg.setDestinationEntity(40U);
    msg.name.assign("WVFICUIGTOKXFVQHBIUXTAMMPRORXFMLGTZJRUIHPLAPOXVCSMMGNVVAPEYLEWWYNQWOUBGELNKZIQIWPLKIXHNRLSMYEDDQJLYWZKQFXNSDOEYRPIDAFSRJTUVCGFCVNQVQWCKYAKOYSWMHHECDGFXQZDGXUFKEZTSLETSHDKGWBPAFQISJBTYOJNNQCTRWBGFVAPJGC");

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
    msg.setTimeStamp(0.5812918823029736);
    msg.setSource(48369U);
    msg.setSourceEntity(8U);
    msg.setDestination(55115U);
    msg.setDestinationEntity(135U);
    msg.name.assign("MPLGTOHHBKSPMFIQUJBBZ");

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
    msg.setTimeStamp(0.521321078974861);
    msg.setSource(52645U);
    msg.setSourceEntity(89U);
    msg.setDestination(19235U);
    msg.setDestinationEntity(2U);
    msg.type = 58U;
    msg.error.assign("EBSDDTZQGMIWW");

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
    msg.setTimeStamp(0.0611854412567896);
    msg.setSource(48113U);
    msg.setSourceEntity(219U);
    msg.setDestination(53693U);
    msg.setDestinationEntity(234U);
    msg.type = 104U;
    msg.error.assign("EUWRNGURSPTNNXDAWULZNVWGKOHICDEBRIBLTQVMLFHYGKAYICPAURPYFNZOWRTXVZTNCVBWJZUGSTLEOLSFTHDIAREXZEJCSBDEHKGZCQVJDGFBDJKEHIUXLJDHDLPVGJIRBSQFAYQNOAAYRWUIXDTHSOCKNUYNAYTJX");

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
    msg.setTimeStamp(0.5138680336076011);
    msg.setSource(39198U);
    msg.setSourceEntity(189U);
    msg.setDestination(61273U);
    msg.setDestinationEntity(37U);
    msg.type = 172U;
    msg.error.assign("SJIPVFWETVPJIKZMJYBQFJWBFDPQRANNBSCJWEKFTXQSSSKAWYYWQVCZYUZKKRLLOVTZFYNMUWMKSWXBPLJXLYNBXCBOTHDVHMDUPIUCVTCRMUYCOMMXEARKDGDXKMSXIPOGDWOILAEFUNZSNVGTAEIOAQVQOEHLVGGRUZGEAQEBVWRRAOZRYPBLHILZJZCJUTPQMJ");

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
    msg.setTimeStamp(0.09756977049877547);
    msg.setSource(45694U);
    msg.setSourceEntity(86U);
    msg.setDestination(31922U);
    msg.setDestinationEntity(86U);
    msg.seq = 1280U;
    msg.sys_dst.assign("XRTLIRRQADFEHVRSZJZBMAVOCCQGWRBPVJNKUMNKNMSLWLMWFRNGBJPIESGJSNWBHXXDMUKFPSWAVYILYVBZDHZOLJCPZYLHNKMCKITPLGRIZKOTXXPCSGDRUOXFUSJHUYXQUDYGQBGYJAAIGFQNONSEWYIUVMRWNMWSZJLOQKBTHKBC");
    msg.flags = 128U;
    const char tmp_msg_0[] = {115, 5, -20, 82, 95, 111, 107, 33, 50, -29, 15, -21, 101, -86, -118, 119, 53, -11, -39, -118, -16, -4, -89, 113, -106, 59, 55, -24, -88, 8, -86, -91, 59, 41, -70, 122, 47, 2};
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
    msg.setTimeStamp(0.02777196968149953);
    msg.setSource(64467U);
    msg.setSourceEntity(131U);
    msg.setDestination(34048U);
    msg.setDestinationEntity(30U);
    msg.seq = 50166U;
    msg.sys_dst.assign("VVMMCIUJWVGGBZCPGXQSCRZRVFVDPNYFXTEQYKHXGVTIKBKSZOHTDVUYXAAGLNWMUPQRWIRAYDOOGOLBYIQJJURMPOXRPSPJYCIQFCFWLHRZYSWFMUDLIHJZEDMCAXLEXQVECGMWQWOTKHMAGYTFIPUKTPIXMNKXRT");
    msg.flags = 83U;
    const char tmp_msg_0[] = {-104, 123, 68, 11, 76, 80, -6, -59, 112, -45, 5, -106, 58, -6, -100, -8, 64, 58, -79, -68, -87, -122, -120, -128, 41, -117, -9, -50, -38, -89, 0, 3, -90, 76, -99, 65, 104, 68, -42, 108, -121, 42, 9, -113, -9, 93, -13, 90, -37, -20, 122, 99, 17, 96, 99, -25, -22, 113, -109, 82, -70, -121, -110, -122, -22, -49, -12, -38, 95, 63, -79, -111, 30, 20, -124, 73, -114, -39, 92, 95, 74, 101, -55, 46, -57, -6, 78, -128, 126, 32, -56, 104, -120, -91, -98, -114, 68, -10, 59, -60, 88, 82, 89, 24, 13, -30, 84, -100, -45, -44, -121, -9, 33, 33, -102, -116, 97, 3, -88, 34, -22, -18, -43, 33, 86, -117, 23, -120, 95, -102, 117, -107, 80, -70, -20, -124, -39, 97, 97, -96, -44, 55, 47, 90, -103, 90, 96, -121, -117, 58, 43, -82, -118, 51, 42, 100, 0};
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
    msg.setTimeStamp(0.7298368060442184);
    msg.setSource(19948U);
    msg.setSourceEntity(85U);
    msg.setDestination(27673U);
    msg.setDestinationEntity(201U);
    msg.seq = 25282U;
    msg.sys_dst.assign("AGKCDFMEKHLQZBOXEGFMLJPMSKFMULVYDUYZPFGKHKUIUNDYJCMWJECWBTOYFWNIWGQRTHZLVWPDNLCTZITMUJNAOWJXSOEUTDVCLGVBAGDSWANVNXFPHBWDPOSTUCRJNKIQZFNOYURLIUNBGYHQVYXETYXVXOPZGIHLRARMASXAEJ");
    msg.flags = 138U;
    const char tmp_msg_0[] = {58, 38, -74, -114, 4, 20, -15, -59, -7, 39, -1, 122, -1, -85, -112, -48, -105, 41, -88, -3, 34, -101, -106, -74, -109, -113, 85, 0, -19, 14, 119, 18, 39, -36, 119, 20, -12, -115, -44};
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
    msg.setTimeStamp(0.46899619748589094);
    msg.setSource(45038U);
    msg.setSourceEntity(134U);
    msg.setDestination(58934U);
    msg.setDestinationEntity(61U);
    msg.sys_src.assign("OSJLHSILORRPQHUKTGYUJCDQGFBXINSXPQTBZQWTWWJGSCNPCCFDZODCJJRVFNMCZFXBZERMXAEYFUCD");
    msg.sys_dst.assign("NQLAGVSTRCPATCMXEAYKHUSXBLHBSUPDXTDYWDYXCSYQSZSLILKNRDPTJOHEOPMJQMUELYVGACZVVGJCXYOTZNOUJGFMHNFHKZLGAKFKUVOAKQYSQENXIDFNCPMIHUIFERAIQVKYFWOGUQIKZ");
    msg.flags = 239U;
    const char tmp_msg_0[] = {-106, -125, 23, -33, 78, -90, 45, 85, -36, 109, -32, 92, -46, 72, 18, -109, 61, -112, 99, 79, -68, 118, 24, 54, 106, 124, 93, 82, 60, -13, 99, 18, -93, 124, -72, -54, -116, 35, 1, 100, -1, 80, 5, -81, 75, 98, -100, 104, 110, -70, -101, 13, -32, -119, 52, -67, -62, -74, -3, -118, 92, -17, 84, -10, 121, -65, 80, -79, -19, -94, 71, -99, -23, 80, -45, 18, 58, 45, -120, -79, -88, 48, -11, -79, 64, 98, 121, -93, -127, -24, 124, 83, 51, -119, 34, 65, 6, 70, -41, -91, -127, -102, 120, -15, 52, 28, -25, -55, -16, -112, -119, 108, 8, -64, 64, -4, -55, -83, -76, -14, 23, -59, 105, 6, 39, 37, 48, -37, 2, -33, 66, -37, 95, -51, -44, 121, 23, 73, 23, -36, -12, -103, -94, 103, 109, -40, 97, -53, -48, 28, -83, -70, 15, -3, 34, 47, 81, -102, 71, 73, -50, -3, 64, -87, 75, 33, -77, 62, 93, 60, 12, 12, -116, 32, -18, -116, -2, -33, 117};
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
    msg.setTimeStamp(0.34221952044165815);
    msg.setSource(49376U);
    msg.setSourceEntity(178U);
    msg.setDestination(2014U);
    msg.setDestinationEntity(62U);
    msg.sys_src.assign("XJKSYWFOTBXLBXGYVAERTBYCPJOPZHROOKHZLMCUSCGDLCLUWPQMAVARKERXAESWDCZBNSNTYOGFHZCJMXVHINTJVRDKHYYUIGFUJKYQEETMZDTIBKZOVBDAQEFHMCFLXGGXLLSTUADSDRRYZNQKIOIPIWNMLEWFATLFPTVWXBIZNSWWNECLFWUHPGQDFVXDCHJNKNOUROCUAFPIJGSIZGUAEMSM");
    msg.sys_dst.assign("MNAMLHTYGYMGDBEICEGZSRWXKJDHPTIFFRAZLGUSSAINZCTQGWZAXGPIYWXFPSFOTBWLNIHWCXWTJRVDULC");
    msg.flags = 35U;
    const char tmp_msg_0[] = {-34, 110, 27, 119, 122, 84, -121, 78, 1, -31, -82, -104, 27, -19, -120, -9, -18, -124, -13, 118, 9, 116, -103, 101, 76, 57, -106, -23, 19, -78, 16, 99, -41, -101, 65, -100, -69, -19, -85, -16, -18, -78, -13, 62, -48, 36, -104, -51, 103, 45, 54, 92, 5, 11, -29, -125, -12, -6, -112, -109, 62, -52, 122, -51, -82, -103, -12, 97, 60, -73, 52, 71, -17, -66, 115, -22, 15, -48, 120, -52};
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
    msg.setTimeStamp(0.36787991828786815);
    msg.setSource(4068U);
    msg.setSourceEntity(2U);
    msg.setDestination(16797U);
    msg.setDestinationEntity(90U);
    msg.sys_src.assign("AMFVLCGBRASNNPFIUZUDLFXDXOIZCLRUIIAFVKSTMTUPWHGCSKIYDYQLPTJTYMAOMOHLGZBJCXZPMENSLKJTZHVNYBOLSBRNASVWVXKZGDKTCGDYNDGHTZJMYOXVWQYUREGIGHGXSDVTWYQQRESRUMXVQBGKYCQZME");
    msg.sys_dst.assign("GFESTMBIHM");
    msg.flags = 77U;
    const char tmp_msg_0[] = {39, -16, -123, 114, 32, -80, -3, -118, 121, 63, -73, -32, 74, 56, -101, 32, -13, 83, -120, 44, 69, 55, -22, 9, 83, -55, 33, 33, -53, -91, 103, -12, -104, -9, -92, 66, 29, 96, 19, -4, 53, 27, 12, 24, -104, 78, 66, 88, -66, -115, 31, -64, -119, -11, -86, 41, 59, -127, -63, 101, 73, -80, 67, -44, -23, -37, -71, -89, 77, 119, -45, 66, -100, -103, -53, 97, 87, 99, -20, 122, 17, -37, 7, -22, -123, -25, 92, -8, -71, -126, -30, 93, -34, 7, 5, 57, -36, 119, -14, 35, 13, 42, 65, -21, -42, 100, -59, -4, -85, -43, -24, 8, 15, -51, -101, -94, 15, -106, 32, 124, -48, -31, 105, -8, -58, -76, 125, -119, -78, -92, 34, -124, 61, 75, -21, 66, 9, 46, 103, -17, 49, 66, 19, -34, -103, 124, -4, 23, -94, -78, -100, -109, 35, 37, 101, 59, 36, -82, 52, -52, -66, -9, 3, -98, -121, 96, -18, 84, -123, -126, 39, 56, 86, 84, -72, -73, 122, 101, 108, -100, -127, -3, -100, 96, -83, -4, 107, -64, 65, 74, 63, 85, -65, -65, -123, 123, -56};
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
    msg.setTimeStamp(0.9321038849294713);
    msg.setSource(34983U);
    msg.setSourceEntity(30U);
    msg.setDestination(58742U);
    msg.setDestinationEntity(196U);
    msg.seq = 33509U;
    msg.value = 92U;
    msg.error.assign("UBOSBEGXIZXZAEYTPTVFICDBFMFMCHBZXACWDMRAJQKEIGKGPAMKUTWJZNIEQRVDRLZOSRSLFJLKSWDNUOBEPIDCZCUPXVEJUHPQYWEYTRZGYCXMIAJZHPWDLXXOHGVNBBHIMSBYJGBFFGAXURWNKZJFBAWNQFG");

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
    msg.setTimeStamp(0.7533005095744792);
    msg.setSource(30228U);
    msg.setSourceEntity(145U);
    msg.setDestination(4557U);
    msg.setDestinationEntity(8U);
    msg.seq = 40255U;
    msg.value = 77U;
    msg.error.assign("FZDDGGRHYJSBWVHDWMGIKVXSNECWKXASBAVNUULLMEUHYYHFJCYZOORAPRIACEADTZHMHQHVJUOWGSLDCGQXWOIBQFINXYCZUZXLTVNQMKUPREPKUKHIMDUOAXNVPOKTTSTAZBOMPGN");

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
    msg.setTimeStamp(0.2697991447346555);
    msg.setSource(59793U);
    msg.setSourceEntity(108U);
    msg.setDestination(15166U);
    msg.setDestinationEntity(224U);
    msg.seq = 23869U;
    msg.value = 87U;
    msg.error.assign("ZLVZAUGRDGNWHGDGXJQKSYWRLPWXVRSGTUKFFAZHIPQBMWAUIZ");

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
    msg.setTimeStamp(0.5438987939009312);
    msg.setSource(18424U);
    msg.setSourceEntity(151U);
    msg.setDestination(51754U);
    msg.setDestinationEntity(96U);
    msg.seq = 33427U;
    msg.sys.assign("NBNMCOWFNPSWHVHVCCFSYWQSRMORTOOECZGUDAKBVJSKJGEJHOYLDLSELHNAIPYLQYVCHEZNBHVGQGVURDGMPVKKXEMSQUTZDCDXITQVPXRHWIQTTYRZHMWZTJETLJPKAFEMKYOMROGEVZWTKKXUBIQLLAQPGAAFGIXBKXPAYZXDNJMXSJHLNNCDPVOCLFKJLGWUARMHSCIFTRJZOSWXFR");
    msg.value = 0.6129108354569736;

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
    msg.setTimeStamp(0.05179945892779658);
    msg.setSource(41915U);
    msg.setSourceEntity(2U);
    msg.setDestination(61531U);
    msg.setDestinationEntity(178U);
    msg.seq = 52018U;
    msg.sys.assign("UVJTXXABYHKJXRWFOVPGMHINGQKRBQABSIQISFZCLKWCRXKUOZACRMVHDTEIQAASPQQAJMCFERSYVSOGWNOQIZRXLSPMYNHRYPMUDSUPHWVWILCJLTISPGDQHWFOPKZTWQFURLBSEFHMPNJKCKPDBHJHDJYDLREKFIXBLYXABUENJVTMQDNZYGWBUGNJATGTOIVZBMOKCGCGJZDVWELXUZZRTADMVNUGFAWXYTIYCFVPONSCELM");
    msg.value = 0.1402081273391328;

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
    msg.setTimeStamp(0.36330454903348897);
    msg.setSource(61528U);
    msg.setSourceEntity(168U);
    msg.setDestination(22443U);
    msg.setDestinationEntity(227U);
    msg.seq = 32094U;
    msg.sys.assign("KMPKYTUNBJSBFAOXBEPDTVMFPESRYFUMOECGXMRZPRMOVAVHCQGNWAICQDKSLAUHGTSEKHMXBHVWKHLIZJUODVVBETOUAFIILRBDOTIDHJSJDJTYJUNKUQWYAOXWOQROFEQZCBLXRPXJNPOYYPKLBCFDEAZURQGDYPINEAQRZGBYVWXHLFSGKWDPACWPGFHZFQMWICSIVUXZTGLJMZMNGNADJELQXYKBXCNRHFNVTQRVLUKIZE");
    msg.value = 0.9888479427036214;

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
    msg.setTimeStamp(0.8351194524836291);
    msg.setSource(31238U);
    msg.setSourceEntity(22U);
    msg.setDestination(36796U);
    msg.setDestinationEntity(84U);
    msg.action = 88U;
    msg.longain = 0.9266610952245058;
    msg.latgain = 0.40616008997958597;
    msg.bondthick = 568377557U;
    msg.leadgain = 0.5837061755293681;
    msg.deconflgain = 0.3974097575817237;

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
    msg.setTimeStamp(0.8360402259781242);
    msg.setSource(84U);
    msg.setSourceEntity(37U);
    msg.setDestination(18804U);
    msg.setDestinationEntity(130U);
    msg.action = 123U;
    msg.longain = 0.006923621666702129;
    msg.latgain = 0.4632888724253693;
    msg.bondthick = 3482244030U;
    msg.leadgain = 0.49795207955731546;
    msg.deconflgain = 0.9707739975389239;

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
    msg.setTimeStamp(0.4970347505175715);
    msg.setSource(56900U);
    msg.setSourceEntity(188U);
    msg.setDestination(36387U);
    msg.setDestinationEntity(175U);
    msg.action = 61U;
    msg.longain = 0.04083207036645409;
    msg.latgain = 0.3811818050958986;
    msg.bondthick = 3834794013U;
    msg.leadgain = 0.10554964425928093;
    msg.deconflgain = 0.887223581959702;

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
    msg.setTimeStamp(0.8778960797797106);
    msg.setSource(60538U);
    msg.setSourceEntity(232U);
    msg.setDestination(6436U);
    msg.setDestinationEntity(77U);
    msg.err_mean = 0.3308561014570155;
    msg.dist_min_abs = 0.41168175589355016;
    msg.dist_min_mean = 0.013694162674486088;

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
    msg.setTimeStamp(0.5684894706786263);
    msg.setSource(57264U);
    msg.setSourceEntity(41U);
    msg.setDestination(5113U);
    msg.setDestinationEntity(219U);
    msg.err_mean = 0.8473365174101525;
    msg.dist_min_abs = 0.02571645126298372;
    msg.dist_min_mean = 0.5991380674955332;

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
    msg.setTimeStamp(0.05888986413803032);
    msg.setSource(59635U);
    msg.setSourceEntity(53U);
    msg.setDestination(15054U);
    msg.setDestinationEntity(125U);
    msg.err_mean = 0.4107639620490252;
    msg.dist_min_abs = 0.5711449798404358;
    msg.dist_min_mean = 0.4671507751957028;

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
    msg.setTimeStamp(0.8236859447280953);
    msg.setSource(48641U);
    msg.setSourceEntity(93U);
    msg.setDestination(61355U);
    msg.setDestinationEntity(207U);
    msg.action = 7U;
    msg.lon_gain = 0.2933527253830216;
    msg.lat_gain = 0.4462295268837917;
    msg.bond_thick = 0.06574901265828492;
    msg.lead_gain = 0.4897981430645877;
    msg.deconfl_gain = 0.7625102078165166;
    msg.accel_switch_gain = 0.8861181721098581;
    msg.safe_dist = 0.1628119491976996;
    msg.deconflict_offset = 0.08001034527436868;
    msg.accel_safe_margin = 0.6092277389714279;
    msg.accel_lim_x = 0.2712022122754373;

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
    msg.setTimeStamp(0.742451783257715);
    msg.setSource(25689U);
    msg.setSourceEntity(169U);
    msg.setDestination(39234U);
    msg.setDestinationEntity(212U);
    msg.action = 99U;
    msg.lon_gain = 0.9004481068011813;
    msg.lat_gain = 0.36932838900875686;
    msg.bond_thick = 0.8805670913062867;
    msg.lead_gain = 0.3762379900755759;
    msg.deconfl_gain = 0.2870950147297614;
    msg.accel_switch_gain = 0.45589525991727575;
    msg.safe_dist = 0.8229133323237717;
    msg.deconflict_offset = 0.37342252017122957;
    msg.accel_safe_margin = 0.9962511591612602;
    msg.accel_lim_x = 0.5088644622045011;

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
    msg.setTimeStamp(0.7818884180924066);
    msg.setSource(36057U);
    msg.setSourceEntity(6U);
    msg.setDestination(42925U);
    msg.setDestinationEntity(31U);
    msg.action = 183U;
    msg.lon_gain = 0.187553864585025;
    msg.lat_gain = 0.05122598310960591;
    msg.bond_thick = 0.183647462597611;
    msg.lead_gain = 0.12666825378416324;
    msg.deconfl_gain = 0.6063711027767524;
    msg.accel_switch_gain = 0.5531263586744349;
    msg.safe_dist = 0.27442465378683134;
    msg.deconflict_offset = 0.6853001577559384;
    msg.accel_safe_margin = 0.5865751831541722;
    msg.accel_lim_x = 0.6815250004128874;

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
    msg.setTimeStamp(0.20986311893497434);
    msg.setSource(26581U);
    msg.setSourceEntity(128U);
    msg.setDestination(42226U);
    msg.setDestinationEntity(236U);
    msg.type = 198U;
    msg.op = 50U;
    msg.err_mean = 0.005010870425005809;
    msg.dist_min_abs = 0.3080224964756234;
    msg.dist_min_mean = 0.4858688325185916;
    msg.roll_rate_mean = 0.8981322845117109;
    msg.time = 0.9056810782967135;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 59U;
    tmp_msg_0.lon_gain = 0.973731273829054;
    tmp_msg_0.lat_gain = 0.2248652148014042;
    tmp_msg_0.bond_thick = 0.8968054340595538;
    tmp_msg_0.lead_gain = 0.5924295364790438;
    tmp_msg_0.deconfl_gain = 0.8799578630746424;
    tmp_msg_0.accel_switch_gain = 0.43898649035182913;
    tmp_msg_0.safe_dist = 0.10512990796888977;
    tmp_msg_0.deconflict_offset = 0.8277267726646665;
    tmp_msg_0.accel_safe_margin = 0.10899511351740454;
    tmp_msg_0.accel_lim_x = 0.8602487353173729;
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
    msg.setTimeStamp(0.34533244519272355);
    msg.setSource(60687U);
    msg.setSourceEntity(11U);
    msg.setDestination(34020U);
    msg.setDestinationEntity(117U);
    msg.type = 121U;
    msg.op = 28U;
    msg.err_mean = 0.9909474830017314;
    msg.dist_min_abs = 0.05584117005856459;
    msg.dist_min_mean = 0.5296916353456623;
    msg.roll_rate_mean = 0.2072921467165454;
    msg.time = 0.4528152631074165;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 24U;
    tmp_msg_0.lon_gain = 0.06702924996968074;
    tmp_msg_0.lat_gain = 0.8447022566321022;
    tmp_msg_0.bond_thick = 0.21335855101518986;
    tmp_msg_0.lead_gain = 0.8846771734758723;
    tmp_msg_0.deconfl_gain = 0.8623828030191366;
    tmp_msg_0.accel_switch_gain = 0.3242001273079098;
    tmp_msg_0.safe_dist = 0.34031361905546087;
    tmp_msg_0.deconflict_offset = 0.4489257509260143;
    tmp_msg_0.accel_safe_margin = 0.4559103253468295;
    tmp_msg_0.accel_lim_x = 0.8248203741988794;
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
    msg.setTimeStamp(0.5053823328692593);
    msg.setSource(57027U);
    msg.setSourceEntity(81U);
    msg.setDestination(61639U);
    msg.setDestinationEntity(146U);
    msg.type = 59U;
    msg.op = 190U;
    msg.err_mean = 0.7826854329327728;
    msg.dist_min_abs = 0.2603477529179974;
    msg.dist_min_mean = 0.8654646176446747;
    msg.roll_rate_mean = 0.8419477050590609;
    msg.time = 0.5237625257390877;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 100U;
    tmp_msg_0.lon_gain = 0.49136903108452223;
    tmp_msg_0.lat_gain = 0.3828340939031548;
    tmp_msg_0.bond_thick = 0.8828388077510453;
    tmp_msg_0.lead_gain = 0.20666610333878144;
    tmp_msg_0.deconfl_gain = 0.7573593993284594;
    tmp_msg_0.accel_switch_gain = 0.6453896910988015;
    tmp_msg_0.safe_dist = 0.014247839783715355;
    tmp_msg_0.deconflict_offset = 0.970152926532227;
    tmp_msg_0.accel_safe_margin = 0.995604466117795;
    tmp_msg_0.accel_lim_x = 0.26942281217002717;
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
    msg.setTimeStamp(0.5990373195225714);
    msg.setSource(12575U);
    msg.setSourceEntity(129U);
    msg.setDestination(47133U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.41079196305647814;
    msg.lon = 0.11376026433480801;
    msg.eta = 4122621248U;
    msg.duration = 38738U;

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
    msg.setTimeStamp(0.7583945890679198);
    msg.setSource(29182U);
    msg.setSourceEntity(105U);
    msg.setDestination(20231U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.3040008175011537;
    msg.lon = 0.6973426321730954;
    msg.eta = 467552194U;
    msg.duration = 47485U;

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
    msg.setTimeStamp(0.4965295100053543);
    msg.setSource(18743U);
    msg.setSourceEntity(194U);
    msg.setDestination(45256U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.9732483667853641;
    msg.lon = 0.9778200089074046;
    msg.eta = 1909817241U;
    msg.duration = 25649U;

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
    msg.setTimeStamp(0.6180127921134372);
    msg.setSource(41574U);
    msg.setSourceEntity(73U);
    msg.setDestination(53721U);
    msg.setDestinationEntity(64U);
    msg.plan_id = 19864U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.15821969836213268;
    tmp_msg_0.lon = 0.6257968894746259;
    tmp_msg_0.eta = 1299016491U;
    tmp_msg_0.duration = 18876U;
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
    msg.setTimeStamp(0.608059925440666);
    msg.setSource(30645U);
    msg.setSourceEntity(117U);
    msg.setDestination(63285U);
    msg.setDestinationEntity(88U);
    msg.plan_id = 26138U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8229729295321487;
    tmp_msg_0.lon = 0.9037284638243359;
    tmp_msg_0.eta = 3176795926U;
    tmp_msg_0.duration = 25686U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.29379530702341505);
    msg.setSource(19582U);
    msg.setSourceEntity(59U);
    msg.setDestination(9861U);
    msg.setDestinationEntity(152U);
    msg.plan_id = 51368U;

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
    msg.setTimeStamp(0.4319012778873429);
    msg.setSource(30394U);
    msg.setSourceEntity(11U);
    msg.setDestination(35214U);
    msg.setDestinationEntity(141U);
    msg.type = 190U;
    msg.command = 188U;
    msg.settings.assign("NHKQOHBMSIYEQUARMLNIJKGXSLNEOJYWITHFUJHIVQAKVRZCMOIPSVKTFOPIVMUBYQCSPDDZEXMJRLXAGNEHFIXLKONWDFTRNIQRLYDGMTHGRXZIZANPABPENGKQBLYFRWKQUPADDZEYUZXFRGBNGKVPXTCQWJWMVBHAXFVHFWDJDWECORYSTOCJSJMGUBOCVEBZMFEUOQIAJYOHLLZCAUTFYSNKGCLXTZVPWSKDQABCPWLJUCSEPTGDSZW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 37168U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TJKMFPSIGPTROQQVYGMKYQZNCBATEMMQJPZWVKINRJZPJROHQOIXIITCMWHEYCXAZVYHPXAGFANKYPBTFSEYSKVWVSCWWXPAADLBDLZTYCWIRLGLTUJRQHMEDMPTSFPFOXEYSXFHHSKTUZFWEQGIUVWOIJGND");

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
    msg.setTimeStamp(0.7658215433863542);
    msg.setSource(8582U);
    msg.setSourceEntity(40U);
    msg.setDestination(47918U);
    msg.setDestinationEntity(105U);
    msg.type = 55U;
    msg.command = 142U;
    msg.settings.assign("UPKQJWWZHGFIUAGRCJZLLBUKHDYAVLQQEUNLVTDPCAWTFDXWGBOQLCSFFSXFXSCMAMYVAYXBZMYEBSBMZDMTWNGOYCOQZCNANKQYRRVNNVQPOLFKIGSJXFIEOIYBMUHTHUCPTRGYRIBTPHLICYEBUIZOETIEOZCPQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 43640U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.10419060437649119;
    tmp_tmp_msg_0_0.lon = 0.5689431942076887;
    tmp_tmp_msg_0_0.eta = 1504821179U;
    tmp_tmp_msg_0_0.duration = 18879U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XXARFQWAOILURACLCIWVWYFVTBIDSVJO");

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
    msg.setTimeStamp(0.07075888842454203);
    msg.setSource(43758U);
    msg.setSourceEntity(253U);
    msg.setDestination(32638U);
    msg.setDestinationEntity(117U);
    msg.type = 14U;
    msg.command = 45U;
    msg.settings.assign("KGFFUBLFVNWOHCCVWYBAWMDOFLXUGCXWDTOIUBNEZEXLDRGHJGDOTMHCGKWDJE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 20979U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NKIMCJKHQKDIYEZNVFIZGRODCPQYXEUPSMAKWTICNCLDPILWZEHEBHPNHUO");

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
    msg.setTimeStamp(0.323663390868827);
    msg.setSource(5908U);
    msg.setSourceEntity(59U);
    msg.setDestination(41367U);
    msg.setDestinationEntity(98U);
    msg.state = 115U;
    msg.plan_id = 64852U;
    msg.wpt_id = 199U;
    msg.settings_chk = 2764U;

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
    msg.setTimeStamp(0.03758411988009891);
    msg.setSource(58525U);
    msg.setSourceEntity(178U);
    msg.setDestination(46275U);
    msg.setDestinationEntity(10U);
    msg.state = 183U;
    msg.plan_id = 51489U;
    msg.wpt_id = 15U;
    msg.settings_chk = 34889U;

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
    msg.setTimeStamp(0.3916955416035287);
    msg.setSource(45381U);
    msg.setSourceEntity(139U);
    msg.setDestination(32036U);
    msg.setDestinationEntity(87U);
    msg.state = 25U;
    msg.plan_id = 43847U;
    msg.wpt_id = 114U;
    msg.settings_chk = 9812U;

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
    msg.setTimeStamp(0.6429381302356056);
    msg.setSource(60259U);
    msg.setSourceEntity(98U);
    msg.setDestination(48382U);
    msg.setDestinationEntity(201U);
    msg.uid = 97U;
    msg.frag_number = 247U;
    msg.num_frags = 6U;
    const char tmp_msg_0[] = {57, 92, -112, -47, 115, 43, -121, 61, -110, -24, -59, -48, -34, 12, 47, 97, -9, 83, 1, 97, -109, 97, 114, 69, 13, -119, -84, 87, -16, 112, 39, 54, 75, 4, -6, 87, -57, -58, 37, 55, -73, -38, 70, -54, -72, -25, 68, -14, -82, 93, 91, 123, 116, -89, -60, -60, -127, 14, 20, -62, -42, 2, 1, -35, -27, 45, 114, -88, 4, 62, 46, 50, 105, -96, 53, 34, 29, -106, 105, -49, -17, 84, 26, 27, -5, 116, 9, -70, 43, -14, 116, -41, 2, 72, -58, 118, -82, -118, 117, 122, 0, -109, 51, -112, 73, -54, -31, -77, -51, 53, 0, -50, 46, -115, 6, 22, 99, -11, -15, -37, -104, -73, -59, 94, 63, 5, 58, -30, -110, 35, 76, 87, -63, 115, 51, -127};
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
    msg.setTimeStamp(0.721060181361518);
    msg.setSource(29103U);
    msg.setSourceEntity(160U);
    msg.setDestination(52024U);
    msg.setDestinationEntity(168U);
    msg.uid = 140U;
    msg.frag_number = 138U;
    msg.num_frags = 213U;
    const char tmp_msg_0[] = {-115, 58, 95, 68, -97, -71, 62, -121, -59, 39, 79, -24, 68, 77, -111, 38, -63, 109, 36, 67, 8, -12, 85, 45, 6, 90, 35, -45, 21, 108, 55, -27, -14, -61, -118, -99, 37, -12, 28, -94, -69, -19, -86, 114, 22, -96, 109, -30, 102, -12, 2, -87, -28, 22, -27, 95, -107, 115, -14, 81, -22, 44, 65, 111, -18, 14, -62, 69, 9, 99, 31, -30, 59};
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
    msg.setTimeStamp(0.26163361979901223);
    msg.setSource(44873U);
    msg.setSourceEntity(5U);
    msg.setDestination(19183U);
    msg.setDestinationEntity(34U);
    msg.uid = 109U;
    msg.frag_number = 166U;
    msg.num_frags = 173U;
    const char tmp_msg_0[] = {-82, 26, -116, 64, 59, -46, 126, 111, 22, 50, 57, 59, -113, 80, -18, -92, 32, -77, 86, -1, -48, -43, 55, -98, 32, -53, 87, 115, 116, -69, -74, 29, -79, -86, -120, -125, 8, -87, -76, 69, 55, 12, -103, 88, 55, 38, 88, -88, -27, -29, 45, 99, -24, -83, -2, 90, 57, 80, 96, -12, 116, 60, 74, -74, -50, -49, 56, 40, -85, -56, 63, -123, 40, 73, 121, 25, 28, 98, 77, -29, -17, 108, -19, 101, 15, -124, 118, -96, -111, 0, -38, -27, -16, 97, -19, 90, -103, -45, -99, -19, 33, -72, 40, 26, 69, 33, 4, -62, -87, -106, -125, -85, -47, -7, 18, -13, 98, 55, -6, -112, 106, 70, -126, 38, 72, -58, -115, 12, 32, -44, -55, 29, 34, 24, -121, -28, 116, 66, 27, 7, 50, 76, 100, 108, 24, 94, 32, -24, -94, 100, -76, -17, 42, 1, -86, 76, -5, -38, -16, 29, -20, -11, -90, -117, -126, 23, -92, 2, -78, 57, 111, 57, -106, -65, 111, -57, -63, -92, -60, -83, 17, 8, 25, -50, 82, -54, -42, 39, -62, -113, 101, -56, 90, 40, 42, 75, -63, 112, 112, -110, 49, 98, 101, 12, 56, -7};
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
    msg.setTimeStamp(0.34869038905594996);
    msg.setSource(16020U);
    msg.setSourceEntity(181U);
    msg.setDestination(7204U);
    msg.setDestinationEntity(34U);
    msg.content_type.assign("RJMHOSIGMYFZOFXFBSLQJKGTCGPHBSFWVLYUAQLYSMDCMUVTJUIPCRSWZQFDBDZLFQOKYILEUOKRRZLUQQVPWCJMDGGILLHKWQPFRHZXHZRCCZXIJTIC");
    const char tmp_msg_0[] = {5, -124, 114, 78, -38, -123, -105, 70, 116, 112, -62, 62, -64, 97, 56, -42, 96, 26, 22, -62, -122, -122, -51, -65, 103, 11, -17, 9, -33, -106, 91, -93, -25, -70, -84};
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
    msg.setTimeStamp(0.6486186280076952);
    msg.setSource(47705U);
    msg.setSourceEntity(22U);
    msg.setDestination(20205U);
    msg.setDestinationEntity(98U);
    msg.content_type.assign("LMLJFUJVRTADXDFCTSTIDJHAJDYRCWQZMECHXYFGGASEIJZMIBUCPPHOWYZSAIXGRQCHVNNDNHWBKAKPVW");
    const char tmp_msg_0[] = {51, 111, -104, -32, 34, 24, -62, -125, 98, 107, -52, -51, 20, 42, -86, 39, 91, 50, 104, -4, -127, -68, -52, -56, -14, -32, 59, 87, -80, 79, 116, -63, -46, -103, -84, 40, 11, 114, 1, -19, -122, 30, -51, -85, -69, 89, 68, 90, 75, 69, -4, 14, 115, -48, 34, 21, -8, -30, -34, 43, -6, 114, 18, 58, -82, 79, 62, -36, -71, 124, -105, -40, -8, -121, 44, -1, 12, -120, 23, 97, -15, -74, -111, -51, 103, -78, -113, -52, -57, 21, -4, -23, -117, 25, 101, -72, -79, 81, 38, -19, -35, -99, 108, 83, 97, 77, -76, -118, -78, -23, 111, -126, 37, -11, -116, -69, 1, 6, 120, -12, 39, 123, -96, -36, -117, -25, -106, -10, -17, 17, -50, 5, -108, 105, 28, 12, 91, 90, -117, -95, -90, -18, -77, 36, -8, 63, 44, 25, -108, -112, 41, -7, -91, 48, -49, 63, -95, -73, 78, -114, 2, 20, -98, -82, -119, 43, 103, -65, 46, 21, -124, -9, -110, -125, 36, -32, 48, -108, 15, -45, -43, 63, -103, 123, -100, -115, -52, 40, -29, -27, -83, -91, 120, 31, 85, 39, -89, 71, -118, -112, -72, 77, 3, -74, 105, -70, 27, -111, -51, 38, 13, 12, -80, 86, -6, 96, 63, 64, 71, 18, -54, 75, -50, -107, -103, 33, 45, 14, 11, -125, 116, -84, 15, -79, 119};
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
    msg.setTimeStamp(0.8445974601169529);
    msg.setSource(5174U);
    msg.setSourceEntity(234U);
    msg.setDestination(26859U);
    msg.setDestinationEntity(197U);
    msg.content_type.assign("KROFCVYEEYUUGEPXHONQRBPXALLYEAWSBJCCBEMDBQBYBHTMGTFEKZYJUFNQNHYDAAHGTMSTJIKMNQRDLFZJABXKIXSPXWPSCRZOQTWLTKNVSZRSFUMEAUFCKVZPULHWRPDUCYLNOKPVVKMODWINMJANPWHTMIEOIWTG");
    const char tmp_msg_0[] = {-50, -19, -22, 83, -128, -65, -68, 14, 44, -62, -41, 86, 21, -41, -87, 52, 0, 18, 2, 79, -46, -46, 10, 9, -13, -17, 55, 42, -112, 120, 74, 90, -100, 120, 114, 66, 23, -11, -12, -127, 77, 47, 83, -89, 35, 67, -93, -27, -75, -30, -85, -18, -14, -63, 115, -47, 28, -2, 126, -103, 3, -51, -92, -109, -10, 97, -47, -57, 42, -27, -59, 46, -77, 90, 9, 44, -35, -86, 40, -30, 53, 88, 12, -29, 70, 10, -96, 120, -36, -92, 9, 18, -24, -41, 65, -51, -26, 112, 43, 106, -10, -112, 8, -44, -108, -34, -91, -40, 58, 120, -29, 87, -105, 80, 101, -90, -91, 124, -53, 99, -80, -35, -24, 36, 84, -112, 37, 98, -44, -16, 121, 33, -80, -75, -112, -6, 24, 114, -20, 101, 38, 9, -24, -10, 29, -109, 94, -12, 12, 72, 58, 23, 98, 95, -98, 14, 72, -69, -14, -56, 104, 58, -109, 14, 31, 97, 25, 2, -96, 64, 39, 106, -106, 25, 7, 20, 24, -126, -48, 43, -91, 93, -127, -82, 46, -58, 100, 64, -82, 22, -70, 119, -40, 73, -102, 46, -39, -82, -82, -62, -30, -91, -28, -64, -15, 118, 1, 18, -117, -94, 26, -47};
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
    msg.setTimeStamp(0.6903095839536476);
    msg.setSource(25744U);
    msg.setSourceEntity(105U);
    msg.setDestination(10168U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.8560570931487694);
    msg.setSource(18619U);
    msg.setSourceEntity(247U);
    msg.setDestination(20880U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.04264491892253086);
    msg.setSource(42029U);
    msg.setSourceEntity(248U);
    msg.setDestination(57492U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.31551217759836725);
    msg.setSource(31456U);
    msg.setSourceEntity(39U);
    msg.setDestination(61933U);
    msg.setDestinationEntity(67U);
    msg.target = 53238U;
    msg.bearing = 0.4313623279394634;
    msg.elevation = 0.05349928731910503;

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
    msg.setTimeStamp(0.9586810406643972);
    msg.setSource(57672U);
    msg.setSourceEntity(137U);
    msg.setDestination(52387U);
    msg.setDestinationEntity(122U);
    msg.target = 17228U;
    msg.bearing = 0.13471917319760862;
    msg.elevation = 0.6633561639665578;

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
    msg.setTimeStamp(0.5019763624494878);
    msg.setSource(33451U);
    msg.setSourceEntity(143U);
    msg.setDestination(59130U);
    msg.setDestinationEntity(121U);
    msg.target = 33311U;
    msg.bearing = 0.6880508743914237;
    msg.elevation = 0.2228178353312119;

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
    msg.setTimeStamp(0.1695581514565616);
    msg.setSource(60908U);
    msg.setSourceEntity(84U);
    msg.setDestination(17340U);
    msg.setDestinationEntity(229U);
    msg.target = 3116U;
    msg.x = 0.8074160898901507;
    msg.y = 0.35006402595438213;
    msg.z = 0.8367602321726733;

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
    msg.setTimeStamp(0.8919356782480153);
    msg.setSource(65396U);
    msg.setSourceEntity(196U);
    msg.setDestination(30675U);
    msg.setDestinationEntity(7U);
    msg.target = 49128U;
    msg.x = 0.6272924048452578;
    msg.y = 0.5372019762804467;
    msg.z = 0.8138338524339289;

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
    msg.setTimeStamp(0.9290725783806167);
    msg.setSource(26873U);
    msg.setSourceEntity(83U);
    msg.setDestination(49472U);
    msg.setDestinationEntity(77U);
    msg.target = 63943U;
    msg.x = 0.03997851006955777;
    msg.y = 0.5526492336174156;
    msg.z = 0.5923741432221844;

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
    msg.setTimeStamp(0.5615018068020334);
    msg.setSource(20503U);
    msg.setSourceEntity(98U);
    msg.setDestination(23185U);
    msg.setDestinationEntity(136U);
    msg.target = 3130U;
    msg.lat = 0.10793453798824015;
    msg.lon = 0.27477335669942093;
    msg.z_units = 46U;
    msg.z = 0.572309238942485;

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
    msg.setTimeStamp(0.172490721192623);
    msg.setSource(32872U);
    msg.setSourceEntity(239U);
    msg.setDestination(58078U);
    msg.setDestinationEntity(248U);
    msg.target = 51565U;
    msg.lat = 0.6082214278015444;
    msg.lon = 0.6018226495642337;
    msg.z_units = 203U;
    msg.z = 0.9343368878655687;

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
    msg.setTimeStamp(0.7181928140418027);
    msg.setSource(43425U);
    msg.setSourceEntity(173U);
    msg.setDestination(4255U);
    msg.setDestinationEntity(254U);
    msg.target = 1934U;
    msg.lat = 0.9872548725411202;
    msg.lon = 0.43957681293454487;
    msg.z_units = 202U;
    msg.z = 0.717068743995093;

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
    msg.setTimeStamp(0.2007763023193324);
    msg.setSource(30850U);
    msg.setSourceEntity(18U);
    msg.setDestination(55995U);
    msg.setDestinationEntity(230U);
    msg.locale.assign("HHVYRFANTTLLEIXRACNHEGZCKJURJDQUDUENMKEIVDMDFAWKLTEFAXVWBHIMACJZSPKLOZXIPBDZOQWHHWOZRCBYLEFGOOKFOWUHGQKZVFQSHXQXWFQCVBJIYCFWJSONDDKSPDUEYAOLJXCSLSCAZIAYRSQXKIGPNPUFRQTNBMDUZWQTPBMNAHJBMUVLVWCVZGIKJSRAUTCVXSZRGYDGKSLMEPXYMTYOXBBVJTYLRGEBYN");
    const char tmp_msg_0[] = {39, 48, -87, 118, -78, 27, 89, -5, -125, -60, 28, 20, -120, 11, -17, 94, 99, -83, 125, -8, 84, -108, -59, -80, 57, 70, 8, -118, 98, -97, -90, 87, -104, 8, -67, 57, -92, 94, 114, 113, -121, -25, 107, 71, 18, -101, -127, 2, 50, 95, -119, -23, -86, 114, 32, -8, -61, -47, 15, 66, 70, 35, 80, 63, 32, -34, -50, 60, -124, -34, 120, 32, -100, -7, 21, 24, -34, 5, 74, 23, 67, 33, 45, -6, -15, -50, 113, -56, 92, 121, 47, -111, 77, 103, 5, -121, 40, -26, 44, -90, 106, 114, 113, 87, -36, 84, 99, -41, -45, -46, -105, 65, -69, 34, 30, -53, 111, -109, 27, -66, -95, 122, -125, 71, -57, -126, 51, 59, -43, -53, 64, 123, -23, 79, -89, -37, 39, 76, 44, 114, -6, 81, 44, 95, 87, -1, 5, 48, -1, -120, -21, 70, -27, -88, -78, 94, -102, -36, -47, -73, 11, 35, -114, 12, -20, 109, 8, -98, -111, 109, -2, -40, -57, -10, 125, 5, -61, -12, 38, -106, -88, -44, 92, 11, 107, -5, 83, 83, -52, -7, 52, -110, 23, 73, 55, -121, 81, -17, 120, -96, 113, -62, 64, -126, 40, -63, -62, 104, -14, -48, 96, 10, -79, -99, 6, 41, -38, -74, -75, 15, 64, 119, 78, 20, -74, 0, -116, 30, -17, 5, 107, -79, -123, -49, -110, -90, -77, 55, 58, 26, -4, 16, 15, 44, -106, 105, 117, 87};
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
    msg.setTimeStamp(0.29779338876350325);
    msg.setSource(28159U);
    msg.setSourceEntity(17U);
    msg.setDestination(849U);
    msg.setDestinationEntity(58U);
    msg.locale.assign("FXBNPGPEHLPGKEUTWMYPIXPENUHVJTJGSLJRAGKFXYFRIIHNDEBCCZSOPXBSWPSGFYMTQZQNWTEMVLBJUKOWAYGAWZQSOOEXICXKEUKZMVUDBQLIBLFINTWFRKVSIWOCCLZROAGSDCAJBQFAZAXYLGJSXYXUEVLUNRJNRJMRZOOBTFIMVBFPDMWQNEMREHYYUQAGLOHYQ");
    const char tmp_msg_0[] = {86, 111, -125, -6, -68, 76, 112, 28, -115, -76, 96, -32, -46, 65, -27, -41, -50, 13, -112, 111, 121, 10, 5, -13, 59, -80, 11, 2, -29, 98, 96, 19, 39, 120, 94, -77, -1, 114, 109, -45, 90, -58, 85, -50, -91, -57, -85, 15, 17, -73, 85, 88, -64, -86, -115, -41, -80, -7, -83, -103, -45, -5, 77, -81, 68, 91, 94, -53, -107, 102, 67, 116, -111, 116, 66, 32, -89, 22, -99, 49, -124, -33, -125, 78, 81, -48, 102, -45, -23, 33, 33, 97, 77, 23, -74, 59, 89, -15, 85, -85, 75, 57, 93, 97, -10};
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
    msg.setTimeStamp(0.6155883972160648);
    msg.setSource(18209U);
    msg.setSourceEntity(22U);
    msg.setDestination(2921U);
    msg.setDestinationEntity(213U);
    msg.locale.assign("GRXTNBFSEIMLXZDAHRCPTQACDIQSAWDCVSQRVTGKEEWVPKJQFBFQKRKYPFHNNDNARWOATJOTJMJBCVCVUOYEXOYSUBPLLZFIBMYCIWAAXUJHAXBXQTSG");
    const char tmp_msg_0[] = {32, 75, -37, -49, -72, 87, 66, -121, -103, 13, -86, -125, 34, -101, -71, 11, 62, -95, 1, 81, 98, -83, 7, -79, 69, -58};
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
    msg.setTimeStamp(0.14979632773294338);
    msg.setSource(47466U);
    msg.setSourceEntity(79U);
    msg.setDestination(63256U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.17845639439909367);
    msg.setSource(47348U);
    msg.setSourceEntity(95U);
    msg.setDestination(64767U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.27449487630025327);
    msg.setSource(56614U);
    msg.setSourceEntity(229U);
    msg.setDestination(56472U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.5858087124733311);
    msg.setSource(28632U);
    msg.setSourceEntity(8U);
    msg.setDestination(13320U);
    msg.setDestinationEntity(119U);
    msg.camid = 227U;
    msg.x = 12779U;
    msg.y = 28045U;

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
    msg.setTimeStamp(0.2096081709322799);
    msg.setSource(29621U);
    msg.setSourceEntity(40U);
    msg.setDestination(10710U);
    msg.setDestinationEntity(140U);
    msg.camid = 58U;
    msg.x = 12239U;
    msg.y = 64374U;

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
    msg.setTimeStamp(0.1421528034481815);
    msg.setSource(38886U);
    msg.setSourceEntity(98U);
    msg.setDestination(12884U);
    msg.setDestinationEntity(4U);
    msg.camid = 84U;
    msg.x = 18068U;
    msg.y = 34886U;

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
    msg.setTimeStamp(0.3135159027834309);
    msg.setSource(725U);
    msg.setSourceEntity(165U);
    msg.setDestination(59806U);
    msg.setDestinationEntity(37U);
    msg.camid = 16U;
    msg.x = 5956U;
    msg.y = 30286U;

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
    msg.setTimeStamp(0.40802470345495334);
    msg.setSource(52943U);
    msg.setSourceEntity(131U);
    msg.setDestination(65000U);
    msg.setDestinationEntity(7U);
    msg.camid = 228U;
    msg.x = 32432U;
    msg.y = 33628U;

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
    msg.setTimeStamp(0.40791209123994643);
    msg.setSource(1070U);
    msg.setSourceEntity(148U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(117U);
    msg.camid = 55U;
    msg.x = 40693U;
    msg.y = 12089U;

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
    msg.setTimeStamp(0.47534091231637887);
    msg.setSource(37100U);
    msg.setSourceEntity(208U);
    msg.setDestination(57830U);
    msg.setDestinationEntity(74U);
    msg.tracking = 70U;
    msg.lat = 0.09777257797786809;
    msg.lon = 0.8901603926424113;
    msg.x = 0.8071128127925018;
    msg.y = 0.5170613688537141;
    msg.z = 0.20687977891617504;

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
    msg.setTimeStamp(0.4231608849530014);
    msg.setSource(54238U);
    msg.setSourceEntity(44U);
    msg.setDestination(31328U);
    msg.setDestinationEntity(166U);
    msg.tracking = 135U;
    msg.lat = 0.8511670133042506;
    msg.lon = 0.03144561262247991;
    msg.x = 0.9344826767168443;
    msg.y = 0.46270155828429016;
    msg.z = 0.4456575741170894;

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
    msg.setTimeStamp(0.894811322296986);
    msg.setSource(57228U);
    msg.setSourceEntity(172U);
    msg.setDestination(23040U);
    msg.setDestinationEntity(177U);
    msg.tracking = 76U;
    msg.lat = 0.5911415750069652;
    msg.lon = 0.7367571601917202;
    msg.x = 0.03428992811116738;
    msg.y = 0.5823808546921166;
    msg.z = 0.4093045626266485;

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
    msg.setTimeStamp(0.9695158214623504);
    msg.setSource(21770U);
    msg.setSourceEntity(51U);
    msg.setDestination(58084U);
    msg.setDestinationEntity(88U);
    msg.target.assign("KHTMUYBGZVMZERXVYULHTHMQEUSWKLQDNUOECQJTISWCVJWLYLELXZBKCEFWAGK");
    msg.lbearing = 0.4252412480092652;
    msg.lelevation = 0.6538010070746264;
    msg.bearing = 0.9918824017613014;
    msg.elevation = 0.672105846639986;
    msg.phi = 0.9681920871444897;
    msg.theta = 0.9273613676858364;
    msg.psi = 0.6433048936718804;
    msg.accuracy = 0.2347127436117541;

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
    msg.setTimeStamp(0.8980269924140509);
    msg.setSource(53982U);
    msg.setSourceEntity(150U);
    msg.setDestination(50181U);
    msg.setDestinationEntity(165U);
    msg.target.assign("XUENWLASVVNKSDGPD");
    msg.lbearing = 0.2014735515818632;
    msg.lelevation = 0.038083204783641134;
    msg.bearing = 0.029988603755924603;
    msg.elevation = 0.04423435438452217;
    msg.phi = 0.4386375441222007;
    msg.theta = 0.18711177101252863;
    msg.psi = 0.19196025671201566;
    msg.accuracy = 0.5549611209262743;

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
    msg.setTimeStamp(0.7752432618766392);
    msg.setSource(29466U);
    msg.setSourceEntity(37U);
    msg.setDestination(19659U);
    msg.setDestinationEntity(78U);
    msg.target.assign("MMNSXTWNWVAPAFKTYCMNKXZFYLSVENTDJUSFAROBXPYYEOWNOXSUITHFIXHQTZJEJYHRSGMRXIGQASJB");
    msg.lbearing = 0.3235442739879555;
    msg.lelevation = 0.001525519535216957;
    msg.bearing = 0.377808888300706;
    msg.elevation = 0.6039736483894379;
    msg.phi = 0.22529691428288168;
    msg.theta = 0.9934790188936744;
    msg.psi = 0.5604296612893491;
    msg.accuracy = 0.6215168207924477;

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
    msg.setTimeStamp(0.1928185095244419);
    msg.setSource(20222U);
    msg.setSourceEntity(175U);
    msg.setDestination(2891U);
    msg.setDestinationEntity(53U);
    msg.target.assign("SRBALIBJPWQVVTHIOAJVGDFZIDCOULIINWOWDCJTZNKCWQGNHEDJAMLHMNICHGGSDHYNKCMQZUATGUVQCWPNUTKSDYPQBZRTXZXYZPYRLKMXHKMGMUFANGZFLDAHCSNSIYORIKM");
    msg.x = 0.20905430465915753;
    msg.y = 0.810907199342135;
    msg.z = 0.8329712511319275;
    msg.n = 0.681399307617551;
    msg.e = 0.8962083484193262;
    msg.d = 0.4924611235824694;
    msg.phi = 0.8366616385939866;
    msg.theta = 0.14177063283866498;
    msg.psi = 0.37965359760195316;
    msg.accuracy = 0.3731585059262069;

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
    msg.setTimeStamp(0.7327021299637462);
    msg.setSource(9407U);
    msg.setSourceEntity(2U);
    msg.setDestination(4779U);
    msg.setDestinationEntity(49U);
    msg.target.assign("RYGLXDVHRWLDXIEOELTVJLPSZXQMQTGPUAECWNZSBIQCICNUGRGBKAWZVJS");
    msg.x = 0.8870490842636702;
    msg.y = 0.5339082942875174;
    msg.z = 0.5292032873012809;
    msg.n = 0.8912344311845;
    msg.e = 0.26069706077431565;
    msg.d = 0.39353000833582186;
    msg.phi = 0.10631793508293352;
    msg.theta = 0.513763333969616;
    msg.psi = 0.7483427909175675;
    msg.accuracy = 0.1540702361077645;

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
    msg.setTimeStamp(0.0022125033119611004);
    msg.setSource(54465U);
    msg.setSourceEntity(162U);
    msg.setDestination(36218U);
    msg.setDestinationEntity(50U);
    msg.target.assign("SANXFPFNOGRSGFLXKRTFBZOWHLRHDOONWSTUVSKCLCMEPCZAJDSOJAYEQEKQZXALREYLDJZDQRASLBUYGVVNHUBAPTJAPWZKVJMPWJFBZPIUYTIDBRINDQAGCEKKSNKTSNMYBMXSLRCFJHIZMTQDYZHBNQWDDVUHLEKZGUWTCQQIQTELCFMVRMBXFBWHPACOJKUGZPGVIXYBORNUOVXMGHUROOTWIMLGJFVJECWA");
    msg.x = 0.22802275550017725;
    msg.y = 0.03736286955043633;
    msg.z = 0.6547313587031454;
    msg.n = 0.8723403291151338;
    msg.e = 0.6399916671090986;
    msg.d = 0.34480752990338126;
    msg.phi = 0.2258959483116093;
    msg.theta = 0.3423363151731351;
    msg.psi = 0.4612728213300522;
    msg.accuracy = 0.8921847831078863;

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
    msg.setTimeStamp(0.24719322214826023);
    msg.setSource(6586U);
    msg.setSourceEntity(27U);
    msg.setDestination(41480U);
    msg.setDestinationEntity(6U);
    msg.target.assign("IJFWICFKZPVJUATNUIDRHKGEZAEGHFDOMSZHRMXNCVTQJYTVGTDWBEXSPFPHVKXGKRABPXNTIKLBLWFWKJYECGAQDDXMB");
    msg.lat = 0.369623089068818;
    msg.lon = 0.6522324396137669;
    msg.z_units = 181U;
    msg.z = 0.7268016984582532;
    msg.accuracy = 0.3544930862118072;

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
    msg.setTimeStamp(0.773400948986246);
    msg.setSource(29372U);
    msg.setSourceEntity(195U);
    msg.setDestination(51005U);
    msg.setDestinationEntity(16U);
    msg.target.assign("AMQIFTRKOMRXGXQIRFBKIBDSEEKWTSNEOCFCNHLXOJGJGORIDZBAUZCPIJFHUSNTOYAPMUBUKTVRUYUBNYPQHONRWYMFLQKJLNMBFENDKEVEMYMAPWCYSPRBYHNZPJQKDLULIIXHCRLDPVVIZTDCZTOWXGMYPROQXKNAVLZWDQZAIATQDFNUPSFSAYHBHRWGFDVGVVCSYWJHWLJAXJIGXXQQTXCWKU");
    msg.lat = 0.9131538437985072;
    msg.lon = 0.9093116179384223;
    msg.z_units = 193U;
    msg.z = 0.4324658816853463;
    msg.accuracy = 0.013402253422410304;

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
    msg.setTimeStamp(0.047785839038095745);
    msg.setSource(18978U);
    msg.setSourceEntity(205U);
    msg.setDestination(43776U);
    msg.setDestinationEntity(87U);
    msg.target.assign("VPXCQVZQCYKLPWDZMZKPWVZPDNHLIEPMZGAETOSWQVTNIAURJAUGZFLGFWQFUYRKTEOLLWKMRYHTORGPCBYVNIJYDFLUBYEJYCIVPTGOARZHNOMTDDUFUFDEMEN");
    msg.lat = 0.024783580503901725;
    msg.lon = 0.41112458714195177;
    msg.z_units = 170U;
    msg.z = 0.3095341346286199;
    msg.accuracy = 0.7421097004923541;

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
    msg.setTimeStamp(0.9325556984625388);
    msg.setSource(3169U);
    msg.setSourceEntity(184U);
    msg.setDestination(48187U);
    msg.setDestinationEntity(71U);
    msg.name.assign("QAWCEXFHAXTBESLUWJDZNQNSFARKQVLO");
    msg.lat = 0.8078721117289135;
    msg.lon = 0.34562659641667914;
    msg.z = 0.44156047973879964;
    msg.z_units = 172U;

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
    msg.setTimeStamp(0.653313969095004);
    msg.setSource(22952U);
    msg.setSourceEntity(9U);
    msg.setDestination(34483U);
    msg.setDestinationEntity(153U);
    msg.name.assign("LEQZTXTCPLQVKVDIOULOQTSZZCSVSKSJRUWCKRXIZLMWUAXCHMZKDD");
    msg.lat = 0.7555692138344551;
    msg.lon = 0.19750474333397505;
    msg.z = 0.0021939328201279196;
    msg.z_units = 160U;

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
    msg.setTimeStamp(0.553784718276066);
    msg.setSource(60208U);
    msg.setSourceEntity(98U);
    msg.setDestination(43092U);
    msg.setDestinationEntity(9U);
    msg.name.assign("ZIQYSYUXFTHUJOJWYRPN");
    msg.lat = 0.44562682629775174;
    msg.lon = 0.1252198604445599;
    msg.z = 0.18299383744285525;
    msg.z_units = 181U;

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
    msg.setTimeStamp(0.18404127425177652);
    msg.setSource(21176U);
    msg.setSourceEntity(73U);
    msg.setDestination(18782U);
    msg.setDestinationEntity(4U);
    msg.op = 6U;

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
    msg.setTimeStamp(0.22492159662200983);
    msg.setSource(52440U);
    msg.setSourceEntity(213U);
    msg.setDestination(54404U);
    msg.setDestinationEntity(231U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.17082136324546582);
    msg.setSource(22606U);
    msg.setSourceEntity(249U);
    msg.setDestination(52123U);
    msg.setDestinationEntity(221U);
    msg.op = 38U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("IPAIVFXDUDPWYBXWAALRREFNRRQEYNMJVQRCWEMRCMFJGDLDDEBJNXGHWXJVQOLVEINTINSXLSUEWZRDXJZHBJCCNMKDZZMFUZXTYNTBHIVIKCMSGCLOGGZFLXFKAUBCOVAYHKQSHOVZWYJWHCOAHQZUPORAIGDQBKLJGPVZ");
    tmp_msg_0.lat = 0.35296079258828505;
    tmp_msg_0.lon = 0.4276215555894771;
    tmp_msg_0.z = 0.46201943645226806;
    tmp_msg_0.z_units = 95U;
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
    msg.setTimeStamp(0.5647865554654793);
    msg.setSource(64995U);
    msg.setSourceEntity(39U);
    msg.setDestination(63799U);
    msg.setDestinationEntity(9U);
    msg.value = 0.6118087731636166;
    msg.type = 224U;

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
    msg.setTimeStamp(0.3504140046662235);
    msg.setSource(26668U);
    msg.setSourceEntity(209U);
    msg.setDestination(14504U);
    msg.setDestinationEntity(140U);
    msg.value = 0.8259494006372975;
    msg.type = 26U;

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
    msg.setTimeStamp(0.9533131854708778);
    msg.setSource(27340U);
    msg.setSourceEntity(44U);
    msg.setDestination(24043U);
    msg.setDestinationEntity(231U);
    msg.value = 0.9341696004087179;
    msg.type = 224U;

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
    msg.setTimeStamp(0.6338472116359968);
    msg.setSource(36203U);
    msg.setSourceEntity(83U);
    msg.setDestination(46851U);
    msg.setDestinationEntity(97U);
    msg.value = 0.9290493622634429;

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
    msg.setTimeStamp(0.22919701204525267);
    msg.setSource(49039U);
    msg.setSourceEntity(61U);
    msg.setDestination(35831U);
    msg.setDestinationEntity(122U);
    msg.value = 0.7287841457278901;

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
    msg.setTimeStamp(0.803728284538567);
    msg.setSource(60833U);
    msg.setSourceEntity(111U);
    msg.setDestination(55985U);
    msg.setDestinationEntity(129U);
    msg.value = 0.769486017559315;

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
    msg.setTimeStamp(0.3488303400918933);
    msg.setSource(34376U);
    msg.setSourceEntity(99U);
    msg.setDestination(24324U);
    msg.setDestinationEntity(20U);
    msg.timestamp_last_service = 0.08490035769735227;
    msg.time_next_service = 0.7946204263998752;
    msg.time_motor_next_service = 0.860397818117214;
    msg.time_idle_ground = 0.08090729723807155;
    msg.time_idle_air = 0.06531478798097212;
    msg.time_idle_water = 0.8334940051023472;
    msg.time_idle_underwater = 0.4841734329731998;
    msg.time_idle_unknown = 0.0051821946951576825;
    msg.time_motor_ground = 0.16680189562896208;
    msg.time_motor_air = 0.5918535159979275;
    msg.time_motor_water = 0.7466319526355498;
    msg.time_motor_underwater = 0.07751362913164495;
    msg.time_motor_unknown = 0.2957141133627109;
    msg.rpm_min = 6305;
    msg.rpm_max = -19166;
    msg.depth_max = 0.2710502930887515;

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
    msg.setTimeStamp(0.8679546779013165);
    msg.setSource(56673U);
    msg.setSourceEntity(147U);
    msg.setDestination(27068U);
    msg.setDestinationEntity(104U);
    msg.timestamp_last_service = 0.8298404306237719;
    msg.time_next_service = 0.22004574744304684;
    msg.time_motor_next_service = 0.8811774736624087;
    msg.time_idle_ground = 0.3375956579414142;
    msg.time_idle_air = 0.32412271712088403;
    msg.time_idle_water = 0.15292577110881922;
    msg.time_idle_underwater = 0.23996991526874212;
    msg.time_idle_unknown = 0.2159360569832921;
    msg.time_motor_ground = 0.6126693887540031;
    msg.time_motor_air = 0.8629311667456618;
    msg.time_motor_water = 0.4154342090897133;
    msg.time_motor_underwater = 0.39147364576208554;
    msg.time_motor_unknown = 0.5951792679377131;
    msg.rpm_min = 9072;
    msg.rpm_max = -7922;
    msg.depth_max = 0.882793197955203;

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
    msg.setTimeStamp(0.9134087196215228);
    msg.setSource(10541U);
    msg.setSourceEntity(180U);
    msg.setDestination(57533U);
    msg.setDestinationEntity(62U);
    msg.timestamp_last_service = 0.8310745968331631;
    msg.time_next_service = 0.3354262193807782;
    msg.time_motor_next_service = 0.5762010775622582;
    msg.time_idle_ground = 0.03629961828831252;
    msg.time_idle_air = 0.02539966287621276;
    msg.time_idle_water = 0.6907481807108571;
    msg.time_idle_underwater = 0.6852835296077944;
    msg.time_idle_unknown = 0.37454613919374036;
    msg.time_motor_ground = 0.6030262630778956;
    msg.time_motor_air = 0.7982179229226763;
    msg.time_motor_water = 0.9993778754287372;
    msg.time_motor_underwater = 0.4516377934931516;
    msg.time_motor_unknown = 0.6544792653760355;
    msg.rpm_min = -27161;
    msg.rpm_max = 921;
    msg.depth_max = 0.6085385099947181;

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
    msg.setTimeStamp(0.514699041853392);
    msg.setSource(10251U);
    msg.setSourceEntity(208U);
    msg.setDestination(42107U);
    msg.setDestinationEntity(100U);
    msg.severity = 53U;
    msg.text.assign("SOZMVIHJHBONDQSUBNVLQBRLNMCZVONEMXFTRLLZVCLZPHTGMCCZRIKTRAPYEVJHAWPRAOWXAPVUNCXAJILSYYWYUJHBGUFAPCDFAIEFZFOEKEFKEIIQDRGXWUSWDMIPDYGTJOLKQTQZHPRAVFWZKYYMKSGBYHVUFNRFKCRXPSHQJTBHQGBNBQLHEDCMIDWSKXVNXMWPXDKERNLSMKCBSBGEC");

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
    msg.setTimeStamp(0.3556093036244167);
    msg.setSource(23869U);
    msg.setSourceEntity(80U);
    msg.setDestination(28661U);
    msg.setDestinationEntity(243U);
    msg.severity = 248U;
    msg.text.assign("ZXXMJIUIYFWVEPGSPFDVNHMMYOTEAHIZSVKFRMQGTJYCCVDVNDDHHMBPFJMIXYDIUFGKNRNUNABYIVSKWREWXEKOANJGLNGDQBSZOREEZHZSCSOLASTKAXJAGEQIHESJXKRZLLJTQLOAFMMZDWRMSPGWPWGADBZUOYICBEZXGKXCOMPKCFCBQFKUUVFBQHWWJLHNUONPFDULWLPTGRXJOQLTQQBOYXRDBCIVJTANP");

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
    msg.setTimeStamp(0.4420343061343083);
    msg.setSource(10929U);
    msg.setSourceEntity(176U);
    msg.setDestination(47716U);
    msg.setDestinationEntity(89U);
    msg.severity = 205U;
    msg.text.assign("EXOIWNWDKRZMXKPIPHXTTFIXWOZFEUSSAFFHHNAJCRNQOCGZFEGWKMZVNSBKFXVQYNVLFOUOJYCCUMKKRGVEDMZGYYKQBJYMNYWZIUCVYRCGDFDDLUIHXRBWRUCTPRPDUBHJVHZLVBKLBVECFMTRMTPYOBSNIPXYSWHFJQZQLIIBJIDAQAHMOEKTUEJAWUZLMSNOSNWQSYGGMOTCW");

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
    msg.setTimeStamp(0.5053091136334884);
    msg.setSource(63042U);
    msg.setSourceEntity(139U);
    msg.setDestination(53641U);
    msg.setDestinationEntity(39U);
    msg.channel = 46;
    msg.value = -1670409044;
    msg.gain = 90U;

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
    msg.setTimeStamp(0.6562815594778375);
    msg.setSource(64738U);
    msg.setSourceEntity(108U);
    msg.setDestination(20309U);
    msg.setDestinationEntity(135U);
    msg.channel = -102;
    msg.value = -799166594;
    msg.gain = 201U;

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
    msg.setTimeStamp(0.5446836915542388);
    msg.setSource(24893U);
    msg.setSourceEntity(220U);
    msg.setDestination(60845U);
    msg.setDestinationEntity(16U);
    msg.channel = -5;
    msg.value = -1312614018;
    msg.gain = 14U;

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
    msg.setTimeStamp(0.12171662958548957);
    msg.setSource(49868U);
    msg.setSourceEntity(235U);
    msg.setDestination(47139U);
    msg.setDestinationEntity(51U);
    msg.ch01 = 0.44219835514988304;
    msg.ch02 = 0.10573311551560105;
    msg.ch03 = 0.27004434617635076;
    msg.ch04 = 0.3834876306606714;
    msg.ch05 = 0.8413901688015258;
    msg.ch06 = 0.37241926746797105;
    msg.ch07 = 0.6774216633680394;
    msg.ch08 = 0.6707530301064093;
    msg.ch09 = 0.1102055891222109;
    msg.ch10 = 0.0713437692929676;
    msg.ch11 = 0.5372225818754647;
    msg.ch12 = 0.5941366482043448;
    msg.ch13 = 0.7985603359686065;
    msg.ch14 = 0.036305550701879796;
    msg.ch15 = 0.01820399505913184;
    msg.ch16 = 0.6413521364620394;

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
    msg.setTimeStamp(0.5410036075023893);
    msg.setSource(5705U);
    msg.setSourceEntity(154U);
    msg.setDestination(25827U);
    msg.setDestinationEntity(96U);
    msg.ch01 = 0.12096897933881279;
    msg.ch02 = 0.05739950367412516;
    msg.ch03 = 0.6851160628807161;
    msg.ch04 = 0.2837709234288305;
    msg.ch05 = 0.14187751759020795;
    msg.ch06 = 0.18022954656589307;
    msg.ch07 = 0.5189585672009815;
    msg.ch08 = 0.46225373262567593;
    msg.ch09 = 0.37634874063656654;
    msg.ch10 = 0.9372608609396198;
    msg.ch11 = 0.9538290398309447;
    msg.ch12 = 0.8062659018230274;
    msg.ch13 = 0.9522716433752668;
    msg.ch14 = 0.29489652441043634;
    msg.ch15 = 0.2519203655269623;
    msg.ch16 = 0.45888392300067005;

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
    msg.setTimeStamp(0.8164242682045125);
    msg.setSource(20969U);
    msg.setSourceEntity(45U);
    msg.setDestination(32322U);
    msg.setDestinationEntity(18U);
    msg.ch01 = 0.16194897414131593;
    msg.ch02 = 0.050709761641560935;
    msg.ch03 = 0.21079839332112527;
    msg.ch04 = 0.3515898343726248;
    msg.ch05 = 0.9705242964342887;
    msg.ch06 = 0.4062305286622354;
    msg.ch07 = 0.7558498349795634;
    msg.ch08 = 0.3939183703927658;
    msg.ch09 = 0.22740063909179775;
    msg.ch10 = 0.5462392650238271;
    msg.ch11 = 0.08981039657462664;
    msg.ch12 = 0.6559703791296856;
    msg.ch13 = 0.2954577003060921;
    msg.ch14 = 0.5684987667142672;
    msg.ch15 = 0.9854669671266449;
    msg.ch16 = 0.4491711272319654;

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
    msg.setTimeStamp(0.3296772123847904);
    msg.setSource(44137U);
    msg.setSourceEntity(133U);
    msg.setDestination(19362U);
    msg.setDestinationEntity(217U);
    msg.type = 42U;

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
    msg.setTimeStamp(0.9890575256900885);
    msg.setSource(16231U);
    msg.setSourceEntity(143U);
    msg.setDestination(23204U);
    msg.setDestinationEntity(84U);
    msg.type = 199U;

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
    msg.setTimeStamp(0.26450845543917034);
    msg.setSource(59631U);
    msg.setSourceEntity(34U);
    msg.setDestination(2378U);
    msg.setDestinationEntity(235U);
    msg.type = 200U;

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
    msg.setTimeStamp(0.19179855806905233);
    msg.setSource(65439U);
    msg.setSourceEntity(124U);
    msg.setDestination(38253U);
    msg.setDestinationEntity(44U);
    msg.value = 0.05230486237154508;

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
    msg.setTimeStamp(0.2928643169000771);
    msg.setSource(11648U);
    msg.setSourceEntity(114U);
    msg.setDestination(11858U);
    msg.setDestinationEntity(167U);
    msg.value = 0.5888932103271711;

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
    msg.setTimeStamp(0.24208619179635726);
    msg.setSource(50171U);
    msg.setSourceEntity(106U);
    msg.setDestination(13004U);
    msg.setDestinationEntity(132U);
    msg.value = 0.20594865938434292;

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

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.9884230988657136);
    msg.setSource(48155U);
    msg.setSourceEntity(72U);
    msg.setDestination(55664U);
    msg.setDestinationEntity(86U);
    msg.value = 0.24393224816215198;

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
    msg.setTimeStamp(0.46755808533510845);
    msg.setSource(19500U);
    msg.setSourceEntity(199U);
    msg.setDestination(39531U);
    msg.setDestinationEntity(160U);
    msg.value = 0.36578900899909095;

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
    msg.setTimeStamp(0.001805105207441482);
    msg.setSource(5133U);
    msg.setSourceEntity(240U);
    msg.setDestination(27124U);
    msg.setDestinationEntity(165U);
    msg.value = 0.17423314480555208;

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
