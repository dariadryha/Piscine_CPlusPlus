#include "Star.class.hpp"

Star::Star()
{
    srand(time(NULL));
    this->_row = 0;
    this->_col = 0;
}

Star::~Star()
{

}

Star::Star(const Star &other)
{
   this->_row = other._row;
   this->_col = other._col;
}

Star &Star::operator = (const Star &other)
{
	this->_row = other._row;
    this->_col = other._col;
    return *this;
}

void Star::appear()
{
     mvprintw(this->_row, this->_col + 1, ".");
}

int Star::getCol() { return this->_col; }
int Star::getRow() { return this->_row; }

void Star::setCol(int col) { this->_col = col; }
void Star::setRow(int row) { this->_row = row; }
