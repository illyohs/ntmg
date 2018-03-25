#include <gui/mainwindow.hh>

using namespace ntmg::gui;

int main()
{

    MainGui *mg = nullptr;
    mg = new MainGui();

    mg->init("Native Tile Map Generator", 1280, 720);
    mg->clean();
    return 0;
}