/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.templatedef.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:21:31 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/30 14:56:13 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.template.hpp"

template < typename T >
Array<T>::Array( void )
{
	this->_arr = new T[0];
	this->_arr_size = 0;

	return ;
}

template < typename T >
Array<T>::Array( unsigned int n )
{
	this->_arr = new T[n];
	this->_arr_size = n;
	bzero( this->_arr, sizeof( T ) * n );

	return ;
}

template < typename T >
Array<T>::Array( const Array<T>& src )
{
	*this = src;

	return ;
}

template < typename T >
Array<T>::~Array( void )
{
	delete [] this->_arr;

	return ;
}

template < typename T >
const Array<T>&	Array<T>::operator=( const Array<T>& rhs )
{
	if ( this == &rhs )
		return ( *this );

	this->_arr = new T[rhs._arr_size];
	for ( std::size_t i = 0; i < rhs._arr_size; i++ )
	{
		this->_arr[i] = rhs._arr[i];
	}
	this->_arr_size = rhs._arr_size;

	return ( *this );
}

template < typename T >
T&				Array<T>::operator[]( std::size_t i ) const
{
	if ( i < 0 || i >= this->_arr_size )
		throw OutOfBoundsException();
	return ( this->_arr[i] );
}

template < typename T >
std::size_t		Array<T>::size( void )
{
	return ( this->_arr_size );
}

template < typename T >
const char*		Array<T>::OutOfBoundsException::what() const throw()
{
	return ( "Index out of bounds of the array" );
}
