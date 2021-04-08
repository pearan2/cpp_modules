/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:50:51 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 15:32:52 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "basic Zombie";
	this->type = "basic";
}

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << " (" << this->type << ")> destroyed" << std::endl;
}

void		Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> c...p..p..noooooooo...jam......" << std::endl;
}