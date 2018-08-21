/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 14:33:38 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/20 14:33:39 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
{
	this->_name = new_name;
	std::cout << "HumanB is born!" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB died!" << std::endl;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his type " << this->_gun->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& new_weapon)
{
	this->_gun = &new_weapon;
}
