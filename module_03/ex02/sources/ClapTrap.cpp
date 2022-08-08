/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:31:15 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/08 13:22:31 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src ) : _name(src._name), _hit_points(src._hit_points), _energy_points(src._energy_points), _attack_damage(src._attack_damage)
{
		std::cout << "ClapTrap " << this->_name << " created by copy." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
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

std::ostream &	operator<<( std::ostream & o, ClapTrap const & i )
{
	o << "ClapTrap " << i.getName()
	<< " has " << i.getHitPoints() << " HP left, "
	<< i.getEnergyPoints() << " Energy points left and deals "
	<< i.getAttackDamage() << " damage.";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->getName();
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName();
	if (this->getHitPoints() > 0)
	{
		this->_hit_points -= amount;
		if (this->getHitPoints() < 0)
			this->_hit_points = 0;
		std::cout << " takes " << amount << " damage, leaving him with "
		<< this->getHitPoints() << " HP." << std::endl;
	}
	else
		std::cout << " is already dead, stop bullying a corpse!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName();
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		--this->_energy_points;
		this->_hit_points += amount;
		std::cout << " gets " << amount << " HP by repairing. He now has "
		<< this->getHitPoints() << " HP and "
		<< this->getEnergyPoints() << " energy points left." << std::endl;
	}
	else
	{
		if (this->getEnergyPoints() <= 0)
			std::cout << " cannot repair because he has no energy points left." << std::endl;
		else
			std::cout << " cannot be revived by repairing him, he is dead." << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string&	ClapTrap::getName() const
{
	return (this->_name);
}

int					ClapTrap::getHitPoints() const
{
	return (this->_hit_points);
}

int					ClapTrap::getEnergyPoints() const
{
	return (this->_energy_points);
}

int					ClapTrap::getAttackDamage() const
{
	return (this->_attack_damage);
}

/* ************************************************************************** */