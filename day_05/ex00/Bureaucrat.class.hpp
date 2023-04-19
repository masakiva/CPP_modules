/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:12:13 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/20 11:17:59 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_CLASS_HPP__
# define __BUREAUCRAT_CLASS_HPP__

# include <iostream>

class	Bureaucrat
{
	private:

		const std::string	_name;
		int					_grade;

	public:

		Bureaucrat( void );
		Bureaucrat( const std::string name, const int grade );
		Bureaucrat( const Bureaucrat& src );
		~Bureaucrat( void );

		Bureaucrat&		operator=( const Bureaucrat& rhs );

		std::string		getName( void ) const;
		int				getGrade( void ) const;
		void			inc_grade( void );
		void			dec_grade( void );

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

};

std::ostream &	operator<<( std::ostream & o, const Bureaucrat & rhs );

#endif // __BUREAUCRAT_CLASS_HPP__
