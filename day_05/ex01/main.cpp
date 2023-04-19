/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:38:08 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/20 13:30:54 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	Bureaucrat	crat("supercrat", 33);
	Form		form("superform", 32, 14);

	std::cout << crat << std::endl;
	crat.signForm( form );
	crat.inc_grade();
	std::cout << crat << std::endl;
	crat.signForm( form );


	return ( EXIT_SUCCESS );
}
