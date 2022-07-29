/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:04:24 by smagdela          #+#    #+#             */
/*   Updated: 2022/07/29 11:44:28 by smagdela         ###   ########.fr       */
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

		bool	operator>( Fixed const & rhs );
		bool	operator<( Fixed const & rhs );
		bool	operator>=( Fixed const & rhs );
		bool	operator<=( Fixed const & rhs );
		bool	operator==( Fixed const & rhs );
		bool	operator!=( Fixed const & rhs );

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