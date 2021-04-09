/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:50:09 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 21:52:58 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public : 
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &origin);
		virtual ~NinjaTrap();
		NinjaTrap &operator=(const NinjaTrap &origin);

		void			ninjaShoebox(ClapTrap &clap);
		void			ninjaShoebox(NinjaTrap &ninja);
		void			ninjaShoebox(ScavTrap &scav);
		void			ninjaShoebox(FragTrap &Frag);
};

#endif