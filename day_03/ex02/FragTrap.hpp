/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:08:43 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/14 18:21:50 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap const &src );
		~FragTrap( void );

		void	attack( std::string const &target ) const;
		void	highFivesGuys( void ) const;

};

#endif // __FRAGTRAP_HPP__
