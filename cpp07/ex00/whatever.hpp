/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 14:11:59 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 15:42:13 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHAREVER_HPP
# define WHAREVER_HPP

template <typename T>
void	swap(T& t1, T& t2)
{
	T temp = t1;
	t1 = t2;
	t2 = temp;
}

template <typename T>
T&		min(T& t1, T& t2)
{
	if (t1 < t2)
		return (t1);
	return (t2);
}

template <typename T>
T&		max(T& t1, T& t2)
{
	if (t1 > t2)
		return (t1);
	return (t2);
}

#endif