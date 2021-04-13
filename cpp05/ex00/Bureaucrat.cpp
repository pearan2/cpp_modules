/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:16:29 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 23:58:11 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char * BureaucratException::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * BureaucratException::GradeTooLowException::what() const throw()
{
	return ("Grade too Low");
}

Bureaucrat::Bureaucrat()
{
	
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade)
{
	this->name = name;
	this->grade = grade;
	if (this->grade < 1)
		throw BureaucratException::GradeTooHighException();
	else if (this->grade > 150)
		throw BureaucratException::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &origin)
{
	this->grade = origin.grade;
	this->name = origin.name;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &origin)
{
	this->grade = origin.grade;
	this->name = origin.name;
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
		throw BureaucratException::GradeTooHighException();
	else
		this->grade -= 1;
}

void		Bureaucrat::decrementGrade()
{
	if (this->grade >= 150)
		throw BureaucratException::GradeTooLowException();
	else
		this->grade += 1;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bure)
{
	out << "Bureaucrat " << bure.getName() << " (Grade " << bure.getGrade() << ")";
	return (out); 
}
