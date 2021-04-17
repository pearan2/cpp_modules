/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 21:06:53 by honlee            #+#    #+#             */
/*   Updated: 2021/04/17 22:28:52 by honlee           ###   ########seoul.kr  */
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
		if (dot_flag == true && dot_next_flag == false)
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

void Converter::print_float(std::string const &input, int from)
{
	if (i_val == 0 && from == 0)
	{
		std::cout << "float: 0.0f" << std::endl;
		return ;
	}

	if (from == 0)
		std::cout << "float: " << this->f_val << "f" << std::endl;
	else
		std::cout << "float: " << input << "f" << std::endl;
}

void Converter::print_double(std::string const &input, int from)
{
	if (i_val == 0 && from == 0)
	{
		std::cout << "double: 0.0" << std::endl;
		return ;
	}
	if (from == 0)
		std::cout << "double: " << this->d_val << std::endl;
	else
		std::cout << "double: " << input << std::endl;
}

void Converter::print_char_from_int(int value)
{
	if (value <= 127 && value >= 32)
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else if (value <= CHAR_MAX && value >= CHAR_MIN)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: Impossible" << std::endl; 
}

void Converter::fromChar(std::string const &input)
{
	std::stringstream toInt(input);
	toInt >> i_val;
	if (toInt.fail() == true)
	{
		std::cout << "convert to char int, plz check your input" << std::endl;
		return ;
	}
	c_val = static_cast<char>(i_val);
	f_val = static_cast<float>(i_val);
	d_val = static_cast<double>(i_val);
	if (i_val >= 32 && i_val <= 127)
	{
		std::cout << "char: '" << c_val << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c_val) << std::endl;
	}
	else
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(c_val) << std::endl;
	}
	print_float(input, 0);
	print_double(input, 0);
}

void Converter::fromInt(std::string const &input)
{
	std::stringstream toInt(input);
	toInt >> i_val;
	if (toInt.fail() == true)
	{
		std::cout << "convert to int is fail, plz check your input" << std::endl;
		return ;
	}
	c_val = static_cast<char>(i_val);
	f_val = static_cast<float>(i_val);
	d_val = static_cast<double>(i_val);
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: " << i_val << std::endl;
	print_float(input, 0);
	print_double(input, 0);
}

void Converter::fromFloat(std::string const &input)
{
	std::stringstream toFloat(input);
	toFloat >> f_val;
	if (toFloat.fail() == true)
	{
		std::cout << "convert to float is fail, plz check your input" << std::endl;
		return ;
	}

	if (f_val <= INT_MAX && f_val >= INT_MIN)
	{
		i_val = static_cast<int>(f_val);
		print_char_from_int(i_val);
		std::cout << "int: " << i_val << std::endl;
	}
	else
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
	}
	print_float(input, 1);
	d_val = static_cast<double>(f_val);
	print_double(input, 1);
}

void Converter::fromDouble(std::string const &input)
{	
	std::stringstream toDouble(input);
	toDouble >> d_val;
	if (toDouble.fail() == true)
	{
		std::cout << "convert to double is fail, plz check your input" << std::endl;
		return ;
	}

	if (d_val <= INT_MAX && d_val >= INT_MIN)
	{
		i_val = static_cast<int>(d_val);
		print_char_from_int(i_val);
		std::cout << "int: " << i_val << std::endl;
	}
	else
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
	}
	f_val = static_cast<double>(d_val);
	print_float(input, 2);
	print_double(input, 2);
}

void Converter::convert(std::string input)
{
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
		{
			input.replace(input.find("f"), 1, "");
			return (fromFloat(input));
		}
		else if (finder(input, ".") == true)
			return (fromDouble(input));
		else
		{
			if (input.length() > 10)
				return (fromDouble(input));
			else
			{
				long long int tempLL;
				std::stringstream toLL(input);
				toLL >> tempLL;
				if (toLL.fail() == true)
				{
					std::cout << "convert to longlong is fail, plz check your input" << std::endl;
					return ;
				}
				if (tempLL <= CHAR_MAX && tempLL >= CHAR_MIN)
					return (fromChar(input));
				else if (tempLL <= INT_MAX && tempLL >= INT_MIN)
					return (fromInt(input));
				else
					return (fromDouble(input));
			}
		}
	}
}