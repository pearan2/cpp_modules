/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:46:43 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 22:27:12 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &name, std::string const &target) : Form(name, 75, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm default", 75, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &origin) : Form(origin)
{
	this->setTarget(origin.getTarget());
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &origin)
{
	this->setTarget(origin.getTarget());
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &bure) const
{
	Form::execute(bure);

	std::cout << "* VRRRRR BZZZZZZ VRRRRRR *" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " robotomization is a failure" << std::endl;
}

