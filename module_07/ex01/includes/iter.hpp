/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:04:49 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/15 16:03:32 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename U>
void	iter(T * tab, size_t const size, U (*fun)(T&))
{
	for (size_t i = 0; i < size; ++i)
		fun(tab[i]);
}

template <typename T>
void	display(T & a)
{
	std::cout << "[" << a << "]" << std::endl;
}

template <typename T>
T&	incr(T & a)
{
	++a;
	return a;
}

template <typename T>
T&	decr(T & a)
{
	--a;
	return a;
}

#endif
