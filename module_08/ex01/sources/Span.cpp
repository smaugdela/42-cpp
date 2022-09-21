/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:22:17 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/21 17:10:47 by smagdela         ###   ########.fr       */
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
		std::list<int>::iterator	next = it;
		if (++next != i.getTab().end())
			o << ", ";
	}
	o << " }";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			Span::addNumber(int n)
{
	if (this->_tab.size() == this->_capacity)
		throw Span::CapacityFullException();
	this->_tab.push_back(n);
}

unsigned int	Span::shortestSpan(void) const
{
	std::list<int>	tmp(this->_tab);
	unsigned int	span = UINT_MAX;

	tmp.sort();
	for (std::list<int>::iterator it = tmp.begin(); it != tmp.end(); ++it)
	{
		std::list<int>::iterator	next = it;
		++next;
		span = std::min<unsigned int>(std::abs(*it - *next), span);
	}
	return span;
}

unsigned int	Span::longestSpan(void) const
{
	int							min;
	int 						max;
	std::list<int>::iterator	tmp;

	tmp = std::min_element(this->_tab.begin(), this->_tab.end());
	min = *tmp;
	tmp = std::max_element(this->_tab.begin(), this->_tab.end());
	max = *tmp;
	return (max - min);
}

const char*	Span::CapacityFullException::what(void) const throw()
{
	return "Error: Span completely full, reached its maximum capacity.";
}

const char*	Span::NotEnoughElementsException::what(void) const throw()
{
	return "Error: not enough elements in Span to compute (needs at least 2 elements).";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int	Span::getCapacity(void) const
{
	return this->_capacity;
}

std::list<int>	&Span::getTab(void) const
{
	return this->_tab;
}

/* ************************************************************************** */