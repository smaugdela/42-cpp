/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:48:21 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/19 14:51:39 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "A cat is born!" << std::endl;
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	this->_brain = new Brain(*src.getBrain());
	std::cout << "A cat has been cloned!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "A cat has died." << std::endl;
	delete this->_brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
		this->_brain = rhs._brain;
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