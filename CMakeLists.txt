cmake_minimum_required(VERSION 3.29)
project(JeuxDeCombat C)

set(CMAKE_C_STANDARD 11)

add_executable(JeuxDeCombat
    Main.c
        player.c
        player.h)
