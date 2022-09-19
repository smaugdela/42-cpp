/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:17:18 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/19 13:58:13 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
template<typename T>
typename T::iterator	easyfind(T const & container, int n)
{
	return std::find(container.begin(), container.end(), n);
}
