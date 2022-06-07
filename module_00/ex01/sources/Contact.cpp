/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:13:19 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/07 17:58:55 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5) :
	_first_name(s1), _last_name(s2), _nickname(s3), _phone_number(s4), _darkest_secret(s5)	{
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
}
