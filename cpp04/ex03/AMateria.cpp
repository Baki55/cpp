/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:05:25 by bkhatib           #+#    #+#             */
/*   Updated: 2023/05/01 12:08:30 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria( void ) : type("") {}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "AMateria " << this->type << " created" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria " << this->type << " destroyed" << std::endl;
}

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