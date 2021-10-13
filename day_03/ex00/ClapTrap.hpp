/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:36:47 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/14 00:13:55 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>

class ClapTrap
{
	public:

		ClapTrap( std::string name );
		ClapTrap( ClapTrap const &src );
		~ClapTrap( void );

		ClapTrap &	operator=( ClapTrap const &rhs );

		std::string	getName( void ) const;
		int			getHitPoints( void ) const;
		int			getEnergyPoints( void ) const;
		int			getAttackDamage( void ) const;

		void	attack( std::string const &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	private:

		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;

};

#endif // __CLAPTRAP_HPP__
