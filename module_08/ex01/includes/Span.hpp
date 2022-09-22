/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:22:17 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/22 15:51:31 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <cstdlib>
# include <list>
# include <limits.h>

class Span
{

	public:

		Span(unsigned int n = 0);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void			addNumber(int n);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
		std::list<int>::const_iterator	fillSpan(std::list<int>::iterator begin, std::list<int>::iterator end);
		std::list<int>::const_iterator	randomFill(void);

		unsigned int				getCapacity(void) const;
		std::list<int> const&		getTab(void) const;
		std::list<int>::iterator	getBegin(void);
		std::list<int>::iterator	getEnd(void);

	private:

		unsigned int	_capacity;
		std::list<int>	_tab;

		class CapacityFullException : public std::exception {
			virtual const char* what() const throw();
		};

		class NotEnoughElementsException : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */
