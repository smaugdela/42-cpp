/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:57:31 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/13 16:02:37 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int	main(void)
{
	PhoneBook	repertory;
	std::string	cmd;

	while (cmd != "EXIT")
	{
		std::cout << "➜ ";
		std::getline(std::cin, cmd);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::exit(EXIT_FAILURE);
		}
		if (cmd == "ADD")
			repertory.add_contact();
		else if (cmd == "SEARCH")
			repertory.display_list();
	}
	return (0);
}
