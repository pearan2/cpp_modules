/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:51:38 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 15:15:19 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <stdlib.h>
# include <time.h>

class ZombieEvent
{
	private : 
		std::string type;

	public :
		ZombieEvent();
		~ZombieEvent();

		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		Zombie* randomChump();
};

#endif