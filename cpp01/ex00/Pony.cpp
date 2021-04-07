/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:46:47 by honlee            #+#    #+#             */
/*   Updated: 2021/04/07 23:51:11 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony	*ponyOnTheHeap(void)
{
	Pony	*ret;

	ret = new Pony();
	ret->name = "heap pony";
	return (ret);
}

Pony	ponyOnTheStack(void)
{
	Pony	ret;

	ret.name = "stack pony";
	return (ret);
}