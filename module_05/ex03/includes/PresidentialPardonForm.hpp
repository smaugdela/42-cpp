/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:54:27 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/06 19:00:22 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:

		PresidentialPardonForm( std::string target = "Wallace" );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm();

		virtual PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		virtual void	enforce( void ) const;

		std::string	const & getTarget( void ) const;

	private:

		std::string _target;
};
#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */