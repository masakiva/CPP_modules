/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:07:59 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/30 17:29:57 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

Span::Span( void )
{
}

Span::Span( unsigned int N )
{
}

Span::Span( const Span& src )
{
	*this = src;
}

Span::~Span( void )
{
}

Span&	Span::operator=( const Span& rhs )
{
	if ( this == &rhs )
		return ( *this );


	return ( *this );
}

void	Span::addNumber( int new_nb )
{
}
