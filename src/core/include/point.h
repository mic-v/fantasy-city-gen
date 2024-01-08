#pragma once

#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/CircleShape.hpp>

namespace fcg {
class Point {
    public:
        Point(sf::Vector2f = sf::Vector2f(0.0f,0.0f));
        Point(float x, float y);
        ~Point();

        float x;
        float y;

        void set_point(sf::CircleShape);
        sf::CircleShape get_point() const;

        void set_pos(sf::Vector2f);
        sf::Vector2f get_pos() const;

        float get_x() const;
        float get_y() const;


        friend bool operator==(const Point&, const Point&);
        friend bool operator!=(const Point&, const Point&);
    private:
        sf::Vector2f pos_;
        sf::CircleShape point_;
};
}