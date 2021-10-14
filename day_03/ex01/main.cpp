/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 00:14:05 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/14 16:34:49 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	ScavTrap	ptera( "ptera" );

	ptera.attack( "canarticho" );
	ptera.takeDamage( 9 );
	ptera.guardGate();
	ptera.beRepaired( 3 );
	return ( EXIT_SUCCESS );
}
