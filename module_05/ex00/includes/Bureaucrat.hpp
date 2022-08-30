/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:44:34 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/30 16:40:09 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{

	public:

		Bureaucrat( std::string name = "default_bureaucrat", int grade = 150 );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		void	promote( void );
		void	promote( int x );
		void	demote( void );
		void	demote( int x );

		std::string const &getName() const;
		int			const getGrade() const;

	private:

		std::string const	_name;
		int					_grade;

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */