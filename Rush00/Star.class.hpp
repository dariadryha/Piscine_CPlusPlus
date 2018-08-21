#ifndef STAR_H
# define STAR_H
#include <ncurses.h>
#include <iostream>

class Star
{
    public:
        Star();
        ~Star();
        Star(const Star &other);
        Star &operator = (const Star &other);
        void setCol(int col);
        void setRow(int row);
        int getCol();
        int getRow(); 
        void appear();
        protected:
        int _row;
        int _col;
};

#endif