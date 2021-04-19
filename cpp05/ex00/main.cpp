/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:34:39 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 10:45:05 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat francis("Francis", 3);
	std::cout << francis << std::endl;
	francis.incrementGrade();
	std::cout << francis << std::endl;
	francis.decrementGrade();
	std::cout << francis << std::endl;

	std::cout << "========== set 0 test ==========" << std::endl;
	try
	{
		Bureaucrat jack("Jack", 0);
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "========== set 0 test end ======" << std::endl;

	std::cout << "========== set 1000 test ==========" << std::endl;
	try
	{
		Bureaucrat jack("Jack", 1000);
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "========== set 1000 test end ======" << std::endl;
	
	std::cout << "========== set 1 and inc test ==========" << std::endl;	
	try
	{
		Bureaucrat jack("Jack", 1);
		std::cout << jack << std::endl;
		jack.incrementGrade();
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "========== set 1 and inc test end ======" << std::endl;
	
	
	std::cout << "========== set 150 and dec test ==========" << std::endl;		
	try
	{
		Bureaucrat jack("Jack", 150);
		std::cout << jack << std::endl;
		jack.decrementGrade();
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "========== set 150 and dec test end ======" << std::endl;


	return (0);
}