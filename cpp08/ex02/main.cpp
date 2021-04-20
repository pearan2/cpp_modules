/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:11:11 by honlee            #+#    #+#             */
/*   Updated: 2021/04/20 19:44:08 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>

int main()
{
	std::cout << "================== mutant stack test ================" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top : " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "top : " << mstack.top() << std::endl;
	std::cout << "size : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	for(MutantStack<int>::iterator iter = mstack.begin(); iter != mstack.end(); iter++)
		std::cout << "value : " << *iter << std::endl;

	std::cout << "================== mutant stack test end=============" << std::endl;

	std::cout << "================== list test ========================" << std::endl;

	std::list<int> list;

	list.push_back(5);
	list.push_back(17);

	std::cout << "top : " << list.front() << std::endl;

	list.pop_front();
	std::cout << "top : " << list.front() << std::endl;
	std::cout << "size : " << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	for(std::list<int>::iterator iter = list.begin(); iter != list.end(); iter++)
		std::cout << "value : " << *iter << std::endl;
	
	std::cout << "================== list test end=====================" << std::endl;

	std::cout << "================== copy constructor test ============" << std::endl;
	MutantStack<int> s_copy(mstack);
	MutantStack<int> s_oper = mstack;

	s_copy.pop();
	s_copy.pop();
	s_copy.pop();
	s_copy.push(9991);
	s_copy.push(9992);
	s_copy.push(9993);


	for(MutantStack<int>::iterator iter = s_copy.begin(); iter != s_copy.end(); iter++)
		std::cout << *iter << std::endl;

	std::cout << "===============================" << std::endl;

	s_oper.pop();
	s_oper.pop();
	s_oper.pop();
	s_oper.push(9994);
	s_oper.push(9995);
	s_oper.push(9996);

	for(MutantStack<int>::iterator iter = s_oper.begin(); iter != s_oper.end(); iter++)
		std::cout << *iter << std::endl;

	std::cout << "================== copy constructor test ============" << std::endl;
	
	std::cout << "================== const instance test ==============" << std::endl;

	try
	{
		const MutantStack<int> const_stack = s_oper;
		MutantStack<int>::const_iterator iter = const_stack.begin();
		std::cout << *iter << std::endl;
		//*iter = 5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "================== const instance test ==============" << std::endl;

	return 0;
}