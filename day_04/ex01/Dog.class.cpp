/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:14:50 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 19:26:43 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "it's a dog!" << std::endl;

	return ;
}

Dog::Dog( const Dog &src ) : Animal(src)
{
	*this = src;
	std::cout << "it's a dog!" << std::endl;

	return ;
}

Dog::~Dog( void )
{
	delete _brain;
	std::cout << "bye, dog" << std::endl;

	return ;
}

void	Dog::makeSound() const
{
	std::cout << "ouaf" << std::endl;

	return ;
}
