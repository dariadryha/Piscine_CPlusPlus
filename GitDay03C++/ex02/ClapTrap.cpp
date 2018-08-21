#include "ClapTrap.hpp"

ClapTrap :: ClapTrap()
{
	this->_hit_points = 100;
	this->_max_points = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_name = "no name";
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << "ClapTrap: " << this->_name << " is born like " << this->_name << "!" << std::endl;
}

ClapTrap :: ~ClapTrap()
{
	std::cout << "ClapTrap: " << this->_name << " is died! :(" << std::endl;
}

ClapTrap :: ClapTrap(std :: string name)
{
	this->_hit_points = 100;
	this->_max_points = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << "ClapTrap " << this->_name << " is born like " << this->_name << "!" << std::endl;
}

ClapTrap& ClapTrap :: operator=(ClapTrap const &other)
{
	this->_hit_points = other._hit_points;
	this->_max_points = other._max_points;
	this->_energy_points = other._energy_points;
	this->_max_energy_points = other._max_energy_points;
	this->_level = other._level;
	this->_name = other._name;
	this->_melee_attack_damage = other._melee_attack_damage;
	this->_ranged_attack_damage = other._ranged_attack_damage;
	this->_armor_damage_reduction = other._armor_damage_reduction;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->_hit_points = other._hit_points;
	this->_max_points = other._max_points;
	this->_energy_points = other._energy_points;
	this->_max_energy_points = other._max_energy_points;
	this->_level = other._level;
	this->_name = other._name;
	this->_melee_attack_damage = other._melee_attack_damage;
	this->_ranged_attack_damage = other._ranged_attack_damage;
	this->_armor_damage_reduction = other._armor_damage_reduction;
}

void	ClapTrap :: meleeAttack(std :: string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " with melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
}

void	ClapTrap :: rangedAttack(std :: string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;	
}

void	ClapTrap :: takeDamage(unsigned int amount)
{
	if (!this->_hit_points)
	{
		std::cout << "LOL! I'm already dead!" << std::endl;
		return ;
	}
	if (amount - this->_armor_damage_reduction < this->_hit_points)
	{
		this->_hit_points -= amount - this->_armor_damage_reduction;
		std :: cout << "ClapTrap " << this->_name << ": alive!" << std :: endl;
		std :: cout << "Energy points: " << this->_energy_points << std :: endl;	
		std :: cout << "Armor Damage: " << this->_armor_damage_reduction << std :: endl;
		std :: cout << "Taken damage: " << amount - this->_armor_damage_reduction << std :: endl;
		std :: cout << "Hit Points: " << this->_hit_points << std :: endl;
	}
	else
	{
		this->_hit_points = 0;
		std :: cout << "ClapTrap " << this->_name << ": died!" << std :: endl;
		std :: cout << "Energy points: " << this->_energy_points << std :: endl;	
		std :: cout << "Armor Damage: " << this->_armor_damage_reduction << std :: endl;
		std :: cout << "Taken damage: " << amount - this->_armor_damage_reduction << std :: endl;
		std :: cout << "Hit Points: " << this->_hit_points << std :: endl;
	}
}

void	ClapTrap::beRapaired(unsigned int amount)
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
		std :: cout << "Armor Damage: " << this->_armor_damage_reduction << std :: endl;
		std :: cout << "Hit Points: " << this->_hit_points << std :: endl;		
	}
}

std :: string 	ClapTrap::getName() { return this->_name; }
unsigned int 	ClapTrap::getRangedDamage() { return this->_ranged_attack_damage; }
unsigned int 	ClapTrap::getMeleeDamage() { return this->_melee_attack_damage; }
