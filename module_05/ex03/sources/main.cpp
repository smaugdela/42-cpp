/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:54:09 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/06 19:19:27 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
	try
	{
		AForm*	a = new ShrubberyCreationForm("42");
		AForm*	b = new RobotomyRequestForm();
		AForm*	c = new PresidentialPardonForm();
		Bureaucrat	d("Gardener", 137);

		d.signForm(*a);
		d.signForm(*b);
		d.signForm(*c);
		for (int i = 0; i < 130; ++i)
			d.promote();
		d.signForm(*b);
		d.signForm(*c);
		d.executeForm(*a);
		d.executeForm(*b);
		d.executeForm(*b);
		d.executeForm(*b);
		d.executeForm(*b);
		d.executeForm(*b);
		d.executeForm(*c);
		delete a;
		delete b;
		delete c;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
