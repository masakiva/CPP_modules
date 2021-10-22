/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:31:14 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 17:03:31 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_CLASS_HPP
# define __FORM_CLASS_HPP

# include "Bureaucrat.class.hpp"

class	Bureaucrat;

class	Form
{
	private:

		const std::string	_name;
		bool				_sign;
		const int			_signRequiredGrade;
		const int			_execRequiredGrade;

	public:

		Form( void );
		Form( const std::string name, const int signRequiredGrade,
				const int execRequiredGrade);
		Form( const Form& src );
		~Form( void );

		Form&		operator=( const Form& rhs );

		std::string		getName( void ) const;
		bool			getSign( void ) const;
		int				getSignRequiredGrade( void ) const;
		int				getExecRequiredGrade( void ) const;

		bool			beSigned( Bureaucrat& crat );
		bool			execute( const Bureaucrat& executor ) const;
		virtual void	executeAction( const Bureaucrat& executor ) const = 0;

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
		class	NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};



};

std::ostream &	operator<<( std::ostream & o, const Form & rhs );

#endif // __FORM_CLASS_HPP
