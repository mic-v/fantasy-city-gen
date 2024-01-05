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
    fcg::Triangle triangle(sf::Vector2f(0.0f,0.0f), sf::Vector2f(40.0f, 100.0f), sf::Vector2f(0.0, 150.0f));
    /*

    srand(time(0));

    for(auto x = 0; x < GRIDSIZE; x++) {
        for(auto y = 0; y < GRIDSIZE; y++) {
            points.push_back(sf::Vector2f(x + JITTER * (rand() - rand()),
                        y + JITTER * (rand() - rand())));
            
            sf::CircleShape circle(3.0f);
            circle.setFillColor(sf::Color(255,0,50));
            circle.setPosition((x + JITTER * (rand()) / RAND_MAX) * (800 / GRIDSIZE), (y + JITTER * (rand()) / RAND_MAX) * (600 / GRIDSIZE));
            circles.push_back(circle);

        }
    }
    */
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

