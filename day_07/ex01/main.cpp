/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:53:06 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/30 11:53:00 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.template.hpp"
#include <iostream> // cout, time
#include <cstdlib> // EXIT_SUCCESS, srand, rand
#include <unistd.h> // sleep

void	f( double& nb )
{
	std::cout << "wait 1 sec" << std::endl;
	srand( time( NULL ) );
	nb = rand();
	sleep( 1 );
}

template < typename A >
void	print_f( A& nb )
{
	std::cout << nb << std::endl;
}

int		main( void )
{
	double		nb_array[4];

	iter<double>( nb_array, 4, f );
	iter<double>( nb_array, 4, print_f<double> );

	return ( EXIT_SUCCESS );
}
