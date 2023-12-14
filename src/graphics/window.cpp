#include "window.h";
#include <iostream>

fcg::Window::Window() {
    std::cout << "Start Window" << std::endl;
}

fcg::Window::~Window() {
    std::cout << "End Window" << std::endl;
}