/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:38:08 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/20 12:09:13 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	Bureaucrat	crat("supercrat", 33);
	std::cout << crat << std::endl;
	crat.dec_grade();
	std::cout << crat << std::endl;
	std::cout << std::endl;

	Bureaucrat	crat2("supercrit", 1);
	std::cout << crat2 << std::endl;
	crat2.inc_grade();
	std::cout << crat2 << std::endl;
	std::cout << std::endl;

	Bureaucrat	crat3("supercrut", 153);
	std::cout << crat3 << std::endl;
	std::cout << std::endl;

	return ( EXIT_SUCCESS );
}
