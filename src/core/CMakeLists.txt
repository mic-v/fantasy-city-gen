project(core)

add_library(core
    src/map.cpp
    src/point.cpp
    src/triangle.cpp
    src/window.cpp
)

add_library(fcg::core ALIAS core)

target_link_libraries(core PRIVATE sfml-graphics)

target_include_directories(core
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

