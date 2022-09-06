/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:53:29 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/06 19:21:53 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("Robotomy Request", 72, 45), _target(target)
{
	std::srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm(src), _target(src._target)
{
	std::srand(time(NULL));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		*(AForm *)this = rhs;
		this->_target = rhs.getTarget();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::enforce( void ) const
{
	std::cout << "whiiiIIIIIIIIIIIIIIR..." << std::endl;
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