/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:36:28 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/14 00:22:37 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name)
{
	std::cout << "ClapTrap " << this->_name << " shows up!" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	return ;
}

ClapTrap::ClapTrap( ClapTrap const &src )
{
	*this = src;
	std::cout << "ClapTrap " << this->_name << " shows up!" << std::endl;

	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << this->_name << " dies.." << std::endl;

	return ;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const &rhs )
{
	if (this == &rhs)
		return ( *this );

	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();

	return ( *this );
}

std::string	ClapTrap::getName( void ) const
{
	return ( this->_name );
}

int			ClapTrap::getHitPoints( void ) const
{
	return ( this->_hitPoints );
}

int			ClapTrap::getEnergyPoints( void ) const
{
	return ( this->_energyPoints );
}

int			ClapTrap::getAttackDamage( void ) const
{
	return ( this->_attackDamage );
}

void		ClapTrap::attack( std::string const &target )
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target
		<< " causing " << this->_attackDamage << " points of damage!" << std::endl;

	return ;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount
		<< " points of damage!" << std::endl;

	return ;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " recovers " << amount
	   << " points of health!" << std::endl;

	return ;
}
