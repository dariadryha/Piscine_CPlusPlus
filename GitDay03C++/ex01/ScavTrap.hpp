/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 19:47:56 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/22 19:47:57 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <cmath>

class ScavTrap {
	private:
		unsigned int _hit_points;
		unsigned int _max_points;
		unsigned int _energy_points;
		unsigned int _max_energy_points;
		unsigned int _level;
		std::string _name;
		unsigned int _melee_attack;
		unsigned int _ranged_attack;
		unsigned int _armor_damage;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(ScavTrap const &other);
		void rangedAttack(std :: string const &target);
		void meleeAttack(std :: string const &target);
		void takeDamage(unsigned int amount);
		void beRapaired(unsigned int amount);
		std :: string 	getName();
		unsigned int 	getRangedDamage();
		unsigned int 	getMeleeDamage();
		void challangeNewcomer(std :: string const &target);

};

#endif
