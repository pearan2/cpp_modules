/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:11:11 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 23:55:56 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//"shrubbery creation"
//"presidential pardon"
//"robotomy request"

#include "Intern.hpp"

Form	*makePresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*makeRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*makeShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::Intern()
{
	this->pairs[0].form_name = "shrubbery creation";
	this->pairs[0].form_constructor = makeShrubberyCreationForm;
	this->pairs[1].form_name = "presidential pardon";
	this->pairs[1].form_constructor = makePresidentialPardonForm;
	this->pairs[2].form_name = "robotomy request";
	this->pairs[2].form_constructor = makeRobotomyRequestForm;
}

Intern::Intern(const Intern& origin)
{
	(void) origin;
	this->pairs[0].form_name = "shrubbery creation";
	this->pairs[0].form_constructor = makeShrubberyCreationForm;
	this->pairs[1].form_name = "presidential pardon";
	this->pairs[1].form_constructor = makePresidentialPardonForm;
	this->pairs[2].form_name = "robotomy request";
	this->pairs[2].form_constructor = makeRobotomyRequestForm;
}

Intern& Intern::operator=(const Intern& origin)
{
	(void) origin;
	return (*this);
}

Intern::~Intern()
{
	
}

const char* Intern::InternException::what() const throw()
{
	return "Intern Exception : Intern is not able to create the form asked";
}

Form	*Intern::makeForm(std::string const &form_name, std::string const &target)
{
	for (int i=0; i<3; i++)
	{
		if (this->pairs[i].form_name == form_name)
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return (this->pairs[i].form_constructor(target));
		}
	}
	std::cout << "Intern is not able to create the form asked" << std::endl;
	throw Intern::InternException();
}