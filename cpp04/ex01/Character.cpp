/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:06:56 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 22:11:07 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->name = "default";
	this->ap = 40;
	this->weapon = NULL;
}

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
}

Character::Character(const Character &origin)
{
	this->name = origin.name;
	this->ap = origin.ap;
	this->weapon = origin.weapon;
}

Character::~Character()
{
	
}

Character& Character::operator=(const Character &origin)
{
	this->name = origin.name;
	this->ap = origin.ap;
	this->weapon = origin.weapon;
	return (*this);
}

void		Character::recoverAP()
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void		Character::attack(Enemy *enemy)
{
	if (this->weapon == NULL)
		return ;
	if (this->ap < this->weapon->getApcost())
		return ;
	this->ap -= this->weapon->getApcost();
	std::cout << this->name<< " attack " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

void		Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

std::string	Character::getName() const
{
	return (this->name);
}

int			Character::getAP() const
{
	return (this->ap);
}

AWeapon		*Character::getWeapon() const
{
	return (this->weapon);
}

std::ostream &operator<<(std::ostream &out, const Character &character)
{
	if (character.getWeapon() == NULL)
		out << character.getName() << " has " << character.getAP() << " AP and is unarmed " << std::endl;
	else
		out << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	return (out);
}
