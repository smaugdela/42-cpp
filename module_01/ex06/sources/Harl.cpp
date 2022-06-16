/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:58:25 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/16 12:08:12 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug(void) const
{
	std::cout
	<< "[DEBUG]"
	<< std::endl
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"
	<< std::endl;
}

void	Harl::info(void) const
{
	std::cout
	<< "[INFO]"
	<< std::endl
	<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"
	<< std::endl;
}

void	Harl::warning(void) const
{
	std::cout
	<< "[WARNING]"
	<< std::endl
	<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n"
	<< std::endl;
}

void	Harl::error(void) const
{
	std::cout
	<< "[ERROR]"
	<< std::endl
	<< "This is unacceptable! I want to speak to the manager now.\n"
	<< std::endl;
}

void	Harl::complain(std::string level) const
{
	std::string	table[4];
	int			i;

	table[0] = "DEBUG";
	table[1] = "INFO";
	table[2] = "WARNING";
	table[3] = "ERROR";

	for (i = 0; i < 4 && level != table[i]; i++);
	switch (i)
	{
		case 0:
			Harl::debug();
		case 1:
			Harl::info();
		case 2:
			Harl::warning();
		case 3:
			Harl::error();
			break ;
		default:
			std::cout
			<< "[ Probably complaining about insignificant problems ]\n"
			<< std::endl;
	}
}
