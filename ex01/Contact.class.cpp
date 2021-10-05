/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:19:23 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/10/05 19:03:54 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

void	protected_cin(std::string *str);

Contact::Contact(void)
{
	this->_isfilled = 0;
	return ;
}

Contact::~Contact(void)
{
	return ;
}


bool	Contact::get_isfilled(void) const
{
	return (this->_isfilled);
}

void	Contact::fill_fields(void)
{
	this->_isfilled = 1;
	std::cout << "First name: ";
	protected_cin(&this->_first_name);
	std::cout << "Last name: ";
	protected_cin(&this->_last_name);
	std::cout << "Nickname: ";
	protected_cin(&this->_nickname);
	std::cout << "Phone number: ";
	protected_cin(&this->_phone_number);
	std::cout << "Darkest secret: ";
	protected_cin(&this->_darkest_secret);
}

void	Contact::print_fields(void) const
{
	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phone_number << std::endl;
	std::cout << this->_darkest_secret << std::endl;
}

std::string	Contact::_truncate_field(std::string field)
{
    if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	return (field);
}

void	Contact::print_contact_summary(int index) const
{
	std::cout << std::setw(10) << index;
	std::cout << "|";
	std::cout << std::setw(10) << _truncate_field(this->_first_name);
	std::cout << "|";
	std::cout << std::setw(10) << _truncate_field(this->_last_name);
	std::cout << "|";
	std::cout << std::setw(10) << _truncate_field(this->_nickname);
	std::cout << std::endl;
}
