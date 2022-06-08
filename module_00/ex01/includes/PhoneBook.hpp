/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:58:01 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/08 13:49:29 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
public:

	/* Constructor and Destructor */
	PhoneBook();
	~PhoneBook();

	/* Member Functions */
	void	add_contact(void);
	void	display_list(void) const;

private:
	std::size_t	_nb_contact;
	Contact		_contact_list[8];
};

#endif
