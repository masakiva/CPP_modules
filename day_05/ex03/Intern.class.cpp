/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:13:05 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/24 16:07:34 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( const Intern& src)
{
	*this = src;

	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern&		Intern::operator=( const Intern & rhs )
{
	if ( this == &rhs )
		return ( *this );

	return ( *this );
}

Form*		Intern::makeForm( std::string formName, std::string formTarget )
	const
{
	Form*			(Intern::*formCalls[3])( std::string target ) const
		= { &Intern::makeShrubberyCreationForm,
			&Intern::makeRobotomyRequestForm,
			&Intern::makePresidentialPardonForm };
	std::string		formNames[3]
		= { "shrubbery creation",
			"robotomy request",
			"presidential pardon" };
	Form*			result;

	try
	{
		int		i;
		for ( i = 0; i < 3; i++ )
		{
			if ( formNames[i] == formName )
			{
				result = (this->*formCalls[i])( formTarget );
				break ;
			}
		}
		if ( i == 3 )
			throw CouldntFindFormException();
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
		return ( NULL );
	}

	return ( result );
}

Form*		Intern::makeShrubberyCreationForm( std::string target ) const
{
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;

	return ( new ShrubberyCreationForm( target ) );
}

Form*		Intern::makeRobotomyRequestForm( std::string target ) const
{
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;

	return ( new RobotomyRequestForm( target ) );
}

Form*		Intern::makePresidentialPardonForm( std::string target ) const
{
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;

	return ( new PresidentialPardonForm( target ) );
}

const char*	Intern::CouldntFindFormException::what() const throw()
{
	return ( "Error: Couldn't find a form associated with this name" );
}
