/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:22:17 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/21 17:11:41 by smagdela         ###   ########.fr       */
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

		template<typename T>
		std::list<int>::iterator	fillSpan(typename T::iterator begin, typename T::iterator end) {
			if (std::distance(begin, end) > this->_capacity)
				throw CapacityFullException();
			for (typename T::iterator it = begin; it != end; ++it) {
				this->addNumber(*it);
			}
			return this->_tab.begin();
		}

		unsigned int	getCapacity(void) const;
		std::list<int>	&getTab(void) const;

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
