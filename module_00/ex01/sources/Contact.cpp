/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:13:19 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/08 12:27:39 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5) :
	_first_name(s1), _last_name(s2), _nickname(s3), _phone_number(s4), _darkest_secret(s5)
{
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

void	Contact::set_first_name(std::string str)
{
	if (str.size())
		this->_first_name = str;
}
void	Contact::set_last_name(std::string str)
{
	if (str.size())
		this->_last_name = str;
}
void	Contact::set_nickname(std::string str)
{
	if (str.size())
		this->_nickname = str;
}
void	Contact::set_phone_number(std::string str)
{
	if (str.size())
		this->_phone_number = str;
}
void	Contact::set_darkest_secret(std::string str)
{
	if (str.size())
		this->_darkest_secret = str;
}
