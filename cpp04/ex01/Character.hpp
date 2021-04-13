/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:56:20 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 21:58:32 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private :
		std::string name;
		int ap;
		AWeapon *weapon;
	public :
		Character();
		Character(std::string const &name);
		Character(const Character& origin);
		Character& operator=(const Character& origin);		
		virtual ~Character();
		
		void recoverAP();
		void equip(AWeapon *weapon);
		void attack(Enemy *enemy);
		std::string getName() const;
		int			getAP() const;
		AWeapon		*getWeapon() const;
};

std::ostream &operator<<(std::ostream &out, const Character &character);

#endif
