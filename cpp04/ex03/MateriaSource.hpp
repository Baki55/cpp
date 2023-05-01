/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:25:39 by bkhatib           #+#    #+#             */
/*   Updated: 2023/05/01 12:27:17 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*materias[4];

public:
	MateriaSource();
	~MateriaSource();

	MateriaSource(MateriaSource const &);
	MateriaSource&  operator=(MateriaSource const &);

	AMateria	*getMateria(std::string const & type);
	AMateria	*createMateria(std::string const & type);
	void	learnMateria(AMateria*);
};


#endif