/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 15:20:00 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/18 15:20:02 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	// Current time and date:

	time_t now = time(0);
	struct tm *local = localtime(&now);
	char str[32];

	strftime(str, 32, "[%Y%m%d_%H%M%S] ", local);
	std::cout << str;

	// Hardcode
	
	// std::cout << "[20150406_153629] ";
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "index:" 
	<< _accountIndex << ";amount:"
	<< initial_deposit << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:"
	<< this->_accountIndex << ";amount:"
	<< this->_amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" 
	<< _nbAccounts << ";total:" 
	<< _totalAmount << ";deposits:" 
	<< _totalNbDeposits << ";withdrawals:" 
	<< _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
	<< ";amount:" << this->_amount 
	<< ";deposits:" << this->_nbDeposits 
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
	<< ";p_amount:" << this->_amount 
	<< ";deposit:" << deposit;
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" 
	<< this->_amount << ";nb_deposits:" 
	<< _nbDeposits << std::endl;
}


bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << 
	this->_accountIndex << ";p_amount:" << 
	this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (0);
	}
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" 
	<< this->_amount << ";nb_withdrawals:" 
	<< _nbWithdrawals << std::endl;
	return (1);
}
