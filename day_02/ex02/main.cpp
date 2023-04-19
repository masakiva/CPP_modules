/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:43:55 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/13 17:11:20 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;



	Fixed		dummy;
	Fixed		c;
	Fixed const	d( 5.05f );
	Fixed const	e( 10.175f );
	Fixed const	f( 10.175f );

	c = Fixed( 2 );

	std::cout << std::endl;
	std::cout << "dummy raw bits: " << dummy.getRawBits() << std::endl;
	std::cout << "c raw bits: " << c.getRawBits() << std::endl;
	std::cout << "d raw bits: " << d.getRawBits() << std::endl;
	std::cout << "e raw bits: " << e.getRawBits() << std::endl;
	std::cout << "f raw bits: " << f.getRawBits() << std::endl;
	std::cout << std::endl;

	std::cout << "dummy: " << dummy << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << std::endl;

	std::cout << "c == d :" << ( c == d ) << std::endl;
	std::cout << "d == e :" << ( d == e ) << std::endl;
	std::cout << "e == f :" << ( e == f ) << std::endl;
	std::cout << std::endl;

	std::cout << "c != d :" << ( c != d ) << std::endl;
	std::cout << "d != e :" << ( d != e ) << std::endl;
	std::cout << "e != f :" << ( e != f ) << std::endl;
	std::cout << std::endl;

	std::cout << "c < d :" << ( c < d ) << std::endl;
	std::cout << "d < e :" << ( d < e ) << std::endl;
	std::cout << "e < f :" << ( e < f ) << std::endl;
	std::cout << std::endl;

	std::cout << "c > d :" << ( c > d ) << std::endl;
	std::cout << "d > e :" << ( d > e ) << std::endl;
	std::cout << "e > f :" << ( e > f ) << std::endl;
	std::cout << std::endl;

	std::cout << "c >= d :" << ( c >= d ) << std::endl;
	std::cout << "d >= e :" << ( d >= e ) << std::endl;
	std::cout << "e >= f :" << ( e >= f ) << std::endl;
	std::cout << std::endl;

	std::cout << "c <= d :" << ( c <= d ) << std::endl;
	std::cout << "d <= e :" << ( d <= e ) << std::endl;
	std::cout << "e <= f :" << ( e <= f ) << std::endl;
	std::cout << std::endl;

	std::cout << "c + d :" << ( c + d ) << std::endl;
	std::cout << "d + e :" << ( d + e ) << std::endl;
	std::cout << "e + f :" << ( e + f ) << std::endl;
	std::cout << std::endl;

	std::cout << "c - d :" << ( c - d ) << std::endl;
	std::cout << "d - e :" << ( d - e ) << std::endl;
	std::cout << "e - f :" << ( e - f ) << std::endl;
	std::cout << std::endl;

	std::cout << "c * d :" << ( c * d ) << std::endl;
	std::cout << "d * e :" << ( d * e ) << std::endl;
	std::cout << "e * f :" << ( e * f ) << std::endl;
	std::cout << std::endl;

	std::cout << "c / d :" << ( c / d ) << std::endl;
	std::cout << "d / e :" << ( d / e ) << std::endl;
	std::cout << "e / f :" << ( e / f ) << std::endl;
	std::cout << std::endl;

	std::cout << "++dummy: " << ++dummy << std::endl;
	std::cout << "dummy++: " << dummy++ << std::endl;
	std::cout << "dummy: " << dummy << std::endl;
	std::cout << "--dummy: " << --dummy << std::endl;
	std::cout << "dummy--: " << dummy-- << std::endl;
	std::cout << "dummy: " << dummy << std::endl;
	std::cout << std::endl;


	std::cout << "max(c,d): " << Fixed::max( c, d ) << std::endl;
	std::cout << "min(c,d): " << Fixed::min( c, d ) << std::endl;
	std::cout << std::endl;

	return ( EXIT_SUCCESS );
}
