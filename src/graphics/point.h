#pragma once

#include <SFML/Graphics/VertexArray.hpp>
#include <SFML/System/Vector2.hpp>

namespace fcg {
class Point : public sf::Drawable {
    public:
        Point(float x, float y);
        Point(sf::Vector2f);

        ~Point();

    private:
        sf::Vector2f pos_;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};
}