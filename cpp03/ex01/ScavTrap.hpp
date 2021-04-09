/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:18:42 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 20:32:51 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <time.h>
# include <stdlib.h>


class ScavTrap
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
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		//virtual 키워드를 쓰는 이유는, 특정한 경우에 부모를 상속한 자식 클레스의 소멸자가 호출되지 않는
		//경우가 있는데, 이를 막아주기 위해 사용한다.
		virtual ~ScavTrap();
		ScavTrap &operator=(const ScavTrap& origin);

		void	showHitPoint(void);
		void	rangeAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer(std::string const &target);
};

#endif