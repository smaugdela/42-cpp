/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:37:21 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/19 15:16:44 by smagdela         ###   ########.fr       */
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
	std::srand(time(NULL));

	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const Cat* k = new Cat();
	const Cat* l = new Cat(*k);
	const Dog* m = new Dog();
	const Dog* n = new Dog();

	std::cout << "\nk's brain address " << k->getBrain() << " and " << *(k->getBrain()) << "\n" << std::endl;
	std::cout << "l's brain address " << l->getBrain() << " and " << *(l->getBrain()) << "\n" << std::endl;
	std::cout << "m's brain address " << m->getBrain() << " and " << *(m->getBrain()) << "\n" << std::endl;
	std::cout << "n's brain address " << n->getBrain() << " and " << *(n->getBrain()) << "\n" << std::endl;
	n = m;
	std::cout << "n's brain address " << n->getBrain() << " and " << *(n->getBrain()) << "\n" << std::endl;

	std::cout << "\n" << meta->getType() << " | Should be an Animal." << std::endl;
	std::cout << i->getType() << " | Should be a Cat." << std::endl;
	std::cout << j->getType() << " | Should be a Dog." << std::endl;
	std::cout << k->getType() << " | Should be a Cat." << std::endl;
	std::cout << l->getType() << " | Should be a Cat." << std::endl;
	std::cout << m->getType() << " | Should be a Dog." << std::endl;
	std::cout << n->getType() << " | Should be a Dog." << std::endl;

	std::cout << "Should be an Animal sound : ";
	meta->makeSound();
	std::cout << "\nShould be a Cat sound : ";
	i->makeSound();
	std::cout << "Should be a Dog sound : ";
	j->makeSound();
	std::cout << "Should be a Cat sound : ";
	k->makeSound();
	std::cout << "Should be a Cat sound : ";
	l->makeSound();
	std::cout << "Should be a Dog sound : ";
	m->makeSound();
	std::cout << "Should be a Dog sound : ";
	n->makeSound();

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
	delete m;
	delete n;
	return EXIT_SUCCESS;
}
