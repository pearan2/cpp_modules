/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poen.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:08:38 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 12:23:41 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POEN_HPP
# define POEN_HPP

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