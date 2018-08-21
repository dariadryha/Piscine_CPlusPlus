#include "World.class.hpp"
#include "Star.class.hpp"
#include "SpaceShip.hpp"
#include "Bullet.hpp"


World::World()
{
    initscr();
    noecho();
   this->_row = 0;
   this->_col = 0;
   this->_worldSpead = 1;
}

World::~World()
{
}

World::World(const World &other)
{
    this->_row = other._row;
    this->_col = other._col;
    this->_worldSpead = other._worldSpead;
}

World &World::operator = (const World &other)
{
    this->_row = other._row;
    this->_col = other._col;
    this->_worldSpead = other._worldSpead;
    return *this;
}


int World::getCol(void) { return this->_col; }
int World::getRow(void) { return this->_row; }

void World::create_borders()
{
    for(int y = 0; y < this->_col; y++)
    {
        if (y == 0 || y == this->_col - 1)
        {
             for(int x = 0; x < this->_row - 3; x++)
                mvprintw(x, y, "|");
        }
        mvprintw(0, y, "-");
    }
   for(int y = 0; y < this->_col; y++)
       mvprintw(this->_row - 1, y, "-");
    for(int y = 0; y < this->_col; y++)
       mvprintw(this->_row - 3, y, "-");
    mvprintw(this->_row - 2, 0, "|");
    mvprintw(this->_row - 2, this->_col - 1, "|");
}

void World::move_stars()
{
     int new_pos;

    for(int i = 0; i < STARS; i++)
    {
        new_pos = this->_stars[i].getCol() - 1;
        if (new_pos <= 0)
            new_pos = this->_col - 4;
        this->_stars[i].setCol(new_pos);
    }
}

void World::move_asteroids()
{
     int new_pos;

    for(int i = 0; i < ASTEROIDS; i++)
    {
        new_pos = this->_asteroids[i].getCol() - 2;
        if (new_pos <= 0)
            new_pos = this->_col - 4;
        this->_asteroids[i].setCol(new_pos);
    }
}

void World::create_stars()
{  
    for(int i = 0; i < STARS; i++)
    {
        int random_col = rand() % (this->_col);
        int random_row = rand() % (this->_row - 3);
        if (!random_row)
            random_row = 1;
        this->_stars[i].setCol(random_col);
        this->_stars[i].setRow(random_row);
    }
}

void World::appear_stars()
{
    for(int i = 0; i < STARS; i++)
        this->_stars[i].appear();
}

void World::create_asteroids()
{  
    for(int i = 0; i < ASTEROIDS; i++)
    {
        int random_col = rand() % 80;
        int random_row = rand() % (this->_row - 3);
        if (!random_row)
            random_row = 1;
        this->_asteroids[i].setCol(random_col);
        this->_asteroids[i].setRow(random_row);
    }
}

void World::appear_asteroids()
{
    for(int i = 0; i < ASTEROIDS; i++)
        this->_asteroids[i].appear();
}

void World::GameOver()
{
    erase();
    mvprintw(this->_row / 2, this->_col / 2, "GAME OVER!\n");
    for (;;)
    {
        mvprintw(this->_row / 2, this->_col / 2, "GAME OVER!\n");
        if (getch() > 20)
            break ;
    }
    endwin();
    exit(0);
}

void World::changedScreen(int &current_col, int &current_row, SpaceShip &hero)
{
    if (current_col != this->_col || current_row != this->_row)
    {
        create_stars();
        create_asteroids();
        current_col = this->_col;
        current_row = this->_row;
        for (int i = 0; i < ENEMY; i++)
            this->_enemy[i].createShip(this->_row, this->_col);
        if (hero.getY() >= this->_row - 3 || hero.getX() >= this->_col - 2)
             hero.~SpaceShip();
    }
}

void World::asteroidsCollision(SpaceShip &hero)
{
    for (int n = 0; n < ASTEROIDS; n++)
    {
        if (((this->_asteroids[n].getCol() == hero.getX() + 1) || (this->_asteroids[n].getCol() == hero.getX())) && this->_asteroids[n].getRow() == hero.getY())
        {
            hero.setHP(hero.getHP() - 1);
            if (!hero.getHP())
                GameOver();
            this->_asteroids[n].setCol(this->_col);
        }
    }
}

void World::enemyCollision(SpaceShip &hero)
{
    for (int j = 0; j < ENEMY; j++)
    {
        for (int c = 0; c < hero.getCount(); c++)
        {
            if (hero._shot[c].getX() == this->_enemy[j].getX() - 1 && hero._shot[c].getY() == this->_enemy[j].getY())
            {
                this->_enemy[j].createShip(this->_row, this->_col);
                    hero._shot[c].setX(this->_col);
                hero._shot[c].setY(this->_row);
                hero.setScore(hero.getScore() + 1);
            }
        }
        if (hero.getX() == this->_enemy[j].getX() - 1 && hero.getY() == this->_enemy[j].getY())
        {
            hero.setHP(hero.getHP() - 1);
            if (!hero.getHP())
                GameOver();
            this->_enemy[j].createShip(this->_row, this->_col);
        }
        if (j % 2)
                this->_enemy[j].makeShot();
        this->_enemy[j].moveShip();
        if (!this->_enemy[j].getX())
            this->_enemy[j].createShip(this->_row, this->_col);
    }
}

void World::secondEnemyCollision(SpaceShip &hero)
{
    for (int k = 0; k < ENEMY; k++)
    {
        if (k % 2)
        {
            if (hero.getX() == this->_enemy[k]._shot.getX() - 2 && hero.getY() == this->_enemy[k]._shot.getY())
            {
                hero.setHP(hero.getHP() - 1);
                if (!hero.getHP())
                    GameOver();
                this->_enemy[k]._shot.setX(this->_enemy[k].getX() - 2);
            }
            else
                this->_enemy[k].moveBullet();
        }
    }
    for (int k = 0; k < ENEMY; k++)
    {
        if (k % 2)
        {
            if (hero.getX() == this->_enemy[k]._shot.getX() - 1 && hero.getY() == this->_enemy[k]._shot.getY())
            {
                hero.setHP(hero.getHP() - 1);
                if (!hero.getHP())
                    GameOver();
                this->_enemy[k]._shot.setX(this->_enemy[k].getX() - 2);
            }
            else
                this->_enemy[k].moveBullet();
        }
    }
    for (int d = 0; d < ENEMY; d++)
    {
        for (int c = 0; c < hero.getCount(); c++)
        {
            if (hero._shot[c].getX() == this->_enemy[d].getX() && hero._shot[c].getY() == this->_enemy[d].getY())
            {
                this->_enemy[d].createShip(this->_row, this->_col);
                hero._shot[c].setX(this->_col);
                hero._shot[c].setY(this->_row);
                hero.setScore(hero.getScore() + 1);
            }
        }
    }
}


void World::create_world()
{
    int current_col;
    int current_row;
    SpaceShip hero;

    getmaxyx(stdscr, this->_row, this->_col);
    create_stars();
    create_asteroids();
    for (int i = 0; i < ENEMY; i++)
        this->_enemy[i].createShip(this->_row, this->_col);
    hero.createSpaceShip(3, (this->_row/2) - 3);
    current_col = this->_col;
    current_row = this->_row;
    for(int i = 0;;i++)
    {
        halfdelay(this->_worldSpead);
        erase();
        changedScreen(current_col, current_row, hero);
        getmaxyx(stdscr, this->_row, this->_col);
        create_borders();
        appear_stars();
        appear_asteroids();
        asteroidsCollision(hero);
        move_asteroids();
        hero.printInfo();
        if (!(i % this->_worldSpead))
        {
            hero.createSpaceShip();
            enemyCollision(hero);
            move_stars();
            i = 0;
            for (int k = 0; k < ENEMY; k++)
            {
                if (k % 2)
                {
                    if (hero.getX() == this->_enemy[k]._shot.getX() - 3 && hero.getY() == this->_enemy[k]._shot.getY())
                    {
                        hero.setHP(hero.getHP() - 1);
                        if (!hero.getHP())
                            GameOver();
                        this->_enemy[k]._shot.setX(this->_enemy[k].getX() - 2);
                    }
                    else
                        this->_enemy[k].moveBullet();  
                }
            }
            hero.moveSpaceShip(this->_row, this->_col); // move SpaceShip
        }
        asteroidsCollision(hero);
        secondEnemyCollision(hero);
    }
    endwin();
}