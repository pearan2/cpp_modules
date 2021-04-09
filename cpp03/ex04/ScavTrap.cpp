/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:32:24 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 21:38:10 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, "ScavTrap", "default", 20, 15, 3)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, "ScavTrap", name, 20, 15, 3)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &origin)
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

	std::cout << "ScavTrap copy contructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& origin)
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

	std::cout << "ScavTrap Assignation operator called" << std::endl;

	return (*this);
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