/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:37:09 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 22:46:34 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
	private :
		int				count;
		ISpaceMarine	**marines;
	
	public 	:
		Squad();
		Squad(const Squad& origin);
		Squad& operator=(const Squad& origin);
		virtual ~Squad();

		int		getCount(void) const;
		ISpaceMarine	*getUnit(int idx) const;
		int		push(ISpaceMarine *marine);
};
#endif