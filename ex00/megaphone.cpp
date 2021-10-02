/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:58:12 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/04/27 14:12:07 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

char	*upperify(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int		i;
	
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
			std::cout << upperify(argv[i++]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
