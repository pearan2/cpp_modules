/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:42:59 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 12:43:43 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private :
		PresidentialPardonForm();
	public :
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &origin);
		PresidentialPardonForm& operator=(PresidentialPardonForm const &origin);
		virtual ~PresidentialPardonForm();

		//overidding
		void execute(Bureaucrat const &bure) const;
};

#endif