#include "SpaceShip.hpp"

SpaceShip::SpaceShip()
{
	this->_HP = 10;
	this->_score = 0;
	this->_ship = '>';
	this->_x = 1;
	this->_y = 1;
	this->_count = 0;
}

SpaceShip::SpaceShip(char ship) 
{
	this->_HP = 10;
	this->_score = 0; 
	this->_ship = ship;
	this->_x = 1;
	this->_y = 1;
	this->_count = 0;
}

SpaceShip::SpaceShip(const SpaceShip& other)
{
	this->_HP = other._HP;
	this->_score = other._score;
	this->_ship = other._ship;
	this->_x = other._x;
	this->_y = other._y;
	this->_count = other._count;
}

SpaceShip::~SpaceShip()
{
	this->_x = 1;
	this->_y = 1;
}

SpaceShip& SpaceShip::operator = (const SpaceShip& other)
{
	this->_HP = other._HP;
	this->_score = other._score;
	this->_ship = other._ship;
	this->_x = other._x;
	this->_y = other._y;
	this->_count = other._count;
	return (*this);
}

void	SpaceShip::createSpaceShip(int start_y, int start_x)
{
	curs_set(0);
	this->_y = start_x;
	this->_x = start_y;
	mvaddch(this->_y, this->_x, this->getShip());
}

void	SpaceShip::createSpaceShip()
{
	curs_set(0);
	mvaddch(this->_y, this->_x, this->getShip());
}

void SpaceShip::moveSpaceShip(int max_y, int max_x)
{
	int res;
	
	this->makeShot(max_x);
	keypad(stdscr, true);
	res = getch();
	if (res == KEY_DOWN && (this->_y + 1 < max_y - 3))
		mvaddch(++this->_y, this->_x, this->_ship);
	else if (res ==  KEY_UP && (this->_y - 1 >= 1))
		mvaddch(--this->_y, this->_x, this->_ship);
	else if (res == KEY_RIGHT && (this->_x + 1 < max_x - 2))
		mvaddch(this->_y, ++this->_x, this->_ship);
	else if (res == KEY_LEFT && (this->_x - 1 >= 1))
		mvaddch(this->_y, --this->_x, this->_ship);
	else if (res == 32)
	{
		if (this->_count < N)
		{
			_shot[this->_count].setX(this->_x + 1);
			_shot[this->_count].setY(this->_y);
			this->_count++;
		}
	}
	else if (res == 27)
	{
    	endwin();
    	exit(0);
	}
	if (res == 112 || res == 80) // pause
    {
        for(;;)
        { 
            start_color();
            init_pair(2, COLOR_GREEN, COLOR_BLACK);
            attron(COLOR_PAIR(2));
            mvprintw(0, 0, "PAUSE");
            attroff(COLOR_PAIR(2));
            res = getch();
            if (res == 112 || res == 80)
                break;    
        }
    }
}

void SpaceShip::makeShot(int max_x)
{
	for (int i = 0; i < this->_count; i++)
	{
		start_color();
    	init_pair(4, COLOR_MAGENTA, COLOR_BLACK);
    	attron(COLOR_PAIR(4));
    	if (this->_shot[i].getX() < max_x - 2)
			mvaddch(this->_shot[i].getY(), this->_shot[i].getX(), this->_shot[i].getBullet());
		attroff(COLOR_PAIR(4));
		if (this->_shot[i].getX() < max_x - 2)
			this->_shot[i].setX(this->_shot[i].getX() + 1);
	}
}

void SpaceShip::printInfo()
{
	mvprintw(0, 0, "SCORE: %d HP: %d", this->_score, this->_HP);
}

char SpaceShip::getShip() { return this->_ship; }
int SpaceShip::getX() { return this->_x; }
int SpaceShip::getY() {return this->_y; };
int SpaceShip::getCount() { return this->_count;}
int SpaceShip::getHP() const { return this->_HP;}
int SpaceShip::getScore() const  { return this->_score;}
void SpaceShip::setScore(int score) { this->_score = score; };
void SpaceShip::setHP(int hp){ this->_HP = hp; };
