/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:53:07 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 13:53:09 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->zombie_type = "simple_zombie";
	std::cout << "ZombieEvent on the Stack!" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEvent destructor!" << std::endl;
}

void ZombieEvent::setZombieType(std::string _type)
{
	zombie_type = _type; 
}

std::string ZombieEvent::getZombieType(void)
{
	return (this->zombie_type);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie(name, getZombieType());
	return (new_zombie);
}

Zombie	*ZombieEvent::randomChump(void)
{
	std::string names[20] = {"Tutu", "Tata", "Titi", "Kuku", "Meow",
	"Lulu", "Lol", "Dodo", "Fufu", "Fafa",
	"Bobo", "Roro", "Coco", "Zaz", "Zuzu",
	"Lala", "Shasha", "Didi", "Denis", "Wuwu"};
	Zombie *random_zombie = new Zombie(names[rand() % 19], zombie_type);
	random_zombie->announce();
	return (random_zombie);
}
