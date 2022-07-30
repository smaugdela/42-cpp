/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:46:42 by smagdela          #+#    #+#             */
/*   Updated: 2022/07/30 21:00:59 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point );

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

	return 0;
}
