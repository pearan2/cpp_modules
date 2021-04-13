/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:08:38 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 04:28:08 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	private : 
		Peon();

	public :
		Peon(const std::string &name);
		Peon(const Peon &origin);
		virtual ~Peon();
		Peon& operator=(const Peon &origin);

		virtual void	getPolymorphed() const;
};

#endif