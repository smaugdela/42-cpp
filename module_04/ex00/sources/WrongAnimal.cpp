/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:50:29 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/18 15:24:49 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal(const std::string &arg) : type(arg)
{
	std::cout << "A wrong_animal is born!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src ) : type(src.getType())
{
	std::cout << "A wrong_animal has been cloned!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "A wrong_animal has died." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << "WrongAnimal has type = " << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "<insert wrong_animal sound here>" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	&WrongAnimal::getType( void ) const
{
	return (this->type);
}

/* ************************************************************************** */