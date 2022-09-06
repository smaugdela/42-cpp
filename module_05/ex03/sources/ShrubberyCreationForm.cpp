/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:27:00 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/06 19:23:31 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("Shrubbery Creation", 145, 137), _target(target)
{
}


ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm(src), _target(src._target)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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

void	ShrubberyCreationForm::enforce( void ) const
{
	std::ofstream	ofs;

	ofs.open( (this->_target + std::string("_shrubbery")).c_str() );
	if (ofs.is_open() == false)
		throw std::ios::failure( "Error opening output file. ");
	for (int i = 3; i; --i)
	{
		ofs << " \n";
		ofs << "   ccee88oo \n";
		ofs << " C8O8O8Q8PoOb o8oo \n";
		ofs << "dOB69QO8PdUOpugoO9bD \n";
		ofs << "CgggbU8OU qOp qOdoUOdcb \n";
		ofs << "  6OuU  /p u gcoUodpP \n";
		ofs << "   \\\\//  /douUP \n";
		ofs << "    \\\\//// \n";
		ofs << "      |||/\\  \n";
		ofs << "      |||\\/  \n";
		ofs << "      |||||  \n";
		ofs << ".....//||||\\.... \n" << std::endl;
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