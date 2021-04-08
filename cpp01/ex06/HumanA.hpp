/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:16:02 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 18:37:25 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private :
		std::string name;
		//여기서 굳이 포인터로 만들어지는 이유는, 래퍼런스인 경우 기본생성자의 초기값이 없기때문이다.
		Weapon	*weapon;
	public : 
		HumanA();
		HumanA(std::string name);
		HumanA(std::string name, Weapon &weapon);
		void setType(std::string type);
		void attack();
};

#endif