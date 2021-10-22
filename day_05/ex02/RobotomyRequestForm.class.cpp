/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:27:09 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 16:58:42 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :
	Form( "robotomy", 72, 45 )
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	Form( "robotomy", 72, 45 )
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(
		const RobotomyRequestForm& src ) :
	Form( "robotomy", 72, 45 )
{
	*this = src;

	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

void	RobotomyRequestForm::executeAction( const Bureaucrat& executor ) const
{
	std::cout << "execute RobotomyRequestForm" << std::endl;
	return ;
}
