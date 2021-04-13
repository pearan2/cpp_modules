/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:49:47 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 21:22:52 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(Ice const &origin)
{
	this->type = "ice";
	this->xp = origin.xp;
}

Ice::~Ice()
{

}

Ice& Ice::operator=(Ice const &origin)
{
	this->xp = origin.xp;
	this->type = origin.type;
	return (*this);
}

AMateria *Ice::clone() const
{
	Ice *cpy = new Ice(*this);
	return (cpy);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}