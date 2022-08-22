/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:17:07 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/22 17:08:36 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : AAnimal("Dog")
{
	this->_brain = new Brain();
	std::cout << "A dog is born!" << std::endl;
}

Dog::Dog( const Dog & src ) : AAnimal(src)
{
	*this = src;
	std::cout << "A dog has been cloned!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "A dog has died!" << std::endl;
	delete this->_brain;
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