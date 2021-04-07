/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:30:56 by honlee            #+#    #+#             */
/*   Updated: 2021/04/07 23:23:11 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

int		get_next_line(std::string &input)
{
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "Do not input EOF" << std::endl;
		return (1);
	}
	return (0);
}

Contact *make_contact(int idx)
{
	Contact *ret = new Contact(idx);

	ret->is_empty = false;
	
	std::cout << "first name > ";
	if (get_next_line(ret->first_name) != 0)
		return (0);

	std::cout << "last name > ";
	if (get_next_line(ret->last_name) != 0)
		return (0);

	std::cout << "nick name > ";
	if (get_next_line(ret->nick_name) != 0)
		return (0);

	std::cout << "login > ";
	if (get_next_line(ret->login) != 0)
		return (0);

	std::cout << "postal address > ";
	if (get_next_line(ret->postal_address) != 0)
		return (0);

	std::cout << "email address > ";
	if (get_next_line(ret->email_address) != 0)
		return (0);

	std::cout << "phone number > ";
	if (get_next_line(ret->phone_number) != 0)
		return (0);

	std::cout << "birthday date > ";
	if (get_next_line(ret->birthday_date) != 0)
		return (0);

	std::cout << "favorite meal > ";
	if (get_next_line(ret->favorite_meal) != 0)
		return (0);

	std::cout << "underwear color > ";
	if (get_next_line(ret->underwear_color) != 0)
		return (0);

	std::cout << "darkest secret > ";
	if (get_next_line(ret->darkest_secret) != 0)
		return (0);
	return (ret);
}

int		convert_to_int(std::string str)
{
	int		ret;

	try
	{
		ret = std::stoi(str);
	}
	catch(const std::exception& e)
	{
		return (-1);
	}
	return (ret);
}

int		main()
{
	std::string			order;
	Contact				*book[8];
	int					idx;

	idx = -1;
	while (1)
	{
		std::cout << "ORDER > ";
		if (get_next_line(order) != 0)
			return (0);
		if (order.compare("ADD") == 0)
		{
			//ADD
			if (idx + 1 > 7)
				std::cout << "Can not ADD more than 8" << std::endl;
			else
			{
				idx++;
				book[idx] = make_contact(idx);
				if (book[idx] == NULL)
					return (0);
			}
		}
		else if (order.compare("SEARCH") == 0)
		{
			int idx_in;
			std::string input;

			if (idx != -1)
			{
				std::cout << "--------idx-first name--last name--nick name-" << std::endl;;
				for (int i = 0; i <= idx; i++)
				{
					book[i]->print();
				}
				std::cout << "---------------------------------------------" << std::endl;
			}
			std::cout << "SEARCH INDEX > ";
			if (get_next_line(input) != 0)
				return (0);
			idx_in = convert_to_int(input);
			if (idx != -1 && idx_in <= idx && idx_in >= 0)
				book[idx_in]->printAll();		
			else
				std::cout << "please check your input" << std::endl;
		}
		else if (order.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "please check your input" << std::endl;
	}
}
