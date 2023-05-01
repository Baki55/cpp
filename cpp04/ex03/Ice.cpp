/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:17:28 by bkhatib           #+#    #+#             */
/*   Updated: 2023/05/01 12:38:47 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice( Ice const & src ) : AMateria("ice")
{
	*this = src;
}

Ice&   Ice::operator=( const Ice& rhs )
{
	if(this != &rhs)
		this->type = rhs.type;
	return(*this);
}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
