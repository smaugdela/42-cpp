/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:46:50 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/12 20:56:02 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

static int	mission_impossible(void)
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: impossible\n";
	std::cout << "double: impossible" << std::endl;
	return (EXIT_FAILURE);
}

int	casti(std::string& str)
{
	long	n = std::strtol(str.c_str(), NULL, 10);

	std::cout << "Casting from int." <<std::endl;
	if (n > INT_MAX || n < INT_MIN)
		return (mission_impossible());
	std::cout << "char: "; 
	if (n > CHAR_MAX || n < CHAR_MIN)
		std::cout << "impossible\n";
	else if (!isprint(n))
		std::cout << "Non displayable\n";
	else
		std::cout << "'" << static_cast<char>(n) << "'\n";
	std::cout << "int: " << n << "\n";
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
	return EXIT_SUCCESS;
}

int	castc(std::string& str)
{
	char	c = str[0];

	std::cout << "Casting from char." <<std::endl;
	std::cout << "char: ";
	if (!isprint(c))
		std::cout << "Non displayable\n";
	else
		std::cout << "'" << c << "'\n";
	std::cout << "int: " << static_cast<int>(c) << "\n";
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
	return EXIT_SUCCESS;
}

int	castf(std::string& str)
{
	float	f = std::strtof(str.c_str(), NULL);
	char	c;

	std::cout << "Casting from float." <<std::endl;
	if (errno && f == HUGE_VALF)
		return (mission_impossible());
	std::cout << "char: ";
	if (f > static_cast<float>(CHAR_MAX) || f < static_cast<float>(CHAR_MIN) || isnanf(f))
		std::cout << "impossible\n";
	else
	{
		c = static_cast<char>(f);
		if (!isprint(c))
			std::cout << "Non displayable\n";
		else
			std::cout << "'" << c << "'\n";
	}
	std::cout << "int: ";
	if (f > static_cast<float>(INT_MAX) || f < static_cast<float>(INT_MIN) || isnanf(f))
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(roundf(f)) << "\n";
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
	return EXIT_SUCCESS;
}

int	castd(std::string& str)
{
	double	d = strtod(str.c_str(), NULL);
	char	c;

	std::cout << "Casting from double." <<std::endl;
	if (errno && d == HUGE_VAL)
		return (mission_impossible());
	std::cout << "char: ";
	if (d > static_cast<double>(CHAR_MAX) || d < static_cast<double>(CHAR_MIN) || isnan(d))
		std::cout << "impossible\n";
	else
	{
		c = static_cast<char>(d);
		if (!isprint(c))
			std::cout << "Non displayable\n";
		else
			std::cout << "'" << c << "'\n";
	}
	std::cout << "int: ";
	if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN) || isnan(d))
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(d) << "\n";
	std::cout << "float: ";
	if (d > static_cast<double>(__FLT_MAX__) || d < static_cast<double>(-__FLT_MAX__))
		std::cout << "impossible\n";
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	return EXIT_SUCCESS;
}

int	error(std::string& str)
{
	(void)str;
	std::cerr << "Error: Bad argument(s)." << std::endl;
	return EXIT_FAILURE;
}
