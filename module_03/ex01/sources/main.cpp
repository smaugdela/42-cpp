/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:10:55 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/06 16:18:53 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("John");
	ClapTrap	b;
	ClapTrap	c("Tom");
	ClapTrap	d(c);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	a.attack("Arthur");
	a.takeDamage(9);
	b = a;
	a.beRepaired(15);
	b.takeDamage(1);
	b.beRepaired(10);
	b.takeDamage(42);

	c.attack("John Doe");
	c.attack("John Doe");
	c.attack("John Doe");
	c.attack("John Doe");
	c.attack("John Doe");
	c.attack("John Doe");
	c.attack("John Doe");
	c.attack("John Doe");
	c.attack("John Doe");
	c.attack("John Doe");
	c.attack("John Doe");
	c.attack("John Doe");
	c.beRepaired(10);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	return EXIT_SUCCESS;
}
