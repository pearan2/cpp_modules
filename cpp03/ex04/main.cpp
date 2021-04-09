/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:33:14 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 22:59:14 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int	main()
{
	srand(clock());
	
	SuperTrap super("super_mk1");
	std::cout << "===============================================" << std::endl;
	NinjaTrap ninja("ninja_mk1");
	FragTrap frag("frag_mk1");
	ScavTrap scav("scav_mk1");
	ClapTrap clap("clap_mk1");
	std::cout << "===============================================" << std::endl;

	super.showHitPoint();
	super.takeDamage(10);
	super.rangeAttack("none");
	super.meleeAttack("none");
	super.ninjaShoebox(frag);
	super.ninjaShoebox(scav);
	super.ninjaShoebox(clap);
	super.ninjaShoebox(ninja);
	super.vaulthunter_dot_exe("frag_mk1");
	super.vaulthunter_dot_exe("scav_mk1");
	super.vaulthunter_dot_exe("scav_mk1");
	
	std::cout << "===============================================" << std::endl;
}