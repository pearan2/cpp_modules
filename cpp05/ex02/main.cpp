/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 05:18:43 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 12:52:06 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main(void)
{
	srand(time(NULL));

	std::cout << "============== basic signed test ===============" << std::endl;

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat francis("Francis", 25);
	std::cout << francis << std::endl;

	Form *shrub = new ShrubberyCreationForm("home");
	shrub->beSigned(supervisor);

	Form *pres = new PresidentialPardonForm("Francis");
	std::cout << *pres << std::endl;
	

	Form *robot = new RobotomyRequestForm("Bender");
	std::cout << *robot << std::endl;
	robot->beSigned(supervisor);


	supervisor.signForm(*pres);
	std::cout << *shrub << std::endl;
	std::cout << *robot << std::endl;
	

	std::cout << "============== basic signed test end ===========" << std::endl;

	std::cout << "=============== basic execute test =============" << std::endl;

	robot->execute(supervisor);
	robot->execute(supervisor);
	pres->execute(supervisor);
	pres->execute(supervisor);
	shrub->execute(supervisor);

	supervisor.executeForm(*robot);
	supervisor.executeForm(*robot);
	supervisor.executeForm(*pres);
	supervisor.executeForm(*pres);
	supervisor.executeForm(*shrub);


	std::cout << "=============== basic execute test end =========" << std::endl;


	std::cout << "============= try catch test start ===============" << std::endl;

	try
	{
		francis.executeForm(*pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		RobotomyRequestForm robot = RobotomyRequestForm("Bender");
		std::cout << robot << std::endl;
		robot.execute(supervisor);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Francis");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		pres.execute(francis);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Francis");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		francis.executeForm(pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}