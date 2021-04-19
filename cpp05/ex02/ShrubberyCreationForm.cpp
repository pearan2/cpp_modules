/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:43:31 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 12:21:25 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm default", 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &origin) : Form(origin.getName(), 145, 137)
{
	this->setTarget(origin.getTarget());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &origin)
{
	this->setTarget(origin.getTarget());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

const char* ShrubberyCreationForm::FileOpenException::what() const throw()
{
	return "ShrubberyCreationForm Exception : Cannot open file";
}

const char* ShrubberyCreationForm::FileWriteException::what() const throw()
{
	return "ShrubberyCreationForm Exception : Cannot write to the file";
}

//overidding
void ShrubberyCreationForm::execute(Bureaucrat const &bure) const
{
	Form::execute(bure);

	std::ofstream file_out(this->getTarget() + "_shrubbery");
	if (!file_out.is_open() || file_out.bad())
		throw FileOpenException();
	int numberOfTree = (rand() % 3) + 1;
	for (int i=0; i<numberOfTree; i++)
	{
		file_out << this->trees[rand() % 3];
		if (file_out.bad())
		{
			file_out << std::endl;
			file_out.close();
			throw FileWriteException();
		}
	}
	file_out << std::endl;
	file_out.close();
}

std::string const ShrubberyCreationForm::trees[3] = {
	"      /\\\n" \
	"     /\\*\\\n" \
	"    /\\O\\*\\\n" \
	"   /*/\\/\\/\\\n" \
	"  /\\O\\/\\*\\/\\\n" \
	" /\\*\\/\\*\\/\\/\\\n" \
	"/\\O\\/\\/*/\\/O/\\\n" \
	"      ||\n" \
	"      ||\n" \
	"      ||\n",
	"         v\n" \
	"        >X<\n" \
	"         A\n" \
	"        d$b\n" \
	"      .d\\$$b.\n" \
	"    .d$i$$\\$$b.\n" \
	"       d$$@b\n" \
	"      d\\$$$ib\n" \
	"    .d$$$\\$$$b\n" \
	"  .d$$@$$$$\\$$ib.\n" \
	"      d$$i$$b\n" \
	"     d\\$$$$@$b\n" \
	"  .d$@$$\\$$$$$@b.\n" \
	".d$$$$i$$$\\$$$$$$b.\n" \
	"        ###\n" \
	"        ###\n" \
	"        ###\n",
	"         *\n" \
	"        /|\\\n" \
	"       /*|O\\\n" \
	"      /*/|\\*\\\n" \
	"     /X/O|*\\X\\\n" \
	"    /*/X/|\\X\\*\\\n" \
	"   /O/*/X|*\\O\\X\\\n" \
	"  /*/O/X/|\\X\\O\\*\\\n" \
	" /X/O/*/X|O\\X\\*\\O\\\n" \
	"/O/X/*/O/|\\X\\*\\O\\X\\\n" \
	"        |X|\n" \
	"        |X|\n"
};