/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:32:00 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/13 11:36:39 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon()
{}

std::string const	&Weapon::getType(void) const
{
	std::string const	&ret = this->_type;

	return (ret);
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}
