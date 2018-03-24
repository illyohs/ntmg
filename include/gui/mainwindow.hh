#pragma once

#include <GL/glew.h>
#include <SDL.h>
#include <SDL_opengl.h>

#include <string>

#include <imgui.h>
#include <imgui_impl_sdl_gl3.h>

namespace ntmg::gui
{
    class MainGui
    {
        private:
            bool _running;
            SDL_Window *window;

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