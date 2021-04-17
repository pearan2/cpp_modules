/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:22:54 by honlee            #+#    #+#             */
/*   Updated: 2021/04/17 17:15:29 by honlee           ###   ########seoul.kr  */
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
		void print_float(int numZero, bool isDot);
		void print_double(int numZero, bool isDot);
	
	public	:
		Converter();
		Converter(Converter const &origin);
		Converter& operator=(Converter const &origin);
		void convert(std::string input);
		virtual ~Converter();
};

std::ostream &operator<<(std::ostream &out, Converter const &conv);

#endif