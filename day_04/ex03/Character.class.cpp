/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:04:02 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/19 15:38:17 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character( void )
{
	for ( int idx = 0; idx < 4; idx++ )
	{
		this->_materia[idx] = NULL;
	}

	return ;
}

Character::Character( const std::string & name ) : _name(name)
{
	return ;
}

Character::Character( const Character & src )
{
	*this = src;

	return ;
}

Character::~Character( void )
{
	for ( int idx = 0; idx < 4; idx++ )
	{
		if ( this->_materia[idx] != NULL )
		{
			delete this->_materia[idx];
		}
	}

	return ;
}

Character&			Character::operator=( const Character & rhs )
{
	if ( this == &rhs )
		return ( *this );

	this->_name = rhs._name;
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

std::string const &	Character::getName( void ) const
{
	return ( this->_name );
}

void					Character::equip( AMateria* m )
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
			<< m->getType() << "\" in character \"" << this->_name << "\""
			<< std::endl;
		delete m;
	}

	return ;
}

void					Character::unequip( int idx )
{
	if ( idx >= 0 && idx < 4 && this->_materia[idx] != NULL )
	{
		this->_materia[idx] = NULL;
	}

	return ;
}

void					Character::use( int idx, ICharacter& target )
{
	if ( idx >= 0 && idx < 4 && this->_materia[idx] != NULL )
	{
		this->_materia[idx]->use( target );
	}

	return ;
}
