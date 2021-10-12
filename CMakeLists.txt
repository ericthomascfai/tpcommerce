cmake_minimum_required(VERSION 3.20)
project(tpcommerce)

set(CMAKE_CXX_STANDARD 14)

add_executable(tpcommerce main.cpp Produit.cpp Produit.h Magasin.cpp Magasin.h Livre.cpp Livre.h)
