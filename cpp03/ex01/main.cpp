/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:32:02 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 21:36:23 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	srand(clock());
	
	FragTrap frag_one("frag_mk1");
	FragTrap frag_two("frag_mk2");

	ScavTrap scav_one("scav_mk1");
	ScavTrap scav_default;

	std::cout << "===================================================" << std::endl;

	frag_one.meleeAttack("scav_mk1");
	scav_one.takeDamage(30);
	scav_one.beRepaired(17);
	scav_one.showHitPoint();

	scav_default.challengeNewcomer("frag_mk2");
	scav_default.challengeNewcomer("frag_mk2");
	scav_default.challengeNewcomer("frag_mk2");

	scav_default.rangeAttack("frag_mk2");
	frag_two.takeDamage(15);
	frag_two.vaulthunter_dot_exe("default");
	frag_two.vaulthunter_dot_exe("default");
	frag_two.vaulthunter_dot_exe("default");
	frag_two.vaulthunter_dot_exe("default");
	frag_two.vaulthunter_dot_exe("default");

	std::cout << "===================================================" << std::endl;
}