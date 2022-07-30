/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:21:06 by smagdela          #+#    #+#             */
/*   Updated: 2022/07/30 21:02:42 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <climits>

static const Fixed &	max_3(Fixed const & a, Fixed const & b, Fixed const & c)
{
	Fixed	tmp;

	tmp = Fixed::max(a, b);
	return Fixed::max(tmp, c);
}

static const Fixed &	min_3(Fixed const & a, Fixed const & b, Fixed const & c)
{
	Fixed	tmp;

	tmp = Fixed::min(a, b);
	return Fixed::min(tmp, c);
}

static bool	fast_check( Point const a, Point const b, Point const c, Point const point )
{
	if (max_3(a.getX(), b.getX(), c.getX())<= point.getX()
	|| min_3(a.getX(), b.getX(), c.getX()) >= point.getX()
	|| max_3(a.getY(), b.getY(), c.getY()) <= point.getY()
	|| min_3(a.getY(), b.getY(), c.getY()) >= point.getY())
		return false;
	return true;
}

static bool	is_included( Fixed const & min, Fixed const & max, Fixed const &value)
{
	if (min <= value && value <= max)
		return true;
	return false;
}

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
	// These are the parameters of the linear equation of each edge of the triangle.
	Fixed	A;
	Fixed	B;
	Fixed	x_zero(INT_MAX);
	Fixed	x_one(INT_MAX);

	if (!fast_check(a, b, c, point))
		return false;
	if (is_included(Fixed::min(a.getY(), b.getY()), Fixed::max(a.getY(), b.getY()), point.getY()))
	{
		A = (b.getY() - a.getY()) / (b.getX() - a.getX());
		B = a.getY() - A * a.getX();
		x_zero = (point.getY() - B) / A;
	}
	if (is_included(Fixed::min(b.getY(), c.getY()), Fixed::max(b.getY(), c.getY()), point.getY()))
	{
		A = (c.getY() - b.getY()) / (c.getX() - b.getX());
		B = b.getY() - A * b.getX();
		if (x_zero.getRawBits() == INT_MAX)
			x_zero = (point.getY() - B) / A;
		else
			x_one = (point.getY() - B) / A;
	}
	if (is_included(Fixed::min(c.getY(), a.getY()), Fixed::max(c.getY(), a.getY()), point.getY()))
	{
		A = (a.getY() - c.getY()) / (a.getX() - c.getX());
		B = c.getY() - A * c.getX();
		if (x_zero.getRawBits() == INT_MAX)
			x_zero = (point.getY() - B) / A;
		else
			x_one = (point.getY() - B) / A;
	}
	if (x_one.getRawBits() == INT_MAX)
		return false;
	return is_included(Fixed::min(x_zero, x_one), Fixed::max(x_zero, x_one), point.getX());
}
