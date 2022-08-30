/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:59:27 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/30 11:35:03 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	std::cout << "\033[0;34m\033[1m\n\t Constructors messages \033[0m\n" << std::endl;

	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp;
	AMateria const * dropedItems[10];

	std::cout << "\033[0;34m\033[1m\n\t Methods tests \033[0m\n" << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);
	dropedItems[0] = ((Character *)me)->getItem(0);
	me->unequip(0);
	me->equip(src->createMateria("cure"));
	me->use(0, *me);
	me->use(1, *bob);
	me->use(2, *bob);
	me->unequip(3);
	tmp = src->createMateria("lol");

	std::cout << "\033[0;34m\033[1m\n\t Destructors messages \033[0m\n" << std::endl;

	delete bob;
	delete me;
	delete src;
	delete dropedItems[0];

	return 0;
}
