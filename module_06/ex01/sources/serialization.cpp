/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:35:16 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/13 17:10:53 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

std::ostream	&operator<<(std::ostream &o, Data const& i)
{
	o << "Data structure named " << i.name << " stores the following variables :\n";
	o << "char: " << i.c << "\n";
	o << "int: " << i.n << "\n";
	o << "long double: " << i.l << "\n";
	return o;
}

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

