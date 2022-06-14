/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:39:03 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/14 16:17:28 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string const name);
	~HumanB();

	void	setWeapon(Weapon &weapon);
	void	attack(void) const;

private:
	std::string const	_name;
	Weapon				*_weapon;
};

#endif
