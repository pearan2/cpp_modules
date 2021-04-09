/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:01:22 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 20:15:36 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int			main()
{
	srand(clock());
	
	FragTrap honlee_one("honlee_mk1");
	FragTrap honlee_two("honlee_mk2");

	std::cout << "=======================================" << std::endl;
	honlee_one.rangeAttack("honlee_mk2");
	honlee_two.takeDamage(20);
	honlee_two.showHitPoint();

	honlee_one.meleeAttack("honlee_mk2");
	honlee_two.takeDamage(30);
	honlee_two.showHitPoint();
	honlee_two.beRepaired(30);
	honlee_two.showHitPoint();

	FragTrap honlee_three(honlee_two);

	honlee_two.beRepaired(123123123);
	honlee_two.showHitPoint();
	honlee_two.takeDamage(12301);
	honlee_two.showHitPoint();
	honlee_two.beRepaired(77);
	honlee_two.showHitPoint();

	honlee_three.showHitPoint();

	honlee_one.vaulthunter_dot_exe("honlee_mk2");
	honlee_one.vaulthunter_dot_exe("honlee_mk2");
	honlee_one.vaulthunter_dot_exe("honlee_mk2");
	honlee_one.vaulthunter_dot_exe("honlee_mk2");
	honlee_one.vaulthunter_dot_exe("honlee_mk2");
	std::cout << "=======================================" << std::endl;
}