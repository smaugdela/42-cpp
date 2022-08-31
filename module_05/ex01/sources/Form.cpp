/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:23:55 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/31 16:53:52 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string const &name, int const grade_sign, int const grade_exec) : _name(name), _signed(false), _sign_grade(grade_sign), _execute_grade(grade_exec)
{
	if (grade_exec < 1 || grade_sign < 1)
		throw Form::GradeTooHighException();
	else if (grade_exec > 150 || grade_sign > 150)
		throw Form::GradeTooLowException();
	std::cout << *this << " created." << std::endl;
}

Form::Form( const Form & src ) : _name(src._name), _signed(false), _sign_grade(src._sign_grade), _execute_grade(src._execute_grade)
{
	if (src.getExecuteGrade() < 1 || src.getSignGrade() < 1)
		throw Form::GradeTooHighException();
	else if (src.getExecuteGrade() > 150 || src.getSignGrade() > 150)
		throw Form::GradeTooLowException();
	std::cout << *this << " copied." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << *this << " destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs.getSigned();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
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

void	Form::beSigned( Bureaucrat const &worker )
{
	if (worker.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char*	Form::GradeTooHighException::what( void ) const throw()
{
	return "Form grade is too high.";
}

const char*	Form::GradeTooLowException::what( void ) const throw()
{
	return "Form grade is too low.";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Form::getName( void ) const
{
	return this->_name;
}

bool	Form::getSigned( void ) const
{
	return this->_signed;
}

int		Form::getSignGrade( void ) const
{
	return this->_sign_grade;
}

int		Form::getExecuteGrade( void ) const
{
	return this->_execute_grade;
}

/* ************************************************************************** */
