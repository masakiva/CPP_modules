/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:51:09 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/04 19:32:38 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

void	Account::_displayTimestamp( void )
{
	std::time_t		now = std::time(0);

	std::tm *ltm = std::localtime(&now);
	std::cout << "[";
	std::cout << std::setfill ('0') << std::setw(4) << 1900 + ltm->tm_year;
	std::cout << std::setw(2) << 1 + ltm->tm_mon;
	std::cout << std::setw(2) << ltm->tm_mday << "_";
	std::cout << std::setw(2) << ltm->tm_hour;
	std::cout << std::setw(2) << ltm->tm_min;
	std::cout << std::setw(2) << ltm->tm_sec;
	std::cout << "] ";

	return ;
}

Account::Account( void )
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << _accountIndex;
	std::cout << ";created" << std::endl;
	_nbAccounts += 1;

	return ;
}

Account::Account( int initial_deposit ) :
	_amount(initial_deposit)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	_nbAccounts += 1;
	_totalAmount += this->_amount;

	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	_nbAccounts -= 1;
	_totalAmount -= this->_amount;

	return ;
}

int		Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;

	return ;
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;

	return ;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount;
	_totalAmount += deposit;
	this->_nbDeposits += 1;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	_totalNbDeposits += 1;

	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (this->_amount - withdrawal < 0) {
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	std::cout << ";amount:" << this->_amount;
	_totalAmount -= withdrawal;
	this->_nbWithdrawals += 1;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	_totalNbWithdrawals += 1;

	return (1);
}
