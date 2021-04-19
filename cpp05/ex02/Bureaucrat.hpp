/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:01:16 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 10:41:21 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Form;
# include "Form.hpp"

class Bureaucrat
{
	private :
		Bureaucrat();
		const std::string  name;
		unsigned int grade;
	
	public :
		Bureaucrat(std::string const &name, unsigned int grade);
		Bureaucrat(Bureaucrat const &origin);
		Bureaucrat& operator=(Bureaucrat const &origin);
		virtual ~Bureaucrat();

		class GradeTooHighException: public std::exception
		{
			virtual const char * what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			virtual const char * what() const throw();
		};

		std::string getName() const;
		unsigned int getGrade() const;

		void incrementGrade();
		void decrementGrade();
		void signForm(Form &form) const;
		void executeForm(Form const &form) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bure);

#endif