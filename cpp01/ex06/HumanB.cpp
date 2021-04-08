/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:34:04 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 18:37:08 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	this->name = "default";
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

void		HumanB::attack()
{
	std::cout << this->name << "attacks with his " << this->weapon->getType() << std::endl;
}

void		HumanB::setType(std::string type)
{
	this->weapon->setType(type);
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}