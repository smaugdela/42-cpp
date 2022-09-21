/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:22:17 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/21 12:55:35 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n) : _capacity(n), _tab()
{
}

Span::Span( const Span & src ) : _capacity(src._capacity), _tab(src._tab)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_capacity = rhs.getCapacity();
		this->_tab = rhs.getTab();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int	Span::getCapacity(void) const
{
	return this->_capacity;
}

std::list<int>&	Span::getTab(void) const
{
	return this->_tab;
}

/* ************************************************************************** */