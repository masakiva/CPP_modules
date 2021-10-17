/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:19:26 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/17 16:39:10 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	Animal		*animals[4];
	int			i;

	Animal		wrongAnimal;

	for ( i = 0; i < 2; i++ )
	{
		animals[i] = new Dog();
	}
	for ( ; i < 4; i++ )
	{
		animals[i] = new Cat();
	}

	for ( i = 0; i < 4; i++ )
	{
		std::cout << "Brain pointer value for animals[" << i << "]: "
			<< animals[i]->getBrain() << std::endl;
	}

	for ( i = 0; i < 4; i++ )
	{
		delete animals[i];
	}

	return ( EXIT_SUCCESS );
}
