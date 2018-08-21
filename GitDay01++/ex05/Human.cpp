/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:45:09 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 19:45:11 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) { }
Human::~Human(void) { }

std::string	Human::identify(void)
{
	return this->my_brain.identify();
}

const Brain& Human::getBrain(void) const
{
	return this->my_brain;
}
