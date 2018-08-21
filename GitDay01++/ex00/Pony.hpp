/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:43:32 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 12:43:35 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
	public:
		Pony();
		~Pony();
		int GetGrowth(void);
		int GetWeight(void);
		int GetAge(void);
		void SetGrowth(int data);
		void SetWeight(int data);
		void SetAge(int data);
		std::string GetName(void);
		void SetName(std::string _name);

	private:
		int growth;
		int weight;
		int age;
		std::string name;
};

#endif
