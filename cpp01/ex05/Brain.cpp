/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:29:22 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 18:07:56 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <stdio.h>

Brain::Brain()
{
	
}

Brain::~Brain()
{
	std::cout << "brain destroyed" << std::endl;
}

std::string		Brain::identify()
{
	std::stringstream toAdd;
	toAdd << this;
	return (toAdd.str());
}