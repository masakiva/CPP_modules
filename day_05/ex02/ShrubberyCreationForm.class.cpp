/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:14:58 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/23 15:52:11 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
	Form( "shrubbery", 145, 137, "target")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) :
	Form( "shrubbery", 145, 137, target )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(
		const ShrubberyCreationForm& src ) :
	Form( "shrubbery", 145, 137, "target")
{
	*this = src;

	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

bool	ShrubberyCreationForm::execute( const Bureaucrat& executor ) const
{
	if ( ! Form::executeChecks(executor) )
		return ( false );

	std::ofstream	ofs;

	ofs.open( (this->getTarget() + "_shrubbery").c_str() );
	ofs << "\n\
             # #### ####\n\
           ### \\/#|### |/####\n\
          ##\\/#/ \\||/##/_/##/_#\n\
        ###  \\/###|/ \\/ # ###\n\
      ##_\\_#\\_\\## | #/###_/_####\n\
     ## #### # \\ #| /  #### ##/##\n\
      __#_--###`  |{,###---###-~\n\
                \\ }{\n\
                 }}{\n\
                 }}{\n\
            ejm  {{}\n\
           , -=-~{ .-^- _\n\
                 `}\n\
                  {\n\
										   ";
	ofs.close();
	std::cout << "ascii tree drawn" << std::endl;

	return ( true );
}
