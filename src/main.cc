#include <map.hh>
#include <iostream>

using namespace atg;
int main()
{
    Map map = Map("foo", 9, 9, 32, 32);
    std::cout << map.getName() << std::endl;

    std::vector<Tile> tiles = map.getTiles();
    for (int i = 0; i < map.getTiles().size(); i++)
    {
        std::cout << tiles.at(i).getX() << " : " << tiles.at(i).getY() << std::endl;
    }
    return 0;
}