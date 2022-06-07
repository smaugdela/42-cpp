/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:09:14 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/07 18:01:41 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
public:
	/* Constructor and Destrcutor */
	Contact(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5);
	~Contact(void);

	/* Accessors */
	std::string	get_first_name(void) const;
	void		set_first_name(std::string str);
	std::string	get_last_name(void) const;
	void		set_last_name(std::string str);
	std::string	get_nickname(void) const;
	void		set_nickname(std::string str);
	std::string	get_phone_number(void) const;
	void		set_phone_number(std::string str);
	std::string	get_darkest_secret(void) const;
	void		set_darkest_secret(std::string str);

private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
