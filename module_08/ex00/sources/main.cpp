/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:09:42 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/20 16:19:36 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <deque>
#include <stdint.h>

template<typename T>
static size_t	iter_to_index(typename T::const_iterator a, T const& container)
{
	size_t						index;

	for (index = 0; a != container.begin(); --a, ++index);
	return (index);
}

static void test_a(std::list<int> lst, std::vector<int> vect, std::deque<int> deq)
{
	std::list<int>::const_iterator itl = easyfind(lst, 42);
	std::vector<int>::const_iterator itv = easyfind(vect, 42);
	std::deque<int>::const_iterator	itd = easyfind(deq, 42);

	std::cout << "Index of value " << *itl << " in list is [" << iter_to_index< std::list<int> >(itl, lst) << "]" << std::endl;
	std::cout << "Index of value " << *itv << " in vector is [" << iter_to_index< std::vector<int> >(itv, vect) << "]" << std::endl;
	std::cout << "Index of value " << *itd << " in deque is [" << iter_to_index< std::deque<int> >(itd, deq) << "]" << std::endl;
}

static void test_b(std::list<int> lst, std::vector<int> vect, std::deque<int> deq)
{
	std::list<int>::const_iterator itl = easyfind(lst, 370);
	std::vector<int>::const_iterator itv = easyfind(vect, 370);
	std::deque<int>::const_iterator	itd = easyfind(deq, 370);

	std::cout << "Index of value " << *itl << " in list is [" << iter_to_index< std::list<int> >(itl, lst) << "]" << std::endl;
	std::cout << "Index of value " << *itv << " in vector is [" << iter_to_index< std::vector<int> >(itv, vect) << "]" << std::endl;
	std::cout << "Index of value " << *itd << " in deque is [" << iter_to_index< std::deque<int> >(itd, deq) << "]" << std::endl;
}

static void test_c(std::list<int> lst, std::vector<int> vect, std::deque<int> deq)
{
	std::list<int>::const_iterator itl = easyfind(lst, 1);
	std::vector<int>::const_iterator itv = easyfind(vect, 1);
	std::deque<int>::const_iterator	itd = easyfind(deq, 1);

	std::cout << "Index of value " << *itl << " in list is [" << iter_to_index< std::list<int> >(itl, lst) << "]" << std::endl;
	std::cout << "Index of value " << *itv << " in vector is [" << iter_to_index< std::vector<int> >(itv, vect) << "]" << std::endl;
	std::cout << "Index of value " << *itd << " in deque is [" << iter_to_index< std::deque<int> >(itd, deq) << "]" << std::endl;
}

static void	test_d(std::list<int> lst, std::vector<int> vect, std::deque<int> deq)
{
	std::list<int>::const_iterator itl = easyfind(lst, -24);
	std::vector<int>::const_iterator itv = easyfind(vect, -24);
	std::deque<int>::const_iterator	itd = easyfind(deq, -24);

	std::cout << "Index of value " << *itl << " in list is [" << iter_to_index< std::list<int> >(itl, lst) << "]" << std::endl;
	std::cout << "Index of value " << *itv << " in vector is [" << iter_to_index< std::vector<int> >(itv, vect) << "]" << std::endl;
	std::cout << "Index of value " << *itd << " in deque is [" << iter_to_index< std::deque<int> >(itd, deq) << "]" << std::endl;
}

int	main(void)
{
	std::list<int>		lst;
	std::vector<int>	vect;
	std::deque<int>		deq;

	lst.push_front(30);
	lst.push_front(1);
	lst.push_front(370);
	lst.push_front(7);
	lst.push_front(42);

	vect.push_back(42);
	vect.push_back(7);
	vect.push_back(370);
	vect.push_back(1);
	vect.push_back(30);

	deq.push_back(42);
	deq.push_back(7);
	deq.push_back(370);
	deq.push_back(1);
	deq.push_back(30);

	std::cout << "\033[0;34m\033[1m\n\t Test A \033[0m\n" << std::endl;
	try
	{
		test_a(lst, vect, deq);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[0;34m\033[1m\n\t Test B \033[0m\n" << std::endl;
	try
	{
		test_b(lst, vect, deq);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[0;34m\033[1m\n\t Test C \033[0m\n" << std::endl;
	try
	{
		test_c(lst, vect, deq);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[0;34m\033[1m\n\t Test D \033[0m\n" << std::endl;
	try
	{
		test_d(lst, vect, deq);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}
