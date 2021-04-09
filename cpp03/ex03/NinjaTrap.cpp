/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:53:01 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 22:10:58 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120, 120, 1, "NinjaTrap", "default", 60, 5, 0)
{
	std::cout << "NinjaTrap default constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, "NinjaTrap", name, 60, 5, 0)
{
	std::cout << "NinjaTrap name constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &origin)
{
	this->hitPoint = origin.hitPoint;
	this->maxHitPoint = origin.maxHitPoint;
	this->energyPoint = origin.energyPoint;
	this->maxEnergyPoint = origin.maxEnergyPoint;
	this->level = origin.level;
	this->type = origin.type;
	this->name = origin.name;
	this->meleeAttackDamage = origin.meleeAttackDamage;
	this->rangedAttackDamage = origin.rangedAttackDamage;
	this->armorDamageReduction = origin.armorDamageReduction;

	std::cout << "NinjaTrap copy contructor called" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap destructor called" << std::endl;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& origin)
{
	this->hitPoint = origin.hitPoint;
	this->maxHitPoint = origin.maxHitPoint;
	this->energyPoint = origin.energyPoint;
	this->maxEnergyPoint = origin.maxEnergyPoint;
	this->level = origin.level;
	this->type = origin.type;
	this->name = origin.name;
	this->meleeAttackDamage = origin.meleeAttackDamage;
	this->rangedAttackDamage = origin.rangedAttackDamage;
	this->armorDamageReduction = origin.armorDamageReduction;

	std::cout << "NinjaTrap Assignation operator called" << std::endl;

	return (*this);
}

void NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	if (this->energyPoint > 25)
	{
		std::cout << "Wild ClapTrap appeared!!" << std::endl;
		std::cout << "ninja attacks ClapTrap!!" << std::endl;
		clap.takeDamage(this->meleeAttackDamage);
		clap.showHitPoint();
		this->energyPoint -= 25;
	}
	else
	{
		std::cout << "NinjaTrap " << this->name << " Not enough energy point" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	if (this->energyPoint > 25)
	{
		std::cout << "Wild FragTrap appeared!!" << std::endl;
		std::cout << "ninja attacks FragTrap!!" << std::endl;
		frag.takeDamage(this->meleeAttackDamage);
		frag.showHitPoint();
		this->energyPoint -= 25;
	}
	else
	{
		std::cout << "NinjaTrap " << this->name << " Not enough energy point" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	if (this->energyPoint > 25)
	{
		std::cout << "Wild ScavTrap appeared!!" << std::endl;
		std::cout << "ninja attacks ScavTrap!!" << std::endl;
		scav.takeDamage(this->meleeAttackDamage);
		scav.showHitPoint();
		this->energyPoint -= 25;
	}
	else
	{
		std::cout << "NinjaTrap " << this->name << " Not enough energy point" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	

	if (this->energyPoint > 25)
	{
		std::cout << "Wild NinjaTrap appeared!!" << std::endl;
		std::cout << "ninja attacks NinjaTrap!!" << std::endl;
		ninja.takeDamage(this->meleeAttackDamage);
		ninja.showHitPoint();
		this->energyPoint -= 25;
	}
	else
	{
		std::cout << "NinjaTrap " << this->name << " Not enough energy point" << std::endl;
	}
}