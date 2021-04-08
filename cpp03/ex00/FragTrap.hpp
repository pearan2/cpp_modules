/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:53:31 by honlee            #+#    #+#             */
/*   Updated: 2021/04/09 00:13:32 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>

class FragTrap
{
	private :
		unsigned int	hitPoint;
		unsigned int	maxHitPoint;
		unsigned int	energyPoint;
		unsigned int	maxEnergyPoint;
		unsigned int	level;
		std::string		name;
		unsigned int	meleeAttackDamage;
		unsigned int	rangedAttackDamage;
		unsigned int	armorDamageReduction;
	
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		//virtual 키워드를 쓰는 이유는, 특정한 경우에 부모를 상속한 자식 클레스의 소멸자가 호출되지 않는
		//경우가 있는데, 이를 막아주기 위해 사용한다.
		virtual ~FragTrap();
		FragTrap &operator=(const FragTrap& origin);

		void	rangeAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const &target);
};

#endif