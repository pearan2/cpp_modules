/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:16:02 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 20:55:03 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private :
		std::string name;
		Weapon	&weapon;
	public : 
		HumanA(std::string name, Weapon &weapon);
		void setType(std::string type);
		void attack();
};

#endif