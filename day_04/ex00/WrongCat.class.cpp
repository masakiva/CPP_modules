/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:02:10 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 18:29:58 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";

	return ;
}

WrongCat::WrongCat( const WrongCat &src ) : WrongAnimal(src)
{
	*this = src;

	return ;
}

WrongCat::~WrongCat( void )
{
	return ;
}

void	WrongCat::makeSound() const
{
	std::cout << "miaou" << std::endl;

	return ;
}
