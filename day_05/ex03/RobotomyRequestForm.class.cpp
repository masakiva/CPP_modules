/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:27:09 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/23 16:54:38 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :
	Form( "robotomy", 72, 45, "target")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	Form( "robotomy", 72, 45, target )
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(
		const RobotomyRequestForm& src ) :
	Form( "robotomy", 72, 45, "target")
{
	*this = src;

	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

bool	RobotomyRequestForm::execute( const Bureaucrat& executor ) const
{
	if ( ! Form::executeChecks(executor) )
		return ( false );

	srand ( time( NULL ) );
	if ( rand() % 2 )
	{
		std::cout << "\aBZZZZZZzzzzzzzz" << std::endl;
		std::cout << this->getTarget() << " has been robotomized successfully"
			<< std::endl;
	}
	else
		std::cout << "it's a failure" << std::endl;

	return ( true );
}
