/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:17:10 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/18 15:57:17 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		Dog &		operator=( Dog const & rhs );

		virtual void	makeSound( void ) const;
};

#endif /* ************************************************************* DOG_H */