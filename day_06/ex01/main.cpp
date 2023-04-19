/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:21:36 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/28 15:49:53 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib> // EXIT_SUCCESS

typedef struct	Data
{
	char	c;
	int		i;
	double	d;
}				Data;

__intptr_t	serialize( Data* ptr )
{
	return ( reinterpret_cast<__intptr_t>(ptr) );
}

Data*		deserialize( __intptr_t raw )
{
	return ( reinterpret_cast<Data*>(raw) );
}

int		main( void )
{
	Data*		data = new Data();
	__intptr_t	raw;

	data->c = 'a';
	data->i = 1;
	data->d = 1.1;

	std::cout << "before serialization: " << data << std::endl;
	raw = serialize( data );
	std::cout << "raw address: " << raw << std::endl;
	data = deserialize( raw );
	std::cout << "after serialization: " << data << std::endl;

	delete data;

	return ( EXIT_SUCCESS );
}
