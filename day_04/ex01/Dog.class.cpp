/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:14:50 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 11:17:58 by mvidal-a         ###   ########.fr       */
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
	delete this->_brain;
	std::cout << "bye, dog" << std::endl;

	return ;
}

Dog&	Dog::operator=( const Dog& rhs )
{
	if ( this == &rhs )
		return ( *this );

	this->type = rhs.type;
	if ( this->_brain != NULL )
		delete this->_brain;
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);

	return ( *this );
}

void*	Dog::getBrain( void ) const
{
	return ( this->_brain );
}

void	Dog::makeSound() const
{
	std::cout << "ouaf" << std::endl;

	return ;
}
