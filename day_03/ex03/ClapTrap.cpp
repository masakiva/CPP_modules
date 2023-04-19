/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:36:28 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/20 15:08:43 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	return ;
}

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
	if ( this == &rhs )
		return ( *this );

	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return ( *this );
}

void		ClapTrap::setName( std::string name )
{
	this->_name = name;

	return ;
}

void		ClapTrap::attack( std::string const &target ) const
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target
		<< " causing " << this->_attackDamage << " points of damage!"
		<< std::endl;

	return ;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount
		<< " points of damage!" << std::endl;
	this->_hitPoints -= amount;

	return ;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " recovers " << amount
	   << " points of health!" << std::endl;
	this->_energyPoints += amount;

	return ;
}
