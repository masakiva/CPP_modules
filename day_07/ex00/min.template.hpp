/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.template.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:58:12 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/29 16:00:10 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MIN_TEMPLATE_HPP__
# define __MIN_TEMPLATE_HPP__

template< typename T >
T&		min( T& a, T& b )
{
	return ( a < b ? a : b );
}

#endif // __MIN_TEMPLATE_HPP__
