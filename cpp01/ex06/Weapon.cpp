/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:12:01 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 18:56:55 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "default";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
}

const std::string& Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(const std::string& type)
{
	this->type = type;
}