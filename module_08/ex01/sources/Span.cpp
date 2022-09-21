/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:22:17 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/21 13:58:54 by smagdela         ###   ########.fr       */
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
	o << "Span = { ";
	for (std::list<int>::iterator it = i.getTab().begin(); it != i.getTab().end(); ++it)
	{
		o << *it;
		if (it + 1 != i.getTab().end())
			o << ", "
	}
	o << " }";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Span::addNumber(int n);
unsigned int	Span::shortestSpan(void) const;
unsigned int	Span::longestSpan(void) const;

const char*	Span::CapacityFullException::what(void) const throw()
{
	return "Error: Span completely full, reached its maximum capacity."
}

const char*	Span::NotEnoughElementsException::what(void) const throw()
{
	return "Error: not enought elemtns in Span to compute (needs at least 2 elements)."
}

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