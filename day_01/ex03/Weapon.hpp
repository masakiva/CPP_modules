/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:46:50 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 15:44:12 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

# include <iostream>

class Weapon
{
	public:

		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );

		const std::string&	getType( void ) const;
		void				setType( std::string type );

	private:

		std::string	_type;
};

#endif /* __WEAPON_H__ */
