/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:06:26 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/08 12:33:53 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( int argc, char **argv )
{
	Karen	k;
	int		i;
	std::string	level[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	if ( argc != 2 )
	{
		std::cout << "Please give a log level as argument" << std::endl;
		return (EXIT_FAILURE);
	}
	for ( i = 0; i < 4; i++ )
	{
		if ( level[i] == argv[1] )
			break ;
	}
	switch ( i )
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			k.complain("DEBUG");
			std::cout << std::endl;
			i++;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			k.complain("INFO");
			std::cout << std::endl;
			i++;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			k.complain("WARNING");
			std::cout << std::endl;
			i++;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			k.complain("ERROR");
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
	}

	return (EXIT_SUCCESS);
}
