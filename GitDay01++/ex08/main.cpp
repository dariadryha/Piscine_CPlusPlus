/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 19:25:24 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/20 19:25:25 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
	Human Karl;

	Karl.action("MeleeAttack", "Tutu");
	Karl.action("RangedAttack", "Tata");
	Karl.action("IntimidatingShout", "Toto");
	Karl.action("PifPaf", "karl");
	return 0;
}
