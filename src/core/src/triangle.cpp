#include "triangle.h"

fcg::Triangle::Triangle(sf::Vector2f x, sf::Vector2f y, sf::Vector2f z) :
    shape(sf::ConvexShape())
{
    this->shape.setPointCount(3);
    shape.setPoint(0, x);
    shape.setPoint(1, y);
    shape.setPoint(2, z);

    shape.setFillColor(sf::Color::Transparent);
    shape.setOutlineColor(sf::Color::Red);
    shape.setOutlineThickness(2.0f);
}   

fcg::Triangle::~Triangle() {

}





