/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:13:05 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/23 17:48:14 by mvidal-a         ###   ########.fr       */
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

Form*		Intern::makeForms( std::string formName, std::string formTarget )
{
// tableau de pointeurs sur fonctions + tableau de strings, avec new
	std::cout << "Intern creates " << std::endl;
}
