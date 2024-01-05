#include "doctest.h"
#include "map.h"
#include "point.h"
#include <iostream>


TEST_CASE("Test cross product between points")
{
    fcg::Point a {10.0f, 5.0f};
    fcg::Point b {5.0f, 2.0f};
    fcg::Map map{};

    std::cout << map.cross_product(a,b) << std::endl;

    CHECK(map.cross_product(a,b) == -5.0f);
}

TEST_CASE("Test if point is inside a circle") 
{
    fcg::Point a {1,1};
    fcg::Point b {2,4};
    fcg::Point c {5,3};
    fcg::Point p {3,2};

    fcg::Map map{};

    CHECK(map.inside_circle(a,b,c,p));
}