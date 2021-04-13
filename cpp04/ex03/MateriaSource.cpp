/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:17:08 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 21:05:43 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i=0; i<4; i++)
		this->amaterias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &origin)
{
	for (int i=0; i<4; i++)
	{
		if (origin.amaterias[i] != NULL)
			this->amaterias[i] = origin.amaterias[i]->clone();
		else
			this->amaterias[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const &origin)
{
	for (int i=0; i<4; i++)
		delete this->amaterias[i];

	for (int i=0; i<4; i++)
	{
		if (origin.amaterias[i] != NULL)
			this->amaterias[i] = origin.amaterias[i]->clone();
		else
			this->amaterias[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i=0; i<4; i++)
		delete this->amaterias[i];
}

void		MateriaSource::learnMateria(AMateria *ama)
{
	if (ama == NULL)
		return ;
	for (int i=0; i<4; i++)
		if (this->amaterias[i] == ama)
			return ;
	for (int i=0; i<4; i++)
	{
		if (this->amaterias[i] == NULL)
		{
			this->amaterias[i] = ama;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i=0; i<4; i++)
	{
		if (this->amaterias[i] != NULL && this->amaterias[i]->getType() == type)
			return (this->amaterias[i]->clone());
	}
	return (NULL);
}
