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

        float cross_product(fcg::Point, fcg::Point) const;      
        float inside_circle(fcg::Point a, fcg::Point b, fcg::Point c, fcg::Point p) const;
        long int ccw(fcg::Point a, fcg::Point b, fcg::Point c) const;
    private:
        std::vector<fcg::Point> points_;
};
}