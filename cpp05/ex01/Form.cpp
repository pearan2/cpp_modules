/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 04:59:26 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 22:08:03 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, unsigned int const signGrade, unsigned int const executeGrade) : name(name), bool_signed(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if (this->signGrade < 1 || this->executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->signGrade > 150 || this->executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &origin) : name(origin.name), bool_signed(false), signGrade(origin.signGrade), executeGrade(origin.executeGrade)
{
	if (this->signGrade < 1 || this->executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->signGrade > 150 || this->executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form &Form::operator=(Form const &origin)
{
	this->bool_signed = origin.bool_signed;
	return (*this);
}

Form::~Form()
{
	
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form Exception : Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form Exception : Grade too Low";
}

const char* Form::FormAlreadySignedException::what() const throw()
{
	return "Form Exception : The Form is already signed";
}


std::string const Form::getName() const
{
	return (this->name);
}

unsigned int	Form::getSignGrade() const
{
	return (this->signGrade);
}

unsigned int Form::getExecuteGrade() const
{
	return (this->executeGrade);
}

bool Form::isSigned() const
{
	return (this->bool_signed);
}

void	Form::beSigned(Bureaucrat const &bure)
{
	if (bure.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	else if (this->bool_signed == true)
		throw Form::FormAlreadySignedException();
	this->bool_signed = true;
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "(" << form.getName() << ")[" << ((form.isSigned()) ? "Signed" : "Unsigned")
		<< "]<Sign:" << form.getSignGrade() << ",Execute:"
		<< form.getExecuteGrade() << ">";
	return (out);
}