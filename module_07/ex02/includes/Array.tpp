/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:24:20 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/16 16:54:44 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>
#include <iostream>

template<typename T>
Array<T>::Array(void) : _tab(NULL), _size(0)
{
	std::cout << "Array created." << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _tab(new T[n]), _size(n)
{
	std::cout << "Array created." << std::endl;
}

template<typename T>
Array<T>::Array(Array const& src) : _tab(new T[src.size()]), _size(src.size())
{
	*this = src;
	std::cout << "Array copied." << std::endl;
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] this->_tab;
	std::cout << "Array destroyed." << std::endl;
}

template<typename T>
const char*	Array<T>::IndexOutOfRangeException::what(void) const throw()
{
	return ("Error: Index is out of the range of the array.");
}

template<typename T>
T&	Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_size)
		throw Array<T>::IndexOutOfRangeException();
	return this->_tab[index];
}

template<typename T>
Array<T>&	Array<T>::operator=(Array<T> const& rhs)
{
	delete [] this->_tab;
	this->_tab = new T[rhs.size()];
	this->_size = rhs.size();
	for (unsigned int i = 0; i < this->_size; ++i)
		this->_tab[i] = rhs[i];
	return *this;
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return this->_size;
}

template<typename T>
std::ostream	&operator<<(std::ostream & o, Array<T> const& input)
{
	o << "[ ";
	for (unsigned int i = 0; i < input.size(); ++i)
	{
		o << input[i];
		if (i != input.size() - 1)
			o << ", ";
	}
	o << " ]";
	return o;
}
