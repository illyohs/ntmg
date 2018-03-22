#include <tile.hh>

using namespace atg;


Tile::Tile(int id, int x, int y)
{
    id = id;
    x = x;
    y = y;
}

Tile::~Tile()
{

}

std::string Tile::getName()
{
    return name;
}

void Tile::setName(std::string name)
{
    name = name;
}


std::string Tile::getAsset()
{
    return asset;
}

void Tile::setAsset(std::string asset)
{
    asset = asset;
}

int Tile::getX()
{
    return x;
}

int Tile::getY()
{
    return y;
}