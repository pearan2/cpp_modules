/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:13:40 by honlee            #+#    #+#             */
/*   Updated: 2021/04/13 17:16:56 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria *amaterias[4];
	public :
		MateriaSource();
		MateriaSource(MateriaSource const &origin);
		MateriaSource& operator=(MateriaSource const &origin);
		virtual ~MateriaSource();

		void	learnMateria(AMateria *ama);
		AMateria* createMateria(std::string const &type);
};

#endif