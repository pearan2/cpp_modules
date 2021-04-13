/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:42:42 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 20:58:47 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public :
		RadScorpion();
		RadScorpion(const RadScorpion& origin);
		RadScorpion& operator=(const RadScorpion& origin);
		virtual ~RadScorpion();
};

#endif
