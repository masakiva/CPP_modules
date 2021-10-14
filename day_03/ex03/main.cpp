/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 00:14:05 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/14 18:00:48 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	DiamondTrap	dialga( "dialga" );

	dialga.attack( "canarticho" );
	dialga.takeDamage( 9 );
	dialga.guardGate();
	dialga.beRepaired( 3 );

	return ( EXIT_SUCCESS );
}
