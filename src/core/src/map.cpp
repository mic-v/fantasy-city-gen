#include "map.h"

const float EPSILON = 1e-12f;

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

float fcg::Map::cross_product(fcg::Point a, fcg::Point b) const{
    return a.get_pos().x * b.get_pos().y - a.get_pos().y * b.get_pos().x;
}

bool fcg::Map::inside_circle(fcg::Point a, fcg::Point b, fcg::Point c, fcg::Point p) const {
    float ax = a.get_x() - p.get_x();
    float ay = a.get_y() - p.get_y();

    float bx = b.get_x() - p.get_x();
    float by = b.get_y() - p.get_y();

    float cx = c.get_x() - p.get_x();
    float cy = c.get_y() - p.get_y();

    return (ax * (by - cy) + bx * (cy - ay) + cx * ( ay - by)) >= EPSILON;
}


std::vector<fcg::Point> fcg::Map::get_points() const {
    return this->points_;
}


