/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:44:34 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 20:19:43 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	memoryLeak()
{
	std::string		*panther = new std::string("String panther");

	std::cout << *panther << std::endl;

	delete (panther);
}

int		main()
{
	memoryLeak();

	// while (1)
	// {
	// 	;
	// }
	return (0);
}