/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:27:00 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/05 17:32:01 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm( std::string & target ) : AForm("Shrubbery Creation", 145, 137), _target(target)
{
	std::cout << *this << " created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm(src), _target(src._target)
{
	std::cout << *this << " copied." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << *this << " destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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

void	ShrubberyCreationForm::enforce( Bureaucrat const & executor ) const
{
	std::ofstream	ofs;

	ofs.open( _target + "_shrubbery" );
	if (ofs.is_open() == false)
		throw std::ios::failure( "Error opening output file. ");
	for (int i = 3; i; --i)
	{
		ofs << "\033[0;32m
    ccee88oo
  C8O8O8Q8PoOb o8oo
 dOB69QO8PdUOpugoO9bD
CgggbU8OU qOp qOdoUOdcb
    6OuU  /p u gcoUodpP
      \\\\//  /douUP
        \\\\////
         |||/\
         |||\\/
         |||||
   .....//||||\\....\033[0m" << std::endl;
	}
	ofs.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const & ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

/* ************************************************************************** */