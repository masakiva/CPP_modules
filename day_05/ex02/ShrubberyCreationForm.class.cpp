/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:14:58 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 16:58:51 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
	Form( "shrubbery", 145, 137 )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) :
	Form( "shrubbery", 145, 137 )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(
		const ShrubberyCreationForm& src ) :
	Form( "shrubbery", 145, 137 )
{
	*this = src;

	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

void	ShrubberyCreationForm::executeAction( const Bureaucrat& executor ) const
{
	Form::execute(executor);
	std::cout << "execute ShrubberyCreationForm" << std::endl;
	return ;
}
