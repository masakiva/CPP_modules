/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:52:59 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 16:58:12 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_CLASS_HPP__
# define __ROBOTOMYREQUESTFORM_CLASS_HPP__

# include "Form.class.hpp"

class	RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm& src );
		~RobotomyRequestForm( void );

		void	executeAction( const Bureaucrat& executor ) const;

};

#endif // __ROBOTOMYREQUESTFORM_CLASS_HPP__
