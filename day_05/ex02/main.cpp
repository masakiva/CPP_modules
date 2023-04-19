/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:38:08 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/23 16:47:02 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	Bureaucrat				crat("supercrat", 146);
	ShrubberyCreationForm	sform("dandelion");
	Bureaucrat				crat2("magnicrat", 32);
	RobotomyRequestForm		rform("droid");
	Bureaucrat				crat3("bosscrat", 3);
	PresidentialPardonForm	pform("candidate");

	std::cout << crat << std::endl;
	crat.signForm( sform );
	crat.inc_grade();
	std::cout << crat << std::endl;
	crat.signForm( sform );

	crat.executeForm( sform );
	crat.inc_grade();
	crat.inc_grade();
	crat.inc_grade();
	crat.inc_grade();
	crat.inc_grade();
	crat.inc_grade();
	crat.inc_grade();
	crat.inc_grade();
	std::cout << crat << std::endl;
	crat.executeForm( sform );
	std::cout << std::endl;

	crat2.signForm( rform );
	crat2.executeForm( rform );
	std::cout << std::endl;

	crat3.signForm ( pform );
	crat3.executeForm( pform );

	return ( EXIT_SUCCESS );
}
