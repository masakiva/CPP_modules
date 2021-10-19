/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:18:57 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/18 11:50:05 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

Ice::Ice( void ) : AMateria( "ice" )
{
	return ;
}

Ice::Ice( const Ice & src )
{
	*this = src;

	return ;
}

Ice::~Ice( void )
{
	return ;
}

AMateria*	Ice::clone( void ) const
{
	return ( new Ice() );
}

void		Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
		<< std::endl;
	return ;
}
