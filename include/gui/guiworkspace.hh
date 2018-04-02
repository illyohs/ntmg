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
            int _pixel_width;
            // TileType _type;
            void draw();
        public:
            GuiWorkspace();
    };

    enum class TileType
    {
        HEX, SQUARE
    };

}
