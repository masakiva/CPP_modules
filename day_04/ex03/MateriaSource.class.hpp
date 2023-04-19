/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:50:18 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/19 14:26:48 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_CLASS_HPP__
# define __MATERIASOURCE_CLASS_HPP__

# include "IMateriaSource.interface.hpp"

class MateriaSource : public IMateriaSource
{
	private:

		AMateria*		_materia[4];

	public:

		MateriaSource( void );
		MateriaSource( const MateriaSource & src );
		~MateriaSource( void );

		MateriaSource&	operator=( const MateriaSource & rhs );

		void		learnMateria( AMateria* m );
		AMateria*	createMateria( const std::string & type );

};

#endif // __MATERIASOURCE_CLASS_HPP__
