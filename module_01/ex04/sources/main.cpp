/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:39:51 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/13 12:14:29 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

static void	winner_sed(std::ofstream file, std::ifstream replace_file,
	std::string const sep, std::string const rep)
{}

int	main(int ac, char **av)
{
	std::ifstream	file;
	std::ofstream	replace_file;

	if (ac != 4)
	{
		std::cout << "Bad argument number." << std::endl;
		return (EXIT_FAILURE);
	}
	file.open(av[1]);
	if (!file.is_open())
		return (EXIT_FAILURE);
	replace_file.open(av[1] + std::string(".replace"), std::ios::app);
	if (!replace_file.is_open())
	{
		file.close();
		return (EXIT_FAILURE);
	}
	winner_sed(file, replace_file, av[2], av[3]);
	file.close();
	replace_file.close();
	return (EXIT_SUCCESS);
}
