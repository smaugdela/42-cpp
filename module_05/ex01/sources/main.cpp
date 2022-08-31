/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:54:09 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/31 16:58:52 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

/* Normal Behavior, testing Form constructors */
static void	bureaucratA()
{
	Form	a;
	Form	b("Passeport", 42, 140);
	Form	c(b);
}

/* Testing the Bureaucrat ability to sign a Form */
static void	bureaucratB()
{
	Form		f("Passeport", 42, 140);
	Bureaucrat	b("Igor", 43);

	b.signForm(f);
	b.promote();
	b.signForm(f);
	std::cout << f << std::endl;
}

/* Testing Form constructors error grade too high */
static void	bureaucratC()
{
	Form	f("Holy Scripture", 0, 1);

	std::cout << f << std::endl;
}

/* Testing Form constructors error grade too high */
static void	bureaucratD()
{
	Form	f("Holy Scripture 2.0", 1, -33);

	std::cout << f << std::endl;
}

/* Testing multiple signatures */
static void	bureaucratE()
{
	Bureaucrat	b("General", 1);
	Form		f("Necronomicon", 5, 1);

	b.signForm(f);
	b.demote();
	b.signForm(f);
}

/* Testing Form constructors error grade too low */
static void	bureaucratF()
{
	Form	f("Tabloid", 1, 152);

	std::cout << f << std::endl;
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
