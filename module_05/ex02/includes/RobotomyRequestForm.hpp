/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:53:29 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/05 15:56:28 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:

		RobotomyRequestForm( std::string const & target = "Marvin" );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();

		virtual RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		virtual void	enforce( Bureaucrat const & executor ) const;

		std::string	const & getTarget( void ) const;

	private:

		std::string	& _target;
};
#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */