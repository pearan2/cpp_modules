/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 09:47:57 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 12:17:14 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	this->name = "default";
	this->title = "default";
}

Sorcerer::Sorcerer(const std::string &name, const std::string &title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ", " << this->title << " is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &origin)
{
	this->name = origin.name;
	this->title = origin.title;
	std::cout << this->name << ", " << this->title << " is born !" << std::endl;
}

Sorcerer& Sorcerer::operator=(const Sorcerer &origin)
{
	this->name = origin.name;
	this->title = origin.title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName() const
{
	return (this->name);
}

std::string Sorcerer::getTitle() const
{
	return (this->title);
}

void	Sorcerer::polymorph(const Victim& victim)
{
	victim.getPolymorphed();
}

std::ostream    &operator<<(std::ostream &out, const Sorcerer &sorcerer)
{
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}