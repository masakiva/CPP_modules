/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 00:14:05 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/14 16:44:33 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	FragTrap	tarpaud( "tarpaud" );

	tarpaud.attack( "canarticho" );
	tarpaud.highFivesGuys();
	tarpaud.takeDamage( 9 );
	tarpaud.beRepaired( 3 );
	return ( EXIT_SUCCESS );
}
