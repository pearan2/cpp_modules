/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 14:42:26 by ncolomer          #+#    #+#             */
/*   Updated: 2021/04/19 10:26:39 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << "================= learnMateria test =================" << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(NULL);
	std::cout << "================= learnMateria test end =============" << std::endl;

	ICharacter* me = new Character("me");

	AMateria* tmp = NULL;
	AMateria* first = NULL;
	std::cout << "================= createMateria and equip test ================" << std::endl;

	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	first = tmp;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	me->equip(NULL);

	std::cout << "================= createMateria and equip test end ============" << std::endl;

	std::cout << "================= materia exp: test ===========================" << std::endl;

	ICharacter* bob = new Character("bob");
	me->use(-1, *bob);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	me->unequip(0);
	me->unequip(0);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "materia exp: " << first->getXP() << std::endl;
	me->use(3, *bob);
	me->unequip(-1);
	me->equip(first);

	std::cout << "================= materia exp: test end ======================" << std::endl;

	std::cout << "================= copy and operator= test ===========================" << std::endl;

	MateriaSource src2( *static_cast<MateriaSource *>(src) );
	MateriaSource src3 = *static_cast<MateriaSource *>(src);
	AMateria *temp2;
	AMateria *temp3;

	temp2 = src2.createMateria("ice");
	bob->equip(temp2);
	bob->use(0, *me);
	temp3 = src3.createMateria("cure");
	bob->equip(temp3);
	bob->use(1, *me);
	bob->use(2, *me);

	std::cout << "temp2 materia exp: " << temp2->getXP() << std::endl;
	std::cout << "temp3 materia exp: " << temp3->getXP() << std::endl;

	Character me2( *static_cast<Character *>(bob) );

	me2.use(0, *bob);
	me2.use(1, *bob);
	me2.use(2, *bob);

	std::cout << "temp2 materia exp: " << temp2->getXP() << std::endl;
	std::cout << "temp3 materia exp: " << temp3->getXP() << std::endl;


	Character me3 = me2;
	Ice *ice = new Ice(*static_cast<Ice *>(temp2));
	Ice ice2;
	ice2 = *ice;
	me3.equip(static_cast<AMateria *>(ice));
	me3.use(2, *me);

	std::cout << "temp2 materia exp: " << temp2->getXP() << std::endl;
	std::cout << "temp3 materia exp: " << temp3->getXP() << std::endl;

	std::cout << "================= copy and operator= test end ===========================" << std::endl;

	delete bob;
	delete me;
	delete src;
	return (0);
}
