/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:19:49 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/23 16:53:40 by mvidal-a         ###   ########.fr       */
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
			throw Bureaucrat::GradeTooHighException();
		else if ( grade > 150 )
			throw Bureaucrat::GradeTooLowException();
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat& src)
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

void			Bureaucrat::inc_grade( void )
{
	try
	{
		this->_grade--;
		if ( this->_grade < 1 )
			throw Bureaucrat::GradeTooHighException();
	}
	catch ( std::exception& e )
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
			throw Bureaucrat::GradeTooLowException();
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
		this->_grade--;
	}

	return ;
}

void			Bureaucrat::signForm( Form& form )
{
	if ( form.beSigned( *this ) == true )
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	else
		std::cout << this->_name << " cannot sign " << form.getName()
			<< " because his grade is too low" << std::endl;

	return ;
}

void			Bureaucrat::executeForm( const Form& form )
{
	if ( form.execute( *this ) == true )
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	else
		std::cout << this->_name << " cannot execute " << form.getName()
			<< " (see error details above this line)" << std::endl;

	return ;
}
