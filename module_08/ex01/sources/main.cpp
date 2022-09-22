/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:21:29 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/22 16:30:55 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "\033[0;34m\033[1m\n\t Main du sujet \033[0m\n" << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp << std::endl;
	std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span = " << sp.longestSpan() << std::endl;

	std::cout << "\033[0;34m\033[1m\n\t Test de fillSpan \033[0m\n" << std::endl;

	Span sp2 = Span(10);
	sp2.addNumber(42);
	sp2.addNumber(42);
	sp2.addNumber(42);
	std::cout << sp2 << std::endl;
	std::cout << "Shortest span = " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span = " << sp2.longestSpan() << std::endl;
	sp2.fillSpan(sp.getBegin(), sp.getEnd());
	std::cout << sp2 << std::endl;
	std::cout << "Shortest span = " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span = " << sp2.longestSpan() << std::endl;

	std::cout << "\033[0;34m\033[1m\n\t Test avec 10000 nombres et randomFill \033[0m\n" << std::endl;

	Span sp3 = Span(10000);
	sp3.randomFill();
	// std::cout << sp3 << std::endl;
	std::cout << "Shortest span = " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span = " << sp3.longestSpan() << std::endl;

	std::cout << "\033[0;34m\033[1m\n\t Test des exceptions \033[0m\n" << std::endl;

	try
	{
		sp3.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span	sp4;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span	sp4;
		sp4.addNumber(21);
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span	sp4(10);
		sp4.addNumber(21);
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return EXIT_SUCCESS;
}
