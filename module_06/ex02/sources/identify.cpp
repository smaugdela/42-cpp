/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:49:24 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/14 11:54:55 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base*	generate(void)
{
	int i = std::rand() % 3;
	if (i == 0)
	{
		std::cout << "Generated type A." << std::endl;
		return reinterpret_cast<Base *>(new A);
	}
	else if (i == 1)
	{
		std::cout << "Generated type B." << std::endl;
		return reinterpret_cast<Base *>(new B);
	}
	else
	{
		std::cout << "Generated type C." << std::endl;
		return reinterpret_cast<Base *>(new C);
	}
}

void	identify(Base* p)
{
	void	*ptr;

	if (p == NULL)
	{
		std::cerr << "Error: NULL pointer passsed as argument of identify." << std::endl;
		return ;
	}
	ptr = dynamic_cast<A *>(p);
	if (ptr != NULL)
	{
		std::cout << "Type A." << std::endl;
		return ;
	}
	ptr = dynamic_cast<B *>(p);
	if (ptr != NULL)
	{
		std::cout << "Type B." << std::endl;
		return ;
	}
	ptr = dynamic_cast<C *>(p);
	if (ptr != NULL)
	{
		std::cout << "Type C." << std::endl;
		return ;
	}
	std::cout << "Type unknown." << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A &refa = dynamic_cast<A &>(p);
		(void)refa;
		std::cout << "Type A." << std::endl;
	}
	catch (std::exception &badcast)
	{
		try
		{
			B &refb = dynamic_cast<B &>(p);
			(void)refb;
			std::cout << "Type B." << std::endl;
		}
		catch (std::exception &badcast)
		{
			try
			{
				C &refc = dynamic_cast<C &>(p);
				(void)refc;
				std::cout << "Type C." << std::endl;
			}
			catch (std::exception &badcast)
			{
				std::cout << "Type unknown." << std::endl;
			}
		}

	}
}
