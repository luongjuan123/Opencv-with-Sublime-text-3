cmake_minimum_required(VERSION 3.10)
project(OpenCV_Test)

find_package(OpenCV REQUIRED)


add_executable(${PROJECT_NAME} f1.cpp)
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
