/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:37:21 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/22 17:11:55 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::srand(time(NULL));

	std::cout << "\033[0;34m\033[1m\n\t Constructors messages \033[0m\n" << std::endl;

	const AAnimal* i = new Cat();
	const AAnimal* j = new Dog();
	const Cat* k = new Cat();
	const Cat* l = new Cat(*k);
	Dog* m = new Dog();
	Dog* n = new Dog();
	Cat o = Cat();
	Cat p = Cat();

	std::cout << "\033[0;34m\033[1m\n\t Brains Deep Copies Tests \033[0m\n" << std::endl;

	std::cout << "\nk's brain address " << k->getBrain() << " and " << *(k->getBrain()) << "\n" << std::endl;
	std::cout << "l's brain address " << l->getBrain() << " and " << *(l->getBrain()) << "\n" << std::endl;
	std::cout << "m's brain address " << m->getBrain() << " and " << *(m->getBrain()) << "\n" << std::endl;
	std::cout << "n's brain address " << n->getBrain() << " and " << *(n->getBrain()) << "\n" << std::endl;
	*n = *m;
	std::cout << "n's brain address " << n->getBrain() << " and " << *(n->getBrain()) << "\n" << std::endl;
	std::cout << "o's brain address " << o.getBrain() << " and " << *(o.getBrain()) << "\n" << std::endl;
	std::cout << "p's brain address " << p.getBrain() << " and " << *(p.getBrain()) << "\n" << std::endl;
	p = o;
	std::cout << "p's brain address " << p.getBrain() << " and " << *(p.getBrain()) << "\n" << std::endl;

	std::cout << "\033[0;34m\033[1m\n\t Instances Types Tests \033[0m\n" << std::endl;

	std::cout << i->getType() << " | Should be a Cat." << std::endl;
	std::cout << j->getType() << " | Should be a Dog." << std::endl;
	std::cout << k->getType() << " | Should be a Cat." << std::endl;
	std::cout << l->getType() << " | Should be a Cat." << std::endl;
	std::cout << m->getType() << " | Should be a Dog." << std::endl;
	std::cout << n->getType() << " | Should be a Dog." << std::endl;
	std::cout << o.getType() << " | Should be a Cat." << std::endl;
	std::cout << p.getType() << " | Should be a Cat." << std::endl;

	std::cout << "\033[0;34m\033[1m\n\t Virtual makeSound Method Tests \033[0m\n" << std::endl;

	std::cout << "Should be a Cat sound : ";
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
	std::cout << "Should be a Cat sound : ";
	o.makeSound();
	std::cout << "Should be a Cat sound : ";
	p.makeSound();

	std::cout << "\033[0;34m\033[1m\n\t Destructors Messages \033[0m\n" << std::endl;

	delete i;
	delete j;
	delete k;
	delete l;
	delete m;
	delete n;

	return EXIT_SUCCESS;
}
