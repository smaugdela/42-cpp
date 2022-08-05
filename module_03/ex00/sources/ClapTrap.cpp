/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:31:15 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/05 17:11:53 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(const std::string& name) : _hit_points(10), _energy_points(10), _attack_damage(0)
{
	if (name.empty())
		this->_name = "default name";
	else
		this->_name = name;
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src ) : _name(src._name)
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
	<< "has " << i.getHitPoints() << " HP left, "
	<< i.getEnergyPoints() << " Energy points left and deals "
	<< i.getAttackDamage() << " damage.";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	attack(const std::string& target)
{}

void	takeDamage(unsigned int amount)
{}

void	beRepaired(unsigned int amount)
{}

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