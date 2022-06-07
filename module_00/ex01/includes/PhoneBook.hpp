/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:58:01 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/07 18:07:38 by smagdela         ###   ########.fr       */
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

	/* Accessors */
	
	/* Other Member Functions */
	void	add_user(void);
	void	display_list(void) const;
	void	display_contact(std::size_t index) const;

private:
	Contact	contact_list[9];
};

#endif
