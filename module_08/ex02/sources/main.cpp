/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:40:20 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/26 12:19:10 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <list>
#include "MutantStack.hpp"

int main()
{
	std::cout << "\033[0;34m\033[1m\n\t Testing basic MutantStack methods. \033[0m\n" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top() = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.size() after pop() = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "\033[0;34m\033[1m\n\t Printing MutantStack and testing iterators. \033[0m\n" << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\033[0;34m\033[1m\n\t Test with list. It should be filled with the same ints as MutantStack. \033[0m\n" << std::endl;

	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::list<int>::iterator itl = lst.begin();
	std::list<int>::iterator itel = lst.end();
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}

	return EXIT_SUCCESS;
}
