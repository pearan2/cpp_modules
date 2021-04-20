/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:11:11 by honlee            #+#    #+#             */
/*   Updated: 2021/04/20 18:13:27 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

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

	std::stack<int> s(mstack);
	return 0;
}