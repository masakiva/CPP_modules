/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.template.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:01:35 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/29 16:01:50 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MAX_TEMPLATE_HPP__
# define __MAX_TEMPLATE_HPP__

template< typename T >
T&		max( T& a, T& b )
{
	return ( a > b ? a : b );
}

#endif // __MAX_TEMPLATE_HPP__
