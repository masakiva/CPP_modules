/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:14:50 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/22 11:17:59 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "it's a cat!" << std::endl;

	return ;
}

Cat::Cat( const Cat &src ) : Animal(src)
{
	*this = src;
	std::cout << "it's a cat!" << std::endl;

	return ;
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "bye, cat" << std::endl;

	return ;
}

Cat&	Cat::operator=( const Cat& rhs )
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

void*	Cat::getBrain( void ) const
{
	return ( this->_brain );
}

void	Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;

	return ;
}
