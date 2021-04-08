/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:55:49 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 17:20:10 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string		getRandomName(void)
{
	std::string		ret = "";

	for (int i=0; i<10; i++)
		ret += ((rand() % (126 - 33 + 1)) + 33);
	return (ret);
}

ZombieHorde::ZombieHorde()
{
	
}

ZombieHorde::ZombieHorde(int numOfZombies)
{
	if (numOfZombies < 1)
	{
		std::cout << "value can not be under 1" << std::endl;
		numOfZombies = 1;
	}
	this->numOfZombies = numOfZombies;

	this->zombies = new Zombie*[numOfZombies];
	for (int i = 0; i < this->numOfZombies; i++)
		zombies[i] = new Zombie("Basic type", getRandomName());
}

ZombieHorde::~ZombieHorde()
{
	for (int i = 0; i < this->numOfZombies; i++)
		delete this->zombies[i];
	delete this->zombies;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->numOfZombies; i++)
		this->zombies[i]->announce();
}