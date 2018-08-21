/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 19:47:47 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/22 19:47:49 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap :: ScavTrap()
{
	this->_hit_points = 100;
	this->_max_points = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_name = "no name";
	this->_melee_attack = 20;
	this->_ranged_attack = 15;
	this->_armor_damage = 3;
	std::cout << "SC4V-TP " << this->_name << " is born like " << this->_name << "!" << std::endl;
}

ScavTrap :: ~ScavTrap()
{
	std::cout << "SC4V-TP " << this->_name << " is died! :(" << std::endl;
}

ScavTrap :: ScavTrap(std :: string name)
{
	this->_hit_points = 100;
	this->_max_points = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack = 20;
	this->_ranged_attack = 15;
	this->_armor_damage = 3;
	std::cout << "SC4V-TP " << this->_name << " is born like " << this->_name << "!" << std::endl;
}

ScavTrap& ScavTrap :: operator=(ScavTrap const &other)
{
	this->_hit_points = other._hit_points;
	this->_max_points = other._max_points;
	this->_energy_points = other._energy_points;
	this->_max_energy_points = other._max_energy_points;
	this->_level = other._level;
	this->_name = other._name;
	this->_melee_attack = other._melee_attack;
	this->_ranged_attack = other._ranged_attack;
	this->_armor_damage = other._armor_damage;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	this->_hit_points = other._hit_points;
	this->_max_points = other._max_points;
	this->_energy_points = other._energy_points;
	this->_max_energy_points = other._max_energy_points;
	this->_level = other._level;
	this->_name = other._name;
	this->_melee_attack = other._melee_attack;
	this->_ranged_attack = other._ranged_attack;
	this->_armor_damage = other._armor_damage;
}

void	ScavTrap :: meleeAttack(std :: string const &target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " with melee, causing " << this->_melee_attack << " points of damage !" << std::endl;
}

void	ScavTrap :: rangedAttack(std :: string const &target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack << " points of damage !" << std::endl;	
}

void	ScavTrap :: takeDamage(unsigned int amount)
{
	if (!this->_hit_points)
	{
		std::cout << "LOL! I'm already dead!" << std::endl;
		return ;
	}
	if (amount - this->_armor_damage < this->_hit_points)
	{
		this->_hit_points -= amount - this->_armor_damage;
		std :: cout << "SC4V-TP " << this->_name << ": alive!" << std :: endl;
		std :: cout << "Energy points: " << this->_energy_points << std :: endl;	
		std :: cout << "Armor Damage: " << this->_armor_damage << std :: endl;
		std :: cout << "Taken damage: " << amount - this->_armor_damage << std :: endl;
		std :: cout << "Hit Points: " << this->_hit_points << std :: endl;
	}
	else
	{
		this->_hit_points = 0;
		std :: cout << "SC4V-TP " << this->_name << ": died!" << std :: endl;
		std :: cout << "Energy points: " << this->_energy_points << std :: endl;	
		std :: cout << "Armor Damage: " << this->_armor_damage << std :: endl;
		std :: cout << "Taken damage: " << amount - this->_armor_damage << std :: endl;
		std :: cout << "Hit Points: " << this->_hit_points << std :: endl;
	}
}

void	ScavTrap::beRapaired(unsigned int amount)
{	
	if (this->_hit_points && this->_hit_points == this->_max_points)
	{
		std::cout << "You have enough energy!" << std::endl;
		return ;
	}
	if (this->_energy_points < amount || !this->_energy_points)
		std :: cout << "There are not enough energy points to be repaired!" << std :: endl;
	else if (this->_hit_points)
	{
		this->_energy_points -= amount;
		this->_hit_points = amount + this->_hit_points > this->_max_points ? this->_max_points : this->_hit_points + amount;
		std :: cout << "Regeneration for " << amount << " points!" << std :: endl;
		std :: cout << "Energy points: " << this->_energy_points << std :: endl;
		std :: cout << "Armor Damage: " << this->_armor_damage << std :: endl;
		std :: cout << "Hit Points: " << this->_hit_points << std :: endl;		
	}
}

void ScavTrap::challangeNewcomer(std :: string const &target)
{
	int random;
	std::string choice[] = {" is challenging you to go around the Unit ", " is challenging you jump all day ",
	" is challenging you to eat more Hot-dogs than me! ", " is challenging you to face your worst fear! ", " is challenging you hug someone! "};
	random = rand() % 4;
	std::cout << "SC4V-TP " << target << choice[random] << std::endl;
}

std :: string 	ScavTrap::getName() { return this->_name; }
unsigned int 	ScavTrap::getRangedDamage() { return this->_ranged_attack; }
unsigned int 	ScavTrap::getMeleeDamage() { return this->_melee_attack; }
