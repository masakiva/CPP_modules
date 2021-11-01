/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:05:47 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/11/01 19:52:22 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"
#include <iostream>
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	Span	sp = Span(100);

	try
	{
		sp.addNumber( 5 );
		sp.addNumber( 3 );
		sp.addNumber( 17 );
		sp.addNumber( 9 );
		sp.addNumber( 11 );
		sp.addNumber( 11 );
		sp.addNumber( 40, 19 );
		std::vector<int>	vec( 12, 1421 );
		sp.addNumber<std::vector<int>::iterator>( vec.begin(), vec.end() );
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}

	Span	sp10000 = Span(10000);

	try
	{
		for ( int i = 0; i < 10000; i++ )
		{
			srand( clock() );
			sp10000.addNumber( rand() );
		}
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "shortest span: " << sp10000.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp10000.longestSpan() << std::endl;
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}

	return ( EXIT_SUCCESS );
}
