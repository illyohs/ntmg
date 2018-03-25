#include <gui/mainwindow.hh>
#include <gui/guiworkspace.hh>
#include <stdio.h>

#include <iostream>

using namespace ntmg::gui;

static void glfw_error_callback(int error, const char* description)
{
    fprintf(stderr, "Error %d: %s\n", error, description);
}

MainGui::MainGui()
{
}

MainGui::~MainGui()
{
}

void MainGui::init(std::string name, int width, int height)
{
    if (!glfwInit())
    {

        printf("Error: ");
        _running = false;
    }
    else
    {

        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#if __APPLE__
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif
        window = glfwCreateWindow(width, height, name.c_str(), NULL, NULL);
        glfwMakeContextCurrent(window);
        glfwSwapInterval(1); // Enable vsync
        glewInit();
        _running = true;

        while(!glfwWindowShouldClose(window))
        {


            ImGui::CreateContext();
            ImGuiIO& io = ImGui::GetIO(); (void)io;
            //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
            //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
            ImGui_ImplGlfwGL3_Init(window, true);

            // Setup style
            ImGui::StyleColorsDark();
            render();
        }
    }
}

void MainGui::eventHandle()
{

}

void MainGui::update()
{
}

void MainGui::render()
{
    glfwPollEvents();
    ImGui_ImplGlfwGL3_NewFrame();

    GuiWorkspace();

    int display_w, display_h;
    glfwGetFramebufferSize(window, &display_w, &display_h);
    glViewport(0, 0, display_w, display_h);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    ImGui::Render();
    ImGui_ImplGlfwGL3_RenderDrawData(ImGui::GetDrawData());
    glfwSwapBuffers(window);
}

void MainGui::clean()
{
    // Cleanup
    ImGui_ImplGlfwGL3_Shutdown();
    ImGui::DestroyContext();
    glfwTerminate();
    std::cout << "Quitting Native Tile Map Generator!" << std::endl;
}
