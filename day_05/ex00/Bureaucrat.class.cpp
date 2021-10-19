/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:19:49 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/19 20:58:33 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat( void )
{
	return ;
}

Bureaucrat::Bureaucrat( const std::string name, const int grade ) :
	_name(name)
{
	try
	{
		if ( grade < 1 )
			throw std::exception();
		else if ( grade > 150 )
			throw std::exception();
	}
	catch ( std::exception & e )
	{
		e.what();
	}
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src)
{
	*this = src;

	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

Bureaucrat&		Bureaucrat::operator=( const Bureaucrat & rhs )
{
	if ( this == &rhs )
		return ( *this );

	this->_name = rhs._name;
	this->_grade = rhs._grade;
	
	return ( *this )
}

std::string		Bureaucrat::getName( void ) const
{
	return ( this->_name );
}

int				Bureaucrat::getGrade( void ) const
{
	return ( this->_grade );
}

void			inc_grade( void )
{
	try
	{
		this->_grade--;
		if ( this->_grade < 1 )
			throw std::exception();
	}
	catch ( std::exception & e )
	{
	}

	return ;
}

void			dec_grade( void )
{
	try
	{
		this->_grade++;
		if ( this->_grade > 150 )
			throw std::exception();
	}
	catch ( std::exception & e )
	{
		std
	}

	return ;
}

std::ostream &	operator<<( std::ostream & o, const Bureaucrat & rhs )
{
	o << rhs.getName() << " bureaucrat grade " << rhs.getGrade();

	return ( o );
}
