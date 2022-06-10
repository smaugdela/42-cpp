/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:39:08 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/10 16:32:24 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
public:
	Weapon(std::string type = "some other type of club");
	~Weapon();

	std::string const	&getType(void) const;
	void				setType(std::string type);

private:
	std::string	_type;
};

#endif
