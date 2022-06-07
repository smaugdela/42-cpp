/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:48:16 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/07 16:46:53 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

int	main(int const ac, char const **av)
{
	std::string	s;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; ++i)
			s += av[i];
		for (size_t i = 0; i < s.size(); ++i)
			s[i] = toupper(s[i]);
		std::cout << s << std::endl;
	}
	return (0);	
}
