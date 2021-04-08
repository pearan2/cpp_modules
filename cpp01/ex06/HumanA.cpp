/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:19:56 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 18:37:19 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
	this->name = "default";
}

HumanA::HumanA(std::string name)
{
	this->name = name;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

void		HumanA::setType(std::string type)
{
	this->weapon->setType(type);
}

void		HumanA::attack()
{
	std::cout << this->name << "attacks with his " << this->weapon->getType() << std::endl;
}