/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:17:10 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/19 13:35:05 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		virtual Dog &		operator=( Dog const & rhs );

		virtual void	makeSound( void ) const;

		Brain	const *getBrain( void ) const;

	private:

		Brain	*_brain;
};

#endif /* ************************************************************* DOG_H */