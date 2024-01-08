#include "doctest.h"
#include "map.h"
#include "point.h"
#include <iostream>


TEST_CASE("Test cross product between points")
{
    fcg::Point a {10.0f, 5.0f};
    fcg::Point b {5.0f, 2.0f};
    fcg::Map map{};

    //std::cout << map.cross_product(a,b) << std::endl;

    CHECK(map.cross_product(a,b) == -5.0f);
}

TEST_CASE("Test if point is inside a circle") 
{
    fcg::Point a {800.0f,200.0f};
    fcg::Point b {300.0f, 500.0f};
    fcg::Point c {1000.0f, 600.0f};
    fcg::Point p {400,450};

    fcg::Map map{};

    std::cout << map.inside_circle(a,b,c,p) << std::endl;

    CHECK(map.inside_circle(a,b,c,p));
}