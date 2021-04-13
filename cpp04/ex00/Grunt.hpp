/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Grunt.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 04:27:35 by honlee            #+#    #+#             */
/*   Updated: 2021/04/14 04:28:16 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRUNT_HPP
# define GRUNT_HPP

# include "Victim.hpp"

class Grunt : public Victim
{
	private : 
		Grunt();

	public :
		Grunt(const std::string &name);
		Grunt(const Grunt &origin);
		virtual ~Grunt();
		Grunt& operator=(const Grunt &origin);

		virtual void	getPolymorphed() const;
};

#endif