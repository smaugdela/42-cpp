/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:09:57 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/20 15:48:55 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>
# include <stdexcept>

class	ElementNotFoundException : public std::exception {
	const char*	what() const throw();
};

template<typename T>
typename T::const_iterator	easyfind(T const & container, int const n);

#include "easyfind.tpp"

#endif
