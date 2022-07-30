/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:04:02 by smagdela          #+#    #+#             */
/*   Updated: 2022/07/30 16:23:58 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed	const a(42.2f);
	Fixed	const b(3.141592653589793f);
	Fixed	c(0.0f);
	Fixed	d(-666);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	/* arithmetic operators */

	std::cout << "\n\033[1mArithmetic operators:\033[0m\n" << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	std::cout << "c = " << c << std::endl;
	c = ((b * a) - d + c);
	std::cout << "c = b * a - d + c = " << c << std::endl;

	/* comparisons operators */

	std::cout << "\n\033[1mComparisons operators:\033[0m\n" << std::endl;
	std::cout << "a + d < b = " << ((a + d) < b ) << std::endl;
	std::cout << "a + d > b = " << ((a + d) > b ) << std::endl;
	std::cout << "a + d <= b = " << ((a + d) <= b) << std::endl;
	std::cout << "b >= b = " << (b >= b) << std::endl;
	std::cout << "b == b = " << (b == b) << std::endl;
	std::cout << "b != b = " << (b != b) << std::endl;

	/* incrementation operators */

	std::cout << "\n\033[1mIncrementation operators:\033[0m\n" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "c++ = " << c++ << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "++c = " << ++c << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "c-- = " << c-- << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "--c = " << --c << std::endl;
	std::cout << "c = " << c << std::endl;
	

	/* min and max */

	std::cout << "\n\033[1mMin and max:\033[0m\n" << std::endl;
	std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
	std::cout << "max(c, d) = " << Fixed::max(c, d) << std::endl;
	std::cout << "min(c, d) = " << Fixed::min(c, d) << std::endl;

	return 0;
}
