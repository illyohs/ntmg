#include <gui/mainwindow.hh>

#include <iostream>
#include <stdio.h>

using namespace ntmg::gui;


MainGui::MainGui()
{
}

MainGui::~MainGui()
{
}

void MainGui::init(std::string name, int width, int height)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {

        SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
        SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
        SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
        SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
        SDL_DisplayMode current;
        SDL_GetCurrentDisplayMode(0, &current);
        window = SDL_CreateWindow(name.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);
        SDL_GLContext gl_context = SDL_GL_CreateContext(window);
	    SDL_GL_SetSwapInterval(1); // Enable vsync
    	glewInit();

        ImGui::CreateContext();
        ImGuiIO& io = ImGui::GetIO(); (void)io;

        ImGui_ImplSdlGL3_Init(window);
        ImGui::StyleColorsDark();
        _running = true;

    }
    else
    {
        printf("Error: %s\n", SDL_GetError());
        _running = false;
    }


}

void MainGui::eventHandle()
{
    SDL_Event event;
    // SDL_PollEvent(&event);
    ImGui_ImplSdlGL3_ProcessEvent(&event);
    switch(event.type) {
        case SDL_QUIT:
            _running = false;
            break;
        default:
            break;
    }
}

void MainGui::update()
{

}

void MainGui::render()
{
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);


    glViewport(0, 0, (int)ImGui::GetIO().DisplaySize.x, (int)ImGui::GetIO().DisplaySize.y);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    ImGui::Render();
    ImGui_ImplSdlGL3_RenderDrawData(ImGui::GetDrawData());
    SDL_GL_SwapWindow(window);
}

void MainGui::clean()
{
    ImGui_ImplSdlGL3_Shutdown();
    ImGui::DestroyContext();
    SDL_DestroyWindow(window);
    SDL_Quit();
    std::cout << "Quiting sdl" << std::endl;
}