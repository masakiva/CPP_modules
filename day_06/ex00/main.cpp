/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:24:43 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/26 18:26:11 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib> // EXIT_SUCCESS, EXIT_FAILURE, atof

void	display_char( double value )
{
	char	char_value;

	char_value = static_cast<char>(value);

	std::cout << "char: ";
	if ( isprint( char_value ) )
	{
		std::cout << char_value;
	}
	else
	{
		std::cout << "Non displayable";
	}
	std::cout << std::endl;
}

void	display_int( double value )
{
	int		int_value;

	int_value = static_cast<int>(value);

	std::cout << "int: " << int_value << std::endl;
}

void	display_float( double value )
{
	float		float_value;

	float_value = static_cast<float>(value);

	std::cout << "float: " << float_value << "f" << std::endl;
}

void	check_decimal( char* arg )
{
	https://github.com/Ourobore/CPP-Modules/tree/master/CPP-06/ex00
}

void	display_conversions( char* arg )
{
	double	double_value;

	double_value = atof(arg);
	display_char( double_value );
	display_int( double_value );
	display_float( double_value );
}

int		main( int argc, char** argv )
{
	if ( argc != 2 )
	{
		std::cout << "Please give a literal value as argument" << std::endl;
		return ( EXIT_FAILURE );
	}
	display_conversions( argv[1] );

	return ( EXIT_SUCCESS );
}
