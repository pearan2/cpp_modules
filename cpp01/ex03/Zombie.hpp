/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:51:00 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 15:03:14 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private :
		std::string type;
		std::string name;
	public	:
		Zombie();
		Zombie(std::string type, std::string name);

		~Zombie();

		void announce(void);
};

#endif