/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:55:48 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/08 16:04:21 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>

std::string	prompt(std::string const field)
{
	std::string	input;

	std::cout << "Enter " << field << ": ";
	getline(std::cin, input);
	while (!input.size())
	{
		std::cout << field << " cannot be empty: ";
		getline(std::cin, input);
	}
	return (input);
}

std::string	shortify(std::string const input)
{
	if (input.size() > 10)
		return (input.substr(0, 9) + ".");
	return (input);
}

PhoneBook::PhoneBook(void)
{
	this->_nb_contact = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add_contact(void)
{
	size_t	index;

	index = this->_nb_contact % 8;
	Contact	new_contact(prompt("first name"),
						prompt("last name"),
						prompt("nickname"),
						prompt("phone number"),
						prompt("darkest secret"));
	this->_contact_list[index] = new_contact;
	this->_nb_contact += 1;
}

void	PhoneBook::display_list(void) const
{
	std::string	str_index;
	size_t			index;

	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│     index│first name│ last name│  nickname│" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (std::size_t i = 0; i < this->_nb_contact && i < 8; ++i)
	{
		std::cout << "│" << std::setw(10) << i + 1;
		std::cout << "│" << std::setw(10) << shortify(this->_contact_list[i].get_first_name());
		std::cout << "│" << std::setw(10) << shortify(this->_contact_list[i].get_last_name());
		std::cout << "│" << std::setw(10) << shortify(this->_contact_list[i].get_nickname());
		std::cout << "│" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	std::cout << "Which contact do you want to consult? (enter index): ";
	std::getline(std::cin, str_index);
	index = std::strtoul(str_index.c_str(), NULL, 10);
	if (str_index.size()
		&& str_index.find_first_not_of("0123456789+\f\t\n\r\v ") == str_index.npos
		&& --index >= 0 && index < this->_nb_contact && index < 8)
		this->_contact_list[index].display();
	else
		std::cout << "Index not valid." << std::endl;
}
