/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:02:27 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/29 19:33:06 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.template.hpp"
#include "min.template.hpp"
#include "max.template.hpp"
#include <iostream>

int		main( void )
{
	int		i = 1;
	int		j = 2;
	std::cout << "before swap: i = " << i << ", j = " << j << std::endl;
	swap<int>( i, j );
	std::cout << "after swap: i = " << i << ", j = " << j << std::endl;
	std::cout << "min of i and j = " << min<int>( i, j ) << std::endl;
	std::cout << "max of i and j = " << max<int>( i, j ) << std::endl
		<< std::endl;

	float	f = 1.2f;
	float	g = 1.1f;
	std::cout << "before swap: f = " << f << ", g = " << g << std::endl;
	swap<float>( f, g );
	std::cout << "after swap: f = " << f << ", g = " << g << std::endl;
	std::cout << "min of f and g = " << min<float>( f, g ) << std::endl;
	std::cout << "max of f and g = " << max<float>( f, g ) << std::endl
		<< std::endl;

	char	c = 'a';
	char	d = 'b';
	std::cout << "before swap: c = " << c << ", d = " << d << std::endl;
	swap<char>( c, d );
	std::cout << "after swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "min of c and d = " << min<char>( c, d ) << std::endl;
	std::cout << "max of c and d = " << max<char>( c, d ) << std::endl;
}
int
main( void ) {
int a = 2;
int b = 3;
::swap( a, b
std::cout <<
std::cout <<
std::cout <<
);
"a = " << a << ", b = " << b << std::endl;
"min( a, b ) = " << ::min( a, b ) << std::endl;
"max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c,
std::cout
std::cout
std::cout
d);
<< "c = " << c << ", d = " << d << std::endl;
<< "min( c, d ) = " << ::min( c, d ) << std::endl;
<< "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
