/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:17:18 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/20 15:58:06 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char*	ElementNotFoundException::what(void) const throw() {
	return "Error: Element not in container.";
}

template<typename T>
typename T::const_iterator	easyfind(T const & container, int const n)
{
	typename T::const_iterator	it;

	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw ElementNotFoundException();
	return it;
}
