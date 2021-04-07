/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:39:29 by honlee            #+#    #+#             */
/*   Updated: 2021/04/07 22:41:05 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iomanip>

class Contact{
	public:
		bool		is_empty;
		int			index;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;

		Contact(void);
		Contact(int idx);
		void print(void);
		void printAll(void);
};

#endif