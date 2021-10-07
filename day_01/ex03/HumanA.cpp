/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:23:46 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 16:03:49 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string const name, Weapon const &weapon ) :
	_name( name ),
	_weapon( weapon )
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType()
		<< std::endl;

	return ;
}
