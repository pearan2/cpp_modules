/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:04:51 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 23:51:16 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

typedef struct		s_pair
{
	std::string		form_name;
	Form			*(*form_constructor)(std::string const &);
}					t_pair;

class Intern
{
	private :
		t_pair pairs[3];
	public :
		Intern();
		Intern(const Intern& origin);
		virtual ~Intern();
		Intern &operator=(const Intern& origin);

		class InternException : public std::exception
		{
			virtual const char * what() const throw();
		};

		Form		*makeForm(std::string const &form_name, std::string const & target);
};

//https://stackoverflow.com/questions/954548/how-to-pass-a-function-pointer-that-points-to-constructor

Form *makePresidentialPardonForm(std::string const & target);
Form *makeRobotomyRequestForm(std::string const & target);
Form *makeShrubberyCreationForm(std::string const & target);

#endif