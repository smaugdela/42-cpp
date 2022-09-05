/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:54:09 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/05 16:18:40 by smagdela         ###   ########.fr       */
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

/* Normal Behavior, testing Form constructors */
static void	bureaucratA()
{
	AForm*	a = new ShrubberyCreationForm();
	AForm*	b = new ShrubberyCreationForm("42");
	AForm*	c = new ShrubberyCreationForm(a);
	Bureaucrat	d("Gardener", 137);

	c = b;

	d.signForm(*a);
	d.executeForm(*a);
}

/* Testing the Bureaucrat ability to sign a Form */
static void	bureaucratB()
{

}

/* Testing Form constructors error grade too high */
static void	bureaucratC()
{

}

/* Testing Form constructors error grade too high */
static void	bureaucratD()
{

}

/* Testing multiple signatures */
static void	bureaucratE()
{

}

/* Testing Form constructors error grade too low */
static void	bureaucratF()
{

}

int main( void )
{
	std::cout << "\033[0;34m\033[1m\n\t Normal Behavior, testing Form constructors \033[0m\n" << std::endl;
	try
	{
		bureaucratA();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[0;34m\033[1m\n\t Testing the Bureaucrat ability to sign a Form \033[0m\n" << std::endl;
	try
	{
		bureaucratB();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[0;34m\033[1m\n\t Testing Form constructors error grade too high \033[0m\n" << std::endl;
	try
	{
		bureaucratC();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[0;34m\033[1m\n\t Testing Form constructors error grade too high \033[0m\n" << std::endl;
	try
	{
		bureaucratD();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[0;34m\033[1m\n\t Testing multiple signatures \033[0m\n" << std::endl;
	try
	{
		bureaucratE();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
		std::cout << "\033[0;34m\033[1m\n\t Testing Form constructors error grade too low \033[0m\n" << std::endl;
	try
	{
		bureaucratF();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
