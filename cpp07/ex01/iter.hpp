/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:05:36 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 16:16:18 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <stdlib.h>

template <typename T>
void	iter(T *arr, size_t len, void (*fp)(T const &))
{
	if (arr == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		fp(arr[i]);
	return ;
}

#endif