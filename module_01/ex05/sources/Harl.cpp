/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:58:25 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/16 11:07:20 by smagdela         ###   ########.fr       */
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
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
	<< std::endl;
}

void	Harl::info(void) const
{
	std::cout
	<< "[INFO]"
	<< std::endl
	<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
	<< std::endl;
}

void	Harl::warning(void) const
{
	std::cout
	<< "[WARNING]"
	<< std::endl
	<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error(void) const
{
	std::cout
	<< "[ERROR]"
	<< std::endl
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain(std::string level) const
{
	t_dict	table[4];
	int		i;

	table[0].key = "DEBUG";
	table[0].f = &Harl::debug;
	table[1].key = "INFO";
	table[1].f = &Harl::info;
	table[2].key = "WARNING";
	table[2].f = &Harl::warning;
	table[3].key = "ERROR";
	table[3].f = &Harl::error;

	for (i = 0; i < 4 && level != table[i].key; i++);
	if (i < 4)
		(this->*table[i].f)();
}
