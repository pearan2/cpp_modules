/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:45:38 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 12:22:47 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	protected :
		std::string name;
		Victim();
	public	:
		Victim(const std::string &name);
		Victim(const Victim &origin);
		Victim &operator=(const Victim &origin);
		virtual ~Victim();

		std::string getName() const;
		virtual void		getPolymorphed(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Victim &victim);

#endif