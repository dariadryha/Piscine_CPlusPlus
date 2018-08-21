/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:43:24 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 12:43:26 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony *dynam;

	dynam = new Pony;
	dynam->SetName("Tutu");
	dynam->SetAge(5);
	dynam->SetGrowth(110);
	dynam->SetWeight(100);
	std::cout << "Age of " << dynam->GetName() << " is: "
	<< dynam->GetAge() << "\nGrowth of " << dynam->GetName() << " is: "
	<< dynam->GetGrowth() << "\nWeight of " << dynam->GetName() << " is: "
	<< dynam->GetWeight() << std::endl;
	delete dynam;
}

void ponyOnTheStack(void)
{
	Pony stat;

	stat.SetName("Toto");
	stat.SetAge(3);
	stat.SetGrowth(120);
	stat.SetWeight(130);
	std::cout << "Age of " << stat.GetName() << " is: "
	<< stat.GetAge() << "\nGrowth of " << stat.GetName() << " is: "
	<< stat.GetGrowth() << "\nWeight of " << stat.GetName() << " is: "
	<< stat.GetWeight() << std::endl;
}

int main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return 0;
}
