#include <gui/guiworkspace.hh>

#include <string>

using namespace ntmg::gui;

GuiWorkspace::GuiWorkspace()
{
    ImGui::Begin("Workspace");
    draw();
    ImGui::End();
}

void GuiWorkspace::draw()
{
    ImGui::Text("Project name");
    char text[128] = "example name..";
    ImGui::InputText("##Project Name", text, IM_ARRAYSIZE(text));

    int row = 80;
    int col = 80;
    int pix_w = 70;
    int pix_h = 70;

    ImGui::InputInt("Number of rows", &row);
    ImGui::InputInt("Number of colums", &col);
    ImGui::InputInt("Pixel height", &pix_h);
    ImGui::InputInt("Pixel width", &pix_w);
    ImGui::Button("Create");
    ImGui::Button("Cancel");
//    ImGui::PopItemWidth();
}
