/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:46:40 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 20:54:49 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaaargh" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &origin)
{
	this->type = origin.type;
	this->hp = origin.hp;
}

SuperMutant& SuperMutant::operator=(const SuperMutant &origin)
{
	this->type = origin.type;
	this->hp = origin.hp;
	return (*this);
}

void		SuperMutant::takeDamage(int value)
{
	if (value < 0)
		return ;
	value -= 3;
	if (value < 0)
		return ;
	if (this->hp < value)
		this->hp = 0;
	else
		this->hp -= value;
}
