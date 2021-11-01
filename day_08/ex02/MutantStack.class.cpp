/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:45:40 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/11/01 20:47:29 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.class.hpp"

MutantStack::MutantStack( void ) { }

MutantStack::MutantStack( const MutantStack& src ) { *this = src; }

MutantStack::~MutantStack( void ) { }

MutantStack&	operator=( const MutantStack& rhs )
{
	if ( this == &rhs )
		return ( *this );

	return ( *this );
}
