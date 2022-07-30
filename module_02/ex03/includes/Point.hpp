/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:44:57 by smagdela          #+#    #+#             */
/*   Updated: 2022/07/30 19:07:51 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{

	public:

		Point();
		Point( const float x, const float y );
		Point( Point const & src );
		~Point();

		Point	&operator=( Point const & rhs );

		Fixed const	&getX() const;
		Fixed const	&getY() const;

	private:

		Fixed const	_x;
		Fixed const	_y;

};

std::ostream &			operator<<( std::ostream & o, Point const & i );

#endif /* *********************************************************** POINT_H */