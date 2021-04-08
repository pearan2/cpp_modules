/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:01:54 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 18:05:36 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	
}

Human::~Human()
{
	std::cout << "Human destroyed" << std::endl;
}

std::string Human::identify()
{
	return (this->brain.identify());
}

Brain&	Human::getBrain()
{
	return (this->brain);
}