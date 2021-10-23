/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:30:14 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/23 16:54:41 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :
	Form( "presidential", 25, 5, "target")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
	Form( "presidential", 25, 5, target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm& src ) :
	Form( "presidential", 25, 5, "target")
{
	*this = src;

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

bool	PresidentialPardonForm::execute( const Bureaucrat& executor ) const
{
	if ( ! Form::executeChecks(executor) )
		return ( false );

	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox"
		<< std::endl;

	return ( true );
}
