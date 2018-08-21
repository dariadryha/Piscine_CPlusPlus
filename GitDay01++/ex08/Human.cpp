/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 19:25:10 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/20 19:25:11 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


void Human::meleeAttack(std::string const & target)
{
	std::cout << "meleeAttack to " << target << "!" << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "rangedAttack to " << target << "!" << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "Puuuuf " << target << "!" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	std::string kind[] = {"MeleeAttack", "RangedAttack", "IntimidatingShout"};
	void	(Human::*attack[])(std::string const&) = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 0; i < 3; ++i)
	{
		if (action_name == kind[i])
		{
			(this->*attack[i])(target);
			return ;
		}
	}
	std::cout << "Action doesn't exist!" << std::endl;
}
