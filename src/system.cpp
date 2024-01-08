#include "system.h"
#include <iostream>
#include <vector>
#include <SFML/System/Vector2.hpp>
#include <cstdlib>
#include <ctime>
#include "core/include/map.h"
#include "core/include/triangle.h"

fcg::System::System(fcg::Window& window) 
    : window_(window) {

}

void fcg::System::start_system() {
    std::cout << "Starting system\n"; 
    window_.initialize_window();
       
}

void fcg::System::run_system() {
    fcg::Map map;
    fcg::Triangle triangle(sf::Vector2f(800.0f, 200.0f), sf::Vector2f(300.0f, 500.0f), sf::Vector2f(1000.0f, 600.0f));

    while(this->window_.is_open()) {
        this->window_.poll_events();

        this->window_.clear();

        for(auto& x: map.get_points()) {
            this->window_.draw(x.get_point());
        }
        this->window_.draw(triangle.shape);

        this->window_.display();
    }
}

void fcg::System::close_system() {
    std::cout << "Ending system\n";    
}

