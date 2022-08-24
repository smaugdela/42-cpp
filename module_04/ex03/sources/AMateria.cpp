/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:00:54 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/24 12:16:27 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria( std::string const & type ) : type(type)
{
	std::cout << "AMateria instance created." << std::endl;
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
	std::cout << "AMateria instance copied." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	std::cout << "AMateria instance destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & i )
{
	o << "AMateria type = " << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void use(ICharacter& target)
{}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & getType() const
{
	return (this->type);
}

/* ************************************************************************** */