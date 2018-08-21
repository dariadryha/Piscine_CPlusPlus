#include "Bullet.hpp"

Bullet::Bullet()
{
	this->_bullet = '-';
	this->_x = 0;
	this->_y = 0;
}

Bullet::Bullet(char bullet)
{
	this->_bullet = bullet;
	this->_x = 0;
	this->_y = 0;
}

Bullet::Bullet(const Bullet& other)
{
	this->_bullet = other._bullet;
	this->_x = other._x;
	this->_y = other._y;
}

Bullet& Bullet::operator = (const Bullet& other)
{
	this->_bullet = other._bullet;
	this->_x = other._x;
	this->_y = other._y;
	return *this;
}

Bullet::~Bullet() { }

void Bullet::setX(int x) { this->_x = x; }
void Bullet::setY(int y) { this->_y = y; }
void Bullet::setBullet(char bullet) { this->_bullet = bullet; }
int Bullet::getX() {return this->_x; }
int Bullet::getY() { return this->_y; }
char Bullet::getBullet() { return this->_bullet; }
