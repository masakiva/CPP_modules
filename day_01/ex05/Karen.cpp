/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:06:40 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 20:45:23 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::complain( std::string level ) const
{
	std::string	level_index[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void		(Karen::*complain_function[4])( void ) const = { &Karen::_debug,
		&Karen::_info, &Karen::_warning, &Karen::_error };

	for ( int i = 0; i < 4; i++ )
	{
		level.compare(level_index[i]);
		complain_function[i]();
	}

	return ;
}

void	Karen::_debug( void ) const
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-"
		<< "pickle-special-ketchup burger. I just love it!" << std::endl;

	return ;
}

void	Karen::_info( void ) const
{
	std::cout << "I cannot believe adding extra bacon cost more money. You"
		<< " don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;

	return ;
}

void	Karen::_warning( void ) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve"
		<< " been coming here for years and you just started working here"
		<< " last month." << std::endl;

	return ;
}

void	Karen::_error( void ) const
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;

	return ;
}
