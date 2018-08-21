#include <iostream>
#include <ncurses.h>

#include "World.class.hpp"

int main(void)
{
    init_pair(1, COLOR_RED, COLOR_BLACK);
    World world;
    world.create_world();
    return 0;
}