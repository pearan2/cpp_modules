/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Grunt.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 04:29:09 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 04:36:52 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Grunt.hpp"

Grunt::Grunt()
{
	this->name = "default";
}

Grunt::Grunt(const std::string &name) : Victim(name)
{
	std::cout << "Yes?" << std::endl;
}

Grunt::Grunt(const Grunt &origin) : Victim(origin)
{
	
}

Grunt& Grunt::operator=(const Grunt &origin)
{
	this->name = origin.name;
	return (*this);
}

Grunt::~Grunt()
{
	std::cout << "For the Horde!" << std::endl;
}

//overridding with virtual keyword
void    Grunt::getPolymorphed(void) const
{
    std::cout << getName() << " was just polymorphed into a blue Grunt!" << std::endl;
}
