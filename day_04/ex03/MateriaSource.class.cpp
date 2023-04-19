/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:51:44 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/19 15:35:00 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource( void )
{
	for ( int idx = 0; idx < 4; idx++ )
	{
		this->_materia[idx] = NULL;
	}

	return ;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;

	return ;
}

MateriaSource::~MateriaSource( void )
{
	for ( int idx = 0; idx < 4; idx++ )
	{
		if ( this->_materia[idx] != NULL )
			delete this->_materia[idx];
	}

	return ;
}

MateriaSource&	MateriaSource::operator=( const MateriaSource & rhs )
{
	if ( this == &rhs )
		return ( *this );

	for ( int idx = 0; idx < 4; idx++ )
	{
		if ( this->_materia[idx] != NULL )
		{
			delete this->_materia[idx];
		}
		if ( rhs._materia[idx] != NULL )
		{
			this->_materia[idx] = rhs._materia[idx]->clone();
		}
		else
		{
			this->_materia[idx] = NULL;
		}
	}

	return ( *this );
}

void			MateriaSource::learnMateria( AMateria* m )
{
	int		idx;

	for ( idx = 0; idx < 4; idx++ )
	{
		if ( this->_materia[idx] == NULL )
			break ;
	}
	if ( idx < 4 )
	{
		this->_materia[idx] = m;
	}
	else
	{
		std::cout << "no more room for materia " << m << " of type \""
			<< m->getType() << "\" in MateriaSource" << std::endl;
		delete m;
	}

	return ;
}

AMateria*	MateriaSource::createMateria( const std::string & type )
{
	int		idx;

	for ( idx = 0; idx < 4; idx++ )
	{
		if ( this->_materia[idx]->getType() == type )
			return ( this->_materia[idx]->clone() );
	}
	return ( 0 );
}
