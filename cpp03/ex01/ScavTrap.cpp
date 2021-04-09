/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:20:10 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 21:29:05 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->energyPoint = 50;
	this->maxEnergyPoint = 50;
	this->level = 1;
	this->name = "default";
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;

	std::cout << "ScavTrap default contructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->energyPoint = 50;
	this->maxEnergyPoint = 50;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;

	std::cout << "ScavTrap name contructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& origin)
{
	this->hitPoint = origin.hitPoint;
	this->maxHitPoint = origin.maxHitPoint;
	this->energyPoint = origin.energyPoint;
	this->maxEnergyPoint = origin.maxEnergyPoint;
	this->level = origin.level;
	this->name = origin.name;
	this->meleeAttackDamage = origin.meleeAttackDamage;
	this->rangedAttackDamage = origin.rangedAttackDamage;
	this->armorDamageReduction = origin.armorDamageReduction;

	std::cout << "ScavTrap copy contructor called" << std::endl;	
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& origin)
{
	this->hitPoint = origin.hitPoint;
	this->maxHitPoint = origin.maxHitPoint;
	this->energyPoint = origin.energyPoint;
	this->maxEnergyPoint = origin.maxEnergyPoint;
	this->level = origin.level;
	this->name = origin.name;
	this->meleeAttackDamage = origin.meleeAttackDamage;
	this->rangedAttackDamage = origin.rangedAttackDamage;
	this->armorDamageReduction = origin.armorDamageReduction;
	
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	return (*this);		
}

void	ScavTrap::rangeAttack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->armorDamageReduction)
		amount = 0;
	else
		amount -= this->armorDamageReduction;
	
	if (amount >= this->hitPoint)
		this->hitPoint = 0;
	else
		this->hitPoint -= amount;
	std::cout << "ScavTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->hitPoint += amount;
	if (this->hitPoint > this->maxHitPoint)
		this->hitPoint = this->maxHitPoint;
	std::cout << "ScavTrap " << this->name << " be repaired " << amount << " points of health!" << std::endl;
}

void	ScavTrap::showHitPoint()
{
	std::cout << "ScavTrap " << this->name << " hit_point : " << this->hitPoint << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string randomCallenges[] = 
	{
		" gives random 0 challenge to ",
		" gives random 1 challenge to ",
		" gives random 2 challenge to ",
		" gives random 3 challenge to ",
		" gives random 4 challenge to ",
		" gives random 5 challenge to ",
		" gives random 6 challenge to ",
		" gives random 7 challenge to "
	};

	if (this->energyPoint < 25)
		std::cout << "ScavTrap " << this->name << " Not enough energy point" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << randomCallenges[rand() % 8] << target <<std::endl;
		this->energyPoint -= 25;
	}
}