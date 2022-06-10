/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:39:03 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/10 18:26:04 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB();
private:
	std::string const	_name;
	Weapon				_weapon;
};
