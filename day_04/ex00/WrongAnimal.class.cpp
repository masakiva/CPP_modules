/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:03:38 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 18:01:08 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal( void )
{
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal &src )
{
	*this = src;

	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	return ;
}


WrongAnimal &	WrongAnimal::operator=( const WrongAnimal &rhs )
{
	if ( this == &rhs )
		return ( *this );

	this->type = rhs.type;

	return ( *this );
}

std::string	WrongAnimal::getType( void ) const
{
	return ( this->type );
}

void		WrongAnimal::makeSound( void ) const
{
	std::cout << "wild animal sound" << std::endl;

	return ;
}
