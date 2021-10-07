/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:39:24 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 16:08:41 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <cstdlib>

int		main( void )
{
	Weapon		w;
	HumanA		hA("HumanA", w);
	HumanB		hB("HumanB");

	w.setType("blue blade");
	hA.attack();
	hB.setWeapon(&w);
	hB.attack();

	return (EXIT_SUCCESS);
}
