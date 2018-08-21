#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cmath>

class ClapTrap {
	protected:
		unsigned int _hit_points;
		unsigned int _max_points;
		unsigned int _energy_points;
		unsigned int _max_energy_points;
		unsigned int _level;
		std::string _name;
		unsigned int _melee_attack_damage;
		unsigned int _ranged_attack_damage;
		unsigned int _armor_damage_reduction;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(ClapTrap const &other);
		void rangedAttack(std :: string const &target);
		void meleeAttack(std :: string const &target);
		void takeDamage(unsigned int amount);
		void beRapaired(unsigned int amount);
		std :: string 	getName();
		unsigned int 	getRangedDamage();
		unsigned int 	getMeleeDamage();
};

#endif
