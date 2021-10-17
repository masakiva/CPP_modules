/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:16:52 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 19:06:38 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain( void )
{
	std::cout << "Brain created" << std::endl;

	return ;
}

Brain::Brain( const Brain &src )
{
	*this = src;
	std::cout << "Brain created" << std::endl;

	return ;
}

Brain::~Brain( void )
{
	std::cout << "Brain destroyed" << std::endl;

	return ;
}


Brain &	Brain::operator=( const Brain &rhs )
{
	if ( this == &rhs )
		return ( *this );

	return ( *this );
}
