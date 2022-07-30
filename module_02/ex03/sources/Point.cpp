/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:45:06 by smagdela          #+#    #+#             */
/*   Updated: 2022/07/30 19:17:57 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point() : _x(0), _y(0)
{
}

Point::Point( const float x, const float y ) : _x(x), _y(y)
{
}

Point::Point( const Point & src ) : _x(src._x), _y(src._y)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Point &				Point::operator=( Point const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Point const & i )
{
	o << "(" << i.getX() << ", " << i.getY() << ")";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Fixed	const &Point::getX() const
{
	return this->_x;
}

Fixed	const &Point::getY() const
{
	return this->_y;
}

/* ************************************************************************** */