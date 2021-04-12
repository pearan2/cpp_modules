/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:28:14 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 13:47:43 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
	protected :
		std::string name;
		int			apcost;
		int			damage;
		AWeapon();
	public :
		//form
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &origin);
		AWeapon& operator=(const AWeapon &origin);
		virtual ~AWeapon();

		//getter
		std::string		getName();
		int				getApcost();
		int				getDamage();

		//override func
		virtual void	attack() const = 0;
};

#endif