/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:54:09 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/30 18:46:32 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

/* Normal Behavior, default constructor */
static void	bureaucratA()
{
	Bureaucrat	a;

	a.promote();
	std::cout << a << std::endl;
	a.demote();
	std::cout << a << std::endl;
}

/* Normal Behavior, parametrized constructor */
static void	bureaucratB()
{
	Bureaucrat	b("Igor", 42);

	b.promote();
	std::cout << b << std::endl;
	b.demote();
	std::cout << b << std::endl;
}

/* Demote error, copy constructor */
static void	bureaucratC()
{
	Bureaucrat	b("Grichka", 150);
	Bureaucrat	c(b);

	c.promote();
	std::cout << c << std::endl;
	c.demote();
	std::cout << c << std::endl;
	c.demote();
	std::cout << c << std::endl;
}

/* Constructor grade too low error */
static void	bureaucratD()
{
	Bureaucrat	d("Private", 4242);

	d.promote();
	std::cout << d << std::endl;
	d.demote();
	std::cout << d << std::endl;
}

/* Constructor grade too high error */
static void	bureaucratE()
{
	Bureaucrat	e("General", 0);

	e.promote();
	std::cout << e << std::endl;
	e.demote();
	std::cout << e << std::endl;
}

/* Constructor grade too high error */
static void	bureaucratF()
{
	Bureaucrat	f("God", -36);

	f.promote();
	std::cout << f << std::endl;
	f.demote();
	std::cout << f << std::endl;
}

/* promote error, copy constructor */
static void	bureaucratG()
{
	Bureaucrat	b("Igor", 1);

	b.demote();
	std::cout << b << std::endl;
	b.promote();
	std::cout << b << std::endl;
	b.promote();
	std::cout << b << std::endl;
}

int main( void )
{
	std::cout << "\033[0;34m\033[1m\n\t ------------------------- \033[0m\n" << std::endl;
	try
	{
		bureaucratA();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[0;34m\033[1m\n\t ------------------------- \033[0m\n" << std::endl;
	try
	{
		bureaucratB();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[0;34m\033[1m\n\t ------------------------- \033[0m\n" << std::endl;
	try
	{
		bureaucratC();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[0;34m\033[1m\n\t ------------------------- \033[0m\n" << std::endl;
	try
	{
		bureaucratD();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[0;34m\033[1m\n\t ------------------------- \033[0m\n" << std::endl;
	try
	{
		bureaucratE();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[0;34m\033[1m\n\t ------------------------- \033[0m\n" << std::endl;
	try
	{
		bureaucratF();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[0;34m\033[1m\n\t ------------------------- \033[0m\n" << std::endl;
	try
	{
		bureaucratG();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
