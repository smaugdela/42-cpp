/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:09:42 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/19 12:31:20 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>

int	main(void)
{
	std::list<int>		lst;
	std::vector<int>	vect;
	std::stack<int>		stck;

	lst.pushfront(42);
	lst.pushfront(370);
	lst.pushfront(1);
	lst.pushfront(7);
	lst.pushfront(30);

	vect.push_back(30);
	vect.push_back(7);
	vect.push_back(1);
	vect.push_back(370);
	vect.push_back(42);

	stck.push(42);
	stck.push(370);
	stck.push(1);
	stck.push(7);
	stck.push(30);

	std::cout << lst << std::endl;
	std::cout << vect << std::endl;
	std::cout << stck << std::endl;

	std::cout << easyfind(lst, 7) std::endl;
	std::cout << easyfind(vect, 42) std::endl;
	std::cout << easyfind(stck, 370) std::endl;

	return EXIT_SUCCESS;
}
