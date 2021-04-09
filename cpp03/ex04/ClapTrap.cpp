/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:52:10 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 23:18:43 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->hitPoint = 0;
	this->maxHitPoint = 0;
	this->energyPoint = 0;
	this->maxEnergyPoint = 0;
	this->level = 0;
	this->type = "ClapTrap";
	this->name = "default";
	this->meleeAttackDamage = 0;
	this->rangedAttackDamage = 0;
	this->armorDamageReduction = 0;

	std::cout << "ClapTrap default contructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->hitPoint = 0;
	this->maxHitPoint = 0;
	this->energyPoint = 0;
	this->maxEnergyPoint = 0;
	this->level = 0;
	this->type = "ClapTrap";
	this->name = name;
	this->meleeAttackDamage = 0;
	this->rangedAttackDamage = 0;
	this->armorDamageReduction = 0;

	std::cout << "ClapTrap name contructor called" << std::endl;
}

ClapTrap::ClapTrap(unsigned int		hitPoint,
				unsigned int		maxHitPoint,
				unsigned int		energyPoint,
				unsigned int		maxEnergyPoint,
				unsigned int		level,
				std::string			type,
				std::string			name,
				unsigned int		meleeAttackDamage,
				unsigned int		rangedAttackDamage,
				unsigned int		armorDamageReduction
				)
{
	this->hitPoint = hitPoint;
	this->maxHitPoint = maxHitPoint;
	this->energyPoint = energyPoint;
	this->maxEnergyPoint = maxEnergyPoint;
	this->level = level;
	this->type = type;
	this->name = name;
	this->meleeAttackDamage = meleeAttackDamage;
	this->rangedAttackDamage = rangedAttackDamage;
	this->armorDamageReduction = armorDamageReduction;

	std::cout << "ClapTrap setter contructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& origin)
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

	std::cout << "ClapTrap copy contructor called" << std::endl;	
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& origin)
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

	std::cout << "ClapTrap Assignation operator called" << std::endl;

	return (*this);	
}

void	ClapTrap::rangeAttack(std::string const &target)
{
	std::cout << this->type << " " << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->type << " "  << this->name << " attacks " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->armorDamageReduction)
		amount = 0;
	else
		amount -= this->armorDamageReduction;
	
	if (amount >= this->hitPoint)
		this->hitPoint = 0;
	else
		this->hitPoint -= amount;
	std::cout << this->type << " " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoint += amount;
	if (this->hitPoint > this->maxHitPoint)
		this->hitPoint = this->maxHitPoint;
	std::cout << this->type << " " << this->name << " be repaired " << amount << " points of health!" << std::endl;
}

void	ClapTrap::showHitPoint()
{
	std::cout << this->type << " " << this->name << " hit_point : " << this->hitPoint << std::endl;
}