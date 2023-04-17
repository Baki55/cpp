/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:13:11 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/17 19:23:03 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor called." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Second constructor called." << std::endl;
}

Animal::Animal(Animal &rhs)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = rhs;
}

Animal::~Animal()
{
	std::cout << "Default constructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "Copy assignement operator called." << std::endl;
	this->type = rhs.type;
}