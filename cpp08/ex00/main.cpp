/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 22:13:36 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 22:46:56 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>
#include <iostream>

template <typename T>
void finder(T &con, int value)
{
	typename T::iterator iter = easyfind(con, value);
	if (iter == con.end())
		std::cout << "can not find!" << std::endl;
	else
		std::cout << "find! value : " << *iter << std::endl;
}

int			main()
{
	std::vector<int> vector;
	std::list<int> list;
	std::set<int> set;
	std::multiset<int> multiset;

	srand(clock());

    vector.push_back(2);
    vector.push_back(-5);
    vector.push_back(99);
    vector.push_back(0);

    list.push_back(8);
    list.push_back(-895);
    list.push_back(785);
    list.push_back(156);

	set.insert(0);
	set.insert(1);
	set.insert(2);
	set.insert(3);

	multiset.insert(0);
	multiset.insert(1);
	multiset.insert(2);
	multiset.insert(3);

	std::cout << "================ vector find test =================" << std::endl;
	finder(vector, 2);
	finder(vector, -5);	
	finder(vector, 99);
	finder(vector, 0);
	finder(vector, -123);
	finder(vector, 2232);
	std::cout << "================ vector find test end =============" << std::endl;


	std::cout << "================ list find test =================" << std::endl;
	finder(list, -895);
	finder(list, 785);
	finder(list, 12312414);
	std::cout << "================ list find test end =============" << std::endl;


	std::cout << "================ set find test =================" << std::endl;
	finder(set, 0);
	finder(set, 1);
	finder(set, 7);
	std::cout << "================ set find test end =============" << std::endl;


	std::cout << "================ multiset find test =================" << std::endl;
	finder(multiset, -895);
	finder(multiset, 2);
	finder(multiset, 3);
	std::cout << "================ multiset find test end =============" << std::endl;
}