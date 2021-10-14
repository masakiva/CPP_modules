/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:22:17 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/14 18:21:55 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "...hmm, a FragTrap?" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "...hmm, a FragTrap?" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	return ;
}

FragTrap::FragTrap( FragTrap const &src ) : ClapTrap(src)
{
	std::cout << "...hmm, a FragTrap?" << std::endl;

	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "bye, FragTrap " << this->_name << "!" << std::endl;

	return ;
}

void	FragTrap::attack( std::string const &target ) const
{
	std::cout << "FragTrap " << this->_name << " attacks " << target
		<< " causing " << this->_attackDamage << " points of damage!"
		<< std::endl;

	return ;
}

void	FragTrap::highFivesGuys( void ) const
{
	std::cout << "FragTrap " << this->_name << " requests a high five!"
		<< std::endl;

	return ;
}
