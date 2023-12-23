#include "system.h"
#include <iostream>
#include <vector>
#include <SFML/System/Vector2.hpp>
#include <cstdlib>
#include <ctime>


fcg::System::System(fcg::Window& window) 
    : window_(window) {

}

void fcg::System::start_system() {
    std::cout << "Starting system\n"; 
    window_.initialize_window();
       
}

void fcg::System::run_system() {
    const int GRIDSIZE = 25;
    const float JITTER = 0.5f;
    std::vector<sf::Vector2f> points = {};
    std::vector<sf::CircleShape> circles = {};


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


    std::cout << "length of circles" << circles.size() << std::endl;
    for(auto & x: circles) {
        std::cout << x.getPosition().x << " " << x.getPosition().y << std::endl;
    }
    


    std::cout << this->window_.is_open() << std::endl;
    while(this->window_.is_open()) {
        this->window_.poll_events();

        this->window_.clear();

        for(auto& x: circles) {
            this->window_.draw(x);
        }

        this->window_.display();
    }
}

void fcg::System::close_system() {
    std::cout << "Ending system\n";    
}

