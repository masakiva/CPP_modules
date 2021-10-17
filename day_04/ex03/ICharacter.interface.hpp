/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.interface.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:10:10 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/17 17:01:04 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_INTERFACE_HPP__
# define __ICHARACTER_INTERFACE_HPP__

class ICharacter
{
	public:

		virtual		~ICharacter( void ) {}

		virtual std::string const &		getName( void ) const = 0;
		virtual void					equip( AMateria* m ) = 0;
		virtual void					unequip( int idx ) = 0;
		virtual void					use( int idx, ICharacter& target ) = 0;

}

#endif // __ICHARACTER_INTERFACE_HPP__
