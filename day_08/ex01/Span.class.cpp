/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:07:59 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/11/01 19:41:51 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

Span::Span( void ) {}

Span::Span( unsigned int N ) : _N(N) { }

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
		throw Span::VectorFullException();
}

void	Span::addNumber( int range, int new_nb )
{
	for ( int i = 0; i < range; i++ )
	{
		this->addNumber( new_nb );
	}
}

unsigned int	Span::shortestSpan( void )
{
	unsigned int		shortest;
	std::vector<int>	sorted_nbs;

	shortest = this->longestSpan();
	sorted_nbs = this->_nbs;
	std::sort( sorted_nbs.begin(), sorted_nbs.end() );
	for ( std::vector<int>::iterator it = sorted_nbs.begin();
			it != sorted_nbs.end() - 1; it++ )
	{
		if ( static_cast<unsigned int>(*(it + 1) - *it) < shortest )
			shortest = static_cast<unsigned int>(*(it + 1) - *it);
	}

	return ( shortest );
}

unsigned int	Span::longestSpan( void )
{
	if ( this->_nbs.size() <= 1 )
		throw Span::NotEnoughNumbersException();
	return ( *std::max_element( _nbs.begin(), _nbs.end() )
			- *std::min_element( _nbs.begin(), _nbs.end() ) );
}

const char*		Span::VectorFullException::what() const throw()
{
	return ( "Error: no more room for new numbers" );
}

const char*		Span::NotEnoughNumbersException::what() const throw()
{
	return ( "Error: not enough numbers to calculate span" );
}
