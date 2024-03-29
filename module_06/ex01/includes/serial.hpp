/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:33:35 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/13 17:06:11 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
# define SERIAL_HPP

# include <cstdlib>
# include <iostream>
# include <stdint.h>

typedef struct s_Data
{
	std::string	name;
	char		c;
	int			n;
	long double	l;
}	Data;

std::ostream	&operator<<(std::ostream &o, Data const &i);
uintptr_t		serialize(Data* ptr);
Data*			deserialize(uintptr_t raw);

#endif
