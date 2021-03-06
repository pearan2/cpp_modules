/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:42:52 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 14:14:12 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>
# include <algorithm>

class Pony
{
	private :
		std::string name;
	public :
		//Constructor
		Pony();
		Pony(std::string name);
		
		//Destroyer
		~Pony();

		//setter
		void		setName(std::string name);
		//getter
		std::string getName(void);

		//
		void		sayName(void);
};

#endif