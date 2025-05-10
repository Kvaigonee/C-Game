cmake_minimum_required(VERSION 3.10)
project(C-Game)

set(CMAKE_C_STANDARD 11)

# Добавление исполняемого файла
add_executable(main src/main.c src/renderer.c deps/glad/src/glad.c)

add_subdirectory(deps/glfw)

include_directories(deps/glad/include)
include_directories(deps/glfw/include)

target_link_libraries(main glfw)