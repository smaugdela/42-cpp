/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:30:26 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/07 13:41:22 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Intern created." << std::endl;
}

Intern::Intern( const Intern & src )
{
	*this = src;
	std::cout << "Intern copied." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Intern destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char*	Intern::FormNotFoundException::what() const throw()
{
	return "Form not found.";
}

static	AForm*	makeShrubbery(std::string const & target)
{
	std::cout << "Intern creates ShrubberyCreationForm." << std::endl;
	return new ShrubberyCreationForm(target);
}

static	AForm*	makeRobotomy(std::string const & target)
{
	std::cout << "Intern creates RobotomyRequestForm." << std::endl;
	return new RobotomyRequestForm(target);
}

static	AForm*	makePresidential(std::string const & target)
{
	std::cout << "Intern creates PresidentialPardonForm." << std::endl;
	return new PresidentialPardonForm(target);
}

AForm*	Intern::makeForm(std::string const & formName, std::string const & target) const
{
	std::string	formNames[4] = {"shrubbery creation", "robotomy request", "presidential pardon", ""};
	AForm*	(*fun[4])(std::string const &) = {&makeShrubbery, &makeRobotomy, &makePresidential, NULL};
	int		i;

	for (i = 0; fun[i] != NULL && formNames[i] != formName; ++i);
	if (fun[i] == NULL)
		throw Intern::FormNotFoundException();
	return fun[i](target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */