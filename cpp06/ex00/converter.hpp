/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:22:54 by honlee            #+#    #+#             */
/*   Updated: 2021/04/15 22:32:16 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <math.h>

class Converter
{
	private :
		std::string		input;
		char			c_val;
		int				i_val;
		float			f_val;
		double			d_val;
		
		Converter();
		void MakeOthersFromInt();
		void MakeOthersFromFloat();
		void MakeOthersFromDouble();
	public	:
		Converter(std::string const &input);
		Converter(Converter const &origin);
		Converter& operator=(Converter const &origin);
};

std::ostream &operator<<(std::ostream &out, Converter const &conv);

#endif