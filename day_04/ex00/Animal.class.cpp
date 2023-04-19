/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:16:52 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 16:59:21 by mvidal-a         ###   ########.fr       */
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
	if ( this == &rhs )
		return ( *this );

	this->type = rhs.type;

	return ( *this );
}

std::string	Animal::getType( void ) const
{
	return ( this->type );
}

void		Animal::makeSound( void ) const
{
	return ;
}
