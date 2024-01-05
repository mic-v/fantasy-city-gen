#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "point.h"

TEST_CASE("Point Initial creation") {
    fcg::Point point {};
    CHECK(point.get_pos() == sf::Vector2f(0.0f,0.0f));
}

TEST_CASE("Point Vector creation") {
    
   fcg::Point point {sf::Vector2f(10.0f, 5.6f)};
   CHECK(point.get_pos().x == 10.0f);
   CHECK(point.get_pos().y == 5.6f);
}
