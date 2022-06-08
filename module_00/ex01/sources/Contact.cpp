/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:13:19 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/08 16:17:54 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5) :
	_first_name(s1), _last_name(s2), _nickname(s3), _phone_number(s4), _darkest_secret(s5)
{
}

Contact::~Contact(void)
{
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

void	Contact::display(void) const
{
	std::cout << "first name: " << this->get_first_name() << std::endl;
	std::cout << "last name: " << this->get_last_name() << std::endl;
	std::cout << "nickname: " << this->get_nickname() << std::endl;
	std::cout << "phone number: " << this->get_phone_number() << std::endl;
	std::cout << "darkest secret: " << this->get_darkest_secret() << std::endl;
}
