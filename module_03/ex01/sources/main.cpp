/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:10:55 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/08 11:31:42 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("John");
	ScavTrap	b;
	ScavTrap	c("Tom");
	ScavTrap	d(c);

	std::cout << "\033[0;34m\033[1m\n Introduction \033[0m\n" << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	std::cout << "\033[0;34m\033[1m\n Testing HP features \033[0m\n" << std::endl;

	a.attack("Arthur");
	a.takeDamage(99);
	b = a;
	a.beRepaired(15);
	b.takeDamage(1);
	b.beRepaired(10);
	b.takeDamage(42);

	std::cout << "\033[0;34m\033[1m\n Testing Energy Points features \033[0m\n" << std::endl;

	for (int i = 0; i < 51; ++i)
		c.attack("John Doe");
	c.beRepaired(10);

	std::cout << "\033[0;34m\033[1m\n Conclusion \033[0m\n" << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	return EXIT_SUCCESS;
}
