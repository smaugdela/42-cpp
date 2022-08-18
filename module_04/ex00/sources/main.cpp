/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:37:21 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/18 15:59:37 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wc = new WrongCat();
	const WrongAnimal* wa = new WrongAnimal();
	const WrongCat* tc = new WrongCat();

	std::cout << meta->getType() << " | Should be an Animal." << std::endl;
	std::cout << j->getType() << " | Should be a Dog." << std::endl;
	std::cout << i->getType() << " | Should be a Cat." << std::endl;
	std::cout << wc->getType() << " | Should be a WrongCat." << std::endl;
	std::cout << wa->getType() << " | Should be a WrongAnimal." << std::endl;
	std::cout << tc->getType() << " | Should be a WrongCat." << std::endl;
	std::cout << "\n\nShould be a Cat sound : ";
	i->makeSound();
	std::cout << "Should be a Dog sound : ";
	j->makeSound();
	std::cout << "Should be an Animal sound : ";
	meta->makeSound();
	std::cout << "Should be a WrongCat sound : ";
	tc->makeSound();
	std::cout << "Should be a WrongAnimal sound : ";
	wa->makeSound();
	std::cout << "Should be a WrongAnimal sound although it's called on a WrongCat instance (absence of virtual keyword) : ";
	wc->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wc;
	delete wa;
	delete tc;
	return EXIT_SUCCESS;
}
