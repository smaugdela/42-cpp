/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:16:58 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/14 12:09:11 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int main(void)
{
	std::srand(time(NULL));

	std::cout << "\033[0;34m\033[1m\n Testing NULL pointer: \033[0m" << std::endl;
	identify(NULL);

	for (int i = 0; i < 5; ++i)
	{
		std::cout << "\033[0;34m\033[1m\n\t Generating... \033[0m\n" << std::endl;
		Base*	ptr = generate();

		std::cout << "\033[0;34m\033[1m\n Pointer identification: \033[0m" << std::endl;
		identify(ptr);

		std::cout << "\033[0;34m\033[1m\n Reference identification: \033[0m" << std::endl;
		identify(*ptr);

		delete ptr;
	}

	return EXIT_SUCCESS;
}
