/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:25:21 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/12 13:20:22 by mvidal-a         ###   ########.fr       */
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
		Fixed( const int i );
		Fixed( const float f );
		~Fixed( void );
		
		Fixed &	operator=( Fixed const &rhs );

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		static int	getNbFracBits( void );

		float		toFloat( void ) const;
		int			toInt( void ) const;

	private:

		int					_rawBits;
		static const int	_nbFracBits;

};

std::ostream &	operator<<( std::ostream &o, Fixed const &rhs );

#endif // __FIXED_HPP__
