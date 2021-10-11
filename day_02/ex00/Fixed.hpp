/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:25:21 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/11 18:47:34 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>

class Fixed
{
	public:

		Fixed( void );
		Fixed( Fixed const &src );
		~Fixed( void );
		
		Fixed &	operator=( Fixed const &rhs );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:

		int					_rawBits;
		static const int	_nbFracBits = 8;

};

#endif // __FIXED_HPP__
