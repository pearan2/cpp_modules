/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:17:13 by honlee            #+#    #+#             */
/*   Updated: 2021/04/17 19:24:55 by honlee           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "util.hpp"

Base *generate(void)
{
	int randomValue = rand() % 150;
	
	if (randomValue < 50)
		return (new A());
	else if (randomValue < 100)
		return (new B());
	else
		return (new C());
}

void identify_from_pointer(Base *p)
{
	if (p == NULL)
		std::cout << "Input is NULL" << std::endl;
    else if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Input is A class" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Input is B class" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Input is C class" << std::endl;
	else
		std::cout << "Input is just Base class" << std::endl;
}

void identify_from_reference(Base &p)
{
    identify_from_pointer(&p);
}