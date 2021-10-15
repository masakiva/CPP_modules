/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:19:26 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 19:11:37 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	//const Animal	*j = new Dog();
	//const Animal	*i = new Cat();
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
		delete animals[i];
	}

	//delete j; //should not create a leak
	//delete i;
}
