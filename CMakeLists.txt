cmake_minimum_required(VERSION 3.22)
project(Shopping)

set(CMAKE_CXX_STANDARD 14)

add_executable(Shopping main.cpp User.cpp User.h ShoppingList.cpp ShoppingList.h Item.cpp Item.h Categories.cpp Categories.h)
