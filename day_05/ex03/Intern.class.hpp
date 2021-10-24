/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:57:06 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/24 16:07:45 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_CLASS_HPP
# define __INTERN_CLASS_HPP

# include "ShrubberyCreationForm.class.hpp"
# include "RobotomyRequestForm.class.hpp"
# include "PresidentialPardonForm.class.hpp"

class	Intern
{
	private:

		Form*	makeShrubberyCreationForm( std::string target ) const;
		Form*	makeRobotomyRequestForm( std::string target ) const;
		Form*	makePresidentialPardonForm( std::string target ) const;

	public:

		Intern( void );
		Intern( const Intern& src );
		~Intern( void );

		Intern&		operator=( const Intern& rhs );

		Form*	makeForm( std::string formName, std::string formTarget ) const;

		class	CouldntFindFormException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

};

#endif // __INTERN_CLASS_HPP
