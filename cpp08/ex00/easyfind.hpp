/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 21:54:09 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 22:47:31 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &con, int value)
{
	for (typename T::iterator iter = con.begin(); iter != con.end(); iter++)
		if (*iter == value)
			return (iter);
	return (con.end());
}

#endif