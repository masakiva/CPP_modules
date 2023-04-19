/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.template.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:37:44 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/30 11:01:06 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_TEMPLATE_HPP__
# define __ITER_TEMPLATE_HPP__

# include <cstddef>

template < typename A >
void	iter( A* array, size_t array_len, void (*f)( A& array_elem ) )
{
	for ( size_t i = 0; i < array_len; i++ )
	{
		(*f)( array[i] );
	}
}

#endif // __ITER_TEMPLATE_HPP__
