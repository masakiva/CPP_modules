/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:50:18 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/17 17:51:04 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_CLASS_HPP__
# define __MATERIASOURCE_CLASS_HPP__

class MateriaSource
{
	public:

		virtual		~MateriaSource( void ) {}

		virtual void		learn Materia( AMateria* ) = 0;
		virtual AMateria*	createMateria( std::string const & type ) = 0;

}

#endif // __MATERIASOURCE_CLASS_HPP__
