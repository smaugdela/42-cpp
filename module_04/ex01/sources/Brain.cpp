/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:26:58 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/18 18:20:00 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
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
	for (int j = 0; j < 100; ++j)
		o << j << "th idea = " << ptr[j] << std::endl;
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