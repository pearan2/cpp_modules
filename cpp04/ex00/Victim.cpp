/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:59:10 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 12:11:56 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	this->name = "default";
}

Victim::Victim(const std::string &name)
{
	this->name = name;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &origin)
{
	this->name = origin.name;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim& Victim::operator=(const Victim &origin)
{
	this->name = origin.name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "The victim " << this->name << " died for no apparent reasons!" << std::endl;
}

std::string Victim::getName() const
{
	return (this->name);
}

void	Victim::getPolymorphed() const
{
	std::cout << this->name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream&	operator<<(std::ostream &out, const Victim &victim)
{
	std::cout << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return (out);
}