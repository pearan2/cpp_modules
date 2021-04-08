/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:55:45 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 17:20:43 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main()
{
	srand(clock());

	ZombieHorde horde(5);
	horde.announce();

	ZombieHorde horde2(-1);
	horde2.announce();
}