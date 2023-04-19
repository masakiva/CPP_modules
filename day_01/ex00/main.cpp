/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:15:47 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 14:16:17 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int		main( void )
{
	std::cout << "[creating a Zombie on the heap, using 'new' operator]"
		<< std::endl;
	Zombie *z = newZombie("firstzombie");

	std::cout << "[declaring a random Zombie on the stack, it will announce"
		<< " itself, then die]" << std::endl;
	randomChump("secondzombie");

	std::cout << "[destroying the first Zombie on the heap]" << std::endl;
	delete z;

	return (EXIT_SUCCESS);
}
