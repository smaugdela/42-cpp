/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:22:17 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/27 17:07:44 by smagdela         ###   ########.fr       */
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

template<class InputIt>
static size_t   ft_distance(InputIt first, InputIt last)
{
	size_t	index;

	for (index = 0; first != last; ++first, ++index);
	return (index);
}

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
		void			randomFill(void);

		template<class InputIt>
		void			fillSpan(InputIt begin, InputIt end)
		{
			if (ft_distance(begin, end) > this->_N - this->_tab.size())
				throw Span::CapacityFullException();
			this->_tab.insert(this->getEnd(), begin, end);
		}

		unsigned int				getN(void) const;
		std::list<int> const&		getTab(void) const;
		std::list<int>::iterator	getBegin(void);
		std::list<int>::iterator	getEnd(void);

	private:

		unsigned int const	_N;
		std::list<int>		_tab;

		class CapacityFullException : public std::exception {
			virtual const char* what() const throw();
		};

		class NotEnoughElementsException : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */
