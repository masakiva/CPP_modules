/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:24:43 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/28 15:20:13 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib> // EXIT_SUCCESS, EXIT_FAILURE, atof
#include <climits> // CHAR_MIN, CHAR_MAX, INT_MIN, INT_MAX
#include <cstring> // strcmp

void	display_char( double double_value, bool is_nan )
{
	char	char_value;

	std::cout << "char: ";
	if ( is_nan == true || double_value < CHAR_MIN || double_value > CHAR_MAX )
	{
		std::cout << "impossible";
	}
	else
	{
		char_value = static_cast<char>(double_value);
		if ( isprint( char_value ) )
		{
			std::cout << char_value;
		}
		else
		{
			std::cout << "Non displayable";
		}
	}
	std::cout << std::endl;
}

void	display_int( double double_value, bool is_nan )
{
	std::cout << "int: ";
	if ( is_nan == true || double_value < INT_MIN || double_value > INT_MAX )
	{
		std::cout << "impossible";
	}
	else
	{
		std::cout << static_cast<int>(double_value);
	}
	std::cout << std::endl;
}


void	display_float( double double_value, bool has_decimal, bool is_nan )
{
	std::cout << "float: ";
	if ( is_nan == true )
	{
		std::cout << "nan";
	}
	else
	{
		std::cout << static_cast<float>(double_value);
		if ( ! has_decimal
				&& double_value < 1000000.0 && double_value > -1000000.0 )
		{
			std::cout << ".0";
		}
	}
	std::cout << "f";
	std::cout << std::endl;
}

void	display_double( double double_value, bool has_decimal, bool is_nan )
{
	std::cout << "double: ";
	if ( is_nan == true )
	{
		std::cout << "nan";
	}
	else
	{
		std::cout << double_value;
		if ( ! has_decimal
				&& double_value < 1000000.0 && double_value > -1000000.0 )
		{
			std::cout << ".0";
		}
	}
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
	bool	is_nan;

	if ( strncmp( arg, "nan", 3 ) == 0 )
		is_nan = true;
	else
		is_nan = false;
	double_value = atof( arg );

	display_char( double_value, is_nan );
	display_int( double_value, is_nan );

	has_decimal = check_decimal( arg );
	display_float( double_value, has_decimal, is_nan );
	display_double( double_value, has_decimal, is_nan );
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
