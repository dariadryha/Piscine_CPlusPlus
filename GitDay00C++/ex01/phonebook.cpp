/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:30:31 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/18 14:30:33 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

static void 		fun_end()
{
	std::cout << std::endl;
	exit(1);
}

Contact				add_contact(void)
{
	Contact new_contact;
	std::string input;

	MES(ADD);
	std::cout << "Enter first_name: ";
	std::getline(std::cin, input);
	std::cin.eof() ? fun_end() : new_contact.Set_FirstName(input);
	std::cout << "Enter last_name: ";
	std::getline(std::cin, input);
	std::cin.eof() ? fun_end() : new_contact.Set_LastName(input);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	std::cin.eof() ? fun_end() : new_contact.Set_Nickname(input);
	std::cout << "Enter login: ";
	std::getline(std::cin, input);
	std::cin.eof() ? fun_end() : new_contact.Set_Login(input);
	std::cout << "Enter postal_address: ";
	std::getline(std::cin, input);
	std::cin.eof() ? fun_end() : new_contact.Set_PostalAddress(input);
	std::cout << "Enter email_address: ";
	std::getline(std::cin, input);
	std::cin.eof() ? fun_end() : new_contact.Set_EmailAddress(input);
	std::cout << "Enter phone_number: ";
	std::getline(std::cin, input);
	std::cin.eof() ? fun_end() : new_contact.Set_PhoneNumber(input);
	std::cout << "Enter birthday_date: ";
	std::getline(std::cin, input);
	std::cin.eof() ? fun_end() : new_contact.Set_BirthdayDate(input);
	std::cout << "Enter favorite_meal: ";
	std::getline(std::cin, input);
	std::cin.eof() ? fun_end() : new_contact.Set_FavoriteMeal(input);
	std::cout << "Enter underwear_color: ";
	std::getline(std::cin, input);
	std::cin.eof() ? fun_end() : new_contact.Set_UnderwearColor(input);
	std::cout << "Enter darkest_secret: ";
	std::getline(std::cin, input);
	std::cin.eof() ? fun_end() : new_contact.Set_DarkestSecret(input);
	std::cout << "\nThe contact successfully saved!:)" << std::endl;
	return (new_contact);
}

static	std::string		interface(void)
{
	std::string choice;

	std::cout << "\nPlease select the command:" << std::endl;
	std::cout << "1. " << ADD << std::endl;
	std::cout << "2. " << SEARCH << std::endl;
	std::cout << "3. " << EXIT << std::endl;
	std::cout << "Enter command ... ";
	std::getline(std::cin, choice);
	return (choice);
}

int						main(void)
{
	int				index;
	std::string		choice;
	Contact			person[NUM];

	index = 0;
	while (1)
	{
		choice = interface();
		if (!choice.compare(ADD))
		{
			if (index == NUM)
				std::cout << "Phonebook is full!" << std::endl;
			else
				person[index++] = add_contact();
		}
		else if (!choice.compare(SEARCH))
			search_contact(person, index);
		else if (!choice.compare(EXIT))
		{
			MES(EXIT);
			break ;
		}
		else if (std::cin.eof())
			fun_end();
		else
			std::cout << "It's incorrect command!" << std::endl;
	}
	return 0;
}
