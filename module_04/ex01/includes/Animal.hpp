/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:51:56 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/19 13:33:59 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal(const std::string &arg = "generic_animal");
		Animal( Animal const & src );
		virtual ~Animal();

		virtual Animal &		operator=( Animal const & rhs );

		virtual void	makeSound( void ) const;

		const std::string	&getType( void ) const;

	protected:

		std::string	type;
};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */