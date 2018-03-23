#include <map.hh>

using namespace atg;

Map::Map(std::string name, int col, int row, int twidth, int theight)
{
    _mapName = name;
    _column = col;
    _rows = row;
    _tile_width = twidth;
    _tile_height = theight;
    calcTiles();
}

std::string Map::getName()
{
    return _mapName;
}

int Map::getColumns()
{
    return _column;
}

void Map::setColumns(int cols)
{
    _column = cols;
}

int Map::getRow()
{
    return _rows;
}

void Map::setRows(int rows)
{
    _rows = rows;
}

int Map::getTileHeight()
{
    return _tile_height;
}

void Map::setTileHeight(int th)
{
    _tile_height = th;
}

int Map::getTileWidth()
{
    return _tile_width;
}

void Map::setTileWidth(int width)
{
    _tile_width = width;
}

std::vector<Tile> Map::getTiles()
{
    return _tiles;
}