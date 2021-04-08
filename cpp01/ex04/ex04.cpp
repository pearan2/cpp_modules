/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:24:04 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 20:43:59 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *str_ptr = &str;
	std::string &str_ref = str;

	std::cout << "pointer : " << *str_ptr << std::endl;
	std::cout << "reference : " << str_ref << std::endl;
}