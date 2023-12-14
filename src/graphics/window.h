#pragma once

#include <string>
#include <SFML/Graphics.hpp>

namespace fcg {

    class Window {

    public:
        Window();
        Window(std::string, std::string);
        ~Window();
    private:
        sf::Window window;
    };
}
