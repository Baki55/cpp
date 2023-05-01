/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:05:25 by bkhatib           #+#    #+#             */
/*   Updated: 2023/05/01 12:36:30 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : type("") {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria::~AMateria(void) {}

std::string const & AMateria::getType() const
{
	return(this->type);
}

AMateria* AMateria::clone() const
{
	return (AMateria*)this;
}

void	AMateria::use( ICharacter& target )
{
	std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}