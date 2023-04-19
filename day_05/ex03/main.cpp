/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:38:08 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/24 16:05:33 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Intern.class.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	Intern		sally;
	Form*		robotomy;
	Form*		notaform;

	robotomy = sally.makeForm("robotomy request", "Bender");
	notaform = sally.makeForm("unknown form", "yoo");

	return ( EXIT_SUCCESS );
}
