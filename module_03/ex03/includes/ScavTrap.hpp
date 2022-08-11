/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:06:48 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/11 15:11:00 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	public:

		ScavTrap( const std::string& name = "default ScavTrap name" );
		ScavTrap( ScavTrap const & src );
		virtual ~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );

		virtual void	attack( const std::string& target );
		void	guardGate( void ) const;
	
	protected:

		static const int	_init_hit_points = 100;
		static const int	_init_energy_points = 50;
		static const int	_init_attack_damage = 20;
};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */