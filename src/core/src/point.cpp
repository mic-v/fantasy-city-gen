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

void fcg::Point::set_pos(sf::Vector2f pos) {
    this->pos_ = pos;
}


sf::Vector2f fcg::Point::get_pos() const {
    return this->pos_;
}

float fcg::Point::get_x() const {
    return this->pos_.x;
}

float fcg::Point::get_y() const {
    return this->pos_.y;
}

bool operator== (const fcg::Point& a, const fcg::Point& b) {
    return a.get_pos().x == b.get_pos().x && a.get_pos().y == b.get_pos().y;
}

bool operator!=(const fcg::Point& a, const fcg::Point& b) {
    return a.get_pos().x != b.get_pos().x || a.get_pos().y != b.get_pos().y;
}
