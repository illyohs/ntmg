#include <gui/guiworkspace.hh>
#include <gui/guitilewindow.hh>

#include <string>

using namespace ntmg::gui;


GuiWorkspace::GuiWorkspace()
{
    _rows = 80;
    _colums = 80;
    _pixel_height = 70;
    _pixel_width = 70;
    // _type = TileType::SQUARE;
    ImGui::Begin("Workspace");
    draw();
    ImGui::End();
}

void GuiWorkspace::draw()
{
    ImGui::Text("Project");
    static char text[128] = "iamaprojectname";
    ImGui::InputText("Project Name", text, sizeof(text));

    int new_row;
    int new_colums;
    int pix_height;
    int pix_width;

    new_row = _rows;
    new_colums = _colums;
    pix_height = _pixel_height;
    pix_width = _pixel_width;
    ImGui::InputInt("Number of rows", &new_row);
    ImGui::InputInt("Number of colums", &new_colums);
    ImGui::InputInt("Pixel height", &pix_height);
    ImGui::InputInt("Pixel width", &pix_width);


    static int e = 0;
	ImGui::RadioButton("Square", &e, 0); ImGui::SameLine();
	ImGui::RadioButton("Hex", &e, 1);


    if(ImGui::Button("Create"))
    {
        // auto tileWin = GuiTileWindow();
        // tileWin.init();
    }
    ImGui::Button("Cancel");
//    ImGui::PopItemWidth();
}
