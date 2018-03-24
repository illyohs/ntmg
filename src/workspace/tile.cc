#include <workspace/tile.hh>

using namespace ntmg;


Tile::Tile(int id, int x, int y)
{
    _id = id;
    _x = x;
    _y = y;
}

Tile::~Tile()
{

}

std::string Tile::getName()
{
    return _name;
}

void Tile::setName(std::string name)
{
    _name = name;
}


std::string Tile::getAsset()
{
    return _asset;
}

void Tile::setAsset(std::string asset)
{
    _asset = asset;
}

int Tile::getX()
{
    return _x;
}

int Tile::getY()
{
    return _y;
}