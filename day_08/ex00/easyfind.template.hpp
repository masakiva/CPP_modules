/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.template.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:38:43 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/30 16:56:33 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_TEMPLATE_HPP__
# define __EASYFIND_TEMPLATE_HPP__

# include <algorithm>

class	NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ( "value not found in container" );
		}
};

template < typename T >
typename T::iterator	easyfind( T& cont, int to_find )
{
	typename T::iterator	it;

	it = std::find( cont.begin(), cont.end(), to_find );
	if ( it == cont.end() )
		throw NotFoundException();

	return ( it );
}

#endif // __EASYFIND_TEMPLATE_HPP__
