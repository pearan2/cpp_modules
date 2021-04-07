/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:44:45 by honlee            #+#    #+#             */
/*   Updated: 2021/04/07 23:29:17 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

std::string		to_ten(std::string str)
{
	std::string ret;

	if (str.length() > 10)
	{
		ret = str.substr(0, 9);
		ret += '.';
		return (ret);
	}
	return (str);
}

Contact::Contact()
{
	this->is_empty = true;
	this->index = -1;
}

Contact::Contact(int idx)
{
	this->is_empty = true;
	this->index = idx;
}

void	Contact::print()
{
	if (this->is_empty == false && this->index > -1)
	{
		std::cout.setf(std::ios::right);
		std::cout << '|';
		std::cout << std::setw(10) << to_ten(std::to_string(this->index));
		std::cout << '|';
		std::cout << std::setw(10) << to_ten(this->first_name);
		std::cout << '|';
		std::cout << std::setw(10) << to_ten(this->last_name);	
		std::cout << '|';
		std::cout << std::setw(10) << to_ten(this->nick_name);	
		std::cout << '|' << std::endl;
	}
	else
		std::cout << "is_empty : " << this->is_empty << "  |   idx : " << this->index << std::endl;
}

void	Contact::printAll()
{
	std::cout.setf(std::ios::right);
	std::cout << std::setw(20) << "index > " << this->index << std::endl;
	std::cout << std::setw(20) << "first name > " << this->first_name << std::endl;
	std::cout << std::setw(20) << "last name > " << this->last_name << std::endl;
	std::cout << std::setw(20) << "nick name > " << this->nick_name << std::endl;
	std::cout << std::setw(20) << "login > " << this->login << std::endl;
	std::cout << std::setw(20) << "postal address > " << this->postal_address << std::endl;
	std::cout << std::setw(20) << "email address > " << this->email_address << std::endl;
	std::cout << std::setw(20) << "phone number > " << this->phone_number << std::endl;
	std::cout << std::setw(20) << "birthday date > " << this->birthday_date << std::endl;
	std::cout << std::setw(20) << "favorite meal > " << this->favorite_meal << std::endl;
	std::cout << std::setw(20) << "underwear color > " << this->underwear_color << std::endl;
	std::cout << std::setw(20) << "darkest secret > " << this->darkest_secret << std::endl;
}