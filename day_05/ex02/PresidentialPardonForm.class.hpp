/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:52:59 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 16:58:19 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_CLASS_HPP__
# define __PRESIDENTIALPARDONFORM_CLASS_HPP__

# include "Form.class.hpp"

class	PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm& src );
		~PresidentialPardonForm( void );

		void	executeAction( const Bureaucrat& executor ) const;

};

#endif // __PRESIDENTIALPARDONFORM_CLASS_HPP__
