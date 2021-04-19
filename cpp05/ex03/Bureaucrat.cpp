/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:16:29 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 13:53:55 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Exception : Grade too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Exception : Grade too Low");
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

void		Bureaucrat::signForm(Form &form) const
{
	if (form.isSigned() == true)
	{
		std::cout << *this << " cannot sign " << form
				<< " because the form is already signed." << std::endl;
	}
	else if (form.getSignGrade() < this->grade)
	{
		std::cout << *this << " cannot sign " << form
				<< " because it's grade is too low." << std::endl;
	}
	else
		std::cout << *this << " signs " << form << std::endl;
	form.beSigned(*this);
}

void Bureaucrat::executeForm(Form const &form) const
{
	if (!form.isSigned())
	{
		std::cout << *this << " cannot execute " << form
				<< " because the form is unsigned." << std::endl;
	}
	else if (form.getExecuteGrade() < this->grade)
	{
		std::cout << *this << " cannot execute " << form
				<< " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " executes " << form << std::endl;
	}
	form.execute(*this);
}


std::ostream &operator<<(std::ostream &out, Bureaucrat const &bure)
{
	out << "Bureaucrat " << bure.getName() << " (Grade " << bure.getGrade() << ")";
	return (out); 
}

