/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:57:13 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/18 16:13:34 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog &rhs)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = rhs;
}

Dog::~Dog()
{
	std::cout << "Default dog destructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Copy assignement operator called." << std::endl;
	this->type = rhs.type;
	return(*this);
}

void	Dog::makeSound() const
{
	std::cout << "Waf Waf :)" << std::endl;
}