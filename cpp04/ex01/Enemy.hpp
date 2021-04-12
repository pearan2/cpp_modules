/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:53:20 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 22:07:05 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	protected :
		int					hp;
		std::string			type;
		Enemy();
	public :
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &origin);
		virtual ~Enemy();
		Enemy& operator=(const Enemy &origin);
		
		//getter
		std::string getType() const;
		int			getHP() const;

		//for overide
		virtual void	takeDamage(int value);
};

#endif