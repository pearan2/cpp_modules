/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:33:14 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 22:14:25 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int	main()
{
	srand(clock());
	
	NinjaTrap ninja("ninja_mk1");
	FragTrap frag("frag_mk1");
	ScavTrap scav("scav_mk1");
	ClapTrap clap("clap_mk1");

	std::cout << "===============================================" << std::endl;

	ninja.rangeAttack("scav_mk1");
	scav.takeDamage(5);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(ninja);
	std::cout << "===============================================" << std::endl;
}