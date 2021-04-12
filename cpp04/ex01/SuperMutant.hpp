/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:42:42 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 20:59:06 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public :
		SuperMutant();
		SuperMutant(const SuperMutant& origin);
		SuperMutant& operator=(const SuperMutant& origin);
		virtual ~SuperMutant();

		virtual void	takeDamage(int value);
};

#endif