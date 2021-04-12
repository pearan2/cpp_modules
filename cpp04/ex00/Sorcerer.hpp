/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 09:32:59 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 12:16:40 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"

class Sorcerer
{
	private :
		std::string name;
		std::string title;

		Sorcerer(); // name 과 title 없이 생성되는 기본 생성자를 못쓰게 하기 위해서
	public : 
		Sorcerer(const std::string &name, const std::string &title);
		Sorcerer(const Sorcerer &origin);
		Sorcerer &operator=(const Sorcerer& origin);
		virtual ~Sorcerer();

		std::string getName() const;
		std::string getTitle() const;
		void	polymorph(const Victim &victim);
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif