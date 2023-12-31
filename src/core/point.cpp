#include "point.h"

const float RADIUS = 5.0f;
const int COLOUR_R_VAL = 255;
const int COLOUR_G_VAL = 0;
const int COLOUR_B_VAL = 90;


fcg::Point::Point(float x, float y) : 
    pos_(sf::Vector2f(x, y)),
    point_(sf::CircleShape(RADIUS))
{
    this->point_.setFillColor(sf::Color(COLOUR_R_VAL, COLOUR_G_VAL, COLOUR_B_VAL));
    this->point_.setPosition(this->pos_);
}

fcg::Point::Point(sf::Vector2f vec) : 
    pos_(vec),
    point_(sf::CircleShape(RADIUS)) 
{
    this->point_.setFillColor(sf::Color(COLOUR_R_VAL, COLOUR_G_VAL, COLOUR_B_VAL));
    this->point_.setPosition(this->pos_);
}

fcg::Point::~Point() {
    
}

void fcg::Point::set_point(sf::CircleShape point) {
    this->point_ = point;
}

sf::CircleShape fcg::Point::get_point() const {
    return this->point_;
}

