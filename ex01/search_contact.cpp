/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:57:08 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/04 16:57:10 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eighties.hpp"

void		search_contact(Contact contacts[8])
{
	int		i;
	int		input;

	if (!contacts[0].check_if_filled())
	{
		std::cout << "Error: phonebook empty" << std::endl;
		return ;
	}
	i = 0;
	while (contacts[i].check_if_filled())
	{
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		std::cout << std::setw(10) << truncate(contacts[i].first_name, 10);
		std::cout << "|";
		std::cout << std::setw(10) << truncate(contacts[i].last_name, 10);
		std::cout << "|";
		std::cout << std::setw(10) << truncate(contacts[i].nickname, 10);
		std::cout << std::endl;
		i++;
	}
	std::cout << "Print contact with index: ";
	std::cin >> input;
    if (std::cin.fail())
	{
		std::cin.clear();
        std::cin.ignore();
		std::cout << "Error: not a valid index" << std::endl;
    }
	else if (input < 1 || input > i)
		std::cout << "Error: no contact at this index" << std::endl;
    else
		contacts[input - 1].print_fields();
}
