#ifndef ENEMYSHIP_HPP
# define ENEMYSHIP_HPP

#include <ncurses.h>
#include <iostream>

#include "SpaceShip.hpp"
#include "Bullet.hpp"

class EnemyShip : public SpaceShip {
	public:
		EnemyShip();
		EnemyShip(char ship);
		EnemyShip(const EnemyShip& other);
		EnemyShip& operator = (const EnemyShip& other);
		~EnemyShip();
		void	createShip(unsigned int y, unsigned int x);
		void moveShip();
		void makeShot();
		void moveBullet();
		Bullet _shot;
};

#endif
