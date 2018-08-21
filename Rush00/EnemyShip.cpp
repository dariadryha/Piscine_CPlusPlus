#include "EnemyShip.hpp"

EnemyShip::EnemyShip() {
	this->_ship = '<';
	this->_x = 50;
	this->_y = 50;
};

EnemyShip::EnemyShip(char ship) { 
	this->_ship = ship;
	this->_x = 50;
	this->_y = 50;
}


EnemyShip::EnemyShip(const EnemyShip& other)
{
	this->_ship = other._ship;
	this->_x = other._x;
	this->_y = other._y;
}

EnemyShip& EnemyShip::operator = (const EnemyShip& other)
{
	this->_ship = other._ship;
	this->_x = other._x;
	this->_y = other._y;
	return (*this);
}

EnemyShip::~EnemyShip() { }

void	EnemyShip::createShip(unsigned int y, unsigned int x)
{
	unsigned int rand_x = 0;
	unsigned int rand_y = 0;

	while (rand_x < x - 2)
		rand_x = rand() % (x + x/2);
	while (rand_x < x - 10)
		rand_x = rand() % (x - 2);
	while (rand_y <= 2)
		rand_y = rand() % (y - 4);
	this->_y = rand_y;
	this->_x = rand_x;
	this->_shot.setX(this->_x - 2);
	this->_shot.setY(this->_y);
	mvaddch(this->_y, this->_x, this->_ship);
}

void EnemyShip::moveShip()
{
	start_color();
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
    attron(COLOR_PAIR(3));
	mvaddch(this->_y, --this->_x, this->_ship);
	attroff(COLOR_PAIR(3));
}

void EnemyShip::makeShot()
{
	start_color();
    attron(COLOR_PAIR(4));
	mvaddch(this->_shot.getY(), this->_shot.getX(), this->_shot.getBullet());\
	attroff(COLOR_PAIR(4));
}

void EnemyShip::moveBullet()
{
	this->_shot.setX(this->_shot.getX() - 3);
	if (this->_shot.getX() <= 1)
		this->_shot.setX(this->_x - 2);
}