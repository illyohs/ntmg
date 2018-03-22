#include <map.hh>

using namespace atg;

Map::Map(std::string name, int col, int row, int twidth, int theight)
{
    mapName = name;
    column = col;
    rows = row;
    tile_width = twidth;
    tile_height = theight;
    calcTiles();
}

std::string Map::getName()
{
    return mapName;
}

int Map::getColumns()
{
    return column;
}

void Map::setColumns(int cols)
{
    column = cols;
}

int Map::getRow()
{
    return rows;
}

void Map::setRows(int rows)
{
    rows = rows;
}

int Map::getTileHeight()
{
    return tile_height;
}

void Map::setTileHeight(int th)
{
    tile_height = th;
}

int Map::getTileWidth()
{
    return tile_width;
}

void Map::setTileWidth(int width)
{
    tile_width = width;
}

std::vector<Tile> Map::getTiles()
{
    return tiles;
}