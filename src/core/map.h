#pragma once

#include <vector>
#include "point.h"

const int GRID_SIZE = 5;
const float JITTER = 0.5f;

namespace fcg {

class Map {
    public:
        Map();
        ~Map();


        std::vector<fcg::Point> get_points() const;

    private:
        std::vector<fcg::Point> points_;
};
}