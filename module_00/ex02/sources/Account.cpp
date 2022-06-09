/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:03:14 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/09 15:23:20 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	std::time_t	raw_time;
	std::tm		*timestamp;
	char		buffer[18];

	raw_time = std::time(NULL);
	timestamp = std::gmtime(&raw_time);
	std::strftime(buffer, 18, "[%Y%m%d_%H%M%S]", timestamp);
	std::cout << buffer;
}

Account::Account(void)
{
}

// [19920104_091532] index:0;amount:42;created
Account::Account(int initial_deposit)
{
	if (initial_deposit >= 0)
	{
		this->_accountIndex = this->_nbAccounts;
		this->_amount = initial_deposit;
		this->_nbDeposits = 0;
		this->_nbWithdrawals = 0;
		_nbAccounts += 1;
		_totalAmount += initial_deposit;
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";created" << std::endl;
	}
}

// [19920104_091532] index:0;amount:47;closed
Account::~Account(void)
{
	_nbAccounts -= 1;
	_totalAmount -= this->_amount;
	_totalNbDeposits -= this->_nbDeposits;
	_totalNbWithdrawals -= this->_nbWithdrawals;;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";closed" << std::endl;
}

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit(int deposit)
{
	int	p_amount = this->_amount;

	if (deposit >= 0)
	{
		this->_amount += deposit;
		_totalAmount += deposit;
		this->_nbDeposits += 1;
		_totalNbDeposits += 1;
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
				<< ";p_amount:" << p_amount
				<< ";deposit:" << deposit
				<< ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits
				<< std::endl;
	}
	else
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
				<< ";p_amount:" << p_amount
				<< ";deposit:refused"
				<< std::endl;
	}
}

// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount = this->_amount;

	if (withdrawal >= 0 && withdrawal <= this->_amount)
	{
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
				<< ";p_amount:" << p_amount
				<< ";withdrawal:" << withdrawal
				<< ";amount:" << this->_amount
				<< ";nb_withdrawals:" << this->_nbWithdrawals
				<< std::endl;
		return (true);
	}
	else
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
				<< ";p_amount:" << p_amount
				<< ";withdrawal:refused"
				<< std::endl;
		return (false);
	}
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits
			<< ";withdrawals:" << this->_nbWithdrawals
			<< std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals
			<< std::endl;
}
