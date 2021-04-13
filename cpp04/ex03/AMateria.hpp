/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:22:54 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 16:44:38 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class AMateria
{
	private	:
		AMateria();

	protected	:
		std::string		type;
		unsigned int	xp;
	
	public :
		AMateria(std::string const &type);
		AMateria(const AMateria& origin);
		AMateria& operator=(const AMateria& origin);
		virtual ~AMateria();
		
		std::string const &getType() const;
		unsigned int getXP() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif