/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:21:29 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/22 15:53:04 by smagdela         ###   ########.fr       */
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
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\033[0;34m\033[1m\n\t Test de fillSpan \033[0m\n" << std::endl;

	Span sp2 = Span(10);
	std::cout << sp2 << std::endl;
	sp2.addNumber(42);
	sp2.addNumber(42);
	sp2.addNumber(42);
	std::cout << sp2 << std::endl;	
	sp2.fillSpan(sp.getBegin(), sp.getEnd());
	std::cout << sp2 << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	std::cout << "\033[0;34m\033[1m\n\t Test avec 10000 nombres \033[0m\n" << std::endl;

	Span sp3 = Span(10000);
	sp3.randomFill();
	// std::cout << sp3 << std::endl;
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	return EXIT_SUCCESS;
}
