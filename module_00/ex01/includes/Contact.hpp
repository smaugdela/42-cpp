/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:09:14 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/08 12:28:16 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
public:
	/* Constructor and Destructor */
	Contact(std::string const s1 = "",
			std::string const s2 = "",
			std::string const s3 = "",
			std::string const s4 = "",
			std::string const s5 = "");
	~Contact(void);

	/* Accessors */
	std::string	get_first_name(void) const;
	std::string	get_last_name(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phone_number(void) const;
	std::string	get_darkest_secret(void) const;
	void		set_first_name(std::string str);
	void		set_last_name(std::string str);
	void		set_nickname(std::string str);
	void		set_phone_number(std::string str);
	void		set_darkest_secret(std::string str);

private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
