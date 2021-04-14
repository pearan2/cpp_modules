/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:19:24 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 18:20:37 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private :
		PresidentialPardonForm();
		std::string const target;
	public :
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(std::string const &name, std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm& const origin);
		PresidentialPardonForm& operator=(PresidentialPardonForm& const origin);
		virtual ~PresidentialPardonForm();

		//overidding
		void execute(Bureaucrat const &bure) const;
};

#endif