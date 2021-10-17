/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:21:49 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 19:26:24 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <iostream>

class Brain
{
	public:

		Brain( void );
		Brain( const Brain &src );
		~Brain( void );

		Brain &	operator=( const Brain &rhs );

	private:

		std::string		_ideas[100];

};

#endif // __BRAIN_HPP__
