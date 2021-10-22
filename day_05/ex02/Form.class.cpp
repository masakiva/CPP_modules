/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:19:49 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 17:03:46 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

Form::Form( void ) :
	_signRequiredGrade(150),
	_execRequiredGrade(150)
{
	this->_sign = false;

	return ;
}

Form::Form( const std::string name, const int signRequiredGrade,
		const int execRequiredGrade) :
	_name(name),
	_signRequiredGrade(signRequiredGrade),
	_execRequiredGrade(execRequiredGrade)
{
	this->_sign = false;
	try
	{
		if ( signRequiredGrade < 1 || execRequiredGrade < 1 )
			throw GradeTooHighException();
		else if ( signRequiredGrade > 150 || execRequiredGrade > 150 )
			throw GradeTooLowException();
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

Form::Form( const Form& src) :
	_signRequiredGrade(src._signRequiredGrade),
	_execRequiredGrade(src._execRequiredGrade)
{
	*this = src;

	return ;
}

Form::~Form( void )
{
	return ;
}

Form&		Form::operator=( const Form & rhs )
{
	if ( this == &rhs )
		return ( *this );

	this->_sign = rhs._sign;
	
	return ( *this );
}

std::string		Form::getName( void ) const
{
	return ( this->_name );
}

bool			Form::getSign( void ) const
{
	return ( this->_sign );
}

int				Form::getSignRequiredGrade( void ) const
{
	return ( this->_signRequiredGrade );
}

int				Form::getExecRequiredGrade( void ) const
{
	return ( this->_execRequiredGrade );
}

std::ostream &	operator<<( std::ostream & o, const Form & rhs )
{
	o << rhs.getName() << " form, " << (rhs.getSign() ? "already" : "not yet")
		<< " signed. Required grade to sign it: " << rhs.getSignRequiredGrade()
		<< ", required grade to execute it: " << rhs.getExecRequiredGrade()
		<< ".";

	return ( o );
}

const char*		Form::GradeTooHighException::what() const throw()
{
	return ( "Error: grade too high" );
}

const char*		Form::GradeTooLowException::what() const throw()
{
	return ( "Error: grade too low" );
}

bool			Form::beSigned( Bureaucrat& crat )
{
	try
	{
		if ( crat.getGrade() <= this->_signRequiredGrade )
			this->_sign = true;
		else
			throw GradeTooLowException();
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
		return ( false );
	}

	return ( true );
}

const char*		Form::NotSignedException::what() const throw()
{
	return ( "Error: form not signed" );
}

bool			Form::execute( const Bureaucrat& executor ) const
{
	std::cout << "execute Form" << std::endl;
	try
	{
		if ( ! this->_sign )
			throw NotSignedException();
		if ( executor.getGrade() > this->_execRequiredGrade )
			throw GradeTooLowException();
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
		return ( false );
	}
	
	return ( true );
}
