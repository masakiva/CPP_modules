/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:05:47 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/30 17:07:11 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"
#include <iostream>
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	Span	sp = Span(5);

	sp.addNumber( 5 );
	sp.addNumber( 3 );
	sp.addNumber( 17 );
	sp.addNumber( 9 );
	sp.addNumber( 11 );

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return ( EXIT_SUCCESS );
}
