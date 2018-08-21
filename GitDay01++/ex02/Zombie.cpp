/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:52:43 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 13:52:45 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str1, std::string str2)
{
	this->name = str1;
	this->type = str2;
	std::cout << "Zombie is born on the Heap!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie died!" << std::endl;
}

std::string Zombie::GetName(void)
{
	return (this->name);
}

std::string Zombie::GetType(void)
{
	return (this->type);
}

void Zombie::announce()
{
	std::cout << "<" << GetName() << " (" << GetType() << ")>" 
	<< " Braiiiiiiinnnssss..." << std::endl;
}
