/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:38:08 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 16:59:29 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	Bureaucrat	crat("supercrat", 146);
	ShrubberyCreationForm	sform("dandelion");

	std::cout << crat << std::endl;
	crat.signForm( sform );
	crat.inc_grade();
	std::cout << crat << std::endl;
	crat.signForm( sform );

	sform.execute( crat );


	return ( EXIT_SUCCESS );
}
