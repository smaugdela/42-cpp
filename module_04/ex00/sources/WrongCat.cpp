/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:34:47 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/18 16:05:07 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "A wrong_cat is born!" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal(src)
{
	*this = src;
	std::cout << "A wrong_cat has been cloned!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "A wrong_cat has died." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong Meeeooowww" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */