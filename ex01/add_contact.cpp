/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:57:02 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/04 16:57:05 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eighties.hpp"

void		add_contact(Contact contacts[8])
{
	int		i;

	i = 0;
	while (contacts[i].check_if_filled())
		i++;
	if (i == 8)
		std::cout << "Error: phonebook full" << std::endl;
	else
	{
		contacts[i].fill_fields();
		std::cout << "Contact saved!" << std::endl;
	}
}
