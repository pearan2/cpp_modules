/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:10:17 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 21:22:59 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	this->xp = 0;
}

Cure::Cure(Cure const &origin)
{
	this->type = "cure";
	this->xp = origin.xp;
}

Cure::~Cure()
{

}

Cure& Cure::operator=(Cure const &origin)
{
	this->xp = origin.xp;
	this->type = origin.type;
	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *cpy = new Cure(*this);
	return (cpy);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
