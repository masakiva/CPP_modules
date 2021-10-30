/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.template.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:37:44 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/30 14:55:36 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_TEMPLATE_HPP__
# define __ARRAY_TEMPLATE_HPP__

#include <cstddef> // size_t
#include <strings.h> // bzero
#include <exception>

template < typename T >
class	Array
{
	private:

		T*			_arr;
		std::size_t	_arr_size;

	public:

		Array( void );
		Array( unsigned int n );
		Array( const Array& src );
		~Array( void );

		const Array&	operator=( const Array& rhs );
		T&				operator[]( std::size_t i ) const;

		std::size_t		size( void );

		class	OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

#endif // __ARRAY_TEMPLATE_HPP__
