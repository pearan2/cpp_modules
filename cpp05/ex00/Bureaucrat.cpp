/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:16:29 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 13:53:17 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too Low");
}

Bureaucrat::Bureaucrat()
{
	
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade) : name(name)
{
	this->grade = grade;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &origin) : name(origin.name)
{
	this->grade = origin.grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &origin)
{
	this->grade = origin.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->name << " destroyed" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void		Bureaucrat::incrementGrade()
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade -= 1;
}

void		Bureaucrat::decrementGrade()
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade += 1;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bure)
{
	out << "Bureaucrat " << bure.getName() << " (Grade " << bure.getGrade() << ")";
	return (out); 
}
