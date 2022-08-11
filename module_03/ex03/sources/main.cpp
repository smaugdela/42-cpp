/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:10:55 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/11 14:13:24 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("John");
	DiamondTrap	b;
	DiamondTrap	c("Tom");
	DiamondTrap	d(c);
	ClapTrap	e;

	std::cout << "\033[0;34m\033[1m\n Introduction \033[0m\n" << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	a.highFivesGuys();
	b.highFivesGuys();
	c.guardGate();
	d.guardGate();

	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
	d.whoAmI();

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
	std::cout << e << std::endl;

	return EXIT_SUCCESS;
}
