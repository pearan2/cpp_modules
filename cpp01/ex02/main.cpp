/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:51:32 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 16:53:39 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int			main()
{
	ZombieEvent zombieEvent;
	Zombie		*zombie;

	srand(clock());

	zombie = new Zombie("newType", "honlee");
	zombie->announce();
	delete zombie;

	zombie = zombieEvent.newZombie("honlee2");
	zombie->announce();
	delete zombie;

	zombieEvent.setZombieType("setType");
	zombie = zombieEvent.newZombie("honlee3");
	zombie->announce();
	delete zombie;

	zombieEvent.setZombieType("setType2");
	zombie = zombieEvent.randomChump();
	zombie->announce();
	delete zombie;

	zombieEvent.setZombieType("setType3");
	zombie = zombieEvent.randomChump();
	zombie->announce();
	delete zombie;
}

