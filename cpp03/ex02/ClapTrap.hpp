/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:47:57 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 21:34:36 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <time.h>
# include <stdlib.h>

class ClapTrap
{
	//protected for public
	protected :
		unsigned int	hitPoint;
		unsigned int	maxHitPoint;
		unsigned int	energyPoint;
		unsigned int	maxEnergyPoint;
		unsigned int	level;
		std::string		type;
		std::string		name;
		unsigned int	meleeAttackDamage;
		unsigned int	rangedAttackDamage;
		unsigned int	armorDamageReduction;
	
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(unsigned int		hitPoint,
				unsigned int		maxHitPoint,
				unsigned int		energyPoint,
				unsigned int		maxEnergyPoint,
				unsigned int		level,
				std::string			type,
				std::string			name,
				unsigned int		meleeAttackDamage,
				unsigned int		rangedAttackDamage,
				unsigned int		armorDamageReduction
				);
		ClapTrap(const ClapTrap& origin);
		virtual ~ClapTrap();
		ClapTrap &operator=(const ClapTrap& origin);

		void	showHitPoint(void);
		void	rangeAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif