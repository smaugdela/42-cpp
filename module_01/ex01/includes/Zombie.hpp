/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:52:56 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/10 14:58:33 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
public:

	Zombie(std::string name = "Homer");
	~Zombie(void);

	void	set_name(std::string name);

	void	announce(void) const;

private:

	std::string	_name;
};

#endif
