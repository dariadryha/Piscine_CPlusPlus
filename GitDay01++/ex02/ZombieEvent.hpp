/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:53:16 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 13:53:17 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();
		void setZombieType(std::string _type);
		std::string getZombieType(void);
		Zombie* newZombie(std::string name);
		Zombie* randomChump(void);

	private:
		std::string zombie_type;
};

#endif
