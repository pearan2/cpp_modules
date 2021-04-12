/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:48:43 by honlee            #+#    #+#             */
/*   Updated: 2021/04/12 23:28:34 by honlee           ###   ########.fr       */
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
	for(int i=0; i<this->count; i++)
		delete this->marines[i];
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
	ISpaceMarine	**temp;

	if (this->marines == NULL)
	{
		this->marines = new ISpaceMarine*[1];
		this->marines[0] = marine;
	}
	else
	{
		temp = new ISpaceMarine*[++this->count];
		for(int i=0; i<this->count - 1; i++)
			temp[i] = this->marines[i];
		temp[this->count - 1] = marine;
		delete this->marines;
		this->marines = temp;
	}
	return (this->count);
}