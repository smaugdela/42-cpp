/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:24:23 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/15 16:59:49 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array {
	public:
		Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(Array const& src);
		~Array<T>(void);

		Array&	operator=<T>(Array const& rhs);
		T&		operator[]<T>(usigned int index) const throw();

		unsigned int	size<T>(void) const;

	private:
		T*				_tab;
		unsigned int	_size;
};

#endif
