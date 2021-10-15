/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:19:26 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 18:44:53 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongCat.class.hpp"
#include <cstdlib> // EXIT_SUCCESS

int		main( void )
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal	*beta = new WrongAnimal();
	const WrongAnimal	*k = new WrongCat();

	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	beta->makeSound();

	return ( EXIT_SUCCESS );
}
