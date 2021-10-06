/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:15:47 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/06 16:58:48 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int		main( void )
{
	Zombie *z = newZombie("ontheheap");

	randomChump("onthestack");

	delete z;

	return (EXIT_SUCCESS);
}
