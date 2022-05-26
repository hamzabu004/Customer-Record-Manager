cmake_minimum_required(VERSION 3.0)
project(Opp_fst_)
set(CMAKE_CXX_STANDARD 14)

find_package(Boost 1.79.0)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
    add_executable(Opp_fst_ main.cpp customer.h base.h base.cpp customer.cpp)
endif()

#add_executable(Opp_fst_ main.cpp)


