/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:36:15 by honlee            #+#    #+#             */
/*   Updated: 2021/04/15 22:59:39 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <sstream>
# include <math.h>

bool		input_checker(char *str)
{
	int		idx = -1;
	bool	dot_flag = false;
	bool	dot_next_flag = false;
	bool	f_flag = false;
	std::string sstr(str);
	if (sstr == "nan" || sstr == "+inf" || sstr == "-inf"
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
				if (f_flag == false && dot_next_flag == true)
					f_flag = true;
				else
					return (false);
			}
			else if (c == '.')
			{
				if (dot_flag == false)
					dot_flag = true;
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
		return (true);
	}
}

int			main(int ac, char **av)
{
	if (ac != 2 || input_checker(av[1]) == false)
	{
		std::cerr << "plz check your input" << std::endl;
		return (1);
	}
	std::cout << "pass check input" << std::endl;
	return (0);
}