/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:07:59 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/31 23:32:42 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

Span::Span( void ) {}

Span::Span( unsigned int N )
{
	this->_N = N;
}

Span::Span( const Span& src ) { *this = src; }

Span::~Span( void ) { }

Span&	Span::operator=( const Span& rhs )
{
	if ( this == &rhs )
		return ( *this );

	this->_nbs = rhs._nbs;
	this->_N = rhs._N;

	return ( *this );
}

int&	Span::operator[]( unsigned int i )
{
	return ( this->_nbs[i] );
}

void	Span::addNumber( int new_nb )
{
	if ( _nbs.size() < this->_N )
		this->_nbs.push_back( new_nb );
	else
		throw VectorFullException();
}

unsigned int	Span::shortestSpan( void )
{
	return ( 1 );
}

unsigned int	Span::longestSpan( void )
{
	return ( *std::max_element( _nbs.begin(), _nbs.end() )
			- *std::min_element( _nbs.begin(), _nbs.end() ) );
}

const char*		Span::VectorFullException::what() const throw()
{
	return ( "Error: no more room for new numbers" );
}
