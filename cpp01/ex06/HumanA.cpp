/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:19:56 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 21:02:01 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//name(name) -> name 맴버변수를 input 으로 들어온 name 으로 초기화 하라는 뜻.
//이런 표현을 초기화 리스트라고 한다.
//초기화 리스트를 사용하는 경우, 생성자가 호출 될 때, 객체의 생성과 초기화가 동시에 일어난다.
//하지만 함수 내부에서 초기화 할경우, 디폴트 생성자를 통해 이미 객체가 생성된 후에, 다시 
//유저가 만든 생성자로 들어가기 때문에, 2단계를 거치게 되어 오버헤드가 발생한다.
//여기서는 디폴트 생성자에서는 레퍼런스가 생성과 동시에 초기화되지 않기때문에 레퍼런스를 초기화시켜주기위해
//초기화 리스트 표현을 사용 할 수 밖에없다.
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	
}

void		HumanA::setType(std::string type)
{
	this->weapon.setType(type);
}

void		HumanA::attack()
{
	std::cout << this->name << "attacks with his " << this->weapon.getType() << std::endl;
}