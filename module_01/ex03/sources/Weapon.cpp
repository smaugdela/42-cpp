/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:32:00 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/10 16:52:53 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon()
{}

std::string const	&getType(void)
{
	std::string	&ret = this->_name;

	return (ret);
}

void				setType(std::string type)
{
	this->_type = type;
}
