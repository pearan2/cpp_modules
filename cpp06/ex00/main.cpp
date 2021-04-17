/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:36:15 by honlee            #+#    #+#             */
/*   Updated: 2021/04/17 16:47:21 by honlee           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int			main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "plz check your input" << std::endl;
		return (1);
	}

	Converter conv;
	conv.convert(std::string(av[1]));
	return (0);
}