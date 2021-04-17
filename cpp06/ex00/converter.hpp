/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:22:54 by honlee            #+#    #+#             */
/*   Updated: 2021/04/17 22:14:07 by honlee           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <math.h>
# include <iomanip>

class Converter
{
	private :
		char			c_val;
		int				i_val;
		float			f_val;
		double			d_val;
		
		bool input_checker(const char *str);
		bool finder(std::string const &input, const char *str);
		void print_char_from_int(int value);
		void print_float(std::string const &input, int zero_one_two);
		void print_double(std::string const &input, int zero_one_two);
	
		void fromChar(std::string const &input);
		void fromFloat(std::string const &input);
		void fromInt(std::string const &input);
		void fromDouble(std::string const &input);
	public	:
		Converter();
		Converter(Converter const &origin);
		Converter& operator=(Converter const &origin);
		void convert(std::string input);
		virtual ~Converter();
};

std::ostream &operator<<(std::ostream &out, Converter const &conv);

#endif