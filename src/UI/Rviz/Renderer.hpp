#ifndef UI_RVIZ_RENDERER_INCLUDED_
#define UI_RVIZ_RENDERER_INCLUDED_

#include <DUNE/Concurrency/TSQueue.hpp>
#include <optional>

namespace UI::Rviz
{
  using namespace mahi::gui;
  using namespace mahi::util;
  using DUNE_NAMESPACES;

  struct ScrollingBuffer
  {
    static float
    min_of(std::initializer_list<ScrollingBuffer> list)
    {
      float minv = std::numeric_limits<float>::max();
      for(auto elem : list)
        minv = std::min(minv, elem.min());

      return minv;
    }

    static float
    max_of(std::initializer_list<ScrollingBuffer> list)
    {
      float maxv = std::numeric_limits<float>::min();
      for(auto elem : list)
        maxv = std::max(maxv, elem.max());

      return maxv;
    }

    int MaxSize;
    int Offset;
    ImVector<ImVec2> Data;
    //! max min
    float limits[2];

    ScrollingBuffer(int max_size = 10000)
    {
      MaxSize = max_size;
      Offset = 0;
      Data.reserve(MaxSize);
      limits[0] = std::numeric_limits<float>::max();
      limits[1] = std::numeric_limits<float>::min();
    }
    void
    AddPoint(float x, float y)
    {
      if (Data.size() < MaxSize)
        Data.push_back(ImVec2(x, y));
      else
      {
        Data[Offset] = ImVec2(x, y);
        Offset = (Offset + 1) % MaxSize;
      }

      limits[0] = std::min(limits[0], y);
      limits[1] = std::max(limits[1], y);
    }

    float min() const
    {
      return limits[0];
    }

    float max() const
    {
      return limits[1];
    }

    void
    Erase()
    {
      if (Data.size() > 0)
      {
        Data.shrink(0);
        Offset = 0;
      }
    }
  };

  struct RendererArguments
  {
    std::atomic<bool>& canary;
    TSQueue<IMC::Message*> inqueue;
    TSQueue<IMC::Message*> outqueue;
    uint16_t eid_thrust {};
    uint16_t eid_drag {};

    explicit RendererArguments(std::atomic<bool>& signal) :
        canary(signal)
    { }
  };

  class Renderer : public Application
  {
    //! velocities
    ScrollingBuffer u, v, w;
    //! thrust force
    ScrollingBuffer ftx, fty, ftz;
    //! attitude
    ScrollingBuffer phi, theta, psi;
    //! drag force
    ScrollingBuffer fdx, fdy, fdz;
    //! Altitude
    ScrollingBuffer alt;
    float max_velocities;
    float max_forces;
    float max_euler;

    RendererArguments& m_args;
    float m_first_time;
    bool m_paused;

  public:
    explicit Renderer(RendererArguments& args, float init_time) :
        Application(),
        max_velocities(std::numeric_limits<float>::min()),
        max_forces(std::numeric_limits<float>::min()),
        max_euler(std::numeric_limits<float>::min()),
        m_args(args),
        m_first_time(init_time),
        m_paused(false)
    {  }

    void
    readData()
    {
      if (m_paused)
        return;

      IMC::Message* m = m_args.inqueue.pop();
      while (m != nullptr)
      {
        switch (m->getId())
        {
          case DUNE_IMC_FORCE:
          {
            const IMC::Force* force = dynamic_cast<const IMC::Force*>(m);
            auto time = std::max(0.0, m->getTimeStamp() - m_first_time);

            if (m->getSourceEntity() == m_args.eid_thrust)
            {
              ftx.AddPoint(time, force->x);
              fty.AddPoint(time, force->y);
              ftz.AddPoint(time, force->z);
            }
            else if(m->getSourceEntity() == m_args.eid_drag)
            {
              fdx.AddPoint(time, force->x);
              fdy.AddPoint(time, force->y);
              fdz.AddPoint(time, force->z);
            }
            else
              return;

            max_forces = std::max(max_forces, (float) force->x);
            max_forces = std::max(max_forces, (float) force->y);
            max_forces = std::max(max_forces, (float) force->z);

          }
            break;
          case DUNE_IMC_ESTIMATEDSTATE:
          {
            const IMC::EstimatedState* state = dynamic_cast<const IMC::EstimatedState*>(m);
            auto time = std::max(0.0, m->getTimeStamp() - m_first_time);
            u.AddPoint(time, state->u);
            v.AddPoint(time, state->v);
            w.AddPoint(time, state->w);

            phi.AddPoint(time, state->phi);
            theta.AddPoint(time, state->theta);
            psi.AddPoint(time, state->psi);

            alt.AddPoint(time, state->height);

            max_velocities = std::max(max_velocities, state->u);
            max_velocities = std::max(max_velocities, state->v);
            max_velocities = std::max(max_velocities, state->w);

            max_euler = std::max(max_euler, state->phi);
            max_euler = std::max(max_euler, state->theta);
            max_euler = std::max(max_euler, state->psi);
          }
            break;
          default:
            throw std::runtime_error("unknown message");
        }
        delete m;
        m = m_args.inqueue.pop();
      }
    }

    void
    update() override
    {
      if (!m_args.canary.load())
        quit();

      ImGui::SetNextWindowSize(ImVec2(500, 900), ImGuiCond_FirstUseEver);
      if (ImGui::Begin("rviz"))
      {
        ImGui::Columns(2);

        readData();

        ImGuiCond_ cond = ImGuiCond_Always;
        if (m_paused)
          cond = ImGuiCond_Once;

        float t = (DUNE::Time::Clock::getSinceEpoch() - m_first_time);
        // @fixme why tf this happens
        if (t <= 0)
        {
          std::cerr << DUNE::Time::Clock::getSinceEpoch() << " | " << m_first_time << std::endl;
          m_first_time = DUNE::Time::Clock::getSinceEpoch();
          ImGui::End();
          return;
        }

        static ImPlotAxisFlags flags = ImPlotAxisFlags_None;
        ImPlot::SetNextPlotLimitsX(0, t + 5, cond);
        ImPlot::SetNextPlotLimitsY(ScrollingBuffer::min_of({u, v, w}) - 10,
                                   ScrollingBuffer::max_of({u, v, w}) + 10,
                                   cond);
        if (ImPlot::BeginPlot("##Velocity", "Time (s)",
                              "Velocity (m/s)", ImVec2(-1, 400),
                              0, flags, flags) &&
            !u.Data.empty())
        {
          ImPlot::SetNextFillStyle(IMPLOT_AUTO_COL, 0.5f);
          ImPlot::PlotLine("u",
                           &u.Data[0].x, &u.Data[0].y, u.Data.size(),
                           u.Offset,
                           2 * sizeof(float));

          ImPlot::PlotLine("v",
                           &v.Data[0].x, &v.Data[0].y, v.Data.size(),
                           v.Offset,
                           2 * sizeof(float));

          ImPlot::PlotLine("w",
                           &w.Data[0].x, &w.Data[0].y, w.Data.size(),
                           w.Offset,
                           2 * sizeof(float));

          ImPlot::EndPlot();
        }

        ImGui::NewLine();

        if (ImGui::BeginTabBar("Extra Plots"))
        {
          bool ftab = true;
          if (ImGui::BeginTabItem("Altitude", &ftab, ImGuiTabItemFlags_None))
          {
            ImPlot::SetNextPlotLimitsX(0, t + 5, cond);
            ImPlot::SetNextPlotLimitsY(
                0,
                alt.max() + 10, cond);
            if (ImPlot::BeginPlot("##Altitude", "Time (s)", "Altitude (m)",
                                  ImVec2(-1, 400), 0, flags, flags)
                && !alt.Data.empty())
            {
              ImPlot::SetNextFillStyle(IMPLOT_AUTO_COL, 0.5f);
              ImPlot::PlotLine("Altitude", &alt.Data[0].x, &alt.Data[0].y,
                               alt.Data.size(), alt.Offset, 2 * sizeof(float));

              ImPlot::EndPlot();
            }

            ImGui::EndTabItem();
          }

          bool alttab = true;
          if (ImGui::BeginTabItem("Thrust", &alttab, ImGuiTabItemFlags_None))
          {
            ImPlot::SetNextPlotLimitsX(0, t + 5, cond);
            ImPlot::SetNextPlotLimitsY(ScrollingBuffer::min_of({ftx, fty, ftz}) - 10,
                                       ScrollingBuffer::max_of({ftx, fty, ftz}) + 10, cond);
            if (ImPlot::BeginPlot("##Thrust", "Time (s)",
                                  "Thrust (N)", ImVec2(-1, 400),
                                  0, flags, flags) &&
                !ftx.Data.empty())
            {
              ImPlot::SetNextFillStyle(IMPLOT_AUTO_COL, 0.5f);
              ImPlot::PlotLine("x",
                               &ftx.Data[0].x, &ftx.Data[0].y, ftx.Data.size(),
                               ftx.Offset,
                               2 * sizeof(float));

              ImPlot::PlotLine("y",
                               &fty.Data[0].x, &fty.Data[0].y, fty.Data.size(),
                               fty.Offset,
                               2 * sizeof(float));

              ImPlot::PlotLine("z",
                               &ftz.Data[0].x, &ftz.Data[0].y, ftz.Data.size(),
                               ftz.Offset,
                               2 * sizeof(float));

              ImPlot::EndPlot();
            }

            ImGui::EndTabItem();
          }
          ImGui::EndTabBar();
        }

        ImGui::NextColumn();
        ImPlot::SetNextPlotLimitsX(0, t + 5, cond);
        ImPlot::SetNextPlotLimitsY(ScrollingBuffer::min_of({phi, theta, psi}) - 1,
                                   ScrollingBuffer::max_of({phi, theta, psi}) + 1,
                                   cond);
        if (ImPlot::BeginPlot("##Atitude", "Time (s)",
                              "Euler Angles", ImVec2(-1, 400),
                              0, flags, flags) &&
            !phi.Data.empty())
        {
          ImPlot::SetNextFillStyle(IMPLOT_AUTO_COL, 0.5f);
          ImPlot::PlotLine("phi",
                           &phi.Data[0].x, &phi.Data[0].y, phi.Data.size(),
                           phi.Offset,
                           2 * sizeof(float));

          ImPlot::PlotLine("theta",
                           &theta.Data[0].x, &theta.Data[0].y, theta.Data.size(),
                           theta.Offset,
                           2 * sizeof(float));

          ImPlot::PlotLine("psi",
                           &psi.Data[0].x, &psi.Data[0].y, psi.Data.size(),
                           psi.Offset,
                           2 * sizeof(float));

          ImPlot::EndPlot();
        }

        ImGui::NewLine();
        ImPlot::SetNextPlotLimitsX(0, t + 5, cond);
        ImPlot::SetNextPlotLimitsY(ScrollingBuffer::min_of({fdx, fdy, fdz}) - 5,
                                   ScrollingBuffer::max_of({fdx, fdy, fdz}) + 5, cond);
        if (ImPlot::BeginPlot("##Drag", "Time (s)",
                              "Drag Force", ImVec2(-1, 400),
                              0, flags, flags) &&
            !fdx.Data.empty())
        {
          ImPlot::SetNextFillStyle(IMPLOT_AUTO_COL, 0.5f);
          ImPlot::PlotLine("Drag - x",
                           &fdx.Data[0].x, &fdx.Data[0].y, fdx.Data.size(),
                           fdx.Offset,
                           2 * sizeof(float));

          ImPlot::PlotLine("Drag - y",
                           &fdy.Data[0].x, &fdy.Data[0].y, fdy.Data.size(),
                           fdy.Offset,
                           2 * sizeof(float));

          ImPlot::PlotLine("Drag - z",
                           &fdz.Data[0].x, &fdz.Data[0].y, fdz.Data.size(),
                           fdz.Offset,
                           2 * sizeof(float));

          ImPlot::EndPlot();
        }

        if (ImGui::Button("Launch"))
        {
          IMC::SetThrusterActuation launch;
          launch.value = 1;
          m_args.outqueue.push(launch.clone());
        }

        ImGui::ToggleButton("Pause", &m_paused);

        ImGui::End();
      }
    }
  };
}

#endif
