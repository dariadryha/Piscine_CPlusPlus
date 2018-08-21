/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:53:26 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 13:53:27 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent	Event;
	Zombie		*Toto;
	Zombie		*Karl;
	Zombie      *mas[5];
	std::string	names[5] = {"Bob", "Lilu", "Mike", "Paul", "Shon"};

	std::cout << Event.getZombieType() << std::endl;
	Karl = Event.newZombie("Karl");
	Karl->announce();
	delete Karl;
	Event.setZombieType("superZombie");
	Toto = Event.newZombie("Toto");
	Toto->announce();
	delete Toto;
	Event.setZombieType("uglyZombie");
	for(int i = 0; i < 5; i++)
	{
		mas[i] = Event.newZombie(names[i]);
		mas[i]->announce();
		delete mas[i];
	}
	Event.setZombieType("coolZombie");
	for(int i = 0; i < 5; i++)
	{
		mas[i] = Event.randomChump();
		delete mas[i];
	}
	return 0;
}
