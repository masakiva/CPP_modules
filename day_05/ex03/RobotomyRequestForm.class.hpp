/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:52:59 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/23 16:40:38 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_CLASS_HPP__
# define __ROBOTOMYREQUESTFORM_CLASS_HPP__

# include "Form.class.hpp"
# include <cstdlib> // srand, rand

class	RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm& src );
		~RobotomyRequestForm( void );

		bool	execute( const Bureaucrat& executor ) const;

};

#endif // __ROBOTOMYREQUESTFORM_CLASS_HPP__
