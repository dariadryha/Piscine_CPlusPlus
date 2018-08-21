#ifndef BULLET_HPP
# define BULLET_HPP

#include <ncurses.h>
#include <iostream>
#include <unistd.h>

class Bullet
{
	public:
		Bullet();
		Bullet(char bullet);
		Bullet(const Bullet& other);
		Bullet& operator = (const Bullet& other);
		~Bullet();
		void setX(int x);
		void setY(int y);
		void setBullet(char bullet);
		int getX();
		int getY();
		char getBullet();
	private:
		char _bullet;
		int _x;
		int _y;
};

#endif
