#include "map.h"
#include <iostream>

fcg::Map::Map() : points_(0)
{
    /*
    for(auto i = 0; i < GRID_SIZE; i++) {
        for(auto j = 0; j < GRID_SIZE; j++) {
            this->points_.push_back(Point(i * GRID_SIZE * 5, j * GRID_SIZE * 5));
        }
    }
    */
   //this->points_.push_back(Point(600, 300));
   //this->points_.push_back(Point(1000, 450));
   this->points_.push_back(Point(400, 450));   
}

fcg::Map::~Map() {

}

float fcg::Map::cross_product(fcg::Point a, fcg::Point b) const{
    return a.get_pos().x * b.get_pos().y - a.get_pos().y * b.get_pos().x;
}

float fcg::Map::inside_circle(fcg::Point a, fcg::Point b, fcg::Point c, fcg::Point p) const {
    //  std::cout << a.get_x() << std::endl;
    float ax = a.get_x() - p.get_x();
    float ay = a.get_y() - p.get_y();

    float bx = b.get_x() - p.get_x();
    float by = b.get_y() - p.get_y();

    float cx = c.get_x() - p.get_x();
    float cy = c.get_y() - p.get_y();

    std::cout << "ax: " << ax << "\n"
            << "ay: " << ay << "\n"
            << "bx: " << bx << "\n"
            << "by: " << by << "\n";
    return (
        0 - 576000000 + (-145800000000)
    );
    /*
    return (
        ax * (by * (cx*cx + cy*cy) - cy * (bx*bx + by*by))
        - ay * (bx * (cx*cx + cx*cx) - cx * (bx*bx + by*by))
        + ((ax*ax+ay*ay) * (bx*cy - by*cx))
        );

    */

    /*
    return (
        (ax*ax + ay*ay) * (bx*cy-cx*by) -
        (bx*bx + by*by) * (ax*cy-cx*ay) +
        (cx*cx + cy*cy) * (ax*by-bx*ay)
    );
    */
}


std::vector<fcg::Point> fcg::Map::get_points() const {
    return this->points_;
}

long int fcg::Map::ccw(fcg::Point a, fcg::Point b, fcg::Point c) const {
    return (b.get_x() - a.get_x()) * (c.get_y() - a.get_y()) - (c.get_x() - a.get_x()) * (b.get_y() - a.get_y());
}



