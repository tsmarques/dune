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
// IMC XML MD5: c659e4d5ac49839c6943e6b96ceedb88                            *
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
    msg.setTimeStamp(0.7341810338007813);
    msg.setSource(34961U);
    msg.setSourceEntity(187U);
    msg.setDestination(14200U);
    msg.setDestinationEntity(104U);
    msg.state = 8U;
    msg.flags = 50U;
    msg.description.assign("JNAYEMOBJXDXFOTDFIJMBLIOICEMTTAMQFCXWVLJEOCUSZHPXLRCQTOZRWLDJWGHAYKGRAVAQSSZKMJU");

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
    msg.setTimeStamp(0.5832770522159575);
    msg.setSource(30209U);
    msg.setSourceEntity(86U);
    msg.setDestination(39240U);
    msg.setDestinationEntity(163U);
    msg.state = 245U;
    msg.flags = 239U;
    msg.description.assign("EMAFRNMLOPYOSHGKIZJKTSYRXRLTKZFKGWLWUW");

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
    msg.setTimeStamp(0.3495392153516005);
    msg.setSource(37223U);
    msg.setSourceEntity(154U);
    msg.setDestination(12851U);
    msg.setDestinationEntity(2U);
    msg.state = 78U;
    msg.flags = 151U;
    msg.description.assign("YMKNCDADHUJYCBFDRRKLGIDVOJPNRWIPYZAOQLQNNYXNQETSEESSJXXBCNYWFGYMMTLLYKKUKDPCAOHMMBZTJGJQXZMRHPGGWKCXDOWSCNHVKQMBLTUWSUZIRRRAVLOYNHZDEEMWJAOZ");

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
    msg.setTimeStamp(0.7966636303549902);
    msg.setSource(12774U);
    msg.setSourceEntity(157U);
    msg.setDestination(36927U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.11432851997942406);
    msg.setSource(27018U);
    msg.setSourceEntity(166U);
    msg.setDestination(51812U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.35298160388446753);
    msg.setSource(21485U);
    msg.setSourceEntity(23U);
    msg.setDestination(3475U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.42840277330530674);
    msg.setSource(6263U);
    msg.setSourceEntity(245U);
    msg.setDestination(42264U);
    msg.setDestinationEntity(48U);
    msg.id = 77U;
    msg.label.assign("VPAJEWMWIXQVGZGGUCOPBPPDTLWAAYOTKFIRZBNQTLSJSFAKOCHLFVDSBMYXJDCGUEBMZNYIZWATFDWVOVFTVALDEFKTLQUKRIKNJMZRHCGDNOQZPSJTBNSQWJCYSSVXMMXOBVUWLREAHDXJBICITFORPROUSWZJIHDMPUYXAFZJYAZLCPBHXGVGBKYKIWH");
    msg.component.assign("PBJAQKCWBQKPPFVPTOLMJHAWDUMSFEYISSQKPGTPKJOVJOYIWGTUJSAANHCAZMYQXKWHXFSCKOTBVXZCBENCNNGBXXIGZXUEYMBQKZDBGNVZABNJRQHZRPRDNJLNAEPDYSFKFWIMZWQRALMYDRXIQIXXCUGVFFYWOFUSIOFGQBRMSCURIJTOZSGTAODLVOVLTTEDQRSWNYFRHWYMBUIRTVGPZUOLEADLXHUVHDYPHECJKHGTEUEVLJWZ");
    msg.act_time = 31550U;
    msg.deact_time = 37976U;

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
    msg.setTimeStamp(0.32743177253751754);
    msg.setSource(31382U);
    msg.setSourceEntity(232U);
    msg.setDestination(62009U);
    msg.setDestinationEntity(129U);
    msg.id = 11U;
    msg.label.assign("BIPHFYIQWPBKERVWXMZKZFNKFCSKGLIMRBZOSOLTGFWNYXASAMXAHSYVICAJPDWCJZ");
    msg.component.assign("JMBXMYFBCV");
    msg.act_time = 120U;
    msg.deact_time = 33150U;

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
    msg.setTimeStamp(0.7547167005537808);
    msg.setSource(20768U);
    msg.setSourceEntity(188U);
    msg.setDestination(18755U);
    msg.setDestinationEntity(149U);
    msg.id = 240U;
    msg.label.assign("SORVCXBIUROJVOWVYWKULLAGFUBECDWZMNALDJIEAZWIRLAGFVMHAZGYYQHKSQPHYXOQQIJRAKNLQPHPGRXCDUGWTEKPLXIUMLRLFCCOIBKITTMXNOPFNHDOSUJUJNVILSKBVEHXGUMBEPSZPQEKFATJRPKYXWMRTKQSFNBQWXZDHVWTPOYBVGXBMTZDYVSBFGAZGZJTCNIAFMYDWFSFHZENDPSZQBLJDUNAOCRGC");
    msg.component.assign("WXQCKHGPJTYUPTRJJQOYUVBFAHZVXWYJALQWIRSRNS");
    msg.act_time = 48414U;
    msg.deact_time = 35475U;

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
    msg.setTimeStamp(0.21452190113806735);
    msg.setSource(56811U);
    msg.setSourceEntity(58U);
    msg.setDestination(13936U);
    msg.setDestinationEntity(214U);
    msg.id = 0U;

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
    msg.setTimeStamp(0.634184704766947);
    msg.setSource(37910U);
    msg.setSourceEntity(4U);
    msg.setDestination(18699U);
    msg.setDestinationEntity(252U);
    msg.id = 253U;

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
    msg.setTimeStamp(0.19051768084398701);
    msg.setSource(27550U);
    msg.setSourceEntity(37U);
    msg.setDestination(42145U);
    msg.setDestinationEntity(47U);
    msg.id = 50U;

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
    msg.setTimeStamp(0.19391797317570203);
    msg.setSource(64292U);
    msg.setSourceEntity(238U);
    msg.setDestination(10133U);
    msg.setDestinationEntity(173U);
    msg.op = 26U;
    msg.list.assign("ODRUJRFZJFFFRABKHEHAPYAUMCGIPMUOICKIPRANQVSOWTHKRECEBHMTBSRE");

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
    msg.setTimeStamp(0.6897075691029914);
    msg.setSource(4362U);
    msg.setSourceEntity(181U);
    msg.setDestination(42769U);
    msg.setDestinationEntity(209U);
    msg.op = 172U;
    msg.list.assign("OGLWEVXQCYRVRZGKAJWJBEIUUNZTSKUHNOCD");

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
    msg.setTimeStamp(0.7294138000548592);
    msg.setSource(14647U);
    msg.setSourceEntity(212U);
    msg.setDestination(49057U);
    msg.setDestinationEntity(172U);
    msg.op = 92U;
    msg.list.assign("GSRPXBELWUIFNAVRFGBCFDWPQKECEVRAQREQYUFJDJQHZQLSKVNZTDQPNKDLOTMRPJPTBKJBLXOYVMTZOLSOUMZXOSUACKASGDQK");

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
    msg.setTimeStamp(0.19736195227222153);
    msg.setSource(14200U);
    msg.setSourceEntity(224U);
    msg.setDestination(33279U);
    msg.setDestinationEntity(21U);
    msg.value = 95U;

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
    msg.setTimeStamp(0.6160862164863872);
    msg.setSource(49465U);
    msg.setSourceEntity(2U);
    msg.setDestination(9590U);
    msg.setDestinationEntity(90U);
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
    msg.setTimeStamp(0.07004097524357433);
    msg.setSource(56474U);
    msg.setSourceEntity(35U);
    msg.setDestination(56706U);
    msg.setDestinationEntity(100U);
    msg.value = 10U;

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
    msg.setTimeStamp(0.4562085487768678);
    msg.setSource(62009U);
    msg.setSourceEntity(26U);
    msg.setDestination(28555U);
    msg.setDestinationEntity(32U);
    msg.consumer.assign("VBPSJKQSAXJRHFRUFTINXZAAJCGSUEQSPGPIHAWUIRQVDCXRCFXZMIEHNGQQKQWZGWLTRXLYSNWBFZXJHNOGZYEYOLHQWVHUSKFKDBWFZYNULABEILWNLOKZXRDULYMNCIXHERDSCVBKYCROVEVVOGRCGPICUNDMUJULKKKQYXC");
    msg.message_id = 13612U;

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
    msg.setTimeStamp(0.9765700376983149);
    msg.setSource(34900U);
    msg.setSourceEntity(2U);
    msg.setDestination(38852U);
    msg.setDestinationEntity(154U);
    msg.consumer.assign("VCDBWWALOKJNIQTCQTBWJQASVWABHGLPMOBHCOUIWWIPFDKGERAG");
    msg.message_id = 11410U;

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
    msg.setTimeStamp(0.045435267686787406);
    msg.setSource(43241U);
    msg.setSourceEntity(106U);
    msg.setDestination(3635U);
    msg.setDestinationEntity(199U);
    msg.consumer.assign("QVWIIRCVFSOZQWNJWPXYJCKHDVXOISPTRMQVVGIHFGLAJKADDUWVGSWARCTLZOPBOPPVQATTIWNNEHUESYXIREXKQEAPKHOMEHRJJOKLNCRCNYTSKIHJOLADBEYMEOEAYPVFZYMUKKMSILFGNBQUDZUBJJWJSJTGWRZFUFCBBZUAYLPLDOYMQIUMECGMOGKRY");
    msg.message_id = 59504U;

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
    msg.setTimeStamp(0.5941088729220301);
    msg.setSource(27893U);
    msg.setSourceEntity(215U);
    msg.setDestination(17787U);
    msg.setDestinationEntity(22U);
    msg.type = 190U;

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
    msg.setTimeStamp(0.5765810013058059);
    msg.setSource(19419U);
    msg.setSourceEntity(121U);
    msg.setDestination(38259U);
    msg.setDestinationEntity(23U);
    msg.type = 215U;

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
    msg.setTimeStamp(0.5279197615123898);
    msg.setSource(45779U);
    msg.setSourceEntity(214U);
    msg.setDestination(4339U);
    msg.setDestinationEntity(20U);
    msg.type = 206U;

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
    msg.setTimeStamp(0.9610924094252624);
    msg.setSource(11376U);
    msg.setSourceEntity(180U);
    msg.setDestination(9334U);
    msg.setDestinationEntity(9U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.25647105329975717);
    msg.setSource(12206U);
    msg.setSourceEntity(198U);
    msg.setDestination(10501U);
    msg.setDestinationEntity(50U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.907052920180458);
    msg.setSource(58771U);
    msg.setSourceEntity(137U);
    msg.setDestination(15218U);
    msg.setDestinationEntity(68U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.8520552172416532);
    msg.setSource(53370U);
    msg.setSourceEntity(122U);
    msg.setDestination(52206U);
    msg.setDestinationEntity(176U);
    msg.total_steps = 96U;
    msg.step_number = 171U;
    msg.step.assign("MCRIXHTRIBNUGXHIVEKEDFOGJWZVPDDQRYYNHEYFFXYDIRJQPILCEDFGYTYELCVPDJBLUKCMZWGWJKSZAPMMGBSXWXPSUPAFHLQXXRXAFAUUDSPURHKJGMOTAGWGTMKNVJSVRNBKEURFGESIZJWFKJLXLWSOFZOM");
    msg.flags = 233U;

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
    msg.setTimeStamp(0.9835308585512134);
    msg.setSource(38237U);
    msg.setSourceEntity(145U);
    msg.setDestination(17125U);
    msg.setDestinationEntity(79U);
    msg.total_steps = 127U;
    msg.step_number = 170U;
    msg.step.assign("MCOJMUJRYBVQWWWTKQHJODJPOOQHSKUHPO");
    msg.flags = 126U;

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
    msg.setTimeStamp(0.9031173748795085);
    msg.setSource(57437U);
    msg.setSourceEntity(63U);
    msg.setDestination(36213U);
    msg.setDestinationEntity(123U);
    msg.total_steps = 150U;
    msg.step_number = 71U;
    msg.step.assign("INZQUYZCZGMELJYHJPGSBANUJSVDHPYDEMINGZAZHMPOBCLWUEBMXMXHOULGOXBNEMQXFPDEUAKRDIQVNUXSNTIJJDLHNFQRCMWAPKDLLSEDSLBGGFDZVFWOWARVFMTLDAHYXVQIEVEBHWPSWKCSIBGPOUCVREKZJJVTBTWYHOVRMQJYUPZTFYHFKXHQDAYFPKJWYVTURAPIXCEBOCSCXQKUNROIGTWMKRYZQSBAATFNOFKRRGCJXILLTOGZ");
    msg.flags = 117U;

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
    msg.setTimeStamp(0.9606115505942704);
    msg.setSource(62887U);
    msg.setSourceEntity(66U);
    msg.setDestination(24002U);
    msg.setDestinationEntity(194U);
    msg.state = 165U;
    msg.error.assign("OUXUQXXKNWWDRSZMOQLOVLIEWACNTJIAMTIQGZQHUBTWPRNFMAAGJZFLYVNRTEQUBZOSAMVYDPYIGTGPBHALJKCDKNWNGIPKYXKCFVOYOLWCCFTRERURCHGQZHGJJZUTPVMNJEACXCDWMHJZBRRPCYBZOBPSAHZKDSJBHQJLCTADUWKLPAIKMXNZVKFSEEIFDELFLIBRTOSEGMXHTDDPQBYUYV");

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
    msg.setTimeStamp(0.9229357699121628);
    msg.setSource(23719U);
    msg.setSourceEntity(32U);
    msg.setDestination(7130U);
    msg.setDestinationEntity(231U);
    msg.state = 223U;
    msg.error.assign("FNOPMKRWCIGJLBRMDEFGBQQFMTDSWZDOMKXKMEQHOWLRHXKLSXBJUAYLUPWTPGNAOLVJDOUZJNKPMFLWJRZCBPSLEFEHXCVUYUKVTIBNDPCYJDGQWGTHIZSNIFLHGYFCIVYGXVKYDQGEPASXNUZOXQNTRVSHMGZHYZILOECSHAAZMKWOAUZQZBO");

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
    msg.setTimeStamp(0.7026407019374558);
    msg.setSource(34219U);
    msg.setSourceEntity(136U);
    msg.setDestination(58581U);
    msg.setDestinationEntity(16U);
    msg.state = 104U;
    msg.error.assign("LXXGLESLHHSMSDPLCHUMZUXCQMCIFRRPKCGZYTZAHTDXDKRHOTCCVWYGTRGNKSIHJUMSBGKVRBNLZNCONGPWYPCPIOGPILJBKFQVEZEUHZWUCJBIWXQQVDNETSTBDVRFITLYOBMPZAAJKOXOWFFNNXAOUIBYQQKKLDMVAESSVCWTNBPKWO");

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
    msg.setTimeStamp(0.4352411061234308);
    msg.setSource(6089U);
    msg.setSourceEntity(72U);
    msg.setDestination(59711U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.5254147162324567);
    msg.setSource(31169U);
    msg.setSourceEntity(53U);
    msg.setDestination(44884U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.3250084691721611);
    msg.setSource(13786U);
    msg.setSourceEntity(213U);
    msg.setDestination(5747U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.5929741280526301);
    msg.setSource(37837U);
    msg.setSourceEntity(224U);
    msg.setDestination(64711U);
    msg.setDestinationEntity(101U);
    msg.op = 118U;
    msg.speed_min = 0.33480863516443293;
    msg.speed_max = 0.9007641978442047;
    msg.long_accel = 0.9287724956384772;
    msg.alt_max_msl = 0.4517238004085161;
    msg.dive_fraction_max = 0.6002254928158424;
    msg.climb_fraction_max = 0.8931307035932605;
    msg.bank_max = 0.7157329167159314;
    msg.p_max = 0.29497795201338606;
    msg.pitch_min = 0.354570628106449;
    msg.pitch_max = 0.13337188559019209;
    msg.q_max = 0.10600121634121518;
    msg.g_min = 0.49610292267780043;
    msg.g_max = 0.9638306533570403;
    msg.g_lat_max = 0.6077898710316639;
    msg.rpm_min = 0.7811747597628556;
    msg.rpm_max = 0.17666933949921593;
    msg.rpm_rate_max = 0.8982360883854998;

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
    msg.setTimeStamp(0.027252128620550264);
    msg.setSource(12340U);
    msg.setSourceEntity(61U);
    msg.setDestination(12112U);
    msg.setDestinationEntity(191U);
    msg.op = 5U;
    msg.speed_min = 0.34189371014989534;
    msg.speed_max = 0.04117629542769863;
    msg.long_accel = 0.26311841837651806;
    msg.alt_max_msl = 0.8065029653597716;
    msg.dive_fraction_max = 0.4895631196006577;
    msg.climb_fraction_max = 0.19036346936212079;
    msg.bank_max = 0.23568364056231172;
    msg.p_max = 0.19666259217446946;
    msg.pitch_min = 0.15216357770669942;
    msg.pitch_max = 0.5572996151101282;
    msg.q_max = 0.6076635083789589;
    msg.g_min = 0.4349291142185203;
    msg.g_max = 0.7241358901786014;
    msg.g_lat_max = 0.41747391870433914;
    msg.rpm_min = 0.17973477788445857;
    msg.rpm_max = 0.329243993922013;
    msg.rpm_rate_max = 0.16669900242229896;

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
    msg.setTimeStamp(0.4292494422621237);
    msg.setSource(20846U);
    msg.setSourceEntity(109U);
    msg.setDestination(37749U);
    msg.setDestinationEntity(91U);
    msg.op = 184U;
    msg.speed_min = 0.9834190248449475;
    msg.speed_max = 0.35807051111947363;
    msg.long_accel = 0.9529698728040249;
    msg.alt_max_msl = 0.7024722882385132;
    msg.dive_fraction_max = 0.19881800227814606;
    msg.climb_fraction_max = 0.4752832855862187;
    msg.bank_max = 0.49725960661691815;
    msg.p_max = 0.824773360668924;
    msg.pitch_min = 0.3357425709315991;
    msg.pitch_max = 0.07075879747811609;
    msg.q_max = 0.8400324136784225;
    msg.g_min = 0.3938738635384865;
    msg.g_max = 0.04507372681747024;
    msg.g_lat_max = 0.776975680575032;
    msg.rpm_min = 0.8782621885557509;
    msg.rpm_max = 0.5454065970087968;
    msg.rpm_rate_max = 0.72463616683289;

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
    msg.setTimeStamp(0.1320087156100882);
    msg.setSource(16539U);
    msg.setSourceEntity(22U);
    msg.setDestination(17432U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.5014262895490743);
    msg.setSource(55536U);
    msg.setSourceEntity(133U);
    msg.setDestination(37829U);
    msg.setDestinationEntity(164U);
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.4403306480954505;
    tmp_msg_0.width = 0.0753841161002079;
    tmp_msg_0.length = 0.6982984507775718;
    tmp_msg_0.bearing = 0.6874313487970466;
    tmp_msg_0.pxl = 1536;
    tmp_msg_0.encoding = 232U;
    const char tmp_tmp_msg_0_0[] = {-101, 13, -42, 61, -37, 87, 83, -55, -106, -74, -123, 54, 117, 93, -67, -34, 51, 83, -94, 126, 10, 77, -14, 8, 37, -91, 122, 22, -7, -65, 47, 16, -94, 81, -13, -41, 13, -48, -42, -69, 70, -12, -66, -7, -29, 20, -20, 30, -59, 42, 52, -86, -124, -111, -120, 111, -124, 8, 0, 95, 43, -83, -23, 69, 77, -93, -102, 45, -56, -96, -47, 110, -97, -44, 78, 82, -66, 37, -51, 77, 20, 20, 32, 85, 5, 100, 89, 110, -3, -49, 12, -91, 92, 29, -112, -98, -28, -24, 103, -56, -117, 121, -107, -116, -104, 83, 45, 16, 105, 66, 63, 21, 26, -11, -70, 76, 83, 7, -114, -50, -110, 6, -40, 95, -19, -72, -5, -128, 107, -24, 29, -13, 101, -70};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7563836733458414);
    msg.setSource(40968U);
    msg.setSourceEntity(190U);
    msg.setDestination(487U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.4403098329877416);
    msg.setSource(38454U);
    msg.setSourceEntity(128U);
    msg.setDestination(64728U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.00035495978030519737;
    msg.lon = 0.5566517174713449;
    msg.height = 0.8113504003910409;
    msg.x = 0.5824891971785255;
    msg.y = 0.8159513203594674;
    msg.z = 0.6173282660933513;
    msg.phi = 0.5568281081443958;
    msg.theta = 0.42675285417423636;
    msg.psi = 0.048537506346973514;
    msg.u = 0.35485784449106395;
    msg.v = 0.1674872597459749;
    msg.w = 0.13465926608671375;
    msg.p = 0.16484832626018697;
    msg.q = 0.6262223316349331;
    msg.r = 0.7003307062691881;
    msg.svx = 0.7318800108515591;
    msg.svy = 0.11161346640875291;
    msg.svz = 0.6599439835595301;

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
    msg.setTimeStamp(0.5694286350660827);
    msg.setSource(6154U);
    msg.setSourceEntity(144U);
    msg.setDestination(3054U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.9497733266550021;
    msg.lon = 0.18915908172258378;
    msg.height = 0.8042167185555025;
    msg.x = 0.903890909001566;
    msg.y = 0.4371228591950904;
    msg.z = 0.7467114010145447;
    msg.phi = 0.2362808999999929;
    msg.theta = 0.22557247791225177;
    msg.psi = 0.02476337409548368;
    msg.u = 0.5277297656205079;
    msg.v = 0.32757183933450573;
    msg.w = 0.12968610553757698;
    msg.p = 0.9508281754328581;
    msg.q = 0.6117922164632308;
    msg.r = 0.5536745891118312;
    msg.svx = 0.12410861260317196;
    msg.svy = 0.45598860850521816;
    msg.svz = 0.17653288383369126;

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
    msg.setTimeStamp(0.7920478266036349);
    msg.setSource(53581U);
    msg.setSourceEntity(86U);
    msg.setDestination(5639U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.711751952380991;
    msg.lon = 0.07102636204386714;
    msg.height = 0.039677528360294034;
    msg.x = 0.6387909508479317;
    msg.y = 0.5358348947451982;
    msg.z = 0.5388180181415789;
    msg.phi = 0.18170656417646947;
    msg.theta = 0.5992188845570805;
    msg.psi = 0.6150231304026422;
    msg.u = 0.6078215650018163;
    msg.v = 0.6863047510209472;
    msg.w = 0.2049506696084259;
    msg.p = 0.24899393468349218;
    msg.q = 0.4671853924707391;
    msg.r = 0.24328801891922547;
    msg.svx = 0.5843701755832238;
    msg.svy = 0.7199929405536482;
    msg.svz = 0.6733615426987424;

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
    msg.setTimeStamp(0.4593456191545835);
    msg.setSource(12796U);
    msg.setSourceEntity(36U);
    msg.setDestination(49798U);
    msg.setDestinationEntity(126U);
    msg.op = 130U;
    msg.entities.assign("ZSCKMHMVBZWSMETIRUGS");

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
    msg.setTimeStamp(0.7033748847068763);
    msg.setSource(29539U);
    msg.setSourceEntity(177U);
    msg.setDestination(15807U);
    msg.setDestinationEntity(180U);
    msg.op = 104U;
    msg.entities.assign("VJMQSYGMJIOQZSHUFFIAINUUXUGDJPIOHLXQTUVWUEEKYNGLN");

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
    msg.setTimeStamp(0.36307364962875355);
    msg.setSource(57805U);
    msg.setSourceEntity(189U);
    msg.setDestination(26565U);
    msg.setDestinationEntity(209U);
    msg.op = 110U;
    msg.entities.assign("OFDTNCWHMXTQCFTCDVAORIDEZXCXTZQTEYVBGARUKVFUQBQZPIVHECVIGIDUHTCFOSOHLZXFGPKXAWGRHXPKIPKKKZULMJDWYESGUYFIQGUBEUBPMFZCBDLCLLVARQXNBHNLBDGUVGJEJNNSFHSNYM");

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
    msg.setTimeStamp(0.83425880533531);
    msg.setSource(60837U);
    msg.setSourceEntity(46U);
    msg.setDestination(41057U);
    msg.setDestinationEntity(202U);
    msg.type = 97U;
    msg.speed = 36733U;
    const char tmp_msg_0[] = {84, -91, 68, -123, 8, 20, -90, 111, 9, 93, -92, 1, -97, -81, -102, -121, -110, 61, -88, -68, -118, 33, 79, 63, 54, 7, -73, -49, 10, 62, 79, 49, 81, 20, 94, 40, 20, -122, -99, 123, -13, 74, 117, 17, -90, -98, -125, 126, 21, -99, -115, -38, 41, -5, 96, -23, 119, -125, 62, -109, -50, 98, 37, 19, -123, 45, 53, -31, -109, -26, -90, 114, 53, -27, 121, 116, -118, 4, -30, 10, -47, 34, 113, -71, 125, -66, -84, 108, 16, 35, -68, 117, -49, 38, 37, -105, -106, -69, -64, 54, -19, 93, -126, -61, 8, -67, 51, -45, 78, 120, 62, 57, 26, 68, -119, 47, 32, 110, 112, 44, 55, -38, 88, 74, -59, -95, -89, 60, 110, 3, -95, 90, -126, 8, 72, -126, -75, 40, 94, 26, 37, -95, 48, -97, -82, 41, -34, -23, -98, -38, 125, 114, 27, 77, 77, -102, -57, 107, -108, -97, -21, -24, 11, 74, -98, -92, 54, 49, -29, -3, 47, -110, -117, -61, -106, 48, -20, -71, -73, 107, -35, -28, -14, 18, 25, -114, -51, -58, 8, 20, 48, 107, 43, 36, 59, -77, -13, -53, -64, -74, -114, -4, -52, -106, -57, 53, -59, 37, 62, 18, -23, -43, 86, 54, -23, -105, -83, 109, 48, -93, 53, 124, -82, 54, 33, 52, 113, -125};
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
    msg.setTimeStamp(0.3189480154825072);
    msg.setSource(12406U);
    msg.setSourceEntity(168U);
    msg.setDestination(0U);
    msg.setDestinationEntity(61U);
    msg.type = 211U;
    msg.speed = 5454U;
    const char tmp_msg_0[] = {-24, 70, 48, 48, -90, 91, 20, 110, -53, 63, -60, 4, -42, -62, 53, -106, -107, -51, -8, 113, -112, 36, 62, 16, 64, -93, -90, -9, 58, -91, -67, -14, 14, 36, -20, 125, 42, -77, -86, -19, -127, -93, 104, -99, -80, 107, 68, -41, -126, -94, -66, 42, 91, -20, -111, 113, 93, -83, 18, -55, -74, 121, -41, 120, 5, 47, 84, -96, 104, 62, 62, 95, -48, 0, 113, 69, 114, 49, -120, -99, 15, 88, -56, -71, 77, -127, 112, -104, -38, -121, 30, 113, 65, 100, 89, -53, 12, 69, 48, 125, 63, -105, -19, -114, -56, 95, 42, -70, 111, 122, 16, 11, -10, -119, -80, 121, 108, 46, -103, -104, -81, 25, -25, -104, 42, -15, 104, -19, 21, -54, 26, -70, 49, -86, -102, 66};
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
    msg.setTimeStamp(0.6142047991701458);
    msg.setSource(7811U);
    msg.setSourceEntity(176U);
    msg.setDestination(1993U);
    msg.setDestinationEntity(102U);
    msg.type = 54U;
    msg.speed = 24187U;
    const char tmp_msg_0[] = {97, 63, 29, 63, 113, 22, -91, 27, -32, -33, -11, -23, -106, -46, 85, 12, 26, -111, -6, 87, -11, 71, -113, -93, 5, 55, -3, -14, 81, -34, 55, -63, 35, 122, 11, -95, 111, -18, 21, -99, -55, -111, -8, -44, 2, -23, -12, -52, -35, 7, 30, 126, -27, 27, 99, 36, -22, -3, 84, -66, 121, 2, -57, -43, -19, -60, 78, 110, 3, 124, -77, -91, -52, -33, -74, 83, 6, -52, 125, 121, 32, 108, 1, -20, 32, -30, 96, 79, -51, 6, 3, -113, 22, 11, 103, -96, -3, -108, 35, -69, -41, 66, -1, 51, -123, 126, 78, 101, 64, -53, -79, -87, 88, -33, 8, -95, 64, 53, -35, 101, 0, 101, 40, 83, 83, 62, 87, -16, -99, -76, -38, 5, -118, 81, -98, -3, 100, 28, 91, -114, -105, 45, 23, -15, 58, 2, -18, -35, -76, 104, 4, -65, 92, 31, -122, -7, 106, -42, 47, 95, 83, -19, 38, 93, -22, -83, 50, 99, 40, 108, -94, 39, 53, 39, 32, 6, 37, -92, 32, -72, -65};
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
    msg.setTimeStamp(0.433576143967348);
    msg.setSource(14741U);
    msg.setSourceEntity(212U);
    msg.setDestination(11895U);
    msg.setDestinationEntity(150U);
    msg.op = 30U;
    msg.tas2acc_pgain = 0.8818508407346507;
    msg.bank2p_pgain = 0.9004101795933046;

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
    msg.setTimeStamp(0.3293506898938875);
    msg.setSource(36489U);
    msg.setSourceEntity(112U);
    msg.setDestination(29482U);
    msg.setDestinationEntity(38U);
    msg.op = 224U;
    msg.tas2acc_pgain = 0.002175795702686778;
    msg.bank2p_pgain = 0.33077597774606005;

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
    msg.setTimeStamp(0.7227363674879644);
    msg.setSource(37854U);
    msg.setSourceEntity(90U);
    msg.setDestination(5144U);
    msg.setDestinationEntity(235U);
    msg.op = 97U;
    msg.tas2acc_pgain = 0.6195140852010437;
    msg.bank2p_pgain = 0.6907686531725316;

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
    msg.setTimeStamp(0.41649084118431);
    msg.setSource(18697U);
    msg.setSourceEntity(147U);
    msg.setDestination(13166U);
    msg.setDestinationEntity(54U);
    msg.available = 2207544328U;
    msg.value = 138U;

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
    msg.setTimeStamp(0.0006933533145229154);
    msg.setSource(16674U);
    msg.setSourceEntity(89U);
    msg.setDestination(16648U);
    msg.setDestinationEntity(172U);
    msg.available = 1503940452U;
    msg.value = 115U;

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
    msg.setTimeStamp(0.48604214220217157);
    msg.setSource(14072U);
    msg.setSourceEntity(148U);
    msg.setDestination(57833U);
    msg.setDestinationEntity(55U);
    msg.available = 3323096404U;
    msg.value = 148U;

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
    msg.setTimeStamp(0.3032214660525715);
    msg.setSource(64356U);
    msg.setSourceEntity(165U);
    msg.setDestination(9306U);
    msg.setDestinationEntity(13U);
    msg.op = 194U;
    msg.snapshot.assign("WHXNGPABEEBKUWVWXQFNZKLZEHJGHM");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.07680891905838516;
    tmp_msg_0.lon = 0.8838950604876123;
    tmp_msg_0.depth = 40U;
    tmp_msg_0.speed = 0.520189713702317;
    tmp_msg_0.psi = 0.1525884055257859;
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
    msg.setTimeStamp(0.3215707286557018);
    msg.setSource(61561U);
    msg.setSourceEntity(72U);
    msg.setDestination(41443U);
    msg.setDestinationEntity(237U);
    msg.op = 68U;
    msg.snapshot.assign("PFWPMESIGUJPAXQGRRJVKUQJTDXXMYTJGULIYYLJZVOHCRCQHCOIFVUKDGZJNKPUCEHHXYKXSFACJDDTIZSPTHVRWFZKYYGLSCHAMGCHVEARNASFQQGNOTDGQHMBFUOBANSKVMBCLZWQWCJBMLZMZLFXJRYIIYZIUTFDBPWPZKEVTPZWRBNMVWDSODXNDTOQSSINFBNLBITMBMAEXUOKREROATLOEKHBVNQSCKQVOEUWYPWNH");
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.6296420526618389;
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
    msg.setTimeStamp(0.6739506945165172);
    msg.setSource(23503U);
    msg.setSourceEntity(182U);
    msg.setDestination(25826U);
    msg.setDestinationEntity(224U);
    msg.op = 219U;
    msg.snapshot.assign("VALGJZIPRPFOVFUHALUITNRWPXCRLMJXMLALYOBBGFIHJBGDVKANJOJIFPQTRESGPSFZZWSZAARHBKDNYPMYYEVFIVKNJHHIYLDWMPUGOWKMLESUUMRGFGTANWLEZQXEGZUCWBEASROPQFBDJXEW");
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LYXAZHXTCMCRKXPEFROWGLCFBEBSKFZCVZNUVOSGWUKVFJXDFAJHDWCZKTVGVRMUOIBKYWPPHZLFIVHSGRTQJECBEPBMMPRHJSODIDAVBWNADZZTZOKQUKJQWGIRARAYWBHNURNYWSQCXYRPBPLJUMNTSNKQ");
    tmp_msg_0.description.assign("UNXQTWZGRULQWMNAEOIFBUSIYLZFXIKVZLBOVPVETWIMQEMFNEZPABIFXAIQXCJJKLTTJTVDCORALJIGCGTNFSVZRDRDYMQMCMZNHOYPQJYQHPGSZYFFSHCHKGBUTSCPYMNHEKGLVOUKNVAYDXDXGVABYDRQDCLHS");
    tmp_msg_0.vnamespace.assign("YYYDKKFTWBJHPZAOQYFRDTQPBTPVUM");
    tmp_msg_0.start_man_id.assign("NTYMLHPLSNBFZJOVWCQRDJMJSUNAPIGLCEBKXUUCEMPTRHJNTMIOKGQGCZLIYXJVUYARNAFEROAFFQVZGPOSLJHQABIYDHRLWXDKMIVBNWSWTDOUEAZVMBTVHZYJISCDUSYTRBZBUXXQSHOKGCHQAPWYXWLC");
    IMC::Abort tmp_tmp_msg_0_0;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::GpsFix tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.validity = 42755U;
    tmp_tmp_msg_0_1.type = 83U;
    tmp_tmp_msg_0_1.utc_year = 52128U;
    tmp_tmp_msg_0_1.utc_month = 125U;
    tmp_tmp_msg_0_1.utc_day = 209U;
    tmp_tmp_msg_0_1.utc_time = 0.7169386431219491;
    tmp_tmp_msg_0_1.lat = 0.3194897342898194;
    tmp_tmp_msg_0_1.lon = 0.782792237400963;
    tmp_tmp_msg_0_1.height = 0.8316708043312424;
    tmp_tmp_msg_0_1.satellites = 74U;
    tmp_tmp_msg_0_1.cog = 0.08118966631990565;
    tmp_tmp_msg_0_1.sog = 0.6362294896640219;
    tmp_tmp_msg_0_1.hdop = 0.48630784121290094;
    tmp_tmp_msg_0_1.vdop = 0.44181835309582096;
    tmp_tmp_msg_0_1.hacc = 0.3225790022278098;
    tmp_tmp_msg_0_1.vacc = 0.4268362647972439;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.6601466953443109);
    msg.setSource(19745U);
    msg.setSourceEntity(7U);
    msg.setDestination(3082U);
    msg.setDestinationEntity(251U);
    msg.op = 221U;
    msg.name.assign("MLPBFWWTTVDPFISNRQEAIOECZGOXZQOBWAVLNBCNHBPINKSHOQNYCCRRWPORGJGZEBHJJLUNXVDUAARIQHHCFGMDCBKHJQFHEJVMIGEYRDFWKXSMAAUPCFBXATVGCFNCYNKFZFSDXJLKVWXBIZVRCUGKDTXXKORZZQDQGUYMUEMWMSKEZWPFTTKVUQZEWOPSUQLSDXKO");

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
    msg.setTimeStamp(0.03255258041680542);
    msg.setSource(26844U);
    msg.setSourceEntity(59U);
    msg.setDestination(65016U);
    msg.setDestinationEntity(202U);
    msg.op = 165U;
    msg.name.assign("HIEAQVPEMXDLXGPVWEMAWLTQRQWRAFUUHJCKEWZDDRGGAKZNWGNYRMMMCSPSXHMIKYGPQGZIKBNTHILCROHCPJOCVHUFHBIWWKZLKJREPVBSQZZTVBDWVKDJVPLFDHUACVOOGYQANNOQSA");

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
    msg.setTimeStamp(0.08854973557237111);
    msg.setSource(63738U);
    msg.setSourceEntity(189U);
    msg.setDestination(25120U);
    msg.setDestinationEntity(203U);
    msg.op = 28U;
    msg.name.assign("UEYCRZCVKWTMOHPJIPRFNKDPLWCJBJPIVGXLAESUFGTQYZONEMPDEAGXZDEXGVPURHQPOMRFHQLNQETXOUVSQVHOMJFMBHRNIMHGZJEFHMFKYBIDMCLBLDTHROKKNNBBLNJCLOTAJYLQK");

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
    msg.setTimeStamp(0.7039498142523297);
    msg.setSource(3301U);
    msg.setSourceEntity(47U);
    msg.setDestination(51825U);
    msg.setDestinationEntity(109U);
    msg.type = 236U;
    msg.htime = 0.7128869324683376;
    msg.context.assign("YOUXQAZZLXKHSPBLFCWPGLBDJWXQVXAOUURNIRPQLBKHOMFECCFMRKRTZWGRAEUKJHZZKTSNBZOVTRPGTEVCDNIQODUAPGDATNLYWKSMTXDYQGNEOSGPXHPIXFCQGYCJPREVTUEBEHNBBFHGYQVDCNDITAFZJWIVDHS");
    msg.text.assign("LWPCLZWODDUKFXXUVSHERTBNBSMPYFUFHRVWGAXFBESRRGODMLCRBCNMQLXJTBGYEVN");

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
    msg.setTimeStamp(0.598398283468644);
    msg.setSource(45279U);
    msg.setSourceEntity(234U);
    msg.setDestination(3688U);
    msg.setDestinationEntity(32U);
    msg.type = 28U;
    msg.htime = 0.9054503935362027;
    msg.context.assign("UUFOYERMFJYITBTSFYCBHEUAQENRWCCEPWKRBDSQMVPRJMPTCNRITKKJ");
    msg.text.assign("RZYYJGPUFUYGXUOGEXUSTNITYBTUPJAXHGHNKPKMNEMBXWIWBWQHESWYDDDLPIDLCGVJUMLQFWRPMZBHQATNACTWEGOSGEAXYZFAJVUQOTKCVGVONRZFNCSDMQXBNJOKCMCCNZFXSQQOIWPQUWITPHRLFKAPCBJCFZHPHVVDVRXIBLLKENCOWHTGIIFZYNUSQOSDZ");

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
    msg.setTimeStamp(0.18336482172319302);
    msg.setSource(1523U);
    msg.setSourceEntity(57U);
    msg.setDestination(42034U);
    msg.setDestinationEntity(230U);
    msg.type = 96U;
    msg.htime = 0.337440784241996;
    msg.context.assign("TUZDMINFFYJXJMJDVHNGPKQGVUELPNHZOYTTBGAGEYWPQWAVUCPZMDHNUJDEXNJELYFSTBSARGBURBZLADOXAFPXGSSUQTBYRMCNCRGPHJMIMUZZXYDEPNVOVNYFZWBG");
    msg.text.assign("FUCECODILJTYECWCRQQLWWWCTDUMHFSTJISFWNCIGFJPCYANJVFDMZZZAYHHKOHEKLSDUJEIBSSXJEUOFYNAASXPXARIDVXVPLNXNELZVRFMZDPSVOURLXU");

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
    msg.setTimeStamp(0.5530053676152994);
    msg.setSource(12075U);
    msg.setSourceEntity(5U);
    msg.setDestination(55559U);
    msg.setDestinationEntity(81U);
    msg.command = 162U;
    msg.htime = 0.39075000308833796;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 199U;
    tmp_msg_0.htime = 0.5654347559687416;
    tmp_msg_0.context.assign("XDWPTVNTVZDEKSOTDJKQBFOKDRJXYSWFZQZNVCKQPWEHNPYUQDXBMUZPHAQWPOAGFHGUMIENIEXCRKAJCJIVBHYAQNMYIQBHBFJARGLTWLWXHTMAFBQPUBACEVAVIRHXUUCIEGTVRFNIDSDGBVMUZIOGWPNLOKXWGTYXDMGF");
    tmp_msg_0.text.assign("PNTHIMBFITWGCMLJARXUHADXLODSTGGTXSATELFVUFMPMYMDZVCWLTJCYOLPECPHUXUODCQEKLZCYYRMYWZUORXQEFUVCSJJNFEPRNRPZBRBJSJBNRJZJOOLDANEGKLGTFOXFYYHVBUYWOMZBTEFEILHQNJVMAZWIXVVRPZOBEWTGNBRHPKJBSDVIKNSWQKHQFNQSCVXFSKTAQIGAHAIWODKXNESHZQWDBIHKKPYDMPYUAGUQQWXDGGLMAKCU");
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
    msg.setTimeStamp(0.6036018423158168);
    msg.setSource(11087U);
    msg.setSourceEntity(202U);
    msg.setDestination(56893U);
    msg.setDestinationEntity(145U);
    msg.command = 32U;
    msg.htime = 0.14347336166722424;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 8U;
    tmp_msg_0.htime = 0.4691465045489279;
    tmp_msg_0.context.assign("MITSLRQBKCLZBERHYSXNFPOYWBNHLWZFOTNAUOEVQFVQDVKURAFTXUDWPTQBIHHXMTLFUWXUTJQKZSRWMYXJRKUBCAMYMLPDVMGVLIHQOEGSCEEWBKDEVUTYJQRKMGSYDHRAFSOYZVJIEVHMXQZOVFHCTDYSYFRZIALLJTJASNCDSQALKUJUKDNYZXINWEGUDBJGGRINDTHFXVOWGQPPAHBGIPPKLABJCCKPSMZMN");
    tmp_msg_0.text.assign("EKMOWGVZPMTNVDUERRDYJDBMQEWHTLXYS");
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
    msg.setTimeStamp(0.9242586561163209);
    msg.setSource(33796U);
    msg.setSourceEntity(95U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(3U);
    msg.command = 135U;
    msg.htime = 0.6825757719639143;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 73U;
    tmp_msg_0.htime = 0.5013358751798016;
    tmp_msg_0.context.assign("JNUUBSZNPSLTEPVYTDCUZNEIBRYFQTOTHIPCGFCRBZMWXQQUBXSIUIDKYIXDXYRWBWPLWUGMEGKDHAJTWUKAKEFYFCACZFVOSLXDTBAQHMXIVMNIZHFZASNVFDEAZMZPMVDMYLOZQUNMLCPYRNJXTEHJLXJTYVGFLCJPHPJOVGFIRHWULCRJWQAOPNRQOSUBQPYVSIGLNWHDIBMDMBXZOGKAOAAKCSD");
    tmp_msg_0.text.assign("AEUGOMNXNIXPWURQDVOTEUEPNKEHFWMFTAYZRSRKDMVRSPICEZLTAMIVEMVCPMPTKAWBDFCTXSQICAXRGXQHGGNQBWXYHOMEAUHAJHCRHNIOQULMWGJFOLGXSDSEZLWBOLRQTUZLQIOCKBGDHSJLYFBNYAJICTQFDYVFBJJNDSCFZETCWSLIMKXQYBYPODAXZTIZUBCAKINLREYVFZXVKWVVWBPBNYHJHODYPLPRSWZJUUHGKQJJDTMOVZK");
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
    msg.setTimeStamp(0.6124095842130893);
    msg.setSource(44708U);
    msg.setSourceEntity(85U);
    msg.setDestination(34115U);
    msg.setDestinationEntity(157U);
    msg.op = 55U;
    msg.file.assign("PCEYFVAIKUGRJTCYKDCXMGAPRULRLIQOPDBBZHBXYCLZKESKJTLZLOQIQZJUXHYTOZHLEJSFOEIEAGWWWVKCCCKDPSDVQEQHUNTAWLOYOJ");

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
    msg.setTimeStamp(0.37576317289668215);
    msg.setSource(54535U);
    msg.setSourceEntity(219U);
    msg.setDestination(39051U);
    msg.setDestinationEntity(102U);
    msg.op = 95U;
    msg.file.assign("QCIHTWPJPSBVQEKWXAAWNYQRVRKUAAUQSCISRWYYXCXUWEFHRFMBPADDZFVQMBSARFEJMJGXETLMAEWMIDMBDLUIILYJHDPHNQRLZBFYLLOQNVWTSNKSIZVCVJGWKEXEONVTOOLGSBFVTFQTPZAKOUCGOSTCGTCRLPUUBQDNUZKGNZJUXOJGBHHMNNXPXZHIPEOCGBJALUYIXFZVKHCIWADRGKFN");

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
    msg.setTimeStamp(0.030137675407032383);
    msg.setSource(3880U);
    msg.setSourceEntity(178U);
    msg.setDestination(13751U);
    msg.setDestinationEntity(70U);
    msg.op = 25U;
    msg.file.assign("JKTPZYEXFALUVSIJXLFJMZRBRVMDDTRRBDUZPYDHKYFUALMOIFTKRRZCFMWGGWSPAPZNBACPTIIFWHUCTQRWEOVATQNNQHBGVEKLPSHUJOYSLQVYEMGRKCJAZFBBISGXLNRJXEGPXFQJSZQWGNUINDIHYLDIB");

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
    msg.setTimeStamp(0.6471783372535997);
    msg.setSource(38863U);
    msg.setSourceEntity(124U);
    msg.setDestination(56346U);
    msg.setDestinationEntity(157U);
    msg.op = 137U;
    msg.clock = 0.14706495856289836;
    msg.tz = 51;

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
    msg.setTimeStamp(0.9403949724370909);
    msg.setSource(16562U);
    msg.setSourceEntity(81U);
    msg.setDestination(23697U);
    msg.setDestinationEntity(121U);
    msg.op = 140U;
    msg.clock = 0.11651261581312067;
    msg.tz = 60;

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
    msg.setTimeStamp(0.06085579603981217);
    msg.setSource(34680U);
    msg.setSourceEntity(162U);
    msg.setDestination(49686U);
    msg.setDestinationEntity(156U);
    msg.op = 248U;
    msg.clock = 0.7444115618247817;
    msg.tz = 1;

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
    msg.setTimeStamp(0.8255710042826675);
    msg.setSource(34652U);
    msg.setSourceEntity(2U);
    msg.setDestination(45116U);
    msg.setDestinationEntity(117U);
    msg.conductivity = 0.4710673255535003;
    msg.temperature = 0.47080988754340325;
    msg.depth = 0.6882749085342614;

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
    msg.setTimeStamp(0.13576786794559004);
    msg.setSource(43872U);
    msg.setSourceEntity(14U);
    msg.setDestination(49131U);
    msg.setDestinationEntity(114U);
    msg.conductivity = 0.6896935018637983;
    msg.temperature = 0.3295299919764887;
    msg.depth = 0.23304221610269038;

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
    msg.setTimeStamp(0.22729981488677198);
    msg.setSource(10506U);
    msg.setSourceEntity(114U);
    msg.setDestination(35270U);
    msg.setDestinationEntity(209U);
    msg.conductivity = 0.6140855208478595;
    msg.temperature = 0.2389189651874668;
    msg.depth = 0.544161878001676;

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
    msg.setTimeStamp(0.30488125343696626);
    msg.setSource(392U);
    msg.setSourceEntity(216U);
    msg.setDestination(50975U);
    msg.setDestinationEntity(40U);
    msg.altitude = 0.7217140539370144;
    msg.roll = 23437U;
    msg.pitch = 30774U;
    msg.yaw = 13077U;
    msg.speed = 9560;

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
    msg.setTimeStamp(0.45948325947879964);
    msg.setSource(62887U);
    msg.setSourceEntity(193U);
    msg.setDestination(8945U);
    msg.setDestinationEntity(225U);
    msg.altitude = 0.4562838096620222;
    msg.roll = 30945U;
    msg.pitch = 58141U;
    msg.yaw = 5860U;
    msg.speed = -9406;

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
    msg.setTimeStamp(0.14001898903340226);
    msg.setSource(52123U);
    msg.setSourceEntity(195U);
    msg.setDestination(23602U);
    msg.setDestinationEntity(110U);
    msg.altitude = 0.2204407029900214;
    msg.roll = 43040U;
    msg.pitch = 28940U;
    msg.yaw = 13777U;
    msg.speed = 32291;

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
    msg.setTimeStamp(0.8551645472463234);
    msg.setSource(53012U);
    msg.setSourceEntity(47U);
    msg.setDestination(42035U);
    msg.setDestinationEntity(45U);
    msg.altitude = 0.32932067283412414;
    msg.width = 0.5908121205102959;
    msg.length = 0.8986716897079078;
    msg.bearing = 0.5604244401971816;
    msg.pxl = 28767;
    msg.encoding = 97U;
    const char tmp_msg_0[] = {-119, -92, 109, 88, -118, -71, -47, -56, 77, -38, -33, 14, 27, 108, 120, -40, 16, 51, 125, -117, -40, 59, -50, -27, 13, 70, 55, -100, -40, -41, -128, -62, 22, 30, -30, 88, -37};
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
    msg.setTimeStamp(0.6711462421936683);
    msg.setSource(35467U);
    msg.setSourceEntity(92U);
    msg.setDestination(40565U);
    msg.setDestinationEntity(204U);
    msg.altitude = 0.24766576632428006;
    msg.width = 0.6017213655076095;
    msg.length = 0.6403933562551151;
    msg.bearing = 0.1415005055954741;
    msg.pxl = 21413;
    msg.encoding = 114U;
    const char tmp_msg_0[] = {-71, 27, 99, 3, 93, -68, -85, -97, -52, -96, 75, -59, 72, 119, 44, 32, 28, 12, -121, -86, -28, -111, 100, 62, -120, 76, -78, -35, -108, -51, 89, -104, -120, 92, -100, 125, 6, 63, -114, -11, 66, 12, 16, 50, 71, 120, 59, 98, -87, 74, 30, 117, 47, -28, -51, -68, -28, 59, -116, 80, -42, -16, -9, 114, 39, -41, -80, -47, 44, 102, -104, 103, 19, -33, -29, -65, -6, -29, -35, -37, -101, -88, 95, 115, 110, -69, 79, 66, 106, -61, 120, -69, 47, -108, 105, -116, 110, -19, 82, 17, 10, 45, -12, 119, 0, -6, 115, 22, -85, -14, 74, -24, 58, 5, -58, 84, 1, -33, 76, 20, -124, -55, -67, 119, 35, 112, -56, 113, 4, 11, -64, -28, 74, 100, 99, -119, 46, 123, 77, -58, -39, -33, 56, 107, 48, 65, 12, -114, 25, -107, -71, -30};
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
    msg.setTimeStamp(0.060258332404004245);
    msg.setSource(37346U);
    msg.setSourceEntity(203U);
    msg.setDestination(48254U);
    msg.setDestinationEntity(163U);
    msg.altitude = 0.41671576808717203;
    msg.width = 0.20558458188395923;
    msg.length = 0.8210909838429015;
    msg.bearing = 0.9627379268420535;
    msg.pxl = -10457;
    msg.encoding = 123U;
    const char tmp_msg_0[] = {42, -14, -29, 43, 28, -28, 31, -64, 95, 102, 41, 0, 69, -69, 62, 83, 40, -36, 50, -28, -94, 48, -105, 8, -6, -114, 58, 57, -52, 104, 64, 24, -123, 20, -99, -127, 68, 81, 97, -93, 16, 103, -112, 118, -33, 2, -108, -27, 0, 32, -53, 3, 65, -49, -41, 5, 35, -112, -7, -42, 53, -67, -53, 85, -31, -44, -40, 111, 7, 3, -5, 7, 98, -86, 3, -95, 126, 54, -34, 14, 120, -116, 80, 104, -119, 86, -124, -105, -20, -21, 19, 2, 48, 101, 70, 75, -116, -1, 103, 65, -34, -116, 26, -66, 91, -34, 29, -112, 26, -55, 107, 99, 105, -21, 55, -21, -12, -9, -125, -101, -39, -13, -46, -4, 76, -18, -53, 83, 24, -97, -128, 5, 34, 95, -11, 96, 102, -87, 96, 35, -93, -83, 114, 88, 124, 96, -59, 84, -106, 111, -95, 41, 43, 96, 75, 4, 7, 59, 112, 43, 12, 70, -111, 42, 46, 59, -126, 2, -93, 96, -41, 19, -39, -97, 59, -125, 113, 114, -18, 32, 1, 114, -58, -33, -44, -125, -9, 121, 88, -87, -59, 4, -92, 64, 55, -8, 15, 121, -125};
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
    msg.setTimeStamp(0.6116948486568411);
    msg.setSource(14270U);
    msg.setSourceEntity(13U);
    msg.setDestination(4172U);
    msg.setDestinationEntity(93U);
    msg.text.assign("DRQAYJZCCXSLKMBPFHRBNMUYAJHEOPCOYDCNHNYOUKPLDAYAKTMHRPFSARPXGZZSFXRYZSFUFFGEU");
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
    msg.setTimeStamp(0.7853234211944566);
    msg.setSource(36972U);
    msg.setSourceEntity(124U);
    msg.setDestination(46876U);
    msg.setDestinationEntity(190U);
    msg.text.assign("HLXGFZDTMYBMMZGVXNISGJSWGEHAEDDUSXIKXCNZFKKAHWCKOAUTQCRMFEDVATHLHUOYWCJEKCKECRFVBRFYPTUJSPUMLTIHNIWEYWATAGQURCFHIJOBWRSAUXNXBLVFOFKNOXPWAVBYPUORVLBQZBPZMPTZSYTYFHCEDIHCLLRNQQNODMZRZPRMCPIWEMEJ");
    msg.type = 83U;

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
    msg.setTimeStamp(0.05375377038687246);
    msg.setSource(15585U);
    msg.setSourceEntity(139U);
    msg.setDestination(38292U);
    msg.setDestinationEntity(219U);
    msg.text.assign("EMRCMWWRBLCIQQBYYVULLSHZYGMUFKUCDAGCSKFKXRRXGZDDVEOIVTBKHHJWXYEVQEQWATGWLKOVLOSJWOOXSRHMUYRVFQZMFTPOAEUVNCJDJVCIMZSTCHHZICZXPTDVXAYASJEWDQWGILRHPSPNSXAZRYRBBIAJFBOMDOPKYYENHQHGXOYUZEPNAILFZNEXBSTTKVAGJGKTPQBUKCUEBHSNZGDIADFQULNFJKDRNJFICTILJN");
    msg.type = 3U;

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
    msg.setTimeStamp(0.23293518050812534);
    msg.setSource(15784U);
    msg.setSourceEntity(124U);
    msg.setDestination(10465U);
    msg.setDestinationEntity(104U);
    msg.parameter = 105U;
    msg.numsamples = 157U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 7578U;
    tmp_msg_0.avg = 0.34148430282774045;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.37210152980031175;
    msg.lon = 0.9319359743884575;

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
    msg.setTimeStamp(0.471639875501221);
    msg.setSource(16879U);
    msg.setSourceEntity(224U);
    msg.setDestination(13008U);
    msg.setDestinationEntity(77U);
    msg.parameter = 232U;
    msg.numsamples = 233U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 23647U;
    tmp_msg_0.avg = 0.0658693150931805;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9853655540508269;
    msg.lon = 0.7222275033926825;

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
    msg.setTimeStamp(0.5592240661966511);
    msg.setSource(16891U);
    msg.setSourceEntity(129U);
    msg.setDestination(13057U);
    msg.setDestinationEntity(228U);
    msg.parameter = 195U;
    msg.numsamples = 217U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 38347U;
    tmp_msg_0.avg = 0.28354644265022444;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5578208601409093;
    msg.lon = 0.40429629583785964;

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
    msg.setTimeStamp(0.34966395533800276);
    msg.setSource(17355U);
    msg.setSourceEntity(55U);
    msg.setDestination(20249U);
    msg.setDestinationEntity(4U);
    msg.depth = 42518U;
    msg.avg = 0.03137223106883613;

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
    msg.setTimeStamp(0.8098239036713072);
    msg.setSource(26543U);
    msg.setSourceEntity(19U);
    msg.setDestination(9582U);
    msg.setDestinationEntity(183U);
    msg.depth = 4436U;
    msg.avg = 0.013438334918105421;

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
    msg.setTimeStamp(0.3533948165013002);
    msg.setSource(43794U);
    msg.setSourceEntity(53U);
    msg.setDestination(12913U);
    msg.setDestinationEntity(156U);
    msg.depth = 21449U;
    msg.avg = 0.3536759305568501;

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
    msg.setTimeStamp(0.9837864638240963);
    msg.setSource(60236U);
    msg.setSourceEntity(58U);
    msg.setDestination(10491U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.9990513625681653);
    msg.setSource(28333U);
    msg.setSourceEntity(73U);
    msg.setDestination(57650U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.42255429820211077);
    msg.setSource(26533U);
    msg.setSourceEntity(111U);
    msg.setDestination(15239U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.10718988501220539);
    msg.setSource(39770U);
    msg.setSourceEntity(162U);
    msg.setDestination(9484U);
    msg.setDestinationEntity(107U);
    msg.sys_name.assign("NECKDZGVLZYZJHEGOOKTBTMXRFDMWDRNPXWWHBLLKSEEMMAHZAUJOMKXJBFTCGXQLYZWZBNFAHIYPVWYPSAXRRAFONNSTRDXQHNAXXDOWLIYMLIRGPOYNXIYPUUCPOLVVQTQAJCUFTCLGERQQKCEJOGYCQSPUSVSQOZBEGHUMNFKEHJPIHAILVGGISFSYSVYRFWWQKAZNDUDERCJKMPVFEKPBUAMMDVSTLDUXNJTVHJIBQDWCTIFC");
    msg.sys_type = 226U;
    msg.owner = 18569U;
    msg.lat = 0.06357548418680004;
    msg.lon = 0.9615175429793197;
    msg.height = 0.25858109663185946;
    msg.services.assign("DQBJWCYOIPEFEZDAFYSCFQNLIFRKDSVZAHFTMMBFQQXLZZCOWAXRUTHCUHHPPC");

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
    msg.setTimeStamp(0.6320621777119005);
    msg.setSource(44448U);
    msg.setSourceEntity(150U);
    msg.setDestination(42927U);
    msg.setDestinationEntity(182U);
    msg.sys_name.assign("RXMNYDULNDWXUFTQCVTYFAKAPSPCHUHPDDQODZGACSVEOKYCWXTTTEHFQSHRMRO");
    msg.sys_type = 69U;
    msg.owner = 20407U;
    msg.lat = 0.1204391157418816;
    msg.lon = 0.9571945947693756;
    msg.height = 0.5364625928629065;
    msg.services.assign("TYHUWMAXKLGOAWCJURLGDFNTBLUGTIEBDCNCQH");

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
    msg.setTimeStamp(0.5694993644398508);
    msg.setSource(43810U);
    msg.setSourceEntity(4U);
    msg.setDestination(36097U);
    msg.setDestinationEntity(107U);
    msg.sys_name.assign("LVAXBEZKKAZXGOZVPIMWUHRXLIOAHYUJLYOICZIYJGCNBHALRWSDOMVFZURVOFOPXFZHJADQCFXQFYJRCTEGOJKXZNZQMMNSFZTSSWBP");
    msg.sys_type = 53U;
    msg.owner = 49377U;
    msg.lat = 0.3400859025372531;
    msg.lon = 0.8565842008013531;
    msg.height = 0.5487448975943692;
    msg.services.assign("OCOMCVSQZZIXRUICZLDXZGVFPQWCXKMKSJZMENLNBCDYVQAUQGJWEMWXKGKPYEVRWNIAIEQMMTKRUHFMYJQGTRLPHIFDIGWTJCXKUYCOHDUJGMHQWVOWOWECSBBEAAJJ");

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
    msg.setTimeStamp(0.6340146510032766);
    msg.setSource(13477U);
    msg.setSourceEntity(241U);
    msg.setDestination(43283U);
    msg.setDestinationEntity(22U);
    msg.service.assign("PSZERLOZMWGKQOVRSVJYNITSGXDGEPUZAJYQQTAYEOCAJMPHHFXEUYPWFTKNGACJOTWWOKFLSRXZRGFYVUESLJSINLMUWKXCQVULHMIXZDHVPDWFIQUELSCDYLPQYJJQNPHBETHXUDDKPFGKYNAMTBURBTHWOUPXDSBQAMFVNLYDBFCTI");
    msg.service_type = 19U;

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
    msg.setTimeStamp(0.4830716781668437);
    msg.setSource(31974U);
    msg.setSourceEntity(208U);
    msg.setDestination(30353U);
    msg.setDestinationEntity(53U);
    msg.service.assign("QNYNGLSWUKDLNRMQYMHDDISLFPTWGDGRVZOOWSKWCTMCTYIJWYDUVTZZJZAXHSQEXSMMICWUOMRLSZVZJHERAYOTGVQYIJOFMQEALTABSUVWQBJFMUKWDFRUTEKHHXNZGNHZUXIYRFAQXPXGSLNHYKDDP");
    msg.service_type = 85U;

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
    msg.setTimeStamp(0.6819402197574269);
    msg.setSource(63880U);
    msg.setSourceEntity(134U);
    msg.setDestination(52814U);
    msg.setDestinationEntity(232U);
    msg.service.assign("OFHOWMJTAOZNPWGSOVDWFWWFBFXVLHRSYQEWSDURPHACKZCOPJMLTPCZQTLCSIPLOMMSYKALMYAYQJGZAYQIXAVESGNHWYHERPSAFVNMBDQKEPDXDXHROQVQUWBMWJZZCHGUPCTTNELTYGNVFBLGPEVRJCFBRDYH");
    msg.service_type = 48U;

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
    msg.setTimeStamp(0.7150709561090028);
    msg.setSource(25268U);
    msg.setSourceEntity(218U);
    msg.setDestination(35823U);
    msg.setDestinationEntity(72U);
    msg.value = 0.07943836295718376;

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
    msg.setTimeStamp(0.977346339349701);
    msg.setSource(64525U);
    msg.setSourceEntity(184U);
    msg.setDestination(12193U);
    msg.setDestinationEntity(1U);
    msg.value = 0.10340504568387798;

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
    msg.setTimeStamp(0.13592681321471622);
    msg.setSource(14042U);
    msg.setSourceEntity(151U);
    msg.setDestination(28774U);
    msg.setDestinationEntity(142U);
    msg.value = 0.3633110248664383;

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
    msg.setTimeStamp(0.20267268175978825);
    msg.setSource(40742U);
    msg.setSourceEntity(72U);
    msg.setDestination(15569U);
    msg.setDestinationEntity(57U);
    msg.value = 0.45633851704834516;

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
    msg.setTimeStamp(0.216053604164419);
    msg.setSource(15350U);
    msg.setSourceEntity(241U);
    msg.setDestination(45686U);
    msg.setDestinationEntity(184U);
    msg.value = 0.7050670638463631;

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
    msg.setTimeStamp(0.03518363097140431);
    msg.setSource(46659U);
    msg.setSourceEntity(215U);
    msg.setDestination(36535U);
    msg.setDestinationEntity(123U);
    msg.value = 0.9387620821000332;

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
    msg.setTimeStamp(0.6620995643742411);
    msg.setSource(14338U);
    msg.setSourceEntity(170U);
    msg.setDestination(14110U);
    msg.setDestinationEntity(171U);
    msg.value = 0.4442405715376818;

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
    msg.setTimeStamp(0.16650686332009623);
    msg.setSource(15861U);
    msg.setSourceEntity(97U);
    msg.setDestination(16915U);
    msg.setDestinationEntity(56U);
    msg.value = 0.9639025958414247;

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
    msg.setTimeStamp(0.9864079307949896);
    msg.setSource(53971U);
    msg.setSourceEntity(164U);
    msg.setDestination(23738U);
    msg.setDestinationEntity(3U);
    msg.value = 0.7773766529115976;

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
    msg.setTimeStamp(0.5692204551726454);
    msg.setSource(40526U);
    msg.setSourceEntity(12U);
    msg.setDestination(40004U);
    msg.setDestinationEntity(75U);
    msg.number.assign("YIOQZWKESEGKPBMALFGJWIUVLBPKTTZXXZAGUJDUQPYCLUIZBTBVOJJNQNNXMEVLNMQDFRQOVIHYZUJCJOXNAJRVVSFIADPGMDMLWRZWQTFDFHPRJYOKXYFEDYNVROWTWDBWTSEAHZZWKPKGBLSYCUXJBL");
    msg.timeout = 63516U;
    msg.contents.assign("GHLZBQIMYCTJZKUPDTLBDRPBVFPFGQWDPTGTREWFXLJFJOKMYWTQBAIENAXRKKKRAEIJRCSFVOOQOULHSDNCYYNWVLSAOXLZXEKIRRIAYPDFDOMMGUDQCSCINTEQYVCUUZSVPPGHHYTBSHIWECZFEBNNSUSLVYHFRBZNVEDECRZVOATKXGBFPFITXMGXBZAMNALTVMVQUSZJKGXUEJUQKHPW");

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
    msg.setTimeStamp(0.5369294806712025);
    msg.setSource(37066U);
    msg.setSourceEntity(81U);
    msg.setDestination(30094U);
    msg.setDestinationEntity(205U);
    msg.number.assign("EEEWKUVYROTREWTJHSFQZRXTKVWXMTPUKTEPZGOSNOCWJNBUGOHGQIFOPLDKAAPAFBKRWXMVAHZUVDMBSMIFMGDUHMTFNHDFCLCJYIVDAPUQSNXWWYONZALRFCBYOZLTUETJPRLFIMCLNPDCEHCDXVYLEIWSAHRSVKFOBJPVAIUMKLGDOOXASLXBFGMYLAYKIWGWIIKQQQXDXUENQQKZNRMJSJGTHQZCVBZUZBVY");
    msg.timeout = 14654U;
    msg.contents.assign("NJAAIBAMCDEHG");

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
    msg.setTimeStamp(0.20937155247630945);
    msg.setSource(5333U);
    msg.setSourceEntity(244U);
    msg.setDestination(8203U);
    msg.setDestinationEntity(31U);
    msg.number.assign("CJOGYIIWNDMEQSUQIXYKVDNRVLZWCQOSXQVRHOKIMUFOYEXBNEFFVYRQCJLRRNMFNWOIJAQJLCDZSR");
    msg.timeout = 46532U;
    msg.contents.assign("YNAUSNFFTJOOXLKUCEJXBMAVEMLTTDKBERBWYZALLQNBPSOULONZIPJPSSHHWXQHVBIGHMYAXJDDCYSYYDQYICJGMKOJFRTIQEGZICYWZ");

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
    msg.setTimeStamp(0.9841288814864323);
    msg.setSource(150U);
    msg.setSourceEntity(64U);
    msg.setDestination(51309U);
    msg.setDestinationEntity(210U);
    msg.seq = 1803616540U;
    msg.destination.assign("UUOACMJHJJZUAPTAYFMQTLLQQQNEUWNZYTWWXDOPQRPELNVJOJQCPKUEKACCCYFEIPCBXCKJHDNSIFZSWUTFPZBNGYBKKJTZJUVFQGOHBLVWSGJGXRHIYSMDAXVCNVFEFQWHMXKLMQPTIKFIYBHOLDKLLHKBPG");
    msg.timeout = 12419U;
    const char tmp_msg_0[] = {-117, -44, 89, 69, 4, 83, 4, -67, -54, 49, -39, -105, -108, 58, 68, 40, -121, -19, 3, -122, -33, -124, -102, 43, 61, 58, 25, -56, -46, 37, -54, 106, -41, 15, -24, 29, -16, -123, 89, -80, 63, 5, 0, 77, 42, -52, -12, 20, 109, -87, -12, -128, 123, -40, 96, 95, -113, -118, 114, -125, -2, -127, 1, 116, -16, 89, -44, 126, -76, 96, 12, -91, 75, -31, -85, 35, 95, -74, -128, -11, 91, -36, 120, 113, 16, 10, -10, -23, 75, 100, 63, 45, 78, -113, 30, 87, -105, 101, 19, -42, -94, -66, -23, 83, -48, -95, 103, 99, -99, -120, 39, 15, 85, 83, -25, 121, -25, -1, -19, 12, 75, -96, 36, -17, -27, 66, -67, -75, -75, 76, 97, -68, -61, 103, 6, -8, 13, 113, 61, 103, -69, -5, -117, -116, -106, -2, 46, 81, 117, 43, 36, -127, 122, 47, 60, -77, -16, -103, 48, -15, -91, -27, -86, -113, -66, -79, -16, -122, -12, 62, -38, 33, -16, -122, 52, 100, -54, -48, -10, -1, 99, 66, -119, -125, -108, 7, -112, 123, -123, 123, 29, -119, 116, 72, -107, -70, 63, -57, 51, -86, 120, -106, 115, -111, -26, -124, 118};
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
    msg.setTimeStamp(0.3491411303535995);
    msg.setSource(53643U);
    msg.setSourceEntity(114U);
    msg.setDestination(10439U);
    msg.setDestinationEntity(99U);
    msg.seq = 2565082639U;
    msg.destination.assign("XCXEOJSPAMDMYDZQEDUPPETAFFWCQALSFZLOFTWCSYHBYJGNZQHEYAPHCQPDIBQJBOVOJFEGGHEVLIBCIAPVLGCUZWSXUVJCKOFSLKBJRRVNAIQNPVJHYRDUMXGFOCJBZMDSGRNHIAFJVNEDVZLYNKRVXUSJGQBBUNIODWYE");
    msg.timeout = 64483U;
    const char tmp_msg_0[] = {-29, -17, 7, -74, 7, -99, 50, 3, 42, -93, 108, -21, -115, 75, 103, 43, -32, 122, 94, -57, -59, 62, 39, 51, 68, 121, -128, 56, 121, -113, -28, -108, 102, 80, 45, 106, 28, 18, -103, -50, 2, 24, 88, -24, 6, 95, -122, -35, -123, 116, 84, 119, -59, 118, -57, 30, 22, 109, 39, -82, -115, 2, -61, 126, -17, -100, 60, -113, -80, -62, 2, 9, 106, 51, 53, 88, 47, 35, 58, -89, -6, 9, -51, -53, 60, -105};
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
    msg.setTimeStamp(0.3649746823460276);
    msg.setSource(25471U);
    msg.setSourceEntity(154U);
    msg.setDestination(50850U);
    msg.setDestinationEntity(177U);
    msg.seq = 1975146695U;
    msg.destination.assign("IWSUSXZDSKKYMLWNHIEPKNVDYYZXFUDSTPTDOOFLVVYEHANGAUDEMVSFJIOTVBOYCRMCAGGNQNKQRMYSAMZQUTKKXVVWMOYGIWCJPHLDSEJKWPKBBALRXDGOUUBUNKFXNFPRTWIBMTAPTFIEVVLEJUORBLCDSIJQHXKAJXPYCQTSPCJBXGBGHCOFGSXTHFJVNLLW");
    msg.timeout = 7104U;
    const char tmp_msg_0[] = {-8, 63, -75, 85, 84, 15, 79, 79, -62, -104, 13, 96, 95, 55, 125, 17, -92, 42, 32, -103, -16, -97, -23, -31, -83, 14, 35, -48, 63, -3, 50, -121, 49, 5, 124, 83, 23, 27, -99, -85, 12, 95, -90, -90, -14, -119, -66, 29, 56, -45, -26, 112, -19, -109, -70, -127, 0, -44, 55, -85, 73, -20, 48, -1, -66, 55, 57, 82, 51, 118, 107, 73, -108, -26, 25, 93, -18, 2, 96, -43, 103, -70, 81, -100, 44, -66, 5, -80, 86, -28, -70, -7, 71, -62, -19, 42, -58, -103, -67, -96, -50, -79, 29, 85, -47, -28, 88, -124, 95, 72, 111, -13, -124, 100, -5, 123, 43, 9, 72, -55, 80, -13, 67, 92, 97, -36, -35, 13, -105, -59, -128, -67, 14, 95, -117, 45, -56, 0, 3, 20, -99, -113, 66, -116, 89, -114, 84, 60, -44, -82, -25, -41, 7, 116, -60, -118, 10, 68, 123, -115, -51, -117, 103, -85, 22, 100, -72, -113, 49, -111, -42, 58, 78, -123, 43, -40, -118, 113, -18, -125, 115, -5, -73, -95, 97, 68, -47, -15, 118, 80, -10, -118, 75, -33, -80, -122, 35, 39, -29, -91, -126, -100, -37, 112, -22, -110, -56, -51, 123, 31, 20, 114, -32, 0, 85, 81, -53, 23, 109};
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
    msg.setTimeStamp(0.5950759634088149);
    msg.setSource(45970U);
    msg.setSourceEntity(5U);
    msg.setDestination(8467U);
    msg.setDestinationEntity(182U);
    msg.source.assign("JGDLHHOTDGGDQMSMTKOVQDWLJXOBBMZLLCYTCBRFKUZAUDFLFDVZQOBVWYFJCTKOVFXNRIPLZLKTXYTKSQZJREBURLVOUULZXIDGMAPPWENEXYEXQCDEKGCZ");
    const char tmp_msg_0[] = {115, -15, 28, -125, 71, -50, -92, -73, -117, -108, -117, -46, -119, 40, 3, -107, -32, -49, -78, -19, -55, -11, -120, -5, -103, 96, 27, -61, 103, -82, 117, 57, 16, -97, 70, -124, 7, 117, 67, 83, -20, -95, -116, 120, 62, -112, 3, 124, 48, 35, 91, -49, -86, 35, 74, -65, -16, 49, -91, 27, 55, 79, -112, 29, -35, -78, -73, -74, 21, -77, -47, 43, -83, 9, -100, -69, 94, -18, -92, -35, -71, -121, -6, 104, 80, -61, -128, 63, 7, 15, -106};
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
    msg.setTimeStamp(0.3107841095228977);
    msg.setSource(9795U);
    msg.setSourceEntity(36U);
    msg.setDestination(64976U);
    msg.setDestinationEntity(85U);
    msg.source.assign("ERMFHQTTOJUMAVCASQGQBCRLYTWIYYUMZNRLTCHCEEYWNGBVGSPPV");
    const char tmp_msg_0[] = {34, -67, -53, -57, -95, 13, 105, 16, 124, -18, -82, 96, -63, -49, -95, 86, 66, -122, -36, -63, -88, 27, 32, 15, 16, -22, -8, -44, -15, -57, -125, -55, 22, -18, 11, 35, 63, 42, -33, -87, -117, 75, 48, -24, -43, 105, -106, -123, 59, 27, 74, -55, -18, -35, 15, 21, -7, 71, 67, -85, 71, -5, 119, -52, 97, 73, 110, -93};
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
    msg.setTimeStamp(0.9004133426717628);
    msg.setSource(56134U);
    msg.setSourceEntity(182U);
    msg.setDestination(37997U);
    msg.setDestinationEntity(103U);
    msg.source.assign("ULWJDACSTRXMLFTBRINTGTLBDSZSIPRZJEMKIWVCNWJXZJUTHKIV");
    const char tmp_msg_0[] = {-60, 25, -16, -98, -10, -58, 119, 3, -20, 15, 28, -33, -127, -112, -61, 112, 93, -72, 83, 51, 27, -16, -36, -15, -30, -12, 100, 56, 40, -33, -77, -105, 15, 94, -27, -96, -47, 32, -119, 79, 16, 119, 90, -33, -114, -44, 97, -63, 72, -93, 102, 28, 26, -24, -88, 0, 2, 18, -16, -113, -60, -75, 84, 73, 100, -36, -23, -81, -38, 120, -34, -11, 22, -29, -79, 72, 111, 0, 87, 42, 92, -124, 35, 47, -95, 16, -26, 57, -5, -54, 75, -94, 124, -51, 114, 81, 48, 70, -80, -9, -41, -80, 14, -91, 100, -125, -94, -41, -58, -84, -94, -17, -39, -49, -97, -34, 7, -6, 117, -118, -36, 81, -95, 118, 32, -2, -2, -18, -88, -19, -78, 83, 21, 83, 1, 75, 95, 40, 26, 61, 101, -66, -1, 50, 59, 89, -23, -125, 31, 110, 66, 111, -22, 92, -79, -63, -95, 26, -92, -14, -79, 82, -127, 57, 8, -35, -23, -58, 26, -28, 47, -47, -120, 52, -17, -88, -74, 72, 126, 38, -45, 92, 76, -124, 3, 93, 94, 29, 103, -37, -13, -48, 59, -72, 72, -86, -122, -44, 93, 123, -77, -42, 6, 3, 101, -83, -31, -83, -43, 121, 123, 108, 123, 26, -109, 25, 78, -120, 121, -124, 32, 1, 103, -70, 39, -49, 8, 117, 16, -65, -11, 38, -67, 107, 43, 36, 80, -7, 86, -62, 106, -73, 28, -13, 56, -96};
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
    msg.setTimeStamp(0.49152451057232116);
    msg.setSource(26496U);
    msg.setSourceEntity(143U);
    msg.setDestination(61663U);
    msg.setDestinationEntity(172U);
    msg.seq = 3746122028U;
    msg.state = 241U;
    msg.error.assign("VMJGTTYEXCJAZYXOXNYCCBUEYHXFOZQLHEMGCJDDUJULGCBJYZUQMSWXUVNTQMGGGCKEANUZYIRUCXPIQLBTBLAILIONFOGODBAACSWIXUADIERWQTWSQYNROWFHPKPPZMBSRHGDSQCFPDSHPPVXLQEEKYDIDSLRDSJSRMFKJHVXGOWBLBUAFWRKTMMJZOAPIZQFZLNTVJMQNEVWVVJRCEPVSRZNELZHVTYKF");

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
    msg.setTimeStamp(0.30139744337839547);
    msg.setSource(29055U);
    msg.setSourceEntity(180U);
    msg.setDestination(53015U);
    msg.setDestinationEntity(215U);
    msg.seq = 1003355135U;
    msg.state = 235U;
    msg.error.assign("EJSYOWWCXGVDJSYWCLZPARJJXMJHBNHGNNMEOLMGAGXLJFPTGNETTGPXBDXDDSQQYQRQFFVCITYKQZLTVGSBECRRWHWIMBJBANMPNPYWJCMKEGQZIQDOTSXRSA");

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
    msg.setTimeStamp(0.13711382896752);
    msg.setSource(14110U);
    msg.setSourceEntity(126U);
    msg.setDestination(55863U);
    msg.setDestinationEntity(215U);
    msg.seq = 2164329110U;
    msg.state = 84U;
    msg.error.assign("LKCJNOVYTXHDKQJZDNPAGUKFOAGIIACDLPBITTIPTLSSJUOJWMAZYEKHPRTJOVGXEEYSWGFFRHGXFJYUMGQMAHBEOCXKDZLBIHFVEMGTSNMHBAWOQMPNLNQXPLBQLLBKZURRRDJSVOUVXQRPRGYWSUAQGX");

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
    msg.setTimeStamp(0.09448421977545929);
    msg.setSource(38993U);
    msg.setSourceEntity(63U);
    msg.setDestination(3077U);
    msg.setDestinationEntity(42U);
    msg.origin.assign("TWLOEEDIFLPDNBXSQKUBUUYJLSMAVANXUNBFNIHBAKHOEWDIBXCTHEPRNSPZDLZWSCQCAXXAJZKMXXGTJQZJKMOVLIRDGOWKPSQUFBPJZRYWQAMCTNUTOFYTJZFWVAKTLYRWAEPITJVBPCGMOZIJNYWXJFCRARXHYBGOKYLCD");
    msg.text.assign("MNNEPWBNFVJMEACTIHVUEMABEGARCTLAYDLXCCIJOQYYZKWJFLSPYUBDRMSRLVQMHXMAJGVLMTYGPENNDOQSKBJMBKRSLYQXWRPCGUVXOHUKDHHZLDPHPZVFOTEWTPTSQCDTJAXXQUQAISIYPSBRAIKLXZYDPUEWFRSHECYFZJUGBEORBZBGXDTVSBADWKZKHGOJMTNDFINFQCWPWUKRIVGFZHEILKZUVQA");

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
    msg.setTimeStamp(0.6680038415610969);
    msg.setSource(38938U);
    msg.setSourceEntity(85U);
    msg.setDestination(46960U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("HCWEYZLTNWRQDFOJXMRRMMRHUGZEZOEFAAIDORRZFOVNSFYQJPDYRIT");
    msg.text.assign("WMJDGZGCDDTGEUXBQDIVYYCVGFBZYBFFAJLUZLWCERRCOXDXAZEHMYIWJEHWMXZQNYBSALMKDISCMRENPBSJHJKVLJXPXIHGEUKWHHTAMODVCBSYXUOQLANSQFMMJQVQFTYRSOOYHURVEXKHGUGADELWYNGSVFWBZXIIOZPTIPTOFRZDY");

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
    msg.setTimeStamp(0.13263195786503645);
    msg.setSource(7722U);
    msg.setSourceEntity(121U);
    msg.setDestination(2043U);
    msg.setDestinationEntity(19U);
    msg.origin.assign("CWFGLGWRXDCOJUSMPLHEZDGZLAGUDVIAONXWSFZFOPBXFEEKWPCTNUGHXBJLWJQOWCYAHMKHXJVQVEUUXHAQDTTPRIGRQNNZZDCTUKLVYKLUPWCODJBXNRBSGZCLMHQJDEGECREAQDIOSBKAYGVTRQFOKMKQHJRTMFPVBZNYREXZFAMUVKISIYCTNQFRVNUATQPWNOXYLPSPBIPHIMSAZHNOJOZDIMAFKBGSCJISLVE");
    msg.text.assign("BRJOOSLSZEU");

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
    msg.setTimeStamp(0.4819582160093705);
    msg.setSource(4997U);
    msg.setSourceEntity(35U);
    msg.setDestination(53244U);
    msg.setDestinationEntity(205U);
    msg.origin.assign("QWHBMHYXWSVKRAODDTPKGJLMCDIOYPASOGUBTDKHXCFXITADNQVNZNZVHGREPLHFJERUYWKISCDUYTZYOPLQWOGEWBUMCGFMHIPFJLZPPJOTKFVJQCYIYXXYLUSFUMGXLNTCOHXNUAKUWEFBEJQIIECPVQZEHSAMRAAMESTTRVTSBZKACWCWLYGKJQZMYGDKNQZIRRWQNILHHIXFNJMVOXRURDELVCMWVNUVKQN");
    msg.htime = 0.9430267964052936;
    msg.lat = 0.18420532071686646;
    msg.lon = 0.860734266515998;
    const char tmp_msg_0[] = {105, -37, 96, 60, -22, 37, 94, 15, -13, 94, 88, -92, -3, 8, -42, 95, -65, -12, 10, 3, 115, -64, -97, 11, -44, -37, -56, 100, 60, 73, 64, -119, 111, 104, 101, -26, -125, 18, -25, -59, -27, 19, -25, 124};
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
    msg.setTimeStamp(0.3568653069360028);
    msg.setSource(6146U);
    msg.setSourceEntity(32U);
    msg.setDestination(54175U);
    msg.setDestinationEntity(31U);
    msg.origin.assign("POBHZBRFJLMOEGOHWANDFNERCSBCXPSWOQANEDYJUJMIIXHKWVFWYSGMYTYFJLBKBHJAKWEKRWMH");
    msg.htime = 0.7887699436086214;
    msg.lat = 0.6316534868612779;
    msg.lon = 0.45535965422347224;
    const char tmp_msg_0[] = {57, -97, 6, 59, -52, -118, -76, -75, -29, 110, -79, 42, -120, -79, 72, -19, -121, -97, -125, 67, 87, -12, 19, 117, 52, 43, 9, 77, -106, 44, 61, -87};
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
    msg.setTimeStamp(0.4273618917210473);
    msg.setSource(55464U);
    msg.setSourceEntity(47U);
    msg.setDestination(5663U);
    msg.setDestinationEntity(123U);
    msg.origin.assign("MCUXBFBVOLK");
    msg.htime = 0.43226137266567144;
    msg.lat = 0.1764627781678666;
    msg.lon = 0.37808234882348535;
    const char tmp_msg_0[] = {91, -28, -101, -98, 58, 125, -88, -123, -78, 50, 108, -21, -27, -108, -112, -4, -126, 68, -68, -126, 3, -51, -119, -80, -39, -125, -27, 67, 71, 67, -47, -106, 36, -25, -68, -76, 97, -97, 70, -105, -90, -113, 13, -8, -1, -113, 93, 55, -20, -68, -24, 64, -37, -110, 14, -112, 50, -59, -63, -69, 124, -39, 52, 10, -124, 54, -44, -65, -102, -119, -124, 52, 56, -31, 25, 61, -2, -42, -43, -39, 85, 91, 83, -88, 24, -14, 124, 16, 23, 56, 90, -48, -77, -69, 19, 22, -122, -105, -90, -101, 117, 110, -69, 117, -102, 23, 112, -93, 9, -45, -117, 39, 118, 64, 65, 118, 97, -63, 65, -39, -116, 53, 48, -12, -100, -80, 33, 67, -126, -108, -16, -41, -92, -108, -72, 34, -73, 121, 115, -38, 11, -72, 20, 87, -49, -106, -12, -40, 4, 116, -71, -69, 27, 82, 80, -9, 92, -89, -78, -18, -32, -20, -33, -62, -61, -36, -74, -90, -83, 87, -71, 23, -66, 68, -67, 87, 87, 76, -124, -9, -72, -102, -21, 44, -42, 115, -115, 93, -44, -43, -7, 71, -65, -95, 85};
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
    msg.setTimeStamp(0.9198615341354869);
    msg.setSource(1718U);
    msg.setSourceEntity(109U);
    msg.setDestination(44025U);
    msg.setDestinationEntity(186U);
    msg.req_id = 17508U;
    msg.ttl = 11737U;
    msg.destination.assign("UKQEPONVSUCLVAENCKNAMZIOGSPUNUMCAWYXJTGBGBMOUGLILSHGBDYHORFQCKDZDIFIFJDZPWFRXEHJRACELPJQNKNWPPXLOYHMEXKSJWCVXLFX");
    const char tmp_msg_0[] = {93, 112, 115, 12, 49, -74, 74, 38, 47, -77, -55, -69, 36, -84, 1, 126, -93, 46, -19, 84, -13, -124, 62, 18, 14, 47, 67, 6, -19, 3, -116, -81, -127, -33, 29, -11, 32, 118, 94, -122, 6, 30, -4, -87, -14, -115, -90, 33, 39, -11, -3, -16, -91, -25, 57, -21, -16, -44, 50, -28, -87, 59, 1, -13, 79, -7, 68, 98, -61, 72, -113, -58, 91, -42, -72, -107, -63, 56, 101, -3, 26, -16, 119, 24, 72, 117, -61, 30, -86, 105, 11, 111, 43, 88, 87, -35, 73, 37, -12, 86, 97, -51, 50, 66, -23, 30, -33, 56, 116, 7, 106, -46, 108, -97, -114, -105, 105, 37, -45, -99, -92, -91, -122, 44, 19, -27, -56, 32, 39, -115, 36, 65, -17, -36, -24, -74, -61, 40, -56, 54, -70, -69, -46, 103, 53, 44, 111, 114, 41, 119, 99, 66, -69, 109, 122, -128, 17, 80, -13, 99, 49, 125, -95, 1, 82, 102, 84, -33, 57, -46, 113, -99, -17, -63, -6, 60, -113, -79, -76, -23, -93, 71, -7, -59, 73, 6, -113, 116, 43, -32, 66, -42, 89, -27, 73, -115, -124, -118, -128, -111, -7, 69, -89, 46, -96, -7, -15, -5, -97, -53, -68, 120, -100, -112, 89, -39, 28, 109, -11, 32, 118, 55, -2, -90, 73, -87, -115, -67, -73, 88, 24, -1, -63, 97, -50, -30, 102, 44, 37, -88, -117, 90, -57};
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
    msg.setTimeStamp(0.8443497346261751);
    msg.setSource(11983U);
    msg.setSourceEntity(237U);
    msg.setDestination(44664U);
    msg.setDestinationEntity(254U);
    msg.req_id = 21764U;
    msg.ttl = 11836U;
    msg.destination.assign("AIBVYMADMZGWZCOFXFLPDDGIWRTUWEFTEUAMGNJQAYUPLVOZSIJVXHVERWBLNOHAZYHXPXMWUTGQZAZAHTKRDPFQLBXUYGBLUSBKY");
    const char tmp_msg_0[] = {-18, -28, -109, 53, -7, 109, -115, -65, -51, 63, -67, -49, -124, -82, -101, -77, 102, 43, 41, -44, -102, -48, 92, -21, 21, -88, 33, -72, -30, 1, -31, 117, -118, 55, -67, -27, -85, -65, 104, 34, -125, -39, 95, 68, -91, 119, 111, -78, -125, 74, 24, 83, 100, -46, -12, -36, -101, 23, 79, 112, -85, -97, -111, 4, 32, 13, -3, 83, 90, 75, 16, 93, -64, 46, 60, -67, 103, -100, 114, 75, 32, -26, -22, -110, -118, -37, -83, -10, 67, -128, 25, -67, -30, 15, 32, 32, 29, 121, 68, -96, -113, -119, 49, 50, 78, 55, -5, 75, 27, -9, -11, 14, 76, 61, -28, 96, 66, 108, -76, -28, -66, -71, 53, 1, -29, -42, -9, 54, 102, -72, 89, -32, -117, 73, -31, -97, 7, -96, 91, -75, 97, 89, -104, 43, -56, 53, 22, 78, 27, -100, -126, -74, 25, 121, 12, -40, -29, -17, 46, 69, 9, 90, 73, -115, -125, 56, 65, 96, 88, -32, 51, 1, 28, 32, -60, -18, -54, 16, -70, 76, 36, -1, -33, -52, -121, -6, -32, 50, -58, 81, -103, -64, -112, -15, 92, -37, -20, 118, 94, -98, 17, -60, 84, 35, -38, -109, 17, -91, 27, 68, -67, 45, -42, 72, -14, -32, -116, 64, -51, 25, 81, 112, -31, 60, 98, -118, -78, 23, 16, 105, -94, 30, -22, -117, -112, -38, 0, -19, 42, 21, 58};
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
    msg.setTimeStamp(0.12188892624009462);
    msg.setSource(44419U);
    msg.setSourceEntity(9U);
    msg.setDestination(38793U);
    msg.setDestinationEntity(133U);
    msg.req_id = 8625U;
    msg.ttl = 13994U;
    msg.destination.assign("AQPUHJWUTVTBYGVXMPABSCGBFMZDZBTCQOHVAZFYKILAYTQSOQDGBPOSSNIREEMXZRAIFBMUOEXQFJDPDXOMKUCGUWIHCBPXUNJJCAWSKXBCYB");
    const char tmp_msg_0[] = {-41, -105, -60, 93, -21, -28, -46, -11, 112, -26, -115, -119, 3, -58, -47, -91, 18, 116, -99, 88, 83, 53, -125, 4, 107, 94, -118, -94, 43, 3, -67, -108, -121, 45, 70, 120, 85, 53, -61, 97, -124, -65, -123, 116, -88, 49, 13, -120, 98, -57, -50, 21, -43, -16, 11, 32, 27, 66, 112, 125, -97, 37, -32, -49, -10, 95, 41, 122, 77, -19, 114, -124, 76, 31, 57, 8, -80, 52, 113, 93, 123};
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
    msg.setTimeStamp(0.7486651546665486);
    msg.setSource(44142U);
    msg.setSourceEntity(183U);
    msg.setDestination(51807U);
    msg.setDestinationEntity(65U);
    msg.req_id = 63709U;
    msg.status = 194U;
    msg.text.assign("OADXVNEINXLGHIJ");

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
    msg.setTimeStamp(0.7703494333206538);
    msg.setSource(11808U);
    msg.setSourceEntity(55U);
    msg.setDestination(59531U);
    msg.setDestinationEntity(163U);
    msg.req_id = 60559U;
    msg.status = 80U;
    msg.text.assign("QNYSOJNLZLRGTAYBKUCOWWGUYEFPYNXBRUTSZAVDAMMNKJLRVSILXZMHARDTICUBKCFQUD");

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
    msg.setTimeStamp(0.5037934928991029);
    msg.setSource(5414U);
    msg.setSourceEntity(194U);
    msg.setDestination(13576U);
    msg.setDestinationEntity(194U);
    msg.req_id = 14771U;
    msg.status = 70U;
    msg.text.assign("PJOSUOQESTVYNSPXOSBGVQADLNJFLKRDSZQVWRKQLCUVAMEZOJUOXNYJPEMFVKNPWRPQXHWHVNIRGSERHPWYMWNKWDBUTRTJHOWRCIQIZZAJXNJYFYBGMVZKUTTLLBDDHRHPHELMKYLXHHPSOIVCXFUQCSWMNFKMCCXZIRLSUIT");

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
    msg.setTimeStamp(0.4731967552912605);
    msg.setSource(56112U);
    msg.setSourceEntity(174U);
    msg.setDestination(25562U);
    msg.setDestinationEntity(108U);
    msg.group_name.assign("IUOELICPRJKNDSJRKHDICLKYSKMWNODXNLAYRCPFLTYNAWZLWJNHQKTFBHQLZBYMIMYKXSNNCWXDBVXDDWCGTTJECBOQNSWPTEMVURADCVEEPLGFTAKRXPJOQFRWSIYOAZDBFBRHBJXGZIOEQZOWBUGVUGGDAEUVMSQOKXYSVGQZKEVEJCYUPIQJYNXPHVUJLRZEYFIIK");
    msg.links = 4008268141U;

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
    msg.setTimeStamp(0.3909562902258271);
    msg.setSource(41424U);
    msg.setSourceEntity(47U);
    msg.setDestination(5544U);
    msg.setDestinationEntity(16U);
    msg.group_name.assign("HCDAFSGAVMUMSBLRMKYJSZOLVESIWLYIOQMXIYLDPWNGNZHZUZGHJDDYGPWQAIETVBEPQNFJRBUOUGPICXGCINDLKEFPFDQALRYFXHCATERFVQTHOEXDOHCTJDEWZXHPQBCVNH");
    msg.links = 662515347U;

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
    msg.setTimeStamp(0.7290804610663687);
    msg.setSource(24314U);
    msg.setSourceEntity(245U);
    msg.setDestination(48572U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("UCHURFCAZUVFLNDBFDQXWJWDBUENZHEMGYVAOZLVQJDJJPDOCSMPJZXTKBSHWIEBBWDRVIMFRWEMYOIWFUPYMKKDPZXS");
    msg.links = 3189133670U;

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
    msg.setTimeStamp(0.6931303045589926);
    msg.setSource(48944U);
    msg.setSourceEntity(211U);
    msg.setDestination(4410U);
    msg.setDestinationEntity(33U);
    msg.groupname.assign("OVQVQCSNXQIPTAYQ");
    msg.action = 22U;
    msg.grouplist.assign("BDOTRMFIGRQLSRLFNBCTONMODLZKAE");

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
    msg.setTimeStamp(0.20024752412485491);
    msg.setSource(3935U);
    msg.setSourceEntity(12U);
    msg.setDestination(11172U);
    msg.setDestinationEntity(226U);
    msg.groupname.assign("ZMJGFOXDTMDZJNDPQBLHRTZCKVMONCQXBILGBIPQSAYKWLVUALHFHSWIZXEEOQPXMIOERUWLO");
    msg.action = 213U;
    msg.grouplist.assign("GFHTXKZGXREEFMGDWDMTHRSSSSCHCARZUMWKHNVPYBJIDXRDJTFKSVORCPLHMFPUGBEFCIDAYMCYQOXROUNEEFWBYVTYALHIHZQNWGVSDPJHXWIOCYZKNIYEBHLTIRSCZQDOGPVQCVRZQXIUYWVLPCAMWLTOUVSNNPJBGEVEPKKPOFDOJFGARBAKYPTLCSQTEWWGFKQA");

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
    msg.setTimeStamp(0.8173938758720921);
    msg.setSource(40878U);
    msg.setSourceEntity(80U);
    msg.setDestination(15199U);
    msg.setDestinationEntity(35U);
    msg.groupname.assign("ZLFOEIFLFTHHFFTXCUQWSQBDVCVZATWRPMNKBGTOYMAIKZGFKMTKQABLZAUGWJFRKIRMIQCUMMVLHDEASQBLBELXOYDXEQIAKPLSUHNACSCCCIEMAVVVOADOXGJKELSBIQWNJHITOMYTROQUDHVPYYQOCZJWZJXYOYZGEVPUECNHDHWUDTPFRBWGXTGEPJKRLFGIDQSZYRRYRCSNUTPUBKNBAVPHPSRUJKHXPNZOVWXJWLSDM");
    msg.action = 248U;
    msg.grouplist.assign("XQJPCFJQHRRXPSKCAYSVMMAIFHEUKWBMXUOLQMLCLHZCDSHKLUXTAHBOYSVYRNYDMCCSFHUHNDEWFTWZXSFVHMGZOASGJDQPVILGZEBVFWUJRTJDZKORGCBOY");

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
    msg.setTimeStamp(0.9368234502341573);
    msg.setSource(17485U);
    msg.setSourceEntity(188U);
    msg.setDestination(8731U);
    msg.setDestinationEntity(120U);
    msg.value = 0.08401763757836711;
    msg.sys_src = 22727U;

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
    msg.setTimeStamp(0.9823179504080369);
    msg.setSource(24402U);
    msg.setSourceEntity(90U);
    msg.setDestination(57371U);
    msg.setDestinationEntity(250U);
    msg.value = 0.14285177013925465;
    msg.sys_src = 54392U;

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
    msg.setTimeStamp(0.5193622640224966);
    msg.setSource(13U);
    msg.setSourceEntity(67U);
    msg.setDestination(9428U);
    msg.setDestinationEntity(132U);
    msg.value = 0.7279505834252067;
    msg.sys_src = 14173U;

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
    msg.setTimeStamp(0.2481350251548199);
    msg.setSource(45686U);
    msg.setSourceEntity(179U);
    msg.setDestination(39434U);
    msg.setDestinationEntity(27U);
    msg.value = 0.7634870653373221;
    msg.units = 161U;

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
    msg.setTimeStamp(0.6469671369771799);
    msg.setSource(46470U);
    msg.setSourceEntity(86U);
    msg.setDestination(39689U);
    msg.setDestinationEntity(153U);
    msg.value = 0.20408474930475962;
    msg.units = 86U;

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
    msg.setTimeStamp(0.564137673536169);
    msg.setSource(6734U);
    msg.setSourceEntity(193U);
    msg.setDestination(44774U);
    msg.setDestinationEntity(196U);
    msg.value = 0.031433544588435725;
    msg.units = 164U;

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
    msg.setTimeStamp(0.7672344334203072);
    msg.setSource(57723U);
    msg.setSourceEntity(231U);
    msg.setDestination(35750U);
    msg.setDestinationEntity(144U);
    msg.base_lat = 0.032611515057299534;
    msg.base_lon = 0.1166899819390097;
    msg.base_time = 0.830264858429057;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 19021U;
    tmp_msg_0.destination = 45508U;
    tmp_msg_0.timeout = 0.3223257856222137;
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.path_ref = 785129667U;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.9433734200600266;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.11538609071148764;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.04434580249523057;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 173U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.5424573585878019;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.7860936120478357;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.5417858258554981;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 154U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.2545013076519148;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 127U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.09016342709428382;
    tmp_tmp_tmp_msg_0_0_0.flags = 45U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 38566U;
    tmp_tmp_msg_0_0.custom.assign("VFNBNCYTGAPPSFQUHOIHSJDWPLOCKNCVSWUMEZEOOCJREHPEAQUHPHVYMQSOXXNQXUBKZNMNJLPJJXIXMWHBLCKBPKSBIQIKOYTDZACXTTHCZAZFWGGKYGFLWBRQRWUEGWWSNSUIAVDLI");
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
    msg.setTimeStamp(0.8253717581429777);
    msg.setSource(58264U);
    msg.setSourceEntity(38U);
    msg.setDestination(64348U);
    msg.setDestinationEntity(47U);
    msg.base_lat = 0.5185705182777327;
    msg.base_lon = 0.9018001388518854;
    msg.base_time = 0.5078345797018329;

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
    msg.setTimeStamp(0.786238976350029);
    msg.setSource(57515U);
    msg.setSourceEntity(212U);
    msg.setDestination(19804U);
    msg.setDestinationEntity(212U);
    msg.base_lat = 0.8124180178661295;
    msg.base_lon = 0.2976384376583414;
    msg.base_time = 0.4439240911207579;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 54892U;
    tmp_msg_0.destination = 13584U;
    tmp_msg_0.timeout = 0.9923390531004459;
    IMC::Sms tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.number.assign("AEHAPCKDVPSXIMNUZYBBGHZZMXBOHIAZOAUTJOALODSFHTQHDIMQMWSUFVLEQGSJCTUVIKXWMJOGUNFUPWIFDTNYCSERXZMBKVBNVCGQJWRKWQHIHECINUPDYSZFZKLGEOCARBZXEQUGRNFETOBWJPI");
    tmp_tmp_msg_0_0.timeout = 17718U;
    tmp_tmp_msg_0_0.contents.assign("XMJHFNKITWQYHAGYXUKCTJZ");
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
    msg.setTimeStamp(0.612113337416174);
    msg.setSource(46265U);
    msg.setSourceEntity(130U);
    msg.setDestination(40988U);
    msg.setDestinationEntity(43U);
    msg.base_lat = 0.07983232930800266;
    msg.base_lon = 0.21903335431477045;
    msg.base_time = 0.4336301290783683;
    const char tmp_msg_0[] = {-94, -69, -117, -37, 25, -89, 50, 109, -32, -57, 94, -9, 38, -79, -99, -123, -35, 21, 52, -94, -5, 115, -99, -54, 14, 20, 34, -89, 65, -90, -94, 97, -9, 90, -42, 101, 74, 90, -62, -104, 77, 69, -124, 62, 98, -73, -4, -44, -7, 16, 69, -89, 79, -61, 54, -43, -50, 106, -18, 122, 85, 124, -10, 94, -52, 31, 41, -73, -119, 52, 21, 51, 72, 118, -66, 16, -22, 33, 109, 81, -78, -8, -73, -104, 31, -122, 32, -46, 90, 115, 1, -75, -63, 120, -48, -35, 94, 45, -5, -117, 103, 79, 77, -36, 120, -91, -82, 97, -121, 26, -110, 71, -92, -121, -121, -21, -86, 83, -60, 75, 118, -17, 12, -127};
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
    msg.setTimeStamp(0.4080831103517719);
    msg.setSource(16756U);
    msg.setSourceEntity(89U);
    msg.setDestination(5851U);
    msg.setDestinationEntity(218U);
    msg.base_lat = 0.5558655937965444;
    msg.base_lon = 0.43791497436514815;
    msg.base_time = 0.6057019377547832;
    const char tmp_msg_0[] = {67, 20, -127, -82, -105, -30, -15, -40, 87, -125, 39, -20, -40, 48, -54, 3, -120, 27, -74, -6, -128, -114, 46, 48, -126, -31, -79, -52, -112, -63, -78, -102, -15, 44, -87, -48, -117, -22, 20, 42, 75, 12, 100, 95, -84, 65, -6, 57, -98, -45, 100, 49, 119, -80, 39, -107, -3, 117, 95, 95, -118, -29, 27, -4, -73, -112, -15, 3, 94, 23, -21, -104, -54, -94, -37, 19, -105, -88, -22, -25, 104, -52, 58, 108, -94, -38, 116, -59, -114, -38, 90, -88, 85, -125, 48, -69, 77, -109, 5, 68, 107, -74, -88, 66, 110, 80, 126, -30, -48, -118, 10, -71, -22, 18, 83, -97, -27, 53, 76, -10, 30, 32, 32, 35, 64, -24, -114, -97, -68, -87, -65, 113, 32, -108, -63, -81, 94, -21, 34, 19, -114, 7, 12, -95, -60, -1, 94, -84, 16, 114, -42, 110, -77, 120, 45, 16, -66, -117, 59, 22, 33, 31, 27, -33};
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
    msg.setTimeStamp(0.9813032487335238);
    msg.setSource(7389U);
    msg.setSourceEntity(96U);
    msg.setDestination(34516U);
    msg.setDestinationEntity(200U);
    msg.base_lat = 0.6545152972112962;
    msg.base_lon = 0.9506705786516148;
    msg.base_time = 0.015399256943113393;
    const char tmp_msg_0[] = {54, 46, 83, 108, -86, 63, 12, -27, -105, -42, -30, 19, 79, -50, 70, -101, 102, 53, 118, 46, 87, 125, 23, 99, 102, -26, 10, 48, 87, -77, 63, -91, -71, -115, -19, -15, 39, 82, 49, -48, -101, 112, 82, 33, -57, 82, 18, 41, -67, -32, -90, 49, -17, -43, -103, 18, 17, 80, 69, -116, 94, -68, -64, 93, -9, -8, -114, -46, 57, -62, -118, 87, 85, -110, 11, 13};
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
    msg.setTimeStamp(0.97987413562912);
    msg.setSource(22713U);
    msg.setSourceEntity(96U);
    msg.setDestination(65313U);
    msg.setDestinationEntity(21U);
    msg.sys_id = 65330U;
    msg.priority = 63;
    msg.x = 2035;
    msg.y = -6916;
    msg.z = -20973;
    msg.t = -10046;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("ZZSWVEQDBIHCXLTLIKQEHOHNQKUDVMOATKPOKSEYZFTXYWFPBSAVZQHFNNCPBVEMZCDAZOZGICUABRDOVSFRVFPYGNJRBSURQYUYASBDNQJZLALGARCIOPUXFTRHNIXVMEMJPHXVAQDLMHCENYHBLVPKTWGLISUGJMOKRECTXWGNKYWMLBTZRHPVKEGXOCJUQUPOCFEXIXWWDBDKRJTSSDYZWNLHEJGCMJWOUTLIQUGYBM");
    const char tmp_tmp_msg_0_0[] = {14, 83, 106, -11, -51, 95, 100, 84, 99, 79, -2, 46, 89, -37, 52, 4, 108, 123, 115, -103, 123, -57, 70, 110, -14, 81, -120, 63, 96, -105, -59, -81, 124, 94, 46, 28, 0, 97, 0, 46, -104, -109, 92, 62, 108, 93, 2, -54, -78, 45, 55, -77, -127, -9, -61, -53, -44, 66, 67, 83, -88, -85, -119, -40, 46, -13, 80, -62, 51, -69, -32, 52, -8, -85, -12, 51, -9, -120, 12, 119, -50, 12, 56, 103, 33, -58, -77, 50, 31, -54, -75, -64, 93, -18, 97, 49, 75, 26, -60, 27, 75, 10, -111, 114, 68, 26, -74, 115, 49, -8, 73, 102, 47, 125, 55, -16, 55, 19, 57, -78, 73, -96, 46, -91, 35, -95, -64, -71, 112, 69, 95, -123, 8, -14, 79, -82, -114, -45, 61, -120, -1, -12, -46, 56, -107, 15, -5, 126, 9, 7, 93, 108, 34};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.18210561369017264);
    msg.setSource(1752U);
    msg.setSourceEntity(142U);
    msg.setDestination(392U);
    msg.setDestinationEntity(84U);
    msg.sys_id = 61231U;
    msg.priority = -60;
    msg.x = -27862;
    msg.y = 944;
    msg.z = 28000;
    msg.t = -15620;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 44025U;
    tmp_msg_0.lat = 0.16006736864656645;
    tmp_msg_0.lon = 0.4722419759417401;
    tmp_msg_0.speed = 0.6548728233328065;
    tmp_msg_0.speed_units = 200U;
    tmp_msg_0.custom.assign("FHTLDKNCVCXGVFIETHAZFOXGLAVWTUNHWTDWRICYKIEIUAZPCNXTDUXMTKPJZRYYQMQBREKNGWNNEMDRYIFFWOCTOHZXZYSQJXDQF");
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
    msg.setTimeStamp(0.8783275532254936);
    msg.setSource(33186U);
    msg.setSourceEntity(91U);
    msg.setDestination(11737U);
    msg.setDestinationEntity(240U);
    msg.sys_id = 45545U;
    msg.priority = -5;
    msg.x = -25547;
    msg.y = -20370;
    msg.z = 32203;
    msg.t = 31639;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 132U;
    tmp_msg_0.range = 0.4706012888903862;
    tmp_msg_0.acceptance = 64U;
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
    msg.setTimeStamp(0.7946003862390622);
    msg.setSource(41778U);
    msg.setSourceEntity(57U);
    msg.setDestination(53217U);
    msg.setDestinationEntity(145U);
    msg.req_id = 4059U;
    msg.type = 168U;
    msg.max_size = 8001U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5101073235480816;
    tmp_msg_0.base_lon = 0.14833520685019397;
    tmp_msg_0.base_time = 0.4791976458057834;
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
    msg.setTimeStamp(0.1541347949916012);
    msg.setSource(14492U);
    msg.setSourceEntity(86U);
    msg.setDestination(60607U);
    msg.setDestinationEntity(237U);
    msg.req_id = 51714U;
    msg.type = 8U;
    msg.max_size = 23848U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.43011175914255606;
    tmp_msg_0.base_lon = 0.2689652321554875;
    tmp_msg_0.base_time = 0.4967942615560734;
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
    msg.setTimeStamp(0.28597259334932434);
    msg.setSource(46877U);
    msg.setSourceEntity(212U);
    msg.setDestination(27251U);
    msg.setDestinationEntity(42U);
    msg.req_id = 63798U;
    msg.type = 248U;
    msg.max_size = 8768U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.09803022253470939;
    tmp_msg_0.base_lon = 0.5143757002398798;
    tmp_msg_0.base_time = 0.5189511940638599;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 37002U;
    tmp_tmp_msg_0_0.destination = 60944U;
    tmp_tmp_msg_0_0.timeout = 0.8966530504121508;
    IMC::ReplayControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 211U;
    tmp_tmp_tmp_msg_0_0_0.file.assign("SWLYKOZBQVVFAWKIGQFXCFUYOFXFMMWUWGNAMW");
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
    msg.setTimeStamp(0.0036297975155318296);
    msg.setSource(24267U);
    msg.setSourceEntity(181U);
    msg.setDestination(60901U);
    msg.setDestinationEntity(136U);
    msg.original_source = 7691U;
    msg.destination = 33235U;
    msg.timeout = 0.018591928817691672;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 194U;
    tmp_msg_0.period = 73915473U;
    tmp_msg_0.duty_cycle = 245600231U;
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
    msg.setTimeStamp(0.07561444363779868);
    msg.setSource(1076U);
    msg.setSourceEntity(168U);
    msg.setDestination(9690U);
    msg.setDestinationEntity(5U);
    msg.original_source = 2234U;
    msg.destination = 54645U;
    msg.timeout = 0.45447365556049335;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 203U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("HQUCDPLLEEZDQLRSOWDBLRFKEMWMEGVTRFMLGIKPETGZQDPXCGZTJWAIXYQHOSBJEAGZHDPJNSHTHSNJAYABUIDIAPYEO");
    tmp_tmp_msg_0_0.description.assign("SMEJOVUAAUJSXJNKLPNRRIODIPQEDKFWUGQDBDUOLSMFQQVFMHDIOFZTWENQTSZWTPSNLKHNRBVCRFPEHRZYLLUARDTSGDMJHIAMUEGZYWBWCFJYBQVHKMGKCYCXRQZXNTPBAGTLLZQIMUJFCPFHXPZYJWEKOGRWOYCD");
    tmp_tmp_msg_0_0.vnamespace.assign("WIJVDWBKEZFCKDSLGMTEJJFLKIEUJJUPEHCDTGOOAHKQAFDIRZYYHMEYQRUZRMCRKDHXQXTDMVUGUMHXWYRRNLPCXOKFPMNZQWIIBSASNMEZKIN");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("ZAADKICCGLUERUZBQSZWNYIKFKSYHVEQTGBOFIFMBRJPAPCLTTDPKQTXBRYJOGXTIXOBSYPZLMWTPLFXTAJQLPFSWUMHJXKOUVETS");
    tmp_tmp_tmp_msg_0_0_0.value.assign("GNUNAPLOFNTADFXBBPDFQHHOBICKBDQJLLHEFBEFDOQNLSMFYIFAEKELIYWENVZRKVWMTZBJXERLEQFUMBZVONNRFRSPPXZIXDWJUJGUZEHMHTTISLTBPTPGTTCRMWKAPNCNQCGKKSBPGUYWAOUBKWEALOQUJGRHRAAIXCIUSVKGWYXVVMODYGZYHISYQCSJUUPPGYWCQZIAJQRDJVGIQEZHZCH");
    tmp_tmp_tmp_msg_0_0_0.type = 164U;
    tmp_tmp_tmp_msg_0_0_0.access = 22U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("BFZVFHHLQBBNODBGHIZXMGZQOQKPSURMQZYEICSUVXVMXASQHJYTHZMLLDXSVXZPQAKGGWUYWMRPRBAJDJTBTLLANTCFWSQBSWFEICMFMOTNNOZIDECMGTCDDOSWASDTIHNNGWYVHENECUFQAKCCQOYXGDXBRPVMKVJHKBAMYYKIPUDJSLNCNGOUEPKZVLYZLPYGDWKO");
    IMC::DesiredHeading tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.8639176224811462;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::ExternalNavData tmp_tmp_tmp_msg_0_0_2;
    IMC::EstimatedState tmp_tmp_tmp_tmp_msg_0_0_2_0;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lat = 0.13135253938957825;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lon = 0.26451348034810784;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.height = 0.3293632783927618;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.x = 0.7387257642413196;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.y = 0.2964011386572708;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.z = 0.9908195495240099;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.phi = 0.8338346180100388;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.theta = 0.010852132925366798;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.psi = 0.13189932845961883;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.u = 0.9693039345206633;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.v = 0.6098857405059682;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.w = 0.09569510943743276;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.vx = 0.08160004904347418;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.vy = 0.7066718677534642;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.vz = 0.2308766479663128;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.p = 0.9490220476407107;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.q = 0.4978065639248963;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.r = 0.09353444489506801;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.depth = 0.04372352050665662;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.alt = 0.3643264070668133;
    tmp_tmp_tmp_msg_0_0_2.state.set(tmp_tmp_tmp_tmp_msg_0_0_2_0);
    tmp_tmp_tmp_msg_0_0_2.type = 103U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3516419607718886);
    msg.setSource(16874U);
    msg.setSourceEntity(4U);
    msg.setDestination(38110U);
    msg.setDestinationEntity(63U);
    msg.original_source = 40224U;
    msg.destination = 39755U;
    msg.timeout = 0.8001363633921038;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("HRZFRPYJCINRADOYKEMQWTYJPXBZFIYNESXHLUIWYNPFDJHXFNKJIQXLXLSHSIVEWKCIOPETHCADAGWTDECEQTTLBDAHRTJGITQVLAZHKSJFSGYROKYKKVXZVNYMVZJXHWWAZTMMUHYNKQLJZBMXQIGTCUPDGVPYWCQCPMFPOJ");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("OJGMKXHWXCJVAOFRWKBQFXAHHQXYXZYFEIWTRTNCUJJJVIETLOGURZKBOWPYOWIYOSDLGLIMLHPSD");
    tmp_tmp_msg_0_0.predicate.assign("NTBKWKOZKAWJPNWCEQSGGTWEJMMDIEJCCJGZBKSDGWYBNRQDACMWJAFOVPZDYJXCRKHEKYIMVFYORQSGTIXXXPYKHNJUQYNZKUUMLBNAOPQCAUOIIZOPQVMYGLBXFRDADVJFPQRZJNBDPTNPGLWISRPFAQDQOUGHWFOOHEXMFLLCVULAHTHRHRVLXOYRDRZIFEIBKT");
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.48125343020931943);
    msg.setSource(50888U);
    msg.setSourceEntity(109U);
    msg.setDestination(21953U);
    msg.setDestinationEntity(160U);
    msg.type = 39U;
    msg.comm_interface = 10154U;
    msg.model = 50719U;
    msg.list.assign("HNTEXFWOACXLIADVQXOKQSDHASTOTHTUVBBJFENPEEXCDFNEJACQZJAMTAHUVSLVZMWLGXXPLRIKYKDJIXAYZFJTUDUQKBKNEKJCDKWPAPHISLWESNTDCZZIAMRDYWGPDORVRUNGLQWBHZUSXNBMOJCLCOLHYCMSMGGRTFLSTCLBAUZFZEYPEJQWTGHVMQMCRVHFZNIBVYNUGHPYGGQSJKMYRWFUIOVXZOIPBRYMVYQKJIEOGSIRBR");

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
    msg.setTimeStamp(0.8891063547868391);
    msg.setSource(57833U);
    msg.setSourceEntity(45U);
    msg.setDestination(11434U);
    msg.setDestinationEntity(67U);
    msg.type = 111U;
    msg.comm_interface = 48272U;
    msg.model = 47996U;
    msg.list.assign("QSHPZBVRSTNOACSDGWTTPJOEZUBRDQCORPHOYSIKDHZXWIVMGUOVVDVKCMEWCMYUABSSNHTJELYQCHZXAGIPMEVLGLRKTVJSMHGFLGLHNQRQDZXXISDHADADOZYMKEXOMKSPLYLLEQCTRNOVJUFKXUEZHCKYSJQETNKFCWQBAXGNERTJJIFYBKYYQNPFPIEUZIBBFWOUURGQZZKHXJACAJILXCMXDFTBWBNIWBMVU");

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
    msg.setTimeStamp(0.24590275375162396);
    msg.setSource(57774U);
    msg.setSourceEntity(175U);
    msg.setDestination(27854U);
    msg.setDestinationEntity(183U);
    msg.type = 96U;
    msg.comm_interface = 28240U;
    msg.model = 29957U;
    msg.list.assign("MJQTICOKYYTIVGTZZVVTZRKWHARWZQMUESBDZOKPAMNDURASZOMOUKXXSELFJFVYOCGHSDHHKKKMKJIFQOXOZTNWFBNNECSPPVBEXQWORWJGCENESCCAUYDOZLRYDCTN");

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
    msg.setTimeStamp(0.36992305528953784);
    msg.setSource(4466U);
    msg.setSourceEntity(20U);
    msg.setDestination(53135U);
    msg.setDestinationEntity(167U);
    msg.type = 96U;
    msg.req_id = 2932305382U;
    msg.ttl = 15971U;
    msg.code = 31U;
    msg.destination.assign("ZENUHZKZKHAKRZPUIKJTHPSLGGFZSZCARBHCPRZMBHSDWUAIOPXUXCFEOBXVNEDJDMWKLXKYROMFQIOXEEOFSMCTSHNSVYYMVRSVGJNCNDUAOJBQUDLBDUCIXVVJUGTYOKAALSLFMXWNKDAAGYJOMJEDPQEKPRFOCCDQRQKMPQIHQFBGZXWTEWMQVEJZITANSPFTJYNTVDLUILNTYUVRRSLGTICXWOL");
    msg.source.assign("QHWMAQWWAUJEXWOYFFXRCDKWLNZLTQUNMQBOGHZTPQGHVBJVBGAHHWMPYRADBJDAMGXAIMHLKQCPSGEGJITIDUVWPCUNYPULFGLTKDYZFRPBDFTGXFQESC");
    msg.acknowledge = 235U;
    msg.status = 194U;
    const char tmp_msg_0[] = {69, -21, -80, -113, 104, 95, 6, 29, 124, -24, -85, 65, 81, 13, 114, -85, -22, -107, 82, 42, -55, -23, 109, -126, -32, -98, -126, -5, -108, -108, 25, 109, 83, -34, -69, -84, -91, 40, 12, -118, -90, -37, -106, 33, 26, -12, -36, -24, 46, -11, -8, 45, -80, -32, -11, 99, 18, -96, -76, 42, -93, -19, -30, -20, -98, 123, 109, -5, 52, 46, 38, 49, -4, 96, -15, 42, -89, 109, 81, -13, 80, -66, -80, -98, -82, -51, -87, -23, 73, -64, 79, -11, 77, 14, 124, 83, -94, 120, 50, 97, -1, 126, 80, 2, -78, 35, -33, 89, 19, -61, 17, -65, 86, 51, -85, 47, -10, 35, 31, -28, -77, -26, -42, -66, -73, 98, -96, -108, -31, -119, 113, -43, 93, -34, 82, 109, 125, -53, 34, -100, -35, -120, 104, 62, -39, 64, -40, -95, 23, 116, -42, -41, -20, 14, -64, -106, -72, -63, -93, -128, 10, 121, 82, 118, -14, 36, -101, 44, -89, 20, 82, 103, -107, 102, -55, -25, 28, -20, 77, -115, 114, -16, -61, -23, -88, -99, 71, 19, -88, -128, 77, -59, -22, 110, -111, -14, 67, -111, 98, 40, -35, -70, -96, -57, -50, 90, 32, 86, 123, -127, -17, 77, -43, -50, 76, -81, -23, -33, -86, -62, 92, 3, -62, 8, 116};
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
    msg.setTimeStamp(0.2963411937519159);
    msg.setSource(55765U);
    msg.setSourceEntity(36U);
    msg.setDestination(64736U);
    msg.setDestinationEntity(0U);
    msg.type = 142U;
    msg.req_id = 2908993236U;
    msg.ttl = 41636U;
    msg.code = 214U;
    msg.destination.assign("JUTCGTIYSYFSXVFCZJXNPBAGIEBFECSDTUHDOWMRLYVYVZNCENMWGOKASJJUHYQAKLXVIQYGXFHCGIBPFIHUEQMGABRVRAOZSXWUZFRHHNDUCJZKQZRTEGMKLGYNSUWJFTONRRQJIWEKNANAPNKDQHX");
    msg.source.assign("BOITGTDSFZUTYLAZYMAJGVTSUFVBWDWDGNPVFPKKDQJOIAZWEJVWAPOVFXOMLCZRQAEIZXNKJRLWNVTMNVKZAGKSNEOOCQIYCLXBHHRHLPSPDIUQGVIXLRMQVUYCKZJXNCDJEWAXPXFQFFJOFKFBTJLUBHZNSYAGGDROBPDLKWKRTHXWGADCMPKUFLSQOGYQBJSBL");
    msg.acknowledge = 167U;
    msg.status = 7U;
    const char tmp_msg_0[] = {-60, -109, -111, 106, -9, 29, 63, 41, -126, 91, -90, 70, -94, 4, -43, 34, -5, 95, 27, -99, 39, 39, 81, -78, 38, 36, 6, -57, -64, 113, 126, 14, -22, 12, 15, 122, 121, -49, 3, -64, 71, 16, 35, -107, 25, 0, -40, -31, -96, -121, 59, 62, -6, -81, 18, 105, -88, -65, 98, 15, -16, -58, 126, 86, -44, -27, 79, -67, 7, 28, 3, -2, 61, 100, 73, -2, 39, 55, 19, 51, 101, -93, 52, -28, -67, -91, -78, -114, -35, 39, 57, -49, -23, 60, -39, -100, -38, 31, 53, 78, 10, -46, -9, -120, -89, 20, -20, 30, -77, -6, -122, -116, 114, 21, 73, 37, -72, 123, 50, -6, -112, -122, -24, 50, -19, -96, -116, -34, -124, 103, -29, -122, 106, 38, -83, -53, -59, -67, 54, 18, 70, 82, -8, 117, 107, 48, -6, 116, 41, -28, 84, 111, -59, -33, 125, -93, -99, 3, 38, 102, 109, -33, -40, -115, 19, -65, 111, 107, -44, 69, 33, -28, -54, 79, 116, -124, -70, 65, 63, 7, -106, 32, -46, -100, -18, 126, -37, 108, -126, 85, -60, 64, 110, -59, 15, 16, -106, -49, -44, 30, -11, 9, 62, 60, 121, -82, -53, 112, -108, -40, 125, -9, 40, 59};
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
    msg.setTimeStamp(0.8796369575940547);
    msg.setSource(41913U);
    msg.setSourceEntity(188U);
    msg.setDestination(53569U);
    msg.setDestinationEntity(118U);
    msg.type = 100U;
    msg.req_id = 2240697881U;
    msg.ttl = 41123U;
    msg.code = 174U;
    msg.destination.assign("ZFWQQRRBNROSIPJFEXZAHLLGSNQNEPSBOYUEZGNCBZRPSYJNCMSRYGPGJRVBQATWUUGGPDHECVTKMWSONABOVZINSTAOUHIWYDVVFPXXNZCTOLFPVJEUIEKAPLVHWDNZQLPDUQCZHARCIDHJAVIVZK");
    msg.source.assign("YAYXPXQFQFOVEXZIBSPOVTWIMDOWFEHRXGYZLNNLFFJRPPCZXXTXNUMNCQLUJUXEZHZXRCPKMRKUKIKIJAUCOCQLHSLAIQMZYYRTLHYMRHKATLJRURMBVRDYPKAJNDGHEKCDSCYQRWPEOSDTZOTDFEFNPHTGGMBEMWBAWWSWGBOASFJVOOFBQHNVZAJUUOJAAIS");
    msg.acknowledge = 83U;
    msg.status = 0U;
    const char tmp_msg_0[] = {-68, 125, 86, -98, 105, 110, -99, 123, -56, -115, 118, -104, 43, 37, -1, -59, 114, 34, 66, -112, -66, 20, -72, 98, -110, 42, 37, -108, -10, 111, -27, 3, -111, -70, 44, 105, -65, 21, 53, 24, -124, -90, -60, 109, 108, -59, -78, 34, -57, -17, -94, -114, 46, -110, 91, 18, -42, -58, 90, 72, 60, 13, -67, 28, -96, 24, -33, -71, 107, 121, -100, -26, -35, -96, 84, -62, 57, 80, 87, -31, -49, 96, -21, 3, -43, -21, -17, -30, 86, 110, -61, 19, -110, -19, -37, 63, -9, 85, 32, -2, -1, 61, 71, 115, 28, 124, -66, 81, 99, 67, -55, 114, 122, -17, -22, -34, -48, -7, -77, -56, -46, -93, -78, 110};
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
    msg.setTimeStamp(0.600735595119718);
    msg.setSource(11339U);
    msg.setSourceEntity(150U);
    msg.setDestination(37724U);
    msg.setDestinationEntity(202U);
    msg.id = 76U;
    msg.range = 0.9281293595617047;

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
    msg.setTimeStamp(0.4504553771955071);
    msg.setSource(34222U);
    msg.setSourceEntity(167U);
    msg.setDestination(39738U);
    msg.setDestinationEntity(167U);
    msg.id = 60U;
    msg.range = 0.2812633572794926;

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
    msg.setTimeStamp(0.8599448772266346);
    msg.setSource(64401U);
    msg.setSourceEntity(201U);
    msg.setDestination(64470U);
    msg.setDestinationEntity(250U);
    msg.id = 95U;
    msg.range = 0.23346641993834127;

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
    msg.setTimeStamp(0.364544171998611);
    msg.setSource(61419U);
    msg.setSourceEntity(95U);
    msg.setDestination(37805U);
    msg.setDestinationEntity(204U);
    msg.beacon.assign("PLZWDCKDRSHBE");
    msg.lat = 0.10575633447406962;
    msg.lon = 0.9102492791801162;
    msg.depth = 0.5353149680061733;
    msg.query_channel = 171U;
    msg.reply_channel = 130U;
    msg.transponder_delay = 211U;

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
    msg.setTimeStamp(0.6788103349669332);
    msg.setSource(51839U);
    msg.setSourceEntity(160U);
    msg.setDestination(51074U);
    msg.setDestinationEntity(71U);
    msg.beacon.assign("JJFXUMSUOMSYQQGLGIATQYMFVWVDBOVZAGTRRFBNPROLIJSLXNXIYWXHWYEDJLCLQZNOHRWUATNFKZNUPIDARFKBKLXLXMHXHSBNJUXSWFHXKUSFGQRZAPOCHZHZCMZVCMAOAASJIMFCDTKWSMCUDLBRVOBJJOEERFKITGICUHRNPYGMYZZKEMQSNBKLBBCVQTYJDKPZPWOLHGXYGAGWIRYWCEIQVTUNGDWEKTVE");
    msg.lat = 0.8041426488768904;
    msg.lon = 0.6758037863965886;
    msg.depth = 0.8817593984295731;
    msg.query_channel = 107U;
    msg.reply_channel = 237U;
    msg.transponder_delay = 239U;

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
    msg.setTimeStamp(0.3792625449063304);
    msg.setSource(15676U);
    msg.setSourceEntity(162U);
    msg.setDestination(6141U);
    msg.setDestinationEntity(165U);
    msg.beacon.assign("MXPUSGYDWXGJIPZQEFRSKCXOOCGTSBANZVQUUAWBSBSUKJKCZJGNMVBYTXSEGTBSWYILVRNHRSEIHOKVCRNGPDHJQQDBMAOVXUYRBYUNESQFNKVPLWJCZVTPAFLRDHKIJQIAXPVCFBAMJBLLBGJEMXKZMIEOTAIPNPEWYICOFNHWKZHDLMWLQHZFFPQSRLULMOWNYZRTDGMHCGKUVOEIZHTCRXHJUAPAFJ");
    msg.lat = 0.7891320559014398;
    msg.lon = 0.33891708438932544;
    msg.depth = 0.3912745499637471;
    msg.query_channel = 117U;
    msg.reply_channel = 149U;
    msg.transponder_delay = 110U;

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
    msg.setTimeStamp(0.05287431448559743);
    msg.setSource(57487U);
    msg.setSourceEntity(238U);
    msg.setDestination(60340U);
    msg.setDestinationEntity(207U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.8093523416942379);
    msg.setSource(40813U);
    msg.setSourceEntity(91U);
    msg.setDestination(46757U);
    msg.setDestinationEntity(126U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.12836210986300178);
    msg.setSource(3238U);
    msg.setSourceEntity(101U);
    msg.setDestination(5556U);
    msg.setDestinationEntity(174U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.10371102748203143);
    msg.setSource(55853U);
    msg.setSourceEntity(91U);
    msg.setDestination(25821U);
    msg.setDestinationEntity(10U);
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.8885937263274234);
    msg.setSource(22273U);
    msg.setSourceEntity(246U);
    msg.setDestination(40599U);
    msg.setDestinationEntity(249U);
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("TUHXRYZLPLWWJACWCVWTDONJIPGTIWLAXGHWBNIXUAMVJMIQFVETRYPILZMVOFUIOQYBKHOTBZOJOCMFAJMKCSPYGQKQTAAUUHNTWYIAQEXXQKVBPPMXL");
    tmp_tmp_msg_0_0.lat = 0.029844696915837132;
    tmp_tmp_msg_0_0.lon = 0.2396721820553107;
    tmp_tmp_msg_0_0.depth = 0.5402749794891797;
    tmp_tmp_msg_0_0.query_channel = 94U;
    tmp_tmp_msg_0_0.reply_channel = 44U;
    tmp_tmp_msg_0_0.transponder_delay = 156U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.08987233410194762;
    tmp_msg_0.y = 0.23298582823853276;
    tmp_msg_0.var_x = 0.055654414376372086;
    tmp_msg_0.var_y = 0.8479315021453021;
    tmp_msg_0.distance = 0.3146911193491515;
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
    msg.setTimeStamp(0.5869153133761932);
    msg.setSource(38396U);
    msg.setSourceEntity(129U);
    msg.setDestination(46607U);
    msg.setDestinationEntity(43U);
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 21466U;
    tmp_msg_0.custom.assign("NPJSSIDADKDRNTHQHREEHVCECKQAWWKNBZLHLGDDYEAQRNFJQPEWTHZCMOINZMYIRNVULXPYAFWMTIWOQOXCDYMIJWGFXBKLNNLLZXKPBBQZEXQGPZXFWETIIDLICGCUGAOUBBQUFOMWLXURXBDHSMFOQJHICKTQJPOUFSPOGVTDUTYWSHYSNMYKTFMRGTPAJEULRNJVHJFOOACZVWJSBPHXLBCFKV");
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
    msg.setTimeStamp(0.31144791029885943);
    msg.setSource(46862U);
    msg.setSourceEntity(214U);
    msg.setDestination(13390U);
    msg.setDestinationEntity(28U);
    msg.op = 167U;
    msg.system.assign("TMBZHEVUJBYPQSQXXESEPVTFWRXUWDHNIIZTMEACFFCTIBHTZDAJTNMGICLZFKWMALZNWPQHLOU");
    msg.range = 0.39022280794248965;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 55U;
    tmp_msg_0.x = 41114U;
    tmp_msg_0.y = 56797U;
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
    msg.setTimeStamp(0.9453755739469197);
    msg.setSource(15504U);
    msg.setSourceEntity(188U);
    msg.setDestination(43052U);
    msg.setDestinationEntity(221U);
    msg.op = 13U;
    msg.system.assign("NCIAEBPYAGTVVDWMJGHOACZWBQDMUHVQCEWSLSCAPPRKBXCHOSOYCPMPMZDEBBLGLUOZAKMQTLSEOUQ");
    msg.range = 0.9263677666043607;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TCPJZTZYWXLWXCHAHRYUSZGBZUOIFEDDFSXFLUVBYWEXHSXHBIZLMMENQQSYFLAKSRVAJRNDCAWXOUVKMQBNYFHLOOAGEPLEQTGTKIRYVDJIKWHFFTEXMIGWDFNUYIMYAHHDDUGNTYPSQBSNOVIBRZEBKRKMCNPWC");
    tmp_msg_0.sys_type = 76U;
    tmp_msg_0.owner = 4105U;
    tmp_msg_0.lat = 0.7570026570181333;
    tmp_msg_0.lon = 0.09070826144061306;
    tmp_msg_0.height = 0.8087316978226298;
    tmp_msg_0.services.assign("IAACDWQQIJJNTVGJPGGPTTEHEYKQOLRYSSSNNXDBYDWROETFFWNUVWQTBCSMMFPEKUYVBCSSRYMHJYNIF");
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
    msg.setTimeStamp(0.2518524638460873);
    msg.setSource(61640U);
    msg.setSourceEntity(29U);
    msg.setDestination(2880U);
    msg.setDestinationEntity(6U);
    msg.op = 67U;
    msg.system.assign("HPCXPNGAXYIZKMIBCJHGAOHNKMYMBGQSHJIHCOFNPUMUFHCOYKALLZYFHGUYQMWKLNWCUDBZUYSEJWHUANDEJUANWSWXROHRQKMNPSRJGFBIFGRVCTMPTZEXFXFDJVZCCBSZGFIYYTYVBTNDOPOPLPQRDYEKGLQVSLVILTQEPA");
    msg.range = 0.9067422283063673;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.04639290943590557;
    tmp_msg_0.y = 0.046633292093261725;
    tmp_msg_0.z = 0.8659954615668366;
    tmp_msg_0.phi = 0.737947431748932;
    tmp_msg_0.theta = 0.145201720677251;
    tmp_msg_0.psi = 0.5605040056227478;
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
    msg.setTimeStamp(0.1355546722219989);
    msg.setSource(2793U);
    msg.setSourceEntity(41U);
    msg.setDestination(27593U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.9200126388278902);
    msg.setSource(28392U);
    msg.setSourceEntity(247U);
    msg.setDestination(30098U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.8020677132901698);
    msg.setSource(21519U);
    msg.setSourceEntity(134U);
    msg.setDestination(61030U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.371706373370814);
    msg.setSource(9180U);
    msg.setSourceEntity(151U);
    msg.setDestination(62562U);
    msg.setDestinationEntity(204U);
    msg.list.assign("YBZTYKVIWXMURIDWGPPJYETHMXFKTZMBULLGRKKSGTGJCFP");

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
    msg.setTimeStamp(0.48401127340815964);
    msg.setSource(44756U);
    msg.setSourceEntity(216U);
    msg.setDestination(61079U);
    msg.setDestinationEntity(31U);
    msg.list.assign("DPZMXXUJJMELHXECRSBQMWTFJJQLSFRTHGJQWMZPKYPWQAQLBZVI");

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
    msg.setTimeStamp(0.8530739533070918);
    msg.setSource(63480U);
    msg.setSourceEntity(114U);
    msg.setDestination(1081U);
    msg.setDestinationEntity(173U);
    msg.list.assign("VOXAQAVXTJZRNBKSHQHYXTRJOQAHFJEGNQZCREUDDMWBUWCIXXAMSBJUOYVJNLAOPKSACLFUWPOMMSWFTWFAGXDZMNJMSVNQQTKSYFYULGOTEKBPEDGGZFFPLHNS");

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
    msg.setTimeStamp(0.5985690047321731);
    msg.setSource(24005U);
    msg.setSourceEntity(127U);
    msg.setDestination(17543U);
    msg.setDestinationEntity(83U);
    msg.peer.assign("UCUADGBCKCSZZQWJBKAYJPJXHHKSNTVFJTWCIVDLOAJMLEIHZBSMEIVMGN");
    msg.rssi = 0.6697144318703322;
    msg.integrity = 31119U;

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
    msg.setTimeStamp(0.8334551483489453);
    msg.setSource(45925U);
    msg.setSourceEntity(247U);
    msg.setDestination(50288U);
    msg.setDestinationEntity(172U);
    msg.peer.assign("YFNMDQOLUHBEAHMFHGKPGTUMOFEQGAFNJSTQCHSEIFMQF");
    msg.rssi = 0.9552929749753688;
    msg.integrity = 30474U;

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
    msg.setTimeStamp(0.962592913044494);
    msg.setSource(47950U);
    msg.setSourceEntity(116U);
    msg.setDestination(14706U);
    msg.setDestinationEntity(168U);
    msg.peer.assign("BLWEIQVTPQXRCTQUPURYFIKRYWQILGGFSZSSYXVSIMLNJOKUKBMGADYNFVZOWDEEZGSEPOQMHANVLGXMWXQFGJSIVXNYPLFEQLMRWABSJIOMWPHITPECUFYSPHRKTHKHBRKVPMYDNOMZXFOSMVDHRKNQCKNYFZBLEJVBTAJNQXOPKUPBWJDDZRSDHTTHZXDZDX");
    msg.rssi = 0.3726287474357989;
    msg.integrity = 10878U;

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
    msg.setTimeStamp(0.8850701485896614);
    msg.setSource(45201U);
    msg.setSourceEntity(106U);
    msg.setDestination(33091U);
    msg.setDestinationEntity(240U);
    msg.value = 20765;

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
    msg.setTimeStamp(0.6887682690534718);
    msg.setSource(59723U);
    msg.setSourceEntity(20U);
    msg.setDestination(33852U);
    msg.setDestinationEntity(227U);
    msg.value = -32715;

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
    msg.setTimeStamp(0.8542617330642954);
    msg.setSource(54329U);
    msg.setSourceEntity(41U);
    msg.setDestination(53478U);
    msg.setDestinationEntity(87U);
    msg.value = -5639;

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
    msg.setTimeStamp(0.05607371217537416);
    msg.setSource(5145U);
    msg.setSourceEntity(117U);
    msg.setDestination(3949U);
    msg.setDestinationEntity(126U);
    msg.value = 0.5459148304943415;

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
    msg.setTimeStamp(0.38962760551998643);
    msg.setSource(2105U);
    msg.setSourceEntity(112U);
    msg.setDestination(53843U);
    msg.setDestinationEntity(170U);
    msg.value = 0.13330708334248065;

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
    msg.setTimeStamp(0.6201000829747051);
    msg.setSource(22U);
    msg.setSourceEntity(2U);
    msg.setDestination(50233U);
    msg.setDestinationEntity(26U);
    msg.value = 0.7554701315519355;

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
    msg.setTimeStamp(0.7674022281006966);
    msg.setSource(30066U);
    msg.setSourceEntity(42U);
    msg.setDestination(62280U);
    msg.setDestinationEntity(49U);
    msg.value = 0.03583849803606509;

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
    msg.setTimeStamp(0.7561978717487164);
    msg.setSource(4387U);
    msg.setSourceEntity(80U);
    msg.setDestination(41910U);
    msg.setDestinationEntity(8U);
    msg.value = 0.6936696687343242;

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
    msg.setTimeStamp(0.2488922793735362);
    msg.setSource(7888U);
    msg.setSourceEntity(9U);
    msg.setDestination(34978U);
    msg.setDestinationEntity(163U);
    msg.value = 0.7705951489235792;

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
    msg.setTimeStamp(0.36912899739419136);
    msg.setSource(36072U);
    msg.setSourceEntity(226U);
    msg.setDestination(31903U);
    msg.setDestinationEntity(226U);
    msg.validity = 39361U;
    msg.type = 169U;
    msg.utc_year = 40327U;
    msg.utc_month = 32U;
    msg.utc_day = 4U;
    msg.utc_time = 0.6778434253172839;
    msg.lat = 0.5964083228323973;
    msg.lon = 0.4226811301196992;
    msg.height = 0.35995044951997746;
    msg.satellites = 15U;
    msg.cog = 0.2727635649265704;
    msg.sog = 0.7219467010697447;
    msg.hdop = 0.8019440360952267;
    msg.vdop = 0.41444447574594145;
    msg.hacc = 0.6593123752981446;
    msg.vacc = 0.99317434672758;

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
    msg.setTimeStamp(0.5981381196623248);
    msg.setSource(34723U);
    msg.setSourceEntity(151U);
    msg.setDestination(41388U);
    msg.setDestinationEntity(172U);
    msg.validity = 32342U;
    msg.type = 191U;
    msg.utc_year = 50927U;
    msg.utc_month = 162U;
    msg.utc_day = 124U;
    msg.utc_time = 0.4013637368941998;
    msg.lat = 0.20408980556986545;
    msg.lon = 0.8937763825803531;
    msg.height = 0.5172909509559351;
    msg.satellites = 45U;
    msg.cog = 0.5363501839399122;
    msg.sog = 0.7512923305082925;
    msg.hdop = 0.06476641984543063;
    msg.vdop = 0.2155921738110559;
    msg.hacc = 0.20512803342235342;
    msg.vacc = 0.1062149546792579;

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
    msg.setTimeStamp(0.2898098371031237);
    msg.setSource(27912U);
    msg.setSourceEntity(131U);
    msg.setDestination(1576U);
    msg.setDestinationEntity(207U);
    msg.validity = 20340U;
    msg.type = 243U;
    msg.utc_year = 63390U;
    msg.utc_month = 23U;
    msg.utc_day = 128U;
    msg.utc_time = 0.22693011211494862;
    msg.lat = 0.71743403155829;
    msg.lon = 0.7541094239248756;
    msg.height = 0.7570332951401295;
    msg.satellites = 25U;
    msg.cog = 0.3846749818723547;
    msg.sog = 0.2636145925059883;
    msg.hdop = 0.6669988204924042;
    msg.vdop = 0.45757984954725917;
    msg.hacc = 0.9567551699572453;
    msg.vacc = 0.8920741513061018;

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
    msg.setTimeStamp(0.41468278843497286);
    msg.setSource(57895U);
    msg.setSourceEntity(124U);
    msg.setDestination(38735U);
    msg.setDestinationEntity(5U);
    msg.time = 0.5162352046178591;
    msg.phi = 0.1974310472693357;
    msg.theta = 0.9963342418245675;
    msg.psi = 0.16105148912594547;
    msg.psi_magnetic = 0.8698907365290461;

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
    msg.setTimeStamp(0.2943044694177527);
    msg.setSource(3640U);
    msg.setSourceEntity(158U);
    msg.setDestination(59675U);
    msg.setDestinationEntity(151U);
    msg.time = 0.2868313064823421;
    msg.phi = 0.8672448984992033;
    msg.theta = 0.8883592558710308;
    msg.psi = 0.07729712954411572;
    msg.psi_magnetic = 0.596037081729866;

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
    msg.setTimeStamp(0.9590430231325813);
    msg.setSource(38104U);
    msg.setSourceEntity(226U);
    msg.setDestination(3360U);
    msg.setDestinationEntity(61U);
    msg.time = 0.3686583290373364;
    msg.phi = 0.3537351767502883;
    msg.theta = 0.7582171080207596;
    msg.psi = 0.8886848782136647;
    msg.psi_magnetic = 0.19096989795610353;

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
    msg.setTimeStamp(0.3508909680722171);
    msg.setSource(40146U);
    msg.setSourceEntity(87U);
    msg.setDestination(64065U);
    msg.setDestinationEntity(123U);
    msg.time = 0.007339781400538814;
    msg.x = 0.7929988101397122;
    msg.y = 0.31640626381565173;
    msg.z = 0.5837859637354054;
    msg.timestep = 0.9502502733101311;

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
    msg.setTimeStamp(0.4509364887044752);
    msg.setSource(42186U);
    msg.setSourceEntity(219U);
    msg.setDestination(20543U);
    msg.setDestinationEntity(138U);
    msg.time = 0.16105572677481672;
    msg.x = 0.04394901497277137;
    msg.y = 0.07343242798164795;
    msg.z = 0.5348636376486254;
    msg.timestep = 0.4383312043964006;

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
    msg.setTimeStamp(0.43463172442674847);
    msg.setSource(35247U);
    msg.setSourceEntity(97U);
    msg.setDestination(50011U);
    msg.setDestinationEntity(81U);
    msg.time = 0.6405590554829329;
    msg.x = 0.7448603990298642;
    msg.y = 0.6146772268909483;
    msg.z = 0.3841223300922135;
    msg.timestep = 0.25451816248236403;

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
    msg.setTimeStamp(0.5409791002981769);
    msg.setSource(39072U);
    msg.setSourceEntity(99U);
    msg.setDestination(3239U);
    msg.setDestinationEntity(108U);
    msg.time = 0.5087407254182027;
    msg.x = 0.28413097742259397;
    msg.y = 0.9183890899894378;
    msg.z = 0.8246656455549648;

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
    msg.setTimeStamp(0.11461217388848355);
    msg.setSource(57607U);
    msg.setSourceEntity(233U);
    msg.setDestination(8393U);
    msg.setDestinationEntity(138U);
    msg.time = 0.21209483660186312;
    msg.x = 0.1658511548670828;
    msg.y = 0.41604180945610625;
    msg.z = 0.3418917561053678;

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
    msg.setTimeStamp(0.9236024490994902);
    msg.setSource(27602U);
    msg.setSourceEntity(67U);
    msg.setDestination(12111U);
    msg.setDestinationEntity(123U);
    msg.time = 0.8684992176427951;
    msg.x = 0.46752796930151375;
    msg.y = 0.9441763201198388;
    msg.z = 0.6332187515959469;

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
    msg.setTimeStamp(0.3090344723568341);
    msg.setSource(48218U);
    msg.setSourceEntity(126U);
    msg.setDestination(34623U);
    msg.setDestinationEntity(69U);
    msg.time = 0.9918023895751604;
    msg.x = 0.6537981537876913;
    msg.y = 0.7414168327880194;
    msg.z = 0.13460561043754038;

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
    msg.setTimeStamp(0.4269655944874594);
    msg.setSource(43786U);
    msg.setSourceEntity(113U);
    msg.setDestination(62761U);
    msg.setDestinationEntity(44U);
    msg.time = 0.2637498377498012;
    msg.x = 0.16159535745703313;
    msg.y = 0.6494361392734899;
    msg.z = 0.3989579715594236;

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
    msg.setTimeStamp(0.48917887653237446);
    msg.setSource(47920U);
    msg.setSourceEntity(111U);
    msg.setDestination(47940U);
    msg.setDestinationEntity(166U);
    msg.time = 0.6150683281703782;
    msg.x = 0.42870990683060584;
    msg.y = 0.6119658015861467;
    msg.z = 0.9673086535476364;

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
    msg.setTimeStamp(0.47504550916396404);
    msg.setSource(4380U);
    msg.setSourceEntity(45U);
    msg.setDestination(27031U);
    msg.setDestinationEntity(171U);
    msg.time = 0.7268581724023688;
    msg.x = 0.5355795265836495;
    msg.y = 0.919512242768148;
    msg.z = 0.954402594527934;

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
    msg.setTimeStamp(0.03318721592589624);
    msg.setSource(7768U);
    msg.setSourceEntity(19U);
    msg.setDestination(50631U);
    msg.setDestinationEntity(114U);
    msg.time = 0.08060913096303257;
    msg.x = 0.5497923659378725;
    msg.y = 0.7530076063292911;
    msg.z = 0.34684705483205047;

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
    msg.setTimeStamp(0.024268911908398083);
    msg.setSource(50844U);
    msg.setSourceEntity(225U);
    msg.setDestination(37647U);
    msg.setDestinationEntity(43U);
    msg.time = 0.38485209678491905;
    msg.x = 0.05829337736187834;
    msg.y = 0.49978720608764904;
    msg.z = 0.8682188387263772;

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
    msg.setTimeStamp(0.15649698769893727);
    msg.setSource(60458U);
    msg.setSourceEntity(172U);
    msg.setDestination(54828U);
    msg.setDestinationEntity(134U);
    msg.validity = 14U;
    msg.x = 0.1091046723416419;
    msg.y = 0.5081791781014491;
    msg.z = 0.27512501856941807;

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
    msg.setTimeStamp(0.047135052857765314);
    msg.setSource(53291U);
    msg.setSourceEntity(92U);
    msg.setDestination(49199U);
    msg.setDestinationEntity(5U);
    msg.validity = 218U;
    msg.x = 0.0035886225759914625;
    msg.y = 0.5081283977641222;
    msg.z = 0.31374538884600145;

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
    msg.setTimeStamp(0.37880615346341084);
    msg.setSource(42530U);
    msg.setSourceEntity(186U);
    msg.setDestination(54607U);
    msg.setDestinationEntity(18U);
    msg.validity = 8U;
    msg.x = 0.09602274170662906;
    msg.y = 0.13159806858518996;
    msg.z = 0.48042814875030637;

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
    msg.setTimeStamp(0.9017361308566426);
    msg.setSource(32599U);
    msg.setSourceEntity(245U);
    msg.setDestination(53152U);
    msg.setDestinationEntity(48U);
    msg.validity = 17U;
    msg.x = 0.5617373463438119;
    msg.y = 0.773203031360298;
    msg.z = 0.13161243133177702;

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
    msg.setTimeStamp(0.7840579027439015);
    msg.setSource(31521U);
    msg.setSourceEntity(186U);
    msg.setDestination(23506U);
    msg.setDestinationEntity(216U);
    msg.validity = 41U;
    msg.x = 0.7267495680338036;
    msg.y = 0.9684394784620459;
    msg.z = 0.9136611926452674;

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
    msg.setTimeStamp(0.7373832981229206);
    msg.setSource(19749U);
    msg.setSourceEntity(199U);
    msg.setDestination(31714U);
    msg.setDestinationEntity(38U);
    msg.validity = 248U;
    msg.x = 0.4994812453520824;
    msg.y = 0.3375468455647521;
    msg.z = 0.46015564667219366;

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
    msg.setTimeStamp(0.9467039323716767);
    msg.setSource(12891U);
    msg.setSourceEntity(14U);
    msg.setDestination(27964U);
    msg.setDestinationEntity(113U);
    msg.time = 0.5067710671390357;
    msg.x = 0.9556729054536156;
    msg.y = 0.6117042091734665;
    msg.z = 0.5873839724136117;

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
    msg.setTimeStamp(0.34145574445808025);
    msg.setSource(18068U);
    msg.setSourceEntity(102U);
    msg.setDestination(61487U);
    msg.setDestinationEntity(24U);
    msg.time = 0.57127759554067;
    msg.x = 0.16873348842013136;
    msg.y = 0.7478381824032306;
    msg.z = 0.1736872469901779;

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
    msg.setTimeStamp(0.8622303199985402);
    msg.setSource(24876U);
    msg.setSourceEntity(35U);
    msg.setDestination(46256U);
    msg.setDestinationEntity(128U);
    msg.time = 0.7536976341799826;
    msg.x = 0.6256433865091505;
    msg.y = 0.4106734347697498;
    msg.z = 0.37013109571819136;

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
    msg.setTimeStamp(0.17681212753298792);
    msg.setSource(60292U);
    msg.setSourceEntity(127U);
    msg.setDestination(29138U);
    msg.setDestinationEntity(6U);
    msg.validity = 37U;
    msg.value = 0.9808527460570119;

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
    msg.setTimeStamp(0.24885913054171527);
    msg.setSource(37670U);
    msg.setSourceEntity(2U);
    msg.setDestination(10815U);
    msg.setDestinationEntity(224U);
    msg.validity = 187U;
    msg.value = 0.7239151443735546;

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
    msg.setTimeStamp(0.08993493681135456);
    msg.setSource(34090U);
    msg.setSourceEntity(41U);
    msg.setDestination(18670U);
    msg.setDestinationEntity(145U);
    msg.validity = 145U;
    msg.value = 0.986500724550633;

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
    msg.setTimeStamp(0.9135578808326806);
    msg.setSource(48766U);
    msg.setSourceEntity(73U);
    msg.setDestination(2426U);
    msg.setDestinationEntity(52U);
    msg.value = 0.45610297181283777;

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
    msg.setTimeStamp(0.010651533964702975);
    msg.setSource(53491U);
    msg.setSourceEntity(77U);
    msg.setDestination(12169U);
    msg.setDestinationEntity(64U);
    msg.value = 0.7491008532874913;

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
    msg.setTimeStamp(0.18409181296559185);
    msg.setSource(3755U);
    msg.setSourceEntity(29U);
    msg.setDestination(35871U);
    msg.setDestinationEntity(67U);
    msg.value = 0.4797498579682892;

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
    msg.setTimeStamp(0.2911643299148282);
    msg.setSource(25027U);
    msg.setSourceEntity(50U);
    msg.setDestination(6453U);
    msg.setDestinationEntity(111U);
    msg.value = 0.294960520141644;

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
    msg.setTimeStamp(0.18476023322705126);
    msg.setSource(28946U);
    msg.setSourceEntity(197U);
    msg.setDestination(61009U);
    msg.setDestinationEntity(83U);
    msg.value = 0.34350357929937725;

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
    msg.setTimeStamp(0.5592224350853635);
    msg.setSource(58440U);
    msg.setSourceEntity(63U);
    msg.setDestination(11814U);
    msg.setDestinationEntity(254U);
    msg.value = 0.30962791475278184;

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
    msg.setTimeStamp(0.0033026807693017357);
    msg.setSource(30687U);
    msg.setSourceEntity(42U);
    msg.setDestination(62394U);
    msg.setDestinationEntity(110U);
    msg.value = 0.25012526461335094;

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
    msg.setTimeStamp(0.0544555056572692);
    msg.setSource(38292U);
    msg.setSourceEntity(42U);
    msg.setDestination(18578U);
    msg.setDestinationEntity(191U);
    msg.value = 0.5517437706333633;

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
    msg.setTimeStamp(0.707603340332255);
    msg.setSource(59008U);
    msg.setSourceEntity(83U);
    msg.setDestination(31384U);
    msg.setDestinationEntity(159U);
    msg.value = 0.7036158921053706;

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
    msg.setTimeStamp(0.0967777995108191);
    msg.setSource(18760U);
    msg.setSourceEntity(23U);
    msg.setDestination(49397U);
    msg.setDestinationEntity(4U);
    msg.value = 0.3266559773966454;

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
    msg.setTimeStamp(0.027436651015769087);
    msg.setSource(57886U);
    msg.setSourceEntity(210U);
    msg.setDestination(55629U);
    msg.setDestinationEntity(217U);
    msg.value = 0.6084208055815469;

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
    msg.setTimeStamp(0.8184891413006443);
    msg.setSource(16237U);
    msg.setSourceEntity(3U);
    msg.setDestination(13921U);
    msg.setDestinationEntity(21U);
    msg.value = 0.34912473962991053;

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
    msg.setTimeStamp(0.7969085566624143);
    msg.setSource(30074U);
    msg.setSourceEntity(190U);
    msg.setDestination(52918U);
    msg.setDestinationEntity(149U);
    msg.value = 0.47842926869779245;

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
    msg.setTimeStamp(0.15048541571891838);
    msg.setSource(27432U);
    msg.setSourceEntity(2U);
    msg.setDestination(47739U);
    msg.setDestinationEntity(166U);
    msg.value = 0.74086747126942;

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
    msg.setTimeStamp(0.011547340835395103);
    msg.setSource(54409U);
    msg.setSourceEntity(123U);
    msg.setDestination(4405U);
    msg.setDestinationEntity(102U);
    msg.value = 0.5705593179845132;

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
    msg.setTimeStamp(0.4586114338380438);
    msg.setSource(10728U);
    msg.setSourceEntity(36U);
    msg.setDestination(37883U);
    msg.setDestinationEntity(115U);
    msg.value = 0.957828761201271;

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
    msg.setTimeStamp(0.5719861451154413);
    msg.setSource(61015U);
    msg.setSourceEntity(76U);
    msg.setDestination(44209U);
    msg.setDestinationEntity(38U);
    msg.value = 0.8952151780078699;

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
    msg.setTimeStamp(0.08931829927350188);
    msg.setSource(61066U);
    msg.setSourceEntity(45U);
    msg.setDestination(39414U);
    msg.setDestinationEntity(181U);
    msg.value = 0.4477503215836569;

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
    msg.setTimeStamp(0.7257412001426737);
    msg.setSource(5262U);
    msg.setSourceEntity(174U);
    msg.setDestination(26181U);
    msg.setDestinationEntity(126U);
    msg.value = 0.3929812478755407;

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
    msg.setTimeStamp(0.9114922299865515);
    msg.setSource(37937U);
    msg.setSourceEntity(218U);
    msg.setDestination(26322U);
    msg.setDestinationEntity(197U);
    msg.value = 0.872002249325106;

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
    msg.setTimeStamp(0.8522838491697915);
    msg.setSource(22275U);
    msg.setSourceEntity(238U);
    msg.setDestination(44407U);
    msg.setDestinationEntity(28U);
    msg.value = 0.8366612326567563;

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
    msg.setTimeStamp(0.4831750726071047);
    msg.setSource(60523U);
    msg.setSourceEntity(19U);
    msg.setDestination(2217U);
    msg.setDestinationEntity(124U);
    msg.value = 0.434498623913936;

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
    msg.setTimeStamp(0.4674760650072375);
    msg.setSource(30661U);
    msg.setSourceEntity(79U);
    msg.setDestination(3737U);
    msg.setDestinationEntity(64U);
    msg.value = 0.2485010393288981;

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
    msg.setTimeStamp(0.6811992824124308);
    msg.setSource(62159U);
    msg.setSourceEntity(25U);
    msg.setDestination(518U);
    msg.setDestinationEntity(39U);
    msg.value = 0.8575301813310969;

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
    msg.setTimeStamp(0.9219253912756173);
    msg.setSource(23295U);
    msg.setSourceEntity(170U);
    msg.setDestination(58563U);
    msg.setDestinationEntity(33U);
    msg.direction = 0.09592133464464647;
    msg.speed = 0.33784572190077244;
    msg.turbulence = 0.801861173647812;

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
    msg.setTimeStamp(0.47238667887321695);
    msg.setSource(52131U);
    msg.setSourceEntity(6U);
    msg.setDestination(8539U);
    msg.setDestinationEntity(141U);
    msg.direction = 0.7676738512721634;
    msg.speed = 0.6325940690713941;
    msg.turbulence = 0.3143757883806504;

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
    msg.setTimeStamp(0.3514475448787846);
    msg.setSource(50989U);
    msg.setSourceEntity(50U);
    msg.setDestination(7800U);
    msg.setDestinationEntity(157U);
    msg.direction = 0.41103185217912575;
    msg.speed = 0.9595245434580049;
    msg.turbulence = 0.4661185456513548;

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
    msg.setTimeStamp(0.6179438914361325);
    msg.setSource(43082U);
    msg.setSourceEntity(43U);
    msg.setDestination(52125U);
    msg.setDestinationEntity(72U);
    msg.value = 0.3960718749720348;

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
    msg.setTimeStamp(0.31341044345537084);
    msg.setSource(16637U);
    msg.setSourceEntity(52U);
    msg.setDestination(31028U);
    msg.setDestinationEntity(64U);
    msg.value = 0.4134561704722646;

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
    msg.setTimeStamp(0.12846439179498892);
    msg.setSource(52545U);
    msg.setSourceEntity(84U);
    msg.setDestination(27457U);
    msg.setDestinationEntity(225U);
    msg.value = 0.22660371842908178;

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
    msg.setTimeStamp(0.8902360354633063);
    msg.setSource(1519U);
    msg.setSourceEntity(49U);
    msg.setDestination(61959U);
    msg.setDestinationEntity(30U);
    msg.value.assign("PSWWKVAAVTDVYHYZQMXYHFBQGKVFUHKPIQORJEQQDLGUZRMFILBZNPMXQNNAJUADUMJVDCHWDVYXQLOKPTJRULBZWGOZEBXENSYWLTNCZBCLBLCRMTKQPSSACWCFFEFIFYUMCGXEAVHNEXIOPFQDBWXOTBRYAUUIBORJUARDJSNURZEKKSCKZQIVBNTPHXMPTYLJMONRNEZTMCCDALFEWLVHSGJIJIGXRPYDSFSSWHVKTOOMGTHGIJZKWAIHO");

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
    msg.setTimeStamp(0.0512718593495467);
    msg.setSource(29883U);
    msg.setSourceEntity(93U);
    msg.setDestination(41244U);
    msg.setDestinationEntity(7U);
    msg.value.assign("HIRPTDXBNNJYUNBNGEOLRGPMWJFEANWZEHMRCJZ");

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
    msg.setTimeStamp(0.11018773216829847);
    msg.setSource(41886U);
    msg.setSourceEntity(185U);
    msg.setDestination(927U);
    msg.setDestinationEntity(158U);
    msg.value.assign("HOULHYPINQFCIWQVJJNLNPTTNDLLHNXYFTHPHCOAVQGWTCIFAXIOOE");

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
    msg.setTimeStamp(0.7143088904111763);
    msg.setSource(57399U);
    msg.setSourceEntity(238U);
    msg.setDestination(49915U);
    msg.setDestinationEntity(76U);
    const char tmp_msg_0[] = {-120, 19, 7, -120, -72, 17, -31, -41, -117, 118, 33, -33, -34, -109, 97, -58, 34, -26, -96, 114, 7, 126, 116, 88, -122, 38, -35, 114, -92, 108, 35, -3, 12, 34, -20, 28, 45, -55, 14, 77, -18, 123, -3, 73, 12, 119, 42, -120, 59, -125, 27, 53, 18, -96, 59, -125, 66, 19, 91, -97, 17, -31, 26, -27, -127, -38, 16, -49, -56, 88, -121, 15, -27, -56, 113, -75, -126, -95, 82, -69, -106, 59, -57, -111, 24, 12, 122, 9, -109, 81, 62, 7, -80, -64, 18, 80, -108, -65, -6, 105, -89, 68, 88, -39, -105, -39, 10, 7, -72, 111, -57, -26, 105, 79, 115, 120, 33, -119, 9, -51, 105, 16, -104, 62, 95, 105, 17, 15, -69, -71, -115, -76, -46, -125, -43, -31, -66, -117, 61, -79, -99, -38, 50, -58, -22, -13, -82, -17, -17, 37, 108, 111, -12, 39, 122, 19, 46, -88, -26, 3, 80, -21, -25, -43, 77, 115, -53, 37, 85, -117, -59, 87, 44, -108, -79, -10, -36, -108, 62, -86, -14, -97, -105, -47, -109, 35, -88, -48, 122};
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
    msg.setTimeStamp(0.4777094215262302);
    msg.setSource(64639U);
    msg.setSourceEntity(135U);
    msg.setDestination(63144U);
    msg.setDestinationEntity(99U);
    const char tmp_msg_0[] = {-64, -89, -53, 66, -4, -56, 82, -25, 83, 75, 90, 59, 77, 12, 100, 15, 76, -113, -90, -29, -70, -79, 111, 104, -10, -56, -88, 48, -103, -24, -122, -70, 88, 94, -73, 24, -124, -48, 53, 81, -20, -62, 37, -51, 79, -71, 44, 75, -98, 112, -7, -90, 87, -6, -63, -33, -9, -2, -125, -31, 26, -80, 40, 9, -23, -95, 109, -49};
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
    msg.setTimeStamp(0.5626275074389068);
    msg.setSource(17102U);
    msg.setSourceEntity(237U);
    msg.setDestination(27980U);
    msg.setDestinationEntity(61U);
    const char tmp_msg_0[] = {70, -12, -17, 92, 124, 14, -11, -97, -73, -128, 4, -10, -22, -32, -80, -97, -67, -70, 27, 125, -114, -100, 2, 85, -95, -67, 120, -92, -116, -91};
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
    msg.setTimeStamp(0.6201891961339896);
    msg.setSource(61337U);
    msg.setSourceEntity(231U);
    msg.setDestination(33823U);
    msg.setDestinationEntity(20U);
    msg.value = 0.33581442657866567;
    msg.label.assign("UVNXEDQZALPCEPXLPJDJXWOYMESGSAIIVFWCKRBVGFCPYZHHVFYDZVCIDZOSFPNQRPFWOLPXRJMJNURUONBSQIXKHBJNAITHOTSITOLTENMQOHFJEODWYXFBTZQUMLKYQGCSSZYGPVKWXCULEZAWZNGOAEMKHAYEJTQBFTNQWZAADMAIBPGBMHLLDEGNGTQWUMAVIXBSIKEKFPMKYJCG");

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
    msg.setTimeStamp(0.5159176770833462);
    msg.setSource(52337U);
    msg.setSourceEntity(6U);
    msg.setDestination(45499U);
    msg.setDestinationEntity(202U);
    msg.value = 0.887892558738783;
    msg.label.assign("AGSOKOCRCUGVHULWJXZAWVCOXNHTBENRUVWUSAZCMZRVQMCYWSCGTNOXEOHEPKPSLYLQFMDEZPJFRJPLJMLSVNFLUWKPBLVOBMGAIEIXRFARJCTJLQBXPZITDWEOSHIROSYNYQNCODUAKFCQGMSBXWBEOYPRPGNDEQDQIXMYAR");

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
    msg.setTimeStamp(0.63575770194315);
    msg.setSource(2361U);
    msg.setSourceEntity(68U);
    msg.setDestination(17288U);
    msg.setDestinationEntity(182U);
    msg.value = 0.7946222907629605;
    msg.label.assign("NTNXWNYEBUDKNEXEZZVREMFLKRPFIVWCRHIJGAHDEOOLYNHKVCMJDODZXJUDRHEPAFGQLNIUODVPJWWPYCOKMTXXVITUWSBGIGTWSBALZRHNXAFDSQZZAUOLHGSGKAPPFHFXGZUGETWGKKSCSNPEOBMC");

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
    msg.setTimeStamp(0.6363071346776094);
    msg.setSource(33348U);
    msg.setSourceEntity(10U);
    msg.setDestination(20763U);
    msg.setDestinationEntity(200U);
    msg.type = 221U;
    msg.frequency = 28429300U;
    msg.min_range = 5867U;
    msg.max_range = 39751U;
    msg.bits_per_point = 54U;
    msg.scale_factor = 0.2869489859476131;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.32820964744729786;
    tmp_msg_0.beam_height = 0.5473384879217513;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-125, -103, 38, 36, 103, 122, 107, -69, -85, -82, -23, 16, 90, -17, 94, 50, 51, 98, -98, -54, 90, 7, -56, -24, -21, 98, 49, -125, 126, -45, 95, 95, -8, -101, -37, -120, 2, 80, 0, -118, 56, 117, 50, 87, -112, -118, 56, 31, -108, 16, 120, 77, -19, 31, -13, -77, -82, -6, -48, 0, -107, -121, -85, 82, -20, 95, -88, -78, 22, -31, 51, 74, -26, 75, 34, 111, -99, -28, 118, -35, -76, -65, -50, 67, -109, 30, 82, -91, -82, -77, 122, 83, 12, -37, 8, -108, -16, 2, 2, -40, 98, -96, -26, 4, -40, -52, -3, -75, 62, -39, 109, 87, 109, 98, -110, -35, -16, 51, 9, -85, -90, 53, 64, 35, 70, 92, -94, 82, 34, 36, 84, 50, -39, 54, -55, -68, -47, 70, 51, -111, 46, -30, -12, 90, -13, -46, -68, 55, -127, -19, 20};
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
    msg.setTimeStamp(0.10374812652512577);
    msg.setSource(59825U);
    msg.setSourceEntity(243U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(188U);
    msg.type = 11U;
    msg.frequency = 3220067372U;
    msg.min_range = 447U;
    msg.max_range = 16885U;
    msg.bits_per_point = 139U;
    msg.scale_factor = 0.15261912986500625;
    const char tmp_msg_0[] = {-46, 124, 126, 85, -24, -38, -10, 74, -45, 91, -92, -110, 102, 37, 87, 120, -102, -26, 63, 71, 95, -97, 92, 87, 3, 27, -9, 31, -58, -123, -90, 55, -30, -15, -3, 20, 123, -109, -37, -69, 22, -33, -59, 69, 49, 49, 10, -16, 34, -15, -23, -46, -35, -69, 101, 9, -95, -86, 32, -7, 95, 120, 5, 12, 69, 0, -35, 107, 112, -47, 120, -80, 36, -16, 4, -72, 68, -112, 77, -61, -90, -2, 4, 38, 63, 126, -31, 87, 31, -57, 75, 96, 7, 64, -110, 121, -48, -97, 13, -24, -6, 107, 102, -52, 45, -113, 60, -91, -127, 20, 38, -58, 54, -44, -15, -6, -79, -98, -124, 123, -45, -79, -41, -11, -10, -52, -15, 2, -83, -57, -78, 106, 18, -63, -118, 102, 63, -43, -49, 39, 111, -112, 81, -59, 92, -42, 23, -29, -89, 60, 99, 36, 23, -54, -40, 114, 63, -85, 11, 81, 60, -61, -128, -62, -41, 35, 95, -66, 85, -60, 57, 1, -41, 125, 107, -24, -84, -2, -55, 93, 86, -21, 114, -119, 113, 94, -100, -72, 73, -101, -72, 49, -54, -9, 98, 86, -105, -32, -117, -119, -47, 13, 123, -21, -12, -3, 104, 24, -111, 24, 83, -57, -45, -89, -22, 89};
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
    msg.setTimeStamp(0.9956686184676183);
    msg.setSource(42949U);
    msg.setSourceEntity(236U);
    msg.setDestination(10981U);
    msg.setDestinationEntity(209U);
    msg.type = 182U;
    msg.frequency = 2467312624U;
    msg.min_range = 4004U;
    msg.max_range = 46709U;
    msg.bits_per_point = 215U;
    msg.scale_factor = 0.3763395634227733;
    const char tmp_msg_0[] = {43, -96, 59, 63, 91, 30, -79, 90, -110, -30, 91, -86, -47, 125, 97, -44, -21, 123, 81, -101, -123, -29, 100, -90, -5, 2, 8, 95, 73, 51, -89, -12, 59, -13, 62, -120, 76, 125, -45, 86, -78, -82, -37, 119, 65, -49, 45, -106, -89, 9, -118, 85, 6, 96, 13, 22, -2, 111, 34, -17, 17, 16, 92, -55, 117, 57, -18, -83, -37, -18, 36, 124, -43, 91, -51, 72, 61, 89, 114, -123, -109, 12, -86, -53, 112, -62, 10, 43, -116, -77, 37, -67, 33, -81, -57, -43, -100, -123, -18, 0, 105, -49, 35, -125, 83, -16, 56, 46, -13, 88, 84, -82, 23, 108, 106, -47, 89, 68, -35, 46, -13, 59, -15, 32, 24, -19, 67, 41, 19, 10, 58, -39, 3, -21, -91, 63, 70, 93, 100, 90, -80, -71, 109, 75, 122, 65, 125, -118, 60, 76, 55, 99, 35, -84, 49, 113, -103, -31, -32, -51, -107, -71, -15, 15, 41, 8, -83, 66, -101, 72, 46, -100, -112, 46, -54};
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
    msg.setTimeStamp(0.8380442753201828);
    msg.setSource(6428U);
    msg.setSourceEntity(220U);
    msg.setDestination(58513U);
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
    msg.setTimeStamp(0.23335419452783346);
    msg.setSource(24866U);
    msg.setSourceEntity(45U);
    msg.setDestination(13162U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.6511600212874623);
    msg.setSource(15566U);
    msg.setSourceEntity(243U);
    msg.setDestination(64173U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.24443711550309688);
    msg.setSource(8712U);
    msg.setSourceEntity(56U);
    msg.setDestination(35900U);
    msg.setDestinationEntity(163U);
    msg.op = 223U;

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
    msg.setTimeStamp(0.21635812178658764);
    msg.setSource(33150U);
    msg.setSourceEntity(134U);
    msg.setDestination(46526U);
    msg.setDestinationEntity(103U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.7633026545752943);
    msg.setSource(57464U);
    msg.setSourceEntity(216U);
    msg.setDestination(8859U);
    msg.setDestinationEntity(101U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.2198448493252403);
    msg.setSource(380U);
    msg.setSourceEntity(184U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(12U);
    msg.value = 0.9113369553704268;
    msg.confidence = 0.14045876839800042;
    msg.opmodes.assign("WFKLDGMCZPQQGFRPYAZSKGELMNLYXICELYZSFRLQ");

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
    msg.setTimeStamp(0.6316479751240056);
    msg.setSource(56390U);
    msg.setSourceEntity(142U);
    msg.setDestination(14848U);
    msg.setDestinationEntity(97U);
    msg.value = 0.7225446817608504;
    msg.confidence = 0.2892898665850635;
    msg.opmodes.assign("DTKEIFIDDLFHJNXLYIHZPWDOIGWJOVTZAVCWZPHRKGNAKGLNMFGBPXPG");

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
    msg.setTimeStamp(0.25728675182845684);
    msg.setSource(4460U);
    msg.setSourceEntity(132U);
    msg.setDestination(10144U);
    msg.setDestinationEntity(48U);
    msg.value = 0.4364489220339055;
    msg.confidence = 0.8905833962731926;
    msg.opmodes.assign("CPNYUYSYICFDNTDISFWCPBQFOMHPEJCFHKYNKIZUPKPQNBEOJGEAOKQDGAMXXXRDPKBOPLOQHLA");

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
    msg.setTimeStamp(0.8247335101772085);
    msg.setSource(9737U);
    msg.setSourceEntity(72U);
    msg.setDestination(13551U);
    msg.setDestinationEntity(37U);
    msg.itow = 1919047097U;
    msg.lat = 0.48501282515315347;
    msg.lon = 0.12667490043037255;
    msg.height_ell = 0.9462979392098396;
    msg.height_sea = 0.08464001950741273;
    msg.hacc = 0.9070645858950349;
    msg.vacc = 0.9599511890288033;
    msg.vel_n = 0.5858299693942587;
    msg.vel_e = 0.9820387732481839;
    msg.vel_d = 0.7873178058004826;
    msg.speed = 0.7016131571250575;
    msg.gspeed = 0.13477990292917263;
    msg.heading = 0.0520778684214257;
    msg.sacc = 0.02654986263121295;
    msg.cacc = 0.722730905453554;

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
    msg.setTimeStamp(0.2276452438911567);
    msg.setSource(27420U);
    msg.setSourceEntity(182U);
    msg.setDestination(58008U);
    msg.setDestinationEntity(190U);
    msg.itow = 1659304198U;
    msg.lat = 0.7037941372990503;
    msg.lon = 0.0969835406970394;
    msg.height_ell = 0.7589145972887881;
    msg.height_sea = 0.7248335155142195;
    msg.hacc = 0.44123417162545686;
    msg.vacc = 0.5415348227406748;
    msg.vel_n = 0.15129372099165905;
    msg.vel_e = 0.6895428958841829;
    msg.vel_d = 0.058731288764733325;
    msg.speed = 0.501486978625974;
    msg.gspeed = 0.781165387607067;
    msg.heading = 0.5114352495377308;
    msg.sacc = 0.4040934799399932;
    msg.cacc = 0.9709716237606691;

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
    msg.setTimeStamp(0.8505076137970091);
    msg.setSource(17656U);
    msg.setSourceEntity(181U);
    msg.setDestination(2955U);
    msg.setDestinationEntity(45U);
    msg.itow = 1275734055U;
    msg.lat = 0.7461527601631516;
    msg.lon = 0.45153693773154524;
    msg.height_ell = 0.9672184358780677;
    msg.height_sea = 0.3027833855743334;
    msg.hacc = 0.48607038902605204;
    msg.vacc = 0.3295389589196932;
    msg.vel_n = 0.010049096079508435;
    msg.vel_e = 0.25255570204138666;
    msg.vel_d = 0.1615534440774019;
    msg.speed = 0.09771732401337829;
    msg.gspeed = 0.08159553650765106;
    msg.heading = 0.2900360390243466;
    msg.sacc = 0.41436294497390713;
    msg.cacc = 0.1004350085428074;

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
    msg.setTimeStamp(0.8234217902756659);
    msg.setSource(39849U);
    msg.setSourceEntity(205U);
    msg.setDestination(27331U);
    msg.setDestinationEntity(75U);
    msg.id = 2U;
    msg.value = 0.30753660996178955;

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
    msg.setTimeStamp(0.9603583393839166);
    msg.setSource(59017U);
    msg.setSourceEntity(175U);
    msg.setDestination(51042U);
    msg.setDestinationEntity(104U);
    msg.id = 171U;
    msg.value = 0.42060336599052495;

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
    msg.setTimeStamp(0.018891714504436274);
    msg.setSource(64696U);
    msg.setSourceEntity(234U);
    msg.setDestination(3971U);
    msg.setDestinationEntity(148U);
    msg.id = 183U;
    msg.value = 0.2983645454376729;

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
    msg.setTimeStamp(0.463540027444459);
    msg.setSource(21638U);
    msg.setSourceEntity(217U);
    msg.setDestination(49425U);
    msg.setDestinationEntity(226U);
    msg.x = 0.25572026338431697;
    msg.y = 0.4975228160350271;
    msg.z = 0.6113068098146164;
    msg.phi = 0.3050208023268226;
    msg.theta = 0.5329973635477472;
    msg.psi = 0.0844839462637349;

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
    msg.setTimeStamp(0.952775841315678);
    msg.setSource(2141U);
    msg.setSourceEntity(60U);
    msg.setDestination(30312U);
    msg.setDestinationEntity(193U);
    msg.x = 0.18693468116049927;
    msg.y = 0.7388048936336443;
    msg.z = 0.3384558553049791;
    msg.phi = 0.6995633932539005;
    msg.theta = 0.45255635797530225;
    msg.psi = 0.1931701766912286;

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
    msg.setTimeStamp(0.3911887122164165);
    msg.setSource(31770U);
    msg.setSourceEntity(130U);
    msg.setDestination(2454U);
    msg.setDestinationEntity(181U);
    msg.x = 0.41056856902299865;
    msg.y = 0.2809688388806806;
    msg.z = 0.4983156113651769;
    msg.phi = 0.16995191316862346;
    msg.theta = 0.45128148490528874;
    msg.psi = 0.6259590890865258;

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
    msg.setTimeStamp(0.3139551454520545);
    msg.setSource(32735U);
    msg.setSourceEntity(73U);
    msg.setDestination(49558U);
    msg.setDestinationEntity(239U);
    msg.beam_width = 0.4856665421425067;
    msg.beam_height = 0.11154330026424075;

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
    msg.setTimeStamp(0.6104821730781937);
    msg.setSource(61844U);
    msg.setSourceEntity(214U);
    msg.setDestination(10451U);
    msg.setDestinationEntity(81U);
    msg.beam_width = 0.4063738720002281;
    msg.beam_height = 0.6723698512198508;

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
    msg.setTimeStamp(0.8586213057408498);
    msg.setSource(41558U);
    msg.setSourceEntity(230U);
    msg.setDestination(43397U);
    msg.setDestinationEntity(170U);
    msg.beam_width = 0.295334339274798;
    msg.beam_height = 0.9811941177816702;

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
    msg.setTimeStamp(0.889906111849417);
    msg.setSource(7529U);
    msg.setSourceEntity(112U);
    msg.setDestination(27695U);
    msg.setDestinationEntity(19U);
    msg.sane = 203U;

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
    msg.setTimeStamp(0.40511905798421255);
    msg.setSource(36800U);
    msg.setSourceEntity(168U);
    msg.setDestination(61588U);
    msg.setDestinationEntity(69U);
    msg.sane = 162U;

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
    msg.setTimeStamp(0.4392375338918021);
    msg.setSource(532U);
    msg.setSourceEntity(20U);
    msg.setDestination(55958U);
    msg.setDestinationEntity(199U);
    msg.sane = 235U;

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
    msg.setTimeStamp(0.5444798543008817);
    msg.setSource(61519U);
    msg.setSourceEntity(124U);
    msg.setDestination(10263U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5449416449301597;

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
    msg.setTimeStamp(0.9450445692826701);
    msg.setSource(17833U);
    msg.setSourceEntity(178U);
    msg.setDestination(11390U);
    msg.setDestinationEntity(206U);
    msg.value = 0.5015682616669769;

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
    msg.setTimeStamp(0.9131756444804718);
    msg.setSource(8355U);
    msg.setSourceEntity(60U);
    msg.setDestination(49891U);
    msg.setDestinationEntity(145U);
    msg.value = 0.4520192665956382;

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
    msg.setTimeStamp(0.41570836247714715);
    msg.setSource(15965U);
    msg.setSourceEntity(163U);
    msg.setDestination(39961U);
    msg.setDestinationEntity(35U);
    msg.value = 0.577798056605184;

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
    msg.setTimeStamp(0.8381633900267985);
    msg.setSource(42173U);
    msg.setSourceEntity(124U);
    msg.setDestination(33474U);
    msg.setDestinationEntity(62U);
    msg.value = 0.708377076264901;

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
    msg.setTimeStamp(0.3270069664351216);
    msg.setSource(28128U);
    msg.setSourceEntity(22U);
    msg.setDestination(55216U);
    msg.setDestinationEntity(45U);
    msg.value = 0.09085640907515902;

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
    msg.setTimeStamp(0.3906452193601596);
    msg.setSource(6342U);
    msg.setSourceEntity(249U);
    msg.setDestination(53933U);
    msg.setDestinationEntity(142U);
    msg.value = 0.5735740708958478;

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
    msg.setTimeStamp(0.3120179541079384);
    msg.setSource(26701U);
    msg.setSourceEntity(153U);
    msg.setDestination(23655U);
    msg.setDestinationEntity(52U);
    msg.value = 0.7688997509120196;

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
    msg.setTimeStamp(0.8338704451118927);
    msg.setSource(50598U);
    msg.setSourceEntity(172U);
    msg.setDestination(63400U);
    msg.setDestinationEntity(158U);
    msg.value = 0.2297819400506219;

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
    msg.setTimeStamp(0.6845104174456005);
    msg.setSource(63187U);
    msg.setSourceEntity(60U);
    msg.setDestination(43910U);
    msg.setDestinationEntity(184U);
    msg.value = 0.2211617297345263;

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
    msg.setTimeStamp(0.6194908445788316);
    msg.setSource(41542U);
    msg.setSourceEntity(203U);
    msg.setDestination(41599U);
    msg.setDestinationEntity(23U);
    msg.value = 0.3829333552936024;

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
    msg.setTimeStamp(0.024796134178812324);
    msg.setSource(39397U);
    msg.setSourceEntity(35U);
    msg.setDestination(2814U);
    msg.setDestinationEntity(16U);
    msg.value = 0.4630045771598965;

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
    msg.setTimeStamp(0.47024310854397655);
    msg.setSource(12688U);
    msg.setSourceEntity(233U);
    msg.setDestination(29106U);
    msg.setDestinationEntity(130U);
    msg.value = 0.1934246311091088;

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
    msg.setTimeStamp(0.37173877739341255);
    msg.setSource(5214U);
    msg.setSourceEntity(83U);
    msg.setDestination(59611U);
    msg.setDestinationEntity(88U);
    msg.value = 0.2310262969172462;

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
    msg.setTimeStamp(0.33323737194189584);
    msg.setSource(45978U);
    msg.setSourceEntity(237U);
    msg.setDestination(10112U);
    msg.setDestinationEntity(135U);
    msg.value = 0.39849336212563724;

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
    msg.setTimeStamp(0.2521772546627806);
    msg.setSource(20964U);
    msg.setSourceEntity(124U);
    msg.setDestination(4818U);
    msg.setDestinationEntity(1U);
    msg.value = 0.37650994405387916;

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
    msg.setTimeStamp(0.8508140205075897);
    msg.setSource(63968U);
    msg.setSourceEntity(16U);
    msg.setDestination(3692U);
    msg.setDestinationEntity(76U);
    msg.value = 0.7898153023918258;

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
    msg.setTimeStamp(0.011475711406408462);
    msg.setSource(51105U);
    msg.setSourceEntity(14U);
    msg.setDestination(41054U);
    msg.setDestinationEntity(182U);
    msg.value = 0.08947943180027851;

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
    msg.setTimeStamp(0.6992182330711045);
    msg.setSource(9421U);
    msg.setSourceEntity(181U);
    msg.setDestination(8405U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7903645308668007;

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
    msg.setTimeStamp(0.37593351751351733);
    msg.setSource(23116U);
    msg.setSourceEntity(168U);
    msg.setDestination(54915U);
    msg.setDestinationEntity(31U);
    msg.value = 0.845077151512182;

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
    msg.setTimeStamp(0.4963370705929463);
    msg.setSource(38923U);
    msg.setSourceEntity(7U);
    msg.setDestination(43243U);
    msg.setDestinationEntity(191U);
    msg.value = 0.9962740009170833;

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
    msg.setTimeStamp(0.34051595188791683);
    msg.setSource(43555U);
    msg.setSourceEntity(93U);
    msg.setDestination(5561U);
    msg.setDestinationEntity(54U);
    msg.value = 0.5889280540138152;

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
    msg.setTimeStamp(0.36131435416508184);
    msg.setSource(59777U);
    msg.setSourceEntity(43U);
    msg.setDestination(56890U);
    msg.setDestinationEntity(221U);
    msg.value = 0.7809698412331337;

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
    msg.setTimeStamp(0.5367953976200296);
    msg.setSource(36991U);
    msg.setSourceEntity(229U);
    msg.setDestination(4303U);
    msg.setDestinationEntity(145U);
    msg.value = 0.2723614294865089;

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
    msg.setTimeStamp(0.41306727338458327);
    msg.setSource(44431U);
    msg.setSourceEntity(86U);
    msg.setDestination(63719U);
    msg.setDestinationEntity(146U);
    msg.validity = 6404U;
    msg.type = 6U;
    msg.tow = 433501916U;
    msg.base_lat = 0.16491708967176522;
    msg.base_lon = 0.26882981485401924;
    msg.base_height = 0.9334045422534613;
    msg.n = 0.11665235735167312;
    msg.e = 0.012649419527970385;
    msg.d = 0.16764430244519324;
    msg.v_n = 0.6893621516328574;
    msg.v_e = 0.2711277391437469;
    msg.v_d = 0.5828623175063001;
    msg.satellites = 173U;
    msg.iar_hyp = 7423U;
    msg.iar_ratio = 0.12282422670547632;

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
    msg.setTimeStamp(0.9114887313038246);
    msg.setSource(11087U);
    msg.setSourceEntity(106U);
    msg.setDestination(6097U);
    msg.setDestinationEntity(30U);
    msg.validity = 1654U;
    msg.type = 225U;
    msg.tow = 3807830693U;
    msg.base_lat = 0.25794905339447205;
    msg.base_lon = 0.1346257865706474;
    msg.base_height = 0.5213756748836755;
    msg.n = 0.21239097849911348;
    msg.e = 0.5663371045098347;
    msg.d = 0.6373629906721404;
    msg.v_n = 0.8574677272204684;
    msg.v_e = 0.3369982751825541;
    msg.v_d = 0.6037568129456762;
    msg.satellites = 131U;
    msg.iar_hyp = 25552U;
    msg.iar_ratio = 0.6707066120078842;

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
    msg.setTimeStamp(0.7751666412708312);
    msg.setSource(30925U);
    msg.setSourceEntity(144U);
    msg.setDestination(51861U);
    msg.setDestinationEntity(240U);
    msg.validity = 20091U;
    msg.type = 2U;
    msg.tow = 2760234597U;
    msg.base_lat = 0.5450575497587278;
    msg.base_lon = 0.11526881449985116;
    msg.base_height = 0.9001137066423217;
    msg.n = 0.24651325076784703;
    msg.e = 0.39527353860766024;
    msg.d = 0.8347532714763733;
    msg.v_n = 0.4510015582954976;
    msg.v_e = 0.40414204430301304;
    msg.v_d = 0.24641348715385647;
    msg.satellites = 137U;
    msg.iar_hyp = 12973U;
    msg.iar_ratio = 0.6678737163388195;

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
    msg.setTimeStamp(0.21539969337814013);
    msg.setSource(48390U);
    msg.setSourceEntity(212U);
    msg.setDestination(53417U);
    msg.setDestinationEntity(225U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.30017973654245;
    tmp_msg_0.lon = 0.05099451237111019;
    tmp_msg_0.height = 0.3480253369211668;
    tmp_msg_0.x = 0.6339367084512999;
    tmp_msg_0.y = 0.498142661654972;
    tmp_msg_0.z = 0.011890683336260532;
    tmp_msg_0.phi = 0.930459453137331;
    tmp_msg_0.theta = 0.5878656447548269;
    tmp_msg_0.psi = 0.3661358868150323;
    tmp_msg_0.u = 0.11802655198607193;
    tmp_msg_0.v = 0.6997984723709303;
    tmp_msg_0.w = 0.8030769277665021;
    tmp_msg_0.vx = 0.8893855152388198;
    tmp_msg_0.vy = 0.6700788027185495;
    tmp_msg_0.vz = 0.7739374184930173;
    tmp_msg_0.p = 0.7991112312072581;
    tmp_msg_0.q = 0.9159827849355958;
    tmp_msg_0.r = 0.42680132834362494;
    tmp_msg_0.depth = 0.6718282055986633;
    tmp_msg_0.alt = 0.09745474327433246;
    msg.state.set(tmp_msg_0);
    msg.type = 35U;

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
    msg.setTimeStamp(0.9022341566954218);
    msg.setSource(20611U);
    msg.setSourceEntity(169U);
    msg.setDestination(37733U);
    msg.setDestinationEntity(99U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.729092046928681;
    tmp_msg_0.lon = 0.25272929468421823;
    tmp_msg_0.height = 0.8867204849145752;
    tmp_msg_0.x = 0.11331218607368487;
    tmp_msg_0.y = 0.8906495149713942;
    tmp_msg_0.z = 0.4684215477041481;
    tmp_msg_0.phi = 0.18229982270709055;
    tmp_msg_0.theta = 0.018802372620386754;
    tmp_msg_0.psi = 0.9898180714014552;
    tmp_msg_0.u = 0.9371161478843044;
    tmp_msg_0.v = 0.13522656006430944;
    tmp_msg_0.w = 0.9679206847737715;
    tmp_msg_0.vx = 0.575182076183096;
    tmp_msg_0.vy = 0.7228663946412688;
    tmp_msg_0.vz = 0.6096339339695525;
    tmp_msg_0.p = 0.5365695787563277;
    tmp_msg_0.q = 0.06758423315087869;
    tmp_msg_0.r = 0.584137477710859;
    tmp_msg_0.depth = 0.8367454841264487;
    tmp_msg_0.alt = 0.29778474325050175;
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
    msg.setTimeStamp(0.598451317441836);
    msg.setSource(59679U);
    msg.setSourceEntity(58U);
    msg.setDestination(26683U);
    msg.setDestinationEntity(109U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.21947338120212145;
    tmp_msg_0.lon = 0.5932989263571812;
    tmp_msg_0.height = 0.11621644201156012;
    tmp_msg_0.x = 0.23071564873631945;
    tmp_msg_0.y = 0.2712883263123591;
    tmp_msg_0.z = 0.8596178891688161;
    tmp_msg_0.phi = 0.95226009368512;
    tmp_msg_0.theta = 0.2665532382010576;
    tmp_msg_0.psi = 0.26376669218669624;
    tmp_msg_0.u = 0.9438391670510144;
    tmp_msg_0.v = 0.6132551240632806;
    tmp_msg_0.w = 0.8407297636052306;
    tmp_msg_0.vx = 0.8112741970423304;
    tmp_msg_0.vy = 0.28295847007936104;
    tmp_msg_0.vz = 0.7808437614164656;
    tmp_msg_0.p = 0.44939970260781525;
    tmp_msg_0.q = 0.2844624319957014;
    tmp_msg_0.r = 0.6170563837812104;
    tmp_msg_0.depth = 0.03575392014248535;
    tmp_msg_0.alt = 0.40303080273690184;
    msg.state.set(tmp_msg_0);
    msg.type = 180U;

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
    msg.setTimeStamp(0.4048682513550258);
    msg.setSource(28785U);
    msg.setSourceEntity(244U);
    msg.setDestination(20542U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6597196675151809;

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
    msg.setTimeStamp(0.08399720235501207);
    msg.setSource(48804U);
    msg.setSourceEntity(48U);
    msg.setDestination(20801U);
    msg.setDestinationEntity(119U);
    msg.value = 0.9988838111532274;

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
    msg.setTimeStamp(0.5574996786474845);
    msg.setSource(18691U);
    msg.setSourceEntity(6U);
    msg.setDestination(51575U);
    msg.setDestinationEntity(67U);
    msg.value = 0.08832964438591895;

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
    msg.setTimeStamp(0.7102243826446686);
    msg.setSource(51044U);
    msg.setSourceEntity(171U);
    msg.setDestination(23571U);
    msg.setDestinationEntity(11U);
    msg.value = 0.3747673453846604;

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
    msg.setTimeStamp(0.6439731648376192);
    msg.setSource(44429U);
    msg.setSourceEntity(167U);
    msg.setDestination(55730U);
    msg.setDestinationEntity(231U);
    msg.value = 0.4805486792570538;

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
    msg.setTimeStamp(0.8465849974756142);
    msg.setSource(31279U);
    msg.setSourceEntity(165U);
    msg.setDestination(58318U);
    msg.setDestinationEntity(99U);
    msg.value = 0.15410284055637313;

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
    msg.setTimeStamp(0.053495381897545435);
    msg.setSource(51102U);
    msg.setSourceEntity(107U);
    msg.setDestination(56305U);
    msg.setDestinationEntity(178U);
    msg.value = 0.5874048267791911;

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
    msg.setTimeStamp(0.7862299996927415);
    msg.setSource(43794U);
    msg.setSourceEntity(92U);
    msg.setDestination(8038U);
    msg.setDestinationEntity(77U);
    msg.value = 0.9481111303298417;

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
    msg.setTimeStamp(0.12995754177670849);
    msg.setSource(54038U);
    msg.setSourceEntity(105U);
    msg.setDestination(18044U);
    msg.setDestinationEntity(228U);
    msg.value = 0.04452027704513195;

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
    msg.setTimeStamp(0.8934001297318072);
    msg.setSource(62603U);
    msg.setSourceEntity(95U);
    msg.setDestination(49646U);
    msg.setDestinationEntity(186U);
    msg.value = 0.5000369054067346;

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
    msg.setTimeStamp(0.3112388423309306);
    msg.setSource(64008U);
    msg.setSourceEntity(209U);
    msg.setDestination(65457U);
    msg.setDestinationEntity(3U);
    msg.value = 0.8022535119345162;

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
    msg.setTimeStamp(0.050783338297303304);
    msg.setSource(36117U);
    msg.setSourceEntity(209U);
    msg.setDestination(18747U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6702917731334189;

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
    msg.setTimeStamp(0.2336594557851528);
    msg.setSource(32807U);
    msg.setSourceEntity(219U);
    msg.setDestination(23787U);
    msg.setDestinationEntity(213U);
    msg.value = 0.6505610137240702;

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
    msg.setTimeStamp(0.10397055738242333);
    msg.setSource(5311U);
    msg.setSourceEntity(69U);
    msg.setDestination(48808U);
    msg.setDestinationEntity(98U);
    msg.value = 0.9129022883949303;

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
    msg.setTimeStamp(0.9895521763870389);
    msg.setSource(33404U);
    msg.setSourceEntity(103U);
    msg.setDestination(18921U);
    msg.setDestinationEntity(52U);
    msg.value = 0.5603298590896877;

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
    msg.setTimeStamp(0.07471791349913914);
    msg.setSource(43930U);
    msg.setSourceEntity(140U);
    msg.setDestination(49373U);
    msg.setDestinationEntity(196U);
    msg.id = 211U;
    msg.zoom = 89U;
    msg.action = 143U;

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
    msg.setTimeStamp(0.8485196888165301);
    msg.setSource(502U);
    msg.setSourceEntity(58U);
    msg.setDestination(10800U);
    msg.setDestinationEntity(170U);
    msg.id = 105U;
    msg.zoom = 163U;
    msg.action = 124U;

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
    msg.setTimeStamp(0.6948177127745911);
    msg.setSource(27101U);
    msg.setSourceEntity(82U);
    msg.setDestination(1424U);
    msg.setDestinationEntity(58U);
    msg.id = 228U;
    msg.zoom = 65U;
    msg.action = 75U;

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
    msg.setTimeStamp(0.17871916490614737);
    msg.setSource(63254U);
    msg.setSourceEntity(139U);
    msg.setDestination(9649U);
    msg.setDestinationEntity(34U);
    msg.id = 2U;
    msg.value = 0.12117924001026092;

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
    msg.setTimeStamp(0.35435320476020693);
    msg.setSource(59158U);
    msg.setSourceEntity(4U);
    msg.setDestination(61656U);
    msg.setDestinationEntity(158U);
    msg.id = 231U;
    msg.value = 0.4079010363742639;

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
    msg.setTimeStamp(0.10368124092978037);
    msg.setSource(48206U);
    msg.setSourceEntity(178U);
    msg.setDestination(53860U);
    msg.setDestinationEntity(139U);
    msg.id = 206U;
    msg.value = 0.6647470502804448;

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
    msg.setTimeStamp(0.7137708083602314);
    msg.setSource(15983U);
    msg.setSourceEntity(84U);
    msg.setDestination(35559U);
    msg.setDestinationEntity(176U);
    msg.id = 211U;
    msg.value = 0.09678344853232312;

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
    msg.setTimeStamp(0.30495418065435487);
    msg.setSource(26488U);
    msg.setSourceEntity(220U);
    msg.setDestination(41279U);
    msg.setDestinationEntity(193U);
    msg.id = 75U;
    msg.value = 0.3037279304688666;

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
    msg.setTimeStamp(0.7009445826907614);
    msg.setSource(57950U);
    msg.setSourceEntity(32U);
    msg.setDestination(31873U);
    msg.setDestinationEntity(190U);
    msg.id = 212U;
    msg.value = 0.04878660166186943;

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
    msg.setTimeStamp(0.7101547595347064);
    msg.setSource(52591U);
    msg.setSourceEntity(13U);
    msg.setDestination(41351U);
    msg.setDestinationEntity(10U);
    msg.id = 121U;
    msg.angle = 0.3724133663366428;

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
    msg.setTimeStamp(0.19148930265632835);
    msg.setSource(664U);
    msg.setSourceEntity(240U);
    msg.setDestination(11547U);
    msg.setDestinationEntity(105U);
    msg.id = 24U;
    msg.angle = 0.46533909175762345;

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
    msg.setTimeStamp(0.13842874983054143);
    msg.setSource(5200U);
    msg.setSourceEntity(155U);
    msg.setDestination(16829U);
    msg.setDestinationEntity(173U);
    msg.id = 151U;
    msg.angle = 0.968712956954182;

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
    msg.setTimeStamp(0.294325684688002);
    msg.setSource(16856U);
    msg.setSourceEntity(58U);
    msg.setDestination(53738U);
    msg.setDestinationEntity(193U);
    msg.op = 169U;
    msg.actions.assign("RVDYOBTRLLARUQKPCHPEFUGUOVSAQHAEAVOD");

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
    msg.setTimeStamp(0.5759393875579933);
    msg.setSource(315U);
    msg.setSourceEntity(37U);
    msg.setDestination(61863U);
    msg.setDestinationEntity(110U);
    msg.op = 57U;
    msg.actions.assign("OCBAOWYLAEQPBXHWFFUHGFQVBZGINRQGQTFOGJTCVYDUXUFQWGVZNBPHVRUHMATXYNECPHMLCKXEJGVYAENXWSXZUSBODMDUYOVDMTJPKBKUJQEDEZZINIITRLYWLIZCTCLIMJKVWODFRLTJDXLPUCSKSYNJSWSEZMHGARRXFZIQPNKKYYDJMQENCBMKJAGKXHBTFP");

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
    msg.setTimeStamp(0.37505559782835063);
    msg.setSource(14701U);
    msg.setSourceEntity(65U);
    msg.setDestination(57428U);
    msg.setDestinationEntity(79U);
    msg.op = 245U;
    msg.actions.assign("UOUCRGKOFZEXXTHXQOSNNELKTBECEQONMYKVEQVZTWAJEOSSDFYJAJHEAGZDNVSHVXYXZKFFTFVKRLNTJSRQOFCHDNWIGKSYPPBIMUUUFMYHDRPZGATLIIWVUBRPIOVANXQUFINJCTIJHAYMQDCLOZVRWQLVZSYDMHUWYJRPQGMOQYOKUXLRFPSGCKCWDIKMZCHTPPCEWILXJEBDMLBBGJHBZBPGGIBXJFQAHWYVGWCDPNAMRU");

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
    msg.setTimeStamp(0.7341562854622501);
    msg.setSource(56557U);
    msg.setSourceEntity(159U);
    msg.setDestination(51360U);
    msg.setDestinationEntity(148U);
    msg.actions.assign("YREGZPVSCBAUZHQTRBIMFKRWTDZWXLVCNTQAJPODHJDRFNUDUWOAAKPJHDUZJKHCDZDYUSOOQUIZVCVQXIWKFHGMDLZNYEUQDBPUGJEBY");

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
    msg.setTimeStamp(0.5376647388999743);
    msg.setSource(44462U);
    msg.setSourceEntity(211U);
    msg.setDestination(39546U);
    msg.setDestinationEntity(109U);
    msg.actions.assign("HAZUQTNKTLQKQNALBDRBCMGPIVEXJBAJTASNXRHOIMZURXOVFRLKCCISJEWWZCALMNBSTAHLZABDJHJCUJGLGKZTKOUPEMXXTMYJAGYBOQFSUSSDN");

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
    msg.setTimeStamp(0.8322879039336053);
    msg.setSource(14205U);
    msg.setSourceEntity(4U);
    msg.setDestination(62958U);
    msg.setDestinationEntity(212U);
    msg.actions.assign("AYJPHWUXDIAXCZIWELYHNNDLQNMRYPOOUGSAHWOYDBKQEBLTTPVRXJEWXDVJNKPRVHTBPVGHDNEEMFJSNXQANGVIKIBWDRZECKLZJHGZWWLRSEOTLUNTXNDSCSJXSOUFYQAZQKRPKEONETOCRJGPBYATQMLKYBBMWUERKHGFLCLFFMFIVFHZGQIFTUISUQXJOBJMDZOAXVVVMRGMKUKUTWGD");

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
    msg.setTimeStamp(0.6549243842665343);
    msg.setSource(24914U);
    msg.setSourceEntity(116U);
    msg.setDestination(7642U);
    msg.setDestinationEntity(197U);
    msg.button = 104U;
    msg.value = 172U;

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
    msg.setTimeStamp(0.28225641796272394);
    msg.setSource(5989U);
    msg.setSourceEntity(252U);
    msg.setDestination(39662U);
    msg.setDestinationEntity(138U);
    msg.button = 199U;
    msg.value = 31U;

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
    msg.setTimeStamp(0.6402175032665975);
    msg.setSource(62628U);
    msg.setSourceEntity(192U);
    msg.setDestination(14770U);
    msg.setDestinationEntity(33U);
    msg.button = 138U;
    msg.value = 186U;

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
    msg.setTimeStamp(0.7004971256186947);
    msg.setSource(56948U);
    msg.setSourceEntity(144U);
    msg.setDestination(10350U);
    msg.setDestinationEntity(3U);
    msg.op = 133U;
    msg.text.assign("RGGDGTTHNTHYAEMDQBOOFALOHMNYFVJOKICLYMKFRAQZFE");

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
    msg.setTimeStamp(0.46459888626869317);
    msg.setSource(15092U);
    msg.setSourceEntity(190U);
    msg.setDestination(53126U);
    msg.setDestinationEntity(199U);
    msg.op = 105U;
    msg.text.assign("GGQAFYYIZJTEWIAWRMVBPCRSPQOGCRWYLXXKBQFUULVKFVIUOCOODXDKRPPSTTCRKGXGZOQNLNMBYPKYVMPAWYEJANFSLUJHTCNMARDPNIKQEELZULIEZXUQLVVFKMY");

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
    msg.setTimeStamp(0.6436484186584323);
    msg.setSource(59865U);
    msg.setSourceEntity(222U);
    msg.setDestination(59134U);
    msg.setDestinationEntity(105U);
    msg.op = 28U;
    msg.text.assign("JQTHKRROGGNGWTFMHVXTITKLABHSGIEMZFEARFCURDTKCSWYNHLZHZWLFNPQSVMPARIENVSPHDEFUKRHWJBQLESOBFGUJBOLKDLCSJINLBBDMJDTXXVJMXUPAGDMCPBCYYLZAUIXMYWRNANWIROQOYPPQHDDQAKIIYQVYNVEGDUJNSXLTVAZQGPCMOFBACZLHEZXXWQXKFTKNJUESDOCVZOPXAUBYOI");

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
    msg.setTimeStamp(0.19002407124134246);
    msg.setSource(10874U);
    msg.setSourceEntity(195U);
    msg.setDestination(52367U);
    msg.setDestinationEntity(58U);
    msg.op = 25U;
    msg.time_remain = 0.43044940586094116;
    msg.sched_time = 0.7921609424925549;

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
    msg.setTimeStamp(0.8422672449538311);
    msg.setSource(25282U);
    msg.setSourceEntity(166U);
    msg.setDestination(57752U);
    msg.setDestinationEntity(243U);
    msg.op = 242U;
    msg.time_remain = 0.32262959965962756;
    msg.sched_time = 0.6453067915269176;

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
    msg.setTimeStamp(0.27610296489407327);
    msg.setSource(40539U);
    msg.setSourceEntity(148U);
    msg.setDestination(905U);
    msg.setDestinationEntity(125U);
    msg.op = 171U;
    msg.time_remain = 0.24202686647965665;
    msg.sched_time = 0.049926956617917684;

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
    msg.setTimeStamp(0.5189707532284191);
    msg.setSource(37501U);
    msg.setSourceEntity(103U);
    msg.setDestination(61833U);
    msg.setDestinationEntity(20U);
    msg.name.assign("TWTUCGLJXQKBBJDOTVWWCJIZMRSENAYFSVXRUJPMDCWMFHZGZJRVZKGXKVXYUNEZGYIRGHTEYIQPOTGABLRSEYJCYBISETMAYOLBJPERZYIYLXWLFAILMCQCNKEHUFMMUKNSPEZWFVFVQSLGOPNDPKQHXIFRGAUGGWJBODZDBNTKONCOQUDUTPUSTAZCIHFESDSWOBXXXKQPQLAOBWKDHRVMDNHRIQXFFEHPWNH");
    msg.op = 60U;
    msg.sched_time = 0.1516871558202556;

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
    msg.setTimeStamp(0.9063069274448385);
    msg.setSource(40508U);
    msg.setSourceEntity(205U);
    msg.setDestination(61376U);
    msg.setDestinationEntity(94U);
    msg.name.assign("CMCSXIJZSBEWXCWYSKRVPGAQOVJNTMXDWBNJNIFXETTDTWDJTDNAMQHQQZLKHQAQXDUGEBLKACGLCDVIUGMJQOJTIYVPRXEVYZRIZMOF");
    msg.op = 30U;
    msg.sched_time = 0.032100863074646546;

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
    msg.setTimeStamp(0.4362371221603958);
    msg.setSource(61335U);
    msg.setSourceEntity(133U);
    msg.setDestination(26823U);
    msg.setDestinationEntity(98U);
    msg.name.assign("ODBYJGUPICBFTZHUXEPWDRHEYNDMFFOUNBLYAIGGECSRWXCOTJIPSHWLVEQJYBRQJDWOUNUMOPIKQFQCENMZZASCSXNVPXGBFAJTPLKMNTRORSWXLKZJGEBULKQKIHEOGGYYWXNIIDRCKWSLJYCWRJAASAKAXDDJKNHTCEC");
    msg.op = 108U;
    msg.sched_time = 0.6473871127299318;

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
    msg.setTimeStamp(0.07629449746557293);
    msg.setSource(27164U);
    msg.setSourceEntity(40U);
    msg.setDestination(29915U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.32241133743856976);
    msg.setSource(55244U);
    msg.setSourceEntity(183U);
    msg.setDestination(54452U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.23947363095538288);
    msg.setSource(30923U);
    msg.setSourceEntity(5U);
    msg.setDestination(17009U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.001679455519126516);
    msg.setSource(9865U);
    msg.setSourceEntity(246U);
    msg.setDestination(58281U);
    msg.setDestinationEntity(123U);
    msg.name.assign("UIXZQDOBNMSXMRMRAFJADBLVVFGQJBTSYSVICWCVRQRNSSOZCDOVOEWNVMQPRHTYIEJDKGUIXHXWHMYHTEOVXXAPQYATLHJSPBYZJIUEFUTRQUYCLQVHMOOVDELGHAXKALDJGMWQTPGTFNJIPFDNZ");
    msg.state = 39U;

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
    msg.setTimeStamp(0.11438620750767581);
    msg.setSource(59122U);
    msg.setSourceEntity(0U);
    msg.setDestination(36780U);
    msg.setDestinationEntity(135U);
    msg.name.assign("JMXAOAYADJEYVKTXQAHWJSKWI");
    msg.state = 0U;

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
    msg.setTimeStamp(0.9236237390533507);
    msg.setSource(6617U);
    msg.setSourceEntity(234U);
    msg.setDestination(33573U);
    msg.setDestinationEntity(216U);
    msg.name.assign("XSDQELFJSUWSWWVPGCRYFSBGCNHYRLLQYIKQADRULXESJIYSBGKODXREPABJVHSTFRTFDIGTLSAOUKRSVZORVZHOAOZ");
    msg.state = 72U;

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
    msg.setTimeStamp(0.12927620256008132);
    msg.setSource(59536U);
    msg.setSourceEntity(189U);
    msg.setDestination(7059U);
    msg.setDestinationEntity(146U);
    msg.name.assign("YKMOXATVPJVUFKAZAKRQRHINXZMPNPZUOFMJRXKRBJSVUWNDYMSUVFSIHYZHFQZGPMYGBXHEIZSYDCDDOHYEBUGLPIKXDVHSPQAOFSINRTJWLACZPBDYEBTYCKQXSAFNCKPRKVVCESNTXOIEGMUWLKLJQQAMCIWGSLTUQCAEUMGFFJWYDCIYLTTRVZPUNOBENFGVNHJKTNMRHICWQBRBLDBZOXWBLMACUXXPJJRTHGWQOLDELTGQEVIJGWOD");
    msg.value = 169U;

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
    msg.setTimeStamp(0.3228339469675261);
    msg.setSource(62103U);
    msg.setSourceEntity(218U);
    msg.setDestination(6679U);
    msg.setDestinationEntity(107U);
    msg.name.assign("THPVOZMBGPOGCDRWNNLLPGSDHGWHKXHFKNXARDIVSFMMEETSRDSCRHQULUXSYJSDWIGAXXAXVUTITUPDQVZEMSYARNJGBYYPTFHOHAODBSFDAZQLWZGXZIFDKOUJENAUALISYAIRMDZTBLCWR");
    msg.value = 190U;

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
    msg.setTimeStamp(0.7313314123309171);
    msg.setSource(11549U);
    msg.setSourceEntity(38U);
    msg.setDestination(14934U);
    msg.setDestinationEntity(196U);
    msg.name.assign("JEPVTDLARXUQJEWORSJVRTATLUENVVGHJBIYFVRLRNIQQKLCCWOECJGKBPTMMRTBHYBT");
    msg.value = 117U;

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
    msg.setTimeStamp(0.0780618794437149);
    msg.setSource(30579U);
    msg.setSourceEntity(207U);
    msg.setDestination(13203U);
    msg.setDestinationEntity(4U);
    msg.name.assign("NUXPEMYCNOMXRTKIXHYNNEUJI");

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
    msg.setTimeStamp(0.5245129183646943);
    msg.setSource(65382U);
    msg.setSourceEntity(128U);
    msg.setDestination(53622U);
    msg.setDestinationEntity(136U);
    msg.name.assign("GOMIEAPBRYSFPGAAJSNAJMSQHLAHZUFDRPJQBIZLWSOCTGDTTKEILOMAGGPBYZYBXOVYWHRQBJVHRYZNCGHMRRMDUNXSQWYRQCAAVUJSNXKXFILIKCUSEYPTVFIOJNQMVXNXKSEZZHZOBFDTCWLFLIGVTCPVDKTJGYFQJZICGUCHJLLINDEEHU");

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
    msg.setTimeStamp(0.5999474285056992);
    msg.setSource(53095U);
    msg.setSourceEntity(171U);
    msg.setDestination(55468U);
    msg.setDestinationEntity(6U);
    msg.name.assign("FPYKSIZKYYYRUVOHGECWGUAUSRWLVCGGXCTNILNKZTHEFMWNEFIHTAXVZZXXDEKLARHWBGBVRC");

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
    msg.setTimeStamp(0.4198698160571387);
    msg.setSource(7365U);
    msg.setSourceEntity(128U);
    msg.setDestination(62886U);
    msg.setDestinationEntity(132U);
    msg.name.assign("KSFTVNCVOAYIYEBGHPISZTNDJAQOENHZVSUXUJBYAJKQLTHFRASRSTXPRUSBWWQXLMMGRPGOJWUHHZZMBFKUTLSDGXOMYZSNJAEKUEHYAATIEDRJAWAANBXJBCBGYEFDIQDXNUNYVIFRBLRMFLPPEICWROIIDYBMXCLDMEQOKFBFCXHHSZWCGPCHVGKSGJMXPVWTTILZPQETHJUOGKLIGRMMCWZDWOOLYXTVQLVZQZOFQEPWRU");
    msg.value = 225U;

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
    msg.setTimeStamp(0.6236161823219382);
    msg.setSource(52284U);
    msg.setSourceEntity(167U);
    msg.setDestination(12160U);
    msg.setDestinationEntity(245U);
    msg.name.assign("ANIGKMZXBMWPCEH");
    msg.value = 36U;

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
    msg.setTimeStamp(0.7255506267184643);
    msg.setSource(16528U);
    msg.setSourceEntity(203U);
    msg.setDestination(65170U);
    msg.setDestinationEntity(237U);
    msg.name.assign("UMOAJSEBLLJNBKQGFEYGCXFBJRALQMXZXHOJHZECGTYDLMZXALTNYDVGFUFDTTFCYWUKIDBPTKIKBCZRPFALXBELQAOVYLJRMUGNWVCVYRGQUBALWPKHUIGEWLQOZVEPGDFJSVDXHHHEIXUWOTQWOEQSSTOUBYRDVCCMAIHVHFNXQXSHFBRWEIORUMFRPCB");
    msg.value = 44U;

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
    msg.setTimeStamp(0.7040840542929148);
    msg.setSource(65426U);
    msg.setSourceEntity(177U);
    msg.setDestination(11289U);
    msg.setDestinationEntity(26U);
    msg.id = 20U;
    msg.period = 523096493U;
    msg.duty_cycle = 590868390U;

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
    msg.setTimeStamp(0.22826358272958136);
    msg.setSource(57386U);
    msg.setSourceEntity(168U);
    msg.setDestination(64978U);
    msg.setDestinationEntity(163U);
    msg.id = 93U;
    msg.period = 933752964U;
    msg.duty_cycle = 1773572613U;

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
    msg.setTimeStamp(0.8875063682523486);
    msg.setSource(9452U);
    msg.setSourceEntity(96U);
    msg.setDestination(36013U);
    msg.setDestinationEntity(46U);
    msg.id = 170U;
    msg.period = 4121562699U;
    msg.duty_cycle = 2283646951U;

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
    msg.setTimeStamp(0.05433216768962523);
    msg.setSource(12466U);
    msg.setSourceEntity(49U);
    msg.setDestination(29293U);
    msg.setDestinationEntity(85U);
    msg.id = 99U;
    msg.period = 923536058U;
    msg.duty_cycle = 1292214547U;

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
    msg.setTimeStamp(0.08551005811572188);
    msg.setSource(34012U);
    msg.setSourceEntity(151U);
    msg.setDestination(36809U);
    msg.setDestinationEntity(69U);
    msg.id = 70U;
    msg.period = 2759486916U;
    msg.duty_cycle = 3648879751U;

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
    msg.setTimeStamp(0.9197594472813773);
    msg.setSource(670U);
    msg.setSourceEntity(13U);
    msg.setDestination(57190U);
    msg.setDestinationEntity(219U);
    msg.id = 172U;
    msg.period = 1726234048U;
    msg.duty_cycle = 2113953331U;

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
    msg.setTimeStamp(0.05306642552058771);
    msg.setSource(52840U);
    msg.setSourceEntity(139U);
    msg.setDestination(41843U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.15103725901428966;
    msg.lon = 0.2875458988926458;
    msg.height = 0.22272749867583963;
    msg.x = 0.3220351803885768;
    msg.y = 0.027296670270251622;
    msg.z = 0.8366297452028372;
    msg.phi = 0.5904093011480507;
    msg.theta = 0.7983731333506453;
    msg.psi = 0.2783956737097728;
    msg.u = 0.4774656644462586;
    msg.v = 0.33852450393631617;
    msg.w = 0.8591074764452691;
    msg.vx = 0.39105513653299406;
    msg.vy = 0.4375629907234022;
    msg.vz = 0.7516861512873106;
    msg.p = 0.9880310331454925;
    msg.q = 0.8684706237683508;
    msg.r = 0.6924042610535472;
    msg.depth = 0.9848950117195301;
    msg.alt = 0.5645290561360328;

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
    msg.setTimeStamp(0.43780728674193614);
    msg.setSource(36345U);
    msg.setSourceEntity(136U);
    msg.setDestination(5407U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.3344324122191126;
    msg.lon = 0.3334840045358597;
    msg.height = 0.8585043875556398;
    msg.x = 0.8765756079202308;
    msg.y = 0.3311583738388667;
    msg.z = 0.9855582059656426;
    msg.phi = 0.6993834795967964;
    msg.theta = 0.0050199563738392294;
    msg.psi = 0.08426733901200778;
    msg.u = 0.6120271084653007;
    msg.v = 0.9884275829588357;
    msg.w = 0.8628827737401641;
    msg.vx = 0.9287000751813743;
    msg.vy = 0.3985214546422817;
    msg.vz = 0.9294145273177928;
    msg.p = 0.02088928042548044;
    msg.q = 0.801859353564113;
    msg.r = 0.30128604316727003;
    msg.depth = 0.950434791594733;
    msg.alt = 0.011608631451987983;

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
    msg.setTimeStamp(0.8091681339672954);
    msg.setSource(1773U);
    msg.setSourceEntity(189U);
    msg.setDestination(59572U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.20262255544194263;
    msg.lon = 0.9064500871008551;
    msg.height = 0.10800778159051094;
    msg.x = 0.8366631119897762;
    msg.y = 0.8549509402124539;
    msg.z = 0.37682930528372904;
    msg.phi = 0.7349772090536931;
    msg.theta = 0.0690130897353084;
    msg.psi = 0.4080982886927086;
    msg.u = 0.4574613192555498;
    msg.v = 0.47638406040468007;
    msg.w = 0.10508780455355482;
    msg.vx = 0.2671100472025516;
    msg.vy = 0.5772700885824925;
    msg.vz = 0.20298830562302983;
    msg.p = 0.7135628372581729;
    msg.q = 0.7164577390422232;
    msg.r = 0.3777177304738748;
    msg.depth = 0.6423058673298465;
    msg.alt = 0.38048716327097254;

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
    msg.setTimeStamp(0.30038609530662197);
    msg.setSource(41426U);
    msg.setSourceEntity(9U);
    msg.setDestination(16907U);
    msg.setDestinationEntity(171U);
    msg.x = 0.4521692181260927;
    msg.y = 0.2718734926574369;
    msg.z = 0.7980344828833292;

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
    msg.setTimeStamp(0.5423323256823007);
    msg.setSource(65281U);
    msg.setSourceEntity(4U);
    msg.setDestination(26108U);
    msg.setDestinationEntity(32U);
    msg.x = 0.21910841781581003;
    msg.y = 0.653450028542727;
    msg.z = 0.9516006838356829;

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
    msg.setTimeStamp(0.10131785329716614);
    msg.setSource(42734U);
    msg.setSourceEntity(100U);
    msg.setDestination(57714U);
    msg.setDestinationEntity(64U);
    msg.x = 0.6223511745788924;
    msg.y = 0.13855479772010582;
    msg.z = 0.8355041704445693;

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
    msg.setTimeStamp(0.675825697416758);
    msg.setSource(19844U);
    msg.setSourceEntity(88U);
    msg.setDestination(1443U);
    msg.setDestinationEntity(99U);
    msg.value = 0.10101249142667124;

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
    msg.setTimeStamp(0.45457081651385933);
    msg.setSource(47433U);
    msg.setSourceEntity(104U);
    msg.setDestination(59342U);
    msg.setDestinationEntity(251U);
    msg.value = 0.23120510451995846;

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
    msg.setTimeStamp(0.8680754663359171);
    msg.setSource(62525U);
    msg.setSourceEntity(168U);
    msg.setDestination(56614U);
    msg.setDestinationEntity(6U);
    msg.value = 0.6276954446905136;

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
    msg.setTimeStamp(0.9167766480052801);
    msg.setSource(33178U);
    msg.setSourceEntity(148U);
    msg.setDestination(15198U);
    msg.setDestinationEntity(73U);
    msg.value = 0.17798251418750766;

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
    msg.setTimeStamp(0.9614915885875117);
    msg.setSource(41816U);
    msg.setSourceEntity(24U);
    msg.setDestination(64755U);
    msg.setDestinationEntity(163U);
    msg.value = 0.5720380856073723;

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
    msg.setTimeStamp(0.6378270241862406);
    msg.setSource(30872U);
    msg.setSourceEntity(250U);
    msg.setDestination(38210U);
    msg.setDestinationEntity(173U);
    msg.value = 0.11884845159614976;

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
    msg.setTimeStamp(0.20670536666708927);
    msg.setSource(26610U);
    msg.setSourceEntity(152U);
    msg.setDestination(61981U);
    msg.setDestinationEntity(6U);
    msg.x = 0.6048726043060131;
    msg.y = 0.8796734009945307;
    msg.z = 0.7854083713953021;
    msg.phi = 0.7509516389508746;
    msg.theta = 0.8271536814966921;
    msg.psi = 0.8448402496050599;
    msg.p = 0.8560541621973193;
    msg.q = 0.1048199195578301;
    msg.r = 0.30689451849989646;
    msg.u = 0.6075690933736435;
    msg.v = 0.5361520266102479;
    msg.w = 0.3544303537886285;
    msg.bias_psi = 0.7741566282337692;
    msg.bias_r = 0.46424564617335495;

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
    msg.setTimeStamp(0.934238092905487);
    msg.setSource(32556U);
    msg.setSourceEntity(53U);
    msg.setDestination(17649U);
    msg.setDestinationEntity(95U);
    msg.x = 0.22437769487179815;
    msg.y = 0.2845933914013574;
    msg.z = 0.7643659693712543;
    msg.phi = 0.9473828727634599;
    msg.theta = 0.5722924363367003;
    msg.psi = 0.780004807497969;
    msg.p = 0.9041742801859932;
    msg.q = 0.4564650456727186;
    msg.r = 0.5961287600882488;
    msg.u = 0.27714276858210396;
    msg.v = 0.03757598354317304;
    msg.w = 0.49517700451793956;
    msg.bias_psi = 0.9728525167784079;
    msg.bias_r = 0.39337614191289805;

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
    msg.setTimeStamp(0.7777899820738975);
    msg.setSource(13481U);
    msg.setSourceEntity(22U);
    msg.setDestination(47401U);
    msg.setDestinationEntity(9U);
    msg.x = 0.7273195181070751;
    msg.y = 0.4092593053707203;
    msg.z = 0.8661741407821023;
    msg.phi = 0.03930348483899282;
    msg.theta = 0.8859300495726449;
    msg.psi = 0.23696392049491388;
    msg.p = 0.7069459175391569;
    msg.q = 0.3406092774093048;
    msg.r = 0.6155534369860557;
    msg.u = 0.5912175739742654;
    msg.v = 0.14184015219891744;
    msg.w = 0.1472918786234425;
    msg.bias_psi = 0.1154037694426645;
    msg.bias_r = 0.5928334164220995;

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
    msg.setTimeStamp(0.9126825761668164);
    msg.setSource(1741U);
    msg.setSourceEntity(134U);
    msg.setDestination(10237U);
    msg.setDestinationEntity(169U);
    msg.bias_psi = 0.9796471625948704;
    msg.bias_r = 0.3365185639227337;
    msg.cog = 0.7722085737401482;
    msg.cyaw = 0.2052568111719142;
    msg.lbl_rej_level = 0.8103987290681839;
    msg.gps_rej_level = 0.45125064495421685;
    msg.custom_x = 0.9875552137104034;
    msg.custom_y = 0.9827118747839823;
    msg.custom_z = 0.021334272313494163;

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
    msg.setTimeStamp(0.14570111607961322);
    msg.setSource(3807U);
    msg.setSourceEntity(211U);
    msg.setDestination(7697U);
    msg.setDestinationEntity(182U);
    msg.bias_psi = 0.5535828624338303;
    msg.bias_r = 0.07339667434999564;
    msg.cog = 0.11661165029050025;
    msg.cyaw = 0.6700019553943473;
    msg.lbl_rej_level = 0.3491940365444707;
    msg.gps_rej_level = 0.8871489322915775;
    msg.custom_x = 0.11846410929841333;
    msg.custom_y = 0.8683523707451342;
    msg.custom_z = 0.6902253464397441;

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
    msg.setTimeStamp(0.9769174524481642);
    msg.setSource(44318U);
    msg.setSourceEntity(60U);
    msg.setDestination(48530U);
    msg.setDestinationEntity(237U);
    msg.bias_psi = 0.022831441679813547;
    msg.bias_r = 0.49496436182038195;
    msg.cog = 0.4829837083719841;
    msg.cyaw = 0.13090716782710166;
    msg.lbl_rej_level = 0.895242447770381;
    msg.gps_rej_level = 0.515720631082931;
    msg.custom_x = 0.15043724850694218;
    msg.custom_y = 0.9638374576571099;
    msg.custom_z = 0.5225545402657009;

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
    msg.setTimeStamp(0.9409210442782656);
    msg.setSource(34073U);
    msg.setSourceEntity(85U);
    msg.setDestination(51821U);
    msg.setDestinationEntity(88U);
    msg.utc_time = 0.2942795321582581;
    msg.reason = 180U;

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
    msg.setTimeStamp(0.17334583733417475);
    msg.setSource(62748U);
    msg.setSourceEntity(138U);
    msg.setDestination(21302U);
    msg.setDestinationEntity(49U);
    msg.utc_time = 0.7210092372356958;
    msg.reason = 85U;

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
    msg.setTimeStamp(0.5499612179314793);
    msg.setSource(25012U);
    msg.setSourceEntity(165U);
    msg.setDestination(45183U);
    msg.setDestinationEntity(105U);
    msg.utc_time = 0.2787653350287037;
    msg.reason = 98U;

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
    msg.setTimeStamp(0.42267064148730693);
    msg.setSource(38569U);
    msg.setSourceEntity(227U);
    msg.setDestination(44368U);
    msg.setDestinationEntity(218U);
    msg.id = 213U;
    msg.range = 0.44176241643388325;
    msg.acceptance = 184U;

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
    msg.setTimeStamp(0.046344490762316726);
    msg.setSource(38646U);
    msg.setSourceEntity(43U);
    msg.setDestination(13643U);
    msg.setDestinationEntity(149U);
    msg.id = 180U;
    msg.range = 0.2661427018552278;
    msg.acceptance = 21U;

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
    msg.setTimeStamp(0.2738905601635262);
    msg.setSource(33368U);
    msg.setSourceEntity(15U);
    msg.setDestination(59576U);
    msg.setDestinationEntity(23U);
    msg.id = 60U;
    msg.range = 0.502554008382883;
    msg.acceptance = 21U;

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
    msg.setTimeStamp(0.8554901465032152);
    msg.setSource(59033U);
    msg.setSourceEntity(224U);
    msg.setDestination(65372U);
    msg.setDestinationEntity(60U);
    msg.type = 145U;
    msg.reason = 103U;
    msg.value = 0.31449197556688835;
    msg.timestep = 0.7835750131357299;

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
    msg.setTimeStamp(0.4519149674823366);
    msg.setSource(30816U);
    msg.setSourceEntity(137U);
    msg.setDestination(6335U);
    msg.setDestinationEntity(207U);
    msg.type = 170U;
    msg.reason = 15U;
    msg.value = 0.3662966415681883;
    msg.timestep = 0.16449136435925826;

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
    msg.setTimeStamp(0.8512375835975369);
    msg.setSource(5262U);
    msg.setSourceEntity(48U);
    msg.setDestination(57406U);
    msg.setDestinationEntity(82U);
    msg.type = 117U;
    msg.reason = 152U;
    msg.value = 0.404788918871096;
    msg.timestep = 0.3400964994798107;

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
    msg.setTimeStamp(0.02808055036477719);
    msg.setSource(62175U);
    msg.setSourceEntity(64U);
    msg.setDestination(57222U);
    msg.setDestinationEntity(189U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GNAUFWHRLBQKDFGMBNKVAXKOFGITZOYSVPHBSCZPJXJQOKNEIKTKLVVFIZWUWXTUBHCMLFAUNEHMQMGMPMYCIGAWZZNABURSSFKGSCPONKEOSMLQAXZRDREBIVLIPQFDOADPKOYHMYNUPTFFPNEJIJHJDCLIKQWXDWPCJYGEFXOBLUGYJWSWTCROYLGUBGXQMZENMLRRRYZONHI");
    tmp_msg_0.lat = 0.3616216065085386;
    tmp_msg_0.lon = 0.3431048070732735;
    tmp_msg_0.depth = 0.23488590088190686;
    tmp_msg_0.query_channel = 115U;
    tmp_msg_0.reply_channel = 19U;
    tmp_msg_0.transponder_delay = 91U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8678830231873916;
    msg.y = 0.9230210872753082;
    msg.var_x = 0.9988654902078897;
    msg.var_y = 0.9464290950325037;
    msg.distance = 0.8893983604928751;

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
    msg.setTimeStamp(0.6289313997224484);
    msg.setSource(21585U);
    msg.setSourceEntity(158U);
    msg.setDestination(53835U);
    msg.setDestinationEntity(162U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OQJGNIGXSDYVPAGVAXDPCGZZXOLEYTMVXTMABKYRSCUNMNLXBTVMCBPDKUAWDCKHHIBNZYZJTYUDKAAJLRQSRNZJFLUJNFIOUDZHOPBPIDHBCVNOQCUQELJMDUZAXWSQEXFEWOFRRGMLJIJDBLWIYWQBNRSRREESKVVWHGKTTFPOONLEPSZHWQQCWKTR");
    tmp_msg_0.lat = 0.3799168592299912;
    tmp_msg_0.lon = 0.8170672943790324;
    tmp_msg_0.depth = 0.31577195545891135;
    tmp_msg_0.query_channel = 126U;
    tmp_msg_0.reply_channel = 12U;
    tmp_msg_0.transponder_delay = 231U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.24443763827259846;
    msg.y = 0.48504806458758143;
    msg.var_x = 0.9215271946116181;
    msg.var_y = 0.15677875586412882;
    msg.distance = 0.6059711696783844;

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
    msg.setTimeStamp(0.017332150401406565);
    msg.setSource(8135U);
    msg.setSourceEntity(224U);
    msg.setDestination(58100U);
    msg.setDestinationEntity(55U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MZWVMZISYJKCDAAJSGENXGVOZTBACPOYTLVNBPFQIIAHUFKDOYQVYKTDEJYKZVYBUXTSUZREZPAGHLRMNDSXIIRMKWXVSHFADITHFAPYMNFUVAJGWEQCXDCEFTVSIRRLWQCWNPWOUKLGPYWWNBJUZJLKHFQOCOIOEZXGCBAOGCYLJBQEHODCJUGBLUVERIMHXVBIPJQSBPFKSLXZFGTRFXHQYRGKOMTUNREM");
    tmp_msg_0.lat = 0.7404496688217781;
    tmp_msg_0.lon = 0.44663816115013466;
    tmp_msg_0.depth = 0.5544181965323649;
    tmp_msg_0.query_channel = 61U;
    tmp_msg_0.reply_channel = 104U;
    tmp_msg_0.transponder_delay = 222U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5811802377092731;
    msg.y = 0.21209463169797416;
    msg.var_x = 0.7238399890299506;
    msg.var_y = 0.7271665417369354;
    msg.distance = 0.038472653380985156;

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
    msg.setTimeStamp(0.767873303378435);
    msg.setSource(45045U);
    msg.setSourceEntity(177U);
    msg.setDestination(13195U);
    msg.setDestinationEntity(132U);
    msg.state = 51U;

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
    msg.setTimeStamp(0.600246900310682);
    msg.setSource(17763U);
    msg.setSourceEntity(69U);
    msg.setDestination(4612U);
    msg.setDestinationEntity(85U);
    msg.state = 125U;

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
    msg.setTimeStamp(0.9865546467225345);
    msg.setSource(62845U);
    msg.setSourceEntity(62U);
    msg.setDestination(64186U);
    msg.setDestinationEntity(69U);
    msg.state = 98U;

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
    msg.setTimeStamp(0.02410119371213748);
    msg.setSource(37698U);
    msg.setSourceEntity(175U);
    msg.setDestination(7570U);
    msg.setDestinationEntity(141U);
    msg.x = 0.6803339443726074;
    msg.y = 0.8804135199477514;
    msg.z = 0.6157798658457473;

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
    msg.setTimeStamp(0.47250575561974517);
    msg.setSource(43220U);
    msg.setSourceEntity(252U);
    msg.setDestination(64272U);
    msg.setDestinationEntity(171U);
    msg.x = 0.10219964112325763;
    msg.y = 0.5186448616332093;
    msg.z = 0.02955789569867473;

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
    msg.setTimeStamp(0.5538124959440747);
    msg.setSource(50816U);
    msg.setSourceEntity(212U);
    msg.setDestination(2316U);
    msg.setDestinationEntity(209U);
    msg.x = 0.17712998311208183;
    msg.y = 0.3770667997547653;
    msg.z = 0.8112515536602501;

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
    msg.setTimeStamp(0.20560364034397471);
    msg.setSource(35163U);
    msg.setSourceEntity(159U);
    msg.setDestination(11563U);
    msg.setDestinationEntity(254U);
    msg.va = 0.6264571658392821;
    msg.aoa = 0.10097483010912034;
    msg.ssa = 0.9503011452948177;

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
    msg.setTimeStamp(0.4922966950249028);
    msg.setSource(34869U);
    msg.setSourceEntity(108U);
    msg.setDestination(26940U);
    msg.setDestinationEntity(97U);
    msg.va = 0.7368658238959123;
    msg.aoa = 0.742371027738613;
    msg.ssa = 0.8897765304406938;

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
    msg.setTimeStamp(0.6645773052821594);
    msg.setSource(4331U);
    msg.setSourceEntity(236U);
    msg.setDestination(49598U);
    msg.setDestinationEntity(44U);
    msg.va = 0.014067612747801883;
    msg.aoa = 0.017405544782096438;
    msg.ssa = 0.06557913935788462;

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
    msg.setTimeStamp(0.9487267886998365);
    msg.setSource(59044U);
    msg.setSourceEntity(181U);
    msg.setDestination(34208U);
    msg.setDestinationEntity(1U);
    msg.value = 0.3991607130709296;

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
    msg.setTimeStamp(0.8549013287032085);
    msg.setSource(22803U);
    msg.setSourceEntity(14U);
    msg.setDestination(56433U);
    msg.setDestinationEntity(126U);
    msg.value = 0.22247887439251268;

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
    msg.setTimeStamp(0.753213474767056);
    msg.setSource(43808U);
    msg.setSourceEntity(108U);
    msg.setDestination(45523U);
    msg.setDestinationEntity(243U);
    msg.value = 0.37410056013248627;

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
    msg.setTimeStamp(0.17427947406490907);
    msg.setSource(51676U);
    msg.setSourceEntity(70U);
    msg.setDestination(63708U);
    msg.setDestinationEntity(191U);
    msg.value = 0.6552751051384571;
    msg.z_units = 45U;

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
    msg.setTimeStamp(0.730909020616155);
    msg.setSource(10497U);
    msg.setSourceEntity(249U);
    msg.setDestination(49272U);
    msg.setDestinationEntity(212U);
    msg.value = 0.9326994522253415;
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
    msg.setTimeStamp(0.4106312452456202);
    msg.setSource(37742U);
    msg.setSourceEntity(165U);
    msg.setDestination(44244U);
    msg.setDestinationEntity(95U);
    msg.value = 0.735152836122838;
    msg.z_units = 70U;

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
    msg.setTimeStamp(0.4435848347917337);
    msg.setSource(37998U);
    msg.setSourceEntity(40U);
    msg.setDestination(42718U);
    msg.setDestinationEntity(198U);
    msg.value = 0.68279227492497;
    msg.speed_units = 75U;

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
    msg.setTimeStamp(0.17537644737358782);
    msg.setSource(23149U);
    msg.setSourceEntity(6U);
    msg.setDestination(21545U);
    msg.setDestinationEntity(79U);
    msg.value = 0.07366755392520663;
    msg.speed_units = 71U;

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
    msg.setTimeStamp(0.3568353815875551);
    msg.setSource(6471U);
    msg.setSourceEntity(248U);
    msg.setDestination(1704U);
    msg.setDestinationEntity(188U);
    msg.value = 0.9486075679420274;
    msg.speed_units = 138U;

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
    msg.setTimeStamp(0.4276010931927312);
    msg.setSource(14875U);
    msg.setSourceEntity(215U);
    msg.setDestination(44751U);
    msg.setDestinationEntity(162U);
    msg.value = 0.6708176279505904;

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
    msg.setTimeStamp(0.43080343110073205);
    msg.setSource(31724U);
    msg.setSourceEntity(20U);
    msg.setDestination(23374U);
    msg.setDestinationEntity(91U);
    msg.value = 0.2622998612855857;

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
    msg.setTimeStamp(0.07837696610497902);
    msg.setSource(58740U);
    msg.setSourceEntity(74U);
    msg.setDestination(39549U);
    msg.setDestinationEntity(202U);
    msg.value = 0.5688714360622025;

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
    msg.setTimeStamp(0.2154674948660138);
    msg.setSource(60154U);
    msg.setSourceEntity(110U);
    msg.setDestination(57813U);
    msg.setDestinationEntity(77U);
    msg.value = 0.15319593197582326;

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
    msg.setTimeStamp(0.8517175697778918);
    msg.setSource(28027U);
    msg.setSourceEntity(183U);
    msg.setDestination(45074U);
    msg.setDestinationEntity(42U);
    msg.value = 0.5597629096940088;

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
    msg.setTimeStamp(0.20517320074654832);
    msg.setSource(61306U);
    msg.setSourceEntity(117U);
    msg.setDestination(46186U);
    msg.setDestinationEntity(197U);
    msg.value = 0.0308693227355461;

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
    msg.setTimeStamp(0.21610122872077142);
    msg.setSource(35816U);
    msg.setSourceEntity(63U);
    msg.setDestination(51453U);
    msg.setDestinationEntity(15U);
    msg.value = 0.22856534253970529;

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
    msg.setTimeStamp(0.020535033690638138);
    msg.setSource(51226U);
    msg.setSourceEntity(49U);
    msg.setDestination(63123U);
    msg.setDestinationEntity(167U);
    msg.value = 0.4831710744141362;

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
    msg.setTimeStamp(0.8968330590368203);
    msg.setSource(19920U);
    msg.setSourceEntity(238U);
    msg.setDestination(15828U);
    msg.setDestinationEntity(123U);
    msg.value = 0.28445752498926;

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
    msg.setTimeStamp(0.8067589689193124);
    msg.setSource(3570U);
    msg.setSourceEntity(128U);
    msg.setDestination(61651U);
    msg.setDestinationEntity(196U);
    msg.path_ref = 3635296652U;
    msg.start_lat = 0.9210166585760937;
    msg.start_lon = 0.21771174931108295;
    msg.start_z = 0.6970228896229911;
    msg.start_z_units = 188U;
    msg.end_lat = 0.5211253568492903;
    msg.end_lon = 0.3441202855295755;
    msg.end_z = 0.965023438316357;
    msg.end_z_units = 38U;
    msg.speed = 0.31606430719258094;
    msg.speed_units = 12U;
    msg.lradius = 0.19106369836530368;
    msg.flags = 230U;

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
    msg.setTimeStamp(0.4811005555878677);
    msg.setSource(9813U);
    msg.setSourceEntity(145U);
    msg.setDestination(64155U);
    msg.setDestinationEntity(139U);
    msg.path_ref = 257265352U;
    msg.start_lat = 0.8816093271413147;
    msg.start_lon = 0.6541624665719631;
    msg.start_z = 0.5699729381620958;
    msg.start_z_units = 215U;
    msg.end_lat = 0.9439751071040443;
    msg.end_lon = 0.5643670701099451;
    msg.end_z = 0.4762422031409379;
    msg.end_z_units = 155U;
    msg.speed = 0.027310037792625752;
    msg.speed_units = 109U;
    msg.lradius = 0.6935577395854077;
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
    msg.setTimeStamp(0.24488144694644998);
    msg.setSource(7392U);
    msg.setSourceEntity(198U);
    msg.setDestination(12761U);
    msg.setDestinationEntity(198U);
    msg.path_ref = 2992282219U;
    msg.start_lat = 0.848126738310851;
    msg.start_lon = 0.42834416482575377;
    msg.start_z = 0.3064155794383041;
    msg.start_z_units = 127U;
    msg.end_lat = 0.9244996582309016;
    msg.end_lon = 0.39637465946431616;
    msg.end_z = 0.3894236193709514;
    msg.end_z_units = 189U;
    msg.speed = 0.1961313018201235;
    msg.speed_units = 36U;
    msg.lradius = 0.4722169147100532;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.828150608285119);
    msg.setSource(10370U);
    msg.setSourceEntity(133U);
    msg.setDestination(49311U);
    msg.setDestinationEntity(174U);
    msg.x = 0.3970906337598027;
    msg.y = 0.4152641431327395;
    msg.z = 0.05744641869088418;
    msg.k = 0.12353357540733656;
    msg.m = 0.04007215550199894;
    msg.n = 0.20315495059359467;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.161366722867067);
    msg.setSource(40605U);
    msg.setSourceEntity(233U);
    msg.setDestination(45853U);
    msg.setDestinationEntity(202U);
    msg.x = 0.31335090832745693;
    msg.y = 0.6097434292016282;
    msg.z = 0.4362244167265439;
    msg.k = 0.46328733087142704;
    msg.m = 0.5155979448600169;
    msg.n = 0.8458103276485879;
    msg.flags = 46U;

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
    msg.setTimeStamp(0.10111976224258001);
    msg.setSource(53864U);
    msg.setSourceEntity(54U);
    msg.setDestination(56237U);
    msg.setDestinationEntity(180U);
    msg.x = 0.509503300463293;
    msg.y = 0.22546813020541345;
    msg.z = 0.7404290007444041;
    msg.k = 0.4502968536968768;
    msg.m = 0.41116214126869577;
    msg.n = 0.009696286553924516;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.7680762950312751);
    msg.setSource(42186U);
    msg.setSourceEntity(139U);
    msg.setDestination(1370U);
    msg.setDestinationEntity(195U);
    msg.value = 0.38594135074897296;

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
    msg.setTimeStamp(0.7334639143295061);
    msg.setSource(26424U);
    msg.setSourceEntity(165U);
    msg.setDestination(32510U);
    msg.setDestinationEntity(150U);
    msg.value = 0.5018870255642639;

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
    msg.setTimeStamp(0.07940666211142267);
    msg.setSource(28433U);
    msg.setSourceEntity(215U);
    msg.setDestination(32270U);
    msg.setDestinationEntity(63U);
    msg.value = 0.1718617327277322;

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
    msg.setTimeStamp(0.3940137621000035);
    msg.setSource(43138U);
    msg.setSourceEntity(214U);
    msg.setDestination(65517U);
    msg.setDestinationEntity(119U);
    msg.u = 0.5641387456780815;
    msg.v = 0.3239876275128528;
    msg.w = 0.8428294551177851;
    msg.p = 0.8919822207698042;
    msg.q = 0.7390187357139215;
    msg.r = 0.05529764870304188;
    msg.flags = 78U;

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
    msg.setTimeStamp(0.1760327275338115);
    msg.setSource(39548U);
    msg.setSourceEntity(198U);
    msg.setDestination(14835U);
    msg.setDestinationEntity(5U);
    msg.u = 0.9721956595539517;
    msg.v = 0.26890079150721247;
    msg.w = 0.32090555991706093;
    msg.p = 0.02127439852612545;
    msg.q = 0.5188569157045038;
    msg.r = 0.7528025215443549;
    msg.flags = 124U;

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
    msg.setTimeStamp(0.5567784985585632);
    msg.setSource(28705U);
    msg.setSourceEntity(58U);
    msg.setDestination(18463U);
    msg.setDestinationEntity(111U);
    msg.u = 0.2671083747308839;
    msg.v = 0.11925706348612186;
    msg.w = 0.983598148344698;
    msg.p = 0.7363987632728836;
    msg.q = 0.5624762438747881;
    msg.r = 0.37472828113324896;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.2655589639578033);
    msg.setSource(44091U);
    msg.setSourceEntity(75U);
    msg.setDestination(43161U);
    msg.setDestinationEntity(100U);
    msg.path_ref = 859181860U;
    msg.start_lat = 0.02661052094848415;
    msg.start_lon = 0.6705131864713337;
    msg.start_z = 0.1770086248211148;
    msg.start_z_units = 175U;
    msg.end_lat = 0.7204368987692001;
    msg.end_lon = 0.3605699908413681;
    msg.end_z = 0.6326613909927857;
    msg.end_z_units = 232U;
    msg.lradius = 0.16635131350663168;
    msg.flags = 200U;
    msg.x = 0.19094097199527038;
    msg.y = 0.7910004717734456;
    msg.z = 0.435461924568162;
    msg.vx = 0.7388228805991623;
    msg.vy = 0.5930336283443979;
    msg.vz = 0.2614679940783339;
    msg.course_error = 0.09212423889719945;
    msg.eta = 63682U;

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
    msg.setTimeStamp(0.1243738331407147);
    msg.setSource(54270U);
    msg.setSourceEntity(77U);
    msg.setDestination(50078U);
    msg.setDestinationEntity(102U);
    msg.path_ref = 2823700609U;
    msg.start_lat = 0.4126508756406131;
    msg.start_lon = 0.4419045683630308;
    msg.start_z = 0.3864777036867312;
    msg.start_z_units = 128U;
    msg.end_lat = 0.4687253704794718;
    msg.end_lon = 0.8912185631386184;
    msg.end_z = 0.3485539631194522;
    msg.end_z_units = 36U;
    msg.lradius = 0.30513625737590244;
    msg.flags = 140U;
    msg.x = 0.9313607161071562;
    msg.y = 0.40747933185110474;
    msg.z = 0.814087537847749;
    msg.vx = 0.9259448068400885;
    msg.vy = 0.4667087130581996;
    msg.vz = 0.5595830139361112;
    msg.course_error = 0.09289068370989284;
    msg.eta = 7610U;

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
    msg.setTimeStamp(0.5658805050972949);
    msg.setSource(32020U);
    msg.setSourceEntity(212U);
    msg.setDestination(59636U);
    msg.setDestinationEntity(162U);
    msg.path_ref = 2530506877U;
    msg.start_lat = 0.809665888135992;
    msg.start_lon = 0.7506699188208195;
    msg.start_z = 0.07213875695088212;
    msg.start_z_units = 48U;
    msg.end_lat = 0.7095147007658081;
    msg.end_lon = 0.4750701173021735;
    msg.end_z = 0.18081543854223503;
    msg.end_z_units = 234U;
    msg.lradius = 0.4296245473615029;
    msg.flags = 38U;
    msg.x = 0.32611985004982746;
    msg.y = 0.6166554915573614;
    msg.z = 0.24847121023468388;
    msg.vx = 0.8149514866922057;
    msg.vy = 0.6256830019518036;
    msg.vz = 0.18961326257171096;
    msg.course_error = 0.1084638760258585;
    msg.eta = 49653U;

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
    msg.setTimeStamp(0.6142097479185327);
    msg.setSource(36122U);
    msg.setSourceEntity(31U);
    msg.setDestination(7087U);
    msg.setDestinationEntity(9U);
    msg.k = 0.41044842926781044;
    msg.m = 0.5011748007806799;
    msg.n = 0.8387992689704425;

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
    msg.setTimeStamp(0.6949116144209954);
    msg.setSource(6838U);
    msg.setSourceEntity(67U);
    msg.setDestination(31296U);
    msg.setDestinationEntity(196U);
    msg.k = 0.3661688589287073;
    msg.m = 0.7458895855169817;
    msg.n = 0.11092711467377148;

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
    msg.setTimeStamp(0.23698101167522267);
    msg.setSource(25310U);
    msg.setSourceEntity(76U);
    msg.setDestination(54674U);
    msg.setDestinationEntity(97U);
    msg.k = 0.34105709888580427;
    msg.m = 0.605327168788382;
    msg.n = 0.9644583176935159;

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
    msg.setTimeStamp(0.27370528154841745);
    msg.setSource(20754U);
    msg.setSourceEntity(126U);
    msg.setDestination(22795U);
    msg.setDestinationEntity(229U);
    msg.p = 0.8463480278048585;
    msg.i = 0.3559609290422199;
    msg.d = 0.6212434781555198;
    msg.a = 0.37936696780536383;

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
    msg.setTimeStamp(0.04547566033473671);
    msg.setSource(37718U);
    msg.setSourceEntity(200U);
    msg.setDestination(10949U);
    msg.setDestinationEntity(250U);
    msg.p = 0.7521368054274865;
    msg.i = 0.5016822975815008;
    msg.d = 0.1397599788721937;
    msg.a = 0.07053609765841018;

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
    msg.setTimeStamp(0.22047881547050807);
    msg.setSource(27659U);
    msg.setSourceEntity(48U);
    msg.setDestination(24677U);
    msg.setDestinationEntity(126U);
    msg.p = 0.7045941742270637;
    msg.i = 0.20107484208465742;
    msg.d = 0.9969947253925232;
    msg.a = 0.8568565750338314;

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
    msg.setTimeStamp(0.1623376224266745);
    msg.setSource(24042U);
    msg.setSourceEntity(23U);
    msg.setDestination(40445U);
    msg.setDestinationEntity(3U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.8183406436077769);
    msg.setSource(15283U);
    msg.setSourceEntity(149U);
    msg.setDestination(28345U);
    msg.setDestinationEntity(223U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.10863521618640104);
    msg.setSource(44585U);
    msg.setSourceEntity(254U);
    msg.setDestination(33726U);
    msg.setDestinationEntity(14U);
    msg.op = 167U;

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
    msg.setTimeStamp(0.6837165108427694);
    msg.setSource(30645U);
    msg.setSourceEntity(30U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(150U);
    msg.x = 0.5627140324353548;
    msg.y = 0.3224948232219762;
    msg.z = 0.4234854184808481;
    msg.vx = 0.10388454709384631;
    msg.vy = 0.2915049833087725;
    msg.vz = 0.788991103261065;
    msg.ax = 0.4561071090237212;
    msg.ay = 0.2996449979130057;
    msg.az = 0.5650408433764799;
    msg.flags = 23712U;

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
    msg.setTimeStamp(0.03690823275668498);
    msg.setSource(23014U);
    msg.setSourceEntity(93U);
    msg.setDestination(39290U);
    msg.setDestinationEntity(62U);
    msg.x = 0.9755511322980821;
    msg.y = 0.4659216265187033;
    msg.z = 0.2624312671805986;
    msg.vx = 0.6821584497126132;
    msg.vy = 0.04420490694148338;
    msg.vz = 0.6894678950398385;
    msg.ax = 0.8277008186490051;
    msg.ay = 0.10091955682017462;
    msg.az = 0.6114301480834604;
    msg.flags = 14494U;

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
    msg.setTimeStamp(0.30716649940470286);
    msg.setSource(32596U);
    msg.setSourceEntity(38U);
    msg.setDestination(7957U);
    msg.setDestinationEntity(38U);
    msg.x = 0.8694320414390868;
    msg.y = 0.01189708926263533;
    msg.z = 0.42072371618256277;
    msg.vx = 0.7863119580953114;
    msg.vy = 0.028739055281377435;
    msg.vz = 0.9423196960753419;
    msg.ax = 0.9102812370522361;
    msg.ay = 0.4967884404438958;
    msg.az = 0.43007666438230097;
    msg.flags = 38036U;

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
    msg.setTimeStamp(0.6321213025597316);
    msg.setSource(6487U);
    msg.setSourceEntity(251U);
    msg.setDestination(11187U);
    msg.setDestinationEntity(125U);
    msg.value = 0.11966858487931431;

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
    msg.setTimeStamp(0.9796079910273078);
    msg.setSource(16055U);
    msg.setSourceEntity(62U);
    msg.setDestination(26938U);
    msg.setDestinationEntity(56U);
    msg.value = 0.3519609418478059;

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
    msg.setTimeStamp(0.5174813388794784);
    msg.setSource(52910U);
    msg.setSourceEntity(146U);
    msg.setDestination(40217U);
    msg.setDestinationEntity(103U);
    msg.value = 0.7077829719187434;

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
    msg.setTimeStamp(0.016315845625243797);
    msg.setSource(39713U);
    msg.setSourceEntity(30U);
    msg.setDestination(5185U);
    msg.setDestinationEntity(189U);
    msg.timeout = 5699U;
    msg.lat = 0.31767238685108967;
    msg.lon = 0.19408528123980484;
    msg.z = 0.2676078036885199;
    msg.z_units = 224U;
    msg.speed = 0.7736154441879597;
    msg.speed_units = 50U;
    msg.roll = 0.9271913832336618;
    msg.pitch = 0.9057279675709404;
    msg.yaw = 0.10008093054783229;
    msg.custom.assign("XBPCTKYUMFJSNOMLBECXLMTWMOHLHQELUFXFWGHAZBKBMROLVAAKHHRSFIFCCKZPFREODOQZIIZRXWADUUTPNGUJJGIYUXYWJXZSVZABORDWWQCGYMHNWJGQFKKEPVKDCHMXRVAJIDKLTTUNRTEVHXHFNIXLECETAEOJPBBYGISOLVGCCSGQIQFFQTMAYNUPTMGLYSORVSRTDBVGHPZVXBQZDPBUOIPKSADNUJLDWARSJZEJWEYVQNPIYMZQD");

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
    msg.setTimeStamp(0.600101015388334);
    msg.setSource(49748U);
    msg.setSourceEntity(182U);
    msg.setDestination(47966U);
    msg.setDestinationEntity(142U);
    msg.timeout = 28240U;
    msg.lat = 0.40143255634224095;
    msg.lon = 0.8129342619292355;
    msg.z = 0.43583887059374893;
    msg.z_units = 215U;
    msg.speed = 0.3780456584566477;
    msg.speed_units = 172U;
    msg.roll = 0.5352209701457508;
    msg.pitch = 0.4679751162908755;
    msg.yaw = 0.8069857042441393;
    msg.custom.assign("JUVYAPEJKITVERMZYFUILEIHKYMMRDGEIZTMSAPBIDWNCSFBJWLGYNNLFOJDIHCNVFBQHADARUVZQHSHVCKEFGXSXTBVOBYTEDSYMLTTGERECQYPWXWSHQCAHQICMMUYLJQJKUILIOGOYOCFDQBQGZNOKCOZTTCSZWFBGNNBWTGMSFSZIUAZLAEKAUVXRJRMQKXKBPMJDSFPJLXXXLNKPWOVTOHWWHKZVXXUVPERBRJW");

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
    msg.setTimeStamp(0.3977038189482748);
    msg.setSource(30843U);
    msg.setSourceEntity(12U);
    msg.setDestination(11410U);
    msg.setDestinationEntity(52U);
    msg.timeout = 21489U;
    msg.lat = 0.4640934618892427;
    msg.lon = 0.6297767296205842;
    msg.z = 0.8714126610280758;
    msg.z_units = 251U;
    msg.speed = 0.4894184682335204;
    msg.speed_units = 242U;
    msg.roll = 0.40544570556950565;
    msg.pitch = 0.9237138920302578;
    msg.yaw = 0.9291401414283469;
    msg.custom.assign("JDCIYKLDETPJBGFSEKOGNVDITNRPBYNVFXHJMXFAQAHZQNROYHPWHCIPXYMXSTSVZRVCSESFQDGMLEUBXYTMSSXCYLDZKQPGCZKMSGRZ");

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
    msg.setTimeStamp(0.6575081805650111);
    msg.setSource(62809U);
    msg.setSourceEntity(222U);
    msg.setDestination(27018U);
    msg.setDestinationEntity(240U);
    msg.timeout = 19709U;
    msg.lat = 0.2742727923106971;
    msg.lon = 0.9093107352230435;
    msg.z = 0.479487080907426;
    msg.z_units = 123U;
    msg.speed = 0.2684492188368729;
    msg.speed_units = 239U;
    msg.duration = 27485U;
    msg.radius = 0.9340351619167359;
    msg.flags = 133U;
    msg.custom.assign("OXJRKZCENWCGGGNAMQCYNROVMKVAJZDNJTSHRFQEUWNSCFRAYLTLGKZO");

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
    msg.setTimeStamp(0.8524353826697251);
    msg.setSource(2437U);
    msg.setSourceEntity(193U);
    msg.setDestination(55318U);
    msg.setDestinationEntity(86U);
    msg.timeout = 35551U;
    msg.lat = 0.8992572338930869;
    msg.lon = 0.1486041745694735;
    msg.z = 0.23630356277527453;
    msg.z_units = 246U;
    msg.speed = 0.3482297018681042;
    msg.speed_units = 203U;
    msg.duration = 1361U;
    msg.radius = 0.7053668423643358;
    msg.flags = 79U;
    msg.custom.assign("RIRRHXTYDKZQPRRHLCFYBLGWGOROEJWWNBKEVESHIQKKLHUFZKUZJSISNKWGJCTGECZTYZOHICDFGMJLIQBXOSINBUCTCLMAXNGPOAUAIBMFOETGGHQYTABWQFJPQDWOSWUAXEQAMXIVEEFSTLAVEUNBVKPDYSSMPVVFHPMRBYAYFPOJFKMCDXMULYQOJXZRAUTYPHCUDVWKNMZCTJBIORZYRGWHUDNSADZNTKWPHSGVXQXB");

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
    msg.setTimeStamp(0.7755612011425195);
    msg.setSource(25912U);
    msg.setSourceEntity(63U);
    msg.setDestination(37243U);
    msg.setDestinationEntity(243U);
    msg.timeout = 14286U;
    msg.lat = 0.6027663862624999;
    msg.lon = 0.2668590366032486;
    msg.z = 0.2637927743223131;
    msg.z_units = 83U;
    msg.speed = 0.698750519735197;
    msg.speed_units = 47U;
    msg.duration = 42399U;
    msg.radius = 0.42308739050312094;
    msg.flags = 47U;
    msg.custom.assign("SITUHJCMJJFVITNBEHNRYGVCMTQUCDQECFZTRJGKXVNRPICWEVXQSAPZELXFADYEBLASTYQXYKHRMHMZSUNZWXFFGTVQMLWONWCOXJROUERNOVANIENZGGZGHPLMLJFUMISPTBCHBJKMFEZPGEWPPZVNVBVPBCHUXJSCOABLBXQIOLA");

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
    msg.setTimeStamp(0.1321271514315807);
    msg.setSource(23955U);
    msg.setSourceEntity(71U);
    msg.setDestination(61881U);
    msg.setDestinationEntity(84U);
    msg.custom.assign("FZPWXDKZABDPVEALLKQVSURCNKXPAOXKLPGLYDUDVYHHIZUIHQATWTMIFCUXQKWDQMCOKNTPAMADQETFINEEJYRGRIYNEXMJGFZHMKHPWWJXZFFOTBNVZQWWRGSIQFBVHJSQCUYZAZRWUNASJWGJSIMJIURVBXF");

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
    msg.setTimeStamp(0.7121622167775985);
    msg.setSource(58037U);
    msg.setSourceEntity(43U);
    msg.setDestination(2438U);
    msg.setDestinationEntity(176U);
    msg.custom.assign("VHJRCRYKNIHDIOGPILJANMGNWCZRWXAVLTWHNRXEJMQQQLWLODOHBAWVQOGURCKYWUGOCGYIYARZRHKLNOAQFFAZTFFTSHHYTNESYKMREKDNUYXIKUEJELXMJHQNSBPVUDFXBKSRGVPXNOQWQYSZKWRFBTJXWZATCZDVLIUJBHESIQBUFEFDVXXZPNXTIZITFBAAKZODDJMCYLJGICYWDKGHBESSAVMLJFDGV");

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
    msg.setTimeStamp(0.7293364383876522);
    msg.setSource(415U);
    msg.setSourceEntity(128U);
    msg.setDestination(53850U);
    msg.setDestinationEntity(173U);
    msg.custom.assign("FIOWCVYIJPBYMHWNGNPDDZLDSTSEERCMIVSUYVCEGXTELOIRBJVYGZQRSNYNRAEIAOQSQOQTBWPZQADOIMNZUSVTPXROLXKHHODMCUKIJPJXLQBFYGMVMGAKZERUZANRVDSGSYHRHFJKBTCTOBTZQYJYJZWGUKFKKFOEMVFFLGEKMDPUUXEZWHPVWHLBNXACMFSGQBXWHBPCHLQKXIWRHPIAZJNJILSLWWANKQUDXUEJBDGVATCPURAXMCOTYC");

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
    msg.setTimeStamp(0.2621342003663192);
    msg.setSource(865U);
    msg.setSourceEntity(165U);
    msg.setDestination(40095U);
    msg.setDestinationEntity(87U);
    msg.timeout = 51179U;
    msg.lat = 0.832427134198977;
    msg.lon = 0.015644223170903193;
    msg.z = 0.6325491193234212;
    msg.z_units = 246U;
    msg.duration = 32969U;
    msg.speed = 0.5375159627322619;
    msg.speed_units = 127U;
    msg.type = 155U;
    msg.radius = 0.5052674221449001;
    msg.length = 0.45540976985362425;
    msg.bearing = 0.9627398270247142;
    msg.direction = 79U;
    msg.custom.assign("JWCZWVWDMIAUFBEMINDRKPEQO");

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
    msg.setTimeStamp(0.34217437456705113);
    msg.setSource(18312U);
    msg.setSourceEntity(66U);
    msg.setDestination(19089U);
    msg.setDestinationEntity(9U);
    msg.timeout = 25900U;
    msg.lat = 0.6046138862096223;
    msg.lon = 0.48042299476494177;
    msg.z = 0.37499012431711576;
    msg.z_units = 20U;
    msg.duration = 43513U;
    msg.speed = 0.7526052303989622;
    msg.speed_units = 93U;
    msg.type = 179U;
    msg.radius = 0.7421432498608228;
    msg.length = 0.7369749427226006;
    msg.bearing = 0.009971629686898797;
    msg.direction = 233U;
    msg.custom.assign("GDWSRDQWWNQQBWKICUOLLIQWPTFTBEPXVMHSIDFYXEPNGRAZZZOFUYSNWVKROVIZXUJAHTQJTLIDPQQMCTDTHKSJIRCDBFNEYANKVSPVOLMZELCACLUVJPBBJHZGKFQEEPBEDPCAHQZTMXCKIUKVCFYRDBEIBYSAGLVNUHZUVGRWOXZDYMGCAFGLPASGFGTVHYKWMYP");

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
    msg.setTimeStamp(0.9324584726246249);
    msg.setSource(19065U);
    msg.setSourceEntity(89U);
    msg.setDestination(5043U);
    msg.setDestinationEntity(251U);
    msg.timeout = 64418U;
    msg.lat = 0.990330838123104;
    msg.lon = 0.9839664616898174;
    msg.z = 0.8575377496945141;
    msg.z_units = 86U;
    msg.duration = 45916U;
    msg.speed = 0.3354643151554836;
    msg.speed_units = 254U;
    msg.type = 100U;
    msg.radius = 0.6552036944154259;
    msg.length = 0.38780012416257414;
    msg.bearing = 0.29436337258195644;
    msg.direction = 146U;
    msg.custom.assign("TRMZYZCNHKDBKKDJFGBYMGLWKLBCHGMXLYZFARKAYVYRSBVOIJOLSMGJSGXQBJDLOFUSYFPEIPERHQXQSTLJHBPHYCPUNQMKATDIANIXBUSNVMZJJWMLAIQOTETNEVTIMHHQORXPXOHWLVQVCFWREPZWOSWFGIKNGZNNJZAXWYVNGKUIAFABQPYGGFCOJXXLTPERBADDRXATUSEMT");

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
    msg.setTimeStamp(0.6649460922837798);
    msg.setSource(42707U);
    msg.setSourceEntity(81U);
    msg.setDestination(32229U);
    msg.setDestinationEntity(145U);
    msg.duration = 37052U;
    msg.custom.assign("MHYUILDXLNYADTSZRJQLDUGXZJKLWZPGOGNGFNMMSWZISTJGVXMCPEBQMDWXUMMKDLWOIARQBQHZRRHVOQHPBBTOFSLODFUVEBWWJCLTKAAXNLAVEJHLQRSMZQRJTRBYBAMIJYVDONICEQRUEYIJTGFIQHBWYYOCGSPYSTFHFVDYCNTHZEXBGWRRUXWMUK");

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
    msg.setTimeStamp(0.5892344792388032);
    msg.setSource(6784U);
    msg.setSourceEntity(130U);
    msg.setDestination(7631U);
    msg.setDestinationEntity(17U);
    msg.duration = 4787U;
    msg.custom.assign("WGSYADOMLIBRSCBFSTVOLXZEJTCPIOODJCRHUMVTWIEPSBNRUZBIDAPSBEYIAG");

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
    msg.setTimeStamp(0.36885009945798963);
    msg.setSource(28724U);
    msg.setSourceEntity(128U);
    msg.setDestination(48883U);
    msg.setDestinationEntity(221U);
    msg.duration = 63625U;
    msg.custom.assign("GBNBTRXQAQVBQKOOQHHWWJDILTBHGPAFEZAZSETFWTXNOQDAHNGCPTZPCVTFMJNJURVYOUAWZVIRUBUYGJMYYVPLCQEZFPWITSAMYDJMPRXDWNRSIMXCEQFDSLQDHMWXFBPVWMRKCKOWXZSGXLLFZSFUFRVOHJSECBOATNLISOEPZLUZAYINPVJTGCXURUQLGGGVJBKXZFXKHTKKM");

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
    msg.setTimeStamp(0.602536874510859);
    msg.setSource(42448U);
    msg.setSourceEntity(30U);
    msg.setDestination(18517U);
    msg.setDestinationEntity(39U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6378470374027452;
    msg.control.set(tmp_msg_0);
    msg.duration = 41070U;
    msg.custom.assign("UPLZUWBAZDYYQPZMHOUDPSFOUXLNKSZHVPLIRIKOMMOMHMRWAQUDOOIKQBYSHUZKAKXSVWKONVTXNIICQTYIEIWAWMGEWQXKRDJDTHVANSLZCOGEGCYVSEIMVJJCMHATKJWLFEFXCZRJLZPXZZFTPBVNFAQNGTT");

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
    msg.setTimeStamp(0.16934789193610522);
    msg.setSource(54611U);
    msg.setSourceEntity(228U);
    msg.setDestination(38235U);
    msg.setDestinationEntity(113U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.41491134542827557;
    msg.control.set(tmp_msg_0);
    msg.duration = 58454U;
    msg.custom.assign("WPYQVGLGLBQTNSMEGQSTXCUIYNMLSYWDZGTZYCZTJANOXBVJJCMSKVILWVGAIHEHQDXUBWAOKBZEGIWGKJVIUQNFUDREPEPJDVFNHCGKMGDQZAWSBBLTSHXYCTHFSIRHDRCUAREULMOZUOVNPIQMAOSDOCFZKIYKHUCMRROPMTBYMVHPADTJKDQQSEBFXZDRQKNFPVXRLOMCXVTLYEJFAK");

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
    msg.setTimeStamp(0.3462460035345951);
    msg.setSource(64946U);
    msg.setSourceEntity(156U);
    msg.setDestination(11223U);
    msg.setDestinationEntity(113U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.5209805952243683;
    msg.control.set(tmp_msg_0);
    msg.duration = 3161U;
    msg.custom.assign("OGARWGYIIOUPQEWKVBOMMVURZVKNDOPBOTRABLYSRHBCINNJVPZFREOWCUHHHWXHRJBONYWXBJSUMAFUHFKAAZTSCPGYUBYZUFRPQGXDTLSMCCJGEFYZQNTLXXXTQKNIVRWPEDXMATXKTSSGJTYQCZEBIRESHDSVHFXZHJSLGLWCADMKUPEVDKQSQIFIOLPJVNXPIEKCBGCWRCFDYMWKDPTZQGZGBLLMYUJOJAIHMALYFZQTNEDDNIVAMWKEQO");

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
    msg.setTimeStamp(0.9865851337650626);
    msg.setSource(24134U);
    msg.setSourceEntity(116U);
    msg.setDestination(7905U);
    msg.setDestinationEntity(3U);
    msg.timeout = 30981U;
    msg.lat = 0.11219888755387808;
    msg.lon = 0.13649130179112667;
    msg.z = 0.7487684696201088;
    msg.z_units = 26U;
    msg.speed = 0.9657455959495386;
    msg.speed_units = 61U;
    msg.bearing = 0.018812141280046824;
    msg.cross_angle = 0.7112668809983163;
    msg.width = 0.8624442154194706;
    msg.length = 0.764415392182131;
    msg.hstep = 0.7503999617421916;
    msg.coff = 8U;
    msg.alternation = 51U;
    msg.flags = 254U;
    msg.custom.assign("NCEQLRDMPUCDFVQTKQNMUBUPBLRJJHTGJICGQYFBAGOCAMDUEIQRKNVDCTVLQBVZLXCMOHXPZPJQNZCRAMJMFGLYZJEURTWOTWSSPRCNKPFNSOLKHTABSNHNXJJGQEIGIPYZBWEREAYWWTXIWAZHFO");

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
    msg.setTimeStamp(0.1525245804280828);
    msg.setSource(12730U);
    msg.setSourceEntity(28U);
    msg.setDestination(11945U);
    msg.setDestinationEntity(99U);
    msg.timeout = 56913U;
    msg.lat = 0.2076526962469858;
    msg.lon = 0.29942763018148166;
    msg.z = 0.26856732659069393;
    msg.z_units = 125U;
    msg.speed = 0.13351187739402837;
    msg.speed_units = 34U;
    msg.bearing = 0.9620589292624253;
    msg.cross_angle = 0.8032939432436038;
    msg.width = 0.034999456382811656;
    msg.length = 0.001229008576926427;
    msg.hstep = 0.3772681929447511;
    msg.coff = 188U;
    msg.alternation = 102U;
    msg.flags = 200U;
    msg.custom.assign("VOJZFEYJVRYXDWTQBTSLOOFRPZVUTXNCBHCUEDOAFCMWAEFWUJNEAGBBJJ");

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
    msg.setTimeStamp(0.15161039039686075);
    msg.setSource(14020U);
    msg.setSourceEntity(50U);
    msg.setDestination(38232U);
    msg.setDestinationEntity(52U);
    msg.timeout = 44014U;
    msg.lat = 0.5538554700835795;
    msg.lon = 0.35764212154048725;
    msg.z = 0.27223252083633065;
    msg.z_units = 250U;
    msg.speed = 0.6601406570223571;
    msg.speed_units = 185U;
    msg.bearing = 0.32466523604459674;
    msg.cross_angle = 0.1367565694229651;
    msg.width = 0.7682367076662729;
    msg.length = 0.9736724866798769;
    msg.hstep = 0.45642429273284835;
    msg.coff = 114U;
    msg.alternation = 198U;
    msg.flags = 107U;
    msg.custom.assign("VIGZNJNDJBXJTXB");

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
    msg.setTimeStamp(0.5447059401747991);
    msg.setSource(53048U);
    msg.setSourceEntity(238U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(221U);
    msg.timeout = 9131U;
    msg.lat = 0.4708659213803702;
    msg.lon = 0.7699015225413556;
    msg.z = 0.8849012252371238;
    msg.z_units = 178U;
    msg.speed = 0.5521148384407693;
    msg.speed_units = 176U;
    msg.custom.assign("CQJKBVASGGAPSOVKRNZDRULIAJEUTRBTHHGAPWQDXCJMAJIUVODQWMWLCFNXELDGMPOGHBPLVPOECOFBNXLJUXZTDQSFOCCDMNIRMINJJCYEFLFLAKXPIMOUGSQVSZQHXTXPTVNTLBMWDBBPQUYUSVSZSBTYZWQZMZNHWPLDOEYHKJKRDVBYXORSUJYGXZGCGMVSWCZRPYKRONEJDENUHWTRFIYIZLAYFYEKBIXCTAAGWQFKNEKIMHWT");

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
    msg.setTimeStamp(0.5934927529434647);
    msg.setSource(4871U);
    msg.setSourceEntity(4U);
    msg.setDestination(9077U);
    msg.setDestinationEntity(222U);
    msg.timeout = 22401U;
    msg.lat = 0.5414170481684227;
    msg.lon = 0.6371952220762883;
    msg.z = 0.5264204988135535;
    msg.z_units = 253U;
    msg.speed = 0.6326567736281317;
    msg.speed_units = 157U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.013669587672621941;
    tmp_msg_0.y = 0.33310318443934506;
    tmp_msg_0.z = 0.6613928272061753;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BCHUMZGTBQGSFGNSCNOKCGECMSUVURTHFIJFQWENEEXOASUVBHZKEBPNMAHXFVRZMVLGRXUZVFAVDOHDYDAEWUBAVMNNKLXHRDSMQNIGWNMSFSQYYKJXPLAIBYPMCXGKBIELMJHWPQITWHIJXBVTZTKEPMXGHOJJBLOCZNRYU");

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
    msg.setTimeStamp(0.9072697513994425);
    msg.setSource(49168U);
    msg.setSourceEntity(134U);
    msg.setDestination(52170U);
    msg.setDestinationEntity(250U);
    msg.timeout = 7953U;
    msg.lat = 0.6920435246471521;
    msg.lon = 0.7624740609091171;
    msg.z = 0.7735107796398718;
    msg.z_units = 15U;
    msg.speed = 0.06124305667315166;
    msg.speed_units = 89U;
    msg.custom.assign("UQCJEKDVXPGDRPIBFQMXPMSPFESIUCNZWGW");

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
    msg.setTimeStamp(0.4937622915459451);
    msg.setSource(1549U);
    msg.setSourceEntity(238U);
    msg.setDestination(59775U);
    msg.setDestinationEntity(246U);
    msg.x = 0.7621141047069605;
    msg.y = 0.11799273589870762;
    msg.z = 0.33026671183475853;

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
    msg.setTimeStamp(0.1512441357281069);
    msg.setSource(18730U);
    msg.setSourceEntity(48U);
    msg.setDestination(40694U);
    msg.setDestinationEntity(169U);
    msg.x = 0.8870930467897356;
    msg.y = 0.6196522859111618;
    msg.z = 0.4162243409742288;

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
    msg.setTimeStamp(0.4548245301259719);
    msg.setSource(53036U);
    msg.setSourceEntity(135U);
    msg.setDestination(31262U);
    msg.setDestinationEntity(118U);
    msg.x = 0.6014333403018164;
    msg.y = 0.08499489732600018;
    msg.z = 0.1274987010731573;

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
    msg.setTimeStamp(0.7185878397243733);
    msg.setSource(48201U);
    msg.setSourceEntity(249U);
    msg.setDestination(8973U);
    msg.setDestinationEntity(133U);
    msg.timeout = 64638U;
    msg.lat = 0.4435360857224637;
    msg.lon = 0.43351163030007767;
    msg.z = 0.49774699214015206;
    msg.z_units = 47U;
    msg.amplitude = 0.4168615572270645;
    msg.pitch = 0.020683882379145202;
    msg.speed = 0.12763369950622594;
    msg.speed_units = 245U;
    msg.custom.assign("OWLRFNZJPCDNZOVQKKYGOWAHVCXZUXXFIEONUZLCGHGQBAEPINGWBKSIJZXLSFRVUSKOBHQTDGRGWEBAIZVDWBKBWMRNWVKTDLMZRXCROKISUPYAQAYLEFQZLUALVPTPVRJUIQACHSDYPCVEIMGAKEYGPQJXG");

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
    msg.setTimeStamp(0.7083513618573208);
    msg.setSource(26635U);
    msg.setSourceEntity(204U);
    msg.setDestination(9299U);
    msg.setDestinationEntity(232U);
    msg.timeout = 1766U;
    msg.lat = 0.8058949560891892;
    msg.lon = 0.004188189142439569;
    msg.z = 0.8715574565459874;
    msg.z_units = 53U;
    msg.amplitude = 0.6629453683677302;
    msg.pitch = 0.7251719670464989;
    msg.speed = 0.4507066947187387;
    msg.speed_units = 19U;
    msg.custom.assign("ZNISYQSVQWVUVWEPACWXLEGZLBPJBOTYXLWJFGESRCFQIRONBRDCHSEMSBZJDQNYRTXSVFTANVEKFBBAZGLFQEFMQAPCUFTPWYOHAIPAPXCZJTRNMHHUPXZLFCCYDKUAXQZVWNVGYWQRROVIJIDDLMHFFRWSJDKEIEHSOZUGJTKUUJPMMKCSCPKMJMAHMBDBENOOVGPYNHXTGTLYULHKGKRQOXINSXKWUDTOGWCYIRHIOQGLBNMD");

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
    msg.setTimeStamp(0.2047136105307512);
    msg.setSource(54652U);
    msg.setSourceEntity(162U);
    msg.setDestination(2627U);
    msg.setDestinationEntity(49U);
    msg.timeout = 33045U;
    msg.lat = 0.01973672276402061;
    msg.lon = 0.17639878609330972;
    msg.z = 0.9610758920452068;
    msg.z_units = 207U;
    msg.amplitude = 0.8002260326685481;
    msg.pitch = 0.10561835550023457;
    msg.speed = 0.04935481241285067;
    msg.speed_units = 17U;
    msg.custom.assign("MJUCIYADCQJVJRKAKPNSOZDNATWOWRXMNYSQKQCCBFVGGGANEQXETPZVMXFTYHXDDLUSLTUIRYQCFRRCLSUKLVMSXPEVLYHTZYIPLYUU");

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
    msg.setTimeStamp(0.007386497956005766);
    msg.setSource(21811U);
    msg.setSourceEntity(81U);
    msg.setDestination(19634U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.5918735891803275);
    msg.setSource(7978U);
    msg.setSourceEntity(67U);
    msg.setDestination(3620U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.7572102456622417);
    msg.setSource(65457U);
    msg.setSourceEntity(214U);
    msg.setDestination(22125U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.7566032348902816);
    msg.setSource(43961U);
    msg.setSourceEntity(32U);
    msg.setDestination(62448U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.0776367215781898;
    msg.lon = 0.6179368301095663;
    msg.z = 0.21577313224071293;
    msg.z_units = 251U;
    msg.radius = 0.22127789220960836;
    msg.duration = 17976U;
    msg.speed = 0.553965970054917;
    msg.speed_units = 18U;
    msg.custom.assign("YQZWWCTORITYMOZKTCFXUIDDOIGMHRQFMOKGPFWRJZIZNSJGYQBSFHVALIKEHFNYLCYMSVODXEUMBXOGUWZAXKYHNBPUQOULOPGTYWFCGSFAOVGZRHAAULMZEPQERBBKXQILTKVPGARVWTNDABQLTECXSXCKIWJJXNEBWNFPHLJUXTDLBPYINVSTCWDSVQOAVCDMSMGRZHUMECFDKDWHJNVPJRJAKQSYCLJBMIUHIS");

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
    msg.setTimeStamp(0.10618296882208822);
    msg.setSource(52676U);
    msg.setSourceEntity(201U);
    msg.setDestination(46974U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.5885670391467105;
    msg.lon = 0.6410920837120369;
    msg.z = 0.8933560269588507;
    msg.z_units = 192U;
    msg.radius = 0.9400888582055056;
    msg.duration = 52118U;
    msg.speed = 0.35887819374533536;
    msg.speed_units = 200U;
    msg.custom.assign("SYFMUUSOCDKPJYKITAEBYZTQBUHXMNEZIVVVSCPQMUCYGZXBLODNEJEZFCTVTKSBUHLNDJTFYOYSYWNMSTTMRMFCMAJMZTYSBRWIHNLROXPIIPNPZJKVLJEXABFKXQNDWXCKEGWELGOBWRXILAIVOQABKGRZWSHUJKQTKMXGSGATAVBOZDQZNFXODFCJYUGLLHDEORILVPNPFBPJSEIWDWXCFHUOEHCAQRRRRAWAYDHUHQZMLJG");

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
    msg.setTimeStamp(0.14772494892421728);
    msg.setSource(22899U);
    msg.setSourceEntity(163U);
    msg.setDestination(33313U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.27553843630246133;
    msg.lon = 0.3064008243361487;
    msg.z = 0.8121785106731856;
    msg.z_units = 100U;
    msg.radius = 0.10472107526277652;
    msg.duration = 24009U;
    msg.speed = 0.7259880868434431;
    msg.speed_units = 100U;
    msg.custom.assign("JZAPHKLZDYGQTUNMBTLWDZJPXDVPGYLQCUEEMBICNBTNGFLQSMKIAEOLVOZPGUZWIGCDZOVVSHGHSGLUZRHDODTQYFYLOMHYXPPJXJBXULCIUXJFMKKWBIIUBASVNWAWCQEXROSJRIYKYYZXERQWBSFTTPYHACBHPFEVCDRQGUWYFVTSDFBTNLJECDOMHCRWEXSMNKQWSIKRRUNJVOQDNJHRVJGLBCXEQUNFKVKAIPAON");

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
    msg.setTimeStamp(0.6542255700628528);
    msg.setSource(4127U);
    msg.setSourceEntity(10U);
    msg.setDestination(26733U);
    msg.setDestinationEntity(232U);
    msg.timeout = 14901U;
    msg.flags = 4U;
    msg.lat = 0.9117882666068136;
    msg.lon = 0.4055667757830711;
    msg.start_z = 0.9487112552619357;
    msg.start_z_units = 120U;
    msg.end_z = 0.6799533434824204;
    msg.end_z_units = 218U;
    msg.radius = 0.539221962405394;
    msg.speed = 0.9320520922345079;
    msg.speed_units = 24U;
    msg.custom.assign("ZWJGOHTFOLKWXIMTUONCQYFLFKOCUVKWGEPDSBBEBRYZGMJLPBDAWUPHSQABVUPZILFSNAJQODFNIAEHNUSCCDNZCQFDEDKPNDXIQFXCJIRYRKTYWTJRVCVK");

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
    msg.setTimeStamp(0.8841481702391293);
    msg.setSource(57135U);
    msg.setSourceEntity(141U);
    msg.setDestination(49665U);
    msg.setDestinationEntity(197U);
    msg.timeout = 25590U;
    msg.flags = 190U;
    msg.lat = 0.8122078013555681;
    msg.lon = 0.11614727781112599;
    msg.start_z = 0.17081621059796837;
    msg.start_z_units = 35U;
    msg.end_z = 0.48417065622817623;
    msg.end_z_units = 183U;
    msg.radius = 0.5415672956449319;
    msg.speed = 0.30546585746786725;
    msg.speed_units = 75U;
    msg.custom.assign("QGMULRWPIOWQVAEBBNNDPMDZNHOVFXEHRIGSBCPWOXKVFIOGGEBMELTLOFCJMGBNOCAYJLCDILPTYGHY");

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
    msg.setTimeStamp(0.23633169507492957);
    msg.setSource(61517U);
    msg.setSourceEntity(143U);
    msg.setDestination(31236U);
    msg.setDestinationEntity(144U);
    msg.timeout = 64172U;
    msg.flags = 248U;
    msg.lat = 0.004252907248793347;
    msg.lon = 0.9751864781302068;
    msg.start_z = 0.5032437541100031;
    msg.start_z_units = 201U;
    msg.end_z = 0.5591109754146588;
    msg.end_z_units = 216U;
    msg.radius = 0.7971078381306945;
    msg.speed = 0.9268829057752307;
    msg.speed_units = 178U;
    msg.custom.assign("GYTNJVFGLSJOCPXLXFMMNQTNKCBFRITBTMHWOJEROCKLUMLNQHKSIEGWHQKFIXHHBEZKPUZDXEPIKPOBTMYRXIVWKZTFJEUNVMQJPGCCFBEPRHHDKUWNAODZOYLJWREILVKWRCWEIYOLDTXUBDXNUJSVGAGSQDAQQCSVWINTOJGYUZBXAAYYJJPWCFMCLERVEVIODZAKTAMUBHAIAGRLPMPAGXSNF");

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
    msg.setTimeStamp(0.7260876198322068);
    msg.setSource(57467U);
    msg.setSourceEntity(179U);
    msg.setDestination(40701U);
    msg.setDestinationEntity(119U);
    msg.timeout = 21992U;
    msg.lat = 0.12748934160930936;
    msg.lon = 0.5491673774698654;
    msg.z = 0.21084363273802698;
    msg.z_units = 222U;
    msg.speed = 0.4181979406538874;
    msg.speed_units = 100U;
    msg.custom.assign("NJGVPDSRXHNXCXZQLZRUNFHTQFJDDTNRVRIPFCTLAEBZVKUXHBVABGRXASREXEZUHGKWPYHOBDSXMQV");

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
    msg.setTimeStamp(0.5929384297880501);
    msg.setSource(10935U);
    msg.setSourceEntity(121U);
    msg.setDestination(62614U);
    msg.setDestinationEntity(146U);
    msg.timeout = 314U;
    msg.lat = 0.013414524414349205;
    msg.lon = 0.6389369704053286;
    msg.z = 0.3027901782708302;
    msg.z_units = 66U;
    msg.speed = 0.3229870950384247;
    msg.speed_units = 171U;
    msg.custom.assign("SCSJDXGBKLMRYCHHDNGNOPIWEUMFCLNNVDGKNQWYUCPRUMKMRJEZJNEYKOWYXHARUWYLYKIZSNNEXAFPJFYBZQDHLTUVSEJEVDRWAABDSPYFWXBDGAOXPSCHTKMAFOXCEWKTVPJHUTVQHWIDIPGWZBLVPIXPTNGXFSTO");

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
    msg.setTimeStamp(0.31683935570950306);
    msg.setSource(9339U);
    msg.setSourceEntity(93U);
    msg.setDestination(5718U);
    msg.setDestinationEntity(190U);
    msg.timeout = 55013U;
    msg.lat = 0.45214555366700304;
    msg.lon = 0.6163163920492223;
    msg.z = 0.4094563642804038;
    msg.z_units = 239U;
    msg.speed = 0.3084389432669453;
    msg.speed_units = 55U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6237200023860956;
    tmp_msg_0.y = 0.019005026869965413;
    tmp_msg_0.z = 0.792445430114099;
    tmp_msg_0.t = 0.12055830166510795;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CMTXHYBKUPNJIWOOFUDJFCNWJE");

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
    msg.setTimeStamp(0.06210938771917485);
    msg.setSource(48948U);
    msg.setSourceEntity(141U);
    msg.setDestination(12576U);
    msg.setDestinationEntity(60U);
    msg.x = 0.05701346778921612;
    msg.y = 0.18819891183806725;
    msg.z = 0.3104792300687108;
    msg.t = 0.0958598113842769;

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
    msg.setTimeStamp(0.3804526621909421);
    msg.setSource(43483U);
    msg.setSourceEntity(167U);
    msg.setDestination(17787U);
    msg.setDestinationEntity(215U);
    msg.x = 0.3431690273208208;
    msg.y = 0.9531612376071985;
    msg.z = 0.31860050833698605;
    msg.t = 0.49077597813672;

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
    msg.setTimeStamp(0.8788858683839563);
    msg.setSource(47966U);
    msg.setSourceEntity(211U);
    msg.setDestination(44053U);
    msg.setDestinationEntity(60U);
    msg.x = 0.06577142164142824;
    msg.y = 0.2541480775381525;
    msg.z = 0.4493583743712448;
    msg.t = 0.15058282314229798;

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
    msg.setTimeStamp(0.9250939870407925);
    msg.setSource(41169U);
    msg.setSourceEntity(164U);
    msg.setDestination(59009U);
    msg.setDestinationEntity(254U);
    msg.timeout = 19308U;
    msg.name.assign("TWGADHPZBRMFQGDDGYUPWRJKHWSIVVWMFRTLAIBLZBJEWFENYABUOSRRVVHMWFUXOLSNKEZKTGMEZDIHQEMVWXMKCSDBECXRTTOCALAYYAMKQOQCFFKFTRHHEPABDILAWNUUUJLYNHVDPFPQOOCGSAUYXLVZFJHCJWXMZEPKSAJSVDONJBGCMMUHLNILXSDXBO");
    msg.custom.assign("SZACUQHAELBLKESZTJVRZQWOFWTKMVPWUMCPYLQLIHKKAJPNBPCYISFRHXIUKUOQTFUVIYMXITAEVZJSVGEZBBNMWFJNDCWUMEASAGCQGGSESWNIHVDDIBTZFCAYJCYXIJJLVXGKELTJDMCERYOXWUMQZAEXQPWOIMAPNMNDLUHVTPJXVRDSNDFQHEOLFYAHVUPQKGZSHGRP");

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
    msg.setTimeStamp(0.28200591241933526);
    msg.setSource(33939U);
    msg.setSourceEntity(157U);
    msg.setDestination(20813U);
    msg.setDestinationEntity(94U);
    msg.timeout = 50451U;
    msg.name.assign("UEDIXMYYSDZXVQAFYPWCGBNPKPEZVOIB");
    msg.custom.assign("INDFNLPTEJDDTQWDZVAJZLKXMYHGOZANYVXBGWGGYTOBUFAAMWISQSFZLWVJIURPWWBNBUMYGBMEBRXLNDARGQCSVKORCCFLOKXZXHFFEVBKALHAILSWEXRHQRMMKTZAPEPYUFDTRZSJISNCWNOWTSJIUSQXEGICIPTAJVSSVMRBQLEHIBVUKYAPOKUDMXERMUOLBZHQUXOHFYJYTVTDKQGYIPUCNEDPFJLNVCR");

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
    msg.setTimeStamp(0.6702989589605253);
    msg.setSource(11140U);
    msg.setSourceEntity(20U);
    msg.setDestination(9136U);
    msg.setDestinationEntity(10U);
    msg.timeout = 8867U;
    msg.name.assign("YBZDPOMCGKQLQWOTIGOACTKVAC");
    msg.custom.assign("RJKRHUGVFLBBYINPPHYRFXENRHJOZMIBYWVDSITVCCQYANOJQHVKTFFALZPKSRYEUCGKLLRVBREGROUZUPSYQDETFAOTPJBOUSQEMXIBGWRVCFMWZDQDAHYRXHTCDXJJTKZZCPJCJTCXNZNWENGTPPO");

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
    msg.setTimeStamp(0.7435537042933904);
    msg.setSource(37958U);
    msg.setSourceEntity(139U);
    msg.setDestination(47442U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.4544801178891704;
    msg.lon = 0.20370746572466947;
    msg.z = 0.04779065575424957;
    msg.z_units = 164U;
    msg.speed = 0.4537015029450332;
    msg.speed_units = 167U;
    msg.start_time = 0.4443076202051235;
    msg.custom.assign("LHFSYRMUUDBIHXQXVFUVXOTFPLZISIGNWTGXDFEAUYFSSWBFGZQBLCHXLX");

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
    msg.setTimeStamp(0.1024401002655112);
    msg.setSource(57896U);
    msg.setSourceEntity(183U);
    msg.setDestination(26879U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.7160949537938396;
    msg.lon = 0.4338237409897774;
    msg.z = 0.385240841359587;
    msg.z_units = 72U;
    msg.speed = 0.8448137100577182;
    msg.speed_units = 125U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8870721416763692;
    tmp_msg_0.y = 0.3236034748361605;
    tmp_msg_0.z = 0.6621679951774257;
    tmp_msg_0.t = 0.024788297340712306;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 22722U;
    tmp_msg_1.off_x = 0.6419533468637333;
    tmp_msg_1.off_y = 0.12641781091009718;
    tmp_msg_1.off_z = 0.13376969562748664;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.9440062071848923;
    msg.custom.assign("RNCCOTWTZXLGZVONNWBNHUGAUVDLWZYFKXGEUYXALJHBORRVHAJLMSUFKPQGCLFTIFYTNPYGZIMXZQEIBHTIMZYOFOMKDEEBLTBJ");

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
    msg.setTimeStamp(0.6817384521981877);
    msg.setSource(51999U);
    msg.setSourceEntity(22U);
    msg.setDestination(40589U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.8545128243966891;
    msg.lon = 0.34110966597996484;
    msg.z = 0.359797664371696;
    msg.z_units = 157U;
    msg.speed = 0.08230328711045387;
    msg.speed_units = 207U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8787723023408772;
    tmp_msg_0.y = 0.5133509133484607;
    tmp_msg_0.z = 0.6005035162121021;
    tmp_msg_0.t = 0.3306540653187555;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 26027U;
    tmp_msg_1.off_x = 0.31274067961342156;
    tmp_msg_1.off_y = 0.3108022917958464;
    tmp_msg_1.off_z = 0.8808436782082181;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.2578482899705896;
    msg.custom.assign("IFFCYZUICVYCGCRREJUQMGSGTUPVAWVBQRFBQKIYPXESBLUMBANDXCOKUUSOAIXNZFUDTLPGKACFETIHFHYHZMMVRDWIAVOOUQJRTMHDTLVESPEWUGBMDMIKFYXSIDWIODDMJJSH");

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
    msg.setTimeStamp(0.25657308023702297);
    msg.setSource(20295U);
    msg.setSourceEntity(83U);
    msg.setDestination(43907U);
    msg.setDestinationEntity(104U);
    msg.vid = 1861U;
    msg.off_x = 0.7595979013767225;
    msg.off_y = 0.8459642791428856;
    msg.off_z = 0.6519289640629629;

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
    msg.setTimeStamp(0.943865350168827);
    msg.setSource(28309U);
    msg.setSourceEntity(175U);
    msg.setDestination(52028U);
    msg.setDestinationEntity(90U);
    msg.vid = 3369U;
    msg.off_x = 0.8848967500373915;
    msg.off_y = 0.9847013926804433;
    msg.off_z = 0.7866844239313674;

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
    msg.setTimeStamp(0.26667369112801087);
    msg.setSource(8699U);
    msg.setSourceEntity(232U);
    msg.setDestination(44958U);
    msg.setDestinationEntity(40U);
    msg.vid = 13718U;
    msg.off_x = 0.5002771848759383;
    msg.off_y = 0.71076625154859;
    msg.off_z = 0.13707472921851427;

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
    msg.setTimeStamp(0.31026420961409384);
    msg.setSource(2540U);
    msg.setSourceEntity(12U);
    msg.setDestination(64567U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.6383580904426307);
    msg.setSource(18646U);
    msg.setSourceEntity(232U);
    msg.setDestination(39453U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.6725040556707157);
    msg.setSource(47185U);
    msg.setSourceEntity(80U);
    msg.setDestination(10173U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.47338596270753985);
    msg.setSource(21230U);
    msg.setSourceEntity(150U);
    msg.setDestination(7867U);
    msg.setDestinationEntity(15U);
    msg.mid = 51768U;

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
    msg.setTimeStamp(0.9594078590037822);
    msg.setSource(62797U);
    msg.setSourceEntity(223U);
    msg.setDestination(30356U);
    msg.setDestinationEntity(72U);
    msg.mid = 37163U;

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
    msg.setTimeStamp(0.7356649497384884);
    msg.setSource(20937U);
    msg.setSourceEntity(23U);
    msg.setDestination(63477U);
    msg.setDestinationEntity(123U);
    msg.mid = 25376U;

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
    msg.setTimeStamp(0.813948668440263);
    msg.setSource(27388U);
    msg.setSourceEntity(208U);
    msg.setDestination(52028U);
    msg.setDestinationEntity(48U);
    msg.state = 182U;
    msg.eta = 38830U;
    msg.info.assign("EHVAJEKUCGGKHMPGUXGUXEDKEVESZQBEDICPINKLFOGAY");

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
    msg.setTimeStamp(0.7072232387856459);
    msg.setSource(8208U);
    msg.setSourceEntity(181U);
    msg.setDestination(6044U);
    msg.setDestinationEntity(152U);
    msg.state = 155U;
    msg.eta = 28446U;
    msg.info.assign("CPTTPYSGWVCHMMFMYFFESWZHDKUGSHJGVPPBRAUSYDQSBTKIVCNSXAHMDEIGVBDRUZUQPXM");

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
    msg.setTimeStamp(0.974510304168092);
    msg.setSource(53553U);
    msg.setSourceEntity(248U);
    msg.setDestination(36668U);
    msg.setDestinationEntity(115U);
    msg.state = 13U;
    msg.eta = 48360U;
    msg.info.assign("OFSPPICJIPUWDMFPQXTERIQGSMXQATNYYJKBFWWBLFNMIGNFGZVLMOCLLOHSVJMBWCIVGGKKXTTHJLIGTYZRWJXGXNUBWEAHQRPJSGWHNVFMWSJPLVRINGDGXLE");

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
    msg.setTimeStamp(0.3280616877611968);
    msg.setSource(2494U);
    msg.setSourceEntity(185U);
    msg.setDestination(11312U);
    msg.setDestinationEntity(250U);
    msg.system = 39650U;
    msg.duration = 13572U;
    msg.speed = 0.03391732399396041;
    msg.speed_units = 16U;
    msg.x = 0.44409388789365;
    msg.y = 0.8677167992383255;
    msg.z = 0.053796734756347275;
    msg.z_units = 222U;

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
    msg.setTimeStamp(0.5166536302559798);
    msg.setSource(45177U);
    msg.setSourceEntity(112U);
    msg.setDestination(54862U);
    msg.setDestinationEntity(83U);
    msg.system = 57647U;
    msg.duration = 24019U;
    msg.speed = 0.9081059415703293;
    msg.speed_units = 19U;
    msg.x = 0.2665932296216068;
    msg.y = 0.3093646835155035;
    msg.z = 0.9080346858137147;
    msg.z_units = 219U;

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
    msg.setTimeStamp(0.30456289372982326);
    msg.setSource(30964U);
    msg.setSourceEntity(108U);
    msg.setDestination(9449U);
    msg.setDestinationEntity(24U);
    msg.system = 51693U;
    msg.duration = 31314U;
    msg.speed = 0.9698070855228534;
    msg.speed_units = 243U;
    msg.x = 0.45609378978923865;
    msg.y = 0.2997771398814205;
    msg.z = 0.7889214902352719;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.37912407386525593);
    msg.setSource(63491U);
    msg.setSourceEntity(182U);
    msg.setDestination(61948U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.42644382557233385;
    msg.lon = 0.5137827710843877;
    msg.speed = 0.29074097295477597;
    msg.speed_units = 125U;
    msg.duration = 37953U;
    msg.sys_a = 5458U;
    msg.sys_b = 10051U;
    msg.move_threshold = 0.642155001246014;

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
    msg.setTimeStamp(0.3259811357205481);
    msg.setSource(49444U);
    msg.setSourceEntity(23U);
    msg.setDestination(18619U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.09255625644882637;
    msg.lon = 0.6619496824786885;
    msg.speed = 0.8901901189450261;
    msg.speed_units = 201U;
    msg.duration = 285U;
    msg.sys_a = 23713U;
    msg.sys_b = 40611U;
    msg.move_threshold = 0.27857308513254375;

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
    msg.setTimeStamp(0.2926918297818215);
    msg.setSource(12204U);
    msg.setSourceEntity(167U);
    msg.setDestination(26910U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.4429381483506356;
    msg.lon = 0.5284543716607573;
    msg.speed = 0.9552222217914377;
    msg.speed_units = 49U;
    msg.duration = 25682U;
    msg.sys_a = 59580U;
    msg.sys_b = 50789U;
    msg.move_threshold = 0.051067129328401406;

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
    msg.setTimeStamp(0.4409926928959865);
    msg.setSource(48323U);
    msg.setSourceEntity(152U);
    msg.setDestination(20491U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.8097578359118827;
    msg.lon = 0.5294834788495039;
    msg.z = 0.44191152337759976;
    msg.z_units = 78U;
    msg.speed = 0.5663416115394181;
    msg.speed_units = 210U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.862745473521254;
    tmp_msg_0.lon = 0.21509905295361975;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PBOLWPQPHBJYAXVYMEMPUDMFTDUSJN");

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
    msg.setTimeStamp(0.9000594657302855);
    msg.setSource(14404U);
    msg.setSourceEntity(156U);
    msg.setDestination(37043U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.28921502852402003;
    msg.lon = 0.7555178426422096;
    msg.z = 0.8556407406739541;
    msg.z_units = 52U;
    msg.speed = 0.7396566112438808;
    msg.speed_units = 80U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.27730635457486497;
    tmp_msg_0.lon = 0.3887853937602236;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GLXDUMACXCSZKYOFOXLFHZPOUYGLEAYSWDZGLMKXXTKGEIVGIEONLUPITQLNKGPKNQFESGUIOXHSJRSAJBLHXGCRDDSQIZRHMJYACQJWVWHFRDBPJAFYEUPSIZCQHQPOJHKMWMGQWLVXBXTENAWWDX");

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
    msg.setTimeStamp(0.527254299944925);
    msg.setSource(41137U);
    msg.setSourceEntity(149U);
    msg.setDestination(22563U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.3954501646026236;
    msg.lon = 0.31617029576894595;
    msg.z = 0.4171402229782012;
    msg.z_units = 140U;
    msg.speed = 0.5058126419424817;
    msg.speed_units = 113U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.03622044946748204;
    tmp_msg_0.lon = 0.07623664257995066;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TUUQIZFQBEHFAOEASLWRGENTXNKPBEVWQEITMGWJGGZABHWGORYWZOVYCFBLROKZFUWXPDATRCJCNXLCJMFWODZQKNVVVTHBXDQXJUTEPHMNBIRFTIJ");

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
    msg.setTimeStamp(0.8025194212349965);
    msg.setSource(21467U);
    msg.setSourceEntity(92U);
    msg.setDestination(43434U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.28517906460365205;
    msg.lon = 0.5356845930379105;

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
    msg.setTimeStamp(0.24047080973936263);
    msg.setSource(49445U);
    msg.setSourceEntity(201U);
    msg.setDestination(53949U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.6639389272594355;
    msg.lon = 0.625116942080907;

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
    msg.setTimeStamp(0.1405321574274393);
    msg.setSource(57684U);
    msg.setSourceEntity(65U);
    msg.setDestination(57391U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.818387831989503;
    msg.lon = 0.1604059976817569;

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
    msg.setTimeStamp(0.752996044132477);
    msg.setSource(18969U);
    msg.setSourceEntity(91U);
    msg.setDestination(56744U);
    msg.setDestinationEntity(101U);
    msg.timeout = 22396U;
    msg.lat = 0.7231408839589241;
    msg.lon = 0.4975267548424409;
    msg.z = 0.019681965912721977;
    msg.z_units = 121U;
    msg.pitch = 0.7863066240206874;
    msg.amplitude = 0.2680862233812712;
    msg.duration = 5684U;
    msg.speed = 0.8773722447929111;
    msg.speed_units = 151U;
    msg.radius = 0.7210904846656908;
    msg.direction = 182U;
    msg.custom.assign("XLBSBAWAZAKMNKCXMQQKIQ");

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
    msg.setTimeStamp(0.4310315603170396);
    msg.setSource(32701U);
    msg.setSourceEntity(127U);
    msg.setDestination(39298U);
    msg.setDestinationEntity(72U);
    msg.timeout = 18917U;
    msg.lat = 0.9389224823799457;
    msg.lon = 0.9146715972312732;
    msg.z = 0.5961519559331673;
    msg.z_units = 200U;
    msg.pitch = 0.9367202489767972;
    msg.amplitude = 0.01938365728175695;
    msg.duration = 5868U;
    msg.speed = 0.02169556970702946;
    msg.speed_units = 138U;
    msg.radius = 0.7492611769474905;
    msg.direction = 160U;
    msg.custom.assign("FYYFRULMXTVKJFQJKZKHCHBXAJMQONWPVMYMBLBOANDUKVANUT");

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
    msg.setTimeStamp(0.9267074288649989);
    msg.setSource(49285U);
    msg.setSourceEntity(229U);
    msg.setDestination(44576U);
    msg.setDestinationEntity(146U);
    msg.timeout = 22608U;
    msg.lat = 0.13842667395690833;
    msg.lon = 0.42201391215074413;
    msg.z = 0.61916435358538;
    msg.z_units = 245U;
    msg.pitch = 0.27544869616424184;
    msg.amplitude = 0.5466417215117214;
    msg.duration = 51919U;
    msg.speed = 0.3270656409598589;
    msg.speed_units = 112U;
    msg.radius = 0.09143463062989854;
    msg.direction = 70U;
    msg.custom.assign("PXDEWZCWYISYEXQVSABHANGMTDESLHDVKDSOHTWMHNXLFOBHJZHDNLCLIYWGFGRLBOPPAKJOTRSTRCTQQRCFMOQINLJUZLFBOBOHXVVNIDYIMUJJDRXSJUZWBPVQUXSVCTQGPIAFOKMMPNERIKVJFUPPLJGIANRRJSTCZQ");

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
    msg.setTimeStamp(0.6338010392777477);
    msg.setSource(32050U);
    msg.setSourceEntity(208U);
    msg.setDestination(39187U);
    msg.setDestinationEntity(238U);
    msg.formation_name.assign("PKPTQYFZNPQYDSQSNPNORHQTKGKLJYWOUXKLPMSBFBGFRLKSDTONJWJARLLAVYAHVDTUMJZVZNSFLFPWUBEMKDDYUIURHWIKDUWXGEPTJKBPJUIBZTYCFNBIIMMZOGHACVAAYQXEMFNYJEXVZATJAWULZZYDDSSEFRBDRGMRXXKGCITF");
    msg.reference_frame = 23U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7995U;
    tmp_msg_0.off_x = 0.00097686069897307;
    tmp_msg_0.off_y = 0.21464853995172206;
    tmp_msg_0.off_z = 0.06697476831373972;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("GHLDCCBODXWQANUWYNYMKYGWWORWIQEHFXCSKHEUVAZZPMTQEGUPTZDMIIXUVFLOFPIMOLOTZKTBQOEOHCBURVGXKBRTCZZAEILQGGJMOUFTCQGOIRNS");

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
    msg.setTimeStamp(0.6872951650625049);
    msg.setSource(12875U);
    msg.setSourceEntity(243U);
    msg.setDestination(59261U);
    msg.setDestinationEntity(179U);
    msg.formation_name.assign("IVNKAORQXHHCPXBFWWUIAGFEUORZTVDVEKIYZSROZONLMIOSYKILFDHQKCXHSYBIECJRMXQCSNIDQZKPFBGZTJLPQFSDBLEFT");
    msg.reference_frame = 25U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22472U;
    tmp_msg_0.off_x = 0.4649438194601694;
    tmp_msg_0.off_y = 0.21365263002221546;
    tmp_msg_0.off_z = 0.12846466168913417;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SCHYXZDXGAPBFJKIPUETDNCMAFMQKDFUXRLBPRKAIPGFFEWWVDVQWMGMGOHNKESJLCNOERWKILKHQCWRJITHSWJTOVYDZVZOKHUFPSIKMADNCPRPXMXMOZQMUAYFEVSELYZWRQJNTTREHLEUJNIAQVBUSCZITTTTZFCKVCOIQSWHXSTYDFJBPLXUWCQSWZGBB");

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
    msg.setTimeStamp(0.8386151257615269);
    msg.setSource(18053U);
    msg.setSourceEntity(85U);
    msg.setDestination(31164U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("OJHIZRJBZIFSQTUSXOPCCMDNSHVEBLTASNTWIOYEWQPCJLTULVHNCRHAYFUFOXGHMMJJEAUAJJRQYDGIBVERKGETTHXBMKOXAQNVFXPDNXBPERIUITNPOGVZKCKEYTMRWFRGCLHVQKQDSXPDSSTZOFIZMWMIYOLYDBWZKMMBXXGZTHIYSCBKDNGQKOHWBUSHCANWPG");
    msg.reference_frame = 232U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40729U;
    tmp_msg_0.off_x = 0.016150011484813986;
    tmp_msg_0.off_y = 0.35036434924662807;
    tmp_msg_0.off_z = 0.25305119518584107;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LFUSCZWWMOLQSXEMESYDQCHGFAQMHZUDXBOYDZPDFVKIBOYT");

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
    msg.setTimeStamp(0.15628436119447864);
    msg.setSource(25762U);
    msg.setSourceEntity(208U);
    msg.setDestination(41981U);
    msg.setDestinationEntity(151U);
    msg.group_name.assign("JAKFBLGVSZGPFVNTPGYAQKTKYZPTRVBPWVEUUVMRCOZIOAYMWCCWLSCWTKUEILTCVGGRXIBK");
    msg.formation_name.assign("NIEKDGDYDWDURSXQQFVHSHNONPEOQNPNUKZVRYDNOBQLAXXKHJOJWCZBACHFVFNEGFBMRILRSUCEGBWAPFDPXWTVWAMIUDOMSEKBJTHTICZXR");
    msg.plan_id.assign("DDLRQVQNXJAUKBPCPUTUFKXOSBMAWFRCVSOQMUZJSZNKWHODMQESDVOULTGAUTYDMBFJSWDKFYLCFJJQCKCTOIALBITGTYKZSJYHVAUORUFINWDPWGUWBINPKZNVMFPOCSQCWYZHNQJACZXBYNTEJNRLSXLEHALBMVFWEPVEYJTPRR");
    msg.description.assign("MJQWKVEFTOBUMCAXNFCDATGEBHNYDPSFOTQNQDFMS");
    msg.leader_speed = 0.7533843719470755;
    msg.leader_bank_lim = 0.8895568243446343;
    msg.pos_sim_err_lim = 0.7854737426429945;
    msg.pos_sim_err_wrn = 0.8023617213790215;
    msg.pos_sim_err_timeout = 24776U;
    msg.converg_max = 0.9374593342533798;
    msg.converg_timeout = 764U;
    msg.comms_timeout = 12660U;
    msg.turb_lim = 0.0711594907417682;
    msg.custom.assign("LMOPQXNCHRIEQTNXVCYJHLFIVMPSXDLNYDAHFAWWAZFXNIZTTLTYAWQNUVLHRRZSEUIPGNFFTUNOKANPQFUXCCWKATJVRHWGKQSLEZJGAWEJPTYGXVLBBRHITGPFZIKVSDOJOVSBSDVMCZRMUBMFBOIBBYYCGDABZCRDGMUIYDDEKKORAOCKZBFQUPLQXKDJZMBFHGLH");

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
    msg.setTimeStamp(0.788322903667894);
    msg.setSource(64519U);
    msg.setSourceEntity(139U);
    msg.setDestination(15976U);
    msg.setDestinationEntity(252U);
    msg.group_name.assign("HCVKWRXDNVNDFOYNXNZHMSBDQFRBXOEKVTCSLOOMVZTMDQYVWJGKITCBFDZXSNFYAJYVWUUORLPDLIXRMAGHVCHDGUPRSBBQBZXAUUHT");
    msg.formation_name.assign("AASXLJLUGFQCRTKNJCFGUOZQYTLYPWGIBODPJCODLNRXMVZEIMEVUNPBMKITSWIBYEGUVQPQNSDKUMOPBYVFFCPRAOYQEASBVLGTWZGXXOKITVNCOCTZHDZKHFKSIHMSPHQYMXCWWXVAGOYYRMKNNQJTRSPREEWMOFWRDNKFBHIUN");
    msg.plan_id.assign("DOSSVCUPJGHHGWARAIYIGLVZBEVEWFQATGOXAXKJVIPNBIOMZKTGCWBDFQZPZHGSDIMLKFFJBHO");
    msg.description.assign("AMRVPANHRJQOMWXVDSGDVEFWKLJQTEQXOBKPNWEBCPNKJDBSZDEFABOLGYILXEPHYYZQXEKMHHNHUFWRXRISTYLUIMGDAN");
    msg.leader_speed = 0.8733469599634271;
    msg.leader_bank_lim = 0.08246490871248091;
    msg.pos_sim_err_lim = 0.7839553004291125;
    msg.pos_sim_err_wrn = 0.8415603597415817;
    msg.pos_sim_err_timeout = 17405U;
    msg.converg_max = 0.4373335385022141;
    msg.converg_timeout = 63996U;
    msg.comms_timeout = 15122U;
    msg.turb_lim = 0.7901848739872825;
    msg.custom.assign("HGEDSPJYUFHARLZYXFZSNWNIKZESYHOJXIMXMLELPIEBVYSBYGLKRQZCMHWZSWOYCUUAGVVDFQHDNWYNPBUUBBAATPM");

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
    msg.setTimeStamp(0.6734816483468106);
    msg.setSource(39804U);
    msg.setSourceEntity(54U);
    msg.setDestination(34535U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("SBRUCITPHAYJNRBLDOTKSWYPWLYVERTEIGONORQTBMXCJTVCSYFUFOVQLOKYGRRCMQDYZTKJECWISKSBNVDIHTIMIZBAILCXPQQLGKPFNUFQGTLXDJOFRRQZIMQGNHMDUAZCJONTHESJWPKVJXPENBQKOALBGXOEJVUPFTONSVPVSXLUWCPDMWZVCCYWUZUJMAFY");
    msg.formation_name.assign("SSGSMFAGFWOOZPDJQXINXYGVNZLOODDDUNTBSTICPIUSALCEXREXKAQXQIMNPWTPHKZWDVFZHYPBEQPHYLBUJUQRHLBGMRKOVLDQIBLTEWWJFRKYRGFZXUJHMKHWZEKCBVFMOAOGFUZADVJDNEVCQVFIGMQERKIGRJQLGTUYQGPPTJISHXZCCSONYOXAFNKBZEMPSJBCCJVCNTEZ");
    msg.plan_id.assign("IJDMJLYXTRJAUJNAWAMKWIMIOKHISLBMZGNXCRKYABNRRFRIVWAVZWRIZVTUZOGBMEJHENTJDHXPKRXUOPLJBCUXZRSMNHYYIRCFKWTEMVMGKJDQKTYTZQCDSGWFUMVFKAGDVOCNPAZGAIOTBQSVXCYVDPQLSLQW");
    msg.description.assign("NAJVJRPYQQLMDRDPKZFBOMICNLTELMVMXBBPMJKYKODUZSGHMFXDAZTHEYFRACPMYSGKJIOIYHELSUHWWWYKBSGSEBSNEEXTNXWAFSBUDLCRKFGGFAKZNEOSTX");
    msg.leader_speed = 0.32528832301733135;
    msg.leader_bank_lim = 0.13554681328067908;
    msg.pos_sim_err_lim = 0.8708475875237564;
    msg.pos_sim_err_wrn = 0.32832345277487585;
    msg.pos_sim_err_timeout = 38847U;
    msg.converg_max = 0.021944125617256227;
    msg.converg_timeout = 14954U;
    msg.comms_timeout = 57240U;
    msg.turb_lim = 0.649746331624214;
    msg.custom.assign("ZPPKDBBOQRWECRMGMCISVSDDQEHUBVATCQNHAJWJOWAZVVZTWSLXXBJDEGHVBNOZYZDRLXCPIQVQPLZJHINMKMXY");

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
    msg.setTimeStamp(0.7767498676710595);
    msg.setSource(5009U);
    msg.setSourceEntity(66U);
    msg.setDestination(38671U);
    msg.setDestinationEntity(86U);
    msg.control_src = 34594U;
    msg.control_ent = 138U;
    msg.timeout = 0.0505634131636471;
    msg.loiter_radius = 0.6004301900931657;
    msg.altitude_interval = 0.6564404231586332;

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
    msg.setTimeStamp(0.7717071483073407);
    msg.setSource(52250U);
    msg.setSourceEntity(163U);
    msg.setDestination(27626U);
    msg.setDestinationEntity(250U);
    msg.control_src = 53421U;
    msg.control_ent = 181U;
    msg.timeout = 0.6734293854841267;
    msg.loiter_radius = 0.7297995652913783;
    msg.altitude_interval = 0.5424496834608658;

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
    msg.setTimeStamp(0.893128768097533);
    msg.setSource(31276U);
    msg.setSourceEntity(30U);
    msg.setDestination(17328U);
    msg.setDestinationEntity(68U);
    msg.control_src = 6062U;
    msg.control_ent = 228U;
    msg.timeout = 0.500376073555036;
    msg.loiter_radius = 0.5525990385235142;
    msg.altitude_interval = 0.16622303007137684;

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
    msg.setTimeStamp(0.0870834870395989);
    msg.setSource(30319U);
    msg.setSourceEntity(22U);
    msg.setDestination(62485U);
    msg.setDestinationEntity(38U);
    msg.flags = 246U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4974301724196184;
    tmp_msg_0.speed_units = 37U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.39127000184143035;
    tmp_msg_1.z_units = 153U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.714917156115862;
    msg.lon = 0.36409117716413064;
    msg.radius = 0.2191550002860525;

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
    msg.setTimeStamp(0.6614072154793053);
    msg.setSource(37536U);
    msg.setSourceEntity(40U);
    msg.setDestination(52603U);
    msg.setDestinationEntity(215U);
    msg.flags = 14U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.057382875703056335;
    tmp_msg_0.speed_units = 138U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.23372683659612958;
    tmp_msg_1.z_units = 46U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.03613613742201616;
    msg.lon = 0.10169254375302794;
    msg.radius = 0.9483695746842642;

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
    msg.setTimeStamp(0.2552800042323481);
    msg.setSource(6773U);
    msg.setSourceEntity(19U);
    msg.setDestination(10543U);
    msg.setDestinationEntity(232U);
    msg.flags = 116U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7389593081023363;
    tmp_msg_0.speed_units = 127U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.05080587188410701;
    tmp_msg_1.z_units = 75U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7923105742787173;
    msg.lon = 0.012374271453425179;
    msg.radius = 0.743997242585428;

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
    msg.setTimeStamp(0.6832920571219814);
    msg.setSource(23741U);
    msg.setSourceEntity(25U);
    msg.setDestination(11798U);
    msg.setDestinationEntity(250U);
    msg.control_src = 33147U;
    msg.control_ent = 7U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 191U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6081782872640084;
    tmp_tmp_msg_0_0.speed_units = 194U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.14774956095493386;
    tmp_tmp_msg_0_1.z_units = 217U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4318585658388684;
    tmp_msg_0.lon = 0.7774618620775106;
    tmp_msg_0.radius = 0.659265883839882;
    msg.reference.set(tmp_msg_0);
    msg.state = 178U;
    msg.proximity = 254U;

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
    msg.setTimeStamp(0.8423587856407632);
    msg.setSource(36337U);
    msg.setSourceEntity(41U);
    msg.setDestination(41527U);
    msg.setDestinationEntity(174U);
    msg.control_src = 23296U;
    msg.control_ent = 54U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 103U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.43128143732539603;
    tmp_tmp_msg_0_0.speed_units = 80U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.24069954214868805;
    tmp_tmp_msg_0_1.z_units = 6U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8252339483463735;
    tmp_msg_0.lon = 0.5514107555413639;
    tmp_msg_0.radius = 0.9527369028874136;
    msg.reference.set(tmp_msg_0);
    msg.state = 173U;
    msg.proximity = 162U;

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
    msg.setTimeStamp(0.5528359204865135);
    msg.setSource(56358U);
    msg.setSourceEntity(12U);
    msg.setDestination(54224U);
    msg.setDestinationEntity(136U);
    msg.control_src = 1574U;
    msg.control_ent = 133U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 144U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9585335964568078;
    tmp_tmp_msg_0_0.speed_units = 214U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.30770527363211575;
    tmp_tmp_msg_0_1.z_units = 167U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.12663986698675644;
    tmp_msg_0.lon = 0.8145477514182689;
    tmp_msg_0.radius = 0.006655442033775327;
    msg.reference.set(tmp_msg_0);
    msg.state = 214U;
    msg.proximity = 0U;

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
    msg.setTimeStamp(0.8495955313131076);
    msg.setSource(63964U);
    msg.setSourceEntity(180U);
    msg.setDestination(16762U);
    msg.setDestinationEntity(156U);
    msg.ax_cmd = 0.06290227366866463;
    msg.ay_cmd = 0.05246729796750571;
    msg.az_cmd = 0.4269969856980087;
    msg.ax_des = 0.0439743985408525;
    msg.ay_des = 0.8108902463326273;
    msg.az_des = 0.19289752975704466;
    msg.virt_err_x = 0.18641540584996896;
    msg.virt_err_y = 0.4798000431185596;
    msg.virt_err_z = 0.9902712929535318;
    msg.surf_fdbk_x = 0.8412628700309871;
    msg.surf_fdbk_y = 0.720556312952988;
    msg.surf_fdbk_z = 0.8151879859280808;
    msg.surf_unkn_x = 0.9856792974241588;
    msg.surf_unkn_y = 0.9935344676331572;
    msg.surf_unkn_z = 0.6836762649417201;
    msg.ss_x = 0.9501040739697643;
    msg.ss_y = 0.0025640544794932607;
    msg.ss_z = 0.3986533171173242;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZIPOURENCMICAGVWHGGCIZJQXAPFWOZOYMGSQPZILRLBIDTUFUJDPQJKIAOWLPRLJXJXDCUQZYKCGHWHYMZXNBZEFJMOMEBSLGKVXVABVVJEENSZFKYRBLQCJKSUNOMAWAHKUWKFRJTBOUNQMCFIXMXZWQAXTVLVFSFGBDPSHYVSAFWAMPXLCOHUPDNQEHSGGNY");
    tmp_msg_0.dist = 0.1175308706692132;
    tmp_msg_0.err = 0.6027032524942182;
    tmp_msg_0.ctrl_imp = 0.3846072624114032;
    tmp_msg_0.rel_dir_x = 0.3938933112626135;
    tmp_msg_0.rel_dir_y = 0.9672697161380824;
    tmp_msg_0.rel_dir_z = 0.5988915630091595;
    tmp_msg_0.err_x = 0.1957946663682416;
    tmp_msg_0.err_y = 0.45515299222641603;
    tmp_msg_0.err_z = 0.6387240097931974;
    tmp_msg_0.rf_err_x = 0.09675768245535799;
    tmp_msg_0.rf_err_y = 0.7542979361530702;
    tmp_msg_0.rf_err_z = 0.3702247017673572;
    tmp_msg_0.rf_err_vx = 0.9628795493906098;
    tmp_msg_0.rf_err_vy = 0.1382827391931617;
    tmp_msg_0.rf_err_vz = 0.8487757679483938;
    tmp_msg_0.ss_x = 0.9908225783274838;
    tmp_msg_0.ss_y = 0.49847605993518707;
    tmp_msg_0.ss_z = 0.4005717507094674;
    tmp_msg_0.virt_err_x = 0.6782297534970783;
    tmp_msg_0.virt_err_y = 0.08736691004333996;
    tmp_msg_0.virt_err_z = 0.7995821937515467;
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
    msg.setTimeStamp(0.868902876851806);
    msg.setSource(59187U);
    msg.setSourceEntity(53U);
    msg.setDestination(15973U);
    msg.setDestinationEntity(132U);
    msg.ax_cmd = 0.9173367698581787;
    msg.ay_cmd = 0.1298949169681134;
    msg.az_cmd = 0.8307347983020403;
    msg.ax_des = 0.3620995625797956;
    msg.ay_des = 0.35174851787205197;
    msg.az_des = 0.3190499678966763;
    msg.virt_err_x = 0.12856195039139762;
    msg.virt_err_y = 0.18936765252471177;
    msg.virt_err_z = 0.09982361625673208;
    msg.surf_fdbk_x = 0.8532194400964063;
    msg.surf_fdbk_y = 0.4571307009460952;
    msg.surf_fdbk_z = 0.33635818999907463;
    msg.surf_unkn_x = 0.9093204459729338;
    msg.surf_unkn_y = 0.45479911780746674;
    msg.surf_unkn_z = 0.4848014804989135;
    msg.ss_x = 0.44997672459660487;
    msg.ss_y = 0.17166302212476692;
    msg.ss_z = 0.1283228633643122;

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
    msg.setTimeStamp(0.16516227842452913);
    msg.setSource(32090U);
    msg.setSourceEntity(182U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(167U);
    msg.ax_cmd = 0.5911309045076554;
    msg.ay_cmd = 0.37940538710348914;
    msg.az_cmd = 0.5143708027576763;
    msg.ax_des = 0.7552783799663851;
    msg.ay_des = 0.41763028688049575;
    msg.az_des = 0.6911102791852523;
    msg.virt_err_x = 0.5513076006178935;
    msg.virt_err_y = 0.9485208110751041;
    msg.virt_err_z = 0.9736679782116958;
    msg.surf_fdbk_x = 0.9050184543820977;
    msg.surf_fdbk_y = 0.13896440659595388;
    msg.surf_fdbk_z = 0.6567480967849303;
    msg.surf_unkn_x = 0.018420983162095284;
    msg.surf_unkn_y = 0.4706490894519946;
    msg.surf_unkn_z = 0.709315296946381;
    msg.ss_x = 0.6565526285324493;
    msg.ss_y = 0.7360030964464384;
    msg.ss_z = 0.28517859644089605;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IOOLOMZHAKCYVELGHJQVOXEBZDRSZFUBMHNLEUDQXTCRYRWUAKQBINPGDGTVXPFFAFJHATLUNNIIL");
    tmp_msg_0.dist = 0.9478136157298015;
    tmp_msg_0.err = 0.5457583737398104;
    tmp_msg_0.ctrl_imp = 0.3099384445823268;
    tmp_msg_0.rel_dir_x = 0.7642822012849071;
    tmp_msg_0.rel_dir_y = 0.2852597268889703;
    tmp_msg_0.rel_dir_z = 0.4796878581440801;
    tmp_msg_0.err_x = 0.08950085750643255;
    tmp_msg_0.err_y = 0.03381288183518405;
    tmp_msg_0.err_z = 0.007516052041711574;
    tmp_msg_0.rf_err_x = 0.1009955881831689;
    tmp_msg_0.rf_err_y = 0.2866550889451702;
    tmp_msg_0.rf_err_z = 0.5208790109411674;
    tmp_msg_0.rf_err_vx = 0.5535006729931622;
    tmp_msg_0.rf_err_vy = 0.5461664389104761;
    tmp_msg_0.rf_err_vz = 0.7009836674641902;
    tmp_msg_0.ss_x = 0.6391827616518335;
    tmp_msg_0.ss_y = 0.820788821052257;
    tmp_msg_0.ss_z = 0.833253583662946;
    tmp_msg_0.virt_err_x = 0.4468418146694412;
    tmp_msg_0.virt_err_y = 0.1064810830120726;
    tmp_msg_0.virt_err_z = 0.6180684707937049;
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
    msg.setTimeStamp(0.5099608563948239);
    msg.setSource(7911U);
    msg.setSourceEntity(64U);
    msg.setDestination(36585U);
    msg.setDestinationEntity(128U);
    msg.s_id.assign("FEOLKUCAIPYQXQ");
    msg.dist = 0.7147472070490234;
    msg.err = 0.9733454800670243;
    msg.ctrl_imp = 0.3803504174405897;
    msg.rel_dir_x = 0.5763043138401746;
    msg.rel_dir_y = 0.01937791186086657;
    msg.rel_dir_z = 0.4641595743261949;
    msg.err_x = 0.5425290302109634;
    msg.err_y = 0.9531284746267048;
    msg.err_z = 0.39983250205095044;
    msg.rf_err_x = 0.5225368083851037;
    msg.rf_err_y = 0.9786601216003058;
    msg.rf_err_z = 0.4856638630609681;
    msg.rf_err_vx = 0.9208422531107654;
    msg.rf_err_vy = 0.10431211986029787;
    msg.rf_err_vz = 0.7278608931755208;
    msg.ss_x = 0.966855470481657;
    msg.ss_y = 0.8473488221173727;
    msg.ss_z = 0.3106476834973624;
    msg.virt_err_x = 0.09590236095642235;
    msg.virt_err_y = 0.2091158668543175;
    msg.virt_err_z = 0.3953908309465328;

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
    msg.setTimeStamp(0.5447097451820294);
    msg.setSource(2785U);
    msg.setSourceEntity(158U);
    msg.setDestination(39817U);
    msg.setDestinationEntity(227U);
    msg.s_id.assign("HTVWVLDBFTLMTXAWQJMKELGNKRQFFWYZKHOYRCBGVEGPBZKZJLJPPTOYOHQVHSTEAXSXEEQNOYLHPWPWSASCISBLFUZYWNWHAGBWOFTCZVRCAXORVTRIHMZUQDQCSRRNVNIDRZAUCBZBULYOKHXDIEOC");
    msg.dist = 0.030982757896249713;
    msg.err = 0.7528498838155007;
    msg.ctrl_imp = 0.6541018530863822;
    msg.rel_dir_x = 0.14211908763019632;
    msg.rel_dir_y = 0.6508186629049888;
    msg.rel_dir_z = 0.047719250876292474;
    msg.err_x = 0.5317041527982017;
    msg.err_y = 0.1728966994696688;
    msg.err_z = 0.9287674578454287;
    msg.rf_err_x = 0.45810707945239415;
    msg.rf_err_y = 0.568106182028413;
    msg.rf_err_z = 0.6243157639177597;
    msg.rf_err_vx = 0.07515357899138053;
    msg.rf_err_vy = 0.5124140547267738;
    msg.rf_err_vz = 0.8286492850737126;
    msg.ss_x = 0.8751321238238345;
    msg.ss_y = 0.12568125521925;
    msg.ss_z = 0.9640421083435419;
    msg.virt_err_x = 0.7713896300726458;
    msg.virt_err_y = 0.13150869851456015;
    msg.virt_err_z = 0.22305522359338203;

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
    msg.setTimeStamp(0.9741606979458768);
    msg.setSource(62811U);
    msg.setSourceEntity(17U);
    msg.setDestination(51234U);
    msg.setDestinationEntity(115U);
    msg.s_id.assign("QVNEMNWHTJBXCZOEINZT");
    msg.dist = 0.1900648624434712;
    msg.err = 0.6587731429472272;
    msg.ctrl_imp = 0.9081373556009833;
    msg.rel_dir_x = 0.2093088247332593;
    msg.rel_dir_y = 0.7531474044616814;
    msg.rel_dir_z = 0.11789885675430689;
    msg.err_x = 0.1621911464785606;
    msg.err_y = 0.6778235352203453;
    msg.err_z = 0.995043368224045;
    msg.rf_err_x = 0.6403430844747403;
    msg.rf_err_y = 0.48145481006326796;
    msg.rf_err_z = 0.09247480215481241;
    msg.rf_err_vx = 0.2609079854553007;
    msg.rf_err_vy = 0.8952989431276678;
    msg.rf_err_vz = 0.6491143058018779;
    msg.ss_x = 0.33070339260773995;
    msg.ss_y = 0.41317535613103906;
    msg.ss_z = 0.508438545720364;
    msg.virt_err_x = 0.8223715533993545;
    msg.virt_err_y = 0.303328575907449;
    msg.virt_err_z = 0.24657954803096238;

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
    msg.setTimeStamp(0.5574875434455075);
    msg.setSource(32409U);
    msg.setSourceEntity(150U);
    msg.setDestination(53999U);
    msg.setDestinationEntity(143U);
    msg.timeout = 57778U;
    msg.rpm = 0.574505919046352;
    msg.direction = 170U;
    msg.custom.assign("LOZJHUJOCFRUMWVANQZTMWJIRFENRXNEPVJGDYCCZOZTNRAJYLXMVHTXELNZPFYIPMLPQBIPCQGOPXDGSQWXEU");

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
    msg.setTimeStamp(0.5941126534259266);
    msg.setSource(15961U);
    msg.setSourceEntity(199U);
    msg.setDestination(63921U);
    msg.setDestinationEntity(166U);
    msg.timeout = 36160U;
    msg.rpm = 0.8906040027351506;
    msg.direction = 233U;
    msg.custom.assign("ZAIRKYNCCPAXZLWOHZKZLJFDUELHSSTKEXDUJYDZZERAYFVOTDKDQYFSTGDKMWBMEEWTGCZXEPFPLPHXAIXIIBVYNFCHCNSSIAXNPNZFQTTJWSHFIUHAVXNYKWUVX");

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
    msg.setTimeStamp(0.03179600885054834);
    msg.setSource(22665U);
    msg.setSourceEntity(204U);
    msg.setDestination(60015U);
    msg.setDestinationEntity(144U);
    msg.timeout = 47946U;
    msg.rpm = 0.10768621087368879;
    msg.direction = 133U;
    msg.custom.assign("YQRHXWDTXJGBULNYQFVERLLVMTFRKYMDIBQVARPCJFCZDZHQDOMJLEZKMIDEXASNYOYGVARKCESFWXYMBRUIOPFMDTPAALZBNYJBIUACHGLHBWWEDVNUDSZKFCYCIUPASHMUNJWXQWCYERRIUZEQWQQMUXNHVLTITSWEETJNFOCHUXJGTTTGAQRSPFLZBOGVZLOSKKFDZTLXGDBOUSPCMCOXIMXGHOJKISN");

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
    msg.setTimeStamp(0.026395246809257644);
    msg.setSource(28010U);
    msg.setSourceEntity(20U);
    msg.setDestination(8314U);
    msg.setDestinationEntity(47U);
    msg.formation_name.assign("FUPEYRGGHYAPAKGMKHSBNKCKYYCVSRODQBUNSAPDNJMEPRWZFIVSHWTCVXJXDILQVSEYYLCZJTGJQHIZMOMVFBCLAXXAZIRJJQGRBTBRYKUWCKNHGDPSPQKYOICTFAHWQSZDLMHHKVSUAADBSJDEPXWUUGXUQZWLILLMXBCEQDXHTJDFLGOMZEAUNJWIKGME");
    msg.type = 191U;
    msg.op = 42U;
    msg.group_name.assign("TXZCOUSSPFIBWHMCEGLFVVLFRFOFHDGYKYMYTWFAUKGQSSTNIRSVONNJETDBTMWRADKKMWWJKGNULTREUIVVSZBSJCLDMBMQPCVNPKTWN");
    msg.plan_id.assign("BKZLAVZVWXCCYFWVGKHHQCRSC");
    msg.description.assign("VMTHFYZPPKNZALJYCQBPEXGPTAOGARTBEYHMCXQIXTEHWKDVLSCLJGZXXRFLNWUHSAMHKINUWGKIORAWDBLHRNXSSEVEUKFJZEELSMLFA");
    msg.reference_frame = 78U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63015U;
    tmp_msg_0.off_x = 0.39898075634791175;
    tmp_msg_0.off_y = 0.8291140006964448;
    tmp_msg_0.off_z = 0.5468146884116878;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9946324483464578;
    msg.leader_speed_min = 0.018596331755456386;
    msg.leader_speed_max = 0.22770176209013127;
    msg.leader_alt_min = 0.9156687718528861;
    msg.leader_alt_max = 0.03349210895985166;
    msg.pos_sim_err_lim = 0.4415668670901044;
    msg.pos_sim_err_wrn = 0.1469320602553228;
    msg.pos_sim_err_timeout = 14227U;
    msg.converg_max = 0.50707411541757;
    msg.converg_timeout = 43823U;
    msg.comms_timeout = 1222U;
    msg.turb_lim = 0.10590882817373015;
    msg.custom.assign("QRIQLYHLBGAZ");

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
    msg.setTimeStamp(0.6482371121217425);
    msg.setSource(2163U);
    msg.setSourceEntity(212U);
    msg.setDestination(2369U);
    msg.setDestinationEntity(104U);
    msg.formation_name.assign("FTHRGNJNDXZQVQVKDQQFSIPJPPPAIMSIHBCCSXKPCG");
    msg.type = 67U;
    msg.op = 189U;
    msg.group_name.assign("ESFOXXDYPBWZKQPVRKIIZXIDBVLGNBIRMJZKMFFUTLPZXZBAANKNIROZMQPZWWTWLCFRPIFKOCDNIJSMWOQREJNWMKEJSOLEWAHSDYUXPOVBQBLIGHMDYRCQEIHYVTJMRQNPFLUWPDGLCIZVUFYCXTSOKHVCFQQAKTRUFBEUNHMQVMZJQKSTNWZGXJATDLYGTVSAOSKNAVYFDRUTMGTGNABUDGHAVECLJHPDXRL");
    msg.plan_id.assign("IMEHAIZCSMOHRIHDSXSNKYBRSSJLYCKRDAXTTHXYIMVNZDCOFBRAWFUPOPMGDJBPNJSVKAGLLIEVGOOGBTLFQTDJBKJRSTKXSWZOXUNUEXLTLFIHJDDMCYWSINKGZJQCIEUMFCAGEOSATLZRRXNUEHITGWGQQKPURBYFBUMOKVRJZYAFDZFNVHWYUQYBLWHJYXKTVQV");
    msg.description.assign("ADDVTXWUESZNOFBVYXELJPLWJJYGQFBFQGSKQVVKEBIGTDPWMAYAFNOZTPMZZGXXUHMBO");
    msg.reference_frame = 183U;
    msg.leader_bank_lim = 0.811636955628582;
    msg.leader_speed_min = 0.48767694783378956;
    msg.leader_speed_max = 0.12318644159511394;
    msg.leader_alt_min = 0.8547167421981846;
    msg.leader_alt_max = 0.46788325184199986;
    msg.pos_sim_err_lim = 0.46911155836699037;
    msg.pos_sim_err_wrn = 0.9700174967019749;
    msg.pos_sim_err_timeout = 44821U;
    msg.converg_max = 0.6164555841055259;
    msg.converg_timeout = 19741U;
    msg.comms_timeout = 6272U;
    msg.turb_lim = 0.24218535000626962;
    msg.custom.assign("QCXITYFUNSXWLKGORDZQCTLHQOUJZNJVALNFSHITYCCVYTAPSDVPIWCXYMBLTDWGVSPXILFSEPPUBLZBIJRKLPPOYRROEDDMJKWCIQAYURNAWKTNXSGRYOHMDMRLJSCTEMVWJFR");

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
    msg.setTimeStamp(0.8929937548494067);
    msg.setSource(3003U);
    msg.setSourceEntity(108U);
    msg.setDestination(12594U);
    msg.setDestinationEntity(34U);
    msg.formation_name.assign("CKUHZTAMRQJHCSOWXHMOYFPLYPOEZFKSBN");
    msg.type = 159U;
    msg.op = 97U;
    msg.group_name.assign("NMVOECYLJOHUTXBHQQORSTBKSJNIUCWQJZPXEPAYKCXDRLXTAMCHAMDITXGDNPBEWULXJFZQHGIKSBFEMFPEDMQOAJXFWPGALQHEDARVMPOZNDBLZKCRGYVNMSWWONVCUTQZKIDZUUKVSFYQLGRUJIMUDJKPEZNGAYFHCJVYGVTNWHYRBJVEHKNPRXSYDWZXIOLVFGBLSICOUQVAWPYIEIHDLUZMIFTSFMJFSRNBQLGWCKGSYKAOXTBCZTRH");
    msg.plan_id.assign("LHASYAOXZYPICHLSIWWHSXVNADDZTRFJECWYHEFQBRIVAAIJUMMBCQETLGDNPTMOCADGOCUQEQNKFFREKMSRZZEFSNVTGYBQJCVVPKMZOYPQZHXUHJWOJPEKCTKFVCMXMGLDIZVUGXKXCWDHUPPABDTGRNKBTXRUNMBINUFGKPUIZBYHDFQCPSNHEWDJIBLIMQJJRZOJSLEVLKTFKAUUQTDMWWGYVYXGYOWFXVRHOZSLRBSLOETPIYGJN");
    msg.description.assign("BKNOEMPTAHCJCBXIFPHSXKJLTZUYGRZVUIYEEWIELVFZDQWSHBDEDKDKUCEUUDXNXKRVTNLMKRGSFBFCNLNSEITLZPRPOYUVWQYGQHBQWJKOVZHZBYJKJCMYDDTXGAISWHVFNWSQQLZZWCZJOLSBPQXPGTVFFHRAGRGEEAUOIIPMMMACDPTSXHSWINQD");
    msg.reference_frame = 65U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13271U;
    tmp_msg_0.off_x = 0.609385317203821;
    tmp_msg_0.off_y = 0.07390501315351039;
    tmp_msg_0.off_z = 0.7126614516837475;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9543048021393177;
    msg.leader_speed_min = 0.59240795647982;
    msg.leader_speed_max = 0.40545046168014043;
    msg.leader_alt_min = 0.30993339988646096;
    msg.leader_alt_max = 0.9850111854594916;
    msg.pos_sim_err_lim = 0.8623321987314322;
    msg.pos_sim_err_wrn = 0.7612337420834909;
    msg.pos_sim_err_timeout = 15598U;
    msg.converg_max = 0.1326196550763401;
    msg.converg_timeout = 54305U;
    msg.comms_timeout = 41832U;
    msg.turb_lim = 0.30178764760589927;
    msg.custom.assign("UWPKUXIQWMTPGSKYNRWFGGPRCPMCWKBHMXFHPIOPQIDJSJBLYWRONDQ");

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
    msg.setTimeStamp(0.4350308465752417);
    msg.setSource(53214U);
    msg.setSourceEntity(18U);
    msg.setDestination(59565U);
    msg.setDestinationEntity(90U);
    msg.timeout = 28881U;
    msg.lat = 0.08343583223042894;
    msg.lon = 0.5049107806652096;
    msg.z = 0.49547457249320936;
    msg.z_units = 5U;
    msg.speed = 0.8144717999120931;
    msg.speed_units = 156U;
    msg.custom.assign("MLDYQFEFSOJUIYZNSSQGUSKTVWTRBAXFPSJWPMQEFFNLYOLYIEHWTLBETUMHQRIXVVNUAWYOHIVASWCBTGIKANAALZRBCSNGTBYZPHDTUQOGESRFNCRPQVCCXKMJIHXFJQSOYWXDINKUOOJATFPCNZURP");

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
    msg.setTimeStamp(0.21440029800358695);
    msg.setSource(17473U);
    msg.setSourceEntity(11U);
    msg.setDestination(10616U);
    msg.setDestinationEntity(194U);
    msg.timeout = 48140U;
    msg.lat = 0.33627197916868;
    msg.lon = 0.5414897129576834;
    msg.z = 0.8326047050216812;
    msg.z_units = 113U;
    msg.speed = 0.7808683866872509;
    msg.speed_units = 159U;
    msg.custom.assign("ORSMSHUYAGKBFKXUQKXMYGOUEDMKYIIFNSWIRCUGPCLOADQBGJRJZDAEUZPEDCCTHADCOQBPNVXLWTZEIUFAWQZVMHPMYWIJQYKVKGVZMMVNGLECDNPAKXJQSHVQODQOSJTRTLBFOZHNFRCTXETYRWSLJQCHIZJSGVRZIYUHMP");

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
    msg.setTimeStamp(0.03234182480598258);
    msg.setSource(2980U);
    msg.setSourceEntity(41U);
    msg.setDestination(64651U);
    msg.setDestinationEntity(253U);
    msg.timeout = 46617U;
    msg.lat = 0.32098611132187727;
    msg.lon = 0.10852403068992378;
    msg.z = 0.8004163519082101;
    msg.z_units = 200U;
    msg.speed = 0.49191352044436354;
    msg.speed_units = 64U;
    msg.custom.assign("GMESXJQLUUZEGLAJQOPVBGGUFDETDCHLVQQNFZRFYAWTSNCXURPDKWIPBEMSOWBHEPXPXUAWTKYCFNDPMNJCLBVPYTSHBVDSCAVKDFFADYUJZAFISCLAKFCLXMLXNYYVJUCRQOGBMJBVVBYNERROOGISOEWTXZTYBDZRMNCUMPNHPSQAZQHXWJVJADQHJHBZHUHKJZGXSSYNORKITTANERWKMLDIPOEMWGQQFROGTLELMKCTIWIUFYI");

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
    msg.setTimeStamp(0.6160592064631893);
    msg.setSource(29136U);
    msg.setSourceEntity(32U);
    msg.setDestination(46853U);
    msg.setDestinationEntity(215U);
    msg.timeout = 54354U;
    msg.lat = 0.021030386902205267;
    msg.lon = 0.009502913216690279;
    msg.z = 0.239423991290724;
    msg.z_units = 248U;
    msg.speed = 0.9377431311831061;
    msg.speed_units = 118U;
    msg.custom.assign("BGXURYVJVKPRMRZMFRWYOXBAPUQEOOFSHLTUGIVGEVBYCSVPSSFTDMWHHJGXTQNFIPIPGNZMADSDYNJOVRLCIXAEZM");

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
    msg.setTimeStamp(0.35258596031679845);
    msg.setSource(49757U);
    msg.setSourceEntity(27U);
    msg.setDestination(29186U);
    msg.setDestinationEntity(208U);
    msg.timeout = 25724U;
    msg.lat = 0.4677846584967149;
    msg.lon = 0.9012752567277507;
    msg.z = 0.7540251953744976;
    msg.z_units = 138U;
    msg.speed = 0.13891134484859213;
    msg.speed_units = 213U;
    msg.custom.assign("QJSIUSHHQZRXRBCRMIVGBRTVENNRSMSKKCNCTPGPVDLQIBMRMTMIEDZYDULFNICOKJX");

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
    msg.setTimeStamp(0.5326840232361291);
    msg.setSource(57649U);
    msg.setSourceEntity(46U);
    msg.setDestination(31811U);
    msg.setDestinationEntity(65U);
    msg.timeout = 8499U;
    msg.lat = 0.5757455954000573;
    msg.lon = 0.5623125887762485;
    msg.z = 0.9811695361550901;
    msg.z_units = 111U;
    msg.speed = 0.5108932023215728;
    msg.speed_units = 156U;
    msg.custom.assign("SANNXLZVLYMJLVGRFMIICWGRCBYNDNFNLZJNTKINCJFWYMAVPAKBBXREZQ");

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
    msg.setTimeStamp(0.1187973423351012);
    msg.setSource(50012U);
    msg.setSourceEntity(32U);
    msg.setDestination(31864U);
    msg.setDestinationEntity(212U);
    msg.arrival_time = 0.749716386056404;
    msg.lat = 0.6935566894765359;
    msg.lon = 0.4812357980936327;
    msg.z = 0.3691693558389709;
    msg.z_units = 233U;
    msg.travel_z = 0.024500480291615667;
    msg.travel_z_units = 141U;
    msg.delayed = 74U;

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
    msg.setTimeStamp(0.6063858055218021);
    msg.setSource(21241U);
    msg.setSourceEntity(77U);
    msg.setDestination(41070U);
    msg.setDestinationEntity(73U);
    msg.arrival_time = 0.13618584430495573;
    msg.lat = 0.2222085918736263;
    msg.lon = 0.7998904414440698;
    msg.z = 0.8903390498671903;
    msg.z_units = 184U;
    msg.travel_z = 0.6497353929187308;
    msg.travel_z_units = 8U;
    msg.delayed = 241U;

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
    msg.setTimeStamp(0.6978810452340257);
    msg.setSource(60753U);
    msg.setSourceEntity(242U);
    msg.setDestination(44531U);
    msg.setDestinationEntity(210U);
    msg.arrival_time = 0.8846198430254776;
    msg.lat = 0.3069839110421656;
    msg.lon = 0.34962330346392656;
    msg.z = 0.2803452066146753;
    msg.z_units = 234U;
    msg.travel_z = 0.6928871369554913;
    msg.travel_z_units = 214U;
    msg.delayed = 178U;

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
    msg.setTimeStamp(0.7394376836023144);
    msg.setSource(23441U);
    msg.setSourceEntity(60U);
    msg.setDestination(44789U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.6639025647637017;
    msg.lon = 0.6596804378269544;
    msg.z = 0.3860508740095777;
    msg.z_units = 172U;
    msg.speed = 0.8885841338077012;
    msg.speed_units = 91U;
    msg.bearing = 0.24194641822773078;
    msg.cross_angle = 0.4963435593708351;
    msg.width = 0.8749671215194509;
    msg.length = 0.31376179289154815;
    msg.coff = 163U;
    msg.angaperture = 0.22396890711299744;
    msg.range = 7952U;
    msg.overlap = 231U;
    msg.flags = 10U;
    msg.custom.assign("TCCIKKHGZWFSKWLSTHBQIJPGVOIMQHTGYUEELFWGOAHADJIVROLDIUBSMXLMFELKDBDBKVBORONXJZJHWLSRDEWBTXLFCSPWIUQPZLVOEGTKAQJMWDGUBCPKDCJKYTNPHVXLAOLUIVZNDPNJCGIESQRYAUFSUUJZFYGPRJSFURMVFWBPORVTNBQMGNT");

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
    msg.setTimeStamp(0.15891697329909515);
    msg.setSource(45477U);
    msg.setSourceEntity(20U);
    msg.setDestination(37319U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.12465712867857315;
    msg.lon = 0.39744394139506145;
    msg.z = 0.8315868471225454;
    msg.z_units = 72U;
    msg.speed = 0.9164010108215338;
    msg.speed_units = 121U;
    msg.bearing = 0.4466355836649164;
    msg.cross_angle = 0.09726351474787998;
    msg.width = 0.3451700785939299;
    msg.length = 0.40275880740619385;
    msg.coff = 63U;
    msg.angaperture = 0.7862072491720765;
    msg.range = 31002U;
    msg.overlap = 172U;
    msg.flags = 198U;
    msg.custom.assign("ECEJGGIHTRFU");

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
    msg.setTimeStamp(0.5220315708879754);
    msg.setSource(35677U);
    msg.setSourceEntity(151U);
    msg.setDestination(9676U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.1051451216958389;
    msg.lon = 0.42563358459218403;
    msg.z = 0.48253765599997644;
    msg.z_units = 186U;
    msg.speed = 0.25269895598848835;
    msg.speed_units = 192U;
    msg.bearing = 0.6994361215111167;
    msg.cross_angle = 0.7926619141804929;
    msg.width = 0.22571827122831867;
    msg.length = 0.3609927448057263;
    msg.coff = 206U;
    msg.angaperture = 0.7961252027779959;
    msg.range = 59771U;
    msg.overlap = 195U;
    msg.flags = 45U;
    msg.custom.assign("ADKEQCARXMWFJOSUNVHZH");

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
    msg.setTimeStamp(0.04828897030479018);
    msg.setSource(9348U);
    msg.setSourceEntity(151U);
    msg.setDestination(23777U);
    msg.setDestinationEntity(139U);
    msg.timeout = 3631U;
    msg.lat = 0.12699041971459835;
    msg.lon = 0.6103188748645516;
    msg.z = 0.594459963866637;
    msg.z_units = 217U;
    msg.speed = 0.2437309203766438;
    msg.speed_units = 8U;
    msg.syringe0 = 34U;
    msg.syringe1 = 30U;
    msg.syringe2 = 29U;
    msg.custom.assign("KUCHVKECHBFMOIDEJQCJPAISWBBCVVKVLMWNFLCJMSUYTDSNAYMEMYMSPHEQYACGQCUFHORTFYLFTFLKATGBXZONONXUCNLZZPAUHDXZRRGMYQDRNBLSFEHLKOROOPYNWIHGKQW");

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
    msg.setTimeStamp(0.7088094701438574);
    msg.setSource(17772U);
    msg.setSourceEntity(52U);
    msg.setDestination(50551U);
    msg.setDestinationEntity(216U);
    msg.timeout = 20064U;
    msg.lat = 0.047992810463283186;
    msg.lon = 0.07028221883919072;
    msg.z = 0.0021830426380482493;
    msg.z_units = 157U;
    msg.speed = 0.8642553335194589;
    msg.speed_units = 115U;
    msg.syringe0 = 208U;
    msg.syringe1 = 51U;
    msg.syringe2 = 91U;
    msg.custom.assign("ACIZLWASOXSIPBXBAKUADJTESBJHKHGWANJFWNCVPDSVMCTAYQFA");

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
    msg.setTimeStamp(0.9900473356181976);
    msg.setSource(29335U);
    msg.setSourceEntity(156U);
    msg.setDestination(52131U);
    msg.setDestinationEntity(117U);
    msg.timeout = 2519U;
    msg.lat = 0.1177611002022163;
    msg.lon = 0.617404518497917;
    msg.z = 0.28470479625460654;
    msg.z_units = 184U;
    msg.speed = 0.4233219535654098;
    msg.speed_units = 171U;
    msg.syringe0 = 115U;
    msg.syringe1 = 126U;
    msg.syringe2 = 63U;
    msg.custom.assign("EFGWVYSPOWHUYHCRMUGZXQRPKAGNKSEWBLKBTQMUGDGRPNJ");

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
    msg.setTimeStamp(0.3737138209772114);
    msg.setSource(7559U);
    msg.setSourceEntity(204U);
    msg.setDestination(20859U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.34204360698816594);
    msg.setSource(21474U);
    msg.setSourceEntity(89U);
    msg.setDestination(7056U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.855450331457035);
    msg.setSource(49397U);
    msg.setSourceEntity(2U);
    msg.setDestination(46339U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.8108814044726355);
    msg.setSource(32959U);
    msg.setSourceEntity(206U);
    msg.setDestination(47726U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.44634864994982604;
    msg.lon = 0.05164045644424198;
    msg.z = 0.42498051517008817;
    msg.z_units = 184U;
    msg.speed = 0.30896565467577597;
    msg.speed_units = 157U;
    msg.takeoff_pitch = 0.1842262882084873;
    msg.custom.assign("QYSWJXNHDBTOWIYQJPHMXPHBGJQXKYPNYYROSLOHXWPOUIIBPVNLBFDZPSFWRECXCZTGNGNZEYUVMHBHIFITMARSCJPHQWDDGPWRMKROVLFVVCRGTMEALAWULFGJ");

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
    msg.setTimeStamp(0.7209518244462324);
    msg.setSource(58569U);
    msg.setSourceEntity(138U);
    msg.setDestination(21978U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.9751776561845015;
    msg.lon = 0.01645946293844336;
    msg.z = 0.5808817626623352;
    msg.z_units = 144U;
    msg.speed = 0.2006875781070141;
    msg.speed_units = 186U;
    msg.takeoff_pitch = 0.8254474995793032;
    msg.custom.assign("AWHVNMUZDUDATGJNQNIUMWKCDJVLSPXA");

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
    msg.setTimeStamp(0.5521661457249252);
    msg.setSource(8799U);
    msg.setSourceEntity(36U);
    msg.setDestination(14723U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.2798599642672822;
    msg.lon = 0.3199021255040939;
    msg.z = 0.813590241197316;
    msg.z_units = 53U;
    msg.speed = 0.7813948596706715;
    msg.speed_units = 139U;
    msg.takeoff_pitch = 0.7230271572898693;
    msg.custom.assign("FVRVBKQFGPVTHRVUPZNJCJNGRAFFGQIWSIASJVHXPMMTZPCMBWACXJDBIJLFSSSPNIXIQESDWTSECZKARCWKEYXZMXRYZPQYPGCDDXPJIHPMYEHWQKZKUJNKNK");

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
    msg.setTimeStamp(0.19015057889731335);
    msg.setSource(57037U);
    msg.setSourceEntity(218U);
    msg.setDestination(31870U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.47989894712251824;
    msg.lon = 0.788274965805319;
    msg.z = 0.536363207177778;
    msg.z_units = 123U;
    msg.speed = 0.4411142960200731;
    msg.speed_units = 119U;
    msg.abort_z = 0.5791637532362971;
    msg.bearing = 0.6175599729820593;
    msg.glide_slope = 157U;
    msg.glide_slope_alt = 0.00919209343352445;
    msg.custom.assign("NUMVXHCKBTKOCCLNTEAFIOBYQHIOJZWLWRITDIBDRNOAWIYJYEAFGIJKQEPYJPEHAOSLEUERPUKNGMKACMQLZUWLNEKYVXQCIREVCMMJJYOULVFDMDUYKHZXFZSWNAYRMXFGSTVRQQFBFNKGLXNBPRFAPGDSQNFEVHEZXSZXKLKWLJOPRNQWHSJVUTJYYXSVVZUQO");

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
    msg.setTimeStamp(0.3938977433461358);
    msg.setSource(13691U);
    msg.setSourceEntity(234U);
    msg.setDestination(50339U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.7567704487675659;
    msg.lon = 0.17763069238994078;
    msg.z = 0.5333951951347075;
    msg.z_units = 28U;
    msg.speed = 0.676880720465467;
    msg.speed_units = 142U;
    msg.abort_z = 0.3508092102497732;
    msg.bearing = 0.5781165241055493;
    msg.glide_slope = 72U;
    msg.glide_slope_alt = 0.8032651374215442;
    msg.custom.assign("UTJHUNBJQKMQBEXDDORUWTFKQLWWHUVSKUCGZLDKAGVJXKCXQIVPYPMBBWEDFBFHILWHJEVENGWCPHVJAGILZLBVJLIPMRBAODKJFXAXOB");

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
    msg.setTimeStamp(0.9321065949280607);
    msg.setSource(17150U);
    msg.setSourceEntity(199U);
    msg.setDestination(43578U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.09124267040119849;
    msg.lon = 0.018058489543963496;
    msg.z = 0.2701069697222779;
    msg.z_units = 141U;
    msg.speed = 0.49831433495906075;
    msg.speed_units = 3U;
    msg.abort_z = 0.8542089734865705;
    msg.bearing = 0.1666389889461376;
    msg.glide_slope = 7U;
    msg.glide_slope_alt = 0.03405224054448164;
    msg.custom.assign("XEOOOUGJRQDMLVLIUKERJKYWK");

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
    msg.setTimeStamp(0.7985895733081438);
    msg.setSource(18973U);
    msg.setSourceEntity(9U);
    msg.setDestination(30817U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.6528118996930756;
    msg.lon = 0.5875367215260725;
    msg.speed = 0.194166854889119;
    msg.speed_units = 200U;
    msg.limits = 198U;
    msg.max_depth = 0.662062524923411;
    msg.min_alt = 0.31004230292683266;
    msg.time_limit = 0.2900817736157004;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.173687015981842;
    tmp_msg_0.lon = 0.497187074390247;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PYINAWZYAOQCJOMYLLJAQEEEVUUECPKZBMIYIQTMUBOBOWYTZIDORERDYVSJDXWHBTEKDXWGHQSBHHNPAHLURPVJVTRDACRCJZTPEUKKBSUQGSVZGWFMRFFBFQFLLRLSTWBVIIPSXIGAOXJWJSUCXLND");
    msg.custom.assign("GWGSRYXJFENPHJMQYAIGQIDUSFJKMCOLIURZSZNFWIOUGIWRRBCOZORJDKDVBAZCMPMPXCPQVFCNBLTYXIQJFQETSMQWUWZTLTVJDEKYANP");

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
    msg.setTimeStamp(0.23350713917077703);
    msg.setSource(55148U);
    msg.setSourceEntity(187U);
    msg.setDestination(21046U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.8432826036542621;
    msg.lon = 0.22019546330927964;
    msg.speed = 0.28770774858196957;
    msg.speed_units = 107U;
    msg.limits = 235U;
    msg.max_depth = 0.6738066451219167;
    msg.min_alt = 0.24875976489438778;
    msg.time_limit = 0.8087794318878111;
    msg.controller.assign("XIDDZWGUTPRHPWQXQIZKGDWXJFZDHYOLOFCGOASQWBJGLKZWTIACMPDGFBHNHBLKVNSGVBIVCHEWXJTKJUSXIFSFOUCPVFCRTYZUBMREWQTJOYXPPEJRDILMEFUYWAUIGLPLJGTIRJNHBJOHYYCRKULSEMCFRSNBNDVSPMOKFKNXUMECCODUAHEMOMZ");
    msg.custom.assign("YIDCSTHMLCBOTLQKCWVWRASIVSUFQMRMXIPLHDEXSZQOQNKJJORXKLAZVVMUFTRJEANCGUBKNOEOHAIDDPPUEDWOVSHMUOEJBLSVONADVPGMYXYHGYFCIBCTYFBBCMRGPPRWUVZAJKBHQTVDDQSFXOZNYCNBUNZTWEJCTXUUAI");

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
    msg.setTimeStamp(0.4579032396487839);
    msg.setSource(22212U);
    msg.setSourceEntity(250U);
    msg.setDestination(15383U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.21912883513734194;
    msg.lon = 0.12211021783389353;
    msg.speed = 0.24850641547824526;
    msg.speed_units = 35U;
    msg.limits = 223U;
    msg.max_depth = 0.05745594720679503;
    msg.min_alt = 0.7045181009790428;
    msg.time_limit = 0.32634662735087816;
    msg.controller.assign("OPMILGLTVKKFITRFAECNXGKOLHDNWKMJBKXWTDJHNJIRJCXYHZEIPCBDKZBJ");
    msg.custom.assign("NFSEIHPNPGEQGTSVDZABJMUVXQNJMBOFXGWLFYWXJTKZUPEZCGKWVWUYYLDAOBDKCHNRHDUOHDCKITIZRRPLOCVSLKUAZQWKMDLXOZVIKFPLSMHDFDLWJCAENAIHRHPXGMRG");

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
    msg.setTimeStamp(0.11851901681335231);
    msg.setSource(19373U);
    msg.setSourceEntity(122U);
    msg.setDestination(49748U);
    msg.setDestinationEntity(185U);
    msg.target.assign("RBFIRFBKOAQEOZCDSZZIGHWAPUNODGDGSQXHAWHNVGBWTPYOEQPBCSCJYOBJLSTFVMFKQIWBFVLPLNDCNQXURRENHT");
    msg.max_speed = 0.6032606377928472;
    msg.speed_units = 136U;
    msg.lat = 0.11753481160780477;
    msg.lon = 0.3364019719001011;
    msg.z = 0.47921730133845464;
    msg.z_units = 38U;
    msg.custom.assign("OHLTOLCCXUXRNTKTZINRLSDHSFGHUMBSFNKRXMBOKFYCUWJJZLQLRSVDMWXVFSSTHEOEJCDLJXCQGZZGBWTDRQSMGPICZHXZQKXRPUELWCZGGGYVSMIKYYHLHVODMUTUVUAKHZVYBXAFQADKJPUEGRGOTDNBEVJYVASMXMNOIRIOCNEBKLJFDIALPPHZEOQOCFAEYBJGWVIBZATPISRUKVMYUJNCPFPHQEDEWWPKAXWQPQYQWJIFNAAWFNTI");

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
    msg.setTimeStamp(0.938597956056076);
    msg.setSource(28935U);
    msg.setSourceEntity(37U);
    msg.setDestination(33218U);
    msg.setDestinationEntity(116U);
    msg.target.assign("MNUPHEFJKWIIPWRRLZTGOUNXTPFTJAJOBAXNUVZKFEMBESDPOMCVMSHJKRFYDGQVYCZDYJUAKJOMKZCMAXEYZSKSQIWOSMZVLVLJBEYFOTECYHPUUJXTZELRGGDMDWPKLDYXNXVPWNCVAAWRMHSNSVRKLSTQGUNBOWHIGGDFBOLXZITHAYMGWHTNL");
    msg.max_speed = 0.3904690114348116;
    msg.speed_units = 95U;
    msg.lat = 0.14721181284476526;
    msg.lon = 0.6090337437147073;
    msg.z = 0.13015112713563093;
    msg.z_units = 174U;
    msg.custom.assign("NOUCEIMXZCOHHHFFXIDVGDEBRWRHYKMGLRYBPXATJTNJWHMNIDJLVIDEFRRZRVMVRGHKMMIPSGTUMEKCOGQSCEAUUWZALGBFPKLKOOWHCVBWYYQHZXYBDSGRMYVGAJVIQERWGNJADSWJMZCWLSSTBFUJYDDTQLKTXXZKILZBQKEBPTOVAILPSJSFNABYNWYXGOPDPVIXQPNANTZNOZIDMFKKFSREOXQCC");

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
    msg.setTimeStamp(0.5046326466147882);
    msg.setSource(41510U);
    msg.setSourceEntity(155U);
    msg.setDestination(40515U);
    msg.setDestinationEntity(81U);
    msg.target.assign("TVQISFVSLGBDZGKOYUFICDKAMPNXJCNOKRXOGCCVKIGYPOJXZPIVCAQPZZFORUKPAEYRIKDDYVZJ");
    msg.max_speed = 0.8879161967573874;
    msg.speed_units = 200U;
    msg.lat = 0.06747024109593025;
    msg.lon = 0.49186312104868646;
    msg.z = 0.28992701664838993;
    msg.z_units = 63U;
    msg.custom.assign("ZRXWRNRBKUXBLBTGMMREWZNCIOGDUKBQKPOXAWKDVZRLZSUKLVFOGVOJCBRCJWQLTAAVRQHVNJBAFTGZSEOYJWPUNLEQIZJTIFHCCVYFAMIMIQNFYVFODXNTWVBJPSHCYZFLTNHGXMERXELZDMSPGKAYOTHWXGHSWTAAJHQCDBQN");

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
    msg.setTimeStamp(0.7202260749970211);
    msg.setSource(65114U);
    msg.setSourceEntity(147U);
    msg.setDestination(21936U);
    msg.setDestinationEntity(239U);
    msg.timeout = 21408U;
    msg.lat = 0.9931643931953996;
    msg.lon = 0.13008836224931353;
    msg.speed = 0.8938925540906386;
    msg.speed_units = 215U;
    msg.custom.assign("VETKJRBDGYZVEIODHAWZAERKQZQQBZUKWACYAVFWQEOTOBJOXULUENHJTCSEXSKIIBMHUNFJYVHNOUNRCOUJHANUWGGXEYLRGIHNXFCBSLSVIXUXGCSXTMVHCYLYKAWGFGYCEVLIYLSWAWUXKQPMRJVMZOAMPMZKDSPNPTUKJLSIBFLJMWDGDIBOTIHFKTDNZPPBMSEHIJPQNBVZGBTLQOCJXAPFDYFPGRD");

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
    msg.setTimeStamp(0.6389451994455098);
    msg.setSource(23057U);
    msg.setSourceEntity(1U);
    msg.setDestination(61990U);
    msg.setDestinationEntity(6U);
    msg.timeout = 26008U;
    msg.lat = 0.13542572441579515;
    msg.lon = 0.9317683417347276;
    msg.speed = 0.5231341484280977;
    msg.speed_units = 202U;
    msg.custom.assign("TYDRCRJJUCDDFYIKXMMOZOOSMZRNUWUYFKORNWAIESRXAPKXWZEAEIKQQHMDMUMXVFHMSUJCKPWGJKCVXILWIOBZHECUPSZONAEBGJIFULVCHGTBIVDVSPEVNSZZXESBSBQIYTHGLGATALFDMRXAUKWHVYNCJNVYQJZKZDYNWHDEWFDAGDLTTTUFORSHHPICYQEFPJWYBQPBGPTCOGWYUPBTOPALBENJBRKVQNGJLXFLQR");

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
    msg.setTimeStamp(0.058980661837625625);
    msg.setSource(14043U);
    msg.setSourceEntity(118U);
    msg.setDestination(3894U);
    msg.setDestinationEntity(46U);
    msg.timeout = 1785U;
    msg.lat = 0.7848684305346267;
    msg.lon = 0.30866761270504983;
    msg.speed = 0.1431973171342391;
    msg.speed_units = 240U;
    msg.custom.assign("JVNHQCLJZXZCFXODJYZYSTDANUHIPZFHKD");

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
    msg.setTimeStamp(0.43305886632782864);
    msg.setSource(11008U);
    msg.setSourceEntity(98U);
    msg.setDestination(15684U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.4049515141298772;
    msg.lon = 0.9698582910574753;
    msg.z = 0.2412769453695216;
    msg.z_units = 123U;
    msg.radius = 0.19157770104350313;
    msg.duration = 17607U;
    msg.speed = 0.6182306925430177;
    msg.speed_units = 164U;
    msg.popup_period = 6829U;
    msg.popup_duration = 32748U;
    msg.flags = 56U;
    msg.custom.assign("PFARNPSSQNOIYNSRXUUDCBIHGMEPYLLDNVZKMUMLGHXXYVNLWYGVQTJBXAJCYZNCIZSKGQUSDYNHOCQVWQTWOUKGEZCRLVAMKKZEYEOHFEJCKEHURCXBIIXHRTWWRCZHRZJBXQMBOJTUSQXVPIMKOTGXIMSWPHEUDPRPTDWNLFFAHQVBVFYGJYUYRGBDFIKRFGAAMAEO");

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
    msg.setTimeStamp(0.7615162939183464);
    msg.setSource(20202U);
    msg.setSourceEntity(168U);
    msg.setDestination(8834U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.5164006860853199;
    msg.lon = 0.004837102997260034;
    msg.z = 0.06181957910782876;
    msg.z_units = 229U;
    msg.radius = 0.6811776427365399;
    msg.duration = 13660U;
    msg.speed = 0.7664725132669971;
    msg.speed_units = 138U;
    msg.popup_period = 19391U;
    msg.popup_duration = 24687U;
    msg.flags = 155U;
    msg.custom.assign("YVBPIWDCGQDBFXPKESKKQPPHYHFS");

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
    msg.setTimeStamp(0.06833783057134268);
    msg.setSource(38224U);
    msg.setSourceEntity(79U);
    msg.setDestination(16045U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.1789328335522895;
    msg.lon = 0.8156539261042279;
    msg.z = 0.8039774953187476;
    msg.z_units = 198U;
    msg.radius = 0.13883877854658744;
    msg.duration = 49609U;
    msg.speed = 0.0920647523270336;
    msg.speed_units = 60U;
    msg.popup_period = 47443U;
    msg.popup_duration = 46968U;
    msg.flags = 162U;
    msg.custom.assign("YLJUDYUPVDTUXQNKRRIZK");

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
    msg.setTimeStamp(0.08860956965278233);
    msg.setSource(56202U);
    msg.setSourceEntity(135U);
    msg.setDestination(51951U);
    msg.setDestinationEntity(234U);
    msg.timeout = 39647U;
    msg.lat = 0.006678616485870537;
    msg.lon = 0.3529861615180554;
    msg.z = 0.25862309615430534;
    msg.z_units = 159U;
    msg.speed = 0.7535337050978865;
    msg.speed_units = 177U;
    msg.bearing = 0.7725483190609196;
    msg.width = 0.6215269628532317;
    msg.direction = 220U;
    msg.custom.assign("PHGPASJTOJFDXDWAWEWHZRAEXNEIONXRPWUTGKBJHKWZBYFSQJFLNTIBESNPLIQGKQVMUXGQVI");

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
    msg.setTimeStamp(0.7577882793917633);
    msg.setSource(6820U);
    msg.setSourceEntity(122U);
    msg.setDestination(19394U);
    msg.setDestinationEntity(139U);
    msg.timeout = 16180U;
    msg.lat = 0.4840690898718871;
    msg.lon = 0.4767317033540883;
    msg.z = 0.9647131310662573;
    msg.z_units = 129U;
    msg.speed = 0.5877352171461868;
    msg.speed_units = 173U;
    msg.bearing = 0.08426846327919413;
    msg.width = 0.6070356560616293;
    msg.direction = 181U;
    msg.custom.assign("OTNLTEJUFMHHJWKSLQANNTUNCLBOOGCAXOZGJMHFMJSJKOBQFX");

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
    msg.setTimeStamp(0.7026432093619418);
    msg.setSource(16503U);
    msg.setSourceEntity(24U);
    msg.setDestination(7990U);
    msg.setDestinationEntity(197U);
    msg.timeout = 44998U;
    msg.lat = 0.23133417555367575;
    msg.lon = 0.8397502591950308;
    msg.z = 0.5988463724835688;
    msg.z_units = 187U;
    msg.speed = 0.19646693427733608;
    msg.speed_units = 99U;
    msg.bearing = 0.2797971532685529;
    msg.width = 0.13915027731416452;
    msg.direction = 112U;
    msg.custom.assign("VJAGRUUAODONBAFMAJBSEQMPPXCAVPEBCIRHIZQBAGPJRYTCUDIFIPQALYRIDLFTFEBZDNEWZYCFXMHEMURQWSJOUNLMKXNQUCWZDBNVWALPBRLLEAMTETJTKWZAESOSMEJUOLITDFYKOPSNYHSD");

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
    msg.setTimeStamp(0.14161891999217902);
    msg.setSource(57318U);
    msg.setSourceEntity(14U);
    msg.setDestination(4575U);
    msg.setDestinationEntity(22U);
    msg.op_mode = 248U;
    msg.error_count = 19U;
    msg.error_ents.assign("PQYWOETYMEUQOXOHLQLFPIFJASREHXHGNWSKDQWZBXSLORIGMRZPGUTBHTTDYBVDSVZVVJNWMPXUCSKYHPRFHAFOCQKPIWBUMWQSLEGVZVFQIPZATBCCWBMJEWM");
    msg.maneuver_type = 1566U;
    msg.maneuver_stime = 0.5797974528884762;
    msg.maneuver_eta = 24115U;
    msg.control_loops = 2213379749U;
    msg.flags = 238U;
    msg.last_error.assign("YQATBNKQUCCDQADWIRBDWFULZIAKDVLKANWCHMBUHGHRTDJQBXULWQORITTEAZOCCBFPWFVCWQUKMMARXZZSAUKSJYPSCHUHKVICEDYBNHXOHKOMEVMSNOSMSDOPBPSCTTYTOMNLKYGGFMVJZLQJFZJFGISARJEMGAHNGXRPZPPNPODUALVTXLKEYWFXKDSZLEFGIVEVXOJJBGYEPIXSNVEHLZURNDYRCLRQBEVGBIRXYFPIMZNW");
    msg.last_error_time = 0.8835709369064921;

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
    msg.setTimeStamp(0.062484195101720874);
    msg.setSource(58963U);
    msg.setSourceEntity(148U);
    msg.setDestination(30296U);
    msg.setDestinationEntity(22U);
    msg.op_mode = 0U;
    msg.error_count = 131U;
    msg.error_ents.assign("BXTNGMPLYTKKHWMSTRNCIFXTJWUGBIHHWMZBEGZPJYBEKVMSGVMGPMUWLATHQZMDOUNREUSPOPVWDLWYCTXCAFAYESIRKCALWFNFYOFLUDXYAFXZROJVQR");
    msg.maneuver_type = 54875U;
    msg.maneuver_stime = 0.3978555003000125;
    msg.maneuver_eta = 26690U;
    msg.control_loops = 2192936860U;
    msg.flags = 184U;
    msg.last_error.assign("MGDLRMALTFJSAZCJDSQLBUTHBFGIKZMIBKOCUKPAHQXAPPRXPBHFENQNGXTIYVURHIDBRQIQTYHZNAGEWFWWDLHKNEXTMXBLPCYNTCMKFEYPFJI");
    msg.last_error_time = 0.33513483076325234;

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
    msg.setTimeStamp(0.6606535602045573);
    msg.setSource(368U);
    msg.setSourceEntity(60U);
    msg.setDestination(30255U);
    msg.setDestinationEntity(227U);
    msg.op_mode = 109U;
    msg.error_count = 84U;
    msg.error_ents.assign("YXDDHYPDRWDKXYUNSGTXXPBUCEKTAOOEYL");
    msg.maneuver_type = 59370U;
    msg.maneuver_stime = 0.9090269305931528;
    msg.maneuver_eta = 4576U;
    msg.control_loops = 399989933U;
    msg.flags = 150U;
    msg.last_error.assign("RSUZMRNCXQLDGHZQPCOINWOBFHSKWGKOLVGLNYAJJDFPGDCYBPVXBOAGPEGAOJUYJQOYNUBFUHYUOWAXJAYEQMQPYIENBTITBUIWIPPLPTFJRTFMQZCRXDYHTILZEVMBCEKHZXMBSNIZWKLDWVCTAOVEGTMQNI");
    msg.last_error_time = 0.609440539876135;

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
    msg.setTimeStamp(0.623127448710887);
    msg.setSource(10714U);
    msg.setSourceEntity(160U);
    msg.setDestination(55563U);
    msg.setDestinationEntity(196U);
    msg.type = 171U;
    msg.request_id = 41710U;
    msg.command = 88U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 35975U;
    tmp_msg_0.lat = 0.6668978342155559;
    tmp_msg_0.lon = 0.34002132955919995;
    tmp_msg_0.z = 0.7670509185361302;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.speed = 0.48258545757916005;
    tmp_msg_0.speed_units = 236U;
    tmp_msg_0.duration = 35669U;
    tmp_msg_0.radius = 0.5715844587095145;
    tmp_msg_0.flags = 120U;
    tmp_msg_0.custom.assign("RCPUFALNAYDXNQOZTRPTPLFKNPNMGYGWOLDCGTYKMEDYJFQQORSCKWERXLGEYZMXRJTIWFCDVNYDSVYEXEKJIXAWKXOPTOLGFUOVNQHSOCRGQXESKJQZFFTGKWHJEIFCBBYVZCJSVQBJANOQAE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44946U;
    msg.info.assign("VWYQYSUQMHVYDFDVFCYOQNBLSGGSJPGGJJURHIDPTDPRTWOAZNQPZNFXDEWTLMCTCUDOEWDXGZFKCWDNXMOLITNBOMJRLKCCHOWLQMBLXLZKVSBZAQUUMYZPMSKKGJRUWIPNAVFKWQNUXIZAYAQCEMVIKAUZKGBOIGZZX");

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
    msg.setTimeStamp(0.8915729532769657);
    msg.setSource(20099U);
    msg.setSourceEntity(165U);
    msg.setDestination(18581U);
    msg.setDestinationEntity(46U);
    msg.type = 171U;
    msg.request_id = 33492U;
    msg.command = 15U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("DJTWRHWPMIZMXDHQOJXAWMIXVQDOGNHKJYATUUQVLGGWHFDNXUCVINNERIYLIXLFMZQGUXAUKTPPDJQYCEFHGIOXMCEBAFXIMMNPGDCEQPUFDRBJWSLYAFTWPABOHSZYG");
    tmp_msg_0.max_speed = 0.2765454193593686;
    tmp_msg_0.speed_units = 1U;
    tmp_msg_0.lat = 0.8778436001112324;
    tmp_msg_0.lon = 0.7150718701115389;
    tmp_msg_0.z = 0.6303510643727402;
    tmp_msg_0.z_units = 116U;
    tmp_msg_0.custom.assign("QFTXMBTDWIXBEJOIAXXEPWMGVNGWUVQZDOFVPRKTSWHZCIENQZIFSAHZORNRWQGTYJEKVWURYXNZQYLMDKBUBGUXAIVI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53789U;
    msg.info.assign("BNOVTXKDWFHCOZUBVNVHWTODZUQWVFSAIRXJRYCLNUXFJRGDFKPWQMNRGZMKOQCIPLLAPXZFSOAB");

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
    msg.setTimeStamp(0.3768757599639445);
    msg.setSource(32964U);
    msg.setSourceEntity(153U);
    msg.setDestination(31797U);
    msg.setDestinationEntity(242U);
    msg.type = 92U;
    msg.request_id = 40274U;
    msg.command = 243U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 65410U;
    tmp_msg_0.lat = 0.9380580691943164;
    tmp_msg_0.lon = 0.0534455993761892;
    tmp_msg_0.z = 0.9825307764214855;
    tmp_msg_0.z_units = 46U;
    tmp_msg_0.speed = 0.8747501607099134;
    tmp_msg_0.speed_units = 73U;
    tmp_msg_0.duration = 53147U;
    tmp_msg_0.radius = 0.996186376085608;
    tmp_msg_0.flags = 158U;
    tmp_msg_0.custom.assign("KRRGFUOTTVFPSJFXGGLIPXLXZCVXHPWFOZRNOMMDQFYEQHXJGSMLNPYJMGZYYBVECRCCQBSZLK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2668U;
    msg.info.assign("DTVBHOHTYUWNOXKCLARHMQSLDQBVGN");

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
    msg.setTimeStamp(0.9693380915654894);
    msg.setSource(37957U);
    msg.setSourceEntity(112U);
    msg.setDestination(64256U);
    msg.setDestinationEntity(87U);
    msg.command = 221U;
    msg.entities.assign("KQQTSHCIVPYIWWYZZUNHSMVVQACIINVCKVGGKATCTXQQLODUMOJGBUEOPYCWARR");

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
    msg.setTimeStamp(0.7878479653040981);
    msg.setSource(17120U);
    msg.setSourceEntity(111U);
    msg.setDestination(34402U);
    msg.setDestinationEntity(217U);
    msg.command = 216U;
    msg.entities.assign("VTANGFOXUDLDPEJEGDSPGUVUTKEVYUWWQIROKSUJKEAFTBLPNQGUYYBMYRWRZPWQIANATFOLIODSNMYZTKMXUBDFZWFCXLJQAXXEHRZDYMIQMWDWUJOJLBGCJWMQRMLPGIQVAJCHKSLQBXSXYUGTWFKTZKNRDPCQJVOVZYNAVTCPRRHTLCGJHINHFVHPXHKIEFKQSEBRAACCEFEBYNOZPKIPFBZYMBMWMIOZSVAHUIR");

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
    msg.setTimeStamp(0.51784349602087);
    msg.setSource(45924U);
    msg.setSourceEntity(73U);
    msg.setDestination(16537U);
    msg.setDestinationEntity(201U);
    msg.command = 45U;
    msg.entities.assign("IDYMIMVMZYVULLTHOIFLOQSXEAJYORBTYGZOTQDRKWRKMGMLKSGCIESALCIUUZEGOYJUXPYJXVADEBHBOTCNTR");

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
    msg.setTimeStamp(0.37265694245428616);
    msg.setSource(21378U);
    msg.setSourceEntity(145U);
    msg.setDestination(10748U);
    msg.setDestinationEntity(107U);
    msg.mcount = 73U;
    msg.mnames.assign("IFSBLIYUAGPPRFWOIQESKSURBYSXYICOPRHGBMSOJHZRVNXHEWHOGFIVMTYGNCAXLKNTTUNWZMXWZJHVPZTYPBB");
    msg.ecount = 51U;
    msg.enames.assign("DBPUKWGWLRXUETAHIYCUBIDYDYZBUQHNKPRMSYWOFVIGTCSQEBPEXUKEYOKJTJMNXKQBLMEJLSCSNEFPSBFWRNLGRAKCZIGVOVQNAPBITUWVFFBVVJKQORILDWNOIDAGGESAZAJLSZMMVIWXJCHXHXRCHHPDYZDXEJJKTSRWVSZABHQLWKMTYUNHUCVFONCXWPUTEGGAFZNDXGYXTTDLSZFVFOAJZEYRZITKUMQJAPROPLCQQOM");
    msg.ccount = 130U;
    msg.cnames.assign("SEDLSXZMKAN");
    msg.last_error.assign("NQCLXXFDBSMQHTNGNPYMZJZQLVUFGYRKNVIVUKHTUDMCHWQMGWMPDDBCEWCKZUJGOHRLKHRFTZDFILDNIWVCZFXMQTPU");
    msg.last_error_time = 0.9056196019230967;

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
    msg.setTimeStamp(0.8543478876837575);
    msg.setSource(47366U);
    msg.setSourceEntity(75U);
    msg.setDestination(20003U);
    msg.setDestinationEntity(79U);
    msg.mcount = 233U;
    msg.mnames.assign("YVHAZHAFZIFTFPNWSQPPUZDSHIPEBYKOHXYQHXAYYAUYLTYSTZQCKGNOPSWWSLJSMABIOWUJOGJPRTQVUYWMXMRFLQWEZBDSOPKUDERUAOTJPKITBMPIYRWQSBUHNCXVJJYBIXUODTQKJAEGRGXECROUMDFZACZBDRRVLOGKEXNGNNRXJGTNE");
    msg.ecount = 20U;
    msg.enames.assign("ORUUBZKFNQVHHMWFYUCDKSTQQGHQQTFJBHKEMURYJVZFXVGZRZFXAGUYDWIJWTVREMFFXAOJHASMYRMPPBOYUIDPCVJEFBMLVNXBRAWXESMJCWHSNXPTLSCHSVPQJANDEWGDYEZRLWOLRCD");
    msg.ccount = 234U;
    msg.cnames.assign("NDNJZYLDFYCTAEGLOBJOUSNWYPIBBKBMXN");
    msg.last_error.assign("TMGSDRWYMVLOMESUQAOZNDMVHHFJAGQBDGHOXVJGSEQDIRVBENVMQILIVTLPGEHWQWEFNSDWYHRWHYXRN");
    msg.last_error_time = 0.41795922354559045;

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
    msg.setTimeStamp(0.9719773088572092);
    msg.setSource(18698U);
    msg.setSourceEntity(223U);
    msg.setDestination(48625U);
    msg.setDestinationEntity(28U);
    msg.mcount = 167U;
    msg.mnames.assign("TJXSQWYEHCDFECYIOPXEAVKBFKRMDRVKKEKBEQOSTVTGYCWMZKJWYIFVQVNHSALGNLGSAZMXQCTYDLCLKZTHLCZUYBQJYSXETUJQQSIGUMBJNIDJGBDZSNXCMKJPPGUOIANMAIOJOLLAHAWPAHTZJIVRTGZNMNLZWEEPGSKYSOCZHFDOBWFXGLHBUBOKEDPRPFAXNIXLUHWRRUCMQRVVNAUJU");
    msg.ecount = 40U;
    msg.enames.assign("WTNEBGLVNJCPWGZXNONSTCFHUUITSLHHIDFSJHJMUUWBIUCPZMH");
    msg.ccount = 133U;
    msg.cnames.assign("IAYSHKBBJLCTJOFYWQCIKOXKZRRTFDVHZSPDZWVQCLNECLJUCAWLFVHEWIZZSPYNBPFGTHJYMWRXHABNQHYQJXJHQOTPITUZUYXSTKOIIYQTRAXHUUFNOMEYNRVSOFANUIBBFYJSDLKNFGQGPEPMTOVDJPKDCZQGGDDEMNDVEEWUFLGJSZCQEURBGGFPRLEUHBOBBWWNWIZYQ");
    msg.last_error.assign("NAKZVEOETHXRWLVSBOPTCTWSDYJSKCFHOSBSWHJXJMGAPUQOWRVUHTPBAORNXBY");
    msg.last_error_time = 0.7798443825037441;

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
    msg.setTimeStamp(0.8999090530505908);
    msg.setSource(42456U);
    msg.setSourceEntity(167U);
    msg.setDestination(21584U);
    msg.setDestinationEntity(49U);
    msg.mask = 167U;
    msg.max_depth = 0.6246902053006922;
    msg.min_altitude = 0.4317105258230205;
    msg.max_altitude = 0.5258631103250663;
    msg.min_speed = 0.06338726841525943;
    msg.max_speed = 0.035836565967157896;
    msg.max_vrate = 0.9981059693716147;
    msg.lat = 0.3054679431599703;
    msg.lon = 0.02720286234352043;
    msg.orientation = 0.608520502162252;
    msg.width = 0.42285792120157684;
    msg.length = 0.7995666073509056;

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
    msg.setTimeStamp(0.4894796344230764);
    msg.setSource(25767U);
    msg.setSourceEntity(41U);
    msg.setDestination(14578U);
    msg.setDestinationEntity(11U);
    msg.mask = 145U;
    msg.max_depth = 0.1573753903242402;
    msg.min_altitude = 0.6576233768877329;
    msg.max_altitude = 0.2883391697887717;
    msg.min_speed = 0.8085131437422646;
    msg.max_speed = 0.38825840391400923;
    msg.max_vrate = 0.8068793457583671;
    msg.lat = 0.46278406468164535;
    msg.lon = 0.34227970900801497;
    msg.orientation = 0.3614185288510199;
    msg.width = 0.5554898262710417;
    msg.length = 0.021868456580588003;

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
    msg.setTimeStamp(0.7421771293692894);
    msg.setSource(943U);
    msg.setSourceEntity(138U);
    msg.setDestination(38270U);
    msg.setDestinationEntity(99U);
    msg.mask = 171U;
    msg.max_depth = 0.06795313393470448;
    msg.min_altitude = 0.3751152788612202;
    msg.max_altitude = 0.7907141035527447;
    msg.min_speed = 0.334843243732858;
    msg.max_speed = 0.7844839248684646;
    msg.max_vrate = 0.6887855130032025;
    msg.lat = 0.8874050606983623;
    msg.lon = 0.19284536978310696;
    msg.orientation = 0.09305321285319201;
    msg.width = 0.892844220834873;
    msg.length = 0.7931420671430571;

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
    msg.setTimeStamp(0.6673641638568957);
    msg.setSource(1071U);
    msg.setSourceEntity(130U);
    msg.setDestination(62366U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.0797715127177594);
    msg.setSource(14164U);
    msg.setSourceEntity(222U);
    msg.setDestination(46116U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.45616800547729);
    msg.setSource(38307U);
    msg.setSourceEntity(94U);
    msg.setDestination(33025U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.003346016506865279);
    msg.setSource(58563U);
    msg.setSourceEntity(30U);
    msg.setDestination(45966U);
    msg.setDestinationEntity(18U);
    msg.duration = 56995U;

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
    msg.setTimeStamp(0.5620528676612286);
    msg.setSource(10369U);
    msg.setSourceEntity(173U);
    msg.setDestination(33126U);
    msg.setDestinationEntity(46U);
    msg.duration = 2565U;

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
    msg.setTimeStamp(0.25381761509352807);
    msg.setSource(36129U);
    msg.setSourceEntity(209U);
    msg.setDestination(63422U);
    msg.setDestinationEntity(80U);
    msg.duration = 29320U;

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
    msg.setTimeStamp(0.06241012337007246);
    msg.setSource(31905U);
    msg.setSourceEntity(254U);
    msg.setDestination(53757U);
    msg.setDestinationEntity(219U);
    msg.enable = 127U;
    msg.mask = 4203202704U;
    msg.scope_ref = 3336862232U;

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
    msg.setTimeStamp(0.31724258708712805);
    msg.setSource(1418U);
    msg.setSourceEntity(160U);
    msg.setDestination(44609U);
    msg.setDestinationEntity(6U);
    msg.enable = 84U;
    msg.mask = 3318707988U;
    msg.scope_ref = 2182650545U;

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
    msg.setTimeStamp(0.2390334080743125);
    msg.setSource(62809U);
    msg.setSourceEntity(165U);
    msg.setDestination(26488U);
    msg.setDestinationEntity(83U);
    msg.enable = 162U;
    msg.mask = 163138240U;
    msg.scope_ref = 912340745U;

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
    msg.setTimeStamp(0.993370870508782);
    msg.setSource(18493U);
    msg.setSourceEntity(2U);
    msg.setDestination(23899U);
    msg.setDestinationEntity(146U);
    msg.medium = 194U;

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
    msg.setTimeStamp(0.5414503043987058);
    msg.setSource(32358U);
    msg.setSourceEntity(55U);
    msg.setDestination(18794U);
    msg.setDestinationEntity(196U);
    msg.medium = 95U;

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
    msg.setTimeStamp(0.8004064043210114);
    msg.setSource(63239U);
    msg.setSourceEntity(175U);
    msg.setDestination(52911U);
    msg.setDestinationEntity(25U);
    msg.medium = 232U;

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
    msg.setTimeStamp(0.2451398832305326);
    msg.setSource(49980U);
    msg.setSourceEntity(182U);
    msg.setDestination(32474U);
    msg.setDestinationEntity(190U);
    msg.value = 0.3195901584099322;
    msg.type = 184U;

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
    msg.setTimeStamp(0.37597007490538925);
    msg.setSource(61889U);
    msg.setSourceEntity(50U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(94U);
    msg.value = 0.01345953480824258;
    msg.type = 14U;

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
    msg.setTimeStamp(0.14306974610108636);
    msg.setSource(8235U);
    msg.setSourceEntity(197U);
    msg.setDestination(20638U);
    msg.setDestinationEntity(74U);
    msg.value = 0.024783554440573563;
    msg.type = 20U;

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
    msg.setTimeStamp(0.6998563956006665);
    msg.setSource(62072U);
    msg.setSourceEntity(190U);
    msg.setDestination(36354U);
    msg.setDestinationEntity(218U);
    msg.possimerr = 0.3822795945218075;
    msg.converg = 0.9076524020551591;
    msg.turbulence = 0.6584088088996437;
    msg.possimmon = 141U;
    msg.commmon = 112U;
    msg.convergmon = 15U;

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
    msg.setTimeStamp(0.42500863807465905);
    msg.setSource(11447U);
    msg.setSourceEntity(60U);
    msg.setDestination(17156U);
    msg.setDestinationEntity(252U);
    msg.possimerr = 0.3795243892268303;
    msg.converg = 0.6930998686567823;
    msg.turbulence = 0.9285993869422461;
    msg.possimmon = 212U;
    msg.commmon = 166U;
    msg.convergmon = 173U;

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
    msg.setTimeStamp(0.04573935600221313);
    msg.setSource(8657U);
    msg.setSourceEntity(59U);
    msg.setDestination(50279U);
    msg.setDestinationEntity(173U);
    msg.possimerr = 0.9888159824305941;
    msg.converg = 0.8487897921137489;
    msg.turbulence = 0.7872129418860324;
    msg.possimmon = 97U;
    msg.commmon = 115U;
    msg.convergmon = 226U;

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
    msg.setTimeStamp(0.2891793796841785);
    msg.setSource(42108U);
    msg.setSourceEntity(34U);
    msg.setDestination(60360U);
    msg.setDestinationEntity(160U);
    msg.autonomy = 152U;
    msg.mode.assign("YVQTLDAUIPOJYDSHGUFC");

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
    msg.setTimeStamp(0.21827040971085376);
    msg.setSource(18754U);
    msg.setSourceEntity(236U);
    msg.setDestination(8177U);
    msg.setDestinationEntity(115U);
    msg.autonomy = 100U;
    msg.mode.assign("TZKPZZLIEETUHBKHRGXRZVFJIPJLTYEVUZNBJMDXAFWBEVJNPAQI");

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
    msg.setTimeStamp(0.782517661318973);
    msg.setSource(18022U);
    msg.setSourceEntity(184U);
    msg.setDestination(9968U);
    msg.setDestinationEntity(87U);
    msg.autonomy = 144U;
    msg.mode.assign("OUOUESNIMQEMRLEBDCNRRDAPCFZVRWPSDOJZNKMWDMIQLQJCZPCYTOJMGJYEBDHXOLZFBYTCORWHDSFKKSGIYSQUTNAUGRXMEXJVICHSCMTMULNNGDXKQVVIOUUWWBJFKPVQCENPJYZCXSDVHFKOQXJTWNVNIRRZTASWBXWVTGYYEEQKWUXXACRHPGRHPWLTHPSSEIGFILZJPYLGUUYLAFKHZGBBBJQMIAHNBPITDALEKXHVZYFVABQFZL");

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
    msg.setTimeStamp(0.6298182574010271);
    msg.setSource(55591U);
    msg.setSourceEntity(5U);
    msg.setDestination(32684U);
    msg.setDestinationEntity(91U);
    msg.type = 37U;
    msg.op = 189U;
    msg.possimerr = 0.9092001684890392;
    msg.converg = 0.2209977232998609;
    msg.turbulence = 0.20236877880448179;
    msg.possimmon = 243U;
    msg.commmon = 233U;
    msg.convergmon = 6U;

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
    msg.setTimeStamp(0.9289381372870235);
    msg.setSource(24284U);
    msg.setSourceEntity(228U);
    msg.setDestination(26222U);
    msg.setDestinationEntity(156U);
    msg.type = 14U;
    msg.op = 244U;
    msg.possimerr = 0.11232998110274683;
    msg.converg = 0.3463086844409283;
    msg.turbulence = 0.8906667772587267;
    msg.possimmon = 14U;
    msg.commmon = 146U;
    msg.convergmon = 221U;

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
    msg.setTimeStamp(0.6863071920536853);
    msg.setSource(51349U);
    msg.setSourceEntity(18U);
    msg.setDestination(63153U);
    msg.setDestinationEntity(225U);
    msg.type = 57U;
    msg.op = 138U;
    msg.possimerr = 0.7663417200500513;
    msg.converg = 0.7678422569441604;
    msg.turbulence = 0.6496484024302103;
    msg.possimmon = 33U;
    msg.commmon = 189U;
    msg.convergmon = 46U;

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
    msg.setTimeStamp(0.5582631620315018);
    msg.setSource(60867U);
    msg.setSourceEntity(234U);
    msg.setDestination(14289U);
    msg.setDestinationEntity(227U);
    msg.op = 37U;
    msg.comm_interface = 77U;
    msg.period = 43288U;
    msg.sys_dst.assign("YGVMBHOXAOLHPCFLSCDBASBRRBJJEREPASQMVCWXUDRLPOOTGUFSPNZFMIRXPWIGJVFYUAMKCWSUWBPKCYKZONNGFVB");

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
    msg.setTimeStamp(0.5295536398211808);
    msg.setSource(58259U);
    msg.setSourceEntity(218U);
    msg.setDestination(34825U);
    msg.setDestinationEntity(134U);
    msg.op = 70U;
    msg.comm_interface = 164U;
    msg.period = 17428U;
    msg.sys_dst.assign("MGYBUHIMEZGDHLCQEGIEDFKLVFGJHAUJESJHEAOOSIBZTKUZDWUIFFNTKNRMTEBYZPCDUXZIDRAXYFDVWY");

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
    msg.setTimeStamp(0.7424452137926558);
    msg.setSource(7555U);
    msg.setSourceEntity(119U);
    msg.setDestination(21167U);
    msg.setDestinationEntity(202U);
    msg.op = 16U;
    msg.comm_interface = 64U;
    msg.period = 35912U;
    msg.sys_dst.assign("OFYFGRZIGOIKCVVUHQXXBVXBSOOQLGSAPARKICEMGWEWMXGFNIPNAULEHZPRZWMUZ");

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
    msg.setTimeStamp(0.5565421912767733);
    msg.setSource(42810U);
    msg.setSourceEntity(102U);
    msg.setDestination(11398U);
    msg.setDestinationEntity(79U);
    msg.stime = 1665092313U;
    msg.latitude = 0.8680764936783212;
    msg.longitude = 0.8121658181327442;
    msg.altitude = 10854U;
    msg.depth = 49676U;
    msg.heading = 45535U;
    msg.speed = -24670;
    msg.fuel = 61;
    msg.exec_state = -113;
    msg.plan_checksum = 62196U;

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
    msg.setTimeStamp(0.29572588329092786);
    msg.setSource(15481U);
    msg.setSourceEntity(186U);
    msg.setDestination(26274U);
    msg.setDestinationEntity(39U);
    msg.stime = 3255655288U;
    msg.latitude = 0.3449271599097643;
    msg.longitude = 0.8301205222578592;
    msg.altitude = 60287U;
    msg.depth = 56345U;
    msg.heading = 26533U;
    msg.speed = -12917;
    msg.fuel = 37;
    msg.exec_state = -95;
    msg.plan_checksum = 51885U;

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
    msg.setTimeStamp(0.5464504267600282);
    msg.setSource(36844U);
    msg.setSourceEntity(56U);
    msg.setDestination(50780U);
    msg.setDestinationEntity(249U);
    msg.stime = 1528563874U;
    msg.latitude = 0.4418972277206077;
    msg.longitude = 0.819787339201668;
    msg.altitude = 46364U;
    msg.depth = 5055U;
    msg.heading = 20163U;
    msg.speed = -1773;
    msg.fuel = -25;
    msg.exec_state = -92;
    msg.plan_checksum = 26936U;

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
    msg.setTimeStamp(0.06497946375820118);
    msg.setSource(61703U);
    msg.setSourceEntity(95U);
    msg.setDestination(59192U);
    msg.setDestinationEntity(42U);
    msg.req_id = 16236U;
    msg.comm_mean = 93U;
    msg.destination.assign("TJYZNHTKNAVPNEHCYVKSCWSCWOUXWAMENBQIJOFFVKVGIDMBNXLHELHFXTXSGVCZSYQCMOYXWUGKJNTZPRYNFAIPRXLMOOATOXGWXLKKCKSRMZOCWHVPGUGRCBRRBVHDN");
    msg.deadline = 0.6717922710990112;
    msg.data_mode = 68U;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.27149913184447416;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MDEMTUNHRLSCHLKOXJCXZTAMBMFVZORSUFPXHOKSKVAJSPGPMBZGLQNCJLQFVTWBUBWMZLCWAKSUNCGABPVBCVBVDLAXHYOHRLEAITSOZJYMFZDBTCGKCXSJWEPBZTXZIHHEW");
    const char tmp_msg_1[] = {-79, -23, 17, -73, 22, -51, 39, -55, 77, 48, -110, -9, 96, 120, 41, -116, -20, -11, -42, 61, -75, -122, 18, -17, -56, 14, 101, -60, 34, -123, -121, -90, -105, 117, 40, -63, -7, 20, 56, -53, -85, -120, 8, -3, 29, -82, 56, -107, 18, 12, -102, 32, -125, 106, -7, -17, -51, 26, -65, 72, 75, -96, 73, -109, 104, 99, 114, 67, -5, -87, -72, 120, -65, 125, -84, 72, -17, -19, -22, 66, 90, -6, 5, -111, -4, 110, -17, -124, 42, -55, -108, 16, -22, 92, 83, -104, -11, -125, 91, -122, 45, 119, 121, 119, 24, 53, 50, -83, 99, -73, -65, -128, 77, 68, 19, 122, 93, 3, 79, 10, -96, -106, -2, -44, -73, 70, 3, 25, 93, 54, 13, 95, -125, 51, -122, 104, -65, 73, 45, 3, -20, 14, 126, 16, -89, -18, 19, 112, -22, -31, 1, -115, 83, 1, -55, -11, 122, 39, -17, 5, -93, 117, -91, 94, 18, -86, -19, 10, 4, -2, -24, -75, 76, 75, -84, 26, 11, 76, -55, -34, -42, -97, -36, -34, -126, -35, 91, 21, 58, -85, 100, 41, -38, 15, 0, 39, -46, 47, -74, 63, -21, -104, 19, -103, -6, -69, 82, 21, -25, -69, -90, -84, 126, 5, 27, 91, -63, -128, -69, 121, 0, -64, -33, 67, -84, -56, -125, 124, 12, -63, -96, 59, 7, 64};
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
    msg.setTimeStamp(0.7401787802871374);
    msg.setSource(49166U);
    msg.setSourceEntity(247U);
    msg.setDestination(61249U);
    msg.setDestinationEntity(141U);
    msg.req_id = 37273U;
    msg.comm_mean = 182U;
    msg.destination.assign("RQWMBFFSQUESHLHQLSVQQTPMNEEDFKCOPTLIIJOSZYAMRYQQYEEUDBUBABXFAVBLRGQSDFJCLJWSNZKPDWATYNPHNIYEVUGTCGUOZRIHKDWR");
    msg.deadline = 0.19716031609418527;
    msg.data_mode = 56U;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.5096849590634548;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OCBLWEUYNKYPQDSASGJMATKIDFQZXPXEJJIDXZOQBGGYGRHNFMZKBNVCWJJJTLXOWPMTZRBVWONRULAYCCRZIHHAKRTTXJHRBIUBPITPYAXGRQYGPKLAGHHNOFNXEEYILGPTFTHXQIJLMESGSTOIVWL");
    const char tmp_msg_1[] = {-68, -12, -27, -59, 121, -57, -29, 55, -104, 89, -30, -17, 119, 31, -8, 2, 98, 17, 33, 80, 55, -114, 96, -85, 36, 20, -108, 9, 44, 101, 103, -21, -81, -73, -119, 69, -38, 61, -98, -87, -49, -73, -112, -102, -90, 40, 64, -62, -4, -81, -123, 113, 107, 113, -83, -26, -91, -58, -2, -34, -35, -91, -13, 116, -84, -79, -73, 6, 110, 102, -94, 98, 58, 63, -32, 32, -116, 51, 101, -91, -67, -31, 126, 64, 118, -19, -44, -120, 118, 39, -20, -81, 88, 83, -89, -53, -71, 102, -92, 93, 55, 62, -30, -12, 64, 58, -63, -18, 81, 10, 81, -11, 46, -11, -6, 6, 2, -108, 121, -126, -10, 121, -128, 110, -109, 114, 47, -59, 27, -63, 18, 65, 73, -45, 110, -29, 57, 16, -108, -12, 124, -113, -10, -30, -9, 40, 78, 116, 23, 10, -116, -97, 65};
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
    msg.setTimeStamp(0.16158651708882565);
    msg.setSource(229U);
    msg.setSourceEntity(11U);
    msg.setDestination(41237U);
    msg.setDestinationEntity(92U);
    msg.req_id = 19043U;
    msg.comm_mean = 147U;
    msg.destination.assign("HAIEUSSYGVCKBLIOYXLTECNTATTEKGOBIMGSYYNKZMXXCPBQHYYGDAYSKCYWAFXXXOLSWDDDDUPJFJZIXHLZMANLUWKQUCIFKMURCBVDKGFJZGVSIJLHROPWPNJGMQLQZHQPCJZBUKTLZNGGQCAHNRRRRFXHHIIMEOZP");
    msg.deadline = 0.2797697294465581;
    msg.data_mode = 79U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UGAEBKSKZSWTAEKQDLDPXTWQFGTSZGWFOCRJBIMGBLMDMYRIHABZUQAXXYLJGVRPIPSMZCLYFLRLTJYCNYNIWFBTVOLTFJRHVMLUKIPBXMFGPINRUOTXPAUVFQKZIDSQCNPMUNCOVYPMOPBBZKKPCQRNXJFAVDDAWMIECESBZEBHSLXYLIHHUTENMNGOKWEQAVZVFYUYHHTZGUESRXAIOXQWSJYGGCSDCHDVKVTOZQOJUAHDFRX");
    tmp_msg_0.lat = 0.11178938913973491;
    tmp_msg_0.lon = 0.5628175772091338;
    tmp_msg_0.depth = 0.9644139666822483;
    tmp_msg_0.query_channel = 5U;
    tmp_msg_0.reply_channel = 76U;
    tmp_msg_0.transponder_delay = 198U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DTINQOYOTFELQYAUVNBXKGUIOFTLTRWUEAGQSUWMDOYZJIUTIHWFBTVIGZNFPICNXOEWMDYX");
    const char tmp_msg_1[] = {-107, 107, -86, -66, 16, 58, -50, 68, -17, 123, -65, 23, 116, -85, 45, -104, -125, -114, -72, 43, -12, 92, -85, -75, -63, 8, 67, -59, 42, -80, -83, 52, -29, 120, -22, 31, -66, 12, 20, -31, -23, 98, -52, 48, 91, -114, -64, 54, -8, 73, 36, -63, -38, 52, -122, 82, 94, -40, -94, -17, -4, 117, 6, -57, -46, 50, 33, -113, 75, -105, 39, -54, 89, -40, 123, -68, 38, 68, 118, 57, -31, -113, 105, 51, 31, 77, 95, 47, -87, 69, -75, -71, -110, -97, -48, -68, 20, -67, -44, -36, -2, 88, -64, -66, -39, 8, 16, 75, -55, 1, -128, 93, 74, 44, -19, 32, 41, -117, -28, 23, -65, 109, 28, 100, 60, 62, -44, -61, 108, -24, 75, -3, -14, -44, -24, -6, 100, 55, 84, 56, 54, -60, 11, -25, -58, -30, 83, -102, -29, -27, 44, -50, 0, -120, 123, 43, -19, -8, 123, 110, -78, -19, -115, 76, -43, -67, -71, 81, 41, -100, 88, -101, 68, -70, -77, 106, -103, 66, 101, 81, 79, 91, 23, 77, 102, -55, -92, 107, -57, 23, 16, -110, -53, -67, -42, -5, -44, 13, -40, -84, -86, 108, 65, -95, -20, -74, -88, -80, 98, -127, -10, -68, 21, 106};
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
    msg.setTimeStamp(0.6279043848383972);
    msg.setSource(63395U);
    msg.setSourceEntity(123U);
    msg.setDestination(46120U);
    msg.setDestinationEntity(32U);
    msg.req_id = 24610U;
    msg.status = 194U;
    msg.info.assign("KVFUDBPGWEEPXQPETALQFKWXUSQFCHNGXYFPDUARJRJM");

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
    msg.setTimeStamp(0.14603379353436097);
    msg.setSource(19109U);
    msg.setSourceEntity(25U);
    msg.setDestination(57266U);
    msg.setDestinationEntity(37U);
    msg.req_id = 47147U;
    msg.status = 43U;
    msg.info.assign("HERDDJFTLTLWNIUNKZQZEMXOJETYRXIMNXKGRCQPFHWCZIERBYKAMICUYETBWUUDRLQZYVOGBDODQXIAFSZWMIBLALZBLGFONAMKUBGITVVRYBKDDUIOPDCQMJYTGPLPUKKJAZWIMNKGLTJACODZHFLSRPQBFVPMSPSHZMOAKG");

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
    msg.setTimeStamp(0.4417103036680228);
    msg.setSource(8799U);
    msg.setSourceEntity(81U);
    msg.setDestination(34042U);
    msg.setDestinationEntity(208U);
    msg.req_id = 17135U;
    msg.status = 188U;
    msg.info.assign("QKFLLBXHUGLAPPPJLGRBYYTOBJJLRIVABTEGPSJDXKCZTJJYVTAOQFEIOEHEPNPCSPLWXNOYUAAZDEAGKFVONYUTTKUYFVZZLVSGPCXYIPWXHMGBEWHAZRNJBZAWJKQKUWMNXEVJSTIYMAMYKHUYTVREILNBQFWTNMCRWNCKFCQNDBDJHHQSHWDSZERHODXEQAVPSUMFVCMXSZDQDKGBIBGMTRMX");

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
    msg.setTimeStamp(0.7881725202924372);
    msg.setSource(27614U);
    msg.setSourceEntity(90U);
    msg.setDestination(25678U);
    msg.setDestinationEntity(118U);
    msg.req_id = 26851U;
    msg.destination.assign("PBHRBWCZEEZKGMJAFLDDLSTCQASYHDGGKFHESKUGTJNCVOJTECYNTJADFQIPAOLAABRISKVJONVATICWWUXYJGGURGSEFZXFIPLVSTMMXVXXZHNPWWPNNUWSSVILYDOFINNVZRJUHKRORCLKUUKHYKDYKQDMPIZCLXHEIPMHOOUZYOQPWNLGRTAJMQBYVOFEEBQWLQZHUBEXSR");
    msg.timeout = 0.4280196326735086;
    msg.sms_text.assign("KTAFFOOSSQBXZKYGPWLHCKZJIDSBRDXCDYCTGURQUQKRWMEUVAIMBQOZLVEERLTXMQZRJIIOGDDLJFQORPFGFLBMVSJCNMFAZUQBDYEPVCFJXHHAIHMTBNPXVEIHNJKSNHXUTLTOWPMBICUYKYGOKKMAPWUVHOIQAPCPVSOXXZLHICWSXRNSBWBDAZNYWTWCJCAZEQNSZHELVVYVYSDBFPWTOGLTGZ");

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
    msg.setTimeStamp(0.6667552908311365);
    msg.setSource(3068U);
    msg.setSourceEntity(132U);
    msg.setDestination(12209U);
    msg.setDestinationEntity(69U);
    msg.req_id = 16220U;
    msg.destination.assign("ZXNWVULJSWYGHACMOYUDRRECMRPQVVIHXSAITVLNRYNMGDRDARACSHDZXTCUSAHIDOOFQGEBQQOZLLFFXVQQLPFXCOSHKRDNJBBHUQMDAPZEALXOQCGHBJYWWEQGPAPUZECPWFXZHOKTNDNAICW");
    msg.timeout = 0.5686862154747712;
    msg.sms_text.assign("GWMJEDEHQHILFQSUPRFQEESBHIUWTPKHOSATKKJOYOBBZTXXHABVIBEPWTJSYVZZPAAZAYTCZRFVGRZIMZDEXMFIDAGRNKAOXMTRNKIMJQVGWXSSUEVPSNDLTCFQCKXMVFUYCMPLZQGCHLNWDIQFVVEBUCGQUJIOIOXGFYPJJLELWKLXVWSRQJ");

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
    msg.setTimeStamp(0.4384939946598708);
    msg.setSource(57380U);
    msg.setSourceEntity(72U);
    msg.setDestination(44585U);
    msg.setDestinationEntity(26U);
    msg.req_id = 29654U;
    msg.destination.assign("YQGOHEGLJGTSVRXBTBSFPDNMSXHWBYBNLBNLMNQXLHUOETASQACGJUGZWRAYYGIHIRWIZETHNGMKPHQKNCFLWRLICWMPWBKGXCUPCKQMUKYUIOOEAFBUWDLWIJGNWDVZPHPTFCUROVTBZXXILFFZVDZSJXVJVVKMQVDKKVHHIULFDMCDSKKPREDOMCVZFJLJNEJYNZQRYOAPYSABXSSS");
    msg.timeout = 0.21456219488009487;
    msg.sms_text.assign("TLUWROABCFDDXEKUZUKAQF");

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
    msg.setTimeStamp(0.7372775385964406);
    msg.setSource(13379U);
    msg.setSourceEntity(114U);
    msg.setDestination(30598U);
    msg.setDestinationEntity(33U);
    msg.req_id = 46U;
    msg.status = 213U;
    msg.info.assign("NYJRXCMWDGDHBFIQXKACNS");

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
    msg.setTimeStamp(0.6211426571042292);
    msg.setSource(26385U);
    msg.setSourceEntity(38U);
    msg.setDestination(23814U);
    msg.setDestinationEntity(18U);
    msg.req_id = 1004U;
    msg.status = 194U;
    msg.info.assign("JIPOMJVJYDAEATDBRGSPYTHIMTAWHGRSIQDYUXQZPOOWJGVMVAAEIEHKSFNPWULXQSRIWTTOGZJGJKEWAJDPHFWCLGOCUCGDYIQLVXOENVKCEZXWAQZMVXUJGROUUDMSTISBHNDGPGVNZHQVCWXRYLYNBFWCNEFLHSUCZ");

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
    msg.setTimeStamp(0.640673478729507);
    msg.setSource(46771U);
    msg.setSourceEntity(110U);
    msg.setDestination(32541U);
    msg.setDestinationEntity(183U);
    msg.req_id = 37246U;
    msg.status = 183U;
    msg.info.assign("ORNAEQAUMLVCWNIHGHQZAHXWAAGGTPSEEEWPHRVIFQTUHNQJDZSWACOGOQPRJUEMFYGXLJIKIDXVTBGLDSBDQSMCZCIOXFYBYSRCUWQFILMYQIXYMNXGVJEXRTSJYHCPVRZQBZBOMYBKVWNAEAULEWRXYOKPZLNZIJYHFBNFPGOIDLZUGZWVRTANKBJMUKDJZKSMOGCUL");

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
    msg.setTimeStamp(0.11442066267518292);
    msg.setSource(59626U);
    msg.setSourceEntity(124U);
    msg.setDestination(39556U);
    msg.setDestinationEntity(214U);
    msg.state = 122U;

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
    msg.setTimeStamp(0.3260016616800582);
    msg.setSource(33072U);
    msg.setSourceEntity(92U);
    msg.setDestination(48710U);
    msg.setDestinationEntity(138U);
    msg.state = 215U;

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
    msg.setTimeStamp(0.692737359973157);
    msg.setSource(26039U);
    msg.setSourceEntity(64U);
    msg.setDestination(47830U);
    msg.setDestinationEntity(28U);
    msg.state = 164U;

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
    msg.setTimeStamp(0.3575992473823477);
    msg.setSource(43159U);
    msg.setSourceEntity(127U);
    msg.setDestination(37600U);
    msg.setDestinationEntity(80U);
    msg.state = 113U;

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
    msg.setTimeStamp(0.8999896850865565);
    msg.setSource(6983U);
    msg.setSourceEntity(188U);
    msg.setDestination(19297U);
    msg.setDestinationEntity(194U);
    msg.state = 110U;

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
    msg.setTimeStamp(0.8843595624799604);
    msg.setSource(56125U);
    msg.setSourceEntity(3U);
    msg.setDestination(20391U);
    msg.setDestinationEntity(38U);
    msg.state = 129U;

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
    msg.setTimeStamp(0.6916642485773994);
    msg.setSource(20180U);
    msg.setSourceEntity(183U);
    msg.setDestination(59515U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.0969036086780729);
    msg.setSource(38740U);
    msg.setSourceEntity(207U);
    msg.setDestination(21611U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.9186327843946221);
    msg.setSource(2411U);
    msg.setSourceEntity(17U);
    msg.setDestination(52252U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.28201690703379234);
    msg.setSource(50780U);
    msg.setSourceEntity(14U);
    msg.setDestination(2872U);
    msg.setDestinationEntity(201U);
    msg.plan_id.assign("FTVSPNJJVFRIZZOFLHGLUISLSPZMKQAMZBYEYBOTTXHXWTEPRXRHNRVDCYOTQFDXCKQHCOUHVJQMENRDBEJISMEIQNCLFYWECIHAAYNUZEBN");
    msg.description.assign("AJPRRVMVTITXSWTRQZICSGFUJPTDDENCRGETZYSISIF");
    msg.vnamespace.assign("JYEHDOZEBQJHMTHIUFDLWZFDMKCJHENIDXRVBZMMBBACXFDOAFFUWVFLAVLXNGQF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YFISNYGPALZHBLQCHCYXIQDDDZMKIACQJXGBESJDAFQN");
    tmp_msg_0.value.assign("UQCEKMUGLJIDUPVQUOBRJTGNFVHLVJHWVTWRBDPXIWIRQJCYHUSXDDMQVWFABOK");
    tmp_msg_0.type = 105U;
    tmp_msg_0.access = 112U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YIGYFFWZGEYVJHQTVHLMPNOWXAIOQQDLZPXDDRWXBKF");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("XMQJQENDKRBOCYWCRSOJDZOZPUMUZYFXSUZQRBWVLCLPYUQAMXPESQIRERNVLGLVWGSPPBYAMGEETIDAKXVSCWLAXKPNVTZOTATYMOXWUNHUINWDGPAKMOJFKHVHFTEGNKIHGOCLOJAFVFQMUICBEHRYCTQYFCIOLDJMGWSZAVANXAWYXJYLZIBZFKKRHUFMNEHQEUEZPYTXBQHIFSWB");
    tmp_msg_1.dest_man.assign("CHXCYZAIJBDGFAZONBPCRPBBPWLCYKUTPYOQHERJKSNYASFTQLUQXOIBAMLCQLONJXZSSVTQPEMAGEYQQGGWZZLXXGEWFKRINNAVEXYHKHVBRDZOEUSRWNKMUJCWDYDSIOHJMPTKIFRHLGHKOPIOABLTABXLFOVVQTCHIBVJDYTVECEXUGDMIDNYVFQIZGZDEUM");
    tmp_msg_1.conditions.assign("RNVTECJKZUCGCNLINWEMEPWXCWUNFRDKUVEKEXWZTBSSRTTZGFCBRHWBGMKTPQYHKFVJNGOLASE");
    IMC::Phycoerythrin tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.26889806463087396;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::LedBrightness tmp_msg_2;
    tmp_msg_2.name.assign("YTGWFDYZBOENZJJCDAEPBLIVVUPVGNNYEMPMIBPCQSIWLROHTDKRCMRYMRWUVPJYGFRIHFCAHYURZDPU");
    tmp_msg_2.value = 123U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.6332035246931125);
    msg.setSource(35916U);
    msg.setSourceEntity(44U);
    msg.setDestination(38021U);
    msg.setDestinationEntity(33U);
    msg.plan_id.assign("VYJONAASSKKVLAZXBPGUGZJUQNJYDOIUUUWOUCXJQEKXVHXDFSPAOHDRSGNCSKWIXGJPZZWPERIPTYKI");
    msg.description.assign("HYHSRBLRJCEWAYYIRGLITV");
    msg.vnamespace.assign("PCCWFOJAYQFSMVOWYXDPTQOLTFCRJKZYTRKLZWZHSIQJJHSNVETRFYNPLTJPEGZSLGICMOXDKJLNQXZWVEARADVQJCCHSUFHWMRVKGCNZUMOIUGCQXBJSOVA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IZDGTWKDCRZHUCVYCRXTFFUAHIPCUTJBFCPZGDYSXARDKLBPWGTGNMKFUKTHSMMZQUEAPQQLINEVMQHBYGGGESZDRAHRWFUOXLBGCNXDQDERQDDMKRQZRWTPLTWXLUSIXLSOMAAVIKKWOYNFSKCLHJKKWZFRVBLQYXJYQZPYUBWVOICJPEZSBFJQVULWAWJBENHIFOOZXNHRCOAOENJMNDESTYPGXJBVNMTTVPIXJYOCAIVVGHUYFS");
    tmp_msg_0.value.assign("EETUOXEFQRHSTLGZIAOXGYACOWNVNMJCNMHVIBYSPAHCODTXBSFNEUATWSQIKKUYIZEOVVRLGYTMZRHWSWIGRHSJLJFXUQNUDKZ");
    tmp_msg_0.type = 232U;
    tmp_msg_0.access = 6U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VFYYKYGIHYGGUXWMHIIMNKSRCGCXATQDKDMGASKGETEQPWVROOOJEHVDDFZBUPUHXPBDOWVCLFGVZLRZEHWOXVOJLSWWBCNBQKWCTQBEAY");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("GHAOSQBBXQDRIPDOCOPMMDKIUQJLBTZJRYZVJCDUMCLTRXJFXWESHVGQFZHATOFTBLHYLBAJRKZAPEGFLVYYMMXGDBBQMXLQZPSGTWKJSXPIMHWOWWSERGCSZURTZFCOCWXCUWOOIGEVKNYKKVIRNKAGOVVCFUQCNNXPMQSBAJLVNFZKHYDEZ");
    tmp_msg_1.dest_man.assign("HRQTOEZRPKFBDFSHTQACQHGZIWUBGRBUOCAKDZHPWEOKWZLMGENLFMWFONKDXTXVDAHTSDXYSMWKYTM");
    tmp_msg_1.conditions.assign("LYDCXHWXGSYSIVPGPZIBVMZSLONYJGXKMBBLRCJDDOR");
    IMC::QueryEntityInfo tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.id = 227U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::IdleManeuver tmp_msg_2;
    tmp_msg_2.duration = 60202U;
    tmp_msg_2.custom.assign("PPNMJPPHLUOJDUDKMYZCZWRHHEMHLWRGQHOOZIYVGRHSQVKGNZVKPUKEQLODZCFRXCAAUXXQNPSTFYNIFLYITECABVSDEQKRATGYJXOZUSFMENGRDFUIIQWOBQU");
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.6004699126346431);
    msg.setSource(26803U);
    msg.setSourceEntity(13U);
    msg.setDestination(60659U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("TRVHXGRLQZDQDVGRCNBNJXIEQSOESLMDUAIPYTRRNJQUKFJWGGIYWXUATFJHDXTZFFNILHOWBGSBBHAVOIKHIXLGYZDZMUTPVYQCPNNVWCNWAXZGPVLJFVOQUQKZHFVTTBXKFGMYROSZCJZNXLPBECWSDMLLJYUEPHHHOPEOVMISTKAREZTUKBMXSSETYHYJNCASGEQKZOAREDOWBRMUBAFUDIAYAPFM");
    msg.description.assign("VABUPUHREDFSFDGGBSMMTYXEHOWPUVONCWKSGNYMFAIPWDJCKNPBGRAWXCRVNISFCUREVEPXOXNHXMMWTNHTBVWYUEFJDUSGZHDHZN");
    msg.vnamespace.assign("LQBQDXBMOGALMXWBZXPXKHHDQOIICSYKPMWXBUEASFKDCNRUIPDRTWSECVDBVGTUORGJXROWAAUNYHSRXLLTFTLPCHRTKCMFOZVGIJIVCAWZLGJYDXQWDPTEYHYPGBIFQJSZBICHJIPTLZFOVLSEQN");
    msg.start_man_id.assign("TZZWSJMXTXBAKHHWDKMMPZPWNAVPFPGGWTBXKKFHYUVNCLNOYVDUUGZRVYKLGEAOQWIEHQMMNDBVJSDEPQTAUJUJPRTAUFITXCCXWAZRPUZBYMFEQCVGIECHSNPEZLSCVDROILPOVKSXOUCHWIANSGKBMOZFBXNSMYL");
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("VBCXOFGQZEPIFRGUHTMMPGUNITOCOLEPJSASKRWOPDBLSFYXGPFTIFCKNMEEMXNBDJDVTURIJZAFXQUQVGVYINKRMGY");
    tmp_msg_0.lbearing = 0.42145656234592765;
    tmp_msg_0.lelevation = 0.7551799711796878;
    tmp_msg_0.bearing = 0.5276817651278412;
    tmp_msg_0.elevation = 0.6104239507350465;
    tmp_msg_0.phi = 0.4427758903099849;
    tmp_msg_0.theta = 0.6977372162154974;
    tmp_msg_0.psi = 0.7351536147109442;
    tmp_msg_0.accuracy = 0.9740042081428989;
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
    msg.setTimeStamp(0.3514782952940734);
    msg.setSource(26626U);
    msg.setSourceEntity(12U);
    msg.setDestination(15713U);
    msg.setDestinationEntity(19U);
    msg.maneuver_id.assign("TFXRTYQOISEJZOHDRIVXNWMYKAPLBFDNGVRWAJVWVVFLTCMGIXPTQAUANAIABUSHYGTZVGLQOWVFSHISDEKJWHYBJDQWPMZYZLNEBMNAWXIIONENWULPPSKLKFKNSDCUZDFLCOJQEBCUBHRPLLOQOXYNOZQDAXTCBSMMSEGUEVCBIYKFDWBYVURRCXGDZKFHYUHEKPGLZGXWMVGMTKZCBIHOQCFMMJQEJJJGPTYORQRHXDNAPAKCXTSFJSZURR");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 27268U;
    tmp_msg_0.lat = 0.07860961272606581;
    tmp_msg_0.lon = 0.6622793507913359;
    tmp_msg_0.z = 0.5298669694076995;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.speed = 0.5970039122865761;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.bearing = 0.9518367754412924;
    tmp_msg_0.width = 0.5944220322183512;
    tmp_msg_0.direction = 82U;
    tmp_msg_0.custom.assign("MYWSEBSROUJBHN");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.9222735684155567);
    msg.setSource(32820U);
    msg.setSourceEntity(211U);
    msg.setDestination(46106U);
    msg.setDestinationEntity(78U);
    msg.maneuver_id.assign("XEKTBTSMGKRWWIDSEVLUJKBMEKUSSGFIQQAGRQUVJILEFSANPTXIEGKDGNRFMNWRKPSPTMWBEVLJFEDHXJZRRQFTRALUZXVIYFNOGRAZNXZJHPYFTFCOZSDXECNAOOJWTCEJJCOPIWMJDTUOMAABGDYH");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.19837088054471597;
    tmp_msg_0.lon = 0.417154271559512;
    tmp_msg_0.z = 0.3176236413026211;
    tmp_msg_0.z_units = 104U;
    tmp_msg_0.speed = 0.9383111765719175;
    tmp_msg_0.speed_units = 88U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0057062412330677326;
    tmp_tmp_msg_0_0.lon = 0.47064971635305053;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("ANHRXTSFROWGVXMBAPERKVHFG");
    msg.data.set(tmp_msg_0);
    IMC::DvlRejection tmp_msg_1;
    tmp_msg_1.type = 151U;
    tmp_msg_1.reason = 111U;
    tmp_msg_1.value = 0.9303311498899306;
    tmp_msg_1.timestep = 0.3618976391785589;
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
    msg.setTimeStamp(0.416824996642315);
    msg.setSource(50802U);
    msg.setSourceEntity(92U);
    msg.setDestination(26346U);
    msg.setDestinationEntity(177U);
    msg.maneuver_id.assign("EHSGIXTDXKJYWVMYXTQZYETNOORCHBXGJEPHFKGRZXAQCACSDBRKUPIPKXQHRECJTLTUPCKJNKMMZACDEFWOFL");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.09577048436130176;
    tmp_msg_0.lon = 0.21787583344056982;
    tmp_msg_0.z = 0.0222821678602263;
    tmp_msg_0.z_units = 237U;
    tmp_msg_0.speed = 0.8287326051923939;
    tmp_msg_0.speed_units = 229U;
    tmp_msg_0.custom.assign("OQAWOARZXGYXSNCBFRILNHZXZIRZLGSDBIRKKWRTCHDXMLJPTWDKPXDSWMJVWFSLFTDHKVYUEJJH");
    msg.data.set(tmp_msg_0);
    IMC::Teleoperation tmp_msg_1;
    tmp_msg_1.custom.assign("AELMBOGUNASMAZCVIBERYWRLNBSZFURQEIFPZWLXYZOHJLMAFEYRFCKKOHJHZGHOVXTTWJMPUMKPAQMCRAIMJGVDZQDODECMC");
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
    msg.setTimeStamp(0.640216755715723);
    msg.setSource(55939U);
    msg.setSourceEntity(166U);
    msg.setDestination(37051U);
    msg.setDestinationEntity(173U);
    msg.source_man.assign("BAUXPRKGHOOICSYGADOFKLPQQDWLRJISIXOAUWMJRSCTEMZZCCBKIQKDRMOSEARAZVIUJNFVHFDMRXFYWGUODNSGJ");
    msg.dest_man.assign("XFOPBOOUIOKYPOQKZWDZRCDGYNWMXEMSAKATQYKXUXCQVHJROUWLGIKGAKTSROEMEYVCLWZQBFUWCHPULCMWESPEQSAWAGFZELATSFDJWJRKJVIQLTUXAGSUIVGREVHPLPFNUVPYXYNNPDRJDTAIZGZRYDVMYHCNWLEFNOFVQMA");
    msg.conditions.assign("NOYXQLQLLVHGZRJEPKYOMKEQMQBUAEHVANKRYCKPMSGGRWKMKLJYNLIZFPFUFEEVFHWKBQMZXSKJBADXATPJOVCZSQWVXDRFOYDFDZZWDHVKTQJNTNCWXTMZXLBFOUPPXMOCPTSBOFIOVRGUVYTXCBACRCYUL");

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
    msg.setTimeStamp(0.4397750301251867);
    msg.setSource(8165U);
    msg.setSourceEntity(64U);
    msg.setDestination(57199U);
    msg.setDestinationEntity(185U);
    msg.source_man.assign("ZVUDCTWJGBITYPSEPPDWDCKHXPITOIXCJRCTBEHWRTHQLFFCDPIMRBDDTEBKZTABNOHWGVCPCIPONMFCAISSHVXQVQQJPRUHULREUYGNLXAWQGYHDFZRXOVQMFMYXFLVOULAJZLXQASERBJKNYUKJQOIIISAKJKKZOKYXRCXJFUWUMMASAHKJ");
    msg.dest_man.assign("AMGWKORKTQJZKUNGPFVZHLPXHYCGXGZAFIMGZVGDOPWWDXNHNRJJPDYXWSPQRMHBDYFSPTNGOMFZDBXYLWEUYSBWHCRQDFLCERIDQQFMBUFBSBJRNMXHFCLEAASIYIGORTMZPNTSENOMFTHCIQXJZYRAOYBDAQHKSXVHPTKTXKAQFTLIJECENQOMKEKYEBLMISZTNGHVVDSAWWULBLBSVEEUCCUJLROQORJWVCVXIKNCJVUGOWPUUATZULIYJ");
    msg.conditions.assign("EQTJTHINFZZYPCLLKDPIZNIQZYLBWHSTEFSNFZJPRMULRPFKSPPWUGAAXBZHAWVKGQVQBEMPIWCMCVCIEJOBZCAOOEGTORJVNSYXXOBTOKXRZDMQUYVBARZX");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.797652560416086;
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
    msg.setTimeStamp(0.7831389389563228);
    msg.setSource(33854U);
    msg.setSourceEntity(184U);
    msg.setDestination(37363U);
    msg.setDestinationEntity(240U);
    msg.source_man.assign("DBGUJYWXSMVUEWZADUMFTJZEVIKJFHNOFBVZFBHSSDCJMAIQVBFVLHFQXFPRGJAHWLGOOABS");
    msg.dest_man.assign("XESEGCCCVLXQKOXBJIXVSKRANWGZXUALJQMFDAERIAMYYYDNSXVSDETDKNAIBIUOKUMZLURHPNVFEZEFPDKNSGIGHUPAYYRYOYJSOCMEZMDMCTHFNVOCOWDZANQEYVUNMKWIFJTWQZBQJAVUWSNPHBKSTJGPAZUFFRRTLKUHMMXWWRJBBYFGBJQEWNG");
    msg.conditions.assign("LGRKNQNDPFJPVVAWYEXWYCFDQXEJEGMKCLHZWTUIPMSCSANBTBSTIXMTEESOFGRLAGKSCEIKPGFYCDBOWIHAXMREJQBHTUTUWYZCIPVUAKBZJ");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.19346743149878765;
    tmp_tmp_msg_0_0.speed_units = 68U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 56496U;
    tmp_msg_0.custom.assign("PDDYFJZNDRFLKBWQIWAZTBUIKHWGULQBJYNQICIUDUMUKBBRLJKLUWAIRESQQBVLKNJVJOBCWAPQOISRXVJVRVYYZPACZGDKPNDTCEDPVDTICTFBSLMNFOOUXXEXSXXOVWGDJTO");
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
    msg.setTimeStamp(0.6489584232768496);
    msg.setSource(12141U);
    msg.setSourceEntity(168U);
    msg.setDestination(2934U);
    msg.setDestinationEntity(173U);
    msg.command = 206U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SQOGPIPBACQDTKQFBKZJVECXWLCHUPNRKXLWXQIHCWKTBOIALOFDVKQIYXAZDUAJZXUXGUMCYSVLGSZCHQJLAFJRTCTQOSMNFETNZGNLPHTVRIIKLMTBVCMVDMFHRPDIUQNZQHDGGJJUWIYREMXYZUXMFWCTYNX");
    tmp_msg_0.description.assign("QGOKIMSUDDBSZSYKFKKEHOTRFBUCEVJYAVPPDXGCUFBODZAKPOHYSRDXFBXURSVPYXSRWNBXZFIINGDJCPWSTILOCMMOZLJSLBNGRCHPRHPWEYOMHFAUVVVCUJUYNOQATYWZWCNLELGYRLDGMTIQLZGDUERNPQVJKKATVIQHIPTHAETZWKFAZETMMPL");
    tmp_msg_0.vnamespace.assign("HEBNSSPKLJE");
    tmp_msg_0.start_man_id.assign("UDTEGWOLQHLDYJRESUFFXASOXVUMLPGFSAMRVNKCZYRKQBTHRBALUILXDPSEHFILFSETYVKJVEYAJOZPDOEFGWMGNTRYGWWQFLZIWQRLSSKQHDNNQTLZNUOFYICDBTBIWSVANNOXGDJZXQPANTCKVXYMFICZMWUXUJEHONVZDYRKTBYIKXVBWJJPCEIBPNTMPXOJMMKSTQGHMMZJGARSQXOGA");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("DGBIEUAYJSHGZAFCMVRPDYOHQAUTOPVZDARYXZRXPGRCGBHGRSLMGLKFFUKIJZTFTMHCOWAFSTLEIHBBZVZZOWPNUXNWDWVPYOSBLSPDOZFILATREZYKBBPYTWWGGVRNUJCKARXXNGKAUM");
    IMC::Elevator tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 62964U;
    tmp_tmp_tmp_msg_0_0_0.flags = 78U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.1445938911491763;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7146401686700224;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.9126895881651068;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 173U;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.08411509916245286;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 23U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.9582973367696274;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.4035927395861607;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 27U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ZYXJGBSOFHNVWJCPBKTIISRMMFXXALEGKXYTPDNOVRELDCHGRLWTONMOICRRWCFTZGVSOYGYAMEXJZSIDASZDMVAHHKGNIBZMNOWCSMTUPAJOKWLSQGFUQPQTJCWQDPGKQCNNZTCTZAKPDKIEMDOHYABXUBXAFLVSUQZTKYIQEMUVZHWQEMDDBYUJXWKOEAZNIJQEHVFFCBUKFJBSLYTGLNJPLVYCHYRHUJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Current tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.06957630556696115;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JHJIBXJWPCRQHNTDLZOPCDPRYRKXFJOQWZKJVLGECTIKPSMQMYZPJIJIBUBVBRIBGXDGWUWDXHVYNGERSILGSFOAHTPVCSNBOQAFEZYZCLAHGYQTYITHPHVTEOEYQNLMPKLBNXNCFS");
    tmp_tmp_msg_0_1.dest_man.assign("SAEMCQMGNLTTRYALNVPFRHVYDZEPBPAQHSBHDMSTUEBWB");
    tmp_tmp_msg_0_1.conditions.assign("FTNGOYLCBCDMTKYCINJRUOGHOEXRGEICXZZCVXAMSGMYOLWIBBGTZDYMVTYJSQNLPQTNQXXOKCEKGOSDQISADDCWYFOHFDEJQMDFJGKFLPLMSZNYYZJVZEAUSUZUIZUIAXFVUNJAKRLUTPPROJQQFBZWUMWDV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Collision tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.19527539673096883;
    tmp_tmp_msg_0_2.type = 54U;
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
    msg.setTimeStamp(0.5573880314890228);
    msg.setSource(27439U);
    msg.setSourceEntity(60U);
    msg.setDestination(12478U);
    msg.setDestinationEntity(124U);
    msg.command = 6U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NTYEQPETONERUWWMVJJILSRBUBMKLYBOZRQFCMSQHDACXSTJXQXTGCDAYAUWWHYWNFKYWBLSOPGMVSPIUXKOQEGJMCENHEDKDUAPHBSNWXGZXGTRTLOBBADLRSGIRMVSJVKMJHQRVIEAFGFZLEKKVTYFFGAVZLXUGLOIQTPNWEJJRCHYNZOYMRQIZVYFSWUHHGJMFPYIZVJHCCP");
    tmp_msg_0.description.assign("EWGQGIZXFCPQVZDRBJHGIGRNLHURPMJVAQYEZJUAICBDBABVEDIHFTUAVOMMRZRXVFCQTTOYUNZBKSEYHDJUASCDKYDMGEVRKXOKJZJECSXPKCDWYRNHWLABEZXCHOYTGYHYKJMQXOFLNAWIVSKMIVZLAUWFFBGINOFWGAOUZXNNNL");
    tmp_msg_0.vnamespace.assign("IPDVRIBIREOROBMJHEOKENUCHUEVUZIPZKZFWBNTKSYVTRYBUQBLQBLKSWTSSWXOFSUWC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SWMJPIOEDQLFXAYRMIVOZYQOVHJBRLQZCLIHZSUBKFARFINNWUVCFZCIMNGHXCEMUPVEVWDNAFTLKVKSVMJFDZZXKWGABXDWBEYBJXUQDQIJTELCXUNGHQBNNEEKYEJCPLAHNLQPNJPBKFFRYVGXKWOFPRDIDHZWYOOOTZU");
    tmp_tmp_msg_0_0.value.assign("ZXBUFGOGBKECURBYELRRQWKHVUJZKALVILBHBFCXDOGQ");
    tmp_tmp_msg_0_0.type = 32U;
    tmp_tmp_msg_0_0.access = 194U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HNWBKRRISXEEMVBXNZXUYQQJLV");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WNGAZNCJDHVOBXVLIVRWPUQBBXSIPEDHYYWQDSWNZIESQRLVMLUVTGZNSZEBSGVOZQGOBRPZONRCJRRMSWTUAPTIAMEYHBAXIFFDUOBUIVTMYFBWRLHLDKNEODJLPCAFVTAWKKACELAJRKAJOJQCSVWLHXUXSZHETUMPOQZJDPCPMZCYSEOYXGDNEPKFTQTYXFJZCGTGBMXMOQFHIRSQVCWMKUXLFAHCIELPFYHNFMUWQKXGGYRGKK");
    tmp_tmp_msg_0_1.dest_man.assign("VCLDBOSFBJMJAFAMTAUEVGLBPRICKURXRJLHYFDRHHZHKXJVYEEDBNJVZHUBPVZZLUCJFWQGBGOVATOIPTUCINNLOYGGBDWOLIDGRWZJSENCYKCSTPWTXQWMOQIELPXAHVOXRMPSLDYKQMYOTWESZDGHRYUSQZIFSDAXKFWFRCXIAOKPFUNCNGTRHKPLQEZIO");
    tmp_tmp_msg_0_1.conditions.assign("UHWZOKOASUWBGWQGVSPCCUFINHISELPFBPHCPQMGRCDJAVABNUMGLJYEWAGOBNGDXOZTYLXXEVKLZJPEIXIFHLNYGRSQQHKFMNV");
    IMC::EulerAnglesDelta tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.time = 0.08432715350111031;
    tmp_tmp_tmp_msg_0_1_0.x = 0.38173799524583285;
    tmp_tmp_tmp_msg_0_1_0.y = 0.31823096563721853;
    tmp_tmp_tmp_msg_0_1_0.z = 0.4658756713725748;
    tmp_tmp_tmp_msg_0_1_0.timestep = 0.6806375747897735;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SystemGroup tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.groupname.assign("WPXETSUFECLMQDHGLFQBMFYTQZPRHQAWZEJOSQIKSMLVONBDG");
    tmp_tmp_msg_0_2.action = 156U;
    tmp_tmp_msg_0_2.grouplist.assign("QCJSBOQKARENSXYCFDPRANRPTHVLCPHYCDKVJNCMQFQQWHSHKAZKKVEJPLAFIDGYIQSSCDFIGADIEJNNIGZHBZOJNXKRUDHQNDHBRSUXPGAWVFYNDMGWFHQIVOBOTG");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.5899885254775509);
    msg.setSource(28807U);
    msg.setSourceEntity(4U);
    msg.setDestination(11830U);
    msg.setDestinationEntity(136U);
    msg.command = 103U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QEQQPPVMAXBVSSSXJJTIMXCZHVQLLCCFAFKTYKYHSUTJHCVFPQRRPSBJGTCTNBYBEEAMOHYNFFRNZKQWALIWKA");
    tmp_msg_0.description.assign("XZUOLABFOGRMEUMGPUQNHWOSGDZHMPWEZTSRKWKIHPPAYRBAMUVFNVAPKEMILGJEZQXKGCVAETZISIJMZHTQACUQBDYALXMHVTWCOLRVVNOKLJMBEJISZVYOKDTPWTLSRLOKEHULHNSXLPDFIAQWDDUTNWGVJGWCCCCFNQNGRYFYEDXFQAC");
    tmp_msg_0.vnamespace.assign("RMNYAEDEUJMBMPKVCNME");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZPPSWXEHQSRWKTDZVGGFHGKDRKWWIRLCPGYZECBMISJRPVTADPMGURMNQRLARBAYSHOJIOCHOABZJLQSWNZLWYCYJRYYGBMIKJOQGNGF");
    tmp_tmp_msg_0_0.value.assign("JSQYMXZIZIFAQNDHTLXBLLOQALMQEJUXFSIUHLPTTUJQCNACLQHUKHRYTCVILEVROYHKXLDYBJZGXKAPOZRUKEPRPJPGPPPRXHVAAEIDX");
    tmp_tmp_msg_0_0.type = 106U;
    tmp_tmp_msg_0_0.access = 202U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RWNTKEWLLENJDIPBMUXXUIQHPEPQNAVVJCFUKRFNVIWDIDRQBYBUZYOHMCRBVIISQSMOYNUATLPXRWGJSHHBXCYUTCDMWZJDLXNQPFATZMVLFDMDOKUDQAQAZRGGMPHGOFFUKOEKGOALGWIHILRICJFYPDSLUEGEQGZJELSNCJTSYWTWWRTQWMXGZFFKEIUYCYSJXKBKOEVNBSTJSPXNAOTAAVROVFHBHRVTNZMVXPCLPHS");
    IMC::Dislodge tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 10770U;
    tmp_tmp_msg_0_1.rpm = 0.5699488829118073;
    tmp_tmp_msg_0_1.direction = 165U;
    tmp_tmp_msg_0_1.custom.assign("FOBJWKCNWMOCGVKSUNPDEJ");
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
    msg.setTimeStamp(0.04512973269406828);
    msg.setSource(2679U);
    msg.setSourceEntity(36U);
    msg.setDestination(3472U);
    msg.setDestinationEntity(216U);
    msg.state = 131U;
    msg.plan_id.assign("STSFLCQGCSYELXCXUJJZTHBUPXKNNUYAVBDJBDIYVEEWQAZZMJLWKNEONUCVSMDUMGCXXGIWLZPBSMNLYDPAPNHMCYMJIDPGSRGOCOZBLBZEKFHGOECOZLERRFMVERRBOHHTPHKNSFEKLHXHJXQVUELODOJSGAQVYI");
    msg.comm_level = 123U;

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
    msg.setTimeStamp(0.5003320452791403);
    msg.setSource(16301U);
    msg.setSourceEntity(143U);
    msg.setDestination(61516U);
    msg.setDestinationEntity(187U);
    msg.state = 203U;
    msg.plan_id.assign("FGDCPXRNWGFEWJGDJSVRAJKRGAOUAOHWXSNNDHIJBZBHICBYXPZYHDBIKHQVOZCRVQTVTLSOOYJMIRSHAGHSOFGAELQRZWLILJRPYWF");
    msg.comm_level = 242U;

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
    msg.setTimeStamp(0.19305023079761652);
    msg.setSource(38260U);
    msg.setSourceEntity(240U);
    msg.setDestination(17898U);
    msg.setDestinationEntity(29U);
    msg.state = 206U;
    msg.plan_id.assign("BKGQOKNWUTHIYJOYS");
    msg.comm_level = 143U;

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
    msg.setTimeStamp(0.366266168560448);
    msg.setSource(60497U);
    msg.setSourceEntity(208U);
    msg.setDestination(12522U);
    msg.setDestinationEntity(59U);
    msg.type = 106U;
    msg.op = 109U;
    msg.request_id = 24563U;
    msg.plan_id.assign("URUISWLAGXSBSIOHJARIKQKZCINMTZXMRQFYDNQWHHQZCRJFESTWGXFSPBVVYOKBIBDUHMGNEPLRHVVRDDMGTYXYVJGPAODMEEAXULJZKAJVZBMDVTWAJZYENMNSZESAWBUCIJWPYOOLZRVKOTLUXRFWAKZBEUUNWAMOPGPVPWNUUCNLXGIFYTOEJKPNEPYJXFHMHVTRDQBNGCCDWCGMSFOCQRKECDABYFQLQIQSBIOFYTLQCIKFTZHSDH");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 5U;
    tmp_msg_0.mode.assign("FKOMJNIAUBQOROMSVGFXRTXPBBBMMCTTAZUUGFPVODIPEDNIUUXJKCQJZOPTANIRLRPKPWZJMODNLYEWSHECASWGQRHFIFKHASVWCTKUXRPIKTCTYOXQLKZLYOGAYMXVX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JODPOAGVCLBMXYNOTEDBXKAACFSESCYJIUVEIJY");

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
    msg.setTimeStamp(0.8131595252537748);
    msg.setSource(28726U);
    msg.setSourceEntity(49U);
    msg.setDestination(54709U);
    msg.setDestinationEntity(179U);
    msg.type = 5U;
    msg.op = 238U;
    msg.request_id = 17017U;
    msg.plan_id.assign("WGFGILOKVBJKQOSQODGIUHMRYLTMFZWKNHGMWZHMSXHMBKLXBNUKONVDORSTNQYZYHGVIEDQTOEXCIJCTRAVDPMZGUVPHGMLOJWUPWYJQAXVEANTBWRXCFAKCLPSVEIFBPCXK");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.14849659894778378;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FQESXHOHKROZ");

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
    msg.setTimeStamp(0.5969929945190153);
    msg.setSource(19995U);
    msg.setSourceEntity(28U);
    msg.setDestination(34674U);
    msg.setDestinationEntity(254U);
    msg.type = 103U;
    msg.op = 158U;
    msg.request_id = 22121U;
    msg.plan_id.assign("XUTYOORXYLWNZELCDXIOFKBYBWCZPEDLHFWOEFJVIGLCMFEQOOHLZPTDGPGOCNWGDTVJFSBJPBRXAUNEATAABQKJUNURFKJWTMZCDUMYPIXZCSOEMFIPTLKYCVCKGIFWPZGUKSVRTBSEVMZBYLDVLJXAHYCQNKPJWHJBXRHNSHIVFGMWRUZQXKFAQTISAHYTMGAIDSPXKSWHA");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("IDCFLREESXBSDAIVNUTQAF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IKXZYVSHQDQHHGHWAOSUGIGXAPFICQKSTDEABPXHN");

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
    msg.setTimeStamp(0.2829017502663529);
    msg.setSource(35540U);
    msg.setSourceEntity(254U);
    msg.setDestination(63974U);
    msg.setDestinationEntity(236U);
    msg.plan_count = 57053U;
    msg.plan_size = 3224046955U;
    msg.change_time = 0.6734043545873193;
    msg.change_sid = 5760U;
    msg.change_sname.assign("DZGHETVKFMGXQCTMTJXWDUHJGLRKDWGMTDRYGSNIFYMIWECTQKVTKEHDZRWZWCOLORPFEALSCKDNVISPSLWQUNMZSIQPREFWRKDYYUDOVBIQODOSAWARHBMWXQJBYQPXMBLBVNHIFOEUHGJVLPOBZVJDHUPAFMXJGYTJFYEQFYETKTSNPJVXMNZZUIHJYGXNSZHACQGOCXUBROKCAPPKIHBARCVJAMALURETULSGNBV");
    const char tmp_msg_0[] = {-63, -125, -24, 44, -66, -83, 7, 19, 41, -30, -111, -85, -77, 16, 85, 17, 98, 14, -66, 49, -65, -116, 125, 62, 92, 27, 0, -104, -56, -104, 67, 94, 17, 58, 78, -72, 113, 118, -112, 0, 52, 36, 34, 32, -125, 13, -92, 117, 54, -108, 9, -64, -82, -35, 63, -62, 33, -69, 84, 50, -86, -10, -76, 118, 106, 37, 67, 28, 68, 47, -121, -65, 46, 97, 45, -67, 51, 29, -68, 123, 77, 3, 33, -24, -109, -116, 99, -120, 27, 89, 11, -62, -47, 94, -39, -6, -123, -21, -26, -88, -10, -83, 113, -45, 107, -21, -42, 92, -69, -88, 33, -119, 21, -33, 42, -33, 10, 105, 15, 87, -128, -109, -117, -93, 107, -51, -105, -70, -21, -17, -11, -77, 106, 119, -56, 12, -29, -70, 38, -18, -5, -107, -67, 80, -57, -115, 124, 116, 39, 53, -58, -64, -30, -95, -113, 35, -80, -87, -69, -117, -20, 117, -100, -20, 98, -71, 101, -66, -94, 10, 118, -95, 51, -74};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QGXQHBLFVVUOWNDEIQWNFCAUHLZFWEMXOONVMBCGTCPA");
    tmp_msg_1.plan_size = 63310U;
    tmp_msg_1.change_time = 0.3683603833589284;
    tmp_msg_1.change_sid = 51331U;
    tmp_msg_1.change_sname.assign("TDJNBBCXLMSLMFKOMTCVNBYGQDGXJYQNGNYMJMCOKGDR");
    const char tmp_tmp_msg_1_0[] = {95, -12, 71, 77, 41, 25, 31, -50, -65, -73, 79, -127, -84, 32, -51, 108, -47, -24, -70, -67, 38, -12, -90, 1, 119, -107, 57, -93, 34, -72, 72, -123, -121, 87, -108, -62, 110, 52, 15, 96, -72, -83, 71, -99, -11, 111, -73, -99, 108, 82, -4, -57, -50, 18, -106, 88, 33, 102, -66, 113, -122, 32, -23, 87, 53, 115, 121, 94, -52, -119, 125, 65, 121, -61, -76, 62, 58, -114, -3, 71, 119, -100, 19, -38, 104, -123, 44, 10, 33, -6, 40, -58, 111, 76, 109, 2, -93, 85, 85, 115, -29, -45, 53, 57, 22, 32, -62, 77, 7, 56, 73, -9, 93, 75, 16, -39, -25, 9, 120, -50, -58, 20, -68, 6, -105, -13, -86, 37, -46, 94, -84, 114, -108, -126, -28, 89, 70, -48, -4, -13, -68, -69, -38, -83, 59, 104, -100, 84, 57, -128, -89, 47, 95, 82, 42, -37, 24, -103, 31, 67, 107};
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
    msg.setTimeStamp(0.2567216664245341);
    msg.setSource(28651U);
    msg.setSourceEntity(46U);
    msg.setDestination(20919U);
    msg.setDestinationEntity(247U);
    msg.plan_count = 40383U;
    msg.plan_size = 2136738765U;
    msg.change_time = 0.5564138891074814;
    msg.change_sid = 32293U;
    msg.change_sname.assign("EQRZZRQAGVGDQBMKLHKWRRMHXYJKYGMSQNFEFRTYZTQKSLMLRRIJTEAFZFJGZSYSQRLOTOJUEVFNBZDIZGPDZXEZB");
    const char tmp_msg_0[] = {-117, -61, -54, 67, -7, -72, 125, 111, 84, -109, 18, -83, 25, 39, 126, 46, -6, 95, -26, -46, -56, 110, 110, -120, 4, -11, -52, -61, -81, 87, 44, -68, 101, 65, 94, 88, -104, 27, 125, 87, -70, 48, -1, -38, -21, -89, 49, -80, 5, 37, 125, 88, -66, 59, -6, -48, 103, 56, -55, 70, 119, -90, 106, -8, -111, -24, -5, -37, -106, -81, -127, -124, -66, 30, -23, -111, -23, 59, -112, -36, -124, 90, 49, -83, 78, -52, 67, 67, -106, -95, -100, -32, -9, 28, -28, 44, -14, -126, -57, -43, -67, -93, -97, -12, 65, -46, -125, -86, -34, 62, -24, 81, 99, -89, -56, 113, -38, 119, 14, -110, 70, 48, 11, 10, -34, -104, -127, 22, -28, 33, 95, -58, 43, -69, -69, 113, -20, 46, 121, 8, 107, -68, 116, -117, -44, -105, -122, 27, -63, 44, -73, 126, -119, 92, -43, 124, -80, -71, 3, 68, -116, -121, 3, 92, -104, -98, -78, -67, -82, -104, -28, -87, -5, -39, 123, 108, -18, 91, -121, 87, 69, -9, 9, -44, 103, 99, 20, 30, -71, -106, -32, 83, 31, -30, 118, -92, -97, 17, -66, -66, -11, -41, 72, -16, -68, 19, 122, 102, -11, -90, 82, 45, -4, -59, -98, -103, 86, -112, 29, -43, 13, 27, -64, -10, -45, -27, -34, -109, 45, 11, 28, 55, -57, 67};
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
    msg.setTimeStamp(0.2688382102812489);
    msg.setSource(41410U);
    msg.setSourceEntity(83U);
    msg.setDestination(62899U);
    msg.setDestinationEntity(124U);
    msg.plan_count = 34655U;
    msg.plan_size = 2270368933U;
    msg.change_time = 0.34757822981721376;
    msg.change_sid = 212U;
    msg.change_sname.assign("QATYOYRDXPLJMGVYPNFOMXCMOOJXBGRGELRKLUSDPNPDWVEOTRFIJTOHIFNDNUREIGBWLGUTETRTYZMWCZDDKYTZPJSZKVSHGVIZHHKINJQWSZZXILILFIPVCPVJCEDEO");
    const char tmp_msg_0[] = {108, -101, 63, -49, -109, -91, -32, -10, -32, 46, 87, 113, 2, -31, -18, -48, -123, -52, -20, 31, 3, 69, -21, 118, 65, 87, 0, -30, 27, -93, -21, 120, -122, -12, 102, -4, -100, -98, 96, -79, -39, 50, 12, 11, -104, 93, -26, -110, 64, 45, 38, -99, -31, -69, -49, 0, -88, -101, 118, -116, -123, 91, 2, -60, -75, -32, 80, 41, 117, -41, 59, -73, -114, 86, -26, 57, -35, -25, -23, -71, 89, -124, -11, 107, 84, -27, 19, -91, 89, 45, 0, -2, 29, 59, -83, -61, 47, -2, 13, -70, -56, 53, 114, 111, 125, -15, -60, -121, 110, -69, 39, 44, -125, -107, -95, 63, 6, -35, -53, 98, 72, -65, -119, -47, 13, 36, 102, -82, 99, -126, 69, -31, 70, -2, 58, 108, -111, 37, -19, 39, 59, 35, 43, -58, -97, -39, 99, -105, 31, -15, -103, 55, -73, -6, -19, -5, 14};
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
    msg.setTimeStamp(0.4618875999983184);
    msg.setSource(64247U);
    msg.setSourceEntity(36U);
    msg.setDestination(51883U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("CITBAUQRJFHNOUERJOMCDALMHGVADYWBFJEDOEPLZIWPYZBCSEJAVAXSTQKFPFQBHMVXIOWJGEQRUBQMECLIKAIOXTHLKZQYIRRICVKMZEWBNFKDYJGHZTYZQBRFDNGUIYGPLHQOLSZZTLQHUCNXUMDVSJSXPBSKOYYHDYTWCXNRUPCVWBSSINOOXSJHEMXFGUCQVFLGGROZBPLNIXXKT");
    msg.plan_size = 44391U;
    msg.change_time = 0.7863419278136696;
    msg.change_sid = 18059U;
    msg.change_sname.assign("ZACUVNZBBXWEENHFIQDQABKPLLUYSQRXKNWPWRJVRRKPJGLIIZOCZNSYYWCFJVWCANEXUHFQRPRTHQIRZFZPJNBLSUFIKUEORLYTAPUVPFPVMOIS");
    const char tmp_msg_0[] = {-4, 23, -2, 69, -62, 111, -48, 85, -102, 104, -124, -22, 83, -117, -11, -29, 78, -88, 50, -50, 77, 7, 109, -32, 46, 101, 115, 15, 98, -52, -47, 22, -32, 36, 19, 56, 11, 58, 1, -74, -61, -68, 125, -52, 56, 80, 35, 105, 57, 84, -117, -92, 70, 92, 107, -7, 48, 29, -67, -105, -2, -59, 72, 3, -117, -45, 4, -49, 80, -87, 109, -107, -78, 82, -42, -13, -19, 10, -57, 82, -77, 22, -23, 71, 6, -98, -54, -110, 84, -48, 60, -66, 68, -125, -1, 74, 43, -24, -1, -77, -54, -11, 84, 91, 106, -36, -44, -16, 56, 15, -117, 61, 26, 117, -98, 89, 69, -15, -113, 58, -80, -125, 66, 112, -123};
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
    msg.setTimeStamp(0.44762273781275863);
    msg.setSource(32535U);
    msg.setSourceEntity(114U);
    msg.setDestination(54974U);
    msg.setDestinationEntity(224U);
    msg.plan_id.assign("OAMUPQZYERZLULBIF");
    msg.plan_size = 54398U;
    msg.change_time = 0.6131569607753087;
    msg.change_sid = 8659U;
    msg.change_sname.assign("DZOYGREDRSXVCGMTFGMTHCTWNXAUAEFBRQMVKCJTGBQVDZBVEMJCNYZAKADGWWHLNWDNJGUVICTERANMBPCAMHQDUCIXGIAQFHFTODHNQYWFWOEZCASDUFPWYLXXWLFJS");
    const char tmp_msg_0[] = {-99, 1, -42, 15, -40, 65, -6, -98, 116, -126, 87, 84, 94, -47, 46, -47, -8, -49, -17, -35, -79, 51, -80, 82, 95, -110, 32, 51, 119, -15, -20, 93, 57, 102, -110, -126, -90, 2, 36, -65, 110, -63, -119, -106, -115, 62, 56, -39, -63, 37, 87, -55, 17, 120, -112, 37, 117, -55, 25, 34, 48, -43, 3, 0, -97, 46, -81, -13, -14, -105, -27, -94, 5, -70, 112, 24, 95, -70, 41, -10, 10, 23, 72, 68, -104, -27, 54, 30, -123, 5, 27, -29, 37, -45, -79, 74, 1, -11, -46, 101, 53, 100, -61, 48, 38, 71, 63, 72, -7, 74, -72, -8, -52, -9, -117, 120, 36, 98, 20, -97, -20, -60, -100, -11, 63, 82, -118, 23, 50, -61, 30, -53, 126, 17, 39, -45, -97, -59, 48, -45, 99, 52, -79, -109, -98, 43, -48, -108, -96, 52, 83, 16, 50, 24, -102, -19, 92, -97, 26, -12, 45, 6, 6, 29, 118, 102, -111, -89, -64, -72, -56, -65, -47, 82, -128, -59, 91, -11, -111, -59, -113, 101, -36};
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
    msg.setTimeStamp(0.8441679907233081);
    msg.setSource(39237U);
    msg.setSourceEntity(125U);
    msg.setDestination(1562U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("RBUYYZHBZOAEPIDFGJUIBZQADJIEXQTWVTKLYSSRCJIATXJWMPMCJHEJUOLXDDXLEQOPRYKKLUNHHZ");
    msg.plan_size = 14031U;
    msg.change_time = 0.8738591684997413;
    msg.change_sid = 61735U;
    msg.change_sname.assign("IRECOBQXLKSRQIQFOPCUZVYEFNCAQKYBAVVQDKGAYEVQXVDQWUXRUZBABEIAJYAZLWKUXNMFGJSKTFBNIJNMWUOMCPHJREMMGBKSUCYHVJAMYESDEBHISDTTTTZPOZELLGPWDPSSIMHUDYGYMHWCOFNTNKTXBLPOSIPZNLJGXFYOJQARZFHNTJFRGTDIHKXGTVHUJPMWVKXWREGCLZXOZIAR");
    const char tmp_msg_0[] = {-30, -69, -82, 78, -39, -9, -99, -125, -43, 3, -39, 80, -36, -66, 1, 26, -91, 51, 58, 119, -123, -110, -67, 52, -106, -62, 38, -94, -87, 100, -36, 7, 5, 15, -21, 11, 96, 111, 104, 4, -85, -101, 70, 93, 88, 56, -1, 62, -12, 106, 1, 17, -123, -55, 48, -71, 39, -98, -33, -31, -114, -21, 64, 20, -88, 20, 13, -77, -98, -96, -32, -66, -1, -22, -119, 8, -43, -65, 43, 87, 25, 72, -91, -57, 42, -64, -103, -127, 62, 0, 77, -40, -125, -44, 71, -119, -71, -67, 80, 14, -38, -114, 2, -68};
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
    msg.setTimeStamp(0.32326355375068905);
    msg.setSource(37698U);
    msg.setSourceEntity(74U);
    msg.setDestination(63076U);
    msg.setDestinationEntity(175U);
    msg.type = 114U;
    msg.op = 131U;
    msg.request_id = 44123U;
    msg.plan_id.assign("UUQHUJAYWAKJQBWKZNDFPTCEGLTYSOEZVANUHFURXYCXBOVQRBAZTBERLDGMIZDYZQVYUVFCCSFZINBDTKPKYMMPPWHMLAXUEAVNPCIWWCVWTMOTNJNJGIBX");
    msg.flags = 61032U;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.75894828957554;
    tmp_msg_0.dist_min_abs = 0.3231619598384331;
    tmp_msg_0.dist_min_mean = 0.2789585422207417;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WQUYGPGSKCEAUXZJQKUKFBCVIINLTZMWEHXVQRVLICCXKLZJBEBOOXJOHISTZXXDIDYHVFRODUVWYAKHBSRYQGNYWCLSMKAYLRSAMZFHFUQTWJEMLXWGTDPZYYOGPDJIRHEGZAIPANACHBGMOIFKFESYDXSJXTZZIFVEMKDNVRHMAODDNRFTEOHPYFTULUOPNLPWRPNHGKUKGEZANRSCMD");

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
    msg.setTimeStamp(0.10449092723912501);
    msg.setSource(9126U);
    msg.setSourceEntity(103U);
    msg.setDestination(44258U);
    msg.setDestinationEntity(102U);
    msg.type = 220U;
    msg.op = 54U;
    msg.request_id = 65194U;
    msg.plan_id.assign("LUCGTOMEPDPXAOQDYREJROOGSCNUHACNVDOTITAGVLTIIYKYBZVAWDOFLJHOVCBHMWGALSIFSJUPNEVLXLPCEDFVIDNEDEMAKDWPHSBRCXERURIY");
    msg.flags = 15848U;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 37191U;
    tmp_msg_0.ttl = 41821U;
    tmp_msg_0.destination.assign("QXQRCFMDYMKBYHUBLDYIRTSLVDMBHSVAYKJXUSXTCPDXDKNWFWQGNQQNCABMBYHIXPCYAPMVRWEBAZIKILTHJFHQTURVGNCLNSNLWOEPZOOIXREPXDUZYYGAOMGZWBPVWBDAVLNQMEKDVJAVFVITGWNAHSKOAOZLFVRRCFWXJMDZPERTNCCS");
    const char tmp_tmp_msg_0_0[] = {-53, 40, 5, 96, -116, -36, -49, 103, -99, 115, 75, -111, -76, -70, -86, 28, 51, 119, -68, -89, 21, -83, 48, -126, -41};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XVFEIJKKPLFNKLQJVXWSCCNUOIUFQGZPLEKZAHQKWSUDYIMIHEVYDFEYMNCHQQXKONVQZBASLJCPXFHZZQJTGIUYNOYEELPLEPJOAJGSTWDMARGTPEBMVHXNMDZKQMWCXLDOORCVGCJJUCLXKSRBRRDOXBNLWTGRAGBPNZKTZSUGBFEZIWIWTMAAVHQUNMJCFUHOHSSBAVSTIYYBXHOMDMAYGAWNUFYWTDJTRXOKV");

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
    msg.setTimeStamp(0.11810112437935982);
    msg.setSource(64879U);
    msg.setSourceEntity(0U);
    msg.setDestination(31828U);
    msg.setDestinationEntity(44U);
    msg.type = 174U;
    msg.op = 94U;
    msg.request_id = 23544U;
    msg.plan_id.assign("DOEXJBATSPHGCQGSJPIKAZTTAPJMVVIOTCFVCQRQNGPTCHMKJDUTSFGNVHESCGDVVKHFBMZEJMISQUJKZALELNUVTKBUNYDEPPMACHJUMPGEWNOOQXHHGRADDXGFDYMEICCSMKRKTUPLCYYWJHFNXDYFFBZORYXAZLFSXZIZKUBGPARZISKLBWTQDRVJ");
    msg.flags = 62196U;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.18156217468105174;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZFUSFVYNECIGRWXNCUWIXFDIKWHPCSLALSVLNJJPTAAXXTIOPNKKHTIJVJOODDWKGUMQFEGPSQFRCCH");

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
    msg.setTimeStamp(0.07737788644862587);
    msg.setSource(61705U);
    msg.setSourceEntity(175U);
    msg.setDestination(43336U);
    msg.setDestinationEntity(22U);
    msg.state = 59U;
    msg.plan_id.assign("DKLRSWELJJTILOJVZXJADRWAUPTRNLSDHGKRFPQLUYIKZQBEOWBDQPFZNCEUZFKXVK");
    msg.plan_eta = 1992083980;
    msg.plan_progress = 0.111771010592846;
    msg.man_id.assign("GMSSOJPAGHEUSVTWARLVYTXYRTZVZEAJAFEWY");
    msg.man_type = 24638U;
    msg.man_eta = 304286032;
    msg.last_outcome = 171U;

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
    msg.setTimeStamp(0.40734055589838347);
    msg.setSource(64281U);
    msg.setSourceEntity(14U);
    msg.setDestination(6176U);
    msg.setDestinationEntity(174U);
    msg.state = 35U;
    msg.plan_id.assign("SJNWIRGGZNLEDHUWSYZIRFPIDOTGDTPRFEKPKHNLKZCSLPXLWPFDQRTTIEVAVXVLAMJTAUSJAIMNNKEZ");
    msg.plan_eta = -634116355;
    msg.plan_progress = 0.09917817207776836;
    msg.man_id.assign("POIPLSMCBZGELJXUNFCAVWVCJSREGDHXTYVLWLRLRUHPDEATIZCPCQMNRMSKEUDCAOOHEXHDDZQDWAJTNVJMUWNBEGJOKYGQDIBINJYESRSKOJUKBYOZDABFWPIIIFLPQBX");
    msg.man_type = 31458U;
    msg.man_eta = -1467029754;
    msg.last_outcome = 109U;

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
    msg.setTimeStamp(0.4482990447077968);
    msg.setSource(62613U);
    msg.setSourceEntity(81U);
    msg.setDestination(7683U);
    msg.setDestinationEntity(51U);
    msg.state = 114U;
    msg.plan_id.assign("ZPFQIBSUUQRUROAXEHMLCDYDWDZEUQFLWWEXNNGVHKBHPJVX");
    msg.plan_eta = 1789176294;
    msg.plan_progress = 0.5556525993714124;
    msg.man_id.assign("VBVBYQPTVNFEMUKGKTQXVLZDAVFPORPTLLJQLOMCBGEBLDKRADZHTIVZORCZNWAVUHINFDKQYHADOIXXNZFIPTWHEOPBEUWNECYGMUYLMGRLSKKXSPZNJOYJWHGNTDJVHMAHCYIDIZCRPOBJDAQNDLIXGSHFHUWCSMMRLMCUVUGAKYWSOHJMJZEXIUTJKCOTQATLUUPFQ");
    msg.man_type = 21389U;
    msg.man_eta = -1205224712;
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
    msg.setTimeStamp(0.7953531551616018);
    msg.setSource(5782U);
    msg.setSourceEntity(155U);
    msg.setDestination(56355U);
    msg.setDestinationEntity(108U);
    msg.name.assign("QDOAVTTFZQCWOTFELLJIDBMUDXFYMFNKMUSXRMODPZCCRSVOROUJTCPHVPHVPYRPDFHPLQFXDILHWNBYKGQJXXCQCVZSKABMPTHGDMNBLRUAZYTJMWYESXEBFEXSLAITCKVRSNWOWUYXBRGEHVGTXBEVWPQEOCAAAKQBGTXIHNWDWDHSMZSNWEGL");
    msg.value.assign("LUJEPEKSLCJZRDJSQXTIDSOGKKZPRVDTTYWRVFXUHGWBIVCOVCNQJEVLGTPUAZQTBJYMLZBMOCXJWGZYWCNCFEVWYJQHMRXODHODMHMHZKYNUDJVMPKIXNWSUOIXBTVEAKXNLYBSERVHFXRYGQXSNKAICBRYZQAZHCTPQUFVNRPHSBESKOHZN");
    msg.type = 65U;
    msg.access = 94U;

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
    msg.setTimeStamp(0.3389662372200535);
    msg.setSource(11819U);
    msg.setSourceEntity(180U);
    msg.setDestination(12686U);
    msg.setDestinationEntity(120U);
    msg.name.assign("LVVPITAWMQOVZBXWHEQXXGOOONAWRXYLIUUJOSTNDRWMGIYSJPZWMQUWRHOABRVBBHDUZKKKPTMIWCZCLQWAJYXDKFYGVLOVYLNBFIHLHZGNSKTTFBQCKKRXDUGDLBQGMCULCJIUBVPNFJKFWAEWOLFJGCSEXPFHAPSYOOADMHDQREDEJDUISKNFXNMYVCECSZGPGQTIJNZAQCPSYPYBXQEHJFXZNNMGULARMRCTSMTF");
    msg.value.assign("YKIOADUSABPCZXUFQRRDVOOFMVLRAYGGSVAWNGIVKEALQFFTRNHBMURYYUXVHBMHKKYUMDDWLCHTNKHBQTQNAPDOVWZLCSJOCQXZPNSTKNOXKQMWGIBOIJMUKEHBZJOPPINIISEFMSJCUTCDYEWRMURLBFYWDVTWPRTZGEQHAXYRECKNLSUZJQAXCLHMRFYTKNFIMOGQJWGFSCBELIH");
    msg.type = 32U;
    msg.access = 231U;

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
    msg.setTimeStamp(0.14007651971079538);
    msg.setSource(9998U);
    msg.setSourceEntity(40U);
    msg.setDestination(19076U);
    msg.setDestinationEntity(237U);
    msg.name.assign("EAUGPSFXQOTFUBAUUMZYDNQPWANVKEDWKPHZZUQRUGBYXFNUMYIXCBDKGMIRLTZGQHEIPKLXJIEHYMVRVBWZBRCFDVEHGIEAWJSLYZRQBOBPOJHMLINYPJVVTYXNPSHJBCQAGWNLTXFODJUPDVMQNOKJEASMSAMTQJJSOOBAWLKKCLHRJNFHXSCDGXRWOCLS");
    msg.value.assign("ZXOJOHRKSBKFMKIMEPPXHTYFNWRDCHZAJGXQUQASQXLJREITVQKMNQNBCWTLRQUGMPLJWVNVVABYCPYYHXGWBGRPEQVAWBDMOWDLKGPRMJNITHOAIKIRHCWITJCWNLUOTIVFGDZWAYSPAJYIQLEZDFMJGVKYZXZUDUGXXYXDURZHLPEPZCHFTECSSHUUSTKYTXNJOOWORSBOBVCKMTDGCPFAAZ");
    msg.type = 197U;
    msg.access = 40U;

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
    msg.setTimeStamp(0.3068075439385607);
    msg.setSource(39362U);
    msg.setSourceEntity(254U);
    msg.setDestination(47159U);
    msg.setDestinationEntity(47U);
    msg.cmd = 239U;
    msg.op = 171U;
    msg.plan_id.assign("AUKLFQMUFCBPQFBKPJTLMVTROZZYSENQPNXTALPD");
    msg.params.assign("CPBAKKMHCNLSZPOUSRZDQCBEYTEDHAGSXNKZUJFI");

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
    msg.setTimeStamp(0.7846562930464244);
    msg.setSource(45536U);
    msg.setSourceEntity(46U);
    msg.setDestination(16989U);
    msg.setDestinationEntity(142U);
    msg.cmd = 91U;
    msg.op = 74U;
    msg.plan_id.assign("QPGTIAMUICIXSKJBNESNKVPDKCVZTIDXPNTGGRLLESCCNZAQFHRSOOXYPVEPMHGZDSSCBDWGAKAEAVAXURESYBELGQJSHTDSTHNETRWFUKOGFBIALMRMRJZUUZGPQCJIKNWLK");
    msg.params.assign("VRUOZEESQIASDDFHLISNZMXXHFJVMVHQVJUZZTLXZCMUKUWRMNLKCONKLYTSWBQEP");

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
    msg.setTimeStamp(0.7329150581249184);
    msg.setSource(11372U);
    msg.setSourceEntity(236U);
    msg.setDestination(38160U);
    msg.setDestinationEntity(114U);
    msg.cmd = 132U;
    msg.op = 216U;
    msg.plan_id.assign("PABCHRVKKSBZNZQBAVDRKPAZPYDSZNWXKSILJXWWUXRKEWKDYCVHYEZEEXIELTHBTOGJQTAOMUKZYOEOUZMUOCQIMARUUNFZSJQFJIQVEOGAWBXIDNVXPHRVBUFK");
    msg.params.assign("MHYAFUAIUAXIHXXBPJBJQCGVYNSJAOQVFJKNWDKTCXDSCVLUGQDUOTJPBZATNQFLGTHKKX");

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
    msg.setTimeStamp(0.8536860135263087);
    msg.setSource(33066U);
    msg.setSourceEntity(48U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("BQUAFHMWMZQSWFTCCBJMYRUDQZCOMODIOPJIVNJILVTRLJAKZUIQASQXPCGJBAVSGJHONYTHSGHOQZHDZRNVNEXMXWBUAWETJE");
    msg.op = 252U;
    msg.lat = 0.3386812344281874;
    msg.lon = 0.2516009191631212;
    msg.height = 0.724276705354835;
    msg.x = 0.045938478568804175;
    msg.y = 0.11706911307470724;
    msg.z = 0.8358400303624928;
    msg.phi = 0.3522304725168952;
    msg.theta = 0.25326942598794255;
    msg.psi = 0.053464255077892986;
    msg.vx = 0.4963781659005585;
    msg.vy = 0.6395729684799583;
    msg.vz = 0.8431516285868496;
    msg.p = 0.5964827854379293;
    msg.q = 0.9812827411004702;
    msg.r = 0.372103258621885;
    msg.svx = 0.5759620076748623;
    msg.svy = 0.7593455025442071;
    msg.svz = 0.8629188914395959;

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
    msg.setTimeStamp(0.06532217007710539);
    msg.setSource(14465U);
    msg.setSourceEntity(96U);
    msg.setDestination(13290U);
    msg.setDestinationEntity(62U);
    msg.group_name.assign("FJOHUJYLZPOJIXZNUXLQDPOVHEFZDZFXMMTKVVZXHNRP");
    msg.op = 65U;
    msg.lat = 0.35182851600616605;
    msg.lon = 0.7642556755279841;
    msg.height = 0.6449451129500751;
    msg.x = 0.1341982125837322;
    msg.y = 0.28745701762713427;
    msg.z = 0.9017954649416772;
    msg.phi = 0.6507232600112725;
    msg.theta = 0.2752501367186584;
    msg.psi = 0.34852711786449087;
    msg.vx = 0.21614826731747716;
    msg.vy = 0.9336041773503825;
    msg.vz = 0.6412009249063934;
    msg.p = 0.09167894497511497;
    msg.q = 0.3799121351274515;
    msg.r = 0.25091378652531415;
    msg.svx = 0.7489242707839562;
    msg.svy = 0.7480686323202969;
    msg.svz = 0.044422876839461445;

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
    msg.setTimeStamp(0.9603099797911211);
    msg.setSource(14435U);
    msg.setSourceEntity(231U);
    msg.setDestination(44762U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("JBPHXYVLEXVHKNPTPWMBELZOIWFGCBIJYBZPHJVNIXIGENOXSEDGOMTOLYWNJAVHDANNOSZJUASQMPNZLURKBSPDQXIXFGQFTJXOQIZQKEWVCCDQLESRORVDZPUHWHBCFFUDZMTWRZGLGNZFS");
    msg.op = 107U;
    msg.lat = 0.7426533807175021;
    msg.lon = 0.05223707088464502;
    msg.height = 0.056472756508717414;
    msg.x = 0.3462043934434983;
    msg.y = 0.8738787712346751;
    msg.z = 0.8800160400884102;
    msg.phi = 0.48352267562630713;
    msg.theta = 0.33448660204101566;
    msg.psi = 0.5163979935628147;
    msg.vx = 0.48020382452878996;
    msg.vy = 0.24867565267193636;
    msg.vz = 0.9782321736717449;
    msg.p = 0.21476357710101723;
    msg.q = 0.3424989550344115;
    msg.r = 0.905964383272818;
    msg.svx = 0.954408543938881;
    msg.svy = 0.18011011186400294;
    msg.svz = 0.907121242101617;

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
    msg.setTimeStamp(0.9977955204420613);
    msg.setSource(50561U);
    msg.setSourceEntity(25U);
    msg.setDestination(46168U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("JITESDPKDATDYMKAEDXJRUBILKHIYPZCBNVGYIQOLXJGTDCKQTCXVCUAMZELEMZQIPJUGOHWOORVGVYRSORWLGQIHJUKWURCZYWMLBZHKSEVTUMGRQKJICAH");
    msg.type = 95U;
    msg.properties = 224U;
    msg.durations.assign("SVTQXFPUFTDLUNPGEKUESZYVSJZJDJRCAABBTDAZXHLOUACUTIJEFZITVSGYYZGINJMJZSQVISLYWIYQLEJKPLDQROWGFQDGGHRKVAFFJGBOOUNYAXMXWKETMTWBHMCLKUZHQFSMNQBOQKVXERRTIAPLEALSYFUCWPJDOTCDOYLYNAKZNRXWCNQMVZIVHXNBWDBRGYCGXBORIIICWKEPNAEWRPXOTUMSMJCVQHPRDFPNEFHDZHLHCKHSO");
    msg.distances.assign("TPMKMZVCQDVOQFNTGFTOBRRHPEVXKSGTOXYUYFTCTMPBWXOKEMFIMBZPVBLXGWQDPMXBJHIXFATCYAJINBJQIWKYWSSYBKLIEZZGMLBJWRHULQGJIAQOQNTRCELOJH");
    msg.actions.assign("AKLPLAFQMWXHCNSJVZOHXIYXESDJLAZQRVHPRSQEHAGXBSLQJBDMRAELHMONPBC");
    msg.fuel.assign("LKEIJPGUNIWYJVEUOZVAPYTXDTBFCUVZJQCZDOVTNCJBSESHXYTWEGVS");

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
    msg.setTimeStamp(0.42096253163405883);
    msg.setSource(16487U);
    msg.setSourceEntity(216U);
    msg.setDestination(32756U);
    msg.setDestinationEntity(149U);
    msg.plan_id.assign("IWSTDXJTPQRRTKYP");
    msg.type = 168U;
    msg.properties = 244U;
    msg.durations.assign("WZKIULCHQRDIINUKJEOIUPQDSAADUCVOGKP");
    msg.distances.assign("SHGMDZIKPCXXFHSPLXPAUVWLVQAKMGMRHMYDAFFELVLGCBIODMBWUJTSLDPKGEJWZXYZJGUHIEOCQWB");
    msg.actions.assign("YAMNORDHFCBNHTUFCGKCRFUKOT");
    msg.fuel.assign("STBMQAPICJQDMEQCDALOXJISHLOZUSUJBMPHITVWPWMQAFNEXXRDWBAIIWXYONTBRZRIGFOTJFR");

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
    msg.setTimeStamp(0.8548231319488321);
    msg.setSource(31538U);
    msg.setSourceEntity(125U);
    msg.setDestination(30739U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("UBQKPJPGYVRHTHEEKAXONXVMCKAUZPVFRZWJJUYXZDTGDEHWZJPBITHWIWXWARNZMSRQEOPRVCCQZTYNFIUHWCKXJKRDLLG");
    msg.type = 67U;
    msg.properties = 20U;
    msg.durations.assign("ADZBXNVEBPOFCMUPNJVBBUTZEQLXMCLXKWLKEMNUPTTNELROBSYVBEQDQPFRXNCTYRVLLRGZHKYHWJWUZVDOFVHFXQGYFHJCPQFJYIGGSPRRSMWUYDWCUSVECQNDIYMFGHCJWWNAHIMYJNSGSZAFPXEKPQEODHPDTHMBIWRXTQTBOKEJORILZZNEIZGAXKVUDADSXIIUXAANAQSRVBCHHKWDMCSOKVWTY");
    msg.distances.assign("RTCIPOBBTNDPPXKMLFLLHADYPGSBXTGNFTJPLQBIFKGUKUQPWZSXGUTTQAPVZJGGKSQKEJMMOEDFYHUJEUJNAXLCVOGZNMRZHCOXARVDYHXDAFJNNYWYKTIWSTSVFIERINXVVKVRUIHBJUORQCDEVDJMBWYRMXRBQHMAJYESZVKBNYRLYEJIBSOEF");
    msg.actions.assign("CXXEIBALSLZYACVWYCHCIZSNWZUQBKMYWDGGRHQKSTZVAQPHRVQTIHGJOFKIQAMJTFMVFNTRXBITDBABXFKUCJMNKMEKHJUEXNFWCOUXJWDYERUPIBJAURASGZQRHDKQPSWSCUYUSGPDJVAWOEXDWHQOZEUVZVDXPJPTAKMIDARHRQLKEIPLFTPMGPYODQBIVSKLLEHDLZPGOJGVRFYFSMNZGCJY");
    msg.fuel.assign("RPZJVAVTOEWPSIATHWXNIMTAXQFNHOEYDNYAGWAKSVMDORQFQUAGBWTXLPFNEIFGSONVGYIKDBWLYZGYYMBJDXPGZECBYUCROLKUHKXVYLFPZESMKZBEJHIAKGPVLJUDKKDSLOIUTHCILCFWBQHQDIWTTVKTQZRNBW");

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
    msg.setTimeStamp(0.07471277302405854);
    msg.setSource(31823U);
    msg.setSourceEntity(242U);
    msg.setDestination(24572U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.7328764807860428;
    msg.lon = 0.5009668750318261;
    msg.depth = 0.7906355765415093;
    msg.roll = 0.2947001389090407;
    msg.pitch = 0.061341782529088285;
    msg.yaw = 0.4943676618834567;
    msg.rcp_time = 0.868578444305427;
    msg.sid.assign("XULZCYMHFQYSTLGJIWSNLMRNTEQVCLAZMUZZLDDFRHKTVKIOHUQFJZWUUMSGAKKHUUIEBNHDJXBGESVAFTFPVRYXIRWMKWGOYPEQMJZGBRXRPXTPBQFYGEGYAUBVPCJCCQB");
    msg.s_type = 184U;

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
    msg.setTimeStamp(0.46510463218473985);
    msg.setSource(41157U);
    msg.setSourceEntity(99U);
    msg.setDestination(4192U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.712165372650979;
    msg.lon = 0.16420991971644472;
    msg.depth = 0.23441533984091312;
    msg.roll = 0.8487462422764274;
    msg.pitch = 0.06915058779051075;
    msg.yaw = 0.4384467279324029;
    msg.rcp_time = 0.40770765762402705;
    msg.sid.assign("XLLUCINBOULMFQBSINSMRBRECWRJAGRTDMLPSRZXOGDKUZPUSEVQZQWFKKQOHAKPKUHOTGIORNVKJOBZWKSUUIQGJETNSBHWKZLWGHAICIZCAAIRVYRAFOYPEIPBFDYJFAANDTTLMXWIDYFJEGLYTXNYJSHCVWZCMUPCMZGLMGWDZHHWCVHQRSXLROCSNKVTDDAJNE");
    msg.s_type = 174U;

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
    msg.setTimeStamp(0.8108067358562955);
    msg.setSource(30463U);
    msg.setSourceEntity(26U);
    msg.setDestination(53834U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.5915977594831396;
    msg.lon = 0.37300372640112467;
    msg.depth = 0.595969453403381;
    msg.roll = 0.9995960512287868;
    msg.pitch = 0.39221882127568775;
    msg.yaw = 0.4202975119000034;
    msg.rcp_time = 0.5972975330916377;
    msg.sid.assign("TSMLKCUQQAYOHDHGGTZMBFHVHGJMKADBIRLNWELYKDDIXXNQUYELVTVWIQXKAFLJYZHTQFWGNWFUFIOQPUYIBJANNPNDXRGHDNPFULBNLLAHKJXVJKYWOAGEPWJDRSNYVCBVWHFXCWHSQFMSOAESQCPBYUMGBDECJOYS");
    msg.s_type = 127U;

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
    msg.setTimeStamp(0.2596217192056747);
    msg.setSource(2824U);
    msg.setSourceEntity(46U);
    msg.setDestination(21844U);
    msg.setDestinationEntity(44U);
    msg.id.assign("OXBENHDBDYUYZKQRRLXZVUKUQFEAPQMBONNRVKYSHPLUHXFTYZ");
    msg.sensor_class.assign("ANNPCAMURDZMIBMDSFSYDZUKVCUSNEJZUYMYESDUAVRJWARRBKBWJXTYGEXWVMUQEJRHPFNPLQHBQPVTRABKQSRYIRCLTMVKQGPNSJUOOYCDUTDHUHXJSFZDXTVJQIFATEGOKUMFWOICTGWGBXYVHLOHHFIGPVBFAXDWTEWIDLTWZNOGCOOQFBPHCLTRNKADNLIIQMPZVLZFISEJAEKZQLMGZXSRMOHIXWKN");
    msg.lat = 0.03903763413245398;
    msg.lon = 0.770699121545877;
    msg.alt = 0.39964232854657866;
    msg.heading = 0.7116478052809946;
    msg.data.assign("VBBLCZCZPAVFTBWSKPAZILYHGRJIFLLJKERPVCKUQCERXAROCBIUCLJEJOVQMRKZFWUZCWTBXGDZXYZEAPPUEIHMWHZPFIMJSTEUTJNQNHBYKLYJQOVXMDOXDSNIAQNYMVHODOKGFNQR");

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
    msg.setTimeStamp(0.8089878708175612);
    msg.setSource(42813U);
    msg.setSourceEntity(119U);
    msg.setDestination(4747U);
    msg.setDestinationEntity(81U);
    msg.id.assign("JBPYMWWRDFGWQUASMBGHUWVKMCENERDJHLDYHVKFPNQGXHBBHFIGUPHRSOEQUFSOWXCADSICKZZQNIONYMJXJWIHPDSLTUXUDBBZWFBABPNFOXBRZEEOVMHIFXNSMUMEOLEINZWLCARZOKFGIZXVEGDYLSTAUDPGAMLJJLDZXQEACKQTAXNRAMLWQPTQMIVTKTJSOZKRNVFSUYN");
    msg.sensor_class.assign("EJULBAGPWFOQVWULSDOYHBONDFJUARJGBC");
    msg.lat = 0.15146710830154486;
    msg.lon = 0.08803818070892422;
    msg.alt = 0.2255855515997529;
    msg.heading = 0.025247509121645084;
    msg.data.assign("TTKFQVKIVPIVNYBNCCZOCODZPFZVWUXEQSISTXBTNDEYKBPDAWWHXHKXFABZLSJWGNZAAKTHUZGHJETRKLZRCUHHLRZPJUIZ");

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
    msg.setTimeStamp(0.49553800632762335);
    msg.setSource(38397U);
    msg.setSourceEntity(235U);
    msg.setDestination(55470U);
    msg.setDestinationEntity(111U);
    msg.id.assign("YSTTDGMDCBRIFUNXUWGLBCRUCJBOAKNJQDCTSKEJZSWGHEBQVQCFIRRRVBDTVYAJFPZXEEZLKDMFWSVPLIXHULWKWTDUODYFHWOMLMJAEUPGNQGCVAUGHINYDLHWSNOZIFVXYVEAPRBSDVPJFJMZQTEQROCKTZIYCIGBNYKMYWAVXQWPUFXEULPPNQFHIWXTAJKZKGGOMLKISXRCPJTDYHLHHCOP");
    msg.sensor_class.assign("EQRZWDJOAEFKBGNKCTTFYXBRKJXQILYDXDKDYFQMWKHCSHLYUKJOBYBQSZROSWRVKSPVGTPVTELZCTPHDBZVUFHLIOFLIECEQFWXJYWZVOADOQTSXRFPLKMXSACMLSVBJNNGWAXTMGBBLLXJXNIVAURZTNDSDJYNWPMUBPRIEOHUGJHAEDNQMTKMYKIQ");
    msg.lat = 0.8598650304609553;
    msg.lon = 0.5776216173773141;
    msg.alt = 0.6181415250415786;
    msg.heading = 0.38088142970989547;
    msg.data.assign("RCYLWNSPSXAZYFGJEXWDIVQTJPRTZMSVJQEBKHXNHAYKDUJAPEUMAZDWLNORTXWUFHZHHGQDHAGEGCSLOZUSBFSMGVGCIBCBJHXUVILJASHPBWINKSVNZLNIVHVCNRIBOVECJPLTQBISEJIMOTGJTUGPDZZQEOYAQXNQFTOEMQGUWTORFTFBXZOKCKYFOIJRHWDYDFAGLLPWEFROKUERXADMRLWUUWAXSKCRVBCNKQCYMMMBIKVKPNQYP");

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
    msg.setTimeStamp(0.09548175919982804);
    msg.setSource(59233U);
    msg.setSourceEntity(16U);
    msg.setDestination(19222U);
    msg.setDestinationEntity(4U);
    msg.id.assign("OHPDCEVTWXSBZTQHECPYJKAKSEEWTUUOGLPQFBFUTGDQXLGIKMYUXILWFZHJNPYARBHWNQHQTVEYDFOJPDAXYUXXAOOVHVRFTJNIIPJABYSKGJJBRKOWCMUZPAICZWMVXRRRVDZ");

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
    msg.setTimeStamp(0.6612766746199722);
    msg.setSource(20760U);
    msg.setSourceEntity(212U);
    msg.setDestination(40963U);
    msg.setDestinationEntity(13U);
    msg.id.assign("ZNXEMJQJXABEUMPR");

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
    msg.setTimeStamp(0.633241586415764);
    msg.setSource(21693U);
    msg.setSourceEntity(234U);
    msg.setDestination(10829U);
    msg.setDestinationEntity(207U);
    msg.id.assign("AVKBGYHQSVQZLHJYRQLXHVXRJZSGIXPDFWPMKIKJZZHCWDIFVBSRVDAGQTFHFFSLNRUPBPZPCLXMDSQQEAGIUMMTWQSOHMFAVFIYXDPMYUGZOOKJROWKABREVABDTTZHQARJY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UWFBDQJDCZKFIJVHEOWOSTMEAEDALWAPYKLSXDUHCVRSWGJRIWFOPEEKZTMMVGIIIUVNYCLULFKRJPHCYYLLPUGGGMDAQQZSXQMPVXGHZLXAOZWVMRPVXRPXNQYETEBSSYOUJFPFOZFZNQISCLNUJFTHCPQXAOMKKBHAPATKARWBTGLIBZUJDQFJUNOSBBWNEDRSXZKJDMHYHJ");
    tmp_msg_0.feature_type = 219U;
    tmp_msg_0.rgb_red = 42U;
    tmp_msg_0.rgb_green = 224U;
    tmp_msg_0.rgb_blue = 196U;
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
    msg.setTimeStamp(0.238830147533038);
    msg.setSource(13230U);
    msg.setSourceEntity(251U);
    msg.setDestination(15687U);
    msg.setDestinationEntity(152U);
    msg.id.assign("OQUVJRIKCTI");
    msg.feature_type = 214U;
    msg.rgb_red = 47U;
    msg.rgb_green = 247U;
    msg.rgb_blue = 209U;

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
    msg.setTimeStamp(0.9077520929110732);
    msg.setSource(8779U);
    msg.setSourceEntity(159U);
    msg.setDestination(25562U);
    msg.setDestinationEntity(170U);
    msg.id.assign("FPLWZIEVBXTJITM");
    msg.feature_type = 236U;
    msg.rgb_red = 174U;
    msg.rgb_green = 183U;
    msg.rgb_blue = 46U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.010928073754727818;
    tmp_msg_0.lon = 0.9146478765077104;
    tmp_msg_0.alt = 0.5031286889306315;
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
    msg.setTimeStamp(0.6544506347369218);
    msg.setSource(61489U);
    msg.setSourceEntity(211U);
    msg.setDestination(33528U);
    msg.setDestinationEntity(75U);
    msg.id.assign("YRJJSSITAWOPPSNNZLBGWJWFPJIBEIZEZPEZOVPYIKNXXMMALMTTFCMCGGJUVBAXNKEDYOSUOZSJGNHFYDQHQIEOLCAUNPTLFLEJPLRCFTEZERCVWBKGTOUETIOFVSVMLQFZBCKBWDGFOMGESBBCIMWDCDSWAXRXUHXIUPPRJMKXRDVHHTQJKQKYTXQVCQNFHGXLGVUSKWHR");
    msg.feature_type = 190U;
    msg.rgb_red = 125U;
    msg.rgb_green = 125U;
    msg.rgb_blue = 122U;

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
    msg.setTimeStamp(0.799374857802343);
    msg.setSource(17511U);
    msg.setSourceEntity(5U);
    msg.setDestination(55943U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.6669854602793818;
    msg.lon = 0.3866378088618131;
    msg.alt = 0.6604407035507945;

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
    msg.setTimeStamp(0.9827049254945878);
    msg.setSource(37425U);
    msg.setSourceEntity(211U);
    msg.setDestination(53777U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.015807225333247632;
    msg.lon = 0.8628391940005347;
    msg.alt = 0.9989352503839738;

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
    msg.setTimeStamp(0.44751371137718454);
    msg.setSource(27020U);
    msg.setSourceEntity(8U);
    msg.setDestination(34893U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.7991466877704235;
    msg.lon = 0.8675882055924214;
    msg.alt = 0.14769408350467272;

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
    msg.setTimeStamp(0.10382804604018425);
    msg.setSource(35566U);
    msg.setSourceEntity(31U);
    msg.setDestination(48924U);
    msg.setDestinationEntity(190U);
    msg.type = 104U;
    msg.id.assign("KIXDYEWVBSABGAPLJTCWLCDEHEQOVXEBVLPYRQJHHMYZIMHOXYKKSOYARFTNMEBYCUUGNCHNMVJTMYYDWJTHHLRGAOYRPXGADRWASIICKRDVMIZFGURMEECJUTRUVNKAEQNXQ");
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 69U;
    tmp_msg_0.max_depth = 0.7453943676296589;
    tmp_msg_0.min_altitude = 0.8312653484966567;
    tmp_msg_0.max_altitude = 0.020365207832824472;
    tmp_msg_0.min_speed = 0.24905770937377147;
    tmp_msg_0.max_speed = 0.356976649765681;
    tmp_msg_0.max_vrate = 0.5118029294638712;
    tmp_msg_0.lat = 0.7750068860500611;
    tmp_msg_0.lon = 0.9247726790940173;
    tmp_msg_0.orientation = 0.46295578792560266;
    tmp_msg_0.width = 0.7068600324220149;
    tmp_msg_0.length = 0.3052715012750493;
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
    msg.setTimeStamp(0.3657711267273105);
    msg.setSource(5971U);
    msg.setSourceEntity(105U);
    msg.setDestination(45534U);
    msg.setDestinationEntity(246U);
    msg.type = 90U;
    msg.id.assign("BETOKQAMGUMTBWZOYZOZRIEMVBUGNKQKCIIMOEKMXFBDDVGPWVZBJGUHMEEOFYXWDTJOPZKDWNTRHMRHEUASCULFIABADFXYCRAPEPNKRNGJXFCSOFRUZBUZQDSKZNYTHDYCQEXRUVKXQMERBVEXNXIWSHNWBYWLCIPHSDFPMPJNSJRHAFUTJQI");
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("GMYOTWHSUMPXMKKEIKXQTDRUCJLGPOIISHDURLBLOEKFNXNKATORMBVJWBBENXYXAHHO");
    tmp_msg_0.state = 185U;
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
    msg.setTimeStamp(0.19080977632274188);
    msg.setSource(62001U);
    msg.setSourceEntity(220U);
    msg.setDestination(42502U);
    msg.setDestinationEntity(107U);
    msg.type = 198U;
    msg.id.assign("MEBNTJURXWVDCOVHFJQPZKVFBVTOUKDRZLCIEJPPIDWEWANTVWUZYVQSFRTGNEAYQWBGIEYYUJPBNHXYJUARFQEZWOMJGYUWKMCWMQSUNMLEXHFQQISOHTAGTGPILLRUFTDXXAOIYBCRISBLCCMBTOCBJESHGHXYZBJZOHPRUNSSLKOCFFXMSND");
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.27664969244836857;
    tmp_msg_0.base_lon = 0.214997739078703;
    tmp_msg_0.base_time = 0.7641947428926971;
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
    msg.setTimeStamp(0.3694202729344399);
    msg.setSource(28673U);
    msg.setSourceEntity(106U);
    msg.setDestination(42912U);
    msg.setDestinationEntity(172U);
    msg.localname.assign("DOYCIHRMRVWGJKESBMOLZJFIJWZVCHAWDSANDFPZMQUPMFZQWMSMFIKABLWHTXVZZOPGPNJNUKCCCSQZELLQPFXOUPIEYMIBEMKJGWIRFXKFDGEOFPHOWIBHLQRBJBBOEKUUVIQVUTQWERYRJHNUTMRKRUYTNGNCGIYSDVBNXTTUTCNWCDPXSLRQDRZZHATEAGPHPGXEEKTDKVOGSXOJBJYNAYYWLV");

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
    msg.setTimeStamp(0.610169164066037);
    msg.setSource(46989U);
    msg.setSourceEntity(69U);
    msg.setDestination(44462U);
    msg.setDestinationEntity(45U);
    msg.localname.assign("KJREJPGNLSLXVQACCHACFQUIPOQVBLMMYSKFYWSYWFCODZRDMMPTBXGAONUYOPXQEFKQUFCEPAOHIWUXNCFKKVEMJEGGXBAUECJWXVPIDSGMHHMRBGYYEEGUNNKANZYNDIHQPVDRLLTTMZDGCWDVSBDSQVSKMZCFOLRUULDNNAQTIZVJN");

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
    msg.setTimeStamp(0.765561778058954);
    msg.setSource(21716U);
    msg.setSourceEntity(104U);
    msg.setDestination(26388U);
    msg.setDestinationEntity(77U);
    msg.localname.assign("ZMKXAZBXGAIMVKQVSFBYQZRHBOCNSHEMYGHGQSRDJPWOOAEARRDGWZYNZXWNPBUTYLGPERIDWBJIOLAFSPEFRIPXKWGKYNXEUVNWYVPWDKVZQEMXFGEDFHTMUDVLHTWUIBFGESYXIMJNUFZTCCXTPZNOYHACAOCUTRNJLBZNCDESKQOFPNLL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ERVMLFHXBISSIQMTISYCOSZXVYZHOOWJWTBWRXUDWJJEAXDYONCWKKPCVMBHTRZZBPDAXEKSAAMIYXZUTUMFGTRIPBCGZRHUHPWNCXDTNGOXSEFTFVUOVATR");
    tmp_msg_0.sys_type = 109U;
    tmp_msg_0.owner = 59888U;
    tmp_msg_0.lat = 0.8770941697954181;
    tmp_msg_0.lon = 0.5711842109913676;
    tmp_msg_0.height = 0.017151179497380653;
    tmp_msg_0.services.assign("QBHOFPEQFPEBAJNTWTSGEUQEDHBSPYRZDNLCSAJTUWXYUMRXKXMUJWJYGTSTRCLTYGWGLLLQEYCDOIQVREIKKJZZPBGMCJRGBWJWCCJNWNOORHAKGOBCITRUSIFFINJEEKBTKDLKDVWCRIDA");
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
    msg.setTimeStamp(0.6005049016718528);
    msg.setSource(36408U);
    msg.setSourceEntity(101U);
    msg.setDestination(27605U);
    msg.setDestinationEntity(19U);
    msg.timeline.assign("OOBOKXAXYBKFBUXETASAWNVDGYEFTKRSHBJVQORPNWSSJALXBIFCYKKMSRPIKJJDIGCHFJCMEQHWZEIXAMWFGEWGLLOTGJPTRXNWRCXPGMHZBNZJNUGDLRDJHBGFFSTXWUBOUZIXMQGQV");
    msg.predicate.assign("HDJLFUGTBPEFRUAHJFUJDSKDVBFZGFQBECOVBAXXITMLGNMIYQZARRPKKYMSZZLMLDSOTYONECPMYDWNLNBHUICGETTTLUEOIOAZOZZYNQSSRCWCPJ");
    msg.attributes.assign("JQWPQBYESWBESCKOYEEXDULSENJHFNHDXGFZAEFMIBHMWNJIRMQOVBNUYPXEHRSSGVAXPZWBAZQCKMJDNWJCDKPPHURIGMZAHATIAWYMVTTIJCQEOIHGHY");

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
    msg.setTimeStamp(0.8154439635224753);
    msg.setSource(41193U);
    msg.setSourceEntity(245U);
    msg.setDestination(9422U);
    msg.setDestinationEntity(23U);
    msg.timeline.assign("EOPYOTCXFQCGONTSQVXSCMCVADOBISZBKIHFSDNGKFWFM");
    msg.predicate.assign("IQYHCSPKJMIMHGEAVZTWKVCOMAAZJJQMBKOAMWUNNOOGRCWXIKZJQWXSOSDXMBRTLJLBRYHKPBGQPJFTZFOYYVPLLLASBNMOBRPXTGYSRPPIUECZQSYIPXTYDZHVUUVCUHCXBNHICYAIGRTASLJLDEMZNFWFWXMAVCRVZEYBJUNZDGKVBRXQSWCIDZGHKVAFXFLPKNWDTEYDKLCDMWOOUHRDOERJSUTQGENF");
    msg.attributes.assign("YRZLMJRCFOQJBUATDGFQRSLPUTSTCPMJMGNBRLKPIQIUEYHVACKPZEKKCZNUVPUOWNOXEIQWQSRCHOAAQEZCTXBWKDYMSJYKTIYDRATLOXGCJSMPRAJUEFTARLIXTIMOVPOBDKADZOFSBFGHYFPXHYVNLLZPLLWFUVHFJDAXBBWHEZYLVMICSSDVBDFYGXGMVHWNKVRRWFMXSGUTOIBQNUXPJDQWZYMITEWZCOXZNHKGNGVEHSDJU");

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
    msg.setTimeStamp(0.656787476582884);
    msg.setSource(15929U);
    msg.setSourceEntity(161U);
    msg.setDestination(12466U);
    msg.setDestinationEntity(31U);
    msg.timeline.assign("EWEALPYTMMKXNVVGUKXBTQRKOLWDGLHCLFGQJSYMBDNWVMKIXNUSRPMHZSUXKJPJFBJVRLLRTVHDQAJIQYBVXQJHRWNVECOFUFYGYGRUOTMVFCYPDZXJJPKQPBTFGEEZOZOZMMUEBAOHCHAADQQSRXHANZUIMNVZSTUSIVXXSEWWAWLMQTBAHCWLFFGDDIRCYOCRFKEOGSTLHYPDNCUUIKGYWZJOOTSPBWDZXBE");
    msg.predicate.assign("WIMFVRQHFVOASDADIGDIBZTLVHWJGQTKHHPBVNLTPXRRHEAPIGBRCMMFZVGYDKRRHTMJIUWFEHAAQTNMJILDNFNMJESUKGFJIZNCNYJBLCECJPXQWSFRBECMOFGEUZTZYZLPETXUGPIZXLLBUOOOMBKTSWSMHSHYWCQXIVYGRYAQXZWJQBVZREDTACSAXJTUDGYVCOBOLUXNEODYFUQPIQXKD");
    msg.attributes.assign("VRGWFUJSBQALLZNDPINBVXDGQHBBEGEDHYHPIJELKIIEVMDTQMLFGNYOQDWUFIOHKAZWPLFXOVNAELAURQCSYAJQWCZZZSXFLJZTEKUSLRSKGEPEIHFHQODTXWWDDMJKERPMXZCTOCEDDPHOBJYOSBIVFYCUYSBVJPCGAUTPXHNAGZNGKBVWLZTNGTMMMRCKYSYIPTNJQFTRULUXRQIPFYNCTBOVAMCHWRVIUWYOJAMNOVRJSCBKKWQGAFRHZM");

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
    msg.setTimeStamp(0.4650439361555392);
    msg.setSource(33653U);
    msg.setSourceEntity(131U);
    msg.setDestination(64737U);
    msg.setDestinationEntity(241U);
    msg.command = 167U;
    msg.goal_id.assign("HLCJRVSGJIHNSQBJZSAQNARYIXFLRSYOXBBPJCRRGBVWVZNULFPAUWPVTRIAZMYWKKKDCRUAUQMGOOVEBJJIMWODTHSEDUYYESTCIOZAQXGSZDWWFWMHSKPPRODKSYXDUZAVUZGCBXJMQKMTINGZQXMQFJLYGTEHGAXZTJWLUVPEVGKBXHWFLFHTIHBTAPGFLKEHNWFPNXTKNVEHOMADPYZCCBQTDCVSDOEELQCRONUBCLFUYPXOQRN");
    msg.goal_xml.assign("DGCMWPJCAJVTJBDACJFNOELRWCWIROGBNIZKQSDBSSQBQKNZPOIZUXGACZBNPLEKHILKMDYJEPPYCJCLOAYFRBKGZTEVGKAGXVEXOVMVQXFBXHWZBXKBLGXZDVCOAUMIRQRPFJNVTYDDXUWIAJUJE");

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
    msg.setTimeStamp(0.5954229298772042);
    msg.setSource(16931U);
    msg.setSourceEntity(38U);
    msg.setDestination(9685U);
    msg.setDestinationEntity(181U);
    msg.command = 165U;
    msg.goal_id.assign("METWBPVJLWYCE");
    msg.goal_xml.assign("OBMVBHERZDCBTCUUZKDXPDNGTVKPNKYSJSHCNFVBCPENKQMNITHJFLJHNAUVDTDKYQYLTDOISAQPGTRLVVHWVRFWRKOZHSGORQNIRTQUKGRBEPAZAOSAMJXEHWRRMFVCCGJTACGAIFFEMWFLPBMXAAWKJZDIYYSZMLJESNVEYPYQUDGITYVJPBBXXGSZXBCODXZUH");

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
    msg.setTimeStamp(0.4345502828082065);
    msg.setSource(34853U);
    msg.setSourceEntity(28U);
    msg.setDestination(10230U);
    msg.setDestinationEntity(122U);
    msg.command = 168U;
    msg.goal_id.assign("MSRWOXFWKBKPLQJFAIKAVHVMVJHHHSCMLETEGRDNYBEUGQCWZRBKMLTQWYDJJNQENUZSKDYQBAWZAVZGUYOGXPHPKLVNRNISJBCJGDJFBGISMOOVNUCFCODKULSQPCXMNZBQWMDFWTNQZILMYLWPVQAPYOXGXLTZUGDIBAIPHMRUAATPTHEGORDPOFCRXENYVFHWBTKLZGIZEVLYXITFEEYKTSSTEIIDAJOCXVRRH");
    msg.goal_xml.assign("TCHIKJFWFPLLYZIJMUPBHOBSRXETTAUTFTAFQNQDWMGWFIUPWAYHAWXHZYBAJZVCDBKOKFRKIXUNLRVTHAEMNGNBQSVQMVSPIIVAGRCOABCUILGGKCYEZEGVGDRPLZPOPCJSHSKWXOKMRGXZQDQHUMBIJNMWULLHLTKGJPSORROPLXTTJVDQONQWFTDOIGHEEXZSKKBQCEJODYYNDAEHNSFXWDUJZUVBYAFSXUNZPMRYMCYEIBNM");

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
    msg.setTimeStamp(0.09048439371761607);
    msg.setSource(38581U);
    msg.setSourceEntity(226U);
    msg.setDestination(32858U);
    msg.setDestinationEntity(158U);
    msg.op = 167U;
    msg.goal_id.assign("QBFKBSNNQQFAAOHBYMBYJJZDJCWAYRTWT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BYBPLRGTVXIVGGFSKDFHICUYNCFGFBTAMGOUBHROYRGLGIASMCXUMYRDLJDLRTADN");
    tmp_msg_0.predicate.assign("EGTHYCUIBVHUBMKNTVHIDMMQRSOKRMCIWZUUVRWDQXXNXRXWIAKLQJJBILUZJPFGNEJEAYZQFAVGSXYYDHJLCFEJABFFSZTRVORCFMVMXLIIFTOLGHWWBMTRGZAWTYYWLDJRNZKGAA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WTBOXRLLFGJROWAQNNNDDHNMBNJVPYYLYELKGOOZAHBKSESPDTOVHIPXTBVWYJUZCAPLDGBGRXOVCOTVMMHBZYAZSKZQBIYBDFJRPSTSRELXDMYQLNKZTLFKIKEWEQZXKOCQNVXZKTHRCKZJAEHIDUAQANNUCBJUDGVMUASDULQNRFFPXPFEIIWTWJXREBTJUUUHYMFWGXJQYEHHWGVSIEQWHMIPVPICCWCKJSRFMSAGOLFO");
    tmp_tmp_msg_0_0.attr_type = 12U;
    tmp_tmp_msg_0_0.min.assign("IVUBKCRJABVMTPYXBJXOXCXEBQUMSSMDRDYCSUYXBGPLGYSITZGPNJFHTFQQHXZRHJVVKJKWGVKYZHGLSOZNJVDHFRCCSHDKILKNKZLRXYLNBYJAQQNDXOZENWIWIGNACPMOBZOUYZWXYWMHOLBPHPUSCVWSEUHPRLZAKUTQIFYFFIWXQMKELBZDJVCGVMTTUMHKIQWATQTWWDNE");
    tmp_tmp_msg_0_0.max.assign("XNKBDSWQEGVSFWEQRRTOCTQQYMWMHLVUKMFNCSTAXRCPMGPYQKDQEAHHRSAHBMVOSLQJMJWFOCNJPGKXIBBVHLMBSW");
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
    msg.setTimeStamp(0.8700613408466615);
    msg.setSource(59894U);
    msg.setSourceEntity(103U);
    msg.setDestination(30122U);
    msg.setDestinationEntity(242U);
    msg.op = 112U;
    msg.goal_id.assign("YRIFOGBHDDYQBQQCBUXNTDCNAOSJJXZMKLQWHHDXQYRVBFLMRVQCHOHBRZIWINKSFNGJVOKBAFALAYHIMJWOMQZRAWUFJYYEUPPAXGAJOTUVFWTEEWCHSNLPCUHLPXTSRUZYEHUGNNEVPRVKUXDKENFBAUJGCWQMIEGFPLJOZWZDWDPRIYNP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QHLAUEPZMEKJOROLXPIOWBUTZWKJZZUGYDGISOTSGTWRNQXOXGEDYDRLXAVBGPQHZGVIZIHBUGWWFUELJTTQDHRVVGIDFTIYVDRLYPNFHTUWBSSPNZABOWRNLVMZXBLMMINAVEXFCBNKUUDRQCFEIYETJWDRICVYOXKSNIXCFAHENCM");
    tmp_msg_0.predicate.assign("TYKYZEGNWHNJCBKVPNIGDYCBKMXMYQZKXGBBOMOVUACLRHIZE");
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
    msg.setTimeStamp(0.406453593546517);
    msg.setSource(15562U);
    msg.setSourceEntity(54U);
    msg.setDestination(38216U);
    msg.setDestinationEntity(119U);
    msg.op = 198U;
    msg.goal_id.assign("UTAHLPRNIZVZKDLJWYREQFRSWXIGYZCSYAQAGAGWOPGWYJBIMGSYENPVNLXJHDXTTWBQZRTMPKVHQMYCBDCEMQHFNWACAGQNURQFDMFNLDVZDCIUBSYNCKKSUBFKOIUAIRRLNMVBVDSHWQVZQMDMOPVSIOLNSTOKNHOFT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IBWOEIUPZRKBHSQIZUQXJSLYXQKSWNNCHHSQUT");
    tmp_msg_0.predicate.assign("SOROGEJHYSDGAFHZIKQSVHNAYJEEMEVABUMLRXXHFZUJCTSLKBYMMXYDYGAUBWEGTHTVULLXMJGDANJCMNZOIQXAHPCJGNFILOUTWPVSYBKCRRDSIQMWQERRZDSJXFJAUQFRMNPTVFZBVQGUOIIYAPCKBTIXLDOWBTWDOYRLPIYPUDVORQUXZESDPCZQHWENLKWLSHEZRKFVQKLKXCPAPCHGMMWJGBVNZTNCSTBAZCFTOWOQG");
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
    msg.setTimeStamp(0.6288831063867973);
    msg.setSource(6126U);
    msg.setSourceEntity(57U);
    msg.setDestination(59152U);
    msg.setDestinationEntity(148U);
    msg.name.assign("RYTRNJWVKUFYTUSQRJMJFJMO");
    msg.attr_type = 148U;
    msg.min.assign("ZBGEYUMFABHJIPIWDKITVTNV");
    msg.max.assign("HAUWKOCIPTAHDOSJAMGIYEIUGXIJBLOQLORNXOGBVJCYPUEENLFFSRYZLJMAQYUQUPFFTXCKQDFDCPRRUHUHYCWTGSQMFGPTNXIBXFUDZKSPTLNVCXNFHOJEHZWXMARSBPIKMKRJALSQHVNZLTRHQDQBZTEDNTMMGPINCGDMOGXNRVUIGQFLLCQKYSSBJAKMGKVXOYTHKZANWEYDZEEEEWLFTZRWWJWBKOCAZD");

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
    msg.setTimeStamp(0.6888259324493569);
    msg.setSource(52209U);
    msg.setSourceEntity(60U);
    msg.setDestination(16668U);
    msg.setDestinationEntity(244U);
    msg.name.assign("RHZJNYLRHVJTZMGPBSMCFDDXVOUVPOYHXVOISVLSZQEBVBGUPSYGTTUMUAYOPKEOCETIRHKFARGOWQTTUHYCMMFXPFIKOLNYLAYZAIMRYRQKKZPDQANNALEAVXYNBIFCPIUOJYFLUQITGGKLDPQWMUWWBMSJOHWNBNXFWWHQXABZZVIESUINWRJWBTGGTJENC");
    msg.attr_type = 198U;
    msg.min.assign("RWFXDZHKTUFUHHFTSCPXNMGIDVIFEYCDLJGOYFRUWWYEIJZVHVYKIWMVDKMQXFNUWRIISUZUIFTROZJVLODTVECKRBQLTIZGBDGBKYZLSLEPMNTNOLGVSOPSCNAYDVBSLCLHFXNOHGYAXBRUKSCYRFNJQEPWDUKCZTHOPFURSOXQUMMXGBNJMPR");
    msg.max.assign("XNTCIWWBYWEONCRLVOHXPNWEITVLVLRKMGPALXUBTRVKQUGZKDJRTDLPWNIAQQNAPRJDARWUJYGIJHCCKHMLZUBHPGXGZXONYKNJEOTFIFUT");

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
    msg.setTimeStamp(0.8050058512251954);
    msg.setSource(36953U);
    msg.setSourceEntity(30U);
    msg.setDestination(37277U);
    msg.setDestinationEntity(89U);
    msg.name.assign("NBZFKXXXVTDWSPFRMIADEPKAIUNJHIWVNCBLPMYSJRXWIMMJLLCHQOGNNQBUHIVBSALWOUTCKXXPNGXQDOQIGRCVDJMFVZBJVKDRTAAVWBDQKWUMNCKQEZHEUPRLDQACSVMLGTWDZKMRYKJGYAHTRNIUPASDHJFQZEZREECSXFNBYOUFF");
    msg.attr_type = 202U;
    msg.min.assign("PKONRQYESCJSKLKASGEOHIYDOFRGFKSHLFUHMBAAOHSWSIZAJLSKPUMYXLXBWPGNRCFDGPTDYAZMOUJGIWUQPSMELKYODBZKNCEQTRAYWXQUPZEUFQCTIRFPWYXGOCMHENZXJAMCKTBVXNWIIGTOXUWIJPVJFKEVRHLXINHDCLCOTZ");
    msg.max.assign("TRUVUGDHZILJRJSISBTCEEVCYMUXGDOIMRNKMJRGRKZTUQZLYYMABWPAJWYGFTDXEHPXSKMHDDPAHEUNJSAYWDLXEAIQTNCONSXEERQKFFHGVKYPQKAUOQVJSQINRQVJLDGWBBBNVRLAOCADXSNHPVTYFNHKCUPWIDMXUBFCKSPUVFZLQNFKJUOEQFRNTYJTHLGJAACCHZMZZWBVSYXCFORWIPILMHXOWWKEQYSTMVGBBIZOTBMW");

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
    msg.setTimeStamp(0.20674627509445664);
    msg.setSource(32505U);
    msg.setSourceEntity(221U);
    msg.setDestination(9071U);
    msg.setDestinationEntity(119U);
    msg.timeline.assign("VEDXSEUHDCTRUJPLGJCLUSVPAHKIDGDJCUORUDQNZRIFRJKQTXTSMISMZVLAIUGLUHLKUATCWHBYNNBPGUHRCKEILZLZSYSEYWLTYITJIKAAOFYATPYNQUKHDXOSEVXRSOKYQKPWWMHQOZEBZZSYZGXMKXABRHSJACBOVNODKEBNIVTJEOLRPVWNAMVVF");
    msg.predicate.assign("NWOTCRTZXQKINHSWUTRCDJFUFOUMISEHYHYFPOYWOXSFZBMVRGLLLDUYAXJLVLJDJRHWWEGDRMABEZRWIPXVNHSPTYMXXSNOTQZSMLJYPEDODWLBNQIXWGAHSKJKNHQYKHZWCCPCBXFQYVZBVBFFXG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QIHPBADJBBOMTZGWDATXGCHXJBMSXUFTGWLFTULEAZJDPRHSFJLYUPVGMUQXNQRAKPUZQRXGPAIVRINPOABSDEYYWVRTQRENIUEHDHOOMKBCZYWKXFFWEHXGZEHEDLJGXCTLWJUCTSWVFDLVHBZQCAKATMSKISWDYEKOOLXPUVNTJZIYVBNVSOHJDUMZIACLZRWCOJKOPEISCUQQKNEWLNQGKRYXSDFRCPBFTYLOKGVMJZVIBRYYIFMCM");
    tmp_msg_0.attr_type = 175U;
    tmp_msg_0.min.assign("RXJSOBUEOZSHUDXTIGEMYOHWJQFCIGHDESZZMXNXGWEIEMODMFCJTWACESQEHUNYZDKCZURROWJHOIGOHTQCFJYXVNGQLKUNORYWSQVYRHIYAQMBABPXMPNVDLXPAFBLFGYINDMCLSZAQFIAVTDYWVXCMSUPBINBWFWTKYRLRBVEKRTFTZGBCGHMHPNRRIFVSAZIUXGZZKFJAWUYDTPLKENPDNPBPVXJQGEJHSOS");
    tmp_msg_0.max.assign("UBKGUSHEQMDMOSFLEHMSQIKKINFYFPCACCEPOJDTVRBIKWTWPLGTJRBWEBULGXDYAMSKYRUDWGAOUWSGOHRVPAOTYNEUQKXIRSORVTSHOZDWNJHDZCQMLFAMLPQRHEBBINFL");
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
    msg.setTimeStamp(0.03961485419230648);
    msg.setSource(43196U);
    msg.setSourceEntity(222U);
    msg.setDestination(25359U);
    msg.setDestinationEntity(34U);
    msg.timeline.assign("QDUQTUDGPMNOOYKOLQMYWPYRHXCXWBAQAAKKRWTEHHJPJIGPBCUCFWNABRMUNGSWTSJPXLVRXVGOLIRNKRZDZPSBKFD");
    msg.predicate.assign("KNQUUENGPTRDYVPMXFAPCWSNMQUSDLLNFQKZKAITULOALOTHCHYNRDQIGVNMJOEFWMXEDHBEIEVMNBCZMIBGEOQYJQYSV");

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
    msg.setTimeStamp(0.7076740512577804);
    msg.setSource(6112U);
    msg.setSourceEntity(21U);
    msg.setDestination(82U);
    msg.setDestinationEntity(244U);
    msg.timeline.assign("ZRTZMOMORVRXYEFCYIXMTNSEVFLNGPZAWOXWPKQEJODEUGAWIDCGKMVULEQCBEWIDYLNBDQXJQZWBCIGSJSULDGDSUFMJTATBJ");
    msg.predicate.assign("SQLZMYHFKYADJSVBJVSHXFDWKEXALUXTKTIKTAUPQMAOGTJPHZXRXMINHEFMNUPYLPVLPNQBKLAWSRCXUFULZHPVSGJCLOKQTZREZDXWHZWVDJXHMQNSZSYDXJSWWFWVNTKCIUOCRUXAGRWFVIUQZHGLYRGRMGVNTSMENFJLPFYQBVGINOKCNVIGMBMTOZGDKBPUAFLWYHETPIKPIODGMUJCHEDOQTECBWNCQYCBBRBDDJEYIAJOB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZHQFXOTSJCPJMAVGBUWDMKTSCWMELRXMKCDURNTNEGSXLXNNYGFPLLBYXEWECZJMWNMPQENIGAXLATCBDYYWQVKRSVYHCDXPJNGWTWZYKUWDOYURIVLOGOCDSFYRDRAPBTZFKJIOAVLRIOHDOOETAEJAIYLSIIHPPMXUUHFLFKVJJQRZGSROQGBNVROBBEDZHETNKCXISIKSBWXLJGBAWTZSIVP");
    tmp_msg_0.attr_type = 213U;
    tmp_msg_0.min.assign("ELUXFWOFYSXQFTUWBUSNQIPZWQSWVVMAHKAELPGBZESSDOKTORMUXLBNGUAWAZFDZEHEJGYQIUVJUQZIROGJNMRVBDCKFDKTMROUEDRIXVVCMLJJHDHRTTRDFLYCQJQVLXCZIOKWKDNNTEWHAKJUJFBUGVJGTQLCLPDYPXRACMTGFSWWNSYYBOPTYGZIZ");
    tmp_msg_0.max.assign("AQLTNOPXCTZHWEHGBKGXNGLCNFCDGICBYKXTOMLDDXGGJOJYBLNRINCGEQJVDBTFEAUIKTUUJJBTYBOEOSXLY");
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
    msg.setTimeStamp(0.593630553170152);
    msg.setSource(30770U);
    msg.setSourceEntity(79U);
    msg.setDestination(45971U);
    msg.setDestinationEntity(93U);
    msg.reactor.assign("PUWABJHCCJHOARBGMOGFNTPSBSLLEDPSYWJZLQDJUKSGRXFYUMSEAMCCFDZIQUHXKHTEIRJKVWVXNPDXZFIRLIFVQQUGBWVBFEYFTJPLQCTGEOPZEKPZRYSPEQNRFHTASAHUWMQOXXGIPIJDJOUMUGIYTBRVHGCWONGVCBFBRNLDNADOYQACZMQOVRPXXKDHTZZWLXYALKBYMSVODENWF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NMAOOGSOUTPKHUVTUCIWTXDKMYVHGGTGKBFPVUAVTCLLOAYNBCJDQNTGSPJDWZOHZSYRLVVSECBPUVZDOYPBEYJRBYTEEGBARPTWSRNXZTZBFZNSGFELLXOYYPHKNOCDXDUMAOJQKCPEJRNHEWUQXJQIUMJFVWFVMPMQFHXSOHZEJMERTCQZQIUDIADDAQXRIHXWSAGNDIHKILWFIFFXCNMKFZWCLHMGRABLKQQEILY");
    tmp_msg_0.predicate.assign("TYRXNOFFAZWSLNKOPDWKMKJCVWUUMEXFTOZMWCTYYTVBNCUKJQHEUCZVAOMIJNIQUDVSLPGEFZQYMLWABPTRFDFSEYDJTKFAUIFLNHHSIPMRDDPQRXJAVQIZUUZQCXJCSJPZPGTMGEVZQKNXMBTJMSLGTTMOLWJGNBDXEGYYPCIYKEIPXVISLHSOIVBAVURICU");
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
    msg.setTimeStamp(0.3023592522835191);
    msg.setSource(10409U);
    msg.setSourceEntity(210U);
    msg.setDestination(39179U);
    msg.setDestinationEntity(123U);
    msg.reactor.assign("EOACFUDHPGZLL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YGPMOADWIGPVJKRMHJWEIJSKIIFVLTOBNZUZUHWKRNFQWSYDESMWFZOSKGVERTAMULJRBZQTSNFEGBDNYGHSXDXXGXQZRHIGLVKPNELJCLAMRSVLLDAXTZLVTTQWEICGF");
    tmp_msg_0.predicate.assign("NYKAIBKJUFNPQFNVQNXWGEUCGVLPBRDHDYKFVKLVXQZJCCMVDFCTYAKGTIRDVKFLKPXGIEOHNQMOOIBYAUYJHNXEIBHFGWVFPLPYYXOESGAMWSUJZOZBMCJOVFTZNZLDRFTNMTLTOBSXGWHMCHDZPJKLJUXDMIFCYEONQDACSPMRWZQJMXVSDLECU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IDJTBJYOCDVKYPBXLXMKNYBSVOERVXLJKWVTNRRSOTMIFSFXPVIIWYLSKHQIAWNLCEMXOVVJWSHEOHUBOEAJYJSLQNKDYGPTGBUBVWNZVXNSAPOVSQCGQRTRYOWQYMWAACIMCKEJGRKIQPDYXZUSNDGIFXFZJKHUGC");
    tmp_tmp_msg_0_0.attr_type = 111U;
    tmp_tmp_msg_0_0.min.assign("FNGCENGSXZBBDDSSNVJOKLEJKTTJIVWVHMLVYTQVYBEBWCHJYMDNJLIZQCAXSTJTGGRQVFKZOWOKCTPYIJLSSAPPNUAUBFBFRZFKPXCDYSTWMQIEBHWZCIZMLNBISXWRLERKGJFTAYXPXVZBIHUDNYVWLAWFM");
    tmp_tmp_msg_0_0.max.assign("KQKOWQEFAYHDWZRNCSGHIVDGMEKHCXJXDQJKUWZQGSVROZNPJTEMZAXDTJFLZPQLCFRNLUMBBKDCOTLDURURMUQXAWZLYYAIFZEOBNIUSTXINGHAMVYFTOBDRNGXLSSFUGWBAVVCIKHHEEQOJACONLDVSWYCEBLSIYMVFTRT");
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
    msg.setTimeStamp(0.9663183412711527);
    msg.setSource(59618U);
    msg.setSourceEntity(122U);
    msg.setDestination(55398U);
    msg.setDestinationEntity(29U);
    msg.reactor.assign("HPLGFOCQHQAHVACCJAUXXLOBVRVKZMTAFQRTXWPVAMYFECLQDMFNZIRHSXYDOMIPGJEYODZWZWLKDSKFSQUNZWBGDILWCXNXMUWHULDNBBTMIBNLRGJCGTWKQYRESOYJJXMJYKSLNCBZUBWOAMEAZFRFSDNENDEHYPVJJUQGBPZQVBRVIICKDRDTKNZVAOROGFQFUJTUYBKPYJXMTHCFWUKGIVTPTKUASQOGGEZSXTXVPAR");

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
    msg.setTimeStamp(0.5770244927401208);
    msg.setSource(57312U);
    msg.setSourceEntity(84U);
    msg.setDestination(15327U);
    msg.setDestinationEntity(212U);
    msg.topic.assign("TQBWGDSXANZFRUOISBKCGAOEQLYVMPZUGFGJTVXDLA");
    msg.data.assign("CHETTRGLUREPIQTJNVDPYGGDELHTUKWOEFCUHCMDBCKOFVSZURKWEQFDUHLXCCYQOOI");

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
    msg.setTimeStamp(0.4293044087315401);
    msg.setSource(50006U);
    msg.setSourceEntity(42U);
    msg.setDestination(50605U);
    msg.setDestinationEntity(226U);
    msg.topic.assign("QVZAUMAFDNDICOAKFQKXYYLFSAVGRWRBHSBIBRDUGHMMTETMNIFJPYUKPHTBRQXTJNJHEVWUZBWLSFPXTXTWQAKXWRXQNEJLJYSQ");
    msg.data.assign("LYOBZRTVSDNXDTUKSIHHLQZMFYMBJIVOXYKJXEUKZJQRNKYXNYKODGUFARNEPWVNSPFBTKYMRVDSFCMACCCSBIXCADLVKNPWKDLVGZPTJEWKYIBPRSQLFZCXA");

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
    msg.setTimeStamp(0.19466537924713945);
    msg.setSource(34194U);
    msg.setSourceEntity(81U);
    msg.setDestination(52385U);
    msg.setDestinationEntity(197U);
    msg.topic.assign("PDHZNFDANSFTKJDZWPZKTSPLPUYMNUPLWRQHEXRDYNRHSMJQYLIGHTUVNBIUOGDAJCEXKCOLZAVKFZKFAWCWXIYUABYREVEKAFCSEDXQHTVOGDXFEZOYIGKIJZNMWFAGSHTSHTC");
    msg.data.assign("HGFYRAOVBYJRRRTCINZKWDVDFYLCBJJFGBUEXGVSFFFFURORTAWMUATQMHUQMSQVATSSVPJLGTAZUVDLOMADMVYCWLHEESCPNWDCPRCHQTYFTVSRWYJLLKQMDIKTPEXXNPIETIIGSZYGJOCYQNAKNBXUJKDVXZBVDATBPCQFSHNQHWIKUORLPQWZOHKWRZPGUNECNWBZOHOJKMIEZEGOMKQDPSJEPZXXILFSWMUNHIXYEZIBDBGOA");

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
    msg.setTimeStamp(0.2305000203987585);
    msg.setSource(6989U);
    msg.setSourceEntity(227U);
    msg.setDestination(24235U);
    msg.setDestinationEntity(160U);
    msg.frameid = 200U;
    const char tmp_msg_0[] = {-107, -28, -1, 55, -93, 126, 49, -24, -119, 109, -16, 3, -18, 65, -25, 34, -81, 2, -30, 94, 14, 40, -115, -57, -81, -116, -9, -105, 92, -87, 88, -116, 1, -52, 13, 27, -62};
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
    msg.setTimeStamp(0.2122553201639651);
    msg.setSource(11839U);
    msg.setSourceEntity(135U);
    msg.setDestination(43322U);
    msg.setDestinationEntity(154U);
    msg.frameid = 206U;
    const char tmp_msg_0[] = {-82, -72, 3, -112, -105, -57, -108, 54, -17, 2, -100, 97, -82, 109, 22, 28, -46, 110, -37, -112, 54, 47, -9, 102, 88, -49, -55, 105, -58, -36, 59, -2, -79, 14, -24, -128, 30, -45, -30, -97, -49, -115, -79, -73, -27, 124, -120, -46, -61, -114, -85, 126, 90, -113, -91, -58, -93, 64, 60, 16, -2, 85, 78, -68, -34, -9, -64, 8, -64, 82, 16, 47, -74, 81, -50, 40, -16, -70, -31, -33, -121, -90, 30, -48, -42, -15, -71, -65, -55, 26, -105, -102, 34, -57, -95, 91, -121, 34, 12, -9, -119, 61, -119, 56, -95, 40, 100, 46, 79, -54, -103, -85, 68, -27, -64, -125, -79, -117, 73, -126, -23, 104, 118, -78, 114, 61, 91, 39, -76, 55, -103, -124, 69, -47, -109, 36, 48, -112, -12, 23, 96, -28, 102, 94, -64, -108, 76, 43, 73, -67, 20, -104, -116, -93, -89, 42, 16, -5, -30, 3, 5, 61, 124, -64, -109, 115, 22, -75, 106, 22, 66, -93, 34, 89, -89, -15, 120, -107, 106, 117, 113, 96, 4, 34, -45, 61, 102, -91, 14, 122, 69, -115, 6, -39, 103, -15, 48, 56, 96, -67, 125, -10, -120, -11, 108, 117, -83, 124, -7, 91, 89, -78, 41, -82, -31, -50, 83, 113, -112, 110, -121, 95, 34, -59, 10, 67, 3, 40, 0, 51, 6, -16, -43, -107, -95, 121, 50, 117, -108, 55, -1, 2, 15, 118, 89};
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
    msg.setTimeStamp(0.8081453534814003);
    msg.setSource(4399U);
    msg.setSourceEntity(0U);
    msg.setDestination(50460U);
    msg.setDestinationEntity(108U);
    msg.frameid = 163U;
    const char tmp_msg_0[] = {89, -43, -19, 36, 91, -47, 50, -79, 81, -105, 34, -69, 79, -80, 74, 6, 88, -125, 98, 92, -69, -58, 75, -41, 3, 90, -118, 109, 81, -23, 13, -82, 23, -78, 42, -100, 98, 122, 41, 80, 41, 76, 97, 61, -102, 106, 125, 114, 117, -63, -78, -18, 56, -23, -115, -21, -94, 62, -108, -71, 46, -100, -73, -95, 112, 0, 7, -51, -88, -46, -55, -96, 33, -3, 28, -110, -123, -43, 92, 37, 43, -86, 124, 32, 82, -54, -103, -122, -53, 12, -21, -96, -96, -89, -80, 9, 105, -23, 99, 50, 107, -69, 115, -13, 35, -105, 76, 9, 87, -62, 78, -36, 19, -102, 37, 16, 104, -91, -68, -56, -27, 48, -121, 81, -26, 120, 106, 45, -54, -109, -111, -60, -117, 59, -65, 40, -66, -7, -109, -18, 81, -30, -85, 124, -49, 30, -87, -21, 62, 114, 35, 71, -33, 58, -104, -24, -49, 100, 95, 96, 102, 8, -83, -1, -14, 107, 30, 50, 17, 44, 25, -108, 103, 124, 80, -66, -2, 44, 27, 79, 103, 34, -42, -2, 67, 7, -127, -128, 118, -24, 98, -63, 70, -52, 44, 48, -106, 117, -72, -13, -47, 50, -88, 64, 97, 31, 79, -100, 96, -56, -105, 84, 90, -9, 13, 65, 20, 1, 92};
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
    msg.setTimeStamp(0.7697848569528893);
    msg.setSource(3249U);
    msg.setSourceEntity(11U);
    msg.setDestination(24918U);
    msg.setDestinationEntity(201U);
    msg.fps = 38U;
    msg.quality = 175U;
    msg.reps = 163U;
    msg.tsize = 54U;

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
    msg.setTimeStamp(0.17299793288430776);
    msg.setSource(39408U);
    msg.setSourceEntity(252U);
    msg.setDestination(34282U);
    msg.setDestinationEntity(53U);
    msg.fps = 17U;
    msg.quality = 14U;
    msg.reps = 10U;
    msg.tsize = 148U;

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
    msg.setTimeStamp(0.43013717516686356);
    msg.setSource(33993U);
    msg.setSourceEntity(52U);
    msg.setDestination(33558U);
    msg.setDestinationEntity(15U);
    msg.fps = 215U;
    msg.quality = 84U;
    msg.reps = 177U;
    msg.tsize = 165U;

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
    msg.setTimeStamp(0.5810176538676597);
    msg.setSource(29698U);
    msg.setSourceEntity(189U);
    msg.setDestination(27322U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.06186619204991517;
    msg.lon = 0.7478010575601842;
    msg.depth = 107U;
    msg.speed = 0.8043502586641598;
    msg.psi = 0.6781088443954932;

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
    msg.setTimeStamp(0.834533411671819);
    msg.setSource(35259U);
    msg.setSourceEntity(77U);
    msg.setDestination(55654U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.2891464336215578;
    msg.lon = 0.4776383626460726;
    msg.depth = 184U;
    msg.speed = 0.4924091901859813;
    msg.psi = 0.8800320976408302;

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
    msg.setTimeStamp(0.6631313898758696);
    msg.setSource(8297U);
    msg.setSourceEntity(156U);
    msg.setDestination(62569U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.5643649901812744;
    msg.lon = 0.6058594778805642;
    msg.depth = 7U;
    msg.speed = 0.7161659626937489;
    msg.psi = 0.6878015712040123;

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
    msg.setTimeStamp(0.04544225072247532);
    msg.setSource(64605U);
    msg.setSourceEntity(199U);
    msg.setDestination(9080U);
    msg.setDestinationEntity(18U);
    msg.label.assign("WWDXOOQDORZEMHHDPOGTFAEHEEZWJSRLTZWNGAMTTUJIYVQYQUPFXUO");
    msg.lat = 0.7100217714509465;
    msg.lon = 0.5545738705151132;
    msg.z = 0.18670068401068385;
    msg.z_units = 140U;
    msg.cog = 0.12115206450673899;
    msg.sog = 0.25515111553021386;

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
    msg.setTimeStamp(0.03979203443586743);
    msg.setSource(61373U);
    msg.setSourceEntity(235U);
    msg.setDestination(25153U);
    msg.setDestinationEntity(5U);
    msg.label.assign("HTRBZYNRMPWMXREUVYKZZOAOPFVUCMQJZUKFPGMJVUIMXYLOAALHEQCHYRMQSEAVERSZRCSLQFTXKTBDERWTQLIGTZTSAUWHPEDJLGCA");
    msg.lat = 0.42676991140298337;
    msg.lon = 0.19762938221618498;
    msg.z = 0.7465127885330607;
    msg.z_units = 172U;
    msg.cog = 0.6693668423903254;
    msg.sog = 0.28881484890414855;

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
    msg.setTimeStamp(0.6598314438300636);
    msg.setSource(62125U);
    msg.setSourceEntity(182U);
    msg.setDestination(61006U);
    msg.setDestinationEntity(144U);
    msg.label.assign("DCWVXNEADMJTTYANQVKHDUZZADWIJZTCXBVBUVQMWGACINGZGLYEXHARAQUBLOWJXPHPVCKNKQISXSYQGEZIG");
    msg.lat = 0.5993673225687217;
    msg.lon = 0.48876986690356816;
    msg.z = 0.6002051877900514;
    msg.z_units = 213U;
    msg.cog = 0.29051654328727494;
    msg.sog = 0.7057904766613571;

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
    msg.setTimeStamp(0.995120205880255);
    msg.setSource(36783U);
    msg.setSourceEntity(208U);
    msg.setDestination(56113U);
    msg.setDestinationEntity(65U);
    msg.name.assign("XTPVLIGYQMMGBFOIDVJKMSVIQCCDZGIFMAVTJVFJKYCVIJJHKODIPLJIHAQWDEOYDAGTMDUZDXLVEVFWKS");
    msg.value.assign("STOXZFKDRAEHREVVNBTPNBWPGTFUWIERDSXKNLGJMHLMQWDDRVDITMBXDHUZRYMBYHTBRPJHJFJDOYBJEFCGIQESBENLWPGMUOLVSKPGIGPUULSMWZYHLZVXYZZMVSVCEYCTHSYPURUINZJKLWRMIBAPJFCQAQAOTXWAYNOBDCWINQAHCSAFAUPICMZEVKARJZXQXGV");

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
    msg.setTimeStamp(0.9298459059560575);
    msg.setSource(56434U);
    msg.setSourceEntity(153U);
    msg.setDestination(6888U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ZPMKPAUJDDIEQYTEMCBXABZHZWQKLZSICWCLVLBCKCFSLOPTUEYSCKAYOXMENCFPSPXFGRMUEJDKJRVWAUHVGRWRGESUPGQLJTWAQXSOGRIJNELYILIWBQXLNPSTXZKJIXOQAGNPTHOGAXZOFBTTEMQ");
    msg.value.assign("HPOPBBXRCXGH");

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
    msg.setTimeStamp(0.9767950453628265);
    msg.setSource(32755U);
    msg.setSourceEntity(233U);
    msg.setDestination(41123U);
    msg.setDestinationEntity(4U);
    msg.name.assign("QPSXOWKDZBQHCBRSKZRSICXGKMDARGQORXCUCRFMVEIERYKRVOIVPABCLEJDNZXSZHZMQAWFFTLYDKLJESNEANJEPSFOMUEDQAFAHVYTZPAEDGIPOTFBIUYWHUABMKQTPIYVDPSJNWGZUHYISNBNKUBHIUJJCNCYDEYFXSPXORGXGDSDWJAYEMGOMQAVHZJTHXPNVOUQKFT");
    msg.value.assign("IYCZNYHTXIQULXQDLRMWVRKCUBZNFDGSZDGOZVPXGQHRIAOPIPPLRCJBGZYFJAAQUOGSOLXUUJHAAEMNDDQYVMHLQTMIZYTHALMYRBHRQKKRBJCEZSDOUVFTFUGJBWNPPJAVEMCUCTUQXHBTLRLHUPFWWFNLPIFCSOEIKZLDXVWGZIDKNNFAW");

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
    msg.setTimeStamp(0.7667889967744075);
    msg.setSource(33004U);
    msg.setSourceEntity(197U);
    msg.setDestination(11967U);
    msg.setDestinationEntity(121U);
    msg.name.assign("YOVIOWIUYRRLFCYCQJJGFMIMRRIEWVVRNBDCMGRPNPWVBJKLVTSLKVVYXOAHWCKXQJJDILDBFMKLMBZYXBYHRWSOAHZBFOXYABFTRFLFHOLHSJLMPDWQPNIANQCBTSHUIVAGNNOZGQNULFMPDUXXXJSUXGGKDCAEFLTCAZVRXJAIPCQSWUNZOKHFINKUZECUGEVZDKMQAEHOIBTKSTEGHGPEDSGSMPQQUZWTJTEJUKYHCPTYNDEBYWEZPDWAX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ISZRJOHKKVMZDQKKUUJGHTEUSMGKPFXTIEZHFMVXLOODLOSSNPTKWBXNNHMLBBSBQMKYITWDGRVWWVYXLFMIRCEXTQSWDPRBZJQOPLVVITTOWBBKDGVWFPGJNJAYHMPHCINEKZYDAOPNCXYLFZUILXSLUDZZOQSYOUXIGNQYXPQUIEUFYQZFWTFDGAZRMBCDNRXWUAUJRTRQCJGEBVV");
    tmp_msg_0.value.assign("TYIZBWOTFEXWBVWOOMUVYSMJLGXBZBQNKCPVIZCTFZREKCFFGFPNLCKETCOKFDHFIGJIKVTHRZAHKJZERXLUNPZKAZNPUBWSRFIMDQBMJSADNNFCCZIPHCYJRHMUAOGMKAVLZXTLVSUPPRURYGJCGIGSYIVDTMONWKQQXQMKULBWJJXEXALYQXYSDBJPRDLAATOJIINQXRQWSTLCEDETGVAOHEDUONXSGBWDENAEM");
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
    msg.setTimeStamp(0.859769039958142);
    msg.setSource(35973U);
    msg.setSourceEntity(59U);
    msg.setDestination(22887U);
    msg.setDestinationEntity(195U);
    msg.name.assign("RZRBUOHPOABLLNUJBUMVYUNYNPWCIRJEQNDHTKTXYLRMUKBDDRHFVUGYZPCDZLXWJSARHIHGZQLLNXGJXVOFDFQFCLEZBDCYVRLEAOHWYFCMPEW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GDITWFDOEJUROXLMGHAVIZKUGKHYXGMDQKZXQDDGHWTFZBOIYVGZNWUSVQMHHUKPAYYJOEDMLBBSXMISLRZKFRJVPNTKKZGPPQLBZUUASPJRUWJBPJEVXQWCSKABBEFZERVASDFRABPLMF");
    tmp_msg_0.value.assign("LLSGBXEWXKJLJNGDZEJLPDAVHWARHXWPTPHGDYZNUXEZSZYIQKWGZAEFKWHZJRVTUJEQQKMOIUDWQMMMTSBBHEDDURAZOVIEOPSHAMNACLJLWGOYGARUYHLDBSNNYAXEIMXIHMFJNKTCNUYJPCEXPZPNQCQOKLFCLRBCIOKKVCYFNUQVRPUYGABWBQFXDRSQAHQRDTFHJFPYBFMTJFKYKT");
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
    msg.setTimeStamp(0.7167855670349461);
    msg.setSource(31196U);
    msg.setSourceEntity(34U);
    msg.setDestination(18649U);
    msg.setDestinationEntity(145U);
    msg.name.assign("XOUYHGUEKDRCDHDCNSTSFAXEUDXYRGPKNRFVYIMHTRWMQBPENIMWDOZSTJPQFVPYKVNUZBUBCZFQUVEWPMXFINX");

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
    msg.setTimeStamp(0.2278855267893647);
    msg.setSource(36051U);
    msg.setSourceEntity(244U);
    msg.setDestination(25279U);
    msg.setDestinationEntity(53U);
    msg.name.assign("BVRCGTDBJXILYPCFOFYQCZFOHITEPJUVQDHTSJQRVUVCYMJKRENLPOFAKUYQTVBDDXLHPHKJMLUQLDEFRPSQFIFJIYOWIDUULLC");
    msg.visibility.assign("POQQCNLASHJNRNDMSNYKPAAAYMBRCWKSPPCEEUOYZBBLBFFKUVMTMEHBZXHBCRQYIPKEFGKIHDSWVAQKHGUJLGJLISITRXVBPC");
    msg.scope.assign("KJUKMCDHFBNAHDLMZGEIEJTJYXNBMSKHEFAVSCWOLVKPCUWQHYWSHUSCJNYLPNUWOPTTDVOVAPJFOJUPJWYYXJEFMUSFEQOVHAUCMBLQMDVKLUCBRFGTBLWMPSYZAGPKEXKIL");

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
    msg.setTimeStamp(0.283693864994244);
    msg.setSource(24744U);
    msg.setSourceEntity(226U);
    msg.setDestination(9608U);
    msg.setDestinationEntity(123U);
    msg.name.assign("ECOOSHUTQCYELZIVRLFXSZRIKAKUFCKTAMGXFMVQTZPYDUGEVULPNTTHPAAHXWPPJCKLIRJXDOCAJDNXOTJZCBBEWASQHGVUMSNJFCVGPNHCWBKPUBLZRYQMWWQZTEGBMISJFLLXPMTKVHJHUVGXYMHOENLGQWONBRZXFIDUROIMAQAOWSYSPNTUXPJQGBERWFMDHDDNYK");
    msg.visibility.assign("TBLEWGRQFFSBDKNGUEAZTQVXZNPPRCPDKNWQUVVEBQIHU");
    msg.scope.assign("AZQKWJZKZXLWDHDRGGTQIYHSTUFOOXZFCBTFFFXOKZTZFVTJGXIDWBHUKSANJIWNEVSAZEXCDGBPUDSZRIGEGINXERMUQIGBVKFLNOVCHSYYCHPFTOVLLKUGRHMXCAKUFYYCCQYWOYEPCMKPCGNYYWERLENXATDSDVATPXNVAQMMUONWUBRMIXJSGAOJLMWSWSDVWRHQFJIRJPMSZIUQUNLDERQQHBCVEBLDHJP");

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
    msg.setTimeStamp(0.695165754692422);
    msg.setSource(34616U);
    msg.setSourceEntity(241U);
    msg.setDestination(28635U);
    msg.setDestinationEntity(4U);
    msg.name.assign("JBPRPNPXBHZUHDEOVQMXQNADZNZURAFKEHSPFJZHOPMTJFUYNAOVBCOAAYKYSRSFVMJYUTLCQVGKSCUWRZCBQOOHPHVHTIEEHKNMYLTXEALOIFJKZMUWPNVHQUJMDZLLRDNHVKQEMMSDILJKCGI");
    msg.visibility.assign("KGRFKBRBUDFLXWJGBSBWFYZOHVTKMYNTOZSGWYEOROLCAGGSULBAPXGZJQNIFYLXZVCVIJKIBVELESBDNPOMZDOLQCFNHPWODQFHZQEEOBJNJGFLCKGXJMVZHODJXAPORECEQNUILTXYIAZJPFKGRCIUHETUVTMUKIGITZDDEYSHHMATTWKDHXXDMSJRWVLCRZPBHVLITUQRRNSBMSXASAYPPWCYMMTKNJCVUNHSXUWMQ");
    msg.scope.assign("VHUVEBJTRWFECWAZVDBJXBCKNLZZMAARBWH");

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
    msg.setTimeStamp(0.6317614523954412);
    msg.setSource(9766U);
    msg.setSourceEntity(116U);
    msg.setDestination(32374U);
    msg.setDestinationEntity(118U);
    msg.name.assign("SVCSZHLKXBUIRTOLDSBIAAUFHWKSPMTCVGPRYTVIDJRXJDIQGMDLHVQWCYTRTHVNMXURQNZWQNEFTJECZUBVXTSKURBFDGUZBZMPJKOGYLDOWADPONSKNLAALG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CHJKONMVDVFJNHMGAANASOUPKKULXQRGQEYJPSBIUHRXOVGQMFYJWTWSMGKSZOIZHROOGPUZFLCILVGCTRYJIZBZNLJPHJGAYYCLMDKQDXBEBENOTUUUZSILLXFIVDEKMXZFAXBPTVRCTQWFIVKSPQWDXHCWRGUF");
    tmp_msg_0.value.assign("RWYBZIUASCOOORWPTUXLFBOSFELUXLKQMQSMTGKQYPESJSTOIKLRKGEOZFJCBFNMITQAQSMLCZIXGHFVKDZGVFAAGIXCEJERSGGXIULXNWXNHCTEYQCWGLUVBHLRVMNPWQDADPJADNIHRFZLNSJHHTJWWDKRHNMGZJKAOGVONLKEPTFMEYKHVZYBYHMPDXCUUXFBDZEQUOAJNPNWZZVRMHTDVCJDSXB");
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
    msg.setTimeStamp(0.3237983191446987);
    msg.setSource(23931U);
    msg.setSourceEntity(1U);
    msg.setDestination(49322U);
    msg.setDestinationEntity(27U);
    msg.name.assign("HTDUEVYRPWNMQFBSUYGYVOVMONZJSOVLWQTRWTQLMBPXWZDJFTKTYGCPEPOP");

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
    msg.setTimeStamp(0.6610706064057369);
    msg.setSource(31777U);
    msg.setSourceEntity(114U);
    msg.setDestination(8692U);
    msg.setDestinationEntity(44U);
    msg.name.assign("OZOMDSRECHHTDOZXUKNLUOAOHLIJFQQLYNFVBAFTADEUBHRHWWWXCAXQNKFLIVYRGPCQEIMHPKPYOVYKMBSZQFGFCKHMABLP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IVPMNKNGSDAZFTEDTSAZQDYQBOWWHYMLTAUVSUDDTQBOSZVDXGFPIKQYWTHPCAGTVLMALLHAXPKHEEFXFBGZKMFFXIGPSOKCENZZURHCUZUQR");
    tmp_msg_0.value.assign("VYEJHFTWNSOEYUFQPDXYBOBXUBIPJMKLADOWGYEZHIERGXIEKCXLCZKLUXXSRVPHZSKYYXFYFNCLKKNSVQUDYWHNAEMUWTRIKCCQNZTPFMSZUWWGBGDIQHTOJTTJINSTWPOGJDHJXAZGUICLHVJRUNOAGBRLABMRFVOMNZGPVQRLZXMQJNGUZCRTQJCWPEKKSAEZSSALWVJGEMBDIVHMRRAOFDEBVQSLQYHPPYMFBDFAHDBDU");
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
    msg.setTimeStamp(0.8111576648472049);
    msg.setSource(28876U);
    msg.setSourceEntity(214U);
    msg.setDestination(16408U);
    msg.setDestinationEntity(72U);
    msg.name.assign("BBEPGALJENGQAODVARQOLENJDUYDWUUMQPVNZEXUTIMGXSZDIAWJSOYFDGGFGVEXKVAYNEQRQADAJZXARYCKOWRHQWFHTAQEGYASZIYTPOVHKKQJXFWPHKXLFWSCRBWKEZCCMTIBPDYITNLFORNBFPQIOXXENJLINKGRJMTQSVRSHNYCCTLBMISPZKOOLNZYUKEKPTVUMSBUHCBPTZWRZZBILMM");

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
    msg.setTimeStamp(0.07499470712223233);
    msg.setSource(52974U);
    msg.setSourceEntity(229U);
    msg.setDestination(56316U);
    msg.setDestinationEntity(149U);
    msg.name.assign("PABZOLQBHDEPSTUDIVRNKRCCYFREOXZAJNBDFNBNOFXTLEJVYKJUMOMFDTVJVYGRLIUCSPLVVCSPMKXFMCHJFZPQLXQLDLGOGPWGPAGRARHPYQPMEJZOKNCFUAXHBQWXEDSDZWXXICHOHKDWYYTXUHJDLIZSFISUSVCTWWBIBZ");

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
    msg.setTimeStamp(0.8106123633058723);
    msg.setSource(54962U);
    msg.setSourceEntity(2U);
    msg.setDestination(19067U);
    msg.setDestinationEntity(23U);
    msg.name.assign("PPHJXJWDDZHRNYWSBQMFANZKZDIOFDQYTGHIFQGCJEZEKJKTKLCBRSSDWTTEMHIEG");

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
    msg.setTimeStamp(0.19290775631750323);
    msg.setSource(18327U);
    msg.setSourceEntity(69U);
    msg.setDestination(28769U);
    msg.setDestinationEntity(163U);
    msg.timeout = 2303242055U;

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
    msg.setTimeStamp(0.5894646310594643);
    msg.setSource(53706U);
    msg.setSourceEntity(240U);
    msg.setDestination(57563U);
    msg.setDestinationEntity(163U);
    msg.timeout = 2490279416U;

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
    msg.setTimeStamp(0.8743158338243918);
    msg.setSource(43287U);
    msg.setSourceEntity(49U);
    msg.setDestination(60273U);
    msg.setDestinationEntity(97U);
    msg.timeout = 1921286001U;

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
    msg.setTimeStamp(0.2935756681478704);
    msg.setSource(32220U);
    msg.setSourceEntity(244U);
    msg.setDestination(16636U);
    msg.setDestinationEntity(52U);
    msg.sessid = 3366719897U;

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
    msg.setTimeStamp(0.6669449532892816);
    msg.setSource(43119U);
    msg.setSourceEntity(163U);
    msg.setDestination(32501U);
    msg.setDestinationEntity(47U);
    msg.sessid = 3080469212U;

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
    msg.setTimeStamp(0.14201277692034353);
    msg.setSource(30737U);
    msg.setSourceEntity(77U);
    msg.setDestination(40476U);
    msg.setDestinationEntity(247U);
    msg.sessid = 2812647240U;

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
    msg.setTimeStamp(0.01518974894279157);
    msg.setSource(1562U);
    msg.setSourceEntity(35U);
    msg.setDestination(50734U);
    msg.setDestinationEntity(191U);
    msg.sessid = 477484420U;
    msg.messages.assign("YCKJKUNIBHAVLUYKMWHEZXUNEQZPKVHSNYPYGLMZUHJOLREWTRRPXGIKAQQBCARCRPJWIQKTHOJVEWSEAINGHGSWSFTNIUEJIAIDGLXFGTBWOMBHQCDVZTONFSDHVMMSYAWURJDCLLAKLPYMFPGLSOYCBURFUOLXZVZHXQDTFZKRXDFFVPXBGJEEBYPWRSWBNZPDTOTCWFQMMD");

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
    msg.setTimeStamp(0.6244550839879518);
    msg.setSource(16416U);
    msg.setSourceEntity(166U);
    msg.setDestination(38216U);
    msg.setDestinationEntity(62U);
    msg.sessid = 363042672U;
    msg.messages.assign("BCMXBSYTTHMINUHYAYQZOZTYZVXCUXFNGDAOTFPFRFQDIADZKZGBKDOCKLFAOTERBBEWJFNJLUUNMHCTWDIRSIXCEXKUAWNRCCGSOLERYVROPLDOJEVXGHDLJQPJQVN");

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
    msg.setTimeStamp(0.7671812923167695);
    msg.setSource(15568U);
    msg.setSourceEntity(154U);
    msg.setDestination(36986U);
    msg.setDestinationEntity(153U);
    msg.sessid = 3077809468U;
    msg.messages.assign("FBNEYXYXXVPCYDZARKKHYYSQQFMQMDMENAROZLWZCHZTKHLCRSAJAPIILNXOOICUOEGGBOWQVGSEZSAVOCVUGUWLTSIEJBPMXQJGWSIWMXIFYJBDPSLXYDJKUYMYOFQPIBNFKTMCITANJDZSAPRROFMAQLIBTTIQSZUHNRQHHWVPBNJTHEUJGCFGTMXHVBEVYLFGDHLRLPZARHNKCTDOWUKCVERVKTBFDXNZFUZDJPJE");

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
    msg.setTimeStamp(0.6847804108312341);
    msg.setSource(27188U);
    msg.setSourceEntity(29U);
    msg.setDestination(32116U);
    msg.setDestinationEntity(41U);
    msg.sessid = 3601223638U;

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
    msg.setTimeStamp(0.5880917409369948);
    msg.setSource(3435U);
    msg.setSourceEntity(129U);
    msg.setDestination(4191U);
    msg.setDestinationEntity(170U);
    msg.sessid = 2970217983U;

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
    msg.setTimeStamp(0.8465075339496916);
    msg.setSource(32354U);
    msg.setSourceEntity(37U);
    msg.setDestination(27657U);
    msg.setDestinationEntity(194U);
    msg.sessid = 2787598130U;

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
    msg.setTimeStamp(0.8633479670462765);
    msg.setSource(41339U);
    msg.setSourceEntity(40U);
    msg.setDestination(56553U);
    msg.setDestinationEntity(114U);
    msg.sessid = 841597508U;
    msg.status = 108U;

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
    msg.setTimeStamp(0.30930198507430895);
    msg.setSource(22605U);
    msg.setSourceEntity(57U);
    msg.setDestination(14044U);
    msg.setDestinationEntity(238U);
    msg.sessid = 94000102U;
    msg.status = 107U;

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
    msg.setTimeStamp(0.32246730561824577);
    msg.setSource(35158U);
    msg.setSourceEntity(208U);
    msg.setDestination(28932U);
    msg.setDestinationEntity(246U);
    msg.sessid = 1729731737U;
    msg.status = 156U;

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
    msg.setTimeStamp(0.1579979705356238);
    msg.setSource(7750U);
    msg.setSourceEntity(243U);
    msg.setDestination(63833U);
    msg.setDestinationEntity(57U);
    msg.name.assign("PPSUQFQXUTWGWUXNZWIKABUVHQVGTDYBMAKNVFMCRETCGUGTZJMZQAOPCLTEVMDFKXDSPRSNZQGABLDRFBKSGTUTFIZLKPCJWLOWSQBLAFUJEDVPEGAALYNALQMRPVJKDZYEORLIJUZPIHJQQFYGNBGZYZNCZEOCCUBJRETWXEOSIVXHFUXHMTCXWJBNJPDIVRYQRXHNOMY");

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
    msg.setTimeStamp(0.1199521279271315);
    msg.setSource(63588U);
    msg.setSourceEntity(175U);
    msg.setDestination(31843U);
    msg.setDestinationEntity(116U);
    msg.name.assign("VYYGAAUNAFRVGENOKITWKXHRAFFGOHOILVVOSKZWCGWCLKRDQHGBXKHIWLVPIUXSLCMDHTZPQZOITJHUOQPHDYJFNADDMXBHUXYJEWILDQQJMBICIAMNTEUPYPXSRBLTFGBNVGTYMZSOKMMQDEPAQRFHUVKZERTFOJUNVZMYNEAWSCJVEUPCVJRTUUSDACKTAXPGHIZBBKMB");

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
    msg.setTimeStamp(0.4511900089911689);
    msg.setSource(6263U);
    msg.setSourceEntity(207U);
    msg.setDestination(14273U);
    msg.setDestinationEntity(134U);
    msg.name.assign("KRTKYDBNHRIZOEQSZHQLWQBMDEFIPGYJCSXJCVNENHTPAFCNKQFIZOCXRRUEVAYQYSBHQOCEIUMXKHNYJHFPDCGLZBSBTCIFLAIEBBVROVAJJHYWKWAEVRLUXVLZWETUUMTGTPFAJOXMYTGZHLAVFKWBLXZMJTODGNNDTXWUTIDNMNWFAPCQULS");

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
    msg.setTimeStamp(0.20683521540332594);
    msg.setSource(7496U);
    msg.setSourceEntity(38U);
    msg.setDestination(54602U);
    msg.setDestinationEntity(127U);
    msg.name.assign("UJOCLXSZHKVAQHIAEOKCDXRVCBAORKEFYCLRAEKNQMWHZOWVJIDZSIHIFFSGVHRSZFKLKLVNSYIGPMJDXQDHNSSBZOJKNMMZTTXNTTGHDRCUUTXIFEGMBFDCRABUBTREOFUCRJBPPWNEGUZTGNVXMCJXGKLPHLLLMLJCGMAYBQWFPAPCIYRFTBWOOIKLQVPAHUURGXUOWPZDDENWVANQIZQQBVFYOMVJKEQXEJYPWDQMSUAYSBPTHNEWJWG");

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
    msg.setTimeStamp(0.6803101913200149);
    msg.setSource(47444U);
    msg.setSourceEntity(40U);
    msg.setDestination(19944U);
    msg.setDestinationEntity(154U);
    msg.name.assign("MJTGWJMHLEQDRCAOVXNIAFURJXDFWVUOPUCPYQZDYZHOEZTAERPKEBDDAYXNMHRIMOAGKOKSQMUHWPLHLPRQIXWLSRBZWUCNRJMBNXAGSNIHAGYFCQXL");

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
    msg.setTimeStamp(0.5568682910546919);
    msg.setSource(14415U);
    msg.setSourceEntity(1U);
    msg.setDestination(7921U);
    msg.setDestinationEntity(100U);
    msg.name.assign("KOPQRZGBHATVTZQNDCRSWLPAAOBPEWNQBULMUJCDTOHNORJFZYOQICZKNTCVIIPGHOPNHPUGMBFSTARXDDADBVOOEQMLAEMYRSATXHKQNHRHVICBUNCMPGUIEGGSSRMJLGFFSJJRCKQGLIUYOZWTKAEVYDSKLFXUPWXYHUCCHKYJTWZDUJFUSHXJEILSFFZDBMVXADFQZVLWLOJGWYRDJPIWVXENLA");

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
    msg.setTimeStamp(0.9774771657508278);
    msg.setSource(53525U);
    msg.setSourceEntity(97U);
    msg.setDestination(24220U);
    msg.setDestinationEntity(77U);
    msg.type = 157U;
    msg.error.assign("PEMWKNMVTNNUTRPCXKTIINAKBJWHSZFDHKUVRCBPYIYBFAXNALVEWYFBJHHCKLZCPDDOULGHHEAFDNOBJUIJEPLMVBLQZRWYJYSXNGSZPMDMLUQOYFEITWPWXUSEKUAEDYFZTHMPSKALHVDVGZEOGBDTV");

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
    msg.setTimeStamp(0.6892896200681428);
    msg.setSource(27132U);
    msg.setSourceEntity(41U);
    msg.setDestination(35881U);
    msg.setDestinationEntity(6U);
    msg.type = 100U;
    msg.error.assign("CCHOSTWAVHJZZXNKQRTNXBAZKYKUKBSCXACK");

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
    msg.setTimeStamp(0.46949326235409305);
    msg.setSource(50283U);
    msg.setSourceEntity(125U);
    msg.setDestination(54822U);
    msg.setDestinationEntity(171U);
    msg.type = 219U;
    msg.error.assign("HOFHUAKDSPYBFNAFSJZFUWRHCBLIJICZOCCFTKWQNHXTYEJUVPOGJHKFEJYEABRQGGNSSUMTAGIZEWBRLXBRSMBEMLNLYIMDTNHRVXZXJXDNUGZICOKBOCSQIWVOZHHDPNRXYTKJLHKKLGOAADVDGBFMQNYHQIJWCZLDXUYW");

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
    msg.setTimeStamp(0.5256477752247467);
    msg.setSource(25597U);
    msg.setSourceEntity(70U);
    msg.setDestination(45109U);
    msg.setDestinationEntity(253U);
    msg.seq = 55665U;
    msg.sys_dst.assign("ZFTEFNZRNPNQTKTNZHBVDVMGEPLXEBZYAEWEFMHFXXUILYJRLHKZCHHGSJGYCVOEUSIYDOJTVBKURZKOFVXQBKJLAGPBRGPBWKWYALBUVSFDQHRQZNHJIIPQTEOYWWKOGYXROCRVIJSFWKJUSBFOGLLICFQLMNOWIHYCSDXNUJAPPTQTNMAANWDCGXJP");
    msg.flags = 250U;
    const char tmp_msg_0[] = {-96, -16, 15, -121, 77, 103, 0, -122, -29, 10, 73, 92, 89, -23, -17, 99, 75, -106, 20, -29, 30, -66, -2, 12, -48, 22, -50, 111, 19, -10, 126, -64, -17, 83, 14, 102, 111, -36, 25, 34, 89, -104, -10, -9, -28, -16, 89, -112, 23, 84, -100, 126, -105, 4, -81, 27, -34, 48, -114, 111, -55, 10, -49, 106, 108, -73, -21, 107, 66, -45, 112, 110, 59, 116, -54, -56, 110, 23, -104, 1, 104, -110, -35, -35, -19, -106, -55, -14, 48, -79, -45, -2, 126, 112, 2, 8, -98, 90, -48, -121, 10, -45, 53, 30, 17, 69, -91, 0, 42, -29};
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
    msg.setTimeStamp(0.022782754784249293);
    msg.setSource(15405U);
    msg.setSourceEntity(8U);
    msg.setDestination(10071U);
    msg.setDestinationEntity(166U);
    msg.seq = 18215U;
    msg.sys_dst.assign("FSYELOOCWNRL");
    msg.flags = 250U;
    const char tmp_msg_0[] = {126, -128, -93, 17, 76, -101, -114, -114, 113, -76, -102, 56, -120, 52, 75, -21, -16, -90, 104, 27, -104, 116, -86, 8, -52, -61, 97, -120, 5, 22, -126, 105, 74, 121, -88, 83, 12, -6, 84, 79, 5, -37, -22, 68, 108, 90, 75, -53, -77, -109, -42, 55, 8, 16, 36, -75, 88, -52, -88, -2, 102, 7, -19, 58, 6, -42, 32, -84, -91, 30, -90, -47, -8, 90, -1, 42, -63, -97, 88, 113, -100, 17, 1, -59, 53, -18, 34, -33, 74, 121, -74, 62, -82, 33, 80, 97, 81, -74, 55, -106, -57, 68, 63, -77, 9, -73, -128, -23, -116, -59, 37, -65, -16, -3, 49, -83, 71, 50, -110, -53, -14, -40, -43, 8, 16, -20, 69, 17, -125, -59, -96, 79, -41, -49, 88, -42, 47, -107, -101, 112, 116, -68, 106, -22, 111, 48, -119, -69, 124, -105, 31, 92, 98, 2, 94, 114, 102, -17, -95, 43, -103, 28, -121, -22, -68, -60, -10, 121, -92, 74, 43, -21, 9, 47, 29, -82, 34, 107, -96, -56, 74, 23, -35, -104, -114, 88, -61, -20, -106, 26, -11, -46, 69, -92, -95, 12, -60, 112, -83, -105, -88, -36, -104, 17, 37, -17, -38, -71, 79, 43, -27, 20};
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
    msg.setTimeStamp(0.6069844597911233);
    msg.setSource(63481U);
    msg.setSourceEntity(14U);
    msg.setDestination(58965U);
    msg.setDestinationEntity(162U);
    msg.seq = 36536U;
    msg.sys_dst.assign("YSXSPTEGTCSTMRRAPQFTOJLHRLVWOSFPIKKOXRBDCZZXFHWMVTYCAJSDIAKSDNBMNXUBOHUHROFXWVR");
    msg.flags = 215U;
    const char tmp_msg_0[] = {68, 91, 51, -58, -20, -43, 37, -16, -15, 103, 37, 24, 52, -5, 15, 7, -4, 49, 72, -44, -71, -5};
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
    msg.setTimeStamp(0.885230630102356);
    msg.setSource(37608U);
    msg.setSourceEntity(87U);
    msg.setDestination(26913U);
    msg.setDestinationEntity(62U);
    msg.sys_src.assign("AVAIKPTPLVUQLRDVQRXQCYTEXZAMWPCVJWUDAOXKWLGWEDKZULEHUEMISHUEBVTJJGHVBSRFMNOZNWKRDAQHWYNBNTUXUYGBMGVSDJJTPQUWMHKEBPNIROIQOVIAYLGYEJCDTOMEDFC");
    msg.sys_dst.assign("LWLPIBQRADLCMUMVXOMDGIGTXTVECECFKXIMHIHZDDLXBRBFZEPCPJLXRIBQRRBIYRWUBCBVXLMKQOBJCRBOFRUQQZDOHDKPKDGLUUWRJSIFWTSXCEAZYTDJLAJJF");
    msg.flags = 208U;
    const char tmp_msg_0[] = {7, -32, -106, 4, -102, 0, -54, -72, 86, -20, 78, 117, -5, 70, -93, 81, -29, 115, -2, -64, 27, -81, -85, 51, -64, 96, 116, -15, -4, -81, -65, 111, 89, -23, 30, -77, -2, 18, -23, 82, -106, 52, 48, -36, 49, -66, -47, 30, 117, 81, 56, 105, -5, -50, -85, 18, -38, -40, -116, 76, 16, -32, 123, 0, 66, 21, -76, -82, 67, 82, 24, 65, -51, -85, 12, -35, -5, 124, -3, 10, -59, 73, -110, -11, 93, -46, 48, -51, 125, -52, 25, -102, -20, 5, -117, -118, 51, 53, 76, -17, -48, 3, -6, -20, 94, 87, 69, -33, 109, -86, 4, -23, -93, 8, 0, 118, -44, -10, -98, -91, -52, -120, -92, -2, -116, -97, 12, -3, -124, 29, 0, 44, -30, 112, -106, -80, -76, 29, -7, 95, -49, 86, -52, 84, -35, -64, -95, -39, 24, -118, -35, 63, -1, 115, 105, -29, -92, 19, 65, 30, -101, -93, 110, -63, 49, 54, 17, 75, 75, -88, 44, 97, -93, -43, -59, 21, 89, -93, 92, -98, -89, -73, 71, 38, -85, -21, 117, 33, -39, 4, 99, -99, -98, -34, 116, 68, 15, -111, 106, -15, 4, 89, 108, 21, -63, 126, 7, -127};
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
    msg.setTimeStamp(0.7836610914138952);
    msg.setSource(6362U);
    msg.setSourceEntity(22U);
    msg.setDestination(14212U);
    msg.setDestinationEntity(68U);
    msg.sys_src.assign("LBDCPJOODQEOFNUOWEYNDHORESAQFXGVGJCJGJYBDOLJXLMCSFKBTGBOJBWXYIXQRPJMTZUFRDDONWTAJWEZXRKPKUUHHLRIKVNERY");
    msg.sys_dst.assign("YOYDMVHJBNGDVRTVWZXSAGUSLUELCONPKEWKHDAYMHPQBFSTNHFQGTISIQXVDLDMXZUUNQNZLEUA");
    msg.flags = 65U;
    const char tmp_msg_0[] = {-89, 5, 26, -16, 18, -15, -71, 79, 11, -70, -111, -91, -87, 8, 89, -3, -66, 82, 118, -117, 22, 96, 30, 2, -23, 21, -26, 66, -25, 63, 99, -118, 75, 74, 79, -6, 96, -61, 97, 23, -92, -37, -99, 51, 123, -29, -50, 58, -66, 107, -106, -13, 105, 10, -78, -47, 42, -113, 29, -73, -18, 7, 42, -5, -38, 118, -82, -19, -53, 11, 96, 114, -48, -123, -37, -17, 125, -35, -86, 82, -110, -27, -57, -44, -32, 4, -57, 85, 110, 4, -88, 38, -43, -66, -91, 26, 30, -11, -120, -89, 120, -74, -120, 24, 13, 102, -33, 16, 106, 15, 39, -31, 34, -108, 105, 124, 65, -87, -62, -101, -16, -105, -128, 60, 92, 88, -106, -120, -11, -82, 60, -7, 23, 90, 80, 47, -29, -35, -50, -63, -77, -95, -125, -90, 43, 42, -109, 9, 113, -48};
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
    msg.setTimeStamp(0.2876893674639439);
    msg.setSource(59049U);
    msg.setSourceEntity(66U);
    msg.setDestination(2766U);
    msg.setDestinationEntity(136U);
    msg.sys_src.assign("OSQZFDQWTBOCUIQVYFNM");
    msg.sys_dst.assign("YUHCILLDEGEYVNDZTAWIZCWSNUTBPEDZNEEQKPLOZORAPICMJYVTIQGWNMZQKZBWSCKRSKQVOPOOSWXEHLCENLHHCJVTMMFUPWEKUZWFTXMSZQXARLYLFHYN");
    msg.flags = 29U;
    const char tmp_msg_0[] = {-101, -93, -73, -14, 27, 77, 66, 83, -18, 62, -121, 3, -42, -28, -43, -50, 90, 14, -111, -29, 72, 7, 109, 3, -98, 57, 24, -102, -17, 116, 9, -80, -119, -5, -108, 100, 59, -96, 73, -54, 85, 21, 31, -37, 21, 37, -20, 39, 11, -29, -19, 0, -117, -32, 71, -5, 68, -51, -1, -83, -22, 72, 79, -65, 97, 119, 79, -98, -11, -93, 44, -1, -114, 32, 118, -55, -94, 58, -68, 49, 5, 20, 43, 88, 21, 120, 37, -33, 33, 93, 9, -126, -39, -14, -117, 74, -87, -103, -39, 30, -52, -85, 55, 25, -32, 100, -122, -118, -22, -99, -119, 87, 63, 121, 69, 12, -118, 16, 26, -75, -22, -5, -14, 15, -22, 114, 77, 114, 109, 76, 103, 95, 51, 87, -86, 92, -95, 60, 63, 11, -102, 24, -31, 106, -111, -92, -17, 68, 81, 43, -2, -95, 35, -111, 68, 98, 97, 55, 102, -40, 113, -57, -31, 66, -60, -57, 46, -83, -47, -100, 8, 86, 99, -46, 67, -115, -125, 27, 59, -27, 64};
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
    msg.setTimeStamp(0.9930953148455889);
    msg.setSource(22792U);
    msg.setSourceEntity(113U);
    msg.setDestination(41644U);
    msg.setDestinationEntity(49U);
    msg.seq = 32382U;
    msg.value = 100U;
    msg.error.assign("XUOXNWYAYZJTSHQCMITIUGVCBZPGSBCNQRWNQLNSHTNREULVKSPFMQLVDWVKILXBMPHEPOHUKEOBGWCXXNQFRMAIZSACEYJCJJSQNQGPQMVZRROYVOLRATMBIUWOPJKCVKUADIISJGEXFTBFLEFTJXTLGFLWZLEPKUDHTLBBDPJZUAEZYODPBOKOSHHRTUMJTNXRXMDWKHYIHKPFAYGAZSDIJWBDEOVGYCAWCANV");

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
    msg.setTimeStamp(0.24269573125183663);
    msg.setSource(884U);
    msg.setSourceEntity(197U);
    msg.setDestination(3092U);
    msg.setDestinationEntity(110U);
    msg.seq = 43474U;
    msg.value = 101U;
    msg.error.assign("LGDXEXMGXROYXDYRDLVKCXQRQQCWNMGBWVJIISZFGUMPUDWRVMRTNJVLVJEVFRALGHFGIVPCDRMNODCTGDEFEQTMFOSUVKPKBIETFYXSCTSKHWBJIPWPJOXWLFAOWPYFZZDCDLCPXRZPTOKQNMUEGEZAUICQJHYSTCKAXIYJOEYBZMRUTENJSWHANUHSYNLYIPULBTGMZHHHSWNFVBAFAB");

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
    msg.setTimeStamp(0.02174429702707592);
    msg.setSource(3057U);
    msg.setSourceEntity(5U);
    msg.setDestination(19070U);
    msg.setDestinationEntity(132U);
    msg.seq = 4283U;
    msg.value = 23U;
    msg.error.assign("NFCYCWKPPAICFYYGFYVZHJUHCULWDJTZFRTEZDEPKIAVGWEQGJJQEETUGZNDVBAHJBLJBKYUASOMBIALWCUEFROSAARNQZPHPVWDPKJDRHWFDIVBLYIMOXPXOMFQLLIJYCJUNENXDBRSBKISLACIDTWOMHPKD");

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
    msg.setTimeStamp(0.11267629679497504);
    msg.setSource(47939U);
    msg.setSourceEntity(232U);
    msg.setDestination(63684U);
    msg.setDestinationEntity(175U);
    msg.seq = 42770U;
    msg.sys.assign("PDQUSVABGOGTLHFTPZGTTBHTKAOWXBDHQERFQNHXTWOTGJMRXDCJVNNUAZOOCNAZYLEMLEXLRFNDZRYSYTLWIDDMUFLREADIARYYWZEIPWAPSLZBUJGRFAVAZGFJFQHUWLMPKUEIJKKJCNQOVVKM");
    msg.value = 0.5828717070979379;

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
    msg.setTimeStamp(0.6266698038315754);
    msg.setSource(57170U);
    msg.setSourceEntity(68U);
    msg.setDestination(57017U);
    msg.setDestinationEntity(41U);
    msg.seq = 7172U;
    msg.sys.assign("QXAZGLXEHKCVBLQLNIOBVCNCEVCFNKJTXPVIKRSJDTFSSXPMUULTZTLXBJGMNOFEDKODKRRVSNHBYQJWLTMREYYHHFVMAIIWOSGZNGKHACDULKYWUBUYFPWHJWMBRHQDQRZVPOQGIPZPWXLAFZAQRQUUJUAQOEYDSGYKSERVBMSFTXJBEEONZDTZOO");
    msg.value = 0.14290083355808592;

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
    msg.setTimeStamp(0.8708868262332505);
    msg.setSource(38304U);
    msg.setSourceEntity(221U);
    msg.setDestination(16015U);
    msg.setDestinationEntity(195U);
    msg.seq = 56048U;
    msg.sys.assign("UCFJINASSRMYECGFUKEYRPLGMWXULFTBTYVPTUVODOZDNEQUSUOKIQZOJIPXQWSKLXSEMXMFMLTCHTFMQQMRWWJEZFHACGPFSJPYKPVCECLPEULBYNNQWYARWSZDAQKIRJXXIHDKBBDRHHYDEGSDRPHGIXUJSOLXGLAQGAO");
    msg.value = 0.36956864879127493;

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
    msg.setTimeStamp(0.006239016061085123);
    msg.setSource(5885U);
    msg.setSourceEntity(234U);
    msg.setDestination(39071U);
    msg.setDestinationEntity(244U);
    msg.action = 98U;
    msg.longain = 0.7834370616603145;
    msg.latgain = 0.5018310590745503;
    msg.bondthick = 2567924766U;
    msg.leadgain = 0.8264148209250601;
    msg.deconflgain = 0.5487443749532;

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
    msg.setTimeStamp(0.29585886613192103);
    msg.setSource(22416U);
    msg.setSourceEntity(150U);
    msg.setDestination(50674U);
    msg.setDestinationEntity(225U);
    msg.action = 20U;
    msg.longain = 0.46243769152308833;
    msg.latgain = 0.5907535152776959;
    msg.bondthick = 3494218351U;
    msg.leadgain = 0.4276388379913285;
    msg.deconflgain = 0.35577037797005395;

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
    msg.setTimeStamp(0.3360569454965254);
    msg.setSource(58851U);
    msg.setSourceEntity(203U);
    msg.setDestination(51809U);
    msg.setDestinationEntity(189U);
    msg.action = 159U;
    msg.longain = 0.6878508206788124;
    msg.latgain = 0.6197849623685949;
    msg.bondthick = 3242108101U;
    msg.leadgain = 0.5170585285526825;
    msg.deconflgain = 0.5858959096102911;

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
    msg.setTimeStamp(0.9065352571637271);
    msg.setSource(20951U);
    msg.setSourceEntity(194U);
    msg.setDestination(7685U);
    msg.setDestinationEntity(148U);
    msg.err_mean = 0.30724363030478163;
    msg.dist_min_abs = 0.14558138057478986;
    msg.dist_min_mean = 0.254911299154053;

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
    msg.setTimeStamp(0.6372339124432973);
    msg.setSource(49636U);
    msg.setSourceEntity(35U);
    msg.setDestination(44262U);
    msg.setDestinationEntity(36U);
    msg.err_mean = 0.22941501837333877;
    msg.dist_min_abs = 0.6571676957089786;
    msg.dist_min_mean = 0.4093735925170623;

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
    msg.setTimeStamp(0.6464074791741089);
    msg.setSource(49669U);
    msg.setSourceEntity(13U);
    msg.setDestination(40874U);
    msg.setDestinationEntity(177U);
    msg.err_mean = 0.8681332736183589;
    msg.dist_min_abs = 0.3739782236853627;
    msg.dist_min_mean = 0.10649867843575911;

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
    msg.setTimeStamp(0.47228656090755394);
    msg.setSource(43868U);
    msg.setSourceEntity(170U);
    msg.setDestination(48774U);
    msg.setDestinationEntity(69U);
    msg.action = 172U;
    msg.lon_gain = 0.4494738921004363;
    msg.lat_gain = 0.7013870870708159;
    msg.bond_thick = 0.14987023866126703;
    msg.lead_gain = 0.855796832916991;
    msg.deconfl_gain = 0.07912522200159533;
    msg.accel_switch_gain = 0.9640177900752475;
    msg.safe_dist = 0.9931517181067895;
    msg.deconflict_offset = 0.3663442714686882;
    msg.accel_safe_margin = 0.533489246784747;
    msg.accel_lim_x = 0.21710240610958786;

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
    msg.setTimeStamp(0.4990168778560867);
    msg.setSource(53617U);
    msg.setSourceEntity(27U);
    msg.setDestination(13454U);
    msg.setDestinationEntity(155U);
    msg.action = 121U;
    msg.lon_gain = 0.907567581884769;
    msg.lat_gain = 0.8466353604128938;
    msg.bond_thick = 0.5626864624487361;
    msg.lead_gain = 0.33355342946131983;
    msg.deconfl_gain = 0.20734491082785955;
    msg.accel_switch_gain = 0.10618481878977548;
    msg.safe_dist = 0.3933397681776266;
    msg.deconflict_offset = 0.7882205147639135;
    msg.accel_safe_margin = 0.023576618803452187;
    msg.accel_lim_x = 0.1528665807925641;

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
    msg.setTimeStamp(0.8461689419542003);
    msg.setSource(33492U);
    msg.setSourceEntity(113U);
    msg.setDestination(17773U);
    msg.setDestinationEntity(69U);
    msg.action = 235U;
    msg.lon_gain = 0.7464446230149662;
    msg.lat_gain = 0.5081798319467166;
    msg.bond_thick = 0.7133678298182919;
    msg.lead_gain = 0.9287091942059654;
    msg.deconfl_gain = 0.7051188351560163;
    msg.accel_switch_gain = 0.7575540324171139;
    msg.safe_dist = 0.17195162447422996;
    msg.deconflict_offset = 0.3787827214638704;
    msg.accel_safe_margin = 0.0806510180700778;
    msg.accel_lim_x = 0.5501495702687307;

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
    msg.setTimeStamp(0.591150672716012);
    msg.setSource(24142U);
    msg.setSourceEntity(105U);
    msg.setDestination(1128U);
    msg.setDestinationEntity(149U);
    msg.type = 19U;
    msg.op = 199U;
    msg.err_mean = 0.9804216880735714;
    msg.dist_min_abs = 0.06441029802268927;
    msg.dist_min_mean = 0.6397985543197648;
    msg.roll_rate_mean = 0.6997635151509165;
    msg.time = 0.19920726097592678;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 58U;
    tmp_msg_0.lon_gain = 0.6381426530895012;
    tmp_msg_0.lat_gain = 0.286681832096505;
    tmp_msg_0.bond_thick = 0.8187744136149899;
    tmp_msg_0.lead_gain = 0.3524987820220491;
    tmp_msg_0.deconfl_gain = 0.1472452842702714;
    tmp_msg_0.accel_switch_gain = 0.19163019555243932;
    tmp_msg_0.safe_dist = 0.24739581319369797;
    tmp_msg_0.deconflict_offset = 0.17221597559118973;
    tmp_msg_0.accel_safe_margin = 0.485820902805122;
    tmp_msg_0.accel_lim_x = 0.27515667553200907;
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
    msg.setTimeStamp(0.915366730211557);
    msg.setSource(56411U);
    msg.setSourceEntity(160U);
    msg.setDestination(38661U);
    msg.setDestinationEntity(205U);
    msg.type = 53U;
    msg.op = 76U;
    msg.err_mean = 0.42135540646649594;
    msg.dist_min_abs = 0.8147501600392935;
    msg.dist_min_mean = 0.7162370021764283;
    msg.roll_rate_mean = 0.3286780276807416;
    msg.time = 0.4598478219390304;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 193U;
    tmp_msg_0.lon_gain = 0.9935818021884325;
    tmp_msg_0.lat_gain = 0.5378036183182686;
    tmp_msg_0.bond_thick = 0.5643640208244659;
    tmp_msg_0.lead_gain = 0.11375782172243254;
    tmp_msg_0.deconfl_gain = 0.18666269715439154;
    tmp_msg_0.accel_switch_gain = 0.7355396678989747;
    tmp_msg_0.safe_dist = 0.2946973722770375;
    tmp_msg_0.deconflict_offset = 0.17141051001976626;
    tmp_msg_0.accel_safe_margin = 0.8466649658409727;
    tmp_msg_0.accel_lim_x = 0.4553745808881876;
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
    msg.setTimeStamp(0.1332524032521517);
    msg.setSource(391U);
    msg.setSourceEntity(3U);
    msg.setDestination(17211U);
    msg.setDestinationEntity(205U);
    msg.type = 115U;
    msg.op = 78U;
    msg.err_mean = 0.8854262855598681;
    msg.dist_min_abs = 0.8779231429136997;
    msg.dist_min_mean = 0.37456253810424833;
    msg.roll_rate_mean = 0.3720788695366307;
    msg.time = 0.021937608618142646;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 44U;
    tmp_msg_0.lon_gain = 0.9685680258115448;
    tmp_msg_0.lat_gain = 0.7997152362028286;
    tmp_msg_0.bond_thick = 0.4519779621136949;
    tmp_msg_0.lead_gain = 0.2522356566846059;
    tmp_msg_0.deconfl_gain = 0.16786130170905922;
    tmp_msg_0.accel_switch_gain = 0.20757129808235242;
    tmp_msg_0.safe_dist = 0.2450114198317509;
    tmp_msg_0.deconflict_offset = 0.46135228200124867;
    tmp_msg_0.accel_safe_margin = 0.462294764252855;
    tmp_msg_0.accel_lim_x = 0.6372784615121798;
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
    msg.setTimeStamp(0.5329315099658045);
    msg.setSource(14856U);
    msg.setSourceEntity(163U);
    msg.setDestination(62942U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.7510963360176073;
    msg.lon = 0.2579838225223101;
    msg.eta = 3727174640U;
    msg.duration = 9980U;

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
    msg.setTimeStamp(0.9902354843467646);
    msg.setSource(44515U);
    msg.setSourceEntity(137U);
    msg.setDestination(37158U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.3806181308631619;
    msg.lon = 0.12482651525674349;
    msg.eta = 2724782649U;
    msg.duration = 26955U;

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
    msg.setTimeStamp(0.7342137587010149);
    msg.setSource(7744U);
    msg.setSourceEntity(156U);
    msg.setDestination(48649U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.9383450088196805;
    msg.lon = 0.029040496504542324;
    msg.eta = 3690261119U;
    msg.duration = 40230U;

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
    msg.setTimeStamp(0.7162757715556752);
    msg.setSource(50903U);
    msg.setSourceEntity(154U);
    msg.setDestination(61613U);
    msg.setDestinationEntity(123U);
    msg.plan_id = 15877U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.05398115785436086;
    tmp_msg_0.lon = 0.7601789685113842;
    tmp_msg_0.eta = 2601245518U;
    tmp_msg_0.duration = 3010U;
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
    msg.setTimeStamp(0.4297183478565201);
    msg.setSource(17547U);
    msg.setSourceEntity(223U);
    msg.setDestination(22136U);
    msg.setDestinationEntity(252U);
    msg.plan_id = 22221U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.23516989075881267;
    tmp_msg_0.lon = 0.2188579286031742;
    tmp_msg_0.eta = 1623795743U;
    tmp_msg_0.duration = 64256U;
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
    msg.setTimeStamp(0.22620527786360378);
    msg.setSource(42681U);
    msg.setSourceEntity(213U);
    msg.setDestination(59911U);
    msg.setDestinationEntity(234U);
    msg.plan_id = 50352U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8929753911165331;
    tmp_msg_0.lon = 0.5400783786592701;
    tmp_msg_0.eta = 331951107U;
    tmp_msg_0.duration = 38120U;
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
    msg.setTimeStamp(0.4320995481894597);
    msg.setSource(46958U);
    msg.setSourceEntity(69U);
    msg.setDestination(49809U);
    msg.setDestinationEntity(147U);
    msg.type = 9U;
    msg.command = 130U;
    msg.settings.assign("EPBULUXZQLDJNYYUMJJTEBJOEVRQVEZMUMWCMGSRZOPIDWPQNILPVMVZCVKDZLKOYLMXAJNAHJHKNZKYGFKLMPBBAHVNBSW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 49830U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8687205725927923;
    tmp_tmp_msg_0_0.lon = 0.8484229192973405;
    tmp_tmp_msg_0_0.eta = 4244124217U;
    tmp_tmp_msg_0_0.duration = 547U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IAXMGPXSNKOTDOSROSAAESUDZJROZGSYZFJXXRVUDXJRTVASVUWLUROLJFZJLIIIKWXYBQVUNGBDYDUHVEKUAIJTQXDAGMITQPKLKQQNFRBEVMIWCPTTRQHQFWBJNLMUWEYVDBHDJRZLT");

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
    msg.setTimeStamp(0.7576326478338957);
    msg.setSource(2343U);
    msg.setSourceEntity(15U);
    msg.setDestination(59822U);
    msg.setDestinationEntity(54U);
    msg.type = 222U;
    msg.command = 233U;
    msg.settings.assign("RDYFGWVVXQNZEAIDIAYFSFZOVYDHEWHZLNQFGZEQWJWSUOJWAFODCCYMGJRUEPXFRGSEZDHAHTXJILRXKLRKEIOTRSRNWYNLAONQW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45445U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8857682564028323;
    tmp_tmp_msg_0_0.lon = 0.12496017897844802;
    tmp_tmp_msg_0_0.eta = 3001648609U;
    tmp_tmp_msg_0_0.duration = 7437U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OLQXDPKTNRAEMYPXIKXMIXJTUTEPACPWZWRVCZEUZUHVARQVXCJMMZOXNMBROUESCQNWQSNHEWIIPDYWTMOHIDNULYAVKDNCVIBRNBNFMUGEMCLBBKFZHYOBHHKSGLNJHGCWLDDBWOEYTTTOAWLZSKPFAGVSYGPBWJFAORDXHFTSKGNCYICGLUJFSGQKEYZKUEYOGV");

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
    msg.setTimeStamp(0.1930059150408352);
    msg.setSource(4199U);
    msg.setSourceEntity(169U);
    msg.setDestination(13223U);
    msg.setDestinationEntity(79U);
    msg.type = 106U;
    msg.command = 83U;
    msg.settings.assign("KXQULBDPWOOPRSTTGHANZBAGZKGZECKUJOYHRQSFZTIZQIWNWMJNNFLJGUTKJDYPJYBJYSNHKLCAVQQAMBLDPEXMIYAUDLUYXMHMTIAEUGZVDUVPGEKKLGAPWFAVVJZHSXGSMEINSTSMCWWUTWVRWXVBEFDXSLOHVRIKPDOBODIHFTHMIITQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 4519U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.40129915541702277;
    tmp_tmp_msg_0_0.lon = 0.13311357130693158;
    tmp_tmp_msg_0_0.eta = 1937904807U;
    tmp_tmp_msg_0_0.duration = 49016U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("HOVBXZWTTALCHISXTLKWUJZUSTXPARHNRFLZE");

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
    msg.setTimeStamp(0.0894648612904041);
    msg.setSource(52511U);
    msg.setSourceEntity(112U);
    msg.setDestination(41661U);
    msg.setDestinationEntity(68U);
    msg.state = 15U;
    msg.plan_id = 46414U;
    msg.wpt_id = 173U;
    msg.settings_chk = 18749U;

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
    msg.setTimeStamp(0.12206925002800717);
    msg.setSource(64228U);
    msg.setSourceEntity(73U);
    msg.setDestination(55064U);
    msg.setDestinationEntity(124U);
    msg.state = 72U;
    msg.plan_id = 56703U;
    msg.wpt_id = 57U;
    msg.settings_chk = 25426U;

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
    msg.setTimeStamp(0.022502771682023637);
    msg.setSource(42128U);
    msg.setSourceEntity(236U);
    msg.setDestination(11798U);
    msg.setDestinationEntity(123U);
    msg.state = 89U;
    msg.plan_id = 2135U;
    msg.wpt_id = 45U;
    msg.settings_chk = 2732U;

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
    msg.setTimeStamp(0.25100993970474095);
    msg.setSource(24243U);
    msg.setSourceEntity(251U);
    msg.setDestination(19847U);
    msg.setDestinationEntity(37U);
    msg.uid = 54U;
    msg.frag_number = 177U;
    msg.num_frags = 253U;
    const char tmp_msg_0[] = {92, 92, 15, 61, 30, -28, -17, 25, -43, 119, 115, -95, 10, -82, -72, 64, 45, 63, 91, 40, -45, -52, 123, -42, 115, 36, 56, -48, 96, 109, 94, -74, -43, -126, -78, 109, 97, 14, -16, 41, 54, -80, 11, -121, 73, -107, -122, -10, -70, 5, 33, -47, -46, 102, -14, 110, -89, 76, 15, -15, -19, -62, -32, 93, -33, 104, 84, 8, -107, -10, 84, 5, 10, -127, 105, 15, -20, 30, 35, -5, 92, -127, 70, -37, -79, 123, 117, 11, -48, 72, -7, -24, 83, 62, 108, 99, 121, 22, 78, 55, 71, -24, 38, 79, -50, 60, -18, -113, 85, -93, -89, -101, -125, 58, -18, -23, 107, 52, 108, 30, -66, -107, -21, -50, -120, -123, -60, 77, 101, 60, 106, 25, -2, 123, -21, 121, 14, 28, -58, 32, -101, 62, -39, 80, -65, -50, 18, -119, 117, 98, -36, -92, 32, -67, 69, -69, -87, -1, 54, 124, -57, -60, -4, -58, -43, -53, 61, -110, -28, -126, 22, -75, 104, 73, -43, 78, 2, -63, -58, 26, -85, 20, -18, 93, -113, -20, 12, -78, -83, 120, -124, -115, 119, -69, -48, -106, -116, -111, -55, 43, -33, -15, -60, -95, 8};
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
    msg.setTimeStamp(0.830317462393226);
    msg.setSource(60188U);
    msg.setSourceEntity(149U);
    msg.setDestination(25093U);
    msg.setDestinationEntity(179U);
    msg.uid = 88U;
    msg.frag_number = 252U;
    msg.num_frags = 238U;
    const char tmp_msg_0[] = {50, 84, 93, -60, 25, 76, -116, -34, -3, 28, 25, 10, -8, -53, -50, 46, 107, -59, 81, 43, -71, -64, -128, 61, 93, 5, -125, 117, -103, -35, -17, 80, -86, 43, 104, -96, 54, -23, 31, 105, -27, -92, 3, 48, 90, 116, -31, 67, 45, -65, 123, 11, 31, 1, -108, 77, 95, -111, 116, -88, 100, -33, -65, 61, 36, -41, 99, 31, -40, 78, -17, 98, 76, -11, 88, -20, 69, 45, 82, 40, 49, -30, 67, 94, -78, -56, 85, 50, -26, -88, 62, -61, 109, -20, 46, -69, -116, -14, 121, 63, -4, -41, 83, 124, -54, -113, 105, -128, -96, -59, -100, -110, -57, -124, -108, -35, -13, -5, 16, -118, 117, 89, -58, -1, 79, -114, -79, 97, 30, -3, -68, 32, 35, -128, -46, -9, 67, -103, 2, -67, -8, 40, -49, -2, 78, 79, 123, -109, -87, 58, -105, -67, 92, -50, 92, 102, 90, 54, 44, 84, 24, 5, 54, -3, 40, -97, 60, 113, -105, 35, -67, -91, -8, 27, -60, 60, -6, 115, 28, 54, -47, 33, 50, -94, -68, 82, -56, -37, -77, 17, 125, -80, 21, -1, 77, 8, -104, 30, -103, 33, -99, -128, 0, -48, -126, -62, -54, -10, -66};
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
    msg.setTimeStamp(0.598863760989486);
    msg.setSource(63803U);
    msg.setSourceEntity(18U);
    msg.setDestination(55944U);
    msg.setDestinationEntity(58U);
    msg.uid = 6U;
    msg.frag_number = 195U;
    msg.num_frags = 236U;
    const char tmp_msg_0[] = {-14, 18, -16, -49, -7, 37, -63, -74, 116, -9, 49, -73, -120, 104, -42, -11, 53, 41, -59, -106, -82, -126, 14, 34, -6, 80, -57, -102, 70, 37, -25, 119, -26, -53, 92, -92, 74, -13, -107, -104, -111, -35, -34, -44, 102, 57, -89, 41, 41, 63, 10, 56, 125, -33, -117, -65, 43, 41, 10, 87, -61, -54, 91, 32, -34, -41, -37, 73, -49, -121, -48, 5, -66, 72, 4, -65, 125, -74, -87, 105, 69, -103, -36, -20, -56, 114, -88, 58, 125, -66, 105, 4, -3, -116, 82, 101, 91, -42, -100, 57, 0, -87, 30, 2, 68, -30, 103, 123, 22, 82, 100, -44, 81, -62, 16, -39, -107, 42, -120, -25, 98, -56, -97, -122, 37, -98, 54, -102, 60, 29, 115, -50, -69, -108, -80, 51, 78, -84, 22, 36, -30, 35, -72, -81, -6, 76, -26, -92, 99, -42, 20, 54, 32, 120, -27, 47, 107, -48, 83, 14, -93, 103, 44, -7, -118, -22, 49, -10, 2, -12, 16, 19, -44, -63, -1, 38, -76, -93, 79, -17, -51, -41, 116, 70, 71, 121, 52, -12, -81, -98, 92, -81, 17, 107, 59, -23, -117, 37, 78, 70, 73, 76, 68, -70, 119, -9, 118, -120, -23, -46, -100};
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
    msg.setTimeStamp(0.4882197928375869);
    msg.setSource(63974U);
    msg.setSourceEntity(219U);
    msg.setDestination(5329U);
    msg.setDestinationEntity(64U);
    msg.content_type.assign("VQYJRGGKKRQVSDT");
    const char tmp_msg_0[] = {63, -106, 43, 33, 65, -121, 26, 75, -44, -13, 12, -16, -109, 17, 46, -2, 24, -2, -106, 59, -38, -18, -39, 81, -2, 13, -97, -74, 74, 58, 89, -122, 114, 104, -31, -108, 18, -14, 54, 32, -115, -115, 126, -13, -127, 72, 22, 35, -103, -73, 67, -6, 1, 43, 82, -27, 118, 105, 113, -26, -91, -122, -66, 93, 33, 10, -39, 47, 11, 121, -92, 95, -99, 29, -53, 90, -46, 26, -91, -53, -52, -3, -2, -67, -81, 11, 126, -5, 99, 76, -57, -89, -70, -102, 79, -58, -126, 26, 50, 53, -58, 14, 118, 0, -22, 52, 115, 85, 25, -83, -63, -84, -78, 72, -68, 103, 68, -80, -89, -108, 35, 36, 17, 97, 19, -70, 44, 121, 118, 67, 111, 48, -10, 15, 32, -21, 98, -104, -12, -8, 8, 94, 111, 123};
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
    msg.setTimeStamp(0.3994368337839992);
    msg.setSource(46119U);
    msg.setSourceEntity(20U);
    msg.setDestination(58775U);
    msg.setDestinationEntity(193U);
    msg.content_type.assign("GTRLOXKNZDMILSNECVFTEZKJNVQEJXSAMKNPWYFMVZYWASQUULTJQKYBNBPB");
    const char tmp_msg_0[] = {-63, -2, -71, 99, -126, 30, 9, 78, 69, -23, 68, 31, 10, -123, -51, 35, -6, 126, -18, 113, 2, 16, -14, -10, -120, -82, -69, 19, 96, 39, 75, -96, -7, -59, 81, 103, -100, 124, 56, -112, 32, -31, -112, 40, -124, -126, -57, 6, -116, -93, -105, 44, -107, 85, -120, -49, 44, 58, 3, 62, -112, -80, 68, -109, 28, -20, 125, -33, -38, -90, 89, -56, 43, 65, -32, 16, -104, -26, -5, 27, 52, -26, -51, 70, 73, -128, -30, 96, -91, 106, 83, 65, 107, 102, -97, -124, -51, -36, 61, 51, -128, -86, 97, -64, -5, 39, 57, 21, 77, -71, -114, 69, 64, 62, 35, 121};
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
    msg.setTimeStamp(0.5561425574322866);
    msg.setSource(23141U);
    msg.setSourceEntity(51U);
    msg.setDestination(14113U);
    msg.setDestinationEntity(218U);
    msg.content_type.assign("IGCYJZTRZYPUGSFTUTAUVRGCARTXNSVIJRSOIKUWEXVJMGTVYEEHXDQWELFQDSRONHRGLZDCLWDVHQLIXMGZHLSXZBAPBJROWPPMPTGLFCAMVQMCKBGIMOEAHBMJWKDOXQOUBSVSRJPYNKHZLTIULXNGFUYAUAYZWEYBINQFQIINFOHQXCALTCCAWMJCKJKYJOADEBIYSMEWNNEFTPZDKHVQUFWZXORP");
    const char tmp_msg_0[] = {-90, 84, -128, 13, -21, -75, -90, 103, -123, -13, 122, -71, 99, 107, -76, 2, -41, -9, -126, -99, -83, 123, -119, -64, -46, -66, 73, 45, -110, -23, 79, 9, -109, 28, 13, 13, 6, 10, 87, -38, -60, 9, 88, 102, 56, 19, -17, -7, 50, -80, 101, -15, 5, -107, 53, -119, 97, 2, -107, -17, -7, -48, -27, -15, 32, -115, 15, -8, 53, -26, 110, -59, -61, -35, 118, 85, 101, 62, 46, -24, 78, 14, 20, -11, -52, -124, -71, 91, -68, 64, -4, 79, -79, -81, -63, 112, -70, -9, 117, 87, 61, 99, 124, 75, -2, -128, -69, 119, -107, 71, -15, -12, -2, -81, -62, 3, 22, -109, -78, -52, 64, 117, 88, 81, 125, 43, -38, -86, 59, -94, -127, -124, 115, -73, -73, -87, -19, 100, -3, 49, 19, -61, 12, 35, 98, -108, -115, 26, -50, -53, -111, -45};
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
    msg.setTimeStamp(0.8510809003235227);
    msg.setSource(58773U);
    msg.setSourceEntity(237U);
    msg.setDestination(40462U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.9529780111074304);
    msg.setSource(32211U);
    msg.setSourceEntity(30U);
    msg.setDestination(42237U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.5484628120314833);
    msg.setSource(36184U);
    msg.setSourceEntity(108U);
    msg.setDestination(2796U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.11265209531229603);
    msg.setSource(28900U);
    msg.setSourceEntity(87U);
    msg.setDestination(55766U);
    msg.setDestinationEntity(127U);
    msg.target = 9702U;
    msg.bearing = 0.9898126908106779;
    msg.elevation = 0.3360490786334849;

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
    msg.setTimeStamp(0.7398131657588477);
    msg.setSource(53437U);
    msg.setSourceEntity(185U);
    msg.setDestination(56457U);
    msg.setDestinationEntity(44U);
    msg.target = 63422U;
    msg.bearing = 0.47247758103149173;
    msg.elevation = 0.8926622893948294;

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
    msg.setTimeStamp(0.002794624484153796);
    msg.setSource(43171U);
    msg.setSourceEntity(98U);
    msg.setDestination(27977U);
    msg.setDestinationEntity(152U);
    msg.target = 25212U;
    msg.bearing = 0.9394598736406731;
    msg.elevation = 0.521404209628369;

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
    msg.setTimeStamp(0.9509960524162326);
    msg.setSource(64738U);
    msg.setSourceEntity(243U);
    msg.setDestination(59354U);
    msg.setDestinationEntity(12U);
    msg.target = 33652U;
    msg.x = 0.804385955067375;
    msg.y = 0.8537925786793187;
    msg.z = 0.5140025599035651;

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
    msg.setTimeStamp(0.9782555719855731);
    msg.setSource(31276U);
    msg.setSourceEntity(66U);
    msg.setDestination(36937U);
    msg.setDestinationEntity(246U);
    msg.target = 33314U;
    msg.x = 0.1386520786745593;
    msg.y = 0.2908896132408503;
    msg.z = 0.4152188510387257;

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
    msg.setTimeStamp(0.643793464143393);
    msg.setSource(58571U);
    msg.setSourceEntity(126U);
    msg.setDestination(26033U);
    msg.setDestinationEntity(211U);
    msg.target = 62991U;
    msg.x = 0.756503343073926;
    msg.y = 0.38946054532638474;
    msg.z = 0.4693994889529821;

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
    msg.setTimeStamp(0.01507198271265342);
    msg.setSource(20273U);
    msg.setSourceEntity(50U);
    msg.setDestination(33797U);
    msg.setDestinationEntity(85U);
    msg.target = 31083U;
    msg.lat = 0.3362343773423462;
    msg.lon = 0.5757367333046957;
    msg.z_units = 200U;
    msg.z = 0.5712971193138743;

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
    msg.setTimeStamp(0.375752166449113);
    msg.setSource(22021U);
    msg.setSourceEntity(236U);
    msg.setDestination(16959U);
    msg.setDestinationEntity(246U);
    msg.target = 1285U;
    msg.lat = 0.022470248073712562;
    msg.lon = 0.30103248842751806;
    msg.z_units = 68U;
    msg.z = 0.28396077122368024;

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
    msg.setTimeStamp(0.15484673093976375);
    msg.setSource(46592U);
    msg.setSourceEntity(109U);
    msg.setDestination(23832U);
    msg.setDestinationEntity(23U);
    msg.target = 9023U;
    msg.lat = 0.4286054436697555;
    msg.lon = 0.20945820025194684;
    msg.z_units = 251U;
    msg.z = 0.8398088877466393;

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
    msg.setTimeStamp(0.11985857998091887);
    msg.setSource(59580U);
    msg.setSourceEntity(70U);
    msg.setDestination(13593U);
    msg.setDestinationEntity(173U);
    msg.locale.assign("GATAXVDWKJNERHYNMKVOWYLRJOZVFPDASWEVEXETOEJTPHGOQZPMPOZMLPSKFBYIXTDLDNAYSQXPTWYOHUBZBQFXLADUCIYLJCGQZIJRTOJFNUGZNTURLHLVREFXQQJWYWRSZCGTUQBEAMOWMDWKIKKTJMBNFHVIKVERMUKVALSYOPNHABBGQULBCFMCHLTDAIZYCSUHCSDPXSJVSQGZACCNGKHGWNMEJXNKUXFOMQYXHRFUIZICBPWSDRB");
    const char tmp_msg_0[] = {-94, 48, -44, 46, -46, -78, 54, 92, -115, -57, 3, -121, 103, -10, -98, -59, -104, 53, -64, -20, 90, 32, 72, -70, 21, 20, 37, 25, -69, 22, -126, -17, 83, 92, 78, -115, 104, 80, -50, 117, 9, -35, 64, 46, 33, 107, 65, -52, 56, -126, -103, 35, 112, 114, 58, -74, -109, 88, 76, -25, 40, 40, -114, -96, -101, -109, 114, 94, 77};
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
    msg.setTimeStamp(0.8495082131176873);
    msg.setSource(51792U);
    msg.setSourceEntity(44U);
    msg.setDestination(21705U);
    msg.setDestinationEntity(225U);
    msg.locale.assign("GHIBAGNFTBPPKFZJMUYXGZQPREGGYFHMQPTGLHCQKDWUONPBCWWWSSVTXJHOCMVBSIBVIRDMLFHHYNGJWUXYIFVEMY");
    const char tmp_msg_0[] = {-3, -96, 85, 38, -79, -61, 92, -58, -78, 116, 15, 106, -93, -48, -118, -74, -90, 107, -72, 85, -103, 5, -26, -109, 75, 16, -122, 73, 77, 12, 19, 45, 12, -24, -64, 38, 62, -58, 42, 1, 17, 111, 84, -3, 119, -14, -101, 106, 16, -101, 2, -29, 45, -29, -50, 111, 70, 81, -18, 123, -89, -100, 22, 94, 109, 23, 35, 11, 31, -1, 121, -82, -77, -105, -95, 65, 93, -80, 72, 30, 91, 113, -63, 56, -80, -25, -85};
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
    msg.setTimeStamp(0.24305834830199724);
    msg.setSource(9615U);
    msg.setSourceEntity(30U);
    msg.setDestination(52879U);
    msg.setDestinationEntity(22U);
    msg.locale.assign("WHAZOYCKEDJCSIEZZHTPAYLVEOXCWBGYLFHQBR");
    const char tmp_msg_0[] = {-13, 79, -127, 120, -112, -31, 123, 71, 73, 74, -116, -87, -114, 122, -90, 76, 37, 70, 122, 118, 103, -73, 84, -70, 79, -54, -12, -39, -62, 89, 13, 19, -40, -20, -37, -89, 61, 68, -25, -105, -28, -50};
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
    msg.setTimeStamp(0.8079066570136797);
    msg.setSource(28685U);
    msg.setSourceEntity(57U);
    msg.setDestination(46956U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.4387143228313042);
    msg.setSource(49758U);
    msg.setSourceEntity(9U);
    msg.setDestination(24419U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.25899139510278624);
    msg.setSource(38371U);
    msg.setSourceEntity(223U);
    msg.setDestination(35203U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.20353185584216882);
    msg.setSource(51175U);
    msg.setSourceEntity(113U);
    msg.setDestination(48452U);
    msg.setDestinationEntity(111U);
    msg.camid = 134U;
    msg.x = 63249U;
    msg.y = 55926U;

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
    msg.setTimeStamp(0.5387745459763291);
    msg.setSource(44522U);
    msg.setSourceEntity(47U);
    msg.setDestination(37206U);
    msg.setDestinationEntity(80U);
    msg.camid = 128U;
    msg.x = 62376U;
    msg.y = 2363U;

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
    msg.setTimeStamp(0.9412506530078082);
    msg.setSource(16134U);
    msg.setSourceEntity(32U);
    msg.setDestination(39590U);
    msg.setDestinationEntity(3U);
    msg.camid = 121U;
    msg.x = 64043U;
    msg.y = 12668U;

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
    msg.setTimeStamp(0.3146200964466186);
    msg.setSource(56464U);
    msg.setSourceEntity(63U);
    msg.setDestination(28378U);
    msg.setDestinationEntity(136U);
    msg.camid = 28U;
    msg.x = 54217U;
    msg.y = 35848U;

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
    msg.setTimeStamp(0.515904741101493);
    msg.setSource(32237U);
    msg.setSourceEntity(136U);
    msg.setDestination(26308U);
    msg.setDestinationEntity(248U);
    msg.camid = 65U;
    msg.x = 40770U;
    msg.y = 49156U;

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
    msg.setTimeStamp(0.8177053236471988);
    msg.setSource(61500U);
    msg.setSourceEntity(128U);
    msg.setDestination(49325U);
    msg.setDestinationEntity(49U);
    msg.camid = 249U;
    msg.x = 23782U;
    msg.y = 50410U;

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
    msg.setTimeStamp(0.164826273712539);
    msg.setSource(30784U);
    msg.setSourceEntity(14U);
    msg.setDestination(62060U);
    msg.setDestinationEntity(113U);
    msg.tracking = 42U;
    msg.lat = 0.1566772801085956;
    msg.lon = 0.6159725517695157;
    msg.x = 0.5167683752642461;
    msg.y = 0.21870801700958276;
    msg.z = 0.49336695161678745;

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
    msg.setTimeStamp(0.7154595794013034);
    msg.setSource(12775U);
    msg.setSourceEntity(138U);
    msg.setDestination(27802U);
    msg.setDestinationEntity(181U);
    msg.tracking = 251U;
    msg.lat = 0.8311006334503199;
    msg.lon = 0.9698407521429244;
    msg.x = 0.5583189177594714;
    msg.y = 0.9540375998457105;
    msg.z = 0.8192028669989702;

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
    msg.setTimeStamp(0.510652681869048);
    msg.setSource(35880U);
    msg.setSourceEntity(109U);
    msg.setDestination(64988U);
    msg.setDestinationEntity(183U);
    msg.tracking = 175U;
    msg.lat = 0.42663727145846275;
    msg.lon = 0.06344059416089243;
    msg.x = 0.7082919402200222;
    msg.y = 0.5714021279550991;
    msg.z = 0.9835448476503997;

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
    msg.setTimeStamp(0.537276801655631);
    msg.setSource(10245U);
    msg.setSourceEntity(181U);
    msg.setDestination(22731U);
    msg.setDestinationEntity(180U);
    msg.target.assign("SECOGWMBHGTMYKPJAEADTVOSHGCFLSZJKZSIZQBYUCGOWYFTNNUAPRRNQHSITHYSFXBGMGDYLGLQBVCWULDJVDTJEZBSECYZAZLOJFABGWIAQBMNQXFQEMVRXSLLTOJRVIYWUIDNVNIUKRFYNDCMEEJKAUORLPPUHZVKYRZMJCTWFRWZBHNTEECPUDIQOFKTCNBKUDKWNX");
    msg.lbearing = 0.7171832355519127;
    msg.lelevation = 0.4390541827158523;
    msg.bearing = 0.795558095983678;
    msg.elevation = 0.17861170234996027;
    msg.phi = 0.9920619180589111;
    msg.theta = 0.08449311418364724;
    msg.psi = 0.6637748425087009;
    msg.accuracy = 0.8024241443422186;

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
    msg.setTimeStamp(0.4691863628879198);
    msg.setSource(42204U);
    msg.setSourceEntity(236U);
    msg.setDestination(32120U);
    msg.setDestinationEntity(34U);
    msg.target.assign("PUDGFZAJHEWZEASMESIXBBQCTIJATFXVFZYPUCEPCGLHKVUDPDRECWWNRQSAKKUHPDFAMMDKFAOIWJYDEALFWYJHOIOLUMFVVVIUGQPHLDPCOJOUSTKPSPGVITRCOBZRNJSXLNHX");
    msg.lbearing = 0.5188763414942401;
    msg.lelevation = 0.9191958902724914;
    msg.bearing = 0.2480387264837628;
    msg.elevation = 0.7508141831981278;
    msg.phi = 0.3878508072603424;
    msg.theta = 0.2785405190727692;
    msg.psi = 0.08781385053243529;
    msg.accuracy = 0.7312826955237424;

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
    msg.setTimeStamp(0.6372913183948782);
    msg.setSource(15465U);
    msg.setSourceEntity(53U);
    msg.setDestination(34075U);
    msg.setDestinationEntity(111U);
    msg.target.assign("QRMHYVSXAYKZJXRRFMQECAOTPUDKNUWWRU");
    msg.lbearing = 0.7272857892983242;
    msg.lelevation = 0.5745586803813606;
    msg.bearing = 0.8465261686663423;
    msg.elevation = 0.5643604359467219;
    msg.phi = 0.8176445514864944;
    msg.theta = 0.922218030730813;
    msg.psi = 0.12339963259228359;
    msg.accuracy = 0.05646662963384241;

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
    msg.setTimeStamp(0.5680091679087115);
    msg.setSource(59225U);
    msg.setSourceEntity(71U);
    msg.setDestination(17355U);
    msg.setDestinationEntity(46U);
    msg.target.assign("OTNUSUMBBTJANQAVRIIYTZUUHWPHIQILPKQKDHTSCHOHSQESSPFTBUIQHHVEDJVEQGDEGTECBYPCODEYWMBRGBLBXTXDJA");
    msg.x = 0.43937526788311676;
    msg.y = 0.16925388644662165;
    msg.z = 0.5436220837966022;
    msg.n = 0.02621093187932555;
    msg.e = 0.7190621577585906;
    msg.d = 0.5442545505693784;
    msg.phi = 0.8387296450431575;
    msg.theta = 0.9527833449057338;
    msg.psi = 0.5317699053025294;
    msg.accuracy = 0.85716138558289;

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
    msg.setTimeStamp(0.6099627094277733);
    msg.setSource(14726U);
    msg.setSourceEntity(124U);
    msg.setDestination(24463U);
    msg.setDestinationEntity(231U);
    msg.target.assign("ABQAJOBUMAROTFOJPPWSHASCPRVDBLUXBIIVOAHKDIMYNAWYXOYT");
    msg.x = 0.24062030540890578;
    msg.y = 0.4104974840686969;
    msg.z = 0.6424090229537244;
    msg.n = 0.4078409618641553;
    msg.e = 0.6553445087089116;
    msg.d = 0.7609604647604152;
    msg.phi = 0.17265674843672552;
    msg.theta = 0.916057242041581;
    msg.psi = 0.4393107251014585;
    msg.accuracy = 0.9555594349584751;

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
    msg.setTimeStamp(0.05944288328784708);
    msg.setSource(55239U);
    msg.setSourceEntity(8U);
    msg.setDestination(26908U);
    msg.setDestinationEntity(8U);
    msg.target.assign("MNYVKLSAKMNCVOFWEXFNJHKIBMALWGMZSWETSITCAKQGJICTDJPSRXYMPADDZUZOSMBBJLDVETWVWWCUVCNRRLWEKRLYCFYOMIPXZRQZQLKSNBHZFWLUHYAOJRUXXJVWOBXQATGIEYCGFSGEPTNPSRUKYEIPNTBBGDDAIUUVBKUV");
    msg.x = 0.9887220682681573;
    msg.y = 0.5709068810450936;
    msg.z = 0.4570668035166615;
    msg.n = 0.413369909428723;
    msg.e = 0.3410052285208104;
    msg.d = 0.35087893864302777;
    msg.phi = 0.3269329179654603;
    msg.theta = 0.998535119528605;
    msg.psi = 0.676681599352007;
    msg.accuracy = 0.9729303829357749;

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
    msg.setTimeStamp(0.15615140154210627);
    msg.setSource(40298U);
    msg.setSourceEntity(99U);
    msg.setDestination(56963U);
    msg.setDestinationEntity(116U);
    msg.target.assign("LNLQBLNJNJPNBIXBPXMQJPJIKSHNJSXZPMLVPAEGSBIWEWOLKZPDEHXPUSDOAGPTMQQKCWUOISNZUGRAMYTUCDXODVXHTCGFXOEADXJGHVKYHFAKPEBLUFOYIDROLWERFQRZKQDMMJHTZNYYERSBWZIRAARDMQBUQAZCKNVIBFIECKWCZMGLZVTOCZDRQWUFJLFGBX");
    msg.lat = 0.07704187580906197;
    msg.lon = 0.9602842179641156;
    msg.z_units = 196U;
    msg.z = 0.7634538385818359;
    msg.accuracy = 0.4665659619686039;

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
    msg.setTimeStamp(0.8811420678650383);
    msg.setSource(45585U);
    msg.setSourceEntity(142U);
    msg.setDestination(57190U);
    msg.setDestinationEntity(152U);
    msg.target.assign("RQOUKEBWXQRJEANVJDUMQDBJGKVMXIVWDILOXNKJFYYGTVCBSRVNZHCFHANMOPWGIJUAUFLMBNAYQPQOPWNSZGCEJJYSMRDVVMGXOEUCXZZUMKGQABLMRVUBQZKZLLTABSODJFGTCFTNGOBHIPZLZVFXPBTKLGBSFPHNOUPSXOHHDVTYXGEHKXRENFPTMICKJUIEQIASHRTXTLSOCWUFYNPIYDD");
    msg.lat = 0.41596953303571327;
    msg.lon = 0.44222396089443816;
    msg.z_units = 42U;
    msg.z = 0.5351615608986714;
    msg.accuracy = 0.5778587703951037;

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
    msg.setTimeStamp(0.08473796673276668);
    msg.setSource(15096U);
    msg.setSourceEntity(149U);
    msg.setDestination(27280U);
    msg.setDestinationEntity(22U);
    msg.target.assign("DSDDYQQMYHRUTAJNXKXGAEAPGCQMBNSOPXVWFJPITHHHSXOTOKYRCXDSQNZABREETZTSQVWWJKKEXVGANCMWPVFIRXZPGQQLNUNPKETHYUTJKBMUEWALONZWILSXRJCOAWTWJRYMUMBEDFIYZFRKUWHMFYLSIDVKOWPTIMDXONIERGFONGV");
    msg.lat = 0.45598473582976085;
    msg.lon = 0.21793764623283518;
    msg.z_units = 248U;
    msg.z = 0.8514282806647864;
    msg.accuracy = 0.946888091994011;

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
    msg.setTimeStamp(0.3272738478875752);
    msg.setSource(11194U);
    msg.setSourceEntity(3U);
    msg.setDestination(6243U);
    msg.setDestinationEntity(208U);
    msg.name.assign("YAOXENHFVOOZHOHNJPONPXMIUMFDXHBG");
    msg.lat = 0.6938701717806505;
    msg.lon = 0.7837208109910466;
    msg.z = 0.43804938631722223;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.8741517415440845);
    msg.setSource(60862U);
    msg.setSourceEntity(1U);
    msg.setDestination(60790U);
    msg.setDestinationEntity(2U);
    msg.name.assign("XFAHJVYLELNDVJXABFKDHJQYRBEITKTCAGOLAGGXZRIFRFKEKZIBQAZJHQLLWPCMNWYYDFGESUFJJQPLOLIZVTRIDDPLLRXANBFJLSBYCDWXNVKZQTNMEBBBCBEZGXHYFQZHSKKAPVZHMODVWOUSJHWUOKJISMMQN");
    msg.lat = 0.4250680370657073;
    msg.lon = 0.015502108962168415;
    msg.z = 0.6129465856464382;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.29405790942960663);
    msg.setSource(44832U);
    msg.setSourceEntity(219U);
    msg.setDestination(1898U);
    msg.setDestinationEntity(53U);
    msg.name.assign("EFUTZXXONVDONQQFNEOYUGIQDNLPBXIWSJMFAJKHL");
    msg.lat = 0.12198528985743695;
    msg.lon = 0.16847957042860695;
    msg.z = 0.08688521179706243;
    msg.z_units = 94U;

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
    msg.setTimeStamp(0.9530164953706846);
    msg.setSource(39121U);
    msg.setSourceEntity(107U);
    msg.setDestination(40261U);
    msg.setDestinationEntity(154U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.9712368208037375);
    msg.setSource(1135U);
    msg.setSourceEntity(181U);
    msg.setDestination(64083U);
    msg.setDestinationEntity(105U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.8515731648947227);
    msg.setSource(5633U);
    msg.setSourceEntity(91U);
    msg.setDestination(37542U);
    msg.setDestinationEntity(125U);
    msg.op = 168U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ZFZIFVHYYYSTKIJLKHPAFTUEVQWBDQSOCRUVPSFEBCQJESDHJNRTEVZTRNPHM");
    tmp_msg_0.lat = 0.25256041183893196;
    tmp_msg_0.lon = 0.6216056802012538;
    tmp_msg_0.z = 0.03717807924032379;
    tmp_msg_0.z_units = 137U;
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
    msg.setTimeStamp(0.5394261865790685);
    msg.setSource(41606U);
    msg.setSourceEntity(157U);
    msg.setDestination(21297U);
    msg.setDestinationEntity(244U);
    msg.value = 0.881300628926458;
    msg.type = 19U;

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
    msg.setTimeStamp(0.8989341784321699);
    msg.setSource(6539U);
    msg.setSourceEntity(16U);
    msg.setDestination(16170U);
    msg.setDestinationEntity(0U);
    msg.value = 0.006699314396333533;
    msg.type = 205U;

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
    msg.setTimeStamp(0.9610772654905534);
    msg.setSource(61879U);
    msg.setSourceEntity(53U);
    msg.setDestination(36660U);
    msg.setDestinationEntity(96U);
    msg.value = 0.23360021038763867;
    msg.type = 221U;

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
    msg.setTimeStamp(0.5323049771266453);
    msg.setSource(36426U);
    msg.setSourceEntity(165U);
    msg.setDestination(18198U);
    msg.setDestinationEntity(64U);
    msg.value = 0.6354581973918139;

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
    msg.setTimeStamp(0.6212420142884454);
    msg.setSource(40073U);
    msg.setSourceEntity(39U);
    msg.setDestination(8304U);
    msg.setDestinationEntity(248U);
    msg.value = 0.4128496358702486;

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
    msg.setTimeStamp(0.08512597985793768);
    msg.setSource(53228U);
    msg.setSourceEntity(130U);
    msg.setDestination(65194U);
    msg.setDestinationEntity(92U);
    msg.value = 0.5627389835867663;

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
    msg.setTimeStamp(0.6635503920188768);
    msg.setSource(60897U);
    msg.setSourceEntity(223U);
    msg.setDestination(46170U);
    msg.setDestinationEntity(35U);
    msg.timestamp_last_service = 0.832868944639032;
    msg.time_next_service = 0.7923651371422115;
    msg.time_motor_next_service = 0.8307308509195765;
    msg.time_idle_ground = 0.4467090578220704;
    msg.time_idle_air = 0.7552871850600824;
    msg.time_idle_water = 0.019501079203577243;
    msg.time_idle_underwater = 0.14974689311175193;
    msg.time_idle_unknown = 0.8501517750752632;
    msg.time_motor_ground = 0.3145482735156603;
    msg.time_motor_air = 0.18451972657458993;
    msg.time_motor_water = 0.9819843719710627;
    msg.time_motor_underwater = 0.49591402723601863;
    msg.time_motor_unknown = 0.9485110540226221;
    msg.rpm_min = -29380;
    msg.rpm_max = -21836;
    msg.depth_max = 0.7854203776022595;

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
    msg.setTimeStamp(0.7227413626410899);
    msg.setSource(7810U);
    msg.setSourceEntity(102U);
    msg.setDestination(46620U);
    msg.setDestinationEntity(233U);
    msg.timestamp_last_service = 0.45485473224899275;
    msg.time_next_service = 0.46060869675534577;
    msg.time_motor_next_service = 0.2658093806555494;
    msg.time_idle_ground = 0.44253323080001883;
    msg.time_idle_air = 0.9213304534273402;
    msg.time_idle_water = 0.08619149471081045;
    msg.time_idle_underwater = 0.1883214277715627;
    msg.time_idle_unknown = 0.9101240630381835;
    msg.time_motor_ground = 0.4190712380115563;
    msg.time_motor_air = 0.0621485471666543;
    msg.time_motor_water = 0.3562216036302306;
    msg.time_motor_underwater = 0.4029261738137523;
    msg.time_motor_unknown = 0.33148285466219163;
    msg.rpm_min = 14639;
    msg.rpm_max = 5104;
    msg.depth_max = 0.35581118172056914;

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
    msg.setTimeStamp(0.4215171823983581);
    msg.setSource(49623U);
    msg.setSourceEntity(87U);
    msg.setDestination(48848U);
    msg.setDestinationEntity(218U);
    msg.timestamp_last_service = 0.9060165995754592;
    msg.time_next_service = 0.6871755912225581;
    msg.time_motor_next_service = 0.9729675074475496;
    msg.time_idle_ground = 0.7819971048002534;
    msg.time_idle_air = 0.027319200152888246;
    msg.time_idle_water = 0.4814827216297466;
    msg.time_idle_underwater = 0.8245219741061689;
    msg.time_idle_unknown = 0.09846635965752748;
    msg.time_motor_ground = 0.09312596998567335;
    msg.time_motor_air = 0.7192319147491023;
    msg.time_motor_water = 0.11501610154399178;
    msg.time_motor_underwater = 0.5464614373870076;
    msg.time_motor_unknown = 0.17360507654046264;
    msg.rpm_min = 11297;
    msg.rpm_max = 32117;
    msg.depth_max = 0.975978250092167;

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
    msg.setTimeStamp(0.992544217567229);
    msg.setSource(8437U);
    msg.setSourceEntity(99U);
    msg.setDestination(3123U);
    msg.setDestinationEntity(109U);
    msg.severity = 234U;
    msg.text.assign("KNEJCWTIRXBJWDDEVSMQIDEJFJDJRISLBCYGLLAMGMEXASJYLJIAKWKKRYBFQPXEXVHSZVZYQITLBCYDZVGHQV");

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
    msg.setTimeStamp(0.8821725332420086);
    msg.setSource(54397U);
    msg.setSourceEntity(252U);
    msg.setDestination(21494U);
    msg.setDestinationEntity(88U);
    msg.severity = 55U;
    msg.text.assign("MLMXPQGQMVYZRJWZBUYEFZVZAECXMIKPDTMCPACLKESUOLAKRRESSRUQUEGXGJOPDOHKWYBUNYWNWCEMKJPVDWNZOUZXIQKTHZWUAIVGSGCRJCXSENOULLQYZXTTQRO");

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
    msg.setTimeStamp(0.8727695705247029);
    msg.setSource(43503U);
    msg.setSourceEntity(7U);
    msg.setDestination(33209U);
    msg.setDestinationEntity(120U);
    msg.severity = 68U;
    msg.text.assign("RRBZOSDFCBCKFTYTCWWOGUSXPJVJXEANNCSGALZVDARFATXGQTOVKUWSEGWZZUXZBVKBBOLXNITQEWJRPPECQGEIPNDJOITRYH");

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
    msg.setTimeStamp(0.6541428644193573);
    msg.setSource(7444U);
    msg.setSourceEntity(47U);
    msg.setDestination(2077U);
    msg.setDestinationEntity(37U);
    msg.channel = 110;
    msg.value = -21232718;
    msg.gain = 129U;

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
    msg.setTimeStamp(0.6570081637453199);
    msg.setSource(6649U);
    msg.setSourceEntity(138U);
    msg.setDestination(37540U);
    msg.setDestinationEntity(184U);
    msg.channel = -72;
    msg.value = 1538941849;
    msg.gain = 15U;

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
    msg.setTimeStamp(0.9793024346266267);
    msg.setSource(32141U);
    msg.setSourceEntity(41U);
    msg.setDestination(609U);
    msg.setDestinationEntity(137U);
    msg.channel = -87;
    msg.value = 1856658412;
    msg.gain = 136U;

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
    msg.setTimeStamp(0.8545105604297868);
    msg.setSource(46268U);
    msg.setSourceEntity(68U);
    msg.setDestination(9240U);
    msg.setDestinationEntity(7U);
    msg.ch01 = 0.2849671895570326;
    msg.ch02 = 0.20288706834018833;
    msg.ch03 = 0.2914580265889092;
    msg.ch04 = 0.41297515358431025;
    msg.ch05 = 0.4579396055472792;
    msg.ch06 = 0.5323658061262199;
    msg.ch07 = 0.07913128510758782;
    msg.ch08 = 0.17475815787755178;
    msg.ch09 = 0.96137140915602;
    msg.ch10 = 0.42719133449987556;
    msg.ch11 = 0.6086737036782806;
    msg.ch12 = 0.5788668486107275;
    msg.ch13 = 0.18596430009340614;
    msg.ch14 = 0.6409782483758034;
    msg.ch15 = 0.9894942794800944;
    msg.ch16 = 0.897228927385619;

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
    msg.setTimeStamp(0.30819744403289884);
    msg.setSource(64997U);
    msg.setSourceEntity(166U);
    msg.setDestination(28368U);
    msg.setDestinationEntity(98U);
    msg.ch01 = 0.1158290256725707;
    msg.ch02 = 0.3927250054309491;
    msg.ch03 = 0.1154534837965413;
    msg.ch04 = 0.31917700864852716;
    msg.ch05 = 0.20158279787826205;
    msg.ch06 = 0.5165077346177696;
    msg.ch07 = 0.9260928036075546;
    msg.ch08 = 0.7471704226170766;
    msg.ch09 = 0.4206555142711489;
    msg.ch10 = 0.8789840858101973;
    msg.ch11 = 0.36150503518016863;
    msg.ch12 = 0.40408525010426877;
    msg.ch13 = 0.13717060797806135;
    msg.ch14 = 0.9008250363572026;
    msg.ch15 = 0.5054423171895216;
    msg.ch16 = 0.5819222776474152;

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
    msg.setTimeStamp(0.004950023623983002);
    msg.setSource(129U);
    msg.setSourceEntity(224U);
    msg.setDestination(60928U);
    msg.setDestinationEntity(79U);
    msg.ch01 = 0.3934790063122131;
    msg.ch02 = 0.99256198926499;
    msg.ch03 = 0.05095273255551935;
    msg.ch04 = 0.6841130798838516;
    msg.ch05 = 0.609946265086997;
    msg.ch06 = 0.44827756818662934;
    msg.ch07 = 0.04191758743854468;
    msg.ch08 = 0.8571797269886424;
    msg.ch09 = 0.682973421191619;
    msg.ch10 = 0.7286532100933485;
    msg.ch11 = 0.9818198030751956;
    msg.ch12 = 0.02392858193484515;
    msg.ch13 = 0.6416566499859254;
    msg.ch14 = 0.3154269263075511;
    msg.ch15 = 0.8582313505658787;
    msg.ch16 = 0.08069635903970918;

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
    msg.setTimeStamp(0.4340711243773292);
    msg.setSource(5822U);
    msg.setSourceEntity(159U);
    msg.setDestination(50383U);
    msg.setDestinationEntity(216U);
    msg.type = 150U;

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
    msg.setTimeStamp(0.6555946345195389);
    msg.setSource(11339U);
    msg.setSourceEntity(130U);
    msg.setDestination(13312U);
    msg.setDestinationEntity(59U);
    msg.type = 26U;

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
    msg.setTimeStamp(0.2691449436993917);
    msg.setSource(41076U);
    msg.setSourceEntity(38U);
    msg.setDestination(30322U);
    msg.setDestinationEntity(231U);
    msg.type = 5U;

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
    msg.setTimeStamp(0.32729219843318713);
    msg.setSource(26136U);
    msg.setSourceEntity(42U);
    msg.setDestination(6063U);
    msg.setDestinationEntity(11U);
    msg.value = 0.9916747481014603;

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
    msg.setTimeStamp(0.19345367075362585);
    msg.setSource(62582U);
    msg.setSourceEntity(210U);
    msg.setDestination(53744U);
    msg.setDestinationEntity(35U);
    msg.value = 0.1502576843256589;

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
    msg.setTimeStamp(0.6239262650792203);
    msg.setSource(26607U);
    msg.setSourceEntity(174U);
    msg.setDestination(53718U);
    msg.setDestinationEntity(131U);
    msg.value = 0.4040483997797054;

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
