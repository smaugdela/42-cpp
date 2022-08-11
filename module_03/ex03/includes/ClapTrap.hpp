/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:31:10 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/11 15:07:35 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap( const std::string& name = "default ClapTrap name" );
		ClapTrap( ClapTrap const & src );
		virtual ~ClapTrap( void );

		ClapTrap &		operator=( ClapTrap const & rhs );

		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		const std::string&	getName() const;
		int					getHitPoints() const;
		int					getEnergyPoints() const;
		int					getAttackDamage() const;

	protected:

		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
		
		static const int	_init_hit_points = 10;
		static const int	_init_energy_points = 10;
		static const int	_init_attack_damage = 0;
};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */