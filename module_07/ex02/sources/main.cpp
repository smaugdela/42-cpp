/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:23:48 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/16 16:59:24 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);

	std::cout << "\033[0;34m\033[1m\n\t Scoped Test \033[0m\n" << std::endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

	std::cout << "\033[0;34m\033[1m\n\t Testing index operator (if nothing shows up, then test is OK) \033[0m\n" << std::endl;

    int* mirror = new int[MAX_VAL];
    std::srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return EXIT_FAILURE;
        }
    }

	std::cout << "\033[0;34m\033[1m\n\t Testing exception thrown by index operator \033[0m\n" << std::endl;

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

	delete [] mirror;

	std::cout << "\033[0;34m\033[1m\n\t Testing other types of Array \033[0m\n" << std::endl;

	Array< std::string >	strTab(5);
	Array< std::string >	strTab_clone;

	for (int i = 0; i < 5; ++i)
	{
				for (int k = 0; k < 8; ++k)
					strTab[i] += static_cast<char>(std::rand() % 26 + 97);
	}

	std::cout << "\nstrTab_clone before copy = " << strTab_clone << std::endl;
	strTab_clone = strTab;
	std::cout << "strTab = " << strTab << std::endl;
	std::cout << "strTab_clone after copy = " << strTab_clone << std::endl;
	strTab[0] = "Hello World!";
	std::cout << "strTab after modification= " << strTab << std::endl;
	std::cout << "strTab_clone after modification = " << strTab_clone << std::endl;

    return EXIT_SUCCESS;
}
