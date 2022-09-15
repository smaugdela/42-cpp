/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:04:56 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/15 16:19:35 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstdlib>
#include <string>

static double randd(double min, double max)
{
    double d = (double)rand() / RAND_MAX;
    return min + d * (max - min);
}

static int	strrev(std::string & str)
{
	size_t n = str.length();
	
	for (size_t i = 0; i < n / 2; ++i)
		std::swap(str[i], str[n - i - 1]);
	return EXIT_SUCCESS;
}

int 	main(void)
{
	int	tab[8];

	srand(time(NULL));
	for (size_t i = 0; i < 8; ++i)
		tab[i] = rand() % 10;

	std::cout << "\033[0;34m\033[1m\n\t On int Before incr \033[0m\n" << std::endl;
	::iter<int>(tab, 8, &display<int>);
	::iter<int>(tab, 8, &incr<int>);
	std::cout << "\033[0;34m\033[1m\n\t On int After incr \033[0m\n" << std::endl;
	::iter<int>(tab, 8, &display<int>);

	double	tabd[8];

	srand(time(NULL));
	for (size_t i = 0; i < 8; ++i)
		tabd[i] = randd(-100.0, 666.6);

	std::cout << "\033[0;34m\033[1m\n\t On double Before decr \033[0m\n" << std::endl;
	::iter<double>(tabd, 8, &display<double>);
	::iter<double>(tabd, 8, &decr<double>);
	std::cout << "\033[0;34m\033[1m\n\t On double After decr \033[0m\n" << std::endl;
	::iter<double>(tabd, 8, &display<double>);

	std::string	tabs[8] = {"Hello", "World", "!", "I'm", "learning templates", "today", ". Hope", "that'll work!"};

	std::cout << "\033[0;34m\033[1m\n\t On string Before rev \033[0m\n" << std::endl;
	::iter<std::string>(tabs, 8, &display<std::string>);
	::iter<std::string>(tabs, 8, &::strrev);
	std::cout << "\033[0;34m\033[1m\n\t On string After rev \033[0m\n" << std::endl;
	::iter<std::string>(tabs, 8, &display<std::string>);

	return EXIT_SUCCESS;
}
