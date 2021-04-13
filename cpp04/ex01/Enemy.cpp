/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:57:30 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 22:17:27 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	this->hp = -1;
	this->type = "default";
}

Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type)
{
}

Enemy::Enemy(const Enemy &origin)
{
	this->hp = origin.hp;
	this->type = origin.type;
}

Enemy::~Enemy()
{
	std::cout << this->type << " destroyed!!" << std::endl;
}

Enemy& Enemy::operator=(const Enemy &origin)
{
	this->hp = origin.hp;
	this->type = origin.type;
	return (*this);
}

std::string Enemy::getType() const
{
	return (this->type);
}

int			Enemy::getHP() const
{
	return (this->hp);
}

void		Enemy::takeDamage(int value)
{
	if (value < 0)
		return ;
	if (this->hp < value)
		this->hp = 0;
	else
		this->hp -= value;
}
