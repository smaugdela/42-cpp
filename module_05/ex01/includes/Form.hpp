/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:23:55 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/31 16:35:16 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class Form
{
	public:

		Form( std::string const &name = "generic_form", int const grade_sign = 1, int const grade_exec = 1 );
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		void	beSigned( Bureaucrat const &worker );

		std::string const &getName( void ) const;
		bool	getSigned( void ) const;
		int		getSignGrade( void ) const;
		int		getExecuteGrade( void ) const;

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
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */