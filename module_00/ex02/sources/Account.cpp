/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:03:14 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/09 15:33:58 by smagdela         ###   ########.fr       */
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

Account::Account(int initial_deposit)
{
	if (initial_deposit >= 0)
	{
		this->_accountIndex = Account::_nbAccounts;
		this->_amount = initial_deposit;
		_nbDeposits = 0;
		this->_nbWithdrawals = 0;
		Account::_nbAccounts += 1;
		Account::_totalAmount += initial_deposit;
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";created" << std::endl;
	}
}

Account::~Account(void)
{
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->_amount;
	Account::_totalNbDeposits -= this->_nbDeposits;
	Account::_totalNbWithdrawals -= this->_nbWithdrawals;;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount = this->_amount;

	if (deposit >= 0)
	{
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		this->_nbDeposits += 1;
		Account::_totalNbDeposits += 1;
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
				<< ";p_amount:" << p_amount
				<< ";deposit:" << deposit
				<< ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits
				<< std::endl;
	}
	else
	{
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
				<< ";p_amount:" << p_amount
				<< ";deposit:refused"
				<< std::endl;
	}
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount = this->_amount;

	if (withdrawal >= 0 && withdrawal <= this->_amount)
	{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		Account::_displayTimestamp();
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
		Account::_displayTimestamp();
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

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits
			<< ";withdrawals:" << this->_nbWithdrawals
			<< std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts
			<< ";total:" << Account::_totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << Account::_totalNbWithdrawals
			<< std::endl;
}
