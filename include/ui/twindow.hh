#pragma once

#include <string>
#include <SDL.h>

namespace ntmg::ui
{
    class Twindow
    {
        private:
            bool _running;
            SDL_Window *window;
            SDL_Renderer *renderer;

        public:
            Twindow();
            ~Twindow();

            void init(std::string name, int height, int weidth);
            void eventHandle();
            void update();
            void render();
            void clean();
            bool isRunning() { return _running;}
    };
}