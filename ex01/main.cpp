/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eighties.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:56:57 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/06 12:46:27 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void	protected_cin(std::string *str)
{
	getline(std::cin, *str);
	if (std::cin.eof())
		exit(EXIT_SUCCESS);
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
	Phonebook	phonebook;

	protected_cin(&input);
	while (input.compare("EXIT") != 0)
	{
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (input.compare("SEARCH") == 0)
			phonebook.search_phonebook();
		protected_cin(&input);
	}
	return (EXIT_SUCCESS);
}
