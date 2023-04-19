/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:19:49 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/20 12:47:59 by mvidal-a         ###   ########.fr       */
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
		this->_grade = grade;
		if ( grade < 1 )
			throw GradeTooHighException();
		else if ( grade > 150 )
			throw GradeTooLowException();
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << std::endl;
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

	this->_grade = rhs._grade;
	
	return ( *this );
}

std::string		Bureaucrat::getName( void ) const
{
	return ( this->_name );
}

int				Bureaucrat::getGrade( void ) const
{
	return ( this->_grade );
}

void			Bureaucrat::inc_grade( void )
{
	try
	{
		this->_grade--;
		if ( this->_grade < 1 )
			throw GradeTooHighException();
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << std::endl;
		this->_grade++;
	}

	return ;
}

void			Bureaucrat::dec_grade( void )
{
	try
	{
		this->_grade++;
		if ( this->_grade > 150 )
			throw GradeTooLowException();
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << std::endl;
		this->_grade--;
	}

	return ;
}

std::ostream &	operator<<( std::ostream & o, const Bureaucrat & rhs )
{
	o << rhs.getName() << " bureaucrat grade " << rhs.getGrade();

	return ( o );
}

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return ( "Error: grade too high" );
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return ( "Error: grade too low" );
}
