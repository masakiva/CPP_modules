/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:30:14 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 16:58:36 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :
	Form( "presidential", 25, 5 )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
	Form( "presidential", 25, 5 )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm& src ) :
	Form( "presidential", 25, 5 )
{
	*this = src;

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

void	PresidentialPardonForm::executeAction( const Bureaucrat& executor )
	const
{
	std::cout << "execute PresidentialPardonForm" << std::endl;
	return ;
}
