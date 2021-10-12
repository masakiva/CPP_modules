/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:35:12 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/12 17:09:56 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::_nbFracBits = 8;

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;

	return ;
}

Fixed::Fixed( Fixed const &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::Fixed( const int i )
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = i << Fixed::_nbFracBits;

	return ;
}

Fixed::Fixed( const float f )
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)roundf(f * (1 << Fixed::_nbFracBits));
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed &		Fixed::operator=( Fixed const &rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();

	return ( *this );
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

int			Fixed::getNbFracBits( void )
{
	return ( Fixed::_nbFracBits );
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
