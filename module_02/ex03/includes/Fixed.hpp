/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:04:24 by smagdela          #+#    #+#             */
/*   Updated: 2022/07/30 19:04:59 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed( const Fixed & src );
		Fixed( const int n );
		Fixed( const float n );
		~Fixed();

		Fixed	&operator=( Fixed const & rhs );

		bool	operator>( Fixed const & rhs ) const;
		bool	operator<( Fixed const & rhs ) const;
		bool	operator>=( Fixed const & rhs ) const;
		bool	operator<=( Fixed const & rhs ) const;
		bool	operator==( Fixed const & rhs ) const;
		bool	operator!=( Fixed const & rhs ) const;

		Fixed	operator+( Fixed const & rhs ) const;
		Fixed	operator-( Fixed const & rhs ) const;
		Fixed	operator*( Fixed const & rhs ) const;
		Fixed	operator/( Fixed const & rhs ) const;

		Fixed	&operator++( void );
		Fixed	operator++( int );
		Fixed	&operator--( void );
		Fixed	operator--( int );

		static Fixed	&max( Fixed & a, Fixed & b );
		static Fixed const	&max( Fixed const & a, Fixed const & b );
		static Fixed	&min( Fixed & a, Fixed & b );
		static Fixed const	&min( Fixed const & a, Fixed const & b );

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:

		int					_raw_bits;
		static int const	_point_pos = 8;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif /* *********************************************************** FIXED_H */