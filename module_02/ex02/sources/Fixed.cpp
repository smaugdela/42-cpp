/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:04:16 by smagdela          #+#    #+#             */
/*   Updated: 2022/07/29 11:42:36 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _raw_bits(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( const int n )
{
	this->setRawBits(n * (1<<Fixed::_point_pos));
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float f )
{
	this->setRawBits((int)roundf(f * (float)(1 << this->_point_pos)));
	// std::cout << "Float constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed	&Fixed::operator=( Fixed const & rhs )
{
	this->_raw_bits = rhs.getRawBits();
	// std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

bool	Fixed::operator>( Fixed const & rhs )
{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<( Fixed const & rhs )
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=( Fixed const & rhs )
{
	if (*this < rhs)
		return (false);
	return (true);
}

bool	Fixed::operator<=( Fixed const & rhs )
{
	if (*this > rhs)
		return (false);
	return (true);
}

bool	Fixed::operator==( Fixed const & rhs )
{
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=( Fixed const & rhs )
{
	if (*this == rhs)
		return (false);
	return (true);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float	Fixed::toFloat(void) const
{
	return (this->getRawBits() / (float)(1 << Fixed::_point_pos));
}

int		Fixed::toInt(void) const
{
	return this->getRawBits() >> Fixed::_point_pos;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_raw_bits;
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_raw_bits = raw;
}

/* ************************************************************************** */