#ifndef WORLD_H
# define WORLD_H
#include <ncurses.h>
#include <iostream>
#include <csignal>
#include "Star.class.hpp"
#include "EnemyShip.hpp"
#include "Asteroid.class.hpp"

#define STARS 100
# define ENEMY 50
# define ASTEROIDS 15

class World
{
    public:
        World();
        ~World();
        World(const World &other);
        World &operator = (const World &other);
        void create_world();
        void create_borders();
        void create_stars();
        void move_stars();
        void appear_stars();
        void move_asteroids();
        void appear_asteroids();
        void create_asteroids();
        int getCol();
        int getRow();
        void GameOver();
        void changedScreen(int &current_col, int &current_row, SpaceShip &hero);
        void asteroidsCollision(SpaceShip &hero);
        void enemyCollision(SpaceShip &hero);
        void secondEnemyCollision(SpaceShip &hero);
    private:   
        Star _stars[STARS];
        Asteroid _asteroids[ASTEROIDS];
        int _col;
        int _row;
        int _worldSpead;
        EnemyShip _enemy[ENEMY];
};

#endif
