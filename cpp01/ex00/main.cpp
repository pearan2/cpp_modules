/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:42:47 by honlee            #+#    #+#             */
/*   Updated: 2021/04/07 23:53:48 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int		main()
{
	Pony stack_pony = ponyOnTheStack();
	std::cout << stack_pony.name << std::endl;

	Pony *heap_pony = ponyOnTheHeap();
	std::cout << heap_pony->name << std::endl;

	delete stack_pony;
	
}