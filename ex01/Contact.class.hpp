/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:14:35 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/05 19:01:33 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		bool	get_isfilled(void) const;
		void	fill_fields(void);
		void	print_fields(void) const;
		void	print_contact_summary(int index) const;

	private:

		int				_isfilled;

		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_darkest_secret;

		static std::string	_truncate_field(std::string field);
};

#endif /*CONTACT_CLASS_HPP*/
