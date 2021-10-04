/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:14:35 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/04 18:11:44 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		bool	get_filled(void) const;
		void	fill_fields(void);
		void	print_fields(void) const;
		std::string	truncate_field(std::string str) const;

	private:

		int				_filled;

		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_darkest_secret;

};

#endif /*CONTACT_CLASS_HPP*/
