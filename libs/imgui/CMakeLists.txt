cmake_minimum_required(VERSION 3.25.1)

project(imgui LANGUAGES C CXX)

add_library(imgui STATIC imgui.cpp imgui.h imgui_internal.h)

target_include_directories(imgui PRIVATE .)