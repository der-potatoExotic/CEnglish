cmake_minimum_required(VERSION 3.12)
project(english)
add_executable(english WIN32 main.c)
target_include_directories(english PUBLIC "C:/EXStd Framework/64bit/include")
target_link_directories(english PUBLIC "C:/EXStd Framework/64bit/lib64")
target_link_libraries(english
    glfw3
)