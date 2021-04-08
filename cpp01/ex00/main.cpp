/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:42:47 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 14:42:10 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	std::cout << "in the ponyOnTheHeap" << std::endl;

	Pony *heap_pony = new Pony("heap_pony");
	heap_pony->sayName();
	delete heap_pony;
	return ;
}

void	ponyOnTheStack(void)
{
	std::cout << "in the ponyOnTheStack" << std::endl;

	Pony stack_pony("stack_pony");
	stack_pony.sayName();
	return ;
}

int		main()
{
	ponyOnTheStack();

	std::cout << "---------------------------------" << std::endl;

	ponyOnTheHeap();
}