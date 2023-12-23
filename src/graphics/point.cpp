#include "point.h"

fcg::Point::Point(float x, float y) : pos_(sf::Vector2f(x, y)) {}

fcg::Point::Point(sf::Vector2f vec) : pos_(vec) {}