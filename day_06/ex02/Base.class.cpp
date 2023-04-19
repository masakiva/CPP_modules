/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:59:05 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/28 17:04:45 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"

Base::~Base( void )
{
	return ;
}


A::A( void )
{
	return ;
}

A::A( const A& src )
{
	*this = src;

	return ;
}

A::~A( void )
{
	return ;
}

A&		A::operator=( const A& rhs )
{
	if ( this == &rhs )
		return ( *this );

	return ( *this );
}


B::B( void )
{
	return ;
}

B::B( const B& src )
{
	*this = src;

	return ;
}

B::~B( void )
{
	return ;
}

B&		B::operator=( const B& rhs )
{
	if ( this == &rhs )
		return ( *this );

	return ( *this );
}


C::C( void )
{
	return ;
}

C::C( const C& src )
{
	*this = src;

	return ;
}

C::~C( void )
{
	return ;
}

C&		C::operator=( const C& rhs )
{
	if ( this == &rhs )
		return ( *this );

	return ( *this );
}
