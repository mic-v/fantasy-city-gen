#include "system.h"
#include "core/include/window.h"

int main() {
    fcg::Window window;
    fcg::System system(window);

    system.start_system();
    system.run_system();
    system.close_system();


    /*
    auto window = sf::RenderWindow{{1920u, 1080u}, "CMake SFML Project"};
    window.setFramerateLimit(144);

    while (window.isOpen()) {
        for (auto event = sf::Event{}; window.pollEvent(event);) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        window.display();
    }
    */

    return EXIT_SUCCESS;
}
