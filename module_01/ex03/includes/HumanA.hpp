/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:39:11 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/13 10:54:00 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string const name, Weapon &weapon);
	~HumanA();

	void	attack(void) const;

private:
	std::string const	_name;
	Weapon				&_weapon;
};
