#ifndef ASTEROID_H
# define ASTEROID_H
#include "Star.class.hpp"

class Asteroid : public Star
{
    public:
        Asteroid();
        ~Asteroid();
        Asteroid(const Asteroid &other);
        Asteroid &operator = (const Asteroid &other);
        void appear();
};

#endif