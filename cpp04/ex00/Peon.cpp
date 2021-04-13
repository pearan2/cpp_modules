/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:12:09 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 04:26:16 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
	this->name = "default";
}

Peon::Peon(const std::string &name) : Victim(name)
{
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(const Peon &origin) : Victim(origin)
{
	
}

Peon& Peon::operator=(const Peon &origin)
{
	this->name = origin.name;
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

//overridding with virtual keyword
void    Peon::getPolymorphed(void) const
{
    std::cout << getName() << " was just polymorphed into a pink Peon!" << std::endl;
}
