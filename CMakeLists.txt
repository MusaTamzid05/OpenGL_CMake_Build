cmake_minimum_required(VERSION 2.8)

project(testas)

file(GLOB SOURCES "src/*cpp")
add_executable(testas ${SOURCES})
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} include )

target_link_libraries(testas ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )
