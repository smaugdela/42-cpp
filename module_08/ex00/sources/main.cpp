/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:09:42 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/19 13:58:34 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int	main(void)
{
	std::list<int>						lst;
	std::list<int>::iterator		itl;
	std::vector<int>					vect;
	std::vector<int>::iterator	itv;

	lst.push_front(42);
	lst.push_front(370);
	lst.push_front(1);
	lst.push_front(7);
	lst.push_front(30);

	vect.push_back(30);
	vect.push_back(7);
	vect.push_back(1);
	vect.push_back(370);
	vect.push_back(42);

	itl = easyfind(lst, 7);
	itv = easyfind(vect, 42);

	std::cout << itl - lst.begin() << std::endl;
	std::cout << *itv << std::endl;

	return EXIT_SUCCESS;
}
