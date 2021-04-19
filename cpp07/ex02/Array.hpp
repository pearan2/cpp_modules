/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:22:38 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 16:29:44 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	private : 
		unsigned int const len;
		T *arr;
	public :
		Array()
		{
			this->arr = new T;
		}
		Array(unsigned int n)
		{
			this->arr = new T[n];
		}
		Array(Array const &origin) : len(origin.len)
		{
			this->arr = new T[origin.len];
			for (unsigned int i=0; i<origin.len; i++)
				this->arr[i] = origin->arr[i];
		}
		Array& operator=(Array const &origin)
		{
			this->arr = new T[origin.len];
			for (unsigned int i=0; i<origin.len; i++)
				this->arr[i] = origin->arr[i];
		}
};

#endif