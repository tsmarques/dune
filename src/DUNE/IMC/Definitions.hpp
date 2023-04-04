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

#ifndef DUNE_IMC_DEFINITIONS_HPP_INCLUDED_
#define DUNE_IMC_DEFINITIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/IMC/Message.hpp>
#include <DUNE/IMC/InlineMessage.hpp>
#include <DUNE/IMC/MessageList.hpp>
#include <DUNE/IMC/Enumerations.hpp>
#include <DUNE/IMC/Bitfields.hpp>
#include <DUNE/IMC/SuperTypes.hpp>
#include <DUNE/IMC/JSON.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Entity State.
    class EntityState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Bootstrapping.
        ESTA_BOOT = 0,
        //! Normal Operation.
        ESTA_NORMAL = 1,
        //! Fault.
        ESTA_FAULT = 2,
        //! Error.
        ESTA_ERROR = 3,
        //! Failure.
        ESTA_FAILURE = 4
      };

      //! Flags.
      enum FlagsBits
      {
        //! Human Intervention Required.
        EFLA_HUMAN_INTERVENTION = 0x01
      };

      //! State.
      uint8_t state;
      //! Flags.
      uint8_t flags;
      //! Complementary description.
      std::string description;

      static uint16_t
      getIdStatic()
      {
        return 1;
      }

      EntityState();

      EntityState*
      clone() const override
      {
        return new EntityState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EntityState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EntityState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(description);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Query Entity State.
    class QueryEntityState: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 2;
      }

      QueryEntityState();

      QueryEntityState*
      clone() const override
      {
        return new QueryEntityState(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return QueryEntityState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "QueryEntityState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Entity Information.
    class EntityInfo: public Message
    {
    public:
      //! Entity Identifier.
      uint8_t id;
      //! Label.
      std::string label;
      //! Component name.
      std::string component;
      //! Activation Time.
      uint16_t act_time;
      //! Deactivation Time.
      uint16_t deact_time;

      static uint16_t
      getIdStatic()
      {
        return 3;
      }

      EntityInfo();

      EntityInfo*
      clone() const override
      {
        return new EntityInfo(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EntityInfo::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EntityInfo";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(label) + IMC::getSerializationSize(component);
      }

      uint16_t
      getSubId() const override;

      void
      setSubId(uint16_t subid) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Query Entity Information.
    class QueryEntityInfo: public Message
    {
    public:
      //! Entity Identifier.
      uint8_t id;

      static uint16_t
      getIdStatic()
      {
        return 4;
      }

      QueryEntityInfo();

      QueryEntityInfo*
      clone() const override
      {
        return new QueryEntityInfo(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return QueryEntityInfo::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "QueryEntityInfo";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      uint16_t
      getSubId() const override;

      void
      setSubId(uint16_t subid) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Entity List.
    class EntityList: public Message
    {
    public:
      //! operation.
      enum operationEnum
      {
        //! Report.
        OP_REPORT = 0,
        //! Query.
        OP_QUERY = 1
      };

      //! operation.
      uint8_t op;
      //! list.
      std::string list;

      static uint16_t
      getIdStatic()
      {
        return 5;
      }

      EntityList();

      EntityList*
      clone() const override
      {
        return new EntityList(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EntityList::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EntityList";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(list);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! CPU Usage.
    class CpuUsage: public Message
    {
    public:
      //! Usage percentage.
      uint8_t value;

      static uint16_t
      getIdStatic()
      {
        return 7;
      }

      CpuUsage();

      CpuUsage*
      clone() const override
      {
        return new CpuUsage(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CpuUsage::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CpuUsage";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Transport Bindings.
    class TransportBindings: public Message
    {
    public:
      //! Consumer name.
      std::string consumer;
      //! Message Identifier.
      uint16_t message_id;

      static uint16_t
      getIdStatic()
      {
        return 8;
      }

      TransportBindings();

      TransportBindings*
      clone() const override
      {
        return new TransportBindings(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TransportBindings::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TransportBindings";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(consumer);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Restart System.
    class RestartSystem: public Message
    {
    public:
      //! Restart Type.
      enum RestartTypeEnum
      {
        //! Dune.
        RSTYPE_DUNE = 1,
        //! System.
        RSTYPE_SYSTEM = 2
      };

      //! Restart Type.
      uint8_t type;

      static uint16_t
      getIdStatic()
      {
        return 9;
      }

      RestartSystem();

      RestartSystem*
      clone() const override
      {
        return new RestartSystem(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RestartSystem::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RestartSystem";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Device Calibration Control.
    class DevCalibrationControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Start.
        DCAL_START = 0,
        //! Stop.
        DCAL_STOP = 1,
        //! Perform Next Calibration Step.
        DCAL_STEP_NEXT = 2,
        //! Perform Previous Calibration Step.
        DCAL_STEP_PREVIOUS = 3
      };

      //! Operation.
      uint8_t op;

      static uint16_t
      getIdStatic()
      {
        return 12;
      }

      DevCalibrationControl();

      DevCalibrationControl*
      clone() const override
      {
        return new DevCalibrationControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DevCalibrationControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DevCalibrationControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Device Calibration State.
    class DevCalibrationState: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Previous Step Not Supported.
        DCS_PREVIOUS_NOT_SUPPORTED = 0x01,
        //! Next Step Not Supported.
        DCS_NEXT_NOT_SUPPORTED = 0x02,
        //! Waiting Device Calibration Control.
        DCS_WAITING_CONTROL = 0x04,
        //! Calibration Error.
        DCS_ERROR = 0x08,
        //! Calibration Procedure Completed.
        DCS_COMPLETED = 0x10
      };

      //! Total Steps.
      uint8_t total_steps;
      //! Current Step Number.
      uint8_t step_number;
      //! Description.
      std::string step;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic()
      {
        return 13;
      }

      DevCalibrationState();

      DevCalibrationState*
      clone() const override
      {
        return new DevCalibrationState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DevCalibrationState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DevCalibrationState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(step);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Entity Activation State.
    class EntityActivationState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Entity is Inactive.
        EAS_INACTIVE = 0,
        //! Entity is Active.
        EAS_ACTIVE = 1,
        //! Activation in Progress.
        EAS_ACT_IP = 2,
        //! Activation Completed.
        EAS_ACT_DONE = 3,
        //! Activation Failed.
        EAS_ACT_FAIL = 4,
        //! Deactivation In Progress.
        EAS_DEACT_IP = 5,
        //! Deactivation Completed.
        EAS_DEACT_DONE = 6,
        //! Deactivation Failed.
        EAS_DEACT_FAIL = 7
      };

      //! State.
      uint8_t state;
      //! Error.
      std::string error;

      static uint16_t
      getIdStatic()
      {
        return 14;
      }

      EntityActivationState();

      EntityActivationState*
      clone() const override
      {
        return new EntityActivationState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EntityActivationState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EntityActivationState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Query Entity Activation State.
    class QueryEntityActivationState: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 15;
      }

      QueryEntityActivationState();

      QueryEntityActivationState*
      clone() const override
      {
        return new QueryEntityActivationState(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return QueryEntityActivationState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "QueryEntityActivationState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Vehicle Operational Limits.
    class VehicleOperationalLimits: public Message
    {
    public:
      //! Action on the vehicle operational limits.
      enum ActiononthevehicleoperationallimitsEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REPORT = 2
      };

      //! Action on the vehicle operational limits.
      uint8_t op;
      //! Minimum speed.
      fp32_t speed_min;
      //! Maximum speed.
      fp32_t speed_max;
      //! Longitudinal maximum acceleration.
      fp32_t long_accel;
      //! Maximum MSL altitude.
      fp32_t alt_max_msl;
      //! Maximum Dive Rate Speed Fraction.
      fp32_t dive_fraction_max;
      //! Maximum Climb Rate Speed Fraction.
      fp32_t climb_fraction_max;
      //! Bank limit.
      fp32_t bank_max;
      //! Bank rate limit.
      fp32_t p_max;
      //! Minimum pitch angle.
      fp32_t pitch_min;
      //! Maximum pitch angle.
      fp32_t pitch_max;
      //! Maximum pitch rate.
      fp32_t q_max;
      //! Minimum load factor.
      fp32_t g_min;
      //! Maximum load factor.
      fp32_t g_max;
      //! Maximum lateral load factor.
      fp32_t g_lat_max;
      //! Minimum RPMs.
      fp32_t rpm_min;
      //! Maximum RPMs.
      fp32_t rpm_max;
      //! Maximum RPM rate.
      fp32_t rpm_rate_max;

      static uint16_t
      getIdStatic()
      {
        return 16;
      }

      VehicleOperationalLimits();

      VehicleOperationalLimits*
      clone() const override
      {
        return new VehicleOperationalLimits(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return VehicleOperationalLimits::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "VehicleOperationalLimits";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 69;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Message List.
    class MsgList: public Message
    {
    public:
      //! Messages.
      MessageList<Message> msgs;

      static uint16_t
      getIdStatic()
      {
        return 20;
      }

      MsgList();

      MsgList*
      clone() const override
      {
        return new MsgList(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return MsgList::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "MsgList";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return msgs.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Simulated State.
    class SimulatedState: public Message
    {
    public:
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Height (WGS-84).
      fp32_t height;
      //! Offset north (m).
      fp32_t x;
      //! Offset east (m).
      fp32_t y;
      //! Offset down (m).
      fp32_t z;
      //! Rotation over x axis.
      fp32_t phi;
      //! Rotation over y axis.
      fp32_t theta;
      //! Rotation over z axis.
      fp32_t psi;
      //! Body-Fixed xx Linear Velocity.
      fp32_t u;
      //! Body-Fixed yy Linear Velocity.
      fp32_t v;
      //! Body-Fixed zz Linear Velocity.
      fp32_t w;
      //! Angular Velocity in x.
      fp32_t p;
      //! Angular Velocity in y.
      fp32_t q;
      //! Angular Velocity in z.
      fp32_t r;
      //! Stream Velocity X (North).
      fp32_t svx;
      //! Stream Velocity Y (East).
      fp32_t svy;
      //! Stream Velocity Z (Down).
      fp32_t svz;

      static uint16_t
      getIdStatic()
      {
        return 50;
      }

      SimulatedState();

      SimulatedState*
      clone() const override
      {
        return new SimulatedState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SimulatedState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SimulatedState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 80;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Leak Simulation.
    class LeakSimulation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Leaks Off.
        LSIM_OFF = 0,
        //! Leaks On.
        LSIM_ON = 1
      };

      //! Operation.
      uint8_t op;
      //! Leak Entities.
      std::string entities;

      static uint16_t
      getIdStatic()
      {
        return 51;
      }

      LeakSimulation();

      LeakSimulation*
      clone() const override
      {
        return new LeakSimulation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LeakSimulation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LeakSimulation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(entities);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Underwater Acoustics Simulation.
    class UASimulation: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Data Transmission.
        UAS_DATA = 0,
        //! Ping.
        UAS_PING = 1,
        //! Ping Reply.
        UAS_PING_REPLY = 2
      };

      //! Type.
      uint8_t type;
      //! Transmission Speed.
      uint16_t speed;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 52;
      }

      UASimulation();

      UASimulation*
      clone() const override
      {
        return new UASimulation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UASimulation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UASimulation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Dynamics Simulation Parameters.
    class DynamicsSimParam: public Message
    {
    public:
      //! Action on the Vehicle Simulation Parameters.
      enum ActionontheVehicleSimulationParametersEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REPORT = 2
      };

      //! Action on the Vehicle Simulation Parameters.
      uint8_t op;
      //! TAS to Longitudinal Acceleration Gain.
      fp32_t tas2acc_pgain;
      //! Bank to Bank Rate Gain.
      fp32_t bank2p_pgain;

      static uint16_t
      getIdStatic()
      {
        return 53;
      }

      DynamicsSimParam();

      DynamicsSimParam*
      clone() const override
      {
        return new DynamicsSimParam(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DynamicsSimParam::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DynamicsSimParam";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 9;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Storage Usage.
    class StorageUsage: public Message
    {
    public:
      //! Available.
      uint32_t available;
      //! Usage.
      uint8_t value;

      static uint16_t
      getIdStatic()
      {
        return 100;
      }

      StorageUsage();

      StorageUsage*
      clone() const override
      {
        return new StorageUsage(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return StorageUsage::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "StorageUsage";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Cache Control.
    class CacheControl: public Message
    {
    public:
      //! Control Operation.
      enum ControlOperationEnum
      {
        //! Store.
        COP_STORE = 0,
        //! Load.
        COP_LOAD = 1,
        //! Clear.
        COP_CLEAR = 2,
        //! Copy Snapshot.
        COP_COPY = 3,
        //! Snapshot Copy Complete.
        COP_COPY_COMPLETE = 4
      };

      //! Control Operation.
      uint8_t op;
      //! Snapshot destination.
      std::string snapshot;
      //! Message.
      InlineMessage<Message> message;

      static uint16_t
      getIdStatic()
      {
        return 101;
      }

      CacheControl();

      CacheControl*
      clone() const override
      {
        return new CacheControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CacheControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CacheControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(snapshot) + message.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Logging Control.
    class LoggingControl: public Message
    {
    public:
      //! Control Operation.
      enum ControlOperationEnum
      {
        //! Request Start of Logging.
        COP_REQUEST_START = 0,
        //! Logging Started.
        COP_STARTED = 1,
        //! Request Logging Stop.
        COP_REQUEST_STOP = 2,
        //! Logging Stopped.
        COP_STOPPED = 3,
        //! Request Current Log Name.
        COP_REQUEST_CURRENT_NAME = 4,
        //! Current Log Name.
        COP_CURRENT_NAME = 5
      };

      //! Control Operation.
      uint8_t op;
      //! Log Label / Path.
      std::string name;

      static uint16_t
      getIdStatic()
      {
        return 102;
      }

      LoggingControl();

      LoggingControl*
      clone() const override
      {
        return new LoggingControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LoggingControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LoggingControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Log Book Entry.
    class LogBookEntry: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Information.
        LBET_INFO = 0,
        //! Warning.
        LBET_WARNING = 1,
        //! Error.
        LBET_ERROR = 2,
        //! Critical.
        LBET_CRITICAL = 3,
        //! Debug.
        LBET_DEBUG = 4
      };

      //! Type.
      uint8_t type;
      //! Timestamp.
      fp64_t htime;
      //! Context.
      std::string context;
      //! Text.
      std::string text;

      static uint16_t
      getIdStatic()
      {
        return 103;
      }

      LogBookEntry();

      LogBookEntry*
      clone() const override
      {
        return new LogBookEntry(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LogBookEntry::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LogBookEntry";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 9;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(context) + IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Log Book Control.
    class LogBookControl: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Get.
        LBC_GET = 0,
        //! Clear.
        LBC_CLEAR = 1,
        //! Get Errors.
        LBC_GET_ERR = 2,
        //! Reply.
        LBC_REPLY = 3
      };

      //! Command.
      uint8_t command;
      //! Timestamp.
      fp64_t htime;
      //! Messages.
      MessageList<LogBookEntry> msg;

      static uint16_t
      getIdStatic()
      {
        return 104;
      }

      LogBookControl();

      LogBookControl*
      clone() const override
      {
        return new LogBookControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LogBookControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LogBookControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 9;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return msg.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Replay Control.
    class ReplayControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Start.
        ROP_START = 0,
        //! Stop.
        ROP_STOP = 1,
        //! Pause.
        ROP_PAUSE = 2,
        //! Resume.
        ROP_RESUME = 3
      };

      //! Operation.
      uint8_t op;
      //! File To Replay.
      std::string file;

      static uint16_t
      getIdStatic()
      {
        return 105;
      }

      ReplayControl();

      ReplayControl*
      clone() const override
      {
        return new ReplayControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ReplayControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ReplayControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(file);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Clock Control.
    class ClockControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Execute Sync..
        COP_SYNC_EXEC = 0,
        //! Request Sync..
        COP_SYNC_REQUEST = 1,
        //! Sync. Started.
        COP_SYNC_STARTED = 2,
        //! Sync. done.
        COP_SYNC_DONE = 3,
        //! Set Timezone .
        COP_SET_TZ = 4,
        //! Timezone Setup.
        COP_SET_TZ_DONE = 5
      };

      //! Operation.
      uint8_t op;
      //! Clock.
      fp64_t clock;
      //! Timezone.
      int8_t tz;

      static uint16_t
      getIdStatic()
      {
        return 106;
      }

      ClockControl();

      ClockControl*
      clone() const override
      {
        return new ClockControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ClockControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ClockControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 10;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Historic CTD.
    class HistoricCTD: public Message
    {
    public:
      //! Conductivity.
      fp32_t conductivity;
      //! Temperature.
      fp32_t temperature;
      //! Depth.
      fp32_t depth;

      static uint16_t
      getIdStatic()
      {
        return 107;
      }

      HistoricCTD();

      HistoricCTD*
      clone() const override
      {
        return new HistoricCTD(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return HistoricCTD::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "HistoricCTD";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Historic Telemetry.
    class HistoricTelemetry: public Message
    {
    public:
      //! Altitude.
      fp32_t altitude;
      //! Roll.
      uint16_t roll;
      //! Pitch.
      uint16_t pitch;
      //! Yaw.
      uint16_t yaw;
      //! Speed.
      int16_t speed;

      static uint16_t
      getIdStatic()
      {
        return 108;
      }

      HistoricTelemetry();

      HistoricTelemetry*
      clone() const override
      {
        return new HistoricTelemetry(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return HistoricTelemetry::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "HistoricTelemetry";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Historic Sonar Data.
    class HistoricSonarData: public Message
    {
    public:
      //! Encoding.
      enum EncodingEnum
      {
        //! One Byte Per Pixel.
        ENC_ONE_BYTE_PER_PIXEL = 0,
        //! PNG compressed image.
        ENC_PNG = 1,
        //! JPEG compressed image.
        ENC_JPEG = 2
      };

      //! Altitude.
      fp32_t altitude;
      //! Width.
      fp32_t width;
      //! Length.
      fp32_t length;
      //! Bearing.
      fp32_t bearing;
      //! Pixels Per Line.
      int16_t pxl;
      //! Encoding.
      uint8_t encoding;
      //! SonarData.
      std::vector<char> sonar_data;

      static uint16_t
      getIdStatic()
      {
        return 109;
      }

      HistoricSonarData();

      HistoricSonarData*
      clone() const override
      {
        return new HistoricSonarData(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return HistoricSonarData::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "HistoricSonarData";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 19;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(sonar_data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Historic Event.
    class HistoricEvent: public Message
    {
    public:
      //! Event Type.
      enum EventTypeEnum
      {
        //! Information.
        EVTYPE_INFO = 0,
        //! Error.
        EVTYPE_ERROR = 1
      };

      //! Event.
      std::string text;
      //! Event Type.
      uint8_t type;

      static uint16_t
      getIdStatic()
      {
        return 110;
      }

      HistoricEvent();

      HistoricEvent*
      clone() const override
      {
        return new HistoricEvent(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return HistoricEvent::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "HistoricEvent";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Profile Sample.
    class ProfileSample: public Message
    {
    public:
      //! Depth.
      uint16_t depth;
      //! Average.
      fp32_t avg;

      static uint16_t
      getIdStatic()
      {
        return 112;
      }

      ProfileSample();

      ProfileSample*
      clone() const override
      {
        return new ProfileSample(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ProfileSample::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ProfileSample";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 6;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Vertical Profile.
    class VerticalProfile: public Message
    {
    public:
      //! Parameter.
      enum ParameterEnum
      {
        //! Temperature.
        PROF_TEMPERATURE = 0,
        //! Salinity.
        PROF_SALINITY = 1,
        //! Conductivity.
        PROF_CONDUCTIVITY = 2,
        //! pH.
        PROF_PH = 3,
        //! Redox.
        PROF_REDOX = 4,
        //! Chlorophyll.
        PROF_CHLOROPHYLL = 5,
        //! Turbidity.
        PROF_TURBIDITY = 6
      };

      //! Parameter.
      uint8_t parameter;
      //! Number of Samples.
      uint8_t numsamples;
      //! Samples.
      MessageList<ProfileSample> samples;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;

      static uint16_t
      getIdStatic()
      {
        return 111;
      }

      VerticalProfile();

      VerticalProfile*
      clone() const override
      {
        return new VerticalProfile(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return VerticalProfile::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "VerticalProfile";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 18;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return samples.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Heartbeat.
    class Heartbeat: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 150;
      }

      Heartbeat();

      Heartbeat*
      clone() const override
      {
        return new Heartbeat(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Heartbeat::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Heartbeat";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Announce.
    class Announce: public Message
    {
    public:
      //! System Name.
      std::string sys_name;
      //! System Type.
      uint8_t sys_type;
      //! Control Owner.
      uint16_t owner;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Height WGS-84.
      fp32_t height;
      //! Services.
      std::string services;

      static uint16_t
      getIdStatic()
      {
        return 151;
      }

      Announce();

      Announce*
      clone() const override
      {
        return new Announce(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Announce::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Announce";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 23;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(sys_name) + IMC::getSerializationSize(services);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Announce Service.
    class AnnounceService: public Message
    {
    public:
      //! ServiceType.
      enum ServiceTypeBits
      {
        //! External.
        SRV_TYPE_EXTERNAL = 0x01,
        //! Local.
        SRV_TYPE_LOCAL = 0x02
      };

      //! Service.
      std::string service;
      //! ServiceType.
      uint8_t service_type;

      static uint16_t
      getIdStatic()
      {
        return 152;
      }

      AnnounceService();

      AnnounceService*
      clone() const override
      {
        return new AnnounceService(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AnnounceService::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AnnounceService";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(service);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Receive Signal Strength Information.
    class RSSI: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 153;
      }

      RSSI();

      RSSI*
      clone() const override
      {
        return new RSSI(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RSSI::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RSSI";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Voltage Standing Wave Ratio.
    class VSWR: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 154;
      }

      VSWR();

      VSWR*
      clone() const override
      {
        return new VSWR(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return VSWR::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "VSWR";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Link Level.
    class LinkLevel: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 155;
      }

      LinkLevel();

      LinkLevel*
      clone() const override
      {
        return new LinkLevel(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LinkLevel::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LinkLevel";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! SMS.
    class Sms: public Message
    {
    public:
      //! Number.
      std::string number;
      //! Timeout.
      uint16_t timeout;
      //! Contents.
      std::string contents;

      static uint16_t
      getIdStatic()
      {
        return 156;
      }

      Sms();

      Sms*
      clone() const override
      {
        return new Sms(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Sms::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Sms";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(number) + IMC::getSerializationSize(contents);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! SMS Transmit.
    class SmsTx: public Message
    {
    public:
      //! Sequence Number.
      uint32_t seq;
      //! Destination.
      std::string destination;
      //! Timeout.
      uint16_t timeout;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 157;
      }

      SmsTx();

      SmsTx*
      clone() const override
      {
        return new SmsTx(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SmsTx::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SmsTx";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(destination) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! SMS Receive.
    class SmsRx: public Message
    {
    public:
      //! Source.
      std::string source;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 158;
      }

      SmsRx();

      SmsRx*
      clone() const override
      {
        return new SmsRx(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SmsRx::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SmsRx";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(source) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! SMS State.
    class SmsState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Accepted.
        SMS_ACCEPTED = 0,
        //! Rejected.
        SMS_REJECTED = 1,
        //! Interrupted.
        SMS_INTERRUPTED = 2,
        //! Completed.
        SMS_COMPLETED = 3,
        //! Idle.
        SMS_IDLE = 4,
        //! Transmitting.
        SMS_TRANSMITTING = 5,
        //! Receiving.
        SMS_RECEIVING = 6
      };

      //! Sequence Number.
      uint32_t seq;
      //! State.
      uint8_t state;
      //! Error Message.
      std::string error;

      static uint16_t
      getIdStatic()
      {
        return 159;
      }

      SmsState();

      SmsState*
      clone() const override
      {
        return new SmsState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SmsState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SmsState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Text Message.
    class TextMessage: public Message
    {
    public:
      //! Origin.
      std::string origin;
      //! Text.
      std::string text;

      static uint16_t
      getIdStatic()
      {
        return 160;
      }

      TextMessage();

      TextMessage*
      clone() const override
      {
        return new TextMessage(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TextMessage::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TextMessage";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(origin) + IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Received Iridium Message.
    class IridiumMsgRx: public Message
    {
    public:
      //! Origin Identifier.
      std::string origin;
      //! Timestamp.
      fp64_t htime;
      //! Latitude Reference.
      fp64_t lat;
      //! Longitude Reference.
      fp64_t lon;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 170;
      }

      IridiumMsgRx();

      IridiumMsgRx*
      clone() const override
      {
        return new IridiumMsgRx(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return IridiumMsgRx::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "IridiumMsgRx";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 24;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(origin) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Transmit Iridium Message.
    class IridiumMsgTx: public Message
    {
    public:
      //! Request Identifier.
      uint16_t req_id;
      //! Time to live.
      uint16_t ttl;
      //! Destination Identifier.
      std::string destination;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 171;
      }

      IridiumMsgTx();

      IridiumMsgTx*
      clone() const override
      {
        return new IridiumMsgTx(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return IridiumMsgTx::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "IridiumMsgTx";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(destination) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Iridium Transmission Status.
    class IridiumTxStatus: public Message
    {
    public:
      //! Status Code.
      enum StatusCodeEnum
      {
        //! Successfull transmission.
        TXSTATUS_OK = 1,
        //! Error while trying to transmit message.
        TXSTATUS_ERROR = 2,
        //! Message has been queued for transmission.
        TXSTATUS_QUEUED = 3,
        //! Message is currently being transmitted.
        TXSTATUS_TRANSMIT = 4,
        //! Message's TTL has expired. Transmition cancelled..
        TXSTATUS_EXPIRED = 5,
        //! No more messages to be transmitted or received..
        TXSTATUS_EMPTY = 6
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Status Code.
      uint8_t status;
      //! Status Text.
      std::string text;

      static uint16_t
      getIdStatic()
      {
        return 172;
      }

      IridiumTxStatus();

      IridiumTxStatus*
      clone() const override
      {
        return new IridiumTxStatus(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return IridiumTxStatus::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "IridiumTxStatus";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Group Membership State.
    class GroupMembershipState: public Message
    {
    public:
      //! Group Name.
      std::string group_name;
      //! Communication Links Assertion.
      uint32_t links;

      static uint16_t
      getIdStatic()
      {
        return 180;
      }

      GroupMembershipState();

      GroupMembershipState*
      clone() const override
      {
        return new GroupMembershipState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GroupMembershipState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GroupMembershipState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(group_name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! System Group.
    class SystemGroup: public Message
    {
    public:
      //! Group List Action.
      enum GroupListActionEnum
      {
        //! Disband.
        OP_Dis = 0,
        //! Set.
        OP_Set = 1,
        //! Request.
        OP_Req = 2,
        //! Change.
        OP_Chg = 3,
        //! Report.
        OP_Rep = 4,
        //! Force.
        OP_Frc = 5
      };

      //! Group Name.
      std::string groupname;
      //! Group List Action.
      uint8_t action;
      //! Systems Name List.
      std::string grouplist;

      static uint16_t
      getIdStatic()
      {
        return 181;
      }

      SystemGroup();

      SystemGroup*
      clone() const override
      {
        return new SystemGroup(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SystemGroup::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SystemGroup";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(groupname) + IMC::getSerializationSize(grouplist);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Link Latency.
    class LinkLatency: public Message
    {
    public:
      //! Value.
      fp32_t value;
      //! Communications Source System ID.
      uint16_t sys_src;

      static uint16_t
      getIdStatic()
      {
        return 182;
      }

      LinkLatency();

      LinkLatency*
      clone() const override
      {
        return new LinkLatency(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LinkLatency::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LinkLatency";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 6;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Extended Receive Signal Strength Information.
    class ExtendedRSSI: public Message
    {
    public:
      //! Value.
      fp32_t value;
      //! RSSI Units.
      uint8_t units;

      static uint16_t
      getIdStatic()
      {
        return 183;
      }

      ExtendedRSSI();

      ExtendedRSSI*
      clone() const override
      {
        return new ExtendedRSSI(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ExtendedRSSI::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ExtendedRSSI";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Historic Data Series.
    class HistoricData: public Message
    {
    public:
      //! Base Latitude.
      fp32_t base_lat;
      //! Base Longitude.
      fp32_t base_lon;
      //! Base Timestamp.
      fp32_t base_time;
      //! Data.
      MessageList<RemoteData> data;

      static uint16_t
      getIdStatic()
      {
        return 184;
      }

      HistoricData();

      HistoricData*
      clone() const override
      {
        return new HistoricData(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return HistoricData::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "HistoricData";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 12;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return data.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Compressed Historic Data Series.
    class CompressedHistory: public Message
    {
    public:
      //! Base Latitude.
      fp32_t base_lat;
      //! Base Longitude.
      fp32_t base_lon;
      //! Base Timestamp.
      fp32_t base_time;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 185;
      }

      CompressedHistory();

      CompressedHistory*
      clone() const override
      {
        return new CompressedHistory(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CompressedHistory::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CompressedHistory";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 12;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Historic Data Sample.
    class HistoricSample: public RemoteData
    {
    public:
      //! Original System Id.
      uint16_t sys_id;
      //! Priority.
      int8_t priority;
      //! X offset.
      int16_t x;
      //! Y offset.
      int16_t y;
      //! Z offset.
      int16_t z;
      //! Time offset.
      int16_t t;
      //! Data Sample.
      InlineMessage<Message> sample;

      static uint16_t
      getIdStatic()
      {
        return 186;
      }

      HistoricSample();

      HistoricSample*
      clone() const override
      {
        return new HistoricSample(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return HistoricSample::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "HistoricSample";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 11;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return sample.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Historic Data Query.
    class HistoricDataQuery: public Message
    {
    public:
      //! Request Type.
      enum RequestTypeEnum
      {
        //! Query.
        HRTYPE_QUERY = 1,
        //! Reply.
        HRTYPE_REPLY = 2,
        //! Clear.
        HRTYPE_CLEAR = 3
      };

      //! Request Id.
      uint16_t req_id;
      //! Request Type.
      uint8_t type;
      //! Maximum Size.
      uint16_t max_size;
      //! Data.
      InlineMessage<HistoricData> data;

      static uint16_t
      getIdStatic()
      {
        return 187;
      }

      HistoricDataQuery();

      HistoricDataQuery*
      clone() const override
      {
        return new HistoricDataQuery(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return HistoricDataQuery::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "HistoricDataQuery";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return data.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Remote Command.
    class RemoteCommand: public RemoteData
    {
    public:
      //! Original Source.
      uint16_t original_source;
      //! Destination.
      uint16_t destination;
      //! Timeout.
      fp64_t timeout;
      //! Command.
      InlineMessage<Message> cmd;

      static uint16_t
      getIdStatic()
      {
        return 188;
      }

      RemoteCommand();

      RemoteCommand*
      clone() const override
      {
        return new RemoteCommand(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RemoteCommand::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RemoteCommand";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 12;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return cmd.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Communication Systems Query.
    class CommSystemsQuery: public Message
    {
    public:
      //! Model.
      enum ModelEnum
      {
        //! unknown.
        CIQ_UNKNOWN = 0x00,
        //! 3DR.
        CIQ_M3DR = 0x01,
        //! RDFXXXxPtP.
        CIQ_RDFXXXXPTP = 0x02
      };

      //! Type.
      enum TypeBits
      {
        //! Query Systems.
        CIQ_QUERY = 0x01,
        //! Reply.
        CIQ_REPLY = 0x02
      };

      //! Communication Interface.
      enum CommunicationInterfaceBits
      {
        //! Acoustic.
        CIQ_ACOUSTIC = 0x01,
        //! Satellite.
        CIQ_SATELLITE = 0x02,
        //! GSM.
        CIQ_GSM = 0x04,
        //! Mobile.
        CIQ_MOBILE = 0x08,
        //! Radio.
        CIQ_RADIO = 0x10
      };

      //! Type.
      uint8_t type;
      //! Communication Interface.
      uint16_t comm_interface;
      //! Model.
      uint16_t model;
      //! System List.
      std::string list;

      static uint16_t
      getIdStatic()
      {
        return 189;
      }

      CommSystemsQuery();

      CommSystemsQuery*
      clone() const override
      {
        return new CommSystemsQuery(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CommSystemsQuery::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CommSystemsQuery";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(list);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Telemetry Message.
    class TelemetryMsg: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Tx.
        TM_TX = 0x01,
        //! Rx.
        TM_RX = 0x02,
        //! TxStatus.
        TM_TXSTATUS = 0x03
      };

      //! Code.
      enum CodeEnum
      {
        //! Code unknown.
        TM_CODE_UNK = 0x00,
        //! Code Report.
        TM_CODE_REPORT = 0x01,
        //! Code IMC.
        TM_CODE_IMC = 0x02,
        //! Code raw.
        TM_CODE_RAW = 0x03
      };

      //! Status.
      enum StatusEnum
      {
        //! Does not apply.
        TM_NONE = 0x00,
        //! Successfull transmission.
        TM_DONE = 1,
        //! Error while trying to transmit message.
        TM_FAILED = 2,
        //! Message has been queued for transmission.
        TM_QUEUED = 3,
        //! Message is currently being transmitted.
        TM_TRANSMIT = 4,
        //! Message's TTL has expired. Transmition cancelled.
        TM_EXPIRED = 5,
        //! No more messages to be transmitted or received.
        TM_EMPTY = 6,
        //! Invalid address.
        TM_INV_ADDR = 7,
        //! Invalid transmission size.
        TM_INV_SIZE = 8
      };

      //! Acknowledge.
      enum AcknowledgeBits
      {
        //! Not acknowledge.
        TM_NAK = 0x00,
        //! acknowledge.
        TM_AK = 0x01
      };

      //! Type.
      uint8_t type;
      //! Request Identifier.
      uint32_t req_id;
      //! Time to live.
      uint16_t ttl;
      //! Code.
      uint8_t code;
      //! Destination Identifier.
      std::string destination;
      //! Source Identifier.
      std::string source;
      //! Acknowledge.
      uint8_t acknowledge;
      //! Status.
      uint8_t status;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 190;
      }

      TelemetryMsg();

      TelemetryMsg*
      clone() const override
      {
        return new TelemetryMsg(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TelemetryMsg::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TelemetryMsg";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 10;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(destination) + IMC::getSerializationSize(source) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! LBL Range.
    class LblRange: public Message
    {
    public:
      //! Beacon Identification Number.
      uint8_t id;
      //! Range.
      fp32_t range;

      static uint16_t
      getIdStatic()
      {
        return 200;
      }

      LblRange();

      LblRange*
      clone() const override
      {
        return new LblRange(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LblRange::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LblRange";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      uint16_t
      getSubId() const override;

      void
      setSubId(uint16_t subid) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! LBL Beacon Configuration.
    class LblBeacon: public Message
    {
    public:
      //! Beacon Name.
      std::string beacon;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Depth.
      fp32_t depth;
      //! Interrogation channel.
      uint8_t query_channel;
      //! Reply channel.
      uint8_t reply_channel;
      //! Transponder delay.
      uint8_t transponder_delay;

      static uint16_t
      getIdStatic()
      {
        return 202;
      }

      LblBeacon();

      LblBeacon*
      clone() const override
      {
        return new LblBeacon(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LblBeacon::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LblBeacon";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 23;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(beacon);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! LBL Configuration.
    class LblConfig: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Set LBL Configuration.
        OP_SET_CFG = 0,
        //! Retrieve LBL Configuration.
        OP_GET_CFG = 1,
        //! Reply to a GET command.
        OP_CUR_CFG = 2
      };

      //! Operation.
      uint8_t op;
      //! Beacons.
      MessageList<LblBeacon> beacons;

      static uint16_t
      getIdStatic()
      {
        return 203;
      }

      LblConfig();

      LblConfig*
      clone() const override
      {
        return new LblConfig(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LblConfig::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LblConfig";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return beacons.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Acoustic Message.
    class AcousticMessage: public Message
    {
    public:
      //! Message to send.
      InlineMessage<Message> message;

      static uint16_t
      getIdStatic()
      {
        return 206;
      }

      AcousticMessage();

      AcousticMessage*
      clone() const override
      {
        return new AcousticMessage(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AcousticMessage::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AcousticMessage";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return message.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Simulated Acoustic Message.
    class SimAcousticMessage: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Acknowledgement.
        SAM_ACK = 0x01,
        //! Delayed.
        SAM_DELAYED = 0x02,
        //! Reply.
        SAM_REPLY = 0x03
      };

      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Depth.
      fp32_t depth;
      //! Sentence.
      std::string sentence;
      //! Transmission Time.
      fp64_t txtime;
      //! Modem Type.
      std::string modem_type;
      //! Source system.
      std::string sys_src;
      //! Sequence Id.
      uint16_t seq;
      //! Destination System.
      std::string sys_dst;
      //! Flags.
      uint8_t flags;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 207;
      }

      SimAcousticMessage();

      SimAcousticMessage*
      clone() const override
      {
        return new SimAcousticMessage(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SimAcousticMessage::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SimAcousticMessage";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 31;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(sentence) + IMC::getSerializationSize(modem_type) + IMC::getSerializationSize(sys_src) + IMC::getSerializationSize(sys_dst) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Acoustic Operation.
    class AcousticOperation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Abort.
        AOP_ABORT = 0,
        //! Abort in Progress.
        AOP_ABORT_IP = 1,
        //! Abort Timeout.
        AOP_ABORT_TIMEOUT = 2,
        //! Abort Acknowledged.
        AOP_ABORT_ACKED = 3,
        //! Range Request.
        AOP_RANGE = 4,
        //! Range in Progress.
        AOP_RANGE_IP = 5,
        //! Range Timeout.
        AOP_RANGE_TIMEOUT = 6,
        //! Range Received.
        AOP_RANGE_RECVED = 7,
        //! Modem is Busy.
        AOP_BUSY = 8,
        //! Unsupported operation.
        AOP_UNSUPPORTED = 9,
        //! Transducer Not Detected.
        AOP_NO_TXD = 10,
        //! Send Message.
        AOP_MSG = 11,
        //! Message Send -- Queued.
        AOP_MSG_QUEUED = 12,
        //! Message Send -- In progress.
        AOP_MSG_IP = 13,
        //! Message Send -- Done.
        AOP_MSG_DONE = 14,
        //! Message Send -- Failure.
        AOP_MSG_FAILURE = 15,
        //! Send Short Message.
        AOP_MSG_SHORT = 16,
        //! Initiate Reverse Range.
        AOP_REVERSE_RANGE = 17,
        //! Forced Abort.
        AOP_FORCED_ABORT = 18
      };

      //! Operation.
      uint8_t op;
      //! System.
      std::string system;
      //! Range.
      fp32_t range;
      //! Message To Send.
      InlineMessage<Message> msg;

      static uint16_t
      getIdStatic()
      {
        return 211;
      }

      AcousticOperation();

      AcousticOperation*
      clone() const override
      {
        return new AcousticOperation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AcousticOperation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AcousticOperation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(system) + msg.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Acoustic Systems Query.
    class AcousticSystemsQuery: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 212;
      }

      AcousticSystemsQuery();

      AcousticSystemsQuery*
      clone() const override
      {
        return new AcousticSystemsQuery(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AcousticSystemsQuery::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AcousticSystemsQuery";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Acoustic Systems.
    class AcousticSystems: public Message
    {
    public:
      //! System List.
      std::string list;

      static uint16_t
      getIdStatic()
      {
        return 213;
      }

      AcousticSystems();

      AcousticSystems*
      clone() const override
      {
        return new AcousticSystems(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AcousticSystems::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AcousticSystems";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(list);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Acoustic Link Quality.
    class AcousticLink: public Message
    {
    public:
      //! Peer Name.
      std::string peer;
      //! Received Signal Strength Indicator.
      fp32_t rssi;
      //! Signal Integrity Level.
      uint16_t integrity;

      static uint16_t
      getIdStatic()
      {
        return 214;
      }

      AcousticLink();

      AcousticLink*
      clone() const override
      {
        return new AcousticLink(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AcousticLink::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AcousticLink";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(peer);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Acoustic Transmission Request.
    class AcousticRequest: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Abort.
        TYPE_ABORT = 0,
        //! Range.
        TYPE_RANGE = 1,
        //! Reverse Range.
        TYPE_REVERSE_RANGE = 2,
        //! Message.
        TYPE_MSG = 3,
        //! Raw.
        TYPE_RAW = 4
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Destination System.
      std::string destination;
      //! Timeout.
      fp64_t timeout;
      //! Range.
      fp32_t range;
      //! Type.
      uint8_t type;
      //! Message To Send.
      InlineMessage<Message> msg;

      static uint16_t
      getIdStatic()
      {
        return 215;
      }

      AcousticRequest();

      AcousticRequest*
      clone() const override
      {
        return new AcousticRequest(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AcousticRequest::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AcousticRequest";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 15;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(destination) + msg.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Acoustic Transmission Status.
    class AcousticStatus: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Abort.
        TYPE_ABORT = 0,
        //! Range.
        TYPE_RANGE = 1,
        //! Reverse Range.
        TYPE_REVERSE_RANGE = 2,
        //! Message.
        TYPE_MSG = 3,
        //! Raw.
        TYPE_RAW = 4
      };

      //! Status.
      enum StatusEnum
      {
        //! Queued.
        STATUS_QUEUED = 0,
        //! In Progress.
        STATUS_IN_PROGRESS = 1,
        //! Sent.
        STATUS_SENT = 2,
        //! Range Received.
        STATUS_RANGE_RECEIVED = 3,
        //! Delivered.
        STATUS_DELIVERED = 4,
        //! Busy.
        STATUS_BUSY = 100,
        //! Input Error.
        STATUS_INPUT_FAILURE = 101,
        //! Error trying to send acoustic text.
        STATUS_ERROR = 102,
        //! Message Type is not defined or is unsupported.
        STATUS_UNSUPPORTED = 666
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Type.
      uint8_t type;
      //! Status.
      uint8_t status;
      //! Information.
      std::string info;
      //! Range.
      fp32_t range;

      static uint16_t
      getIdStatic()
      {
        return 216;
      }

      AcousticStatus();

      AcousticStatus*
      clone() const override
      {
        return new AcousticStatus(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AcousticStatus::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AcousticStatus";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Acoustic Release Request.
    class AcousticRelease: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Open.
        AROP_OPEN = 0,
        //! Close.
        AROP_CLOSE = 1
      };

      //! System.
      std::string system;
      //! Operation.
      uint8_t op;

      static uint16_t
      getIdStatic()
      {
        return 217;
      }

      AcousticRelease();

      AcousticRelease*
      clone() const override
      {
        return new AcousticRelease(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AcousticRelease::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AcousticRelease";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(system);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Revolutions Per Minute.
    class Rpm: public Message
    {
    public:
      //! Value.
      int16_t value;

      static uint16_t
      getIdStatic()
      {
        return 250;
      }

      Rpm();

      Rpm*
      clone() const override
      {
        return new Rpm(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Rpm::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Rpm";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Voltage.
    class Voltage: public Message
    {
    public:
      //! Measured Voltage Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 251;
      }

      Voltage();

      Voltage*
      clone() const override
      {
        return new Voltage(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Voltage::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Voltage";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Current.
    class Current: public Message
    {
    public:
      //! Measured Current Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 252;
      }

      Current();

      Current*
      clone() const override
      {
        return new Current(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Current::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Current";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! GPS Fix.
    class GpsFix: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Stand Alone.
        GFT_STANDALONE = 0x00,
        //! Differential.
        GFT_DIFFERENTIAL = 0x01,
        //! Dead Reckoning.
        GFT_DEAD_RECKONING = 0x02,
        //! Manual Input.
        GFT_MANUAL_INPUT = 0x03,
        //! Simulation.
        GFT_SIMULATION = 0x04
      };

      //! Validity.
      enum ValidityBits
      {
        //! Valid Date.
        GFV_VALID_DATE = 0x0001,
        //! Valid Time.
        GFV_VALID_TIME = 0x0002,
        //! Valid Position.
        GFV_VALID_POS = 0x0004,
        //! Valid Course Over Ground.
        GFV_VALID_COG = 0x0008,
        //! Valid Speed Over Ground.
        GFV_VALID_SOG = 0x0010,
        //! Valid Horizontal Accuracy Estimate.
        GFV_VALID_HACC = 0x0020,
        //! Valid Vertical Accuracy Estimate.
        GFV_VALID_VACC = 0x0040,
        //! Valid Horizontal Dilution of Precision.
        GFV_VALID_HDOP = 0x0080,
        //! Valid Vertical Dilution of Precision.
        GFV_VALID_VDOP = 0x0100
      };

      //! Validity.
      uint16_t validity;
      //! Type.
      uint8_t type;
      //! UTC Year.
      uint16_t utc_year;
      //! UTC Month.
      uint8_t utc_month;
      //! UTC Day.
      uint8_t utc_day;
      //! UTC Time of Fix.
      fp32_t utc_time;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Height above WGS-84 ellipsoid.
      fp32_t height;
      //! Number of Satellites.
      uint8_t satellites;
      //! Course Over Ground.
      fp32_t cog;
      //! Speed Over Ground.
      fp32_t sog;
      //! Horizontal Dilution of Precision.
      fp32_t hdop;
      //! Vertical Dilution of Precision.
      fp32_t vdop;
      //! Horizontal Accuracy Estimate.
      fp32_t hacc;
      //! Vertical Accuracy Estimate.
      fp32_t vacc;

      static uint16_t
      getIdStatic()
      {
        return 253;
      }

      GpsFix();

      GpsFix*
      clone() const override
      {
        return new GpsFix(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GpsFix::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GpsFix";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 56;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Euler Angles.
    class EulerAngles: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! Roll Angle.
      fp64_t phi;
      //! Pitch Angle.
      fp64_t theta;
      //! Yaw Angle (True).
      fp64_t psi;
      //! Yaw Angle (Magnetic).
      fp64_t psi_magnetic;

      static uint16_t
      getIdStatic()
      {
        return 254;
      }

      EulerAngles();

      EulerAngles*
      clone() const override
      {
        return new EulerAngles(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EulerAngles::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EulerAngles";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 40;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Euler Angles Delta.
    class EulerAnglesDelta: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;
      //! Timestep.
      fp32_t timestep;

      static uint16_t
      getIdStatic()
      {
        return 255;
      }

      EulerAnglesDelta();

      EulerAnglesDelta*
      clone() const override
      {
        return new EulerAnglesDelta(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EulerAnglesDelta::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EulerAnglesDelta";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 36;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Angular Velocity.
    class AngularVelocity: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic()
      {
        return 256;
      }

      AngularVelocity();

      AngularVelocity*
      clone() const override
      {
        return new AngularVelocity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AngularVelocity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AngularVelocity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 32;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Acceleration.
    class Acceleration: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic()
      {
        return 257;
      }

      Acceleration();

      Acceleration*
      clone() const override
      {
        return new Acceleration(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Acceleration::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Acceleration";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 32;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Magnetic Field.
    class MagneticField: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic()
      {
        return 258;
      }

      MagneticField();

      MagneticField*
      clone() const override
      {
        return new MagneticField(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return MagneticField::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "MagneticField";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 32;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Ground Velocity.
    class GroundVelocity: public Message
    {
    public:
      //! Validity.
      enum ValidityBits
      {
        //! X component is valid.
        VAL_VEL_X = 0x01,
        //! Y component is valid.
        VAL_VEL_Y = 0x02,
        //! Z component is valid.
        VAL_VEL_Z = 0x04
      };

      //! Validity.
      uint8_t validity;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic()
      {
        return 259;
      }

      GroundVelocity();

      GroundVelocity*
      clone() const override
      {
        return new GroundVelocity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GroundVelocity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GroundVelocity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 25;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Water Velocity.
    class WaterVelocity: public Message
    {
    public:
      //! Validity.
      enum ValidityBits
      {
        //! X component is valid.
        VAL_VEL_X = 0x01,
        //! Y component is valid.
        VAL_VEL_Y = 0x02,
        //! Z component is valid.
        VAL_VEL_Z = 0x04
      };

      //! Validity.
      uint8_t validity;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic()
      {
        return 260;
      }

      WaterVelocity();

      WaterVelocity*
      clone() const override
      {
        return new WaterVelocity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return WaterVelocity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "WaterVelocity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 25;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Velocity Delta.
    class VelocityDelta: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic()
      {
        return 261;
      }

      VelocityDelta();

      VelocityDelta*
      clone() const override
      {
        return new VelocityDelta(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return VelocityDelta::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "VelocityDelta";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 32;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Device State.
    class DeviceState: public Message
    {
    public:
      //! Device Position - X.
      fp32_t x;
      //! Device Position - Y.
      fp32_t y;
      //! Device Position - Z.
      fp32_t z;
      //! Device Rotation - X.
      fp32_t phi;
      //! Device Rotation - Y.
      fp32_t theta;
      //! Device Rotation - Z.
      fp32_t psi;

      static uint16_t
      getIdStatic()
      {
        return 282;
      }

      DeviceState();

      DeviceState*
      clone() const override
      {
        return new DeviceState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DeviceState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DeviceState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 24;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Beam Configuration.
    class BeamConfig: public Message
    {
    public:
      //! Beam Width.
      fp32_t beam_width;
      //! Beam Height.
      fp32_t beam_height;

      static uint16_t
      getIdStatic()
      {
        return 283;
      }

      BeamConfig();

      BeamConfig*
      clone() const override
      {
        return new BeamConfig(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return BeamConfig::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "BeamConfig";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Distance.
    class Distance: public Message
    {
    public:
      //! Validity.
      enum ValidityEnum
      {
        //! Invalid.
        DV_INVALID = 0,
        //! Valid.
        DV_VALID = 1
      };

      //! Validity.
      uint8_t validity;
      //! Location.
      MessageList<DeviceState> location;
      //! Beam Configuration.
      MessageList<BeamConfig> beam_config;
      //! Measured Distance.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 262;
      }

      Distance();

      Distance*
      clone() const override
      {
        return new Distance(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Distance::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Distance";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return location.getSerializationSize() + beam_config.getSerializationSize();
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Temperature.
    class Temperature: public Message
    {
    public:
      //! Measured Temperature.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 263;
      }

      Temperature();

      Temperature*
      clone() const override
      {
        return new Temperature(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Temperature::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Temperature";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Pressure.
    class Pressure: public Message
    {
    public:
      //! Measured Pressure.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 264;
      }

      Pressure();

      Pressure*
      clone() const override
      {
        return new Pressure(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Pressure::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Pressure";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Depth.
    class Depth: public Message
    {
    public:
      //! Measured Depth.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 265;
      }

      Depth();

      Depth*
      clone() const override
      {
        return new Depth(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Depth::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Depth";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Depth Offset.
    class DepthOffset: public Message
    {
    public:
      //! Measured Offset.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 266;
      }

      DepthOffset();

      DepthOffset*
      clone() const override
      {
        return new DepthOffset(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DepthOffset::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DepthOffset";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Sound Speed.
    class SoundSpeed: public Message
    {
    public:
      //! Computed Sound Speed.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 267;
      }

      SoundSpeed();

      SoundSpeed*
      clone() const override
      {
        return new SoundSpeed(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SoundSpeed::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SoundSpeed";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Water Density.
    class WaterDensity: public Message
    {
    public:
      //! Computed Water Density.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 268;
      }

      WaterDensity();

      WaterDensity*
      clone() const override
      {
        return new WaterDensity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return WaterDensity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "WaterDensity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Conductivity.
    class Conductivity: public Message
    {
    public:
      //! Measured Conductivity.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 269;
      }

      Conductivity();

      Conductivity*
      clone() const override
      {
        return new Conductivity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Conductivity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Conductivity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Salinity.
    class Salinity: public Message
    {
    public:
      //! Measured Salinity.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 270;
      }

      Salinity();

      Salinity*
      clone() const override
      {
        return new Salinity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Salinity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Salinity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Wind Speed.
    class WindSpeed: public Message
    {
    public:
      //! Direction.
      fp32_t direction;
      //! Speed.
      fp32_t speed;
      //! Turbulence.
      fp32_t turbulence;

      static uint16_t
      getIdStatic()
      {
        return 271;
      }

      WindSpeed();

      WindSpeed*
      clone() const override
      {
        return new WindSpeed(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return WindSpeed::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "WindSpeed";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Relative Humidity.
    class RelativeHumidity: public Message
    {
    public:
      //! Relative Humidity Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 272;
      }

      RelativeHumidity();

      RelativeHumidity*
      clone() const override
      {
        return new RelativeHumidity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RelativeHumidity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RelativeHumidity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Device Data (Text).
    class DevDataText: public Message
    {
    public:
      //! Value.
      std::string value;

      static uint16_t
      getIdStatic()
      {
        return 273;
      }

      DevDataText();

      DevDataText*
      clone() const override
      {
        return new DevDataText(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DevDataText::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DevDataText";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Device Data (Binary).
    class DevDataBinary: public Message
    {
    public:
      //! Value.
      std::vector<char> value;

      static uint16_t
      getIdStatic()
      {
        return 274;
      }

      DevDataBinary();

      DevDataBinary*
      clone() const override
      {
        return new DevDataBinary(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DevDataBinary::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DevDataBinary";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Force.
    class Force: public Message
    {
    public:
      //! Measured Force.
      fp32_t x;
      //! Measured Force.
      fp32_t y;
      //! Measured Force.
      fp32_t z;

      static uint16_t
      getIdStatic()
      {
        return 275;
      }

      Force();

      Force*
      clone() const override
      {
        return new Force(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Force::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Force";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Sonar Data.
    class SonarData: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Sidescan.
        ST_SIDESCAN = 0,
        //! Echo Sounder.
        ST_ECHOSOUNDER = 1,
        //! Multibeam.
        ST_MULTIBEAM = 2
      };

      //! Type.
      uint8_t type;
      //! Frequency.
      uint32_t frequency;
      //! Minimum Range.
      uint16_t min_range;
      //! Maximum Range.
      uint16_t max_range;
      //! Bits Per Data Point.
      uint8_t bits_per_point;
      //! Scaling Factor.
      fp32_t scale_factor;
      //! Beam Configuration.
      MessageList<BeamConfig> beam_config;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 276;
      }

      SonarData();

      SonarData*
      clone() const override
      {
        return new SonarData(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SonarData::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SonarData";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 14;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return beam_config.getSerializationSize() + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Pulse.
    class Pulse: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 277;
      }

      Pulse();

      Pulse*
      clone() const override
      {
        return new Pulse(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Pulse::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Pulse";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Pulse Detection Control.
    class PulseDetectionControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Pulse Detection OFF.
        POP_OFF = 0,
        //! Pulse Detection ON.
        POP_ON = 1
      };

      //! Operation.
      uint8_t op;

      static uint16_t
      getIdStatic()
      {
        return 278;
      }

      PulseDetectionControl();

      PulseDetectionControl*
      clone() const override
      {
        return new PulseDetectionControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PulseDetectionControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PulseDetectionControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Fuel Level.
    class FuelLevel: public Message
    {
    public:
      //! Value.
      fp32_t value;
      //! Confidence Level.
      fp32_t confidence;
      //! Operation Modes.
      std::string opmodes;

      static uint16_t
      getIdStatic()
      {
        return 279;
      }

      FuelLevel();

      FuelLevel*
      clone() const override
      {
        return new FuelLevel(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FuelLevel::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FuelLevel";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(opmodes);
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! GPS Navigation Data.
    class GpsNavData: public Message
    {
    public:
      //! GPS Millisecond Time of Week.
      uint32_t itow;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Height above ellipsoid.
      fp32_t height_ell;
      //! Height above sea level.
      fp32_t height_sea;
      //! Horizontal Accuracy Estimate.
      fp32_t hacc;
      //! Vertical Accuracy Estimate.
      fp32_t vacc;
      //! NED North Velocity.
      fp32_t vel_n;
      //! NED East Velocity.
      fp32_t vel_e;
      //! NED Down Velocity.
      fp32_t vel_d;
      //! Speed (3D).
      fp32_t speed;
      //! Ground Speed (2D).
      fp32_t gspeed;
      //! Heading (2D).
      fp32_t heading;
      //! Speed Accuracy Estimate.
      fp32_t sacc;
      //! Course / Heading Accuracy Estimate.
      fp32_t cacc;

      static uint16_t
      getIdStatic()
      {
        return 280;
      }

      GpsNavData();

      GpsNavData*
      clone() const override
      {
        return new GpsNavData(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GpsNavData::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GpsNavData";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 68;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Servo Position.
    class ServoPosition: public Message
    {
    public:
      //! Identifier.
      uint8_t id;
      //! Position.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 281;
      }

      ServoPosition();

      ServoPosition*
      clone() const override
      {
        return new ServoPosition(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ServoPosition::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ServoPosition";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      uint16_t
      getSubId() const override;

      void
      setSubId(uint16_t subid) override;

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Data Sanity.
    class DataSanity: public Message
    {
    public:
      //! Sanity.
      enum SanityEnum
      {
        //! Sane.
        DS_SANE = 0,
        //! Not Sane.
        DS_NOT_SANE = 1
      };

      //! Sanity.
      uint8_t sane;

      static uint16_t
      getIdStatic()
      {
        return 284;
      }

      DataSanity();

      DataSanity*
      clone() const override
      {
        return new DataSanity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DataSanity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DataSanity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Rhodamine Dye.
    class RhodamineDye: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 285;
      }

      RhodamineDye();

      RhodamineDye*
      clone() const override
      {
        return new RhodamineDye(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RhodamineDye::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RhodamineDye";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Crude Oil.
    class CrudeOil: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 286;
      }

      CrudeOil();

      CrudeOil*
      clone() const override
      {
        return new CrudeOil(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CrudeOil::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CrudeOil";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Fine Oil.
    class FineOil: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 287;
      }

      FineOil();

      FineOil*
      clone() const override
      {
        return new FineOil(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FineOil::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FineOil";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Turbidity.
    class Turbidity: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 288;
      }

      Turbidity();

      Turbidity*
      clone() const override
      {
        return new Turbidity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Turbidity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Turbidity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Chlorophyll.
    class Chlorophyll: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 289;
      }

      Chlorophyll();

      Chlorophyll*
      clone() const override
      {
        return new Chlorophyll(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Chlorophyll::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Chlorophyll";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Fluorescein.
    class Fluorescein: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 290;
      }

      Fluorescein();

      Fluorescein*
      clone() const override
      {
        return new Fluorescein(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Fluorescein::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Fluorescein";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Phycocyanin.
    class Phycocyanin: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 291;
      }

      Phycocyanin();

      Phycocyanin*
      clone() const override
      {
        return new Phycocyanin(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Phycocyanin::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Phycocyanin";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Phycoerythrin.
    class Phycoerythrin: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 292;
      }

      Phycoerythrin();

      Phycoerythrin*
      clone() const override
      {
        return new Phycoerythrin(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Phycoerythrin::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Phycoerythrin";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! GPS Fix RTK.
    class GpsFixRtk: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! None.
        RTK_NONE = 0x00,
        //! Obs.
        RTK_OBS = 0x01,
        //! Float.
        RTK_FLOAT = 0x02,
        //! Fixed.
        RTK_FIXED = 0x03
      };

      //! Validity.
      enum ValidityBits
      {
        //! Valid Time.
        RFV_VALID_TIME = 0x0001,
        //! Valid Base LLH.
        RFV_VALID_BASE = 0x0002,
        //! Valid Position.
        RFV_VALID_POS = 0x0004,
        //! Valid Velocity.
        RFV_VALID_VEL = 0x0008
      };

      //! Validity.
      uint16_t validity;
      //! Type.
      uint8_t type;
      //! GPS Time of Week.
      uint32_t tow;
      //! Base Latitude WGS-84.
      fp64_t base_lat;
      //! Base Longitude WGS-84.
      fp64_t base_lon;
      //! Base Height above WGS-84 ellipsoid.
      fp32_t base_height;
      //! Position North.
      fp32_t n;
      //! Position East.
      fp32_t e;
      //! Position Down.
      fp32_t d;
      //! Velocity North.
      fp32_t v_n;
      //! Velocity East.
      fp32_t v_e;
      //! Velocity Down.
      fp32_t v_d;
      //! Number of Satellites.
      uint8_t satellites;
      //! IAR Hypotheses.
      uint16_t iar_hyp;
      //! IAR Ratio.
      fp32_t iar_ratio;

      static uint16_t
      getIdStatic()
      {
        return 293;
      }

      GpsFixRtk();

      GpsFixRtk*
      clone() const override
      {
        return new GpsFixRtk(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GpsFixRtk::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GpsFixRtk";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 58;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Estimated State.
    class EstimatedState: public Message
    {
    public:
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Height (WGS-84).
      fp32_t height;
      //! Offset north.
      fp32_t x;
      //! Offset east.
      fp32_t y;
      //! Offset down.
      fp32_t z;
      //! Rotation over x axis.
      fp32_t phi;
      //! Rotation over y axis.
      fp32_t theta;
      //! Rotation over z axis.
      fp32_t psi;
      //! Body-Fixed xx Velocity.
      fp32_t u;
      //! Body-Fixed yy Velocity.
      fp32_t v;
      //! Body-Fixed zz Velocity.
      fp32_t w;
      //! Ground Velocity X (North).
      fp32_t vx;
      //! Ground Velocity Y (East).
      fp32_t vy;
      //! Ground Velocity Z (Down).
      fp32_t vz;
      //! Angular Velocity in x.
      fp32_t p;
      //! Angular Velocity in y.
      fp32_t q;
      //! Angular Velocity in z.
      fp32_t r;
      //! Depth.
      fp32_t depth;
      //! Altitude.
      fp32_t alt;

      static uint16_t
      getIdStatic()
      {
        return 350;
      }

      EstimatedState();

      EstimatedState*
      clone() const override
      {
        return new EstimatedState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EstimatedState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EstimatedState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 88;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! External Navigation Data.
    class ExternalNavData: public Message
    {
    public:
      //! Nav Data Type.
      enum NavDataTypeEnum
      {
        //! Full State.
        EXTNAV_FULL = 0,
        //! Attitude Heading Reference System Only.
        EXTNAV_AHRS = 1,
        //! Position Reference System only.
        EXTNAV_POSREF = 2
      };

      //! Estimated State.
      InlineMessage<EstimatedState> state;
      //! Nav Data Type.
      uint8_t type;

      static uint16_t
      getIdStatic()
      {
        return 294;
      }

      ExternalNavData();

      ExternalNavData*
      clone() const override
      {
        return new ExternalNavData(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ExternalNavData::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ExternalNavData";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return state.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Dissolved Oxygen.
    class DissolvedOxygen: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 295;
      }

      DissolvedOxygen();

      DissolvedOxygen*
      clone() const override
      {
        return new DissolvedOxygen(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DissolvedOxygen::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DissolvedOxygen";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Air Saturation.
    class AirSaturation: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 296;
      }

      AirSaturation();

      AirSaturation*
      clone() const override
      {
        return new AirSaturation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AirSaturation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AirSaturation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Throttle.
    class Throttle: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 297;
      }

      Throttle();

      Throttle*
      clone() const override
      {
        return new Throttle(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Throttle::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Throttle";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! pH.
    class PH: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 298;
      }

      PH();

      PH*
      clone() const override
      {
        return new PH(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PH::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PH";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Redox Potential.
    class Redox: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 299;
      }

      Redox();

      Redox*
      clone() const override
      {
        return new Redox(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Redox::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Redox";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Camera Zoom.
    class CameraZoom: public Message
    {
    public:
      //! Action.
      enum ActionEnum
      {
        //! Reset Zoom.
        ACTION_ZOOM_RESET = 0,
        //! Zoom In.
        ACTION_ZOOM_IN = 1,
        //! Zoom Out.
        ACTION_ZOOM_OUT = 2,
        //! Stop Zooming.
        ACTION_ZOOM_STOP = 3
      };

      //! Camera Number.
      uint8_t id;
      //! Absolute Zoom Level.
      uint8_t zoom;
      //! Action.
      uint8_t action;

      static uint16_t
      getIdStatic()
      {
        return 300;
      }

      CameraZoom();

      CameraZoom*
      clone() const override
      {
        return new CameraZoom(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CameraZoom::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CameraZoom";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 3;
      }

      uint16_t
      getSubId() const override;

      void
      setSubId(uint16_t subid) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Set Thruster Actuation.
    class SetThrusterActuation: public Message
    {
    public:
      //! Thruster Number.
      uint8_t id;
      //! Actuation Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 301;
      }

      SetThrusterActuation();

      SetThrusterActuation*
      clone() const override
      {
        return new SetThrusterActuation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SetThrusterActuation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SetThrusterActuation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      uint16_t
      getSubId() const override;

      void
      setSubId(uint16_t subid) override;

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Set Servo Position.
    class SetServoPosition: public Message
    {
    public:
      //! Identifier.
      uint8_t id;
      //! Position.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 302;
      }

      SetServoPosition();

      SetServoPosition*
      clone() const override
      {
        return new SetServoPosition(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SetServoPosition::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SetServoPosition";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      uint16_t
      getSubId() const override;

      void
      setSubId(uint16_t subid) override;

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Set Control Surface Deflection.
    class SetControlSurfaceDeflection: public Message
    {
    public:
      //! Identifier.
      uint8_t id;
      //! Angle.
      fp32_t angle;

      static uint16_t
      getIdStatic()
      {
        return 303;
      }

      SetControlSurfaceDeflection();

      SetControlSurfaceDeflection*
      clone() const override
      {
        return new SetControlSurfaceDeflection(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SetControlSurfaceDeflection::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SetControlSurfaceDeflection";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      uint16_t
      getSubId() const override;

      void
      setSubId(uint16_t subid) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Remote Actions Request.
    class RemoteActionsRequest: public Message
    {
    public:
      //! operation.
      enum operationEnum
      {
        //! Report.
        OP_REPORT = 0,
        //! Query.
        OP_QUERY = 1
      };

      //! operation.
      uint8_t op;
      //! Actions.
      std::string actions;

      static uint16_t
      getIdStatic()
      {
        return 304;
      }

      RemoteActionsRequest();

      RemoteActionsRequest*
      clone() const override
      {
        return new RemoteActionsRequest(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RemoteActionsRequest::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RemoteActionsRequest";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(actions);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Remote Actions.
    class RemoteActions: public Message
    {
    public:
      //! Actions.
      std::string actions;

      static uint16_t
      getIdStatic()
      {
        return 305;
      }

      RemoteActions();

      RemoteActions*
      clone() const override
      {
        return new RemoteActions(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RemoteActions::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RemoteActions";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(actions);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Button Event.
    class ButtonEvent: public Message
    {
    public:
      //! Button.
      uint8_t button;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic()
      {
        return 306;
      }

      ButtonEvent();

      ButtonEvent*
      clone() const override
      {
        return new ButtonEvent(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ButtonEvent::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ButtonEvent";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! LCD Control.
    class LcdControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Turn off display.
        OP_TURN_OFF = 0,
        //! Turn on display.
        OP_TURN_ON = 1,
        //! Clear display.
        OP_CLEAR = 2,
        //! Write Line #0.
        OP_WRITE0 = 3,
        //! Write Line #1.
        OP_WRITE1 = 4
      };

      //! Operation.
      uint8_t op;
      //! Text.
      std::string text;

      static uint16_t
      getIdStatic()
      {
        return 307;
      }

      LcdControl();

      LcdControl*
      clone() const override
      {
        return new LcdControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LcdControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LcdControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Power Operation.
    class PowerOperation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Power Down.
        POP_PWR_DOWN = 0,
        //! Power Down in Progress.
        POP_PWR_DOWN_IP = 1,
        //! Power Down Aborted.
        POP_PWR_DOWN_ABORTED = 2,
        //! Schedule Power Down.
        POP_SCHED_PWR_DOWN = 3,
        //! Power Up.
        POP_PWR_UP = 4,
        //! Power Up in Progress.
        POP_PWR_UP_IP = 5,
        //! Schedule Power Up.
        POP_SCHED_PWR_UP = 6
      };

      //! Operation.
      uint8_t op;
      //! Time Remaining.
      fp32_t time_remain;
      //! Scheduled Time.
      fp64_t sched_time;

      static uint16_t
      getIdStatic()
      {
        return 308;
      }

      PowerOperation();

      PowerOperation*
      clone() const override
      {
        return new PowerOperation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PowerOperation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PowerOperation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 13;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Power Channel Control.
    class PowerChannelControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Turn Off.
        PCC_OP_TURN_OFF = 0,
        //! Turn On.
        PCC_OP_TURN_ON = 1,
        //! Toggle.
        PCC_OP_TOGGLE = 2,
        //! Schedule Turn On.
        PCC_OP_SCHED_ON = 3,
        //! Schedule Turn Off.
        PCC_OP_SCHED_OFF = 4,
        //! Reset Schedules.
        PCC_OP_SCHED_RESET = 5,
        //! Save Current State.
        PCC_OP_SAVE = 6,
        //! Restart.
        PCC_OP_RESTART = 7
      };

      //! Channel Name.
      std::string name;
      //! Operation.
      uint8_t op;
      //! Scheduled Time.
      fp64_t sched_time;

      static uint16_t
      getIdStatic()
      {
        return 309;
      }

      PowerChannelControl();

      PowerChannelControl*
      clone() const override
      {
        return new PowerChannelControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PowerChannelControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PowerChannelControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 9;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Query Power Channel State.
    class QueryPowerChannelState: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 310;
      }

      QueryPowerChannelState();

      QueryPowerChannelState*
      clone() const override
      {
        return new QueryPowerChannelState(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return QueryPowerChannelState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "QueryPowerChannelState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Power Channel State.
    class PowerChannelState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Off.
        PCS_OFF = 0,
        //! On.
        PCS_ON = 1
      };

      //! Name.
      std::string name;
      //! State.
      uint8_t state;

      static uint16_t
      getIdStatic()
      {
        return 311;
      }

      PowerChannelState();

      PowerChannelState*
      clone() const override
      {
        return new PowerChannelState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PowerChannelState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PowerChannelState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! LED Brightness.
    class LedBrightness: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic()
      {
        return 312;
      }

      LedBrightness();

      LedBrightness*
      clone() const override
      {
        return new LedBrightness(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LedBrightness::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LedBrightness";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Query LED Brightness.
    class QueryLedBrightness: public Message
    {
    public:
      //! Name.
      std::string name;

      static uint16_t
      getIdStatic()
      {
        return 313;
      }

      QueryLedBrightness();

      QueryLedBrightness*
      clone() const override
      {
        return new QueryLedBrightness(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return QueryLedBrightness::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "QueryLedBrightness";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Set LED Brightness.
    class SetLedBrightness: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic()
      {
        return 314;
      }

      SetLedBrightness();

      SetLedBrightness*
      clone() const override
      {
        return new SetLedBrightness(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SetLedBrightness::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SetLedBrightness";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Set PWM.
    class SetPWM: public Message
    {
    public:
      //! Channel Identifier.
      uint8_t id;
      //! Period.
      uint32_t period;
      //! Duty Cycle.
      uint32_t duty_cycle;

      static uint16_t
      getIdStatic()
      {
        return 315;
      }

      SetPWM();

      SetPWM*
      clone() const override
      {
        return new SetPWM(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SetPWM::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SetPWM";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 9;
      }

      uint16_t
      getSubId() const override;

      void
      setSubId(uint16_t subid) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! PWM.
    class PWM: public Message
    {
    public:
      //! Channel Identifier.
      uint8_t id;
      //! Period.
      uint32_t period;
      //! Duty Cycle.
      uint32_t duty_cycle;

      static uint16_t
      getIdStatic()
      {
        return 316;
      }

      PWM();

      PWM*
      clone() const override
      {
        return new PWM(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PWM::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PWM";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 9;
      }

      uint16_t
      getSubId() const override;

      void
      setSubId(uint16_t subid) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Estimated Stream Velocity.
    class EstimatedStreamVelocity: public Message
    {
    public:
      //! X component (North).
      fp64_t x;
      //! Y component (East).
      fp64_t y;
      //! Z component (Down).
      fp64_t z;

      static uint16_t
      getIdStatic()
      {
        return 351;
      }

      EstimatedStreamVelocity();

      EstimatedStreamVelocity*
      clone() const override
      {
        return new EstimatedStreamVelocity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EstimatedStreamVelocity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EstimatedStreamVelocity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 24;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Indicated Speed.
    class IndicatedSpeed: public Message
    {
    public:
      //! Measured speed.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 352;
      }

      IndicatedSpeed();

      IndicatedSpeed*
      clone() const override
      {
        return new IndicatedSpeed(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return IndicatedSpeed::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "IndicatedSpeed";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! True Speed.
    class TrueSpeed: public Message
    {
    public:
      //! Estimated value.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 353;
      }

      TrueSpeed();

      TrueSpeed*
      clone() const override
      {
        return new TrueSpeed(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TrueSpeed::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TrueSpeed";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Navigation Uncertainty.
    class NavigationUncertainty: public Message
    {
    public:
      //! Variance - x Position.
      fp32_t x;
      //! Variance - y Position.
      fp32_t y;
      //! Variance - z Position.
      fp32_t z;
      //! Variance - Roll.
      fp32_t phi;
      //! Variance - Pitch.
      fp32_t theta;
      //! Variance - Yaw.
      fp32_t psi;
      //! Variance - Gyro. Roll Rate.
      fp32_t p;
      //! Variance - Gyro. Pitch Rate.
      fp32_t q;
      //! Variance - Gyro. Yaw Rate.
      fp32_t r;
      //! Variance - Body-Fixed xx Velocity.
      fp32_t u;
      //! Variance - Body-Fixed yy Velocity.
      fp32_t v;
      //! Variance - Body-Fixed ww Velocity.
      fp32_t w;
      //! Variance - Yaw Bias.
      fp32_t bias_psi;
      //! Variance - Gyro. Yaw Rate Bias.
      fp32_t bias_r;

      static uint16_t
      getIdStatic()
      {
        return 354;
      }

      NavigationUncertainty();

      NavigationUncertainty*
      clone() const override
      {
        return new NavigationUncertainty(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return NavigationUncertainty::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "NavigationUncertainty";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 56;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Navigation Data.
    class NavigationData: public Message
    {
    public:
      //! Yaw Bias.
      fp32_t bias_psi;
      //! Gyro. Yaw Rate Bias.
      fp32_t bias_r;
      //! Course Over Ground.
      fp32_t cog;
      //! Continuous Yaw.
      fp32_t cyaw;
      //! GPS Rejection Filter Level.
      fp32_t lbl_rej_level;
      //! LBL Rejection Filter Level.
      fp32_t gps_rej_level;
      //! Variance - Custom Variable X.
      fp32_t custom_x;
      //! Variance - Custom Variable Y.
      fp32_t custom_y;
      //! Variance - Custom Variable Z.
      fp32_t custom_z;

      static uint16_t
      getIdStatic()
      {
        return 355;
      }

      NavigationData();

      NavigationData*
      clone() const override
      {
        return new NavigationData(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return NavigationData::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "NavigationData";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 36;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! GPS Fix Rejection.
    class GpsFixRejection: public Message
    {
    public:
      //! Reason.
      enum ReasonEnum
      {
        //! Above Threshold.
        RR_ABOVE_THRESHOLD = 0,
        //! Invalid Fix.
        RR_INVALID = 1,
        //! Above Maximum HDOP.
        RR_ABOVE_MAX_HDOP = 2,
        //! Above Maximum HACC.
        RR_ABOVE_MAX_HACC = 3,
        //! Lost Validity Bit.
        RR_LOST_VAL_BIT = 4
      };

      //! UTC Time of Fix.
      fp32_t utc_time;
      //! Reason.
      uint8_t reason;

      static uint16_t
      getIdStatic()
      {
        return 356;
      }

      GpsFixRejection();

      GpsFixRejection*
      clone() const override
      {
        return new GpsFixRejection(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GpsFixRejection::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GpsFixRejection";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! LBL Range Acceptance.
    class LblRangeAcceptance: public Message
    {
    public:
      //! Acceptance.
      enum AcceptanceEnum
      {
        //! Accepted.
        RR_ACCEPTED = 0,
        //! Rejected - Above Threshold.
        RR_ABOVE_THRESHOLD = 1,
        //! Rejected - Singular Point.
        RR_SINGULAR = 2,
        //! Rejected - Not Enough Information.
        RR_NO_INFO = 3,
        //! Rejected - Vehicle At Surface.
        RR_AT_SURFACE = 4
      };

      //! Beacon Identification Number.
      uint8_t id;
      //! Range.
      fp32_t range;
      //! Acceptance.
      uint8_t acceptance;

      static uint16_t
      getIdStatic()
      {
        return 357;
      }

      LblRangeAcceptance();

      LblRangeAcceptance*
      clone() const override
      {
        return new LblRangeAcceptance(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LblRangeAcceptance::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LblRangeAcceptance";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 6;
      }

      uint16_t
      getSubId() const override;

      void
      setSubId(uint16_t subid) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! DVL Rejection.
    class DvlRejection: public Message
    {
    public:
      //! Reason.
      enum ReasonEnum
      {
        //! Innovation Threshold - X.
        RR_INNOV_THRESHOLD_X = 0,
        //! Innovation Threshold - Y.
        RR_INNOV_THRESHOLD_Y = 1,
        //! Absolute Threshold - X.
        RR_ABS_THRESHOLD_X = 2,
        //! Absolute Threshold - Y.
        RR_ABS_THRESHOLD_Y = 3
      };

      //! Type of velocity.
      enum TypeofvelocityBits
      {
        //! Ground velocity.
        TYPE_GV = 0x01,
        //! Water velocity.
        TYPE_WV = 0x02
      };

      //! Type of velocity.
      uint8_t type;
      //! Reason.
      uint8_t reason;
      //! Value.
      fp32_t value;
      //! Timestep.
      fp32_t timestep;

      static uint16_t
      getIdStatic()
      {
        return 358;
      }

      DvlRejection();

      DvlRejection*
      clone() const override
      {
        return new DvlRejection(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DvlRejection::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DvlRejection";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 10;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! LBL Beacon Position Estimate.
    class LblEstimate: public Message
    {
    public:
      //! LBL Beacon Configuration.
      InlineMessage<LblBeacon> beacon;
      //! North position.
      fp32_t x;
      //! East position.
      fp32_t y;
      //! North position variance.
      fp32_t var_x;
      //! East position variance.
      fp32_t var_y;
      //! Distance.
      fp32_t distance;

      static uint16_t
      getIdStatic()
      {
        return 360;
      }

      LblEstimate();

      LblEstimate*
      clone() const override
      {
        return new LblEstimate(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LblEstimate::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LblEstimate";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 20;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return beacon.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Alignment State.
    class AlignmentState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Not Aligned.
        AS_NOT_ALIGNED = 0,
        //! Aligned.
        AS_ALIGNED = 1,
        //! Not Supported.
        AS_NOT_SUPPORTED = 2,
        //! Aligning.
        AS_ALIGNING = 3,
        //! Wrong Medium.
        AS_WRONG_MEDIUM = 4,
        //! Coarse Alignment.
        AS_COARSE_ALIGNMENT = 5,
        //! Fine Alignment.
        AS_FINE_ALIGNMENT = 6,
        //! System Ready.
        AS_SYSTEM_READY = 7
      };

      //! State.
      uint8_t state;

      static uint16_t
      getIdStatic()
      {
        return 361;
      }

      AlignmentState();

      AlignmentState*
      clone() const override
      {
        return new AlignmentState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AlignmentState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AlignmentState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! GroupStreamVelocity.
    class GroupStreamVelocity: public Message
    {
    public:
      //! X component (North).
      fp64_t x;
      //! Y component (East).
      fp64_t y;
      //! Z component (Down).
      fp64_t z;

      static uint16_t
      getIdStatic()
      {
        return 362;
      }

      GroupStreamVelocity();

      GroupStreamVelocity*
      clone() const override
      {
        return new GroupStreamVelocity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GroupStreamVelocity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GroupStreamVelocity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 24;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Airflow.
    class Airflow: public Message
    {
    public:
      //! Airspeed.
      fp32_t va;
      //! Angle of attack.
      fp32_t aoa;
      //! Sideslip angle.
      fp32_t ssa;

      static uint16_t
      getIdStatic()
      {
        return 363;
      }

      Airflow();

      Airflow*
      clone() const override
      {
        return new Airflow(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Airflow::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Airflow";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Heading.
    class DesiredHeading: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 400;
      }

      DesiredHeading();

      DesiredHeading*
      clone() const override
      {
        return new DesiredHeading(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredHeading::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredHeading";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Z.
    class DesiredZ: public ControlCommand
    {
    public:
      //! Value.
      fp32_t value;
      //! Z Units.
      uint8_t z_units;

      static uint16_t
      getIdStatic()
      {
        return 401;
      }

      DesiredZ();

      DesiredZ*
      clone() const override
      {
        return new DesiredZ(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredZ::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredZ";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Speed.
    class DesiredSpeed: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;
      //! Speed Units.
      uint8_t speed_units;

      static uint16_t
      getIdStatic()
      {
        return 402;
      }

      DesiredSpeed();

      DesiredSpeed*
      clone() const override
      {
        return new DesiredSpeed(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredSpeed::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredSpeed";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 9;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Roll.
    class DesiredRoll: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 403;
      }

      DesiredRoll();

      DesiredRoll*
      clone() const override
      {
        return new DesiredRoll(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredRoll::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredRoll";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Pitch.
    class DesiredPitch: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 404;
      }

      DesiredPitch();

      DesiredPitch*
      clone() const override
      {
        return new DesiredPitch(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredPitch::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredPitch";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Vertical Rate.
    class DesiredVerticalRate: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 405;
      }

      DesiredVerticalRate();

      DesiredVerticalRate*
      clone() const override
      {
        return new DesiredVerticalRate(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredVerticalRate::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredVerticalRate";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Path.
    class DesiredPath: public ControlCommand
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Start Point.
        FL_START = 0x01,
        //! Direct.
        FL_DIRECT = 0x02,
        //! No Altitude/Depth control.
        FL_NO_Z = 0x04,
        //! 3D Tracking.
        FL_3DTRACK = 0x08,
        //! Counter-Clockwise loiter.
        FL_CCLOCKW = 0x10,
        //! Loiter from current position.
        FL_LOITER_CURR = 0x20,
        //! Takeoff.
        FL_TAKEOFF = 0x40,
        //! Land.
        FL_LAND = 0x80
      };

      //! Path Reference.
      uint32_t path_ref;
      //! Start Point -- Latitude WGS-84.
      fp64_t start_lat;
      //! Start Point -- WGS-84 Longitude.
      fp64_t start_lon;
      //! Start Point -- Z Reference.
      fp32_t start_z;
      //! Start Point -- Z Units.
      uint8_t start_z_units;
      //! End Point -- WGS84 Latitude.
      fp64_t end_lat;
      //! End Point -- WGS-84 Longitude.
      fp64_t end_lon;
      //! End Point -- Z Reference.
      fp32_t end_z;
      //! End Point -- Z Units.
      uint8_t end_z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Loiter -- Radius.
      fp32_t lradius;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic()
      {
        return 406;
      }

      DesiredPath();

      DesiredPath*
      clone() const override
      {
        return new DesiredPath(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredPath::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredPath";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 56;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Control.
    class DesiredControl: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Value of X is meaningful.
        FL_X = 0x01,
        //! Value of Y is meaningful.
        FL_Y = 0x02,
        //! Value of Z is meaningful.
        FL_Z = 0x04,
        //! Value of K is meaningful.
        FL_K = 0x08,
        //! Value of M is meaningful.
        FL_M = 0x10,
        //! Value of N is meaningful.
        FL_N = 0x20
      };

      //! Force along the x axis.
      fp64_t x;
      //! Force along the y axis.
      fp64_t y;
      //! Force along the z axis.
      fp64_t z;
      //! Torque about the x axis.
      fp64_t k;
      //! Torque about the y axis.
      fp64_t m;
      //! Torque about the z axis.
      fp64_t n;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic()
      {
        return 407;
      }

      DesiredControl();

      DesiredControl*
      clone() const override
      {
        return new DesiredControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 49;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Heading Rate.
    class DesiredHeadingRate: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 408;
      }

      DesiredHeadingRate();

      DesiredHeadingRate*
      clone() const override
      {
        return new DesiredHeadingRate(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredHeadingRate::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredHeadingRate";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Velocity.
    class DesiredVelocity: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Value of u is meaningful.
        FL_SURGE = 0x01,
        //! Value of v is meaningful.
        FL_SWAY = 0x02,
        //! Value of w is meaningful.
        FL_HEAVE = 0x04,
        //! Value of p is meaningful.
        FL_ROLL = 0x08,
        //! Value of q is meaningful.
        FL_PITCH = 0x10,
        //! Value of r is meaningful.
        FL_YAW = 0x20
      };

      //! Desired Linear Speed in xx.
      fp64_t u;
      //! Desired Linear Speed in yy.
      fp64_t v;
      //! Desired Linear Speed in zz.
      fp64_t w;
      //! Desired Angular Speed in xx.
      fp64_t p;
      //! Desired Angular Speed in yy.
      fp64_t q;
      //! Desired Angular Speed in zz.
      fp64_t r;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic()
      {
        return 409;
      }

      DesiredVelocity();

      DesiredVelocity*
      clone() const override
      {
        return new DesiredVelocity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredVelocity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredVelocity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 49;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Path Control State.
    class PathControlState: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Near Endpoint.
        FL_NEAR = 0x01,
        //! Loitering.
        FL_LOITERING = 0x02,
        //! No Altitude/Depth control.
        FL_NO_Z = 0x04,
        //! 3D Tracking.
        FL_3DTRACK = 0x08,
        //! Counter-Clockwise loiter.
        FL_CCLOCKW = 0x10
      };

      //! Path Reference.
      uint32_t path_ref;
      //! Start Point -- Latitude WGS-84.
      fp64_t start_lat;
      //! Start Point -- WGS-84 Longitude.
      fp64_t start_lon;
      //! Start Point -- Z Reference.
      fp32_t start_z;
      //! Start Point -- Z Units.
      uint8_t start_z_units;
      //! End Point -- Latitude WGS-84.
      fp64_t end_lat;
      //! End Point -- WGS-84 Longitude.
      fp64_t end_lon;
      //! End Point -- Z Reference.
      fp32_t end_z;
      //! End Point -- Z Units.
      uint8_t end_z_units;
      //! Loiter -- Radius.
      fp32_t lradius;
      //! Flags.
      uint8_t flags;
      //! Along Track Position.
      fp32_t x;
      //! Cross Track Position.
      fp32_t y;
      //! Vertical Track Position.
      fp32_t z;
      //! Along Track Velocity.
      fp32_t vx;
      //! Cross Track Velocity.
      fp32_t vy;
      //! Vertical Track Velocity.
      fp32_t vz;
      //! Course Error.
      fp32_t course_error;
      //! Estimated Time to Arrival (ETA).
      uint16_t eta;

      static uint16_t
      getIdStatic()
      {
        return 410;
      }

      PathControlState();

      PathControlState*
      clone() const override
      {
        return new PathControlState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PathControlState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PathControlState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 81;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Allocated Control Torques.
    class AllocatedControlTorques: public Message
    {
    public:
      //! Torque about the x axis.
      fp64_t k;
      //! Torque about the y axis.
      fp64_t m;
      //! Torque about the x axis.
      fp64_t n;

      static uint16_t
      getIdStatic()
      {
        return 411;
      }

      AllocatedControlTorques();

      AllocatedControlTorques*
      clone() const override
      {
        return new AllocatedControlTorques(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AllocatedControlTorques::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AllocatedControlTorques";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 24;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Control Parcel.
    class ControlParcel: public Message
    {
    public:
      //! Proportional Parcel.
      fp32_t p;
      //! Integrative Parcel.
      fp32_t i;
      //! Derivative Parcel.
      fp32_t d;
      //! Anti-Windup Parcel.
      fp32_t a;

      static uint16_t
      getIdStatic()
      {
        return 412;
      }

      ControlParcel();

      ControlParcel*
      clone() const override
      {
        return new ControlParcel(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ControlParcel::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ControlParcel";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 16;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Brake.
    class Brake: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Stop Braking.
        OP_STOP = 0,
        //! Start Braking.
        OP_START = 1,
        //! Revert Actuation.
        OP_REVERT = 2
      };

      //! Operation.
      uint8_t op;

      static uint16_t
      getIdStatic()
      {
        return 413;
      }

      Brake();

      Brake*
      clone() const override
      {
        return new Brake(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Brake::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Brake";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Linear State.
    class DesiredLinearState: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Value of x is meaningful.
        FL_X = 0x0001,
        //! Value of y is meaningful.
        FL_Y = 0x0002,
        //! Value of z is meaningful.
        FL_Z = 0x0004,
        //! Value of vx is meaningful.
        FL_VX = 0x0008,
        //! Value of vy is meaningful.
        FL_VY = 0x0010,
        //! Value of vz is meaningful.
        FL_VZ = 0x0020,
        //! Value of ax is meaningful.
        FL_AX = 0x0040,
        //! Value of ay is meaningful.
        FL_AY = 0x0080,
        //! Value of az is meaningful.
        FL_AZ = 0x0100
      };

      //! Desired pos in xx.
      fp64_t x;
      //! Desired pos in yy.
      fp64_t y;
      //! Desired pos in zz.
      fp64_t z;
      //! Desired Linear Speed in xx.
      fp64_t vx;
      //! Desired Linear Speed in yy.
      fp64_t vy;
      //! Desired Linear Speed in zz.
      fp64_t vz;
      //! Desired Linear Acceleration in xx.
      fp64_t ax;
      //! Desired Linear Acceleration in yy.
      fp64_t ay;
      //! Desired Linear Acceleration in zz.
      fp64_t az;
      //! Flags.
      uint16_t flags;

      static uint16_t
      getIdStatic()
      {
        return 414;
      }

      DesiredLinearState();

      DesiredLinearState*
      clone() const override
      {
        return new DesiredLinearState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredLinearState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredLinearState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 74;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Desired Throttle.
    class DesiredThrottle: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 415;
      }

      DesiredThrottle();

      DesiredThrottle*
      clone() const override
      {
        return new DesiredThrottle(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DesiredThrottle::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DesiredThrottle";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Goto Maneuver.
    class Goto: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Roll.
      fp64_t roll;
      //! Pitch.
      fp64_t pitch;
      //! Yaw.
      fp64_t yaw;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 450;
      }

      Goto();

      Goto*
      clone() const override
      {
        return new Goto(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Goto::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Goto";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 52;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! PopUp Maneuver.
    class PopUp: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Start from current position.
        FLG_CURR_POS = 0x01,
        //! Wait at surface.
        FLG_WAIT_AT_SURFACE = 0x02,
        //! Station keeping.
        FLG_STATION_KEEP = 0x04
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Duration.
      uint16_t duration;
      //! Radius.
      fp32_t radius;
      //! Flags.
      uint8_t flags;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 451;
      }

      PopUp();

      PopUp*
      clone() const override
      {
        return new PopUp(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PopUp::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PopUp";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 35;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Teleoperation Maneuver.
    class Teleoperation: public Maneuver
    {
    public:
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 452;
      }

      Teleoperation();

      Teleoperation*
      clone() const override
      {
        return new Teleoperation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Teleoperation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Teleoperation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Loiter Maneuver.
    class Loiter: public Maneuver
    {
    public:
      //! Loiter Type.
      enum LoiterTypeEnum
      {
        //! Default.
        LT_DEFAULT = 0,
        //! Circular.
        LT_CIRCULAR = 1,
        //! Race track.
        LT_RACETRACK = 2,
        //! Figure 8.
        LT_EIGHT = 3,
        //! Hover.
        LT_HOVER = 4
      };

      //! Direction.
      enum DirectionEnum
      {
        //! Vehicle Dependent.
        LD_VDEP = 0,
        //! Clockwise.
        LD_CLOCKW = 1,
        //! Counter Clockwise.
        LD_CCLOCKW = 2,
        //! Into the wind/current.
        LD_IWINDCURR = 3
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Loiter Type.
      uint8_t type;
      //! Radius.
      fp32_t radius;
      //! Length.
      fp32_t length;
      //! Bearing.
      fp64_t bearing;
      //! Direction.
      uint8_t direction;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 453;
      }

      Loiter();

      Loiter*
      clone() const override
      {
        return new Loiter(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Loiter::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Loiter";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 48;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Idle Maneuver.
    class IdleManeuver: public Maneuver
    {
    public:
      //! Duration.
      uint16_t duration;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 454;
      }

      IdleManeuver();

      IdleManeuver*
      clone() const override
      {
        return new IdleManeuver(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return IdleManeuver::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "IdleManeuver";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Low Level Control Maneuver.
    class LowLevelControl: public Maneuver
    {
    public:
      //! Control.
      InlineMessage<ControlCommand> control;
      //! Duration.
      uint16_t duration;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 455;
      }

      LowLevelControl();

      LowLevelControl*
      clone() const override
      {
        return new LowLevelControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LowLevelControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LowLevelControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return control.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Rows Maneuver.
    class Rows: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Square Curve.
        FLG_SQUARE_CURVE = 0x0001,
        //! First Curve Right.
        FLG_CURVE_RIGHT = 0x0002
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Bearing.
      fp64_t bearing;
      //! Cross Angle.
      fp64_t cross_angle;
      //! Width.
      fp32_t width;
      //! Length.
      fp32_t length;
      //! Horizontal Step.
      fp32_t hstep;
      //! Curve Offset.
      uint8_t coff;
      //! Alternation Parameter.
      uint8_t alternation;
      //! Flags.
      uint8_t flags;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 456;
      }

      Rows();

      Rows*
      clone() const override
      {
        return new Rows(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Rows::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Rows";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 59;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Path Point.
    class PathPoint: public Message
    {
    public:
      //! North Offset (m).
      fp32_t x;
      //! East Offset (m).
      fp32_t y;
      //! Down Offset (m).
      fp32_t z;

      static uint16_t
      getIdStatic()
      {
        return 458;
      }

      PathPoint();

      PathPoint*
      clone() const override
      {
        return new PathPoint(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PathPoint::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PathPoint";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Follow Path Maneuver.
    class FollowPath: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Path Points.
      MessageList<PathPoint> points;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 457;
      }

      FollowPath();

      FollowPath*
      clone() const override
      {
        return new FollowPath(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FollowPath::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FollowPath";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 28;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return points.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Yo-Yo Maneuver.
    class YoYo: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Amplitude.
      fp32_t amplitude;
      //! Pitch Angle.
      fp32_t pitch;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 459;
      }

      YoYo();

      YoYo*
      clone() const override
      {
        return new YoYo(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return YoYo::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "YoYo";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 36;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Teleoperation Done.
    class TeleoperationDone: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 460;
      }

      TeleoperationDone();

      TeleoperationDone*
      clone() const override
      {
        return new TeleoperationDone(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TeleoperationDone::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TeleoperationDone";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Station Keeping.
    class StationKeeping: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Radius.
      fp32_t radius;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 461;
      }

      StationKeeping();

      StationKeeping*
      clone() const override
      {
        return new StationKeeping(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return StationKeeping::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "StationKeeping";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 32;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Elevator Maneuver.
    class Elevator: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Start from current position.
        FLG_CURR_POS = 0x01
      };

      //! Timeout.
      uint16_t timeout;
      //! Flags.
      uint8_t flags;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Start Point -- Z Reference.
      fp32_t start_z;
      //! Start Point -- Z Units.
      uint8_t start_z_units;
      //! End Point -- Z Reference.
      fp32_t end_z;
      //! End Point -- Z Units.
      uint8_t end_z_units;
      //! Radius.
      fp32_t radius;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 462;
      }

      Elevator();

      Elevator*
      clone() const override
      {
        return new Elevator(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Elevator::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Elevator";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 38;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Trajectory Point.
    class TrajectoryPoint: public Message
    {
    public:
      //! North Offset (m).
      fp32_t x;
      //! East Offset (m).
      fp32_t y;
      //! Down Offset (m).
      fp32_t z;
      //! Time Offset (s).
      fp32_t t;

      static uint16_t
      getIdStatic()
      {
        return 464;
      }

      TrajectoryPoint();

      TrajectoryPoint*
      clone() const override
      {
        return new TrajectoryPoint(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TrajectoryPoint::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TrajectoryPoint";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 16;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Follow Trajectory.
    class FollowTrajectory: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Trajectory Points.
      MessageList<TrajectoryPoint> points;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 463;
      }

      FollowTrajectory();

      FollowTrajectory*
      clone() const override
      {
        return new FollowTrajectory(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FollowTrajectory::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FollowTrajectory";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 28;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return points.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Custom Maneuver.
    class CustomManeuver: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Maneuver Name.
      std::string name;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 465;
      }

      CustomManeuver();

      CustomManeuver*
      clone() const override
      {
        return new CustomManeuver(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CustomManeuver::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CustomManeuver";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name) + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Vehicle Formation Participant.
    class VehicleFormationParticipant: public Message
    {
    public:
      //! ID (IMC address).
      uint16_t vid;
      //! Formation offset -- Along-track.
      fp32_t off_x;
      //! Formation offset -- Cross-track.
      fp32_t off_y;
      //! Formation offset -- Depth/Altitude.
      fp32_t off_z;

      static uint16_t
      getIdStatic()
      {
        return 467;
      }

      VehicleFormationParticipant();

      VehicleFormationParticipant*
      clone() const override
      {
        return new VehicleFormationParticipant(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return VehicleFormationParticipant::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "VehicleFormationParticipant";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 14;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Vehicle Formation.
    class VehicleFormation: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Trajectory Points.
      MessageList<TrajectoryPoint> points;
      //! Formation Participants.
      MessageList<VehicleFormationParticipant> participants;
      //! Start Time.
      fp64_t start_time;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 466;
      }

      VehicleFormation();

      VehicleFormation*
      clone() const override
      {
        return new VehicleFormation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return VehicleFormation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "VehicleFormation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 34;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return points.getSerializationSize() + participants.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Stop Maneuver.
    class StopManeuver: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 468;
      }

      StopManeuver();

      StopManeuver*
      clone() const override
      {
        return new StopManeuver(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return StopManeuver::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "StopManeuver";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Register Maneuver.
    class RegisterManeuver: public Message
    {
    public:
      //! Maneuver ID.
      uint16_t mid;

      static uint16_t
      getIdStatic()
      {
        return 469;
      }

      RegisterManeuver();

      RegisterManeuver*
      clone() const override
      {
        return new RegisterManeuver(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RegisterManeuver::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RegisterManeuver";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Maneuver Control State.
    class ManeuverControlState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Maneuver in progress.
        MCS_EXECUTING = 0,
        //! Maneuver completed.
        MCS_DONE = 1,
        //! Maneuver error.
        MCS_ERROR = 2,
        //! Maneuver stopped.
        MCS_STOPPED = 3
      };

      //! State.
      uint8_t state;
      //! Completion Time.
      uint16_t eta;
      //! Info.
      std::string info;

      static uint16_t
      getIdStatic()
      {
        return 470;
      }

      ManeuverControlState();

      ManeuverControlState*
      clone() const override
      {
        return new ManeuverControlState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ManeuverControlState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ManeuverControlState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Follow System.
    class FollowSystem: public Message
    {
    public:
      //! System To Follow.
      uint16_t system;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Offset -- X.
      fp32_t x;
      //! Offset -- Y.
      fp32_t y;
      //! Coordinate -- Z.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;

      static uint16_t
      getIdStatic()
      {
        return 471;
      }

      FollowSystem();

      FollowSystem*
      clone() const override
      {
        return new FollowSystem(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FollowSystem::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FollowSystem";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 22;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Communications Relay.
    class CommsRelay: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Duration.
      uint16_t duration;
      //! System A.
      uint16_t sys_a;
      //! System B.
      uint16_t sys_b;
      //! Move threshold.
      fp32_t move_threshold;

      static uint16_t
      getIdStatic()
      {
        return 472;
      }

      CommsRelay();

      CommsRelay*
      clone() const override
      {
        return new CommsRelay(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CommsRelay::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CommsRelay";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 31;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Polygon Vertex.
    class PolygonVertex: public Message
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;

      static uint16_t
      getIdStatic()
      {
        return 474;
      }

      PolygonVertex();

      PolygonVertex*
      clone() const override
      {
        return new PolygonVertex(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PolygonVertex::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PolygonVertex";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 16;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Cover Area.
    class CoverArea: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Polygon.
      MessageList<PolygonVertex> polygon;
      //! CustomParameters.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 473;
      }

      CoverArea();

      CoverArea*
      clone() const override
      {
        return new CoverArea(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CoverArea::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CoverArea";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 26;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return polygon.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Compass Calibration Maneuver.
    class CompassCalibration: public Maneuver
    {
    public:
      //! Direction.
      enum DirectionEnum
      {
        //! Vehicle Dependent.
        LD_VDEP = 0,
        //! Clockwise.
        LD_CLOCKW = 1,
        //! Counter Clockwise.
        LD_CCLOCKW = 2,
        //! Into the wind/current.
        LD_IWINDCURR = 3
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Pitch.
      fp32_t pitch;
      //! Amplitude.
      fp32_t amplitude;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Radius.
      fp32_t radius;
      //! Direction.
      uint8_t direction;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 475;
      }

      CompassCalibration();

      CompassCalibration*
      clone() const override
      {
        return new CompassCalibration(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CompassCalibration::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CompassCalibration";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 43;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Formation Parameters.
    class FormationParameters: public Message
    {
    public:
      //! Formation Reference Frame.
      enum FormationReferenceFrameEnum
      {
        //! Earth Fixed.
        OP_EARTH_FIXED = 0,
        //! Path Fixed.
        OP_PATH_FIXED = 1,
        //! Path Curved.
        OP_PATH_CURVED = 2
      };

      //! Formation Name.
      std::string formation_name;
      //! Formation Reference Frame.
      uint8_t reference_frame;
      //! Formation Participants.
      MessageList<VehicleFormationParticipant> participants;
      //! Custom settings for formation.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 476;
      }

      FormationParameters();

      FormationParameters*
      clone() const override
      {
        return new FormationParameters(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FormationParameters::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FormationParameters";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(formation_name) + participants.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Formation Plan Execution.
    class FormationPlanExecution: public Maneuver
    {
    public:
      //! Target Group Name.
      std::string group_name;
      //! Formation Name.
      std::string formation_name;
      //! Formation Plan ID.
      std::string plan_id;
      //! Plan Description.
      std::string description;
      //! Formation Leader Flight Airspeed.
      fp32_t leader_speed;
      //! Formation leader flight bank limit.
      fp32_t leader_bank_lim;
      //! Position mismatch limit.
      fp32_t pos_sim_err_lim;
      //! Position mismatch threshold.
      fp32_t pos_sim_err_wrn;
      //! Position mismatch time-out.
      uint16_t pos_sim_err_timeout;
      //! Convergence threshold.
      fp32_t converg_max;
      //! Convergence time-out.
      uint16_t converg_timeout;
      //! Communications time-out.
      uint16_t comms_timeout;
      //! Turbulence limit.
      fp32_t turb_lim;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 477;
      }

      FormationPlanExecution();

      FormationPlanExecution*
      clone() const override
      {
        return new FormationPlanExecution(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FormationPlanExecution::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FormationPlanExecution";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 30;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(group_name) + IMC::getSerializationSize(formation_name) + IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(description) + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Follow Reference Maneuver.
    class FollowReference: public Maneuver
    {
    public:
      //! Controlling Source.
      uint16_t control_src;
      //! Controlling Entity.
      uint8_t control_ent;
      //! Reference Update Timeout.
      fp32_t timeout;
      //! Loiter Radius.
      fp32_t loiter_radius;
      //! Altitude Interval.
      fp32_t altitude_interval;

      static uint16_t
      getIdStatic()
      {
        return 478;
      }

      FollowReference();

      FollowReference*
      clone() const override
      {
        return new FollowReference(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FollowReference::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FollowReference";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 15;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Reference To Follow.
    class Reference: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Use Location Reference.
        FLAG_LOCATION = 0x01,
        //! Use Speed Reference.
        FLAG_SPEED = 0x02,
        //! Use Z Reference.
        FLAG_Z = 0x04,
        //! Use Radius Reference.
        FLAG_RADIUS = 0x08,
        //! Use this Reference as Start Position for PathControler.
        FLAG_START_POINT = 0x10,
        //! Use Current Position as Start Position for PathControler.
        FLAG_DIRECT = 0x20,
        //! Flag Maneuver Completion.
        FLAG_MANDONE = 0x80
      };

      //! Flags.
      uint8_t flags;
      //! Speed Reference.
      InlineMessage<DesiredSpeed> speed;
      //! Z Reference.
      InlineMessage<DesiredZ> z;
      //! Latitude Reference.
      fp64_t lat;
      //! Longitude Reference.
      fp64_t lon;
      //! Radius.
      fp32_t radius;

      static uint16_t
      getIdStatic()
      {
        return 479;
      }

      Reference();

      Reference*
      clone() const override
      {
        return new Reference(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Reference::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Reference";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 21;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return speed.getSerializationSize() + z.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Follow Reference State.
    class FollowRefState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Waiting for first reference.
        FR_WAIT = 1,
        //! Going towards received reference.
        FR_GOTO = 2,
        //! Loitering after arriving at the reference.
        FR_LOITER = 3,
        //! Hovering after arriving at the reference.
        FR_HOVER = 4,
        //! Moving in z after arriving at the target cylinder.
        FR_ELEVATOR = 5,
        //! Controlling system timed out.
        FR_TIMEOUT = 6
      };

      //! Proximity.
      enum ProximityBits
      {
        //! Far from the destination.
        PROX_FAR = 0x01,
        //! Near in the horizontal plane.
        PROX_XY_NEAR = 0x02,
        //! Near in the vertical plane.
        PROX_Z_NEAR = 0x04,
        //! Unreachable in the horizontal plane.
        PROX_XY_UNREACHABLE = 0x08,
        //! Unreachable in the vertical plane.
        PROX_Z_UNREACHABLE = 0x10
      };

      //! Controlling Source.
      uint16_t control_src;
      //! Controlling Entity.
      uint8_t control_ent;
      //! Reference.
      InlineMessage<Reference> reference;
      //! State.
      uint8_t state;
      //! Proximity.
      uint8_t proximity;

      static uint16_t
      getIdStatic()
      {
        return 480;
      }

      FollowRefState();

      FollowRefState*
      clone() const override
      {
        return new FollowRefState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FollowRefState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FollowRefState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return reference.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Relative State.
    class RelativeState: public Message
    {
    public:
      //! System Identifier.
      std::string s_id;
      //! Distance.
      fp32_t dist;
      //! Position Error.
      fp32_t err;
      //! Control Importance.
      fp32_t ctrl_imp;
      //! Relative Direction X (North).
      fp32_t rel_dir_x;
      //! Relative Direction Y (East).
      fp32_t rel_dir_y;
      //! Relative Direction Z (Down).
      fp32_t rel_dir_z;
      //! X Position Error (North).
      fp32_t err_x;
      //! Y Position Error (East).
      fp32_t err_y;
      //! Z Position Error (Down).
      fp32_t err_z;
      //! X Position Error In Relative Frame (North).
      fp32_t rf_err_x;
      //! Y Position Error In Relative Frame (East).
      fp32_t rf_err_y;
      //! Z Position Error In Relative Frame (Down).
      fp32_t rf_err_z;
      //! X Velocity Error In Relative Frame (North).
      fp32_t rf_err_vx;
      //! Y Velocity Error In Relative Frame (East).
      fp32_t rf_err_vy;
      //! Z Velocity Error In Relative Frame (Down).
      fp32_t rf_err_vz;
      //! X Convergence Deviation (North).
      fp32_t ss_x;
      //! Y Convergence Deviation (East).
      fp32_t ss_y;
      //! Z Convergence Deviation (Down).
      fp32_t ss_z;
      //! X Virtual Error (North).
      fp32_t virt_err_x;
      //! Y Virtual Error (East).
      fp32_t virt_err_y;
      //! Z Virtual Error (Down).
      fp32_t virt_err_z;

      static uint16_t
      getIdStatic()
      {
        return 482;
      }

      RelativeState();

      RelativeState*
      clone() const override
      {
        return new RelativeState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RelativeState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RelativeState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 84;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(s_id);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Formation Monitoring Data.
    class FormationMonitor: public Message
    {
    public:
      //! Commanded X Acceleration (North).
      fp32_t ax_cmd;
      //! Commanded Y Acceleration (East).
      fp32_t ay_cmd;
      //! Commanded Z Acceleration (Down).
      fp32_t az_cmd;
      //! Desired X Acceleration (North).
      fp32_t ax_des;
      //! Desired Y Acceleration (East).
      fp32_t ay_des;
      //! Desired Z Acceleration (Down).
      fp32_t az_des;
      //! X Virtual Error (North).
      fp32_t virt_err_x;
      //! Y Virtual Error (East).
      fp32_t virt_err_y;
      //! Z Virtual Error (Down).
      fp32_t virt_err_z;
      //! X Sliding Surface Feedback (North).
      fp32_t surf_fdbk_x;
      //! Y Sliding Surface Feedback (East).
      fp32_t surf_fdbk_y;
      //! Z Sliding Surface Feedback (Down).
      fp32_t surf_fdbk_z;
      //! X Uncertainty Compensation (North).
      fp32_t surf_unkn_x;
      //! Y Uncertainty Compensation (East).
      fp32_t surf_unkn_y;
      //! Z Uncertainty Compensation (Down).
      fp32_t surf_unkn_z;
      //! X Convergence Deviation (North).
      fp32_t ss_x;
      //! Y Convergence Deviation (East).
      fp32_t ss_y;
      //! Z Convergence Deviation (Down).
      fp32_t ss_z;
      //! Relative State.
      MessageList<RelativeState> rel_state;

      static uint16_t
      getIdStatic()
      {
        return 481;
      }

      FormationMonitor();

      FormationMonitor*
      clone() const override
      {
        return new FormationMonitor(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FormationMonitor::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FormationMonitor";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 72;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return rel_state.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Dislodge Maneuver.
    class Dislodge: public Maneuver
    {
    public:
      //! Direction.
      enum DirectionEnum
      {
        //! Let the vehicle decide.
        DIR_AUTO = 0,
        //! Attempt to move forward.
        DIR_FORWARD = 1,
        //! Attempt to move backward.
        DIR_BACKWARD = 2
      };

      //! Timeout.
      uint16_t timeout;
      //! RPM.
      fp32_t rpm;
      //! Direction.
      uint8_t direction;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 483;
      }

      Dislodge();

      Dislodge*
      clone() const override
      {
        return new Dislodge(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Dislodge::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Dislodge";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 7;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Formation.
    class Formation: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        FC_REQUEST = 0,
        //! Report.
        FC_REPORT = 1
      };

      //! Operation.
      enum OperationEnum
      {
        //! Start.
        OP_START = 0,
        //! Stop.
        OP_STOP = 1,
        //! Ready.
        OP_READY = 2,
        //! Executing.
        OP_EXECUTING = 3,
        //! Failure.
        OP_FAILURE = 4
      };

      //! Formation Reference Frame.
      enum FormationReferenceFrameEnum
      {
        //! Earth Fixed.
        OP_EARTH_FIXED = 0,
        //! Path Fixed.
        OP_PATH_FIXED = 1,
        //! Path Curved.
        OP_PATH_CURVED = 2
      };

      //! Formation Name.
      std::string formation_name;
      //! Type.
      uint8_t type;
      //! Operation.
      uint8_t op;
      //! Target Group Name.
      std::string group_name;
      //! Formation Plan ID.
      std::string plan_id;
      //! Plan Description.
      std::string description;
      //! Formation Reference Frame.
      uint8_t reference_frame;
      //! Formation Participants.
      MessageList<VehicleFormationParticipant> participants;
      //! Formation Leader Bank Limit.
      fp32_t leader_bank_lim;
      //! Formation Leader Minimum Speed.
      fp32_t leader_speed_min;
      //! Formation Leader Maximum Speed.
      fp32_t leader_speed_max;
      //! Formation Leader Minimum Altitude.
      fp32_t leader_alt_min;
      //! Formation Leader Maximum Altitude.
      fp32_t leader_alt_max;
      //! Position mismatch limit.
      fp32_t pos_sim_err_lim;
      //! Position mismatch threshold.
      fp32_t pos_sim_err_wrn;
      //! Position mismatch time-out.
      uint16_t pos_sim_err_timeout;
      //! Convergence threshold.
      fp32_t converg_max;
      //! Convergence time-out.
      uint16_t converg_timeout;
      //! Communications time-out.
      uint16_t comms_timeout;
      //! Turbulence limit.
      fp32_t turb_lim;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 484;
      }

      Formation();

      Formation*
      clone() const override
      {
        return new Formation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Formation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Formation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 45;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(formation_name) + IMC::getSerializationSize(group_name) + IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(description) + participants.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Launch Maneuver.
    class Launch: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 485;
      }

      Launch();

      Launch*
      clone() const override
      {
        return new Launch(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Launch::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Launch";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 28;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Drop Maneuver.
    class Drop: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 486;
      }

      Drop();

      Drop*
      clone() const override
      {
        return new Drop(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Drop::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Drop";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 28;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Scheduled Goto.
    class ScheduledGoto: public Maneuver
    {
    public:
      //! Delayed Behavior.
      enum DelayedBehaviorEnum
      {
        //! Resume.
        DBEH_RESUME = 0,
        //! Skip.
        DBEH_SKIP = 1,
        //! Fail.
        DBEH_FAIL = 2
      };

      //! Time of arrival.
      fp64_t arrival_time;
      //! Destination Latitude WGS-84.
      fp64_t lat;
      //! Destination Longitude WGS-84.
      fp64_t lon;
      //! Destination Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Travel Z Reference.
      fp32_t travel_z;
      //! Travel Z Units.
      uint8_t travel_z_units;
      //! Delayed Behavior.
      uint8_t delayed;

      static uint16_t
      getIdStatic()
      {
        return 487;
      }

      ScheduledGoto();

      ScheduledGoto*
      clone() const override
      {
        return new ScheduledGoto(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ScheduledGoto::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ScheduledGoto";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 35;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Rows Coverage.
    class RowsCoverage: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Square Curve.
        FLG_SQUARE_CURVE = 0x01,
        //! First Curve Right.
        FLG_CURVE_RIGHT = 0x02
      };

      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Bearing.
      fp64_t bearing;
      //! Cross Angle.
      fp64_t cross_angle;
      //! Width.
      fp32_t width;
      //! Length.
      fp32_t length;
      //! Curve Offset.
      uint8_t coff;
      //! Angular Aperture.
      fp32_t angaperture;
      //! Range.
      uint16_t range;
      //! Overlap.
      uint8_t overlap;
      //! Flags.
      uint8_t flags;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 488;
      }

      RowsCoverage();

      RowsCoverage*
      clone() const override
      {
        return new RowsCoverage(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RowsCoverage::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RowsCoverage";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 59;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Sample Maneuver.
    class Sample: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Syringe0.
      uint8_t syringe0;
      //! Syringe1.
      uint8_t syringe1;
      //! Syringe2.
      uint8_t syringe2;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 489;
      }

      Sample();

      Sample*
      clone() const override
      {
        return new Sample(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Sample::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Sample";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 31;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Image Tracking.
    class ImageTracking: public Maneuver
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 490;
      }

      ImageTracking();

      ImageTracking*
      clone() const override
      {
        return new ImageTracking(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ImageTracking::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ImageTracking";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Takeoff Maneuver.
    class Takeoff: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Pitch Angle.
      fp32_t takeoff_pitch;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 491;
      }

      Takeoff();

      Takeoff*
      clone() const override
      {
        return new Takeoff(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Takeoff::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Takeoff";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 30;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Land Maneuver.
    class Land: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Abort Z Reference.
      fp32_t abort_z;
      //! Bearing.
      fp64_t bearing;
      //! Glide Slope.
      uint8_t glide_slope;
      //! Glide Slope Altitude.
      fp32_t glide_slope_alt;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 492;
      }

      Land();

      Land*
      clone() const override
      {
        return new Land(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Land::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Land";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 43;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Autonomous Section.
    class AutonomousSection: public Maneuver
    {
    public:
      //! Enforced Limits.
      enum EnforcedLimitsBits
      {
        //! Maximum Depth Limit.
        ENFORCE_DEPTH = 0x01,
        //! Minimum Altitude Limit.
        ENFORCE_ALTITUDE = 0x02,
        //! Time Limit.
        ENFORCE_TIMEOUT = 0x04,
        //! Polygonal Area Limits.
        ENFORCE_AREA2D = 0x08
      };

      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Enforced Limits.
      uint8_t limits;
      //! Maximum depth.
      fp64_t max_depth;
      //! Minimum altitude.
      fp64_t min_alt;
      //! Time Limit.
      fp64_t time_limit;
      //! Area Limits.
      MessageList<PolygonVertex> area_limits;
      //! Controller.
      std::string controller;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 493;
      }

      AutonomousSection();

      AutonomousSection*
      clone() const override
      {
        return new AutonomousSection(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AutonomousSection::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AutonomousSection";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 46;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return area_limits.getSerializationSize() + IMC::getSerializationSize(controller) + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Follow Point Maneuver.
    class FollowPoint: public Maneuver
    {
    public:
      //! Source To Follow.
      std::string target;
      //! Maximum Speed.
      fp32_t max_speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 494;
      }

      FollowPoint();

      FollowPoint*
      clone() const override
      {
        return new FollowPoint(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FollowPoint::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FollowPoint";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 26;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(target) + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Alignment Maneuver.
    class Alignment: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 495;
      }

      Alignment();

      Alignment*
      clone() const override
      {
        return new Alignment(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Alignment::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Alignment";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 23;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Station Keeping Extended.
    class StationKeepingExtended: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Keep safe behaviour.
        FLG_KEEP_SAFE = 0x01
      };

      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Radius.
      fp32_t radius;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! PopUp Period.
      uint16_t popup_period;
      //! PopUp Duration.
      uint16_t popup_duration;
      //! Flags.
      uint8_t flags;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 496;
      }

      StationKeepingExtended();

      StationKeepingExtended*
      clone() const override
      {
        return new StationKeepingExtended(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return StationKeepingExtended::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "StationKeepingExtended";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 37;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Maneuver Done.
    class ManeuverDone: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 497;
      }

      ManeuverDone();

      ManeuverDone*
      clone() const override
      {
        return new ManeuverDone(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ManeuverDone::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ManeuverDone";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Magnetometer Maneuver.
    class Magnetometer: public Maneuver
    {
    public:
      //! Direction.
      enum DirectionEnum
      {
        //! Clockwise First.
        MD_CLOCKW_FIRST = 0,
        //! Counter Clockwise First.
        MD_CCLOCKW_FIRST = 1
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Bearing.
      fp64_t bearing;
      //! Width.
      fp32_t width;
      //! Direction.
      uint8_t direction;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic()
      {
        return 499;
      }

      Magnetometer();

      Magnetometer*
      clone() const override
      {
        return new Magnetometer(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Magnetometer::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Magnetometer";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 41;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Vehicle State.
    class VehicleState: public Message
    {
    public:
      //! Operation Mode.
      enum OperationModeEnum
      {
        //! Service.
        VS_SERVICE = 0,
        //! Calibration.
        VS_CALIBRATION = 1,
        //! Error.
        VS_ERROR = 2,
        //! Maneuver.
        VS_MANEUVER = 3,
        //! External Control.
        VS_EXTERNAL = 4,
        //! Boot.
        VS_BOOT = 5
      };

      //! Flags.
      enum FlagsBits
      {
        //! Maneuver Done.
        VFLG_MANEUVER_DONE = 0x01
      };

      //! Operation Mode.
      uint8_t op_mode;
      //! Errors -- Count.
      uint8_t error_count;
      //! Errors -- Entities.
      std::string error_ents;
      //! Maneuver -- Type.
      uint16_t maneuver_type;
      //! Maneuver -- Start Time.
      fp64_t maneuver_stime;
      //! Maneuver -- ETA.
      uint16_t maneuver_eta;
      //! Control Loops.
      uint32_t control_loops;
      //! Flags.
      uint8_t flags;
      //! Last Error -- Description.
      std::string last_error;
      //! Last Error -- Time.
      fp64_t last_error_time;

      static uint16_t
      getIdStatic()
      {
        return 500;
      }

      VehicleState();

      VehicleState*
      clone() const override
      {
        return new VehicleState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return VehicleState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "VehicleState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 27;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(error_ents) + IMC::getSerializationSize(last_error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Vehicle Command.
    class VehicleCommand: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        VC_REQUEST = 0,
        //! Reply -- Success.
        VC_SUCCESS = 1,
        //! Reply -- In Progress.
        VC_IN_PROGRESS = 2,
        //! Reply -- Failure.
        VC_FAILURE = 3
      };

      //! Command.
      enum CommandEnum
      {
        //! Execute Maneuver.
        VC_EXEC_MANEUVER = 0,
        //! Stop Maneuver.
        VC_STOP_MANEUVER = 1,
        //! Start Calibration.
        VC_START_CALIBRATION = 2,
        //! Stop Calibration.
        VC_STOP_CALIBRATION = 3
      };

      //! Type.
      uint8_t type;
      //! Request ID.
      uint16_t request_id;
      //! Command.
      uint8_t command;
      //! Maneuver.
      InlineMessage<Maneuver> maneuver;
      //! Calibration Time.
      uint16_t calib_time;
      //! Info.
      std::string info;

      static uint16_t
      getIdStatic()
      {
        return 501;
      }

      VehicleCommand();

      VehicleCommand*
      clone() const override
      {
        return new VehicleCommand(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return VehicleCommand::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "VehicleCommand";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return maneuver.getSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Monitor Entity State.
    class MonitorEntityState: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Reset to defaults.
        MES_RESET = 0,
        //! Enable Monitoring.
        MES_ENABLE = 1,
        //! Disable Monitoring.
        MES_DISABLE = 2,
        //! Enable Monitoring (exclusive - disables all others).
        MES_ENABLE_EXCLUSIVE = 3,
        //! Status Report.
        MES_STATUS = 4
      };

      //! Command.
      uint8_t command;
      //! Entity Names.
      std::string entities;

      static uint16_t
      getIdStatic()
      {
        return 502;
      }

      MonitorEntityState();

      MonitorEntityState*
      clone() const override
      {
        return new MonitorEntityState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return MonitorEntityState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "MonitorEntityState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(entities);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Entity Monitoring State.
    class EntityMonitoringState: public Message
    {
    public:
      //! Entities monitored - Count.
      uint8_t mcount;
      //! Entities monitored - Names.
      std::string mnames;
      //! Entities with errors - Count.
      uint8_t ecount;
      //! Entities with errors - Names.
      std::string enames;
      //! Entities with critical errors - Count.
      uint8_t ccount;
      //! Entities with critical errors - Names.
      std::string cnames;
      //! Last Error -- Description.
      std::string last_error;
      //! Last Error -- Time.
      fp64_t last_error_time;

      static uint16_t
      getIdStatic()
      {
        return 503;
      }

      EntityMonitoringState();

      EntityMonitoringState*
      clone() const override
      {
        return new EntityMonitoringState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EntityMonitoringState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EntityMonitoringState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 11;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(mnames) + IMC::getSerializationSize(enames) + IMC::getSerializationSize(cnames) + IMC::getSerializationSize(last_error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Operational Limits.
    class OperationalLimits: public Message
    {
    public:
      //! Field Indicator Mask.
      uint8_t mask;
      //! Maximum Depth.
      fp32_t max_depth;
      //! Minimum Altitude.
      fp32_t min_altitude;
      //! Maximum Altitude.
      fp32_t max_altitude;
      //! Minimum Speed.
      fp32_t min_speed;
      //! Maximum Speed.
      fp32_t max_speed;
      //! Maximum Vertical Rate.
      fp32_t max_vrate;
      //! Area -- WGS-84 Latitude.
      fp64_t lat;
      //! Area -- WGS-84 Longitude.
      fp64_t lon;
      //! Area -- Orientation.
      fp32_t orientation;
      //! Area -- Width.
      fp32_t width;
      //! Area -- Length.
      fp32_t length;

      static uint16_t
      getIdStatic()
      {
        return 504;
      }

      OperationalLimits();

      OperationalLimits*
      clone() const override
      {
        return new OperationalLimits(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return OperationalLimits::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "OperationalLimits";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 53;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Get Operational Limits.
    class GetOperationalLimits: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 505;
      }

      GetOperationalLimits();

      GetOperationalLimits*
      clone() const override
      {
        return new GetOperationalLimits(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GetOperationalLimits::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GetOperationalLimits";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Calibration.
    class Calibration: public Message
    {
    public:
      //! Duration.
      uint16_t duration;

      static uint16_t
      getIdStatic()
      {
        return 506;
      }

      Calibration();

      Calibration*
      clone() const override
      {
        return new Calibration(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Calibration::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Calibration";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Control Loops.
    class ControlLoops: public Message
    {
    public:
      //! Enable.
      enum EnableEnum
      {
        //! Disable.
        CL_DISABLE = 0,
        //! Enable.
        CL_ENABLE = 1
      };

      //! Enable.
      uint8_t enable;
      //! Control Loop Mask.
      uint32_t mask;
      //! Scope Time Reference.
      uint32_t scope_ref;

      static uint16_t
      getIdStatic()
      {
        return 507;
      }

      ControlLoops();

      ControlLoops*
      clone() const override
      {
        return new ControlLoops(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ControlLoops::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ControlLoops";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 9;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Vehicle Medium.
    class VehicleMedium: public Message
    {
    public:
      //! Medium.
      enum MediumEnum
      {
        //! Ground.
        VM_GROUND = 0,
        //! Air.
        VM_AIR = 1,
        //! Water.
        VM_WATER = 2,
        //! Underwater.
        VM_UNDERWATER = 3,
        //! Unknown.
        VM_UNKNOWN = 4
      };

      //! Medium.
      uint8_t medium;

      static uint16_t
      getIdStatic()
      {
        return 508;
      }

      VehicleMedium();

      VehicleMedium*
      clone() const override
      {
        return new VehicleMedium(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return VehicleMedium::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "VehicleMedium";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Collision.
    class Collision: public Message
    {
    public:
      //! Type.
      enum TypeBits
      {
        //! X-axis.
        CD_X = 0x01,
        //! Y-axis.
        CD_Y = 0x02,
        //! Z-axis.
        CD_Z = 0x04,
        //! Impact.
        CD_IMPACT = 0x08
      };

      //! Collision value.
      fp32_t value;
      //! Type.
      uint8_t type;

      static uint16_t
      getIdStatic()
      {
        return 509;
      }

      Collision();

      Collision*
      clone() const override
      {
        return new Collision(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Collision::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Collision";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Formation Tracking State.
    class FormState: public Message
    {
    public:
      //! Position Mismatch Monitor.
      enum PositionMismatchMonitorEnum
      {
        //! Ok.
        POS_OK = 0,
        //! Warning threshold.
        POS_WRN = 1,
        //! Limit threshold.
        POS_LIM = 2
      };

      //! Communications Monitor.
      enum CommunicationsMonitorEnum
      {
        //! Ok.
        COMMS_OK = 0,
        //! Timeout.
        COMMS_TIMEOUT = 1
      };

      //! Convergence.
      enum ConvergenceEnum
      {
        //! Ok.
        CONV_OK = 0,
        //! Timeout.
        CONV_TIMEOUT = 1
      };

      //! Position Mismatch.
      fp32_t possimerr;
      //! Convergence.
      fp32_t converg;
      //! Stream Turbulence.
      fp32_t turbulence;
      //! Position Mismatch Monitor.
      uint8_t possimmon;
      //! Communications Monitor.
      uint8_t commmon;
      //! Convergence.
      uint8_t convergmon;

      static uint16_t
      getIdStatic()
      {
        return 510;
      }

      FormState();

      FormState*
      clone() const override
      {
        return new FormState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FormState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FormState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 15;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Autopilot Mode.
    class AutopilotMode: public Message
    {
    public:
      //! Autonomy Level.
      enum AutonomyLevelEnum
      {
        //! Manual.
        AL_MANUAL = 0,
        //! Assisted.
        AL_ASSISTED = 1,
        //! Auto.
        AL_AUTO = 2
      };

      //! Autonomy Level.
      uint8_t autonomy;
      //! Mode.
      std::string mode;

      static uint16_t
      getIdStatic()
      {
        return 511;
      }

      AutopilotMode();

      AutopilotMode*
      clone() const override
      {
        return new AutopilotMode(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AutopilotMode::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AutopilotMode";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(mode);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Formation Tracking State.
    class FormationState: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        FC_REQUEST = 0,
        //! Report.
        FC_REPORT = 1
      };

      //! Operation.
      enum OperationEnum
      {
        //! Start.
        OP_START = 0,
        //! Stop.
        OP_STOP = 1
      };

      //! Position Mismatch Monitor.
      enum PositionMismatchMonitorEnum
      {
        //! Ok.
        POS_OK = 0,
        //! Warning threshold.
        POS_WRN = 1,
        //! Limit threshold.
        POS_LIM = 2
      };

      //! Communications Monitor.
      enum CommunicationsMonitorEnum
      {
        //! Ok.
        COMMS_OK = 0,
        //! Timeout.
        COMMS_TIMEOUT = 1
      };

      //! Convergence.
      enum ConvergenceEnum
      {
        //! Ok.
        CONV_OK = 0,
        //! Timeout.
        CONV_TIMEOUT = 1
      };

      //! Type.
      uint8_t type;
      //! Operation.
      uint8_t op;
      //! Position Mismatch.
      fp32_t possimerr;
      //! Convergence.
      fp32_t converg;
      //! Stream Turbulence.
      fp32_t turbulence;
      //! Position Mismatch Monitor.
      uint8_t possimmon;
      //! Communications Monitor.
      uint8_t commmon;
      //! Convergence.
      uint8_t convergmon;

      static uint16_t
      getIdStatic()
      {
        return 512;
      }

      FormationState();

      FormationState*
      clone() const override
      {
        return new FormationState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FormationState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FormationState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 17;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Report Control.
    class ReportControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Request Start of Reports.
        OP_REQUEST_START = 0,
        //! Report Started.
        OP_STARTED = 1,
        //! Request Stop of Reports.
        OP_REQUEST_STOP = 2,
        //! Report Stopped.
        OP_STOPPED = 3,
        //! Request Single Reports.
        OP_REQUEST_REPORT = 4,
        //! Single Report Sent.
        OP_REPORT_SENT = 5
      };

      //! Communication Interface.
      enum CommunicationInterfaceBits
      {
        //! Acoustic.
        CI_ACOUSTIC = 0x01,
        //! Satellite.
        CI_SATELLITE = 0x02,
        //! GSM.
        CI_GSM = 0x04,
        //! Mobile.
        CI_MOBILE = 0x08,
        //! Radio.
        CI_RADIO = 0x10
      };

      //! Operation.
      uint8_t op;
      //! Communication Interface.
      uint8_t comm_interface;
      //! Period.
      uint16_t period;
      //! Destination System.
      std::string sys_dst;

      static uint16_t
      getIdStatic()
      {
        return 513;
      }

      ReportControl();

      ReportControl*
      clone() const override
      {
        return new ReportControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ReportControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ReportControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(sys_dst);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! State Report.
    class StateReport: public Message
    {
    public:
      //! Time Stamp.
      uint32_t stime;
      //! Latitude.
      fp32_t latitude;
      //! Longitude.
      fp32_t longitude;
      //! Altitude.
      uint16_t altitude;
      //! Depth.
      uint16_t depth;
      //! Heading.
      uint16_t heading;
      //! Speed.
      int16_t speed;
      //! Fuel.
      int8_t fuel;
      //! Execution State.
      int8_t exec_state;
      //! Plan Checksum.
      uint16_t plan_checksum;

      static uint16_t
      getIdStatic()
      {
        return 514;
      }

      StateReport();

      StateReport*
      clone() const override
      {
        return new StateReport(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return StateReport::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "StateReport";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 24;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Transmission Request.
    class TransmissionRequest: public Message
    {
    public:
      //! Communication Mean.
      enum CommunicationMeanEnum
      {
        //! WiFi.
        CMEAN_WIFI = 0,
        //! Acoustic.
        CMEAN_ACOUSTIC = 1,
        //! Satellite.
        CMEAN_SATELLITE = 2,
        //! GSM.
        CMEAN_GSM = 3,
        //! Any.
        CMEAN_ANY = 4,
        //! All.
        CMEAN_ALL = 5
      };

      //! Data Mode.
      enum DataModeEnum
      {
        //! Inline Message.
        DMODE_INLINEMSG = 0,
        //! Text.
        DMODE_TEXT = 1,
        //! Raw Data.
        DMODE_RAW = 2,
        //! Abort.
        DMODE_ABORT = 3,
        //! Range.
        DMODE_RANGE = 4,
        //! Reverse Range.
        DMODE_REVERSE_RANGE = 5
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Communication Mean.
      uint8_t comm_mean;
      //! Destination System.
      std::string destination;
      //! Deadline.
      fp64_t deadline;
      //! Range.
      fp32_t range;
      //! Data Mode.
      uint8_t data_mode;
      //! Message Data.
      InlineMessage<Message> msg_data;
      //! Text Data.
      std::string txt_data;
      //! Raw Data.
      std::vector<char> raw_data;

      static uint16_t
      getIdStatic()
      {
        return 515;
      }

      TransmissionRequest();

      TransmissionRequest*
      clone() const override
      {
        return new TransmissionRequest(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TransmissionRequest::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TransmissionRequest";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 16;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(destination) + msg_data.getSerializationSize() + IMC::getSerializationSize(txt_data) + IMC::getSerializationSize(raw_data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Transmission Status.
    class TransmissionStatus: public Message
    {
    public:
      //! Status.
      enum StatusEnum
      {
        //! In progress.
        TSTAT_IN_PROGRESS = 0,
        //! Sent.
        TSTAT_SENT = 1,
        //! Delivered.
        TSTAT_DELIVERED = 51,
        //! Delivery is unknown.
        TSTAT_MAYBE_DELIVERED = 52,
        //! Range received.
        TSTAT_RANGE_RECEIVED = 60,
        //! Input Error.
        TSTAT_INPUT_FAILURE = 101,
        //! Temporary Error.
        TSTAT_TEMPORARY_FAILURE = 102,
        //! Permanent Failure.
        TSTAT_PERMANENT_FAILURE = 103
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Status.
      uint8_t status;
      //! Range.
      fp32_t range;
      //! Information.
      std::string info;

      static uint16_t
      getIdStatic()
      {
        return 516;
      }

      TransmissionStatus();

      TransmissionStatus*
      clone() const override
      {
        return new TransmissionStatus(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TransmissionStatus::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TransmissionStatus";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 7;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! SMS Transmission Request.
    class SmsRequest: public Message
    {
    public:
      //! Request Identifier.
      uint16_t req_id;
      //! Destination.
      std::string destination;
      //! Timeout.
      fp64_t timeout;
      //! SMS Text.
      std::string sms_text;

      static uint16_t
      getIdStatic()
      {
        return 517;
      }

      SmsRequest();

      SmsRequest*
      clone() const override
      {
        return new SmsRequest(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SmsRequest::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SmsRequest";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 10;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(destination) + IMC::getSerializationSize(sms_text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! SMS Transmission Status.
    class SmsStatus: public Message
    {
    public:
      //! Status.
      enum StatusEnum
      {
        //! Queued.
        SMSSTAT_QUEUED = 0,
        //! Sent.
        SMSSTAT_SENT = 1,
        //! Input Error.
        SMSSTAT_INPUT_FAILURE = 101,
        //! Error trying to send sms.
        SMSSTAT_ERROR = 102
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Status.
      uint8_t status;
      //! Information.
      std::string info;

      static uint16_t
      getIdStatic()
      {
        return 518;
      }

      SmsStatus();

      SmsStatus*
      clone() const override
      {
        return new SmsStatus(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SmsStatus::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SmsStatus";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! VTOL State.
    class VtolState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Undefined.
        VTOL_STATE_UNDEFINED = 0,
        //! Transition to Fixed-Wing.
        VTOL_STATE_TRANSITION_TO_FW = 1,
        //! Transition to MultiCopter.
        VTOL_STATE_TRANSITION_TO_MC = 2,
        //! MutiCopter.
        VTOL_STATE_MC = 3,
        //! Fixed-Wing.
        VTOL_STATE_FW = 4
      };

      //! State.
      uint8_t state;

      static uint16_t
      getIdStatic()
      {
        return 519;
      }

      VtolState();

      VtolState*
      clone() const override
      {
        return new VtolState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return VtolState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "VtolState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Arming State.
    class ArmingState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Armed.
        MOTORS_ARMED = 0,
        //! Disarmed.
        MOTORS_DISARMED = 1
      };

      //! State.
      uint8_t state;

      static uint16_t
      getIdStatic()
      {
        return 520;
      }

      ArmingState();

      ArmingState*
      clone() const override
      {
        return new ArmingState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ArmingState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ArmingState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! TCP Transmission Request.
    class TCPRequest: public Message
    {
    public:
      //! Request Identifier.
      uint16_t req_id;
      //! Destination.
      std::string destination;
      //! Timeout.
      fp64_t timeout;
      //! Message Data.
      InlineMessage<Message> msg_data;

      static uint16_t
      getIdStatic()
      {
        return 521;
      }

      TCPRequest();

      TCPRequest*
      clone() const override
      {
        return new TCPRequest(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TCPRequest::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TCPRequest";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 10;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(destination) + msg_data.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! TCP Transmission Status.
    class TCPStatus: public Message
    {
    public:
      //! Status.
      enum StatusEnum
      {
        //! Queued.
        TCPSTAT_QUEUED = 0,
        //! Sent.
        TCPSTAT_SENT = 1,
        //! Input Error.
        TCPSTAT_INPUT_FAILURE = 100,
        //! Host Unknown.
        TCPSTAT_HOST_UNKNOWN = 101,
        //! Can't Connect.
        TCPSTAT_CANT_CONNECT = 102,
        //! Error trying to send sms.
        TCPSTAT_ERROR = 103
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Status.
      uint8_t status;
      //! Information.
      std::string info;

      static uint16_t
      getIdStatic()
      {
        return 522;
      }

      TCPStatus();

      TCPStatus*
      clone() const override
      {
        return new TCPStatus(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TCPStatus::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TCPStatus";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Asset Report .
    class AssetReport: public Message
    {
    public:
      //! Medium.
      enum MediumEnum
      {
        //! WiFi.
        RM_WIFI = 1,
        //! Satellite.
        RM_SATELLITE = 2,
        //! Acoustic.
        RM_ACOUSTIC = 3,
        //! SMS.
        RM_SMS = 4
      };

      //! Asset Name.
      std::string name;
      //! Report Timestamp.
      fp64_t report_time;
      //! Medium.
      uint8_t medium;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Depth.
      fp32_t depth;
      //! Altitude.
      fp32_t alt;
      //! Speed Over Ground.
      fp32_t sog;
      //! Course Over Ground.
      fp32_t cog;
      //! Additional Info.
      MessageList<Message> msgs;

      static uint16_t
      getIdStatic()
      {
        return 525;
      }

      AssetReport();

      AssetReport*
      clone() const override
      {
        return new AssetReport(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return AssetReport::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "AssetReport";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 41;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name) + msgs.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Abort.
    class Abort: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 550;
      }

      Abort();

      Abort*
      clone() const override
      {
        return new Abort(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Abort::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Abort";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Plan Variable.
    class PlanVariable: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Boolean.
        PVT_BOOLEAN = 0,
        //! Number.
        PVT_NUMBER = 1,
        //! Text.
        PVT_TEXT = 2,
        //! Message.
        PVT_MESSAGE = 3
      };

      //! Access Type.
      enum AccessTypeEnum
      {
        //! Input.
        PVA_INPUT = 0,
        //! Output.
        PVA_OUTPUT = 1,
        //! Local.
        PVA_LOCAL = 2
      };

      //! Name.
      std::string name;
      //! Value.
      std::string value;
      //! Type.
      uint8_t type;
      //! Access Type.
      uint8_t access;

      static uint16_t
      getIdStatic()
      {
        return 561;
      }

      PlanVariable();

      PlanVariable*
      clone() const override
      {
        return new PlanVariable(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PlanVariable::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PlanVariable";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name) + IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Plan Maneuver.
    class PlanManeuver: public Message
    {
    public:
      //! Maneuver ID.
      std::string maneuver_id;
      //! Maneuver Specification.
      InlineMessage<Maneuver> data;
      //! Start Actions.
      MessageList<Message> start_actions;
      //! End Actions.
      MessageList<Message> end_actions;

      static uint16_t
      getIdStatic()
      {
        return 552;
      }

      PlanManeuver();

      PlanManeuver*
      clone() const override
      {
        return new PlanManeuver(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PlanManeuver::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PlanManeuver";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(maneuver_id) + data.getSerializationSize() + start_actions.getSerializationSize() + end_actions.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Plan Transition.
    class PlanTransition: public Message
    {
    public:
      //! Source.
      std::string source_man;
      //! Destination Maneuver Name.
      std::string dest_man;
      //! Transition conditions.
      std::string conditions;
      //! Transition actions.
      MessageList<Message> actions;

      static uint16_t
      getIdStatic()
      {
        return 553;
      }

      PlanTransition();

      PlanTransition*
      clone() const override
      {
        return new PlanTransition(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PlanTransition::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PlanTransition";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(source_man) + IMC::getSerializationSize(dest_man) + IMC::getSerializationSize(conditions) + actions.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Plan Specification.
    class PlanSpecification: public Message
    {
    public:
      //! Plan ID.
      std::string plan_id;
      //! Plan Description.
      std::string description;
      //! Namespace.
      std::string vnamespace;
      //! Plan Variables.
      MessageList<PlanVariable> variables;
      //! Starting maneuver.
      std::string start_man_id;
      //! Maneuvers.
      MessageList<PlanManeuver> maneuvers;
      //! Transitions.
      MessageList<PlanTransition> transitions;
      //! Start Actions.
      MessageList<Message> start_actions;
      //! End Actions.
      MessageList<Message> end_actions;

      static uint16_t
      getIdStatic()
      {
        return 551;
      }

      PlanSpecification();

      PlanSpecification*
      clone() const override
      {
        return new PlanSpecification(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PlanSpecification::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PlanSpecification";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(description) + IMC::getSerializationSize(vnamespace) + variables.getSerializationSize() + IMC::getSerializationSize(start_man_id) + maneuvers.getSerializationSize() + transitions.getSerializationSize() + start_actions.getSerializationSize() + end_actions.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Emergency Control.
    class EmergencyControl: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Enable.
        ECTL_ENABLE = 0,
        //! Disable.
        ECTL_DISABLE = 1,
        //! Start.
        ECTL_START = 2,
        //! Stop.
        ECTL_STOP = 3,
        //! Query.
        ECTL_QUERY = 4,
        //! Set Plan.
        ECTL_SET_PLAN = 5
      };

      //! Command.
      uint8_t command;
      //! Plan Specification.
      InlineMessage<PlanSpecification> plan;

      static uint16_t
      getIdStatic()
      {
        return 554;
      }

      EmergencyControl();

      EmergencyControl*
      clone() const override
      {
        return new EmergencyControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EmergencyControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EmergencyControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return plan.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Emergency Control State.
    class EmergencyControlState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Not Configured.
        ECS_NOT_CONFIGURED = 0,
        //! Disabled.
        ECS_DISABLED = 1,
        //! Enabled.
        ECS_ENABLED = 2,
        //! Armed.
        ECS_ARMED = 3,
        //! Active.
        ECS_ACTIVE = 4,
        //! Stopping.
        ECS_STOPPING = 5
      };

      //! State.
      uint8_t state;
      //! Plan Id.
      std::string plan_id;
      //! Communications Level.
      uint8_t comm_level;

      static uint16_t
      getIdStatic()
      {
        return 555;
      }

      EmergencyControlState();

      EmergencyControlState*
      clone() const override
      {
        return new EmergencyControlState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EmergencyControlState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EmergencyControlState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(plan_id);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Plan DB.
    class PlanDB: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        DBT_REQUEST = 0,
        //! Reply -- Success.
        DBT_SUCCESS = 1,
        //! Reply -- Failure.
        DBT_FAILURE = 2,
        //! Reply -- In Progress.
        DBT_IN_PROGRESS = 3
      };

      //! Operation.
      enum OperationEnum
      {
        //! Set Plan.
        DBOP_SET = 0,
        //! Delete Plan.
        DBOP_DEL = 1,
        //! Get Plan.
        DBOP_GET = 2,
        //! Get Plan Info.
        DBOP_GET_INFO = 3,
        //! Clear Database.
        DBOP_CLEAR = 4,
        //! Get Database State (Simple).
        DBOP_GET_STATE = 5,
        //! Get Database State (Detailed).
        DBOP_GET_DSTATE = 6,
        //! Boot Notification.
        DBOP_BOOT = 7
      };

      //! Type.
      uint8_t type;
      //! Operation.
      uint8_t op;
      //! Request ID.
      uint16_t request_id;
      //! Plan ID.
      std::string plan_id;
      //! Argument.
      InlineMessage<Message> arg;
      //! Complementary Information.
      std::string info;

      static uint16_t
      getIdStatic()
      {
        return 556;
      }

      PlanDB();

      PlanDB*
      clone() const override
      {
        return new PlanDB(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PlanDB::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PlanDB";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(plan_id) + arg.getSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Plan DB Information.
    class PlanDBInformation: public Message
    {
    public:
      //! Plan ID.
      std::string plan_id;
      //! Plan Size.
      uint16_t plan_size;
      //! Last Changed -- Time.
      fp64_t change_time;
      //! Last Change -- Source Address.
      uint16_t change_sid;
      //! Last Change -- Source Name.
      std::string change_sname;
      //! MD5.
      std::vector<char> md5;

      static uint16_t
      getIdStatic()
      {
        return 558;
      }

      PlanDBInformation();

      PlanDBInformation*
      clone() const override
      {
        return new PlanDBInformation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PlanDBInformation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PlanDBInformation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 12;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(change_sname) + IMC::getSerializationSize(md5);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Plan DB State.
    class PlanDBState: public Message
    {
    public:
      //! Plan -- Count.
      uint16_t plan_count;
      //! Plan -- Size of all plans.
      uint32_t plan_size;
      //! Last Change -- Time.
      fp64_t change_time;
      //! Last Change -- Source Address.
      uint16_t change_sid;
      //! Last Change -- Source Name.
      std::string change_sname;
      //! MD5.
      std::vector<char> md5;
      //! Plan info.
      MessageList<PlanDBInformation> plans_info;

      static uint16_t
      getIdStatic()
      {
        return 557;
      }

      PlanDBState();

      PlanDBState*
      clone() const override
      {
        return new PlanDBState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PlanDBState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PlanDBState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 16;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(change_sname) + IMC::getSerializationSize(md5) + plans_info.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Plan Control.
    class PlanControl: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        PC_REQUEST = 0,
        //! Reply -- Success.
        PC_SUCCESS = 1,
        //! Reply -- Failure.
        PC_FAILURE = 2,
        //! Reply -- In Progress.
        PC_IN_PROGRESS = 3
      };

      //! Operation.
      enum OperationEnum
      {
        //! Start Plan.
        PC_START = 0,
        //! Stop Plan.
        PC_STOP = 1,
        //! Load Plan.
        PC_LOAD = 2,
        //! Get Plan.
        PC_GET = 3
      };

      //! Flags.
      enum FlagsBits
      {
        //! Calibrate Vehicle.
        FLG_CALIBRATE = 0x0001,
        //! Ignore Errors.
        FLG_IGNORE_ERRORS = 0x0002
      };

      //! Type.
      uint8_t type;
      //! Operation.
      uint8_t op;
      //! Request ID.
      uint16_t request_id;
      //! Plan Identifier.
      std::string plan_id;
      //! Flags.
      uint16_t flags;
      //! Request/Reply Argument.
      InlineMessage<Message> arg;
      //! Complementary Info.
      std::string info;

      static uint16_t
      getIdStatic()
      {
        return 559;
      }

      PlanControl();

      PlanControl*
      clone() const override
      {
        return new PlanControl(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PlanControl::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PlanControl";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(plan_id) + arg.getSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Plan Control State.
    class PlanControlState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Blocked.
        PCS_BLOCKED = 0,
        //! Ready.
        PCS_READY = 1,
        //! Initializing.
        PCS_INITIALIZING = 2,
        //! Executing.
        PCS_EXECUTING = 3
      };

      //! Last Plan Outcome.
      enum LastPlanOutcomeEnum
      {
        //! None.
        LPO_NONE = 0,
        //! Success.
        LPO_SUCCESS = 1,
        //! Failure.
        LPO_FAILURE = 2
      };

      //! State.
      uint8_t state;
      //! Plan -- ID.
      std::string plan_id;
      //! Plan -- ETA.
      int32_t plan_eta;
      //! Plan -- Progress.
      fp32_t plan_progress;
      //! Maneuver -- ID.
      std::string man_id;
      //! Maneuver -- Type.
      uint16_t man_type;
      //! Maneuver -- ETA.
      int32_t man_eta;
      //! Last Plan Outcome.
      uint8_t last_outcome;

      static uint16_t
      getIdStatic()
      {
        return 560;
      }

      PlanControlState();

      PlanControlState*
      clone() const override
      {
        return new PlanControlState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PlanControlState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PlanControlState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 16;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(man_id);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Plan Generation.
    class PlanGeneration: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Generate.
        CMD_GENERATE = 0,
        //! Execute.
        CMD_EXECUTE = 1
      };

      //! Operation.
      enum OperationEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Error.
        OP_ERROR = 1,
        //! Success.
        OP_SUCCESS = 2
      };

      //! Command.
      uint8_t cmd;
      //! Operation.
      uint8_t op;
      //! Plan Identifier.
      std::string plan_id;
      //! Parameters.
      std::string params;

      static uint16_t
      getIdStatic()
      {
        return 562;
      }

      PlanGeneration();

      PlanGeneration*
      clone() const override
      {
        return new PlanGeneration(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PlanGeneration::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PlanGeneration";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(params);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Leader State.
    class LeaderState: public Message
    {
    public:
      //! Action on the leader state.
      enum ActionontheleaderstateEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REPORT = 2
      };

      //! Group Name.
      std::string group_name;
      //! Action on the leader state.
      uint8_t op;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Height (WGS-84).
      fp32_t height;
      //! Offset north.
      fp32_t x;
      //! Offset east.
      fp32_t y;
      //! Offset down.
      fp32_t z;
      //! Rotation over x axis.
      fp32_t phi;
      //! Rotation over y axis.
      fp32_t theta;
      //! Rotation over z axis.
      fp32_t psi;
      //! Ground Velocity X (North).
      fp32_t vx;
      //! Ground Velocity Y (East).
      fp32_t vy;
      //! Ground Velocity Z (Down).
      fp32_t vz;
      //! Angular Velocity in x.
      fp32_t p;
      //! Angular Velocity in y.
      fp32_t q;
      //! Angular Velocity in z.
      fp32_t r;
      //! Stream Velocity X (North).
      fp32_t svx;
      //! Stream Velocity Y (East).
      fp32_t svy;
      //! Stream Velocity Z (Down).
      fp32_t svz;

      static uint16_t
      getIdStatic()
      {
        return 563;
      }

      LeaderState();

      LeaderState*
      clone() const override
      {
        return new LeaderState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return LeaderState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "LeaderState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 81;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(group_name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Plan Statistics.
    class PlanStatistics: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Before Plan.
        TP_PREPLAN = 0,
        //! During Plan.
        TP_INPLAN = 1,
        //! After Plan.
        TP_POSTPLAN = 2
      };

      //! Properties.
      enum PropertiesBits
      {
        //! Basic Plan.
        PRP_BASIC = 0x00,
        //! Nonlinear.
        PRP_NONLINEAR = 0x01,
        //! Infinite.
        PRP_INFINITE = 0x02,
        //! Cyclical.
        PRP_CYCLICAL = 0x04,
        //! All.
        PRP_ALL = 0x07
      };

      //! Plan Identifier.
      std::string plan_id;
      //! Type.
      uint8_t type;
      //! Properties.
      uint8_t properties;
      //! Durations.
      std::string durations;
      //! Distances.
      std::string distances;
      //! Actions.
      std::string actions;
      //! Fuel.
      std::string fuel;

      static uint16_t
      getIdStatic()
      {
        return 564;
      }

      PlanStatistics();

      PlanStatistics*
      clone() const override
      {
        return new PlanStatistics(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PlanStatistics::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PlanStatistics";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(durations) + IMC::getSerializationSize(distances) + IMC::getSerializationSize(actions) + IMC::getSerializationSize(fuel);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Reported State.
    class ReportedState: public Message
    {
    public:
      //! Source Type.
      enum SourceTypeEnum
      {
        //! Wi-Fi.
        STYPE_WI_FI = 0,
        //! Tracker.
        STYPE_TRACKER = 1,
        //! SMS.
        STYPE_SMS = 2,
        //! Acoustic Modem.
        STYPE_ACOUSTIC_MODEM = 3,
        //! Unknown source.
        STYPE_UNKNOWN = 254
      };

      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Depth.
      fp64_t depth;
      //! Roll.
      fp64_t roll;
      //! Pitch.
      fp64_t pitch;
      //! Yaw.
      fp64_t yaw;
      //! Reception Time.
      fp64_t rcp_time;
      //! System Identifier.
      std::string sid;
      //! Source Type.
      uint8_t s_type;

      static uint16_t
      getIdStatic()
      {
        return 600;
      }

      ReportedState();

      ReportedState*
      clone() const override
      {
        return new ReportedState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ReportedState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ReportedState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 57;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(sid);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Remote Sensor Info.
    class RemoteSensorInfo: public Message
    {
    public:
      //! Id.
      std::string id;
      //! Class.
      std::string sensor_class;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Altitude.
      fp32_t alt;
      //! Heading.
      fp32_t heading;
      //! Custom Data.
      std::string data;

      static uint16_t
      getIdStatic()
      {
        return 601;
      }

      RemoteSensorInfo();

      RemoteSensorInfo*
      clone() const override
      {
        return new RemoteSensorInfo(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RemoteSensorInfo::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RemoteSensorInfo";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 24;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(id) + IMC::getSerializationSize(sensor_class) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! MapPoint.
    class MapPoint: public Message
    {
    public:
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Altitude.
      fp32_t alt;

      static uint16_t
      getIdStatic()
      {
        return 604;
      }

      MapPoint();

      MapPoint*
      clone() const override
      {
        return new MapPoint(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return MapPoint::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "MapPoint";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 20;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Map Feature.
    class MapFeature: public Message
    {
    public:
      //! FeatureType.
      enum FeatureTypeEnum
      {
        //! Point of Interest.
        FTYPE_POI = 0,
        //! Filled Polygon.
        FTYPE_FILLEDPOLY = 1,
        //! Countoured Polygon.
        FTYPE_CONTOUREDPOLY = 2,
        //! Line.
        FTYPE_LINE = 3,
        //! Transponder.
        FTYPE_TRANSPONDER = 4,
        //! Start Location.
        FTYPE_STARTLOC = 5,
        //! Home Reference.
        FTYPE_HOMEREF = 6
      };

      //! Identifier.
      std::string id;
      //! FeatureType.
      uint8_t feature_type;
      //! RedComponent.
      uint8_t rgb_red;
      //! GreenComponent.
      uint8_t rgb_green;
      //! BlueComponent.
      uint8_t rgb_blue;
      //! Feature.
      MessageList<MapPoint> feature;

      static uint16_t
      getIdStatic()
      {
        return 603;
      }

      MapFeature();

      MapFeature*
      clone() const override
      {
        return new MapFeature(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return MapFeature::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "MapFeature";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(id) + feature.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Map.
    class Map: public Message
    {
    public:
      //! Identifier.
      std::string id;
      //! Features.
      MessageList<MapFeature> features;

      static uint16_t
      getIdStatic()
      {
        return 602;
      }

      Map();

      Map*
      clone() const override
      {
        return new Map(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Map::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Map";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(id) + features.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! CCU Event.
    class CcuEvent: public Message
    {
    public:
      //! Event Type.
      enum EventTypeEnum
      {
        //! Log Book Entry Added.
        EVT_LOG_ENTRY = 1,
        //! Plan Added.
        EVT_PLAN_ADDED = 2,
        //! Plan Removed.
        EVT_PLAN_REMOVED = 3,
        //! Plan Changed.
        EVT_PLAN_CHANGED = 4,
        //! Map feature added.
        EVT_MAP_FEATURE_ADDED = 5,
        //! Map feature removed.
        EVT_MAP_FEATURE_REMOVED = 6,
        //! Map feature changed.
        EVT_MAP_FEATURE_CHANGED = 7,
        //! The sender is now teleoperating the vehicle.
        EVT_TELEOPERATION_STARTED = 8,
        //! The sender stopped teleoperating the vehicle.
        EVT_TELEOPERATION_ENDED = 9
      };

      //! Event Type.
      uint8_t type;
      //! Identifier.
      std::string id;
      //! Additional Data.
      InlineMessage<Message> arg;

      static uint16_t
      getIdStatic()
      {
        return 606;
      }

      CcuEvent();

      CcuEvent*
      clone() const override
      {
        return new CcuEvent(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CcuEvent::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CcuEvent";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(id) + arg.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Vehicle Links.
    class VehicleLinks: public Message
    {
    public:
      //! Local Name.
      std::string localname;
      //! Active Links.
      MessageList<Announce> links;

      static uint16_t
      getIdStatic()
      {
        return 650;
      }

      VehicleLinks();

      VehicleLinks*
      clone() const override
      {
        return new VehicleLinks(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return VehicleLinks::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "VehicleLinks";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(localname) + links.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! TREX Observation.
    class TrexObservation: public Message
    {
    public:
      //! Timeline.
      std::string timeline;
      //! Predicate.
      std::string predicate;
      //! Attributes.
      std::string attributes;

      static uint16_t
      getIdStatic()
      {
        return 651;
      }

      TrexObservation();

      TrexObservation*
      clone() const override
      {
        return new TrexObservation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TrexObservation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TrexObservation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(timeline) + IMC::getSerializationSize(predicate) + IMC::getSerializationSize(attributes);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! TREX Command.
    class TrexCommand: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Disable TREX.
        OP_DISABLE = 0,
        //! Enable TREX.
        OP_ENABLE = 1,
        //! Post Goal.
        OP_POST_GOAL = 2,
        //! Recall Goal.
        OP_RECALL_GOAL = 3,
        //! Request current plan.
        OP_REQUEST_PLAN = 4,
        //! Report current plan.
        OP_REPORT_PLAN = 5
      };

      //! Command.
      uint8_t command;
      //! Goal Id.
      std::string goal_id;
      //! Goal XML.
      std::string goal_xml;

      static uint16_t
      getIdStatic()
      {
        return 652;
      }

      TrexCommand();

      TrexCommand*
      clone() const override
      {
        return new TrexCommand(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TrexCommand::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TrexCommand";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(goal_id) + IMC::getSerializationSize(goal_xml);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! TREX Attribute.
    class TrexAttribute: public Message
    {
    public:
      //! Attribute type.
      enum AttributetypeEnum
      {
        //! Boolean Domain.
        TYPE_BOOL = 1,
        //! Integer Domain.
        TYPE_INT = 2,
        //! Float Domain.
        TYPE_FLOAT = 3,
        //! String Domain.
        TYPE_STRING = 4,
        //! Enumerated Domain.
        TYPE_ENUM = 5
      };

      //! Attribute Name.
      std::string name;
      //! Attribute type.
      uint8_t attr_type;
      //! Minimum.
      std::string min;
      //! Maximum.
      std::string max;

      static uint16_t
      getIdStatic()
      {
        return 656;
      }

      TrexAttribute();

      TrexAttribute*
      clone() const override
      {
        return new TrexAttribute(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TrexAttribute::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TrexAttribute";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name) + IMC::getSerializationSize(min) + IMC::getSerializationSize(max);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! TREX Token.
    class TrexToken: public Message
    {
    public:
      //! Timeline.
      std::string timeline;
      //! Predicate.
      std::string predicate;
      //! Attributes.
      MessageList<TrexAttribute> attributes;

      static uint16_t
      getIdStatic()
      {
        return 657;
      }

      TrexToken();

      TrexToken*
      clone() const override
      {
        return new TrexToken(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TrexToken::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TrexToken";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(timeline) + IMC::getSerializationSize(predicate) + attributes.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! TREX Operation.
    class TrexOperation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Post Token.
        OP_POST_TOKEN = 1,
        //! Post Goal.
        OP_POST_GOAL = 2,
        //! Recall Goal.
        OP_RECALL_GOAL = 3,
        //! Request current plan.
        OP_REQUEST_PLAN = 4,
        //! Report current plan.
        OP_REPORT_PLAN = 5
      };

      //! Operation.
      uint8_t op;
      //! Goal Id.
      std::string goal_id;
      //! Token.
      InlineMessage<TrexToken> token;

      static uint16_t
      getIdStatic()
      {
        return 655;
      }

      TrexOperation();

      TrexOperation*
      clone() const override
      {
        return new TrexOperation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TrexOperation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TrexOperation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(goal_id) + token.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! TREX Plan.
    class TrexPlan: public Message
    {
    public:
      //! Reactor name.
      std::string reactor;
      //! Tokens.
      MessageList<TrexToken> tokens;

      static uint16_t
      getIdStatic()
      {
        return 658;
      }

      TrexPlan();

      TrexPlan*
      clone() const override
      {
        return new TrexPlan(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TrexPlan::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TrexPlan";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(reactor) + tokens.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Event.
    class Event: public Message
    {
    public:
      //! Topic.
      std::string topic;
      //! Data.
      std::string data;

      static uint16_t
      getIdStatic()
      {
        return 660;
      }

      Event();

      Event*
      clone() const override
      {
        return new Event(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Event::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Event";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(topic) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Compressed Image.
    class CompressedImage: public Message
    {
    public:
      //! Frame Id.
      uint8_t frameid;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 702;
      }

      CompressedImage();

      CompressedImage*
      clone() const override
      {
        return new CompressedImage(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CompressedImage::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CompressedImage";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Image Transmission Settings.
    class ImageTxSettings: public Message
    {
    public:
      //! Frames Per Second.
      uint8_t fps;
      //! Quality.
      uint8_t quality;
      //! Repetitions.
      uint8_t reps;
      //! Target Size.
      uint8_t tsize;

      static uint16_t
      getIdStatic()
      {
        return 703;
      }

      ImageTxSettings();

      ImageTxSettings*
      clone() const override
      {
        return new ImageTxSettings(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ImageTxSettings::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ImageTxSettings";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Remote State.
    class RemoteState: public Message
    {
    public:
      //! Latitude WGS-84.
      fp32_t lat;
      //! Longitude WGS-84.
      fp32_t lon;
      //! Depth.
      uint8_t depth;
      //! Speed.
      fp32_t speed;
      //! Heading.
      fp32_t psi;

      static uint16_t
      getIdStatic()
      {
        return 750;
      }

      RemoteState();

      RemoteState*
      clone() const override
      {
        return new RemoteState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return RemoteState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "RemoteState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 17;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Target.
    class Target: public Message
    {
    public:
      //! Label.
      std::string label;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Course Over Ground.
      fp32_t cog;
      //! Speed Over Ground.
      fp32_t sog;

      static uint16_t
      getIdStatic()
      {
        return 800;
      }

      Target();

      Target*
      clone() const override
      {
        return new Target(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Target::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Target";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 29;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(label);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! EntityParameter.
    class EntityParameter: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      std::string value;

      static uint16_t
      getIdStatic()
      {
        return 801;
      }

      EntityParameter();

      EntityParameter*
      clone() const override
      {
        return new EntityParameter(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EntityParameter::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EntityParameter";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name) + IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! EntityParameters.
    class EntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;
      //! Parameters.
      MessageList<EntityParameter> params;

      static uint16_t
      getIdStatic()
      {
        return 802;
      }

      EntityParameters();

      EntityParameters*
      clone() const override
      {
        return new EntityParameters(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return EntityParameters::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "EntityParameters";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name) + params.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! QueryEntityParameters.
    class QueryEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;
      //! Visibility.
      std::string visibility;
      //! Scope.
      std::string scope;

      static uint16_t
      getIdStatic()
      {
        return 803;
      }

      QueryEntityParameters();

      QueryEntityParameters*
      clone() const override
      {
        return new QueryEntityParameters(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return QueryEntityParameters::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "QueryEntityParameters";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name) + IMC::getSerializationSize(visibility) + IMC::getSerializationSize(scope);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! SetEntityParameters.
    class SetEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;
      //! Parameters.
      MessageList<EntityParameter> params;

      static uint16_t
      getIdStatic()
      {
        return 804;
      }

      SetEntityParameters();

      SetEntityParameters*
      clone() const override
      {
        return new SetEntityParameters(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SetEntityParameters::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SetEntityParameters";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name) + params.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! SaveEntityParameters.
    class SaveEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;

      static uint16_t
      getIdStatic()
      {
        return 805;
      }

      SaveEntityParameters();

      SaveEntityParameters*
      clone() const override
      {
        return new SaveEntityParameters(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SaveEntityParameters::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SaveEntityParameters";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Create Session.
    class CreateSession: public Message
    {
    public:
      //! Session Timeout.
      uint32_t timeout;

      static uint16_t
      getIdStatic()
      {
        return 806;
      }

      CreateSession();

      CreateSession*
      clone() const override
      {
        return new CreateSession(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CreateSession::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CreateSession";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Close Session.
    class CloseSession: public Message
    {
    public:
      //! Session Identifier.
      uint32_t sessid;

      static uint16_t
      getIdStatic()
      {
        return 807;
      }

      CloseSession();

      CloseSession*
      clone() const override
      {
        return new CloseSession(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CloseSession::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CloseSession";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Session Subscription.
    class SessionSubscription: public Message
    {
    public:
      //! Session Identifier.
      uint32_t sessid;
      //! Messages to subscribe.
      std::string messages;

      static uint16_t
      getIdStatic()
      {
        return 808;
      }

      SessionSubscription();

      SessionSubscription*
      clone() const override
      {
        return new SessionSubscription(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SessionSubscription::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SessionSubscription";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(messages);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Session Keep-Alive.
    class SessionKeepAlive: public Message
    {
    public:
      //! Session Identifier.
      uint32_t sessid;

      static uint16_t
      getIdStatic()
      {
        return 809;
      }

      SessionKeepAlive();

      SessionKeepAlive*
      clone() const override
      {
        return new SessionKeepAlive(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SessionKeepAlive::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SessionKeepAlive";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Session Status.
    class SessionStatus: public Message
    {
    public:
      //! Status.
      enum StatusEnum
      {
        //! Established.
        STATUS_ESTABLISHED = 1,
        //! Closed.
        STATUS_CLOSED = 2
      };

      //! Session Identifier.
      uint32_t sessid;
      //! Status.
      uint8_t status;

      static uint16_t
      getIdStatic()
      {
        return 810;
      }

      SessionStatus();

      SessionStatus*
      clone() const override
      {
        return new SessionStatus(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SessionStatus::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SessionStatus";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Push Entity Parameters.
    class PushEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;

      static uint16_t
      getIdStatic()
      {
        return 811;
      }

      PushEntityParameters();

      PushEntityParameters*
      clone() const override
      {
        return new PushEntityParameters(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PushEntityParameters::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PushEntityParameters";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Pop Entity Parameters.
    class PopEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;

      static uint16_t
      getIdStatic()
      {
        return 812;
      }

      PopEntityParameters();

      PopEntityParameters*
      clone() const override
      {
        return new PopEntityParameters(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return PopEntityParameters::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "PopEntityParameters";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! I/O Event.
    class IoEvent: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Input Available.
        IOV_TYPE_INPUT = 1,
        //! Input Error.
        IOV_TYPE_INPUT_ERROR = 2
      };

      //! Type.
      uint8_t type;
      //! Error Message.
      std::string error;

      static uint16_t
      getIdStatic()
      {
        return 813;
      }

      IoEvent();

      IoEvent*
      clone() const override
      {
        return new IoEvent(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return IoEvent::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "IoEvent";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! UamTxFrame.
    class UamTxFrame: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Acknowledgement.
        UTF_ACK = 0x01,
        //! Delayed.
        UTF_DELAYED = 0x02,
        //! Forced.
        UTF_FORCED = 0x04
      };

      //! Sequence Id.
      uint16_t seq;
      //! Destination System.
      std::string sys_dst;
      //! Flags.
      uint8_t flags;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 814;
      }

      UamTxFrame();

      UamTxFrame*
      clone() const override
      {
        return new UamTxFrame(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UamTxFrame::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UamTxFrame";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(sys_dst) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! UamRxFrame.
    class UamRxFrame: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Promiscuous.
        URF_PROMISCUOUS = 0x01,
        //! Delayed.
        URF_DELAYED = 0x02
      };

      //! Source System.
      std::string sys_src;
      //! Destination System.
      std::string sys_dst;
      //! Flags.
      uint8_t flags;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 815;
      }

      UamRxFrame();

      UamRxFrame*
      clone() const override
      {
        return new UamRxFrame(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UamRxFrame::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UamRxFrame";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(sys_src) + IMC::getSerializationSize(sys_dst) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! UamTxStatus.
    class UamTxStatus: public Message
    {
    public:
      //! Value.
      enum ValueEnum
      {
        //! Transmission Completed.
        UTS_DONE = 0,
        //! Transmission Failed.
        UTS_FAILED = 1,
        //! Transmission Canceled.
        UTS_CANCELED = 2,
        //! Modem is busy.
        UTS_BUSY = 3,
        //! Invalid address.
        UTS_INV_ADDR = 4,
        //! In Progress.
        UTS_IP = 5,
        //! Unsupported operation.
        UTS_UNSUPPORTED = 6,
        //! Invalid transmission size.
        UTS_INV_SIZE = 7,
        //! Message has been sent.
        UTS_SENT = 8,
        //! Message has been acknowledged by the destination.
        UTS_DELIVERED = 9
      };

      //! Sequence Id.
      uint16_t seq;
      //! Value.
      uint8_t value;
      //! Error Message.
      std::string error;

      static uint16_t
      getIdStatic()
      {
        return 816;
      }

      UamTxStatus();

      UamTxStatus*
      clone() const override
      {
        return new UamTxStatus(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UamTxStatus::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UamTxStatus";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(error);
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! UamRxRange.
    class UamRxRange: public Message
    {
    public:
      //! Sequence Id.
      uint16_t seq;
      //! System.
      std::string sys;
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 817;
      }

      UamRxRange();

      UamRxRange*
      clone() const override
      {
        return new UamRxRange(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UamRxRange::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UamRxRange";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(sys);
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! UamTxRange.
    class UamTxRange: public Message
    {
    public:
      //! Sequence Id.
      uint16_t seq;
      //! Destination System.
      std::string sys_dst;
      //! Timeout.
      fp32_t timeout;

      static uint16_t
      getIdStatic()
      {
        return 818;
      }

      UamTxRange();

      UamTxRange*
      clone() const override
      {
        return new UamTxRange(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UamTxRange::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UamTxRange";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 6;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(sys_dst);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Formation Control Parameters.
    class FormCtrlParam: public Message
    {
    public:
      //! Action.
      enum ActionEnum
      {
        //! Request.
        OP_REQ = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REP = 2
      };

      //! Action.
      uint8_t action;
      //! Longitudinal Gain.
      fp32_t longain;
      //! Lateral Gain.
      fp32_t latgain;
      //! Boundary Layer Thickness.
      uint32_t bondthick;
      //! Leader Gain.
      fp32_t leadgain;
      //! Deconfliction Gain.
      fp32_t deconflgain;

      static uint16_t
      getIdStatic()
      {
        return 820;
      }

      FormCtrlParam();

      FormCtrlParam*
      clone() const override
      {
        return new FormCtrlParam(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FormCtrlParam::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FormCtrlParam";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 21;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Formation Evaluation Data.
    class FormationEval: public Message
    {
    public:
      //! Mean position error.
      fp32_t err_mean;
      //! Absolute minimum distance.
      fp32_t dist_min_abs;
      //! Mean minimum distance.
      fp32_t dist_min_mean;

      static uint16_t
      getIdStatic()
      {
        return 821;
      }

      FormationEval();

      FormationEval*
      clone() const override
      {
        return new FormationEval(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FormationEval::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FormationEval";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 12;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Formation Control Parameters.
    class FormationControlParams: public Message
    {
    public:
      //! Action.
      enum ActionEnum
      {
        //! Request.
        OP_REQ = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REP = 2
      };

      //! Action.
      uint8_t action;
      //! Longitudinal Gain.
      fp32_t lon_gain;
      //! Lateral Gain.
      fp32_t lat_gain;
      //! Boundary Layer Thickness.
      fp32_t bond_thick;
      //! Leader Gain.
      fp32_t lead_gain;
      //! Deconfliction Gain.
      fp32_t deconfl_gain;
      //! Acceleration Switch Gain.
      fp32_t accel_switch_gain;
      //! Safety Distance.
      fp32_t safe_dist;
      //! Deconfliction Offset.
      fp32_t deconflict_offset;
      //! Acceleration Safety Margin.
      fp32_t accel_safe_margin;
      //! Maximum Longitudinal Acceleration.
      fp32_t accel_lim_x;

      static uint16_t
      getIdStatic()
      {
        return 822;
      }

      FormationControlParams();

      FormationControlParams*
      clone() const override
      {
        return new FormationControlParams(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FormationControlParams::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FormationControlParams";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 41;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Formation Evaluation Data.
    class FormationEvaluation: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        FC_REQUEST = 0,
        //! Report.
        FC_REPORT = 1
      };

      //! Operation.
      enum OperationEnum
      {
        //! Start.
        OP_START = 0,
        //! Stop.
        OP_STOP = 1,
        //! Ready.
        OP_READY = 2,
        //! Executing.
        OP_EXECUTING = 3,
        //! Failure.
        OP_FAILURE = 4
      };

      //! Type.
      uint8_t type;
      //! Operation.
      uint8_t op;
      //! Mean Position Error.
      fp32_t err_mean;
      //! Absolute Minimum Distance.
      fp32_t dist_min_abs;
      //! Mean Minimum Distance.
      fp32_t dist_min_mean;
      //! Mean Roll Rate.
      fp32_t roll_rate_mean;
      //! Evaluation Time.
      fp32_t time;
      //! Formation Control Parameters.
      InlineMessage<FormationControlParams> controlparams;

      static uint16_t
      getIdStatic()
      {
        return 823;
      }

      FormationEvaluation();

      FormationEvaluation*
      clone() const override
      {
        return new FormationEvaluation(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FormationEvaluation::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FormationEvaluation";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 22;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return controlparams.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! SOI Waypoint.
    class SoiWaypoint: public Message
    {
    public:
      //! Latitude.
      fp32_t lat;
      //! Longitude.
      fp32_t lon;
      //! Time Of Arrival.
      uint32_t eta;
      //! Duration.
      uint16_t duration;

      static uint16_t
      getIdStatic()
      {
        return 850;
      }

      SoiWaypoint();

      SoiWaypoint*
      clone() const override
      {
        return new SoiWaypoint(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SoiWaypoint::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SoiWaypoint";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 14;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! SOI Plan.
    class SoiPlan: public Message
    {
    public:
      //! Plan Identifier.
      uint16_t plan_id;
      //! Waypoints.
      MessageList<SoiWaypoint> waypoints;

      static uint16_t
      getIdStatic()
      {
        return 851;
      }

      SoiPlan();

      SoiPlan*
      clone() const override
      {
        return new SoiPlan(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SoiPlan::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SoiPlan";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return waypoints.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! SOI Command.
    class SoiCommand: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        SOITYPE_REQUEST = 1,
        //! Success.
        SOITYPE_SUCCESS = 2,
        //! Error.
        SOITYPE_ERROR = 3
      };

      //! Command.
      enum CommandEnum
      {
        //! Execute Plan.
        SOICMD_EXEC = 1,
        //! Stop Execution.
        SOICMD_STOP = 2,
        //! Set Parameters.
        SOICMD_SET_PARAMS = 3,
        //! Get Parameters.
        SOICMD_GET_PARAMS = 4,
        //! Get Plan.
        SOICMD_GET_PLAN = 5,
        //! Resume Execution.
        SOICMD_RESUME = 6
      };

      //! Type.
      uint8_t type;
      //! Command.
      uint8_t command;
      //! Settings.
      std::string settings;
      //! Plan.
      InlineMessage<SoiPlan> plan;
      //! Extra Information.
      std::string info;

      static uint16_t
      getIdStatic()
      {
        return 852;
      }

      SoiCommand();

      SoiCommand*
      clone() const override
      {
        return new SoiCommand(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SoiCommand::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SoiCommand";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 2;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(settings) + plan.getSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! SOI State.
    class SoiState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Executing.
        SOISTATE_EXEC = 1,
        //! Idle.
        SOISTATE_IDLE = 2,
        //! Inactive.
        SOISTATE_INACTIVE = 3
      };

      //! State.
      uint8_t state;
      //! Plan Identifier.
      uint16_t plan_id;
      //! Waypoint Identifier.
      uint8_t wpt_id;
      //! Settings Checksum.
      uint16_t settings_chk;

      static uint16_t
      getIdStatic()
      {
        return 853;
      }

      SoiState();

      SoiState*
      clone() const override
      {
        return new SoiState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SoiState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SoiState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 6;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Message Fragment.
    class MessagePart: public Message
    {
    public:
      //! Transmission Unique Id.
      uint8_t uid;
      //! Fragment Number.
      uint8_t frag_number;
      //! Total Number of fragments.
      uint8_t num_frags;
      //! Fragment Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic()
      {
        return 877;
      }

      MessagePart();

      MessagePart*
      clone() const override
      {
        return new MessagePart(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return MessagePart::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "MessagePart";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Neptus Blob.
    class NeptusBlob: public Message
    {
    public:
      //! ContentType.
      std::string content_type;
      //! Content.
      std::vector<char> content;

      static uint16_t
      getIdStatic()
      {
        return 888;
      }

      NeptusBlob();

      NeptusBlob*
      clone() const override
      {
        return new NeptusBlob(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return NeptusBlob::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "NeptusBlob";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(content_type) + IMC::getSerializationSize(content);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Aborted.
    class Aborted: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 889;
      }

      Aborted();

      Aborted*
      clone() const override
      {
        return new Aborted(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Aborted::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Aborted";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! USBL Angles.
    class UsblAngles: public Message
    {
    public:
      //! Target.
      uint16_t target;
      //! Bearing.
      fp32_t bearing;
      //! Elevation.
      fp32_t elevation;

      static uint16_t
      getIdStatic()
      {
        return 890;
      }

      UsblAngles();

      UsblAngles*
      clone() const override
      {
        return new UsblAngles(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UsblAngles::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UsblAngles";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 10;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! USBL Position.
    class UsblPosition: public Message
    {
    public:
      //! Target.
      uint16_t target;
      //! X.
      fp32_t x;
      //! Y.
      fp32_t y;
      //! Z.
      fp32_t z;

      static uint16_t
      getIdStatic()
      {
        return 891;
      }

      UsblPosition();

      UsblPosition*
      clone() const override
      {
        return new UsblPosition(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UsblPosition::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UsblPosition";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 14;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! USBL Fix.
    class UsblFix: public Message
    {
    public:
      //! Target.
      uint16_t target;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Z Units.
      uint8_t z_units;
      //! Z Reference.
      fp32_t z;

      static uint16_t
      getIdStatic()
      {
        return 892;
      }

      UsblFix();

      UsblFix*
      clone() const override
      {
        return new UsblFix(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UsblFix::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UsblFix";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 23;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Parameters XML.
    class ParametersXml: public Message
    {
    public:
      //! Locale.
      std::string locale;
      //! Configuration Data.
      std::vector<char> config;

      static uint16_t
      getIdStatic()
      {
        return 893;
      }

      ParametersXml();

      ParametersXml*
      clone() const override
      {
        return new ParametersXml(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ParametersXml::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ParametersXml";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(locale) + IMC::getSerializationSize(config);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Get Parameters XML.
    class GetParametersXml: public Message
    {
    public:

      static uint16_t
      getIdStatic()
      {
        return 894;
      }

      GetParametersXml();

      GetParametersXml*
      clone() const override
      {
        return new GetParametersXml(*this);
      }

      void
      clear() override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GetParametersXml::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GetParametersXml";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }
    };

    //! Set Image Coordinates.
    class SetImageCoords: public Message
    {
    public:
      //! Camera Identifier.
      uint8_t camid;
      //! X.
      uint16_t x;
      //! Y.
      uint16_t y;

      static uint16_t
      getIdStatic()
      {
        return 895;
      }

      SetImageCoords();

      SetImageCoords*
      clone() const override
      {
        return new SetImageCoords(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SetImageCoords::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SetImageCoords";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Get Image Coordinates.
    class GetImageCoords: public Message
    {
    public:
      //! Camera Identifier.
      uint8_t camid;
      //! X.
      uint16_t x;
      //! Y.
      uint16_t y;

      static uint16_t
      getIdStatic()
      {
        return 896;
      }

      GetImageCoords();

      GetImageCoords*
      clone() const override
      {
        return new GetImageCoords(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GetImageCoords::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GetImageCoords";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Get World Coordinates.
    class GetWorldCoordinates: public Message
    {
    public:
      //! Tracking.
      uint8_t tracking;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! X.
      fp32_t x;
      //! Y.
      fp32_t y;
      //! Z.
      fp32_t z;

      static uint16_t
      getIdStatic()
      {
        return 897;
      }

      GetWorldCoordinates();

      GetWorldCoordinates*
      clone() const override
      {
        return new GetWorldCoordinates(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GetWorldCoordinates::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GetWorldCoordinates";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 29;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! USBL Angles Extended.
    class UsblAnglesExtended: public Message
    {
    public:
      //! Target.
      std::string target;
      //! Local Bearing.
      fp32_t lbearing;
      //! Local Elevation.
      fp32_t lelevation;
      //! Bearing.
      fp32_t bearing;
      //! Elevation.
      fp32_t elevation;
      //! Roll Angle.
      fp32_t phi;
      //! Pitch Angle.
      fp32_t theta;
      //! Yaw Angle.
      fp32_t psi;
      //! Accuracy.
      fp32_t accuracy;

      static uint16_t
      getIdStatic()
      {
        return 898;
      }

      UsblAnglesExtended();

      UsblAnglesExtended*
      clone() const override
      {
        return new UsblAnglesExtended(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UsblAnglesExtended::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UsblAnglesExtended";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 32;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(target);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! USBL Position Extended.
    class UsblPositionExtended: public Message
    {
    public:
      //! Target.
      std::string target;
      //! X.
      fp32_t x;
      //! Y.
      fp32_t y;
      //! Z.
      fp32_t z;
      //! N.
      fp32_t n;
      //! E.
      fp32_t e;
      //! D.
      fp32_t d;
      //! Roll Angle.
      fp32_t phi;
      //! Pitch Angle.
      fp32_t theta;
      //! Yaw Angle.
      fp32_t psi;
      //! Accuracy.
      fp32_t accuracy;

      static uint16_t
      getIdStatic()
      {
        return 899;
      }

      UsblPositionExtended();

      UsblPositionExtended*
      clone() const override
      {
        return new UsblPositionExtended(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UsblPositionExtended::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UsblPositionExtended";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 40;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(target);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! USBL Fix Extended.
    class UsblFixExtended: public Message
    {
    public:
      //! Target.
      std::string target;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Z Units.
      uint8_t z_units;
      //! Z Reference.
      fp32_t z;
      //! Accuracy.
      fp32_t accuracy;

      static uint16_t
      getIdStatic()
      {
        return 900;
      }

      UsblFixExtended();

      UsblFixExtended*
      clone() const override
      {
        return new UsblFixExtended(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UsblFixExtended::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UsblFixExtended";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 25;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(target);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! USBL Modem Configuration.
    class UsblModem: public Message
    {
    public:
      //! Modem Name.
      std::string name;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;

      static uint16_t
      getIdStatic()
      {
        return 901;
      }

      UsblModem();

      UsblModem*
      clone() const override
      {
        return new UsblModem(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UsblModem::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UsblModem";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 21;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! USBL Configuration.
    class UsblConfig: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Set LBL Configuration.
        OP_SET_CFG = 0,
        //! Retrieve LBL Configuration.
        OP_GET_CFG = 1,
        //! Reply to a GET command.
        OP_CUR_CFG = 2
      };

      //! Operation.
      uint8_t op;
      //! Modems.
      MessageList<UsblModem> modems;

      static uint16_t
      getIdStatic()
      {
        return 902;
      }

      UsblConfig();

      UsblConfig*
      clone() const override
      {
        return new UsblConfig(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return UsblConfig::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "UsblConfig";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return modems.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Dissolved Organic Matter.
    class DissolvedOrganicMatter: public Message
    {
    public:
      //! Type of measurement.
      enum TypeofmeasurementEnum
      {
        //! Colored.
        DT_COLORED = 0,
        //! Fluorescent.
        DT_FLUORESCENT = 1
      };

      //! Value.
      fp32_t value;
      //! Type of measurement.
      uint8_t type;

      static uint16_t
      getIdStatic()
      {
        return 903;
      }

      DissolvedOrganicMatter();

      DissolvedOrganicMatter*
      clone() const override
      {
        return new DissolvedOrganicMatter(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DissolvedOrganicMatter::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DissolvedOrganicMatter";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 5;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Optical Backscattering Coefficient.
    class OpticalBackscatter: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 904;
      }

      OpticalBackscatter();

      OpticalBackscatter*
      clone() const override
      {
        return new OpticalBackscatter(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return OpticalBackscatter::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "OpticalBackscatter";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Tachograph.
    class Tachograph: public Message
    {
    public:
      //! Last Service Timestamp.
      fp64_t timestamp_last_service;
      //! Time - Next Service.
      fp32_t time_next_service;
      //! Time Motor - Next Service.
      fp32_t time_motor_next_service;
      //! Time Idle - Ground.
      fp32_t time_idle_ground;
      //! Time Idle - Air.
      fp32_t time_idle_air;
      //! Time Idle - Water.
      fp32_t time_idle_water;
      //! Time Idle - Underwater.
      fp32_t time_idle_underwater;
      //! Time Idle - Unknown.
      fp32_t time_idle_unknown;
      //! Time Motor - Ground.
      fp32_t time_motor_ground;
      //! Time Motor - Air.
      fp32_t time_motor_air;
      //! Time Motor - Water.
      fp32_t time_motor_water;
      //! Time Motor - Underwater.
      fp32_t time_motor_underwater;
      //! Time Motor - Unknown.
      fp32_t time_motor_unknown;
      //! Recorded RPMs - Minimum.
      int16_t rpm_min;
      //! Recorded RPMs - Maximum.
      int16_t rpm_max;
      //! Recorded Depth - Maximum.
      fp32_t depth_max;

      static uint16_t
      getIdStatic()
      {
        return 905;
      }

      Tachograph();

      Tachograph*
      clone() const override
      {
        return new Tachograph(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Tachograph::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Tachograph";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 64;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! APM Status.
    class ApmStatus: public Message
    {
    public:
      //! Severity.
      enum SeverityEnum
      {
        //! Emergency.
        APM_EMERGENCY = 0,
        //! Alert.
        APM_ALERT = 1,
        //! Critical.
        APM_CRITICAL = 2,
        //! Error.
        APM_ERROR = 3,
        //! Warning.
        APM_WARNING = 4,
        //! Notice.
        APM_NOTICE = 5,
        //! Info.
        APM_INFO = 6,
        //! Debug.
        APM_DEBUG = 7
      };

      //! Severity.
      uint8_t severity;
      //! Text.
      std::string text;

      static uint16_t
      getIdStatic()
      {
        return 906;
      }

      ApmStatus();

      ApmStatus*
      clone() const override
      {
        return new ApmStatus(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ApmStatus::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ApmStatus";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! SADC Readings.
    class SadcReadings: public Message
    {
    public:
      //! Gain.
      enum GainEnum
      {
        //! x1.
        GAIN_X1 = 0,
        //! x10.
        GAIN_X10 = 1,
        //! x100.
        GAIN_X100 = 2
      };

      //! Channel.
      int8_t channel;
      //! Value.
      int32_t value;
      //! Gain.
      uint8_t gain;

      static uint16_t
      getIdStatic()
      {
        return 907;
      }

      SadcReadings();

      SadcReadings*
      clone() const override
      {
        return new SadcReadings(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return SadcReadings::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "SadcReadings";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 6;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! DMS Detection.
    class DmsDetection: public Message
    {
    public:
      //! Channel 1.
      fp32_t ch01;
      //! Channel 2.
      fp32_t ch02;
      //! Channel 3.
      fp32_t ch03;
      //! Channel 4.
      fp32_t ch04;
      //! Channel 5.
      fp32_t ch05;
      //! Channel 6.
      fp32_t ch06;
      //! Channel 7.
      fp32_t ch07;
      //! Channel 8.
      fp32_t ch08;
      //! Channel 9.
      fp32_t ch09;
      //! Channel 10.
      fp32_t ch10;
      //! Channel 11.
      fp32_t ch11;
      //! Channel 12.
      fp32_t ch12;
      //! Channel 13.
      fp32_t ch13;
      //! Channel 14.
      fp32_t ch14;
      //! Channel 15.
      fp32_t ch15;
      //! Channel 16.
      fp32_t ch16;

      static uint16_t
      getIdStatic()
      {
        return 908;
      }

      DmsDetection();

      DmsDetection*
      clone() const override
      {
        return new DmsDetection(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return DmsDetection::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "DmsDetection";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 64;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Home Position.
    class HomePosition: public Message
    {
    public:
      //! Action on the vehicle home position.
      enum ActiononthevehiclehomepositionEnum
      {
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REPORT = 2
      };

      //! Action on the vehicle home position.
      uint8_t op;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Height (WGS-84).
      fp32_t height;
      //! Depth.
      fp32_t depth;
      //! Altitude.
      fp32_t alt;

      static uint16_t
      getIdStatic()
      {
        return 909;
      }

      HomePosition();

      HomePosition*
      clone() const override
      {
        return new HomePosition(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return HomePosition::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "HomePosition";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 29;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! ADCP Beam Measurements.
    class ADCPBeam: public Message
    {
    public:
      //! Water Velocity.
      fp32_t vel;
      //! Amplitude.
      fp32_t amp;
      //! Correlation.
      uint8_t cor;

      static uint16_t
      getIdStatic()
      {
        return 1016;
      }

      ADCPBeam();

      ADCPBeam*
      clone() const override
      {
        return new ADCPBeam(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ADCPBeam::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ADCPBeam";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 9;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Current Profile Cell.
    class CurrentProfileCell: public Message
    {
    public:
      //! Cell Position.
      fp32_t cell_position;
      //! Beams Measurements.
      MessageList<ADCPBeam> beams;

      static uint16_t
      getIdStatic()
      {
        return 1015;
      }

      CurrentProfileCell();

      CurrentProfileCell*
      clone() const override
      {
        return new CurrentProfileCell(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CurrentProfileCell::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CurrentProfileCell";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return beams.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! Current Profile.
    class CurrentProfile: public Message
    {
    public:
      //! Coordinate System.
      enum CoordinateSystemBits
      {
        //! xyz.
        UTF_XYZ = 0x01,
        //! ned.
        UTF_NED = 0x02,
        //! beams.
        UTF_BEAMS = 0x04
      };

      //! Number of Beams.
      uint8_t nbeams;
      //! Number of Cells.
      uint8_t ncells;
      //! Coordinate System.
      uint8_t coord_sys;
      //! Profile.
      MessageList<CurrentProfileCell> profile;

      static uint16_t
      getIdStatic()
      {
        return 1014;
      }

      CurrentProfile();

      CurrentProfile*
      clone() const override
      {
        return new CurrentProfile(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CurrentProfile::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CurrentProfile";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 3;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return profile.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;

    protected:
      void
      setTimeStampNested(double value__) override;

      void
      setSourceNested(uint16_t value__) override;

      void
      setSourceEntityNested(uint8_t value__) override;

      void
      setDestinationNested(uint16_t value__) override;

      void
      setDestinationEntityNested(uint8_t value__) override;
    };

    //! GPIO State.
    class GpioState: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic()
      {
        return 2000;
      }

      GpioState();

      GpioState*
      clone() const override
      {
        return new GpioState(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GpioState::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GpioState";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Get GPIO State.
    class GpioStateGet: public Message
    {
    public:
      //! Name.
      std::string name;

      static uint16_t
      getIdStatic()
      {
        return 2001;
      }

      GpioStateGet();

      GpioStateGet*
      clone() const override
      {
        return new GpioStateGet(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GpioStateGet::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GpioStateGet";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 0;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Set GPIO State.
    class GpioStateSet: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic()
      {
        return 2002;
      }

      GpioStateSet();

      GpioStateSet*
      clone() const override
      {
        return new GpioStateSet(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return GpioStateSet::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "GpioStateSet";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(name);
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Colored Dissolved Organic Matter.
    class ColoredDissolvedOrganicMatter: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 2003;
      }

      ColoredDissolvedOrganicMatter();

      ColoredDissolvedOrganicMatter*
      clone() const override
      {
        return new ColoredDissolvedOrganicMatter(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return ColoredDissolvedOrganicMatter::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "ColoredDissolvedOrganicMatter";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Fluorescent Dissolved Organic Matter.
    class FluorescentDissolvedOrganicMatter: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic()
      {
        return 2004;
      }

      FluorescentDissolvedOrganicMatter();

      FluorescentDissolvedOrganicMatter*
      clone() const override
      {
        return new FluorescentDissolvedOrganicMatter(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FluorescentDissolvedOrganicMatter::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FluorescentDissolvedOrganicMatter";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 4;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Total Magnetic Field Intensity.
    class TotalMagIntensity: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 2006;
      }

      TotalMagIntensity();

      TotalMagIntensity*
      clone() const override
      {
        return new TotalMagIntensity(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return TotalMagIntensity::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "TotalMagIntensity";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Communication Restriction.
    class CommRestriction: public Message
    {
    public:
      //! Restricted Communication Means.
      enum RestrictedCommunicationMeansBits
      {
        //! Satellite.
        MEAN_SATELLITE = 0x01,
        //! Acoustic.
        MEAN_ACOUSTIC = 0x02,
        //! WiFi.
        MEAN_WIFI = 0x04,
        //! GSM.
        MEAN_GSM = 0x08
      };

      //! Restricted Communication Means.
      uint8_t restriction;
      //! Reason.
      std::string reason;

      static uint16_t
      getIdStatic()
      {
        return 2010;
      }

      CommRestriction();

      CommRestriction*
      clone() const override
      {
        return new CommRestriction(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return CommRestriction::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "CommRestriction";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      unsigned
      getVariableSerializationSize() const override
      {
        return IMC::getSerializationSize(reason);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Flight Event.
    class FlightEvent: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Idle.
        FLEV_IDLE = 0,
        //! Ignition.
        FLEV_IGNITION = 1,
        //! Lift Off.
        FLEV_LIFTOFF = 2,
        //! Maximum Dynamic Pressure.
        FLEV_MAX_Q = 3,
        //! Coasting.
        FLEV_COASTING = 4,
        //! Apogee.
        FLEV_APOGEE = 5,
        //! Recovery.
        FLEV_RECOVERY = 6,
        //! Touchdown.
        FLEV_TOUCHDOWN = 7
      };

      //! Type.
      uint8_t type;

      static uint16_t
      getIdStatic()
      {
        return 2011;
      }

      FlightEvent();

      FlightEvent*
      clone() const override
      {
        return new FlightEvent(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return FlightEvent::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "FlightEvent";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 1;
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };

    //! Scalar.
    class Scalar: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic()
      {
        return 2012;
      }

      Scalar();

      Scalar*
      clone() const override
      {
        return new Scalar(*this);
      }

      void
      clear() override;

      bool
      fieldsEqual(const Message& msg__) const override;

      int
      validate() const override;

      uint8_t*
      serializeFields(uint8_t* bfr__) const override;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__) override;

      uint16_t
      getId() const override
      {
        return Scalar::getIdStatic();
      }

      const char*
      getName() const override
      {
        return "Scalar";
      }

      unsigned
      getFixedSerializationSize() const override
      {
        return 8;
      }

      fp64_t
      getValueFP() const override;

      void
      setValueFP(fp64_t val) override;

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const override;
    };
  }
}

#endif
