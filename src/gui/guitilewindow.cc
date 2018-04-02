#include <gui/guitilewindow.hh>

using namespace ntmg::gui;

GuiTileWindow::GuiTileWindow()
{

}

GuiTileWindow::~GuiTileWindow()
{

}



void GuiTileWindow::init()
{
    ImGui::Begin("Tile Map");
    ImGui::GetWindowDrawList()->AddCallback(gl_callback, NULL);
    ImGui::End();
}