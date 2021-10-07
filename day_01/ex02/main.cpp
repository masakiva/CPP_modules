/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:36:22 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 14:45:08 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int		main ( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "address of str:                     " << &str << std::endl;
	std::cout << "address of str using the pointer:   " << stringPTR
		<< std::endl;
	std::cout << "address of str using the reference: " << &stringREF
		<< std::endl;

	std::cout << "str using the pointer:   " << *stringPTR << std::endl;
	std::cout << "str using the reference: " << stringREF << std::endl;
	return (EXIT_SUCCESS);
}
