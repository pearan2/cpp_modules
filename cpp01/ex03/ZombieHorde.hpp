/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:55:52 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 17:16:58 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <stdlib.h>
# include <time.h>

class ZombieHorde
{
	private : 
		int numOfZombies;
		Zombie	**zombies;

	public	:
		ZombieHorde();
		ZombieHorde(int numOfZombies);
		~ZombieHorde();

		void	announce();
};

#endif