/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 14:10:39 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 14:10:40 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->N = N;
	zombies = new Zombie[N];
	std::cout << "Create " << N << " zombies!" << std::endl;
}


ZombieHorde::~ZombieHorde()
{
	delete[] zombies;
	std::cout << "All " << N << " zombies are died!" << std::endl;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->N; ++i)
	{
		this->zombies[i].announce();
	}	
}
