#include "window.h";
#include <SFML/Window.hpp>
#include <iostream>

fcg::Window::Window() {
    std::cout << "Start Window" << std::endl;
}

fcg::Window::~Window() {
    std::cout << "End Window" << std::endl;
}     

int fcg::Window::initialize_window() {
    this->rfWindow_ = new sf::RenderWindow();
    this->rfWindow_->create(sf::VideoMode(800,600), "Fantasy City Gen");
    this->rfWindow_->setFramerateLimit(60);
    return 0;
}

void fcg::Window::poll_events() {
    sf::Event event;
    while(this->rfWindow_->pollEvent(event)) {
        if(event.type == sf::Event::Closed) {
            this->rfWindow_->close();
        }
        if(event.type == sf::Event::MouseButtonPressed) {
            if(event.mouseButton.button == sf::Mouse::Right) {
                std::cout << "Right click pressed" << std::endl;
             }
        }
        if(event.type == sf::Event::MouseMoved) {
        }
    }
}

void fcg::Window::clear() {
    this->rfWindow_->clear(sf::Color(220,192,110));
}

void fcg::Window::display() {
    this->rfWindow_->display();
}

bool fcg::Window::is_open() {
    return this->rfWindow_->isOpen();
}   

void fcg::Window::draw(const sf::Drawable& drawable, const sf::RenderStates& states) {
    this->rfWindow_->draw(drawable, states);
}
