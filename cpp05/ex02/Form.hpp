/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 04:49:27 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 17:36:12 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <cstdbool>
class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
	private :
		Form();
		std::string const name;
		//signed 는 예약어이기 때문에 signed 라고 변수를 쓸순없다.
		bool	bool_signed;
		unsigned		const signGrade;
		unsigned		const executeGrade;
		std::string	target;

	public :
		Form(std::string const &name, unsigned const signGrade, unsigned const executeGrade);
		Form(Form const &origin);
		Form& operator=(Form const &origin);
		virtual ~Form();

		class GradeTooHighException: public std::exception
		{
			virtual const char * what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			virtual const char * what() const throw();
		};

		class FormAlreadySignedException: public std::exception 
		{
			virtual const char* what() const throw();
		};

		class UnsignedFormException: public std::exception
		{
			virtual const char * what() const throw();	
		};

		std::string const getName() const;
		unsigned int	getSignGrade() const;
		unsigned int	getExecuteGrade() const;
		std::string			getTarget() const;

		void			setTarget(std::string const &target);
		
		bool isSigned() const;
		void beSigned(Bureaucrat const &bure);
		virtual void execute(Bureaucrat const &bure) const = 0;		
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif