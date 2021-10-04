/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:29:00 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/04 19:13:40 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_CLASS_HPP__
# define __PHONEBOOK_CLASS_HPP__

class Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);

	private:

		Contact		_contacts[8];

};

#endif /*__PHONEBOOK_CLASS_HPP__*/
