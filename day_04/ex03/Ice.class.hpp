/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:04:13 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/19 14:14:22 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_CLASS_HPP__
# define __ICE_CLASS_HPP__

# include "AMateria.abstractclass.hpp"

class Ice : public AMateria
{
	public:

		Ice( void );
		Ice( const Ice & src );
		~Ice( void );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );

};

#endif // __ICE_CLASS_HPP__
