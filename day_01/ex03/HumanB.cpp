/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:23:46 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 16:07:48 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string const name ) :
	_name( name )
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::setWeapon( Weapon *weapon )
{
	this->_weapon = weapon;
	return ;
}

void	HumanB::attack( void ) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType()
		<< std::endl;

	return ;
}
