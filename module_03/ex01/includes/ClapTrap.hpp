/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:31:10 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/06 15:55:29 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap( const std::string& name = "default name" );
		ClapTrap( ClapTrap const & src );
		~ClapTrap( void );

		ClapTrap &		operator=( ClapTrap const & rhs );

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		const std::string&	getName() const;
		int					getHitPoints() const;
		int					getEnergyPoints() const;
		int					getAttackDamage() const;

	private:

		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */