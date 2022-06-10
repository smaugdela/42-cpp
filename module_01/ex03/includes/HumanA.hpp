/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:39:11 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/10 18:24:00 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon weapon);
	~HumanA();

private:
	std::string const	_name;
	Weapon				_weapon;
};
