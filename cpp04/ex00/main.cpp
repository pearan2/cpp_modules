/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:01:59 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 04:40:49 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Grunt.hpp"

int main()
{
	std::cout << "========== constructor test ============" << std::endl;
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	Grunt honlee("honlee");
	std::cout << "========== constructor test end ========" << std::endl;

	std::cout << "========== ostream override test =======" << std::endl;
	std::cout << robert << jim << joe << honlee;
	std::cout << "========== ostream override test end ===" << std::endl;

	std::cout << "========== polymorph and getPolymorphed test =========" << std::endl;
	robert.polymorph(jim);
	jim.getPolymorphed();
	robert.polymorph(joe);
	joe.getPolymorphed();
	robert.polymorph(honlee);
	honlee.getPolymorphed();
	Victim temp = static_cast<Victim>(joe);
	robert.polymorph(temp);
	std::cout << "========== polymorph and getPolymorphed test end =====" << std::endl;

	
	Sorcerer blank(robert);

	std::cout << "============ copy constructor test ===============" <<std::endl;
	Victim franck(jim);
	Peon jean(joe);
	Grunt honlee2 = honlee;
	std::cout << "============ copy constructor test end ===========" <<std::endl;

	std::cout << blank << franck << jean << honlee2;

	franck = jim;
	blank.polymorph(franck);
	franck.getPolymorphed();
	blank = robert;
	jean = joe;
	blank.polymorph(jean);
	jean.getPolymorphed();

	std::cout << "=============== destructor called start ==============" << std::endl;

	return (0);
}
