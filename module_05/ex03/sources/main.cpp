/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:54:09 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/07 13:48:34 by smagdela         ###   ########.fr       */
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
	try
	{
		Intern	someRandomIntern;

		AForm*	a = someRandomIntern.makeForm("shrubbery creation", "Jardin");
		AForm*	b = someRandomIntern.makeForm("robotomy request", "Bender");
		AForm*	c = someRandomIntern.makeForm("presidential pardon", "");
		Bureaucrat	e("Gardener", 137);

		/* Uncomment the two following lines to test Intern's exception */
		// AForm*	d = someRandomIntern.makeForm("lol form", "you");
		// (void)d;

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
