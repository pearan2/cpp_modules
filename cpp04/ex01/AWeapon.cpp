/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:35:51 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 13:47:04 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	this->name = "default";
	this->apcost = -1;
	this->damage = -1;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::AWeapon(const AWeapon &origin)
{
	this->name = origin.name;
	this->apcost = origin.apcost;
	this->damage = origin.damage;
}

AWeapon& AWeapon::operator=(const AWeapon &origin)
{
	this->name = origin.name;
	this->apcost = origin.apcost;
	this->damage = origin.damage;
	return (*this);
}

AWeapon::~AWeapon()
{
	
}

std::string		AWeapon::getName()
{
	return (this->name);
}

int				AWeapon::getApcost()
{
	return (this->apcost);
}

int				AWeapon::getDamage()
{
	return (this->damage);
}

void			AWeapon::attack() const
{
	return ;
}
