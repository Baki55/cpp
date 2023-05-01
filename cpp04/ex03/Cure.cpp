/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:12:06 by bkhatib           #+#    #+#             */
/*   Updated: 2023/05/01 12:14:13 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {}

Cure::Cure( Cure const & src ) : AMateria("cure")
{
	*this = src;
}

Cure&	Cure::operator=( const Cure& rhs )
{
	if(this != &rhs)
		this->type = rhs.type;
	return(*this);
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
	return(new Cure(*this));
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}