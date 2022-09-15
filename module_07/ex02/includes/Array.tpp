/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:24:20 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/15 17:01:10 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

Array::Array<T>(void) : _tab(NULL), _size(0)
{
	std::cout << "Array created." << std::endl;
}

Array::Array<T>(unsigned int n) : _tab(new T[n]), _size(n)
{
	std::cout << "Array created." << std::endl;
}

Array::Array<T>(Array const& src) : _tab(new T[src.size()]), _size(src.size())
{
	*this = src;
	std::cout << "Array copied." << std::endl;
}

Array::~Array<T>(void)
{
	delete [] this->_tab;
	std::cout << "Array destroyed." << std::endl;
}

Array&	Array::operator=<T>(Array const& rhs)
{
	delete [] this->_tab;
	this->_tab = new T[rhs.size()];
	this->_size = rhs.size();
	for (unsigned int i = 0; i < this->_size; ++i)
		*this[i] = rhs[i];
	return *this;
}

T&		Array::operator[]<T>(usigned int index) const throw()
{
	if (index >= this->_size)
		throw std::exception;
	return this->_tab[index];
}

unsigned int	Array::size<T>(void) const
{
	return this->_size;
}
