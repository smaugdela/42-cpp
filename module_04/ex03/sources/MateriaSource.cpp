/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:50:44 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/29 18:19:42 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource() : _book()
{
	std::cout << "MateriaSource instance created." << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource & src ) : _book()
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
		if (this->_book[i])
			delete this->_book[i];
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
			if (rhs._book[i])
			{
				if (this->_book[i])
					delete this->_book[i];
				this->_book[i] = rhs._book[i]->clone();
			}
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i )
{
	o << "MateriaSource book = {" ;
	for (int j = 0; j < 4; j++)
		o << i.getItem(j)->getType() << ",";
	o << "}";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* m)
{
	int	i;

	for (i = 0; i < 4; i++)
	{
		if (this->_book[i] == NULL)
			break;
	}
	if (i < 4)
		this->_book[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == this->_book[i]->getType())
			return this->_book[i]->clone();
	}
	return 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

AMateria const *MateriaSource::getItem( int index ) const
{
	if (index >= 0 && index < 4)
		return (this->_book[index]);
	return (NULL);
}

/* ************************************************************************** */