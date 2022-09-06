/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:23:55 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/05 14:08:35 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(std::string const &name, int const grade_sign, int const grade_exec) : _name(name), _signed(false), _sign_grade(grade_sign), _execute_grade(grade_exec)
{
	if (grade_exec < 1 || grade_sign < 1)
		throw AForm::GradeTooHighException();
	else if (grade_exec > 150 || grade_sign > 150)
		throw AForm::GradeTooLowException();
	std::cout << *this << " created." << std::endl;
}

AForm::AForm( const AForm & src ) : _name(src._name), _signed(false), _sign_grade(src._sign_grade), _execute_grade(src._execute_grade)
{
	if (src.getExecuteGrade() < 1 || src.getSignGrade() < 1)
		throw AForm::GradeTooHighException();
	else if (src.getExecuteGrade() > 150 || src.getSignGrade() > 150)
		throw AForm::GradeTooLowException();
	std::cout << *this << " copied." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	std::cout << *this << " destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs.getSigned();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << "Form named " << i.getName() << " is";
	if (!i.getSigned())
		o << " not";
	o << " signed, has a required grade of " << i.getSignGrade() << " to be signed and " << i.getExecuteGrade() << " to be executed";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AForm::beSigned( Bureaucrat const &worker )
{
	if (worker.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	else
		this->enforce();
}

const char*	AForm::GradeTooHighException::what( void ) const throw()
{
	return "Form grade is too high.";
}

const char*	AForm::GradeTooLowException::what( void ) const throw()
{
	return "Form grade is too low.";
}

const char*	AForm::FormNotSignedException::what( void ) const throw()
{
	return "Form is not signed.";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &AForm::getName( void ) const
{
	return this->_name;
}

bool	AForm::getSigned( void ) const
{
	return this->_signed;
}

int		AForm::getSignGrade( void ) const
{
	return this->_sign_grade;
}

int		AForm::getExecuteGrade( void ) const
{
	return this->_execute_grade;
}

/* ************************************************************************** */
