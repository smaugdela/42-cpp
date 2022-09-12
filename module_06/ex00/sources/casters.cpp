/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:46:50 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/12 17:28:02 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

// static int	int_max(int a, int b)
// {
// 	if (b > a)
// 		return b;
// 	return a;
// }

int	casti(std::string& str)
{
	int	n = std::strtol(str.c_str(), NULL, 10);

	std::cout << "char: "; 
	if (n > CHAR_MAX || n < CHAR_MIN)
		std::cout << "impossible";
	else if (!isprint(n))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(n) << "'";
	std::cout << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
	return EXIT_SUCCESS;
}

int	castc(std::string& str)
{
	char	c = str[0];

	std::cout << "char: ";
	if (!isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << "'" << c << "'";
	std::cout << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
	return EXIT_SUCCESS;
}

int	castf(std::string& str)
{
	float	f = std::strtof(str.c_str(), NULL);
	char	c;

	std::cout << "char: ";
	if (f > static_cast<float>(CHAR_MAX) || f < static_cast<float>(CHAR_MIN))
		std::cout << "impossible";
	else
	{
		c = static_cast<char>(f);
		if (!isprint(c))
			std::cout << "Non displayable";
		else
			std::cout << "'" << c << "'";
	}
	std::cout << std::endl;
	std::cout << "int: ";
	if (f > static_cast<float>(INT_MAX) || f < static_cast<float>(INT_MIN))
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(f);
	std::cout << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
	return EXIT_SUCCESS;
}

int	castd(std::string& str)
{
	double	d = strtod(str.c_str(), NULL);
	char	c;

	std::cout << "char: ";
	if (d > static_cast<double>(CHAR_MAX) || d < static_cast<double>(CHAR_MIN))
		std::cout << "impossible";
	else
	{
		c = static_cast<char>(d);
		if (!isprint(c))
			std::cout << "Non displayable";
		else
			std::cout << "'" << c << "'";
	}
	std::cout << std::endl;
	std::cout << "int: ";
	if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(d);
	std::cout << std::endl;
	std::cout << "float: ";
	if (d > static_cast<double>(__FLT_MAX__) || d < static_cast<double>(-__FLT_MAX__))
		std::cout << "impossible";
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f";
	std::cout << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	return EXIT_SUCCESS;
}

int	error(std::string& str)
{
	(void)str;
	std::cerr << "Error: Bad argument(s)." << std::endl;
	return EXIT_FAILURE;
}
