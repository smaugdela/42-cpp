/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:31:31 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/13 17:15:09 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

int	main(void)
{
	Data		container1;
	Data		container2;
	Data		*ptr1;
	Data		*ptr2;
	Data		*ptr3;
	uintptr_t	serial1;
	uintptr_t	serial2;
	uintptr_t	serial3;

	container1.name = "Violette";
	container1.c = 'z';
	container1.n = 4;
	container1.l = 66666666666666666666.6666666666666666666;

	container2.name = "Califourchon";
	container2.c = '&';
	container2.n = 212;
	container2.l = 0.000000000000000000000000000042;

	ptr1 = &container1;
	ptr2 = &container2;
	ptr3 = NULL;

	std::cout << "\033[0;34m\033[1m\n\t Before Serialization \033[0m\n" << std::endl;
	std::cout << *ptr1 << std::endl;
	std::cout << *ptr2 << std::endl;
	std::cout << "ptr3 = " << ptr3 << std::endl;

	serial1 = serialize(ptr1);
	serial2 = serialize(ptr2);
	serial3 = serialize(ptr3);
	ptr1 = deserialize(serial1);
	ptr2 = deserialize(serial2);
	ptr3 = deserialize(serial3);

	std::cout << "\033[0;34m\033[1m\n\t After Serialization \033[0m\n" << std::endl;
	std::cout << *ptr1 << std::endl;
	std::cout << *ptr2 << std::endl;
	std::cout << "ptr3 = " << ptr3 << std::endl;

	return EXIT_SUCCESS;
}
