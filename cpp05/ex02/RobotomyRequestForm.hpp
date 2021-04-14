/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:46:45 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 21:25:01 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private :
		RobotomyRequestForm();
	public :
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(std::string const &name, std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &origin);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &rigin);
		virtual ~RobotomyRequestForm();

		//overidding
		void execute(Bureaucrat const &bure) const;
};

#endif