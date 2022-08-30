/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:44:34 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/30 16:12:43 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << *this << " created." << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src.getName()), _grade(src.getGrade())
{
	if (src.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (src.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << *this << " copied." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << *this << " destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
		this->_grade = rhs.getGrade();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::promote( void )
{
	if (this->_grade < 2)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::promote( int x )
{
	if (this->_grade - x < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= x;
}

void	Bureaucrat::demote( void )
{
	if (this->_grade > 149)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::demote( int x )
{
	if (this->_grade + x > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += x;
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("Error: Grade too high!\n");
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("Error: Grade too low!\n");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Bureaucrat::getName() const
{
	return this->_name;
}

int	const Bureaucrat::getGrade() const
{
	return this->_grade;
}

/* ************************************************************************** */