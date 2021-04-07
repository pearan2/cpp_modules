/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:42:52 by honlee            #+#    #+#             */
/*   Updated: 2021/04/07 23:51:36 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>
# include <algorithm>

class Pony
{
	public :
		std::string name;
		int			age;
};

Pony	*ponyOnTheHeap(void);
Pony	ponyOnTheStack(void);

#endif