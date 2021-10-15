/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:00:14 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 18:03:46 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# include <iostream>

class WrongAnimal
{
	public:

		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &src );
		~WrongAnimal( void );

		WrongAnimal &	operator=( const WrongAnimal &rhs );

		std::string		getType( void ) const;
		void			makeSound( void ) const;

	protected:

		std::string type;

};

#endif // __WRONGANIMAL_HPP__
