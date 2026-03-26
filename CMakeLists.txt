cmake_minimum_required(VERSION 3.20)
project(SFML_practice)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(SFML_practice main.cpp)
target_link_libraries(SFML_practice sfml-graphics sfml-window sfml-system)