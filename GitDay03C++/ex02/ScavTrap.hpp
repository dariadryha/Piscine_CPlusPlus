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
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

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
		void challangeNewcomer(std :: string const &target);

};

#endif
