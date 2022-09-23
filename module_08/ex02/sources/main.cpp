/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:40:20 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/23 16:31:27 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <list>
#include "MutantStack.hpp"

int main()
{
	std::cout << "\033[0;34m\033[1m\n\t Test with Mutantstack \033[0m\n" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

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

	std::cout << "\033[0;34m\033[1m\n\t Test with list. The exact same results should be found if correct. \033[0m\n" << std::endl;

	std::list<int> lst;

	lst.push_front(5);
	lst.push_front(17);
	std::cout << lst.front() << std::endl;
	lst.pop_front();
	std::cout << lst.size() << std::endl;
	lst.push_front(3);
	lst.push_front(5);
	lst.push_front(737);
	lst.push_front(0);

	std::list<int>::iterator itl = lst.begin();
	std::list<int>::iterator itel = lst.end();
	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	std::list<int> sl(lst);

	return EXIT_SUCCESS;
}
