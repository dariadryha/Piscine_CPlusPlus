/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 14:11:01 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 14:11:02 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde first_horde(5);
	first_horde.announce();
	ZombieHorde second_horde(2);
	second_horde.announce();
	first_horde.announce();
	return 0;
}
