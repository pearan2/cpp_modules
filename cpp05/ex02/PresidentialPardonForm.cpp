/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:19:24 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 12:43:36 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm default", 25, 5)
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &origin) : Form(origin)
{
	this->setTarget(origin.getTarget());
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &origin)
{
	this->setTarget(origin.getTarget());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

void PresidentialPardonForm::execute(Bureaucrat const &bure) const
{
	Form::execute(bure);

	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}