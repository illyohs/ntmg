#pragma once

#include <imgui.h>
#include <string>

namespace ntmg::gui
{
    class GuiWorkspace
    {
        private:
            std::string _name;
            int _rows;
            int _colums;
            int _pixel_height;
            int _pixel_lenthg;
            //enum TileType {HEX, SQUAR};
            void draw();
        public:
            GuiWorkspace();
    };

}
