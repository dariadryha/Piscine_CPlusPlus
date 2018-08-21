#include "Asteroid.class.hpp"

Asteroid::Asteroid()
{
    srand(time(NULL));
    this->_row = 0;
    this->_col = 0;
}

Asteroid::~Asteroid()
{

}

Asteroid::Asteroid(const Asteroid &other)
{
    this->_row = other._row;
    this->_col = other._col;
}

Asteroid &Asteroid::operator = (const Asteroid &other)
{
	this->_row = other._row;
    this->_col = other._col;
    return *this;
}

void Asteroid::appear()
{
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    mvprintw(this->_row, this->_col + 1, "()");
    attroff(COLOR_PAIR(1));
}
