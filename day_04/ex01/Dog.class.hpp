/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:15:16 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 19:26:48 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Dog : public Animal
{
	public:

		Dog( void );
		Dog( const Dog &src );
		~Dog( void );

		void	makeSound( void ) const;

	private:

		Brain	*_brain;

};

#endif // __DOG_HPP__
