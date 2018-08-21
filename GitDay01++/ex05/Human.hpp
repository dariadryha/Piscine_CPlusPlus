/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:45:17 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 19:45:19 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {
	public:
		Human();
		~Human();
		std::string	identify();
		const Brain &getBrain(void) const;
	private:
		const Brain my_brain;
};

#endif
