/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:40:19 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/11/01 20:45:31 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_CLASS_HPP__
# define __MUTANTSTACK_CLASS_HPP__

#include <stack>

class	MutantStack : public std::stack
{
	private:

	public:

		MutantStack( void );
		MutantStack( const MutantStack& src );
		~MutantStack( void );

		MutantStack&	operator=( const MutantStack& rhs );

};

#endif // __MUTANTSTACK_CLASS_HPP__
