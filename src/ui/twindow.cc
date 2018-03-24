#include <ui/twindow.hh>
#include <iostream>

using namespace ntmg::ui;


Twindow::Twindow()
{
}

Twindow::~Twindow()
{
}

void Twindow::init(std::string name, int height, int weidth)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "SDL initialzied" << std::endl;
        window = SDL_CreateWindow(name.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, weidth, height, SDL_WINDOW_OPENGL);
        if (window)
        {
            std::cout << "Created window!!" << std::endl;
        }

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer)
        {
            std::cout << "Created renderer!!" << std::endl;
        }
        
        _running = true;
    }
    else
    {
        _running = false;
    }


}

void Twindow::eventHandle()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch(event.type) {
        case SDL_QUIT:
            _running = false;
            break;
        default:
            break;
    }
}

void Twindow::update()
{

}

void Twindow::render()
{
    SDL_RenderClear(renderer);

    SDL_RenderPresent(renderer);
}

void Twindow::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    SDL_Quit();
    std::cout << "Quiting sdl" << std::endl;
}