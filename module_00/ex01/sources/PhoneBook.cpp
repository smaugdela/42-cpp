/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:55:48 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/08 12:35:40 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

std::string	prompt(std::string const field)
{
	std::string	input;

	std::cout << "Enter " << field << ":" << std::endl;
	std::cin >> input;
	while (!input.size())
	{
		std::cout << field << " cannot be empty:" << std::endl;
		std::cin >> input;
	}
	return (input);
}

PhoneBook::PhoneBook(void)
{
	this->_nb_contact = 0;
	std::cout << "PhoneBook created." << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed." << std::endl;
}

void	PhoneBook::add_contact(void)
{
	if (this->_nb_contact >= 8)
		this->_nb_contact = 0;
	Contact	new_contact(prompt("first name"),
						prompt("last name"),
						prompt("nickname"),
						prompt("phone number"),
						prompt("darkest secret"));
	this->_contact_list[this->_nb_contact] = new_contact;
	this->_nb_contact += 1;
}

void	PhoneBook::display_list(void) const
{
	std::cout << std::setw(10) << /* stuff here... */ << std::endl;
}
