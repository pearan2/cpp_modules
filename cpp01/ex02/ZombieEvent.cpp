/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:51:36 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 15:33:20 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string		getRandomName()
{
	std::string		ret;

	for (int i=0; i<10; i++)
		ret += ((rand() % (126 - 33 + 1)) + 33);
	return (ret);
}

ZombieEvent::ZombieEvent()
{
	this->type = "basic";
}

ZombieEvent::~ZombieEvent()
{
	std::cout << this->type << " ZombieEvent destroyed" << std::endl;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->type, name));
}

Zombie	*ZombieEvent::randomChump()
{
	return (new Zombie(this->type, getRandomName()));
}