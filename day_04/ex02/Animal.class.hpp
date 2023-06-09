/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:21:49 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/17 15:44:06 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>

class Animal
{
	public:

		Animal( void );
		Animal( const Animal &src );
		virtual ~Animal( void );

		Animal &	operator=( const Animal &rhs );

		std::string		getType( void ) const;
		virtual void *	getBrain( void ) const = 0;
		virtual void	makeSound( void ) const;

	protected:

		std::string type;

};

#endif // __ANIMAL_HPP__
