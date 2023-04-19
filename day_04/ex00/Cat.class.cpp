/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:14:50 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 16:30:32 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
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
	std::cout << "bye, cat" << std::endl;

	return ;
}

void	Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;

	return ;
}
