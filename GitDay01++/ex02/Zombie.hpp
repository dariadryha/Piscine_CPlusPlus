/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:52:59 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 13:53:00 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string name;
		std::string type;
	public:
		Zombie(std::string str1, std::string str2);
		~Zombie();
		void announce();
		std::string GetName(void);
		std::string GetType(void);
};

#endif
