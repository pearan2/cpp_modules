/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:48:10 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 16:59:26 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private	:
		Character();

		std::string name;
		AMateria *inventory[4];

	public :
		Character(std::string const &name);
		Character(Character const &origin);
		Character& operator=(Character const &origin);
		virtual ~Character();

		std::string const &getName() const;

		void equip(AMateria *ama);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif