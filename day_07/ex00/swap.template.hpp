/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.template.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:51:12 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/29 15:58:53 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SWAP_TEMPLATE_HPP__
# define __SWAP_TEMPLATE_HPP__

template< typename T >
void	swap( T& a, T& b )
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

#endif // __SWAP_TEMPLATE_HPP__
