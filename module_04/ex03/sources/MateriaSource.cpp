/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:50:44 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/25 15:03:26 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource instance created." << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
	std::cout << "MateriaSource instance copied." << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "MateriaSource instance destroyed." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
		{
			if (rhs._inventory[i])
			{
				if (this->_inventory[i])
					delete this->_inventory[i];
				this->_inventory[i] = rhs._inventory[i]->clone();
			}
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i )
{
	o << "MateriaSource book = {" ;
	for (int i = 0; i < 4; i++)
		o << inv[i]->getType() << ",";
	o << "}";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria*)
{
	for (int i = 0; i < 4; i++)
		
}

AMateria* MateriaSource::createMateria(std::string const & type);

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */