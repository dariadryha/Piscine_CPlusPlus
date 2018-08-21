/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:33:19 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/18 14:33:21 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

static inline std::string	truncated_data(std::string data)
{
	data.resize(FIELD - 1);
	data += ".";
	return (data);
}

static inline void			show_contact(int i, int index, Contact *person)
{
	while (1)
	{
		std::cout << "\nEnter index of contact ... ";
		std::cin >> i;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if (std::cin.fail() || i < 0 || i >= index)
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\nThere is no such index!:(" << std::endl;
		}
		else
		{
			std::cin.ignore(32767, '\n');
			break ;
		}
	}
	std::cout << "\nFirst_name: " << person[i].Get_FirstName() << std::endl;
	std::cout << "Last_name: " << person[i].Get_LastName() << std::endl;
	std::cout << "Nickname: " << person[i].Get_Nickname() << std::endl;
	std::cout << "Login: " << person[i].Get_Login() << std::endl;
	std::cout << "Postal_address: " << person[i].Get_PostalAddress() << std::endl;
	std::cout << "Email_address: " << person[i].Get_EmailAddress() << std::endl;
	std::cout << "Phone_number: " << person[i].Get_PhoneNumber() << std::endl;
	std::cout << "Birthday_date: " << person[i].Get_BirthdayDate() << std::endl;
	std::cout << "Favorite_meal: " << person[i].Get_FavoriteMeal() << std::endl;
	std::cout << "Underwear_color: " << person[i].Get_UnderwearColor() << std::endl;
	std::cout << "Darkest_secret: " << person[i].Get_DarkestSecret() << std::endl;
}

void						search_contact(Contact *person, int index)
{
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	int i;

	i = 0;
	MES(SEARCH);
	if (!index)
	{
		std::cout << "Phonebook is empty! Add some contacts!" << std::endl;
		return ;
	}
	std::cout << "|" << WID << "Index|" << WID << "First Name|" << WID << "Last Name|" << WID << "Nickname|" << std::endl;
	while (i < index)
	{
		_firstname = person[i].Get_FirstName();
		_lastname = person[i].Get_LastName();
		_nickname = person[i].Get_Nickname();
		_firstname = _firstname.length() > FIELD ? truncated_data(_firstname) : _firstname;
		_lastname = _lastname.length() > FIELD ? truncated_data(_lastname) : _lastname;
		_nickname = _nickname.length() > FIELD ? truncated_data(_nickname) : _nickname;
		std::cout << "|" << WID1 << i << "|" << WID1 << _firstname << "|" << WID1 << _lastname << "|" << WID1 << _nickname << "|" << std::endl;	
		i++;
	}
	show_contact(i, index, person);
}
