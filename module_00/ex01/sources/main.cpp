/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:57:31 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/08 14:50:34 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	repertory;
	std::string	cmd;

	while (cmd != "EXIT")
	{
		std::cout << "➜ ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			repertory.add_contact();
		else if (cmd == "SEARCH")
			repertory.display_list();
	}
	return (0);
}
