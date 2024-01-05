#include "point.h"

#include <SFML/Graphics/ConvexShape.hpp>

namespace fcg {

struct Triangle {
    Triangle(sf::Vector2f, sf::Vector2f, sf::Vector2f);
    //Triangle(fcg::Point, fcg::Point, fcg::Point);
    ~Triangle();
    fcg::Point a, b, c;
    sf::ConvexShape shape;

    
};

}