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
// Author: Tiago Marques                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <Mahi/Gui.hpp>
#include <Mahi/Util.hpp>

#include <thread>

namespace UI
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Tiago Marques
  namespace Rviz
  {
    using DUNE_NAMESPACES;

    using namespace mahi::gui;
    using namespace mahi::util;

    struct ScrollingBuffer {
      int MaxSize;
      int Offset;
      ImVector<ImVec2> Data;
      ScrollingBuffer(int max_size = 2000) {
        MaxSize = max_size;
        Offset  = 0;
        Data.reserve(MaxSize);
      }
      void AddPoint(float x, float y) {
        if (Data.size() < MaxSize)
          Data.push_back(ImVec2(x,y));
        else {
          Data[Offset] = ImVec2(x,y);
          Offset =  (Offset + 1) % MaxSize;
        }
      }
      void Erase() {
        if (Data.size() > 0) {
          Data.shrink(0);
          Offset  = 0;
        }
      }
    };

    // utility structure for realtime plot
    struct RollingBuffer {
      float Span;
      ImVector<ImVec2> Data;
      RollingBuffer() {
        Span = 10.0f;
        Data.reserve(2000);
      }
      void AddPoint(float x, float y) {
        float xmod = fmodf(x, Span);
        if (!Data.empty() && xmod < Data.back().x)
          Data.shrink(0);
        Data.push_back(ImVec2(xmod, y));
      }
    };

    class Renderer : public Application
    {
      std::atomic<bool>& m_canary;
    public:
      explicit Renderer(std::atomic<bool>& signal) :
        Application(),
        m_canary(signal)
      { }

      void
      update() override
      {
        if (!m_canary.load())
          quit();

        bool popen = true;
        ImGui::SetNextWindowSize(ImVec2(500, 500), ImGuiCond_FirstUseEver);
        if (ImGui::Begin("rviz", &popen)) {
          ImGui::Columns(2);

          static ScrollingBuffer sdata1, sdata2;
          ImVec2 mouse = ImGui::GetMousePos();
          static float t = 0;
          t += ImGui::GetIO().DeltaTime;
          sdata1.AddPoint(t, mouse.x * 0.0005f);
          sdata2.AddPoint(t, mouse.y * 0.0005f);

          static float history = 10.0f;

          static ImPlotAxisFlags flags = ImPlotAxisFlags_NoTickLabels;
          ImPlot::SetNextPlotLimitsX(t - history, t, ImGuiCond_Always);
          ImPlot::SetNextPlotLimitsY(0, 1);
          if (ImPlot::BeginPlot("##Thrust", "Teste 1", "Teste 2", ImVec2(-1, 150), 0, flags, flags))
          {
            ImPlot::SetNextFillStyle(IMPLOT_AUTO_COL, 0.5f);
            ImPlot::PlotShaded("Mouse X", &sdata1.Data[0].x, &sdata1.Data[0].y, sdata1.Data.size(), -INFINITY, sdata1.Offset, 2 * sizeof(float));
            ImPlot::PlotLine("Mouse Y", &sdata2.Data[0].x, &sdata2.Data[0].y, sdata2.Data.size(), sdata2.Offset, 2 * sizeof(float));
            ImPlot::EndPlot();
          }

          ImGui::NewLine();
          ImPlot::SetNextPlotLimitsX(t - history, t, ImGuiCond_Always);
          if (ImPlot::BeginPlot("##Attitude", "Teste 1", "Teste 2", ImVec2(-1, 150), 0, flags, flags))
          {
            ImPlot::SetNextFillStyle(IMPLOT_AUTO_COL, 0.5f);
            ImPlot::PlotShaded("Mouse X", &sdata1.Data[0].x, &sdata1.Data[0].y, sdata1.Data.size(), -INFINITY, sdata1.Offset, 2 * sizeof(float));
            ImPlot::PlotLine("Mouse Y", &sdata2.Data[0].x, &sdata2.Data[0].y, sdata2.Data.size(), sdata2.Offset, 2 * sizeof(float));
            ImPlot::EndPlot();
          }

          //            ImGui::SameLine();
          ImGui::NextColumn();
          ImPlot::SetNextPlotLimitsX(t - history, t, ImGuiCond_Always);
          if (ImPlot::BeginPlot("##Velocity", "Teste 3", "Teste 4", ImVec2(-1, 150), 0, flags, flags))
          {
            ImPlot::SetNextFillStyle(IMPLOT_AUTO_COL, 0.5f);
            ImPlot::PlotShaded("Mouse X", &sdata1.Data[0].x, &sdata1.Data[0].y, sdata1.Data.size(), -INFINITY, sdata1.Offset, 2 * sizeof(float));
            ImPlot::PlotLine("Mouse Y", &sdata2.Data[0].x, &sdata2.Data[0].y, sdata2.Data.size(), sdata2.Offset, 2 * sizeof(float));
            ImPlot::EndPlot();
          }

          ImGui::NewLine();
          ImPlot::SetNextPlotLimitsX(t - history, t, ImGuiCond_Always);
          if (ImPlot::BeginPlot("##Drag", "Teste 3", "Teste 4", ImVec2(-1, 150), 0, flags, flags))
          {
            ImPlot::SetNextFillStyle(IMPLOT_AUTO_COL, 0.5f);
            ImPlot::PlotShaded("Mouse X", &sdata1.Data[0].x, &sdata1.Data[0].y, sdata1.Data.size(), -INFINITY, sdata1.Offset, 2 * sizeof(float));
            ImPlot::PlotLine("Mouse Y", &sdata2.Data[0].x, &sdata2.Data[0].y, sdata2.Data.size(), sdata2.Offset, 2 * sizeof(float));
            ImPlot::EndPlot();
          }

          if (ImGui::Button("Launch"))
            std::cout << "pim\n";

          ImGui::End();

          if (!popen)
            quit();
        }
      }
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Signal renderer to keep drawing
      std::atomic<bool> m_canary;
      //! Renderer thread
      std::thread m_worker;
      //! Flag if we started renderer
      bool m_running;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx),
          m_running(false)
      {  }

      void
      startRenderer()
      {
        m_canary.store(true);
        m_running = true;
        Renderer m_rend(m_canary);
        m_rend.run();
      }

      void
      onResourceInitialization() override
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, CODE_ACTIVE);
        m_worker = std::thread(&Task::startRenderer, this);
      }

      void
      onResourceRelease() override
      {
        if (!m_running)
          return;

        m_canary.store(false);
        if (m_worker.joinable())
          m_worker.join();
      }

      //! Main loop.
      void
      task() override
      {  }
    };
  }
}

DUNE_TASK
