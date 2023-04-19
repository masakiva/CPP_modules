/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:54:41 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/28 15:58:56 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_CLASS_HPP__
# define __BASE_CLASS_HPP__

class	Base
{
	public:

		virtual ~Base( void );

};

class	A : public Base
{
	public:

		A( void );
		A( const A& src );
		~A( void );

		A&	operator=( const A& rhs );

};

class	B : public Base
{
	public:

		B( void );
		B( const B& src );
		~B( void );

		B&	operator=( const B& rhs );

};

class	C : public Base
{
	public:

		C( void );
		C( const C& src );
		~C( void );

		C&	operator=( const C& rhs );

};

#endif // __BASE_CLASS_HPP__
