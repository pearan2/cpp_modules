/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:20:09 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 20:39:50 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int		main()
{
	std::cout << "============= empty arr create test ===============" << std::endl;

	Array<std::string> arr_str;
	Array<float> arr_float;
	Array<double> arr_double;

	std::cout << "============= empty arr create test end ===========" << std::endl;


	std::cout << "============= exception test ======================" << std::endl;
	
	try
	{
		Array<std::string> arr_str;
		arr_str[0] = "hello!";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Array<std::string> arr_str(5);
		arr_str[-1] = "hello!!";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Array<double> arr_double(100);
		arr_double[0] = -12394.55123;
		std::cout << "index 0 access" << std::endl;
		arr_double[99] = 123.55;
		std::cout << "index 99 access" << std::endl;
		arr_double[100] = 12313;
		std::cout << "index 100 access" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "============= exception test ======================" << std::endl;


	std::cout << "============= normal test =========================" << std::endl;
	Array<int> arr_int(10);

	for (unsigned int i=0; i<arr_int.size(); i++)
		arr_int[i] = i;
	arr_int.show_all();

	Array<std::string> arr_string(5);
	arr_string[0] = "one";
	arr_string[1] = "two";
	arr_string[2] = "three";
	arr_string[3] = "four";
	arr_string[4] = "five";

	for (unsigned int i =0; i<arr_string.size(); i++)
		std::cout << arr_string[i] << std::endl;

	std::cout << "============= normal test end =====================" << std::endl;

	std::cout << "====== deep copy and const Array read and write test ======" << std::endl;

	const Array<int> arr_int2(arr_int);
	const Array<int> arr_int3 = arr_int;
	for (unsigned int i=0; i<arr_int.size(); i++)
		arr_int[i] = i + 100;
	arr_int.show_all();

	for (unsigned int i=0; i<arr_int2.size(); i++)
		std::cout << arr_int2[i] << std::endl;
		
	std::cout << " ============= " << std::endl;

	for (unsigned int i=0; i<arr_int3.size(); i++)
		std::cout << arr_int3[i] << std::endl;

	// const instance write access test > not compiled

	// arr_int2[5] = 7;
	// arr_int3[10] = 123;	

	std::cout << "====== deep copy and const Array read and write test end ==" << std::endl;

}