/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:06:24 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/18 12:06:25 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

std::string Contact::Get_FirstName(void)
{
	return (this->first_name);
}

std::string Contact::Get_LastName(void)
{
	return (this->last_name);
}

std::string Contact::Get_Nickname(void)
{
	return (this->nickname);
}

std::string Contact::Get_Login(void)
{
	return (this->login);
}

std::string Contact::Get_PostalAddress(void)
{
	return (this->postal_address);
}

std::string Contact::Get_EmailAddress(void)
{
	return (this->email_address);
}

std::string Contact::Get_PhoneNumber(void)
{
	return (this->phone_number);
}

std::string Contact::Get_BirthdayDate(void)
{
	return (this->birthday_date);
}

std::string Contact::Get_FavoriteMeal(void)
{
	return (this->favorite_meal);
}

std::string Contact::Get_UnderwearColor(void)
{
	return (this->underwear_color);
}

std::string Contact::Get_DarkestSecret(void)
{
	return (this->darkest_secret);
}

void Contact::Set_FirstName(std::string _firstname)
{
	this->first_name = _firstname;
}

void Contact::Set_LastName(std::string _lastname)
{
	this->last_name = _lastname;
}

void Contact::Set_Nickname(std::string _nickname)
{
	this->nickname = _nickname;
}

void Contact::Set_Login(std::string _login)
{
	this->login = _login;
}

void Contact::Set_PostalAddress(std::string _postal_address)
{
	this->postal_address = _postal_address;
}
void Contact::Set_EmailAddress(std::string _emailaddress)
{
	this->email_address = _emailaddress;
}

void Contact::Set_PhoneNumber(std::string _phonenumber)
{
	this->phone_number = _phonenumber;
}

void Contact::Set_BirthdayDate(std::string _birthdaydate)
{
	this->birthday_date = _birthdaydate;
}

void Contact::Set_FavoriteMeal(std::string _favoritemeal)
{
	this->favorite_meal = _favoritemeal;
}

void Contact::Set_UnderwearColor(std::string _underwearcolor)
{
	this->underwear_color = _underwearcolor;
}

void Contact::Set_DarkestSecret(std::string _darkestsecret)
{
	this->darkest_secret = _darkestsecret;
}
