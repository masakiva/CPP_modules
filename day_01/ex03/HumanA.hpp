/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:09:03 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 16:03:35 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
# define __HUMANA_H__

# include "Weapon.hpp"

class HumanA
{
	public:

		HumanA( std::string const name, Weapon const &weapon );
		~HumanA( void );

		void	attack( void ) const;

	private:

		std::string const	_name;
		Weapon const		&_weapon;
};

#endif /* __HUMANA_H__ */
