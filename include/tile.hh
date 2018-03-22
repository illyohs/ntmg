#pragma once

#include <string>
#include <vector>

namespace atg
{
    class Tile
    {
        private:
            int id;
            std::string name;
            std::string asset;
            int x;
            int y;

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