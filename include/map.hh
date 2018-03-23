#pragma once

#include <string>
#include <vector>

#include "tile.hh"

namespace atg
{
    class Map
    {
        private:
            std::string _mapName;
            int _column;
            int _rows;
            int _tile_width;
            int _tile_height;
            std::vector<Tile> _tiles;
            void calcTiles()
            {
                if (!_tiles.empty())
                {
                    _tiles.clear();
                }

                for (int c = 0; c <= _column; c++)
                {
                    for (int r = 0; r <= _rows; r++)
                    {
                        Tile tile = Tile(_tiles.size(), r, c);
                        _tiles.push_back(tile);
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