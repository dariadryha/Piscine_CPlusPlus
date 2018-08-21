/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:44:48 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 19:44:50 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { }

Brain::~Brain() { }

std::string Brain::identify(void) const
{
	const void * address = static_cast<const void*>(this);
	std::stringstream ss;
	ss << address;
	return (ss.str());
}
