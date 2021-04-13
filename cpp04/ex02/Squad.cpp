/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:48:43 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 16:18:45 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	this->count = 0;
	this->marines = NULL;	
}

Squad::Squad(const Squad& origin)
{
	this->count = 0;
	for(int i=0; i<origin.count; i++)
		this->push(origin.marines[i]->clone());
}

Squad& Squad::operator=(const Squad& origin)
{
	if (this->marines != NULL)
	{
		for (int i=0; i<this->count; i++)
			delete this->marines[i];
		delete this->marines;
	}
	this->count = 0;
	for(int i=0; i<origin.count; i++)
		this->push(origin.marines[i]->clone());
	return (*this);
}

Squad::~Squad()
{
	std::cout << "destructor called | count : " << this->count << std::endl;
	for(int i=0; i<this->count; i++)
	{
		std::cout << i << " deleted >> ";
		delete this->marines[i];
	}
	delete this->marines;
}

int			Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine	*Squad::getUnit(int idx) const
{
	if (idx < 0 || idx >= this->count || this->marines == NULL)
		return (NULL);
	return (this->marines[idx]);
}

int				Squad::push(ISpaceMarine *marine)
{
	if (marine == NULL)
		return (this->count);
	for (int i=0; i<this->count; i++)
		if (marine == this->marines[i])
			return (this->count);

	ISpaceMarine	**temp;

	temp = new ISpaceMarine* [this->count + 1];
	if (this->count != 0)
	{
		for (int i=0; i<this->count; i++)
			temp[i] = this->marines[i];
	}
	temp[this->count] = marine;
	delete (this->marines);
	this->marines = temp;
	this->count += 1;
	return (this->count);
}
