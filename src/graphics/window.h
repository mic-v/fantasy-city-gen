#pragma once

#include <string>
#include <SFML/Graphics.hpp>

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
    private:
        sf::RenderWindow* rfWindow_;
    };
}
