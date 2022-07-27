/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:04:34 by smagdela          #+#    #+#             */
/*   Updated: 2022/07/27 12:04:35 by smagdela         ###   ########.fr       */
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
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &operator=( Fixed const & rhs );

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int					_raw_bits;
		static int const	_point_pos = 8;

};


#endif /* *********************************************************** FIXED_H */
