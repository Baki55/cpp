/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:18:05 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/18 18:33:36 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << this->type << " Default constructor (WrongAnimal) constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal " << this->type << " Second constructor (WrongAnimal) called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return(this->type);
}