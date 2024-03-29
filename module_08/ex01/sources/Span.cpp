/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:22:17 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/27 17:07:59 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n) : _N(n), _tab()
{
	srand(time(NULL));
}

Span::Span( const Span & src ) : _N(src._N), _tab()
{
	srand(time(NULL));
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
		if (this->_N < rhs.getTab().size())
			throw CapacityFullException();
		this->_tab = rhs.getTab();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	o << "Span = { ";
	for (std::list<int>::const_iterator it = i.getTab().begin(); it != i.getTab().end(); ++it)
	{
		o << *it;
		std::list<int>::const_iterator	next = it;
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
	if (this->_tab.size() == this->_N)
		throw Span::CapacityFullException();
	this->_tab.push_back(n);
}

unsigned int	Span::shortestSpan(void) const
{
	std::list<int>	tmp(this->_tab);
	unsigned int	span = UINT_MAX;

	if (this->_tab.size() < 2)
		throw Span::NotEnoughElementsException();
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
	int								min;
	int 							max;
	std::list<int>::const_iterator	tmp;

	if (this->_tab.size() < 2)
		throw Span::NotEnoughElementsException();
	tmp = std::min_element(this->_tab.begin(), this->_tab.end());
	min = *tmp;
	tmp = std::max_element(this->_tab.begin(), this->_tab.end());
	max = *tmp;
	return (max - min);
}

void	Span::randomFill(void)
{
	if (this->_N == this->_tab.size())
		throw Span::CapacityFullException();
	for(unsigned int i = this->_tab.size(); i < this->_N; ++i)
	{
		this->addNumber(rand());
	}
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

unsigned int	Span::getN(void) const
{
	return this->_N;
}

std::list<int> const&	Span::getTab(void) const
{
	return this->_tab;
}

std::list<int>::iterator	Span::getBegin(void)
{
	return (this->_tab.begin());
}

std::list<int>::iterator	Span::getEnd(void)
{
	return (this->_tab.end());
}

/* ************************************************************************** */
