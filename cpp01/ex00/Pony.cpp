/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:46:47 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 14:01:50 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	this->name = "basic pony";
}

Pony::Pony(std::string name)
{
	this->name = name;
}

Pony::~Pony()
{
	std::cout << this->name << " destroyed" << std::endl;
}

std::string Pony::getName(void)
{
	return (this->name);
}

void	Pony::setName(std::string name)
{
	this->name = name;
}

void	Pony::sayName(void)
{
	std::cout << "Hi !! I'm " << this->name << std::endl;
}