/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:05:59 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/18 12:06:01 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef СONTACT_CLASS_HPP
# define СONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

# define NUM 8
# define FIELD 10
# define ADD "ADD"
# define SEARCH "SEARCH"
# define EXIT "EXIT"
# define WID std::setw(FIELD + 1)
# define WID1 std::setw(FIELD)
# define MES(x) std::cout << "\nYour choice is " << x << "!\n" << std::endl;

class Contact 
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	public:
		std::string Get_FirstName(void);
		std::string Get_LastName(void);
		std::string Get_Nickname(void);
		std::string Get_Login(void);
		std::string Get_PostalAddress(void);
		std::string Get_EmailAddress(void);
		std::string Get_PhoneNumber(void);
		std::string Get_BirthdayDate(void);
		std::string Get_FavoriteMeal(void);
		std::string Get_UnderwearColor(void);
		std::string Get_DarkestSecret(void);
		void Set_FirstName(std::string _firstname);
		void Set_LastName(std::string _lastname);
		void Set_Nickname(std::string _nickname);
		void Set_Login(std::string _login);
		void Set_PostalAddress(std::string _postal_address);
		void Set_EmailAddress(std::string _emailaddress);
		void Set_PhoneNumber(std::string _phonenumber);
		void Set_BirthdayDate(std::string _birthdaydate);
		void Set_FavoriteMeal(std::string _favoritemeal);
		void Set_UnderwearColor(std::string _underwearcolor);
		void Set_DarkestSecret(std::string _darkestsecret);
};

void	search_contact(Contact *person, int index);

#endif
