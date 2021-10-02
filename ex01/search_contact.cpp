#include "eighties.hpp"

std::string	truncate(std::string str, size_t width)
{
    if (str.length() > width)
		return (str.substr(0, width - 1) + ".");
	return (str);
}

void		search_contact(Contact contacts[8])
{
	int		i;
	int		input;

	if (contacts[0].filled == 0)
	{
		std::cout << "Error: phonebook empty" << std::endl;
		return ;
	}
	i = 0;
	while (contacts[i].filled == 1)
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
