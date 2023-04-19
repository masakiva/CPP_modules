/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:29:00 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/05 18:50:52 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_CLASS_HPP__
# define __PHONEBOOK_CLASS_HPP__

# include "Contact.class.hpp"

class Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);

		void	add_contact(void);
		void	search_phonebook(void) const;

	private:

		Contact		_contacts[8];

};

#endif /*__PHONEBOOK_CLASS_HPP__*/
