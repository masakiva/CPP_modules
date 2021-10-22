/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:16:52 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/20 15:32:11 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal( void )
{
	std::cout << "Animal created" << std::endl;

	return ;
}

Animal::Animal( const Animal &src )
{
	*this = src;
	std::cout << "Animal created" << std::endl;

	return ;
}

Animal::~Animal( void )
{
	std::cout << "Animal destroyed" << std::endl;

	return ;
}


Animal &	Animal::operator=( const Animal &rhs )
{
	std::cout << "animal assign op called" << std::endl;
	if ( this == &rhs )
		return ( *this );

	this->type = rhs.type;

	return ( *this );
}

std::string	Animal::getType( void ) const
{
	return ( this->type );
}

void *		Animal::getBrain( void ) const
{
	return ( NULL );
}

void		Animal::makeSound( void ) const
{
	return ;
}
