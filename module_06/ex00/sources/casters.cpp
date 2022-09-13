/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:46:50 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/13 14:35:43 by smagdela         ###   ########.fr       */
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

	if (errno)
		return (mission_impossible());
	std::cout << "char: ";
	if (round(f) > CHAR_MAX || round(f) < CHAR_MIN || isnanf(f))
		std::cout << "impossible\n";
	else
	{
		char c = static_cast<char>(round(f));
		if (!isprint(c))
			std::cout << "Non displayable\n";
		else
			std::cout << "'" << c << "'\n";
	}
	std::cout << "int: ";
	if (round(f) > INT_MAX || round(f) < INT_MIN || isnanf(f))
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(round(f)) << "\n";
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
	return EXIT_SUCCESS;
}

int	castd(std::string& str)
{
	double	d = strtod(str.c_str(), NULL);

	if (errno)
		return (mission_impossible());
	std::cout << "char: ";
	if (d > static_cast<double>(CHAR_MAX) || d < static_cast<double>(CHAR_MIN) || isnan(d))
		std::cout << "impossible\n";
	else
	{
		char c = static_cast<char>(round(d));
		if (!isprint(c))
			std::cout << "Non displayable\n";
		else
			std::cout << "'" << c << "'\n";
	}
	std::cout << "int: ";
	if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN) || isnan(d))
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(round(d)) << "\n";
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
