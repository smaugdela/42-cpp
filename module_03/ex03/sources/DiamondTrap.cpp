/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:30:40 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/11 14:13:02 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ) : ClapTrap(src._name + "_clap_name"), ScavTrap(src._name), FragTrap(src._name), _name(src._name)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, DiamondTrap const & i )
{
	o << "DiamondTrap " << i.getName()
	<< " has " << i.getHitPoints() << " HP left, "
	<< i.getEnergyPoints() << " Energy points left and deals "
	<< i.getAttackDamage() << " damage.";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void ) const
{
	std::cout << "I am DiamondTrap " << this->_name << " and my ClapTrap's name is " << this->ClapTrap::_name << "!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string&	DiamondTrap::getName( void ) const
{
	return (this->_name);
}

/* ************************************************************************** */