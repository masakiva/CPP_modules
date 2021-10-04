/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eighties.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:56:57 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/04 16:56:58 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eighties.hpp"

void		close_phonebook()
{
	std::cout << "Phonebook cleared. Bye!" << std::endl;
	exit(EXIT_SUCCESS);
}

void	protected_cin(std::string *str)
{
	std::cin >> *str;
	if (std::cin.eof())
		close_phonebook();
 	else if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Error: invalid input. Phonebook broken." << std::endl;
		exit(EXIT_FAILURE);
	}
}

int			main(void)
{
	std::string	input;
	Contact		contacts[8];

	protected_cin(&input);
	while (input.compare("EXIT") != 0)
	{
		if (input.compare("ADD") == 0)
			add_contact(contacts);
		else if (input.compare("SEARCH") == 0)
			search_contact(contacts);
		protected_cin(&input);
	}
	close_phonebook();
}
