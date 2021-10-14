/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:01:32 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/14 18:59:29 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << ".....and here comes a DiamondTrap!" << std::endl;
DOESNT WORK	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name)
{
	std::cout << ".....and here comes a DiamondTrap!" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) : ClapTrap(src)
{
	std::cout << "...oh, it's a DiamondTrap!" << std::endl;

	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "bye, DiamondTrap " << this->_name << "!" << std::endl;

	return ;
}

void	DiamondTrap::whoAmI( void )
{


	return ;
}
