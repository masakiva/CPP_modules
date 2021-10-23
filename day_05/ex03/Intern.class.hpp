/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:57:06 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/23 17:13:55 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_CLASS_HPP
# define __INTERN_CLASS_HPP

class	Intern
{
	public:

		Intern( void );
		Intern( const Intern& src );
		~Intern( void );

		Intern&		operator=( const Intern& rhs );

		Form*	makeForms( std::string formName, std::string formTarget );
};

#endif // __INTERN_CLASS_HPP
