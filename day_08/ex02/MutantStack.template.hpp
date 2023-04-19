/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.template.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:40:19 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/11/02 14:43:57 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_TEMPLATE_HPP__
# define __MUTANTSTACK_TEMPLATE_HPP__

#include <cstddef> // NULL
#include <stack>

template < typename T >
class	MutantStack : public std::stack<T>
{
	private:

		T*		_begin;
		T*		_end;

	public:

		MutantStack( void );
		MutantStack( const MutantStack& src );
		~MutantStack( void );

		MutantStack&	operator=( const MutantStack& rhs );

		void	push( const T& val );
		void	pop( void );

		class	iterator
		{
			private:

				T*		_ptr;

			public:

				iterator( void );
				iterator( T* ptr );
				iterator( const iterator& src );
				~iterator( void );

				iterator&	operator=( const iterator& rhs );

				T&			operator*( void ) const;

				bool		operator>( const iterator &rhs ) const;
				bool		operator<( const iterator &rhs ) const;
				bool		operator>=( const iterator &rhs ) const;
				bool		operator<=( const iterator &rhs ) const;
				bool		operator==( const iterator &rhs ) const;
				bool		operator!=( const iterator &rhs ) const;

				iterator&	operator++( void );
				iterator&	operator--( void );
				iterator	operator++( int );
				iterator	operator--( int );

		};

		iterator	begin( void );
		iterator	end( void );

};

#endif // __MUTANTSTACK_TEMPLATE_HPP__
