/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:51:56 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/30 14:50:14 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal(const std::string &arg) : type(arg)
{
	std::cout << "An animal is born!" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "An animal has been cloned!" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "An animal has died." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Animal has type = " << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound( void ) const
{
	std::cout << "eeerrrhhhm... Nani?" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	&Animal::getType( void ) const
{
	return this->type;
}

/* ************************************************************************** */