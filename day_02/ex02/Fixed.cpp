/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:35:12 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/13 17:11:13 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath> // roundf

const int	Fixed::_nbFracBits = 8;

Fixed::Fixed( void )
{
	this->_rawBits = 0;

	return ;
}

Fixed::Fixed( Fixed const &src )
{
	*this = src;

	return ;
}

Fixed::Fixed( const int i )
{
	this->_rawBits = i << Fixed::_nbFracBits;

	return ;
}

Fixed::Fixed( const float f )
{
	this->_rawBits = (int)roundf( f * (1 << Fixed::_nbFracBits ));
	return ;
}

Fixed::~Fixed( void )
{
	return ;
}

Fixed &		Fixed::operator=( Fixed const &rhs )
{
	this->_rawBits = rhs.getRawBits();

	return ( *this );
}

bool		Fixed::operator>( Fixed const &rhs ) const
{
	return ( this->_rawBits > rhs.getRawBits() );
}

bool		Fixed::operator<( Fixed const &rhs ) const
{
	return ( this->_rawBits < rhs.getRawBits() );
}

bool		Fixed::operator>=( Fixed const &rhs ) const
{
	return ( this->_rawBits >= rhs.getRawBits() );
}

bool		Fixed::operator<=( Fixed const &rhs ) const
{
	return ( this->_rawBits <= rhs.getRawBits() );
}

bool		Fixed::operator==( Fixed const &rhs ) const
{
	return ( this->_rawBits == rhs.getRawBits() );
}

bool		Fixed::operator!=( Fixed const &rhs ) const
{
	return ( this->_rawBits != rhs.getRawBits() );
}

Fixed		Fixed::operator+( Fixed const &rhs ) const
{
	Fixed	res;
	
	res.setRawBits( this->_rawBits + rhs.getRawBits() );

	return (res);
}

Fixed		Fixed::operator-( Fixed const &rhs ) const
{
	Fixed	res;
	
	res.setRawBits( this->_rawBits - rhs.getRawBits() );

	return (res);
}

Fixed		Fixed::operator*( Fixed const &rhs ) const
{
	Fixed	res;
	
	res.setRawBits( (this->_rawBits * rhs.getRawBits()) >> Fixed::_nbFracBits );

	return (res);
}

Fixed		Fixed::operator/( Fixed const &rhs ) const
{
	Fixed	res;
	
	res.setRawBits( (this->_rawBits << Fixed::_nbFracBits) / rhs.getRawBits() );

	return (res);
}

Fixed &		Fixed::operator++( void )
{
	this->_rawBits++;

	return ( *this );
}

Fixed &		Fixed::operator--( void )
{
	this->_rawBits--;

	return ( *this );
}

Fixed		Fixed::operator++( int )
{
	Fixed	before_inc( *this );
	this->_rawBits++;

	return ( before_inc );
}

Fixed		Fixed::operator--( int )
{
	Fixed	before_dec( *this );
	this->_rawBits--;

	return ( before_dec );
}

Fixed &		Fixed::min( Fixed &a, Fixed &b )
{
	if ( a <= b )
		return ( a );
	else
		return ( b );
}

Fixed &		Fixed::max( Fixed &a, Fixed &b )
{
	if ( a >= b )
		return ( a );
	else
		return ( b );
}

const Fixed &	Fixed::min( Fixed const &a, Fixed const &b )
{
	if ( a <= b )
		return ( a );
	else
		return ( b );
}

const Fixed &	Fixed::max( Fixed const &a, Fixed const &b )
{
	if ( a >= b )
		return ( a );
	else
		return ( b );
}

int			Fixed::getRawBits( void ) const
{
	return ( this->_rawBits );
}

void		Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw;

	return ;
}

float		Fixed::toFloat( void ) const
{
	return ( (float)this->_rawBits / (1 << Fixed::_nbFracBits) );
}

int			Fixed::toInt( void ) const
{
	return ( this->_rawBits >> Fixed::_nbFracBits );
}

std::ostream &	operator<<( std::ostream &o, Fixed const &rhs )
{
	o << rhs.toFloat();

	return ( o );
}
