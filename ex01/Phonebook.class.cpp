/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:56:51 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/05 19:05:21 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.hpp" 

Phonebook::Phonebook(void)
{
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook cleared. Bye!" << std::endl;
	return ;
}

void		Phonebook::add_contact(void)
{
	int		i;

	i = 0;
	while (this->_contacts[i].get_isfilled())
		i++;
	if (i == 8)
		std::cout << "Error: phonebook full" << std::endl;
	else
	{
		this->_contacts[i].fill_fields();
		std::cout << "Contact saved!" << std::endl;
	}
}

void		Phonebook::search_phonebook(void) const
{
	int		i;
	int		input;

	i = 0;
	while (this->_contacts[i].get_isfilled())
	{
		this->_contacts[i].print_contact_summary(i + 1);
		i++;
	}
	if (i == 0)
	{
		std::cout << "Error: phonebook empty" << std::endl;
		return ;
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
		this->_contacts[input - 1].print_fields();
}
