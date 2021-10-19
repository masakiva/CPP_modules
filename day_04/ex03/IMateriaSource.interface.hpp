/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.interface.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:43:56 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/19 14:14:37 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE_INTERFACE_HPP__
# define __IMATERIASOURCE_INTERFACE_HPP__

# include "AMateria.abstractclass.hpp"

class IMateriaSource
{
	public:

		virtual		~IMateriaSource( void ) {}

		virtual void		learnMateria( AMateria* ) = 0;
		virtual AMateria*	createMateria( std::string const & type ) = 0;

};

#endif // __IMATERIASOURCE_INTERFACE_HPP__
