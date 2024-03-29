//***************************************************************************
// Copyright 2007-2019 OceanScan - Marine Systems & Technology, Lda.        *
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

#ifndef DUNE_HARDWARE_BASIC_DEVICE_DRIVER_HPP_INCLUDED_
#define DUNE_HARDWARE_BASIC_DEVICE_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <string>
#include <map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace DUNE
{
  namespace Hardware
  {
    class BasicDeviceDriver: public DUNE::Tasks::Task
    {
    public:
      BasicDeviceDriver(const std::string& name, DUNE::Tasks::Context& ctx);

      //! Consume estimated state messages.
      //! @param[in] msg EstimatedState message.
      void
      consume(const IMC::EstimatedState* msg);

      //! Consume logging control messages.
      //! @param[in] msg LoggingControl message.
      void
      consume(const IMC::LoggingControl* msg);

      //! Consume sound speed messages.
      //! @param[in] msg SoundSpeed message.
      void
      consume(const IMC::SoundSpeed* msg);

      //! Consume power channel state messages.
      //! @param[in] msg PowerChannelState message.
      void
      consume(const IMC::PowerChannelState* msg);

    protected:
      //! Set the amount of time to wait before powering down the device.
      //! @param[in] value delay in second.
      void
      setPowerOffDelay(double value)
      {
        if (value < 0)
          value = 0;

        m_power_off_delay = value;
      }

      //! Set post power-on delay.
      //! @param[in] value delay in second.
      void
      setPostPowerOnDelay(double value)
      {
        if (value < 0)
          value = 0;

        m_post_power_on_delay = value;
      }

      void
      clearPowerChannelNames()
      {
        m_power_channels.clear();
      }

      void
      addPowerChannelName(const std::string& name)
      {
        m_power_channels.insert(std::make_pair(name, false));
      }

      virtual bool
      onConnect() = 0;

      virtual void
      onDisconnect() = 0;

      virtual bool
      enableLogControl()
      {
        return false;
      }

      virtual bool
      onReadData() = 0;

      virtual bool
      onSynchronize();

      virtual void
      onEstimatedState(const DUNE::IMC::EstimatedState& msg);

      virtual void
      onSoundSpeed(double value);

      virtual void
      onOpenLog(const DUNE::FileSystem::Path& path);

      virtual void
      onCloseLog();

      virtual void
      onInitializeDevice() = 0;

      void
      clearFaultCount()
      {
        m_fault_count = 0;
      }

      void
      clearTimeoutCount()
      {
        m_timeout_count = 0;
      }

    private:
      //! Finite state machine states.
      enum StateMachineStates
      {
        //! Waiting for activation.
        SM_IDLE,
        //! Start activation sequence.
        SM_ACT_BEGIN,
        //! Turn power on.
        SM_ACT_POWER_ON,
        //! Wait for power to be turned on.
        SM_ACT_POWER_WAIT,
        //! Wait for device to become available.
        SM_ACT_DEV_WAIT,
        //! Synchronize time.
        SM_ACT_DEV_SYNC,
        //! Request log file.
        SM_ACT_LOG_REQUEST,
        //! Wait for log file.
        SM_ACT_LOG_WAIT,
        //! Activation sequence is complete.
        SM_ACT_DONE,
        //! Sampling.
        SM_ACT_SAMPLE,
        //! Start deactivation sequence.
        SM_DEACT_BEGIN,
        //! Disconnect from device.
        SM_DEACT_DISCONNECT,
        //! Switch power off.
        SM_DEACT_POWER_OFF,
        //! Wait for power to be turned off.
        SM_DEACT_POWER_WAIT,
        //! Deactivation sequence is complete.
        SM_DEACT_DONE
      };

      //! Watchdog timer.
      DUNE::Time::Counter<double> m_wdog;
      //! Current state machine state.
      StateMachineStates m_sm_state;
      //! State machine state queue.
      std::queue<StateMachineStates> m_sm_state_queue;
      //! Power channel names and states.
      std::map<std::string, bool> m_power_channels;
      //! True if log is opened.
      bool m_log_opened;
      //! True if log name request is pending.
      bool m_log_name_pending;
      //! Power-on timer.
      DUNE::Time::Counter<double> m_power_on_timer;
      //! Post power-on delay.
      double m_post_power_on_delay;
      //! Power-off timer.
      DUNE::Time::Counter<double> m_power_off_timer;
      //! Power-off delay.
      double m_power_off_delay;
      //! Fault count.
      unsigned m_fault_count;
      //! Timeout count.
      unsigned m_timeout_count;

      void
      onResourceRelease() override;

      void
      onResourceInitialization() override;

      //! Push a new state to the state queue.
      //! @param[in] state state machine state.
      void
      queueState(StateMachineStates state);

      //! Test if state queue has pending state transitions.
      //! @return true if state queue has pending states, false otherwise.
      bool
      hasQueuedStates() const;

      //! Retrieve the current finite state machine state.
      //! @return current finite state machine state.
      StateMachineStates
      getCurrentState() const;

      //! Dequeue the current finite state machine state.
      //! @return dequeued finite state machine state.
      StateMachineStates
      dequeueState();

      void
      initializeDevice();

      void
      onRequestActivation() override;

      bool
      connect();

      void
      failActivation(const std::string& message);

      void
      onRequestDeactivation() override;

      void
      disconnect();

      void
      onDeactivation() override;

      void
      onActivation() override;

      //! Request the name of the current log file.
      void
      requestLogName();

      bool
      readSample();

      bool
      synchronize();

      void
      openLog(const DUNE::FileSystem::Path& path);

      void
      closeLog();

      //! Power-on device.
      void
      turnPowerOn();

      //! Power-off device.
      void
      turnPowerOff();

      //! Control device power.
      //! @param[in] op desired power channel operation.
      void
      controlPower(IMC::PowerChannelControl::OperationEnum op);

      //! Test if all devices are powered or not.
      //! @param[in] state desired power state.
      //! @return true if all devices are powered or not, false otherwise.
      bool
      isPowered(bool state);

      //! Update state machine.
      void
      updateStateMachine();

      void
      onMain() override;
    };
  }
}

#endif
