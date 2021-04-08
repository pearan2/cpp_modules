/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:10:04 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 18:56:36 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	private :
		std::string type;
	public :
		Weapon();
		Weapon(std::string type);
		~Weapon();
		
		const std::string& getType();
		void setType(const std::string& type);
};

#endif