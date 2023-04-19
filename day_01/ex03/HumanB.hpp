/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:09:03 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 16:29:04 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
# define __HUMANB_H__

# include "Weapon.hpp"

class HumanB
{
	public:

		HumanB( std::string const name );
		~HumanB( void );

		void	setWeapon( Weapon &weapon );
		void	attack( void ) const;

	private:

		std::string const	_name;
		Weapon				*_weapon;
};

#endif /* __HUMANB_H__ */
