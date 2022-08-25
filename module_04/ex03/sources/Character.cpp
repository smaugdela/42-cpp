/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:52:09 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/25 17:14:09 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string const &name) : _name(name)
{
	std::cout << "Character instance created." << std::endl;
}

Character::Character( const Character & src )
{
	*this = src;
	std::cout << "Character instance copied." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character instance destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
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

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	AMateria**	const inv = i.getInventory();

	o << "Character name = " << i.getName() << "\nInventory = {";
	for (int i = 0; i < 4; i++)
		o << inv[i]->getType() << ",";
	o << "}";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip( AMateria* m )
{
	AMateria**	inv = this->_inventory;
	int	i;

	for(i = 0; i < 4; i++)
	{
		if (&inv[i] == NULL)
			break;
	}
	if (i < 4 && &inv[i] == NULL)
		inv[i] = m;
}

void Character::unequip( int idx )
{
	AMateria**	inv = this->_inventory;

	if (idx >=0 && idx < 4)
		inv[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	AMateria**	inv = this->_inventory;

	if (idx >= 0 && idx < 4 && inv[idx])
		inv[idx]->AMateria::use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

AMateria**	Character::getInventory( void ) const
{
	return (this->_inventory);
}

std::string const & Character::getName( void ) const
{
	return (this->_name);
}

/* ************************************************************************** */