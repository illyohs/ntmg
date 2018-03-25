#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <string>

#include <imgui.h>
#include <imgui_impl_glfw_gl3.h>

namespace ntmg::gui
{
    class MainGui
    {
        private:
            GLFWwindow *window;
            bool _running;
            ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

        public:
            MainGui();
            ~MainGui();
            void init(std::string name, int height, int weidth);
            void eventHandle();
            void update();
            void render();
            void clean();
            bool isRunning() { return _running;}
    };
}