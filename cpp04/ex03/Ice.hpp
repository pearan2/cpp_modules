/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:49:05 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 20:49:22 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(Ice const &origin);
		Ice& operator=(Ice const &origin);
		virtual ~Ice();

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif