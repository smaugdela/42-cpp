/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:10:29 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/12 15:49:07 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <limits.h>
# include <math.h>

typedef enum	e_origin_type	{
	INT,
	CHAR,
	FLOAT,
	DOUBLE,
	ERROR
}	t_origin_type;

typedef	struct s_dict
{
	t_origin_type	key;
	int (*fun)(std::string&);
}	t_dict;

int	casti(std::string& str);
int	castc(std::string& str);
int	castf(std::string& str);
int	castd(std::string& str);
int	error(std::string& str);

#endif