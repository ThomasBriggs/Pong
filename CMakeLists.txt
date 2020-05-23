cmake_minimum_required(VERSION 3.0.0)
project(Pong)

find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

link_libraries(sfml-graphics)

add_executable(Pong "src/main.cpp" "src/Paddle.cpp" "src/Ball.cpp")