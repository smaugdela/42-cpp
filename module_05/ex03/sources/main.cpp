/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:54:09 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/08 16:14:04 by smagdela         ###   ########.fr       */
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
#include "Intern.hpp"

int main( void )
{
	AForm	*a;
	AForm	*b;
	AForm	*c;

	/* Uncomment the following line to test Intern's exception */
	// AForm	*d;

	try
	{
		Intern	someRandomIntern;

		a = someRandomIntern.makeForm("shrubbery creation", "Jardin");
		b = someRandomIntern.makeForm("robotomy request", "Bender");
		c = someRandomIntern.makeForm("presidential pardon", "");
		Bureaucrat	e("Gardener", 137);

		/* Uncomment the following line to test Intern's exception */
		// d = someRandomIntern.makeForm("lol form", "you");

		e.signForm(*a);
		e.signForm(*b);
		e.signForm(*c);
		for (int i = 0; i < 130; ++i)
			e.promote();
		e.signForm(*b);
		e.signForm(*c);
		e.executeForm(*a);
		e.executeForm(*b);
		e.executeForm(*b);
		e.executeForm(*b);
		e.executeForm(*b);
		e.executeForm(*b);
		e.executeForm(*c);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		delete a;
		delete b;
		delete c;
		return (EXIT_FAILURE);
	}
	delete a;
	delete b;
	delete c;

	/* Uncomment the following line to test Intern's exception */
	// (void)d;

	return (EXIT_SUCCESS);
}
