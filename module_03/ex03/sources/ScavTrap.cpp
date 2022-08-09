/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:06:42 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/08 16:12:36 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " created." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	std::cout << "ScavTrap " << this->_name << " created by copy." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_hit_points = rhs.getHitPoints();
		this->_energy_points = rhs.getEnergyPoints();
		this->_attack_damage = rhs.getAttackDamage();
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "ScavTrap " << i.getName()
	<< " has " << i.getHitPoints() << " HP left, "
	<< i.getEnergyPoints() << " Energy points left and deals "
	<< i.getAttackDamage() << " damage.";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->getName();
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
	{
		std::cout << " attacks " << target
		<< ", causing " << this->getAttackDamage()
		<< " points of damage !" << std::endl;
		--this->_energy_points;
	}
	else
	{
		std::cout << " cannot attack because he has no ";
		if (this->getEnergyPoints() <= 0)
			std::cout << "energy points left." << std::endl;
		else
			std::cout << "hit points left." << std::endl;
	}
}

void	ScavTrap::guardGate( void ) const
{
	std::cout << "ScavTrap " << this->getName()
	<< " has entered Gate keeper mode!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */