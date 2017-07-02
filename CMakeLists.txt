cmake_minimum_required(VERSION 2.8)

project(testas)

file(GLOB SOURCES "src/*cpp")
add_executable(testas ${SOURCES})
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(GLEW REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS} include )

target_link_libraries(testas ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} GL GLU GLEW glfw )
