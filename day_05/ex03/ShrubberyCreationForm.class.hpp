/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:52:59 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/23 15:37:42 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_CLASS_HPP__
# define __SHRUBBERYCREATIONFORM_CLASS_HPP__

# include "Form.class.hpp"
# include <fstream> // ofstream

class	ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm& src );
		~ShrubberyCreationForm( void );

		bool	execute( const Bureaucrat& executor ) const;

};

#endif // __SHRUBBERYCREATIONFORM_CLASS_HPP__
