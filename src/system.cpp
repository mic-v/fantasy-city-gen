#include "system.h"
#include <iostream>


fcg::System::System(fcg::Window& window) 
    : window_(window) {

}

void fcg::System::start_system() {
    std::cout << "Starting system\n"; 
    window_.initialize_window();
       
}

void fcg::System::run_system() {
    std::cout << this->window_.is_open() << std::endl;
    while(this->window_.is_open()) {
        this->window_.poll_events();

        this->window_.clear();
        this->window_.display();
    }
}

void fcg::System::close_system() {
    std::cout << "Ending system\n";    
}

