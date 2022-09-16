/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:24:23 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/16 16:55:01 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array {
	public:
		Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(Array<T> const& src);
		~Array<T>(void);

		T&			operator[](unsigned int index) const;
		Array<T>&	operator=(Array<T> const& rhs);

		unsigned int	size(void) const;

	private:
		T*				_tab;
		unsigned int	_size;
		
		class	IndexOutOfRangeException : public std::exception {
			virtual const char*	what(void) const throw();
		};
};

template<typename T>
std::ostream	&operator<<(std::ostream const& o, Array<T> const& i);

#include "Array.tpp"

#endif
