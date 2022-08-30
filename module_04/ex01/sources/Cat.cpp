/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:48:21 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/30 14:50:03 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
{
	std::cout << "A cat is born!" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	std::cout << "A cat has been cloned!" << std::endl;
	this->_brain = new Brain(*src.getBrain());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "A cat has died." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
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

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeeeeooooooowww...." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain	const *Cat::getBrain( void ) const
{
	 return this->_brain;
}

/* ************************************************************************** */