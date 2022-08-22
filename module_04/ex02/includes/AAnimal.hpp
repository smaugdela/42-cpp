/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:51:56 by smagdela          #+#    #+#             */
/*   Updated: 2022/08/22 17:04:25 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{

	public:

		AAnimal(const std::string &arg = "generic_animal");
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		virtual AAnimal &		operator=( AAnimal const & rhs );

		virtual void	makeSound( void ) const = 0;

		const std::string	&getType( void ) const;

	protected:

		std::string	type;
};

std::ostream &			operator<<( std::ostream & o, AAnimal const & i );

#endif /* ********************************************************** AANIMAL_H */