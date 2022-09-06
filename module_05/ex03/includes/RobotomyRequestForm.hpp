/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:53:29 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/06 19:00:09 by smagdela         ###   ########.fr       */
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

		RobotomyRequestForm( std::string target = "Marvin" );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();

		virtual RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		virtual void	enforce( void ) const;

		std::string	const & getTarget( void ) const;

	private:

		std::string _target;
};
#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */