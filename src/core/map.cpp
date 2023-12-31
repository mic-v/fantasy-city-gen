#include "map.h"

fcg::Map::Map() : points_(0)
{
    for(auto i = 0; i < GRID_SIZE; i++) {
        for(auto j = 0; j < GRID_SIZE; j++) {
            this->points_.push_back(Point(i * GRID_SIZE * 5, j * GRID_SIZE * 5));
        }
    }
}

fcg::Map::~Map() {

}



std::vector<fcg::Point> fcg::Map::get_points() const {
    return this->points_;
}


