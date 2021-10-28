/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:24:43 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/28 12:10:52 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib> // EXIT_SUCCESS, EXIT_FAILURE, atof
#include <limits> // numeric_limits

#define CHAR_MIN_	std::numeric_limits<char>::min()
#define CHAR_MAX_	std::numeric_limits<char>::max()
#define INT_MIN_	std::numeric_limits<int>::min()
#define INT_MAX_	std::numeric_limits<int>::max()
#define FLOAT_MAX_	std::numeric_limits<float>::max()
#define FLOAT_MIN_	std::numeric_limits<float>::min()

void	display_char( double double_value )
{
	char	char_value;

	char_value = static_cast<char>(double_value);
	std::cout << "char: ";
	if ( double_value < CHAR_MIN_ || double_value > CHAR_MAX_ )
	{
		std::cout << "impossible";
	}
	else if ( isprint( char_value ) )
	{
		std::cout << char_value;
	}
	else
	{
		std::cout << "Non displayable";
	}
	std::cout << std::endl;
}

void	display_int( double double_value )
{
	std::cout << "int: ";
	if ( double_value < INT_MIN_ || double_value > INT_MAX_ )
	{
		std::cout << "impossible";
	}
	else
	{
		std::cout << static_cast<int>(double_value);
	}
	std::cout << std::endl;
}


void	display_float( double double_value, bool has_decimal )
{
	std::cout << "float: " << static_cast<float>(double_value);
	if ( ! has_decimal
			&& double_value < 1000000.0 && double_value > -1000000.0 )
		std::cout << ".0";
	ARGGHHHHH if ( double_value >= FLOAT_MIN_ && double_value <= FLOAT_MAX_ )
		std::cout << "f";
	std::cout << std::endl;
}

void	display_double( double double_value, bool has_decimal )
{
	std::cout << "double: " << double_value;
	if ( ! has_decimal
			&& double_value < 1000000.0 && double_value > -1000000.0 )
		std::cout << ".0";
	std::cout << std::endl;
}

bool	check_decimal( char* arg )
{
	if ( *arg == '-' || *arg == '+' )
		arg++;
	while ( *arg >= '0' && *arg <= '9' )
		arg++;
	if ( *arg == '.' )
	{
		arg++;
		while ( *arg == '0' )
			arg++;
		if ( *arg >= '1' && *arg <= '9' )
			return ( true );
	}
	return ( false );
}

void	display_conversions( char* arg )
{
	double	double_value;
	bool	has_decimal;

	double_value = atof(arg);

	display_char( double_value );
	display_int( double_value );

	has_decimal = check_decimal( arg );
	display_float( double_value, has_decimal );
	display_double( double_value, has_decimal );
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
