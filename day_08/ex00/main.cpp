/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:52:42 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/30 16:54:08 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.template.hpp"
#include <cstdlib> // EXIT_SUCCESS
#include <iostream>
#include <list>

int		main( void )
{
	std::list<int>	lst;

	lst.push_back( 10 );
	lst.push_back( 23 );
	lst.push_back( 3 );
	lst.push_back( 17 );
	lst.push_back( 20 );

	try
	{
		std::cout << *easyfind( lst, 3 ) << std::endl;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << *easyfind( lst, 1 ) << std::endl;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << *easyfind( lst, 23 ) << std::endl;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	return ( EXIT_SUCCESS );
}
