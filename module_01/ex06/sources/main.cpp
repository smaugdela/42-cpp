/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:58:44 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/16 12:05:18 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int	main(int ac, char **av)
{
	Harl	customer;
	
	if (ac == 2)
		customer.complain(av[1]);
	else
		customer.complain("default");
	return (EXIT_SUCCESS);
}
