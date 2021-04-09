/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:08:52 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 21:28:24 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->energyPoint = 100;
	this->maxEnergyPoint = 100;
	this->level = 1;
	this->name = "default";
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;

	std::cout << "FragTrap default contructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->energyPoint = 100;
	this->maxEnergyPoint = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;

	std::cout << "FragTrap name contructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& origin)
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

	std::cout << "FragTrap copy contructor called" << std::endl;	
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& origin)
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
	std::cout << "FragTrap Assignation operator called" << std::endl;

	return (*this);	
}

void	FragTrap::rangeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->armorDamageReduction)
		amount = 0;
	else
		amount -= this->armorDamageReduction;
	
	if (amount >= this->hitPoint)
		this->hitPoint = 0;
	else
		this->hitPoint -= amount;
	std::cout << "FR4G-TP " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->hitPoint += amount;
	if (this->hitPoint > this->maxHitPoint)
		this->hitPoint = this->maxHitPoint;
	std::cout << "FR4G-TP " << this->name << " be repaired " << amount << " points of health!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string randomAttacks[] = 
	{
		" attacks random 0 skill to ",
		" attacks random 1 skill to ",
		" attacks random 2 skill to ",
		" attacks random 3 skill to ",
		" attacks random 4 skill to ",
		" attacks random 5 skill to ",
		" attacks random 6 skill to ",
		" attacks random 7 skill to "
	};

	if (this->energyPoint < 25)
		std::cout << "FR4G-TP " << this->name << " Not enough energy point" << std::endl;
	else
	{
		std::cout << "FR4G-TP " << this->name << randomAttacks[rand() % 8] << target <<std::endl;
		this->energyPoint -= 25;
	}
}

void	FragTrap::showHitPoint()
{
	std::cout << "FR4G-TP " << this->name << " hit_point : " << this->hitPoint << std::endl;
}