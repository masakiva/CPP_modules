/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:59:46 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/30 17:29:46 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_CLASS_HPP__
# define __SPAN_CLASS_HPP__

#include <cstddef> // size_t

class	Span
{
	private:

		std::list<int>			_nb_lst;

	public:

		Span( void );
		Span( unsigned int N );
		Span( const Span& src );
		~Span( void );

		Span&	operator=( const Span& rhs );

		void	addNumber( int new_nb );

};

#endif // __SPAN_CLASS_HPP__
