/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:02:35 by honlee            #+#    #+#             */
/*   Updated: 2021/04/20 22:09:29 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>

# define SPAN_MAX 100000
# define SPAN_MAX2 200000

int main()
{
	std::cout << "======================== basic test =========================" << std::endl;

	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2 = Span(SPAN_MAX);

	for (unsigned int i = 0; i < SPAN_MAX; i++)
		sp2.addNumber(i);

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	Span sp1 = Span(SPAN_MAX2);
	for (unsigned int i = 1; i < SPAN_MAX2; i++)
	{
		sp1.addNumber(i * 5);
	}
	//std::cout << 5 * (200000 - 1) << std::endl;
	//sp1.addNumber(4);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	std::cout << "======================== basic test end======================" << std::endl;


	std::cout << "======================== under 2 test =======================" << std::endl;
	try
	{
		Span sp3 = Span(0);
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp3 = Span(1);
		sp3.addNumber(500);
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "======================== under 2 test end====================" << std::endl;

	std::cout << "======================== over max length test =======================" << std::endl;
	try
	{
		Span sp3 = Span(1);
		sp3.addNumber(500);
		sp3.addNumber(14);
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "======================== over max length test end====================" << std::endl;


	std::cout << "======================== already exits test =======================" << std::endl;


	try
	{
		Span sp3 = Span(3);
		sp3.addNumber(500);
		sp3.addNumber(14);
		sp3.addNumber(500);
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "======================== already exits test end====================" << std::endl;

	std::cout << "======================== addNumber with iter test ====================" << std::endl;

	Span sp_add_with_num(10);
	std::vector<int> vec(10);
	for(int i=0; i<10; i++)
		vec[i] = i * 2;
	sp_add_with_num.addNumber(vec.begin(), vec.end());
	
	std::cout << sp_add_with_num.shortestSpan() << std::endl;
	std::cout << sp_add_with_num.longestSpan() << std::endl;

	std::cout << "======================== addNumber with iter test end ================" << std::endl;

	std::cout << "======================== addNumber with iter error test ====================" << std::endl;

	try
	{
		Span sp_temp(9);
		sp_temp.addNumber(vec.begin(), vec.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "======================== addNumber with iter error test ====================" << std::endl;

}