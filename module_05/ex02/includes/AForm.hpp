/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:23:55 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/05 14:51:39 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class AForm
{
	public:

		AForm( std::string const &name = "generic_Aform", int const grade_sign = 1, int const grade_exec = 1 );
		AForm( AForm const & src );
		virtual ~AForm();

		virtual AForm &		operator=( AForm const & rhs );

		void	beSigned( Bureaucrat const &worker );
		std::string const &getName( void ) const;
		bool	getSigned( void ) const;
		int		getSignGrade( void ) const;
		int		getExecuteGrade( void ) const;

		void	execute( Bureaucrat const & executor ) const;
		virtual void	enforce( Bureaucrat const & executor ) const = 0;

	private:
		std::string const _name;
		bool		_signed;
		int	const	_sign_grade;
		int	const	_execute_grade;

		class GradeTooHighException : public std::exception
		{
				virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
				virtual const char*	what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
				virtual const char*	what() const throw();
		};
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ FORM_H */