/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:26:58 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/19 15:13:51 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Brain.hpp"

static char	rand_char( void )
{
	int value = (std::rand() % 26) + 97;
	return (char)value;
}

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	for (int i = 0; i < 100; ++i)
	{
		for (int j = std::rand() % 10; j >= 0; --j)
			this->_ideas[i] += rand_char();
	}
	std::cout << "Brain created!" << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src;
	std::cout << "Brain created by copy!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	std::string const	*ptr = rhs.getIdeas();

	if ( this != &rhs )
	{
		for (size_t i = 0; i < 100; ++i)
			this->setIdea(i, ptr[i]);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	std::string const	*ptr = i.getIdeas();

	o << "Brain ideas :\n";
	o << "{";
	for (int j = 0; j < 100; ++j)
		o << ptr[j] << ", ";
	o << "}";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const *Brain::getIdeas( void ) const
{
	return (this->_ideas);
}

void	Brain::setIdea( size_t index, std::string arg )
{
	if (index < 100)
		this->_ideas[index] = arg;
}

/* ************************************************************************** */