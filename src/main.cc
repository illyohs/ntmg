#include <gui/mainwindow.hh>

using namespace ntmg::gui;

int main()
{

    MainGui *mg = nullptr;
    mg = new ntmg::gui::MainGui();

    mg->init("Native Tile Map Generator", 1280, 720);
    while(mg->isRunning())
    {
        mg->render();
        mg->update();
        mg->eventHandle();
    }

    mg->clean();
    return 0;
}