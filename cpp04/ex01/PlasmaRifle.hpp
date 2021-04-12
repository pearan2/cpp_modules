/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:40:14 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 13:52:40 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public :
		//form
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &origin);
		PlasmaRifle &operator=(const PlasmaRifle &origin);
		virtual ~PlasmaRifle();

		//overidding
		virtual void	attack() const;
};

#endif