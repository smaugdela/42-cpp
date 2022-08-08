/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:46:42 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/06 18:51:47 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point );

/* https://planetcalc.com/8108/ */

int main()
{
	Point p1;
	Point p2(1.0, 2.0);
	Point p3(p2);
	p3 = p2;
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;

	std::cout << "bsp = " << bsp(Point(7, 17), Point(11, 1), Point(2, 2), Point(7, -5)) << " (should display 0 here)" << std::endl;

	std::cout << "bsp = " << bsp(Point(7, 17), Point(11, 1), Point(2, 2), Point(7, 3)) << " (should display 1 here)" << std::endl;

	std::cout << "bsp = " << bsp(Point(0, 0), Point(11, 1), Point(2, 2), Point(7, 3)) << " (should display 0 here)" << std::endl;

	std::cout << "bsp = " << bsp(Point(-0, 0.5f), Point(-4.23f, 42.2f), Point(36.7f, 5), Point(15, 3)) << " (should display 1 here)" << std::endl;

	std::cout << "bsp = " << bsp(Point(7, 17), Point(11, 1), Point(2, 2), Point(20.0f, 0)) << " (should display 0 here)" << std::endl;

	std::cout << "bsp = " << bsp(Point(7, 17), Point(11, 1), Point(2, 2), Point(7, 17)) << " (should display 0 here)" << std::endl;

	std::cout << "bsp = " << bsp(Point(0, 0), Point(0, 10), Point(5, 5), Point(0, 5)) << " (should display 0 here)" << std::endl;

	return 0;
}
