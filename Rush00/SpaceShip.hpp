#ifndef SPACESHIP_HPP
# define SPACESHIP_HPP

#include <ncurses.h>
#include <iostream>

#include "Bullet.hpp"

#define N 100

class SpaceShip 
{
	public:
		SpaceShip();
		SpaceShip(char ship);
		SpaceShip(const SpaceShip& other);
		SpaceShip& operator = (const SpaceShip& other);
		~SpaceShip();
		char getShip();
		int getX();
		int getY();
		int getHP() const;
		int getScore() const;
		void setScore(int score);
		void setHP(int hp);
		int getCount();
		void createSpaceShip(int start_x, int start_y);
		void createSpaceShip();
		void makeShot(int max_x);
		void moveSpaceShip(int max_y, int max_x);
		void printInfo();
		Bullet _shot[N];
	protected:
		char _ship;
		int _x;
		int _y;
	private:
		int _count;
		int _HP;
		int _score;
};

#endif
