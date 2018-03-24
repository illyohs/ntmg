#include <workspace/map.hh>
#include <ui/twindow.hh>
#include <iostream>

// using namespace ntmg;
using namespace ntmg::ui;

int main()
{
    Twindow *tw = nullptr;

    tw = new Twindow();

    tw->init("stmg", 480, 800);

    while(tw->isRunning())
    {
        tw->eventHandle();
        tw->update();
        tw->render();
    }

    tw->clean();
    return 0;
}