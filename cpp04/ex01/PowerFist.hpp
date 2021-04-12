/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:40:14 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 13:51:35 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public :
		//form
		PowerFist();
		PowerFist(const PowerFist &origin);
		PowerFist &operator=(const PowerFist &origin);
		virtual ~PowerFist();

		//overidding
		virtual void	attack() const;
};

#endif