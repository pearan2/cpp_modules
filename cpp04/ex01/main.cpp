/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:56:12 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 22:19:48 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->attack(c);

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	std::cout << b->getType() << " remain HP : "<< b->getHP() << std::endl; 

	std::cout << "================ AP over test ==============" << std::endl;

	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;

	std::cout << "================ AP over test end =========" << std::endl;

	me->equip(pr);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;
	std::cout << b->getType() << " remain HP : "<< b->getHP() << std::endl;

	me->attack(b);
	std::cout << *me;
	std::cout << b->getType() << " remain HP : "<< b->getHP() << std::endl;

//	me->attack(b);
//	std::cout << *me;
//	std::cout << b->getType() << " remain HP : "<< b->getHP() << std::endl;

	

	me->attack(c);
	std::cout << *me;
	std::cout << c->getType() << " remain HP : "<< c->getHP() << std::endl;

	me->attack(c);
	std::cout << *me;
	std::cout << c->getType() << " remain HP : "<< c->getHP() << std::endl;


	me->attack(c);
	std::cout << *me;
	std::cout << c->getType() << " remain HP : "<< c->getHP() << std::endl;

	me->attack(c);
	std::cout << *me;
	std::cout << c->getType() << " remain HP : "<< c->getHP() << std::endl;

	me->attack(c);
	std::cout << *me;
	std::cout << c->getType() << " remain HP : "<< c->getHP() << std::endl;
	std::cout << "=================== ap under 0 test ==============" << std::endl;
	std::cout << "90 line  :  " << *me;
	me->attack(c);
	std::cout << *me;
	std::cout << c->getType() << " remain HP : "<< c->getHP() << std::endl;

	std::cout << "95 line  :  " << *me;
	me->attack(c);
	std::cout << *me;
	std::cout << c->getType() << " remain HP : "<< c->getHP() << std::endl;


	return 0;
}
