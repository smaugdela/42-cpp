/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:53:29 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/05 16:08:04 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) : AForm("Robotomy Request", 72, 45), _target(target)
{
	std::cout << *this << " created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	std::cout << *this << " copied." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << *this << " destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		*this AForm::= rhs;
		this->_target = rhs.getTarget();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::enforce( Bureaucrat const & executor ) const
{
	std::cout << "whiiiIIIIIIIIIIIIIIR..." << std::endl;
	std::srand(time(NULL));
	if (rand() % 2)
		std::cout << "Robotomy of " << this->_target << " is a success!" << std::endl;
	else
		std::cout << "Wooops! Robotomy of " << this->_target << " failed..." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const & RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

/* ************************************************************************** */