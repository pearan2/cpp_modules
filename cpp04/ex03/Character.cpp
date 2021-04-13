/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:52:10 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 21:15:16 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->name = "default";
	for (int i=0; i<4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string const &name)
{
	this->name = name;
	for (int i=0; i<4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const &origin)
{
	this->name = origin.name;
	for (int i=0; i<4; i++)
	{
		if (origin.inventory[i] != NULL)
			this->inventory[i] = origin.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character& Character::operator=(Character const &origin)
{
	this->name = origin.name;
	for (int i=0; i<4; i++)
		delete this->inventory[i];
	for (int i=0; i<4; i++)
	{
		if (origin.inventory[i] != NULL)
			this->inventory[i] = origin.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return (*this);
}

Character::~Character()
{
	for (int i=0; i<4; i++)
		delete this->inventory[i];		
}

std::string const		&Character::getName() const
{
	return (this->name);
}

void					Character::equip(AMateria *ama)
{
	if (ama == NULL)
		return ;
	for (int i=0; i<4; i++)
		if (this->inventory[i] == ama)
			return ;
	for (int i=0; i<4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = ama;
			break ;
		}
	}
}

void					Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->inventory[idx] = NULL;
}

void					Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || this->inventory[idx] == NULL)
		return ;
	this->inventory[idx]->use(target);
}
