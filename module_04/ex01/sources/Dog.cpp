/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:17:07 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/30 14:50:21 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog")
{
	std::cout << "A dog is born!" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( const Dog & src ) : Animal(src)
{
	std::cout << "A dog has been cloned!" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "A dog has died!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
		*(this->_brain) = *(rhs.getBrain());
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound( void ) const
{
	std::cout << "WOAF, WOOF!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain	const *Dog::getBrain( void ) const
{
	 return this->_brain;
}

/* ************************************************************************** */