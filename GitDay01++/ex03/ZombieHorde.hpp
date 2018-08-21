/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 14:10:49 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 14:10:51 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void GetNameZombieHorde(void);
		void announce(void);
	private:
		int N;
		Zombie *zombies;
};

#endif
