/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:03:20 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 20:15:22 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_H__
# define __KAREN_H__

# include <iostream> // std::cout

class Karen
{
	public:

		void	complain( std::string level ) const;

	private:

		void	_debug( void ) const;
		void	_info( void ) const;
		void	_warning( void ) const;
		void	_error( void ) const;
};

#endif /* __KAREN_H__ */
