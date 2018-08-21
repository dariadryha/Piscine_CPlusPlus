/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:42:25 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 12:55:47 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "Pony is born!" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony " << this->name << " died!" << std::endl;
}
		
int				Pony::GetGrowth(void)
{
	return (this->growth);
}

int				Pony::GetWeight(void)
{
	return (this->weight);
}

int 			Pony::GetAge(void)
{
	return (this->age);
}

void			Pony::SetGrowth(int data)
{
	this->growth = data;
}

void			Pony::SetWeight(int data)
{
	this->weight = data;
}

void			Pony::SetAge(int data)
{
	this->age = data;
}

void			Pony::SetName(std::string _name)
{
	this->name = _name;
}

std::string		Pony::GetName(void)
{
	return (this->name);
}
