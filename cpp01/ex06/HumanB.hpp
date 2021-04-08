/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:33:32 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 18:38:41 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private :
		std::string name;
		//여기서 굳이 포인터로 만들어지는 이유는, 래퍼런스인 경우 기본생성자의 초기값이 없기때문이다.
		Weapon	*weapon;
	public : 
		HumanB();
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		void attack();
		void setType(std::string type);
		void setWeapon(Weapon &weapon);
};

#endif