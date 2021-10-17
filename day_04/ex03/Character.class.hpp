/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:02:22 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/17 17:17:29 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_CLASS_HPP__
# define __CHARACTER_CLASS_HPP__

# include "ICharacter.interface.hpp"

class Character : public ICharacter
{
	private:

		std::string		_name;
		AMateria*		_materia[4];

	public:

		Character( void );
		Character( const std::string & name );
		Character( const Character & src );
		~Character( void );

		Character&	operator=( const Character & rhs );

		std::string const &		getName( void ) const;
		void					equip( AMateria* m );
		void					unequip( int idx );
		void					use( int idx, ICharacter& target );

}

#endif // __CHARACTER_CLASS_HPP__
