/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:50:12 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/15 15:38:42 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

		DiamondTrap( void );
		DiamondTrap( std::string name, std::string claptrap_name );
		DiamondTrap( DiamondTrap const &src );
		~DiamondTrap( void );

		using	ScavTrap::attack;
		void	whoAmI( void ) const;

	private:

		std::string		_name;

};

#endif // __DIAMONDTRAP_HPP__
