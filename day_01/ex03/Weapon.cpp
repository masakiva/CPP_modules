/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:46:05 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 15:46:35 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
	return ;
}

Weapon::Weapon( std::string type ) :
	_type(type)
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

const std::string&	Weapon::getType( void ) const
{
	return ( this->_type );
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
	return ;
}
