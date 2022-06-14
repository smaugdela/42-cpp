/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:58:44 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/14 18:27:22 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int	main(void)
{
	Harl	customer;
	
	customer.complain("DEBUG");
	customer.complain("INFO");
	customer.complain("WARNING");
	customer.complain("ERROR");
	customer.complain("LOL");
	customer.complain("ERROR");
	customer.complain("INFO");
	customer.complain("DEBUG");
	customer.complain("WARNING");
	return (EXIT_SUCCESS);
}
