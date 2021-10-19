/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:18:57 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/18 11:49:34 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure::Cure( void ) : AMateria( "cure" )
{
	return ;
}

Cure::Cure( const Cure & src )
{
	*this = src;

	return ;
}

Cure::~Cure( void )
{
	return ;
}

AMateria*	Cure::clone( void ) const
{
	return ( new Cure() );
}

void		Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
