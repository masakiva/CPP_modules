/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:43:55 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/12 18:08:25 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	Fixed		a;
	//Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	//std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	//std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	//std::cout << Fixed::max(a, b) << std::endl;

	return ( EXIT_SUCCESS );
}
