/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:28:29 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/19 19:28:51 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string &reference = str;
	std::string *ptr = &str;
	std::cout << "reference = " << reference << std::endl;
	std::cout << "pointer = " << *ptr << std::endl;
	return 0;
}
