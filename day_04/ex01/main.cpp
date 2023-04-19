/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:19:26 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 11:14:17 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	Animal		*animals[4];
	int			i;

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

	std::cout << std::endl;


	Cat			cats[2];

	cats[1] = cats[0];
	std::cout << "Brain pointer value for cats[0] = " << cats[0].getBrain()
		<< std::endl << "....................for cats[2] = "
		<< cats[1].getBrain() << std::endl;

	return ( EXIT_SUCCESS );
}
