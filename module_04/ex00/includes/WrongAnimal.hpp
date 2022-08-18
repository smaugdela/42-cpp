/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:50:29 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/18 15:57:26 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal( const std::string &arg = "generic_wrong_animal" );
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );

		void	makeSound( void ) const;

		const std::string	&getType( void ) const;

	protected:

		std::string	type;
};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ***************************************************** WRONGANIMAL_H */