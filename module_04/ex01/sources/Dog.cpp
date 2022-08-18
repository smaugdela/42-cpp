/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:17:07 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/18 18:19:46 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "A dog is born!" << std::endl;
}

Dog::Dog( const Dog & src ) : Animal(src)
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
	// std::string const	*ptr = rhs._brain->getIdeas();

	if ( this != &rhs )
	{
		this->type = rhs.getType();
		this->_brain = rhs._brain;
		// for (size_t i = 0; i < 100; ++i)
		// 	this->_brain->setIdea(i, ptr[i]);
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


/* ************************************************************************** */