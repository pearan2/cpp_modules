/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:40:51 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 22:02:43 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <sstream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private :
		ShrubberyCreationForm();
		static std::string const trees[3];
	public :
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(std::string const &name, std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &origin);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &origin);
		virtual ~ShrubberyCreationForm();

		class FileOpenException : public std::exception
		{
			virtual const char * what() const throw();	
		};

		class FileWriteException : public std::exception
		{
			virtual const char * what() const throw();
		};

		//overidding
		void execute(Bureaucrat const &bure) const;
};

#endif