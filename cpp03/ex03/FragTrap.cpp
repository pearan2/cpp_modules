/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:22:33 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 21:30:15 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, "FragTrap", "default", 30, 20, 5)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, "FragTrap", name, 30, 20, 5)
{
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &origin)
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

	std::cout << "FragTrap copy contructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& origin)
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

	std::cout << "FragTrap Assignation operator called" << std::endl;

	return (*this);
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
