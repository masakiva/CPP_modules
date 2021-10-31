/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:59:46 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/31 23:23:30 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_CLASS_HPP__
# define __SPAN_CLASS_HPP__

#include <vector>
#include <algorithm>

class	Span
{
	private:

		std::vector<int>	_nbs;
		unsigned int		_N;

		Span( void );

	public:

		Span( unsigned int N );
		Span( const Span& src );
		~Span( void );

		Span&	operator=( const Span& rhs );
		int&	operator[]( unsigned int i );

		void			addNumber( int new_nb );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

		class	VectorFullException
		{
			virtual const char* what() const throw();
		};

};

#endif // __SPAN_CLASS_HPP__
