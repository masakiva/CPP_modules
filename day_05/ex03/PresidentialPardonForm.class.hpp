/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:52:59 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/23 12:51:05 by mvidal-a         ###   ########.fr       */
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

		bool	execute( const Bureaucrat& executor ) const;

};

#endif // __PRESIDENTIALPARDONFORM_CLASS_HPP__
