/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:05:32 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/28 17:40:07 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"
#include <iostream> // cout, endl, time
#include <cstdlib> // EXIT_SUCCESS, rand, srand

Base*	generate( void )
{
	srand ( time( NULL ) );
	if ( rand() % 3 == 0 )
		return ( new A() );
	if ( rand() % 3 == 1 )
		return ( new B() );
	else
		return ( new C() );
}

void	identify( Base* p )
{
	if ( dynamic_cast<A*>(p) != NULL )
		std::cout << "A" << std::endl;
	else if ( dynamic_cast<B*>(p) != NULL )
		std::cout << "B" << std::endl;
	else if ( dynamic_cast<C*>(p) != NULL )
		std::cout << "C" << std::endl;
}

void	identify( Base& p )
{
	try
	{
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout << "A" << std::endl;
	}
	catch ( std::exception& e )
	{
		try
		{
			static_cast<void>(dynamic_cast<B&>(p));
			std::cout << "B" << std::endl;
		}
		catch ( std::exception& e )
		{
			try
			{
				static_cast<void>(dynamic_cast<C&>(p));
				std::cout << "C" << std::endl;
			}
			catch ( std::exception& e )
			{
			}
		}
	}
}

int		main( void )
{
	Base	*ptr;

	ptr = generate();
	std::cout << "identify by pointer: ";
	identify( ptr );
	std::cout << "identify by reference: ";
	identify( *ptr );

	return ( EXIT_SUCCESS );
}
