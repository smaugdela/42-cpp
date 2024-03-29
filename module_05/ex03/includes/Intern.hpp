/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:30:26 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/07 12:32:01 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class Intern
{
	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		AForm*	makeForm(std::string const & formName, std::string const & target) const;
	
	private:

		class FormNotFoundException : public std::exception
		{
				virtual const char* what() const throw();
		};
};

#endif /* ********************************************************** INTERN_H */