/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:45:15 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 13:50:57 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& origin) : AWeapon(origin)
{
	
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &origin)
{
	this->name = origin.name;
	this->apcost = origin.apcost;
	this->damage = origin.damage;
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
	
}

void		PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}