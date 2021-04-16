/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:45:10 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 23:52:01 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(100, 100, 120, 120, 1, "SuperTrap", "default", 60, 20, 5)
{
	
	std::cout << "SuperTrap default constructor called" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, "SuperTrap", name, 60, 20, 5)
{	
	std::cout << "SuperTrap name constructor called" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &origin)
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

	std::cout << "SuperTrap copy contructor called" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called" << std::endl;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& origin)
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

	std::cout << "SuperTrap Assignation operator called" << std::endl;

	return (*this);
}

void	SuperTrap::rangeAttack(std::string const &target)
{
	FragTrap::rangeAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}