/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:27:01 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/06 19:00:13 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:

		ShrubberyCreationForm( std::string target = "garden" );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm();

		virtual ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		virtual void	enforce( void ) const;

		std::string	const & getTarget( void ) const;

	private:

		std::string	_target;
};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */