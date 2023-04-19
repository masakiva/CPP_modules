/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:04:13 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/19 14:14:25 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_CLASS_HPP__
# define __CURE_CLASS_HPP__

# include "AMateria.abstractclass.hpp"

class Cure : public AMateria
{
	public:

		Cure( void );
		Cure( const Cure & src );
		~Cure( void );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );

};

#endif // __CURE_CLASS_HPP__
