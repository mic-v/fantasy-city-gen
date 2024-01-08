#pragma once

#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderStates.hpp>

namespace fcg {

    class Window {

    public:
        Window();
        Window(std::string, std::string);
        ~Window();

        int initialize_window();
        void poll_events() const;
        bool is_open() const;
        void display() const;
        void clear() const;

        void draw(const sf::Drawable& drawable, const sf::RenderStates& states=sf::RenderStates::Default) const;

        sf::Vector2u get_window_size() const;
    private:
        sf::RenderWindow* rfWindow_;
    };
}
