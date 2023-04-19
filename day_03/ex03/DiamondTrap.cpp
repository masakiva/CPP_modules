/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:01:32 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 15:45:57 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << ".....and here comes a DiamondTrap!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;

	return ;
}

DiamondTrap::DiamondTrap( std::string name, std::string claptrap_name ) :
	ClapTrap(claptrap_name + "_clap_name"),
	_name(name)
{
	std::cout << ".....and here comes a DiamondTrap!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;

	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) :
	ClapTrap(src)
{
	std::cout << "...oh, it's a DiamondTrap!" << std::endl;

	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "bye, DiamondTrap " << this->_name << "!" << std::endl;

	return ;
}

void	DiamondTrap::whoAmI( void ) const
{
	std::cout << "i am " << this->_name << " aka " << this->ClapTrap::_name
		<< std::endl;

	return ;
}
