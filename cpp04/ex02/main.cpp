/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:19:35 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 09:43:27 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

#define UNITS	50

void copy_and_oper_test(const Squad &squad)
{
	std::cout << "========================= copy and operator= test ======================" << std::endl;

	Squad squad_copy(squad);
	Squad squad_oper;
	squad_oper = squad;

	for(int i=0; i<squad_copy.getCount(); i++)
	{
		int r = (rand() % 100);
		std::cout << i << ": ";
		if (r > 66)
			squad_copy.getUnit(i)->battleCry();
		else if (r > 33)
			squad_copy.getUnit(i)->rangedAttack();
		else
			squad_copy.getUnit(i)->meleeAttack();
	}

	for(int i=0; i<squad_oper.getCount(); i++)
	{
		int r = (rand() % 100);
		std::cout << i << ": ";
		if (r > 66)
			squad_oper.getUnit(i)->battleCry();
		else if (r > 33)
			squad_oper.getUnit(i)->rangedAttack();
		else
			squad_oper.getUnit(i)->meleeAttack();
	}

	std::cout << "========================= copy and operator= test end ======================" << std::endl;
}

int main(void)
{
	std::cout << "============================ basic test ============================" << std::endl;

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;


	std::cout << "============================ basic test end =======================" << std::endl;

	std::cout << "============================ basic input test =====================" << std::endl; 

	Squad squad;

	squad.push(new TacticalMarine);
	squad.push(new AssaultTerminator);
	for (int i = 2; i < UNITS; i++)
	{
		if ((rand() % 100) > UNITS)
			squad.push(new TacticalMarine);
		else
			squad.push(new AssaultTerminator);
	}
	for (int i = 0; i < UNITS; i++)
	{
		int r = (rand() % 100);
		std::cout << i << ": ";
		if (r > 66)
			squad.getUnit(i)->battleCry();
		else if (r > 33)
			squad.getUnit(i)->rangedAttack();
		else
			squad.getUnit(i)->meleeAttack();
	}
	std::cout << "============================ basic input test end =====================" << std::endl; 

	std::cout << "======================== exception handling test ========================" << std::endl;

	std::cout << squad.getCount() << " -> " << squad.push(NULL) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS - 1)) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS)) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS + 1)) << std::endl;
	std::cout << squad.getUnit(-1) << " " << squad.getUnit(10000) << std::endl;

	TacticalMarine *tac = new TacticalMarine(*static_cast<TacticalMarine*>(squad.getUnit(0)));
	std::cout << squad.getCount() << " -> " << squad.push(tac) << std::endl;

	

	tac = static_cast<TacticalMarine*>(squad.getUnit(0)->clone());
	std::cout << squad.getCount() << " -> " << squad.push(tac) << std::endl;
	AssaultTerminator *ast = new AssaultTerminator(*static_cast<AssaultTerminator*>(squad.getUnit(1)));
	std::cout << squad.getCount() << " -> " << squad.push(ast) << std::endl;
	ast = static_cast<AssaultTerminator*>(squad.getUnit(1)->clone());
	std::cout << squad.getCount() << " -> " << squad.push(ast) << std::endl;

	TacticalMarine tes = *static_cast<TacticalMarine*>(squad.getUnit(0));
	tes = *static_cast<TacticalMarine*>(squad.getUnit(0));
	AssaultTerminator aes = *static_cast<AssaultTerminator*>(squad.getUnit(1));
	aes = *static_cast<AssaultTerminator*>(squad.getUnit(1));

	
	std::cout << "======================== exception handling test end====================" << std::endl;
	

	copy_and_oper_test(squad);

	for (int i = 0; i < squad.getCount(); i++)
	{
		int r = (rand() % 100);
		std::cout << i << ": ";
		if (r > 66)
			squad.getUnit(i)->battleCry();
		else if (r > 33)
			squad.getUnit(i)->rangedAttack();
		else
			squad.getUnit(i)->meleeAttack();
	}

	std::cout << "=========================== return ===============================" << std::endl;

	return (0);
}
