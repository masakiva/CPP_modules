#include "eighties.hpp"

void		add_contact(Contact contacts[8])
{
	int		i;

	i = 0;
	while (contacts[i].filled == 1)
		i++;
	if (i == 8)
		std::cout << "Error: phonebook full" << std::endl;
	else
	{
		contacts[i].fill_fields();
		std::cout << "Contact saved!" << std::endl;
	}
}
