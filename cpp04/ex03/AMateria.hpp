/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:22:54 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 21:31:10 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

// 서로의 header 를 참조할 때
// https://stackoverflow.com/questions/396084/headers-including-each-other-in-c
// 아래와 같이 미리 명시해주어야 한다.
class ICharacter;
# include "ICharacter.hpp"
# include <iostream>
# include <string>

class AMateria
{
	protected	:
		std::string		type;
		unsigned int	xp;

	public :
		AMateria();
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
