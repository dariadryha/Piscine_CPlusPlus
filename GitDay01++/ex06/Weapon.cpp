/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 14:27:50 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/20 14:27:52 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const &Weapon::getType()
{
	return this->_type;
}

Weapon::Weapon()
{
	this->_type = "no type";
	std::cout << "Weapon constructor!" << std::endl;
}

Weapon::Weapon(std::string data)
{
	this->_type = data;
	std::cout << "Weapon constructor!" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor!" << std::endl;
}

void Weapon::setType(std::string str)
{
	this->_type = str;
}
