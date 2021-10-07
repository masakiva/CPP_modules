/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:52:32 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/07 12:18:23 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>

class Zombie {

public:

	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );

	void	set_name( std::string name );
	void	announce( void ) const;

private:

	std::string		_name;

};

#endif /* __ZOMBIE_H__ */
