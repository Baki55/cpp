/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:13:11 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/27 15:25:12 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal second constructor called." << std::endl;
}

Animal::Animal(Animal &rhs)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = rhs;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal copy assignement operator called." << std::endl;
	this->type = rhs.type;
	return(*this);
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string	Animal::getType() const
{
	return(this->type); 
}