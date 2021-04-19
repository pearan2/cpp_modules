/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 05:18:43 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 13:55:48 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat francis("Francis", 100);
	std::cout << francis << std::endl;

	Bureaucrat copy(francis);
	std::cout << copy << std::endl;

	std::cout << "================== basic sign test =================" << std::endl;

	Form form1("Taxes", 100, 50);
	std::cout << form1 << std::endl;
	form1.beSigned(francis);
	std::cout << form1 << std::endl;

	std::cout << "================== basic sign test end ==============" << std::endl;

	std::cout << "================== create form value test ===========" << std::endl;

	try
	{
		Form form_under_1("under_one", 0, 50);
		std::cout << form_under_1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	try
	{
		Form form_over_150("over_150", 151, 50);
		std::cout << form_over_150 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form form_under_1_2("under_one", 50, 0);
		std::cout << form_under_1_2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	try
	{
		Form form_over_150_2("under_one", 50, 151);
		std::cout << form_over_150_2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "================== create form value test end =======" << std::endl;


	std::cout << "================== can't sign test ==================" << std::endl;
	Form form2("NDA", 99, 50);
	std::cout << form2 << std::endl;
	try
	{
		francis.signForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form2 << std::endl;

	std::cout << "================== can't sign test end ==============" << std::endl;


	std::cout << "================== already sign test ==================" << std::endl;
	Form form3("Other Paper", 101, 50);
	std::cout << form3 << std::endl;
	francis.signForm(form3);
	std::cout << form3 << std::endl;
	try
	{
		francis.signForm(form3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form3 << std::endl;

	std::cout << "================== already sign test end ==============" << std::endl;

	return (0);
}