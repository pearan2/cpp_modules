/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 21:06:53 by honlee            #+#    #+#             */
/*   Updated: 2021/04/17 18:05:52 by honlee           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

bool		Converter::input_checker(const char *str)
{
	int		idx = -1;
	bool	dot_flag = false;
	bool	dot_next_flag = false;
	bool	f_flag = false;
	std::string sstr(str);
	if (sstr == "nan" || sstr == "+inf" || sstr == "-inf" || sstr == "inf" || sstr == "inff"
		|| sstr == "-inff" || sstr == "+inff" || sstr == "nanf"
	)
		return (true);
	else
	{
		if (sstr.length() == 0)
			return (false);
		if (str[0] == '-' || str[0] == '+')
		{
			if (sstr.length() == 1)
				return (false);
			else
				idx++;
		}
		while (str[++idx] != 0)
		{
			char c = str[idx];
			if (c == 'f')
			{
				if (f_flag == false)
				{
					if (dot_flag == true)
					{
						if (dot_next_flag == true)
							f_flag = true;
						else
							return (false);
					}
					f_flag = true;
				}
				else
					return (false);
			}
			else if (c == '.')
			{
				if (dot_flag == false)
				{
					if (f_flag == false)
						dot_flag = true;
					else
						return (false);
				}
				else
					return (false);
			}
			else
			{
				if (!(c >= '0' && c <= '9'))
					return (false);
				else
					if (dot_flag == true)
						dot_next_flag = true;
			}
		}
		if (f_flag == true && sstr[sstr.length() - 1] != 'f')
			return (false);
		return (true);
	}
}

bool Converter::finder(std::string const &input, const char *str)
{
	size_t ret = input.find(str);
    if (ret == std::string::npos) {
        //can not find
		return (false);
    }
	if (ret >= 0)
		return (true);
	return (false);
}

Converter::Converter()
{
    this->c_val = 0;
    this->i_val = 0;
    this->f_val = 0;
    this->d_val = 0;
}

Converter::Converter(Converter const &origin)
{
    (void)origin;
}

Converter& Converter::operator=(Converter const &origin)
{
    (void)origin;
    return (*this);
}

Converter::~Converter()
{
	
}

void Converter::print_float(int numZero, bool isDot)
{
	std::cout << "float: " << this->f_val;
	if (isDot == true)
		std::cout << '.';
	for (int i=0; i<numZero; i++)
		std::cout << '0';
	std::cout << 'f' << std::endl;
}

void Converter::print_double(int numZero, bool isDot)
{
	std::cout << "double: " << this->d_val;
	if (isDot == true)
		std::cout << '.';
	for (int i=0; i<numZero; i++)
		std::cout << '0';
	std::cout << std::endl;
}

void Converter::convert(std::string input)
{
	int numZero = 0;
	bool isDot = false;

    if (this->input_checker(input.c_str()) == false)
    {
        std::cout << "plz check your input" << std::endl;
        return ;
    }
	if (input == "nan" || input == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	else if (input == "+inf" || input == "+inff" || input == "inf" || input == "inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;
	}
	else if (input == "-inf" || input == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;		
	}
	else
	{
		if (finder(input, "f") == true)
			input.replace(input.find("f"), 1, "");
		std::stringstream toFloat(input);
		toFloat >> this->f_val;
		if (toFloat.fail() == true)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;
		}
		std::cout << std::setprecision(input.length());

		for (int i=input.length() - 1; i>0; i--)
		{
			if (input[i] == '0')
				numZero++;
			else
			{
				if (input[i] == '.')
					isDot = true;
				break ;
			}
		}

		this->d_val = static_cast<double>(this->f_val);
		if (d_val > INT_MAX || d_val < INT_MIN)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			print_float(numZero, isDot);
			print_double(numZero, isDot);
			return ;
		}
		else
		{
			if (d_val == 0)
			{
				std::cout << "char: Non displayable" << std::endl;
				std::cout << "int: 0" << std::endl;
				std::cout << "float: 0.0f" << std::endl;
				std::cout << "double: 0.0" << std::endl;
				return ;
			}

			this->i_val = static_cast<int>(this->f_val);
			if (i_val < 32 || i_val > 126)
			{
				std::cout << "char: Non displayable" << std::endl;
				std::cout << "int: " << this->i_val << std::endl;
				print_float(numZero, isDot);
				print_double(numZero, isDot);
				return ;
			}
			else
			{
				this->c_val = static_cast<char>(this->i_val);
				std::cout << "char: '" << this->c_val << "'" << std::endl;
				std::cout << "int: " << this->i_val << std::endl;
				print_float(numZero, isDot);
				print_double(numZero, isDot);
				return ;
			}
		}
	}
}