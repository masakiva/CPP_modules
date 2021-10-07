/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:15:47 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 14:30:00 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie* zombieHorde( int N, std::string name );

int		main( int argc, char **argv )
{
	int		i;
	int		nbZombies;
	Zombie	*horde;

	if (argc != 2)
	{
		std::cout << "Please give a single number as argument" << std::endl;
		return (EXIT_FAILURE);
	}
	nbZombies = atoi(argv[1]);

	horde = zombieHorde(nbZombies, "human");
	i = 0;
	while (i < nbZombies)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;

	return (EXIT_SUCCESS);
}
