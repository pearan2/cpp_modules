/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:08:52 by honlee            #+#    #+#             */
/*   Updated: 2021/04/09 00:45:30 by honlee           ###   ########.fr       */
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

FragTrap::FragTrap(const FragTrap& copy)
{
	//leak 검사 해볼것.
	*this = copy;

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
	
	return (*this);
	std::cout << "Assignation operator called" << std::endl;
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
}