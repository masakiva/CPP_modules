/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.abstractclass.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:47:01 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/19 15:37:29 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_ABSTRACTCLASS_HPP__
# define __AMATERIA_ABSTRACTCLASS_HPP__

# include "ICharacter.interface.hpp"

class ICharacter;

class AMateria
{
	private:

		std::string		_type;

	public:

		AMateria( void );
		AMateria( const std::string & type );
		AMateria( const AMateria & src );
		virtual	~AMateria( void );

		AMateria&	operator=( const AMateria & rhs );

		std::string const &	getType( void ) const; //Returns the materia type

		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target ) = 0;

};

#endif // __AMATERIA_ABSTRACTCLASS_HPP__
