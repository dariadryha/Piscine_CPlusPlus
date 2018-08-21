/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 14:28:10 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/20 14:28:11 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon& new_weapon) : _gun(new_weapon)
{
	this->_name = new_name;
	std::cout << "HumanA is born!" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA died!" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his type " << this->_gun.getType() << std::endl;
}
