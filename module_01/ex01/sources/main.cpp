/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:52:30 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/10 15:10:53 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*the_pack;

	the_pack = zombieHorde(42, "Hawking");
	for (int i = 0; i < 42; i++)
		the_pack[i].announce();
	delete [] the_pack;

	the_pack = zombieHorde(42, "");
	for (int i = 0; i < 42; i++)
		the_pack[i].announce();
	delete [] the_pack;

	the_pack = zombieHorde(42, "Jim");
	for (int i = 0; i < 42; i++)
		the_pack[i].announce();
	delete [] the_pack;
	return (0);
}
