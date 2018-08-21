#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	this->_hit_points = 60;
	this->_max_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_name = "no name";
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 5;
	std::cout << "NinjaTrap is born like " << this->_name << "!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_hit_points = 60;
	this->_max_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 5;
	std::cout << "NinjaTrap is born like " << this->_name << "!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& other)
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
NinjaTrap& NinjaTrap::operator=(const NinjaTrap& other)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap " << this->_name << " is died! :(((((((((((((((((" << std::endl;
}

void NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NinjaTrap " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NinjaTrap " << this->_name << " attacks " << target << " with melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
}

void NinjaTrap::takeDamage(unsigned int amount)
{
	if (!this->_hit_points)
	{
		std::cout << "LOL! I'm already dead!" << std::endl;
		return ;
	}
	if (amount - this->_armor_damage_reduction < this->_hit_points)
	{
		this->_hit_points -= amount - this->_armor_damage_reduction;
		std :: cout << "NinjaTrap " << this->_name << ": alive!" << std :: endl;
		std :: cout << "Energy points: " << this->_energy_points << std :: endl;	
		std :: cout << "Armor Damage: " << this->_armor_damage_reduction << std :: endl;
		std :: cout << "Taken damage: " << amount - this->_armor_damage_reduction << std :: endl;
		std :: cout << "Hit Points: " << this->_hit_points << std :: endl;
	}
	else
	{
		this->_hit_points = 0;
		std :: cout << "NinjaTrap " << this->_name << ": died!" << std :: endl;
		std :: cout << "Energy points: " << this->_energy_points << std :: endl;	
		std :: cout << "Armor Damage: " << this->_armor_damage_reduction << std :: endl;
		std :: cout << "Taken damage: " << amount - this->_armor_damage_reduction << std :: endl;
		std :: cout << "Hit Points: " << this->_hit_points << std :: endl;
	}
}

void NinjaTrap::beRepaired(unsigned int amount)
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

void NinjaTrap::ninjaShoebox(ClapTrap &rhs)
{
	std::cout << "NinjaTrap " << this->_name << " attacks " << rhs.getName() << " sooooooooooo funny!" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &rhs)
{
	std::cout << "NinjaTrap " << this->_name << " attacks " << rhs.getName() << " sooooooooooo funny!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &rhs)
{
	std::cout << "NinjaTrap " << this->_name << " attacks " << rhs.getName() << " sooooooooooo funny!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &rhs)
{
	std::cout << "NinjaTrap " << this->_name << " attacks " << rhs.getName() << " sooooooooooo funny!" << std::endl;
}
