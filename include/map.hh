#pragma once

#include <string>
#include <vector>

#include "tile.hh"

namespace atg
{
    class Map
    {
        private:
            std::string mapName;
            int column;
            int rows;
            int tile_width;
            int tile_height;
            std::vector<Tile> tiles;
            void calcTiles()
            {
                if (!tiles.empty())
                {
                    tiles.clear();
                }

                for (int c = 0; c <= column; c++)
                {
                    for (int r = 0; r <= rows; r++)
                    {
                        Tile tile = Tile(tiles.size(), r, c);
                        tiles.push_back(tile);
                    }
                }
            }

        public:
            Map(std::string name, int col, int row, int twidth, int theight);
            std::string getName();
            int getColumns();
            void setColumns(int col);
            int getRow();
            void setRows(int rows);
            int getTileHeight();
            void setTileHeight(int height);
            int getTileWidth();
            void setTileWidth(int width);
            std::vector<Tile> getTiles();
    };
}