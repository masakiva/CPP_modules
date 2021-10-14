/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:22:17 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/14 18:19:24 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "...oh, it's a ScavTrap!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "...oh, it's a ScavTrap!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	return ;
}

ScavTrap::ScavTrap( ScavTrap const &src ) : ClapTrap(src)
{
	std::cout << "...oh, it's a ScavTrap!" << std::endl;

	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "bye, ScavTrap " << this->_name << "!" << std::endl;

	return ;
}

void	ScavTrap::attack( std::string const &target ) const
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target
		<< " causing " << this->_attackDamage << " points of damage!"
		<< std::endl;

	return ;
}

void	ScavTrap::guardGate( void ) const
{
	std::cout << "ScavTrap " << this->_name << " have entered Gate keeper mode"
		<< std::endl;

	return ;
}
