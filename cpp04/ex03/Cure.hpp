/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:08:55 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 19:12:25 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(Cure const &origin);
		Cure& operator=(Cure const &origin);
		virtual ~Cure();

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif