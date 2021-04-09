/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:41:33 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 22:55:04 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public :
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap &origin);
		virtual ~SuperTrap();
		SuperTrap & operator=(const SuperTrap &origin);

		void	rangeAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
};

#endif
