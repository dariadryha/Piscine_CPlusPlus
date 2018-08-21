#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap& other);
		NinjaTrap& operator=(const NinjaTrap& other);
		~NinjaTrap();
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void ninjaShoebox(ClapTrap &rhs);
		void ninjaShoebox(FragTrap &rhs);
		void ninjaShoebox(ScavTrap &rhs);
		void ninjaShoebox(NinjaTrap &rhs);
};

#endif
