#pragma once

#include <string>
#include <vector>

namespace ntmg
{
    class Tile
    {
        private:
            int _id;
            std::string _name;
            std::string _asset;
            int _x;
            int _y;

        public:
            Tile(int id, int x, int y);
            ~Tile();
            std::string getName();
            void setName(std::string name);
            std::string getAsset();
            void setAsset(std::string asset);
            int getX();
            int getY();
    };


}