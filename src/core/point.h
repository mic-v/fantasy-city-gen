#pragma once

#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/CircleShape.hpp>

namespace fcg {
class Point {
    public:
        Point(sf::Vector2f = sf::Vector2f(0.0f,0.0f));
        Point(float x, float y);

        ~Point();

        void set_point(sf::CircleShape);
        sf::CircleShape get_point() const;
    private:
        sf::Vector2f pos_;
        sf::CircleShape point_;
};
}