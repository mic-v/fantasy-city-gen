#pragma once

#include "graphics/window.h"

namespace fcg {

class System {
public:
    System(fcg::Window& window);

    void start_system();
    void run_system();
    void close_system();
private:
    fcg::Window & window_;

};

}