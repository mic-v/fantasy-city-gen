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
        void poll_events();
        bool is_open();
        void display();
        void clear();

        void draw(const sf::Drawable& drawable, const sf::RenderStates& states=sf::RenderStates::Default);
    private:
        sf::RenderWindow* rfWindow_;
    };
}
