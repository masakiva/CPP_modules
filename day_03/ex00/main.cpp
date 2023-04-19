/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 00:14:05 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/14 00:18:31 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	ClapTrap	rattata( "rattata" );

	rattata.attack( "canarticho" );
	rattata.takeDamage( 9 );
	rattata.beRepaired( 3 );
	return ( EXIT_SUCCESS );
}
