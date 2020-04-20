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
// http://ec.europa.eu/idabc/eupl.hhtml.                                    *
//***************************************************************************
// Author: João Teixeira                                                    *
// Author: Raúl Sáez                                                        *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <map>
#include <string>
#include <cstring>
#include <iterator>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers
#include "Parser.hpp"
#include "MsgTypes.hpp"
#include "DataTypes.hpp"
#include "DebugMsg.hpp"


namespace Transports
{
  //! Blueprint Subsea's Seatrac acoustic modem driver.
  //!
  //! @author João Teixeira.
  namespace Seatrac
  {
    using DUNE_NAMESPACES;

    //! Hard Iron calibration parameter name.
    static const std::string c_hard_iron_param = "Hard-Iron Calibration";
    //! Number of axis.
    static const uint8_t c_number_axis = 3;

    //! Entity states.
    enum EntityStates
    {
      STA_BOOT,
      STA_IDLE,
      STA_ACTIVE,
      STA_ERR_COM,
      STA_ERR_STP,
      STA_MAX
    };

    //! Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Transmit only underwater.
      bool only_underwater;
      //! Addresses Number - modem
      std::string addr_section;
      //! Enable ARHS mode
      bool arhs_mode;
      //! Enamle pressure sensor
      bool pressure_sensor_mode;
      //! Enable usbl mode
      bool usbl_mode;
      //! Hard iron calibration.
      std::vector<float> hard_iron;
      //! Enhanced usbl information will be requested.
      bool enhanced_usbl;
      // Rotation matrix values.
      std::vector<double> rotation_mx;
      //! Calibration threshold.
      double calib_threshold;
      //! max range
      uint16_t max_range;
    };

    //! Map of system's names.
    typedef std::map<std::string, unsigned> MapName;
    //! Map of system's addresses.
    typedef std::map<unsigned, std::string> MapAddr;

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Task arguments.
      Arguments m_args;
      //! Config Status.
      bool m_config_status;
      //! c_preamble detected
      bool m_pre_detected;
      //! Current state.
      EntityStates m_state_entity;
      //! Entity states.
      IMC::EntityState m_states[STA_MAX];
      //! Stop reports on the ground.
      bool m_stop_comms;
      //! True if the beacon has an USBL receiver.
      bool m_usbl_receiver;
      //! Modem address.
      unsigned m_addr;
      //! Data buffer.
      std::string m_data;
      //! Converted data buffer.
      std::string m_datahex;
      //! Seatrac data structures.
      DataSeatrac m_data_beacon;
      //! Time of last serial port input.
      double m_last_input;
      //! Read timestamp.
      double m_tstamp;
      //! Timer to manage the fragmentation of OWAY messages.
      Time::Counter<double> m_oway_timer;
      //! hard iron calibration parameters.
      float m_hard_iron[3];
      //! Map of seatrac modems by name.
      MapName m_modem_names;
      //! Map of seatrac modems by address.
      MapAddr m_modem_addrs;
      //! Current transmission ticket.
      Ticket* m_ticket;
      // Save modem commands.
      IMC::DevDataText m_dev_data;
      //! Euler angles message.
      IMC::EulerAngles m_euler;
      //! Acceleration message.
      IMC::Acceleration m_accel;
      //! Angular velocity message.
      IMC::AngularVelocity m_agvel;
      //! Magnetometer Vector message.
      IMC::MagneticField m_magfield;
      //! Current sound speed.
      IMC::SoundSpeed m_sspeed;
      // Depth.
      IMC::Depth m_depth;
      // Pressure.
      IMC::Pressure m_pressure;
      // Measured temperature.
      IMC::Temperature m_temperature;
      //! Rotation Matrix to correct mounting position.
      Math::Matrix m_rotation;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Tasks::Task(name, ctx),
        m_handle(nullptr),
        m_config_status(false),
        m_pre_detected(false),
        m_stop_comms(false),
        m_usbl_receiver(false),
        m_tstamp(0)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Transmit Only Underwater", m_args.only_underwater)
        .defaultValue("false")
        .description("Do not transmit when at water surface");

        param("Address Section", m_args.addr_section)
        .defaultValue("Seatrac Addresses")
        .description("Name of the configuration section with modem addresses");

        param("AHRS Mode", m_args.arhs_mode)
        .defaultValue("false")
        .description("Enable the AHRS information to used in navigation");

        param("Pressure Sensor Mode", m_args.pressure_sensor_mode)
        .defaultValue("false")
        .description("Enable the pressure sensor, depth, sound velocity and temperature information ");

        param("USBL Mode", m_args.usbl_mode)
        .defaultValue("false")
        .description("Enable the USBL mode. USBL receivers can obtain position information.");

        param("Enhanced USBL", m_args.enhanced_usbl)
        .defaultValue("false")
        .description("Request Enhanced USBL information. USBL receivers request enhanced "
                     "information in transmissions. This parameter is useful only when "
                     "the beacon has an USBL receiver.");

        param("AHRS Rotation Matrix", m_args.rotation_mx)
        .defaultValue("")
        .size(9)
        .description("AHRS rotation matrix which is dependent of the mounting position");

        param(c_hard_iron_param, m_args.hard_iron)
        .units(Units::Gauss)
        .size(c_number_axis)
        .description("Hard-Iron calibration parameters");

        param("Calibration Threshold", m_args.calib_threshold)
        .defaultValue("0.1")
        .units(Units::Gauss)
        .minimumValue("0.0")
        .description("Minimum magnetic field calibration values to reset hard iron parameters");


        param("Max Range", m_args.max_range)
        .defaultValue("1000")
        .minimumValue("250")
        .description("Maximum value of distance at which Ranges are considered");


        // Initialize state messages.
        m_states[STA_BOOT].state = IMC::EntityState::ESTA_BOOT;
        m_states[STA_BOOT].description = DTR("initializing");
        m_states[STA_IDLE].state = IMC::EntityState::ESTA_NORMAL;
        m_states[STA_IDLE].description = DTR("idle");
        m_states[STA_ACTIVE].state = IMC::EntityState::ESTA_NORMAL;
        m_states[STA_ACTIVE].description = DTR("active");
        m_states[STA_ERR_COM].state = IMC::EntityState::ESTA_ERROR;
        m_states[STA_ERR_COM].description = DTR("serial port communication error, modem not responding");
        m_states[STA_ERR_STP].state = IMC::EntityState::ESTA_ERROR;
        m_states[STA_ERR_STP].description = DTR("failed to configure modem, possible serial port communication error");

        bind<IMC::VehicleMedium>(this);
        bind<IMC::UamTxFrame>(this);
      }

      //! Set entity state.
      //! @param[in] state new entity state.
      void
      setAndSendState(EntityStates state)
      {
        m_state_entity = state;
        setEntityState((IMC::EntityState::StateEnum) m_states[m_state_entity].state,
                       m_states[m_state_entity].description);
      }

      //! Process sentence.
      //! @return true if message was correctly processed, false otherwise.
      bool
      processSentence()
      {
        bool msg_validity = false;
        uint16_t crc, crc2;
        if(m_data.size() >= MIN_MESSAGE_LENGTH)
        {
          std::string msg = String::fromHex(m_data.substr((m_data.size() - 4), 4));
          std::memcpy(&crc2, msg.data(), 2);
          m_datahex = String::fromHex(m_data.erase((m_data.size() - 4), 4));
          crc = CRC16::compute((uint8_t*) m_datahex.data(), m_datahex.size(),0);
          if (crc == crc2)
            msg_validity = true;
          else
            war("%s", DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
        }
        return msg_validity;
      }

      //! Process new data.
      void
      processNewData()
      {
        if(m_config_status==true)
        {
          if (m_data_beacon.newDataAvailable(CID_DAT_RECEIVE))
            handleBinaryMessage();

          if (m_data_beacon.newDataAvailable(CID_DAT_SEND))
            handleDatSendResponse();

          if (m_data_beacon.newDataAvailable(CID_DAT_ERROR))
            handleCommunicationError();
          if(m_data_beacon.newDataAvailable(CID_STATUS))
          {
            if(m_args.arhs_mode==true)
            {
              handleAhrsData();
            }
            if(m_args.pressure_sensor_mode==true)
            {
              handlePressureSensor();
            }

            //todo send environment_supply
            //m_data_beacon.cid_status_msg.environment_supply;   //uint16_t
          }
        }
      }

      //! Release
      //! Read sentence.
      void
      readSentence()
      {
        // Initialize received message parser
        char bfr[c_bfr_size];
        uint16_t typemes = 0;
        const char* msg_raw;
        size_t rv;

        if (Poll::poll(*m_handle, 0.001))
        {
          rv = m_handle->readString(bfr, c_bfr_size);
          m_tstamp = Clock::getSinceEpoch();
          m_last_input = Clock::get();
          for (size_t i = 0; i < rv; ++i)
          {
            // Detected line termination.
            if (bfr[i] == '\n')
            {
              m_dev_data.value.assign(sanitize(m_data));
              dispatch(m_dev_data);
              if(m_pre_detected==true)
              {
                if (processSentence())
                {
                  msg_raw = m_datahex.data();
                  std::memcpy(&typemes, msg_raw, 1);
                  dataParser(typemes, msg_raw + 1, m_data_beacon);
                  processNewData();
                  printDebugFunction(typemes, m_data_beacon, this);
                  typemes = 0;
                }
              }
              m_pre_detected = false;
              m_data.clear();
            }
            else
            {
              if (bfr[i] == c_preamble)
              {
                m_data.clear();
                m_pre_detected = true;
              }
              else if (bfr[i] != '\r')
              {
                m_data.push_back(bfr[i]);
              }
            }
          }
        }
      }

      //! Open TCP socket.
      //! @return true if socket was opened, false otherwise.
      bool
      openSocket()
      {
        char socket_addr[128] = { 0 };
        unsigned port = 0;

        if (std::sscanf(m_args.uart_dev.c_str(), "tcp://%[^:]:%u", socket_addr, &port) != 2)
          return false;

        TCPSocket* sock = new TCPSocket;
        sock->connect(socket_addr, port);
        m_handle = sock;
        return true;
      }

      //! Acquire resources.
      void
      onResourceAcquisition() override
      {
        setAndSendState(STA_BOOT);
        try
        {
          if (openSocket())
            return;

          SerialPort* port = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          port->setCanonicalInput(true);
          port->flush();
          m_handle = port;
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      //! Initialize resources and configure modem
      void
      onResourceInitialization() override
      {
        // Process modem addresses.
        std::string agent = getSystemName();
        std::vector<std::string> addrs = m_ctx.config.options(m_args.addr_section);

        // verify modem local addres value.
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          unsigned addr = 0;
          m_ctx.config.get("Seatrac Addresses", addrs[i], "0", addr);
          m_modem_names[addrs[i]] = addr;
          m_modem_addrs[addr] = addrs[i];
        }

        m_ctx.config.get(m_args.addr_section, agent, "1024", m_addr);
        if (m_addr < 1 || m_addr > 15)
        {
          throw std::runtime_error(String::str(DTR("modem address for agent '%s' is invalid"), agent.c_str()));
        }

        m_last_input = Clock::get();
        processInput();

        if (hasConnection())
        {
          do
          {
            sendCommand(commandCreateSeatrac(CID_SETTINGS_GET, m_data_beacon));
            processInput();
          }
          while (m_data_beacon.newDataAvailable(CID_SETTINGS_GET) == 0);

          sendCommandAndWait(commandCreateSeatrac(CID_SYS_INFO, m_data_beacon), 1);

          if( m_data_beacon.cid_sys_info.hardware.part_number == BT_X150)
            m_usbl_receiver = true;

          uint8_t output_flags = (ENVIRONMENT_FLAG | ATTITUDE_FLAG
                                  | MAG_CAL_FLAG | ACC_CAL_FLAG
                                  | AHRS_RAW_DATA_FLAG | AHRS_COMP_DATA_FLAG);

          uint8_t xcvr_flags = XCVR_FIX_MSGS_FLAG | XCVR_POSFLT_ENABLE_FLAG;

          if (m_usbl_receiver)
            xcvr_flags |= USBL_USE_AHRS_FLAG | XCVR_USBL_MSGS_FLAG;

          StatusMode_E status_mode= STATUS_MODE_1HZ;
          bool chage_IMU=true;
          if (m_args.arhs_mode==true)
          {
            status_mode= STATUS_MODE_10HZ;
            chage_IMU = isCalibrated();
          }
          if (!((m_data_beacon.cid_settings_msg.xcvr_beacon_id == m_addr)
                && (m_data_beacon.cid_settings_msg.status_flags == status_mode)
                && (m_data_beacon.cid_settings_msg.status_output == output_flags)
                && (m_data_beacon.cid_settings_msg.xcvr_flags == xcvr_flags)
                && (m_data_beacon.cid_settings_msg.xcvr_range_tmo == m_args.max_range)
                && chage_IMU == true))
          {
            m_data_beacon.cid_settings_msg.status_flags = status_mode;
            m_data_beacon.cid_settings_msg.status_output = output_flags;
            m_data_beacon.cid_settings_msg.xcvr_flags = xcvr_flags;
            m_data_beacon.cid_settings_msg.xcvr_beacon_id = m_addr;
            m_data_beacon.cid_settings_msg.xcvr_range_tmo = m_args.max_range;
            if(chage_IMU==false)
            {
              m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_x = m_args.hard_iron[0];
              m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_y = m_args.hard_iron[1];
              m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_z = m_args.hard_iron[2];

            }
            sendCommandAndWait(commandCreateSeatrac(CID_SETTINGS_SET, m_data_beacon), 2);
            sendCommandAndWait(commandCreateSeatrac(CID_SETTINGS_SAVE, m_data_beacon), 2);
            sendCommandAndWait(commandCreateSeatrac(CID_SYS_REBOOT, m_data_beacon), 6);
            sendCommandAndWait(commandCreateSeatrac(CID_SETTINGS_GET, m_data_beacon), 2);

            if (m_data_beacon.cid_settings_msg.xcvr_beacon_id != m_addr)
            {
              setAndSendState(STA_ERR_STP);
              war(DTR("failed to configure device"));
            }

            debug("ready");
            setAndSendState(STA_IDLE);
            m_config_status=true;
          }
          else
          {
            debug("ready");
            setAndSendState(STA_IDLE);
            m_config_status=true;
          }
        }
        else
        {
          err("%s", DTR(Status::getString(CODE_COM_ERROR)));
          setAndSendState(STA_ERR_STP);
          throw std::runtime_error(m_states[m_state_entity].description);
        }
      }
      //! Update parameters.
      void
      onUpdateParameters() override
      {
        m_rotation.fill(3, 3, &m_args.rotation_mx[0]);

        // Rotate calibration parameters.
        Math::Matrix data(3, 1);

        for (unsigned i = 0; i < 3; i++)
          data(i) = m_args.hard_iron[i];
        data = transpose(m_rotation) * data;
        for (unsigned i = 0; i < 3; i++)
          m_hard_iron[i] = data(i);

        if (m_handle != nullptr)
        {

          if (paramChanged(m_args.hard_iron))
            runCalibration();
        }
      }
      //! Routine to run calibration proceedings.
      void
      runCalibration()
      {
        if (m_handle == nullptr)
          return;

        // See if vehicle has same hard iron calibration parameters.
        if (!isCalibrated())
        {

          // Set hard iron calibration parameters and reset device.
          if (!setHardIron())
          {
            throw RestartNeeded(DTR("failed to set hard-iron correction factors"), 5);
          }
        }
      }

      void
      consume(const IMC::MagneticField* msg)
      {
        if (msg->getDestinationEntity() != getEntityId())
          return;

        // Reject if it is small adjustment.
        if ((std::abs(msg->x) < m_args.calib_threshold) &&
            (std::abs(msg->y) < m_args.calib_threshold))
          return;

        double hi_x = m_args.hard_iron[0] + msg->x;
        double hi_y = m_args.hard_iron[1] + msg->y;

        IMC::EntityParameter hip;
        hip.name = c_hard_iron_param;
        hip.value = String::str("%f, %f, 0.0", hi_x, hi_y);

        IMC::SetEntityParameters np;
        np.name = getEntityLabel();
        np.params.push_back(hip);
        dispatch(np, DF_LOOP_BACK);

        IMC::SaveEntityParameters sp;
        sp.name = getEntityLabel();
        dispatch(sp);
      }

      //! Check if sensor has the same hard iron calibration parameters.
      //! @return true if the parameters are the same, false otherwise.
      bool
      isCalibrated()
      {

        if( ((int32_t) (m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_x*100)) != ( (int32_t) (m_args.hard_iron[0]*100)))
        {
          war(DTR("different calibration parameters"));
            return false;
        }
        if( ((int32_t) (m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_y*100)) != ( (int32_t) (m_args.hard_iron[1]*100)))
                 {
          war(DTR("different calibration parameters"));
            return false;
        }
        if( ((int32_t) (m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_z*100)) != ( (int32_t) (m_args.hard_iron[2]*100)))
       {
          war(DTR("different calibration parameters"));
            return false;
        }
        debug("Is calibrated");
        return true;
      }

      //! Set new hard iron calibration parameters.
      //! @return true if successful, false otherwise.
      bool
      setHardIron()
      {

        m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_x = m_args.hard_iron[0];
        m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_y = m_args.hard_iron[1];
        m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_z = m_args.hard_iron[2];
        sendCommandAndWait(commandCreateSeatrac(CID_SETTINGS_SET, m_data_beacon), 2);
        sendCommandAndWait(commandCreateSeatrac(CID_SETTINGS_SAVE, m_data_beacon), 2);
        sendCommandAndWait(commandCreateSeatrac(CID_SETTINGS_GET, m_data_beacon), 2);
        if(m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_x != m_args.hard_iron[0])
          return false;
        if(m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_y != m_args.hard_iron[1])
          return false;
        if(m_data_beacon.cid_settings_msg.ahrs_cal.mag_hard_z != m_args.hard_iron[2])
          return false;

        return true;
      }
      //! Release resources.
      void
      onResourceRelease() override
      {
        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
        Memory::clear(m_handle);
      }

      //! Send command and waits for response.
      //! @param[in] cmd command string.
      //! @param[in] delay_bef delay before send comamnd.
      //! @param[in] delay_aft delay after send comamnd.
      void
      sendCommandAndWait(const std::string& cmd, double delay_aft)
      {
        sendCommand(cmd);
        processInput(delay_aft);
      }

      //! Send command if the modem has conditions to operate.
      //! @param[in] cmd command string.
      void
      sendProtectedCommand(const std::string& cmd)
      {
        if (m_stop_comms)
        {
          war(DTR("Sending stopped: Communication out of water forbidden."));
          clearTicket(IMC::UamTxStatus::UTS_FAILED);
          m_data_beacon.cid_dat_send_msg.lock_flag = 0;
          return;
        }
        sendCommand(cmd);
      }

      //! Send command to the acoustic modem.
      //! @param[in] cmd command string.
      void
      sendCommand(const std::string& cmd)
      {
        m_handle->writeString(cmd.c_str());
        m_dev_data.value.assign(sanitize(cmd));
        dispatch(m_dev_data);
      }

      //! Checks if the modem is working.
      //! @return true if modem has a new message.
      bool
      hasConnection()
      {
        if (Clock::get() >= (m_last_input + c_input_tout))
        {
          return false;
        }
        return true;
      }

      //! Processing incoming data.
      void
      handleBinaryMessage()
      {
        if (m_data_beacon.cid_dat_receive_msg.ack_flag != 0)
        {
          // if msg has more than 1 packet, send next part
          if (m_data_beacon.cid_dat_send_msg.packetDataNextPart(1) != -1)
          {
            sendProtectedCommand(commandCreateSeatrac(CID_DAT_SEND, m_data_beacon));
          }
          else
          {
            // Last packet sent.
            // Acoustic information can be computed when the target beacon replies with ACK.
            handleAcousticInformation(m_data_beacon.cid_dat_receive_msg.aco_fix);

            // Data communication done
            clearTicket(IMC::UamTxStatus::UTS_DONE);
          }
          return;
        }
        else
        {
          int data_rec_flag = m_data_beacon.cid_dat_receive_msg.packetDataDecode();
          if (data_rec_flag == 1)
          {
            std::string msg;
            m_data_beacon.cid_dat_receive_msg.getFullMsg(msg);
            handleRxMessage(msg);
            debug("new data");
          }

          if (data_rec_flag == -1)
            war(DTR("wrong message order"));

          if (data_rec_flag == 0)
            debug("colecting data");
          if(data_rec_flag == -2)
            debug("no data size");
        }
      }

      //! Publish received acoustic message.
      //! @param[in] str received message.
      void
      handleRxMessage(const std::string& str)
      {
        IMC::UamRxFrame msg;
        msg.data.assign((uint8_t*) &str[0], (uint8_t*) &str[str.size()]);

        // Lookup source system name.
        try
        {
          msg.sys_src = lookupSystemName(m_data_beacon.cid_dat_receive_msg.aco_fix.src_id);
        }
        catch (...)
        {
          msg.sys_src = "unknown";
        }

        // Lookup destination system name.
        try
        {
          msg.sys_dst = lookupSystemName(m_data_beacon.cid_dat_receive_msg.aco_fix.dest_id);
        }
        catch (...)
        {
          msg.sys_dst = "unknown";
        }

        // Fill flags.
        if (m_addr != m_data_beacon.cid_dat_receive_msg.aco_fix.dest_id)
          msg.flags |= IMC::UamRxFrame::URF_PROMISCUOUS;

        msg.flags |= IMC::UamRxFrame::URF_DELAYED;
        dispatch(msg);
        handleAcousticInformation(m_data_beacon.cid_dat_receive_msg.aco_fix);
      }

      //! Handle acoustic information from received data.
      //! param[in] aco_fix Acoustic information field of the received message.
      void
      handleAcousticInformation(const Acofix_t& aco_fix)
      {
        std::string sys_src = "unknown";
        // Lookup source system name.
        try
        {
          sys_src = lookupSystemName(aco_fix.src_id);
        }
        catch (...)
        { }

        // Compute range from received data;
        if (aco_fix.outputflags_list[0])
        {
          double range_dist = (double) aco_fix.range_dist;
          range_dist /= 10;

          if (range_dist > 0)
          {
            IMC::UamRxRange range;
            range.sys = sys_src;
            if (m_ticket != nullptr)
              range.seq = m_ticket->seq;

            range.value = range_dist;
            dispatch(range);
          }
        }

        // Compute USBL position from received data;
        if (aco_fix.outputflags_list[2])
        {
          IMC::UsblPositionExtended usblPosition;
          usblPosition.target = sys_src;
          usblPosition.phi = Angles::radians(aco_fix.attitude_roll / 10.0);
          usblPosition.theta = Angles::radians(aco_fix.attitude_pitch / 10.0);
          usblPosition.psi = Angles::radians(aco_fix.attitude_yaw / 10.0);
          usblPosition.e = aco_fix.position_easting / 10.0;
          usblPosition.n = aco_fix.position_northing / 10.0;
          usblPosition.d = aco_fix.position_depth / 10.0;

          dispatch(usblPosition);
        }
        else // Mimics Evologic: Only if position is not computed, compute angles.
        {
          // Compute USBL angles from received data only if the beacon has an USBL receiver.
          // Seatrac X110/X010 set this flag but it hasn't an USBL able to calculate
          // all angles appropriately.
          if (aco_fix.outputflags_list[1] && m_usbl_receiver)
          {
            IMC::UsblAnglesExtended usblAnglesMsg;
            usblAnglesMsg.target = sys_src;
            usblAnglesMsg.lbearing = Angles::radians(aco_fix.usbl_azimuth / 10.0);
            usblAnglesMsg.lelevation = Angles::radians(aco_fix.usbl_elevation / 10.0);
            usblAnglesMsg.phi = Angles::radians(aco_fix.attitude_roll / 10.0);
            usblAnglesMsg.theta = Angles::radians(aco_fix.attitude_pitch / 10.0);
            usblAnglesMsg.psi = Angles::radians(aco_fix.attitude_yaw / 10.0);

            dispatch(usblAnglesMsg);
          }
        }
      }

      //! Handle errors of communication with both local and remote beacon.
      //! The method tries to send the packet again until it reaches the maximum
      //! number of retries. @see MAX_MESSAGE_ERRORS.
      void
      handleCommunicationError()
      {

        if( !(m_data_beacon.cid_dat_send_msg.msg_type == MSG_OWAY ||
              m_data_beacon.cid_dat_send_msg.msg_type == MSG_OWAYU))
        {
          if (m_data_beacon.cid_dat_send_msg.packetDataNextPart(0) < MAX_MESSAGE_ERRORS)
          {
            sendProtectedCommand(commandCreateSeatrac(CID_DAT_SEND, m_data_beacon));
          }
          else
          {
            war(DTR("Communication failed"));
            clearTicket(IMC::UamTxStatus::UTS_FAILED);
          }
        }
        else
        {
          war(DTR("Next msg or part send to son"));
        }
      }
      //! Correct data according with mounting position.
      void
      rotateData()
      {
        Math::Matrix data(3, 1);

        // Acceleration.
        data(0) = m_accel.x;
        data(1) = m_accel.y;
        data(2) = m_accel.z;
        data = m_rotation * data;
        m_accel.x = data(0);
        m_accel.y = data(1);
        m_accel.z = data(2);

        // Angular Velocity.
        data(0) = m_agvel.x;
        data(1) = m_agvel.y;
        data(2) = m_agvel.z;
        data = m_rotation * data;
        m_agvel.x = data(0);
        m_agvel.y = data(1);
        m_agvel.z = data(2);

        // Magnetic Field.
        data(0) = m_magfield.x;
        data(1) = m_magfield.y;
        data(2) = m_magfield.z;
        data = m_rotation * data;
        m_magfield.x = data(0);
        m_magfield.y = data(1);
        m_magfield.z = data(2);
      }

      //! Handle AHRS data send by local beacon.
      //! The method tries to dispach all the necessary information for navigation
      void
      handleAhrsData()
      {
        if(m_data_beacon.cid_status_msg.outputflags_list[5])
        {
          //Time Stamp
          m_euler.setTimeStamp(m_tstamp);
          m_accel.setTimeStamp(m_tstamp);
          m_agvel.setTimeStamp(m_tstamp);
          m_magfield.setTimeStamp(m_tstamp);

          // Acceleration.
          m_accel.x  = ( (fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_acc_x / (fp32_t) m_data_beacon.cid_settings_msg.ahrs_cal.acc_max_x) * Math::c_gravity;
          m_accel.y  = ( (fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_acc_y / (fp32_t) m_data_beacon.cid_settings_msg.ahrs_cal.acc_max_y) * Math::c_gravity;
          m_accel.z  = ( (fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_acc_z / (fp32_t) m_data_beacon.cid_settings_msg.ahrs_cal.acc_max_z) * Math::c_gravity;
          // Magnetic Field.
          m_magfield.x = (fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_mag_x;
          m_magfield.y = (fp32_t)m_data_beacon.cid_status_msg.ahrs_comp_mag_y;
          m_magfield.z = (fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_mag_z;

          m_euler.theta= Angles::radians( ((fp32_t) m_data_beacon.cid_status_msg.attitude_roll)/10);
          m_euler.psi =  Angles::radians(((fp32_t) m_data_beacon.cid_status_msg.attitude_pitch)/10);
          m_euler.psi_magnetic = m_euler.psi;
          m_euler.phi=  Angles::radians(((fp32_t) m_data_beacon.cid_status_msg.attitude_yaw)/10);
          // Angular Velocity.
          m_agvel.x = Angles::radians((fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_gyro_x);
          m_agvel.y = Angles::radians((fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_gyro_y);
          m_agvel.z = Angles::radians((fp32_t) m_data_beacon.cid_status_msg.ahrs_comp_gyro_z);
          //Euler angles.
          m_euler.time = ((fp32_t) m_data_beacon.cid_status_msg.timestamp)/1000;
          m_accel.time = m_euler.time;
          m_agvel.time = m_euler.time;
          m_magfield.time = m_euler.time;
          rotateData();
          // Dispatch messages.
          dispatch(m_euler, DF_KEEP_TIME);
          dispatch(m_accel, DF_KEEP_TIME);
          dispatch(m_agvel, DF_KEEP_TIME);
          dispatch(m_magfield, DF_KEEP_TIME);
        }
      }


      //! Handle Pressure , Depth, Temperature and Sound Speed data and dispactch .
      //! The method tries to dispach data prom sensors:Pressure , Depth, Temperature and Sound Speed data
      void
      handlePressureSensor ()
      {
        m_depth.value = ((fp32_t) (m_data_beacon.cid_status_msg.EnvironmentDepth))/10; //int32_t // m_channel_readout * m_args.depth_conv;
        m_pressure.value =  (((fp32_t) (m_data_beacon.cid_status_msg.environment_pressure))/1000)* Math::c_pascal_per_bar;
        m_temperature.value = ((fp32_t) (m_data_beacon.cid_status_msg.environment_temperature))/10;  //int16_t//m_channel_readout;
        m_sspeed.value = ((fp32_t) (m_data_beacon.cid_status_msg.EnvironmentVos))/10;  //uint16_t
        dispatch(m_depth);
        dispatch(m_pressure);
        dispatch(m_temperature);
        dispatch(m_sspeed);
      }

      //! Handle the response to a CID_Data_Send command.
      //! If the acknowledged message is an OWAY and it is compound
      //! by more than one packet, the method sends the following packet.
      //! If the sending fails, it tries to send the packet again.
      //! If the modem is busy, it tries to send the packet to poll the status.
      void
      handleDatSendResponse()
      {
        if (m_data_beacon.cid_dat_send_msg.status != CST_OK)
        {
          if (m_data_beacon.cid_dat_send_msg.status != CST_XCVR_BUSY)
            handleCommunicationError();
        }
      }

      void
      consume(const IMC::UamTxFrame* msg)
      {
        std::string hex = String::toHex(msg->data);
        std::vector<char> data_t;
        std::copy(hex.begin(), hex.end(), std::back_inserter(data_t));

        if (msg->getDestination() != getSystemId())
          return;

        // Create and fill new ticket.
        Ticket ticket;
        ticket.imc_sid = msg->getSource();
        ticket.imc_eid = msg->getSourceEntity();
        ticket.seq = msg->seq;
        ticket.ack = (msg->flags & IMC::UamTxFrame::UTF_ACK) != 0;

        if (msg->sys_dst == getSystemName())
        {
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_INV_ADDR);
          return;
        }

        try
        {
          ticket.addr = lookupSystemAddress(msg->sys_dst);
        }
        catch (...)
        {
          war(DTR("invalid system name %s"), msg->sys_dst.c_str());
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_INV_ADDR);
          return;
        }

        // Fail if busy.
        if (m_data_beacon.cid_dat_send_msg.packetDataSendStatus())
        {
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_BUSY);
          return;
        }

        // Replace ticket and transmit.
        replaceTicket(ticket);
        sendTxStatus(ticket, IMC::UamTxStatus::UTS_IP);

        // Fill the message type.
        if ((ticket.addr != 0) && (ticket.ack == true))
        {
          if (m_args.usbl_mode)
          {
            if (m_args.enhanced_usbl)
              m_data_beacon.cid_dat_send_msg.msg_type = MSG_REQX;
            else
              m_data_beacon.cid_dat_send_msg.msg_type = MSG_REQU;
          }
          else
          {
            m_data_beacon.cid_dat_send_msg.msg_type = MSG_REQ;
          }
        }
        else
        {
          if (m_args.usbl_mode)
            m_data_beacon.cid_dat_send_msg.msg_type = MSG_OWAYU;
          else
            m_data_beacon.cid_dat_send_msg.msg_type = MSG_OWAY;
        }

        int code;
        code = m_data_beacon.cid_dat_send_msg.packetDataBuild(data_t, ticket.addr);

        switch (code)
        {
          case 1:
            inf(DTR("device is busy"));
            break;
          case 2:
            err(DTR("previous message failed, timeout detected"));
            break;
          case 3:
            err(DTR("size mismatch"));
            break;
          default:
            resetOneWayTimer();
            sendProtectedCommand(commandCreateSeatrac(CID_DAT_SEND, m_data_beacon));
            break;
        }
      }

      //! Updates transmission status.
      //! @param[in] ticket ticket status to be transmitted.
      //! @param[in] value status index.
      //! @param[in] error error message.
      void
      sendTxStatus(const Ticket& ticket, IMC::UamTxStatus::ValueEnum value,
                   const std::string& error = "")
      {
        IMC::UamTxStatus status;
        status.setDestination(ticket.imc_sid);
        status.setDestinationEntity(ticket.imc_eid);
        status.seq = ticket.seq;
        status.value = value;
        status.error = error;
        dispatch(status);
      }

      //! Clear ticket.
      //! @param[in] reason reason value.
      //! @param[in] error error message.
      void
      clearTicket(IMC::UamTxStatus::ValueEnum reason,
                  const std::string& error = "")
      {
        if (m_ticket != nullptr)
        {
          sendTxStatus(*m_ticket, reason, error);
          delete m_ticket;
          m_ticket = nullptr;
        }
      }

      //! Replace ticket.
      //! @param[in] ticket new ticket to replace previous one.
      void
      replaceTicket(const Ticket& ticket)
      {
        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
        m_ticket = new Ticket(ticket);
      }

      //! Lookup system address.
      //! @param[in] name system name
      //! @return system address.
      unsigned
      lookupSystemAddress(const std::string& name)
      {
        MapName::iterator itr = m_modem_names.find(name);
        if (itr == m_modem_names.end())
          throw std::runtime_error("unknown system name");

        return itr->second;
      }

      //! Lookup system name.
      //! @param[in] addr system address.
      //! @return system name.
      std::string
      lookupSystemName(unsigned addr)
      {
        MapAddr::iterator itr = m_modem_addrs.find(addr);
        if (itr == m_modem_addrs.end())
          throw std::runtime_error("unknown system address");

        return itr->second;
      }

      //! Check for incoming data.
      //! @param[in] timeout timeout time.
      void
      processInput(double timeout = 1.0)
      {
        double deadline = Clock::get() + timeout;
        do
        {
          consumeMessages();
          readSentence();
          checkTxOWAY();

          if (m_state_entity != STA_ERR_STP)
          {
            if (isActive())
              setAndSendState(STA_ACTIVE);
            else
              setAndSendState(STA_IDLE);
          }
        }
        while (Clock::get() <= deadline);
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        if (m_args.only_underwater)
        {
          if (msg->medium == IMC::VehicleMedium::VM_UNDERWATER)
            m_stop_comms = false;
          else
            m_stop_comms = true;
          return;
        }

        m_stop_comms = false;
      }

      void
      resetOneWayTimer()
      {
        m_oway_timer.setTop( (m_data_beacon.cid_dat_send_msg.packet_len * 8 * 1/c_acoustic_bitrate + (m_args.max_range / MIN_SOUND_SPEED))*2 );
      }

      //! Checks if an OWAY message is waiting to be sent.
      void
      checkTxOWAY() {

        if (m_data_beacon.cid_dat_send_msg.packetDataSendStatus())
        {
          if (m_data_beacon.cid_dat_send_msg.msg_type == MSG_OWAY ||
              m_data_beacon.cid_dat_send_msg.msg_type == MSG_OWAYU)
          {
            if (m_oway_timer.overflow())
            {
              if (m_data_beacon.cid_dat_send_msg.packetDataNextPart(1) != -1)
              {
                 resetOneWayTimer();
                sendProtectedCommand(commandCreateSeatrac(CID_DAT_SEND, m_data_beacon));
              }
              else
              {
                debug(DTR("Msg transmission complete"));
                clearTicket(IMC::UamTxStatus::UTS_DONE);
              }
            }
          }
        }
      }

      //! Main loop.
      void
      onMain() override
      {
        while (!stopping())
        {
          // Modem.
          processInput();

          if (Clock::get() >= (m_last_input + c_input_tout))
            setAndSendState(STA_ERR_COM);
        }
      }
    };
  }
}

DUNE_TASK
