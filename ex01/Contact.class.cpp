/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <mvidal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:19:23 by mvidal-a          #+#    #+#             */
/*   Updated: 2021/05/21 13:35:59 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

void	protected_cin(std::string *str);

Contact::Contact(void)
{
	this->filled = 0;
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::fill_fields(void)
{
	this->filled = 1;
	std::cout << "First name: ";
	protected_cin(&this->first_name);
	std::cout << "Last name: ";
	protected_cin(&this->last_name);
	std::cout << "Nickname: ";
	protected_cin(&this->nickname);
	std::cout << "Login: ";
	protected_cin(&this->login);
	std::cout << "Postal address: ";
	protected_cin(&this->postal_address);
	std::cout << "Email address: ";
	protected_cin(&this->email_address);
	std::cout << "Phone number: ";
	protected_cin(&this->phone_number);
	std::cout << "Birthday date: ";
	protected_cin(&this->birthday_date);
	std::cout << "Favorite meal: ";
	protected_cin(&this->favorite_meal);
	std::cout << "Underwear color: ";
	protected_cin(&this->underwear_color);
	std::cout << "Darkest secret: ";
	protected_cin(&this->darkest_secret);
}

void	Contact::print_fields(void)
{
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->postal_address << std::endl;
	std::cout << this->email_address << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->birthday_date << std::endl;
	std::cout << this->favorite_meal << std::endl;
	std::cout << this->underwear_color << std::endl;
	std::cout << this->darkest_secret << std::endl;
}
