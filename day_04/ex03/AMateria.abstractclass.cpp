/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.abstractclass.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:18:57 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/19 15:37:34 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.abstractclass.hpp"

AMateria::AMateria( void )
{
	return ;
}

AMateria::AMateria( const std::string & type ) : _type(type)
{
	return ;
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;

	return ;
}

AMateria::~AMateria( void )
{
	return ;
}

AMateria&			AMateria::operator=( const AMateria & rhs )
{
	if ( this == &rhs )
		return ( *this );

	return ( *this );
}

std::string const &	AMateria::getType( void ) const
{
	return ( this->_type );
}
